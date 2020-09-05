// Module `memtile_long_delay__U154` defined externally
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

module delay__U156 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U157_in;
wire _U157_clk;
assign _U157_in = wdata;
assign _U157_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U157 (
    .in(_U157_in),
    .clk(_U157_clk),
    .out(rdata)
);
endmodule

module delay__U151 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U152_in;
wire _U152_clk;
assign _U152_in = wdata;
assign _U152_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U152 (
    .in(_U152_in),
    .clk(_U152_clk),
    .out(rdata)
);
endmodule

module delay__U143 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U144_in;
wire _U144_clk;
wire [15:0] _U144_out;
wire [15:0] _U145_in;
wire _U145_clk;
wire [15:0] _U145_out;
wire [15:0] _U146_in;
wire _U146_clk;
wire [15:0] _U146_out;
wire [15:0] _U147_in;
wire _U147_clk;
wire [15:0] _U147_out;
wire [15:0] _U148_in;
wire _U148_clk;
wire [15:0] _U148_out;
wire [15:0] _U149_in;
wire _U149_clk;
assign _U144_in = wdata;
assign _U144_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U144 (
    .in(_U144_in),
    .clk(_U144_clk),
    .out(_U144_out)
);
assign _U145_in = _U144_out;
assign _U145_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U145 (
    .in(_U145_in),
    .clk(_U145_clk),
    .out(_U145_out)
);
assign _U146_in = _U145_out;
assign _U146_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U146 (
    .in(_U146_in),
    .clk(_U146_clk),
    .out(_U146_out)
);
assign _U147_in = _U146_out;
assign _U147_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U147 (
    .in(_U147_in),
    .clk(_U147_clk),
    .out(_U147_out)
);
assign _U148_in = _U147_out;
assign _U148_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U148 (
    .in(_U148_in),
    .clk(_U148_clk),
    .out(_U148_out)
);
assign _U149_in = _U148_out;
assign _U149_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U149 (
    .in(_U149_in),
    .clk(_U149_clk),
    .out(rdata)
);
endmodule

module hw_input_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_avg_pool_stencil_1_read_ren,
    input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0],
    output [15:0] op_hcompute_avg_pool_stencil_1_read [3:0],
    input op_hcompute_hw_input_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [3:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0]
);
wire delay_sr_U150_clk;
wire [15:0] delay_sr_U150_wdata;
wire [15:0] delay_sr_U150_rdata;
wire delay_sr_U150_rst_n;
wire delay_sr_U150_flush;
wire delay_sr_U153_clk;
wire [15:0] delay_sr_U153_wdata;
wire [15:0] delay_sr_U153_rdata;
wire delay_sr_U153_rst_n;
wire delay_sr_U153_flush;
wire delay_sr_U155_clk;
wire [15:0] delay_sr_U155_wdata;
wire [15:0] delay_sr_U155_rdata;
wire delay_sr_U155_rst_n;
wire delay_sr_U155_flush;
wire delay_sr_U158_clk;
wire [15:0] delay_sr_U158_wdata;
wire [15:0] delay_sr_U158_rdata;
wire delay_sr_U158_rst_n;
wire delay_sr_U158_flush;
assign delay_sr_U150_clk = clk;
assign delay_sr_U150_wdata = op_hcompute_hw_input_stencil_write[0];
assign delay_sr_U150_rst_n = rst_n;
assign delay_sr_U150_flush = flush;
delay__U143 delay_sr_U150 (
    .clk(delay_sr_U150_clk),
    .wdata(delay_sr_U150_wdata),
    .rdata(delay_sr_U150_rdata),
    .rst_n(delay_sr_U150_rst_n),
    .flush(delay_sr_U150_flush)
);
assign delay_sr_U153_clk = clk;
assign delay_sr_U153_wdata = delay_sr_U150_rdata;
assign delay_sr_U153_rst_n = rst_n;
assign delay_sr_U153_flush = flush;
delay__U151 delay_sr_U153 (
    .clk(delay_sr_U153_clk),
    .wdata(delay_sr_U153_wdata),
    .rdata(delay_sr_U153_rdata),
    .rst_n(delay_sr_U153_rst_n),
    .flush(delay_sr_U153_flush)
);
assign delay_sr_U155_clk = clk;
assign delay_sr_U155_wdata = delay_sr_U153_rdata;
assign delay_sr_U155_rst_n = rst_n;
assign delay_sr_U155_flush = flush;
memtile_long_delay__U154 delay_sr_U155 (
    .clk(delay_sr_U155_clk),
    .wdata(delay_sr_U155_wdata),
    .rdata(delay_sr_U155_rdata),
    .rst_n(delay_sr_U155_rst_n),
    .flush(delay_sr_U155_flush)
);
assign delay_sr_U158_clk = clk;
assign delay_sr_U158_wdata = delay_sr_U155_rdata;
assign delay_sr_U158_rst_n = rst_n;
assign delay_sr_U158_flush = flush;
delay__U156 delay_sr_U158 (
    .clk(delay_sr_U158_clk),
    .wdata(delay_sr_U158_wdata),
    .rdata(delay_sr_U158_rdata),
    .rst_n(delay_sr_U158_rst_n),
    .flush(delay_sr_U158_flush)
);
assign op_hcompute_avg_pool_stencil_1_read[3] = delay_sr_U153_rdata;
assign op_hcompute_avg_pool_stencil_1_read[2] = delay_sr_U150_rdata;
assign op_hcompute_avg_pool_stencil_1_read[1] = delay_sr_U155_rdata;
assign op_hcompute_avg_pool_stencil_1_read[0] = delay_sr_U158_rdata;
endmodule

