// Module `hw_input_stencil_ub` defined externally
// Module `avg_pool_stencil_ub` defined externally
// Module `avg_pool_stencil_clkwrk_dsa0_ub` defined externally
module op_hcompute_hw_output_stencil_write_start_pt__U729 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_hw_input_stencil_write_start_pt__U599 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_write_start_pt__U633 (
    input in,
    output out
);
assign out = in;
endmodule

module op_hcompute_avg_pool_stencil_1_write_start_pt__U681 (
    input in,
    output out
);
assign out = in;
endmodule

module hcompute_hw_input_stencil (
    output [15:0] out_hw_input_stencil,
    input [15:0] in0_input_copy_stencil [0:0]
);
assign out_hw_input_stencil = in0_input_copy_stencil[0];
endmodule

module cu_op_hcompute_hw_input_stencil (
    input clk,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0],
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_input_stencil;
wire [15:0] inner_compute_in0_input_copy_stencil [0:0];
assign inner_compute_in0_input_copy_stencil[0] = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
hcompute_hw_input_stencil inner_compute (
    .out_hw_input_stencil(inner_compute_out_hw_input_stencil),
    .in0_input_copy_stencil(inner_compute_in0_input_copy_stencil)
);
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = inner_compute_out_hw_input_stencil;
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

module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_avg_pool_stencil [0:0]
);
assign out_hw_output_stencil = in0_avg_pool_stencil[0] >> 16'h0002;
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_avg_pool_stencil [0:0];
assign inner_compute_in0_avg_pool_stencil[0] = avg_pool_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_avg_pool_stencil(inner_compute_in0_avg_pool_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module hcompute_avg_pool_stencil (
    output [15:0] out_avg_pool_stencil
);
assign out_avg_pool_stencil = 16'h0000;
endmodule

module cu_op_hcompute_avg_pool_stencil (
    input clk,
    output [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0]
);
wire [15:0] inner_compute_out_avg_pool_stencil;
hcompute_avg_pool_stencil inner_compute (
    .out_avg_pool_stencil(inner_compute_out_avg_pool_stencil)
);
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0] = inner_compute_out_avg_pool_stencil;
endmodule

module hcompute_avg_pool_stencil_1 (
    output [15:0] out_avg_pool_stencil,
    input [15:0] in0_avg_pool_stencil [0:0],
    input [15:0] in1_hw_input_stencil [3:0]
);
assign out_avg_pool_stencil = 16'(in1_hw_input_stencil[0] + (16'(in0_avg_pool_stencil[0] + (16'(in1_hw_input_stencil[1] + (16'(in1_hw_input_stencil[2] + in1_hw_input_stencil[3])))))));
endmodule

module cu_op_hcompute_avg_pool_stencil_1 (
    input clk,
    input [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0],
    input [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0],
    output [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_avg_pool_stencil;
wire [15:0] inner_compute_in0_avg_pool_stencil [0:0];
wire [15:0] inner_compute_in1_hw_input_stencil [3:0];
assign inner_compute_in0_avg_pool_stencil[0] = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0];
assign inner_compute_in1_hw_input_stencil[3] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3];
assign inner_compute_in1_hw_input_stencil[2] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2];
assign inner_compute_in1_hw_input_stencil[1] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1];
assign inner_compute_in1_hw_input_stencil[0] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0];
hcompute_avg_pool_stencil_1 inner_compute (
    .out_avg_pool_stencil(inner_compute_out_avg_pool_stencil),
    .in0_avg_pool_stencil(inner_compute_in0_avg_pool_stencil),
    .in1_hw_input_stencil(inner_compute_in1_hw_input_stencil)
);
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0] = inner_compute_out_avg_pool_stencil;
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

module array_delay_U735 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U736_in;
wire _U736_clk;
wire [15:0] _U736_out;
wire [15:0] _U737_in;
wire _U737_clk;
wire [15:0] _U737_out;
wire [15:0] _U738_in;
wire _U738_clk;
wire [15:0] _U738_out;
wire [15:0] _U739_in;
wire _U739_clk;
wire [15:0] _U739_out;
assign _U736_in = in[0];
assign _U736_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U736 (
    .in(_U736_in),
    .clk(_U736_clk),
    .out(_U736_out)
);
assign _U737_in = in[1];
assign _U737_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U737 (
    .in(_U737_in),
    .clk(_U737_clk),
    .out(_U737_out)
);
assign _U738_in = in[2];
assign _U738_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U738 (
    .in(_U738_in),
    .clk(_U738_clk),
    .out(_U738_out)
);
assign _U739_in = in[3];
assign _U739_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U739 (
    .in(_U739_in),
    .clk(_U739_clk),
    .out(_U739_out)
);
assign out[3] = _U739_out;
assign out[2] = _U738_out;
assign out[1] = _U737_out;
assign out[0] = _U736_out;
endmodule

