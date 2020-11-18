// { [root, t] -> [(1 + root + t)] }
module affine_controller__U489(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U491(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U485__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U496(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U498(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U492__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U503(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U505(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U499__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U510(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U512(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U506__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U517(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U519(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U513__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U524(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U526(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U520__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U580(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U582(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U576__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U624(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U626(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U620__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U631(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U633(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U627__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U638(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U640(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U634__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U645(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U647(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U641__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U652(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U654(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U648__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U659(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U661(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U655__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U686(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U688(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U682__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U693(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U695(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U689__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U700(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U702(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U696__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U707(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U709(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U703__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U714(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U716(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U710__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U721(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U723(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U717__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U748(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U750(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U744__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U755(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U757(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U751__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U762(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U764(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U758__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U769(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U771(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U765__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U776(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U778(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U772__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U783(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U785(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U779__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U810(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U812(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U806__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U821(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U823(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U817__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U828(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U830(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U824__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U835(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U837(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U831__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U848(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U850(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U844__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U855(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U857(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U851__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U862(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U864(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U858__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

// { [root, t] -> [(1 + root + t)] }
module affine_controller__U869(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module affine_controller__U871(input clk, input flush, input rst_n, output logic [15:0] d[1:0], output valid );
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
module cgralib_Mem_amber__IDsreg__U865__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