module delay__U138 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U139_in;
wire _U139_clk;
wire [15:0] _U139_out;
wire [15:0] _U140_in;
wire _U140_clk;
wire [15:0] _U140_out;
wire [15:0] _U141_in;
wire _U141_clk;
assign _U139_in = wdata;
assign _U139_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U139 (
    .in(_U139_in),
    .clk(_U139_clk),
    .out(_U139_out)
);
assign _U140_in = _U139_out;
assign _U140_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U140 (
    .in(_U140_in),
    .clk(_U140_clk),
    .out(_U140_out)
);
assign _U141_in = _U140_out;
assign _U141_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U141 (
    .in(_U141_in),
    .clk(_U141_clk),
    .out(rdata)
);
endmodule

module delay__U132 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U133_in;
wire _U133_clk;
wire [15:0] _U133_out;
wire [15:0] _U134_in;
wire _U134_clk;
wire [15:0] _U134_out;
wire [15:0] _U135_in;
wire _U135_clk;
wire [15:0] _U135_out;
wire [15:0] _U136_in;
wire _U136_clk;
assign _U133_in = wdata;
assign _U133_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U133 (
    .in(_U133_in),
    .clk(_U133_clk),
    .out(_U133_out)
);
assign _U134_in = _U133_out;
assign _U134_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U134 (
    .in(_U134_in),
    .clk(_U134_clk),
    .out(_U134_out)
);
assign _U135_in = _U134_out;
assign _U135_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U135 (
    .in(_U135_in),
    .clk(_U135_clk),
    .out(_U135_out)
);
assign _U136_in = _U135_out;
assign _U136_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U136 (
    .in(_U136_in),
    .clk(_U136_clk),
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

module avg_pool_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_avg_pool_stencil_1_write_wen,
    input [15:0] op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0],
    input [15:0] op_hcompute_avg_pool_stencil_1_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [3:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U137_clk;
wire [15:0] delay_sr_U137_wdata;
wire [15:0] delay_sr_U137_rdata;
wire delay_sr_U137_rst_n;
wire delay_sr_U137_flush;
assign delay_sr_U137_clk = clk;
assign delay_sr_U137_wdata = op_hcompute_avg_pool_stencil_1_write[0];
assign delay_sr_U137_rst_n = rst_n;
assign delay_sr_U137_flush = flush;
delay__U132 delay_sr_U137 (
    .clk(delay_sr_U137_clk),
    .wdata(delay_sr_U137_wdata),
    .rdata(delay_sr_U137_rdata),
    .rst_n(delay_sr_U137_rst_n),
    .flush(delay_sr_U137_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U137_rdata;
endmodule

module avg_pool_stencil_clkwrk_dsa0_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_avg_pool_stencil_1_read_ren,
    input [15:0] op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0],
    output [15:0] op_hcompute_avg_pool_stencil_1_read [0:0],
    input op_hcompute_avg_pool_stencil_write_wen,
    input [15:0] op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0],
    input [15:0] op_hcompute_avg_pool_stencil_write [0:0]
);
wire delay_sr_U142_clk;
wire [15:0] delay_sr_U142_wdata;
wire [15:0] delay_sr_U142_rdata;
wire delay_sr_U142_rst_n;
wire delay_sr_U142_flush;
assign delay_sr_U142_clk = clk;
assign delay_sr_U142_wdata = op_hcompute_avg_pool_stencil_write[0];
assign delay_sr_U142_rst_n = rst_n;
assign delay_sr_U142_flush = flush;
delay__U138 delay_sr_U142 (
    .clk(delay_sr_U142_clk),
    .wdata(delay_sr_U142_wdata),
    .rdata(delay_sr_U142_rdata),
    .rst_n(delay_sr_U142_rst_n),
    .flush(delay_sr_U142_flush)
);
assign op_hcompute_avg_pool_stencil_1_read[0] = delay_sr_U142_rdata;
endmodule