module array_delay_U730 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
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
wire [15:0] _U734_in;
wire _U734_clk;
wire [15:0] _U734_out;
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
assign _U734_in = in[3];
assign _U734_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U734 (
    .in(_U734_in),
    .clk(_U734_clk),
    .out(_U734_out)
);
assign out[3] = _U734_out;
assign out[2] = _U733_out;
assign out[1] = _U732_out;
assign out[0] = _U731_out;
endmodule

module array_delay_U724 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U725_in;
wire _U725_clk;
wire [15:0] _U725_out;
wire [15:0] _U726_in;
wire _U726_clk;
wire [15:0] _U726_out;
wire [15:0] _U727_in;
wire _U727_clk;
wire [15:0] _U727_out;
wire [15:0] _U728_in;
wire _U728_clk;
wire [15:0] _U728_out;
assign _U725_in = in[0];
assign _U725_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U725 (
    .in(_U725_in),
    .clk(_U725_clk),
    .out(_U725_out)
);
assign _U726_in = in[1];
assign _U726_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U726 (
    .in(_U726_in),
    .clk(_U726_clk),
    .out(_U726_out)
);
assign _U727_in = in[2];
assign _U727_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U727 (
    .in(_U727_in),
    .clk(_U727_clk),
    .out(_U727_out)
);
assign _U728_in = in[3];
assign _U728_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U728 (
    .in(_U728_in),
    .clk(_U728_clk),
    .out(_U728_out)
);
assign out[3] = _U728_out;
assign out[2] = _U727_out;
assign out[1] = _U726_out;
assign out[0] = _U725_out;
endmodule

module array_delay_U717 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U718_in;
wire _U718_clk;
wire [15:0] _U718_out;
wire [15:0] _U719_in;
wire _U719_clk;
wire [15:0] _U719_out;
wire [15:0] _U720_in;
wire _U720_clk;
wire [15:0] _U720_out;
wire [15:0] _U721_in;
wire _U721_clk;
wire [15:0] _U721_out;
assign _U718_in = in[0];
assign _U718_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U718 (
    .in(_U718_in),
    .clk(_U718_clk),
    .out(_U718_out)
);
assign _U719_in = in[1];
assign _U719_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U719 (
    .in(_U719_in),
    .clk(_U719_clk),
    .out(_U719_out)
);
assign _U720_in = in[2];
assign _U720_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U720 (
    .in(_U720_in),
    .clk(_U720_clk),
    .out(_U720_out)
);
assign _U721_in = in[3];
assign _U721_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U721 (
    .in(_U721_in),
    .clk(_U721_clk),
    .out(_U721_out)
);
assign out[3] = _U721_out;
assign out[2] = _U720_out;
assign out[1] = _U719_out;
assign out[0] = _U718_out;
endmodule

module array_delay_U687 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U688_in;
wire _U688_clk;
wire [15:0] _U688_out;
wire [15:0] _U689_in;
wire _U689_clk;
wire [15:0] _U689_out;
wire [15:0] _U690_in;
wire _U690_clk;
wire [15:0] _U690_out;
wire [15:0] _U691_in;
wire _U691_clk;
wire [15:0] _U691_out;
assign _U688_in = in[0];
assign _U688_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U688 (
    .in(_U688_in),
    .clk(_U688_clk),
    .out(_U688_out)
);
assign _U689_in = in[1];
assign _U689_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U689 (
    .in(_U689_in),
    .clk(_U689_clk),
    .out(_U689_out)
);
assign _U690_in = in[2];
assign _U690_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U690 (
    .in(_U690_in),
    .clk(_U690_clk),
    .out(_U690_out)
);
assign _U691_in = in[3];
assign _U691_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U691 (
    .in(_U691_in),
    .clk(_U691_clk),
    .out(_U691_out)
);
assign out[3] = _U691_out;
assign out[2] = _U690_out;
assign out[1] = _U689_out;
assign out[0] = _U688_out;
endmodule

module array_delay_U682 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U683_in;
wire _U683_clk;
wire [15:0] _U683_out;
wire [15:0] _U684_in;
wire _U684_clk;
wire [15:0] _U684_out;
wire [15:0] _U685_in;
wire _U685_clk;
wire [15:0] _U685_out;
wire [15:0] _U686_in;
wire _U686_clk;
wire [15:0] _U686_out;
assign _U683_in = in[0];
assign _U683_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U683 (
    .in(_U683_in),
    .clk(_U683_clk),
    .out(_U683_out)
);
assign _U684_in = in[1];
assign _U684_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U684 (
    .in(_U684_in),
    .clk(_U684_clk),
    .out(_U684_out)
);
assign _U685_in = in[2];
assign _U685_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U685 (
    .in(_U685_in),
    .clk(_U685_clk),
    .out(_U685_out)
);
assign _U686_in = in[3];
assign _U686_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U686 (
    .in(_U686_in),
    .clk(_U686_clk),
    .out(_U686_out)
);
assign out[3] = _U686_out;
assign out[2] = _U685_out;
assign out[1] = _U684_out;
assign out[0] = _U683_out;
endmodule

