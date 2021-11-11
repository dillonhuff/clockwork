  // min: { [2] }
  // max: { [785] }

  // min: { [8009] }
  // max: { [15315] }

  // min: { [8009] }
  // max: { [15315] }

  // min: { [1] }
  // max: { [7200] }

  // min: { [2] }
  // max: { [217] }

  // min: { [16017] }
  // max: { [18368] }

  // min: { [8009] }
  // max: { [15315] }

  // min: { [2] }
  // max: { [785] }

  // min: { [2] }
  // max: { [785] }

  // sched min: { [1] }
  // sched max: { [18368] }
module cgralib_Mem_amber__IDconv_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,input [15:0] data_in_1,input [15:0] write_addr_1,input wen_1,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,output logic [15:0] data_out_1,input [15:0] read_addr_1,input ren_1,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_1;
    data_out_0_tmp <= SRAM[read_addr_0];
    data_out_1_tmp <= SRAM[read_addr_1];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
    if (wen_1) begin
      SRAM[write_addr_1] <= data_in_1;
    end
  end
  assign chain_data_out = chain_ren ? data_out_1_tmp : 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDconv_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,input [15:0] data_in_1,input [15:0] write_addr_1,input wen_1,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,output logic [15:0] data_out_1,input [15:0] read_addr_1,input ren_1,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_1;
    data_out_0_tmp <= SRAM[read_addr_0];
    data_out_1_tmp <= SRAM[read_addr_1];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
    if (wen_1) begin
      SRAM[write_addr_1] <= data_in_1;
    end
  end
  assign chain_data_out = chain_ren ? data_out_1_tmp : 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDconv_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs2__num_outputs2__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,input [15:0] data_in_1,input [15:0] write_addr_1,input wen_1,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,output logic [15:0] data_out_1,input [15:0] read_addr_1,input ren_1,input [15:0] chain_data_in,output [15:0] chain_data_out); 
  logic [15:0] SRAM [1023:0];
  logic chain_ren;

  logic [15:0] data_out_0_tmp;
  logic [15:0] data_out_1_tmp;
  always @(posedge clk) begin
    chain_ren <= ren_1;
    data_out_0_tmp <= SRAM[read_addr_0];
    data_out_1_tmp <= SRAM[read_addr_1];
    if (wen_0) begin
      SRAM[write_addr_0] <= data_in_0;
    end
    if (wen_1) begin
      SRAM[write_addr_1] <= data_in_1;
    end
  end
  assign chain_data_out = chain_ren ? data_out_1_tmp : 512;
  assign data_out_0 = data_out_0_tmp;
  assign data_out_1 = chain_data_out;
endmodule

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_input_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_0__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_1__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_2__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_3__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_4__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_5__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_6__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_7__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_8__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_9__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_10__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_11__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_12__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_13__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_14__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_15__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_16__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_17__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_18__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_19__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_20__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_21__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_22__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDhw_kernel_global_wrapper_stencil_23__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