module array_delay_U94 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U95_in;
wire _U95_clk;
wire [15:0] _U95_out;
wire [15:0] _U96_in;
wire _U96_clk;
wire [15:0] _U96_out;
wire [15:0] _U97_in;
wire _U97_clk;
wire [15:0] _U97_out;
wire [15:0] _U98_in;
wire _U98_clk;
wire [15:0] _U98_out;
assign _U95_in = in[0];
assign _U95_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U95 (
    .in(_U95_in),
    .clk(_U95_clk),
    .out(_U95_out)
);
assign _U96_in = in[1];
assign _U96_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U96 (
    .in(_U96_in),
    .clk(_U96_clk),
    .out(_U96_out)
);
assign _U97_in = in[2];
assign _U97_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U97 (
    .in(_U97_in),
    .clk(_U97_clk),
    .out(_U97_out)
);
assign _U98_in = in[3];
assign _U98_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U98 (
    .in(_U98_in),
    .clk(_U98_clk),
    .out(_U98_out)
);
assign out[3] = _U98_out;
assign out[2] = _U97_out;
assign out[1] = _U96_out;
assign out[0] = _U95_out;
endmodule

module array_delay_U89 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U90_in;
wire _U90_clk;
wire [15:0] _U90_out;
wire [15:0] _U91_in;
wire _U91_clk;
wire [15:0] _U91_out;
wire [15:0] _U92_in;
wire _U92_clk;
wire [15:0] _U92_out;
wire [15:0] _U93_in;
wire _U93_clk;
wire [15:0] _U93_out;
assign _U90_in = in[0];
assign _U90_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U90 (
    .in(_U90_in),
    .clk(_U90_clk),
    .out(_U90_out)
);
assign _U91_in = in[1];
assign _U91_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U91 (
    .in(_U91_in),
    .clk(_U91_clk),
    .out(_U91_out)
);
assign _U92_in = in[2];
assign _U92_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U92 (
    .in(_U92_in),
    .clk(_U92_clk),
    .out(_U92_out)
);
assign _U93_in = in[3];
assign _U93_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U93 (
    .in(_U93_in),
    .clk(_U93_clk),
    .out(_U93_out)
);
assign out[3] = _U93_out;
assign out[2] = _U92_out;
assign out[1] = _U91_out;
assign out[0] = _U90_out;
endmodule

module array_delay_U61 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U62_in;
wire _U62_clk;
wire [15:0] _U62_out;
wire [15:0] _U63_in;
wire _U63_clk;
wire [15:0] _U63_out;
wire [15:0] _U64_in;
wire _U64_clk;
wire [15:0] _U64_out;
wire [15:0] _U65_in;
wire _U65_clk;
wire [15:0] _U65_out;
assign _U62_in = in[0];
assign _U62_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U62 (
    .in(_U62_in),
    .clk(_U62_clk),
    .out(_U62_out)
);
assign _U63_in = in[1];
assign _U63_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U63 (
    .in(_U63_in),
    .clk(_U63_clk),
    .out(_U63_out)
);
assign _U64_in = in[2];
assign _U64_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U64 (
    .in(_U64_in),
    .clk(_U64_clk),
    .out(_U64_out)
);
assign _U65_in = in[3];
assign _U65_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U65 (
    .in(_U65_in),
    .clk(_U65_clk),
    .out(_U65_out)
);
assign out[3] = _U65_out;
assign out[2] = _U64_out;
assign out[1] = _U63_out;
assign out[0] = _U62_out;
endmodule