module array_delay_U676 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U677_in;
wire _U677_clk;
wire [15:0] _U677_out;
wire [15:0] _U678_in;
wire _U678_clk;
wire [15:0] _U678_out;
wire [15:0] _U679_in;
wire _U679_clk;
wire [15:0] _U679_out;
wire [15:0] _U680_in;
wire _U680_clk;
wire [15:0] _U680_out;
assign _U677_in = in[0];
assign _U677_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U677 (
    .in(_U677_in),
    .clk(_U677_clk),
    .out(_U677_out)
);
assign _U678_in = in[1];
assign _U678_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U678 (
    .in(_U678_in),
    .clk(_U678_clk),
    .out(_U678_out)
);
assign _U679_in = in[2];
assign _U679_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U679 (
    .in(_U679_in),
    .clk(_U679_clk),
    .out(_U679_out)
);
assign _U680_in = in[3];
assign _U680_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U680 (
    .in(_U680_in),
    .clk(_U680_clk),
    .out(_U680_out)
);
assign out[3] = _U680_out;
assign out[2] = _U679_out;
assign out[1] = _U678_out;
assign out[0] = _U677_out;
endmodule

module array_delay_U669 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U670_in;
wire _U670_clk;
wire [15:0] _U670_out;
wire [15:0] _U671_in;
wire _U671_clk;
wire [15:0] _U671_out;
wire [15:0] _U672_in;
wire _U672_clk;
wire [15:0] _U672_out;
wire [15:0] _U673_in;
wire _U673_clk;
wire [15:0] _U673_out;
assign _U670_in = in[0];
assign _U670_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U670 (
    .in(_U670_in),
    .clk(_U670_clk),
    .out(_U670_out)
);
assign _U671_in = in[1];
assign _U671_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U671 (
    .in(_U671_in),
    .clk(_U671_clk),
    .out(_U671_out)
);
assign _U672_in = in[2];
assign _U672_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U672 (
    .in(_U672_in),
    .clk(_U672_clk),
    .out(_U672_out)
);
assign _U673_in = in[3];
assign _U673_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U673 (
    .in(_U673_in),
    .clk(_U673_clk),
    .out(_U673_out)
);
assign out[3] = _U673_out;
assign out[2] = _U672_out;
assign out[1] = _U671_out;
assign out[0] = _U670_out;
endmodule

module array_delay_U639 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
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
wire [15:0] _U643_out;
assign _U640_in = in[0];
assign _U640_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U640 (
    .in(_U640_in),
    .clk(_U640_clk),
    .out(_U640_out)
);
assign _U641_in = in[1];
assign _U641_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U641 (
    .in(_U641_in),
    .clk(_U641_clk),
    .out(_U641_out)
);
assign _U642_in = in[2];
assign _U642_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U642 (
    .in(_U642_in),
    .clk(_U642_clk),
    .out(_U642_out)
);
assign _U643_in = in[3];
assign _U643_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U643 (
    .in(_U643_in),
    .clk(_U643_clk),
    .out(_U643_out)
);
assign out[3] = _U643_out;
assign out[2] = _U642_out;
assign out[1] = _U641_out;
assign out[0] = _U640_out;
endmodule

module array_delay_U634 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U635_in;
wire _U635_clk;
wire [15:0] _U635_out;
wire [15:0] _U636_in;
wire _U636_clk;
wire [15:0] _U636_out;
wire [15:0] _U637_in;
wire _U637_clk;
wire [15:0] _U637_out;
wire [15:0] _U638_in;
wire _U638_clk;
wire [15:0] _U638_out;
assign _U635_in = in[0];
assign _U635_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U635 (
    .in(_U635_in),
    .clk(_U635_clk),
    .out(_U635_out)
);
assign _U636_in = in[1];
assign _U636_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U636 (
    .in(_U636_in),
    .clk(_U636_clk),
    .out(_U636_out)
);
assign _U637_in = in[2];
assign _U637_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U637 (
    .in(_U637_in),
    .clk(_U637_clk),
    .out(_U637_out)
);
assign _U638_in = in[3];
assign _U638_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U638 (
    .in(_U638_in),
    .clk(_U638_clk),
    .out(_U638_out)
);
assign out[3] = _U638_out;
assign out[2] = _U637_out;
assign out[1] = _U636_out;
assign out[0] = _U635_out;
endmodule

module array_delay_U605 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U606_in;
wire _U606_clk;
wire [15:0] _U606_out;
wire [15:0] _U607_in;
wire _U607_clk;
wire [15:0] _U607_out;
wire [15:0] _U608_in;
wire _U608_clk;
wire [15:0] _U608_out;
wire [15:0] _U609_in;
wire _U609_clk;
wire [15:0] _U609_out;
assign _U606_in = in[0];
assign _U606_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U606 (
    .in(_U606_in),
    .clk(_U606_clk),
    .out(_U606_out)
);
assign _U607_in = in[1];
assign _U607_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U607 (
    .in(_U607_in),
    .clk(_U607_clk),
    .out(_U607_out)
);
assign _U608_in = in[2];
assign _U608_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U608 (
    .in(_U608_in),
    .clk(_U608_clk),
    .out(_U608_out)
);
assign _U609_in = in[3];
assign _U609_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U609 (
    .in(_U609_in),
    .clk(_U609_clk),
    .out(_U609_out)
);
assign out[3] = _U609_out;
assign out[2] = _U608_out;
assign out[1] = _U607_out;
assign out[0] = _U606_out;
endmodule

