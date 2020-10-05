// Module `hw_input_global_wrapper_stencil_ub` defined externally
// Module `conv2_stencil_ub` defined externally
// Module `conv2_stencil_clkwrk_dsa1_ub` defined externally
// Module `conv1_stencil_ub` defined externally
// Module `conv1_stencil_clkwrk_dsa0_ub` defined externally
module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_conv2_stencil [0:0]
);
assign out_hw_output_stencil = in0_conv2_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_conv2_stencil [0:0];
assign inner_compute_in0_conv2_stencil[0] = conv2_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_conv2_stencil(inner_compute_in0_conv2_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
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
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(in),
    .out(out)
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
wire [15:0] enMux_out;
assign enMux_out = en ? in : out;
coreir_reg #(
    .clk_posedge(1'b1),
    .init(init),
    .width(16)
) reg0 (
    .clk(clk),
    .in(enMux_out),
    .out(out)
);
endmodule

module hcompute_conv2_stencil (
    output [15:0] out_conv2_stencil
);
assign out_conv2_stencil = 16'h0000;
endmodule

module cu_op_hcompute_conv2_stencil (
    input clk,
    output [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0]
);
wire [15:0] inner_compute_out_conv2_stencil;
hcompute_conv2_stencil inner_compute (
    .out_conv2_stencil(inner_compute_out_conv2_stencil)
);
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0] = inner_compute_out_conv2_stencil;
endmodule

module hcompute_conv1_stencil (
    output [15:0] out_conv1_stencil
);
assign out_conv1_stencil = 16'h0000;
endmodule

module cu_op_hcompute_conv1_stencil (
    input clk,
    output [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0]
);
wire [15:0] inner_compute_out_conv1_stencil;
hcompute_conv1_stencil inner_compute (
    .out_conv1_stencil(inner_compute_out_conv1_stencil)
);
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0] = inner_compute_out_conv1_stencil;
endmodule

module hcompute_conv2_stencil_1 (
    output [15:0] out_conv2_stencil,
    input [15:0] in0_conv1_stencil [8:0],
    input [15:0] in1_conv2_stencil [0:0]
);
assign out_conv2_stencil = 16'((16'(in0_conv1_stencil[1] * 16'h0021)) + (16'(in1_conv2_stencil[0] + (16'((16'((16'(in0_conv1_stencil[2] * 16'h0002)) + (16'(in0_conv1_stencil[3] + (16'((16'(in0_conv1_stencil[4] * 16'h0002)) + (16'((16'(in0_conv1_stencil[5] * 16'h0004)) + (16'((16'(in0_conv1_stencil[6] * 16'h0002)) + (16'(in0_conv1_stencil[7] + (16'(in0_conv1_stencil[8] + (16'(in0_conv1_stencil[0] * 16'h0002)))))))))))))))) * 16'h0021)))));
endmodule

