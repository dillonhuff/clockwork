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
module cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U52__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U55__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U96__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U154__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U157__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
  cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U185__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U188__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U216__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U219__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U241__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U248__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U251__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U254__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port = 1;
  cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo;
  logic cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port;
  assign cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.d[1]));
  assign cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port = 1;

  logic [15:0] SRAM [1023:0];
  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    data_out_0_tmp <= SRAM[cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_ibo];
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0.valid && cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_rd_0_enable_this_port;
    if (cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0.valid && cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_enable_this_port) begin
      SRAM[cgralib_Mem_amber__IDsreg__U263__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16_wr_0_ibo] <= data_in_0;
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
endmodule

