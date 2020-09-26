// Module `hw_input_global_wrapper_stencil_ub` defined externally
// Module `conv2_stencil_ub` defined externally
// Module `conv2_stencil_clkwrk_dsa1_ub` defined externally
// Module `conv1_stencil_ub` defined externally
// Module `conv1_stencil_clkwrk_dsa0_ub` defined externally
module op_hcompute_hw_output_stencil_write_start_pt__U831 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U665 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv2_stencil_write_start_pt__U755 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv2_stencil_1_write_start_pt__U793 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv1_stencil_write_start_pt__U691 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_conv1_stencil_1_write_start_pt__U729 (
    input in,
    output out
);
assign out = in;
endmodule

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
wire [15:0] inner_compute_in1_conv2_stencil [0:0];
assign inner_compute_in0_conv1_stencil[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign inner_compute_in0_conv1_stencil[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign inner_compute_in0_conv1_stencil[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign inner_compute_in0_conv1_stencil[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign inner_compute_in0_conv1_stencil[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign inner_compute_in0_conv1_stencil[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign inner_compute_in0_conv1_stencil[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign inner_compute_in0_conv1_stencil[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
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
wire [15:0] inner_compute_in1_hw_input_global_wrapper_stencil [8:0];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
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

module array_delay_U836 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U837_in;
wire _U837_clk;
wire [15:0] _U837_out;
wire [15:0] _U838_in;
wire _U838_clk;
wire [15:0] _U838_out;
wire [15:0] _U839_in;
wire _U839_clk;
wire [15:0] _U839_out;
assign _U837_in = in[0];
assign _U837_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U837 (
    .in(_U837_in),
    .clk(_U837_clk),
    .out(_U837_out)
);
assign _U838_in = in[1];
assign _U838_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U838 (
    .in(_U838_in),
    .clk(_U838_clk),
    .out(_U838_out)
);
assign _U839_in = in[2];
assign _U839_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U839 (
    .in(_U839_in),
    .clk(_U839_clk),
    .out(_U839_out)
);
assign out[2] = _U839_out;
assign out[1] = _U838_out;
assign out[0] = _U837_out;
endmodule

module array_delay_U832 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U833_in;
wire _U833_clk;
wire [15:0] _U833_out;
wire [15:0] _U834_in;
wire _U834_clk;
wire [15:0] _U834_out;
wire [15:0] _U835_in;
wire _U835_clk;
wire [15:0] _U835_out;
assign _U833_in = in[0];
assign _U833_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U833 (
    .in(_U833_in),
    .clk(_U833_clk),
    .out(_U833_out)
);
assign _U834_in = in[1];
assign _U834_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U834 (
    .in(_U834_in),
    .clk(_U834_clk),
    .out(_U834_out)
);
assign _U835_in = in[2];
assign _U835_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U835 (
    .in(_U835_in),
    .clk(_U835_clk),
    .out(_U835_out)
);
assign out[2] = _U835_out;
assign out[1] = _U834_out;
assign out[0] = _U833_out;
endmodule

module array_delay_U827 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U828_in;
wire _U828_clk;
wire [15:0] _U828_out;
wire [15:0] _U829_in;
wire _U829_clk;
wire [15:0] _U829_out;
wire [15:0] _U830_in;
wire _U830_clk;
wire [15:0] _U830_out;
assign _U828_in = in[0];
assign _U828_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U828 (
    .in(_U828_in),
    .clk(_U828_clk),
    .out(_U828_out)
);
assign _U829_in = in[1];
assign _U829_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U829 (
    .in(_U829_in),
    .clk(_U829_clk),
    .out(_U829_out)
);
assign _U830_in = in[2];
assign _U830_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U830 (
    .in(_U830_in),
    .clk(_U830_clk),
    .out(_U830_out)
);
assign out[2] = _U830_out;
assign out[1] = _U829_out;
assign out[0] = _U828_out;
endmodule

module array_delay_U821 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U822_in;
wire _U822_clk;
wire [15:0] _U822_out;
wire [15:0] _U823_in;
wire _U823_clk;
wire [15:0] _U823_out;
wire [15:0] _U824_in;
wire _U824_clk;
wire [15:0] _U824_out;
assign _U822_in = in[0];
assign _U822_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U822 (
    .in(_U822_in),
    .clk(_U822_clk),
    .out(_U822_out)
);
assign _U823_in = in[1];
assign _U823_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U823 (
    .in(_U823_in),
    .clk(_U823_clk),
    .out(_U823_out)
);
assign _U824_in = in[2];
assign _U824_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U824 (
    .in(_U824_in),
    .clk(_U824_clk),
    .out(_U824_out)
);
assign out[2] = _U824_out;
assign out[1] = _U823_out;
assign out[0] = _U822_out;
endmodule

module array_delay_U798 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U799_in;
wire _U799_clk;
wire [15:0] _U799_out;
wire [15:0] _U800_in;
wire _U800_clk;
wire [15:0] _U800_out;
wire [15:0] _U801_in;
wire _U801_clk;
wire [15:0] _U801_out;
assign _U799_in = in[0];
assign _U799_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U799 (
    .in(_U799_in),
    .clk(_U799_clk),
    .out(_U799_out)
);
assign _U800_in = in[1];
assign _U800_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U800 (
    .in(_U800_in),
    .clk(_U800_clk),
    .out(_U800_out)
);
assign _U801_in = in[2];
assign _U801_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U801 (
    .in(_U801_in),
    .clk(_U801_clk),
    .out(_U801_out)
);
assign out[2] = _U801_out;
assign out[1] = _U800_out;
assign out[0] = _U799_out;
endmodule

module array_delay_U794 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U795_in;
wire _U795_clk;
wire [15:0] _U795_out;
wire [15:0] _U796_in;
wire _U796_clk;
wire [15:0] _U796_out;
wire [15:0] _U797_in;
wire _U797_clk;
wire [15:0] _U797_out;
assign _U795_in = in[0];
assign _U795_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U795 (
    .in(_U795_in),
    .clk(_U795_clk),
    .out(_U795_out)
);
assign _U796_in = in[1];
assign _U796_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U796 (
    .in(_U796_in),
    .clk(_U796_clk),
    .out(_U796_out)
);
assign _U797_in = in[2];
assign _U797_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U797 (
    .in(_U797_in),
    .clk(_U797_clk),
    .out(_U797_out)
);
assign out[2] = _U797_out;
assign out[1] = _U796_out;
assign out[0] = _U795_out;
endmodule

module array_delay_U789 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U790_in;
wire _U790_clk;
wire [15:0] _U790_out;
wire [15:0] _U791_in;
wire _U791_clk;
wire [15:0] _U791_out;
wire [15:0] _U792_in;
wire _U792_clk;
wire [15:0] _U792_out;
assign _U790_in = in[0];
assign _U790_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U790 (
    .in(_U790_in),
    .clk(_U790_clk),
    .out(_U790_out)
);
assign _U791_in = in[1];
assign _U791_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U791 (
    .in(_U791_in),
    .clk(_U791_clk),
    .out(_U791_out)
);
assign _U792_in = in[2];
assign _U792_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U792 (
    .in(_U792_in),
    .clk(_U792_clk),
    .out(_U792_out)
);
assign out[2] = _U792_out;
assign out[1] = _U791_out;
assign out[0] = _U790_out;
endmodule

module array_delay_U783 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U784_in;
wire _U784_clk;
wire [15:0] _U784_out;
wire [15:0] _U785_in;
wire _U785_clk;
wire [15:0] _U785_out;
wire [15:0] _U786_in;
wire _U786_clk;
wire [15:0] _U786_out;
assign _U784_in = in[0];
assign _U784_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U784 (
    .in(_U784_in),
    .clk(_U784_clk),
    .out(_U784_out)
);
assign _U785_in = in[1];
assign _U785_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U785 (
    .in(_U785_in),
    .clk(_U785_clk),
    .out(_U785_out)
);
assign _U786_in = in[2];
assign _U786_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U786 (
    .in(_U786_in),
    .clk(_U786_clk),
    .out(_U786_out)
);
assign out[2] = _U786_out;
assign out[1] = _U785_out;
assign out[0] = _U784_out;
endmodule

module array_delay_U760 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U761_in;
wire _U761_clk;
wire [15:0] _U761_out;
wire [15:0] _U762_in;
wire _U762_clk;
wire [15:0] _U762_out;
wire [15:0] _U763_in;
wire _U763_clk;
wire [15:0] _U763_out;
assign _U761_in = in[0];
assign _U761_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U761 (
    .in(_U761_in),
    .clk(_U761_clk),
    .out(_U761_out)
);
assign _U762_in = in[1];
assign _U762_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U762 (
    .in(_U762_in),
    .clk(_U762_clk),
    .out(_U762_out)
);
assign _U763_in = in[2];
assign _U763_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U763 (
    .in(_U763_in),
    .clk(_U763_clk),
    .out(_U763_out)
);
assign out[2] = _U763_out;
assign out[1] = _U762_out;
assign out[0] = _U761_out;
endmodule

module array_delay_U756 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U757_in;
wire _U757_clk;
wire [15:0] _U757_out;
wire [15:0] _U758_in;
wire _U758_clk;
wire [15:0] _U758_out;
wire [15:0] _U759_in;
wire _U759_clk;
wire [15:0] _U759_out;
assign _U757_in = in[0];
assign _U757_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U757 (
    .in(_U757_in),
    .clk(_U757_clk),
    .out(_U757_out)
);
assign _U758_in = in[1];
assign _U758_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U758 (
    .in(_U758_in),
    .clk(_U758_clk),
    .out(_U758_out)
);
assign _U759_in = in[2];
assign _U759_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U759 (
    .in(_U759_in),
    .clk(_U759_clk),
    .out(_U759_out)
);
assign out[2] = _U759_out;
assign out[1] = _U758_out;
assign out[0] = _U757_out;
endmodule

module array_delay_U734 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U735_in;
wire _U735_clk;
wire [15:0] _U735_out;
wire [15:0] _U736_in;
wire _U736_clk;
wire [15:0] _U736_out;
wire [15:0] _U737_in;
wire _U737_clk;
wire [15:0] _U737_out;
assign _U735_in = in[0];
assign _U735_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U735 (
    .in(_U735_in),
    .clk(_U735_clk),
    .out(_U735_out)
);
assign _U736_in = in[1];
assign _U736_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U736 (
    .in(_U736_in),
    .clk(_U736_clk),
    .out(_U736_out)
);
assign _U737_in = in[2];
assign _U737_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U737 (
    .in(_U737_in),
    .clk(_U737_clk),
    .out(_U737_out)
);
assign out[2] = _U737_out;
assign out[1] = _U736_out;
assign out[0] = _U735_out;
endmodule

module array_delay_U730 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U731_in;
wire _U731_clk;
wire [15:0] _U731_out;
wire [15:0] _U732_in;
wire _U732_clk;
wire [15:0] _U732_out;
wire [15:0] _U733_in;
wire _U733_clk;
wire [15:0] _U733_out;
assign _U731_in = in[0];
assign _U731_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U731 (
    .in(_U731_in),
    .clk(_U731_clk),
    .out(_U731_out)
);
assign _U732_in = in[1];
assign _U732_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U732 (
    .in(_U732_in),
    .clk(_U732_clk),
    .out(_U732_out)
);
assign _U733_in = in[2];
assign _U733_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U733 (
    .in(_U733_in),
    .clk(_U733_clk),
    .out(_U733_out)
);
assign out[2] = _U733_out;
assign out[1] = _U732_out;
assign out[0] = _U731_out;
endmodule

module array_delay_U725 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U726_in;
wire _U726_clk;
wire [15:0] _U726_out;
wire [15:0] _U727_in;
wire _U727_clk;
wire [15:0] _U727_out;
wire [15:0] _U728_in;
wire _U728_clk;
wire [15:0] _U728_out;
assign _U726_in = in[0];
assign _U726_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U726 (
    .in(_U726_in),
    .clk(_U726_clk),
    .out(_U726_out)
);
assign _U727_in = in[1];
assign _U727_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U727 (
    .in(_U727_in),
    .clk(_U727_clk),
    .out(_U727_out)
);
assign _U728_in = in[2];
assign _U728_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U728 (
    .in(_U728_in),
    .clk(_U728_clk),
    .out(_U728_out)
);
assign out[2] = _U728_out;
assign out[1] = _U727_out;
assign out[0] = _U726_out;
endmodule

module array_delay_U719 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U720_in;
wire _U720_clk;
wire [15:0] _U720_out;
wire [15:0] _U721_in;
wire _U721_clk;
wire [15:0] _U721_out;
wire [15:0] _U722_in;
wire _U722_clk;
wire [15:0] _U722_out;
assign _U720_in = in[0];
assign _U720_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U720 (
    .in(_U720_in),
    .clk(_U720_clk),
    .out(_U720_out)
);
assign _U721_in = in[1];
assign _U721_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U721 (
    .in(_U721_in),
    .clk(_U721_clk),
    .out(_U721_out)
);
assign _U722_in = in[2];
assign _U722_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U722 (
    .in(_U722_in),
    .clk(_U722_clk),
    .out(_U722_out)
);
assign out[2] = _U722_out;
assign out[1] = _U721_out;
assign out[0] = _U720_out;
endmodule

module array_delay_U696 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U697_in;
wire _U697_clk;
wire [15:0] _U697_out;
wire [15:0] _U698_in;
wire _U698_clk;
wire [15:0] _U698_out;
wire [15:0] _U699_in;
wire _U699_clk;
wire [15:0] _U699_out;
assign _U697_in = in[0];
assign _U697_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U697 (
    .in(_U697_in),
    .clk(_U697_clk),
    .out(_U697_out)
);
assign _U698_in = in[1];
assign _U698_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U698 (
    .in(_U698_in),
    .clk(_U698_clk),
    .out(_U698_out)
);
assign _U699_in = in[2];
assign _U699_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U699 (
    .in(_U699_in),
    .clk(_U699_clk),
    .out(_U699_out)
);
assign out[2] = _U699_out;
assign out[1] = _U698_out;
assign out[0] = _U697_out;
endmodule

module array_delay_U692 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U693_in;
wire _U693_clk;
wire [15:0] _U693_out;
wire [15:0] _U694_in;
wire _U694_clk;
wire [15:0] _U694_out;
wire [15:0] _U695_in;
wire _U695_clk;
wire [15:0] _U695_out;
assign _U693_in = in[0];
assign _U693_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U693 (
    .in(_U693_in),
    .clk(_U693_clk),
    .out(_U693_out)
);
assign _U694_in = in[1];
assign _U694_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U694 (
    .in(_U694_in),
    .clk(_U694_clk),
    .out(_U694_out)
);
assign _U695_in = in[2];
assign _U695_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U695 (
    .in(_U695_in),
    .clk(_U695_clk),
    .out(_U695_out)
);
assign out[2] = _U695_out;
assign out[1] = _U694_out;
assign out[0] = _U693_out;
endmodule

module array_delay_U670 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U671_in;
wire _U671_clk;
wire [15:0] _U671_out;
wire [15:0] _U672_in;
wire _U672_clk;
wire [15:0] _U672_out;
wire [15:0] _U673_in;
wire _U673_clk;
wire [15:0] _U673_out;
assign _U671_in = in[0];
assign _U671_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U671 (
    .in(_U671_in),
    .clk(_U671_clk),
    .out(_U671_out)
);
assign _U672_in = in[1];
assign _U672_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U672 (
    .in(_U672_in),
    .clk(_U672_clk),
    .out(_U672_out)
);
assign _U673_in = in[2];
assign _U673_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U673 (
    .in(_U673_in),
    .clk(_U673_clk),
    .out(_U673_out)
);
assign out[2] = _U673_out;
assign out[1] = _U672_out;
assign out[0] = _U671_out;
endmodule

module array_delay_U666 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U667_in;
wire _U667_clk;
wire [15:0] _U667_out;
wire [15:0] _U668_in;
wire _U668_clk;
wire [15:0] _U668_out;
wire [15:0] _U669_in;
wire _U669_clk;
wire [15:0] _U669_out;
assign _U667_in = in[0];
assign _U667_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U667 (
    .in(_U667_in),
    .clk(_U667_clk),
    .out(_U667_out)
);
assign _U668_in = in[1];
assign _U668_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U668 (
    .in(_U668_in),
    .clk(_U668_clk),
    .out(_U668_out)
);
assign _U669_in = in[2];
assign _U669_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U669 (
    .in(_U669_in),
    .clk(_U669_clk),
    .out(_U669_out)
);
assign out[2] = _U669_out;
assign out[1] = _U668_out;
assign out[0] = _U667_out;
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
aff__U91 affine_func (
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

module aff__U803 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U802 (
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

module aff__U765 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U764 (
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
aff__U765 affine_func (
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

module aff__U739 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U738 (
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
aff__U739 affine_func (
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
aff__U73 affine_func (
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

module aff__U701 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U700 (
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
aff__U701 affine_func (
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

module aff__U675 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U674 (
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
aff__U675 affine_func (
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
aff__U649 affine_func (
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
aff__U631 affine_func (
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
aff__U613 affine_func (
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
aff__U595 affine_func (
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
aff__U577 affine_func (
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
aff__U559 affine_func (
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
aff__U55 affine_func (
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
aff__U541 affine_func (
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
aff__U523 affine_func (
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
aff__U505 affine_func (
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
aff__U487 affine_func (
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
aff__U451 affine_func (
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
aff__U433 affine_func (
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
aff__U415 affine_func (
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
aff__U397 affine_func (
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
aff__U379 affine_func (
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
aff__U37 affine_func (
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
aff__U361 affine_func (
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
aff__U343 affine_func (
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
aff__U325 affine_func (
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
aff__U307 affine_func (
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
aff__U289 affine_func (
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
aff__U271 affine_func (
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
aff__U235 affine_func (
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
aff__U217 affine_func (
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
aff__U199 affine_func (
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
aff__U19 affine_func (
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
aff__U181 affine_func (
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
aff__U163 affine_func (
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
aff__U145 affine_func (
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
aff__U127 affine_func (
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
aff__U109 affine_func (
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

module cascade (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] _U840_in;
wire _U840_clk;
wire [15:0] _U840_out;
wire arr__U718_clk;
wire [15:0] arr__U718_in [2:0];
wire [15:0] arr__U718_out [2:0];
wire arr__U724_clk;
wire [15:0] arr__U724_in [2:0];
wire [15:0] arr__U724_out [2:0];
wire arr__U782_clk;
wire [15:0] arr__U782_in [2:0];
wire [15:0] arr__U782_out [2:0];
wire arr__U788_clk;
wire [15:0] arr__U788_in [2:0];
wire [15:0] arr__U788_out [2:0];
wire arr__U820_clk;
wire [15:0] arr__U820_in [2:0];
wire [15:0] arr__U820_out [2:0];
wire arr__U826_clk;
wire [15:0] arr__U826_in [2:0];
wire [15:0] arr__U826_out [2:0];
wire conv1_stencil_clk;
wire conv1_stencil_flush;
wire conv1_stencil_rst_n;
wire conv1_stencil_op_hcompute_conv1_stencil_1_write_wen;
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire conv1_stencil_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire conv1_stencil_clkwrk_dsa0_clk;
wire conv1_stencil_clkwrk_dsa0_flush;
wire conv1_stencil_clkwrk_dsa0_rst_n;
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire conv2_stencil_clk;
wire conv2_stencil_flush;
wire conv2_stencil_rst_n;
wire conv2_stencil_op_hcompute_conv2_stencil_1_write_wen;
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire conv2_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire conv2_stencil_clkwrk_dsa1_clk;
wire conv2_stencil_clkwrk_dsa1_flush;
wire conv2_stencil_clkwrk_dsa1_rst_n;
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire delay_reg__U717_clk;
wire delay_reg__U717_in;
wire delay_reg__U717_out;
wire delay_reg__U723_clk;
wire delay_reg__U723_in;
wire delay_reg__U723_out;
wire delay_reg__U781_clk;
wire delay_reg__U781_in;
wire delay_reg__U781_out;
wire delay_reg__U787_clk;
wire delay_reg__U787_in;
wire delay_reg__U787_out;
wire delay_reg__U819_clk;
wire delay_reg__U819_in;
wire delay_reg__U819_out;
wire delay_reg__U825_clk;
wire delay_reg__U825_in;
wire delay_reg__U825_out;
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_flush;
wire hw_input_global_wrapper_stencil_rst_n;
wire hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_conv1_stencil_clk;
wire [15:0] op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire op_hcompute_conv1_stencil_1_clk;
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire [15:0] op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire op_hcompute_conv1_stencil_1_exe_start_clk;
wire op_hcompute_conv1_stencil_1_exe_start_in;
wire op_hcompute_conv1_stencil_1_exe_start_out;
wire op_hcompute_conv1_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_clk;
wire op_hcompute_conv1_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U197_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U197_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U197_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U215_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U215_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U215_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U233_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U233_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U233_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U251_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U251_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U251_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U269_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U269_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U269_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U287_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U287_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U287_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U305_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U305_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U305_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U323_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U323_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U323_d [2:0];
wire op_hcompute_conv1_stencil_1_read_start;
wire op_hcompute_conv1_stencil_1_write_start_in;
wire op_hcompute_conv1_stencil_1_write_start_out;
wire op_hcompute_conv1_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_exe_start_clk;
wire op_hcompute_conv1_stencil_exe_start_in;
wire op_hcompute_conv1_stencil_exe_start_out;
wire op_hcompute_conv1_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_port_controller_clk;
wire op_hcompute_conv1_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U125_clk;
wire op_hcompute_conv1_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U125_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U143_clk;
wire op_hcompute_conv1_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U143_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U161_clk;
wire op_hcompute_conv1_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U161_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U179_clk;
wire op_hcompute_conv1_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U179_d [2:0];
wire op_hcompute_conv1_stencil_read_start;
wire op_hcompute_conv1_stencil_write_start_in;
wire op_hcompute_conv1_stencil_write_start_out;
wire op_hcompute_conv1_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_clk;
wire [15:0] op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire op_hcompute_conv2_stencil_1_clk;
wire [15:0] op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire op_hcompute_conv2_stencil_1_exe_start_clk;
wire op_hcompute_conv2_stencil_1_exe_start_in;
wire op_hcompute_conv2_stencil_1_exe_start_out;
wire op_hcompute_conv2_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_clk;
wire op_hcompute_conv2_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U413_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U413_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U413_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U431_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U431_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U449_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U449_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U449_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U467_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U467_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U467_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U485_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U485_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U485_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U503_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U503_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U503_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U521_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U521_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U521_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U539_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U539_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U539_d [2:0];
wire op_hcompute_conv2_stencil_1_read_start;
wire op_hcompute_conv2_stencil_1_write_start_in;
wire op_hcompute_conv2_stencil_1_write_start_out;
wire op_hcompute_conv2_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_exe_start_clk;
wire op_hcompute_conv2_stencil_exe_start_in;
wire op_hcompute_conv2_stencil_exe_start_out;
wire op_hcompute_conv2_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_port_controller_clk;
wire op_hcompute_conv2_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U341_clk;
wire op_hcompute_conv2_stencil_port_controller_U341_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U341_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U359_clk;
wire op_hcompute_conv2_stencil_port_controller_U359_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U359_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U377_clk;
wire op_hcompute_conv2_stencil_port_controller_U377_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U377_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U395_clk;
wire op_hcompute_conv2_stencil_port_controller_U395_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U395_d [2:0];
wire op_hcompute_conv2_stencil_read_start;
wire op_hcompute_conv2_stencil_write_start_in;
wire op_hcompute_conv2_stencil_write_start_out;
wire op_hcompute_conv2_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_out [2:0];
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
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_out;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
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
wire op_hcompute_hw_output_stencil_port_controller_U557_clk;
wire op_hcompute_hw_output_stencil_port_controller_U557_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U557_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U575_clk;
wire op_hcompute_hw_output_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U575_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U593_clk;
wire op_hcompute_hw_output_stencil_port_controller_U593_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U593_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U611_clk;
wire op_hcompute_hw_output_stencil_port_controller_U611_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U611_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U629_clk;
wire op_hcompute_hw_output_stencil_port_controller_U629_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U629_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U647_clk;
wire op_hcompute_hw_output_stencil_port_controller_U647_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U647_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start_in;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
assign _U840_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U840_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U840 (
    .in(_U840_in),
    .clk(_U840_clk),
    .out(_U840_out)
);
assign arr__U718_clk = clk;
assign arr__U718_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign arr__U718_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign arr__U718_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U719 arr__U718 (
    .clk(arr__U718_clk),
    .in(arr__U718_in),
    .out(arr__U718_out)
);
assign arr__U724_clk = clk;
assign arr__U724_in[2] = arr__U718_out[2];
assign arr__U724_in[1] = arr__U718_out[1];
assign arr__U724_in[0] = arr__U718_out[0];
array_delay_U725 arr__U724 (
    .clk(arr__U724_clk),
    .in(arr__U724_in),
    .out(arr__U724_out)
);
assign arr__U782_clk = clk;
assign arr__U782_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign arr__U782_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign arr__U782_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U783 arr__U782 (
    .clk(arr__U782_clk),
    .in(arr__U782_in),
    .out(arr__U782_out)
);
assign arr__U788_clk = clk;
assign arr__U788_in[2] = arr__U782_out[2];
assign arr__U788_in[1] = arr__U782_out[1];
assign arr__U788_in[0] = arr__U782_out[0];
array_delay_U789 arr__U788 (
    .clk(arr__U788_clk),
    .in(arr__U788_in),
    .out(arr__U788_out)
);
assign arr__U820_clk = clk;
assign arr__U820_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U820_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U820_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U821 arr__U820 (
    .clk(arr__U820_clk),
    .in(arr__U820_in),
    .out(arr__U820_out)
);
assign arr__U826_clk = clk;
assign arr__U826_in[2] = arr__U820_out[2];
assign arr__U826_in[1] = arr__U820_out[1];
assign arr__U826_in[0] = arr__U820_out[0];
array_delay_U827 arr__U826 (
    .clk(arr__U826_clk),
    .in(arr__U826_in),
    .out(arr__U826_out)
);
assign conv1_stencil_clk = clk;
assign conv1_stencil_flush = flush;
assign conv1_stencil_rst_n = rst_n;
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_wen = op_hcompute_conv1_stencil_1_write_start_out;
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[2] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[2];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[1] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[1];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[0] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[0];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write[0] = op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write[0];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ren = op_hcompute_conv2_stencil_1_read_start;
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
conv1_stencil_ub conv1_stencil (
    .clk(conv1_stencil_clk),
    .flush(conv1_stencil_flush),
    .rst_n(conv1_stencil_rst_n),
    .op_hcompute_conv1_stencil_1_write_wen(conv1_stencil_op_hcompute_conv1_stencil_1_write_wen),
    .op_hcompute_conv1_stencil_1_write_ctrl_vars(conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars),
    .op_hcompute_conv1_stencil_1_write(conv1_stencil_op_hcompute_conv1_stencil_1_write),
    .op_hcompute_conv2_stencil_1_read_ren(conv1_stencil_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv1_stencil_op_hcompute_conv2_stencil_1_read)
);
assign conv1_stencil_clkwrk_dsa0_clk = clk;
assign conv1_stencil_clkwrk_dsa0_flush = flush;
assign conv1_stencil_clkwrk_dsa0_rst_n = rst_n;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren = op_hcompute_conv1_stencil_1_read_start;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen = op_hcompute_conv1_stencil_write_start_out;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[2] = op_hcompute_conv1_stencil_write_start_control_vars_out[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[1] = op_hcompute_conv1_stencil_write_start_control_vars_out[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[0] = op_hcompute_conv1_stencil_write_start_control_vars_out[0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0] = op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0];
conv1_stencil_clkwrk_dsa0_ub conv1_stencil_clkwrk_dsa0 (
    .clk(conv1_stencil_clkwrk_dsa0_clk),
    .flush(conv1_stencil_clkwrk_dsa0_flush),
    .rst_n(conv1_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_conv1_stencil_write_wen(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen),
    .op_hcompute_conv1_stencil_write_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars),
    .op_hcompute_conv1_stencil_write(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
assign conv2_stencil_clk = clk;
assign conv2_stencil_flush = flush;
assign conv2_stencil_rst_n = rst_n;
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_wen = op_hcompute_conv2_stencil_1_write_start_out;
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[2] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[2];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[1] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[1];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[0] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[0];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write[0] = op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write[0];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
conv2_stencil_ub conv2_stencil (
    .clk(conv2_stencil_clk),
    .flush(conv2_stencil_flush),
    .rst_n(conv2_stencil_rst_n),
    .op_hcompute_conv2_stencil_1_write_wen(conv2_stencil_op_hcompute_conv2_stencil_1_write_wen),
    .op_hcompute_conv2_stencil_1_write_ctrl_vars(conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars),
    .op_hcompute_conv2_stencil_1_write(conv2_stencil_op_hcompute_conv2_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(conv2_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(conv2_stencil_op_hcompute_hw_output_stencil_read)
);
assign conv2_stencil_clkwrk_dsa1_clk = clk;
assign conv2_stencil_clkwrk_dsa1_flush = flush;
assign conv2_stencil_clkwrk_dsa1_rst_n = rst_n;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren = op_hcompute_conv2_stencil_1_read_start;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen = op_hcompute_conv2_stencil_write_start_out;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[2] = op_hcompute_conv2_stencil_write_start_control_vars_out[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[1] = op_hcompute_conv2_stencil_write_start_control_vars_out[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[0] = op_hcompute_conv2_stencil_write_start_control_vars_out[0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0] = op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0];
conv2_stencil_clkwrk_dsa1_ub conv2_stencil_clkwrk_dsa1 (
    .clk(conv2_stencil_clkwrk_dsa1_clk),
    .flush(conv2_stencil_clkwrk_dsa1_flush),
    .rst_n(conv2_stencil_clkwrk_dsa1_rst_n),
    .op_hcompute_conv2_stencil_1_read_ren(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .op_hcompute_conv2_stencil_write_wen(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen),
    .op_hcompute_conv2_stencil_write_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars),
    .op_hcompute_conv2_stencil_write(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
assign delay_reg__U717_clk = clk;
assign delay_reg__U717_in = op_hcompute_conv1_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U717 (
    .clk(delay_reg__U717_clk),
    .in(delay_reg__U717_in),
    .out(delay_reg__U717_out)
);
assign delay_reg__U723_clk = clk;
assign delay_reg__U723_in = delay_reg__U717_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U723 (
    .clk(delay_reg__U723_clk),
    .in(delay_reg__U723_in),
    .out(delay_reg__U723_out)
);
assign delay_reg__U781_clk = clk;
assign delay_reg__U781_in = op_hcompute_conv2_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U781 (
    .clk(delay_reg__U781_clk),
    .in(delay_reg__U781_in),
    .out(delay_reg__U781_out)
);
assign delay_reg__U787_clk = clk;
assign delay_reg__U787_in = delay_reg__U781_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U787 (
    .clk(delay_reg__U787_clk),
    .in(delay_reg__U787_in),
    .out(delay_reg__U787_out)
);
assign delay_reg__U819_clk = clk;
assign delay_reg__U819_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U819 (
    .clk(delay_reg__U819_clk),
    .in(delay_reg__U819_in),
    .out(delay_reg__U819_out)
);
assign delay_reg__U825_clk = clk;
assign delay_reg__U825_in = delay_reg__U819_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U825 (
    .clk(delay_reg__U825_clk),
    .in(delay_reg__U825_in),
    .out(delay_reg__U825_out)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren = op_hcompute_conv1_stencil_1_read_start;
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start_out;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(hw_input_global_wrapper_stencil_clk),
    .flush(hw_input_global_wrapper_stencil_flush),
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_conv1_stencil_clk = clk;
cu_op_hcompute_conv1_stencil op_hcompute_conv1_stencil (
    .clk(op_hcompute_conv1_stencil_clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write(op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
assign op_hcompute_conv1_stencil_1_clk = clk;
assign op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
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
    .clk(op_hcompute_conv1_stencil_1_clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .conv1_stencil_op_hcompute_conv1_stencil_1_write(op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write)
);
assign op_hcompute_conv1_stencil_1_exe_start_clk = clk;
assign op_hcompute_conv1_stencil_1_exe_start_in = op_hcompute_conv1_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_1_exe_start (
    .clk(op_hcompute_conv1_stencil_1_exe_start_clk),
    .in(op_hcompute_conv1_stencil_1_exe_start_in),
    .out(op_hcompute_conv1_stencil_1_exe_start_out)
);
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U734 op_hcompute_conv1_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_conv1_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_1_port_controller_clk = clk;
affine_controller__U700 op_hcompute_conv1_stencil_1_port_controller (
    .clk(op_hcompute_conv1_stencil_1_port_controller_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_conv1_stencil_1_port_controller_U197 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U197_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U197_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U197_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_conv1_stencil_1_port_controller_U215 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U215_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U215_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U215_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_conv1_stencil_1_port_controller_U233 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U233_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U233_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U233_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_conv1_stencil_1_port_controller_U251 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U251_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U251_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U251_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_conv1_stencil_1_port_controller_U269 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U269_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U269_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U269_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_conv1_stencil_1_port_controller_U287 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U287_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U287_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U287_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_conv1_stencil_1_port_controller_U305 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U305_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U305_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U305_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_conv1_stencil_1_port_controller_U323 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U323_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U323_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U323_d)
);
assign op_hcompute_conv1_stencil_1_read_start = op_hcompute_conv1_stencil_1_port_controller_valid;
assign op_hcompute_conv1_stencil_1_write_start_in = op_hcompute_conv1_stencil_1_exe_start_out;
op_hcompute_conv1_stencil_1_write_start_pt__U729 op_hcompute_conv1_stencil_1_write_start (
    .in(op_hcompute_conv1_stencil_1_write_start_in),
    .out(op_hcompute_conv1_stencil_1_write_start_out)
);
assign op_hcompute_conv1_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U730 op_hcompute_conv1_stencil_1_write_start_control_vars (
    .clk(op_hcompute_conv1_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_exe_start_clk = clk;
assign op_hcompute_conv1_stencil_exe_start_in = op_hcompute_conv1_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_exe_start (
    .clk(op_hcompute_conv1_stencil_exe_start_clk),
    .in(op_hcompute_conv1_stencil_exe_start_in),
    .out(op_hcompute_conv1_stencil_exe_start_out)
);
assign op_hcompute_conv1_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U696 op_hcompute_conv1_stencil_exe_start_control_vars (
    .clk(op_hcompute_conv1_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_exe_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_port_controller_clk = clk;
affine_controller__U674 op_hcompute_conv1_stencil_port_controller (
    .clk(op_hcompute_conv1_stencil_port_controller_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_valid),
    .d(op_hcompute_conv1_stencil_port_controller_d)
);
assign op_hcompute_conv1_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_conv1_stencil_port_controller_U125 (
    .clk(op_hcompute_conv1_stencil_port_controller_U125_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U125_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U125_d)
);
assign op_hcompute_conv1_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_conv1_stencil_port_controller_U143 (
    .clk(op_hcompute_conv1_stencil_port_controller_U143_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U143_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U143_d)
);
assign op_hcompute_conv1_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_conv1_stencil_port_controller_U161 (
    .clk(op_hcompute_conv1_stencil_port_controller_U161_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U161_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U161_d)
);
assign op_hcompute_conv1_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_conv1_stencil_port_controller_U179 (
    .clk(op_hcompute_conv1_stencil_port_controller_U179_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U179_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U179_d)
);
assign op_hcompute_conv1_stencil_read_start = op_hcompute_conv1_stencil_port_controller_valid;
assign op_hcompute_conv1_stencil_write_start_in = op_hcompute_conv1_stencil_exe_start_out;
op_hcompute_conv1_stencil_write_start_pt__U691 op_hcompute_conv1_stencil_write_start (
    .in(op_hcompute_conv1_stencil_write_start_in),
    .out(op_hcompute_conv1_stencil_write_start_out)
);
assign op_hcompute_conv1_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U692 op_hcompute_conv1_stencil_write_start_control_vars (
    .clk(op_hcompute_conv1_stencil_write_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_write_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_clk = clk;
cu_op_hcompute_conv2_stencil op_hcompute_conv2_stencil (
    .clk(op_hcompute_conv2_stencil_clk),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write(op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
assign op_hcompute_conv2_stencil_1_clk = clk;
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
assign op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0] = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0];
cu_op_hcompute_conv2_stencil_1 op_hcompute_conv2_stencil_1 (
    .clk(op_hcompute_conv2_stencil_1_clk),
    .conv1_stencil_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_op_hcompute_conv2_stencil_1_write(op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write)
);
assign op_hcompute_conv2_stencil_1_exe_start_clk = clk;
assign op_hcompute_conv2_stencil_1_exe_start_in = op_hcompute_conv2_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_1_exe_start (
    .clk(op_hcompute_conv2_stencil_1_exe_start_clk),
    .in(op_hcompute_conv2_stencil_1_exe_start_in),
    .out(op_hcompute_conv2_stencil_1_exe_start_out)
);
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U798 op_hcompute_conv2_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_conv2_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_1_port_controller_clk = clk;
affine_controller__U764 op_hcompute_conv2_stencil_1_port_controller (
    .clk(op_hcompute_conv2_stencil_1_port_controller_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U413_clk = clk;
affine_controller__U396 op_hcompute_conv2_stencil_1_port_controller_U413 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U413_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U413_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U413_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U431_clk = clk;
affine_controller__U414 op_hcompute_conv2_stencil_1_port_controller_U431 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U431_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U431_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U449_clk = clk;
affine_controller__U432 op_hcompute_conv2_stencil_1_port_controller_U449 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U449_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U449_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U449_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U467_clk = clk;
affine_controller__U450 op_hcompute_conv2_stencil_1_port_controller_U467 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U467_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U467_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U467_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U485_clk = clk;
affine_controller__U468 op_hcompute_conv2_stencil_1_port_controller_U485 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U485_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U485_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U485_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U503_clk = clk;
affine_controller__U486 op_hcompute_conv2_stencil_1_port_controller_U503 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U503_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U503_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U503_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U521_clk = clk;
affine_controller__U504 op_hcompute_conv2_stencil_1_port_controller_U521 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U521_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U521_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U521_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U539_clk = clk;
affine_controller__U522 op_hcompute_conv2_stencil_1_port_controller_U539 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U539_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U539_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U539_d)
);
assign op_hcompute_conv2_stencil_1_read_start = op_hcompute_conv2_stencil_1_port_controller_valid;
assign op_hcompute_conv2_stencil_1_write_start_in = op_hcompute_conv2_stencil_1_exe_start_out;
op_hcompute_conv2_stencil_1_write_start_pt__U793 op_hcompute_conv2_stencil_1_write_start (
    .in(op_hcompute_conv2_stencil_1_write_start_in),
    .out(op_hcompute_conv2_stencil_1_write_start_out)
);
assign op_hcompute_conv2_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U794 op_hcompute_conv2_stencil_1_write_start_control_vars (
    .clk(op_hcompute_conv2_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_exe_start_clk = clk;
assign op_hcompute_conv2_stencil_exe_start_in = op_hcompute_conv2_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_exe_start (
    .clk(op_hcompute_conv2_stencil_exe_start_clk),
    .in(op_hcompute_conv2_stencil_exe_start_in),
    .out(op_hcompute_conv2_stencil_exe_start_out)
);
assign op_hcompute_conv2_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U760 op_hcompute_conv2_stencil_exe_start_control_vars (
    .clk(op_hcompute_conv2_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_exe_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_port_controller_clk = clk;
affine_controller__U738 op_hcompute_conv2_stencil_port_controller (
    .clk(op_hcompute_conv2_stencil_port_controller_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_valid),
    .d(op_hcompute_conv2_stencil_port_controller_d)
);
assign op_hcompute_conv2_stencil_port_controller_U341_clk = clk;
affine_controller__U324 op_hcompute_conv2_stencil_port_controller_U341 (
    .clk(op_hcompute_conv2_stencil_port_controller_U341_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U341_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U341_d)
);
assign op_hcompute_conv2_stencil_port_controller_U359_clk = clk;
affine_controller__U342 op_hcompute_conv2_stencil_port_controller_U359 (
    .clk(op_hcompute_conv2_stencil_port_controller_U359_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U359_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U359_d)
);
assign op_hcompute_conv2_stencil_port_controller_U377_clk = clk;
affine_controller__U360 op_hcompute_conv2_stencil_port_controller_U377 (
    .clk(op_hcompute_conv2_stencil_port_controller_U377_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U377_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U377_d)
);
assign op_hcompute_conv2_stencil_port_controller_U395_clk = clk;
affine_controller__U378 op_hcompute_conv2_stencil_port_controller_U395 (
    .clk(op_hcompute_conv2_stencil_port_controller_U395_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U395_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U395_d)
);
assign op_hcompute_conv2_stencil_read_start = op_hcompute_conv2_stencil_port_controller_valid;
assign op_hcompute_conv2_stencil_write_start_in = op_hcompute_conv2_stencil_exe_start_out;
op_hcompute_conv2_stencil_write_start_pt__U755 op_hcompute_conv2_stencil_write_start (
    .in(op_hcompute_conv2_stencil_write_start_in),
    .out(op_hcompute_conv2_stencil_write_start_out)
);
assign op_hcompute_conv2_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U756 op_hcompute_conv2_stencil_write_start_control_vars (
    .clk(op_hcompute_conv2_stencil_write_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U840_out;
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
array_delay_U670 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U648 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk = clk;
affine_controller__U90 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk = clk;
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk = clk;
affine_controller__U18 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk = clk;
affine_controller__U36 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk = clk;
affine_controller__U54 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk = clk;
affine_controller__U72 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_in = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
op_hcompute_hw_input_global_wrapper_stencil_write_start_pt__U665 op_hcompute_hw_input_global_wrapper_stencil_write_start (
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U666 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read[0] = conv2_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .conv2_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read),
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
array_delay_U836 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U802 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U557_clk = clk;
affine_controller__U540 op_hcompute_hw_output_stencil_port_controller_U557 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U557_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U557_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U557_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U575_clk = clk;
affine_controller__U558 op_hcompute_hw_output_stencil_port_controller_U575 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U575_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U575_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U575_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U593_clk = clk;
affine_controller__U576 op_hcompute_hw_output_stencil_port_controller_U593 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U593_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U593_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U593_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U611_clk = clk;
affine_controller__U594 op_hcompute_hw_output_stencil_port_controller_U611 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U611_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U611_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U611_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U629_clk = clk;
affine_controller__U612 op_hcompute_hw_output_stencil_port_controller_U629 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U629_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U629_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U629_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U647_clk = clk;
affine_controller__U630 op_hcompute_hw_output_stencil_port_controller_U647 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U647_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U647_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U647_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start_in = op_hcompute_hw_output_stencil_exe_start_out;
op_hcompute_hw_output_stencil_write_start_pt__U831 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_write_start_in),
    .out(hw_output_stencil_op_hcompute_hw_output_stencil_write_en)
);
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U832 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

