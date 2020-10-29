// Module `inner_sram__U994` defined externally
// Module `inner_sram__U955` defined externally
// Module `inner_sram__U907` defined externally
// Module `inner_sram__U868` defined externally
// Module `inner_sram__U814` defined externally
// Module `inner_sram__U775` defined externally
// Module `inner_sram__U721` defined externally
// Module `inner_sram__U682` defined externally
// Module `inner_sram__U618` defined externally
// Module `inner_sram__U580` defined externally
// Module `inner_sram__U547` defined externally
// Module `inner_sram__U508` defined externally
// Module `inner_sram__U463` defined externally
// Module `inner_sram__U424` defined externally
// Module `inner_sram__U1068` defined externally
// Module `inner_sram__U1031` defined externally
module hcompute_padded16_global_wrapper_stencil (
    output [15:0] out_padded16_global_wrapper_stencil,
    input [15:0] in0_padded16_stencil [0:0]
);
assign out_padded16_global_wrapper_stencil = in0_padded16_stencil[0];
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_cim_output_stencil [0:0]
);
assign out_hw_output_stencil = in0_cim_output_stencil[0];
endmodule

module cu_op_hcompute_padded16_global_wrapper_stencil (
    input clk,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0],
    output [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0]
);
wire [15:0] inner_compute_out_padded16_global_wrapper_stencil;
wire [15:0] inner_compute_in0_padded16_stencil [0:0];
assign inner_compute_in0_padded16_stencil[0] = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
hcompute_padded16_global_wrapper_stencil inner_compute (
    .out_padded16_global_wrapper_stencil(inner_compute_out_padded16_global_wrapper_stencil),
    .in0_padded16_stencil(inner_compute_in0_padded16_stencil)
);
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = inner_compute_out_padded16_global_wrapper_stencil;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_cim_output_stencil [0:0];
assign inner_compute_in0_cim_output_stencil[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_cim_output_stencil(inner_compute_in0_cim_output_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module coreir_reg #(
    parameter width = 1,
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input [width-1:0] in,
    output [width-1:0] out
);
  reg [width-1:0] outReg=init;
  wire real_clk;
  assign real_clk = clk_posedge ? clk : ~clk;
  always @(posedge real_clk) begin
    outReg <= in;
  end
  assign out = outReg;
endmodule

module mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out
);
wire reg0_clk;
wire [15:0] reg0_in;
assign reg0_clk = clk;
assign reg0_in = in;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(reg0_clk),
    .in(reg0_in),
    .out(out)
);
endmodule

module delay__U996 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U997_in;
wire _U997_clk;
wire [15:0] _U997_out;
wire [15:0] _U998_in;
wire _U998_clk;
assign _U997_in = wdata;
assign _U997_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U997 (
    .in(_U997_in),
    .clk(_U997_clk),
    .out(_U997_out)
);
assign _U998_in = _U997_out;
assign _U998_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U998 (
    .in(_U998_in),
    .clk(_U998_clk),
    .out(rdata)
);
endmodule

module delay__U960 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U961_in;
wire _U961_clk;
assign _U961_in = wdata;
assign _U961_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U961 (
    .in(_U961_in),
    .clk(_U961_clk),
    .out(rdata)
);
endmodule

module delay__U957 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U958_in;
wire _U958_clk;
assign _U958_in = wdata;
assign _U958_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U958 (
    .in(_U958_in),
    .clk(_U958_clk),
    .out(rdata)
);
endmodule

module delay__U920 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U921_in;
wire _U921_clk;
wire [15:0] _U921_out;
wire [15:0] _U922_in;
wire _U922_clk;
assign _U921_in = wdata;
assign _U921_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U921 (
    .in(_U921_in),
    .clk(_U921_clk),
    .out(_U921_out)
);
assign _U922_in = _U921_out;
assign _U922_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U922 (
    .in(_U922_in),
    .clk(_U922_clk),
    .out(rdata)
);
endmodule

module delay__U915 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U916_in;
wire _U916_clk;
wire [15:0] _U916_out;
wire [15:0] _U917_in;
wire _U917_clk;
wire [15:0] _U917_out;
wire [15:0] _U918_in;
wire _U918_clk;
assign _U916_in = wdata;
assign _U916_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U916 (
    .in(_U916_in),
    .clk(_U916_clk),
    .out(_U916_out)
);
assign _U917_in = _U916_out;
assign _U917_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U917 (
    .in(_U917_in),
    .clk(_U917_clk),
    .out(_U917_out)
);
assign _U918_in = _U917_out;
assign _U918_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U918 (
    .in(_U918_in),
    .clk(_U918_clk),
    .out(rdata)
);
endmodule

module delay__U912 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U913_in;
wire _U913_clk;
assign _U913_in = wdata;
assign _U913_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U913 (
    .in(_U913_in),
    .clk(_U913_clk),
    .out(rdata)
);
endmodule

module delay__U909 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U910_in;
wire _U910_clk;
assign _U910_in = wdata;
assign _U910_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U910 (
    .in(_U910_in),
    .clk(_U910_clk),
    .out(rdata)
);
endmodule

module delay__U873 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U874_in;
wire _U874_clk;
assign _U874_in = wdata;
assign _U874_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U874 (
    .in(_U874_in),
    .clk(_U874_clk),
    .out(rdata)
);
endmodule

module delay__U870 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U871_in;
wire _U871_clk;
assign _U871_in = wdata;
assign _U871_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U871 (
    .in(_U871_in),
    .clk(_U871_clk),
    .out(rdata)
);
endmodule

module delay__U834 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U835_in;
wire _U835_clk;
assign _U835_in = wdata;
assign _U835_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U835 (
    .in(_U835_in),
    .clk(_U835_clk),
    .out(rdata)
);
endmodule

module delay__U831 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U832_in;
wire _U832_clk;
assign _U832_in = wdata;
assign _U832_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U832 (
    .in(_U832_in),
    .clk(_U832_clk),
    .out(rdata)
);
endmodule

module delay__U822 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U823_in;
wire _U823_clk;
wire [15:0] _U823_out;
wire [15:0] _U824_in;
wire _U824_clk;
wire [15:0] _U824_out;
wire [15:0] _U825_in;
wire _U825_clk;
wire [15:0] _U825_out;
wire [15:0] _U826_in;
wire _U826_clk;
wire [15:0] _U826_out;
wire [15:0] _U827_in;
wire _U827_clk;
wire [15:0] _U827_out;
wire [15:0] _U828_in;
wire _U828_clk;
wire [15:0] _U828_out;
wire [15:0] _U829_in;
wire _U829_clk;
assign _U823_in = wdata;
assign _U823_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U823 (
    .in(_U823_in),
    .clk(_U823_clk),
    .out(_U823_out)
);
assign _U824_in = _U823_out;
assign _U824_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U824 (
    .in(_U824_in),
    .clk(_U824_clk),
    .out(_U824_out)
);
assign _U825_in = _U824_out;
assign _U825_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U825 (
    .in(_U825_in),
    .clk(_U825_clk),
    .out(_U825_out)
);
assign _U826_in = _U825_out;
assign _U826_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U826 (
    .in(_U826_in),
    .clk(_U826_clk),
    .out(_U826_out)
);
assign _U827_in = _U826_out;
assign _U827_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U827 (
    .in(_U827_in),
    .clk(_U827_clk),
    .out(_U827_out)
);
assign _U828_in = _U827_out;
assign _U828_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U828 (
    .in(_U828_in),
    .clk(_U828_clk),
    .out(_U828_out)
);
assign _U829_in = _U828_out;
assign _U829_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U829 (
    .in(_U829_in),
    .clk(_U829_clk),
    .out(rdata)
);
endmodule

module delay__U819 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U820_in;
wire _U820_clk;
assign _U820_in = wdata;
assign _U820_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U820 (
    .in(_U820_in),
    .clk(_U820_clk),
    .out(rdata)
);
endmodule

module delay__U816 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U817_in;
wire _U817_clk;
assign _U817_in = wdata;
assign _U817_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U817 (
    .in(_U817_in),
    .clk(_U817_clk),
    .out(rdata)
);
endmodule

module delay__U780 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U781_in;
wire _U781_clk;
assign _U781_in = wdata;
assign _U781_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U781 (
    .in(_U781_in),
    .clk(_U781_clk),
    .out(rdata)
);
endmodule

module delay__U777 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U778_in;
wire _U778_clk;
assign _U778_in = wdata;
assign _U778_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U778 (
    .in(_U778_in),
    .clk(_U778_clk),
    .out(rdata)
);
endmodule

module delay__U741 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U742_in;
wire _U742_clk;
assign _U742_in = wdata;
assign _U742_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U742 (
    .in(_U742_in),
    .clk(_U742_clk),
    .out(rdata)
);
endmodule

module delay__U738 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U739_in;
wire _U739_clk;
assign _U739_in = wdata;
assign _U739_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U739 (
    .in(_U739_in),
    .clk(_U739_clk),
    .out(rdata)
);
endmodule

module delay__U729 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U730_in;
wire _U730_clk;
wire [15:0] _U730_out;
wire [15:0] _U731_in;
wire _U731_clk;
wire [15:0] _U731_out;
wire [15:0] _U732_in;
wire _U732_clk;
wire [15:0] _U732_out;
wire [15:0] _U733_in;
wire _U733_clk;
wire [15:0] _U733_out;
wire [15:0] _U734_in;
wire _U734_clk;
wire [15:0] _U734_out;
wire [15:0] _U735_in;
wire _U735_clk;
wire [15:0] _U735_out;
wire [15:0] _U736_in;
wire _U736_clk;
assign _U730_in = wdata;
assign _U730_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U730 (
    .in(_U730_in),
    .clk(_U730_clk),
    .out(_U730_out)
);
assign _U731_in = _U730_out;
assign _U731_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U731 (
    .in(_U731_in),
    .clk(_U731_clk),
    .out(_U731_out)
);
assign _U732_in = _U731_out;
assign _U732_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U732 (
    .in(_U732_in),
    .clk(_U732_clk),
    .out(_U732_out)
);
assign _U733_in = _U732_out;
assign _U733_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U733 (
    .in(_U733_in),
    .clk(_U733_clk),
    .out(_U733_out)
);
assign _U734_in = _U733_out;
assign _U734_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U734 (
    .in(_U734_in),
    .clk(_U734_clk),
    .out(_U734_out)
);
assign _U735_in = _U734_out;
assign _U735_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U735 (
    .in(_U735_in),
    .clk(_U735_clk),
    .out(_U735_out)
);
assign _U736_in = _U735_out;
assign _U736_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U736 (
    .in(_U736_in),
    .clk(_U736_clk),
    .out(rdata)
);
endmodule

module delay__U726 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U727_in;
wire _U727_clk;
assign _U727_in = wdata;
assign _U727_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U727 (
    .in(_U727_in),
    .clk(_U727_clk),
    .out(rdata)
);
endmodule

module delay__U723 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U724_in;
wire _U724_clk;
assign _U724_in = wdata;
assign _U724_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U724 (
    .in(_U724_in),
    .clk(_U724_clk),
    .out(rdata)
);
endmodule

module delay__U687 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U688_in;
wire _U688_clk;
assign _U688_in = wdata;
assign _U688_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U688 (
    .in(_U688_in),
    .clk(_U688_clk),
    .out(rdata)
);
endmodule

module delay__U684 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U685_in;
wire _U685_clk;
assign _U685_in = wdata;
assign _U685_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U685 (
    .in(_U685_in),
    .clk(_U685_clk),
    .out(rdata)
);
endmodule

module delay__U648 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U649_in;
wire _U649_clk;
assign _U649_in = wdata;
assign _U649_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U649 (
    .in(_U649_in),
    .clk(_U649_clk),
    .out(rdata)
);
endmodule

module delay__U645 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U646_in;
wire _U646_clk;
assign _U646_in = wdata;
assign _U646_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U646 (
    .in(_U646_in),
    .clk(_U646_clk),
    .out(rdata)
);
endmodule

module delay__U636 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U637_in;
wire _U637_clk;
wire [15:0] _U637_out;
wire [15:0] _U638_in;
wire _U638_clk;
wire [15:0] _U638_out;
wire [15:0] _U639_in;
wire _U639_clk;
wire [15:0] _U639_out;
wire [15:0] _U640_in;
wire _U640_clk;
wire [15:0] _U640_out;
wire [15:0] _U641_in;
wire _U641_clk;
wire [15:0] _U641_out;
wire [15:0] _U642_in;
wire _U642_clk;
wire [15:0] _U642_out;
wire [15:0] _U643_in;
wire _U643_clk;
assign _U637_in = wdata;
assign _U637_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U637 (
    .in(_U637_in),
    .clk(_U637_clk),
    .out(_U637_out)
);
assign _U638_in = _U637_out;
assign _U638_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U638 (
    .in(_U638_in),
    .clk(_U638_clk),
    .out(_U638_out)
);
assign _U639_in = _U638_out;
assign _U639_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U639 (
    .in(_U639_in),
    .clk(_U639_clk),
    .out(_U639_out)
);
assign _U640_in = _U639_out;
assign _U640_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U640 (
    .in(_U640_in),
    .clk(_U640_clk),
    .out(_U640_out)
);
assign _U641_in = _U640_out;
assign _U641_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U641 (
    .in(_U641_in),
    .clk(_U641_clk),
    .out(_U641_out)
);
assign _U642_in = _U641_out;
assign _U642_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U642 (
    .in(_U642_in),
    .clk(_U642_clk),
    .out(_U642_out)
);
assign _U643_in = _U642_out;
assign _U643_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U643 (
    .in(_U643_in),
    .clk(_U643_clk),
    .out(rdata)
);
endmodule

module delay__U631 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U632_in;
wire _U632_clk;
wire [15:0] _U632_out;
wire [15:0] _U633_in;
wire _U633_clk;
wire [15:0] _U633_out;
wire [15:0] _U634_in;
wire _U634_clk;
assign _U632_in = wdata;
assign _U632_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U632 (
    .in(_U632_in),
    .clk(_U632_clk),
    .out(_U632_out)
);
assign _U633_in = _U632_out;
assign _U633_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U633 (
    .in(_U633_in),
    .clk(_U633_clk),
    .out(_U633_out)
);
assign _U634_in = _U633_out;
assign _U634_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U634 (
    .in(_U634_in),
    .clk(_U634_clk),
    .out(rdata)
);
endmodule

module lgyy_stencil_clkwrk_dsa2_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_lgyy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgyy_stencil_1_read [0:0],
    input op_hcompute_lgyy_stencil_write_wen,
    input [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgyy_stencil_write [0:0]
);
wire delay_sr_U635_clk;
wire [15:0] delay_sr_U635_wdata;
wire [15:0] delay_sr_U635_rdata;
wire delay_sr_U635_rst_n;
wire delay_sr_U635_flush;
assign delay_sr_U635_clk = clk;
assign delay_sr_U635_wdata = op_hcompute_lgyy_stencil_write[0];
assign delay_sr_U635_rst_n = rst_n;
assign delay_sr_U635_flush = flush;
delay__U631 delay_sr_U635 (
    .clk(delay_sr_U635_clk),
    .wdata(delay_sr_U635_wdata),
    .rdata(delay_sr_U635_rdata),
    .rst_n(delay_sr_U635_rst_n),
    .flush(delay_sr_U635_flush)
);
assign op_hcompute_lgyy_stencil_1_read[0] = delay_sr_U635_rdata;
endmodule

module delay__U625 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U626_in;
wire _U626_clk;
wire [15:0] _U626_out;
wire [15:0] _U627_in;
wire _U627_clk;
wire [15:0] _U627_out;
wire [15:0] _U628_in;
wire _U628_clk;
wire [15:0] _U628_out;
wire [15:0] _U629_in;
wire _U629_clk;
assign _U626_in = wdata;
assign _U626_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U626 (
    .in(_U626_in),
    .clk(_U626_clk),
    .out(_U626_out)
);
assign _U627_in = _U626_out;
assign _U627_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U627 (
    .in(_U627_in),
    .clk(_U627_clk),
    .out(_U627_out)
);
assign _U628_in = _U627_out;
assign _U628_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U628 (
    .in(_U628_in),
    .clk(_U628_clk),
    .out(_U628_out)
);
assign _U629_in = _U628_out;
assign _U629_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U629 (
    .in(_U629_in),
    .clk(_U629_clk),
    .out(rdata)
);
endmodule

module lgyy_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgyy_stencil_1_write_wen,
    input [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgyy_stencil_1_write [0:0]
);
wire delay_sr_U630_clk;
wire [15:0] delay_sr_U630_wdata;
wire [15:0] delay_sr_U630_rdata;
wire delay_sr_U630_rst_n;
wire delay_sr_U630_flush;
assign delay_sr_U630_clk = clk;
assign delay_sr_U630_wdata = op_hcompute_lgyy_stencil_1_write[0];
assign delay_sr_U630_rst_n = rst_n;
assign delay_sr_U630_flush = flush;
delay__U625 delay_sr_U630 (
    .clk(delay_sr_U630_clk),
    .wdata(delay_sr_U630_wdata),
    .rdata(delay_sr_U630_rdata),
    .rst_n(delay_sr_U630_rst_n),
    .flush(delay_sr_U630_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U630_rdata;
endmodule

module delay__U620 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U621_in;
wire _U621_clk;
wire [15:0] _U621_out;
wire [15:0] _U622_in;
wire _U622_clk;
wire [15:0] _U622_out;
wire [15:0] _U623_in;
wire _U623_clk;
assign _U621_in = wdata;
assign _U621_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U621 (
    .in(_U621_in),
    .clk(_U621_clk),
    .out(_U621_out)
);
assign _U622_in = _U621_out;
assign _U622_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U622 (
    .in(_U622_in),
    .clk(_U622_clk),
    .out(_U622_out)
);
assign _U623_in = _U622_out;
assign _U623_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U623 (
    .in(_U623_in),
    .clk(_U623_clk),
    .out(rdata)
);
endmodule

module lgxy_stencil_clkwrk_dsa1_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_lgxy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxy_stencil_1_read [0:0],
    input op_hcompute_lgxy_stencil_write_wen,
    input [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxy_stencil_write [0:0]
);
wire delay_sr_U624_clk;
wire [15:0] delay_sr_U624_wdata;
wire [15:0] delay_sr_U624_rdata;
wire delay_sr_U624_rst_n;
wire delay_sr_U624_flush;
assign delay_sr_U624_clk = clk;
assign delay_sr_U624_wdata = op_hcompute_lgxy_stencil_write[0];
assign delay_sr_U624_rst_n = rst_n;
assign delay_sr_U624_flush = flush;
delay__U620 delay_sr_U624 (
    .clk(delay_sr_U624_clk),
    .wdata(delay_sr_U624_wdata),
    .rdata(delay_sr_U624_rdata),
    .rst_n(delay_sr_U624_rst_n),
    .flush(delay_sr_U624_flush)
);
assign op_hcompute_lgxy_stencil_1_read[0] = delay_sr_U624_rdata;
endmodule

module delay__U582 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U583_in;
wire _U583_clk;
wire [15:0] _U583_out;
wire [15:0] _U584_in;
wire _U584_clk;
wire [15:0] _U584_out;
wire [15:0] _U585_in;
wire _U585_clk;
assign _U583_in = wdata;
assign _U583_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U583 (
    .in(_U583_in),
    .clk(_U583_clk),
    .out(_U583_out)
);
assign _U584_in = _U583_out;
assign _U584_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U584 (
    .in(_U584_in),
    .clk(_U584_clk),
    .out(_U584_out)
);
assign _U585_in = _U584_out;
assign _U585_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U585 (
    .in(_U585_in),
    .clk(_U585_clk),
    .out(rdata)
);
endmodule

module lgxx_stencil_clkwrk_dsa0_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_lgxx_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxx_stencil_1_read [0:0],
    input op_hcompute_lgxx_stencil_write_wen,
    input [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxx_stencil_write [0:0]
);
wire delay_sr_U586_clk;
wire [15:0] delay_sr_U586_wdata;
wire [15:0] delay_sr_U586_rdata;
wire delay_sr_U586_rst_n;
wire delay_sr_U586_flush;
assign delay_sr_U586_clk = clk;
assign delay_sr_U586_wdata = op_hcompute_lgxx_stencil_write[0];
assign delay_sr_U586_rst_n = rst_n;
assign delay_sr_U586_flush = flush;
delay__U582 delay_sr_U586 (
    .clk(delay_sr_U586_clk),
    .wdata(delay_sr_U586_wdata),
    .rdata(delay_sr_U586_rdata),
    .rst_n(delay_sr_U586_rst_n),
    .flush(delay_sr_U586_flush)
);
assign op_hcompute_lgxx_stencil_1_read[0] = delay_sr_U586_rdata;
endmodule

module delay__U510 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U511_in;
wire _U511_clk;
wire [15:0] _U511_out;
wire [15:0] _U512_in;
wire _U512_clk;
wire [15:0] _U512_out;
wire [15:0] _U513_in;
wire _U513_clk;
wire [15:0] _U513_out;
wire [15:0] _U514_in;
wire _U514_clk;
assign _U511_in = wdata;
assign _U511_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U511 (
    .in(_U511_in),
    .clk(_U511_clk),
    .out(_U511_out)
);
assign _U512_in = _U511_out;
assign _U512_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U512 (
    .in(_U512_in),
    .clk(_U512_clk),
    .out(_U512_out)
);
assign _U513_in = _U512_out;
assign _U513_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U513 (
    .in(_U513_in),
    .clk(_U513_clk),
    .out(_U513_out)
);
assign _U514_in = _U513_out;
assign _U514_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U514 (
    .in(_U514_in),
    .clk(_U514_clk),
    .out(rdata)
);
endmodule

module delay__U471 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U472_in;
wire _U472_clk;
wire [15:0] _U472_out;
wire [15:0] _U473_in;
wire _U473_clk;
wire [15:0] _U473_out;
wire [15:0] _U474_in;
wire _U474_clk;
wire [15:0] _U474_out;
wire [15:0] _U475_in;
wire _U475_clk;
assign _U472_in = wdata;
assign _U472_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U472 (
    .in(_U472_in),
    .clk(_U472_clk),
    .out(_U472_out)
);
assign _U473_in = _U472_out;
assign _U473_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U473 (
    .in(_U473_in),
    .clk(_U473_clk),
    .out(_U473_out)
);
assign _U474_in = _U473_out;
assign _U474_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U474 (
    .in(_U474_in),
    .clk(_U474_clk),
    .out(_U474_out)
);
assign _U475_in = _U474_out;
assign _U475_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U475 (
    .in(_U475_in),
    .clk(_U475_clk),
    .out(rdata)
);
endmodule

module delay__U468 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U469_in;
wire _U469_clk;
assign _U469_in = wdata;
assign _U469_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U469 (
    .in(_U469_in),
    .clk(_U469_clk),
    .out(rdata)
);
endmodule

module delay__U465 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U466_in;
wire _U466_clk;
assign _U466_in = wdata;
assign _U466_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U466 (
    .in(_U466_in),
    .clk(_U466_clk),
    .out(rdata)
);
endmodule

module delay__U429 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U430_in;
wire _U430_clk;
assign _U430_in = wdata;
assign _U430_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U430 (
    .in(_U430_in),
    .clk(_U430_clk),
    .out(rdata)
);
endmodule

module delay__U426 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U427_in;
wire _U427_clk;
assign _U427_in = wdata;
assign _U427_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U427 (
    .in(_U427_in),
    .clk(_U427_clk),
    .out(rdata)
);
endmodule

module delay__U390 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U391_in;
wire _U391_clk;
assign _U391_in = wdata;
assign _U391_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U391 (
    .in(_U391_in),
    .clk(_U391_clk),
    .out(rdata)
);
endmodule

module delay__U387 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U388_in;
wire _U388_clk;
assign _U388_in = wdata;
assign _U388_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U388 (
    .in(_U388_in),
    .clk(_U388_clk),
    .out(rdata)
);
endmodule

module delay__U381 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U382_in;
wire _U382_clk;
wire [15:0] _U382_out;
wire [15:0] _U383_in;
wire _U383_clk;
wire [15:0] _U383_out;
wire [15:0] _U384_in;
wire _U384_clk;
wire [15:0] _U384_out;
wire [15:0] _U385_in;
wire _U385_clk;
assign _U382_in = wdata;
assign _U382_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U382 (
    .in(_U382_in),
    .clk(_U382_clk),
    .out(_U382_out)
);
assign _U383_in = _U382_out;
assign _U383_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U383 (
    .in(_U383_in),
    .clk(_U383_clk),
    .out(_U383_out)
);
assign _U384_in = _U383_out;
assign _U384_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U384 (
    .in(_U384_in),
    .clk(_U384_clk),
    .out(_U384_out)
);
assign _U385_in = _U384_out;
assign _U385_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U385 (
    .in(_U385_in),
    .clk(_U385_clk),
    .out(rdata)
);
endmodule

module delay__U375 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U376_in;
wire _U376_clk;
wire [15:0] _U376_out;
wire [15:0] _U377_in;
wire _U377_clk;
wire [15:0] _U377_out;
wire [15:0] _U378_in;
wire _U378_clk;
wire [15:0] _U378_out;
wire [15:0] _U379_in;
wire _U379_clk;
assign _U376_in = wdata;
assign _U376_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U376 (
    .in(_U376_in),
    .clk(_U376_clk),
    .out(_U376_out)
);
assign _U377_in = _U376_out;
assign _U377_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U377 (
    .in(_U377_in),
    .clk(_U377_clk),
    .out(_U377_out)
);
assign _U378_in = _U377_out;
assign _U378_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U378 (
    .in(_U378_in),
    .clk(_U378_clk),
    .out(_U378_out)
);
assign _U379_in = _U378_out;
assign _U379_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U379 (
    .in(_U379_in),
    .clk(_U379_clk),
    .out(rdata)
);
endmodule

module delay__U1073 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1074_in;
wire _U1074_clk;
assign _U1074_in = wdata;
assign _U1074_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1074 (
    .in(_U1074_in),
    .clk(_U1074_clk),
    .out(rdata)
);
endmodule

module delay__U1070 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1071_in;
wire _U1071_clk;
assign _U1071_in = wdata;
assign _U1071_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1071 (
    .in(_U1071_in),
    .clk(_U1071_clk),
    .out(rdata)
);
endmodule

module delay__U1033 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U1034_in;
wire _U1034_clk;
wire [15:0] _U1034_out;
wire [15:0] _U1035_in;
wire _U1035_clk;
assign _U1034_in = wdata;
assign _U1034_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1034 (
    .in(_U1034_in),
    .clk(_U1034_clk),
    .out(_U1034_out)
);
assign _U1035_in = _U1034_out;
assign _U1035_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1035 (
    .in(_U1035_in),
    .clk(_U1035_clk),
    .out(rdata)
);
endmodule

module mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    parameter init = 16'h0000
) (
    input [15:0] in,
    input clk,
    output [15:0] out,
    input en
);
wire reg0_clk;
wire [15:0] reg0_in;
assign reg0_clk = clk;
assign reg0_in = en ? in : out;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(reg0_clk),
    .in(reg0_in),
    .out(out)
);
endmodule