module array_delay_U56 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U57_in;
wire _U57_clk;
wire [15:0] _U57_out;
wire [15:0] _U58_in;
wire _U58_clk;
wire [15:0] _U58_out;
wire [15:0] _U59_in;
wire _U59_clk;
wire [15:0] _U59_out;
wire [15:0] _U60_in;
wire _U60_clk;
wire [15:0] _U60_out;
assign _U57_in = in[0];
assign _U57_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U57 (
    .in(_U57_in),
    .clk(_U57_clk),
    .out(_U57_out)
);
assign _U58_in = in[1];
assign _U58_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U58 (
    .in(_U58_in),
    .clk(_U58_clk),
    .out(_U58_out)
);
assign _U59_in = in[2];
assign _U59_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U59 (
    .in(_U59_in),
    .clk(_U59_clk),
    .out(_U59_out)
);
assign _U60_in = in[3];
assign _U60_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U60 (
    .in(_U60_in),
    .clk(_U60_clk),
    .out(_U60_out)
);
assign out[3] = _U60_out;
assign out[2] = _U59_out;
assign out[1] = _U58_out;
assign out[0] = _U57_out;
endmodule

module array_delay_U28 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U29_in;
wire _U29_clk;
wire [15:0] _U29_out;
wire [15:0] _U30_in;
wire _U30_clk;
wire [15:0] _U30_out;
wire [15:0] _U31_in;
wire _U31_clk;
wire [15:0] _U31_out;
wire [15:0] _U32_in;
wire _U32_clk;
wire [15:0] _U32_out;
assign _U29_in = in[0];
assign _U29_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U29 (
    .in(_U29_in),
    .clk(_U29_clk),
    .out(_U29_out)
);
assign _U30_in = in[1];
assign _U30_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U30 (
    .in(_U30_in),
    .clk(_U30_clk),
    .out(_U30_out)
);
assign _U31_in = in[2];
assign _U31_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U31 (
    .in(_U31_in),
    .clk(_U31_clk),
    .out(_U31_out)
);
assign _U32_in = in[3];
assign _U32_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U32 (
    .in(_U32_in),
    .clk(_U32_clk),
    .out(_U32_out)
);
assign out[3] = _U32_out;
assign out[2] = _U31_out;
assign out[1] = _U30_out;
assign out[0] = _U29_out;
endmodule

module array_delay_U23 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U24_in;
wire _U24_clk;
wire [15:0] _U24_out;
wire [15:0] _U25_in;
wire _U25_clk;
wire [15:0] _U25_out;
wire [15:0] _U26_in;
wire _U26_clk;
wire [15:0] _U26_out;
wire [15:0] _U27_in;
wire _U27_clk;
wire [15:0] _U27_out;
assign _U24_in = in[0];
assign _U24_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U24 (
    .in(_U24_in),
    .clk(_U24_clk),
    .out(_U24_out)
);
assign _U25_in = in[1];
assign _U25_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U25 (
    .in(_U25_in),
    .clk(_U25_clk),
    .out(_U25_out)
);
assign _U26_in = in[2];
assign _U26_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U26 (
    .in(_U26_in),
    .clk(_U26_clk),
    .out(_U26_out)
);
assign _U27_in = in[3];
assign _U27_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U27 (
    .in(_U27_in),
    .clk(_U27_clk),
    .out(_U27_out)
);
assign out[3] = _U27_out;
assign out[2] = _U26_out;
assign out[1] = _U25_out;
assign out[0] = _U24_out;
endmodule

module array_delay_U127 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U128_in;
wire _U128_clk;
wire [15:0] _U128_out;
wire [15:0] _U129_in;
wire _U129_clk;
wire [15:0] _U129_out;
wire [15:0] _U130_in;
wire _U130_clk;
wire [15:0] _U130_out;
wire [15:0] _U131_in;
wire _U131_clk;
wire [15:0] _U131_out;
assign _U128_in = in[0];
assign _U128_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U128 (
    .in(_U128_in),
    .clk(_U128_clk),
    .out(_U128_out)
);
assign _U129_in = in[1];
assign _U129_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U129 (
    .in(_U129_in),
    .clk(_U129_clk),
    .out(_U129_out)
);
assign _U130_in = in[2];
assign _U130_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U130 (
    .in(_U130_in),
    .clk(_U130_clk),
    .out(_U130_out)
);
assign _U131_in = in[3];
assign _U131_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U131 (
    .in(_U131_in),
    .clk(_U131_clk),
    .out(_U131_out)
);
assign out[3] = _U131_out;
assign out[2] = _U130_out;
assign out[1] = _U129_out;
assign out[0] = _U128_out;
endmodule