module array_delay_U600 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U601_in;
wire _U601_clk;
wire [15:0] _U601_out;
wire [15:0] _U602_in;
wire _U602_clk;
wire [15:0] _U602_out;
wire [15:0] _U603_in;
wire _U603_clk;
wire [15:0] _U603_out;
wire [15:0] _U604_in;
wire _U604_clk;
wire [15:0] _U604_out;
assign _U601_in = in[0];
assign _U601_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U601 (
    .in(_U601_in),
    .clk(_U601_clk),
    .out(_U601_out)
);
assign _U602_in = in[1];
assign _U602_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U602 (
    .in(_U602_in),
    .clk(_U602_clk),
    .out(_U602_out)
);
assign _U603_in = in[2];
assign _U603_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U603 (
    .in(_U603_in),
    .clk(_U603_clk),
    .out(_U603_out)
);
assign _U604_in = in[3];
assign _U604_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U604 (
    .in(_U604_in),
    .clk(_U604_clk),
    .out(_U604_out)
);
assign out[3] = _U604_out;
assign out[2] = _U603_out;
assign out[1] = _U602_out;
assign out[0] = _U601_out;
endmodule

module aff__U97 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U96 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U97 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U73 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U72 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U693 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U692 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U693 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U645 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U644 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U645 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U611 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U610 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U611 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U577 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U576 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U553 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U552 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U553 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U529 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U528 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U529 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U505 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U504 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U49 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U48 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U49 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U481 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U480 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U481 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U457 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U456 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U457 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U433 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004b);
endmodule

module affine_controller__U432 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U409 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0049);
endmodule

module affine_controller__U408 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U409 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U385 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U384 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U385 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U361 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U360 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U337 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U336 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U337 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U313 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U312 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U313 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U289 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0047);
endmodule

module affine_controller__U288 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U265 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U264 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U265 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U25 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U24 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U25 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U241 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0047);
endmodule

module affine_controller__U240 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U241 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U217 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0046);
endmodule

module affine_controller__U216 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U193 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U192 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U193 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U169 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U168 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U169 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U145 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U144 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_at_max_out = d_2_reg_out == 16'h001f;
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h001f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U121 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0002);
endmodule

