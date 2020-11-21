// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
// { [root, t] -> [(64 + root + t)] }
module cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==63) begin
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
// { [root, t] -> [(128 + root + t)] }
module cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==127) begin
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
module cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,output logic [15:0] data_out_1,output data_out_1_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[1]));
  cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo;
  assign cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo = ((1*cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[1]));
  cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[1]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[9]) begin
    data_out_1_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end else begin
    data_out_1_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end
    data_out_1_valid <= cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.valid;
    if (cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U489__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = data_out_1_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
// { [root, t] -> [(64 + root + t)] }
module cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==63) begin
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
// { [root, t] -> [(128 + root + t)] }
module cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==127) begin
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
module cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,output logic [15:0] data_out_1,output data_out_1_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[1]));
  cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo;
  assign cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo = ((1*cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[1]));
  cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[1]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[9]) begin
    data_out_1_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end else begin
    data_out_1_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end
    data_out_1_valid <= cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.valid;
    if (cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U602__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = data_out_1_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
// { [root, t] -> [(64 + root + t)] }
module cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==63) begin
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
// { [root, t] -> [(128 + root + t)] }
module cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==127) begin
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
module cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,output logic [15:0] data_out_1,output data_out_1_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[1]));
  cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo;
  assign cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo = ((1*cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[1]));
  cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[1]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[9]) begin
    data_out_1_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end else begin
    data_out_1_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end
    data_out_1_valid <= cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.valid;
    if (cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U630__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = data_out_1_tmp;
endmodule

// { [root, t] -> [(1 + root + t)] }
module cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
// { [root, t] -> [(64 + root + t)] }
module cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==63) begin
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
// { [root, t] -> [(128 + root + t)] }
module cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
      if(counter[0] ==127) begin
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
module cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,output logic [15:0] data_out_0,output data_out_0_valid,output logic [15:0] data_out_1,output data_out_1_valid,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ctrl cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.d[1]));
  cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ctrl cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo;
  assign cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo = ((1*cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.d[1]));
  cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ctrl cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0(.clk(clk), .rst_n(rst_n));
  logic [15:0] cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo;
  assign cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo = ((1*cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.d[1]));

  logic [15:0] SRAM_BANK_0 [512:0];
  logic [15:0] SRAM_BANK_1 [512:0];
  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    if (cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[9]) begin
    data_out_0_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end else begin
    data_out_0_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0_ibo[8:0]];
    end
    data_out_0_valid <= cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_0.valid;
    if (cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[9]) begin
    data_out_1_tmp <= SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end else begin
    data_out_1_tmp <= SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1_ibo[8:0]];
    end
    data_out_1_valid <= cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_rd_1.valid;
    if (cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0.valid) begin
      if (cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[9]) begin
        SRAM_BANK_0[cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end else begin
        SRAM_BANK_1[cgralib_Mem_amber__IDsreg__U658__has_external_addrgenFalse__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs2__use_prebuilt_memFalse__width16_wr_0_ibo[8:0]] <= data_in_0;
      end
    end
  end
  assign chain_data_out = 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = data_out_1_tmp;
endmodule

module cgralib_Mem_amber__IDsreg__U705__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDsreg__U738__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDsreg__U767__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_0;
    data_out_0_tmp <= SRAM[read_addr_0];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
  end
  assign chain_data_out = chain_ren ? data_out_0_tmp : 512;
  assign data_out_0 = chain_data_out;
endmodule

