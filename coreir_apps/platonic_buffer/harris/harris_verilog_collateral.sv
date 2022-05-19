  // min: { [266] }
  // max: { [4101] }

  // min: { [261] }
  // max: { [4096] }

  // min: { [266] }
  // max: { [4101] }

  // min: { [266] }
  // max: { [4101] }

  // min: { [268] }
  // max: { [4103] }

  // min: { [261] }
  // max: { [4096] }

  // min: { [400] }
  // max: { [4105] }

  // min: { [402] }
  // max: { [4107] }

  // min: { [134] }
  // max: { [4099] }

  // min: { [132] }
  // max: { [4097] }

  // min: { [1] }
  // max: { [4096] }

  // min: { [261] }
  // max: { [4096] }

  // min: { [134] }
  // max: { [4099] }

  // min: { [132] }
  // max: { [4097] }

  // min: { [134] }
  // max: { [4099] }

  // sched min: { [1] }
  // sched max: { [4107] }
module cgralib_Mem_amber__IDsreg__U563__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U600__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U745__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U782__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U855__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U892__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U965__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U1002__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U1087__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

module cgralib_Mem_amber__IDsreg__U1130__ctrl_width16__has_chain_enTrue__has_external_addrgenTrue__has_flushFalse__has_read_validFalse__has_resetFalse__has_stencil_validFalse__has_validFalse__is_romFalse__num_inputs1__num_outputs1__use_prebuilt_memFalse__width16 (input clk,input rst_n,input clk_en,input chain_chain_en,input [15:0] data_in_0,input [15:0] write_addr_0,input wen_0,output logic [15:0] data_out_0,input [15:0] read_addr_0,input ren_0,input [15:0] chain_data_in,output [15:0] chain_data_out); 
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