module array_delay_U122 (
    input clk,
    input [15:0] in [3:0],
    output [15:0] out [3:0]
);
wire [15:0] _U123_in;
wire _U123_clk;
wire [15:0] _U123_out;
wire [15:0] _U124_in;
wire _U124_clk;
wire [15:0] _U124_out;
wire [15:0] _U125_in;
wire _U125_clk;
wire [15:0] _U125_out;
wire [15:0] _U126_in;
wire _U126_clk;
wire [15:0] _U126_out;
assign _U123_in = in[0];
assign _U123_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U123 (
    .in(_U123_in),
    .clk(_U123_clk),
    .out(_U123_out)
);
assign _U124_in = in[1];
assign _U124_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U124 (
    .in(_U124_in),
    .clk(_U124_clk),
    .out(_U124_out)
);
assign _U125_in = in[2];
assign _U125_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U125 (
    .in(_U125_in),
    .clk(_U125_clk),
    .out(_U125_out)
);
assign _U126_in = in[3];
assign _U126_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U126 (
    .in(_U126_in),
    .clk(_U126_clk),
    .out(_U126_out)
);
assign out[3] = _U126_out;
assign out[2] = _U125_out;
assign out[1] = _U124_out;
assign out[0] = _U123_out;
endmodule

module aff__U67 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0048);
endmodule

module affine_controller__U66 (
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
aff__U67 affine_func (
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

module aff__U34 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h0045);
endmodule

module affine_controller__U33 (
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
aff__U34 affine_func (
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

module aff__U100 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0080 * d[2])))) + (16'(16'h0002 * d[3])))) + 16'h004c);
endmodule