module affine_controller__U120 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
assign affine_func_d[2] = d_2_reg_out;
assign affine_func_d[1] = d_1_reg_out;
assign affine_func_d[0] = d_0_reg_out;
aff__U121 affine_func (
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module aff__U1 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
endmodule

module affine_controller__U0 (
    input clk,
    output valid,
    output [15:0] d [3:0]
);
wire [15:0] affine_func_out;
wire [15:0] affine_func_d [3:0];
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
wire d_3_at_max_out;
wire [15:0] d_3_reg_in;
wire d_3_reg_clk;
wire [15:0] d_3_reg_out;
wire d_3_reg_en;
assign affine_func_d[3] = d_3_reg_out;
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
assign d_0_reg_in = ((1'b1 & d_1_at_max_out) & d_2_at_max_out) & d_3_at_max_out ? d_0_reg_out == 16'h0000 ? 16'h0000 : 16'(d_0_reg_out + 16'h0001) : d_0_reg_out;
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
assign d_1_at_max_out = d_1_reg_out == 16'h0003;
assign d_1_reg_in = (1'b1 & d_2_at_max_out) & d_3_at_max_out ? d_1_at_max_out ? 16'h0000 : 16'(d_1_reg_out + 16'h0001) : d_1_reg_out;
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
assign d_2_reg_in = 1'b1 & d_3_at_max_out ? d_2_at_max_out ? 16'h0000 : 16'(d_2_reg_out + 16'h0001) : d_2_reg_out;
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
assign d_3_at_max_out = d_3_reg_out == 16'h003f;
assign d_3_reg_in = 1'b1 ? d_3_at_max_out ? 16'h0000 : 16'(d_3_reg_out + 16'h0001) : d_3_reg_out;
assign d_3_reg_clk = clk;
assign d_3_reg_en = cmp_time_out;
mantle_reg__has_clrFalse__has_enTrue__has_rstFalse__width16 #(
    .init(16'h0000)
) d_3_reg (
    .in(d_3_reg_in),
    .clk(d_3_reg_clk),
    .out(d_3_reg_out),
    .en(d_3_reg_en)
);
assign valid = cmp_time_out;
assign d[3] = d_3_reg_out;
assign d[2] = d_2_reg_out;
assign d[1] = d_1_reg_out;
assign d[0] = d_0_reg_out;
endmodule

module down_sample (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U740_in;
wire _U740_clk;
wire [15:0] _U740_out;
wire arr__U668_clk;
wire [15:0] arr__U668_in [3:0];
wire [15:0] arr__U668_out [3:0];
wire arr__U675_clk;
wire [15:0] arr__U675_in [3:0];
wire [15:0] arr__U675_out [3:0];
wire arr__U716_clk;
wire [15:0] arr__U716_in [3:0];
wire [15:0] arr__U716_out [3:0];
wire arr__U723_clk;
wire [15:0] arr__U723_in [3:0];
wire [15:0] arr__U723_out [3:0];
wire avg_pool_stencil_clk;
wire avg_pool_stencil_flush;
wire avg_pool_stencil_rst_n;
wire avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen;
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0];
wire avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_clk;
wire avg_pool_stencil_clkwrk_dsa0_flush;
wire avg_pool_stencil_clkwrk_dsa0_rst_n;
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0];
wire delay_reg__U667_clk;
wire delay_reg__U667_in;
wire delay_reg__U667_out;
wire delay_reg__U674_clk;
wire delay_reg__U674_in;
wire delay_reg__U674_out;
wire delay_reg__U715_clk;
wire delay_reg__U715_in;
wire delay_reg__U715_out;
wire delay_reg__U722_clk;
wire delay_reg__U722_in;
wire delay_reg__U722_out;
wire hw_input_stencil_clk;
wire hw_input_stencil_flush;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren;
wire [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0];
wire [15:0] hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0];
wire hw_input_stencil_op_hcompute_hw_input_stencil_write_wen;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars [3:0];
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_avg_pool_stencil_clk;
wire [15:0] op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0];
wire op_hcompute_avg_pool_stencil_1_clk;
wire [15:0] op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0];
wire op_hcompute_avg_pool_stencil_1_exe_start_clk;
wire op_hcompute_avg_pool_stencil_1_exe_start_in;
wire op_hcompute_avg_pool_stencil_1_exe_start_out;
wire op_hcompute_avg_pool_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_exe_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U263_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U263_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U263_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U287_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U287_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U287_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U311_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U311_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U311_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U335_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U335_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U335_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U359_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U359_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U359_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U383_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U383_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U383_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U407_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U407_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U407_d [3:0];
wire op_hcompute_avg_pool_stencil_1_port_controller_U431_clk;
wire op_hcompute_avg_pool_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_avg_pool_stencil_1_port_controller_U431_d [3:0];
wire op_hcompute_avg_pool_stencil_1_read_start;
wire op_hcompute_avg_pool_stencil_1_write_start_in;
wire op_hcompute_avg_pool_stencil_1_write_start_out;
wire op_hcompute_avg_pool_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_1_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_1_write_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_exe_start_clk;
wire op_hcompute_avg_pool_stencil_exe_start_in;
wire op_hcompute_avg_pool_stencil_exe_start_out;
wire op_hcompute_avg_pool_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_clk;
wire op_hcompute_avg_pool_stencil_port_controller_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U167_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U167_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U167_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U191_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U191_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U191_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U215_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U215_d [3:0];
wire op_hcompute_avg_pool_stencil_port_controller_U239_clk;
wire op_hcompute_avg_pool_stencil_port_controller_U239_valid;
wire [15:0] op_hcompute_avg_pool_stencil_port_controller_U239_d [3:0];
wire op_hcompute_avg_pool_stencil_read_start;
wire op_hcompute_avg_pool_stencil_write_start_in;
wire op_hcompute_avg_pool_stencil_write_start_out;
wire op_hcompute_avg_pool_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_avg_pool_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_avg_pool_stencil_write_start_control_vars_out [3:0];
wire op_hcompute_hw_input_stencil_clk;
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_hw_input_stencil_exe_start_clk;
wire op_hcompute_hw_input_stencil_exe_start_in;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire op_hcompute_hw_input_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_hw_input_stencil_port_controller_clk;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U119_clk;
wire op_hcompute_hw_input_stencil_port_controller_U119_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U119_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U143_clk;
wire op_hcompute_hw_input_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U143_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U23_clk;
wire op_hcompute_hw_input_stencil_port_controller_U23_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U23_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U47_clk;
wire op_hcompute_hw_input_stencil_port_controller_U47_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U47_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U71_clk;
wire op_hcompute_hw_input_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U71_d [3:0];
wire op_hcompute_hw_input_stencil_port_controller_U95_clk;
wire op_hcompute_hw_input_stencil_port_controller_U95_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U95_d [3:0];
wire op_hcompute_hw_input_stencil_read_start;
wire op_hcompute_hw_input_stencil_write_start_in;
wire op_hcompute_hw_input_stencil_write_start_out;
wire op_hcompute_hw_input_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out [3:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire [15:0] op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0];
wire op_hcompute_hw_output_stencil_exe_start_clk;
wire op_hcompute_hw_output_stencil_exe_start_in;
wire op_hcompute_hw_output_stencil_exe_start_out;
wire op_hcompute_hw_output_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_exe_start_control_vars_out [3:0];
wire op_hcompute_hw_output_stencil_port_controller_clk;
wire op_hcompute_hw_output_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U455_clk;
wire op_hcompute_hw_output_stencil_port_controller_U455_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U455_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U479_clk;
wire op_hcompute_hw_output_stencil_port_controller_U479_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U479_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U503_clk;
wire op_hcompute_hw_output_stencil_port_controller_U503_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U503_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U527_clk;
wire op_hcompute_hw_output_stencil_port_controller_U527_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U527_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U551_clk;
wire op_hcompute_hw_output_stencil_port_controller_U551_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U551_d [3:0];
wire op_hcompute_hw_output_stencil_port_controller_U575_clk;
wire op_hcompute_hw_output_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U575_d [3:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start_in;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [3:0];
assign _U740_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U740_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U740 (
    .in(_U740_in),
    .clk(_U740_clk),
    .out(_U740_out)
);
assign arr__U668_clk = clk;
assign arr__U668_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign arr__U668_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign arr__U668_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign arr__U668_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
array_delay_U669 arr__U668 (
    .clk(arr__U668_clk),
    .in(arr__U668_in),
    .out(arr__U668_out)
);
assign arr__U675_clk = clk;
assign arr__U675_in[3] = arr__U668_out[3];
assign arr__U675_in[2] = arr__U668_out[2];
assign arr__U675_in[1] = arr__U668_out[1];
assign arr__U675_in[0] = arr__U668_out[0];
array_delay_U676 arr__U675 (
    .clk(arr__U675_clk),
    .in(arr__U675_in),
    .out(arr__U675_out)
);
assign arr__U716_clk = clk;
assign arr__U716_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign arr__U716_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign arr__U716_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign arr__U716_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U717 arr__U716 (
    .clk(arr__U716_clk),
    .in(arr__U716_in),
    .out(arr__U716_out)
);
assign arr__U723_clk = clk;
assign arr__U723_in[3] = arr__U716_out[3];
assign arr__U723_in[2] = arr__U716_out[2];
assign arr__U723_in[1] = arr__U716_out[1];
assign arr__U723_in[0] = arr__U716_out[0];
array_delay_U724 arr__U723 (
    .clk(arr__U723_clk),
    .in(arr__U723_in),
    .out(arr__U723_out)
);
assign avg_pool_stencil_clk = clk;
assign avg_pool_stencil_flush = flush;
assign avg_pool_stencil_rst_n = rst_n;
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen = op_hcompute_avg_pool_stencil_1_write_start_out;
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[3];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[2];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[1];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_write_start_control_vars_out[0];
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0] = op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write[0];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
avg_pool_stencil_ub avg_pool_stencil (
    .clk(avg_pool_stencil_clk),
    .flush(avg_pool_stencil_flush),
    .rst_n(avg_pool_stencil_rst_n),
    .op_hcompute_avg_pool_stencil_1_write_wen(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen),
    .op_hcompute_avg_pool_stencil_1_write_ctrl_vars(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_write(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(avg_pool_stencil_op_hcompute_hw_output_stencil_read)
);
assign avg_pool_stencil_clkwrk_dsa0_clk = clk;
assign avg_pool_stencil_clkwrk_dsa0_flush = flush;
assign avg_pool_stencil_clkwrk_dsa0_rst_n = rst_n;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen = op_hcompute_avg_pool_stencil_write_start_out;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[3] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[2] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[1] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[0] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0] = op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0];
avg_pool_stencil_clkwrk_dsa0_ub avg_pool_stencil_clkwrk_dsa0 (
    .clk(avg_pool_stencil_clkwrk_dsa0_clk),
    .flush(avg_pool_stencil_clkwrk_dsa0_flush),
    .rst_n(avg_pool_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_avg_pool_stencil_1_read_ren(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren),
    .op_hcompute_avg_pool_stencil_1_read_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_read(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read),
    .op_hcompute_avg_pool_stencil_write_wen(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen),
    .op_hcompute_avg_pool_stencil_write_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_write(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write)
);
assign delay_reg__U667_clk = clk;
assign delay_reg__U667_in = op_hcompute_avg_pool_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U667 (
    .clk(delay_reg__U667_clk),
    .in(delay_reg__U667_in),
    .out(delay_reg__U667_out)
);
assign delay_reg__U674_clk = clk;
assign delay_reg__U674_in = delay_reg__U667_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U674 (
    .clk(delay_reg__U674_clk),
    .in(delay_reg__U674_in),
    .out(delay_reg__U674_out)
);
assign delay_reg__U715_clk = clk;
assign delay_reg__U715_in = op_hcompute_hw_output_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U715 (
    .clk(delay_reg__U715_clk),
    .in(delay_reg__U715_in),
    .out(delay_reg__U715_out)
);
assign delay_reg__U722_clk = clk;
assign delay_reg__U722_in = delay_reg__U715_out;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) delay_reg__U722 (
    .clk(delay_reg__U722_clk),
    .in(delay_reg__U722_in),
    .out(delay_reg__U722_out)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_wen = op_hcompute_hw_input_stencil_write_start_out;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[3] = op_hcompute_hw_input_stencil_write_start_control_vars_out[3];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_stencil_write_start_control_vars_out[2];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_stencil_write_start_control_vars_out[1];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_stencil_write_start_control_vars_out[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(hw_input_stencil_clk),
    .flush(hw_input_stencil_flush),
    .rst_n(hw_input_stencil_rst_n),
    .op_hcompute_avg_pool_stencil_1_read_ren(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren),
    .op_hcompute_avg_pool_stencil_1_read_ctrl_vars(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_read(hw_input_stencil_op_hcompute_avg_pool_stencil_1_read),
    .op_hcompute_hw_input_stencil_write_wen(hw_input_stencil_op_hcompute_hw_input_stencil_write_wen),
    .op_hcompute_hw_input_stencil_write_ctrl_vars(hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_avg_pool_stencil_clk = clk;
cu_op_hcompute_avg_pool_stencil op_hcompute_avg_pool_stencil (
    .clk(op_hcompute_avg_pool_stencil_clk),
    .avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write(op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write)
);
assign op_hcompute_avg_pool_stencil_1_clk = clk;
assign op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0] = avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read[0];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[3];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[2];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[1];
assign op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0] = hw_input_stencil_op_hcompute_avg_pool_stencil_1_read[0];
cu_op_hcompute_avg_pool_stencil_1 op_hcompute_avg_pool_stencil_1 (
    .clk(op_hcompute_avg_pool_stencil_1_clk),
    .avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read(op_hcompute_avg_pool_stencil_1_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read),
    .hw_input_stencil_op_hcompute_avg_pool_stencil_1_read(op_hcompute_avg_pool_stencil_1_hw_input_stencil_op_hcompute_avg_pool_stencil_1_read),
    .avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write(op_hcompute_avg_pool_stencil_1_avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write)
);
assign op_hcompute_avg_pool_stencil_1_exe_start_clk = clk;
assign op_hcompute_avg_pool_stencil_1_exe_start_in = op_hcompute_avg_pool_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_avg_pool_stencil_1_exe_start (
    .clk(op_hcompute_avg_pool_stencil_1_exe_start_clk),
    .in(op_hcompute_avg_pool_stencil_1_exe_start_in),
    .out(op_hcompute_avg_pool_stencil_1_exe_start_out)
);
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
array_delay_U687 op_hcompute_avg_pool_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_clk = clk;
affine_controller__U644 op_hcompute_avg_pool_stencil_1_port_controller (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U263_clk = clk;
affine_controller__U240 op_hcompute_avg_pool_stencil_1_port_controller_U263 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U263_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U263_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U263_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U287_clk = clk;
affine_controller__U264 op_hcompute_avg_pool_stencil_1_port_controller_U287 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U287_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U287_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U287_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U311_clk = clk;
affine_controller__U288 op_hcompute_avg_pool_stencil_1_port_controller_U311 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U311_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U311_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U311_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U335_clk = clk;
affine_controller__U312 op_hcompute_avg_pool_stencil_1_port_controller_U335 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U335_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U335_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U335_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U359_clk = clk;
affine_controller__U336 op_hcompute_avg_pool_stencil_1_port_controller_U359 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U359_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U359_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U359_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U383_clk = clk;
affine_controller__U360 op_hcompute_avg_pool_stencil_1_port_controller_U383 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U383_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U383_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U383_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U407_clk = clk;
affine_controller__U384 op_hcompute_avg_pool_stencil_1_port_controller_U407 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U407_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U407_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U407_d)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_U431_clk = clk;
affine_controller__U408 op_hcompute_avg_pool_stencil_1_port_controller_U431 (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_U431_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_U431_d)
);
assign op_hcompute_avg_pool_stencil_1_read_start = op_hcompute_avg_pool_stencil_1_port_controller_valid;
assign op_hcompute_avg_pool_stencil_1_write_start_in = op_hcompute_avg_pool_stencil_1_exe_start_out;
op_hcompute_avg_pool_stencil_1_write_start_pt__U681 op_hcompute_avg_pool_stencil_1_write_start (
    .in(op_hcompute_avg_pool_stencil_1_write_start_in),
    .out(op_hcompute_avg_pool_stencil_1_write_start_out)
);
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
array_delay_U682 op_hcompute_avg_pool_stencil_1_write_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_exe_start_clk = clk;
assign op_hcompute_avg_pool_stencil_exe_start_in = op_hcompute_avg_pool_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_avg_pool_stencil_exe_start (
    .clk(op_hcompute_avg_pool_stencil_exe_start_clk),
    .in(op_hcompute_avg_pool_stencil_exe_start_in),
    .out(op_hcompute_avg_pool_stencil_exe_start_out)
);
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_exe_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
array_delay_U639 op_hcompute_avg_pool_stencil_exe_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_port_controller_clk = clk;
affine_controller__U610 op_hcompute_avg_pool_stencil_port_controller (
    .clk(op_hcompute_avg_pool_stencil_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U167_clk = clk;
affine_controller__U144 op_hcompute_avg_pool_stencil_port_controller_U167 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U167_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U167_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U167_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U191_clk = clk;
affine_controller__U168 op_hcompute_avg_pool_stencil_port_controller_U191 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U191_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U191_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U191_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U215_clk = clk;
affine_controller__U192 op_hcompute_avg_pool_stencil_port_controller_U215 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U215_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U215_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U215_d)
);
assign op_hcompute_avg_pool_stencil_port_controller_U239_clk = clk;
affine_controller__U216 op_hcompute_avg_pool_stencil_port_controller_U239 (
    .clk(op_hcompute_avg_pool_stencil_port_controller_U239_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_U239_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_U239_d)
);
assign op_hcompute_avg_pool_stencil_read_start = op_hcompute_avg_pool_stencil_port_controller_valid;
assign op_hcompute_avg_pool_stencil_write_start_in = op_hcompute_avg_pool_stencil_exe_start_out;
op_hcompute_avg_pool_stencil_write_start_pt__U633 op_hcompute_avg_pool_stencil_write_start (
    .in(op_hcompute_avg_pool_stencil_write_start_in),
    .out(op_hcompute_avg_pool_stencil_write_start_out)
);
assign op_hcompute_avg_pool_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
array_delay_U634 op_hcompute_avg_pool_stencil_write_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_write_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_write_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U740_out;
cu_op_hcompute_hw_input_stencil op_hcompute_hw_input_stencil (
    .clk(op_hcompute_hw_input_stencil_clk),
    .input_copy_stencil_op_hcompute_hw_input_stencil_read(op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read),
    .hw_input_stencil_op_hcompute_hw_input_stencil_write(op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write)
);
assign op_hcompute_hw_input_stencil_exe_start_clk = clk;
assign op_hcompute_hw_input_stencil_exe_start_in = op_hcompute_hw_input_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_stencil_exe_start (
    .clk(op_hcompute_hw_input_stencil_exe_start_clk),
    .in(op_hcompute_hw_input_stencil_exe_start_in),
    .out(op_hcompute_hw_input_stencil_exe_start_out)
);
assign op_hcompute_hw_input_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U605 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_port_controller_clk = clk;
affine_controller__U576 op_hcompute_hw_input_stencil_port_controller (
    .clk(op_hcompute_hw_input_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U119_clk = clk;
affine_controller__U96 op_hcompute_hw_input_stencil_port_controller_U119 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U119_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U119_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U119_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U143_clk = clk;
affine_controller__U120 op_hcompute_hw_input_stencil_port_controller_U143 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U143_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U143_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U143_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U23_clk = clk;
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller_U23 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U23_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U23_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U23_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U47_clk = clk;
affine_controller__U24 op_hcompute_hw_input_stencil_port_controller_U47 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U47_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U47_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U47_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U71_clk = clk;
affine_controller__U48 op_hcompute_hw_input_stencil_port_controller_U71 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U71_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U71_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U95_clk = clk;
affine_controller__U72 op_hcompute_hw_input_stencil_port_controller_U95 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U95_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U95_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U95_d)
);
assign op_hcompute_hw_input_stencil_read_start = op_hcompute_hw_input_stencil_port_controller_valid;
assign op_hcompute_hw_input_stencil_write_start_in = op_hcompute_hw_input_stencil_exe_start_out;
op_hcompute_hw_input_stencil_write_start_pt__U599 op_hcompute_hw_input_stencil_write_start (
    .in(op_hcompute_hw_input_stencil_write_start_in),
    .out(op_hcompute_hw_input_stencil_write_start_out)
);
assign op_hcompute_hw_input_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U600 op_hcompute_hw_input_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read[0] = avg_pool_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .avg_pool_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_avg_pool_stencil_op_hcompute_hw_output_stencil_read),
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
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U735 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U692 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U455_clk = clk;
affine_controller__U432 op_hcompute_hw_output_stencil_port_controller_U455 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U455_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U455_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U455_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U479_clk = clk;
affine_controller__U456 op_hcompute_hw_output_stencil_port_controller_U479 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U479_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U479_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U479_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U503_clk = clk;
affine_controller__U480 op_hcompute_hw_output_stencil_port_controller_U503 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U503_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U503_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U503_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U527_clk = clk;
affine_controller__U504 op_hcompute_hw_output_stencil_port_controller_U527 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U527_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U527_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U527_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U551_clk = clk;
affine_controller__U528 op_hcompute_hw_output_stencil_port_controller_U551 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U551_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U551_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U551_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U575_clk = clk;
affine_controller__U552 op_hcompute_hw_output_stencil_port_controller_U575 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U575_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U575_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U575_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start_in = op_hcompute_hw_output_stencil_exe_start_out;
op_hcompute_hw_output_stencil_write_start_pt__U729 op_hcompute_hw_output_stencil_write_start (
    .in(op_hcompute_hw_output_stencil_write_start_in),
    .out(hw_output_stencil_op_hcompute_hw_output_stencil_write_en)
);
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U730 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start;
endmodule