module cu_op_hcompute_conv2_stencil_1 (
    input clk,
    input [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0],
    input [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0],
    output [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_conv2_stencil;
wire [15:0] inner_compute_in0_conv1_stencil [8:0];
assign inner_compute_in0_conv1_stencil[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign inner_compute_in0_conv1_stencil[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign inner_compute_in0_conv1_stencil[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign inner_compute_in0_conv1_stencil[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign inner_compute_in0_conv1_stencil[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign inner_compute_in0_conv1_stencil[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign inner_compute_in0_conv1_stencil[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign inner_compute_in0_conv1_stencil[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
wire [15:0] inner_compute_in1_conv2_stencil [0:0];
assign inner_compute_in1_conv2_stencil[0] = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0];
hcompute_conv2_stencil_1 inner_compute (
    .out_conv2_stencil(inner_compute_out_conv2_stencil),
    .in0_conv1_stencil(inner_compute_in0_conv1_stencil),
    .in1_conv2_stencil(inner_compute_in1_conv2_stencil)
);
assign conv2_stencil_op_hcompute_conv2_stencil_1_write[0] = inner_compute_out_conv2_stencil;
endmodule

module hcompute_conv1_stencil_1 (
    output [15:0] out_conv1_stencil,
    input [15:0] in0_conv1_stencil [0:0],
    input [15:0] in1_hw_input_global_wrapper_stencil [8:0]
);
assign out_conv1_stencil = 16'(in1_hw_input_global_wrapper_stencil[0] + (16'(in0_conv1_stencil[0] + (16'((16'(in1_hw_input_global_wrapper_stencil[1] * 16'h0002)) + (16'(in1_hw_input_global_wrapper_stencil[2] + (16'((16'(in1_hw_input_global_wrapper_stencil[3] * 16'h0002)) + (16'((16'(in1_hw_input_global_wrapper_stencil[4] * 16'h0004)) + (16'((16'(in1_hw_input_global_wrapper_stencil[5] * 16'h0002)) + (16'(in1_hw_input_global_wrapper_stencil[6] + (16'(in1_hw_input_global_wrapper_stencil[7] + (16'(in1_hw_input_global_wrapper_stencil[8] * 16'h0002)))))))))))))))))));
endmodule

module cu_op_hcompute_conv1_stencil_1 (
    input clk,
    input [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0],
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0],
    output [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_conv1_stencil;
wire [15:0] inner_compute_in0_conv1_stencil [0:0];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
wire [15:0] inner_compute_in1_hw_input_global_wrapper_stencil [8:0];
assign inner_compute_in1_hw_input_global_wrapper_stencil[8] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8];
assign inner_compute_in1_hw_input_global_wrapper_stencil[7] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7];
assign inner_compute_in1_hw_input_global_wrapper_stencil[6] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6];
assign inner_compute_in1_hw_input_global_wrapper_stencil[5] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5];
assign inner_compute_in1_hw_input_global_wrapper_stencil[4] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4];
assign inner_compute_in1_hw_input_global_wrapper_stencil[3] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3];
assign inner_compute_in1_hw_input_global_wrapper_stencil[2] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2];
assign inner_compute_in1_hw_input_global_wrapper_stencil[1] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1];
assign inner_compute_in1_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0];
hcompute_conv1_stencil_1 inner_compute (
    .out_conv1_stencil(inner_compute_out_conv1_stencil),
    .in0_conv1_stencil(inner_compute_in0_conv1_stencil),
    .in1_hw_input_global_wrapper_stencil(inner_compute_in1_hw_input_global_wrapper_stencil)
);
assign conv1_stencil_op_hcompute_conv1_stencil_1_write[0] = inner_compute_out_conv1_stencil;
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

module array_delay_U794 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U795_out;
wire [15:0] _U796_out;
wire [15:0] _U797_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U795 (
    .in(in[0]),
    .clk(clk),
    .out(_U795_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U796 (
    .in(in[1]),
    .clk(clk),
    .out(_U796_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U797 (
    .in(in[2]),
    .clk(clk),
    .out(_U797_out)
);
assign out[2] = _U797_out;
assign out[1] = _U796_out;
assign out[0] = _U795_out;
endmodule

module array_delay_U790 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U791_out;
wire [15:0] _U792_out;
wire [15:0] _U793_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U791 (
    .in(in[0]),
    .clk(clk),
    .out(_U791_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U792 (
    .in(in[1]),
    .clk(clk),
    .out(_U792_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U793 (
    .in(in[2]),
    .clk(clk),
    .out(_U793_out)
);
assign out[2] = _U793_out;
assign out[1] = _U792_out;
assign out[0] = _U791_out;
endmodule

module array_delay_U769 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U770_out;
wire [15:0] _U771_out;
wire [15:0] _U772_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U770 (
    .in(in[0]),
    .clk(clk),
    .out(_U770_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U771 (
    .in(in[1]),
    .clk(clk),
    .out(_U771_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U772 (
    .in(in[2]),
    .clk(clk),
    .out(_U772_out)
);
assign out[2] = _U772_out;
assign out[1] = _U771_out;
assign out[0] = _U770_out;
endmodule

module array_delay_U765 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U766_out;
wire [15:0] _U767_out;
wire [15:0] _U768_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U766 (
    .in(in[0]),
    .clk(clk),
    .out(_U766_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U767 (
    .in(in[1]),
    .clk(clk),
    .out(_U767_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U768 (
    .in(in[2]),
    .clk(clk),
    .out(_U768_out)
);
assign out[2] = _U768_out;
assign out[1] = _U767_out;
assign out[0] = _U766_out;
endmodule

module array_delay_U744 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U745_out;
wire [15:0] _U746_out;
wire [15:0] _U747_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U745 (
    .in(in[0]),
    .clk(clk),
    .out(_U745_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U746 (
    .in(in[1]),
    .clk(clk),
    .out(_U746_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U747 (
    .in(in[2]),
    .clk(clk),
    .out(_U747_out)
);
assign out[2] = _U747_out;
assign out[1] = _U746_out;
assign out[0] = _U745_out;
endmodule

module array_delay_U740 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U741_out;
wire [15:0] _U742_out;
wire [15:0] _U743_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U741 (
    .in(in[0]),
    .clk(clk),
    .out(_U741_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U742 (
    .in(in[1]),
    .clk(clk),
    .out(_U742_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U743 (
    .in(in[2]),
    .clk(clk),
    .out(_U743_out)
);
assign out[2] = _U743_out;
assign out[1] = _U742_out;
assign out[0] = _U741_out;
endmodule

module array_delay_U719 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U720_out;
wire [15:0] _U721_out;
wire [15:0] _U722_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U720 (
    .in(in[0]),
    .clk(clk),
    .out(_U720_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U721 (
    .in(in[1]),
    .clk(clk),
    .out(_U721_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U722 (
    .in(in[2]),
    .clk(clk),
    .out(_U722_out)
);
assign out[2] = _U722_out;
assign out[1] = _U721_out;
assign out[0] = _U720_out;
endmodule

module array_delay_U715 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U716_out;
wire [15:0] _U717_out;
wire [15:0] _U718_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U716 (
    .in(in[0]),
    .clk(clk),
    .out(_U716_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U717 (
    .in(in[1]),
    .clk(clk),
    .out(_U717_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U718 (
    .in(in[2]),
    .clk(clk),
    .out(_U718_out)
);
assign out[2] = _U718_out;
assign out[1] = _U717_out;
assign out[0] = _U716_out;
endmodule

module array_delay_U694 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U695_out;
wire [15:0] _U696_out;
wire [15:0] _U697_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U695 (
    .in(in[0]),
    .clk(clk),
    .out(_U695_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U696 (
    .in(in[1]),
    .clk(clk),
    .out(_U696_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U697 (
    .in(in[2]),
    .clk(clk),
    .out(_U697_out)
);
assign out[2] = _U697_out;
assign out[1] = _U696_out;
assign out[0] = _U695_out;
endmodule

module array_delay_U690 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U691_out;
wire [15:0] _U692_out;
wire [15:0] _U693_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U691 (
    .in(in[0]),
    .clk(clk),
    .out(_U691_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U692 (
    .in(in[1]),
    .clk(clk),
    .out(_U692_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U693 (
    .in(in[2]),
    .clk(clk),
    .out(_U693_out)
);
assign out[2] = _U693_out;
assign out[1] = _U692_out;
assign out[0] = _U691_out;
endmodule

module array_delay_U669 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U670_out;
wire [15:0] _U671_out;
wire [15:0] _U672_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U670 (
    .in(in[0]),
    .clk(clk),
    .out(_U670_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U671 (
    .in(in[1]),
    .clk(clk),
    .out(_U671_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U672 (
    .in(in[2]),
    .clk(clk),
    .out(_U672_out)
);
assign out[2] = _U672_out;
assign out[1] = _U671_out;
assign out[0] = _U670_out;
endmodule

module array_delay_U665 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U666_out;
wire [15:0] _U667_out;
wire [15:0] _U668_out;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U666 (
    .in(in[0]),
    .clk(clk),
    .out(_U666_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U667 (
    .in(in[1]),
    .clk(clk),
    .out(_U667_out)
);
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U668 (
    .in(in[2]),
    .clk(clk),
    .out(_U668_out)
);
assign out[2] = _U668_out;
assign out[1] = _U667_out;
assign out[0] = _U666_out;
endmodule

module aff__U91 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U90 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U91 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U774 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U773 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U774 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U749 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U748 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U749 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U73 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U72 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U73 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U724 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U723 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U724 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U699 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U698 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U699 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U674 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U673 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U674 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U649 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U648 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U649 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U631 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U630 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U631 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U613 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U612 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U613 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U595 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U594 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U595 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U577 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U576 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U577 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U559 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U558 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U559 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U55 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U54 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U55 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U541 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0115);
endmodule

module affine_controller__U540 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U541 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U523 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U522 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U523 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U505 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U504 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U505 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U487 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U486 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U487 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U469 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U468 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U469 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U451 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U450 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U451 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U433 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0111);
endmodule

module affine_controller__U432 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U433 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U415 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U414 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U415 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U397 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0111);
endmodule

module affine_controller__U396 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U397 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U379 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U378 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U379 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U37 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U36 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U37 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U361 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U360 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U361 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U343 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U342 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U343 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U325 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U324 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U325 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U306 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U307 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U289 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U288 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U289 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U271 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U270 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U271 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U252 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U253 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U235 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U234 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U235 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U217 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0088);
endmodule

module affine_controller__U216 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U217 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U199 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U198 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U199 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U19 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U18 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U19 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U181 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0088);
endmodule

module affine_controller__U180 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U181 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U163 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0087);
endmodule

module affine_controller__U162 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U163 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U145 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U144 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U145 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U127 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U126 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U127 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U109 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U108 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U109 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U0 (
    input clk,
    output valid,
    output [15:0] d [2:0]
);
wire [15:0] affine_func_out;
wire cmp_time_out;
wire [15:0] cycle_time_out;
wire [15:0] d_0_next_value_out;
wire [15:0] d_0_reg_out;
wire d_1_at_max_out;
wire [15:0] d_1_next_value_out;
wire [15:0] d_1_reg_out;
wire d_2_at_max_out;
wire [15:0] d_2_next_value_out;
wire [15:0] d_2_reg_out;
wire [15:0] inc_time_out;
wire [15:0] affine_func_d [2:0];
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U1 affine_func (
    .out(affine_func_out),
    .d(affine_func_d)
);
assign cmp_time_out = (16'(affine_func_out - cycle_time_out)) == 16'h0000;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) cycle_time (
    .in(inc_time_out),
    .clk(clk),
    .out(cycle_time_out)
);
assign d_0_next_value_out = (1'b1 & d_1_at_max_out) & d_2_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_0_reg (
    .in(d_0_next_value_out),
    .clk(clk),
    .out(d_0_reg_out),
    .en(cmp_time_out)
);
assign d_1_at_max_out = d_1_reg_out == 16'h003f;
assign d_1_next_value_out = 1'b1 & d_2_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_1_reg (
    .in(d_1_next_value_out),
    .clk(clk),
    .out(d_1_reg_out),
    .en(cmp_time_out)
);
assign d_2_at_max_out = d_2_reg_out == 16'h003f;
assign d_2_next_value_out = 1'b1 ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_2_reg (
    .in(d_2_next_value_out),
    .clk(clk),
    .out(d_2_reg_out),
    .en(cmp_time_out)
);
assign inc_time_out = 16'(cycle_time_out + 16'h0001);
assign valid = cmp_time_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module cascade (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] _U798_out;
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
wire [15:0] op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire op_hcompute_conv1_stencil_1_exe_start_out;
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U197_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U197_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U215_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U215_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U233_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U233_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U251_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U251_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U269_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U269_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U287_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U287_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U305_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U305_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U323_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U323_d [2:0];
wire op_hcompute_conv1_stencil_1_read_start;
wire op_hcompute_conv1_stencil_1_write_start;
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_exe_start_out;
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U125_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U143_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U161_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U179_d [2:0];
wire op_hcompute_conv1_stencil_read_start;
wire op_hcompute_conv1_stencil_write_start;
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire op_hcompute_conv2_stencil_1_exe_start_out;
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U413_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U413_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U431_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U449_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U449_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U467_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U467_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U485_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U485_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U503_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U503_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U521_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U521_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U539_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U539_d [2:0];
wire op_hcompute_conv2_stencil_1_read_start;
wire op_hcompute_conv2_stencil_1_write_start;
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_exe_start_out;
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U341_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U341_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U359_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U359_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U377_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U377_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U395_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U395_d [2:0];
wire op_hcompute_conv2_stencil_read_start;
wire op_hcompute_conv2_stencil_write_start;
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U557_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U557_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U575_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U593_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U593_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U611_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U611_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U629_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U629_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U647_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U647_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U798 (
    .in(hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0]),
    .clk(clk),
    .out(_U798_out)
);
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[2] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[2];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[1] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[1];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[0] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[0];
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write[0] = op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write[0];
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
conv1_stencil_ub conv1_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv1_stencil_1_write_wen(op_hcompute_conv1_stencil_1_write_start),
    .op_hcompute_conv1_stencil_1_write_ctrl_vars(conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars),
    .op_hcompute_conv1_stencil_1_write(conv1_stencil_op_hcompute_conv1_stencil_1_write),
    .op_hcompute_conv2_stencil_1_read_ren(op_hcompute_conv2_stencil_1_read_start),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv1_stencil_op_hcompute_conv2_stencil_1_read)
);
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars [2:0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[2] = op_hcompute_conv1_stencil_write_start_control_vars_out[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[1] = op_hcompute_conv1_stencil_write_start_control_vars_out[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[0] = op_hcompute_conv1_stencil_write_start_control_vars_out[0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0] = op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0];
conv1_stencil_clkwrk_dsa0_ub conv1_stencil_clkwrk_dsa0 (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(op_hcompute_conv1_stencil_1_read_start),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_conv1_stencil_write_wen(op_hcompute_conv1_stencil_write_start),
    .op_hcompute_conv1_stencil_write_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars),
    .op_hcompute_conv1_stencil_write(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[2] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[2];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[1] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[1];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[0] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[0];
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write[0] = op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write[0];
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
conv2_stencil_ub conv2_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv2_stencil_1_write_wen(op_hcompute_conv2_stencil_1_write_start),
    .op_hcompute_conv2_stencil_1_write_ctrl_vars(conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars),
    .op_hcompute_conv2_stencil_1_write(conv2_stencil_op_hcompute_conv2_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(op_hcompute_hw_output_stencil_read_start),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(conv2_stencil_op_hcompute_hw_output_stencil_read)
);
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars [2:0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[2] = op_hcompute_conv2_stencil_write_start_control_vars_out[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[1] = op_hcompute_conv2_stencil_write_start_control_vars_out[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[0] = op_hcompute_conv2_stencil_write_start_control_vars_out[0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0] = op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0];
conv2_stencil_clkwrk_dsa1_ub conv2_stencil_clkwrk_dsa1 (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv2_stencil_1_read_ren(op_hcompute_conv2_stencil_1_read_start),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .op_hcompute_conv2_stencil_write_wen(op_hcompute_conv2_stencil_write_start),
    .op_hcompute_conv2_stencil_write_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars),
    .op_hcompute_conv2_stencil_write(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(clk),
    .flush(flush),
    .rst_n(rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(op_hcompute_conv1_stencil_1_read_start),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(op_hcompute_hw_input_global_wrapper_stencil_write_start),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
cu_op_hcompute_conv1_stencil op_hcompute_conv1_stencil (
    .clk(clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write(op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
assign op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
wire [15:0] op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0];
cu_op_hcompute_conv1_stencil_1 op_hcompute_conv1_stencil_1 (
    .clk(clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .conv1_stencil_op_hcompute_conv1_stencil_1_write(op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_1_exe_start (
    .clk(clk),
    .in(op_hcompute_conv1_stencil_1_port_controller_valid),
    .out(op_hcompute_conv1_stencil_1_exe_start_out)
);
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_in [2:0];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U719 op_hcompute_conv1_stencil_1_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv1_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_exe_start_control_vars_out)
);
affine_controller__U698 op_hcompute_conv1_stencil_1_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_d)
);
affine_controller__U180 op_hcompute_conv1_stencil_1_port_controller_U197 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U197_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U197_d)
);
affine_controller__U198 op_hcompute_conv1_stencil_1_port_controller_U215 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U215_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U215_d)
);
affine_controller__U216 op_hcompute_conv1_stencil_1_port_controller_U233 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U233_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U233_d)
);
affine_controller__U234 op_hcompute_conv1_stencil_1_port_controller_U251 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U251_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U251_d)
);
affine_controller__U252 op_hcompute_conv1_stencil_1_port_controller_U269 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U269_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U269_d)
);
affine_controller__U270 op_hcompute_conv1_stencil_1_port_controller_U287 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U287_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U287_d)
);
affine_controller__U288 op_hcompute_conv1_stencil_1_port_controller_U305 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U305_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U305_d)
);
affine_controller__U306 op_hcompute_conv1_stencil_1_port_controller_U323 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U323_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U323_d)
);
assign op_hcompute_conv1_stencil_1_read_start = op_hcompute_conv1_stencil_1_port_controller_valid;
assign op_hcompute_conv1_stencil_1_write_start = op_hcompute_conv1_stencil_1_exe_start_out;
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_in [2:0];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U715 op_hcompute_conv1_stencil_1_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv1_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_write_start_control_vars_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_conv1_stencil_port_controller_valid),
    .out(op_hcompute_conv1_stencil_exe_start_out)
);
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U694 op_hcompute_conv1_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_exe_start_control_vars_out)
);
affine_controller__U673 op_hcompute_conv1_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_port_controller_valid),
    .d(op_hcompute_conv1_stencil_port_controller_d)
);
affine_controller__U108 op_hcompute_conv1_stencil_port_controller_U125 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U125_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U125_d)
);
affine_controller__U126 op_hcompute_conv1_stencil_port_controller_U143 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U143_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U143_d)
);
affine_controller__U144 op_hcompute_conv1_stencil_port_controller_U161 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U161_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U161_d)
);
affine_controller__U162 op_hcompute_conv1_stencil_port_controller_U179 (
    .clk(clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U179_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U179_d)
);
assign op_hcompute_conv1_stencil_read_start = op_hcompute_conv1_stencil_port_controller_valid;
assign op_hcompute_conv1_stencil_write_start = op_hcompute_conv1_stencil_exe_start_out;
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U690 op_hcompute_conv1_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv1_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_write_start_control_vars_out)
);
cu_op_hcompute_conv2_stencil op_hcompute_conv2_stencil (
    .clk(clk),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write(op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
wire [15:0] op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
assign op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0] = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0];
cu_op_hcompute_conv2_stencil_1 op_hcompute_conv2_stencil_1 (
    .clk(clk),
    .conv1_stencil_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_op_hcompute_conv2_stencil_1_write(op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_1_exe_start (
    .clk(clk),
    .in(op_hcompute_conv2_stencil_1_port_controller_valid),
    .out(op_hcompute_conv2_stencil_1_exe_start_out)
);
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_in [2:0];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U769 op_hcompute_conv2_stencil_1_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv2_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_exe_start_control_vars_out)
);
affine_controller__U748 op_hcompute_conv2_stencil_1_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_d)
);
affine_controller__U396 op_hcompute_conv2_stencil_1_port_controller_U413 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U413_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U413_d)
);
affine_controller__U414 op_hcompute_conv2_stencil_1_port_controller_U431 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U431_d)
);
affine_controller__U432 op_hcompute_conv2_stencil_1_port_controller_U449 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U449_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U449_d)
);
affine_controller__U450 op_hcompute_conv2_stencil_1_port_controller_U467 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U467_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U467_d)
);
affine_controller__U468 op_hcompute_conv2_stencil_1_port_controller_U485 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U485_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U485_d)
);
affine_controller__U486 op_hcompute_conv2_stencil_1_port_controller_U503 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U503_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U503_d)
);
affine_controller__U504 op_hcompute_conv2_stencil_1_port_controller_U521 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U521_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U521_d)
);
affine_controller__U522 op_hcompute_conv2_stencil_1_port_controller_U539 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U539_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U539_d)
);
assign op_hcompute_conv2_stencil_1_read_start = op_hcompute_conv2_stencil_1_port_controller_valid;
assign op_hcompute_conv2_stencil_1_write_start = op_hcompute_conv2_stencil_1_exe_start_out;
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_in [2:0];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U765 op_hcompute_conv2_stencil_1_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv2_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_write_start_control_vars_out)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_conv2_stencil_port_controller_valid),
    .out(op_hcompute_conv2_stencil_exe_start_out)
);
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U744 op_hcompute_conv2_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv2_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_exe_start_control_vars_out)
);
affine_controller__U723 op_hcompute_conv2_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_port_controller_valid),
    .d(op_hcompute_conv2_stencil_port_controller_d)
);
affine_controller__U324 op_hcompute_conv2_stencil_port_controller_U341 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U341_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U341_d)
);
affine_controller__U342 op_hcompute_conv2_stencil_port_controller_U359 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U359_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U359_d)
);
affine_controller__U360 op_hcompute_conv2_stencil_port_controller_U377 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U377_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U377_d)
);
affine_controller__U378 op_hcompute_conv2_stencil_port_controller_U395 (
    .clk(clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U395_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U395_d)
);
assign op_hcompute_conv2_stencil_read_start = op_hcompute_conv2_stencil_port_controller_valid;
assign op_hcompute_conv2_stencil_write_start = op_hcompute_conv2_stencil_exe_start_out;
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U740 op_hcompute_conv2_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_conv2_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0];
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U798_out;
cu_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil (
    .clk(clk),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U669 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
affine_controller__U648 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
affine_controller__U90 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107 (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d)
);
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17 (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d)
);
affine_controller__U18 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35 (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d)
);
affine_controller__U36 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53 (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d)
);
affine_controller__U54 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71 (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d)
);
affine_controller__U72 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89 (
    .clk(clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U665 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
wire [15:0] op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
assign op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read[0] = conv2_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(clk),
    .conv2_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read),
    .hw_output_stencil_op_hcompute_hw_output_stencil_write(op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write)
);
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_output_stencil_exe_start (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_port_controller_valid),
    .out(op_hcompute_hw_output_stencil_exe_start_out)
);
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U794 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
affine_controller__U773 op_hcompute_hw_output_stencil_port_controller (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
affine_controller__U540 op_hcompute_hw_output_stencil_port_controller_U557 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U557_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U557_d)
);
affine_controller__U558 op_hcompute_hw_output_stencil_port_controller_U575 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U575_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U575_d)
);
affine_controller__U576 op_hcompute_hw_output_stencil_port_controller_U593 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U593_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U593_d)
);
affine_controller__U594 op_hcompute_hw_output_stencil_port_controller_U611 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U611_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U611_d)
);
affine_controller__U612 op_hcompute_hw_output_stencil_port_controller_U629 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U629_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U629_d)
);
affine_controller__U630 op_hcompute_hw_output_stencil_port_controller_U647 (
    .clk(clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U647_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U647_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U790 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