module affine_controller__U99 (
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
aff__U100 affine_func (
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

module aff__U1 (
    output [15:0] out,
    input [15:0] d [3:0]
);
assign out = 16'((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h1000 * d[1])))) + (16'(16'h0040 * d[2])))) + (16'(16'h0001 * d[3])))) + 16'h0001);
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
wire [15:0] _U159_in;
wire _U159_clk;
wire [15:0] _U159_out;
wire avg_pool_stencil_clk;
wire avg_pool_stencil_rst_n;
wire avg_pool_stencil_flush;
wire avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen;
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write [0:0];
wire avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_clk;
wire avg_pool_stencil_clkwrk_dsa0_rst_n;
wire avg_pool_stencil_clkwrk_dsa0_flush;
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read [0:0];
wire avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen;
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars [3:0];
wire [15:0] avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write [0:0];
wire hw_input_stencil_clk;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_flush;
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
wire op_hcompute_avg_pool_stencil_1_read_start;
wire op_hcompute_avg_pool_stencil_1_write_start;
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
wire op_hcompute_avg_pool_stencil_read_start;
wire op_hcompute_avg_pool_stencil_write_start;
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
wire op_hcompute_hw_input_stencil_read_start;
wire op_hcompute_hw_input_stencil_write_start;
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
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [3:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [3:0];
assign _U159_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U159_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U159 (
    .in(_U159_in),
    .clk(_U159_clk),
    .out(_U159_out)
);
assign avg_pool_stencil_clk = clk;
assign avg_pool_stencil_rst_n = rst_n;
assign avg_pool_stencil_flush = flush;
assign avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen = op_hcompute_avg_pool_stencil_1_write_start;
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
    .rst_n(avg_pool_stencil_rst_n),
    .flush(avg_pool_stencil_flush),
    .op_hcompute_avg_pool_stencil_1_write_wen(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_wen),
    .op_hcompute_avg_pool_stencil_1_write_ctrl_vars(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_write(avg_pool_stencil_op_hcompute_avg_pool_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(avg_pool_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(avg_pool_stencil_op_hcompute_hw_output_stencil_read)
);
assign avg_pool_stencil_clkwrk_dsa0_clk = clk;
assign avg_pool_stencil_clkwrk_dsa0_rst_n = rst_n;
assign avg_pool_stencil_clkwrk_dsa0_flush = flush;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen = op_hcompute_avg_pool_stencil_write_start;
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[3] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[3];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[2] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[2];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[1] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[1];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars[0] = op_hcompute_avg_pool_stencil_write_start_control_vars_out[0];
assign avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0] = op_hcompute_avg_pool_stencil_avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write[0];
avg_pool_stencil_clkwrk_dsa0_ub avg_pool_stencil_clkwrk_dsa0 (
    .clk(avg_pool_stencil_clkwrk_dsa0_clk),
    .rst_n(avg_pool_stencil_clkwrk_dsa0_rst_n),
    .flush(avg_pool_stencil_clkwrk_dsa0_flush),
    .op_hcompute_avg_pool_stencil_1_read_ren(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ren),
    .op_hcompute_avg_pool_stencil_1_read_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read_ctrl_vars),
    .op_hcompute_avg_pool_stencil_1_read(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_1_read),
    .op_hcompute_avg_pool_stencil_write_wen(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_wen),
    .op_hcompute_avg_pool_stencil_write_ctrl_vars(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write_ctrl_vars),
    .op_hcompute_avg_pool_stencil_write(avg_pool_stencil_clkwrk_dsa0_op_hcompute_avg_pool_stencil_write)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ren = op_hcompute_avg_pool_stencil_1_read_start;
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign hw_input_stencil_op_hcompute_avg_pool_stencil_1_read_ctrl_vars[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_wen = op_hcompute_hw_input_stencil_write_start;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[3] = op_hcompute_hw_input_stencil_write_start_control_vars_out[3];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_stencil_write_start_control_vars_out[2];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_stencil_write_start_control_vars_out[1];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_stencil_write_start_control_vars_out[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(hw_input_stencil_clk),
    .rst_n(hw_input_stencil_rst_n),
    .flush(hw_input_stencil_flush),
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
array_delay_U94 op_hcompute_avg_pool_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_1_port_controller_clk = clk;
affine_controller__U66 op_hcompute_avg_pool_stencil_1_port_controller (
    .clk(op_hcompute_avg_pool_stencil_1_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_1_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_1_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_1_read_start = op_hcompute_avg_pool_stencil_1_port_controller_valid;
assign op_hcompute_avg_pool_stencil_1_write_start = op_hcompute_avg_pool_stencil_1_exe_start_out;
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_1_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_1_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_1_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_1_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_1_port_controller_d[0];
array_delay_U89 op_hcompute_avg_pool_stencil_1_write_start_control_vars (
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
array_delay_U61 op_hcompute_avg_pool_stencil_exe_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_exe_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_exe_start_control_vars_out)
);
assign op_hcompute_avg_pool_stencil_port_controller_clk = clk;
affine_controller__U33 op_hcompute_avg_pool_stencil_port_controller (
    .clk(op_hcompute_avg_pool_stencil_port_controller_clk),
    .valid(op_hcompute_avg_pool_stencil_port_controller_valid),
    .d(op_hcompute_avg_pool_stencil_port_controller_d)
);
assign op_hcompute_avg_pool_stencil_read_start = op_hcompute_avg_pool_stencil_port_controller_valid;
assign op_hcompute_avg_pool_stencil_write_start = op_hcompute_avg_pool_stencil_exe_start_out;
assign op_hcompute_avg_pool_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[3] = op_hcompute_avg_pool_stencil_port_controller_d[3];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[2] = op_hcompute_avg_pool_stencil_port_controller_d[2];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[1] = op_hcompute_avg_pool_stencil_port_controller_d[1];
assign op_hcompute_avg_pool_stencil_write_start_control_vars_in[0] = op_hcompute_avg_pool_stencil_port_controller_d[0];
array_delay_U56 op_hcompute_avg_pool_stencil_write_start_control_vars (
    .clk(op_hcompute_avg_pool_stencil_write_start_control_vars_clk),
    .in(op_hcompute_avg_pool_stencil_write_start_control_vars_in),
    .out(op_hcompute_avg_pool_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U159_out;
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
array_delay_U28 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_port_controller_clk = clk;
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller (
    .clk(op_hcompute_hw_input_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_d)
);
assign op_hcompute_hw_input_stencil_read_start = op_hcompute_hw_input_stencil_port_controller_valid;
assign op_hcompute_hw_input_stencil_write_start = op_hcompute_hw_input_stencil_exe_start_out;
assign op_hcompute_hw_input_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[3] = op_hcompute_hw_input_stencil_port_controller_d[3];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U23 op_hcompute_hw_input_stencil_write_start_control_vars (
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
array_delay_U127 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U99 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[3] = op_hcompute_hw_output_stencil_port_controller_d[3];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U122 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start;
endmodule