module hcompute_lgyy_stencil (
    output [15:0] out_lgyy_stencil
);
assign out_lgyy_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgyy_stencil (
    input clk,
    output [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgyy_stencil;
hcompute_lgyy_stencil inner_compute (
    .out_lgyy_stencil(inner_compute_out_lgyy_stencil)
);
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0] = inner_compute_out_lgyy_stencil;
endmodule

module hcompute_lgxy_stencil (
    output [15:0] out_lgxy_stencil
);
assign out_lgxy_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgxy_stencil (
    input clk,
    output [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgxy_stencil;
hcompute_lgxy_stencil inner_compute (
    .out_lgxy_stencil(inner_compute_out_lgxy_stencil)
);
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0] = inner_compute_out_lgxy_stencil;
endmodule

module hcompute_lgxx_stencil (
    output [15:0] out_lgxx_stencil
);
assign out_lgxx_stencil = 16'h0000;
endmodule

module cu_op_hcompute_lgxx_stencil (
    input clk,
    output [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lgxx_stencil;
hcompute_lgxx_stencil inner_compute (
    .out_lgxx_stencil(inner_compute_out_lgxx_stencil)
);
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0] = inner_compute_out_lgxx_stencil;
endmodule

module hcompute_lyy_stencil (
    output [15:0] out_lyy_stencil,
    input [15:0] in0_grad_y_stencil [0:0]
);
assign out_lyy_stencil = ($signed(16'(in0_grad_y_stencil[0] * in0_grad_y_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lyy_stencil (
    input clk,
    input [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0],
    output [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lyy_stencil;
wire [15:0] inner_compute_in0_grad_y_stencil [0:0];
assign inner_compute_in0_grad_y_stencil[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
hcompute_lyy_stencil inner_compute (
    .out_lyy_stencil(inner_compute_out_lyy_stencil),
    .in0_grad_y_stencil(inner_compute_in0_grad_y_stencil)
);
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = inner_compute_out_lyy_stencil;
endmodule

module hcompute_lxy_stencil (
    output [15:0] out_lxy_stencil,
    input [15:0] in0_grad_x_stencil [0:0],
    input [15:0] in1_grad_y_stencil [0:0]
);
assign out_lxy_stencil = ($signed(16'(in0_grad_x_stencil[0] * in1_grad_y_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lxy_stencil (
    input clk,
    input [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0],
    input [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0],
    output [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lxy_stencil;
wire [15:0] inner_compute_in0_grad_x_stencil [0:0];
wire [15:0] inner_compute_in1_grad_y_stencil [0:0];
assign inner_compute_in0_grad_x_stencil[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
assign inner_compute_in1_grad_y_stencil[0] = grad_y_stencil_op_hcompute_lxy_stencil_read[0];
hcompute_lxy_stencil inner_compute (
    .out_lxy_stencil(inner_compute_out_lxy_stencil),
    .in0_grad_x_stencil(inner_compute_in0_grad_x_stencil),
    .in1_grad_y_stencil(inner_compute_in1_grad_y_stencil)
);
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = inner_compute_out_lxy_stencil;
endmodule

module hcompute_lxx_stencil (
    output [15:0] out_lxx_stencil,
    input [15:0] in0_grad_x_stencil [0:0]
);
assign out_lxx_stencil = ($signed(16'(in0_grad_x_stencil[0] * in0_grad_x_stencil[0]))) >>> 16'h0007;
endmodule

module cu_op_hcompute_lxx_stencil (
    input clk,
    input [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0],
    output [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0]
);
wire [15:0] inner_compute_out_lxx_stencil;
wire [15:0] inner_compute_in0_grad_x_stencil [0:0];
assign inner_compute_in0_grad_x_stencil[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
hcompute_lxx_stencil inner_compute (
    .out_lxx_stencil(inner_compute_out_lxx_stencil),
    .in0_grad_x_stencil(inner_compute_in0_grad_x_stencil)
);
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = inner_compute_out_lxx_stencil;
endmodule

module hcompute_lgyy_stencil_1 (
    output [15:0] out_lgyy_stencil,
    input [15:0] in0_lgyy_stencil [0:0],
    input [15:0] in1_lyy_stencil [8:0]
);
assign out_lgyy_stencil = 16'(in1_lyy_stencil[0] + (16'(in0_lgyy_stencil[0] + (16'(in1_lyy_stencil[1] + (16'(in1_lyy_stencil[2] + (16'(in1_lyy_stencil[3] + (16'(in1_lyy_stencil[4] + (16'(in1_lyy_stencil[5] + (16'(in1_lyy_stencil[6] + (16'(in1_lyy_stencil[7] + in1_lyy_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgyy_stencil_1 (
    input clk,
    input [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0],
    input [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0],
    output [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgyy_stencil;
wire [15:0] inner_compute_in0_lgyy_stencil [0:0];
wire [15:0] inner_compute_in1_lyy_stencil [8:0];
assign inner_compute_in0_lgyy_stencil[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
assign inner_compute_in1_lyy_stencil[8] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[8];
assign inner_compute_in1_lyy_stencil[7] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[7];
assign inner_compute_in1_lyy_stencil[6] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[6];
assign inner_compute_in1_lyy_stencil[5] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[5];
assign inner_compute_in1_lyy_stencil[4] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[4];
assign inner_compute_in1_lyy_stencil[3] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[3];
assign inner_compute_in1_lyy_stencil[2] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[2];
assign inner_compute_in1_lyy_stencil[1] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[1];
assign inner_compute_in1_lyy_stencil[0] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[0];
hcompute_lgyy_stencil_1 inner_compute (
    .out_lgyy_stencil(inner_compute_out_lgyy_stencil),
    .in0_lgyy_stencil(inner_compute_in0_lgyy_stencil),
    .in1_lyy_stencil(inner_compute_in1_lyy_stencil)
);
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = inner_compute_out_lgyy_stencil;
endmodule

module hcompute_lgxy_stencil_1 (
    output [15:0] out_lgxy_stencil,
    input [15:0] in0_lgxy_stencil [0:0],
    input [15:0] in1_lxy_stencil [8:0]
);
assign out_lgxy_stencil = 16'(in1_lxy_stencil[0] + (16'(in0_lgxy_stencil[0] + (16'(in1_lxy_stencil[1] + (16'(in1_lxy_stencil[2] + (16'(in1_lxy_stencil[3] + (16'(in1_lxy_stencil[4] + (16'(in1_lxy_stencil[5] + (16'(in1_lxy_stencil[6] + (16'(in1_lxy_stencil[7] + in1_lxy_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgxy_stencil_1 (
    input clk,
    input [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0],
    input [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0],
    output [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxy_stencil;
wire [15:0] inner_compute_in0_lgxy_stencil [0:0];
wire [15:0] inner_compute_in1_lxy_stencil [8:0];
assign inner_compute_in0_lgxy_stencil[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
assign inner_compute_in1_lxy_stencil[8] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[8];
assign inner_compute_in1_lxy_stencil[7] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[7];
assign inner_compute_in1_lxy_stencil[6] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[6];
assign inner_compute_in1_lxy_stencil[5] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[5];
assign inner_compute_in1_lxy_stencil[4] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[4];
assign inner_compute_in1_lxy_stencil[3] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[3];
assign inner_compute_in1_lxy_stencil[2] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[2];
assign inner_compute_in1_lxy_stencil[1] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[1];
assign inner_compute_in1_lxy_stencil[0] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[0];
hcompute_lgxy_stencil_1 inner_compute (
    .out_lgxy_stencil(inner_compute_out_lgxy_stencil),
    .in0_lgxy_stencil(inner_compute_in0_lgxy_stencil),
    .in1_lxy_stencil(inner_compute_in1_lxy_stencil)
);
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = inner_compute_out_lgxy_stencil;
endmodule

module hcompute_lgxx_stencil_1 (
    output [15:0] out_lgxx_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_lxx_stencil [8:0]
);
assign out_lgxx_stencil = 16'(in1_lxx_stencil[0] + (16'(in0_lgxx_stencil[0] + (16'(in1_lxx_stencil[1] + (16'(in1_lxx_stencil[2] + (16'(in1_lxx_stencil[3] + (16'(in1_lxx_stencil[4] + (16'(in1_lxx_stencil[5] + (16'(in1_lxx_stencil[6] + (16'(in1_lxx_stencil[7] + in1_lxx_stencil[8])))))))))))))))));
endmodule

module cu_op_hcompute_lgxx_stencil_1 (
    input clk,
    input [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0],
    input [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0],
    output [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_lgxx_stencil;
wire [15:0] inner_compute_in0_lgxx_stencil [0:0];
wire [15:0] inner_compute_in1_lxx_stencil [8:0];
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
assign inner_compute_in1_lxx_stencil[8] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[8];
assign inner_compute_in1_lxx_stencil[7] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[7];
assign inner_compute_in1_lxx_stencil[6] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[6];
assign inner_compute_in1_lxx_stencil[5] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[5];
assign inner_compute_in1_lxx_stencil[4] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[4];
assign inner_compute_in1_lxx_stencil[3] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[3];
assign inner_compute_in1_lxx_stencil[2] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[2];
assign inner_compute_in1_lxx_stencil[1] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[1];
assign inner_compute_in1_lxx_stencil[0] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[0];
hcompute_lgxx_stencil_1 inner_compute (
    .out_lgxx_stencil(inner_compute_out_lgxx_stencil),
    .in0_lgxx_stencil(inner_compute_in0_lgxx_stencil),
    .in1_lxx_stencil(inner_compute_in1_lxx_stencil)
);
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = inner_compute_out_lgxx_stencil;
endmodule

module hcompute_cim_stencil (
    output [15:0] out_cim_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_lgxy_stencil [0:0],
    input [15:0] in2_lgyy_stencil [0:0]
);
wire [15:0] add_529_530_535_out;
wire [15:0] ashr_lgxx_stencil_2_528_529_out;
wire [15:0] ashr_lgxy_stencil_2_528_532_out;
wire [15:0] ashr_lgyy_stencil_2_528_530_out;
assign add_529_530_535_out = 16'(ashr_lgxx_stencil_2_528_529_out + ashr_lgyy_stencil_2_528_530_out);
assign ashr_lgxx_stencil_2_528_529_out = ($signed(in0_lgxx_stencil[0])) >>> 16'h0006;
assign ashr_lgxy_stencil_2_528_532_out = ($signed(in1_lgxy_stencil[0])) >>> 16'h0006;
assign ashr_lgyy_stencil_2_528_530_out = ($signed(in2_lgyy_stencil[0])) >>> 16'h0006;
assign out_cim_stencil = 16'((16'((16'(ashr_lgxx_stencil_2_528_529_out * ashr_lgyy_stencil_2_528_530_out)) - (16'(ashr_lgxy_stencil_2_528_532_out * ashr_lgxy_stencil_2_528_532_out)))) - (($signed(16'(add_529_530_535_out * add_529_530_535_out))) >>> 16'h0004));
endmodule

module cu_op_hcompute_cim_stencil (
    input clk,
    input [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0],
    input [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0],
    input [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0],
    output [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0]
);
wire [15:0] inner_compute_out_cim_stencil;
wire [15:0] inner_compute_in0_lgxx_stencil [0:0];
wire [15:0] inner_compute_in1_lgxy_stencil [0:0];
wire [15:0] inner_compute_in2_lgyy_stencil [0:0];
assign inner_compute_in0_lgxx_stencil[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
assign inner_compute_in1_lgxy_stencil[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
assign inner_compute_in2_lgyy_stencil[0] = lgyy_stencil_op_hcompute_cim_stencil_read[0];
hcompute_cim_stencil inner_compute (
    .out_cim_stencil(inner_compute_out_cim_stencil),
    .in0_lgxx_stencil(inner_compute_in0_lgxx_stencil),
    .in1_lgxy_stencil(inner_compute_in1_lgxy_stencil),
    .in2_lgyy_stencil(inner_compute_in2_lgyy_stencil)
);
assign cim_stencil_op_hcompute_cim_stencil_write[0] = inner_compute_out_cim_stencil;
endmodule

module corebit_reg #(
    parameter clk_posedge = 1,
    parameter init = 1
) (
    input clk,
    input in,
    output out
);
reg outReg = init;
always @(posedge clk) begin
  outReg <= in;
end
assign out = outReg;
endmodule

module hcompute_cim_output_stencil (
    output [15:0] out_cim_output_stencil,
    input [15:0] in0_cim_stencil [8:0]
);
assign out_cim_output_stencil = ((((((((($signed(in0_cim_stencil[0])) < ($signed(in0_cim_stencil[1]))) & (($signed(in0_cim_stencil[2])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[3])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[4])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[5])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[6])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[7])) < ($signed(in0_cim_stencil[1])))) & (($signed(in0_cim_stencil[8])) < ($signed(in0_cim_stencil[1])))) & (($signed(16'h0001)) <= ($signed(in0_cim_stencil[1]))) ? 16'h00ff : 16'h0000;
endmodule

module cu_op_hcompute_cim_output_stencil (
    input clk,
    input [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0],
    output [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_cim_output_stencil;
wire [15:0] inner_compute_in0_cim_stencil [8:0];
assign inner_compute_in0_cim_stencil[8] = cim_stencil_op_hcompute_cim_output_stencil_read[8];
assign inner_compute_in0_cim_stencil[7] = cim_stencil_op_hcompute_cim_output_stencil_read[7];
assign inner_compute_in0_cim_stencil[6] = cim_stencil_op_hcompute_cim_output_stencil_read[6];
assign inner_compute_in0_cim_stencil[5] = cim_stencil_op_hcompute_cim_output_stencil_read[5];
assign inner_compute_in0_cim_stencil[4] = cim_stencil_op_hcompute_cim_output_stencil_read[4];
assign inner_compute_in0_cim_stencil[3] = cim_stencil_op_hcompute_cim_output_stencil_read[3];
assign inner_compute_in0_cim_stencil[2] = cim_stencil_op_hcompute_cim_output_stencil_read[2];
assign inner_compute_in0_cim_stencil[1] = cim_stencil_op_hcompute_cim_output_stencil_read[1];
assign inner_compute_in0_cim_stencil[0] = cim_stencil_op_hcompute_cim_output_stencil_read[0];
hcompute_cim_output_stencil inner_compute (
    .out_cim_output_stencil(inner_compute_out_cim_output_stencil),
    .in0_cim_stencil(inner_compute_in0_cim_stencil)
);
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = inner_compute_out_cim_output_stencil;
endmodule

module commonlib_smin__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) <= ($signed(in1)) ? in0 : in1;
endmodule

module commonlib_smax__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) >= ($signed(in1)) ? in0 : in1;
endmodule

module hcompute_grad_y_stencil (
    output [15:0] out_grad_y_stencil,
    input [15:0] in0_padded16_global_wrapper_stencil [5:0]
);
wire [15:0] smax_382_383_384_in0;
wire [15:0] smax_382_383_384_in1;
wire [15:0] smin_380_381_382_in0;
wire [15:0] smin_380_381_382_in1;
wire [15:0] smin_380_381_382_out;
assign smax_382_383_384_in0 = smin_380_381_382_out;
assign smax_382_383_384_in1 = 16'hff01;
commonlib_smax__width16 smax_382_383_384 (
    .in0(smax_382_383_384_in0),
    .in1(smax_382_383_384_in1),
    .out(out_grad_y_stencil)
);
assign smin_380_381_382_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[3] + (16'(in0_padded16_global_wrapper_stencil[4] + (16'(in0_padded16_global_wrapper_stencil[5] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[0])) - (16'(in0_padded16_global_wrapper_stencil[1] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[2]);
assign smin_380_381_382_in1 = 16'h00ff;
commonlib_smin__width16 smin_380_381_382 (
    .in0(smin_380_381_382_in0),
    .in1(smin_380_381_382_in1),
    .out(smin_380_381_382_out)
);
endmodule

module cu_op_hcompute_grad_y_stencil (
    input clk,
    input [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0],
    output [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0]
);
wire [15:0] inner_compute_out_grad_y_stencil;
wire [15:0] inner_compute_in0_padded16_global_wrapper_stencil [5:0];
assign inner_compute_in0_padded16_global_wrapper_stencil[5] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5];
assign inner_compute_in0_padded16_global_wrapper_stencil[4] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4];
assign inner_compute_in0_padded16_global_wrapper_stencil[3] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3];
assign inner_compute_in0_padded16_global_wrapper_stencil[2] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2];
assign inner_compute_in0_padded16_global_wrapper_stencil[1] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1];
assign inner_compute_in0_padded16_global_wrapper_stencil[0] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0];
hcompute_grad_y_stencil inner_compute (
    .out_grad_y_stencil(inner_compute_out_grad_y_stencil),
    .in0_padded16_global_wrapper_stencil(inner_compute_in0_padded16_global_wrapper_stencil)
);
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = inner_compute_out_grad_y_stencil;
endmodule

module hcompute_grad_x_stencil (
    output [15:0] out_grad_x_stencil,
    input [15:0] in0_padded16_global_wrapper_stencil [5:0]
);
wire [15:0] smax_282_283_284_in0;
wire [15:0] smax_282_283_284_in1;
wire [15:0] smin_280_281_282_in0;
wire [15:0] smin_280_281_282_in1;
wire [15:0] smin_280_281_282_out;
assign smax_282_283_284_in0 = smin_280_281_282_out;
assign smax_282_283_284_in1 = 16'hff01;
commonlib_smax__width16 smax_282_283_284 (
    .in0(smax_282_283_284_in0),
    .in1(smax_282_283_284_in1),
    .out(out_grad_x_stencil)
);
assign smin_280_281_282_in0 = 16'((16'((16'((16'(in0_padded16_global_wrapper_stencil[0] + (16'(in0_padded16_global_wrapper_stencil[1] + (16'(in0_padded16_global_wrapper_stencil[2] * 16'h0002)))))) - in0_padded16_global_wrapper_stencil[3])) - (16'(in0_padded16_global_wrapper_stencil[4] * 16'h0002)))) - in0_padded16_global_wrapper_stencil[5]);
assign smin_280_281_282_in1 = 16'h00ff;
commonlib_smin__width16 smin_280_281_282 (
    .in0(smin_280_281_282_in0),
    .in1(smin_280_281_282_in1),
    .out(smin_280_281_282_out)
);
endmodule

module cu_op_hcompute_grad_x_stencil (
    input clk,
    input [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0],
    output [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0]
);
wire [15:0] inner_compute_out_grad_x_stencil;
wire [15:0] inner_compute_in0_padded16_global_wrapper_stencil [5:0];
assign inner_compute_in0_padded16_global_wrapper_stencil[5] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5];
assign inner_compute_in0_padded16_global_wrapper_stencil[4] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4];
assign inner_compute_in0_padded16_global_wrapper_stencil[3] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3];
assign inner_compute_in0_padded16_global_wrapper_stencil[2] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2];
assign inner_compute_in0_padded16_global_wrapper_stencil[1] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1];
assign inner_compute_in0_padded16_global_wrapper_stencil[0] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0];
hcompute_grad_x_stencil inner_compute (
    .out_grad_x_stencil(inner_compute_out_grad_x_stencil),
    .in0_padded16_global_wrapper_stencil(inner_compute_in0_padded16_global_wrapper_stencil)
);
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = inner_compute_out_grad_x_stencil;
endmodule

module cim_output_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_cim_output_stencil_write_wen,
    input [15:0] op_hcompute_cim_output_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_cim_output_stencil_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U380_clk;
wire [15:0] delay_sr_U380_wdata;
wire [15:0] delay_sr_U380_rdata;
wire delay_sr_U380_rst_n;
wire delay_sr_U380_flush;
assign delay_sr_U380_clk = clk;
assign delay_sr_U380_wdata = op_hcompute_cim_output_stencil_write[0];
assign delay_sr_U380_rst_n = rst_n;
assign delay_sr_U380_flush = flush;
delay__U375 delay_sr_U380 (
    .clk(delay_sr_U380_clk),
    .wdata(delay_sr_U380_wdata),
    .rdata(delay_sr_U380_rdata),
    .rst_n(delay_sr_U380_rst_n),
    .flush(delay_sr_U380_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U380_rdata;
endmodule

module array_delay_U96 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U97_in;
wire _U97_clk;
wire [15:0] _U97_out;
wire [15:0] _U98_in;
wire _U98_clk;
wire [15:0] _U98_out;
wire [15:0] _U99_in;
wire _U99_clk;
wire [15:0] _U99_out;
assign _U97_in = in[0];
assign _U97_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U97 (
    .in(_U97_in),
    .clk(_U97_clk),
    .out(_U97_out)
);
assign _U98_in = in[1];
assign _U98_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U98 (
    .in(_U98_in),
    .clk(_U98_clk),
    .out(_U98_out)
);
assign _U99_in = in[2];
assign _U99_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U99 (
    .in(_U99_in),
    .clk(_U99_clk),
    .out(_U99_out)
);
assign out[2] = _U99_out;
assign out[1] = _U98_out;
assign out[0] = _U97_out;
endmodule

module array_delay_U92 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U93_in;
wire _U93_clk;
wire [15:0] _U93_out;
wire [15:0] _U94_in;
wire _U94_clk;
wire [15:0] _U94_out;
wire [15:0] _U95_in;
wire _U95_clk;
wire [15:0] _U95_out;
assign _U93_in = in[0];
assign _U93_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U93 (
    .in(_U93_in),
    .clk(_U93_clk),
    .out(_U93_out)
);
assign _U94_in = in[1];
assign _U94_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U94 (
    .in(_U94_in),
    .clk(_U94_clk),
    .out(_U94_out)
);
assign _U95_in = in[2];
assign _U95_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U95 (
    .in(_U95_in),
    .clk(_U95_clk),
    .out(_U95_out)
);
assign out[2] = _U95_out;
assign out[1] = _U94_out;
assign out[0] = _U93_out;
endmodule

module array_delay_U71 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U72_in;
wire _U72_clk;
wire [15:0] _U72_out;
wire [15:0] _U73_in;
wire _U73_clk;
wire [15:0] _U73_out;
wire [15:0] _U74_in;
wire _U74_clk;
wire [15:0] _U74_out;
assign _U72_in = in[0];
assign _U72_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U72 (
    .in(_U72_in),
    .clk(_U72_clk),
    .out(_U72_out)
);
assign _U73_in = in[1];
assign _U73_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U73 (
    .in(_U73_in),
    .clk(_U73_clk),
    .out(_U73_out)
);
assign _U74_in = in[2];
assign _U74_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U74 (
    .in(_U74_in),
    .clk(_U74_clk),
    .out(_U74_out)
);
assign out[2] = _U74_out;
assign out[1] = _U73_out;
assign out[0] = _U72_out;
endmodule

module array_delay_U67 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U68_in;
wire _U68_clk;
wire [15:0] _U68_out;
wire [15:0] _U69_in;
wire _U69_clk;
wire [15:0] _U69_out;
wire [15:0] _U70_in;
wire _U70_clk;
wire [15:0] _U70_out;
assign _U68_in = in[0];
assign _U68_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U68 (
    .in(_U68_in),
    .clk(_U68_clk),
    .out(_U68_out)
);
assign _U69_in = in[1];
assign _U69_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U69 (
    .in(_U69_in),
    .clk(_U69_clk),
    .out(_U69_out)
);
assign _U70_in = in[2];
assign _U70_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U70 (
    .in(_U70_in),
    .clk(_U70_clk),
    .out(_U70_out)
);
assign out[2] = _U70_out;
assign out[1] = _U69_out;
assign out[0] = _U68_out;
endmodule

module array_delay_U46 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U47_in;
wire _U47_clk;
wire [15:0] _U47_out;
wire [15:0] _U48_in;
wire _U48_clk;
wire [15:0] _U48_out;
wire [15:0] _U49_in;
wire _U49_clk;
wire [15:0] _U49_out;
assign _U47_in = in[0];
assign _U47_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U47 (
    .in(_U47_in),
    .clk(_U47_clk),
    .out(_U47_out)
);
assign _U48_in = in[1];
assign _U48_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U48 (
    .in(_U48_in),
    .clk(_U48_clk),
    .out(_U48_out)
);
assign _U49_in = in[2];
assign _U49_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U49 (
    .in(_U49_in),
    .clk(_U49_clk),
    .out(_U49_out)
);
assign out[2] = _U49_out;
assign out[1] = _U48_out;
assign out[0] = _U47_out;
endmodule

module array_delay_U42 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U43_in;
wire _U43_clk;
wire [15:0] _U43_out;
wire [15:0] _U44_in;
wire _U44_clk;
wire [15:0] _U44_out;
wire [15:0] _U45_in;
wire _U45_clk;
wire [15:0] _U45_out;
assign _U43_in = in[0];
assign _U43_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U43 (
    .in(_U43_in),
    .clk(_U43_clk),
    .out(_U43_out)
);
assign _U44_in = in[1];
assign _U44_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U44 (
    .in(_U44_in),
    .clk(_U44_clk),
    .out(_U44_out)
);
assign _U45_in = in[2];
assign _U45_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U45 (
    .in(_U45_in),
    .clk(_U45_clk),
    .out(_U45_out)
);
assign out[2] = _U45_out;
assign out[1] = _U44_out;
assign out[0] = _U43_out;
endmodule

module array_delay_U371 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U372_in;
wire _U372_clk;
wire [15:0] _U372_out;
wire [15:0] _U373_in;
wire _U373_clk;
wire [15:0] _U373_out;
wire [15:0] _U374_in;
wire _U374_clk;
wire [15:0] _U374_out;
assign _U372_in = in[0];
assign _U372_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U372 (
    .in(_U372_in),
    .clk(_U372_clk),
    .out(_U372_out)
);
assign _U373_in = in[1];
assign _U373_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U373 (
    .in(_U373_in),
    .clk(_U373_clk),
    .out(_U373_out)
);
assign _U374_in = in[2];
assign _U374_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U374 (
    .in(_U374_in),
    .clk(_U374_clk),
    .out(_U374_out)
);
assign out[2] = _U374_out;
assign out[1] = _U373_out;
assign out[0] = _U372_out;
endmodule

module array_delay_U367 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U368_in;
wire _U368_clk;
wire [15:0] _U368_out;
wire [15:0] _U369_in;
wire _U369_clk;
wire [15:0] _U369_out;
wire [15:0] _U370_in;
wire _U370_clk;
wire [15:0] _U370_out;
assign _U368_in = in[0];
assign _U368_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U368 (
    .in(_U368_in),
    .clk(_U368_clk),
    .out(_U368_out)
);
assign _U369_in = in[1];
assign _U369_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U369 (
    .in(_U369_in),
    .clk(_U369_clk),
    .out(_U369_out)
);
assign _U370_in = in[2];
assign _U370_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U370 (
    .in(_U370_in),
    .clk(_U370_clk),
    .out(_U370_out)
);
assign out[2] = _U370_out;
assign out[1] = _U369_out;
assign out[0] = _U368_out;
endmodule

module array_delay_U346 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U347_in;
wire _U347_clk;
wire [15:0] _U347_out;
wire [15:0] _U348_in;
wire _U348_clk;
wire [15:0] _U348_out;
wire [15:0] _U349_in;
wire _U349_clk;
wire [15:0] _U349_out;
assign _U347_in = in[0];
assign _U347_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U347 (
    .in(_U347_in),
    .clk(_U347_clk),
    .out(_U347_out)
);
assign _U348_in = in[1];
assign _U348_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U348 (
    .in(_U348_in),
    .clk(_U348_clk),
    .out(_U348_out)
);
assign _U349_in = in[2];
assign _U349_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U349 (
    .in(_U349_in),
    .clk(_U349_clk),
    .out(_U349_out)
);
assign out[2] = _U349_out;
assign out[1] = _U348_out;
assign out[0] = _U347_out;
endmodule

module array_delay_U342 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U343_in;
wire _U343_clk;
wire [15:0] _U343_out;
wire [15:0] _U344_in;
wire _U344_clk;
wire [15:0] _U344_out;
wire [15:0] _U345_in;
wire _U345_clk;
wire [15:0] _U345_out;
assign _U343_in = in[0];
assign _U343_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U343 (
    .in(_U343_in),
    .clk(_U343_clk),
    .out(_U343_out)
);
assign _U344_in = in[1];
assign _U344_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U344 (
    .in(_U344_in),
    .clk(_U344_clk),
    .out(_U344_out)
);
assign _U345_in = in[2];
assign _U345_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U345 (
    .in(_U345_in),
    .clk(_U345_clk),
    .out(_U345_out)
);
assign out[2] = _U345_out;
assign out[1] = _U344_out;
assign out[0] = _U343_out;
endmodule

module array_delay_U321 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U322_in;
wire _U322_clk;
wire [15:0] _U322_out;
wire [15:0] _U323_in;
wire _U323_clk;
wire [15:0] _U323_out;
wire [15:0] _U324_in;
wire _U324_clk;
wire [15:0] _U324_out;
assign _U322_in = in[0];
assign _U322_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U322 (
    .in(_U322_in),
    .clk(_U322_clk),
    .out(_U322_out)
);
assign _U323_in = in[1];
assign _U323_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U323 (
    .in(_U323_in),
    .clk(_U323_clk),
    .out(_U323_out)
);
assign _U324_in = in[2];
assign _U324_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U324 (
    .in(_U324_in),
    .clk(_U324_clk),
    .out(_U324_out)
);
assign out[2] = _U324_out;
assign out[1] = _U323_out;
assign out[0] = _U322_out;
endmodule

module array_delay_U317 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U318_in;
wire _U318_clk;
wire [15:0] _U318_out;
wire [15:0] _U319_in;
wire _U319_clk;
wire [15:0] _U319_out;
wire [15:0] _U320_in;
wire _U320_clk;
wire [15:0] _U320_out;
assign _U318_in = in[0];
assign _U318_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U318 (
    .in(_U318_in),
    .clk(_U318_clk),
    .out(_U318_out)
);
assign _U319_in = in[1];
assign _U319_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U319 (
    .in(_U319_in),
    .clk(_U319_clk),
    .out(_U319_out)
);
assign _U320_in = in[2];
assign _U320_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U320 (
    .in(_U320_in),
    .clk(_U320_clk),
    .out(_U320_out)
);
assign out[2] = _U320_out;
assign out[1] = _U319_out;
assign out[0] = _U318_out;
endmodule

module array_delay_U296 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U297_in;
wire _U297_clk;
wire [15:0] _U297_out;
wire [15:0] _U298_in;
wire _U298_clk;
wire [15:0] _U298_out;
wire [15:0] _U299_in;
wire _U299_clk;
wire [15:0] _U299_out;
assign _U297_in = in[0];
assign _U297_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U297 (
    .in(_U297_in),
    .clk(_U297_clk),
    .out(_U297_out)
);
assign _U298_in = in[1];
assign _U298_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U298 (
    .in(_U298_in),
    .clk(_U298_clk),
    .out(_U298_out)
);
assign _U299_in = in[2];
assign _U299_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U299 (
    .in(_U299_in),
    .clk(_U299_clk),
    .out(_U299_out)
);
assign out[2] = _U299_out;
assign out[1] = _U298_out;
assign out[0] = _U297_out;
endmodule

module array_delay_U292 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U293_in;
wire _U293_clk;
wire [15:0] _U293_out;
wire [15:0] _U294_in;
wire _U294_clk;
wire [15:0] _U294_out;
wire [15:0] _U295_in;
wire _U295_clk;
wire [15:0] _U295_out;
assign _U293_in = in[0];
assign _U293_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U293 (
    .in(_U293_in),
    .clk(_U293_clk),
    .out(_U293_out)
);
assign _U294_in = in[1];
assign _U294_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U294 (
    .in(_U294_in),
    .clk(_U294_clk),
    .out(_U294_out)
);
assign _U295_in = in[2];
assign _U295_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U295 (
    .in(_U295_in),
    .clk(_U295_clk),
    .out(_U295_out)
);
assign out[2] = _U295_out;
assign out[1] = _U294_out;
assign out[0] = _U293_out;
endmodule

module array_delay_U271 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U272_in;
wire _U272_clk;
wire [15:0] _U272_out;
wire [15:0] _U273_in;
wire _U273_clk;
wire [15:0] _U273_out;
wire [15:0] _U274_in;
wire _U274_clk;
wire [15:0] _U274_out;
assign _U272_in = in[0];
assign _U272_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U272 (
    .in(_U272_in),
    .clk(_U272_clk),
    .out(_U272_out)
);
assign _U273_in = in[1];
assign _U273_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U273 (
    .in(_U273_in),
    .clk(_U273_clk),
    .out(_U273_out)
);
assign _U274_in = in[2];
assign _U274_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U274 (
    .in(_U274_in),
    .clk(_U274_clk),
    .out(_U274_out)
);
assign out[2] = _U274_out;
assign out[1] = _U273_out;
assign out[0] = _U272_out;
endmodule

module array_delay_U267 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U268_in;
wire _U268_clk;
wire [15:0] _U268_out;
wire [15:0] _U269_in;
wire _U269_clk;
wire [15:0] _U269_out;
wire [15:0] _U270_in;
wire _U270_clk;
wire [15:0] _U270_out;
assign _U268_in = in[0];
assign _U268_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U268 (
    .in(_U268_in),
    .clk(_U268_clk),
    .out(_U268_out)
);
assign _U269_in = in[1];
assign _U269_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U269 (
    .in(_U269_in),
    .clk(_U269_clk),
    .out(_U269_out)
);
assign _U270_in = in[2];
assign _U270_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U270 (
    .in(_U270_in),
    .clk(_U270_clk),
    .out(_U270_out)
);
assign out[2] = _U270_out;
assign out[1] = _U269_out;
assign out[0] = _U268_out;
endmodule

module array_delay_U246 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U247_in;
wire _U247_clk;
wire [15:0] _U247_out;
wire [15:0] _U248_in;
wire _U248_clk;
wire [15:0] _U248_out;
wire [15:0] _U249_in;
wire _U249_clk;
wire [15:0] _U249_out;
assign _U247_in = in[0];
assign _U247_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U247 (
    .in(_U247_in),
    .clk(_U247_clk),
    .out(_U247_out)
);
assign _U248_in = in[1];
assign _U248_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U248 (
    .in(_U248_in),
    .clk(_U248_clk),
    .out(_U248_out)
);
assign _U249_in = in[2];
assign _U249_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U249 (
    .in(_U249_in),
    .clk(_U249_clk),
    .out(_U249_out)
);
assign out[2] = _U249_out;
assign out[1] = _U248_out;
assign out[0] = _U247_out;
endmodule

module array_delay_U242 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U243_in;
wire _U243_clk;
wire [15:0] _U243_out;
wire [15:0] _U244_in;
wire _U244_clk;
wire [15:0] _U244_out;
wire [15:0] _U245_in;
wire _U245_clk;
wire [15:0] _U245_out;
assign _U243_in = in[0];
assign _U243_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U243 (
    .in(_U243_in),
    .clk(_U243_clk),
    .out(_U243_out)
);
assign _U244_in = in[1];
assign _U244_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U244 (
    .in(_U244_in),
    .clk(_U244_clk),
    .out(_U244_out)
);
assign _U245_in = in[2];
assign _U245_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U245 (
    .in(_U245_in),
    .clk(_U245_clk),
    .out(_U245_out)
);
assign out[2] = _U245_out;
assign out[1] = _U244_out;
assign out[0] = _U243_out;
endmodule

module array_delay_U221 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U222_in;
wire _U222_clk;
wire [15:0] _U222_out;
wire [15:0] _U223_in;
wire _U223_clk;
wire [15:0] _U223_out;
wire [15:0] _U224_in;
wire _U224_clk;
wire [15:0] _U224_out;
assign _U222_in = in[0];
assign _U222_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U222 (
    .in(_U222_in),
    .clk(_U222_clk),
    .out(_U222_out)
);
assign _U223_in = in[1];
assign _U223_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U223 (
    .in(_U223_in),
    .clk(_U223_clk),
    .out(_U223_out)
);
assign _U224_in = in[2];
assign _U224_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U224 (
    .in(_U224_in),
    .clk(_U224_clk),
    .out(_U224_out)
);
assign out[2] = _U224_out;
assign out[1] = _U223_out;
assign out[0] = _U222_out;
endmodule

module array_delay_U217 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U218_in;
wire _U218_clk;
wire [15:0] _U218_out;
wire [15:0] _U219_in;
wire _U219_clk;
wire [15:0] _U219_out;
wire [15:0] _U220_in;
wire _U220_clk;
wire [15:0] _U220_out;
assign _U218_in = in[0];
assign _U218_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U218 (
    .in(_U218_in),
    .clk(_U218_clk),
    .out(_U218_out)
);
assign _U219_in = in[1];
assign _U219_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U219 (
    .in(_U219_in),
    .clk(_U219_clk),
    .out(_U219_out)
);
assign _U220_in = in[2];
assign _U220_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U220 (
    .in(_U220_in),
    .clk(_U220_clk),
    .out(_U220_out)
);
assign out[2] = _U220_out;
assign out[1] = _U219_out;
assign out[0] = _U218_out;
endmodule

module array_delay_U21 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U22_in;
wire _U22_clk;
wire [15:0] _U22_out;
wire [15:0] _U23_in;
wire _U23_clk;
wire [15:0] _U23_out;
wire [15:0] _U24_in;
wire _U24_clk;
wire [15:0] _U24_out;
assign _U22_in = in[0];
assign _U22_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U22 (
    .in(_U22_in),
    .clk(_U22_clk),
    .out(_U22_out)
);
assign _U23_in = in[1];
assign _U23_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U23 (
    .in(_U23_in),
    .clk(_U23_clk),
    .out(_U23_out)
);
assign _U24_in = in[2];
assign _U24_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U24 (
    .in(_U24_in),
    .clk(_U24_clk),
    .out(_U24_out)
);
assign out[2] = _U24_out;
assign out[1] = _U23_out;
assign out[0] = _U22_out;
endmodule

module array_delay_U196 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U197_in;
wire _U197_clk;
wire [15:0] _U197_out;
wire [15:0] _U198_in;
wire _U198_clk;
wire [15:0] _U198_out;
wire [15:0] _U199_in;
wire _U199_clk;
wire [15:0] _U199_out;
assign _U197_in = in[0];
assign _U197_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U197 (
    .in(_U197_in),
    .clk(_U197_clk),
    .out(_U197_out)
);
assign _U198_in = in[1];
assign _U198_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U198 (
    .in(_U198_in),
    .clk(_U198_clk),
    .out(_U198_out)
);
assign _U199_in = in[2];
assign _U199_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U199 (
    .in(_U199_in),
    .clk(_U199_clk),
    .out(_U199_out)
);
assign out[2] = _U199_out;
assign out[1] = _U198_out;
assign out[0] = _U197_out;
endmodule

module array_delay_U192 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U193_in;
wire _U193_clk;
wire [15:0] _U193_out;
wire [15:0] _U194_in;
wire _U194_clk;
wire [15:0] _U194_out;
wire [15:0] _U195_in;
wire _U195_clk;
wire [15:0] _U195_out;
assign _U193_in = in[0];
assign _U193_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U193 (
    .in(_U193_in),
    .clk(_U193_clk),
    .out(_U193_out)
);
assign _U194_in = in[1];
assign _U194_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U194 (
    .in(_U194_in),
    .clk(_U194_clk),
    .out(_U194_out)
);
assign _U195_in = in[2];
assign _U195_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U195 (
    .in(_U195_in),
    .clk(_U195_clk),
    .out(_U195_out)
);
assign out[2] = _U195_out;
assign out[1] = _U194_out;
assign out[0] = _U193_out;
endmodule

module array_delay_U171 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U172_in;
wire _U172_clk;
wire [15:0] _U172_out;
wire [15:0] _U173_in;
wire _U173_clk;
wire [15:0] _U173_out;
wire [15:0] _U174_in;
wire _U174_clk;
wire [15:0] _U174_out;
assign _U172_in = in[0];
assign _U172_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U172 (
    .in(_U172_in),
    .clk(_U172_clk),
    .out(_U172_out)
);
assign _U173_in = in[1];
assign _U173_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U173 (
    .in(_U173_in),
    .clk(_U173_clk),
    .out(_U173_out)
);
assign _U174_in = in[2];
assign _U174_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U174 (
    .in(_U174_in),
    .clk(_U174_clk),
    .out(_U174_out)
);
assign out[2] = _U174_out;
assign out[1] = _U173_out;
assign out[0] = _U172_out;
endmodule

module array_delay_U17 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U18_in;
wire _U18_clk;
wire [15:0] _U18_out;
wire [15:0] _U19_in;
wire _U19_clk;
wire [15:0] _U19_out;
wire [15:0] _U20_in;
wire _U20_clk;
wire [15:0] _U20_out;
assign _U18_in = in[0];
assign _U18_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U18 (
    .in(_U18_in),
    .clk(_U18_clk),
    .out(_U18_out)
);
assign _U19_in = in[1];
assign _U19_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U19 (
    .in(_U19_in),
    .clk(_U19_clk),
    .out(_U19_out)
);
assign _U20_in = in[2];
assign _U20_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U20 (
    .in(_U20_in),
    .clk(_U20_clk),
    .out(_U20_out)
);
assign out[2] = _U20_out;
assign out[1] = _U19_out;
assign out[0] = _U18_out;
endmodule

module array_delay_U167 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U168_in;
wire _U168_clk;
wire [15:0] _U168_out;
wire [15:0] _U169_in;
wire _U169_clk;
wire [15:0] _U169_out;
wire [15:0] _U170_in;
wire _U170_clk;
wire [15:0] _U170_out;
assign _U168_in = in[0];
assign _U168_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U168 (
    .in(_U168_in),
    .clk(_U168_clk),
    .out(_U168_out)
);
assign _U169_in = in[1];
assign _U169_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U169 (
    .in(_U169_in),
    .clk(_U169_clk),
    .out(_U169_out)
);
assign _U170_in = in[2];
assign _U170_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U170 (
    .in(_U170_in),
    .clk(_U170_clk),
    .out(_U170_out)
);
assign out[2] = _U170_out;
assign out[1] = _U169_out;
assign out[0] = _U168_out;
endmodule

module array_delay_U146 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U147_in;
wire _U147_clk;
wire [15:0] _U147_out;
wire [15:0] _U148_in;
wire _U148_clk;
wire [15:0] _U148_out;
wire [15:0] _U149_in;
wire _U149_clk;
wire [15:0] _U149_out;
assign _U147_in = in[0];
assign _U147_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U147 (
    .in(_U147_in),
    .clk(_U147_clk),
    .out(_U147_out)
);
assign _U148_in = in[1];
assign _U148_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U148 (
    .in(_U148_in),
    .clk(_U148_clk),
    .out(_U148_out)
);
assign _U149_in = in[2];
assign _U149_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U149 (
    .in(_U149_in),
    .clk(_U149_clk),
    .out(_U149_out)
);
assign out[2] = _U149_out;
assign out[1] = _U148_out;
assign out[0] = _U147_out;
endmodule

module array_delay_U142 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U143_in;
wire _U143_clk;
wire [15:0] _U143_out;
wire [15:0] _U144_in;
wire _U144_clk;
wire [15:0] _U144_out;
wire [15:0] _U145_in;
wire _U145_clk;
wire [15:0] _U145_out;
assign _U143_in = in[0];
assign _U143_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U143 (
    .in(_U143_in),
    .clk(_U143_clk),
    .out(_U143_out)
);
assign _U144_in = in[1];
assign _U144_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U144 (
    .in(_U144_in),
    .clk(_U144_clk),
    .out(_U144_out)
);
assign _U145_in = in[2];
assign _U145_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U145 (
    .in(_U145_in),
    .clk(_U145_clk),
    .out(_U145_out)
);
assign out[2] = _U145_out;
assign out[1] = _U144_out;
assign out[0] = _U143_out;
endmodule

module array_delay_U121 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U122_in;
wire _U122_clk;
wire [15:0] _U122_out;
wire [15:0] _U123_in;
wire _U123_clk;
wire [15:0] _U123_out;
wire [15:0] _U124_in;
wire _U124_clk;
wire [15:0] _U124_out;
assign _U122_in = in[0];
assign _U122_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U122 (
    .in(_U122_in),
    .clk(_U122_clk),
    .out(_U122_out)
);
assign _U123_in = in[1];
assign _U123_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U123 (
    .in(_U123_in),
    .clk(_U123_clk),
    .out(_U123_out)
);
assign _U124_in = in[2];
assign _U124_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U124 (
    .in(_U124_in),
    .clk(_U124_clk),
    .out(_U124_out)
);
assign out[2] = _U124_out;
assign out[1] = _U123_out;
assign out[0] = _U122_out;
endmodule

module array_delay_U117 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U118_in;
wire _U118_clk;
wire [15:0] _U118_out;
wire [15:0] _U119_in;
wire _U119_clk;
wire [15:0] _U119_out;
wire [15:0] _U120_in;
wire _U120_clk;
wire [15:0] _U120_out;
assign _U118_in = in[0];
assign _U118_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U118 (
    .in(_U118_in),
    .clk(_U118_clk),
    .out(_U118_out)
);
assign _U119_in = in[1];
assign _U119_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U119 (
    .in(_U119_in),
    .clk(_U119_clk),
    .out(_U119_out)
);
assign _U120_in = in[2];
assign _U120_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U120 (
    .in(_U120_in),
    .clk(_U120_clk),
    .out(_U120_out)
);
assign out[2] = _U120_out;
assign out[1] = _U119_out;
assign out[0] = _U118_out;
endmodule

module aff__U988 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U980 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U979 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U980 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U973 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h002e);
endmodule

module aff__U965 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U964 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U965 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U963 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U978_out;
wire [15:0] addrgen__U978_d [0:0];
wire [15:0] addrgen__U993_out;
wire [15:0] addrgen__U993_d [0:0];
wire ctrl__U972_clk;
wire ctrl__U972_valid;
wire [15:0] ctrl__U972_d [0:0];
wire ctrl__U987_clk;
wire ctrl__U987_valid;
wire [15:0] ctrl__U987_d [0:0];
wire inner_sram__U994_bank_clk;
wire inner_sram__U994_bank_rst_n;
wire inner_sram__U994_bank_flush;
wire inner_sram__U994_bank_ren_in;
wire inner_sram__U994_bank_wen_in;
wire [15:0] inner_sram__U994_bank_waddr;
wire [15:0] inner_sram__U994_bank_raddr;
wire [15:0] inner_sram__U994_bank_wdata;
assign addrgen__U978_d[0] = ctrl__U972_d[0];
aff__U973 addrgen__U978 (
    .out(addrgen__U978_out),
    .d(addrgen__U978_d)
);
assign addrgen__U993_d[0] = ctrl__U987_d[0];
aff__U988 addrgen__U993 (
    .out(addrgen__U993_out),
    .d(addrgen__U993_d)
);
assign ctrl__U972_clk = clk;
affine_controller__U964 ctrl__U972 (
    .clk(ctrl__U972_clk),
    .valid(ctrl__U972_valid),
    .d(ctrl__U972_d)
);
assign ctrl__U987_clk = clk;
affine_controller__U979 ctrl__U987 (
    .clk(ctrl__U987_clk),
    .valid(ctrl__U987_valid),
    .d(ctrl__U987_d)
);
assign inner_sram__U994_bank_clk = clk;
assign inner_sram__U994_bank_rst_n = rst_n;
assign inner_sram__U994_bank_flush = flush;
assign inner_sram__U994_bank_ren_in = ctrl__U987_valid;
assign inner_sram__U994_bank_wen_in = ctrl__U972_valid;
assign inner_sram__U994_bank_waddr = addrgen__U978_out;
assign inner_sram__U994_bank_raddr = addrgen__U993_out;
assign inner_sram__U994_bank_wdata = wdata;
inner_sram__U994 inner_sram__U994_bank (
    .clk(inner_sram__U994_bank_clk),
    .rst_n(inner_sram__U994_bank_rst_n),
    .flush(inner_sram__U994_bank_flush),
    .ren_in(inner_sram__U994_bank_ren_in),
    .wen_in(inner_sram__U994_bank_wen_in),
    .waddr(inner_sram__U994_bank_waddr),
    .raddr(inner_sram__U994_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U994_bank_wdata)
);
endmodule

module aff__U949 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U941 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U940 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U941 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U934 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000c);
endmodule

module aff__U926 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U925 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U926 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U924 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U939_out;
wire [15:0] addrgen__U939_d [0:0];
wire [15:0] addrgen__U954_out;
wire [15:0] addrgen__U954_d [0:0];
wire ctrl__U933_clk;
wire ctrl__U933_valid;
wire [15:0] ctrl__U933_d [0:0];
wire ctrl__U948_clk;
wire ctrl__U948_valid;
wire [15:0] ctrl__U948_d [0:0];
wire inner_sram__U955_bank_clk;
wire inner_sram__U955_bank_rst_n;
wire inner_sram__U955_bank_flush;
wire inner_sram__U955_bank_ren_in;
wire inner_sram__U955_bank_wen_in;
wire [15:0] inner_sram__U955_bank_waddr;
wire [15:0] inner_sram__U955_bank_raddr;
wire [15:0] inner_sram__U955_bank_wdata;
assign addrgen__U939_d[0] = ctrl__U933_d[0];
aff__U934 addrgen__U939 (
    .out(addrgen__U939_out),
    .d(addrgen__U939_d)
);
assign addrgen__U954_d[0] = ctrl__U948_d[0];
aff__U949 addrgen__U954 (
    .out(addrgen__U954_out),
    .d(addrgen__U954_d)
);
assign ctrl__U933_clk = clk;
affine_controller__U925 ctrl__U933 (
    .clk(ctrl__U933_clk),
    .valid(ctrl__U933_valid),
    .d(ctrl__U933_d)
);
assign ctrl__U948_clk = clk;
affine_controller__U940 ctrl__U948 (
    .clk(ctrl__U948_clk),
    .valid(ctrl__U948_valid),
    .d(ctrl__U948_d)
);
assign inner_sram__U955_bank_clk = clk;
assign inner_sram__U955_bank_rst_n = rst_n;
assign inner_sram__U955_bank_flush = flush;
assign inner_sram__U955_bank_ren_in = ctrl__U948_valid;
assign inner_sram__U955_bank_wen_in = ctrl__U933_valid;
assign inner_sram__U955_bank_waddr = addrgen__U939_out;
assign inner_sram__U955_bank_raddr = addrgen__U954_out;
assign inner_sram__U955_bank_wdata = wdata;
inner_sram__U955 inner_sram__U955_bank (
    .clk(inner_sram__U955_bank_clk),
    .rst_n(inner_sram__U955_bank_rst_n),
    .flush(inner_sram__U955_bank_flush),
    .ren_in(inner_sram__U955_bank_ren_in),
    .wen_in(inner_sram__U955_bank_wen_in),
    .waddr(inner_sram__U955_bank_waddr),
    .raddr(inner_sram__U955_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U955_bank_wdata)
);
endmodule

module aff__U901 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U893 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U892 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U893 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U886 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U878 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U877 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U878 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U876 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U891_out;
wire [15:0] addrgen__U891_d [0:0];
wire [15:0] addrgen__U906_out;
wire [15:0] addrgen__U906_d [0:0];
wire ctrl__U885_clk;
wire ctrl__U885_valid;
wire [15:0] ctrl__U885_d [0:0];
wire ctrl__U900_clk;
wire ctrl__U900_valid;
wire [15:0] ctrl__U900_d [0:0];
wire inner_sram__U907_bank_clk;
wire inner_sram__U907_bank_rst_n;
wire inner_sram__U907_bank_flush;
wire inner_sram__U907_bank_ren_in;
wire inner_sram__U907_bank_wen_in;
wire [15:0] inner_sram__U907_bank_waddr;
wire [15:0] inner_sram__U907_bank_raddr;
wire [15:0] inner_sram__U907_bank_wdata;
assign addrgen__U891_d[0] = ctrl__U885_d[0];
aff__U886 addrgen__U891 (
    .out(addrgen__U891_out),
    .d(addrgen__U891_d)
);
assign addrgen__U906_d[0] = ctrl__U900_d[0];
aff__U901 addrgen__U906 (
    .out(addrgen__U906_out),
    .d(addrgen__U906_d)
);
assign ctrl__U885_clk = clk;
affine_controller__U877 ctrl__U885 (
    .clk(ctrl__U885_clk),
    .valid(ctrl__U885_valid),
    .d(ctrl__U885_d)
);
assign ctrl__U900_clk = clk;
affine_controller__U892 ctrl__U900 (
    .clk(ctrl__U900_clk),
    .valid(ctrl__U900_valid),
    .d(ctrl__U900_d)
);
assign inner_sram__U907_bank_clk = clk;
assign inner_sram__U907_bank_rst_n = rst_n;
assign inner_sram__U907_bank_flush = flush;
assign inner_sram__U907_bank_ren_in = ctrl__U900_valid;
assign inner_sram__U907_bank_wen_in = ctrl__U885_valid;
assign inner_sram__U907_bank_waddr = addrgen__U891_out;
assign inner_sram__U907_bank_raddr = addrgen__U906_out;
assign inner_sram__U907_bank_wdata = wdata;
inner_sram__U907 inner_sram__U907_bank (
    .clk(inner_sram__U907_bank_clk),
    .rst_n(inner_sram__U907_bank_rst_n),
    .flush(inner_sram__U907_bank_flush),
    .ren_in(inner_sram__U907_bank_ren_in),
    .wen_in(inner_sram__U907_bank_wen_in),
    .waddr(inner_sram__U907_bank_waddr),
    .raddr(inner_sram__U907_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U907_bank_wdata)
);
endmodule

module aff__U862 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U854 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U853 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U854 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U847 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U839 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U838 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U839 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U837 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U852_out;
wire [15:0] addrgen__U852_d [0:0];
wire [15:0] addrgen__U867_out;
wire [15:0] addrgen__U867_d [0:0];
wire ctrl__U846_clk;
wire ctrl__U846_valid;
wire [15:0] ctrl__U846_d [0:0];
wire ctrl__U861_clk;
wire ctrl__U861_valid;
wire [15:0] ctrl__U861_d [0:0];
wire inner_sram__U868_bank_clk;
wire inner_sram__U868_bank_rst_n;
wire inner_sram__U868_bank_flush;
wire inner_sram__U868_bank_ren_in;
wire inner_sram__U868_bank_wen_in;
wire [15:0] inner_sram__U868_bank_waddr;
wire [15:0] inner_sram__U868_bank_raddr;
wire [15:0] inner_sram__U868_bank_wdata;
assign addrgen__U852_d[0] = ctrl__U846_d[0];
aff__U847 addrgen__U852 (
    .out(addrgen__U852_out),
    .d(addrgen__U852_d)
);
assign addrgen__U867_d[0] = ctrl__U861_d[0];
aff__U862 addrgen__U867 (
    .out(addrgen__U867_out),
    .d(addrgen__U867_d)
);
assign ctrl__U846_clk = clk;
affine_controller__U838 ctrl__U846 (
    .clk(ctrl__U846_clk),
    .valid(ctrl__U846_valid),
    .d(ctrl__U846_d)
);
assign ctrl__U861_clk = clk;
affine_controller__U853 ctrl__U861 (
    .clk(ctrl__U861_clk),
    .valid(ctrl__U861_valid),
    .d(ctrl__U861_d)
);
assign inner_sram__U868_bank_clk = clk;
assign inner_sram__U868_bank_rst_n = rst_n;
assign inner_sram__U868_bank_flush = flush;
assign inner_sram__U868_bank_ren_in = ctrl__U861_valid;
assign inner_sram__U868_bank_wen_in = ctrl__U846_valid;
assign inner_sram__U868_bank_waddr = addrgen__U852_out;
assign inner_sram__U868_bank_raddr = addrgen__U867_out;
assign inner_sram__U868_bank_wdata = wdata;
inner_sram__U868 inner_sram__U868_bank (
    .clk(inner_sram__U868_bank_clk),
    .rst_n(inner_sram__U868_bank_rst_n),
    .flush(inner_sram__U868_bank_flush),
    .ren_in(inner_sram__U868_bank_ren_in),
    .wen_in(inner_sram__U868_bank_wen_in),
    .waddr(inner_sram__U868_bank_waddr),
    .raddr(inner_sram__U868_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U868_bank_wdata)
);
endmodule

module lyy_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_lgyy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgyy_stencil_1_read [8:0],
    input op_hcompute_lyy_stencil_write_wen,
    input [15:0] op_hcompute_lyy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lyy_stencil_write [0:0]
);
wire delay_sr_U830_clk;
wire [15:0] delay_sr_U830_wdata;
wire [15:0] delay_sr_U830_rdata;
wire delay_sr_U830_rst_n;
wire delay_sr_U830_flush;
wire delay_sr_U833_clk;
wire [15:0] delay_sr_U833_wdata;
wire [15:0] delay_sr_U833_rdata;
wire delay_sr_U833_rst_n;
wire delay_sr_U833_flush;
wire delay_sr_U836_clk;
wire [15:0] delay_sr_U836_wdata;
wire [15:0] delay_sr_U836_rdata;
wire delay_sr_U836_rst_n;
wire delay_sr_U836_flush;
wire delay_sr_U869_clk;
wire [15:0] delay_sr_U869_wdata;
wire [15:0] delay_sr_U869_rdata;
wire delay_sr_U869_rst_n;
wire delay_sr_U869_flush;
wire delay_sr_U872_clk;
wire [15:0] delay_sr_U872_wdata;
wire [15:0] delay_sr_U872_rdata;
wire delay_sr_U872_rst_n;
wire delay_sr_U872_flush;
wire delay_sr_U875_clk;
wire [15:0] delay_sr_U875_wdata;
wire [15:0] delay_sr_U875_rdata;
wire delay_sr_U875_rst_n;
wire delay_sr_U875_flush;
wire delay_sr_U908_clk;
wire [15:0] delay_sr_U908_wdata;
wire [15:0] delay_sr_U908_rdata;
wire delay_sr_U908_rst_n;
wire delay_sr_U908_flush;
wire delay_sr_U911_clk;
wire [15:0] delay_sr_U911_wdata;
wire [15:0] delay_sr_U911_rdata;
wire delay_sr_U911_rst_n;
wire delay_sr_U911_flush;
wire delay_sr_U914_clk;
wire [15:0] delay_sr_U914_wdata;
wire [15:0] delay_sr_U914_rdata;
wire delay_sr_U914_rst_n;
wire delay_sr_U914_flush;
assign delay_sr_U830_clk = clk;
assign delay_sr_U830_wdata = op_hcompute_lyy_stencil_write[0];
assign delay_sr_U830_rst_n = rst_n;
assign delay_sr_U830_flush = flush;
delay__U822 delay_sr_U830 (
    .clk(delay_sr_U830_clk),
    .wdata(delay_sr_U830_wdata),
    .rdata(delay_sr_U830_rdata),
    .rst_n(delay_sr_U830_rst_n),
    .flush(delay_sr_U830_flush)
);
assign delay_sr_U833_clk = clk;
assign delay_sr_U833_wdata = delay_sr_U830_rdata;
assign delay_sr_U833_rst_n = rst_n;
assign delay_sr_U833_flush = flush;
delay__U831 delay_sr_U833 (
    .clk(delay_sr_U833_clk),
    .wdata(delay_sr_U833_wdata),
    .rdata(delay_sr_U833_rdata),
    .rst_n(delay_sr_U833_rst_n),
    .flush(delay_sr_U833_flush)
);
assign delay_sr_U836_clk = clk;
assign delay_sr_U836_wdata = delay_sr_U833_rdata;
assign delay_sr_U836_rst_n = rst_n;
assign delay_sr_U836_flush = flush;
delay__U834 delay_sr_U836 (
    .clk(delay_sr_U836_clk),
    .wdata(delay_sr_U836_wdata),
    .rdata(delay_sr_U836_rdata),
    .rst_n(delay_sr_U836_rst_n),
    .flush(delay_sr_U836_flush)
);
assign delay_sr_U869_clk = clk;
assign delay_sr_U869_wdata = delay_sr_U836_rdata;
assign delay_sr_U869_rst_n = rst_n;
assign delay_sr_U869_flush = flush;
memtile_long_delay__U837 delay_sr_U869 (
    .clk(delay_sr_U869_clk),
    .wdata(delay_sr_U869_wdata),
    .rdata(delay_sr_U869_rdata),
    .rst_n(delay_sr_U869_rst_n),
    .flush(delay_sr_U869_flush)
);
assign delay_sr_U872_clk = clk;
assign delay_sr_U872_wdata = delay_sr_U869_rdata;
assign delay_sr_U872_rst_n = rst_n;
assign delay_sr_U872_flush = flush;
delay__U870 delay_sr_U872 (
    .clk(delay_sr_U872_clk),
    .wdata(delay_sr_U872_wdata),
    .rdata(delay_sr_U872_rdata),
    .rst_n(delay_sr_U872_rst_n),
    .flush(delay_sr_U872_flush)
);
assign delay_sr_U875_clk = clk;
assign delay_sr_U875_wdata = delay_sr_U872_rdata;
assign delay_sr_U875_rst_n = rst_n;
assign delay_sr_U875_flush = flush;
delay__U873 delay_sr_U875 (
    .clk(delay_sr_U875_clk),
    .wdata(delay_sr_U875_wdata),
    .rdata(delay_sr_U875_rdata),
    .rst_n(delay_sr_U875_rst_n),
    .flush(delay_sr_U875_flush)
);
assign delay_sr_U908_clk = clk;
assign delay_sr_U908_wdata = delay_sr_U875_rdata;
assign delay_sr_U908_rst_n = rst_n;
assign delay_sr_U908_flush = flush;
memtile_long_delay__U876 delay_sr_U908 (
    .clk(delay_sr_U908_clk),
    .wdata(delay_sr_U908_wdata),
    .rdata(delay_sr_U908_rdata),
    .rst_n(delay_sr_U908_rst_n),
    .flush(delay_sr_U908_flush)
);
assign delay_sr_U911_clk = clk;
assign delay_sr_U911_wdata = delay_sr_U908_rdata;
assign delay_sr_U911_rst_n = rst_n;
assign delay_sr_U911_flush = flush;
delay__U909 delay_sr_U911 (
    .clk(delay_sr_U911_clk),
    .wdata(delay_sr_U911_wdata),
    .rdata(delay_sr_U911_rdata),
    .rst_n(delay_sr_U911_rst_n),
    .flush(delay_sr_U911_flush)
);
assign delay_sr_U914_clk = clk;
assign delay_sr_U914_wdata = delay_sr_U911_rdata;
assign delay_sr_U914_rst_n = rst_n;
assign delay_sr_U914_flush = flush;
delay__U912 delay_sr_U914 (
    .clk(delay_sr_U914_clk),
    .wdata(delay_sr_U914_wdata),
    .rdata(delay_sr_U914_rdata),
    .rst_n(delay_sr_U914_rst_n),
    .flush(delay_sr_U914_flush)
);
assign op_hcompute_lgyy_stencil_1_read[8] = delay_sr_U833_rdata;
assign op_hcompute_lgyy_stencil_1_read[7] = delay_sr_U830_rdata;
assign op_hcompute_lgyy_stencil_1_read[6] = delay_sr_U836_rdata;
assign op_hcompute_lgyy_stencil_1_read[5] = delay_sr_U869_rdata;
assign op_hcompute_lgyy_stencil_1_read[4] = delay_sr_U872_rdata;
assign op_hcompute_lgyy_stencil_1_read[3] = delay_sr_U875_rdata;
assign op_hcompute_lgyy_stencil_1_read[2] = delay_sr_U908_rdata;
assign op_hcompute_lgyy_stencil_1_read[1] = delay_sr_U911_rdata;
assign op_hcompute_lgyy_stencil_1_read[0] = delay_sr_U914_rdata;
endmodule

module aff__U808 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U800 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U799 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U800 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U793 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U785 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U784 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U785 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U783 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U798_out;
wire [15:0] addrgen__U798_d [0:0];
wire [15:0] addrgen__U813_out;
wire [15:0] addrgen__U813_d [0:0];
wire ctrl__U792_clk;
wire ctrl__U792_valid;
wire [15:0] ctrl__U792_d [0:0];
wire ctrl__U807_clk;
wire ctrl__U807_valid;
wire [15:0] ctrl__U807_d [0:0];
wire inner_sram__U814_bank_clk;
wire inner_sram__U814_bank_rst_n;
wire inner_sram__U814_bank_flush;
wire inner_sram__U814_bank_ren_in;
wire inner_sram__U814_bank_wen_in;
wire [15:0] inner_sram__U814_bank_waddr;
wire [15:0] inner_sram__U814_bank_raddr;
wire [15:0] inner_sram__U814_bank_wdata;
assign addrgen__U798_d[0] = ctrl__U792_d[0];
aff__U793 addrgen__U798 (
    .out(addrgen__U798_out),
    .d(addrgen__U798_d)
);
assign addrgen__U813_d[0] = ctrl__U807_d[0];
aff__U808 addrgen__U813 (
    .out(addrgen__U813_out),
    .d(addrgen__U813_d)
);
assign ctrl__U792_clk = clk;
affine_controller__U784 ctrl__U792 (
    .clk(ctrl__U792_clk),
    .valid(ctrl__U792_valid),
    .d(ctrl__U792_d)
);
assign ctrl__U807_clk = clk;
affine_controller__U799 ctrl__U807 (
    .clk(ctrl__U807_clk),
    .valid(ctrl__U807_valid),
    .d(ctrl__U807_d)
);
assign inner_sram__U814_bank_clk = clk;
assign inner_sram__U814_bank_rst_n = rst_n;
assign inner_sram__U814_bank_flush = flush;
assign inner_sram__U814_bank_ren_in = ctrl__U807_valid;
assign inner_sram__U814_bank_wen_in = ctrl__U792_valid;
assign inner_sram__U814_bank_waddr = addrgen__U798_out;
assign inner_sram__U814_bank_raddr = addrgen__U813_out;
assign inner_sram__U814_bank_wdata = wdata;
inner_sram__U814 inner_sram__U814_bank (
    .clk(inner_sram__U814_bank_clk),
    .rst_n(inner_sram__U814_bank_rst_n),
    .flush(inner_sram__U814_bank_flush),
    .ren_in(inner_sram__U814_bank_ren_in),
    .wen_in(inner_sram__U814_bank_wen_in),
    .waddr(inner_sram__U814_bank_waddr),
    .raddr(inner_sram__U814_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U814_bank_wdata)
);
endmodule

module aff__U769 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U761 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U760 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U761 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U76 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U75 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U76 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U754 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U746 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U745 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U746 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U744 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U759_out;
wire [15:0] addrgen__U759_d [0:0];
wire [15:0] addrgen__U774_out;
wire [15:0] addrgen__U774_d [0:0];
wire ctrl__U753_clk;
wire ctrl__U753_valid;
wire [15:0] ctrl__U753_d [0:0];
wire ctrl__U768_clk;
wire ctrl__U768_valid;
wire [15:0] ctrl__U768_d [0:0];
wire inner_sram__U775_bank_clk;
wire inner_sram__U775_bank_rst_n;
wire inner_sram__U775_bank_flush;
wire inner_sram__U775_bank_ren_in;
wire inner_sram__U775_bank_wen_in;
wire [15:0] inner_sram__U775_bank_waddr;
wire [15:0] inner_sram__U775_bank_raddr;
wire [15:0] inner_sram__U775_bank_wdata;
assign addrgen__U759_d[0] = ctrl__U753_d[0];
aff__U754 addrgen__U759 (
    .out(addrgen__U759_out),
    .d(addrgen__U759_d)
);
assign addrgen__U774_d[0] = ctrl__U768_d[0];
aff__U769 addrgen__U774 (
    .out(addrgen__U774_out),
    .d(addrgen__U774_d)
);
assign ctrl__U753_clk = clk;
affine_controller__U745 ctrl__U753 (
    .clk(ctrl__U753_clk),
    .valid(ctrl__U753_valid),
    .d(ctrl__U753_d)
);
assign ctrl__U768_clk = clk;
affine_controller__U760 ctrl__U768 (
    .clk(ctrl__U768_clk),
    .valid(ctrl__U768_valid),
    .d(ctrl__U768_d)
);
assign inner_sram__U775_bank_clk = clk;
assign inner_sram__U775_bank_rst_n = rst_n;
assign inner_sram__U775_bank_flush = flush;
assign inner_sram__U775_bank_ren_in = ctrl__U768_valid;
assign inner_sram__U775_bank_wen_in = ctrl__U753_valid;
assign inner_sram__U775_bank_waddr = addrgen__U759_out;
assign inner_sram__U775_bank_raddr = addrgen__U774_out;
assign inner_sram__U775_bank_wdata = wdata;
inner_sram__U775 inner_sram__U775_bank (
    .clk(inner_sram__U775_bank_clk),
    .rst_n(inner_sram__U775_bank_rst_n),
    .flush(inner_sram__U775_bank_flush),
    .ren_in(inner_sram__U775_bank_ren_in),
    .wen_in(inner_sram__U775_bank_wen_in),
    .waddr(inner_sram__U775_bank_waddr),
    .raddr(inner_sram__U775_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U775_bank_wdata)
);
endmodule

module lxy_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_lgxy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxy_stencil_1_read [8:0],
    input op_hcompute_lxy_stencil_write_wen,
    input [15:0] op_hcompute_lxy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lxy_stencil_write [0:0]
);
wire delay_sr_U737_clk;
wire [15:0] delay_sr_U737_wdata;
wire [15:0] delay_sr_U737_rdata;
wire delay_sr_U737_rst_n;
wire delay_sr_U737_flush;
wire delay_sr_U740_clk;
wire [15:0] delay_sr_U740_wdata;
wire [15:0] delay_sr_U740_rdata;
wire delay_sr_U740_rst_n;
wire delay_sr_U740_flush;
wire delay_sr_U743_clk;
wire [15:0] delay_sr_U743_wdata;
wire [15:0] delay_sr_U743_rdata;
wire delay_sr_U743_rst_n;
wire delay_sr_U743_flush;
wire delay_sr_U776_clk;
wire [15:0] delay_sr_U776_wdata;
wire [15:0] delay_sr_U776_rdata;
wire delay_sr_U776_rst_n;
wire delay_sr_U776_flush;
wire delay_sr_U779_clk;
wire [15:0] delay_sr_U779_wdata;
wire [15:0] delay_sr_U779_rdata;
wire delay_sr_U779_rst_n;
wire delay_sr_U779_flush;
wire delay_sr_U782_clk;
wire [15:0] delay_sr_U782_wdata;
wire [15:0] delay_sr_U782_rdata;
wire delay_sr_U782_rst_n;
wire delay_sr_U782_flush;
wire delay_sr_U815_clk;
wire [15:0] delay_sr_U815_wdata;
wire [15:0] delay_sr_U815_rdata;
wire delay_sr_U815_rst_n;
wire delay_sr_U815_flush;
wire delay_sr_U818_clk;
wire [15:0] delay_sr_U818_wdata;
wire [15:0] delay_sr_U818_rdata;
wire delay_sr_U818_rst_n;
wire delay_sr_U818_flush;
wire delay_sr_U821_clk;
wire [15:0] delay_sr_U821_wdata;
wire [15:0] delay_sr_U821_rdata;
wire delay_sr_U821_rst_n;
wire delay_sr_U821_flush;
assign delay_sr_U737_clk = clk;
assign delay_sr_U737_wdata = op_hcompute_lxy_stencil_write[0];
assign delay_sr_U737_rst_n = rst_n;
assign delay_sr_U737_flush = flush;
delay__U729 delay_sr_U737 (
    .clk(delay_sr_U737_clk),
    .wdata(delay_sr_U737_wdata),
    .rdata(delay_sr_U737_rdata),
    .rst_n(delay_sr_U737_rst_n),
    .flush(delay_sr_U737_flush)
);
assign delay_sr_U740_clk = clk;
assign delay_sr_U740_wdata = delay_sr_U737_rdata;
assign delay_sr_U740_rst_n = rst_n;
assign delay_sr_U740_flush = flush;
delay__U738 delay_sr_U740 (
    .clk(delay_sr_U740_clk),
    .wdata(delay_sr_U740_wdata),
    .rdata(delay_sr_U740_rdata),
    .rst_n(delay_sr_U740_rst_n),
    .flush(delay_sr_U740_flush)
);
assign delay_sr_U743_clk = clk;
assign delay_sr_U743_wdata = delay_sr_U740_rdata;
assign delay_sr_U743_rst_n = rst_n;
assign delay_sr_U743_flush = flush;
delay__U741 delay_sr_U743 (
    .clk(delay_sr_U743_clk),
    .wdata(delay_sr_U743_wdata),
    .rdata(delay_sr_U743_rdata),
    .rst_n(delay_sr_U743_rst_n),
    .flush(delay_sr_U743_flush)
);
assign delay_sr_U776_clk = clk;
assign delay_sr_U776_wdata = delay_sr_U743_rdata;
assign delay_sr_U776_rst_n = rst_n;
assign delay_sr_U776_flush = flush;
memtile_long_delay__U744 delay_sr_U776 (
    .clk(delay_sr_U776_clk),
    .wdata(delay_sr_U776_wdata),
    .rdata(delay_sr_U776_rdata),
    .rst_n(delay_sr_U776_rst_n),
    .flush(delay_sr_U776_flush)
);
assign delay_sr_U779_clk = clk;
assign delay_sr_U779_wdata = delay_sr_U776_rdata;
assign delay_sr_U779_rst_n = rst_n;
assign delay_sr_U779_flush = flush;
delay__U777 delay_sr_U779 (
    .clk(delay_sr_U779_clk),
    .wdata(delay_sr_U779_wdata),
    .rdata(delay_sr_U779_rdata),
    .rst_n(delay_sr_U779_rst_n),
    .flush(delay_sr_U779_flush)
);
assign delay_sr_U782_clk = clk;
assign delay_sr_U782_wdata = delay_sr_U779_rdata;
assign delay_sr_U782_rst_n = rst_n;
assign delay_sr_U782_flush = flush;
delay__U780 delay_sr_U782 (
    .clk(delay_sr_U782_clk),
    .wdata(delay_sr_U782_wdata),
    .rdata(delay_sr_U782_rdata),
    .rst_n(delay_sr_U782_rst_n),
    .flush(delay_sr_U782_flush)
);
assign delay_sr_U815_clk = clk;
assign delay_sr_U815_wdata = delay_sr_U782_rdata;
assign delay_sr_U815_rst_n = rst_n;
assign delay_sr_U815_flush = flush;
memtile_long_delay__U783 delay_sr_U815 (
    .clk(delay_sr_U815_clk),
    .wdata(delay_sr_U815_wdata),
    .rdata(delay_sr_U815_rdata),
    .rst_n(delay_sr_U815_rst_n),
    .flush(delay_sr_U815_flush)
);
assign delay_sr_U818_clk = clk;
assign delay_sr_U818_wdata = delay_sr_U815_rdata;
assign delay_sr_U818_rst_n = rst_n;
assign delay_sr_U818_flush = flush;
delay__U816 delay_sr_U818 (
    .clk(delay_sr_U818_clk),
    .wdata(delay_sr_U818_wdata),
    .rdata(delay_sr_U818_rdata),
    .rst_n(delay_sr_U818_rst_n),
    .flush(delay_sr_U818_flush)
);
assign delay_sr_U821_clk = clk;
assign delay_sr_U821_wdata = delay_sr_U818_rdata;
assign delay_sr_U821_rst_n = rst_n;
assign delay_sr_U821_flush = flush;
delay__U819 delay_sr_U821 (
    .clk(delay_sr_U821_clk),
    .wdata(delay_sr_U821_wdata),
    .rdata(delay_sr_U821_rdata),
    .rst_n(delay_sr_U821_rst_n),
    .flush(delay_sr_U821_flush)
);
assign op_hcompute_lgxy_stencil_1_read[8] = delay_sr_U740_rdata;
assign op_hcompute_lgxy_stencil_1_read[7] = delay_sr_U737_rdata;
assign op_hcompute_lgxy_stencil_1_read[6] = delay_sr_U743_rdata;
assign op_hcompute_lgxy_stencil_1_read[5] = delay_sr_U776_rdata;
assign op_hcompute_lgxy_stencil_1_read[4] = delay_sr_U779_rdata;
assign op_hcompute_lgxy_stencil_1_read[3] = delay_sr_U782_rdata;
assign op_hcompute_lgxy_stencil_1_read[2] = delay_sr_U815_rdata;
assign op_hcompute_lgxy_stencil_1_read[1] = delay_sr_U818_rdata;
assign op_hcompute_lgxy_stencil_1_read[0] = delay_sr_U821_rdata;
endmodule

module aff__U715 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U707 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U706 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U707 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U700 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U692 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U691 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U692 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U690 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U705_out;
wire [15:0] addrgen__U705_d [0:0];
wire [15:0] addrgen__U720_out;
wire [15:0] addrgen__U720_d [0:0];
wire ctrl__U699_clk;
wire ctrl__U699_valid;
wire [15:0] ctrl__U699_d [0:0];
wire ctrl__U714_clk;
wire ctrl__U714_valid;
wire [15:0] ctrl__U714_d [0:0];
wire inner_sram__U721_bank_clk;
wire inner_sram__U721_bank_rst_n;
wire inner_sram__U721_bank_flush;
wire inner_sram__U721_bank_ren_in;
wire inner_sram__U721_bank_wen_in;
wire [15:0] inner_sram__U721_bank_waddr;
wire [15:0] inner_sram__U721_bank_raddr;
wire [15:0] inner_sram__U721_bank_wdata;
assign addrgen__U705_d[0] = ctrl__U699_d[0];
aff__U700 addrgen__U705 (
    .out(addrgen__U705_out),
    .d(addrgen__U705_d)
);
assign addrgen__U720_d[0] = ctrl__U714_d[0];
aff__U715 addrgen__U720 (
    .out(addrgen__U720_out),
    .d(addrgen__U720_d)
);
assign ctrl__U699_clk = clk;
affine_controller__U691 ctrl__U699 (
    .clk(ctrl__U699_clk),
    .valid(ctrl__U699_valid),
    .d(ctrl__U699_d)
);
assign ctrl__U714_clk = clk;
affine_controller__U706 ctrl__U714 (
    .clk(ctrl__U714_clk),
    .valid(ctrl__U714_valid),
    .d(ctrl__U714_d)
);
assign inner_sram__U721_bank_clk = clk;
assign inner_sram__U721_bank_rst_n = rst_n;
assign inner_sram__U721_bank_flush = flush;
assign inner_sram__U721_bank_ren_in = ctrl__U714_valid;
assign inner_sram__U721_bank_wen_in = ctrl__U699_valid;
assign inner_sram__U721_bank_waddr = addrgen__U705_out;
assign inner_sram__U721_bank_raddr = addrgen__U720_out;
assign inner_sram__U721_bank_wdata = wdata;
inner_sram__U721 inner_sram__U721_bank (
    .clk(inner_sram__U721_bank_clk),
    .rst_n(inner_sram__U721_bank_rst_n),
    .flush(inner_sram__U721_bank_flush),
    .ren_in(inner_sram__U721_bank_ren_in),
    .wen_in(inner_sram__U721_bank_wen_in),
    .waddr(inner_sram__U721_bank_waddr),
    .raddr(inner_sram__U721_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U721_bank_wdata)
);
endmodule

module aff__U676 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U668 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U667 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U668 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U661 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U653 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U652 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U653 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U651 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U666_out;
wire [15:0] addrgen__U666_d [0:0];
wire [15:0] addrgen__U681_out;
wire [15:0] addrgen__U681_d [0:0];
wire ctrl__U660_clk;
wire ctrl__U660_valid;
wire [15:0] ctrl__U660_d [0:0];
wire ctrl__U675_clk;
wire ctrl__U675_valid;
wire [15:0] ctrl__U675_d [0:0];
wire inner_sram__U682_bank_clk;
wire inner_sram__U682_bank_rst_n;
wire inner_sram__U682_bank_flush;
wire inner_sram__U682_bank_ren_in;
wire inner_sram__U682_bank_wen_in;
wire [15:0] inner_sram__U682_bank_waddr;
wire [15:0] inner_sram__U682_bank_raddr;
wire [15:0] inner_sram__U682_bank_wdata;
assign addrgen__U666_d[0] = ctrl__U660_d[0];
aff__U661 addrgen__U666 (
    .out(addrgen__U666_out),
    .d(addrgen__U666_d)
);
assign addrgen__U681_d[0] = ctrl__U675_d[0];
aff__U676 addrgen__U681 (
    .out(addrgen__U681_out),
    .d(addrgen__U681_d)
);
assign ctrl__U660_clk = clk;
affine_controller__U652 ctrl__U660 (
    .clk(ctrl__U660_clk),
    .valid(ctrl__U660_valid),
    .d(ctrl__U660_d)
);
assign ctrl__U675_clk = clk;
affine_controller__U667 ctrl__U675 (
    .clk(ctrl__U675_clk),
    .valid(ctrl__U675_valid),
    .d(ctrl__U675_d)
);
assign inner_sram__U682_bank_clk = clk;
assign inner_sram__U682_bank_rst_n = rst_n;
assign inner_sram__U682_bank_flush = flush;
assign inner_sram__U682_bank_ren_in = ctrl__U675_valid;
assign inner_sram__U682_bank_wen_in = ctrl__U660_valid;
assign inner_sram__U682_bank_waddr = addrgen__U666_out;
assign inner_sram__U682_bank_raddr = addrgen__U681_out;
assign inner_sram__U682_bank_wdata = wdata;
inner_sram__U682 inner_sram__U682_bank (
    .clk(inner_sram__U682_bank_clk),
    .rst_n(inner_sram__U682_bank_rst_n),
    .flush(inner_sram__U682_bank_flush),
    .ren_in(inner_sram__U682_bank_ren_in),
    .wen_in(inner_sram__U682_bank_wen_in),
    .waddr(inner_sram__U682_bank_waddr),
    .raddr(inner_sram__U682_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U682_bank_wdata)
);
endmodule

module lxx_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_lgxx_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxx_stencil_1_read [8:0],
    input op_hcompute_lxx_stencil_write_wen,
    input [15:0] op_hcompute_lxx_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lxx_stencil_write [0:0]
);
wire delay_sr_U644_clk;
wire [15:0] delay_sr_U644_wdata;
wire [15:0] delay_sr_U644_rdata;
wire delay_sr_U644_rst_n;
wire delay_sr_U644_flush;
wire delay_sr_U647_clk;
wire [15:0] delay_sr_U647_wdata;
wire [15:0] delay_sr_U647_rdata;
wire delay_sr_U647_rst_n;
wire delay_sr_U647_flush;
wire delay_sr_U650_clk;
wire [15:0] delay_sr_U650_wdata;
wire [15:0] delay_sr_U650_rdata;
wire delay_sr_U650_rst_n;
wire delay_sr_U650_flush;
wire delay_sr_U683_clk;
wire [15:0] delay_sr_U683_wdata;
wire [15:0] delay_sr_U683_rdata;
wire delay_sr_U683_rst_n;
wire delay_sr_U683_flush;
wire delay_sr_U686_clk;
wire [15:0] delay_sr_U686_wdata;
wire [15:0] delay_sr_U686_rdata;
wire delay_sr_U686_rst_n;
wire delay_sr_U686_flush;
wire delay_sr_U689_clk;
wire [15:0] delay_sr_U689_wdata;
wire [15:0] delay_sr_U689_rdata;
wire delay_sr_U689_rst_n;
wire delay_sr_U689_flush;
wire delay_sr_U722_clk;
wire [15:0] delay_sr_U722_wdata;
wire [15:0] delay_sr_U722_rdata;
wire delay_sr_U722_rst_n;
wire delay_sr_U722_flush;
wire delay_sr_U725_clk;
wire [15:0] delay_sr_U725_wdata;
wire [15:0] delay_sr_U725_rdata;
wire delay_sr_U725_rst_n;
wire delay_sr_U725_flush;
wire delay_sr_U728_clk;
wire [15:0] delay_sr_U728_wdata;
wire [15:0] delay_sr_U728_rdata;
wire delay_sr_U728_rst_n;
wire delay_sr_U728_flush;
assign delay_sr_U644_clk = clk;
assign delay_sr_U644_wdata = op_hcompute_lxx_stencil_write[0];
assign delay_sr_U644_rst_n = rst_n;
assign delay_sr_U644_flush = flush;
delay__U636 delay_sr_U644 (
    .clk(delay_sr_U644_clk),
    .wdata(delay_sr_U644_wdata),
    .rdata(delay_sr_U644_rdata),
    .rst_n(delay_sr_U644_rst_n),
    .flush(delay_sr_U644_flush)
);
assign delay_sr_U647_clk = clk;
assign delay_sr_U647_wdata = delay_sr_U644_rdata;
assign delay_sr_U647_rst_n = rst_n;
assign delay_sr_U647_flush = flush;
delay__U645 delay_sr_U647 (
    .clk(delay_sr_U647_clk),
    .wdata(delay_sr_U647_wdata),
    .rdata(delay_sr_U647_rdata),
    .rst_n(delay_sr_U647_rst_n),
    .flush(delay_sr_U647_flush)
);
assign delay_sr_U650_clk = clk;
assign delay_sr_U650_wdata = delay_sr_U647_rdata;
assign delay_sr_U650_rst_n = rst_n;
assign delay_sr_U650_flush = flush;
delay__U648 delay_sr_U650 (
    .clk(delay_sr_U650_clk),
    .wdata(delay_sr_U650_wdata),
    .rdata(delay_sr_U650_rdata),
    .rst_n(delay_sr_U650_rst_n),
    .flush(delay_sr_U650_flush)
);
assign delay_sr_U683_clk = clk;
assign delay_sr_U683_wdata = delay_sr_U650_rdata;
assign delay_sr_U683_rst_n = rst_n;
assign delay_sr_U683_flush = flush;
memtile_long_delay__U651 delay_sr_U683 (
    .clk(delay_sr_U683_clk),
    .wdata(delay_sr_U683_wdata),
    .rdata(delay_sr_U683_rdata),
    .rst_n(delay_sr_U683_rst_n),
    .flush(delay_sr_U683_flush)
);
assign delay_sr_U686_clk = clk;
assign delay_sr_U686_wdata = delay_sr_U683_rdata;
assign delay_sr_U686_rst_n = rst_n;
assign delay_sr_U686_flush = flush;
delay__U684 delay_sr_U686 (
    .clk(delay_sr_U686_clk),
    .wdata(delay_sr_U686_wdata),
    .rdata(delay_sr_U686_rdata),
    .rst_n(delay_sr_U686_rst_n),
    .flush(delay_sr_U686_flush)
);
assign delay_sr_U689_clk = clk;
assign delay_sr_U689_wdata = delay_sr_U686_rdata;
assign delay_sr_U689_rst_n = rst_n;
assign delay_sr_U689_flush = flush;
delay__U687 delay_sr_U689 (
    .clk(delay_sr_U689_clk),
    .wdata(delay_sr_U689_wdata),
    .rdata(delay_sr_U689_rdata),
    .rst_n(delay_sr_U689_rst_n),
    .flush(delay_sr_U689_flush)
);
assign delay_sr_U722_clk = clk;
assign delay_sr_U722_wdata = delay_sr_U689_rdata;
assign delay_sr_U722_rst_n = rst_n;
assign delay_sr_U722_flush = flush;
memtile_long_delay__U690 delay_sr_U722 (
    .clk(delay_sr_U722_clk),
    .wdata(delay_sr_U722_wdata),
    .rdata(delay_sr_U722_rdata),
    .rst_n(delay_sr_U722_rst_n),
    .flush(delay_sr_U722_flush)
);
assign delay_sr_U725_clk = clk;
assign delay_sr_U725_wdata = delay_sr_U722_rdata;
assign delay_sr_U725_rst_n = rst_n;
assign delay_sr_U725_flush = flush;
delay__U723 delay_sr_U725 (
    .clk(delay_sr_U725_clk),
    .wdata(delay_sr_U725_wdata),
    .rdata(delay_sr_U725_rdata),
    .rst_n(delay_sr_U725_rst_n),
    .flush(delay_sr_U725_flush)
);
assign delay_sr_U728_clk = clk;
assign delay_sr_U728_wdata = delay_sr_U725_rdata;
assign delay_sr_U728_rst_n = rst_n;
assign delay_sr_U728_flush = flush;
delay__U726 delay_sr_U728 (
    .clk(delay_sr_U728_clk),
    .wdata(delay_sr_U728_wdata),
    .rdata(delay_sr_U728_rdata),
    .rst_n(delay_sr_U728_rst_n),
    .flush(delay_sr_U728_flush)
);
assign op_hcompute_lgxx_stencil_1_read[8] = delay_sr_U647_rdata;
assign op_hcompute_lgxx_stencil_1_read[7] = delay_sr_U644_rdata;
assign op_hcompute_lgxx_stencil_1_read[6] = delay_sr_U650_rdata;
assign op_hcompute_lgxx_stencil_1_read[5] = delay_sr_U683_rdata;
assign op_hcompute_lgxx_stencil_1_read[4] = delay_sr_U686_rdata;
assign op_hcompute_lgxx_stencil_1_read[3] = delay_sr_U689_rdata;
assign op_hcompute_lgxx_stencil_1_read[2] = delay_sr_U722_rdata;
assign op_hcompute_lgxx_stencil_1_read[1] = delay_sr_U725_rdata;
assign op_hcompute_lgxx_stencil_1_read[0] = delay_sr_U728_rdata;
endmodule

module aff__U612 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U604 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U603 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U604 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U597 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000e);
endmodule

module aff__U589 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U588 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U589 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U587 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U602_out;
wire [15:0] addrgen__U602_d [0:0];
wire [15:0] addrgen__U617_out;
wire [15:0] addrgen__U617_d [0:0];
wire ctrl__U596_clk;
wire ctrl__U596_valid;
wire [15:0] ctrl__U596_d [0:0];
wire ctrl__U611_clk;
wire ctrl__U611_valid;
wire [15:0] ctrl__U611_d [0:0];
wire inner_sram__U618_bank_clk;
wire inner_sram__U618_bank_rst_n;
wire inner_sram__U618_bank_flush;
wire inner_sram__U618_bank_ren_in;
wire inner_sram__U618_bank_wen_in;
wire [15:0] inner_sram__U618_bank_waddr;
wire [15:0] inner_sram__U618_bank_raddr;
wire [15:0] inner_sram__U618_bank_wdata;
assign addrgen__U602_d[0] = ctrl__U596_d[0];
aff__U597 addrgen__U602 (
    .out(addrgen__U602_out),
    .d(addrgen__U602_d)
);
assign addrgen__U617_d[0] = ctrl__U611_d[0];
aff__U612 addrgen__U617 (
    .out(addrgen__U617_out),
    .d(addrgen__U617_d)
);
assign ctrl__U596_clk = clk;
affine_controller__U588 ctrl__U596 (
    .clk(ctrl__U596_clk),
    .valid(ctrl__U596_valid),
    .d(ctrl__U596_d)
);
assign ctrl__U611_clk = clk;
affine_controller__U603 ctrl__U611 (
    .clk(ctrl__U611_clk),
    .valid(ctrl__U611_valid),
    .d(ctrl__U611_d)
);
assign inner_sram__U618_bank_clk = clk;
assign inner_sram__U618_bank_rst_n = rst_n;
assign inner_sram__U618_bank_flush = flush;
assign inner_sram__U618_bank_ren_in = ctrl__U611_valid;
assign inner_sram__U618_bank_wen_in = ctrl__U596_valid;
assign inner_sram__U618_bank_waddr = addrgen__U602_out;
assign inner_sram__U618_bank_raddr = addrgen__U617_out;
assign inner_sram__U618_bank_wdata = wdata;
inner_sram__U618 inner_sram__U618_bank (
    .clk(inner_sram__U618_bank_clk),
    .rst_n(inner_sram__U618_bank_rst_n),
    .flush(inner_sram__U618_bank_flush),
    .ren_in(inner_sram__U618_bank_ren_in),
    .wen_in(inner_sram__U618_bank_wen_in),
    .waddr(inner_sram__U618_bank_waddr),
    .raddr(inner_sram__U618_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U618_bank_wdata)
);
endmodule

module lgxy_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgxy_stencil_1_write_wen,
    input [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxy_stencil_1_write [0:0]
);
wire delay_sr_U619_clk;
wire [15:0] delay_sr_U619_wdata;
wire [15:0] delay_sr_U619_rdata;
wire delay_sr_U619_rst_n;
wire delay_sr_U619_flush;
assign delay_sr_U619_clk = clk;
assign delay_sr_U619_wdata = op_hcompute_lgxy_stencil_1_write[0];
assign delay_sr_U619_rst_n = rst_n;
assign delay_sr_U619_flush = flush;
memtile_long_delay__U587 delay_sr_U619 (
    .clk(delay_sr_U619_clk),
    .wdata(delay_sr_U619_wdata),
    .rdata(delay_sr_U619_rdata),
    .rst_n(delay_sr_U619_rst_n),
    .flush(delay_sr_U619_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U619_rdata;
endmodule

module aff__U574 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U566 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U565 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U566 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U559 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h001d);
endmodule

module aff__U551 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U550 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U551 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U549 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U564_out;
wire [15:0] addrgen__U564_d [0:0];
wire [15:0] addrgen__U579_out;
wire [15:0] addrgen__U579_d [0:0];
wire ctrl__U558_clk;
wire ctrl__U558_valid;
wire [15:0] ctrl__U558_d [0:0];
wire ctrl__U573_clk;
wire ctrl__U573_valid;
wire [15:0] ctrl__U573_d [0:0];
wire inner_sram__U580_bank_clk;
wire inner_sram__U580_bank_rst_n;
wire inner_sram__U580_bank_flush;
wire inner_sram__U580_bank_ren_in;
wire inner_sram__U580_bank_wen_in;
wire [15:0] inner_sram__U580_bank_waddr;
wire [15:0] inner_sram__U580_bank_raddr;
wire [15:0] inner_sram__U580_bank_wdata;
assign addrgen__U564_d[0] = ctrl__U558_d[0];
aff__U559 addrgen__U564 (
    .out(addrgen__U564_out),
    .d(addrgen__U564_d)
);
assign addrgen__U579_d[0] = ctrl__U573_d[0];
aff__U574 addrgen__U579 (
    .out(addrgen__U579_out),
    .d(addrgen__U579_d)
);
assign ctrl__U558_clk = clk;
affine_controller__U550 ctrl__U558 (
    .clk(ctrl__U558_clk),
    .valid(ctrl__U558_valid),
    .d(ctrl__U558_d)
);
assign ctrl__U573_clk = clk;
affine_controller__U565 ctrl__U573 (
    .clk(ctrl__U573_clk),
    .valid(ctrl__U573_valid),
    .d(ctrl__U573_d)
);
assign inner_sram__U580_bank_clk = clk;
assign inner_sram__U580_bank_rst_n = rst_n;
assign inner_sram__U580_bank_flush = flush;
assign inner_sram__U580_bank_ren_in = ctrl__U573_valid;
assign inner_sram__U580_bank_wen_in = ctrl__U558_valid;
assign inner_sram__U580_bank_waddr = addrgen__U564_out;
assign inner_sram__U580_bank_raddr = addrgen__U579_out;
assign inner_sram__U580_bank_wdata = wdata;
inner_sram__U580 inner_sram__U580_bank (
    .clk(inner_sram__U580_bank_clk),
    .rst_n(inner_sram__U580_bank_rst_n),
    .flush(inner_sram__U580_bank_flush),
    .ren_in(inner_sram__U580_bank_ren_in),
    .wen_in(inner_sram__U580_bank_wen_in),
    .waddr(inner_sram__U580_bank_waddr),
    .raddr(inner_sram__U580_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U580_bank_wdata)
);
endmodule

module lgxx_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgxx_stencil_1_write_wen,
    input [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxx_stencil_1_write [0:0]
);
wire delay_sr_U581_clk;
wire [15:0] delay_sr_U581_wdata;
wire [15:0] delay_sr_U581_rdata;
wire delay_sr_U581_rst_n;
wire delay_sr_U581_flush;
assign delay_sr_U581_clk = clk;
assign delay_sr_U581_wdata = op_hcompute_lgxx_stencil_1_write[0];
assign delay_sr_U581_rst_n = rst_n;
assign delay_sr_U581_flush = flush;
memtile_long_delay__U549 delay_sr_U581 (
    .clk(delay_sr_U581_clk),
    .wdata(delay_sr_U581_wdata),
    .rdata(delay_sr_U581_rdata),
    .rst_n(delay_sr_U581_rst_n),
    .flush(delay_sr_U581_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U581_rdata;
endmodule

module aff__U541 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U533 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U532 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U533 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U526 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000a);
endmodule

module aff__U518 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U517 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U518 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U516 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U531_out;
wire [15:0] addrgen__U531_d [0:0];
wire [15:0] addrgen__U546_out;
wire [15:0] addrgen__U546_d [0:0];
wire ctrl__U525_clk;
wire ctrl__U525_valid;
wire [15:0] ctrl__U525_d [0:0];
wire ctrl__U540_clk;
wire ctrl__U540_valid;
wire [15:0] ctrl__U540_d [0:0];
wire inner_sram__U547_bank_clk;
wire inner_sram__U547_bank_rst_n;
wire inner_sram__U547_bank_flush;
wire inner_sram__U547_bank_ren_in;
wire inner_sram__U547_bank_wen_in;
wire [15:0] inner_sram__U547_bank_waddr;
wire [15:0] inner_sram__U547_bank_raddr;
wire [15:0] inner_sram__U547_bank_wdata;
assign addrgen__U531_d[0] = ctrl__U525_d[0];
aff__U526 addrgen__U531 (
    .out(addrgen__U531_out),
    .d(addrgen__U531_d)
);
assign addrgen__U546_d[0] = ctrl__U540_d[0];
aff__U541 addrgen__U546 (
    .out(addrgen__U546_out),
    .d(addrgen__U546_d)
);
assign ctrl__U525_clk = clk;
affine_controller__U517 ctrl__U525 (
    .clk(ctrl__U525_clk),
    .valid(ctrl__U525_valid),
    .d(ctrl__U525_d)
);
assign ctrl__U540_clk = clk;
affine_controller__U532 ctrl__U540 (
    .clk(ctrl__U540_clk),
    .valid(ctrl__U540_valid),
    .d(ctrl__U540_d)
);
assign inner_sram__U547_bank_clk = clk;
assign inner_sram__U547_bank_rst_n = rst_n;
assign inner_sram__U547_bank_flush = flush;
assign inner_sram__U547_bank_ren_in = ctrl__U540_valid;
assign inner_sram__U547_bank_wen_in = ctrl__U525_valid;
assign inner_sram__U547_bank_waddr = addrgen__U531_out;
assign inner_sram__U547_bank_raddr = addrgen__U546_out;
assign inner_sram__U547_bank_wdata = wdata;
inner_sram__U547 inner_sram__U547_bank (
    .clk(inner_sram__U547_bank_clk),
    .rst_n(inner_sram__U547_bank_rst_n),
    .flush(inner_sram__U547_bank_flush),
    .ren_in(inner_sram__U547_bank_ren_in),
    .wen_in(inner_sram__U547_bank_wen_in),
    .waddr(inner_sram__U547_bank_waddr),
    .raddr(inner_sram__U547_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U547_bank_wdata)
);
endmodule

module grad_y_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_grad_y_stencil_write_wen,
    input [15:0] op_hcompute_grad_y_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_grad_y_stencil_write [0:0],
    input op_hcompute_lxy_stencil_read_ren,
    input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lxy_stencil_read [0:0],
    input op_hcompute_lyy_stencil_read_ren,
    input [15:0] op_hcompute_lyy_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lyy_stencil_read [0:0]
);
wire delay_sr_U515_clk;
wire [15:0] delay_sr_U515_wdata;
wire [15:0] delay_sr_U515_rdata;
wire delay_sr_U515_rst_n;
wire delay_sr_U515_flush;
wire delay_sr_U548_clk;
wire [15:0] delay_sr_U548_wdata;
wire [15:0] delay_sr_U548_rdata;
wire delay_sr_U548_rst_n;
wire delay_sr_U548_flush;
assign delay_sr_U515_clk = clk;
assign delay_sr_U515_wdata = op_hcompute_grad_y_stencil_write[0];
assign delay_sr_U515_rst_n = rst_n;
assign delay_sr_U515_flush = flush;
delay__U510 delay_sr_U515 (
    .clk(delay_sr_U515_clk),
    .wdata(delay_sr_U515_wdata),
    .rdata(delay_sr_U515_rdata),
    .rst_n(delay_sr_U515_rst_n),
    .flush(delay_sr_U515_flush)
);
assign delay_sr_U548_clk = clk;
assign delay_sr_U548_wdata = delay_sr_U515_rdata;
assign delay_sr_U548_rst_n = rst_n;
assign delay_sr_U548_flush = flush;
memtile_long_delay__U516 delay_sr_U548 (
    .clk(delay_sr_U548_clk),
    .wdata(delay_sr_U548_wdata),
    .rdata(delay_sr_U548_rdata),
    .rst_n(delay_sr_U548_rst_n),
    .flush(delay_sr_U548_flush)
);
assign op_hcompute_lxy_stencil_read[0] = delay_sr_U515_rdata;
assign op_hcompute_lyy_stencil_read[0] = delay_sr_U548_rdata;
endmodule

module aff__U51 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U50 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U51 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U502 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U494 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U493 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U494 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U487 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000e);
endmodule

module aff__U479 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U478 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U479 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U477 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U492_out;
wire [15:0] addrgen__U492_d [0:0];
wire [15:0] addrgen__U507_out;
wire [15:0] addrgen__U507_d [0:0];
wire ctrl__U486_clk;
wire ctrl__U486_valid;
wire [15:0] ctrl__U486_d [0:0];
wire ctrl__U501_clk;
wire ctrl__U501_valid;
wire [15:0] ctrl__U501_d [0:0];
wire inner_sram__U508_bank_clk;
wire inner_sram__U508_bank_rst_n;
wire inner_sram__U508_bank_flush;
wire inner_sram__U508_bank_ren_in;
wire inner_sram__U508_bank_wen_in;
wire [15:0] inner_sram__U508_bank_waddr;
wire [15:0] inner_sram__U508_bank_raddr;
wire [15:0] inner_sram__U508_bank_wdata;
assign addrgen__U492_d[0] = ctrl__U486_d[0];
aff__U487 addrgen__U492 (
    .out(addrgen__U492_out),
    .d(addrgen__U492_d)
);
assign addrgen__U507_d[0] = ctrl__U501_d[0];
aff__U502 addrgen__U507 (
    .out(addrgen__U507_out),
    .d(addrgen__U507_d)
);
assign ctrl__U486_clk = clk;
affine_controller__U478 ctrl__U486 (
    .clk(ctrl__U486_clk),
    .valid(ctrl__U486_valid),
    .d(ctrl__U486_d)
);
assign ctrl__U501_clk = clk;
affine_controller__U493 ctrl__U501 (
    .clk(ctrl__U501_clk),
    .valid(ctrl__U501_valid),
    .d(ctrl__U501_d)
);
assign inner_sram__U508_bank_clk = clk;
assign inner_sram__U508_bank_rst_n = rst_n;
assign inner_sram__U508_bank_flush = flush;
assign inner_sram__U508_bank_ren_in = ctrl__U501_valid;
assign inner_sram__U508_bank_wen_in = ctrl__U486_valid;
assign inner_sram__U508_bank_waddr = addrgen__U492_out;
assign inner_sram__U508_bank_raddr = addrgen__U507_out;
assign inner_sram__U508_bank_wdata = wdata;
inner_sram__U508 inner_sram__U508_bank (
    .clk(inner_sram__U508_bank_clk),
    .rst_n(inner_sram__U508_bank_rst_n),
    .flush(inner_sram__U508_bank_flush),
    .ren_in(inner_sram__U508_bank_ren_in),
    .wen_in(inner_sram__U508_bank_wen_in),
    .waddr(inner_sram__U508_bank_waddr),
    .raddr(inner_sram__U508_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U508_bank_wdata)
);
endmodule

module grad_x_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_grad_x_stencil_write_wen,
    input [15:0] op_hcompute_grad_x_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_grad_x_stencil_write [0:0],
    input op_hcompute_lxx_stencil_read_ren,
    input [15:0] op_hcompute_lxx_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lxx_stencil_read [0:0],
    input op_hcompute_lxy_stencil_read_ren,
    input [15:0] op_hcompute_lxy_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lxy_stencil_read [0:0]
);
wire delay_sr_U476_clk;
wire [15:0] delay_sr_U476_wdata;
wire [15:0] delay_sr_U476_rdata;
wire delay_sr_U476_rst_n;
wire delay_sr_U476_flush;
wire delay_sr_U509_clk;
wire [15:0] delay_sr_U509_wdata;
wire [15:0] delay_sr_U509_rdata;
wire delay_sr_U509_rst_n;
wire delay_sr_U509_flush;
assign delay_sr_U476_clk = clk;
assign delay_sr_U476_wdata = op_hcompute_grad_x_stencil_write[0];
assign delay_sr_U476_rst_n = rst_n;
assign delay_sr_U476_flush = flush;
delay__U471 delay_sr_U476 (
    .clk(delay_sr_U476_clk),
    .wdata(delay_sr_U476_wdata),
    .rdata(delay_sr_U476_rdata),
    .rst_n(delay_sr_U476_rst_n),
    .flush(delay_sr_U476_flush)
);
assign delay_sr_U509_clk = clk;
assign delay_sr_U509_wdata = delay_sr_U476_rdata;
assign delay_sr_U509_rst_n = rst_n;
assign delay_sr_U509_flush = flush;
memtile_long_delay__U477 delay_sr_U509 (
    .clk(delay_sr_U509_clk),
    .wdata(delay_sr_U509_wdata),
    .rdata(delay_sr_U509_rdata),
    .rst_n(delay_sr_U509_rst_n),
    .flush(delay_sr_U509_flush)
);
assign op_hcompute_lxx_stencil_read[0] = delay_sr_U476_rdata;
assign op_hcompute_lxy_stencil_read[0] = delay_sr_U509_rdata;
endmodule

module aff__U457 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U449 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U448 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U449 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U442 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U434 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U433 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U434 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U432 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U447_out;
wire [15:0] addrgen__U447_d [0:0];
wire [15:0] addrgen__U462_out;
wire [15:0] addrgen__U462_d [0:0];
wire ctrl__U441_clk;
wire ctrl__U441_valid;
wire [15:0] ctrl__U441_d [0:0];
wire ctrl__U456_clk;
wire ctrl__U456_valid;
wire [15:0] ctrl__U456_d [0:0];
wire inner_sram__U463_bank_clk;
wire inner_sram__U463_bank_rst_n;
wire inner_sram__U463_bank_flush;
wire inner_sram__U463_bank_ren_in;
wire inner_sram__U463_bank_wen_in;
wire [15:0] inner_sram__U463_bank_waddr;
wire [15:0] inner_sram__U463_bank_raddr;
wire [15:0] inner_sram__U463_bank_wdata;
assign addrgen__U447_d[0] = ctrl__U441_d[0];
aff__U442 addrgen__U447 (
    .out(addrgen__U447_out),
    .d(addrgen__U447_d)
);
assign addrgen__U462_d[0] = ctrl__U456_d[0];
aff__U457 addrgen__U462 (
    .out(addrgen__U462_out),
    .d(addrgen__U462_d)
);
assign ctrl__U441_clk = clk;
affine_controller__U433 ctrl__U441 (
    .clk(ctrl__U441_clk),
    .valid(ctrl__U441_valid),
    .d(ctrl__U441_d)
);
assign ctrl__U456_clk = clk;
affine_controller__U448 ctrl__U456 (
    .clk(ctrl__U456_clk),
    .valid(ctrl__U456_valid),
    .d(ctrl__U456_d)
);
assign inner_sram__U463_bank_clk = clk;
assign inner_sram__U463_bank_rst_n = rst_n;
assign inner_sram__U463_bank_flush = flush;
assign inner_sram__U463_bank_ren_in = ctrl__U456_valid;
assign inner_sram__U463_bank_wen_in = ctrl__U441_valid;
assign inner_sram__U463_bank_waddr = addrgen__U447_out;
assign inner_sram__U463_bank_raddr = addrgen__U462_out;
assign inner_sram__U463_bank_wdata = wdata;
inner_sram__U463 inner_sram__U463_bank (
    .clk(inner_sram__U463_bank_clk),
    .rst_n(inner_sram__U463_bank_rst_n),
    .flush(inner_sram__U463_bank_flush),
    .ren_in(inner_sram__U463_bank_ren_in),
    .wen_in(inner_sram__U463_bank_wen_in),
    .waddr(inner_sram__U463_bank_waddr),
    .raddr(inner_sram__U463_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U463_bank_wdata)
);
endmodule

module aff__U418 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U410 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U409 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U410 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U403 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U395 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U394 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U395 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U393 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U408_out;
wire [15:0] addrgen__U408_d [0:0];
wire [15:0] addrgen__U423_out;
wire [15:0] addrgen__U423_d [0:0];
wire ctrl__U402_clk;
wire ctrl__U402_valid;
wire [15:0] ctrl__U402_d [0:0];
wire ctrl__U417_clk;
wire ctrl__U417_valid;
wire [15:0] ctrl__U417_d [0:0];
wire inner_sram__U424_bank_clk;
wire inner_sram__U424_bank_rst_n;
wire inner_sram__U424_bank_flush;
wire inner_sram__U424_bank_ren_in;
wire inner_sram__U424_bank_wen_in;
wire [15:0] inner_sram__U424_bank_waddr;
wire [15:0] inner_sram__U424_bank_raddr;
wire [15:0] inner_sram__U424_bank_wdata;
assign addrgen__U408_d[0] = ctrl__U402_d[0];
aff__U403 addrgen__U408 (
    .out(addrgen__U408_out),
    .d(addrgen__U408_d)
);
assign addrgen__U423_d[0] = ctrl__U417_d[0];
aff__U418 addrgen__U423 (
    .out(addrgen__U423_out),
    .d(addrgen__U423_d)
);
assign ctrl__U402_clk = clk;
affine_controller__U394 ctrl__U402 (
    .clk(ctrl__U402_clk),
    .valid(ctrl__U402_valid),
    .d(ctrl__U402_d)
);
assign ctrl__U417_clk = clk;
affine_controller__U409 ctrl__U417 (
    .clk(ctrl__U417_clk),
    .valid(ctrl__U417_valid),
    .d(ctrl__U417_d)
);
assign inner_sram__U424_bank_clk = clk;
assign inner_sram__U424_bank_rst_n = rst_n;
assign inner_sram__U424_bank_flush = flush;
assign inner_sram__U424_bank_ren_in = ctrl__U417_valid;
assign inner_sram__U424_bank_wen_in = ctrl__U402_valid;
assign inner_sram__U424_bank_waddr = addrgen__U408_out;
assign inner_sram__U424_bank_raddr = addrgen__U423_out;
assign inner_sram__U424_bank_wdata = wdata;
inner_sram__U424 inner_sram__U424_bank (
    .clk(inner_sram__U424_bank_clk),
    .rst_n(inner_sram__U424_bank_rst_n),
    .flush(inner_sram__U424_bank_flush),
    .ren_in(inner_sram__U424_bank_ren_in),
    .wen_in(inner_sram__U424_bank_wen_in),
    .waddr(inner_sram__U424_bank_waddr),
    .raddr(inner_sram__U424_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U424_bank_wdata)
);
endmodule

module cim_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_cim_output_stencil_read_ren,
    input [15:0] op_hcompute_cim_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_output_stencil_read [8:0],
    input op_hcompute_cim_stencil_write_wen,
    input [15:0] op_hcompute_cim_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_cim_stencil_write [0:0]
);
wire delay_sr_U386_clk;
wire [15:0] delay_sr_U386_wdata;
wire [15:0] delay_sr_U386_rdata;
wire delay_sr_U386_rst_n;
wire delay_sr_U386_flush;
wire delay_sr_U389_clk;
wire [15:0] delay_sr_U389_wdata;
wire [15:0] delay_sr_U389_rdata;
wire delay_sr_U389_rst_n;
wire delay_sr_U389_flush;
wire delay_sr_U392_clk;
wire [15:0] delay_sr_U392_wdata;
wire [15:0] delay_sr_U392_rdata;
wire delay_sr_U392_rst_n;
wire delay_sr_U392_flush;
wire delay_sr_U425_clk;
wire [15:0] delay_sr_U425_wdata;
wire [15:0] delay_sr_U425_rdata;
wire delay_sr_U425_rst_n;
wire delay_sr_U425_flush;
wire delay_sr_U428_clk;
wire [15:0] delay_sr_U428_wdata;
wire [15:0] delay_sr_U428_rdata;
wire delay_sr_U428_rst_n;
wire delay_sr_U428_flush;
wire delay_sr_U431_clk;
wire [15:0] delay_sr_U431_wdata;
wire [15:0] delay_sr_U431_rdata;
wire delay_sr_U431_rst_n;
wire delay_sr_U431_flush;
wire delay_sr_U464_clk;
wire [15:0] delay_sr_U464_wdata;
wire [15:0] delay_sr_U464_rdata;
wire delay_sr_U464_rst_n;
wire delay_sr_U464_flush;
wire delay_sr_U467_clk;
wire [15:0] delay_sr_U467_wdata;
wire [15:0] delay_sr_U467_rdata;
wire delay_sr_U467_rst_n;
wire delay_sr_U467_flush;
wire delay_sr_U470_clk;
wire [15:0] delay_sr_U470_wdata;
wire [15:0] delay_sr_U470_rdata;
wire delay_sr_U470_rst_n;
wire delay_sr_U470_flush;
assign delay_sr_U386_clk = clk;
assign delay_sr_U386_wdata = op_hcompute_cim_stencil_write[0];
assign delay_sr_U386_rst_n = rst_n;
assign delay_sr_U386_flush = flush;
delay__U381 delay_sr_U386 (
    .clk(delay_sr_U386_clk),
    .wdata(delay_sr_U386_wdata),
    .rdata(delay_sr_U386_rdata),
    .rst_n(delay_sr_U386_rst_n),
    .flush(delay_sr_U386_flush)
);
assign delay_sr_U389_clk = clk;
assign delay_sr_U389_wdata = delay_sr_U386_rdata;
assign delay_sr_U389_rst_n = rst_n;
assign delay_sr_U389_flush = flush;
delay__U387 delay_sr_U389 (
    .clk(delay_sr_U389_clk),
    .wdata(delay_sr_U389_wdata),
    .rdata(delay_sr_U389_rdata),
    .rst_n(delay_sr_U389_rst_n),
    .flush(delay_sr_U389_flush)
);
assign delay_sr_U392_clk = clk;
assign delay_sr_U392_wdata = delay_sr_U389_rdata;
assign delay_sr_U392_rst_n = rst_n;
assign delay_sr_U392_flush = flush;
delay__U390 delay_sr_U392 (
    .clk(delay_sr_U392_clk),
    .wdata(delay_sr_U392_wdata),
    .rdata(delay_sr_U392_rdata),
    .rst_n(delay_sr_U392_rst_n),
    .flush(delay_sr_U392_flush)
);
assign delay_sr_U425_clk = clk;
assign delay_sr_U425_wdata = delay_sr_U392_rdata;
assign delay_sr_U425_rst_n = rst_n;
assign delay_sr_U425_flush = flush;
memtile_long_delay__U393 delay_sr_U425 (
    .clk(delay_sr_U425_clk),
    .wdata(delay_sr_U425_wdata),
    .rdata(delay_sr_U425_rdata),
    .rst_n(delay_sr_U425_rst_n),
    .flush(delay_sr_U425_flush)
);
assign delay_sr_U428_clk = clk;
assign delay_sr_U428_wdata = delay_sr_U425_rdata;
assign delay_sr_U428_rst_n = rst_n;
assign delay_sr_U428_flush = flush;
delay__U426 delay_sr_U428 (
    .clk(delay_sr_U428_clk),
    .wdata(delay_sr_U428_wdata),
    .rdata(delay_sr_U428_rdata),
    .rst_n(delay_sr_U428_rst_n),
    .flush(delay_sr_U428_flush)
);
assign delay_sr_U431_clk = clk;
assign delay_sr_U431_wdata = delay_sr_U428_rdata;
assign delay_sr_U431_rst_n = rst_n;
assign delay_sr_U431_flush = flush;
delay__U429 delay_sr_U431 (
    .clk(delay_sr_U431_clk),
    .wdata(delay_sr_U431_wdata),
    .rdata(delay_sr_U431_rdata),
    .rst_n(delay_sr_U431_rst_n),
    .flush(delay_sr_U431_flush)
);
assign delay_sr_U464_clk = clk;
assign delay_sr_U464_wdata = delay_sr_U431_rdata;
assign delay_sr_U464_rst_n = rst_n;
assign delay_sr_U464_flush = flush;
memtile_long_delay__U432 delay_sr_U464 (
    .clk(delay_sr_U464_clk),
    .wdata(delay_sr_U464_wdata),
    .rdata(delay_sr_U464_rdata),
    .rst_n(delay_sr_U464_rst_n),
    .flush(delay_sr_U464_flush)
);
assign delay_sr_U467_clk = clk;
assign delay_sr_U467_wdata = delay_sr_U464_rdata;
assign delay_sr_U467_rst_n = rst_n;
assign delay_sr_U467_flush = flush;
delay__U465 delay_sr_U467 (
    .clk(delay_sr_U467_clk),
    .wdata(delay_sr_U467_wdata),
    .rdata(delay_sr_U467_rdata),
    .rst_n(delay_sr_U467_rst_n),
    .flush(delay_sr_U467_flush)
);
assign delay_sr_U470_clk = clk;
assign delay_sr_U470_wdata = delay_sr_U467_rdata;
assign delay_sr_U470_rst_n = rst_n;
assign delay_sr_U470_flush = flush;
delay__U468 delay_sr_U470 (
    .clk(delay_sr_U470_clk),
    .wdata(delay_sr_U470_wdata),
    .rdata(delay_sr_U470_rdata),
    .rst_n(delay_sr_U470_rst_n),
    .flush(delay_sr_U470_flush)
);
assign op_hcompute_cim_output_stencil_read[8] = delay_sr_U386_rdata;
assign op_hcompute_cim_output_stencil_read[7] = delay_sr_U389_rdata;
assign op_hcompute_cim_output_stencil_read[6] = delay_sr_U392_rdata;
assign op_hcompute_cim_output_stencil_read[5] = delay_sr_U425_rdata;
assign op_hcompute_cim_output_stencil_read[4] = delay_sr_U431_rdata;
assign op_hcompute_cim_output_stencil_read[3] = delay_sr_U464_rdata;
assign op_hcompute_cim_output_stencil_read[2] = delay_sr_U467_rdata;
assign op_hcompute_cim_output_stencil_read[1] = delay_sr_U428_rdata;
assign op_hcompute_cim_output_stencil_read[0] = delay_sr_U470_rdata;
endmodule

module aff__U351 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U350 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U351 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U326 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b7);
endmodule

module affine_controller__U325 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U326 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h0039;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h0039;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U301 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0131);
endmodule

module affine_controller__U300 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U301 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U276 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012d);
endmodule

module affine_controller__U275 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U276 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U26 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U25 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U26 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U251 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h012a);
endmodule

module affine_controller__U250 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U251 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U226 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h00a4);
endmodule

module affine_controller__U225 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U226 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U201 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0122);
endmodule

module affine_controller__U200 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U201 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U176 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h011f);
endmodule

module affine_controller__U175 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U176 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U151 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0099);
endmodule

module affine_controller__U150 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U151 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U126 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0095);
endmodule

module affine_controller__U125 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U126 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1062 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U1054 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U1053 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U1054 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1047 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000c);
endmodule

module aff__U1039 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U1038 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U1039 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U1037 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U1052_out;
wire [15:0] addrgen__U1052_d [0:0];
wire [15:0] addrgen__U1067_out;
wire [15:0] addrgen__U1067_d [0:0];
wire ctrl__U1046_clk;
wire ctrl__U1046_valid;
wire [15:0] ctrl__U1046_d [0:0];
wire ctrl__U1061_clk;
wire ctrl__U1061_valid;
wire [15:0] ctrl__U1061_d [0:0];
wire inner_sram__U1068_bank_clk;
wire inner_sram__U1068_bank_rst_n;
wire inner_sram__U1068_bank_flush;
wire inner_sram__U1068_bank_ren_in;
wire inner_sram__U1068_bank_wen_in;
wire [15:0] inner_sram__U1068_bank_waddr;
wire [15:0] inner_sram__U1068_bank_raddr;
wire [15:0] inner_sram__U1068_bank_wdata;
assign addrgen__U1052_d[0] = ctrl__U1046_d[0];
aff__U1047 addrgen__U1052 (
    .out(addrgen__U1052_out),
    .d(addrgen__U1052_d)
);
assign addrgen__U1067_d[0] = ctrl__U1061_d[0];
aff__U1062 addrgen__U1067 (
    .out(addrgen__U1067_out),
    .d(addrgen__U1067_d)
);
assign ctrl__U1046_clk = clk;
affine_controller__U1038 ctrl__U1046 (
    .clk(ctrl__U1046_clk),
    .valid(ctrl__U1046_valid),
    .d(ctrl__U1046_d)
);
assign ctrl__U1061_clk = clk;
affine_controller__U1053 ctrl__U1061 (
    .clk(ctrl__U1061_clk),
    .valid(ctrl__U1061_valid),
    .d(ctrl__U1061_d)
);
assign inner_sram__U1068_bank_clk = clk;
assign inner_sram__U1068_bank_rst_n = rst_n;
assign inner_sram__U1068_bank_flush = flush;
assign inner_sram__U1068_bank_ren_in = ctrl__U1061_valid;
assign inner_sram__U1068_bank_wen_in = ctrl__U1046_valid;
assign inner_sram__U1068_bank_waddr = addrgen__U1052_out;
assign inner_sram__U1068_bank_raddr = addrgen__U1067_out;
assign inner_sram__U1068_bank_wdata = wdata;
inner_sram__U1068 inner_sram__U1068_bank (
    .clk(inner_sram__U1068_bank_clk),
    .rst_n(inner_sram__U1068_bank_rst_n),
    .flush(inner_sram__U1068_bank_flush),
    .ren_in(inner_sram__U1068_bank_ren_in),
    .wen_in(inner_sram__U1068_bank_wen_in),
    .waddr(inner_sram__U1068_bank_waddr),
    .raddr(inner_sram__U1068_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U1068_bank_wdata)
);
endmodule

module aff__U1025 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U1017 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U1016 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U1017 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1010 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h003d);
endmodule

module aff__U101 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U100 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U101 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1002 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U1001 (
    input clk,
    output valid,
    output [15:0] d [0:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [0:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
assign affine_func_d[0] = d_0_reg_out;
aff__U1002 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = 1'b1 ? d_0_reg_out == 16'hffff ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign valid = cmp_time_out;
assign d[0] = d_0_reg_out;
endmodule

module memtile_long_delay__U1000 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U1015_out;
wire [15:0] addrgen__U1015_d [0:0];
wire [15:0] addrgen__U1030_out;
wire [15:0] addrgen__U1030_d [0:0];
wire ctrl__U1009_clk;
wire ctrl__U1009_valid;
wire [15:0] ctrl__U1009_d [0:0];
wire ctrl__U1024_clk;
wire ctrl__U1024_valid;
wire [15:0] ctrl__U1024_d [0:0];
wire inner_sram__U1031_bank_clk;
wire inner_sram__U1031_bank_rst_n;
wire inner_sram__U1031_bank_flush;
wire inner_sram__U1031_bank_ren_in;
wire inner_sram__U1031_bank_wen_in;
wire [15:0] inner_sram__U1031_bank_waddr;
wire [15:0] inner_sram__U1031_bank_raddr;
wire [15:0] inner_sram__U1031_bank_wdata;
assign addrgen__U1015_d[0] = ctrl__U1009_d[0];
aff__U1010 addrgen__U1015 (
    .out(addrgen__U1015_out),
    .d(addrgen__U1015_d)
);
assign addrgen__U1030_d[0] = ctrl__U1024_d[0];
aff__U1025 addrgen__U1030 (
    .out(addrgen__U1030_out),
    .d(addrgen__U1030_d)
);
assign ctrl__U1009_clk = clk;
affine_controller__U1001 ctrl__U1009 (
    .clk(ctrl__U1009_clk),
    .valid(ctrl__U1009_valid),
    .d(ctrl__U1009_d)
);
assign ctrl__U1024_clk = clk;
affine_controller__U1016 ctrl__U1024 (
    .clk(ctrl__U1024_clk),
    .valid(ctrl__U1024_valid),
    .d(ctrl__U1024_d)
);
assign inner_sram__U1031_bank_clk = clk;
assign inner_sram__U1031_bank_rst_n = rst_n;
assign inner_sram__U1031_bank_flush = flush;
assign inner_sram__U1031_bank_ren_in = ctrl__U1024_valid;
assign inner_sram__U1031_bank_wen_in = ctrl__U1009_valid;
assign inner_sram__U1031_bank_waddr = addrgen__U1015_out;
assign inner_sram__U1031_bank_raddr = addrgen__U1030_out;
assign inner_sram__U1031_bank_wdata = wdata;
inner_sram__U1031 inner_sram__U1031_bank (
    .clk(inner_sram__U1031_bank_clk),
    .rst_n(inner_sram__U1031_bank_rst_n),
    .flush(inner_sram__U1031_bank_flush),
    .ren_in(inner_sram__U1031_bank_ren_in),
    .wen_in(inner_sram__U1031_bank_wen_in),
    .waddr(inner_sram__U1031_bank_waddr),
    .raddr(inner_sram__U1031_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U1031_bank_wdata)
);
endmodule

module padded16_global_wrapper_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_grad_x_stencil_read_ren,
    input [15:0] op_hcompute_grad_x_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_grad_x_stencil_read [5:0],
    input op_hcompute_grad_y_stencil_read_ren,
    input [15:0] op_hcompute_grad_y_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_grad_y_stencil_read [5:0],
    input op_hcompute_padded16_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_padded16_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U1032_clk;
wire [15:0] delay_sr_U1032_wdata;
wire [15:0] delay_sr_U1032_rdata;
wire delay_sr_U1032_rst_n;
wire delay_sr_U1032_flush;
wire delay_sr_U1036_clk;
wire [15:0] delay_sr_U1036_wdata;
wire [15:0] delay_sr_U1036_rdata;
wire delay_sr_U1036_rst_n;
wire delay_sr_U1036_flush;
wire delay_sr_U1069_clk;
wire [15:0] delay_sr_U1069_wdata;
wire [15:0] delay_sr_U1069_rdata;
wire delay_sr_U1069_rst_n;
wire delay_sr_U1069_flush;
wire delay_sr_U1072_clk;
wire [15:0] delay_sr_U1072_wdata;
wire [15:0] delay_sr_U1072_rdata;
wire delay_sr_U1072_rst_n;
wire delay_sr_U1072_flush;
wire delay_sr_U1075_clk;
wire [15:0] delay_sr_U1075_wdata;
wire [15:0] delay_sr_U1075_rdata;
wire delay_sr_U1075_rst_n;
wire delay_sr_U1075_flush;
wire delay_sr_U919_clk;
wire [15:0] delay_sr_U919_wdata;
wire [15:0] delay_sr_U919_rdata;
wire delay_sr_U919_rst_n;
wire delay_sr_U919_flush;
wire delay_sr_U923_clk;
wire [15:0] delay_sr_U923_wdata;
wire [15:0] delay_sr_U923_rdata;
wire delay_sr_U923_rst_n;
wire delay_sr_U923_flush;
wire delay_sr_U956_clk;
wire [15:0] delay_sr_U956_wdata;
wire [15:0] delay_sr_U956_rdata;
wire delay_sr_U956_rst_n;
wire delay_sr_U956_flush;
wire delay_sr_U959_clk;
wire [15:0] delay_sr_U959_wdata;
wire [15:0] delay_sr_U959_rdata;
wire delay_sr_U959_rst_n;
wire delay_sr_U959_flush;
wire delay_sr_U962_clk;
wire [15:0] delay_sr_U962_wdata;
wire [15:0] delay_sr_U962_rdata;
wire delay_sr_U962_rst_n;
wire delay_sr_U962_flush;
wire delay_sr_U995_clk;
wire [15:0] delay_sr_U995_wdata;
wire [15:0] delay_sr_U995_rdata;
wire delay_sr_U995_rst_n;
wire delay_sr_U995_flush;
wire delay_sr_U999_clk;
wire [15:0] delay_sr_U999_wdata;
wire [15:0] delay_sr_U999_rdata;
wire delay_sr_U999_rst_n;
wire delay_sr_U999_flush;
assign delay_sr_U1032_clk = clk;
assign delay_sr_U1032_wdata = delay_sr_U999_rdata;
assign delay_sr_U1032_rst_n = rst_n;
assign delay_sr_U1032_flush = flush;
memtile_long_delay__U1000 delay_sr_U1032 (
    .clk(delay_sr_U1032_clk),
    .wdata(delay_sr_U1032_wdata),
    .rdata(delay_sr_U1032_rdata),
    .rst_n(delay_sr_U1032_rst_n),
    .flush(delay_sr_U1032_flush)
);
assign delay_sr_U1036_clk = clk;
assign delay_sr_U1036_wdata = delay_sr_U1032_rdata;
assign delay_sr_U1036_rst_n = rst_n;
assign delay_sr_U1036_flush = flush;
delay__U1033 delay_sr_U1036 (
    .clk(delay_sr_U1036_clk),
    .wdata(delay_sr_U1036_wdata),
    .rdata(delay_sr_U1036_rdata),
    .rst_n(delay_sr_U1036_rst_n),
    .flush(delay_sr_U1036_flush)
);
assign delay_sr_U1069_clk = clk;
assign delay_sr_U1069_wdata = delay_sr_U1036_rdata;
assign delay_sr_U1069_rst_n = rst_n;
assign delay_sr_U1069_flush = flush;
memtile_long_delay__U1037 delay_sr_U1069 (
    .clk(delay_sr_U1069_clk),
    .wdata(delay_sr_U1069_wdata),
    .rdata(delay_sr_U1069_rdata),
    .rst_n(delay_sr_U1069_rst_n),
    .flush(delay_sr_U1069_flush)
);
assign delay_sr_U1072_clk = clk;
assign delay_sr_U1072_wdata = delay_sr_U1069_rdata;
assign delay_sr_U1072_rst_n = rst_n;
assign delay_sr_U1072_flush = flush;
delay__U1070 delay_sr_U1072 (
    .clk(delay_sr_U1072_clk),
    .wdata(delay_sr_U1072_wdata),
    .rdata(delay_sr_U1072_rdata),
    .rst_n(delay_sr_U1072_rst_n),
    .flush(delay_sr_U1072_flush)
);
assign delay_sr_U1075_clk = clk;
assign delay_sr_U1075_wdata = delay_sr_U1072_rdata;
assign delay_sr_U1075_rst_n = rst_n;
assign delay_sr_U1075_flush = flush;
delay__U1073 delay_sr_U1075 (
    .clk(delay_sr_U1075_clk),
    .wdata(delay_sr_U1075_wdata),
    .rdata(delay_sr_U1075_rdata),
    .rst_n(delay_sr_U1075_rst_n),
    .flush(delay_sr_U1075_flush)
);
assign delay_sr_U919_clk = clk;
assign delay_sr_U919_wdata = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign delay_sr_U919_rst_n = rst_n;
assign delay_sr_U919_flush = flush;
delay__U915 delay_sr_U919 (
    .clk(delay_sr_U919_clk),
    .wdata(delay_sr_U919_wdata),
    .rdata(delay_sr_U919_rdata),
    .rst_n(delay_sr_U919_rst_n),
    .flush(delay_sr_U919_flush)
);
assign delay_sr_U923_clk = clk;
assign delay_sr_U923_wdata = delay_sr_U919_rdata;
assign delay_sr_U923_rst_n = rst_n;
assign delay_sr_U923_flush = flush;
delay__U920 delay_sr_U923 (
    .clk(delay_sr_U923_clk),
    .wdata(delay_sr_U923_wdata),
    .rdata(delay_sr_U923_rdata),
    .rst_n(delay_sr_U923_rst_n),
    .flush(delay_sr_U923_flush)
);
assign delay_sr_U956_clk = clk;
assign delay_sr_U956_wdata = delay_sr_U923_rdata;
assign delay_sr_U956_rst_n = rst_n;
assign delay_sr_U956_flush = flush;
memtile_long_delay__U924 delay_sr_U956 (
    .clk(delay_sr_U956_clk),
    .wdata(delay_sr_U956_wdata),
    .rdata(delay_sr_U956_rdata),
    .rst_n(delay_sr_U956_rst_n),
    .flush(delay_sr_U956_flush)
);
assign delay_sr_U959_clk = clk;
assign delay_sr_U959_wdata = delay_sr_U956_rdata;
assign delay_sr_U959_rst_n = rst_n;
assign delay_sr_U959_flush = flush;
delay__U957 delay_sr_U959 (
    .clk(delay_sr_U959_clk),
    .wdata(delay_sr_U959_wdata),
    .rdata(delay_sr_U959_rdata),
    .rst_n(delay_sr_U959_rst_n),
    .flush(delay_sr_U959_flush)
);
assign delay_sr_U962_clk = clk;
assign delay_sr_U962_wdata = delay_sr_U959_rdata;
assign delay_sr_U962_rst_n = rst_n;
assign delay_sr_U962_flush = flush;
delay__U960 delay_sr_U962 (
    .clk(delay_sr_U962_clk),
    .wdata(delay_sr_U962_wdata),
    .rdata(delay_sr_U962_rdata),
    .rst_n(delay_sr_U962_rst_n),
    .flush(delay_sr_U962_flush)
);
assign delay_sr_U995_clk = clk;
assign delay_sr_U995_wdata = delay_sr_U962_rdata;
assign delay_sr_U995_rst_n = rst_n;
assign delay_sr_U995_flush = flush;
memtile_long_delay__U963 delay_sr_U995 (
    .clk(delay_sr_U995_clk),
    .wdata(delay_sr_U995_wdata),
    .rdata(delay_sr_U995_rdata),
    .rst_n(delay_sr_U995_rst_n),
    .flush(delay_sr_U995_flush)
);
assign delay_sr_U999_clk = clk;
assign delay_sr_U999_wdata = delay_sr_U995_rdata;
assign delay_sr_U999_rst_n = rst_n;
assign delay_sr_U999_flush = flush;
delay__U996 delay_sr_U999 (
    .clk(delay_sr_U999_clk),
    .wdata(delay_sr_U999_wdata),
    .rdata(delay_sr_U999_rdata),
    .rst_n(delay_sr_U999_rst_n),
    .flush(delay_sr_U999_flush)
);
assign op_hcompute_grad_x_stencil_read[5] = delay_sr_U923_rdata;
assign op_hcompute_grad_x_stencil_read[4] = delay_sr_U999_rdata;
assign op_hcompute_grad_x_stencil_read[3] = delay_sr_U1036_rdata;
assign op_hcompute_grad_x_stencil_read[2] = delay_sr_U995_rdata;
assign op_hcompute_grad_x_stencil_read[1] = delay_sr_U919_rdata;
assign op_hcompute_grad_x_stencil_read[0] = delay_sr_U1032_rdata;
assign op_hcompute_grad_y_stencil_read[5] = delay_sr_U959_rdata;
assign op_hcompute_grad_y_stencil_read[4] = delay_sr_U956_rdata;
assign op_hcompute_grad_y_stencil_read[3] = delay_sr_U962_rdata;
assign op_hcompute_grad_y_stencil_read[2] = delay_sr_U1069_rdata;
assign op_hcompute_grad_y_stencil_read[1] = delay_sr_U1072_rdata;
assign op_hcompute_grad_y_stencil_read[0] = delay_sr_U1075_rdata;
endmodule

module aff__U1 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U0 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [2:0];
wire cmp_time_out;
wire [15:0] cycle_time_in;
wire cycle_time_clk;
wire [15:0] cycle_time_out;
wire [15:0] d_0_reg_in;
wire d_0_reg_clk;
wire [15:0] d_0_reg_out;
wire d_0_reg_en;
wire d_1_at_max_out;
wire [15:0] d_1_reg_in;
wire d_1_reg_clk;
wire [15:0] d_1_reg_out;
wire d_1_reg_en;
wire d_2_at_max_out;
wire [15:0] d_2_reg_in;
wire d_2_reg_clk;
wire [15:0] d_2_reg_out;
wire d_2_reg_en;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
assign cycle_time_in = 16'(cycle_time_out + 16'h0001);
assign cycle_time_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(cycle_time_in),
    .clk(cycle_time_clk),
    .out(cycle_time_out)
);
assign d_0_reg_in = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
assign d_0_reg_clk = clk;
assign d_0_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_reg_in),
    .clk(d_0_reg_clk),
    .out(d_0_reg_out),
    .en(d_0_reg_en)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_reg_in = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
assign d_1_reg_clk = clk;
assign d_1_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_reg_in),
    .clk(d_1_reg_clk),
    .out(d_1_reg_out),
    .en(d_1_reg_en)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_reg_in = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
assign d_2_reg_clk = clk;
assign d_2_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_reg_in),
    .clk(d_2_reg_clk),
    .out(d_2_reg_out),
    .en(d_2_reg_en)
);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module harris (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid,
    input [15:0] padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0]
);
wire [15:0] _U1076_in;
wire _U1076_clk;
wire [15:0] _U1076_out;
wire cim_output_stencil_clk;
wire cim_output_stencil_rst_n;
wire cim_output_stencil_flush;
wire cim_output_stencil_op_hcompute_cim_output_stencil_write_wen;
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire cim_output_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire cim_stencil_clk;
wire cim_stencil_rst_n;
wire cim_stencil_flush;
wire cim_stencil_op_hcompute_cim_output_stencil_read_ren;
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire cim_stencil_op_hcompute_cim_stencil_write_wen;
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire grad_x_stencil_clk;
wire grad_x_stencil_rst_n;
wire grad_x_stencil_flush;
wire grad_x_stencil_op_hcompute_grad_x_stencil_write_wen;
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire grad_x_stencil_op_hcompute_lxx_stencil_read_ren;
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire grad_x_stencil_op_hcompute_lxy_stencil_read_ren;
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire grad_y_stencil_clk;
wire grad_y_stencil_rst_n;
wire grad_y_stencil_flush;
wire grad_y_stencil_op_hcompute_grad_y_stencil_write_wen;
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire grad_y_stencil_op_hcompute_lxy_stencil_read_ren;
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire grad_y_stencil_op_hcompute_lyy_stencil_read_ren;
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars [2:0];
wire [15:0] grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire lgxx_stencil_clk;
wire lgxx_stencil_rst_n;
wire lgxx_stencil_flush;
wire lgxx_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen;
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire lgxx_stencil_clkwrk_dsa0_clk;
wire lgxx_stencil_clkwrk_dsa0_rst_n;
wire lgxx_stencil_clkwrk_dsa0_flush;
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire lgxy_stencil_clk;
wire lgxy_stencil_rst_n;
wire lgxy_stencil_flush;
wire lgxy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen;
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire lgxy_stencil_clkwrk_dsa1_clk;
wire lgxy_stencil_clkwrk_dsa1_rst_n;
wire lgxy_stencil_clkwrk_dsa1_flush;
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire lgyy_stencil_clk;
wire lgyy_stencil_rst_n;
wire lgyy_stencil_flush;
wire lgyy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen;
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire lgyy_stencil_clkwrk_dsa2_clk;
wire lgyy_stencil_clkwrk_dsa2_rst_n;
wire lgyy_stencil_clkwrk_dsa2_flush;
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire lxx_stencil_clk;
wire lxx_stencil_rst_n;
wire lxx_stencil_flush;
wire lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire lxx_stencil_op_hcompute_lxx_stencil_write_wen;
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire lxy_stencil_clk;
wire lxy_stencil_rst_n;
wire lxy_stencil_flush;
wire lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire lxy_stencil_op_hcompute_lxy_stencil_write_wen;
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire lyy_stencil_clk;
wire lyy_stencil_rst_n;
wire lyy_stencil_flush;
wire lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren;
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire lyy_stencil_op_hcompute_lyy_stencil_write_wen;
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars [2:0];
wire [15:0] lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_clk;
wire [15:0] op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire [15:0] op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire op_hcompute_cim_output_stencil_exe_start_clk;
wire op_hcompute_cim_output_stencil_exe_start_in;
wire op_hcompute_cim_output_stencil_exe_start_out;
wire op_hcompute_cim_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_output_stencil_port_controller_clk;
wire op_hcompute_cim_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_output_stencil_port_controller_d [2:0];
wire op_hcompute_cim_output_stencil_read_start;
wire op_hcompute_cim_output_stencil_write_start;
wire op_hcompute_cim_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_cim_stencil_clk;
wire [15:0] op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire [15:0] op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire op_hcompute_cim_stencil_exe_start_clk;
wire op_hcompute_cim_stencil_exe_start_in;
wire op_hcompute_cim_stencil_exe_start_out;
wire op_hcompute_cim_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_cim_stencil_port_controller_clk;
wire op_hcompute_cim_stencil_port_controller_valid;
wire [15:0] op_hcompute_cim_stencil_port_controller_d [2:0];
wire op_hcompute_cim_stencil_read_start;
wire op_hcompute_cim_stencil_write_start;
wire op_hcompute_cim_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_cim_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_grad_x_stencil_clk;
wire [15:0] op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire [15:0] op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write [0:0];
wire op_hcompute_grad_x_stencil_exe_start_clk;
wire op_hcompute_grad_x_stencil_exe_start_in;
wire op_hcompute_grad_x_stencil_exe_start_out;
wire op_hcompute_grad_x_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_x_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_x_stencil_port_controller_clk;
wire op_hcompute_grad_x_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_x_stencil_port_controller_d [2:0];
wire op_hcompute_grad_x_stencil_read_start;
wire op_hcompute_grad_x_stencil_write_start;
wire op_hcompute_grad_x_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_x_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_grad_y_stencil_clk;
wire [15:0] op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire [15:0] op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write [0:0];
wire op_hcompute_grad_y_stencil_exe_start_clk;
wire op_hcompute_grad_y_stencil_exe_start_in;
wire op_hcompute_grad_y_stencil_exe_start_out;
wire op_hcompute_grad_y_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_y_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_grad_y_stencil_port_controller_clk;
wire op_hcompute_grad_y_stencil_port_controller_valid;
wire [15:0] op_hcompute_grad_y_stencil_port_controller_d [2:0];
wire op_hcompute_grad_y_stencil_read_start;
wire op_hcompute_grad_y_stencil_write_start;
wire op_hcompute_grad_y_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_grad_y_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire op_hcompute_hw_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_clk;
wire [15:0] op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire op_hcompute_lgxx_stencil_1_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire op_hcompute_lgxx_stencil_1_exe_start_clk;
wire op_hcompute_lgxx_stencil_1_exe_start_in;
wire op_hcompute_lgxx_stencil_1_exe_start_out;
wire op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_1_port_controller_clk;
wire op_hcompute_lgxx_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_1_read_start;
wire op_hcompute_lgxx_stencil_1_write_start;
wire op_hcompute_lgxx_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_exe_start_clk;
wire op_hcompute_lgxx_stencil_exe_start_in;
wire op_hcompute_lgxx_stencil_exe_start_out;
wire op_hcompute_lgxx_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxx_stencil_port_controller_clk;
wire op_hcompute_lgxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxx_stencil_port_controller_d [2:0];
wire op_hcompute_lgxx_stencil_read_start;
wire op_hcompute_lgxx_stencil_write_start;
wire op_hcompute_lgxx_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxx_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_clk;
wire [15:0] op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire op_hcompute_lgxy_stencil_1_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire op_hcompute_lgxy_stencil_1_exe_start_clk;
wire op_hcompute_lgxy_stencil_1_exe_start_in;
wire op_hcompute_lgxy_stencil_1_exe_start_out;
wire op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_1_port_controller_clk;
wire op_hcompute_lgxy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_1_read_start;
wire op_hcompute_lgxy_stencil_1_write_start;
wire op_hcompute_lgxy_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_exe_start_clk;
wire op_hcompute_lgxy_stencil_exe_start_in;
wire op_hcompute_lgxy_stencil_exe_start_out;
wire op_hcompute_lgxy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgxy_stencil_port_controller_clk;
wire op_hcompute_lgxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgxy_stencil_port_controller_d [2:0];
wire op_hcompute_lgxy_stencil_read_start;
wire op_hcompute_lgxy_stencil_write_start;
wire op_hcompute_lgxy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgxy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_clk;
wire [15:0] op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire op_hcompute_lgyy_stencil_1_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read [8:0];
wire [15:0] op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire op_hcompute_lgyy_stencil_1_exe_start_clk;
wire op_hcompute_lgyy_stencil_1_exe_start_in;
wire op_hcompute_lgyy_stencil_1_exe_start_out;
wire op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_1_port_controller_clk;
wire op_hcompute_lgyy_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_1_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_1_read_start;
wire op_hcompute_lgyy_stencil_1_write_start;
wire op_hcompute_lgyy_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_exe_start_clk;
wire op_hcompute_lgyy_stencil_exe_start_in;
wire op_hcompute_lgyy_stencil_exe_start_out;
wire op_hcompute_lgyy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lgyy_stencil_port_controller_clk;
wire op_hcompute_lgyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lgyy_stencil_port_controller_d [2:0];
wire op_hcompute_lgyy_stencil_read_start;
wire op_hcompute_lgyy_stencil_write_start;
wire op_hcompute_lgyy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lgyy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lxx_stencil_clk;
wire [15:0] op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read [0:0];
wire [15:0] op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire op_hcompute_lxx_stencil_exe_start_clk;
wire op_hcompute_lxx_stencil_exe_start_in;
wire op_hcompute_lxx_stencil_exe_start_out;
wire op_hcompute_lxx_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxx_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxx_stencil_port_controller_clk;
wire op_hcompute_lxx_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxx_stencil_port_controller_d [2:0];
wire op_hcompute_lxx_stencil_read_start;
wire op_hcompute_lxx_stencil_write_start;
wire op_hcompute_lxx_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxx_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lxy_stencil_clk;
wire [15:0] op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read [0:0];
wire [15:0] op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire op_hcompute_lxy_stencil_exe_start_clk;
wire op_hcompute_lxy_stencil_exe_start_in;
wire op_hcompute_lxy_stencil_exe_start_out;
wire op_hcompute_lxy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lxy_stencil_port_controller_clk;
wire op_hcompute_lxy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lxy_stencil_port_controller_d [2:0];
wire op_hcompute_lxy_stencil_read_start;
wire op_hcompute_lxy_stencil_write_start;
wire op_hcompute_lxy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lxy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_lyy_stencil_clk;
wire [15:0] op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read [0:0];
wire [15:0] op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write [0:0];
wire op_hcompute_lyy_stencil_exe_start_clk;
wire op_hcompute_lyy_stencil_exe_start_in;
wire op_hcompute_lyy_stencil_exe_start_out;
wire op_hcompute_lyy_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lyy_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_lyy_stencil_port_controller_clk;
wire op_hcompute_lyy_stencil_port_controller_valid;
wire [15:0] op_hcompute_lyy_stencil_port_controller_d [2:0];
wire op_hcompute_lyy_stencil_read_start;
wire op_hcompute_lyy_stencil_write_start;
wire op_hcompute_lyy_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_lyy_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_clk;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_in;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
wire op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_clk;
wire op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_padded16_global_wrapper_stencil_read_start;
wire op_hcompute_padded16_global_wrapper_stencil_write_start;
wire op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire padded16_global_wrapper_stencil_clk;
wire padded16_global_wrapper_stencil_rst_n;
wire padded16_global_wrapper_stencil_flush;
wire padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
assign _U1076_in = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
assign _U1076_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U1076 (
    .in(_U1076_in),
    .clk(_U1076_clk),
    .out(_U1076_out)
);
assign cim_output_stencil_clk = clk;
assign cim_output_stencil_rst_n = rst_n;
assign cim_output_stencil_flush = flush;
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_wen = op_hcompute_cim_output_stencil_write_start;
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[2] = op_hcompute_cim_output_stencil_write_start_control_vars_out[2];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[1] = op_hcompute_cim_output_stencil_write_start_control_vars_out[1];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars[0] = op_hcompute_cim_output_stencil_write_start_control_vars_out[0];
assign cim_output_stencil_op_hcompute_cim_output_stencil_write[0] = op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write[0];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
cim_output_stencil_ub cim_output_stencil (
    .clk(cim_output_stencil_clk),
    .rst_n(cim_output_stencil_rst_n),
    .flush(cim_output_stencil_flush),
    .op_hcompute_cim_output_stencil_write_wen(cim_output_stencil_op_hcompute_cim_output_stencil_write_wen),
    .op_hcompute_cim_output_stencil_write_ctrl_vars(cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars),
    .op_hcompute_cim_output_stencil_write(cim_output_stencil_op_hcompute_cim_output_stencil_write),
    .op_hcompute_hw_output_stencil_read_ren(cim_output_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(cim_output_stencil_op_hcompute_hw_output_stencil_read)
);
assign cim_stencil_clk = clk;
assign cim_stencil_rst_n = rst_n;
assign cim_stencil_flush = flush;
assign cim_stencil_op_hcompute_cim_output_stencil_read_ren = op_hcompute_cim_output_stencil_read_start;
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
assign cim_stencil_op_hcompute_cim_stencil_write_wen = op_hcompute_cim_stencil_write_start;
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[2] = op_hcompute_cim_stencil_write_start_control_vars_out[2];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[1] = op_hcompute_cim_stencil_write_start_control_vars_out[1];
assign cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars[0] = op_hcompute_cim_stencil_write_start_control_vars_out[0];
assign cim_stencil_op_hcompute_cim_stencil_write[0] = op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write[0];
cim_stencil_ub cim_stencil (
    .clk(cim_stencil_clk),
    .rst_n(cim_stencil_rst_n),
    .flush(cim_stencil_flush),
    .op_hcompute_cim_output_stencil_read_ren(cim_stencil_op_hcompute_cim_output_stencil_read_ren),
    .op_hcompute_cim_output_stencil_read_ctrl_vars(cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars),
    .op_hcompute_cim_output_stencil_read(cim_stencil_op_hcompute_cim_output_stencil_read),
    .op_hcompute_cim_stencil_write_wen(cim_stencil_op_hcompute_cim_stencil_write_wen),
    .op_hcompute_cim_stencil_write_ctrl_vars(cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars),
    .op_hcompute_cim_stencil_write(cim_stencil_op_hcompute_cim_stencil_write)
);
assign grad_x_stencil_clk = clk;
assign grad_x_stencil_rst_n = rst_n;
assign grad_x_stencil_flush = flush;
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_wen = op_hcompute_grad_x_stencil_write_start;
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[2] = op_hcompute_grad_x_stencil_write_start_control_vars_out[2];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[1] = op_hcompute_grad_x_stencil_write_start_control_vars_out[1];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars[0] = op_hcompute_grad_x_stencil_write_start_control_vars_out[0];
assign grad_x_stencil_op_hcompute_grad_x_stencil_write[0] = op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write[0];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ren = op_hcompute_lxx_stencil_read_start;
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars[0] = op_hcompute_lxx_stencil_port_controller_d[0];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ren = op_hcompute_lxy_stencil_read_start;
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
grad_x_stencil_ub grad_x_stencil (
    .clk(grad_x_stencil_clk),
    .rst_n(grad_x_stencil_rst_n),
    .flush(grad_x_stencil_flush),
    .op_hcompute_grad_x_stencil_write_wen(grad_x_stencil_op_hcompute_grad_x_stencil_write_wen),
    .op_hcompute_grad_x_stencil_write_ctrl_vars(grad_x_stencil_op_hcompute_grad_x_stencil_write_ctrl_vars),
    .op_hcompute_grad_x_stencil_write(grad_x_stencil_op_hcompute_grad_x_stencil_write),
    .op_hcompute_lxx_stencil_read_ren(grad_x_stencil_op_hcompute_lxx_stencil_read_ren),
    .op_hcompute_lxx_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxx_stencil_read_ctrl_vars),
    .op_hcompute_lxx_stencil_read(grad_x_stencil_op_hcompute_lxx_stencil_read),
    .op_hcompute_lxy_stencil_read_ren(grad_x_stencil_op_hcompute_lxy_stencil_read_ren),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_x_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_x_stencil_op_hcompute_lxy_stencil_read)
);
assign grad_y_stencil_clk = clk;
assign grad_y_stencil_rst_n = rst_n;
assign grad_y_stencil_flush = flush;
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_wen = op_hcompute_grad_y_stencil_write_start;
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[2] = op_hcompute_grad_y_stencil_write_start_control_vars_out[2];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[1] = op_hcompute_grad_y_stencil_write_start_control_vars_out[1];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars[0] = op_hcompute_grad_y_stencil_write_start_control_vars_out[0];
assign grad_y_stencil_op_hcompute_grad_y_stencil_write[0] = op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write[0];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ren = op_hcompute_lxy_stencil_read_start;
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars[0] = op_hcompute_lxy_stencil_port_controller_d[0];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ren = op_hcompute_lyy_stencil_read_start;
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars[0] = op_hcompute_lyy_stencil_port_controller_d[0];
grad_y_stencil_ub grad_y_stencil (
    .clk(grad_y_stencil_clk),
    .rst_n(grad_y_stencil_rst_n),
    .flush(grad_y_stencil_flush),
    .op_hcompute_grad_y_stencil_write_wen(grad_y_stencil_op_hcompute_grad_y_stencil_write_wen),
    .op_hcompute_grad_y_stencil_write_ctrl_vars(grad_y_stencil_op_hcompute_grad_y_stencil_write_ctrl_vars),
    .op_hcompute_grad_y_stencil_write(grad_y_stencil_op_hcompute_grad_y_stencil_write),
    .op_hcompute_lxy_stencil_read_ren(grad_y_stencil_op_hcompute_lxy_stencil_read_ren),
    .op_hcompute_lxy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lxy_stencil_read_ctrl_vars),
    .op_hcompute_lxy_stencil_read(grad_y_stencil_op_hcompute_lxy_stencil_read),
    .op_hcompute_lyy_stencil_read_ren(grad_y_stencil_op_hcompute_lyy_stencil_read_ren),
    .op_hcompute_lyy_stencil_read_ctrl_vars(grad_y_stencil_op_hcompute_lyy_stencil_read_ctrl_vars),
    .op_hcompute_lyy_stencil_read(grad_y_stencil_op_hcompute_lyy_stencil_read)
);
assign lgxx_stencil_clk = clk;
assign lgxx_stencil_rst_n = rst_n;
assign lgxx_stencil_flush = flush;
assign lgxx_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen = op_hcompute_lgxx_stencil_1_write_start;
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[2];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[1];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_write_start_control_vars_out[0];
assign lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0] = op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write[0];
lgxx_stencil_ub lgxx_stencil (
    .clk(lgxx_stencil_clk),
    .rst_n(lgxx_stencil_rst_n),
    .flush(lgxx_stencil_flush),
    .op_hcompute_cim_stencil_read_ren(lgxx_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxx_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxx_stencil_1_write_wen(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen),
    .op_hcompute_lgxx_stencil_1_write_ctrl_vars(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign lgxx_stencil_clkwrk_dsa0_clk = clk;
assign lgxx_stencil_clkwrk_dsa0_rst_n = rst_n;
assign lgxx_stencil_clkwrk_dsa0_flush = flush;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren = op_hcompute_lgxx_stencil_1_read_start;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen = op_hcompute_lgxx_stencil_write_start;
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[2] = op_hcompute_lgxx_stencil_write_start_control_vars_out[2];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[1] = op_hcompute_lgxx_stencil_write_start_control_vars_out[1];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars[0] = op_hcompute_lgxx_stencil_write_start_control_vars_out[0];
assign lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0] = op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write[0];
lgxx_stencil_clkwrk_dsa0_ub lgxx_stencil_clkwrk_dsa0 (
    .clk(lgxx_stencil_clkwrk_dsa0_clk),
    .rst_n(lgxx_stencil_clkwrk_dsa0_rst_n),
    .flush(lgxx_stencil_clkwrk_dsa0_flush),
    .op_hcompute_lgxx_stencil_1_read_ren(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lgxx_stencil_write_wen(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen),
    .op_hcompute_lgxx_stencil_write_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
assign lgxy_stencil_clk = clk;
assign lgxy_stencil_rst_n = rst_n;
assign lgxy_stencil_flush = flush;
assign lgxy_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen = op_hcompute_lgxy_stencil_1_write_start;
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[2];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[1];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_write_start_control_vars_out[0];
assign lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0] = op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write[0];
lgxy_stencil_ub lgxy_stencil (
    .clk(lgxy_stencil_clk),
    .rst_n(lgxy_stencil_rst_n),
    .flush(lgxy_stencil_flush),
    .op_hcompute_cim_stencil_read_ren(lgxy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxy_stencil_1_write_wen(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen),
    .op_hcompute_lgxy_stencil_1_write_ctrl_vars(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign lgxy_stencil_clkwrk_dsa1_clk = clk;
assign lgxy_stencil_clkwrk_dsa1_rst_n = rst_n;
assign lgxy_stencil_clkwrk_dsa1_flush = flush;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren = op_hcompute_lgxy_stencil_1_read_start;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen = op_hcompute_lgxy_stencil_write_start;
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[2] = op_hcompute_lgxy_stencil_write_start_control_vars_out[2];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[1] = op_hcompute_lgxy_stencil_write_start_control_vars_out[1];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars[0] = op_hcompute_lgxy_stencil_write_start_control_vars_out[0];
assign lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0] = op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write[0];
lgxy_stencil_clkwrk_dsa1_ub lgxy_stencil_clkwrk_dsa1 (
    .clk(lgxy_stencil_clkwrk_dsa1_clk),
    .rst_n(lgxy_stencil_clkwrk_dsa1_rst_n),
    .flush(lgxy_stencil_clkwrk_dsa1_flush),
    .op_hcompute_lgxy_stencil_1_read_ren(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lgxy_stencil_write_wen(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen),
    .op_hcompute_lgxy_stencil_write_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
assign lgyy_stencil_clk = clk;
assign lgyy_stencil_rst_n = rst_n;
assign lgyy_stencil_flush = flush;
assign lgyy_stencil_op_hcompute_cim_stencil_read_ren = op_hcompute_cim_stencil_read_start;
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars[0] = op_hcompute_cim_stencil_port_controller_d[0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen = op_hcompute_lgyy_stencil_1_write_start;
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[2];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[1];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_write_start_control_vars_out[0];
assign lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0] = op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write[0];
lgyy_stencil_ub lgyy_stencil (
    .clk(lgyy_stencil_clk),
    .rst_n(lgyy_stencil_rst_n),
    .flush(lgyy_stencil_flush),
    .op_hcompute_cim_stencil_read_ren(lgyy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgyy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgyy_stencil_1_write_wen(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen),
    .op_hcompute_lgyy_stencil_1_write_ctrl_vars(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign lgyy_stencil_clkwrk_dsa2_clk = clk;
assign lgyy_stencil_clkwrk_dsa2_rst_n = rst_n;
assign lgyy_stencil_clkwrk_dsa2_flush = flush;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren = op_hcompute_lgyy_stencil_1_read_start;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen = op_hcompute_lgyy_stencil_write_start;
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[2] = op_hcompute_lgyy_stencil_write_start_control_vars_out[2];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[1] = op_hcompute_lgyy_stencil_write_start_control_vars_out[1];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars[0] = op_hcompute_lgyy_stencil_write_start_control_vars_out[0];
assign lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0] = op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write[0];
lgyy_stencil_clkwrk_dsa2_ub lgyy_stencil_clkwrk_dsa2 (
    .clk(lgyy_stencil_clkwrk_dsa2_clk),
    .rst_n(lgyy_stencil_clkwrk_dsa2_rst_n),
    .flush(lgyy_stencil_clkwrk_dsa2_flush),
    .op_hcompute_lgyy_stencil_1_read_ren(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lgyy_stencil_write_wen(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen),
    .op_hcompute_lgyy_stencil_write_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
assign lxx_stencil_clk = clk;
assign lxx_stencil_rst_n = rst_n;
assign lxx_stencil_flush = flush;
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren = op_hcompute_lgxx_stencil_1_read_start;
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
assign lxx_stencil_op_hcompute_lxx_stencil_write_wen = op_hcompute_lxx_stencil_write_start;
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[2] = op_hcompute_lxx_stencil_write_start_control_vars_out[2];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[1] = op_hcompute_lxx_stencil_write_start_control_vars_out[1];
assign lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars[0] = op_hcompute_lxx_stencil_write_start_control_vars_out[0];
assign lxx_stencil_op_hcompute_lxx_stencil_write[0] = op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write[0];
lxx_stencil_ub lxx_stencil (
    .clk(lxx_stencil_clk),
    .rst_n(lxx_stencil_rst_n),
    .flush(lxx_stencil_flush),
    .op_hcompute_lgxx_stencil_1_read_ren(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lxx_stencil_write_wen(lxx_stencil_op_hcompute_lxx_stencil_write_wen),
    .op_hcompute_lxx_stencil_write_ctrl_vars(lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars),
    .op_hcompute_lxx_stencil_write(lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign lxy_stencil_clk = clk;
assign lxy_stencil_rst_n = rst_n;
assign lxy_stencil_flush = flush;
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren = op_hcompute_lgxy_stencil_1_read_start;
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
assign lxy_stencil_op_hcompute_lxy_stencil_write_wen = op_hcompute_lxy_stencil_write_start;
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[2] = op_hcompute_lxy_stencil_write_start_control_vars_out[2];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[1] = op_hcompute_lxy_stencil_write_start_control_vars_out[1];
assign lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars[0] = op_hcompute_lxy_stencil_write_start_control_vars_out[0];
assign lxy_stencil_op_hcompute_lxy_stencil_write[0] = op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write[0];
lxy_stencil_ub lxy_stencil (
    .clk(lxy_stencil_clk),
    .rst_n(lxy_stencil_rst_n),
    .flush(lxy_stencil_flush),
    .op_hcompute_lgxy_stencil_1_read_ren(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lxy_stencil_write_wen(lxy_stencil_op_hcompute_lxy_stencil_write_wen),
    .op_hcompute_lxy_stencil_write_ctrl_vars(lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars),
    .op_hcompute_lxy_stencil_write(lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign lyy_stencil_clk = clk;
assign lyy_stencil_rst_n = rst_n;
assign lyy_stencil_flush = flush;
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren = op_hcompute_lgyy_stencil_1_read_start;
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
assign lyy_stencil_op_hcompute_lyy_stencil_write_wen = op_hcompute_lyy_stencil_write_start;
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[2] = op_hcompute_lyy_stencil_write_start_control_vars_out[2];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[1] = op_hcompute_lyy_stencil_write_start_control_vars_out[1];
assign lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars[0] = op_hcompute_lyy_stencil_write_start_control_vars_out[0];
assign lyy_stencil_op_hcompute_lyy_stencil_write[0] = op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write[0];
lyy_stencil_ub lyy_stencil (
    .clk(lyy_stencil_clk),
    .rst_n(lyy_stencil_rst_n),
    .flush(lyy_stencil_flush),
    .op_hcompute_lgyy_stencil_1_read_ren(lyy_stencil_op_hcompute_lgyy_stencil_1_read_ren),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lyy_stencil_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lyy_stencil_write_wen(lyy_stencil_op_hcompute_lyy_stencil_write_wen),
    .op_hcompute_lyy_stencil_write_ctrl_vars(lyy_stencil_op_hcompute_lyy_stencil_write_ctrl_vars),
    .op_hcompute_lyy_stencil_write(lyy_stencil_op_hcompute_lyy_stencil_write)
);
assign op_hcompute_cim_output_stencil_clk = clk;
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[8] = cim_stencil_op_hcompute_cim_output_stencil_read[8];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[7] = cim_stencil_op_hcompute_cim_output_stencil_read[7];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[6] = cim_stencil_op_hcompute_cim_output_stencil_read[6];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[5] = cim_stencil_op_hcompute_cim_output_stencil_read[5];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[4] = cim_stencil_op_hcompute_cim_output_stencil_read[4];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[3] = cim_stencil_op_hcompute_cim_output_stencil_read[3];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[2] = cim_stencil_op_hcompute_cim_output_stencil_read[2];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[1] = cim_stencil_op_hcompute_cim_output_stencil_read[1];
assign op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read[0] = cim_stencil_op_hcompute_cim_output_stencil_read[0];
cu_op_hcompute_cim_output_stencil op_hcompute_cim_output_stencil (
    .clk(op_hcompute_cim_output_stencil_clk),
    .cim_stencil_op_hcompute_cim_output_stencil_read(op_hcompute_cim_output_stencil_cim_stencil_op_hcompute_cim_output_stencil_read),
    .cim_output_stencil_op_hcompute_cim_output_stencil_write(op_hcompute_cim_output_stencil_cim_output_stencil_op_hcompute_cim_output_stencil_write)
);
assign op_hcompute_cim_output_stencil_exe_start_clk = clk;
assign op_hcompute_cim_output_stencil_exe_start_in = op_hcompute_cim_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_output_stencil_exe_start (
    .clk(op_hcompute_cim_output_stencil_exe_start_clk),
    .in(op_hcompute_cim_output_stencil_exe_start_in),
    .out(op_hcompute_cim_output_stencil_exe_start_out)
);
assign op_hcompute_cim_output_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U346 op_hcompute_cim_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_cim_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_cim_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_cim_output_stencil_port_controller_clk = clk;
affine_controller__U325 op_hcompute_cim_output_stencil_port_controller (
    .clk(op_hcompute_cim_output_stencil_port_controller_clk),
    .valid(op_hcompute_cim_output_stencil_port_controller_valid),
    .d(op_hcompute_cim_output_stencil_port_controller_d)
);
assign op_hcompute_cim_output_stencil_read_start = op_hcompute_cim_output_stencil_port_controller_valid;
assign op_hcompute_cim_output_stencil_write_start = op_hcompute_cim_output_stencil_exe_start_out;
assign op_hcompute_cim_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[2] = op_hcompute_cim_output_stencil_port_controller_d[2];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[1] = op_hcompute_cim_output_stencil_port_controller_d[1];
assign op_hcompute_cim_output_stencil_write_start_control_vars_in[0] = op_hcompute_cim_output_stencil_port_controller_d[0];
array_delay_U342 op_hcompute_cim_output_stencil_write_start_control_vars (
    .clk(op_hcompute_cim_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_cim_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_cim_stencil_clk = clk;
assign op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read[0] = lgxx_stencil_op_hcompute_cim_stencil_read[0];
assign op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read[0] = lgxy_stencil_op_hcompute_cim_stencil_read[0];
assign op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read[0] = lgyy_stencil_op_hcompute_cim_stencil_read[0];
cu_op_hcompute_cim_stencil op_hcompute_cim_stencil (
    .clk(op_hcompute_cim_stencil_clk),
    .lgxx_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxx_stencil_op_hcompute_cim_stencil_read),
    .lgxy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgxy_stencil_op_hcompute_cim_stencil_read),
    .lgyy_stencil_op_hcompute_cim_stencil_read(op_hcompute_cim_stencil_lgyy_stencil_op_hcompute_cim_stencil_read),
    .cim_stencil_op_hcompute_cim_stencil_write(op_hcompute_cim_stencil_cim_stencil_op_hcompute_cim_stencil_write)
);
assign op_hcompute_cim_stencil_exe_start_clk = clk;
assign op_hcompute_cim_stencil_exe_start_in = op_hcompute_cim_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_cim_stencil_exe_start (
    .clk(op_hcompute_cim_stencil_exe_start_clk),
    .in(op_hcompute_cim_stencil_exe_start_in),
    .out(op_hcompute_cim_stencil_exe_start_out)
);
assign op_hcompute_cim_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_cim_stencil_exe_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_exe_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U321 op_hcompute_cim_stencil_exe_start_control_vars (
    .clk(op_hcompute_cim_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_cim_stencil_exe_start_control_vars_in),
    .out(op_hcompute_cim_stencil_exe_start_control_vars_out)
);
assign op_hcompute_cim_stencil_port_controller_clk = clk;
affine_controller__U300 op_hcompute_cim_stencil_port_controller (
    .clk(op_hcompute_cim_stencil_port_controller_clk),
    .valid(op_hcompute_cim_stencil_port_controller_valid),
    .d(op_hcompute_cim_stencil_port_controller_d)
);
assign op_hcompute_cim_stencil_read_start = op_hcompute_cim_stencil_port_controller_valid;
assign op_hcompute_cim_stencil_write_start = op_hcompute_cim_stencil_exe_start_out;
assign op_hcompute_cim_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_cim_stencil_write_start_control_vars_in[2] = op_hcompute_cim_stencil_port_controller_d[2];
assign op_hcompute_cim_stencil_write_start_control_vars_in[1] = op_hcompute_cim_stencil_port_controller_d[1];
assign op_hcompute_cim_stencil_write_start_control_vars_in[0] = op_hcompute_cim_stencil_port_controller_d[0];
array_delay_U317 op_hcompute_cim_stencil_write_start_control_vars (
    .clk(op_hcompute_cim_stencil_write_start_control_vars_clk),
    .in(op_hcompute_cim_stencil_write_start_control_vars_in),
    .out(op_hcompute_cim_stencil_write_start_control_vars_out)
);
assign op_hcompute_grad_x_stencil_clk = clk;
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[5];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[4];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[3];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[2];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[1];
assign op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read[0];
cu_op_hcompute_grad_x_stencil op_hcompute_grad_x_stencil (
    .clk(op_hcompute_grad_x_stencil_clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read(op_hcompute_grad_x_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .grad_x_stencil_op_hcompute_grad_x_stencil_write(op_hcompute_grad_x_stencil_grad_x_stencil_op_hcompute_grad_x_stencil_write)
);
assign op_hcompute_grad_x_stencil_exe_start_clk = clk;
assign op_hcompute_grad_x_stencil_exe_start_in = op_hcompute_grad_x_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_x_stencil_exe_start (
    .clk(op_hcompute_grad_x_stencil_exe_start_clk),
    .in(op_hcompute_grad_x_stencil_exe_start_in),
    .out(op_hcompute_grad_x_stencil_exe_start_out)
);
assign op_hcompute_grad_x_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U46 op_hcompute_grad_x_stencil_exe_start_control_vars (
    .clk(op_hcompute_grad_x_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_grad_x_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_exe_start_control_vars_out)
);
assign op_hcompute_grad_x_stencil_port_controller_clk = clk;
affine_controller__U25 op_hcompute_grad_x_stencil_port_controller (
    .clk(op_hcompute_grad_x_stencil_port_controller_clk),
    .valid(op_hcompute_grad_x_stencil_port_controller_valid),
    .d(op_hcompute_grad_x_stencil_port_controller_d)
);
assign op_hcompute_grad_x_stencil_read_start = op_hcompute_grad_x_stencil_port_controller_valid;
assign op_hcompute_grad_x_stencil_write_start = op_hcompute_grad_x_stencil_exe_start_out;
assign op_hcompute_grad_x_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign op_hcompute_grad_x_stencil_write_start_control_vars_in[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
array_delay_U42 op_hcompute_grad_x_stencil_write_start_control_vars (
    .clk(op_hcompute_grad_x_stencil_write_start_control_vars_clk),
    .in(op_hcompute_grad_x_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_x_stencil_write_start_control_vars_out)
);
assign op_hcompute_grad_y_stencil_clk = clk;
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[5];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[4];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[3];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[2];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[1];
assign op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0] = padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read[0];
cu_op_hcompute_grad_y_stencil op_hcompute_grad_y_stencil (
    .clk(op_hcompute_grad_y_stencil_clk),
    .padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read(op_hcompute_grad_y_stencil_padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .grad_y_stencil_op_hcompute_grad_y_stencil_write(op_hcompute_grad_y_stencil_grad_y_stencil_op_hcompute_grad_y_stencil_write)
);
assign op_hcompute_grad_y_stencil_exe_start_clk = clk;
assign op_hcompute_grad_y_stencil_exe_start_in = op_hcompute_grad_y_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_grad_y_stencil_exe_start (
    .clk(op_hcompute_grad_y_stencil_exe_start_clk),
    .in(op_hcompute_grad_y_stencil_exe_start_in),
    .out(op_hcompute_grad_y_stencil_exe_start_out)
);
assign op_hcompute_grad_y_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_exe_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U146 op_hcompute_grad_y_stencil_exe_start_control_vars (
    .clk(op_hcompute_grad_y_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_grad_y_stencil_exe_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_exe_start_control_vars_out)
);
assign op_hcompute_grad_y_stencil_port_controller_clk = clk;
affine_controller__U125 op_hcompute_grad_y_stencil_port_controller (
    .clk(op_hcompute_grad_y_stencil_port_controller_clk),
    .valid(op_hcompute_grad_y_stencil_port_controller_valid),
    .d(op_hcompute_grad_y_stencil_port_controller_d)
);
assign op_hcompute_grad_y_stencil_read_start = op_hcompute_grad_y_stencil_port_controller_valid;
assign op_hcompute_grad_y_stencil_write_start = op_hcompute_grad_y_stencil_exe_start_out;
assign op_hcompute_grad_y_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign op_hcompute_grad_y_stencil_write_start_control_vars_in[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
array_delay_U142 op_hcompute_grad_y_stencil_write_start_control_vars (
    .clk(op_hcompute_grad_y_stencil_write_start_control_vars_clk),
    .in(op_hcompute_grad_y_stencil_write_start_control_vars_in),
    .out(op_hcompute_grad_y_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read[0] = cim_output_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .cim_output_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_cim_output_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_hw_output_stencil_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(op_hcompute_hw_output_stencil_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_in),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
assign op_hcompute_hw_output_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U371 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U350 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U367 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_clk = clk;
cu_op_hcompute_lgxx_stencil op_hcompute_lgxx_stencil (
    .clk(op_hcompute_lgxx_stencil_clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write(op_hcompute_lgxx_stencil_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
assign op_hcompute_lgxx_stencil_1_clk = clk;
assign op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0] = lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read[0];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[8] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[8];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[7] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[7];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[6] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[6];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[5] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[5];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[4] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[4];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[3] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[3];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[2] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[2];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[1] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[1];
assign op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read[0] = lxx_stencil_op_hcompute_lgxx_stencil_1_read[0];
cu_op_hcompute_lgxx_stencil_1 op_hcompute_lgxx_stencil_1 (
    .clk(op_hcompute_lgxx_stencil_1_clk),
    .lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .lxx_stencil_op_hcompute_lgxx_stencil_1_read(op_hcompute_lgxx_stencil_1_lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .lgxx_stencil_op_hcompute_lgxx_stencil_1_write(op_hcompute_lgxx_stencil_1_lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign op_hcompute_lgxx_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgxx_stencil_1_exe_start_in = op_hcompute_lgxx_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_1_exe_start (
    .clk(op_hcompute_lgxx_stencil_1_exe_start_clk),
    .in(op_hcompute_lgxx_stencil_1_exe_start_in),
    .out(op_hcompute_lgxx_stencil_1_exe_start_out)
);
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U121 op_hcompute_lgxx_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_1_port_controller_clk = clk;
affine_controller__U100 op_hcompute_lgxx_stencil_1_port_controller (
    .clk(op_hcompute_lgxx_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgxx_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_1_port_controller_d)
);
assign op_hcompute_lgxx_stencil_1_read_start = op_hcompute_lgxx_stencil_1_port_controller_valid;
assign op_hcompute_lgxx_stencil_1_write_start = op_hcompute_lgxx_stencil_1_exe_start_out;
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_1_port_controller_d[2];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_1_port_controller_d[1];
assign op_hcompute_lgxx_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_1_port_controller_d[0];
array_delay_U117 op_hcompute_lgxx_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_exe_start_clk = clk;
assign op_hcompute_lgxx_stencil_exe_start_in = op_hcompute_lgxx_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxx_stencil_exe_start (
    .clk(op_hcompute_lgxx_stencil_exe_start_clk),
    .in(op_hcompute_lgxx_stencil_exe_start_in),
    .out(op_hcompute_lgxx_stencil_exe_start_out)
);
assign op_hcompute_lgxx_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U96 op_hcompute_lgxx_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgxx_stencil_port_controller_clk = clk;
affine_controller__U75 op_hcompute_lgxx_stencil_port_controller (
    .clk(op_hcompute_lgxx_stencil_port_controller_clk),
    .valid(op_hcompute_lgxx_stencil_port_controller_valid),
    .d(op_hcompute_lgxx_stencil_port_controller_d)
);
assign op_hcompute_lgxx_stencil_read_start = op_hcompute_lgxx_stencil_port_controller_valid;
assign op_hcompute_lgxx_stencil_write_start = op_hcompute_lgxx_stencil_exe_start_out;
assign op_hcompute_lgxx_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[2] = op_hcompute_lgxx_stencil_port_controller_d[2];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[1] = op_hcompute_lgxx_stencil_port_controller_d[1];
assign op_hcompute_lgxx_stencil_write_start_control_vars_in[0] = op_hcompute_lgxx_stencil_port_controller_d[0];
array_delay_U92 op_hcompute_lgxx_stencil_write_start_control_vars (
    .clk(op_hcompute_lgxx_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxx_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_clk = clk;
cu_op_hcompute_lgxy_stencil op_hcompute_lgxy_stencil (
    .clk(op_hcompute_lgxy_stencil_clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write(op_hcompute_lgxy_stencil_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
assign op_hcompute_lgxy_stencil_1_clk = clk;
assign op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0] = lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read[0];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[8] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[8];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[7] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[7];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[6] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[6];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[5] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[5];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[4] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[4];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[3] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[3];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[2] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[2];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[1] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[1];
assign op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read[0] = lxy_stencil_op_hcompute_lgxy_stencil_1_read[0];
cu_op_hcompute_lgxy_stencil_1 op_hcompute_lgxy_stencil_1 (
    .clk(op_hcompute_lgxy_stencil_1_clk),
    .lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .lxy_stencil_op_hcompute_lgxy_stencil_1_read(op_hcompute_lgxy_stencil_1_lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .lgxy_stencil_op_hcompute_lgxy_stencil_1_write(op_hcompute_lgxy_stencil_1_lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign op_hcompute_lgxy_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgxy_stencil_1_exe_start_in = op_hcompute_lgxy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_1_exe_start (
    .clk(op_hcompute_lgxy_stencil_1_exe_start_clk),
    .in(op_hcompute_lgxy_stencil_1_exe_start_in),
    .out(op_hcompute_lgxy_stencil_1_exe_start_out)
);
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U221 op_hcompute_lgxy_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_1_port_controller_clk = clk;
affine_controller__U200 op_hcompute_lgxy_stencil_1_port_controller (
    .clk(op_hcompute_lgxy_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgxy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_1_port_controller_d)
);
assign op_hcompute_lgxy_stencil_1_read_start = op_hcompute_lgxy_stencil_1_port_controller_valid;
assign op_hcompute_lgxy_stencil_1_write_start = op_hcompute_lgxy_stencil_1_exe_start_out;
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_1_port_controller_d[2];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_1_port_controller_d[1];
assign op_hcompute_lgxy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_1_port_controller_d[0];
array_delay_U217 op_hcompute_lgxy_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_exe_start_clk = clk;
assign op_hcompute_lgxy_stencil_exe_start_in = op_hcompute_lgxy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgxy_stencil_exe_start (
    .clk(op_hcompute_lgxy_stencil_exe_start_clk),
    .in(op_hcompute_lgxy_stencil_exe_start_in),
    .out(op_hcompute_lgxy_stencil_exe_start_out)
);
assign op_hcompute_lgxy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U196 op_hcompute_lgxy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgxy_stencil_port_controller_clk = clk;
affine_controller__U175 op_hcompute_lgxy_stencil_port_controller (
    .clk(op_hcompute_lgxy_stencil_port_controller_clk),
    .valid(op_hcompute_lgxy_stencil_port_controller_valid),
    .d(op_hcompute_lgxy_stencil_port_controller_d)
);
assign op_hcompute_lgxy_stencil_read_start = op_hcompute_lgxy_stencil_port_controller_valid;
assign op_hcompute_lgxy_stencil_write_start = op_hcompute_lgxy_stencil_exe_start_out;
assign op_hcompute_lgxy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[2] = op_hcompute_lgxy_stencil_port_controller_d[2];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[1] = op_hcompute_lgxy_stencil_port_controller_d[1];
assign op_hcompute_lgxy_stencil_write_start_control_vars_in[0] = op_hcompute_lgxy_stencil_port_controller_d[0];
array_delay_U192 op_hcompute_lgxy_stencil_write_start_control_vars (
    .clk(op_hcompute_lgxy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgxy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_clk = clk;
cu_op_hcompute_lgyy_stencil op_hcompute_lgyy_stencil (
    .clk(op_hcompute_lgyy_stencil_clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write(op_hcompute_lgyy_stencil_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
assign op_hcompute_lgyy_stencil_1_clk = clk;
assign op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0] = lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read[0];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[8] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[8];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[7] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[7];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[6] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[6];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[5] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[5];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[4] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[4];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[3] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[3];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[2] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[2];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[1] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[1];
assign op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read[0] = lyy_stencil_op_hcompute_lgyy_stencil_1_read[0];
cu_op_hcompute_lgyy_stencil_1 op_hcompute_lgyy_stencil_1 (
    .clk(op_hcompute_lgyy_stencil_1_clk),
    .lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .lyy_stencil_op_hcompute_lgyy_stencil_1_read(op_hcompute_lgyy_stencil_1_lyy_stencil_op_hcompute_lgyy_stencil_1_read),
    .lgyy_stencil_op_hcompute_lgyy_stencil_1_write(op_hcompute_lgyy_stencil_1_lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign op_hcompute_lgyy_stencil_1_exe_start_clk = clk;
assign op_hcompute_lgyy_stencil_1_exe_start_in = op_hcompute_lgyy_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_1_exe_start (
    .clk(op_hcompute_lgyy_stencil_1_exe_start_clk),
    .in(op_hcompute_lgyy_stencil_1_exe_start_in),
    .out(op_hcompute_lgyy_stencil_1_exe_start_out)
);
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U296 op_hcompute_lgyy_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_1_port_controller_clk = clk;
affine_controller__U275 op_hcompute_lgyy_stencil_1_port_controller (
    .clk(op_hcompute_lgyy_stencil_1_port_controller_clk),
    .valid(op_hcompute_lgyy_stencil_1_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_1_port_controller_d)
);
assign op_hcompute_lgyy_stencil_1_read_start = op_hcompute_lgyy_stencil_1_port_controller_valid;
assign op_hcompute_lgyy_stencil_1_write_start = op_hcompute_lgyy_stencil_1_exe_start_out;
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_1_port_controller_d[2];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_1_port_controller_d[1];
assign op_hcompute_lgyy_stencil_1_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_1_port_controller_d[0];
array_delay_U292 op_hcompute_lgyy_stencil_1_write_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_exe_start_clk = clk;
assign op_hcompute_lgyy_stencil_exe_start_in = op_hcompute_lgyy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lgyy_stencil_exe_start (
    .clk(op_hcompute_lgyy_stencil_exe_start_clk),
    .in(op_hcompute_lgyy_stencil_exe_start_in),
    .out(op_hcompute_lgyy_stencil_exe_start_out)
);
assign op_hcompute_lgyy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U271 op_hcompute_lgyy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lgyy_stencil_port_controller_clk = clk;
affine_controller__U250 op_hcompute_lgyy_stencil_port_controller (
    .clk(op_hcompute_lgyy_stencil_port_controller_clk),
    .valid(op_hcompute_lgyy_stencil_port_controller_valid),
    .d(op_hcompute_lgyy_stencil_port_controller_d)
);
assign op_hcompute_lgyy_stencil_read_start = op_hcompute_lgyy_stencil_port_controller_valid;
assign op_hcompute_lgyy_stencil_write_start = op_hcompute_lgyy_stencil_exe_start_out;
assign op_hcompute_lgyy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[2] = op_hcompute_lgyy_stencil_port_controller_d[2];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[1] = op_hcompute_lgyy_stencil_port_controller_d[1];
assign op_hcompute_lgyy_stencil_write_start_control_vars_in[0] = op_hcompute_lgyy_stencil_port_controller_d[0];
array_delay_U267 op_hcompute_lgyy_stencil_write_start_control_vars (
    .clk(op_hcompute_lgyy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lgyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lgyy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lxx_stencil_clk = clk;
assign op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read[0] = grad_x_stencil_op_hcompute_lxx_stencil_read[0];
cu_op_hcompute_lxx_stencil op_hcompute_lxx_stencil (
    .clk(op_hcompute_lxx_stencil_clk),
    .grad_x_stencil_op_hcompute_lxx_stencil_read(op_hcompute_lxx_stencil_grad_x_stencil_op_hcompute_lxx_stencil_read),
    .lxx_stencil_op_hcompute_lxx_stencil_write(op_hcompute_lxx_stencil_lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign op_hcompute_lxx_stencil_exe_start_clk = clk;
assign op_hcompute_lxx_stencil_exe_start_in = op_hcompute_lxx_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxx_stencil_exe_start (
    .clk(op_hcompute_lxx_stencil_exe_start_clk),
    .in(op_hcompute_lxx_stencil_exe_start_in),
    .out(op_hcompute_lxx_stencil_exe_start_out)
);
assign op_hcompute_lxx_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_exe_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U71 op_hcompute_lxx_stencil_exe_start_control_vars (
    .clk(op_hcompute_lxx_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lxx_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lxx_stencil_port_controller_clk = clk;
affine_controller__U50 op_hcompute_lxx_stencil_port_controller (
    .clk(op_hcompute_lxx_stencil_port_controller_clk),
    .valid(op_hcompute_lxx_stencil_port_controller_valid),
    .d(op_hcompute_lxx_stencil_port_controller_d)
);
assign op_hcompute_lxx_stencil_read_start = op_hcompute_lxx_stencil_port_controller_valid;
assign op_hcompute_lxx_stencil_write_start = op_hcompute_lxx_stencil_exe_start_out;
assign op_hcompute_lxx_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lxx_stencil_write_start_control_vars_in[2] = op_hcompute_lxx_stencil_port_controller_d[2];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[1] = op_hcompute_lxx_stencil_port_controller_d[1];
assign op_hcompute_lxx_stencil_write_start_control_vars_in[0] = op_hcompute_lxx_stencil_port_controller_d[0];
array_delay_U67 op_hcompute_lxx_stencil_write_start_control_vars (
    .clk(op_hcompute_lxx_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lxx_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxx_stencil_write_start_control_vars_out)
);
assign op_hcompute_lxy_stencil_clk = clk;
assign op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read[0] = grad_x_stencil_op_hcompute_lxy_stencil_read[0];
assign op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read[0] = grad_y_stencil_op_hcompute_lxy_stencil_read[0];
cu_op_hcompute_lxy_stencil op_hcompute_lxy_stencil (
    .clk(op_hcompute_lxy_stencil_clk),
    .grad_x_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_x_stencil_op_hcompute_lxy_stencil_read),
    .grad_y_stencil_op_hcompute_lxy_stencil_read(op_hcompute_lxy_stencil_grad_y_stencil_op_hcompute_lxy_stencil_read),
    .lxy_stencil_op_hcompute_lxy_stencil_write(op_hcompute_lxy_stencil_lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign op_hcompute_lxy_stencil_exe_start_clk = clk;
assign op_hcompute_lxy_stencil_exe_start_in = op_hcompute_lxy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lxy_stencil_exe_start (
    .clk(op_hcompute_lxy_stencil_exe_start_clk),
    .in(op_hcompute_lxy_stencil_exe_start_in),
    .out(op_hcompute_lxy_stencil_exe_start_out)
);
assign op_hcompute_lxy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_exe_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U171 op_hcompute_lxy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lxy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lxy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lxy_stencil_port_controller_clk = clk;
affine_controller__U150 op_hcompute_lxy_stencil_port_controller (
    .clk(op_hcompute_lxy_stencil_port_controller_clk),
    .valid(op_hcompute_lxy_stencil_port_controller_valid),
    .d(op_hcompute_lxy_stencil_port_controller_d)
);
assign op_hcompute_lxy_stencil_read_start = op_hcompute_lxy_stencil_port_controller_valid;
assign op_hcompute_lxy_stencil_write_start = op_hcompute_lxy_stencil_exe_start_out;
assign op_hcompute_lxy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lxy_stencil_write_start_control_vars_in[2] = op_hcompute_lxy_stencil_port_controller_d[2];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[1] = op_hcompute_lxy_stencil_port_controller_d[1];
assign op_hcompute_lxy_stencil_write_start_control_vars_in[0] = op_hcompute_lxy_stencil_port_controller_d[0];
array_delay_U167 op_hcompute_lxy_stencil_write_start_control_vars (
    .clk(op_hcompute_lxy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lxy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lxy_stencil_write_start_control_vars_out)
);
assign op_hcompute_lyy_stencil_clk = clk;
assign op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read[0] = grad_y_stencil_op_hcompute_lyy_stencil_read[0];
cu_op_hcompute_lyy_stencil op_hcompute_lyy_stencil (
    .clk(op_hcompute_lyy_stencil_clk),
    .grad_y_stencil_op_hcompute_lyy_stencil_read(op_hcompute_lyy_stencil_grad_y_stencil_op_hcompute_lyy_stencil_read),
    .lyy_stencil_op_hcompute_lyy_stencil_write(op_hcompute_lyy_stencil_lyy_stencil_op_hcompute_lyy_stencil_write)
);
assign op_hcompute_lyy_stencil_exe_start_clk = clk;
assign op_hcompute_lyy_stencil_exe_start_in = op_hcompute_lyy_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_lyy_stencil_exe_start (
    .clk(op_hcompute_lyy_stencil_exe_start_clk),
    .in(op_hcompute_lyy_stencil_exe_start_in),
    .out(op_hcompute_lyy_stencil_exe_start_out)
);
assign op_hcompute_lyy_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_exe_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U246 op_hcompute_lyy_stencil_exe_start_control_vars (
    .clk(op_hcompute_lyy_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_lyy_stencil_exe_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_exe_start_control_vars_out)
);
assign op_hcompute_lyy_stencil_port_controller_clk = clk;
affine_controller__U225 op_hcompute_lyy_stencil_port_controller (
    .clk(op_hcompute_lyy_stencil_port_controller_clk),
    .valid(op_hcompute_lyy_stencil_port_controller_valid),
    .d(op_hcompute_lyy_stencil_port_controller_d)
);
assign op_hcompute_lyy_stencil_read_start = op_hcompute_lyy_stencil_port_controller_valid;
assign op_hcompute_lyy_stencil_write_start = op_hcompute_lyy_stencil_exe_start_out;
assign op_hcompute_lyy_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_lyy_stencil_write_start_control_vars_in[2] = op_hcompute_lyy_stencil_port_controller_d[2];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[1] = op_hcompute_lyy_stencil_port_controller_d[1];
assign op_hcompute_lyy_stencil_write_start_control_vars_in[0] = op_hcompute_lyy_stencil_port_controller_d[0];
array_delay_U242 op_hcompute_lyy_stencil_write_start_control_vars (
    .clk(op_hcompute_lyy_stencil_write_start_control_vars_clk),
    .in(op_hcompute_lyy_stencil_write_start_control_vars_in),
    .out(op_hcompute_lyy_stencil_write_start_control_vars_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = _U1076_out;
cu_op_hcompute_padded16_global_wrapper_stencil op_hcompute_padded16_global_wrapper_stencil (
    .clk(op_hcompute_padded16_global_wrapper_stencil_clk),
    .padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read(op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read),
    .padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write(op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_in = op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_padded16_global_wrapper_stencil_exe_start (
    .clk(op_hcompute_padded16_global_wrapper_stencil_exe_start_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_exe_start_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U21 op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_padded16_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U0 op_hcompute_padded16_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_padded16_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_padded16_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_padded16_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_padded16_global_wrapper_stencil_read_start = op_hcompute_padded16_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_padded16_global_wrapper_stencil_write_start = op_hcompute_padded16_global_wrapper_stencil_exe_start_out;
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_padded16_global_wrapper_stencil_port_controller_d[0];
array_delay_U17 op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out)
);
assign padded16_global_wrapper_stencil_clk = clk;
assign padded16_global_wrapper_stencil_rst_n = rst_n;
assign padded16_global_wrapper_stencil_flush = flush;
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren = op_hcompute_grad_x_stencil_read_start;
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[2] = op_hcompute_grad_x_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[1] = op_hcompute_grad_x_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars[0] = op_hcompute_grad_x_stencil_port_controller_d[0];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren = op_hcompute_grad_y_stencil_read_start;
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[2] = op_hcompute_grad_y_stencil_port_controller_d[2];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[1] = op_hcompute_grad_y_stencil_port_controller_d[1];
assign padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars[0] = op_hcompute_grad_y_stencil_port_controller_d[0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen = op_hcompute_padded16_global_wrapper_stencil_write_start;
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[2];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[1];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_padded16_global_wrapper_stencil_write_start_control_vars_out[0];
assign padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0] = op_hcompute_padded16_global_wrapper_stencil_padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write[0];
padded16_global_wrapper_stencil_ub padded16_global_wrapper_stencil (
    .clk(padded16_global_wrapper_stencil_clk),
    .rst_n(padded16_global_wrapper_stencil_rst_n),
    .flush(padded16_global_wrapper_stencil_flush),
    .op_hcompute_grad_x_stencil_read_ren(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren),
    .op_hcompute_grad_x_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars),
    .op_hcompute_grad_x_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read),
    .op_hcompute_grad_y_stencil_read_ren(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren),
    .op_hcompute_grad_y_stencil_read_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars),
    .op_hcompute_grad_y_stencil_read(padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read),
    .op_hcompute_padded16_global_wrapper_stencil_write_wen(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen),
    .op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_padded16_global_wrapper_stencil_write(padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read_valid = op_hcompute_padded16_global_wrapper_stencil_read_start;
endmodule

