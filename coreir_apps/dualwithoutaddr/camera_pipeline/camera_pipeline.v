// Module `inner_sram__U832` defined externally
// Module `inner_sram__U791` defined externally
// Module `inner_sram__U731` defined externally
// Module `inner_sram__U672` defined externally
// Module `inner_sram__U601` defined externally
// Module `inner_sram__U528` defined externally
// Module `inner_sram__U483` defined externally
// Module `inner_sram__U450` defined externally
// Module `inner_sram__U417` defined externally
// Module `inner_sram__U384` defined externally
module hcompute_hw_output_stencil_2 (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_curved_stencil [0:0]
);
assign out_hw_output_stencil = in0_curved_stencil[0];
endmodule

module hcompute_hw_output_stencil_1 (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_curved_stencil [0:0]
);
assign out_hw_output_stencil = in0_curved_stencil[0];
endmodule

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_curved_stencil [0:0]
);
assign out_hw_output_stencil = in0_curved_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil_2 (
    input clk,
    input [15:0] curved_stencil_op_hcompute_hw_output_stencil_2_read [0:0],
    output [15:0] hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_curved_stencil [0:0];
assign inner_compute_in0_curved_stencil[0] = curved_stencil_op_hcompute_hw_output_stencil_2_read[0];
hcompute_hw_output_stencil_2 inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_curved_stencil(inner_compute_in0_curved_stencil)
);
assign hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_output_stencil_1 (
    input clk,
    input [15:0] curved_stencil_op_hcompute_hw_output_stencil_1_read [0:0],
    output [15:0] hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_curved_stencil [0:0];
assign inner_compute_in0_curved_stencil[0] = curved_stencil_op_hcompute_hw_output_stencil_1_read[0];
hcompute_hw_output_stencil_1 inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_curved_stencil(inner_compute_in0_curved_stencil)
);
assign hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] curved_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_curved_stencil [0:0];
assign inner_compute_in0_curved_stencil[0] = curved_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_curved_stencil(inner_compute_in0_curved_stencil)
);
assign hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_input_global_wrapper_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_input_global_wrapper_stencil;
wire [15:0] inner_compute_in0_hw_input_stencil [0:0];
assign inner_compute_in0_hw_input_stencil[0] = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
hcompute_hw_input_global_wrapper_stencil inner_compute (
    .out_hw_input_global_wrapper_stencil(inner_compute_out_hw_input_global_wrapper_stencil),
    .in0_hw_input_stencil(inner_compute_in0_hw_input_stencil)
);
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = inner_compute_out_hw_input_global_wrapper_stencil;
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

module delay__U797 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U798_in;
wire _U798_clk;
wire [15:0] _U798_out;
wire [15:0] _U799_in;
wire _U799_clk;
assign _U798_in = wdata;
assign _U798_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U798 (
    .in(_U798_in),
    .clk(_U798_clk),
    .out(_U798_out)
);
assign _U799_in = _U798_out;
assign _U799_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U799 (
    .in(_U799_in),
    .clk(_U799_clk),
    .out(rdata)
);
endmodule

module delay__U793 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U794_in;
wire _U794_clk;
wire [15:0] _U794_out;
wire [15:0] _U795_in;
wire _U795_clk;
assign _U794_in = wdata;
assign _U794_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U794 (
    .in(_U794_in),
    .clk(_U794_clk),
    .out(_U794_out)
);
assign _U795_in = _U794_out;
assign _U795_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U795 (
    .in(_U795_in),
    .clk(_U795_clk),
    .out(rdata)
);
endmodule

module delay__U753 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U754_in;
wire _U754_clk;
wire [15:0] _U754_out;
wire [15:0] _U755_in;
wire _U755_clk;
wire [15:0] _U755_out;
wire [15:0] _U756_in;
wire _U756_clk;
wire [15:0] _U756_out;
wire [15:0] _U757_in;
wire _U757_clk;
wire [15:0] _U757_out;
wire [15:0] _U758_in;
wire _U758_clk;
assign _U754_in = wdata;
assign _U754_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U754 (
    .in(_U754_in),
    .clk(_U754_clk),
    .out(_U754_out)
);
assign _U755_in = _U754_out;
assign _U755_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U755 (
    .in(_U755_in),
    .clk(_U755_clk),
    .out(_U755_out)
);
assign _U756_in = _U755_out;
assign _U756_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U756 (
    .in(_U756_in),
    .clk(_U756_clk),
    .out(_U756_out)
);
assign _U757_in = _U756_out;
assign _U757_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U757 (
    .in(_U757_in),
    .clk(_U757_clk),
    .out(_U757_out)
);
assign _U758_in = _U757_out;
assign _U758_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U758 (
    .in(_U758_in),
    .clk(_U758_clk),
    .out(rdata)
);
endmodule

module delay__U750 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U751_in;
wire _U751_clk;
assign _U751_in = wdata;
assign _U751_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U751 (
    .in(_U751_in),
    .clk(_U751_clk),
    .out(rdata)
);
endmodule

module delay__U744 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U745_in;
wire _U745_clk;
wire [15:0] _U745_out;
wire [15:0] _U746_in;
wire _U746_clk;
wire [15:0] _U746_out;
wire [15:0] _U747_in;
wire _U747_clk;
wire [15:0] _U747_out;
wire [15:0] _U748_in;
wire _U748_clk;
assign _U745_in = wdata;
assign _U745_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U745 (
    .in(_U745_in),
    .clk(_U745_clk),
    .out(_U745_out)
);
assign _U746_in = _U745_out;
assign _U746_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U746 (
    .in(_U746_in),
    .clk(_U746_clk),
    .out(_U746_out)
);
assign _U747_in = _U746_out;
assign _U747_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U747 (
    .in(_U747_in),
    .clk(_U747_clk),
    .out(_U747_out)
);
assign _U748_in = _U747_out;
assign _U748_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U748 (
    .in(_U748_in),
    .clk(_U748_clk),
    .out(rdata)
);
endmodule

module delay__U739 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U740_in;
wire _U740_clk;
wire [15:0] _U740_out;
wire [15:0] _U741_in;
wire _U741_clk;
wire [15:0] _U741_out;
wire [15:0] _U742_in;
wire _U742_clk;
assign _U740_in = wdata;
assign _U740_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U740 (
    .in(_U740_in),
    .clk(_U740_clk),
    .out(_U740_out)
);
assign _U741_in = _U740_out;
assign _U741_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U741 (
    .in(_U741_in),
    .clk(_U741_clk),
    .out(_U741_out)
);
assign _U742_in = _U741_out;
assign _U742_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U742 (
    .in(_U742_in),
    .clk(_U742_clk),
    .out(rdata)
);
endmodule

module delay__U736 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U737_in;
wire _U737_clk;
assign _U737_in = wdata;
assign _U737_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U737 (
    .in(_U737_in),
    .clk(_U737_clk),
    .out(rdata)
);
endmodule

module delay__U733 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U734_in;
wire _U734_clk;
assign _U734_in = wdata;
assign _U734_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U734 (
    .in(_U734_in),
    .clk(_U734_clk),
    .out(rdata)
);
endmodule

module delay__U697 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U698_in;
wire _U698_clk;
assign _U698_in = wdata;
assign _U698_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U698 (
    .in(_U698_in),
    .clk(_U698_clk),
    .out(rdata)
);
endmodule

module delay__U694 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U695_in;
wire _U695_clk;
assign _U695_in = wdata;
assign _U695_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U695 (
    .in(_U695_in),
    .clk(_U695_clk),
    .out(rdata)
);
endmodule

module delay__U690 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U691_in;
wire _U691_clk;
wire [15:0] _U691_out;
wire [15:0] _U692_in;
wire _U692_clk;
assign _U691_in = wdata;
assign _U691_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U691 (
    .in(_U691_in),
    .clk(_U691_clk),
    .out(_U691_out)
);
assign _U692_in = _U691_out;
assign _U692_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U692 (
    .in(_U692_in),
    .clk(_U692_clk),
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

module delay__U680 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U681_in;
wire _U681_clk;
wire [15:0] _U681_out;
wire [15:0] _U682_in;
wire _U682_clk;
assign _U681_in = wdata;
assign _U681_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U681 (
    .in(_U681_in),
    .clk(_U681_clk),
    .out(_U681_out)
);
assign _U682_in = _U681_out;
assign _U682_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U682 (
    .in(_U682_in),
    .clk(_U682_clk),
    .out(rdata)
);
endmodule

module delay__U677 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U678_in;
wire _U678_clk;
assign _U678_in = wdata;
assign _U678_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U678 (
    .in(_U678_in),
    .clk(_U678_clk),
    .out(rdata)
);
endmodule

module delay__U674 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U675_in;
wire _U675_clk;
assign _U675_in = wdata;
assign _U675_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U675 (
    .in(_U675_in),
    .clk(_U675_clk),
    .out(rdata)
);
endmodule

module delay__U638 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U639_in;
wire _U639_clk;
assign _U639_in = wdata;
assign _U639_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U639 (
    .in(_U639_in),
    .clk(_U639_clk),
    .out(rdata)
);
endmodule

module delay__U635 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U636_in;
wire _U636_clk;
assign _U636_in = wdata;
assign _U636_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U636 (
    .in(_U636_in),
    .clk(_U636_clk),
    .out(rdata)
);
endmodule

module delay__U630 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U631_in;
wire _U631_clk;
wire [15:0] _U631_out;
wire [15:0] _U632_in;
wire _U632_clk;
wire [15:0] _U632_out;
wire [15:0] _U633_in;
wire _U633_clk;
assign _U631_in = wdata;
assign _U631_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U631 (
    .in(_U631_in),
    .clk(_U631_clk),
    .out(_U631_out)
);
assign _U632_in = _U631_out;
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
    .out(rdata)
);
endmodule

module delay__U624 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U625_in;
wire _U625_clk;
wire [15:0] _U625_out;
wire [15:0] _U626_in;
wire _U626_clk;
wire [15:0] _U626_out;
wire [15:0] _U627_in;
wire _U627_clk;
wire [15:0] _U627_out;
wire [15:0] _U628_in;
wire _U628_clk;
assign _U625_in = wdata;
assign _U625_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U625 (
    .in(_U625_in),
    .clk(_U625_clk),
    .out(_U625_out)
);
assign _U626_in = _U625_out;
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
    .out(rdata)
);
endmodule

module delay__U621 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U622_in;
wire _U622_clk;
assign _U622_in = wdata;
assign _U622_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U622 (
    .in(_U622_in),
    .clk(_U622_clk),
    .out(rdata)
);
endmodule

module delay__U615 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U616_in;
wire _U616_clk;
wire [15:0] _U616_out;
wire [15:0] _U617_in;
wire _U617_clk;
wire [15:0] _U617_out;
wire [15:0] _U618_in;
wire _U618_clk;
wire [15:0] _U618_out;
wire [15:0] _U619_in;
wire _U619_clk;
assign _U616_in = wdata;
assign _U616_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U616 (
    .in(_U616_in),
    .clk(_U616_clk),
    .out(_U616_out)
);
assign _U617_in = _U616_out;
assign _U617_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U617 (
    .in(_U617_in),
    .clk(_U617_clk),
    .out(_U617_out)
);
assign _U618_in = _U617_out;
assign _U618_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U618 (
    .in(_U618_in),
    .clk(_U618_clk),
    .out(_U618_out)
);
assign _U619_in = _U618_out;
assign _U619_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U619 (
    .in(_U619_in),
    .clk(_U619_clk),
    .out(rdata)
);
endmodule

module delay__U609 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U610_in;
wire _U610_clk;
wire [15:0] _U610_out;
wire [15:0] _U611_in;
wire _U611_clk;
wire [15:0] _U611_out;
wire [15:0] _U612_in;
wire _U612_clk;
wire [15:0] _U612_out;
wire [15:0] _U613_in;
wire _U613_clk;
assign _U610_in = wdata;
assign _U610_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U610 (
    .in(_U610_in),
    .clk(_U610_clk),
    .out(_U610_out)
);
assign _U611_in = _U610_out;
assign _U611_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U611 (
    .in(_U611_in),
    .clk(_U611_clk),
    .out(_U611_out)
);
assign _U612_in = _U611_out;
assign _U612_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U612 (
    .in(_U612_in),
    .clk(_U612_clk),
    .out(_U612_out)
);
assign _U613_in = _U612_out;
assign _U613_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U613 (
    .in(_U613_in),
    .clk(_U613_clk),
    .out(rdata)
);
endmodule

module delay__U603 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U604_in;
wire _U604_clk;
wire [15:0] _U604_out;
wire [15:0] _U605_in;
wire _U605_clk;
wire [15:0] _U605_out;
wire [15:0] _U606_in;
wire _U606_clk;
wire [15:0] _U606_out;
wire [15:0] _U607_in;
wire _U607_clk;
assign _U604_in = wdata;
assign _U604_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U604 (
    .in(_U604_in),
    .clk(_U604_clk),
    .out(_U604_out)
);
assign _U605_in = _U604_out;
assign _U605_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U605 (
    .in(_U605_in),
    .clk(_U605_clk),
    .out(_U605_out)
);
assign _U606_in = _U605_out;
assign _U606_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U606 (
    .in(_U606_in),
    .clk(_U606_clk),
    .out(_U606_out)
);
assign _U607_in = _U606_out;
assign _U607_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U607 (
    .in(_U607_in),
    .clk(_U607_clk),
    .out(rdata)
);
endmodule

module delay__U564 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U565_in;
wire _U565_clk;
wire [15:0] _U565_out;
wire [15:0] _U566_in;
wire _U566_clk;
wire [15:0] _U566_out;
wire [15:0] _U567_in;
wire _U567_clk;
wire [15:0] _U567_out;
wire [15:0] _U568_in;
wire _U568_clk;
assign _U565_in = wdata;
assign _U565_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U565 (
    .in(_U565_in),
    .clk(_U565_clk),
    .out(_U565_out)
);
assign _U566_in = _U565_out;
assign _U566_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U566 (
    .in(_U566_in),
    .clk(_U566_clk),
    .out(_U566_out)
);
assign _U567_in = _U566_out;
assign _U567_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U567 (
    .in(_U567_in),
    .clk(_U567_clk),
    .out(_U567_out)
);
assign _U568_in = _U567_out;
assign _U568_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U568 (
    .in(_U568_in),
    .clk(_U568_clk),
    .out(rdata)
);
endmodule

module delay__U558 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U559_in;
wire _U559_clk;
wire [15:0] _U559_out;
wire [15:0] _U560_in;
wire _U560_clk;
wire [15:0] _U560_out;
wire [15:0] _U561_in;
wire _U561_clk;
wire [15:0] _U561_out;
wire [15:0] _U562_in;
wire _U562_clk;
assign _U559_in = wdata;
assign _U559_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U559 (
    .in(_U559_in),
    .clk(_U559_clk),
    .out(_U559_out)
);
assign _U560_in = _U559_out;
assign _U560_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U560 (
    .in(_U560_in),
    .clk(_U560_clk),
    .out(_U560_out)
);
assign _U561_in = _U560_out;
assign _U561_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U561 (
    .in(_U561_in),
    .clk(_U561_clk),
    .out(_U561_out)
);
assign _U562_in = _U561_out;
assign _U562_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U562 (
    .in(_U562_in),
    .clk(_U562_clk),
    .out(rdata)
);
endmodule

module delay__U552 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U553_in;
wire _U553_clk;
wire [15:0] _U553_out;
wire [15:0] _U554_in;
wire _U554_clk;
wire [15:0] _U554_out;
wire [15:0] _U555_in;
wire _U555_clk;
wire [15:0] _U555_out;
wire [15:0] _U556_in;
wire _U556_clk;
assign _U553_in = wdata;
assign _U553_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U553 (
    .in(_U553_in),
    .clk(_U553_clk),
    .out(_U553_out)
);
assign _U554_in = _U553_out;
assign _U554_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U554 (
    .in(_U554_in),
    .clk(_U554_clk),
    .out(_U554_out)
);
assign _U555_in = _U554_out;
assign _U555_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U555 (
    .in(_U555_in),
    .clk(_U555_clk),
    .out(_U555_out)
);
assign _U556_in = _U555_out;
assign _U556_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U556 (
    .in(_U556_in),
    .clk(_U556_clk),
    .out(rdata)
);
endmodule

module delay__U546 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U547_in;
wire _U547_clk;
wire [15:0] _U547_out;
wire [15:0] _U548_in;
wire _U548_clk;
wire [15:0] _U548_out;
wire [15:0] _U549_in;
wire _U549_clk;
wire [15:0] _U549_out;
wire [15:0] _U550_in;
wire _U550_clk;
assign _U547_in = wdata;
assign _U547_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U547 (
    .in(_U547_in),
    .clk(_U547_clk),
    .out(_U547_out)
);
assign _U548_in = _U547_out;
assign _U548_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U548 (
    .in(_U548_in),
    .clk(_U548_clk),
    .out(_U548_out)
);
assign _U549_in = _U548_out;
assign _U549_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U549 (
    .in(_U549_in),
    .clk(_U549_clk),
    .out(_U549_out)
);
assign _U550_in = _U549_out;
assign _U550_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U550 (
    .in(_U550_in),
    .clk(_U550_clk),
    .out(rdata)
);
endmodule

module delay__U540 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U541_in;
wire _U541_clk;
wire [15:0] _U541_out;
wire [15:0] _U542_in;
wire _U542_clk;
wire [15:0] _U542_out;
wire [15:0] _U543_in;
wire _U543_clk;
wire [15:0] _U543_out;
wire [15:0] _U544_in;
wire _U544_clk;
assign _U541_in = wdata;
assign _U541_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U541 (
    .in(_U541_in),
    .clk(_U541_clk),
    .out(_U541_out)
);
assign _U542_in = _U541_out;
assign _U542_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U542 (
    .in(_U542_in),
    .clk(_U542_clk),
    .out(_U542_out)
);
assign _U543_in = _U542_out;
assign _U543_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U543 (
    .in(_U543_in),
    .clk(_U543_clk),
    .out(_U543_out)
);
assign _U544_in = _U543_out;
assign _U544_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U544 (
    .in(_U544_in),
    .clk(_U544_clk),
    .out(rdata)
);
endmodule

module delay__U530 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U531_in;
wire _U531_clk;
wire [15:0] _U531_out;
wire [15:0] _U532_in;
wire _U532_clk;
wire [15:0] _U532_out;
wire [15:0] _U533_in;
wire _U533_clk;
wire [15:0] _U533_out;
wire [15:0] _U534_in;
wire _U534_clk;
wire [15:0] _U534_out;
wire [15:0] _U535_in;
wire _U535_clk;
wire [15:0] _U535_out;
wire [15:0] _U536_in;
wire _U536_clk;
wire [15:0] _U536_out;
wire [15:0] _U537_in;
wire _U537_clk;
wire [15:0] _U537_out;
wire [15:0] _U538_in;
wire _U538_clk;
assign _U531_in = wdata;
assign _U531_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U531 (
    .in(_U531_in),
    .clk(_U531_clk),
    .out(_U531_out)
);
assign _U532_in = _U531_out;
assign _U532_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U532 (
    .in(_U532_in),
    .clk(_U532_clk),
    .out(_U532_out)
);
assign _U533_in = _U532_out;
assign _U533_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U533 (
    .in(_U533_in),
    .clk(_U533_clk),
    .out(_U533_out)
);
assign _U534_in = _U533_out;
assign _U534_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U534 (
    .in(_U534_in),
    .clk(_U534_clk),
    .out(_U534_out)
);
assign _U535_in = _U534_out;
assign _U535_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U535 (
    .in(_U535_in),
    .clk(_U535_clk),
    .out(_U535_out)
);
assign _U536_in = _U535_out;
assign _U536_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U536 (
    .in(_U536_in),
    .clk(_U536_clk),
    .out(_U536_out)
);
assign _U537_in = _U536_out;
assign _U537_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U537 (
    .in(_U537_in),
    .clk(_U537_clk),
    .out(_U537_out)
);
assign _U538_in = _U537_out;
assign _U538_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U538 (
    .in(_U538_in),
    .clk(_U538_clk),
    .out(rdata)
);
endmodule

module delay__U485 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U486_in;
wire _U486_clk;
wire [15:0] _U486_out;
wire [15:0] _U487_in;
wire _U487_clk;
wire [15:0] _U487_out;
wire [15:0] _U488_in;
wire _U488_clk;
wire [15:0] _U488_out;
wire [15:0] _U489_in;
wire _U489_clk;
wire [15:0] _U489_out;
wire [15:0] _U490_in;
wire _U490_clk;
wire [15:0] _U490_out;
wire [15:0] _U491_in;
wire _U491_clk;
wire [15:0] _U491_out;
wire [15:0] _U492_in;
wire _U492_clk;
wire [15:0] _U492_out;
wire [15:0] _U493_in;
wire _U493_clk;
wire [15:0] _U493_out;
wire [15:0] _U494_in;
wire _U494_clk;
wire [15:0] _U494_out;
wire [15:0] _U495_in;
wire _U495_clk;
assign _U486_in = wdata;
assign _U486_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U486 (
    .in(_U486_in),
    .clk(_U486_clk),
    .out(_U486_out)
);
assign _U487_in = _U486_out;
assign _U487_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U487 (
    .in(_U487_in),
    .clk(_U487_clk),
    .out(_U487_out)
);
assign _U488_in = _U487_out;
assign _U488_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U488 (
    .in(_U488_in),
    .clk(_U488_clk),
    .out(_U488_out)
);
assign _U489_in = _U488_out;
assign _U489_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U489 (
    .in(_U489_in),
    .clk(_U489_clk),
    .out(_U489_out)
);
assign _U490_in = _U489_out;
assign _U490_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U490 (
    .in(_U490_in),
    .clk(_U490_clk),
    .out(_U490_out)
);
assign _U491_in = _U490_out;
assign _U491_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U491 (
    .in(_U491_in),
    .clk(_U491_clk),
    .out(_U491_out)
);
assign _U492_in = _U491_out;
assign _U492_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U492 (
    .in(_U492_in),
    .clk(_U492_clk),
    .out(_U492_out)
);
assign _U493_in = _U492_out;
assign _U493_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U493 (
    .in(_U493_in),
    .clk(_U493_clk),
    .out(_U493_out)
);
assign _U494_in = _U493_out;
assign _U494_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U494 (
    .in(_U494_in),
    .clk(_U494_clk),
    .out(_U494_out)
);
assign _U495_in = _U494_out;
assign _U495_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U495 (
    .in(_U495_in),
    .clk(_U495_clk),
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

module coreir_mem #(
    parameter has_init = 1'b0,
    parameter sync_read = 1'b0,
    parameter depth = 1,
    parameter width = 1
) (
    input clk,
    input [width-1:0] wdata,
    input [$clog2(depth)-1:0] waddr,
    input wen,
    output [width-1:0] rdata,
    input [$clog2(depth)-1:0] raddr
);
  reg [width-1:0] data [depth-1:0];
  parameter [width*depth-1:0] init = 0;
  generate if (has_init) begin
    genvar j;
    for (j = 0; j < depth; j = j + 1) begin
      initial begin
        data[j] = init[(j+1)*width-1:j*width];
      end
    end
  end
  endgenerate
  always @(posedge clk) begin
    if (wen) begin
      data[waddr] <= wdata;
    end
  end
  generate if (sync_read) begin
  reg [width-1:0] rdata_reg;
  always @(posedge clk) begin
    rdata_reg <= data[raddr];
  end
  assign rdata = rdata_reg;
  end else begin
  assign rdata = data[raddr];
  end
  endgenerate

endmodule

module memory_rom2__depth256__width16 #(
    parameter init = 1
) (
    input clk,
    output [15:0] rdata,
    input [15:0] raddr,
    input ren
);
wire mem_clk;
wire [15:0] mem_wdata;
wire [7:0] mem_waddr;
wire mem_wen;
wire [15:0] mem_rdata;
wire [7:0] mem_raddr;
wire [15:0] readreg_in;
wire readreg_clk;
wire readreg_en;
wire [15:0] wdata0_out;
assign mem_clk = clk;
assign mem_wdata = wdata0_out;
assign mem_waddr = 8'h00;
assign mem_wen = wdata0_out[0];
assign mem_raddr = raddr[8 - 1:0];
coreir_mem #(
    .init(init),
    .depth(256),
    .has_init(1'b1),
    .sync_read(1'b0),
    .width(16)
) mem (
    .clk(mem_clk),
    .wdata(mem_wdata),
    .waddr(mem_waddr),
    .wen(mem_wen),
    .rdata(mem_rdata),
    .raddr(mem_raddr)
);
assign readreg_in = mem_rdata;
assign readreg_clk = clk;
assign readreg_en = ren;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) readreg (
    .in(readreg_in),
    .clk(readreg_clk),
    .out(rdata),
    .en(readreg_en)
);
assign wdata0_out = 16'h0000;
endmodule

