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
// { op_hcompute_hw_output_stencil[root, hw_output_s0_y_yi, hw_output_s0_x_xi] -> [(415 + 64hw_output_s0_y_yi + hw_output_s0_x_xi)] }
module affine_controller__U7(input clk, input flush, input rst_n, output logic [15:0] d[2:0], output valid );
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
      if(counter[0] ==414) begin
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
// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(132 + root + t)] }
module cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U34__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(67 + root + t)] }
module cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==66) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U37__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(131 + root + t)] }
module cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==130) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U40__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(130 + root + t)] }
module cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==129) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U43__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(68 + root + t)] }
module cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==67) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U46__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(66 + root + t)] }
module cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==65) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U49__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(14 + root + t)] }
module cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==13) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U101__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(133 + root + t)] }
module cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U141__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(132 + root + t)] }
module cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U144__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(131 + root + t)] }
module cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==130) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U147__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(69 + root + t)] }
module cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==68) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U150__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(68 + root + t)] }
module cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==67) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U153__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(67 + root + t)] }
module cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==66) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U156__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(133 + root + t)] }
module cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U179__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(132 + root + t)] }
module cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U182__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(131 + root + t)] }
module cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==130) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(69 + root + t)] }
module cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==68) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(68 + root + t)] }
module cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==67) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U191__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(67 + root + t)] }
module cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==66) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U194__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(133 + root + t)] }
module cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U217__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(132 + root + t)] }
module cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U220__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(131 + root + t)] }
module cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==130) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U223__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(69 + root + t)] }
module cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==68) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U226__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(68 + root + t)] }
module cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==67) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U229__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(67 + root + t)] }
module cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==66) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U232__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(130 + root + t)] }
module cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==129) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U255__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(66 + root + t)] }
module cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==65) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U262__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(132 + root + t)] }
module cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U265__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(68 + root + t)] }
module cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==67) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U268__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(139 + root + t)] }
module cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==138) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U277__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(138 + root + t)] }
module cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==137) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U280__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(137 + root + t)] }
module cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U283__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
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
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
// { [root, t] -> [(11 + root + t)] }
module cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
  logic [15:0] counter[2:0];
  logic on;
  logic on2;
  integer i;
  integer dims = 2;
  assign valid =(on && on2 && d[0]==0 && d[1]<=65355);
  always @(posedge clk or negedge rst_n) begin
    if (~rst_n) begin
      d[0]<= 16'b1010101010101010;
      counter[0] <= 16'b0;
      d[1]<= 16'b1010101010101010;
      counter[1] <= 16'b0;
      on <=0;
      on2 <= 0;
    end else begin
      if(counter[0] ==10) begin
        on <=1;
        on2 <= 1;
        d[0]<= 16'b0;
        counter[0] <= counter[0]+1;
        d[1]<= 16'b0;
        counter [1] <= 16'b0;
      end else begin
        counter[0] <= counter[0] + 1;
        if(counter[1] == 0) begin
          counter[1]<= 0;
          d[1] <= d[1] + 1;
          on2 <= 1;
        end else begin
          counter[1] <= counter[1] + 1;
          on2 <= 0;
        end
      end
    end
  end
endmodule
module cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write_ctrl cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write(.clk(clk), .rst_n(rst_n));
  cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read_ctrl cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read(.clk(clk), .rst_n(rst_n));

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.d[1]];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_read.valid;
    if (cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.valid) begin
      SRAM[cgralib_Mem_amber__IDsreg__U286__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_fsm_write.d[1]] <= data_in_0;
    end
  end
  assign data_out_0 = data_out_0_tmp;
  assign chain_data_out = 16'b0;
endmodule