module hcompute_corrected_stencil_2 (
    output [15:0] out_corrected_stencil,
    input [15:0] in0_demosaicked_1_stencil [2:0]
);
assign out_corrected_stencil = ($signed(16'((16'((16'((16'(in0_demosaicked_1_stencil[0] * 16'h00e4)) - (16'(in0_demosaicked_1_stencil[1] * 16'h0049)))) - (16'(in0_demosaicked_1_stencil[2] * 16'h0008)))) + 16'hf828))) >>> 16'h0008;
endmodule

module cu_op_hcompute_corrected_stencil_2 (
    input clk,
    input [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read [2:0],
    output [15:0] corrected_stencil_op_hcompute_corrected_stencil_2_write [0:0]
);
wire [15:0] inner_compute_out_corrected_stencil;
wire [15:0] inner_compute_in0_demosaicked_1_stencil [2:0];
assign inner_compute_in0_demosaicked_1_stencil[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[2];
assign inner_compute_in0_demosaicked_1_stencil[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[1];
assign inner_compute_in0_demosaicked_1_stencil[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[0];
hcompute_corrected_stencil_2 inner_compute (
    .out_corrected_stencil(inner_compute_out_corrected_stencil),
    .in0_demosaicked_1_stencil(inner_compute_in0_demosaicked_1_stencil)
);
assign corrected_stencil_op_hcompute_corrected_stencil_2_write[0] = inner_compute_out_corrected_stencil;
endmodule

module hcompute_corrected_stencil_1 (
    output [15:0] out_corrected_stencil,
    input [15:0] in0_demosaicked_1_stencil [2:0]
);
assign out_corrected_stencil = ($signed(16'((16'((16'((16'(in0_demosaicked_1_stencil[0] * 16'h009f)) - (16'(in0_demosaicked_1_stencil[1] * 16'h0026)))) - (16'(in0_demosaicked_1_stencil[2] * 16'h0015)))) + 16'hf613))) >>> 16'h0008;
endmodule

module cu_op_hcompute_corrected_stencil_1 (
    input clk,
    input [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read [2:0],
    output [15:0] corrected_stencil_op_hcompute_corrected_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_corrected_stencil;
wire [15:0] inner_compute_in0_demosaicked_1_stencil [2:0];
assign inner_compute_in0_demosaicked_1_stencil[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[2];
assign inner_compute_in0_demosaicked_1_stencil[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[1];
assign inner_compute_in0_demosaicked_1_stencil[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[0];
hcompute_corrected_stencil_1 inner_compute (
    .out_corrected_stencil(inner_compute_out_corrected_stencil),
    .in0_demosaicked_1_stencil(inner_compute_in0_demosaicked_1_stencil)
);
assign corrected_stencil_op_hcompute_corrected_stencil_1_write[0] = inner_compute_out_corrected_stencil;
endmodule

module hcompute_corrected_stencil (
    output [15:0] out_corrected_stencil,
    input [15:0] in0_demosaicked_1_stencil [2:0]
);
assign out_corrected_stencil = ($signed(16'((16'((16'((16'(in0_demosaicked_1_stencil[0] * 16'h00c8)) + (16'(in0_demosaicked_1_stencil[1] * 16'h0011)))) - (16'(in0_demosaicked_1_stencil[2] * 16'h002c)))) + 16'hf0c4))) >>> 16'h0008;
endmodule

module cu_op_hcompute_corrected_stencil (
    input clk,
    input [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_read [2:0],
    output [15:0] corrected_stencil_op_hcompute_corrected_stencil_write [0:0]
);
wire [15:0] inner_compute_out_corrected_stencil;
wire [15:0] inner_compute_in0_demosaicked_1_stencil [2:0];
assign inner_compute_in0_demosaicked_1_stencil[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[2];
assign inner_compute_in0_demosaicked_1_stencil[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[1];
assign inner_compute_in0_demosaicked_1_stencil[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[0];
hcompute_corrected_stencil inner_compute (
    .out_corrected_stencil(inner_compute_out_corrected_stencil),
    .in0_demosaicked_1_stencil(inner_compute_in0_demosaicked_1_stencil)
);
assign corrected_stencil_op_hcompute_corrected_stencil_write[0] = inner_compute_out_corrected_stencil;
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

module commonlib_umin__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = in0 <= in1 ? in0 : in1;
endmodule

module hcompute_curved_stencil_2 (
    input clk,
    input [15:0] in0_corrected_stencil [0:0],
    output [15:0] out_curved_stencil
);
wire rom_curvea0$4_clk;
wire [15:0] rom_curvea0$4_rdata;
wire [15:0] rom_curvea0$4_raddr;
wire rom_curvea0$4_ren;
wire rom_curvea0$5_clk;
wire [15:0] rom_curvea0$5_raddr;
wire rom_curvea0$5_ren;
wire [15:0] umin_corrected_stencil_3_2380_2381_in0;
wire [15:0] umin_corrected_stencil_3_2380_2381_in1;
wire [15:0] umin_corrected_stencil_3_2380_2381_out;
assign rom_curvea0$4_clk = clk;
assign rom_curvea0$4_raddr = umin_corrected_stencil_3_2380_2381_out;
assign rom_curvea0$4_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$4 (
    .clk(rom_curvea0$4_clk),
    .rdata(rom_curvea0$4_rdata),
    .raddr(rom_curvea0$4_raddr),
    .ren(rom_curvea0$4_ren)
);
assign rom_curvea0$5_clk = clk;
assign rom_curvea0$5_raddr = umin_corrected_stencil_3_2380_2381_out;
assign rom_curvea0$5_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$5 (
    .clk(rom_curvea0$5_clk),
    .rdata(out_curved_stencil),
    .raddr(rom_curvea0$5_raddr),
    .ren(rom_curvea0$5_ren)
);
assign umin_corrected_stencil_3_2380_2381_in0 = in0_corrected_stencil[0];
assign umin_corrected_stencil_3_2380_2381_in1 = 16'h00ff;
commonlib_umin__width16 umin_corrected_stencil_3_2380_2381 (
    .in0(umin_corrected_stencil_3_2380_2381_in0),
    .in1(umin_corrected_stencil_3_2380_2381_in1),
    .out(umin_corrected_stencil_3_2380_2381_out)
);
endmodule

module cu_op_hcompute_curved_stencil_2 (
    input clk,
    input [15:0] corrected_stencil_op_hcompute_curved_stencil_2_read [0:0],
    output [15:0] curved_stencil_op_hcompute_curved_stencil_2_write [0:0]
);
wire inner_compute_clk;
wire [15:0] inner_compute_in0_corrected_stencil [0:0];
wire [15:0] inner_compute_out_curved_stencil;
assign inner_compute_clk = clk;
assign inner_compute_in0_corrected_stencil[0] = corrected_stencil_op_hcompute_curved_stencil_2_read[0];
hcompute_curved_stencil_2 inner_compute (
    .clk(inner_compute_clk),
    .in0_corrected_stencil(inner_compute_in0_corrected_stencil),
    .out_curved_stencil(inner_compute_out_curved_stencil)
);
assign curved_stencil_op_hcompute_curved_stencil_2_write[0] = inner_compute_out_curved_stencil;
endmodule

module hcompute_curved_stencil_1 (
    input clk,
    input [15:0] in0_corrected_stencil [0:0],
    output [15:0] out_curved_stencil
);
wire rom_curvea0$2_clk;
wire [15:0] rom_curvea0$2_rdata;
wire [15:0] rom_curvea0$2_raddr;
wire rom_curvea0$2_ren;
wire rom_curvea0$3_clk;
wire [15:0] rom_curvea0$3_raddr;
wire rom_curvea0$3_ren;
wire [15:0] umin_corrected_stencil_2_2111_2112_in0;
wire [15:0] umin_corrected_stencil_2_2111_2112_in1;
wire [15:0] umin_corrected_stencil_2_2111_2112_out;
assign rom_curvea0$2_clk = clk;
assign rom_curvea0$2_raddr = umin_corrected_stencil_2_2111_2112_out;
assign rom_curvea0$2_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$2 (
    .clk(rom_curvea0$2_clk),
    .rdata(rom_curvea0$2_rdata),
    .raddr(rom_curvea0$2_raddr),
    .ren(rom_curvea0$2_ren)
);
assign rom_curvea0$3_clk = clk;
assign rom_curvea0$3_raddr = umin_corrected_stencil_2_2111_2112_out;
assign rom_curvea0$3_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$3 (
    .clk(rom_curvea0$3_clk),
    .rdata(out_curved_stencil),
    .raddr(rom_curvea0$3_raddr),
    .ren(rom_curvea0$3_ren)
);
assign umin_corrected_stencil_2_2111_2112_in0 = in0_corrected_stencil[0];
assign umin_corrected_stencil_2_2111_2112_in1 = 16'h00ff;
commonlib_umin__width16 umin_corrected_stencil_2_2111_2112 (
    .in0(umin_corrected_stencil_2_2111_2112_in0),
    .in1(umin_corrected_stencil_2_2111_2112_in1),
    .out(umin_corrected_stencil_2_2111_2112_out)
);
endmodule

module cu_op_hcompute_curved_stencil_1 (
    input clk,
    input [15:0] corrected_stencil_op_hcompute_curved_stencil_1_read [0:0],
    output [15:0] curved_stencil_op_hcompute_curved_stencil_1_write [0:0]
);
wire inner_compute_clk;
wire [15:0] inner_compute_in0_corrected_stencil [0:0];
wire [15:0] inner_compute_out_curved_stencil;
assign inner_compute_clk = clk;
assign inner_compute_in0_corrected_stencil[0] = corrected_stencil_op_hcompute_curved_stencil_1_read[0];
hcompute_curved_stencil_1 inner_compute (
    .clk(inner_compute_clk),
    .in0_corrected_stencil(inner_compute_in0_corrected_stencil),
    .out_curved_stencil(inner_compute_out_curved_stencil)
);
assign curved_stencil_op_hcompute_curved_stencil_1_write[0] = inner_compute_out_curved_stencil;
endmodule

module hcompute_curved_stencil (
    input clk,
    input [15:0] in0_corrected_stencil [0:0],
    output [15:0] out_curved_stencil
);
wire rom_curvea0_clk;
wire [15:0] rom_curvea0_rdata;
wire [15:0] rom_curvea0_raddr;
wire rom_curvea0_ren;
wire rom_curvea0$1_clk;
wire [15:0] rom_curvea0$1_raddr;
wire rom_curvea0$1_ren;
wire [15:0] umin_corrected_stencil_1_1842_1843_in0;
wire [15:0] umin_corrected_stencil_1_1842_1843_in1;
wire [15:0] umin_corrected_stencil_1_1842_1843_out;
assign rom_curvea0_clk = clk;
assign rom_curvea0_raddr = umin_corrected_stencil_1_1842_1843_out;
assign rom_curvea0_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0 (
    .clk(rom_curvea0_clk),
    .rdata(rom_curvea0_rdata),
    .raddr(rom_curvea0_raddr),
    .ren(rom_curvea0_ren)
);
assign rom_curvea0$1_clk = clk;
assign rom_curvea0$1_raddr = umin_corrected_stencil_1_1842_1843_out;
assign rom_curvea0$1_ren = 1'b1;
memory_rom2__depth256__width16 #(
    .init({16'd63,16'd63,16'd63,16'd62,16'd62,16'd62,16'd62,16'd61,16'd61,16'd61,16'd61,16'd60,16'd60,16'd60,16'd60,16'd59,16'd59,16'd59,16'd59,16'd58,16'd58,16'd58,16'd58,16'd57,16'd57,16'd57,16'd57,16'd56,16'd56,16'd56,16'd56,16'd55,16'd55,16'd55,16'd55,16'd54,16'd54,16'd54,16'd54,16'd53,16'd53,16'd53,16'd53,16'd52,16'd52,16'd52,16'd52,16'd51,16'd51,16'd51,16'd51,16'd50,16'd50,16'd50,16'd50,16'd49,16'd49,16'd49,16'd49,16'd48,16'd48,16'd48,16'd48,16'd47,16'd47,16'd47,16'd47,16'd46,16'd46,16'd46,16'd46,16'd45,16'd45,16'd45,16'd45,16'd44,16'd44,16'd44,16'd44,16'd43,16'd43,16'd43,16'd43,16'd42,16'd42,16'd42,16'd42,16'd41,16'd41,16'd41,16'd41,16'd40,16'd40,16'd40,16'd40,16'd39,16'd39,16'd39,16'd39,16'd38,16'd38,16'd38,16'd38,16'd37,16'd37,16'd37,16'd37,16'd36,16'd36,16'd36,16'd36,16'd35,16'd35,16'd35,16'd35,16'd34,16'd34,16'd34,16'd34,16'd33,16'd33,16'd33,16'd33,16'd32,16'd32,16'd32,16'd32,16'd31,16'd31,16'd31,16'd31,16'd30,16'd30,16'd30,16'd30,16'd29,16'd29,16'd29,16'd29,16'd28,16'd28,16'd28,16'd28,16'd27,16'd27,16'd27,16'd27,16'd26,16'd26,16'd26,16'd26,16'd25,16'd25,16'd25,16'd25,16'd24,16'd24,16'd24,16'd24,16'd23,16'd23,16'd23,16'd23,16'd22,16'd22,16'd22,16'd22,16'd21,16'd21,16'd21,16'd21,16'd20,16'd20,16'd20,16'd20,16'd19,16'd19,16'd19,16'd19,16'd18,16'd18,16'd18,16'd18,16'd17,16'd17,16'd17,16'd17,16'd16,16'd16,16'd16,16'd16,16'd15,16'd15,16'd15,16'd15,16'd14,16'd14,16'd14,16'd14,16'd13,16'd13,16'd13,16'd13,16'd12,16'd12,16'd12,16'd12,16'd11,16'd11,16'd11,16'd11,16'd10,16'd10,16'd10,16'd10,16'd9,16'd9,16'd9,16'd9,16'd8,16'd8,16'd8,16'd8,16'd7,16'd7,16'd7,16'd7,16'd6,16'd6,16'd6,16'd6,16'd5,16'd5,16'd5,16'd5,16'd4,16'd4,16'd4,16'd4,16'd3,16'd3,16'd3,16'd3,16'd2,16'd2,16'd2,16'd2,16'd1,16'd1,16'd1,16'd1,16'd0,16'd0,16'd0,16'd0,16'd0})
) rom_curvea0$1 (
    .clk(rom_curvea0$1_clk),
    .rdata(out_curved_stencil),
    .raddr(rom_curvea0$1_raddr),
    .ren(rom_curvea0$1_ren)
);
assign umin_corrected_stencil_1_1842_1843_in0 = in0_corrected_stencil[0];
assign umin_corrected_stencil_1_1842_1843_in1 = 16'h00ff;
commonlib_umin__width16 umin_corrected_stencil_1_1842_1843 (
    .in0(umin_corrected_stencil_1_1842_1843_in0),
    .in1(umin_corrected_stencil_1_1842_1843_in1),
    .out(umin_corrected_stencil_1_1842_1843_out)
);
endmodule

module cu_op_hcompute_curved_stencil (
    input clk,
    input [15:0] corrected_stencil_op_hcompute_curved_stencil_read [0:0],
    output [15:0] curved_stencil_op_hcompute_curved_stencil_write [0:0]
);
wire inner_compute_clk;
wire [15:0] inner_compute_in0_corrected_stencil [0:0];
wire [15:0] inner_compute_out_curved_stencil;
assign inner_compute_clk = clk;
assign inner_compute_in0_corrected_stencil[0] = corrected_stencil_op_hcompute_curved_stencil_read[0];
hcompute_curved_stencil inner_compute (
    .clk(inner_compute_clk),
    .in0_corrected_stencil(inner_compute_in0_corrected_stencil),
    .out_curved_stencil(inner_compute_out_curved_stencil)
);
assign curved_stencil_op_hcompute_curved_stencil_write[0] = inner_compute_out_curved_stencil;
endmodule

module commonlib_umax__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = in0 >= in1 ? in0 : in1;
endmodule

module hcompute_denoised_1_stencil (
    output [15:0] out_denoised_1_stencil,
    input [15:0] in0_hw_input_global_wrapper_stencil [4:0]
);
wire [15:0] umax_333_336_337_in0;
wire [15:0] umax_333_336_337_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_2_331_332_in0;
wire [15:0] umax_hw_input_global_wrapper_stencil_2_331_332_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_2_331_332_out;
wire [15:0] umax_hw_input_global_wrapper_stencil_3_330_331_in0;
wire [15:0] umax_hw_input_global_wrapper_stencil_3_330_331_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_3_330_331_out;
wire [15:0] umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in0;
wire [15:0] umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in1;
wire [15:0] umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_1_332_333_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_1_332_333_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_1_332_333_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_2_335_336_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_2_335_336_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_2_335_336_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_3_334_335_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_3_334_335_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_3_334_335_out;
wire [15:0] umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in0;
wire [15:0] umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in1;
wire [15:0] umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_out;
assign umax_333_336_337_in0 = umin_hw_input_global_wrapper_stencil_1_332_333_out;
assign umax_333_336_337_in1 = umin_hw_input_global_wrapper_stencil_2_335_336_out;
commonlib_umax__width16 umax_333_336_337 (
    .in0(umax_333_336_337_in0),
    .in1(umax_333_336_337_in1),
    .out(out_denoised_1_stencil)
);
assign umax_hw_input_global_wrapper_stencil_2_331_332_in0 = in0_hw_input_global_wrapper_stencil[1];
assign umax_hw_input_global_wrapper_stencil_2_331_332_in1 = umax_hw_input_global_wrapper_stencil_3_330_331_out;
commonlib_umax__width16 umax_hw_input_global_wrapper_stencil_2_331_332 (
    .in0(umax_hw_input_global_wrapper_stencil_2_331_332_in0),
    .in1(umax_hw_input_global_wrapper_stencil_2_331_332_in1),
    .out(umax_hw_input_global_wrapper_stencil_2_331_332_out)
);
assign umax_hw_input_global_wrapper_stencil_3_330_331_in0 = in0_hw_input_global_wrapper_stencil[2];
assign umax_hw_input_global_wrapper_stencil_3_330_331_in1 = umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_out;
commonlib_umax__width16 umax_hw_input_global_wrapper_stencil_3_330_331 (
    .in0(umax_hw_input_global_wrapper_stencil_3_330_331_in0),
    .in1(umax_hw_input_global_wrapper_stencil_3_330_331_in1),
    .out(umax_hw_input_global_wrapper_stencil_3_330_331_out)
);
assign umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in0 = in0_hw_input_global_wrapper_stencil[3];
assign umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in1 = in0_hw_input_global_wrapper_stencil[4];
commonlib_umax__width16 umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330 (
    .in0(umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in0),
    .in1(umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_in1),
    .out(umax_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_330_out)
);
assign umin_hw_input_global_wrapper_stencil_1_332_333_in0 = in0_hw_input_global_wrapper_stencil[0];
assign umin_hw_input_global_wrapper_stencil_1_332_333_in1 = umax_hw_input_global_wrapper_stencil_2_331_332_out;
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_1_332_333 (
    .in0(umin_hw_input_global_wrapper_stencil_1_332_333_in0),
    .in1(umin_hw_input_global_wrapper_stencil_1_332_333_in1),
    .out(umin_hw_input_global_wrapper_stencil_1_332_333_out)
);
assign umin_hw_input_global_wrapper_stencil_2_335_336_in0 = in0_hw_input_global_wrapper_stencil[1];
assign umin_hw_input_global_wrapper_stencil_2_335_336_in1 = umin_hw_input_global_wrapper_stencil_3_334_335_out;
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_2_335_336 (
    .in0(umin_hw_input_global_wrapper_stencil_2_335_336_in0),
    .in1(umin_hw_input_global_wrapper_stencil_2_335_336_in1),
    .out(umin_hw_input_global_wrapper_stencil_2_335_336_out)
);
assign umin_hw_input_global_wrapper_stencil_3_334_335_in0 = in0_hw_input_global_wrapper_stencil[2];
assign umin_hw_input_global_wrapper_stencil_3_334_335_in1 = umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_out;
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_3_334_335 (
    .in0(umin_hw_input_global_wrapper_stencil_3_334_335_in0),
    .in1(umin_hw_input_global_wrapper_stencil_3_334_335_in1),
    .out(umin_hw_input_global_wrapper_stencil_3_334_335_out)
);
assign umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in0 = in0_hw_input_global_wrapper_stencil[3];
assign umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in1 = in0_hw_input_global_wrapper_stencil[4];
commonlib_umin__width16 umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334 (
    .in0(umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in0),
    .in1(umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_in1),
    .out(umin_hw_input_global_wrapper_stencil_4_hw_input_global_wrapper_stencil_5_334_out)
);
endmodule

module cu_op_hcompute_denoised_1_stencil (
    input clk,
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read [4:0],
    output [15:0] denoised_1_stencil_op_hcompute_denoised_1_stencil_write [0:0]
);
wire [15:0] inner_compute_out_denoised_1_stencil;
wire [15:0] inner_compute_in0_hw_input_global_wrapper_stencil [4:0];
assign inner_compute_in0_hw_input_global_wrapper_stencil[4] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[4];
assign inner_compute_in0_hw_input_global_wrapper_stencil[3] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[3];
assign inner_compute_in0_hw_input_global_wrapper_stencil[2] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[2];
assign inner_compute_in0_hw_input_global_wrapper_stencil[1] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[1];
assign inner_compute_in0_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[0];
hcompute_denoised_1_stencil inner_compute (
    .out_denoised_1_stencil(inner_compute_out_denoised_1_stencil),
    .in0_hw_input_global_wrapper_stencil(inner_compute_in0_hw_input_global_wrapper_stencil)
);
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write[0] = inner_compute_out_denoised_1_stencil;
endmodule

module commonlib_abs__width16 (
    input [15:0] in,
    output [15:0] out
);
assign out = ($signed(in)) >= ($signed(16'h0000)) ? in : 16'(16'hffff * in);
endmodule

module commonlib_absd__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
wire [15:0] abs_in;
assign abs_in = 16'(in0 - in1);
commonlib_abs__width16 abs (
    .in(abs_in),
    .out(out)
);
endmodule

module hcompute_demosaicked_1_stencil_2 (
    output [15:0] out_demosaicked_1_stencil,
    input [15:0] in0_denoised_1_stencil [7:0],
    input [15:0] demosaicked_1_s0_x_2,
    input [15:0] demosaicked_1_s0_y_2
);
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_15_992_out;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_17_971_out;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_18_972_out;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in0;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in1;
wire [15:0] absd_denoised_1_stencil_14_denoised_1_stencil_20_991_out;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in0;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in1;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_14_965_out;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in0;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in1;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_16_964_out;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in0;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in1;
wire [15:0] absd_denoised_1_stencil_15_denoised_1_stencil_20_986_out;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in0;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in1;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_14_985_out;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in0;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in1;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_15_999_out;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in0;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in1;
wire [15:0] absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_out;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in0;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in1;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_out;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in0;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in1;
wire [15:0] absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_out;
wire eq_9570_958_out;
wire [15:0] lshr_961_960_962_out;
wire [15:0] lshr_995_960_996_out;
wire [15:0] mux_1019_996_1022_out;
wire [15:0] mux_966_969_962_out;
wire [15:0] mux_973_976_979_out;
wire [15:0] mux_993_996_962_out;
assign absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_15_992 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_15_992_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_15_992_out)
);
assign absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in1 = in0_denoised_1_stencil[3];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_17_971 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_17_971_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_17_971_out)
);
assign absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in1 = in0_denoised_1_stencil[4];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_18_972 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_18_972_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_18_972_out)
);
assign absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_14_denoised_1_stencil_20_991 (
    .in0(absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in0),
    .in1(absd_denoised_1_stencil_14_denoised_1_stencil_20_991_in1),
    .out(absd_denoised_1_stencil_14_denoised_1_stencil_20_991_out)
);
assign absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_15_denoised_1_stencil_14_965 (
    .in0(absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in0),
    .in1(absd_denoised_1_stencil_15_denoised_1_stencil_14_965_in1),
    .out(absd_denoised_1_stencil_15_denoised_1_stencil_14_965_out)
);
assign absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in1 = in0_denoised_1_stencil[2];
commonlib_absd__width16 absd_denoised_1_stencil_15_denoised_1_stencil_16_964 (
    .in0(absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in0),
    .in1(absd_denoised_1_stencil_15_denoised_1_stencil_16_964_in1),
    .out(absd_denoised_1_stencil_15_denoised_1_stencil_16_964_out)
);
assign absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_15_denoised_1_stencil_20_986 (
    .in0(absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in0),
    .in1(absd_denoised_1_stencil_15_denoised_1_stencil_20_986_in1),
    .out(absd_denoised_1_stencil_15_denoised_1_stencil_20_986_out)
);
assign absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_19_denoised_1_stencil_14_985 (
    .in0(absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in0),
    .in1(absd_denoised_1_stencil_19_denoised_1_stencil_14_985_in1),
    .out(absd_denoised_1_stencil_19_denoised_1_stencil_14_985_out)
);
assign absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_19_denoised_1_stencil_15_999 (
    .in0(absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in0),
    .in1(absd_denoised_1_stencil_19_denoised_1_stencil_15_999_in1),
    .out(absd_denoised_1_stencil_19_denoised_1_stencil_15_999_out)
);
assign absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_19_denoised_1_stencil_20_1000 (
    .in0(absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in0),
    .in1(absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_in1),
    .out(absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_out)
);
assign absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_20_denoised_1_stencil_14_1017 (
    .in0(absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in0),
    .in1(absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_in1),
    .out(absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_out)
);
assign absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in1 = in0_denoised_1_stencil[7];
commonlib_absd__width16 absd_denoised_1_stencil_20_denoised_1_stencil_21_1018 (
    .in0(absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in0),
    .in1(absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_in1),
    .out(absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_out)
);
assign eq_9570_958_out = (demosaicked_1_s0_x_2 & 16'h0001) == 16'h0000;
assign lshr_961_960_962_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001;
assign lshr_995_960_996_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001;
assign mux_1019_996_1022_out = absd_denoised_1_stencil_20_denoised_1_stencil_14_1017_out < absd_denoised_1_stencil_20_denoised_1_stencil_21_1018_out ? lshr_995_960_996_out : (16'((16'(in0_denoised_1_stencil[7] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001;
assign mux_966_969_962_out = absd_denoised_1_stencil_15_denoised_1_stencil_16_964_out < absd_denoised_1_stencil_15_denoised_1_stencil_14_965_out ? (16'((16'(in0_denoised_1_stencil[2] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001 : lshr_961_960_962_out;
assign mux_973_976_979_out = absd_denoised_1_stencil_14_denoised_1_stencil_17_971_out < absd_denoised_1_stencil_14_denoised_1_stencil_18_972_out ? (16'((16'(in0_denoised_1_stencil[3] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[4] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001;
assign mux_993_996_962_out = absd_denoised_1_stencil_14_denoised_1_stencil_20_991_out < absd_denoised_1_stencil_14_denoised_1_stencil_15_992_out ? lshr_995_960_996_out : lshr_961_960_962_out;
assign out_demosaicked_1_stencil = (demosaicked_1_s0_y_2 & 16'h0001) == 16'h0000 ? eq_9570_958_out ? 16'((16'(in0_denoised_1_stencil[0] + lshr_961_960_962_out)) - ((16'((16'(mux_966_969_962_out + mux_973_976_979_out)) + 16'h0001)) >> 16'h0001)) : absd_denoised_1_stencil_19_denoised_1_stencil_14_985_out < absd_denoised_1_stencil_15_denoised_1_stencil_20_986_out ? 16'((16'(((16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001) + mux_993_996_962_out)) - ((16'((16'((absd_denoised_1_stencil_19_denoised_1_stencil_15_999_out < absd_denoised_1_stencil_19_denoised_1_stencil_20_1000_out ? (16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001) + mux_973_976_979_out)) + 16'h0001)) >> 16'h0001)) : 16'((16'(((16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001) + mux_993_996_962_out)) - ((16'((16'(mux_966_969_962_out + mux_1019_996_1022_out)) + 16'h0001)) >> 16'h0001)) : eq_9570_958_out ? in0_denoised_1_stencil[0] : 16'((16'(in0_denoised_1_stencil[0] + lshr_995_960_996_out)) - ((16'((16'(mux_973_976_979_out + mux_1019_996_1022_out)) + 16'h0001)) >> 16'h0001));
endmodule

module cu_op_hcompute_demosaicked_1_stencil_2 (
    input clk,
    input [15:0] demosaicked_1_s0_x_2,
    input [15:0] demosaicked_1_s0_y_2,
    input [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read [7:0],
    output [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write [0:0]
);
wire [15:0] inner_compute_out_demosaicked_1_stencil;
wire [15:0] inner_compute_in0_denoised_1_stencil [7:0];
wire [15:0] inner_compute_demosaicked_1_s0_x_2;
wire [15:0] inner_compute_demosaicked_1_s0_y_2;
assign inner_compute_in0_denoised_1_stencil[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[7];
assign inner_compute_in0_denoised_1_stencil[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[6];
assign inner_compute_in0_denoised_1_stencil[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[5];
assign inner_compute_in0_denoised_1_stencil[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[4];
assign inner_compute_in0_denoised_1_stencil[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[3];
assign inner_compute_in0_denoised_1_stencil[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[2];
assign inner_compute_in0_denoised_1_stencil[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[1];
assign inner_compute_in0_denoised_1_stencil[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[0];
assign inner_compute_demosaicked_1_s0_x_2 = demosaicked_1_s0_x_2;
assign inner_compute_demosaicked_1_s0_y_2 = demosaicked_1_s0_y_2;
hcompute_demosaicked_1_stencil_2 inner_compute (
    .out_demosaicked_1_stencil(inner_compute_out_demosaicked_1_stencil),
    .in0_denoised_1_stencil(inner_compute_in0_denoised_1_stencil),
    .demosaicked_1_s0_x_2(inner_compute_demosaicked_1_s0_x_2),
    .demosaicked_1_s0_y_2(inner_compute_demosaicked_1_s0_y_2)
);
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write[0] = inner_compute_out_demosaicked_1_stencil;
endmodule

module hcompute_demosaicked_1_stencil_1 (
    output [15:0] out_demosaicked_1_stencil,
    input [15:0] in0_denoised_1_stencil [4:0],
    input [15:0] demosaicked_1_s0_x_1,
    input [15:0] demosaicked_1_s0_y_1
);
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_10_751_out;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_11_752_out;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_12_763_out;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in0;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in1;
wire [15:0] absd_denoised_1_stencil_9_denoised_1_stencil_13_764_out;
wire eq_7490_750_out;
assign absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_10_751 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_10_751_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_10_751_out)
);
assign absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_11_752 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_11_752_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_11_752_out)
);
assign absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in1 = in0_denoised_1_stencil[2];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_12_763 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_12_763_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_12_763_out)
);
assign absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in0 = in0_denoised_1_stencil[4];
assign absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in1 = in0_denoised_1_stencil[3];
commonlib_absd__width16 absd_denoised_1_stencil_9_denoised_1_stencil_13_764 (
    .in0(absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in0),
    .in1(absd_denoised_1_stencil_9_denoised_1_stencil_13_764_in1),
    .out(absd_denoised_1_stencil_9_denoised_1_stencil_13_764_out)
);
assign eq_7490_750_out = (demosaicked_1_s0_x_1 & 16'h0001) == 16'h0000;
assign out_demosaicked_1_stencil = (demosaicked_1_s0_y_1 & 16'h0001) == 16'h0000 ? eq_7490_750_out ? in0_denoised_1_stencil[4] : absd_denoised_1_stencil_9_denoised_1_stencil_10_751_out < absd_denoised_1_stencil_9_denoised_1_stencil_11_752_out ? (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : eq_7490_750_out ? absd_denoised_1_stencil_9_denoised_1_stencil_12_763_out < absd_denoised_1_stencil_9_denoised_1_stencil_13_764_out ? (16'((16'(in0_denoised_1_stencil[2] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[3] + in0_denoised_1_stencil[4])) + 16'h0001)) >> 16'h0001 : in0_denoised_1_stencil[4];
endmodule

module cu_op_hcompute_demosaicked_1_stencil_1 (
    input clk,
    input [15:0] demosaicked_1_s0_x_1,
    input [15:0] demosaicked_1_s0_y_1,
    input [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read [4:0],
    output [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_demosaicked_1_stencil;
wire [15:0] inner_compute_in0_denoised_1_stencil [4:0];
wire [15:0] inner_compute_demosaicked_1_s0_x_1;
wire [15:0] inner_compute_demosaicked_1_s0_y_1;
assign inner_compute_in0_denoised_1_stencil[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[4];
assign inner_compute_in0_denoised_1_stencil[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[3];
assign inner_compute_in0_denoised_1_stencil[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[2];
assign inner_compute_in0_denoised_1_stencil[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[1];
assign inner_compute_in0_denoised_1_stencil[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[0];
assign inner_compute_demosaicked_1_s0_x_1 = demosaicked_1_s0_x_1;
assign inner_compute_demosaicked_1_s0_y_1 = demosaicked_1_s0_y_1;
hcompute_demosaicked_1_stencil_1 inner_compute (
    .out_demosaicked_1_stencil(inner_compute_out_demosaicked_1_stencil),
    .in0_denoised_1_stencil(inner_compute_in0_denoised_1_stencil),
    .demosaicked_1_s0_x_1(inner_compute_demosaicked_1_s0_x_1),
    .demosaicked_1_s0_y_1(inner_compute_demosaicked_1_s0_y_1)
);
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write[0] = inner_compute_out_demosaicked_1_stencil;
endmodule

module hcompute_demosaicked_1_stencil (
    output [15:0] out_demosaicked_1_stencil,
    input [15:0] in0_denoised_1_stencil [7:0],
    input [15:0] demosaicked_1_s0_x,
    input [15:0] demosaicked_1_s0_y
);
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_2_519_out;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_4_498_out;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_5_499_out;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in0;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in1;
wire [15:0] absd_denoised_1_stencil_1_denoised_1_stencil_7_520_out;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in0;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in1;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_1_491_out;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in0;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in1;
wire [15:0] absd_denoised_1_stencil_2_denoised_1_stencil_3_492_out;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in0;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in1;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_1_513_out;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in0;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in1;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_2_528_out;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in0;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in1;
wire [15:0] absd_denoised_1_stencil_6_denoised_1_stencil_7_527_out;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in0;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in1;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_1_546_out;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in0;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in1;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_2_514_out;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in0;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in1;
wire [15:0] absd_denoised_1_stencil_7_denoised_1_stencil_8_545_out;
wire eq_4840_485_out;
wire [15:0] lshr_488_487_489_out;
wire [15:0] lshr_523_487_524_out;
wire [15:0] mux_493_489_496_out;
wire [15:0] mux_500_503_506_out;
wire [15:0] mux_521_489_524_out;
wire [15:0] mux_547_550_524_out;
assign absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_2_519 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_2_519_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_2_519_out)
);
assign absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in1 = in0_denoised_1_stencil[3];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_4_498 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_4_498_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_4_498_out)
);
assign absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in1 = in0_denoised_1_stencil[4];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_5_499 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_5_499_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_5_499_out)
);
assign absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in0 = in0_denoised_1_stencil[0];
assign absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_1_denoised_1_stencil_7_520 (
    .in0(absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in0),
    .in1(absd_denoised_1_stencil_1_denoised_1_stencil_7_520_in1),
    .out(absd_denoised_1_stencil_1_denoised_1_stencil_7_520_out)
);
assign absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_2_denoised_1_stencil_1_491 (
    .in0(absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in0),
    .in1(absd_denoised_1_stencil_2_denoised_1_stencil_1_491_in1),
    .out(absd_denoised_1_stencil_2_denoised_1_stencil_1_491_out)
);
assign absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in0 = in0_denoised_1_stencil[1];
assign absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in1 = in0_denoised_1_stencil[2];
commonlib_absd__width16 absd_denoised_1_stencil_2_denoised_1_stencil_3_492 (
    .in0(absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in0),
    .in1(absd_denoised_1_stencil_2_denoised_1_stencil_3_492_in1),
    .out(absd_denoised_1_stencil_2_denoised_1_stencil_3_492_out)
);
assign absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_6_denoised_1_stencil_1_513 (
    .in0(absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in0),
    .in1(absd_denoised_1_stencil_6_denoised_1_stencil_1_513_in1),
    .out(absd_denoised_1_stencil_6_denoised_1_stencil_1_513_out)
);
assign absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_6_denoised_1_stencil_2_528 (
    .in0(absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in0),
    .in1(absd_denoised_1_stencil_6_denoised_1_stencil_2_528_in1),
    .out(absd_denoised_1_stencil_6_denoised_1_stencil_2_528_out)
);
assign absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in0 = in0_denoised_1_stencil[5];
assign absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in1 = in0_denoised_1_stencil[6];
commonlib_absd__width16 absd_denoised_1_stencil_6_denoised_1_stencil_7_527 (
    .in0(absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in0),
    .in1(absd_denoised_1_stencil_6_denoised_1_stencil_7_527_in1),
    .out(absd_denoised_1_stencil_6_denoised_1_stencil_7_527_out)
);
assign absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in1 = in0_denoised_1_stencil[0];
commonlib_absd__width16 absd_denoised_1_stencil_7_denoised_1_stencil_1_546 (
    .in0(absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in0),
    .in1(absd_denoised_1_stencil_7_denoised_1_stencil_1_546_in1),
    .out(absd_denoised_1_stencil_7_denoised_1_stencil_1_546_out)
);
assign absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in1 = in0_denoised_1_stencil[1];
commonlib_absd__width16 absd_denoised_1_stencil_7_denoised_1_stencil_2_514 (
    .in0(absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in0),
    .in1(absd_denoised_1_stencil_7_denoised_1_stencil_2_514_in1),
    .out(absd_denoised_1_stencil_7_denoised_1_stencil_2_514_out)
);
assign absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in0 = in0_denoised_1_stencil[6];
assign absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in1 = in0_denoised_1_stencil[7];
commonlib_absd__width16 absd_denoised_1_stencil_7_denoised_1_stencil_8_545 (
    .in0(absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in0),
    .in1(absd_denoised_1_stencil_7_denoised_1_stencil_8_545_in1),
    .out(absd_denoised_1_stencil_7_denoised_1_stencil_8_545_out)
);
assign eq_4840_485_out = (demosaicked_1_s0_x & 16'h0001) == 16'h0000;
assign lshr_488_487_489_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001;
assign lshr_523_487_524_out = (16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001;
assign mux_493_489_496_out = absd_denoised_1_stencil_2_denoised_1_stencil_1_491_out < absd_denoised_1_stencil_2_denoised_1_stencil_3_492_out ? lshr_488_487_489_out : (16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[2])) + 16'h0001)) >> 16'h0001;
assign mux_500_503_506_out = absd_denoised_1_stencil_1_denoised_1_stencil_4_498_out < absd_denoised_1_stencil_1_denoised_1_stencil_5_499_out ? (16'((16'(in0_denoised_1_stencil[3] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[4] + in0_denoised_1_stencil[0])) + 16'h0001)) >> 16'h0001;
assign mux_521_489_524_out = absd_denoised_1_stencil_1_denoised_1_stencil_2_519_out < absd_denoised_1_stencil_1_denoised_1_stencil_7_520_out ? lshr_488_487_489_out : lshr_523_487_524_out;
assign mux_547_550_524_out = absd_denoised_1_stencil_7_denoised_1_stencil_8_545_out < absd_denoised_1_stencil_7_denoised_1_stencil_1_546_out ? (16'((16'(in0_denoised_1_stencil[7] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001 : lshr_523_487_524_out;
assign out_demosaicked_1_stencil = (demosaicked_1_s0_y & 16'h0001) == 16'h0000 ? eq_4840_485_out ? 16'((16'(in0_denoised_1_stencil[0] + lshr_488_487_489_out)) - ((16'((16'(mux_493_489_496_out + mux_500_503_506_out)) + 16'h0001)) >> 16'h0001)) : in0_denoised_1_stencil[0] : eq_4840_485_out ? absd_denoised_1_stencil_6_denoised_1_stencil_1_513_out < absd_denoised_1_stencil_7_denoised_1_stencil_2_514_out ? 16'((16'(((16'((16'(in0_denoised_1_stencil[0] + in0_denoised_1_stencil[5])) + 16'h0001)) >> 16'h0001) + mux_521_489_524_out)) - ((16'((16'((absd_denoised_1_stencil_6_denoised_1_stencil_7_527_out < absd_denoised_1_stencil_6_denoised_1_stencil_2_528_out ? (16'((16'(in0_denoised_1_stencil[6] + in0_denoised_1_stencil[5])) + 16'h0001)) >> 16'h0001 : (16'((16'(in0_denoised_1_stencil[5] + in0_denoised_1_stencil[1])) + 16'h0001)) >> 16'h0001) + mux_500_503_506_out)) + 16'h0001)) >> 16'h0001)) : 16'((16'(((16'((16'(in0_denoised_1_stencil[1] + in0_denoised_1_stencil[6])) + 16'h0001)) >> 16'h0001) + mux_521_489_524_out)) - ((16'((16'(mux_493_489_496_out + mux_547_550_524_out)) + 16'h0001)) >> 16'h0001)) : 16'((16'(in0_denoised_1_stencil[0] + lshr_523_487_524_out)) - ((16'((16'(mux_500_503_506_out + mux_547_550_524_out)) + 16'h0001)) >> 16'h0001));
endmodule

module cu_op_hcompute_demosaicked_1_stencil (
    input clk,
    input [15:0] demosaicked_1_s0_x,
    input [15:0] demosaicked_1_s0_y,
    input [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read [7:0],
    output [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write [0:0]
);
wire [15:0] inner_compute_out_demosaicked_1_stencil;
wire [15:0] inner_compute_in0_denoised_1_stencil [7:0];
wire [15:0] inner_compute_demosaicked_1_s0_x;
wire [15:0] inner_compute_demosaicked_1_s0_y;
assign inner_compute_in0_denoised_1_stencil[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[7];
assign inner_compute_in0_denoised_1_stencil[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[6];
assign inner_compute_in0_denoised_1_stencil[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[5];
assign inner_compute_in0_denoised_1_stencil[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[4];
assign inner_compute_in0_denoised_1_stencil[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[3];
assign inner_compute_in0_denoised_1_stencil[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[2];
assign inner_compute_in0_denoised_1_stencil[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[1];
assign inner_compute_in0_denoised_1_stencil[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[0];
assign inner_compute_demosaicked_1_s0_x = demosaicked_1_s0_x;
assign inner_compute_demosaicked_1_s0_y = demosaicked_1_s0_y;
hcompute_demosaicked_1_stencil inner_compute (
    .out_demosaicked_1_stencil(inner_compute_out_demosaicked_1_stencil),
    .in0_denoised_1_stencil(inner_compute_in0_denoised_1_stencil),
    .demosaicked_1_s0_x(inner_compute_demosaicked_1_s0_x),
    .demosaicked_1_s0_y(inner_compute_demosaicked_1_s0_y)
);
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write[0] = inner_compute_out_demosaicked_1_stencil;
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

module array_delay_U349 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U350_in;
wire _U350_clk;
wire [15:0] _U350_out;
wire [15:0] _U351_in;
wire _U351_clk;
wire [15:0] _U351_out;
wire [15:0] _U352_in;
wire _U352_clk;
wire [15:0] _U352_out;
assign _U350_in = in[0];
assign _U350_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U350 (
    .in(_U350_in),
    .clk(_U350_clk),
    .out(_U350_out)
);
assign _U351_in = in[1];
assign _U351_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U351 (
    .in(_U351_in),
    .clk(_U351_clk),
    .out(_U351_out)
);
assign _U352_in = in[2];
assign _U352_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U352 (
    .in(_U352_in),
    .clk(_U352_clk),
    .out(_U352_out)
);
assign out[2] = _U352_out;
assign out[1] = _U351_out;
assign out[0] = _U350_out;
endmodule

module array_delay_U345 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U346_in;
wire _U346_clk;
wire [15:0] _U346_out;
wire [15:0] _U347_in;
wire _U347_clk;
wire [15:0] _U347_out;
wire [15:0] _U348_in;
wire _U348_clk;
wire [15:0] _U348_out;
assign _U346_in = in[0];
assign _U346_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U346 (
    .in(_U346_in),
    .clk(_U346_clk),
    .out(_U346_out)
);
assign _U347_in = in[1];
assign _U347_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U347 (
    .in(_U347_in),
    .clk(_U347_clk),
    .out(_U347_out)
);
assign _U348_in = in[2];
assign _U348_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U348 (
    .in(_U348_in),
    .clk(_U348_clk),
    .out(_U348_out)
);
assign out[2] = _U348_out;
assign out[1] = _U347_out;
assign out[0] = _U346_out;
endmodule

module array_delay_U324 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U325_in;
wire _U325_clk;
wire [15:0] _U325_out;
wire [15:0] _U326_in;
wire _U326_clk;
wire [15:0] _U326_out;
wire [15:0] _U327_in;
wire _U327_clk;
wire [15:0] _U327_out;
assign _U325_in = in[0];
assign _U325_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U325 (
    .in(_U325_in),
    .clk(_U325_clk),
    .out(_U325_out)
);
assign _U326_in = in[1];
assign _U326_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U326 (
    .in(_U326_in),
    .clk(_U326_clk),
    .out(_U326_out)
);
assign _U327_in = in[2];
assign _U327_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U327 (
    .in(_U327_in),
    .clk(_U327_clk),
    .out(_U327_out)
);
assign out[2] = _U327_out;
assign out[1] = _U326_out;
assign out[0] = _U325_out;
endmodule

module array_delay_U320 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U321_in;
wire _U321_clk;
wire [15:0] _U321_out;
wire [15:0] _U322_in;
wire _U322_clk;
wire [15:0] _U322_out;
wire [15:0] _U323_in;
wire _U323_clk;
wire [15:0] _U323_out;
assign _U321_in = in[0];
assign _U321_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U321 (
    .in(_U321_in),
    .clk(_U321_clk),
    .out(_U321_out)
);
assign _U322_in = in[1];
assign _U322_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U322 (
    .in(_U322_in),
    .clk(_U322_clk),
    .out(_U322_out)
);
assign _U323_in = in[2];
assign _U323_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U323 (
    .in(_U323_in),
    .clk(_U323_clk),
    .out(_U323_out)
);
assign out[2] = _U323_out;
assign out[1] = _U322_out;
assign out[0] = _U321_out;
endmodule

module array_delay_U299 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U300_in;
wire _U300_clk;
wire [15:0] _U300_out;
wire [15:0] _U301_in;
wire _U301_clk;
wire [15:0] _U301_out;
wire [15:0] _U302_in;
wire _U302_clk;
wire [15:0] _U302_out;
assign _U300_in = in[0];
assign _U300_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U300 (
    .in(_U300_in),
    .clk(_U300_clk),
    .out(_U300_out)
);
assign _U301_in = in[1];
assign _U301_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U301 (
    .in(_U301_in),
    .clk(_U301_clk),
    .out(_U301_out)
);
assign _U302_in = in[2];
assign _U302_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U302 (
    .in(_U302_in),
    .clk(_U302_clk),
    .out(_U302_out)
);
assign out[2] = _U302_out;
assign out[1] = _U301_out;
assign out[0] = _U300_out;
endmodule

module array_delay_U295 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U296_in;
wire _U296_clk;
wire [15:0] _U296_out;
wire [15:0] _U297_in;
wire _U297_clk;
wire [15:0] _U297_out;
wire [15:0] _U298_in;
wire _U298_clk;
wire [15:0] _U298_out;
assign _U296_in = in[0];
assign _U296_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U296 (
    .in(_U296_in),
    .clk(_U296_clk),
    .out(_U296_out)
);
assign _U297_in = in[1];
assign _U297_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U297 (
    .in(_U297_in),
    .clk(_U297_clk),
    .out(_U297_out)
);
assign _U298_in = in[2];
assign _U298_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U298 (
    .in(_U298_in),
    .clk(_U298_clk),
    .out(_U298_out)
);
assign out[2] = _U298_out;
assign out[1] = _U297_out;
assign out[0] = _U296_out;
endmodule

module array_delay_U274 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U275_in;
wire _U275_clk;
wire [15:0] _U275_out;
wire [15:0] _U276_in;
wire _U276_clk;
wire [15:0] _U276_out;
wire [15:0] _U277_in;
wire _U277_clk;
wire [15:0] _U277_out;
assign _U275_in = in[0];
assign _U275_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U275 (
    .in(_U275_in),
    .clk(_U275_clk),
    .out(_U275_out)
);
assign _U276_in = in[1];
assign _U276_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U276 (
    .in(_U276_in),
    .clk(_U276_clk),
    .out(_U276_out)
);
assign _U277_in = in[2];
assign _U277_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U277 (
    .in(_U277_in),
    .clk(_U277_clk),
    .out(_U277_out)
);
assign out[2] = _U277_out;
assign out[1] = _U276_out;
assign out[0] = _U275_out;
endmodule

module array_delay_U270 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U271_in;
wire _U271_clk;
wire [15:0] _U271_out;
wire [15:0] _U272_in;
wire _U272_clk;
wire [15:0] _U272_out;
wire [15:0] _U273_in;
wire _U273_clk;
wire [15:0] _U273_out;
assign _U271_in = in[0];
assign _U271_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U271 (
    .in(_U271_in),
    .clk(_U271_clk),
    .out(_U271_out)
);
assign _U272_in = in[1];
assign _U272_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U272 (
    .in(_U272_in),
    .clk(_U272_clk),
    .out(_U272_out)
);
assign _U273_in = in[2];
assign _U273_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U273 (
    .in(_U273_in),
    .clk(_U273_clk),
    .out(_U273_out)
);
assign out[2] = _U273_out;
assign out[1] = _U272_out;
assign out[0] = _U271_out;
endmodule

module array_delay_U248 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U249_in;
wire _U249_clk;
wire [15:0] _U249_out;
wire [15:0] _U250_in;
wire _U250_clk;
wire [15:0] _U250_out;
wire [15:0] _U251_in;
wire _U251_clk;
wire [15:0] _U251_out;
assign _U249_in = in[0];
assign _U249_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U249 (
    .in(_U249_in),
    .clk(_U249_clk),
    .out(_U249_out)
);
assign _U250_in = in[1];
assign _U250_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U250 (
    .in(_U250_in),
    .clk(_U250_clk),
    .out(_U250_out)
);
assign _U251_in = in[2];
assign _U251_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U251 (
    .in(_U251_in),
    .clk(_U251_clk),
    .out(_U251_out)
);
assign out[2] = _U251_out;
assign out[1] = _U250_out;
assign out[0] = _U249_out;
endmodule

module array_delay_U244 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U245_in;
wire _U245_clk;
wire [15:0] _U245_out;
wire [15:0] _U246_in;
wire _U246_clk;
wire [15:0] _U246_out;
wire [15:0] _U247_in;
wire _U247_clk;
wire [15:0] _U247_out;
assign _U245_in = in[0];
assign _U245_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U245 (
    .in(_U245_in),
    .clk(_U245_clk),
    .out(_U245_out)
);
assign _U246_in = in[1];
assign _U246_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U246 (
    .in(_U246_in),
    .clk(_U246_clk),
    .out(_U246_out)
);
assign _U247_in = in[2];
assign _U247_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U247 (
    .in(_U247_in),
    .clk(_U247_clk),
    .out(_U247_out)
);
assign out[2] = _U247_out;
assign out[1] = _U246_out;
assign out[0] = _U245_out;
endmodule

module array_delay_U222 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U223_in;
wire _U223_clk;
wire [15:0] _U223_out;
wire [15:0] _U224_in;
wire _U224_clk;
wire [15:0] _U224_out;
wire [15:0] _U225_in;
wire _U225_clk;
wire [15:0] _U225_out;
assign _U223_in = in[0];
assign _U223_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U223 (
    .in(_U223_in),
    .clk(_U223_clk),
    .out(_U223_out)
);
assign _U224_in = in[1];
assign _U224_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U224 (
    .in(_U224_in),
    .clk(_U224_clk),
    .out(_U224_out)
);
assign _U225_in = in[2];
assign _U225_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U225 (
    .in(_U225_in),
    .clk(_U225_clk),
    .out(_U225_out)
);
assign out[2] = _U225_out;
assign out[1] = _U224_out;
assign out[0] = _U223_out;
endmodule

module array_delay_U218 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U219_in;
wire _U219_clk;
wire [15:0] _U219_out;
wire [15:0] _U220_in;
wire _U220_clk;
wire [15:0] _U220_out;
wire [15:0] _U221_in;
wire _U221_clk;
wire [15:0] _U221_out;
assign _U219_in = in[0];
assign _U219_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U219 (
    .in(_U219_in),
    .clk(_U219_clk),
    .out(_U219_out)
);
assign _U220_in = in[1];
assign _U220_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U220 (
    .in(_U220_in),
    .clk(_U220_clk),
    .out(_U220_out)
);
assign _U221_in = in[2];
assign _U221_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U221 (
    .in(_U221_in),
    .clk(_U221_clk),
    .out(_U221_out)
);
assign out[2] = _U221_out;
assign out[1] = _U220_out;
assign out[0] = _U219_out;
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

module aff__U826 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U818 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U817 (
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
aff__U818 affine_func (
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

module aff__U811 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h007d);
endmodule

module aff__U803 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U802 (
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
aff__U803 affine_func (
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

module memtile_long_delay__U801 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U816_out;
wire [15:0] addrgen__U816_d [0:0];
wire [15:0] addrgen__U831_out;
wire [15:0] addrgen__U831_d [0:0];
wire ctrl__U810_clk;
wire ctrl__U810_valid;
wire [15:0] ctrl__U810_d [0:0];
wire ctrl__U825_clk;
wire ctrl__U825_valid;
wire [15:0] ctrl__U825_d [0:0];
wire inner_sram__U832_bank_clk;
wire inner_sram__U832_bank_rst_n;
wire inner_sram__U832_bank_flush;
wire inner_sram__U832_bank_ren_in;
wire inner_sram__U832_bank_wen_in;
wire [15:0] inner_sram__U832_bank_waddr;
wire [15:0] inner_sram__U832_bank_raddr;
wire [15:0] inner_sram__U832_bank_wdata;
assign addrgen__U816_d[0] = ctrl__U810_d[0];
aff__U811 addrgen__U816 (
    .out(addrgen__U816_out),
    .d(addrgen__U816_d)
);
assign addrgen__U831_d[0] = ctrl__U825_d[0];
aff__U826 addrgen__U831 (
    .out(addrgen__U831_out),
    .d(addrgen__U831_d)
);
assign ctrl__U810_clk = clk;
affine_controller__U802 ctrl__U810 (
    .clk(ctrl__U810_clk),
    .valid(ctrl__U810_valid),
    .d(ctrl__U810_d)
);
assign ctrl__U825_clk = clk;
affine_controller__U817 ctrl__U825 (
    .clk(ctrl__U825_clk),
    .valid(ctrl__U825_valid),
    .d(ctrl__U825_d)
);
assign inner_sram__U832_bank_clk = clk;
assign inner_sram__U832_bank_rst_n = rst_n;
assign inner_sram__U832_bank_flush = flush;
assign inner_sram__U832_bank_ren_in = ctrl__U825_valid;
assign inner_sram__U832_bank_wen_in = ctrl__U810_valid;
assign inner_sram__U832_bank_waddr = addrgen__U816_out;
assign inner_sram__U832_bank_raddr = addrgen__U831_out;
assign inner_sram__U832_bank_wdata = wdata;
inner_sram__U832 inner_sram__U832_bank (
    .clk(inner_sram__U832_bank_clk),
    .rst_n(inner_sram__U832_bank_rst_n),
    .flush(inner_sram__U832_bank_flush),
    .ren_in(inner_sram__U832_bank_ren_in),
    .wen_in(inner_sram__U832_bank_wen_in),
    .waddr(inner_sram__U832_bank_waddr),
    .raddr(inner_sram__U832_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U832_bank_wdata)
);
endmodule

module aff__U785 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U777 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U776 (
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
aff__U777 affine_func (
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

module aff__U770 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h007d);
endmodule

module aff__U762 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U761 (
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
aff__U762 affine_func (
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

module memtile_long_delay__U760 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U775_out;
wire [15:0] addrgen__U775_d [0:0];
wire [15:0] addrgen__U790_out;
wire [15:0] addrgen__U790_d [0:0];
wire ctrl__U769_clk;
wire ctrl__U769_valid;
wire [15:0] ctrl__U769_d [0:0];
wire ctrl__U784_clk;
wire ctrl__U784_valid;
wire [15:0] ctrl__U784_d [0:0];
wire inner_sram__U791_bank_clk;
wire inner_sram__U791_bank_rst_n;
wire inner_sram__U791_bank_flush;
wire inner_sram__U791_bank_ren_in;
wire inner_sram__U791_bank_wen_in;
wire [15:0] inner_sram__U791_bank_waddr;
wire [15:0] inner_sram__U791_bank_raddr;
wire [15:0] inner_sram__U791_bank_wdata;
assign addrgen__U775_d[0] = ctrl__U769_d[0];
aff__U770 addrgen__U775 (
    .out(addrgen__U775_out),
    .d(addrgen__U775_d)
);
assign addrgen__U790_d[0] = ctrl__U784_d[0];
aff__U785 addrgen__U790 (
    .out(addrgen__U790_out),
    .d(addrgen__U790_d)
);
assign ctrl__U769_clk = clk;
affine_controller__U761 ctrl__U769 (
    .clk(ctrl__U769_clk),
    .valid(ctrl__U769_valid),
    .d(ctrl__U769_d)
);
assign ctrl__U784_clk = clk;
affine_controller__U776 ctrl__U784 (
    .clk(ctrl__U784_clk),
    .valid(ctrl__U784_valid),
    .d(ctrl__U784_d)
);
assign inner_sram__U791_bank_clk = clk;
assign inner_sram__U791_bank_rst_n = rst_n;
assign inner_sram__U791_bank_flush = flush;
assign inner_sram__U791_bank_ren_in = ctrl__U784_valid;
assign inner_sram__U791_bank_wen_in = ctrl__U769_valid;
assign inner_sram__U791_bank_waddr = addrgen__U775_out;
assign inner_sram__U791_bank_raddr = addrgen__U790_out;
assign inner_sram__U791_bank_wdata = wdata;
inner_sram__U791 inner_sram__U791_bank (
    .clk(inner_sram__U791_bank_clk),
    .rst_n(inner_sram__U791_bank_rst_n),
    .flush(inner_sram__U791_bank_flush),
    .ren_in(inner_sram__U791_bank_ren_in),
    .wen_in(inner_sram__U791_bank_wen_in),
    .waddr(inner_sram__U791_bank_waddr),
    .raddr(inner_sram__U791_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U791_bank_wdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_denoised_1_stencil_read_ren,
    input [15:0] op_hcompute_denoised_1_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_denoised_1_stencil_read [4:0],
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U759_clk;
wire [15:0] delay_sr_U759_wdata;
wire [15:0] delay_sr_U759_rdata;
wire delay_sr_U759_rst_n;
wire delay_sr_U759_flush;
wire delay_sr_U792_clk;
wire [15:0] delay_sr_U792_wdata;
wire [15:0] delay_sr_U792_rdata;
wire delay_sr_U792_rst_n;
wire delay_sr_U792_flush;
wire delay_sr_U796_clk;
wire [15:0] delay_sr_U796_wdata;
wire [15:0] delay_sr_U796_rdata;
wire delay_sr_U796_rst_n;
wire delay_sr_U796_flush;
wire delay_sr_U800_clk;
wire [15:0] delay_sr_U800_wdata;
wire [15:0] delay_sr_U800_rdata;
wire delay_sr_U800_rst_n;
wire delay_sr_U800_flush;
wire delay_sr_U833_clk;
wire [15:0] delay_sr_U833_wdata;
wire [15:0] delay_sr_U833_rdata;
wire delay_sr_U833_rst_n;
wire delay_sr_U833_flush;
assign delay_sr_U759_clk = clk;
assign delay_sr_U759_wdata = op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign delay_sr_U759_rst_n = rst_n;
assign delay_sr_U759_flush = flush;
delay__U753 delay_sr_U759 (
    .clk(delay_sr_U759_clk),
    .wdata(delay_sr_U759_wdata),
    .rdata(delay_sr_U759_rdata),
    .rst_n(delay_sr_U759_rst_n),
    .flush(delay_sr_U759_flush)
);
assign delay_sr_U792_clk = clk;
assign delay_sr_U792_wdata = delay_sr_U759_rdata;
assign delay_sr_U792_rst_n = rst_n;
assign delay_sr_U792_flush = flush;
memtile_long_delay__U760 delay_sr_U792 (
    .clk(delay_sr_U792_clk),
    .wdata(delay_sr_U792_wdata),
    .rdata(delay_sr_U792_rdata),
    .rst_n(delay_sr_U792_rst_n),
    .flush(delay_sr_U792_flush)
);
assign delay_sr_U796_clk = clk;
assign delay_sr_U796_wdata = delay_sr_U792_rdata;
assign delay_sr_U796_rst_n = rst_n;
assign delay_sr_U796_flush = flush;
delay__U793 delay_sr_U796 (
    .clk(delay_sr_U796_clk),
    .wdata(delay_sr_U796_wdata),
    .rdata(delay_sr_U796_rdata),
    .rst_n(delay_sr_U796_rst_n),
    .flush(delay_sr_U796_flush)
);
assign delay_sr_U800_clk = clk;
assign delay_sr_U800_wdata = delay_sr_U796_rdata;
assign delay_sr_U800_rst_n = rst_n;
assign delay_sr_U800_flush = flush;
delay__U797 delay_sr_U800 (
    .clk(delay_sr_U800_clk),
    .wdata(delay_sr_U800_wdata),
    .rdata(delay_sr_U800_rdata),
    .rst_n(delay_sr_U800_rst_n),
    .flush(delay_sr_U800_flush)
);
assign delay_sr_U833_clk = clk;
assign delay_sr_U833_wdata = delay_sr_U800_rdata;
assign delay_sr_U833_rst_n = rst_n;
assign delay_sr_U833_flush = flush;
memtile_long_delay__U801 delay_sr_U833 (
    .clk(delay_sr_U833_clk),
    .wdata(delay_sr_U833_wdata),
    .rdata(delay_sr_U833_rdata),
    .rst_n(delay_sr_U833_rst_n),
    .flush(delay_sr_U833_flush)
);
assign op_hcompute_denoised_1_stencil_read[4] = delay_sr_U792_rdata;
assign op_hcompute_denoised_1_stencil_read[3] = delay_sr_U800_rdata;
assign op_hcompute_denoised_1_stencil_read[2] = delay_sr_U833_rdata;
assign op_hcompute_denoised_1_stencil_read[1] = delay_sr_U759_rdata;
assign op_hcompute_denoised_1_stencil_read[0] = delay_sr_U796_rdata;
endmodule

module aff__U76 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0192);
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

module aff__U725 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U717 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U716 (
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
aff__U717 affine_func (
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

module aff__U710 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0035);
endmodule

module aff__U702 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U701 (
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
aff__U702 affine_func (
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

module memtile_long_delay__U700 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U715_out;
wire [15:0] addrgen__U715_d [0:0];
wire [15:0] addrgen__U730_out;
wire [15:0] addrgen__U730_d [0:0];
wire ctrl__U709_clk;
wire ctrl__U709_valid;
wire [15:0] ctrl__U709_d [0:0];
wire ctrl__U724_clk;
wire ctrl__U724_valid;
wire [15:0] ctrl__U724_d [0:0];
wire inner_sram__U731_bank_clk;
wire inner_sram__U731_bank_rst_n;
wire inner_sram__U731_bank_flush;
wire inner_sram__U731_bank_ren_in;
wire inner_sram__U731_bank_wen_in;
wire [15:0] inner_sram__U731_bank_waddr;
wire [15:0] inner_sram__U731_bank_raddr;
wire [15:0] inner_sram__U731_bank_wdata;
assign addrgen__U715_d[0] = ctrl__U709_d[0];
aff__U710 addrgen__U715 (
    .out(addrgen__U715_out),
    .d(addrgen__U715_d)
);
assign addrgen__U730_d[0] = ctrl__U724_d[0];
aff__U725 addrgen__U730 (
    .out(addrgen__U730_out),
    .d(addrgen__U730_d)
);
assign ctrl__U709_clk = clk;
affine_controller__U701 ctrl__U709 (
    .clk(ctrl__U709_clk),
    .valid(ctrl__U709_valid),
    .d(ctrl__U709_d)
);
assign ctrl__U724_clk = clk;
affine_controller__U716 ctrl__U724 (
    .clk(ctrl__U724_clk),
    .valid(ctrl__U724_valid),
    .d(ctrl__U724_d)
);
assign inner_sram__U731_bank_clk = clk;
assign inner_sram__U731_bank_rst_n = rst_n;
assign inner_sram__U731_bank_flush = flush;
assign inner_sram__U731_bank_ren_in = ctrl__U724_valid;
assign inner_sram__U731_bank_wen_in = ctrl__U709_valid;
assign inner_sram__U731_bank_waddr = addrgen__U715_out;
assign inner_sram__U731_bank_raddr = addrgen__U730_out;
assign inner_sram__U731_bank_wdata = wdata;
inner_sram__U731 inner_sram__U731_bank (
    .clk(inner_sram__U731_bank_clk),
    .rst_n(inner_sram__U731_bank_rst_n),
    .flush(inner_sram__U731_bank_flush),
    .ren_in(inner_sram__U731_bank_ren_in),
    .wen_in(inner_sram__U731_bank_wen_in),
    .waddr(inner_sram__U731_bank_waddr),
    .raddr(inner_sram__U731_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U731_bank_wdata)
);
endmodule

module aff__U666 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U658 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U657 (
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
aff__U658 affine_func (
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

module aff__U651 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0035);
endmodule

module aff__U643 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U642 (
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
aff__U643 affine_func (
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

module memtile_long_delay__U641 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U656_out;
wire [15:0] addrgen__U656_d [0:0];
wire [15:0] addrgen__U671_out;
wire [15:0] addrgen__U671_d [0:0];
wire ctrl__U650_clk;
wire ctrl__U650_valid;
wire [15:0] ctrl__U650_d [0:0];
wire ctrl__U665_clk;
wire ctrl__U665_valid;
wire [15:0] ctrl__U665_d [0:0];
wire inner_sram__U672_bank_clk;
wire inner_sram__U672_bank_rst_n;
wire inner_sram__U672_bank_flush;
wire inner_sram__U672_bank_ren_in;
wire inner_sram__U672_bank_wen_in;
wire [15:0] inner_sram__U672_bank_waddr;
wire [15:0] inner_sram__U672_bank_raddr;
wire [15:0] inner_sram__U672_bank_wdata;
assign addrgen__U656_d[0] = ctrl__U650_d[0];
aff__U651 addrgen__U656 (
    .out(addrgen__U656_out),
    .d(addrgen__U656_d)
);
assign addrgen__U671_d[0] = ctrl__U665_d[0];
aff__U666 addrgen__U671 (
    .out(addrgen__U671_out),
    .d(addrgen__U671_d)
);
assign ctrl__U650_clk = clk;
affine_controller__U642 ctrl__U650 (
    .clk(ctrl__U650_clk),
    .valid(ctrl__U650_valid),
    .d(ctrl__U650_d)
);
assign ctrl__U665_clk = clk;
affine_controller__U657 ctrl__U665 (
    .clk(ctrl__U665_clk),
    .valid(ctrl__U665_valid),
    .d(ctrl__U665_d)
);
assign inner_sram__U672_bank_clk = clk;
assign inner_sram__U672_bank_rst_n = rst_n;
assign inner_sram__U672_bank_flush = flush;
assign inner_sram__U672_bank_ren_in = ctrl__U665_valid;
assign inner_sram__U672_bank_wen_in = ctrl__U650_valid;
assign inner_sram__U672_bank_waddr = addrgen__U656_out;
assign inner_sram__U672_bank_raddr = addrgen__U671_out;
assign inner_sram__U672_bank_wdata = wdata;
inner_sram__U672 inner_sram__U672_bank (
    .clk(inner_sram__U672_bank_clk),
    .rst_n(inner_sram__U672_bank_rst_n),
    .flush(inner_sram__U672_bank_flush),
    .ren_in(inner_sram__U672_bank_ren_in),
    .wen_in(inner_sram__U672_bank_wen_in),
    .waddr(inner_sram__U672_bank_waddr),
    .raddr(inner_sram__U672_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U672_bank_wdata)
);
endmodule

module denoised_1_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_demosaicked_1_stencil_1_read_ren,
    input [15:0] op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_demosaicked_1_stencil_1_read [4:0],
    input op_hcompute_demosaicked_1_stencil_2_read_ren,
    input [15:0] op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_demosaicked_1_stencil_2_read [7:0],
    input op_hcompute_demosaicked_1_stencil_read_ren,
    input [15:0] op_hcompute_demosaicked_1_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_demosaicked_1_stencil_read [7:0],
    input op_hcompute_denoised_1_stencil_write_wen,
    input [15:0] op_hcompute_denoised_1_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_denoised_1_stencil_write [0:0]
);
wire delay_sr_U620_clk;
wire [15:0] delay_sr_U620_wdata;
wire [15:0] delay_sr_U620_rdata;
wire delay_sr_U620_rst_n;
wire delay_sr_U620_flush;
wire delay_sr_U623_clk;
wire [15:0] delay_sr_U623_wdata;
wire [15:0] delay_sr_U623_rdata;
wire delay_sr_U623_rst_n;
wire delay_sr_U623_flush;
wire delay_sr_U629_clk;
wire [15:0] delay_sr_U629_wdata;
wire [15:0] delay_sr_U629_rdata;
wire delay_sr_U629_rst_n;
wire delay_sr_U629_flush;
wire delay_sr_U634_clk;
wire [15:0] delay_sr_U634_wdata;
wire [15:0] delay_sr_U634_rdata;
wire delay_sr_U634_rst_n;
wire delay_sr_U634_flush;
wire delay_sr_U637_clk;
wire [15:0] delay_sr_U637_wdata;
wire [15:0] delay_sr_U637_rdata;
wire delay_sr_U637_rst_n;
wire delay_sr_U637_flush;
wire delay_sr_U640_clk;
wire [15:0] delay_sr_U640_wdata;
wire [15:0] delay_sr_U640_rdata;
wire delay_sr_U640_rst_n;
wire delay_sr_U640_flush;
wire delay_sr_U673_clk;
wire [15:0] delay_sr_U673_wdata;
wire [15:0] delay_sr_U673_rdata;
wire delay_sr_U673_rst_n;
wire delay_sr_U673_flush;
wire delay_sr_U676_clk;
wire [15:0] delay_sr_U676_wdata;
wire [15:0] delay_sr_U676_rdata;
wire delay_sr_U676_rst_n;
wire delay_sr_U676_flush;
wire delay_sr_U679_clk;
wire [15:0] delay_sr_U679_wdata;
wire [15:0] delay_sr_U679_rdata;
wire delay_sr_U679_rst_n;
wire delay_sr_U679_flush;
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
wire delay_sr_U693_clk;
wire [15:0] delay_sr_U693_wdata;
wire [15:0] delay_sr_U693_rdata;
wire delay_sr_U693_rst_n;
wire delay_sr_U693_flush;
wire delay_sr_U696_clk;
wire [15:0] delay_sr_U696_wdata;
wire [15:0] delay_sr_U696_rdata;
wire delay_sr_U696_rst_n;
wire delay_sr_U696_flush;
wire delay_sr_U699_clk;
wire [15:0] delay_sr_U699_wdata;
wire [15:0] delay_sr_U699_rdata;
wire delay_sr_U699_rst_n;
wire delay_sr_U699_flush;
wire delay_sr_U732_clk;
wire [15:0] delay_sr_U732_wdata;
wire [15:0] delay_sr_U732_rdata;
wire delay_sr_U732_rst_n;
wire delay_sr_U732_flush;
wire delay_sr_U735_clk;
wire [15:0] delay_sr_U735_wdata;
wire [15:0] delay_sr_U735_rdata;
wire delay_sr_U735_rst_n;
wire delay_sr_U735_flush;
wire delay_sr_U738_clk;
wire [15:0] delay_sr_U738_wdata;
wire [15:0] delay_sr_U738_rdata;
wire delay_sr_U738_rst_n;
wire delay_sr_U738_flush;
wire delay_sr_U743_clk;
wire [15:0] delay_sr_U743_wdata;
wire [15:0] delay_sr_U743_rdata;
wire delay_sr_U743_rst_n;
wire delay_sr_U743_flush;
wire delay_sr_U749_clk;
wire [15:0] delay_sr_U749_wdata;
wire [15:0] delay_sr_U749_rdata;
wire delay_sr_U749_rst_n;
wire delay_sr_U749_flush;
wire delay_sr_U752_clk;
wire [15:0] delay_sr_U752_wdata;
wire [15:0] delay_sr_U752_rdata;
wire delay_sr_U752_rst_n;
wire delay_sr_U752_flush;
assign delay_sr_U620_clk = clk;
assign delay_sr_U620_wdata = op_hcompute_denoised_1_stencil_write[0];
assign delay_sr_U620_rst_n = rst_n;
assign delay_sr_U620_flush = flush;
delay__U615 delay_sr_U620 (
    .clk(delay_sr_U620_clk),
    .wdata(delay_sr_U620_wdata),
    .rdata(delay_sr_U620_rdata),
    .rst_n(delay_sr_U620_rst_n),
    .flush(delay_sr_U620_flush)
);
assign delay_sr_U623_clk = clk;
assign delay_sr_U623_wdata = delay_sr_U620_rdata;
assign delay_sr_U623_rst_n = rst_n;
assign delay_sr_U623_flush = flush;
delay__U621 delay_sr_U623 (
    .clk(delay_sr_U623_clk),
    .wdata(delay_sr_U623_wdata),
    .rdata(delay_sr_U623_rdata),
    .rst_n(delay_sr_U623_rst_n),
    .flush(delay_sr_U623_flush)
);
assign delay_sr_U629_clk = clk;
assign delay_sr_U629_wdata = delay_sr_U623_rdata;
assign delay_sr_U629_rst_n = rst_n;
assign delay_sr_U629_flush = flush;
delay__U624 delay_sr_U629 (
    .clk(delay_sr_U629_clk),
    .wdata(delay_sr_U629_wdata),
    .rdata(delay_sr_U629_rdata),
    .rst_n(delay_sr_U629_rst_n),
    .flush(delay_sr_U629_flush)
);
assign delay_sr_U634_clk = clk;
assign delay_sr_U634_wdata = delay_sr_U629_rdata;
assign delay_sr_U634_rst_n = rst_n;
assign delay_sr_U634_flush = flush;
delay__U630 delay_sr_U634 (
    .clk(delay_sr_U634_clk),
    .wdata(delay_sr_U634_wdata),
    .rdata(delay_sr_U634_rdata),
    .rst_n(delay_sr_U634_rst_n),
    .flush(delay_sr_U634_flush)
);
assign delay_sr_U637_clk = clk;
assign delay_sr_U637_wdata = delay_sr_U634_rdata;
assign delay_sr_U637_rst_n = rst_n;
assign delay_sr_U637_flush = flush;
delay__U635 delay_sr_U637 (
    .clk(delay_sr_U637_clk),
    .wdata(delay_sr_U637_wdata),
    .rdata(delay_sr_U637_rdata),
    .rst_n(delay_sr_U637_rst_n),
    .flush(delay_sr_U637_flush)
);
assign delay_sr_U640_clk = clk;
assign delay_sr_U640_wdata = delay_sr_U637_rdata;
assign delay_sr_U640_rst_n = rst_n;
assign delay_sr_U640_flush = flush;
delay__U638 delay_sr_U640 (
    .clk(delay_sr_U640_clk),
    .wdata(delay_sr_U640_wdata),
    .rdata(delay_sr_U640_rdata),
    .rst_n(delay_sr_U640_rst_n),
    .flush(delay_sr_U640_flush)
);
assign delay_sr_U673_clk = clk;
assign delay_sr_U673_wdata = delay_sr_U640_rdata;
assign delay_sr_U673_rst_n = rst_n;
assign delay_sr_U673_flush = flush;
memtile_long_delay__U641 delay_sr_U673 (
    .clk(delay_sr_U673_clk),
    .wdata(delay_sr_U673_wdata),
    .rdata(delay_sr_U673_rdata),
    .rst_n(delay_sr_U673_rst_n),
    .flush(delay_sr_U673_flush)
);
assign delay_sr_U676_clk = clk;
assign delay_sr_U676_wdata = delay_sr_U673_rdata;
assign delay_sr_U676_rst_n = rst_n;
assign delay_sr_U676_flush = flush;
delay__U674 delay_sr_U676 (
    .clk(delay_sr_U676_clk),
    .wdata(delay_sr_U676_wdata),
    .rdata(delay_sr_U676_rdata),
    .rst_n(delay_sr_U676_rst_n),
    .flush(delay_sr_U676_flush)
);
assign delay_sr_U679_clk = clk;
assign delay_sr_U679_wdata = delay_sr_U676_rdata;
assign delay_sr_U679_rst_n = rst_n;
assign delay_sr_U679_flush = flush;
delay__U677 delay_sr_U679 (
    .clk(delay_sr_U679_clk),
    .wdata(delay_sr_U679_wdata),
    .rdata(delay_sr_U679_rdata),
    .rst_n(delay_sr_U679_rst_n),
    .flush(delay_sr_U679_flush)
);
assign delay_sr_U683_clk = clk;
assign delay_sr_U683_wdata = delay_sr_U679_rdata;
assign delay_sr_U683_rst_n = rst_n;
assign delay_sr_U683_flush = flush;
delay__U680 delay_sr_U683 (
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
assign delay_sr_U693_clk = clk;
assign delay_sr_U693_wdata = delay_sr_U689_rdata;
assign delay_sr_U693_rst_n = rst_n;
assign delay_sr_U693_flush = flush;
delay__U690 delay_sr_U693 (
    .clk(delay_sr_U693_clk),
    .wdata(delay_sr_U693_wdata),
    .rdata(delay_sr_U693_rdata),
    .rst_n(delay_sr_U693_rst_n),
    .flush(delay_sr_U693_flush)
);
assign delay_sr_U696_clk = clk;
assign delay_sr_U696_wdata = delay_sr_U693_rdata;
assign delay_sr_U696_rst_n = rst_n;
assign delay_sr_U696_flush = flush;
delay__U694 delay_sr_U696 (
    .clk(delay_sr_U696_clk),
    .wdata(delay_sr_U696_wdata),
    .rdata(delay_sr_U696_rdata),
    .rst_n(delay_sr_U696_rst_n),
    .flush(delay_sr_U696_flush)
);
assign delay_sr_U699_clk = clk;
assign delay_sr_U699_wdata = delay_sr_U696_rdata;
assign delay_sr_U699_rst_n = rst_n;
assign delay_sr_U699_flush = flush;
delay__U697 delay_sr_U699 (
    .clk(delay_sr_U699_clk),
    .wdata(delay_sr_U699_wdata),
    .rdata(delay_sr_U699_rdata),
    .rst_n(delay_sr_U699_rst_n),
    .flush(delay_sr_U699_flush)
);
assign delay_sr_U732_clk = clk;
assign delay_sr_U732_wdata = delay_sr_U699_rdata;
assign delay_sr_U732_rst_n = rst_n;
assign delay_sr_U732_flush = flush;
memtile_long_delay__U700 delay_sr_U732 (
    .clk(delay_sr_U732_clk),
    .wdata(delay_sr_U732_wdata),
    .rdata(delay_sr_U732_rdata),
    .rst_n(delay_sr_U732_rst_n),
    .flush(delay_sr_U732_flush)
);
assign delay_sr_U735_clk = clk;
assign delay_sr_U735_wdata = delay_sr_U732_rdata;
assign delay_sr_U735_rst_n = rst_n;
assign delay_sr_U735_flush = flush;
delay__U733 delay_sr_U735 (
    .clk(delay_sr_U735_clk),
    .wdata(delay_sr_U735_wdata),
    .rdata(delay_sr_U735_rdata),
    .rst_n(delay_sr_U735_rst_n),
    .flush(delay_sr_U735_flush)
);
assign delay_sr_U738_clk = clk;
assign delay_sr_U738_wdata = delay_sr_U735_rdata;
assign delay_sr_U738_rst_n = rst_n;
assign delay_sr_U738_flush = flush;
delay__U736 delay_sr_U738 (
    .clk(delay_sr_U738_clk),
    .wdata(delay_sr_U738_wdata),
    .rdata(delay_sr_U738_rdata),
    .rst_n(delay_sr_U738_rst_n),
    .flush(delay_sr_U738_flush)
);
assign delay_sr_U743_clk = clk;
assign delay_sr_U743_wdata = delay_sr_U738_rdata;
assign delay_sr_U743_rst_n = rst_n;
assign delay_sr_U743_flush = flush;
delay__U739 delay_sr_U743 (
    .clk(delay_sr_U743_clk),
    .wdata(delay_sr_U743_wdata),
    .rdata(delay_sr_U743_rdata),
    .rst_n(delay_sr_U743_rst_n),
    .flush(delay_sr_U743_flush)
);
assign delay_sr_U749_clk = clk;
assign delay_sr_U749_wdata = delay_sr_U743_rdata;
assign delay_sr_U749_rst_n = rst_n;
assign delay_sr_U749_flush = flush;
delay__U744 delay_sr_U749 (
    .clk(delay_sr_U749_clk),
    .wdata(delay_sr_U749_wdata),
    .rdata(delay_sr_U749_rdata),
    .rst_n(delay_sr_U749_rst_n),
    .flush(delay_sr_U749_flush)
);
assign delay_sr_U752_clk = clk;
assign delay_sr_U752_wdata = delay_sr_U749_rdata;
assign delay_sr_U752_rst_n = rst_n;
assign delay_sr_U752_flush = flush;
delay__U750 delay_sr_U752 (
    .clk(delay_sr_U752_clk),
    .wdata(delay_sr_U752_wdata),
    .rdata(delay_sr_U752_rdata),
    .rst_n(delay_sr_U752_rst_n),
    .flush(delay_sr_U752_flush)
);
assign op_hcompute_demosaicked_1_stencil_1_read[4] = delay_sr_U686_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[3] = delay_sr_U743_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[2] = delay_sr_U683_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[1] = delay_sr_U629_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[0] = delay_sr_U689_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[7] = delay_sr_U752_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[6] = delay_sr_U699_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[5] = delay_sr_U640_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[4] = delay_sr_U749_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[3] = delay_sr_U693_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[2] = delay_sr_U634_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[1] = delay_sr_U637_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[0] = delay_sr_U696_rdata;
assign op_hcompute_demosaicked_1_stencil_read[7] = delay_sr_U738_rdata;
assign op_hcompute_demosaicked_1_stencil_read[6] = delay_sr_U735_rdata;
assign op_hcompute_demosaicked_1_stencil_read[5] = delay_sr_U732_rdata;
assign op_hcompute_demosaicked_1_stencil_read[4] = delay_sr_U623_rdata;
assign op_hcompute_demosaicked_1_stencil_read[3] = delay_sr_U679_rdata;
assign op_hcompute_demosaicked_1_stencil_read[2] = delay_sr_U620_rdata;
assign op_hcompute_demosaicked_1_stencil_read[1] = delay_sr_U673_rdata;
assign op_hcompute_demosaicked_1_stencil_read[0] = delay_sr_U676_rdata;
endmodule

module aff__U595 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U587 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U586 (
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
aff__U587 affine_func (
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

module aff__U580 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000b);
endmodule

module aff__U572 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U571 (
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
aff__U572 affine_func (
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

module memtile_long_delay__U570 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U585_out;
wire [15:0] addrgen__U585_d [0:0];
wire [15:0] addrgen__U600_out;
wire [15:0] addrgen__U600_d [0:0];
wire ctrl__U579_clk;
wire ctrl__U579_valid;
wire [15:0] ctrl__U579_d [0:0];
wire ctrl__U594_clk;
wire ctrl__U594_valid;
wire [15:0] ctrl__U594_d [0:0];
wire inner_sram__U601_bank_clk;
wire inner_sram__U601_bank_rst_n;
wire inner_sram__U601_bank_flush;
wire inner_sram__U601_bank_ren_in;
wire inner_sram__U601_bank_wen_in;
wire [15:0] inner_sram__U601_bank_waddr;
wire [15:0] inner_sram__U601_bank_raddr;
wire [15:0] inner_sram__U601_bank_wdata;
assign addrgen__U585_d[0] = ctrl__U579_d[0];
aff__U580 addrgen__U585 (
    .out(addrgen__U585_out),
    .d(addrgen__U585_d)
);
assign addrgen__U600_d[0] = ctrl__U594_d[0];
aff__U595 addrgen__U600 (
    .out(addrgen__U600_out),
    .d(addrgen__U600_d)
);
assign ctrl__U579_clk = clk;
affine_controller__U571 ctrl__U579 (
    .clk(ctrl__U579_clk),
    .valid(ctrl__U579_valid),
    .d(ctrl__U579_d)
);
assign ctrl__U594_clk = clk;
affine_controller__U586 ctrl__U594 (
    .clk(ctrl__U594_clk),
    .valid(ctrl__U594_valid),
    .d(ctrl__U594_d)
);
assign inner_sram__U601_bank_clk = clk;
assign inner_sram__U601_bank_rst_n = rst_n;
assign inner_sram__U601_bank_flush = flush;
assign inner_sram__U601_bank_ren_in = ctrl__U594_valid;
assign inner_sram__U601_bank_wen_in = ctrl__U579_valid;
assign inner_sram__U601_bank_waddr = addrgen__U585_out;
assign inner_sram__U601_bank_raddr = addrgen__U600_out;
assign inner_sram__U601_bank_wdata = wdata;
inner_sram__U601 inner_sram__U601_bank (
    .clk(inner_sram__U601_bank_clk),
    .rst_n(inner_sram__U601_bank_rst_n),
    .flush(inner_sram__U601_bank_flush),
    .ren_in(inner_sram__U601_bank_ren_in),
    .wen_in(inner_sram__U601_bank_wen_in),
    .waddr(inner_sram__U601_bank_waddr),
    .raddr(inner_sram__U601_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U601_bank_wdata)
);
endmodule

module demosaicked_1_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_corrected_stencil_1_read_ren,
    input [15:0] op_hcompute_corrected_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_corrected_stencil_1_read [2:0],
    input op_hcompute_corrected_stencil_2_read_ren,
    input [15:0] op_hcompute_corrected_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_corrected_stencil_2_read [2:0],
    input op_hcompute_corrected_stencil_read_ren,
    input [15:0] op_hcompute_corrected_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_corrected_stencil_read [2:0],
    input op_hcompute_demosaicked_1_stencil_1_write_wen,
    input [15:0] op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_demosaicked_1_stencil_1_write [0:0],
    input op_hcompute_demosaicked_1_stencil_2_write_wen,
    input [15:0] op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_demosaicked_1_stencil_2_write [0:0],
    input op_hcompute_demosaicked_1_stencil_write_wen,
    input [15:0] op_hcompute_demosaicked_1_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_demosaicked_1_stencil_write [0:0]
);
wire delay_sr_U539_clk;
wire [15:0] delay_sr_U539_wdata;
wire [15:0] delay_sr_U539_rdata;
wire delay_sr_U539_rst_n;
wire delay_sr_U539_flush;
wire delay_sr_U545_clk;
wire [15:0] delay_sr_U545_wdata;
wire [15:0] delay_sr_U545_rdata;
wire delay_sr_U545_rst_n;
wire delay_sr_U545_flush;
wire delay_sr_U551_clk;
wire [15:0] delay_sr_U551_wdata;
wire [15:0] delay_sr_U551_rdata;
wire delay_sr_U551_rst_n;
wire delay_sr_U551_flush;
wire delay_sr_U557_clk;
wire [15:0] delay_sr_U557_wdata;
wire [15:0] delay_sr_U557_rdata;
wire delay_sr_U557_rst_n;
wire delay_sr_U557_flush;
wire delay_sr_U563_clk;
wire [15:0] delay_sr_U563_wdata;
wire [15:0] delay_sr_U563_rdata;
wire delay_sr_U563_rst_n;
wire delay_sr_U563_flush;
wire delay_sr_U569_clk;
wire [15:0] delay_sr_U569_wdata;
wire [15:0] delay_sr_U569_rdata;
wire delay_sr_U569_rst_n;
wire delay_sr_U569_flush;
wire delay_sr_U602_clk;
wire [15:0] delay_sr_U602_wdata;
wire [15:0] delay_sr_U602_rdata;
wire delay_sr_U602_rst_n;
wire delay_sr_U602_flush;
wire delay_sr_U608_clk;
wire [15:0] delay_sr_U608_wdata;
wire [15:0] delay_sr_U608_rdata;
wire delay_sr_U608_rst_n;
wire delay_sr_U608_flush;
wire delay_sr_U614_clk;
wire [15:0] delay_sr_U614_wdata;
wire [15:0] delay_sr_U614_rdata;
wire delay_sr_U614_rst_n;
wire delay_sr_U614_flush;
assign delay_sr_U539_clk = clk;
assign delay_sr_U539_wdata = op_hcompute_demosaicked_1_stencil_1_write[0];
assign delay_sr_U539_rst_n = rst_n;
assign delay_sr_U539_flush = flush;
delay__U530 delay_sr_U539 (
    .clk(delay_sr_U539_clk),
    .wdata(delay_sr_U539_wdata),
    .rdata(delay_sr_U539_rdata),
    .rst_n(delay_sr_U539_rst_n),
    .flush(delay_sr_U539_flush)
);
assign delay_sr_U545_clk = clk;
assign delay_sr_U545_wdata = delay_sr_U539_rdata;
assign delay_sr_U545_rst_n = rst_n;
assign delay_sr_U545_flush = flush;
delay__U540 delay_sr_U545 (
    .clk(delay_sr_U545_clk),
    .wdata(delay_sr_U545_wdata),
    .rdata(delay_sr_U545_rdata),
    .rst_n(delay_sr_U545_rst_n),
    .flush(delay_sr_U545_flush)
);
assign delay_sr_U551_clk = clk;
assign delay_sr_U551_wdata = delay_sr_U545_rdata;
assign delay_sr_U551_rst_n = rst_n;
assign delay_sr_U551_flush = flush;
delay__U546 delay_sr_U551 (
    .clk(delay_sr_U551_clk),
    .wdata(delay_sr_U551_wdata),
    .rdata(delay_sr_U551_rdata),
    .rst_n(delay_sr_U551_rst_n),
    .flush(delay_sr_U551_flush)
);
assign delay_sr_U557_clk = clk;
assign delay_sr_U557_wdata = op_hcompute_demosaicked_1_stencil_2_write[0];
assign delay_sr_U557_rst_n = rst_n;
assign delay_sr_U557_flush = flush;
delay__U552 delay_sr_U557 (
    .clk(delay_sr_U557_clk),
    .wdata(delay_sr_U557_wdata),
    .rdata(delay_sr_U557_rdata),
    .rst_n(delay_sr_U557_rst_n),
    .flush(delay_sr_U557_flush)
);
assign delay_sr_U563_clk = clk;
assign delay_sr_U563_wdata = delay_sr_U557_rdata;
assign delay_sr_U563_rst_n = rst_n;
assign delay_sr_U563_flush = flush;
delay__U558 delay_sr_U563 (
    .clk(delay_sr_U563_clk),
    .wdata(delay_sr_U563_wdata),
    .rdata(delay_sr_U563_rdata),
    .rst_n(delay_sr_U563_rst_n),
    .flush(delay_sr_U563_flush)
);
assign delay_sr_U569_clk = clk;
assign delay_sr_U569_wdata = delay_sr_U563_rdata;
assign delay_sr_U569_rst_n = rst_n;
assign delay_sr_U569_flush = flush;
delay__U564 delay_sr_U569 (
    .clk(delay_sr_U569_clk),
    .wdata(delay_sr_U569_wdata),
    .rdata(delay_sr_U569_rdata),
    .rst_n(delay_sr_U569_rst_n),
    .flush(delay_sr_U569_flush)
);
assign delay_sr_U602_clk = clk;
assign delay_sr_U602_wdata = op_hcompute_demosaicked_1_stencil_write[0];
assign delay_sr_U602_rst_n = rst_n;
assign delay_sr_U602_flush = flush;
memtile_long_delay__U570 delay_sr_U602 (
    .clk(delay_sr_U602_clk),
    .wdata(delay_sr_U602_wdata),
    .rdata(delay_sr_U602_rdata),
    .rst_n(delay_sr_U602_rst_n),
    .flush(delay_sr_U602_flush)
);
assign delay_sr_U608_clk = clk;
assign delay_sr_U608_wdata = delay_sr_U602_rdata;
assign delay_sr_U608_rst_n = rst_n;
assign delay_sr_U608_flush = flush;
delay__U603 delay_sr_U608 (
    .clk(delay_sr_U608_clk),
    .wdata(delay_sr_U608_wdata),
    .rdata(delay_sr_U608_rdata),
    .rst_n(delay_sr_U608_rst_n),
    .flush(delay_sr_U608_flush)
);
assign delay_sr_U614_clk = clk;
assign delay_sr_U614_wdata = delay_sr_U608_rdata;
assign delay_sr_U614_rst_n = rst_n;
assign delay_sr_U614_flush = flush;
delay__U609 delay_sr_U614 (
    .clk(delay_sr_U614_clk),
    .wdata(delay_sr_U614_wdata),
    .rdata(delay_sr_U614_rdata),
    .rst_n(delay_sr_U614_rst_n),
    .flush(delay_sr_U614_flush)
);
assign op_hcompute_corrected_stencil_1_read[2] = delay_sr_U563_rdata;
assign op_hcompute_corrected_stencil_1_read[1] = delay_sr_U608_rdata;
assign op_hcompute_corrected_stencil_1_read[0] = delay_sr_U545_rdata;
assign op_hcompute_corrected_stencil_2_read[2] = delay_sr_U614_rdata;
assign op_hcompute_corrected_stencil_2_read[1] = delay_sr_U551_rdata;
assign op_hcompute_corrected_stencil_2_read[0] = delay_sr_U569_rdata;
assign op_hcompute_corrected_stencil_read[2] = delay_sr_U539_rdata;
assign op_hcompute_corrected_stencil_read[1] = delay_sr_U557_rdata;
assign op_hcompute_corrected_stencil_read[0] = delay_sr_U602_rdata;
endmodule

module aff__U522 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U514 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U513 (
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
aff__U514 affine_func (
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

module aff__U51 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h018e);
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

module aff__U507 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000d);
endmodule

module aff__U499 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U498 (
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
aff__U499 affine_func (
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

module memtile_long_delay__U497 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U512_out;
wire [15:0] addrgen__U512_d [0:0];
wire [15:0] addrgen__U527_out;
wire [15:0] addrgen__U527_d [0:0];
wire ctrl__U506_clk;
wire ctrl__U506_valid;
wire [15:0] ctrl__U506_d [0:0];
wire ctrl__U521_clk;
wire ctrl__U521_valid;
wire [15:0] ctrl__U521_d [0:0];
wire inner_sram__U528_bank_clk;
wire inner_sram__U528_bank_rst_n;
wire inner_sram__U528_bank_flush;
wire inner_sram__U528_bank_ren_in;
wire inner_sram__U528_bank_wen_in;
wire [15:0] inner_sram__U528_bank_waddr;
wire [15:0] inner_sram__U528_bank_raddr;
wire [15:0] inner_sram__U528_bank_wdata;
assign addrgen__U512_d[0] = ctrl__U506_d[0];
aff__U507 addrgen__U512 (
    .out(addrgen__U512_out),
    .d(addrgen__U512_d)
);
assign addrgen__U527_d[0] = ctrl__U521_d[0];
aff__U522 addrgen__U527 (
    .out(addrgen__U527_out),
    .d(addrgen__U527_d)
);
assign ctrl__U506_clk = clk;
affine_controller__U498 ctrl__U506 (
    .clk(ctrl__U506_clk),
    .valid(ctrl__U506_valid),
    .d(ctrl__U506_d)
);
assign ctrl__U521_clk = clk;
affine_controller__U513 ctrl__U521 (
    .clk(ctrl__U521_clk),
    .valid(ctrl__U521_valid),
    .d(ctrl__U521_d)
);
assign inner_sram__U528_bank_clk = clk;
assign inner_sram__U528_bank_rst_n = rst_n;
assign inner_sram__U528_bank_flush = flush;
assign inner_sram__U528_bank_ren_in = ctrl__U521_valid;
assign inner_sram__U528_bank_wen_in = ctrl__U506_valid;
assign inner_sram__U528_bank_waddr = addrgen__U512_out;
assign inner_sram__U528_bank_raddr = addrgen__U527_out;
assign inner_sram__U528_bank_wdata = wdata;
inner_sram__U528 inner_sram__U528_bank (
    .clk(inner_sram__U528_bank_clk),
    .rst_n(inner_sram__U528_bank_rst_n),
    .flush(inner_sram__U528_bank_flush),
    .ren_in(inner_sram__U528_bank_ren_in),
    .wen_in(inner_sram__U528_bank_wen_in),
    .waddr(inner_sram__U528_bank_waddr),
    .raddr(inner_sram__U528_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U528_bank_wdata)
);
endmodule

module aff__U477 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U469 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U468 (
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
aff__U469 affine_func (
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

module aff__U462 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000b);
endmodule

module aff__U454 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U453 (
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
aff__U454 affine_func (
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

module memtile_long_delay__U452 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U467_out;
wire [15:0] addrgen__U467_d [0:0];
wire [15:0] addrgen__U482_out;
wire [15:0] addrgen__U482_d [0:0];
wire ctrl__U461_clk;
wire ctrl__U461_valid;
wire [15:0] ctrl__U461_d [0:0];
wire ctrl__U476_clk;
wire ctrl__U476_valid;
wire [15:0] ctrl__U476_d [0:0];
wire inner_sram__U483_bank_clk;
wire inner_sram__U483_bank_rst_n;
wire inner_sram__U483_bank_flush;
wire inner_sram__U483_bank_ren_in;
wire inner_sram__U483_bank_wen_in;
wire [15:0] inner_sram__U483_bank_waddr;
wire [15:0] inner_sram__U483_bank_raddr;
wire [15:0] inner_sram__U483_bank_wdata;
assign addrgen__U467_d[0] = ctrl__U461_d[0];
aff__U462 addrgen__U467 (
    .out(addrgen__U467_out),
    .d(addrgen__U467_d)
);
assign addrgen__U482_d[0] = ctrl__U476_d[0];
aff__U477 addrgen__U482 (
    .out(addrgen__U482_out),
    .d(addrgen__U482_d)
);
assign ctrl__U461_clk = clk;
affine_controller__U453 ctrl__U461 (
    .clk(ctrl__U461_clk),
    .valid(ctrl__U461_valid),
    .d(ctrl__U461_d)
);
assign ctrl__U476_clk = clk;
affine_controller__U468 ctrl__U476 (
    .clk(ctrl__U476_clk),
    .valid(ctrl__U476_valid),
    .d(ctrl__U476_d)
);
assign inner_sram__U483_bank_clk = clk;
assign inner_sram__U483_bank_rst_n = rst_n;
assign inner_sram__U483_bank_flush = flush;
assign inner_sram__U483_bank_ren_in = ctrl__U476_valid;
assign inner_sram__U483_bank_wen_in = ctrl__U461_valid;
assign inner_sram__U483_bank_waddr = addrgen__U467_out;
assign inner_sram__U483_bank_raddr = addrgen__U482_out;
assign inner_sram__U483_bank_wdata = wdata;
inner_sram__U483 inner_sram__U483_bank (
    .clk(inner_sram__U483_bank_clk),
    .rst_n(inner_sram__U483_bank_rst_n),
    .flush(inner_sram__U483_bank_flush),
    .ren_in(inner_sram__U483_bank_ren_in),
    .wen_in(inner_sram__U483_bank_wen_in),
    .waddr(inner_sram__U483_bank_waddr),
    .raddr(inner_sram__U483_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U483_bank_wdata)
);
endmodule

module curved_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_curved_stencil_1_write_wen,
    input [15:0] op_hcompute_curved_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_curved_stencil_1_write [0:0],
    input op_hcompute_curved_stencil_2_write_wen,
    input [15:0] op_hcompute_curved_stencil_2_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_curved_stencil_2_write [0:0],
    input op_hcompute_curved_stencil_write_wen,
    input [15:0] op_hcompute_curved_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_curved_stencil_write [0:0],
    input op_hcompute_hw_output_stencil_1_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_1_read [0:0],
    input op_hcompute_hw_output_stencil_2_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_2_read [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U484_clk;
wire [15:0] delay_sr_U484_wdata;
wire [15:0] delay_sr_U484_rdata;
wire delay_sr_U484_rst_n;
wire delay_sr_U484_flush;
wire delay_sr_U496_clk;
wire [15:0] delay_sr_U496_wdata;
wire [15:0] delay_sr_U496_rdata;
wire delay_sr_U496_rst_n;
wire delay_sr_U496_flush;
wire delay_sr_U529_clk;
wire [15:0] delay_sr_U529_wdata;
wire [15:0] delay_sr_U529_rdata;
wire delay_sr_U529_rst_n;
wire delay_sr_U529_flush;
assign delay_sr_U484_clk = clk;
assign delay_sr_U484_wdata = op_hcompute_curved_stencil_1_write[0];
assign delay_sr_U484_rst_n = rst_n;
assign delay_sr_U484_flush = flush;
memtile_long_delay__U452 delay_sr_U484 (
    .clk(delay_sr_U484_clk),
    .wdata(delay_sr_U484_wdata),
    .rdata(delay_sr_U484_rdata),
    .rst_n(delay_sr_U484_rst_n),
    .flush(delay_sr_U484_flush)
);
assign delay_sr_U496_clk = clk;
assign delay_sr_U496_wdata = op_hcompute_curved_stencil_2_write[0];
assign delay_sr_U496_rst_n = rst_n;
assign delay_sr_U496_flush = flush;
delay__U485 delay_sr_U496 (
    .clk(delay_sr_U496_clk),
    .wdata(delay_sr_U496_wdata),
    .rdata(delay_sr_U496_rdata),
    .rst_n(delay_sr_U496_rst_n),
    .flush(delay_sr_U496_flush)
);
assign delay_sr_U529_clk = clk;
assign delay_sr_U529_wdata = op_hcompute_curved_stencil_write[0];
assign delay_sr_U529_rst_n = rst_n;
assign delay_sr_U529_flush = flush;
memtile_long_delay__U497 delay_sr_U529 (
    .clk(delay_sr_U529_clk),
    .wdata(delay_sr_U529_wdata),
    .rdata(delay_sr_U529_rdata),
    .rst_n(delay_sr_U529_rst_n),
    .flush(delay_sr_U529_flush)
);
assign op_hcompute_hw_output_stencil_1_read[0] = delay_sr_U484_rdata;
assign op_hcompute_hw_output_stencil_2_read[0] = delay_sr_U496_rdata;
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U529_rdata;
endmodule

module aff__U444 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U436 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U435 (
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
aff__U436 affine_func (
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

module aff__U429 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000b);
endmodule

module aff__U421 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U420 (
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
aff__U421 affine_func (
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

module memtile_long_delay__U419 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U434_out;
wire [15:0] addrgen__U434_d [0:0];
wire [15:0] addrgen__U449_out;
wire [15:0] addrgen__U449_d [0:0];
wire ctrl__U428_clk;
wire ctrl__U428_valid;
wire [15:0] ctrl__U428_d [0:0];
wire ctrl__U443_clk;
wire ctrl__U443_valid;
wire [15:0] ctrl__U443_d [0:0];
wire inner_sram__U450_bank_clk;
wire inner_sram__U450_bank_rst_n;
wire inner_sram__U450_bank_flush;
wire inner_sram__U450_bank_ren_in;
wire inner_sram__U450_bank_wen_in;
wire [15:0] inner_sram__U450_bank_waddr;
wire [15:0] inner_sram__U450_bank_raddr;
wire [15:0] inner_sram__U450_bank_wdata;
assign addrgen__U434_d[0] = ctrl__U428_d[0];
aff__U429 addrgen__U434 (
    .out(addrgen__U434_out),
    .d(addrgen__U434_d)
);
assign addrgen__U449_d[0] = ctrl__U443_d[0];
aff__U444 addrgen__U449 (
    .out(addrgen__U449_out),
    .d(addrgen__U449_d)
);
assign ctrl__U428_clk = clk;
affine_controller__U420 ctrl__U428 (
    .clk(ctrl__U428_clk),
    .valid(ctrl__U428_valid),
    .d(ctrl__U428_d)
);
assign ctrl__U443_clk = clk;
affine_controller__U435 ctrl__U443 (
    .clk(ctrl__U443_clk),
    .valid(ctrl__U443_valid),
    .d(ctrl__U443_d)
);
assign inner_sram__U450_bank_clk = clk;
assign inner_sram__U450_bank_rst_n = rst_n;
assign inner_sram__U450_bank_flush = flush;
assign inner_sram__U450_bank_ren_in = ctrl__U443_valid;
assign inner_sram__U450_bank_wen_in = ctrl__U428_valid;
assign inner_sram__U450_bank_waddr = addrgen__U434_out;
assign inner_sram__U450_bank_raddr = addrgen__U449_out;
assign inner_sram__U450_bank_wdata = wdata;
inner_sram__U450 inner_sram__U450_bank (
    .clk(inner_sram__U450_bank_clk),
    .rst_n(inner_sram__U450_bank_rst_n),
    .flush(inner_sram__U450_bank_flush),
    .ren_in(inner_sram__U450_bank_ren_in),
    .wen_in(inner_sram__U450_bank_wen_in),
    .waddr(inner_sram__U450_bank_waddr),
    .raddr(inner_sram__U450_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U450_bank_wdata)
);
endmodule

module aff__U411 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U403 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U402 (
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
aff__U403 affine_func (
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

module aff__U396 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000d);
endmodule

module aff__U388 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U387 (
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
aff__U388 affine_func (
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

module memtile_long_delay__U386 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U401_out;
wire [15:0] addrgen__U401_d [0:0];
wire [15:0] addrgen__U416_out;
wire [15:0] addrgen__U416_d [0:0];
wire ctrl__U395_clk;
wire ctrl__U395_valid;
wire [15:0] ctrl__U395_d [0:0];
wire ctrl__U410_clk;
wire ctrl__U410_valid;
wire [15:0] ctrl__U410_d [0:0];
wire inner_sram__U417_bank_clk;
wire inner_sram__U417_bank_rst_n;
wire inner_sram__U417_bank_flush;
wire inner_sram__U417_bank_ren_in;
wire inner_sram__U417_bank_wen_in;
wire [15:0] inner_sram__U417_bank_waddr;
wire [15:0] inner_sram__U417_bank_raddr;
wire [15:0] inner_sram__U417_bank_wdata;
assign addrgen__U401_d[0] = ctrl__U395_d[0];
aff__U396 addrgen__U401 (
    .out(addrgen__U401_out),
    .d(addrgen__U401_d)
);
assign addrgen__U416_d[0] = ctrl__U410_d[0];
aff__U411 addrgen__U416 (
    .out(addrgen__U416_out),
    .d(addrgen__U416_d)
);
assign ctrl__U395_clk = clk;
affine_controller__U387 ctrl__U395 (
    .clk(ctrl__U395_clk),
    .valid(ctrl__U395_valid),
    .d(ctrl__U395_d)
);
assign ctrl__U410_clk = clk;
affine_controller__U402 ctrl__U410 (
    .clk(ctrl__U410_clk),
    .valid(ctrl__U410_valid),
    .d(ctrl__U410_d)
);
assign inner_sram__U417_bank_clk = clk;
assign inner_sram__U417_bank_rst_n = rst_n;
assign inner_sram__U417_bank_flush = flush;
assign inner_sram__U417_bank_ren_in = ctrl__U410_valid;
assign inner_sram__U417_bank_wen_in = ctrl__U395_valid;
assign inner_sram__U417_bank_waddr = addrgen__U401_out;
assign inner_sram__U417_bank_raddr = addrgen__U416_out;
assign inner_sram__U417_bank_wdata = wdata;
inner_sram__U417 inner_sram__U417_bank (
    .clk(inner_sram__U417_bank_clk),
    .rst_n(inner_sram__U417_bank_rst_n),
    .flush(inner_sram__U417_bank_flush),
    .ren_in(inner_sram__U417_bank_ren_in),
    .wen_in(inner_sram__U417_bank_wen_in),
    .waddr(inner_sram__U417_bank_waddr),
    .raddr(inner_sram__U417_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U417_bank_wdata)
);
endmodule

module aff__U378 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module aff__U370 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U369 (
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
aff__U370 affine_func (
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

module aff__U363 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h000c);
endmodule

module aff__U355 (
    output [15:0] out,
    input [15:0] d [0:0]
);
assign out = 16'((16'(16'h0001 * d[0])) + 16'h0000);
endmodule

module affine_controller__U354 (
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
aff__U355 affine_func (
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

module memtile_long_delay__U353 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] addrgen__U368_out;
wire [15:0] addrgen__U368_d [0:0];
wire [15:0] addrgen__U383_out;
wire [15:0] addrgen__U383_d [0:0];
wire ctrl__U362_clk;
wire ctrl__U362_valid;
wire [15:0] ctrl__U362_d [0:0];
wire ctrl__U377_clk;
wire ctrl__U377_valid;
wire [15:0] ctrl__U377_d [0:0];
wire inner_sram__U384_bank_clk;
wire inner_sram__U384_bank_rst_n;
wire inner_sram__U384_bank_flush;
wire inner_sram__U384_bank_ren_in;
wire inner_sram__U384_bank_wen_in;
wire [15:0] inner_sram__U384_bank_waddr;
wire [15:0] inner_sram__U384_bank_raddr;
wire [15:0] inner_sram__U384_bank_wdata;
assign addrgen__U368_d[0] = ctrl__U362_d[0];
aff__U363 addrgen__U368 (
    .out(addrgen__U368_out),
    .d(addrgen__U368_d)
);
assign addrgen__U383_d[0] = ctrl__U377_d[0];
aff__U378 addrgen__U383 (
    .out(addrgen__U383_out),
    .d(addrgen__U383_d)
);
assign ctrl__U362_clk = clk;
affine_controller__U354 ctrl__U362 (
    .clk(ctrl__U362_clk),
    .valid(ctrl__U362_valid),
    .d(ctrl__U362_d)
);
assign ctrl__U377_clk = clk;
affine_controller__U369 ctrl__U377 (
    .clk(ctrl__U377_clk),
    .valid(ctrl__U377_valid),
    .d(ctrl__U377_d)
);
assign inner_sram__U384_bank_clk = clk;
assign inner_sram__U384_bank_rst_n = rst_n;
assign inner_sram__U384_bank_flush = flush;
assign inner_sram__U384_bank_ren_in = ctrl__U377_valid;
assign inner_sram__U384_bank_wen_in = ctrl__U362_valid;
assign inner_sram__U384_bank_waddr = addrgen__U368_out;
assign inner_sram__U384_bank_raddr = addrgen__U383_out;
assign inner_sram__U384_bank_wdata = wdata;
inner_sram__U384 inner_sram__U384_bank (
    .clk(inner_sram__U384_bank_clk),
    .rst_n(inner_sram__U384_bank_rst_n),
    .flush(inner_sram__U384_bank_flush),
    .ren_in(inner_sram__U384_bank_ren_in),
    .wen_in(inner_sram__U384_bank_wen_in),
    .waddr(inner_sram__U384_bank_waddr),
    .raddr(inner_sram__U384_bank_raddr),
    .rdata(rdata),
    .wdata(inner_sram__U384_bank_wdata)
);
endmodule

module corrected_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_corrected_stencil_1_write_wen,
    input [15:0] op_hcompute_corrected_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_corrected_stencil_1_write [0:0],
    input op_hcompute_corrected_stencil_2_write_wen,
    input [15:0] op_hcompute_corrected_stencil_2_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_corrected_stencil_2_write [0:0],
    input op_hcompute_corrected_stencil_write_wen,
    input [15:0] op_hcompute_corrected_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_corrected_stencil_write [0:0],
    input op_hcompute_curved_stencil_1_read_ren,
    input [15:0] op_hcompute_curved_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_curved_stencil_1_read [0:0],
    input op_hcompute_curved_stencil_2_read_ren,
    input [15:0] op_hcompute_curved_stencil_2_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_curved_stencil_2_read [0:0],
    input op_hcompute_curved_stencil_read_ren,
    input [15:0] op_hcompute_curved_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_curved_stencil_read [0:0]
);
wire delay_sr_U385_clk;
wire [15:0] delay_sr_U385_wdata;
wire [15:0] delay_sr_U385_rdata;
wire delay_sr_U385_rst_n;
wire delay_sr_U385_flush;
wire delay_sr_U418_clk;
wire [15:0] delay_sr_U418_wdata;
wire [15:0] delay_sr_U418_rdata;
wire delay_sr_U418_rst_n;
wire delay_sr_U418_flush;
wire delay_sr_U451_clk;
wire [15:0] delay_sr_U451_wdata;
wire [15:0] delay_sr_U451_rdata;
wire delay_sr_U451_rst_n;
wire delay_sr_U451_flush;
assign delay_sr_U385_clk = clk;
assign delay_sr_U385_wdata = op_hcompute_corrected_stencil_1_write[0];
assign delay_sr_U385_rst_n = rst_n;
assign delay_sr_U385_flush = flush;
memtile_long_delay__U353 delay_sr_U385 (
    .clk(delay_sr_U385_clk),
    .wdata(delay_sr_U385_wdata),
    .rdata(delay_sr_U385_rdata),
    .rst_n(delay_sr_U385_rst_n),
    .flush(delay_sr_U385_flush)
);
assign delay_sr_U418_clk = clk;
assign delay_sr_U418_wdata = op_hcompute_corrected_stencil_2_write[0];
assign delay_sr_U418_rst_n = rst_n;
assign delay_sr_U418_flush = flush;
memtile_long_delay__U386 delay_sr_U418 (
    .clk(delay_sr_U418_clk),
    .wdata(delay_sr_U418_wdata),
    .rdata(delay_sr_U418_rdata),
    .rst_n(delay_sr_U418_rst_n),
    .flush(delay_sr_U418_flush)
);
assign delay_sr_U451_clk = clk;
assign delay_sr_U451_wdata = op_hcompute_corrected_stencil_write[0];
assign delay_sr_U451_rst_n = rst_n;
assign delay_sr_U451_flush = flush;
memtile_long_delay__U419 delay_sr_U451 (
    .clk(delay_sr_U451_clk),
    .wdata(delay_sr_U451_wdata),
    .rdata(delay_sr_U451_rdata),
    .rst_n(delay_sr_U451_rst_n),
    .flush(delay_sr_U451_flush)
);
assign op_hcompute_curved_stencil_1_read[0] = delay_sr_U385_rdata;
assign op_hcompute_curved_stencil_2_read[0] = delay_sr_U418_rdata;
assign op_hcompute_curved_stencil_read[0] = delay_sr_U451_rdata;
endmodule

module aff__U329 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01bb);
endmodule

module affine_controller__U328 (
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
aff__U329 affine_func (
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

module aff__U304 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b8);
endmodule

module affine_controller__U303 (
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
aff__U304 affine_func (
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

module aff__U279 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b5);
endmodule

module affine_controller__U278 (
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
aff__U279 affine_func (
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

module aff__U26 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0108);
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

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01b0);
endmodule

module affine_controller__U252 (
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
aff__U253 affine_func (
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

module aff__U227 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01ab);
endmodule

module affine_controller__U226 (
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
aff__U227 affine_func (
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

module aff__U201 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a6);
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

module aff__U176 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h01a2);
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

module aff__U151 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019e);
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

module aff__U126 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h019a);
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

module aff__U101 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0196);
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

module camera_pipeline (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write [0:0],
    output hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write_en,
    output [15:0] hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write [0:0],
    output hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write_en,
    output [15:0] hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write [0:0]
);
wire [15:0] _U834_in;
wire _U834_clk;
wire [15:0] _U834_out;
wire corrected_stencil_clk;
wire corrected_stencil_rst_n;
wire corrected_stencil_flush;
wire corrected_stencil_op_hcompute_corrected_stencil_1_write_wen;
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_1_write [0:0];
wire corrected_stencil_op_hcompute_corrected_stencil_2_write_wen;
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_2_write [0:0];
wire corrected_stencil_op_hcompute_corrected_stencil_write_wen;
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_corrected_stencil_write [0:0];
wire corrected_stencil_op_hcompute_curved_stencil_1_read_ren;
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_1_read [0:0];
wire corrected_stencil_op_hcompute_curved_stencil_2_read_ren;
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_2_read [0:0];
wire corrected_stencil_op_hcompute_curved_stencil_read_ren;
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars [2:0];
wire [15:0] corrected_stencil_op_hcompute_curved_stencil_read [0:0];
wire curved_stencil_clk;
wire curved_stencil_rst_n;
wire curved_stencil_flush;
wire curved_stencil_op_hcompute_curved_stencil_1_write_wen;
wire [15:0] curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_curved_stencil_1_write [0:0];
wire curved_stencil_op_hcompute_curved_stencil_2_write_wen;
wire [15:0] curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_curved_stencil_2_write [0:0];
wire curved_stencil_op_hcompute_curved_stencil_write_wen;
wire [15:0] curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_curved_stencil_write [0:0];
wire curved_stencil_op_hcompute_hw_output_stencil_1_read_ren;
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_1_read [0:0];
wire curved_stencil_op_hcompute_hw_output_stencil_2_read_ren;
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_2_read [0:0];
wire curved_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] curved_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire demosaicked_1_stencil_clk;
wire demosaicked_1_stencil_rst_n;
wire demosaicked_1_stencil_flush;
wire demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ren;
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read [2:0];
wire demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ren;
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read [2:0];
wire demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ren;
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_corrected_stencil_read [2:0];
wire demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_wen;
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write [0:0];
wire demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_wen;
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write [0:0];
wire demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_wen;
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars [2:0];
wire [15:0] demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write [0:0];
wire denoised_1_stencil_clk;
wire denoised_1_stencil_rst_n;
wire denoised_1_stencil_flush;
wire denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ren;
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read [4:0];
wire denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ren;
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read [7:0];
wire denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ren;
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read [7:0];
wire denoised_1_stencil_op_hcompute_denoised_1_stencil_write_wen;
wire [15:0] denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars [2:0];
wire [15:0] denoised_1_stencil_op_hcompute_denoised_1_stencil_write [0:0];
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_rst_n;
wire hw_input_global_wrapper_stencil_flush;
wire hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ren;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read [4:0];
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_corrected_stencil_clk;
wire [15:0] op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read [2:0];
wire [15:0] op_hcompute_corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_write [0:0];
wire op_hcompute_corrected_stencil_1_clk;
wire [15:0] op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read [2:0];
wire [15:0] op_hcompute_corrected_stencil_1_corrected_stencil_op_hcompute_corrected_stencil_1_write [0:0];
wire op_hcompute_corrected_stencil_1_exe_start_clk;
wire op_hcompute_corrected_stencil_1_exe_start_in;
wire op_hcompute_corrected_stencil_1_exe_start_out;
wire op_hcompute_corrected_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_1_port_controller_clk;
wire op_hcompute_corrected_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_corrected_stencil_1_port_controller_d [2:0];
wire op_hcompute_corrected_stencil_1_read_start;
wire op_hcompute_corrected_stencil_1_write_start;
wire op_hcompute_corrected_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_2_clk;
wire [15:0] op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read [2:0];
wire [15:0] op_hcompute_corrected_stencil_2_corrected_stencil_op_hcompute_corrected_stencil_2_write [0:0];
wire op_hcompute_corrected_stencil_2_exe_start_clk;
wire op_hcompute_corrected_stencil_2_exe_start_in;
wire op_hcompute_corrected_stencil_2_exe_start_out;
wire op_hcompute_corrected_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_2_port_controller_clk;
wire op_hcompute_corrected_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_corrected_stencil_2_port_controller_d [2:0];
wire op_hcompute_corrected_stencil_2_read_start;
wire op_hcompute_corrected_stencil_2_write_start;
wire op_hcompute_corrected_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_2_write_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_exe_start_clk;
wire op_hcompute_corrected_stencil_exe_start_in;
wire op_hcompute_corrected_stencil_exe_start_out;
wire op_hcompute_corrected_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_corrected_stencil_port_controller_clk;
wire op_hcompute_corrected_stencil_port_controller_valid;
wire [15:0] op_hcompute_corrected_stencil_port_controller_d [2:0];
wire op_hcompute_corrected_stencil_read_start;
wire op_hcompute_corrected_stencil_write_start;
wire op_hcompute_corrected_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_corrected_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_corrected_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_clk;
wire [15:0] op_hcompute_curved_stencil_corrected_stencil_op_hcompute_curved_stencil_read [0:0];
wire [15:0] op_hcompute_curved_stencil_curved_stencil_op_hcompute_curved_stencil_write [0:0];
wire op_hcompute_curved_stencil_1_clk;
wire [15:0] op_hcompute_curved_stencil_1_corrected_stencil_op_hcompute_curved_stencil_1_read [0:0];
wire [15:0] op_hcompute_curved_stencil_1_curved_stencil_op_hcompute_curved_stencil_1_write [0:0];
wire op_hcompute_curved_stencil_1_U243_clk;
wire op_hcompute_curved_stencil_1_U243_in;
wire op_hcompute_curved_stencil_1_U243_out;
wire op_hcompute_curved_stencil_1_exe_start_clk;
wire op_hcompute_curved_stencil_1_exe_start_in;
wire op_hcompute_curved_stencil_1_exe_start_out;
wire op_hcompute_curved_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_1_port_controller_clk;
wire op_hcompute_curved_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_curved_stencil_1_port_controller_d [2:0];
wire op_hcompute_curved_stencil_1_read_start;
wire op_hcompute_curved_stencil_1_write_start;
wire op_hcompute_curved_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_2_clk;
wire [15:0] op_hcompute_curved_stencil_2_corrected_stencil_op_hcompute_curved_stencil_2_read [0:0];
wire [15:0] op_hcompute_curved_stencil_2_curved_stencil_op_hcompute_curved_stencil_2_write [0:0];
wire op_hcompute_curved_stencil_2_U269_clk;
wire op_hcompute_curved_stencil_2_U269_in;
wire op_hcompute_curved_stencil_2_U269_out;
wire op_hcompute_curved_stencil_2_exe_start_clk;
wire op_hcompute_curved_stencil_2_exe_start_in;
wire op_hcompute_curved_stencil_2_exe_start_out;
wire op_hcompute_curved_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_2_port_controller_clk;
wire op_hcompute_curved_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_curved_stencil_2_port_controller_d [2:0];
wire op_hcompute_curved_stencil_2_read_start;
wire op_hcompute_curved_stencil_2_write_start;
wire op_hcompute_curved_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_2_write_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_U217_clk;
wire op_hcompute_curved_stencil_U217_in;
wire op_hcompute_curved_stencil_U217_out;
wire op_hcompute_curved_stencil_exe_start_clk;
wire op_hcompute_curved_stencil_exe_start_in;
wire op_hcompute_curved_stencil_exe_start_out;
wire op_hcompute_curved_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_curved_stencil_port_controller_clk;
wire op_hcompute_curved_stencil_port_controller_valid;
wire [15:0] op_hcompute_curved_stencil_port_controller_d [2:0];
wire op_hcompute_curved_stencil_read_start;
wire op_hcompute_curved_stencil_write_start;
wire op_hcompute_curved_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_curved_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_curved_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_x;
wire [15:0] op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_y;
wire [15:0] op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read [7:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write [0:0];
wire op_hcompute_demosaicked_1_stencil_1_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_x_1;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_y_1;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read [4:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_1_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write [0:0];
wire op_hcompute_demosaicked_1_stencil_1_exe_start_clk;
wire op_hcompute_demosaicked_1_stencil_1_exe_start_in;
wire op_hcompute_demosaicked_1_stencil_1_exe_start_out;
wire op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_1_port_controller_clk;
wire op_hcompute_demosaicked_1_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_port_controller_d [2:0];
wire op_hcompute_demosaicked_1_stencil_1_read_start;
wire op_hcompute_demosaicked_1_stencil_1_write_start;
wire op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_2_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_x_2;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_y_2;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read [7:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_2_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write [0:0];
wire op_hcompute_demosaicked_1_stencil_2_exe_start_clk;
wire op_hcompute_demosaicked_1_stencil_2_exe_start_in;
wire op_hcompute_demosaicked_1_stencil_2_exe_start_out;
wire op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_2_port_controller_clk;
wire op_hcompute_demosaicked_1_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_port_controller_d [2:0];
wire op_hcompute_demosaicked_1_stencil_2_read_start;
wire op_hcompute_demosaicked_1_stencil_2_write_start;
wire op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_exe_start_clk;
wire op_hcompute_demosaicked_1_stencil_exe_start_in;
wire op_hcompute_demosaicked_1_stencil_exe_start_out;
wire op_hcompute_demosaicked_1_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_demosaicked_1_stencil_port_controller_clk;
wire op_hcompute_demosaicked_1_stencil_port_controller_valid;
wire [15:0] op_hcompute_demosaicked_1_stencil_port_controller_d [2:0];
wire op_hcompute_demosaicked_1_stencil_read_start;
wire op_hcompute_demosaicked_1_stencil_write_start;
wire op_hcompute_demosaicked_1_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_demosaicked_1_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_demosaicked_1_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_denoised_1_stencil_clk;
wire [15:0] op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read [4:0];
wire [15:0] op_hcompute_denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_write [0:0];
wire op_hcompute_denoised_1_stencil_exe_start_clk;
wire op_hcompute_denoised_1_stencil_exe_start_in;
wire op_hcompute_denoised_1_stencil_exe_start_out;
wire op_hcompute_denoised_1_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_denoised_1_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_denoised_1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_denoised_1_stencil_port_controller_clk;
wire op_hcompute_denoised_1_stencil_port_controller_valid;
wire [15:0] op_hcompute_denoised_1_stencil_port_controller_d [2:0];
wire op_hcompute_denoised_1_stencil_read_start;
wire op_hcompute_denoised_1_stencil_write_start;
wire op_hcompute_denoised_1_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_denoised_1_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_denoised_1_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_curved_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_1_clk;
wire [15:0] op_hcompute_hw_output_stencil_1_curved_stencil_op_hcompute_hw_output_stencil_1_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_1_hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write [0:0];
wire op_hcompute_hw_output_stencil_1_exe_start_clk;
wire op_hcompute_hw_output_stencil_1_exe_start_in;
wire op_hcompute_hw_output_stencil_1_exe_start_out;
wire op_hcompute_hw_output_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_1_port_controller_clk;
wire op_hcompute_hw_output_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_1_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_1_read_start;
wire op_hcompute_hw_output_stencil_1_write_start;
wire op_hcompute_hw_output_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_2_clk;
wire [15:0] op_hcompute_hw_output_stencil_2_curved_stencil_op_hcompute_hw_output_stencil_2_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_2_hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write [0:0];
wire op_hcompute_hw_output_stencil_2_exe_start_clk;
wire op_hcompute_hw_output_stencil_2_exe_start_in;
wire op_hcompute_hw_output_stencil_2_exe_start_out;
wire op_hcompute_hw_output_stencil_2_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_2_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_2_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_2_port_controller_clk;
wire op_hcompute_hw_output_stencil_2_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_2_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_2_read_start;
wire op_hcompute_hw_output_stencil_2_write_start;
wire op_hcompute_hw_output_stencil_2_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_2_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_2_write_start_control_vars_out [2:0];
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
assign _U834_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U834_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U834 (
    .in(_U834_in),
    .clk(_U834_clk),
    .out(_U834_out)
);
assign corrected_stencil_clk = clk;
assign corrected_stencil_rst_n = rst_n;
assign corrected_stencil_flush = flush;
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_wen = op_hcompute_corrected_stencil_1_write_start;
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars[2] = op_hcompute_corrected_stencil_1_write_start_control_vars_out[2];
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars[1] = op_hcompute_corrected_stencil_1_write_start_control_vars_out[1];
assign corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars[0] = op_hcompute_corrected_stencil_1_write_start_control_vars_out[0];
assign corrected_stencil_op_hcompute_corrected_stencil_1_write[0] = op_hcompute_corrected_stencil_1_corrected_stencil_op_hcompute_corrected_stencil_1_write[0];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_wen = op_hcompute_corrected_stencil_2_write_start;
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars[2] = op_hcompute_corrected_stencil_2_write_start_control_vars_out[2];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars[1] = op_hcompute_corrected_stencil_2_write_start_control_vars_out[1];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars[0] = op_hcompute_corrected_stencil_2_write_start_control_vars_out[0];
assign corrected_stencil_op_hcompute_corrected_stencil_2_write[0] = op_hcompute_corrected_stencil_2_corrected_stencil_op_hcompute_corrected_stencil_2_write[0];
assign corrected_stencil_op_hcompute_corrected_stencil_write_wen = op_hcompute_corrected_stencil_write_start;
assign corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars[2] = op_hcompute_corrected_stencil_write_start_control_vars_out[2];
assign corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars[1] = op_hcompute_corrected_stencil_write_start_control_vars_out[1];
assign corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars[0] = op_hcompute_corrected_stencil_write_start_control_vars_out[0];
assign corrected_stencil_op_hcompute_corrected_stencil_write[0] = op_hcompute_corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_write[0];
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ren = op_hcompute_curved_stencil_1_read_start;
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars[2] = op_hcompute_curved_stencil_1_port_controller_d[2];
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars[1] = op_hcompute_curved_stencil_1_port_controller_d[1];
assign corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars[0] = op_hcompute_curved_stencil_1_port_controller_d[0];
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ren = op_hcompute_curved_stencil_2_read_start;
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars[2] = op_hcompute_curved_stencil_2_port_controller_d[2];
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars[1] = op_hcompute_curved_stencil_2_port_controller_d[1];
assign corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars[0] = op_hcompute_curved_stencil_2_port_controller_d[0];
assign corrected_stencil_op_hcompute_curved_stencil_read_ren = op_hcompute_curved_stencil_read_start;
assign corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars[2] = op_hcompute_curved_stencil_port_controller_d[2];
assign corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars[1] = op_hcompute_curved_stencil_port_controller_d[1];
assign corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars[0] = op_hcompute_curved_stencil_port_controller_d[0];
corrected_stencil_ub corrected_stencil (
    .clk(corrected_stencil_clk),
    .rst_n(corrected_stencil_rst_n),
    .flush(corrected_stencil_flush),
    .op_hcompute_corrected_stencil_1_write_wen(corrected_stencil_op_hcompute_corrected_stencil_1_write_wen),
    .op_hcompute_corrected_stencil_1_write_ctrl_vars(corrected_stencil_op_hcompute_corrected_stencil_1_write_ctrl_vars),
    .op_hcompute_corrected_stencil_1_write(corrected_stencil_op_hcompute_corrected_stencil_1_write),
    .op_hcompute_corrected_stencil_2_write_wen(corrected_stencil_op_hcompute_corrected_stencil_2_write_wen),
    .op_hcompute_corrected_stencil_2_write_ctrl_vars(corrected_stencil_op_hcompute_corrected_stencil_2_write_ctrl_vars),
    .op_hcompute_corrected_stencil_2_write(corrected_stencil_op_hcompute_corrected_stencil_2_write),
    .op_hcompute_corrected_stencil_write_wen(corrected_stencil_op_hcompute_corrected_stencil_write_wen),
    .op_hcompute_corrected_stencil_write_ctrl_vars(corrected_stencil_op_hcompute_corrected_stencil_write_ctrl_vars),
    .op_hcompute_corrected_stencil_write(corrected_stencil_op_hcompute_corrected_stencil_write),
    .op_hcompute_curved_stencil_1_read_ren(corrected_stencil_op_hcompute_curved_stencil_1_read_ren),
    .op_hcompute_curved_stencil_1_read_ctrl_vars(corrected_stencil_op_hcompute_curved_stencil_1_read_ctrl_vars),
    .op_hcompute_curved_stencil_1_read(corrected_stencil_op_hcompute_curved_stencil_1_read),
    .op_hcompute_curved_stencil_2_read_ren(corrected_stencil_op_hcompute_curved_stencil_2_read_ren),
    .op_hcompute_curved_stencil_2_read_ctrl_vars(corrected_stencil_op_hcompute_curved_stencil_2_read_ctrl_vars),
    .op_hcompute_curved_stencil_2_read(corrected_stencil_op_hcompute_curved_stencil_2_read),
    .op_hcompute_curved_stencil_read_ren(corrected_stencil_op_hcompute_curved_stencil_read_ren),
    .op_hcompute_curved_stencil_read_ctrl_vars(corrected_stencil_op_hcompute_curved_stencil_read_ctrl_vars),
    .op_hcompute_curved_stencil_read(corrected_stencil_op_hcompute_curved_stencil_read)
);
assign curved_stencil_clk = clk;
assign curved_stencil_rst_n = rst_n;
assign curved_stencil_flush = flush;
assign curved_stencil_op_hcompute_curved_stencil_1_write_wen = op_hcompute_curved_stencil_1_write_start;
assign curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars[2] = op_hcompute_curved_stencil_1_write_start_control_vars_out[2];
assign curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars[1] = op_hcompute_curved_stencil_1_write_start_control_vars_out[1];
assign curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars[0] = op_hcompute_curved_stencil_1_write_start_control_vars_out[0];
assign curved_stencil_op_hcompute_curved_stencil_1_write[0] = op_hcompute_curved_stencil_1_curved_stencil_op_hcompute_curved_stencil_1_write[0];
assign curved_stencil_op_hcompute_curved_stencil_2_write_wen = op_hcompute_curved_stencil_2_write_start;
assign curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars[2] = op_hcompute_curved_stencil_2_write_start_control_vars_out[2];
assign curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars[1] = op_hcompute_curved_stencil_2_write_start_control_vars_out[1];
assign curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars[0] = op_hcompute_curved_stencil_2_write_start_control_vars_out[0];
assign curved_stencil_op_hcompute_curved_stencil_2_write[0] = op_hcompute_curved_stencil_2_curved_stencil_op_hcompute_curved_stencil_2_write[0];
assign curved_stencil_op_hcompute_curved_stencil_write_wen = op_hcompute_curved_stencil_write_start;
assign curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars[2] = op_hcompute_curved_stencil_write_start_control_vars_out[2];
assign curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars[1] = op_hcompute_curved_stencil_write_start_control_vars_out[1];
assign curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars[0] = op_hcompute_curved_stencil_write_start_control_vars_out[0];
assign curved_stencil_op_hcompute_curved_stencil_write[0] = op_hcompute_curved_stencil_curved_stencil_op_hcompute_curved_stencil_write[0];
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ren = op_hcompute_hw_output_stencil_1_read_start;
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_1_port_controller_d[2];
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_1_port_controller_d[1];
assign curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_1_port_controller_d[0];
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ren = op_hcompute_hw_output_stencil_2_read_start;
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_2_port_controller_d[2];
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_2_port_controller_d[1];
assign curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_2_port_controller_d[0];
assign curved_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
curved_stencil_ub curved_stencil (
    .clk(curved_stencil_clk),
    .rst_n(curved_stencil_rst_n),
    .flush(curved_stencil_flush),
    .op_hcompute_curved_stencil_1_write_wen(curved_stencil_op_hcompute_curved_stencil_1_write_wen),
    .op_hcompute_curved_stencil_1_write_ctrl_vars(curved_stencil_op_hcompute_curved_stencil_1_write_ctrl_vars),
    .op_hcompute_curved_stencil_1_write(curved_stencil_op_hcompute_curved_stencil_1_write),
    .op_hcompute_curved_stencil_2_write_wen(curved_stencil_op_hcompute_curved_stencil_2_write_wen),
    .op_hcompute_curved_stencil_2_write_ctrl_vars(curved_stencil_op_hcompute_curved_stencil_2_write_ctrl_vars),
    .op_hcompute_curved_stencil_2_write(curved_stencil_op_hcompute_curved_stencil_2_write),
    .op_hcompute_curved_stencil_write_wen(curved_stencil_op_hcompute_curved_stencil_write_wen),
    .op_hcompute_curved_stencil_write_ctrl_vars(curved_stencil_op_hcompute_curved_stencil_write_ctrl_vars),
    .op_hcompute_curved_stencil_write(curved_stencil_op_hcompute_curved_stencil_write),
    .op_hcompute_hw_output_stencil_1_read_ren(curved_stencil_op_hcompute_hw_output_stencil_1_read_ren),
    .op_hcompute_hw_output_stencil_1_read_ctrl_vars(curved_stencil_op_hcompute_hw_output_stencil_1_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_1_read(curved_stencil_op_hcompute_hw_output_stencil_1_read),
    .op_hcompute_hw_output_stencil_2_read_ren(curved_stencil_op_hcompute_hw_output_stencil_2_read_ren),
    .op_hcompute_hw_output_stencil_2_read_ctrl_vars(curved_stencil_op_hcompute_hw_output_stencil_2_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_2_read(curved_stencil_op_hcompute_hw_output_stencil_2_read),
    .op_hcompute_hw_output_stencil_read_ren(curved_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(curved_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(curved_stencil_op_hcompute_hw_output_stencil_read)
);
assign demosaicked_1_stencil_clk = clk;
assign demosaicked_1_stencil_rst_n = rst_n;
assign demosaicked_1_stencil_flush = flush;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ren = op_hcompute_corrected_stencil_1_read_start;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars[2] = op_hcompute_corrected_stencil_1_port_controller_d[2];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars[1] = op_hcompute_corrected_stencil_1_port_controller_d[1];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars[0] = op_hcompute_corrected_stencil_1_port_controller_d[0];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ren = op_hcompute_corrected_stencil_2_read_start;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars[2] = op_hcompute_corrected_stencil_2_port_controller_d[2];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars[1] = op_hcompute_corrected_stencil_2_port_controller_d[1];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars[0] = op_hcompute_corrected_stencil_2_port_controller_d[0];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ren = op_hcompute_corrected_stencil_read_start;
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars[2] = op_hcompute_corrected_stencil_port_controller_d[2];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars[1] = op_hcompute_corrected_stencil_port_controller_d[1];
assign demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars[0] = op_hcompute_corrected_stencil_port_controller_d[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_wen = op_hcompute_demosaicked_1_stencil_1_write_start;
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out[2];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out[1];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write[0] = op_hcompute_demosaicked_1_stencil_1_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_wen = op_hcompute_demosaicked_1_stencil_2_write_start;
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out[2];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out[1];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write[0] = op_hcompute_demosaicked_1_stencil_2_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_wen = op_hcompute_demosaicked_1_stencil_write_start;
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_write_start_control_vars_out[2];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_write_start_control_vars_out[1];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_write_start_control_vars_out[0];
assign demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write[0] = op_hcompute_demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write[0];
demosaicked_1_stencil_ub demosaicked_1_stencil (
    .clk(demosaicked_1_stencil_clk),
    .rst_n(demosaicked_1_stencil_rst_n),
    .flush(demosaicked_1_stencil_flush),
    .op_hcompute_corrected_stencil_1_read_ren(demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ren),
    .op_hcompute_corrected_stencil_1_read_ctrl_vars(demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read_ctrl_vars),
    .op_hcompute_corrected_stencil_1_read(demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read),
    .op_hcompute_corrected_stencil_2_read_ren(demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ren),
    .op_hcompute_corrected_stencil_2_read_ctrl_vars(demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read_ctrl_vars),
    .op_hcompute_corrected_stencil_2_read(demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read),
    .op_hcompute_corrected_stencil_read_ren(demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ren),
    .op_hcompute_corrected_stencil_read_ctrl_vars(demosaicked_1_stencil_op_hcompute_corrected_stencil_read_ctrl_vars),
    .op_hcompute_corrected_stencil_read(demosaicked_1_stencil_op_hcompute_corrected_stencil_read),
    .op_hcompute_demosaicked_1_stencil_1_write_wen(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_wen),
    .op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_1_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write),
    .op_hcompute_demosaicked_1_stencil_2_write_wen(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_wen),
    .op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_2_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write),
    .op_hcompute_demosaicked_1_stencil_write_wen(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_wen),
    .op_hcompute_demosaicked_1_stencil_write_ctrl_vars(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_write(demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write)
);
assign denoised_1_stencil_clk = clk;
assign denoised_1_stencil_rst_n = rst_n;
assign denoised_1_stencil_flush = flush;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ren = op_hcompute_demosaicked_1_stencil_1_read_start;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[2];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[1];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[0];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ren = op_hcompute_demosaicked_1_stencil_2_read_start;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[2];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[1];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[0];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ren = op_hcompute_demosaicked_1_stencil_read_start;
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars[2] = op_hcompute_demosaicked_1_stencil_port_controller_d[2];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars[1] = op_hcompute_demosaicked_1_stencil_port_controller_d[1];
assign denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars[0] = op_hcompute_demosaicked_1_stencil_port_controller_d[0];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_wen = op_hcompute_denoised_1_stencil_write_start;
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars[2] = op_hcompute_denoised_1_stencil_write_start_control_vars_out[2];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars[1] = op_hcompute_denoised_1_stencil_write_start_control_vars_out[1];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars[0] = op_hcompute_denoised_1_stencil_write_start_control_vars_out[0];
assign denoised_1_stencil_op_hcompute_denoised_1_stencil_write[0] = op_hcompute_denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_write[0];
denoised_1_stencil_ub denoised_1_stencil (
    .clk(denoised_1_stencil_clk),
    .rst_n(denoised_1_stencil_rst_n),
    .flush(denoised_1_stencil_flush),
    .op_hcompute_demosaicked_1_stencil_1_read_ren(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ren),
    .op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_1_read(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read),
    .op_hcompute_demosaicked_1_stencil_2_read_ren(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ren),
    .op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_2_read(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read),
    .op_hcompute_demosaicked_1_stencil_read_ren(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ren),
    .op_hcompute_demosaicked_1_stencil_read_ctrl_vars(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read_ctrl_vars),
    .op_hcompute_demosaicked_1_stencil_read(denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read),
    .op_hcompute_denoised_1_stencil_write_wen(denoised_1_stencil_op_hcompute_denoised_1_stencil_write_wen),
    .op_hcompute_denoised_1_stencil_write_ctrl_vars(denoised_1_stencil_op_hcompute_denoised_1_stencil_write_ctrl_vars),
    .op_hcompute_denoised_1_stencil_write(denoised_1_stencil_op_hcompute_denoised_1_stencil_write)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ren = op_hcompute_denoised_1_stencil_read_start;
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars[2] = op_hcompute_denoised_1_stencil_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars[1] = op_hcompute_denoised_1_stencil_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars[0] = op_hcompute_denoised_1_stencil_port_controller_d[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(hw_input_global_wrapper_stencil_clk),
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
    .flush(hw_input_global_wrapper_stencil_flush),
    .op_hcompute_denoised_1_stencil_read_ren(hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ren),
    .op_hcompute_denoised_1_stencil_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read_ctrl_vars),
    .op_hcompute_denoised_1_stencil_read(hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_corrected_stencil_clk = clk;
assign op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[2];
assign op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[1];
assign op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_read[0];
cu_op_hcompute_corrected_stencil op_hcompute_corrected_stencil (
    .clk(op_hcompute_corrected_stencil_clk),
    .demosaicked_1_stencil_op_hcompute_corrected_stencil_read(op_hcompute_corrected_stencil_demosaicked_1_stencil_op_hcompute_corrected_stencil_read),
    .corrected_stencil_op_hcompute_corrected_stencil_write(op_hcompute_corrected_stencil_corrected_stencil_op_hcompute_corrected_stencil_write)
);
assign op_hcompute_corrected_stencil_1_clk = clk;
assign op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[2];
assign op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[1];
assign op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read[0];
cu_op_hcompute_corrected_stencil_1 op_hcompute_corrected_stencil_1 (
    .clk(op_hcompute_corrected_stencil_1_clk),
    .demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read(op_hcompute_corrected_stencil_1_demosaicked_1_stencil_op_hcompute_corrected_stencil_1_read),
    .corrected_stencil_op_hcompute_corrected_stencil_1_write(op_hcompute_corrected_stencil_1_corrected_stencil_op_hcompute_corrected_stencil_1_write)
);
assign op_hcompute_corrected_stencil_1_exe_start_clk = clk;
assign op_hcompute_corrected_stencil_1_exe_start_in = op_hcompute_corrected_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_corrected_stencil_1_exe_start (
    .clk(op_hcompute_corrected_stencil_1_exe_start_clk),
    .in(op_hcompute_corrected_stencil_1_exe_start_in),
    .out(op_hcompute_corrected_stencil_1_exe_start_out)
);
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_in[2] = op_hcompute_corrected_stencil_1_port_controller_d[2];
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_in[1] = op_hcompute_corrected_stencil_1_port_controller_d[1];
assign op_hcompute_corrected_stencil_1_exe_start_control_vars_in[0] = op_hcompute_corrected_stencil_1_port_controller_d[0];
array_delay_U171 op_hcompute_corrected_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_corrected_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_1_port_controller_clk = clk;
affine_controller__U150 op_hcompute_corrected_stencil_1_port_controller (
    .clk(op_hcompute_corrected_stencil_1_port_controller_clk),
    .valid(op_hcompute_corrected_stencil_1_port_controller_valid),
    .d(op_hcompute_corrected_stencil_1_port_controller_d)
);
assign op_hcompute_corrected_stencil_1_read_start = op_hcompute_corrected_stencil_1_port_controller_valid;
assign op_hcompute_corrected_stencil_1_write_start = op_hcompute_corrected_stencil_1_exe_start_out;
assign op_hcompute_corrected_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_1_write_start_control_vars_in[2] = op_hcompute_corrected_stencil_1_port_controller_d[2];
assign op_hcompute_corrected_stencil_1_write_start_control_vars_in[1] = op_hcompute_corrected_stencil_1_port_controller_d[1];
assign op_hcompute_corrected_stencil_1_write_start_control_vars_in[0] = op_hcompute_corrected_stencil_1_port_controller_d[0];
array_delay_U167 op_hcompute_corrected_stencil_1_write_start_control_vars (
    .clk(op_hcompute_corrected_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_2_clk = clk;
assign op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[2] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[2];
assign op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[1] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[1];
assign op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[0] = demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read[0];
cu_op_hcompute_corrected_stencil_2 op_hcompute_corrected_stencil_2 (
    .clk(op_hcompute_corrected_stencil_2_clk),
    .demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read(op_hcompute_corrected_stencil_2_demosaicked_1_stencil_op_hcompute_corrected_stencil_2_read),
    .corrected_stencil_op_hcompute_corrected_stencil_2_write(op_hcompute_corrected_stencil_2_corrected_stencil_op_hcompute_corrected_stencil_2_write)
);
assign op_hcompute_corrected_stencil_2_exe_start_clk = clk;
assign op_hcompute_corrected_stencil_2_exe_start_in = op_hcompute_corrected_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_corrected_stencil_2_exe_start (
    .clk(op_hcompute_corrected_stencil_2_exe_start_clk),
    .in(op_hcompute_corrected_stencil_2_exe_start_in),
    .out(op_hcompute_corrected_stencil_2_exe_start_out)
);
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_in[2] = op_hcompute_corrected_stencil_2_port_controller_d[2];
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_in[1] = op_hcompute_corrected_stencil_2_port_controller_d[1];
assign op_hcompute_corrected_stencil_2_exe_start_control_vars_in[0] = op_hcompute_corrected_stencil_2_port_controller_d[0];
array_delay_U196 op_hcompute_corrected_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_corrected_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_2_port_controller_clk = clk;
affine_controller__U175 op_hcompute_corrected_stencil_2_port_controller (
    .clk(op_hcompute_corrected_stencil_2_port_controller_clk),
    .valid(op_hcompute_corrected_stencil_2_port_controller_valid),
    .d(op_hcompute_corrected_stencil_2_port_controller_d)
);
assign op_hcompute_corrected_stencil_2_read_start = op_hcompute_corrected_stencil_2_port_controller_valid;
assign op_hcompute_corrected_stencil_2_write_start = op_hcompute_corrected_stencil_2_exe_start_out;
assign op_hcompute_corrected_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_2_write_start_control_vars_in[2] = op_hcompute_corrected_stencil_2_port_controller_d[2];
assign op_hcompute_corrected_stencil_2_write_start_control_vars_in[1] = op_hcompute_corrected_stencil_2_port_controller_d[1];
assign op_hcompute_corrected_stencil_2_write_start_control_vars_in[0] = op_hcompute_corrected_stencil_2_port_controller_d[0];
array_delay_U192 op_hcompute_corrected_stencil_2_write_start_control_vars (
    .clk(op_hcompute_corrected_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_2_write_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_exe_start_clk = clk;
assign op_hcompute_corrected_stencil_exe_start_in = op_hcompute_corrected_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_corrected_stencil_exe_start (
    .clk(op_hcompute_corrected_stencil_exe_start_clk),
    .in(op_hcompute_corrected_stencil_exe_start_in),
    .out(op_hcompute_corrected_stencil_exe_start_out)
);
assign op_hcompute_corrected_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_exe_start_control_vars_in[2] = op_hcompute_corrected_stencil_port_controller_d[2];
assign op_hcompute_corrected_stencil_exe_start_control_vars_in[1] = op_hcompute_corrected_stencil_port_controller_d[1];
assign op_hcompute_corrected_stencil_exe_start_control_vars_in[0] = op_hcompute_corrected_stencil_port_controller_d[0];
array_delay_U146 op_hcompute_corrected_stencil_exe_start_control_vars (
    .clk(op_hcompute_corrected_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_exe_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_exe_start_control_vars_out)
);
assign op_hcompute_corrected_stencil_port_controller_clk = clk;
affine_controller__U125 op_hcompute_corrected_stencil_port_controller (
    .clk(op_hcompute_corrected_stencil_port_controller_clk),
    .valid(op_hcompute_corrected_stencil_port_controller_valid),
    .d(op_hcompute_corrected_stencil_port_controller_d)
);
assign op_hcompute_corrected_stencil_read_start = op_hcompute_corrected_stencil_port_controller_valid;
assign op_hcompute_corrected_stencil_write_start = op_hcompute_corrected_stencil_exe_start_out;
assign op_hcompute_corrected_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_corrected_stencil_write_start_control_vars_in[2] = op_hcompute_corrected_stencil_port_controller_d[2];
assign op_hcompute_corrected_stencil_write_start_control_vars_in[1] = op_hcompute_corrected_stencil_port_controller_d[1];
assign op_hcompute_corrected_stencil_write_start_control_vars_in[0] = op_hcompute_corrected_stencil_port_controller_d[0];
array_delay_U142 op_hcompute_corrected_stencil_write_start_control_vars (
    .clk(op_hcompute_corrected_stencil_write_start_control_vars_clk),
    .in(op_hcompute_corrected_stencil_write_start_control_vars_in),
    .out(op_hcompute_corrected_stencil_write_start_control_vars_out)
);
assign op_hcompute_curved_stencil_clk = clk;
assign op_hcompute_curved_stencil_corrected_stencil_op_hcompute_curved_stencil_read[0] = corrected_stencil_op_hcompute_curved_stencil_read[0];
cu_op_hcompute_curved_stencil op_hcompute_curved_stencil (
    .clk(op_hcompute_curved_stencil_clk),
    .corrected_stencil_op_hcompute_curved_stencil_read(op_hcompute_curved_stencil_corrected_stencil_op_hcompute_curved_stencil_read),
    .curved_stencil_op_hcompute_curved_stencil_write(op_hcompute_curved_stencil_curved_stencil_op_hcompute_curved_stencil_write)
);
assign op_hcompute_curved_stencil_1_clk = clk;
assign op_hcompute_curved_stencil_1_corrected_stencil_op_hcompute_curved_stencil_1_read[0] = corrected_stencil_op_hcompute_curved_stencil_1_read[0];
cu_op_hcompute_curved_stencil_1 op_hcompute_curved_stencil_1 (
    .clk(op_hcompute_curved_stencil_1_clk),
    .corrected_stencil_op_hcompute_curved_stencil_1_read(op_hcompute_curved_stencil_1_corrected_stencil_op_hcompute_curved_stencil_1_read),
    .curved_stencil_op_hcompute_curved_stencil_1_write(op_hcompute_curved_stencil_1_curved_stencil_op_hcompute_curved_stencil_1_write)
);
assign op_hcompute_curved_stencil_1_U243_clk = clk;
assign op_hcompute_curved_stencil_1_U243_in = op_hcompute_curved_stencil_1_exe_start_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_1_U243 (
    .clk(op_hcompute_curved_stencil_1_U243_clk),
    .in(op_hcompute_curved_stencil_1_U243_in),
    .out(op_hcompute_curved_stencil_1_U243_out)
);
assign op_hcompute_curved_stencil_1_exe_start_clk = clk;
assign op_hcompute_curved_stencil_1_exe_start_in = op_hcompute_curved_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_1_exe_start (
    .clk(op_hcompute_curved_stencil_1_exe_start_clk),
    .in(op_hcompute_curved_stencil_1_exe_start_in),
    .out(op_hcompute_curved_stencil_1_exe_start_out)
);
assign op_hcompute_curved_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_1_exe_start_control_vars_in[2] = op_hcompute_curved_stencil_1_port_controller_d[2];
assign op_hcompute_curved_stencil_1_exe_start_control_vars_in[1] = op_hcompute_curved_stencil_1_port_controller_d[1];
assign op_hcompute_curved_stencil_1_exe_start_control_vars_in[0] = op_hcompute_curved_stencil_1_port_controller_d[0];
array_delay_U248 op_hcompute_curved_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_curved_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_curved_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_curved_stencil_1_port_controller_clk = clk;
affine_controller__U226 op_hcompute_curved_stencil_1_port_controller (
    .clk(op_hcompute_curved_stencil_1_port_controller_clk),
    .valid(op_hcompute_curved_stencil_1_port_controller_valid),
    .d(op_hcompute_curved_stencil_1_port_controller_d)
);
assign op_hcompute_curved_stencil_1_read_start = op_hcompute_curved_stencil_1_port_controller_valid;
assign op_hcompute_curved_stencil_1_write_start = op_hcompute_curved_stencil_1_U243_out;
assign op_hcompute_curved_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_1_write_start_control_vars_in[2] = op_hcompute_curved_stencil_1_port_controller_d[2];
assign op_hcompute_curved_stencil_1_write_start_control_vars_in[1] = op_hcompute_curved_stencil_1_port_controller_d[1];
assign op_hcompute_curved_stencil_1_write_start_control_vars_in[0] = op_hcompute_curved_stencil_1_port_controller_d[0];
array_delay_U244 op_hcompute_curved_stencil_1_write_start_control_vars (
    .clk(op_hcompute_curved_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_curved_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_curved_stencil_2_clk = clk;
assign op_hcompute_curved_stencil_2_corrected_stencil_op_hcompute_curved_stencil_2_read[0] = corrected_stencil_op_hcompute_curved_stencil_2_read[0];
cu_op_hcompute_curved_stencil_2 op_hcompute_curved_stencil_2 (
    .clk(op_hcompute_curved_stencil_2_clk),
    .corrected_stencil_op_hcompute_curved_stencil_2_read(op_hcompute_curved_stencil_2_corrected_stencil_op_hcompute_curved_stencil_2_read),
    .curved_stencil_op_hcompute_curved_stencil_2_write(op_hcompute_curved_stencil_2_curved_stencil_op_hcompute_curved_stencil_2_write)
);
assign op_hcompute_curved_stencil_2_U269_clk = clk;
assign op_hcompute_curved_stencil_2_U269_in = op_hcompute_curved_stencil_2_exe_start_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_2_U269 (
    .clk(op_hcompute_curved_stencil_2_U269_clk),
    .in(op_hcompute_curved_stencil_2_U269_in),
    .out(op_hcompute_curved_stencil_2_U269_out)
);
assign op_hcompute_curved_stencil_2_exe_start_clk = clk;
assign op_hcompute_curved_stencil_2_exe_start_in = op_hcompute_curved_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_2_exe_start (
    .clk(op_hcompute_curved_stencil_2_exe_start_clk),
    .in(op_hcompute_curved_stencil_2_exe_start_in),
    .out(op_hcompute_curved_stencil_2_exe_start_out)
);
assign op_hcompute_curved_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_2_exe_start_control_vars_in[2] = op_hcompute_curved_stencil_2_port_controller_d[2];
assign op_hcompute_curved_stencil_2_exe_start_control_vars_in[1] = op_hcompute_curved_stencil_2_port_controller_d[1];
assign op_hcompute_curved_stencil_2_exe_start_control_vars_in[0] = op_hcompute_curved_stencil_2_port_controller_d[0];
array_delay_U274 op_hcompute_curved_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_curved_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_curved_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_curved_stencil_2_port_controller_clk = clk;
affine_controller__U252 op_hcompute_curved_stencil_2_port_controller (
    .clk(op_hcompute_curved_stencil_2_port_controller_clk),
    .valid(op_hcompute_curved_stencil_2_port_controller_valid),
    .d(op_hcompute_curved_stencil_2_port_controller_d)
);
assign op_hcompute_curved_stencil_2_read_start = op_hcompute_curved_stencil_2_port_controller_valid;
assign op_hcompute_curved_stencil_2_write_start = op_hcompute_curved_stencil_2_U269_out;
assign op_hcompute_curved_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_2_write_start_control_vars_in[2] = op_hcompute_curved_stencil_2_port_controller_d[2];
assign op_hcompute_curved_stencil_2_write_start_control_vars_in[1] = op_hcompute_curved_stencil_2_port_controller_d[1];
assign op_hcompute_curved_stencil_2_write_start_control_vars_in[0] = op_hcompute_curved_stencil_2_port_controller_d[0];
array_delay_U270 op_hcompute_curved_stencil_2_write_start_control_vars (
    .clk(op_hcompute_curved_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_curved_stencil_2_write_start_control_vars_out)
);
assign op_hcompute_curved_stencil_U217_clk = clk;
assign op_hcompute_curved_stencil_U217_in = op_hcompute_curved_stencil_exe_start_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_U217 (
    .clk(op_hcompute_curved_stencil_U217_clk),
    .in(op_hcompute_curved_stencil_U217_in),
    .out(op_hcompute_curved_stencil_U217_out)
);
assign op_hcompute_curved_stencil_exe_start_clk = clk;
assign op_hcompute_curved_stencil_exe_start_in = op_hcompute_curved_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_curved_stencil_exe_start (
    .clk(op_hcompute_curved_stencil_exe_start_clk),
    .in(op_hcompute_curved_stencil_exe_start_in),
    .out(op_hcompute_curved_stencil_exe_start_out)
);
assign op_hcompute_curved_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_exe_start_control_vars_in[2] = op_hcompute_curved_stencil_port_controller_d[2];
assign op_hcompute_curved_stencil_exe_start_control_vars_in[1] = op_hcompute_curved_stencil_port_controller_d[1];
assign op_hcompute_curved_stencil_exe_start_control_vars_in[0] = op_hcompute_curved_stencil_port_controller_d[0];
array_delay_U222 op_hcompute_curved_stencil_exe_start_control_vars (
    .clk(op_hcompute_curved_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_exe_start_control_vars_in),
    .out(op_hcompute_curved_stencil_exe_start_control_vars_out)
);
assign op_hcompute_curved_stencil_port_controller_clk = clk;
affine_controller__U200 op_hcompute_curved_stencil_port_controller (
    .clk(op_hcompute_curved_stencil_port_controller_clk),
    .valid(op_hcompute_curved_stencil_port_controller_valid),
    .d(op_hcompute_curved_stencil_port_controller_d)
);
assign op_hcompute_curved_stencil_read_start = op_hcompute_curved_stencil_port_controller_valid;
assign op_hcompute_curved_stencil_write_start = op_hcompute_curved_stencil_U217_out;
assign op_hcompute_curved_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_curved_stencil_write_start_control_vars_in[2] = op_hcompute_curved_stencil_port_controller_d[2];
assign op_hcompute_curved_stencil_write_start_control_vars_in[1] = op_hcompute_curved_stencil_port_controller_d[1];
assign op_hcompute_curved_stencil_write_start_control_vars_in[0] = op_hcompute_curved_stencil_port_controller_d[0];
array_delay_U218 op_hcompute_curved_stencil_write_start_control_vars (
    .clk(op_hcompute_curved_stencil_write_start_control_vars_clk),
    .in(op_hcompute_curved_stencil_write_start_control_vars_in),
    .out(op_hcompute_curved_stencil_write_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_clk = clk;
assign op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_x = op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out[2];
assign op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_y = op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out[1];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[7];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[6];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[5];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[4];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[3];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[2];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[1];
assign op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read[0];
cu_op_hcompute_demosaicked_1_stencil op_hcompute_demosaicked_1_stencil (
    .clk(op_hcompute_demosaicked_1_stencil_clk),
    .demosaicked_1_s0_x(op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_x),
    .demosaicked_1_s0_y(op_hcompute_demosaicked_1_stencil_demosaicked_1_s0_y),
    .denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read(op_hcompute_demosaicked_1_stencil_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_read),
    .demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write(op_hcompute_demosaicked_1_stencil_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_write)
);
assign op_hcompute_demosaicked_1_stencil_1_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_x_1 = op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out[2];
assign op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_y_1 = op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out[1];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[4];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[3];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[2];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[1];
assign op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read[0];
cu_op_hcompute_demosaicked_1_stencil_1 op_hcompute_demosaicked_1_stencil_1 (
    .clk(op_hcompute_demosaicked_1_stencil_1_clk),
    .demosaicked_1_s0_x_1(op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_x_1),
    .demosaicked_1_s0_y_1(op_hcompute_demosaicked_1_stencil_1_demosaicked_1_s0_y_1),
    .denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read(op_hcompute_demosaicked_1_stencil_1_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_1_read),
    .demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write(op_hcompute_demosaicked_1_stencil_1_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_1_write)
);
assign op_hcompute_demosaicked_1_stencil_1_exe_start_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_exe_start_in = op_hcompute_demosaicked_1_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_demosaicked_1_stencil_1_exe_start (
    .clk(op_hcompute_demosaicked_1_stencil_1_exe_start_clk),
    .in(op_hcompute_demosaicked_1_stencil_1_exe_start_in),
    .out(op_hcompute_demosaicked_1_stencil_1_exe_start_out)
);
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[0];
array_delay_U96 op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_1_port_controller_clk = clk;
affine_controller__U75 op_hcompute_demosaicked_1_stencil_1_port_controller (
    .clk(op_hcompute_demosaicked_1_stencil_1_port_controller_clk),
    .valid(op_hcompute_demosaicked_1_stencil_1_port_controller_valid),
    .d(op_hcompute_demosaicked_1_stencil_1_port_controller_d)
);
assign op_hcompute_demosaicked_1_stencil_1_read_start = op_hcompute_demosaicked_1_stencil_1_port_controller_valid;
assign op_hcompute_demosaicked_1_stencil_1_write_start = op_hcompute_demosaicked_1_stencil_1_exe_start_out;
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_1_port_controller_d[0];
array_delay_U92 op_hcompute_demosaicked_1_stencil_1_write_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_2_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_x_2 = op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out[2];
assign op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_y_2 = op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out[1];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[7] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[7];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[6] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[6];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[5] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[5];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[4] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[4];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[3] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[3];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[2] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[2];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[1] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[1];
assign op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[0] = denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read[0];
cu_op_hcompute_demosaicked_1_stencil_2 op_hcompute_demosaicked_1_stencil_2 (
    .clk(op_hcompute_demosaicked_1_stencil_2_clk),
    .demosaicked_1_s0_x_2(op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_x_2),
    .demosaicked_1_s0_y_2(op_hcompute_demosaicked_1_stencil_2_demosaicked_1_s0_y_2),
    .denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read(op_hcompute_demosaicked_1_stencil_2_denoised_1_stencil_op_hcompute_demosaicked_1_stencil_2_read),
    .demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write(op_hcompute_demosaicked_1_stencil_2_demosaicked_1_stencil_op_hcompute_demosaicked_1_stencil_2_write)
);
assign op_hcompute_demosaicked_1_stencil_2_exe_start_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_exe_start_in = op_hcompute_demosaicked_1_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_demosaicked_1_stencil_2_exe_start (
    .clk(op_hcompute_demosaicked_1_stencil_2_exe_start_clk),
    .in(op_hcompute_demosaicked_1_stencil_2_exe_start_in),
    .out(op_hcompute_demosaicked_1_stencil_2_exe_start_out)
);
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[0];
array_delay_U121 op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_2_port_controller_clk = clk;
affine_controller__U100 op_hcompute_demosaicked_1_stencil_2_port_controller (
    .clk(op_hcompute_demosaicked_1_stencil_2_port_controller_clk),
    .valid(op_hcompute_demosaicked_1_stencil_2_port_controller_valid),
    .d(op_hcompute_demosaicked_1_stencil_2_port_controller_d)
);
assign op_hcompute_demosaicked_1_stencil_2_read_start = op_hcompute_demosaicked_1_stencil_2_port_controller_valid;
assign op_hcompute_demosaicked_1_stencil_2_write_start = op_hcompute_demosaicked_1_stencil_2_exe_start_out;
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_2_port_controller_d[0];
array_delay_U117 op_hcompute_demosaicked_1_stencil_2_write_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_2_write_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_exe_start_clk = clk;
assign op_hcompute_demosaicked_1_stencil_exe_start_in = op_hcompute_demosaicked_1_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_demosaicked_1_stencil_exe_start (
    .clk(op_hcompute_demosaicked_1_stencil_exe_start_clk),
    .in(op_hcompute_demosaicked_1_stencil_exe_start_in),
    .out(op_hcompute_demosaicked_1_stencil_exe_start_out)
);
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_port_controller_d[0];
array_delay_U71 op_hcompute_demosaicked_1_stencil_exe_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_exe_start_control_vars_out)
);
assign op_hcompute_demosaicked_1_stencil_port_controller_clk = clk;
affine_controller__U50 op_hcompute_demosaicked_1_stencil_port_controller (
    .clk(op_hcompute_demosaicked_1_stencil_port_controller_clk),
    .valid(op_hcompute_demosaicked_1_stencil_port_controller_valid),
    .d(op_hcompute_demosaicked_1_stencil_port_controller_d)
);
assign op_hcompute_demosaicked_1_stencil_read_start = op_hcompute_demosaicked_1_stencil_port_controller_valid;
assign op_hcompute_demosaicked_1_stencil_write_start = op_hcompute_demosaicked_1_stencil_exe_start_out;
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_in[2] = op_hcompute_demosaicked_1_stencil_port_controller_d[2];
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_in[1] = op_hcompute_demosaicked_1_stencil_port_controller_d[1];
assign op_hcompute_demosaicked_1_stencil_write_start_control_vars_in[0] = op_hcompute_demosaicked_1_stencil_port_controller_d[0];
array_delay_U67 op_hcompute_demosaicked_1_stencil_write_start_control_vars (
    .clk(op_hcompute_demosaicked_1_stencil_write_start_control_vars_clk),
    .in(op_hcompute_demosaicked_1_stencil_write_start_control_vars_in),
    .out(op_hcompute_demosaicked_1_stencil_write_start_control_vars_out)
);
assign op_hcompute_denoised_1_stencil_clk = clk;
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[4] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[4];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[3] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[3];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[2] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[2];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[1] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[1];
assign op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[0] = hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read[0];
cu_op_hcompute_denoised_1_stencil op_hcompute_denoised_1_stencil (
    .clk(op_hcompute_denoised_1_stencil_clk),
    .hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read(op_hcompute_denoised_1_stencil_hw_input_global_wrapper_stencil_op_hcompute_denoised_1_stencil_read),
    .denoised_1_stencil_op_hcompute_denoised_1_stencil_write(op_hcompute_denoised_1_stencil_denoised_1_stencil_op_hcompute_denoised_1_stencil_write)
);
assign op_hcompute_denoised_1_stencil_exe_start_clk = clk;
assign op_hcompute_denoised_1_stencil_exe_start_in = op_hcompute_denoised_1_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_denoised_1_stencil_exe_start (
    .clk(op_hcompute_denoised_1_stencil_exe_start_clk),
    .in(op_hcompute_denoised_1_stencil_exe_start_in),
    .out(op_hcompute_denoised_1_stencil_exe_start_out)
);
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_in[2] = op_hcompute_denoised_1_stencil_port_controller_d[2];
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_in[1] = op_hcompute_denoised_1_stencil_port_controller_d[1];
assign op_hcompute_denoised_1_stencil_exe_start_control_vars_in[0] = op_hcompute_denoised_1_stencil_port_controller_d[0];
array_delay_U46 op_hcompute_denoised_1_stencil_exe_start_control_vars (
    .clk(op_hcompute_denoised_1_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_denoised_1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_denoised_1_stencil_exe_start_control_vars_out)
);
assign op_hcompute_denoised_1_stencil_port_controller_clk = clk;
affine_controller__U25 op_hcompute_denoised_1_stencil_port_controller (
    .clk(op_hcompute_denoised_1_stencil_port_controller_clk),
    .valid(op_hcompute_denoised_1_stencil_port_controller_valid),
    .d(op_hcompute_denoised_1_stencil_port_controller_d)
);
assign op_hcompute_denoised_1_stencil_read_start = op_hcompute_denoised_1_stencil_port_controller_valid;
assign op_hcompute_denoised_1_stencil_write_start = op_hcompute_denoised_1_stencil_exe_start_out;
assign op_hcompute_denoised_1_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_denoised_1_stencil_write_start_control_vars_in[2] = op_hcompute_denoised_1_stencil_port_controller_d[2];
assign op_hcompute_denoised_1_stencil_write_start_control_vars_in[1] = op_hcompute_denoised_1_stencil_port_controller_d[1];
assign op_hcompute_denoised_1_stencil_write_start_control_vars_in[0] = op_hcompute_denoised_1_stencil_port_controller_d[0];
array_delay_U42 op_hcompute_denoised_1_stencil_write_start_control_vars (
    .clk(op_hcompute_denoised_1_stencil_write_start_control_vars_clk),
    .in(op_hcompute_denoised_1_stencil_write_start_control_vars_in),
    .out(op_hcompute_denoised_1_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U834_out;
cu_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_clk),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_in = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U21 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U17 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_curved_stencil_op_hcompute_hw_output_stencil_read[0] = curved_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .curved_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_curved_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write)
);
assign op_hcompute_hw_output_stencil_1_clk = clk;
assign op_hcompute_hw_output_stencil_1_curved_stencil_op_hcompute_hw_output_stencil_1_read[0] = curved_stencil_op_hcompute_hw_output_stencil_1_read[0];
cu_op_hcompute_hw_output_stencil_1 op_hcompute_hw_output_stencil_1 (
    .clk(op_hcompute_hw_output_stencil_1_clk),
    .curved_stencil_op_hcompute_hw_output_stencil_1_read(op_hcompute_hw_output_stencil_1_curved_stencil_op_hcompute_hw_output_stencil_1_read),
    .hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write(op_hcompute_hw_output_stencil_1_hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write)
);
assign op_hcompute_hw_output_stencil_1_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_1_exe_start_in = op_hcompute_hw_output_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_1_exe_start (
    .clk(op_hcompute_hw_output_stencil_1_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_1_exe_start_in),
    .out(op_hcompute_hw_output_stencil_1_exe_start_out)
);
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_1_port_controller_d[2];
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_1_port_controller_d[1];
assign op_hcompute_hw_output_stencil_1_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_1_port_controller_d[0];
array_delay_U324 op_hcompute_hw_output_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_1_port_controller_clk = clk;
affine_controller__U303 op_hcompute_hw_output_stencil_1_port_controller (
    .clk(op_hcompute_hw_output_stencil_1_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_1_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_1_port_controller_d)
);
assign op_hcompute_hw_output_stencil_1_read_start = op_hcompute_hw_output_stencil_1_port_controller_valid;
assign op_hcompute_hw_output_stencil_1_write_start = op_hcompute_hw_output_stencil_1_exe_start_out;
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_1_port_controller_d[2];
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_1_port_controller_d[1];
assign op_hcompute_hw_output_stencil_1_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_1_port_controller_d[0];
array_delay_U320 op_hcompute_hw_output_stencil_1_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_2_clk = clk;
assign op_hcompute_hw_output_stencil_2_curved_stencil_op_hcompute_hw_output_stencil_2_read[0] = curved_stencil_op_hcompute_hw_output_stencil_2_read[0];
cu_op_hcompute_hw_output_stencil_2 op_hcompute_hw_output_stencil_2 (
    .clk(op_hcompute_hw_output_stencil_2_clk),
    .curved_stencil_op_hcompute_hw_output_stencil_2_read(op_hcompute_hw_output_stencil_2_curved_stencil_op_hcompute_hw_output_stencil_2_read),
    .hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write(op_hcompute_hw_output_stencil_2_hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write)
);
assign op_hcompute_hw_output_stencil_2_exe_start_clk = clk;
assign op_hcompute_hw_output_stencil_2_exe_start_in = op_hcompute_hw_output_stencil_2_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_2_exe_start (
    .clk(op_hcompute_hw_output_stencil_2_exe_start_clk),
    .in(op_hcompute_hw_output_stencil_2_exe_start_in),
    .out(op_hcompute_hw_output_stencil_2_exe_start_out)
);
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_2_port_controller_d[2];
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_2_port_controller_d[1];
assign op_hcompute_hw_output_stencil_2_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_2_port_controller_d[0];
array_delay_U349 op_hcompute_hw_output_stencil_2_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_2_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_2_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_2_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_2_port_controller_clk = clk;
affine_controller__U328 op_hcompute_hw_output_stencil_2_port_controller (
    .clk(op_hcompute_hw_output_stencil_2_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_2_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_2_port_controller_d)
);
assign op_hcompute_hw_output_stencil_2_read_start = op_hcompute_hw_output_stencil_2_port_controller_valid;
assign op_hcompute_hw_output_stencil_2_write_start = op_hcompute_hw_output_stencil_2_exe_start_out;
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_2_port_controller_d[2];
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_2_port_controller_d[1];
assign op_hcompute_hw_output_stencil_2_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_2_port_controller_d[0];
array_delay_U345 op_hcompute_hw_output_stencil_2_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_2_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_2_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_2_write_start_control_vars_out)
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
array_delay_U299 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U278 op_hcompute_hw_output_stencil_port_controller (
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
array_delay_U295 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_clkwrk_write_duplicate0_op_hcompute_hw_output_stencil_write[0];
assign hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write_en = op_hcompute_hw_output_stencil_1_write_start;
assign hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write[0] = op_hcompute_hw_output_stencil_1_hw_output_stencil_clkwrk_write_duplicate1_op_hcompute_hw_output_stencil_1_write[0];
assign hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write_en = op_hcompute_hw_output_stencil_2_write_start;
assign hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write[0] = op_hcompute_hw_output_stencil_2_hw_output_stencil_clkwrk_write_duplicate2_op_hcompute_hw_output_stencil_2_write[0];
endmodule

