// Module `memtile_long_delay__U572` defined externally
// Module `memtile_long_delay__U566` defined externally
// Module `memtile_long_delay__U560` defined externally
// Module `memtile_long_delay__U552` defined externally
// Module `memtile_long_delay__U535` defined externally
// Module `memtile_long_delay__U527` defined externally
// Module `memtile_long_delay__U504` defined externally
// Module `memtile_long_delay__U496` defined externally
// Module `memtile_long_delay__U473` defined externally
// Module `memtile_long_delay__U465` defined externally
// Module `memtile_long_delay__U432` defined externally
// Module `memtile_long_delay__U425` defined externally
// Module `memtile_long_delay__U423` defined externally
// Module `memtile_long_delay__U415` defined externally
// Module `memtile_long_delay__U401` defined externally
// Module `memtile_long_delay__U393` defined externally
module lgxy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgxy_stencil_1_write_wen,
    input [15:0] op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxy_stencil_1_write [0:0]
);
wire delay_sr_U433_clk;
wire [15:0] delay_sr_U433_wdata;
wire [15:0] delay_sr_U433_rdata;
wire delay_sr_U433_rst_n;
wire delay_sr_U433_flush;
assign delay_sr_U433_clk = clk;
assign delay_sr_U433_wdata = op_hcompute_lgxy_stencil_1_write[0];
assign delay_sr_U433_rst_n = rst_n;
assign delay_sr_U433_flush = flush;
memtile_long_delay__U432 delay_sr_U433 (
    .clk(delay_sr_U433_clk),
    .wdata(delay_sr_U433_wdata),
    .rdata(delay_sr_U433_rdata),
    .rst_n(delay_sr_U433_rst_n),
    .flush(delay_sr_U433_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U433_rdata;
endmodule

module lgxx_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgxx_stencil_1_write_wen,
    input [15:0] op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxx_stencil_1_write [0:0]
);
wire delay_sr_U426_clk;
wire [15:0] delay_sr_U426_wdata;
wire [15:0] delay_sr_U426_rdata;
wire delay_sr_U426_rst_n;
wire delay_sr_U426_flush;
assign delay_sr_U426_clk = clk;
assign delay_sr_U426_wdata = op_hcompute_lgxx_stencil_1_write[0];
assign delay_sr_U426_rst_n = rst_n;
assign delay_sr_U426_flush = flush;
memtile_long_delay__U425 delay_sr_U426 (
    .clk(delay_sr_U426_clk),
    .wdata(delay_sr_U426_wdata),
    .rdata(delay_sr_U426_rdata),
    .rst_n(delay_sr_U426_rst_n),
    .flush(delay_sr_U426_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U426_rdata;
endmodule

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

module delay__U577 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U578_in;
wire _U578_clk;
assign _U578_in = wdata;
assign _U578_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U578 (
    .in(_U578_in),
    .clk(_U578_clk),
    .out(rdata)
);
endmodule

module delay__U574 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U575_in;
wire _U575_clk;
assign _U575_in = wdata;
assign _U575_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U575 (
    .in(_U575_in),
    .clk(_U575_clk),
    .out(rdata)
);
endmodule

module delay__U568 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U569_in;
wire _U569_clk;
wire [15:0] _U569_out;
wire [15:0] _U570_in;
wire _U570_clk;
assign _U569_in = wdata;
assign _U569_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U569 (
    .in(_U569_in),
    .clk(_U569_clk),
    .out(_U569_out)
);
assign _U570_in = _U569_out;
assign _U570_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U570 (
    .in(_U570_in),
    .clk(_U570_clk),
    .out(rdata)
);
endmodule

module delay__U562 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U563_in;
wire _U563_clk;
wire [15:0] _U563_out;
wire [15:0] _U564_in;
wire _U564_clk;
assign _U563_in = wdata;
assign _U563_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U563 (
    .in(_U563_in),
    .clk(_U563_clk),
    .out(_U563_out)
);
assign _U564_in = _U563_out;
assign _U564_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U564 (
    .in(_U564_in),
    .clk(_U564_clk),
    .out(rdata)
);
endmodule

module delay__U557 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U558_in;
wire _U558_clk;
assign _U558_in = wdata;
assign _U558_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U558 (
    .in(_U558_in),
    .clk(_U558_clk),
    .out(rdata)
);
endmodule

module delay__U554 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U555_in;
wire _U555_clk;
assign _U555_in = wdata;
assign _U555_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U555 (
    .in(_U555_in),
    .clk(_U555_clk),
    .out(rdata)
);
endmodule

module delay__U548 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U549_in;
wire _U549_clk;
wire [15:0] _U549_out;
wire [15:0] _U550_in;
wire _U550_clk;
assign _U549_in = wdata;
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

module delay__U543 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U544_in;
wire _U544_clk;
wire [15:0] _U544_out;
wire [15:0] _U545_in;
wire _U545_clk;
wire [15:0] _U545_out;
wire [15:0] _U546_in;
wire _U546_clk;
assign _U544_in = wdata;
assign _U544_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U544 (
    .in(_U544_in),
    .clk(_U544_clk),
    .out(_U544_out)
);
assign _U545_in = _U544_out;
assign _U545_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U545 (
    .in(_U545_in),
    .clk(_U545_clk),
    .out(_U545_out)
);
assign _U546_in = _U545_out;
assign _U546_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U546 (
    .in(_U546_in),
    .clk(_U546_clk),
    .out(rdata)
);
endmodule

module padded16_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U547_clk;
wire [15:0] delay_sr_U547_wdata;
wire [15:0] delay_sr_U547_rdata;
wire delay_sr_U547_rst_n;
wire delay_sr_U547_flush;
wire delay_sr_U551_clk;
wire [15:0] delay_sr_U551_wdata;
wire [15:0] delay_sr_U551_rdata;
wire delay_sr_U551_rst_n;
wire delay_sr_U551_flush;
wire delay_sr_U553_clk;
wire [15:0] delay_sr_U553_wdata;
wire [15:0] delay_sr_U553_rdata;
wire delay_sr_U553_rst_n;
wire delay_sr_U553_flush;
wire delay_sr_U556_clk;
wire [15:0] delay_sr_U556_wdata;
wire [15:0] delay_sr_U556_rdata;
wire delay_sr_U556_rst_n;
wire delay_sr_U556_flush;
wire delay_sr_U559_clk;
wire [15:0] delay_sr_U559_wdata;
wire [15:0] delay_sr_U559_rdata;
wire delay_sr_U559_rst_n;
wire delay_sr_U559_flush;
wire delay_sr_U561_clk;
wire [15:0] delay_sr_U561_wdata;
wire [15:0] delay_sr_U561_rdata;
wire delay_sr_U561_rst_n;
wire delay_sr_U561_flush;
wire delay_sr_U565_clk;
wire [15:0] delay_sr_U565_wdata;
wire [15:0] delay_sr_U565_rdata;
wire delay_sr_U565_rst_n;
wire delay_sr_U565_flush;
wire delay_sr_U567_clk;
wire [15:0] delay_sr_U567_wdata;
wire [15:0] delay_sr_U567_rdata;
wire delay_sr_U567_rst_n;
wire delay_sr_U567_flush;
wire delay_sr_U571_clk;
wire [15:0] delay_sr_U571_wdata;
wire [15:0] delay_sr_U571_rdata;
wire delay_sr_U571_rst_n;
wire delay_sr_U571_flush;
wire delay_sr_U573_clk;
wire [15:0] delay_sr_U573_wdata;
wire [15:0] delay_sr_U573_rdata;
wire delay_sr_U573_rst_n;
wire delay_sr_U573_flush;
wire delay_sr_U576_clk;
wire [15:0] delay_sr_U576_wdata;
wire [15:0] delay_sr_U576_rdata;
wire delay_sr_U576_rst_n;
wire delay_sr_U576_flush;
wire delay_sr_U579_clk;
wire [15:0] delay_sr_U579_wdata;
wire [15:0] delay_sr_U579_rdata;
wire delay_sr_U579_rst_n;
wire delay_sr_U579_flush;
assign delay_sr_U547_clk = clk;
assign delay_sr_U547_wdata = op_hcompute_padded16_global_wrapper_stencil_write[0];
assign delay_sr_U547_rst_n = rst_n;
assign delay_sr_U547_flush = flush;
delay__U543 delay_sr_U547 (
    .clk(delay_sr_U547_clk),
    .wdata(delay_sr_U547_wdata),
    .rdata(delay_sr_U547_rdata),
    .rst_n(delay_sr_U547_rst_n),
    .flush(delay_sr_U547_flush)
);
assign delay_sr_U551_clk = clk;
assign delay_sr_U551_wdata = delay_sr_U547_rdata;
assign delay_sr_U551_rst_n = rst_n;
assign delay_sr_U551_flush = flush;
delay__U548 delay_sr_U551 (
    .clk(delay_sr_U551_clk),
    .wdata(delay_sr_U551_wdata),
    .rdata(delay_sr_U551_rdata),
    .rst_n(delay_sr_U551_rst_n),
    .flush(delay_sr_U551_flush)
);
assign delay_sr_U553_clk = clk;
assign delay_sr_U553_wdata = delay_sr_U551_rdata;
assign delay_sr_U553_rst_n = rst_n;
assign delay_sr_U553_flush = flush;
memtile_long_delay__U552 delay_sr_U553 (
    .clk(delay_sr_U553_clk),
    .wdata(delay_sr_U553_wdata),
    .rdata(delay_sr_U553_rdata),
    .rst_n(delay_sr_U553_rst_n),
    .flush(delay_sr_U553_flush)
);
assign delay_sr_U556_clk = clk;
assign delay_sr_U556_wdata = delay_sr_U553_rdata;
assign delay_sr_U556_rst_n = rst_n;
assign delay_sr_U556_flush = flush;
delay__U554 delay_sr_U556 (
    .clk(delay_sr_U556_clk),
    .wdata(delay_sr_U556_wdata),
    .rdata(delay_sr_U556_rdata),
    .rst_n(delay_sr_U556_rst_n),
    .flush(delay_sr_U556_flush)
);
assign delay_sr_U559_clk = clk;
assign delay_sr_U559_wdata = delay_sr_U556_rdata;
assign delay_sr_U559_rst_n = rst_n;
assign delay_sr_U559_flush = flush;
delay__U557 delay_sr_U559 (
    .clk(delay_sr_U559_clk),
    .wdata(delay_sr_U559_wdata),
    .rdata(delay_sr_U559_rdata),
    .rst_n(delay_sr_U559_rst_n),
    .flush(delay_sr_U559_flush)
);
assign delay_sr_U561_clk = clk;
assign delay_sr_U561_wdata = delay_sr_U559_rdata;
assign delay_sr_U561_rst_n = rst_n;
assign delay_sr_U561_flush = flush;
memtile_long_delay__U560 delay_sr_U561 (
    .clk(delay_sr_U561_clk),
    .wdata(delay_sr_U561_wdata),
    .rdata(delay_sr_U561_rdata),
    .rst_n(delay_sr_U561_rst_n),
    .flush(delay_sr_U561_flush)
);
assign delay_sr_U565_clk = clk;
assign delay_sr_U565_wdata = delay_sr_U561_rdata;
assign delay_sr_U565_rst_n = rst_n;
assign delay_sr_U565_flush = flush;
delay__U562 delay_sr_U565 (
    .clk(delay_sr_U565_clk),
    .wdata(delay_sr_U565_wdata),
    .rdata(delay_sr_U565_rdata),
    .rst_n(delay_sr_U565_rst_n),
    .flush(delay_sr_U565_flush)
);
assign delay_sr_U567_clk = clk;
assign delay_sr_U567_wdata = delay_sr_U565_rdata;
assign delay_sr_U567_rst_n = rst_n;
assign delay_sr_U567_flush = flush;
memtile_long_delay__U566 delay_sr_U567 (
    .clk(delay_sr_U567_clk),
    .wdata(delay_sr_U567_wdata),
    .rdata(delay_sr_U567_rdata),
    .rst_n(delay_sr_U567_rst_n),
    .flush(delay_sr_U567_flush)
);
assign delay_sr_U571_clk = clk;
assign delay_sr_U571_wdata = delay_sr_U567_rdata;
assign delay_sr_U571_rst_n = rst_n;
assign delay_sr_U571_flush = flush;
delay__U568 delay_sr_U571 (
    .clk(delay_sr_U571_clk),
    .wdata(delay_sr_U571_wdata),
    .rdata(delay_sr_U571_rdata),
    .rst_n(delay_sr_U571_rst_n),
    .flush(delay_sr_U571_flush)
);
assign delay_sr_U573_clk = clk;
assign delay_sr_U573_wdata = delay_sr_U571_rdata;
assign delay_sr_U573_rst_n = rst_n;
assign delay_sr_U573_flush = flush;
memtile_long_delay__U572 delay_sr_U573 (
    .clk(delay_sr_U573_clk),
    .wdata(delay_sr_U573_wdata),
    .rdata(delay_sr_U573_rdata),
    .rst_n(delay_sr_U573_rst_n),
    .flush(delay_sr_U573_flush)
);
assign delay_sr_U576_clk = clk;
assign delay_sr_U576_wdata = delay_sr_U573_rdata;
assign delay_sr_U576_rst_n = rst_n;
assign delay_sr_U576_flush = flush;
delay__U574 delay_sr_U576 (
    .clk(delay_sr_U576_clk),
    .wdata(delay_sr_U576_wdata),
    .rdata(delay_sr_U576_rdata),
    .rst_n(delay_sr_U576_rst_n),
    .flush(delay_sr_U576_flush)
);
assign delay_sr_U579_clk = clk;
assign delay_sr_U579_wdata = delay_sr_U576_rdata;
assign delay_sr_U579_rst_n = rst_n;
assign delay_sr_U579_flush = flush;
delay__U577 delay_sr_U579 (
    .clk(delay_sr_U579_clk),
    .wdata(delay_sr_U579_wdata),
    .rdata(delay_sr_U579_rdata),
    .rst_n(delay_sr_U579_rst_n),
    .flush(delay_sr_U579_flush)
);
assign op_hcompute_grad_x_stencil_read[5] = delay_sr_U551_rdata;
assign op_hcompute_grad_x_stencil_read[4] = delay_sr_U565_rdata;
assign op_hcompute_grad_x_stencil_read[3] = delay_sr_U571_rdata;
assign op_hcompute_grad_x_stencil_read[2] = delay_sr_U561_rdata;
assign op_hcompute_grad_x_stencil_read[1] = delay_sr_U547_rdata;
assign op_hcompute_grad_x_stencil_read[0] = delay_sr_U567_rdata;
assign op_hcompute_grad_y_stencil_read[5] = delay_sr_U556_rdata;
assign op_hcompute_grad_y_stencil_read[4] = delay_sr_U553_rdata;
assign op_hcompute_grad_y_stencil_read[3] = delay_sr_U559_rdata;
assign op_hcompute_grad_y_stencil_read[2] = delay_sr_U573_rdata;
assign op_hcompute_grad_y_stencil_read[1] = delay_sr_U576_rdata;
assign op_hcompute_grad_y_stencil_read[0] = delay_sr_U579_rdata;
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
assign _U541_in = wdata;
assign _U541_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U541 (
    .in(_U541_in),
    .clk(_U541_clk),
    .out(rdata)
);
endmodule

module delay__U537 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U538_in;
wire _U538_clk;
assign _U538_in = wdata;
assign _U538_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U538 (
    .in(_U538_in),
    .clk(_U538_clk),
    .out(rdata)
);
endmodule

module delay__U532 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U533_in;
wire _U533_clk;
assign _U533_in = wdata;
assign _U533_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U533 (
    .in(_U533_in),
    .clk(_U533_clk),
    .out(rdata)
);
endmodule

module delay__U529 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U530_in;
wire _U530_clk;
assign _U530_in = wdata;
assign _U530_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U530 (
    .in(_U530_in),
    .clk(_U530_clk),
    .out(rdata)
);
endmodule

module delay__U524 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U525_in;
wire _U525_clk;
assign _U525_in = wdata;
assign _U525_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U525 (
    .in(_U525_in),
    .clk(_U525_clk),
    .out(rdata)
);
endmodule

module delay__U521 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U522_in;
wire _U522_clk;
assign _U522_in = wdata;
assign _U522_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U522 (
    .in(_U522_in),
    .clk(_U522_clk),
    .out(rdata)
);
endmodule

module delay__U512 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U513_in;
wire _U513_clk;
wire [15:0] _U513_out;
wire [15:0] _U514_in;
wire _U514_clk;
wire [15:0] _U514_out;
wire [15:0] _U515_in;
wire _U515_clk;
wire [15:0] _U515_out;
wire [15:0] _U516_in;
wire _U516_clk;
wire [15:0] _U516_out;
wire [15:0] _U517_in;
wire _U517_clk;
wire [15:0] _U517_out;
wire [15:0] _U518_in;
wire _U518_clk;
wire [15:0] _U518_out;
wire [15:0] _U519_in;
wire _U519_clk;
assign _U513_in = wdata;
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
    .out(_U514_out)
);
assign _U515_in = _U514_out;
assign _U515_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U515 (
    .in(_U515_in),
    .clk(_U515_clk),
    .out(_U515_out)
);
assign _U516_in = _U515_out;
assign _U516_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U516 (
    .in(_U516_in),
    .clk(_U516_clk),
    .out(_U516_out)
);
assign _U517_in = _U516_out;
assign _U517_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U517 (
    .in(_U517_in),
    .clk(_U517_clk),
    .out(_U517_out)
);
assign _U518_in = _U517_out;
assign _U518_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U518 (
    .in(_U518_in),
    .clk(_U518_clk),
    .out(_U518_out)
);
assign _U519_in = _U518_out;
assign _U519_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U519 (
    .in(_U519_in),
    .clk(_U519_clk),
    .out(rdata)
);
endmodule

module lyy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgyy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgyy_stencil_1_read [8:0],
    input op_hcompute_lyy_stencil_write_wen,
    input [15:0] op_hcompute_lyy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lyy_stencil_write [0:0]
);
wire delay_sr_U520_clk;
wire [15:0] delay_sr_U520_wdata;
wire [15:0] delay_sr_U520_rdata;
wire delay_sr_U520_rst_n;
wire delay_sr_U520_flush;
wire delay_sr_U523_clk;
wire [15:0] delay_sr_U523_wdata;
wire [15:0] delay_sr_U523_rdata;
wire delay_sr_U523_rst_n;
wire delay_sr_U523_flush;
wire delay_sr_U526_clk;
wire [15:0] delay_sr_U526_wdata;
wire [15:0] delay_sr_U526_rdata;
wire delay_sr_U526_rst_n;
wire delay_sr_U526_flush;
wire delay_sr_U528_clk;
wire [15:0] delay_sr_U528_wdata;
wire [15:0] delay_sr_U528_rdata;
wire delay_sr_U528_rst_n;
wire delay_sr_U528_flush;
wire delay_sr_U531_clk;
wire [15:0] delay_sr_U531_wdata;
wire [15:0] delay_sr_U531_rdata;
wire delay_sr_U531_rst_n;
wire delay_sr_U531_flush;
wire delay_sr_U534_clk;
wire [15:0] delay_sr_U534_wdata;
wire [15:0] delay_sr_U534_rdata;
wire delay_sr_U534_rst_n;
wire delay_sr_U534_flush;
wire delay_sr_U536_clk;
wire [15:0] delay_sr_U536_wdata;
wire [15:0] delay_sr_U536_rdata;
wire delay_sr_U536_rst_n;
wire delay_sr_U536_flush;
wire delay_sr_U539_clk;
wire [15:0] delay_sr_U539_wdata;
wire [15:0] delay_sr_U539_rdata;
wire delay_sr_U539_rst_n;
wire delay_sr_U539_flush;
wire delay_sr_U542_clk;
wire [15:0] delay_sr_U542_wdata;
wire [15:0] delay_sr_U542_rdata;
wire delay_sr_U542_rst_n;
wire delay_sr_U542_flush;
assign delay_sr_U520_clk = clk;
assign delay_sr_U520_wdata = op_hcompute_lyy_stencil_write[0];
assign delay_sr_U520_rst_n = rst_n;
assign delay_sr_U520_flush = flush;
delay__U512 delay_sr_U520 (
    .clk(delay_sr_U520_clk),
    .wdata(delay_sr_U520_wdata),
    .rdata(delay_sr_U520_rdata),
    .rst_n(delay_sr_U520_rst_n),
    .flush(delay_sr_U520_flush)
);
assign delay_sr_U523_clk = clk;
assign delay_sr_U523_wdata = delay_sr_U520_rdata;
assign delay_sr_U523_rst_n = rst_n;
assign delay_sr_U523_flush = flush;
delay__U521 delay_sr_U523 (
    .clk(delay_sr_U523_clk),
    .wdata(delay_sr_U523_wdata),
    .rdata(delay_sr_U523_rdata),
    .rst_n(delay_sr_U523_rst_n),
    .flush(delay_sr_U523_flush)
);
assign delay_sr_U526_clk = clk;
assign delay_sr_U526_wdata = delay_sr_U523_rdata;
assign delay_sr_U526_rst_n = rst_n;
assign delay_sr_U526_flush = flush;
delay__U524 delay_sr_U526 (
    .clk(delay_sr_U526_clk),
    .wdata(delay_sr_U526_wdata),
    .rdata(delay_sr_U526_rdata),
    .rst_n(delay_sr_U526_rst_n),
    .flush(delay_sr_U526_flush)
);
assign delay_sr_U528_clk = clk;
assign delay_sr_U528_wdata = delay_sr_U526_rdata;
assign delay_sr_U528_rst_n = rst_n;
assign delay_sr_U528_flush = flush;
memtile_long_delay__U527 delay_sr_U528 (
    .clk(delay_sr_U528_clk),
    .wdata(delay_sr_U528_wdata),
    .rdata(delay_sr_U528_rdata),
    .rst_n(delay_sr_U528_rst_n),
    .flush(delay_sr_U528_flush)
);
assign delay_sr_U531_clk = clk;
assign delay_sr_U531_wdata = delay_sr_U528_rdata;
assign delay_sr_U531_rst_n = rst_n;
assign delay_sr_U531_flush = flush;
delay__U529 delay_sr_U531 (
    .clk(delay_sr_U531_clk),
    .wdata(delay_sr_U531_wdata),
    .rdata(delay_sr_U531_rdata),
    .rst_n(delay_sr_U531_rst_n),
    .flush(delay_sr_U531_flush)
);
assign delay_sr_U534_clk = clk;
assign delay_sr_U534_wdata = delay_sr_U531_rdata;
assign delay_sr_U534_rst_n = rst_n;
assign delay_sr_U534_flush = flush;
delay__U532 delay_sr_U534 (
    .clk(delay_sr_U534_clk),
    .wdata(delay_sr_U534_wdata),
    .rdata(delay_sr_U534_rdata),
    .rst_n(delay_sr_U534_rst_n),
    .flush(delay_sr_U534_flush)
);
assign delay_sr_U536_clk = clk;
assign delay_sr_U536_wdata = delay_sr_U534_rdata;
assign delay_sr_U536_rst_n = rst_n;
assign delay_sr_U536_flush = flush;
memtile_long_delay__U535 delay_sr_U536 (
    .clk(delay_sr_U536_clk),
    .wdata(delay_sr_U536_wdata),
    .rdata(delay_sr_U536_rdata),
    .rst_n(delay_sr_U536_rst_n),
    .flush(delay_sr_U536_flush)
);
assign delay_sr_U539_clk = clk;
assign delay_sr_U539_wdata = delay_sr_U536_rdata;
assign delay_sr_U539_rst_n = rst_n;
assign delay_sr_U539_flush = flush;
delay__U537 delay_sr_U539 (
    .clk(delay_sr_U539_clk),
    .wdata(delay_sr_U539_wdata),
    .rdata(delay_sr_U539_rdata),
    .rst_n(delay_sr_U539_rst_n),
    .flush(delay_sr_U539_flush)
);
assign delay_sr_U542_clk = clk;
assign delay_sr_U542_wdata = delay_sr_U539_rdata;
assign delay_sr_U542_rst_n = rst_n;
assign delay_sr_U542_flush = flush;
delay__U540 delay_sr_U542 (
    .clk(delay_sr_U542_clk),
    .wdata(delay_sr_U542_wdata),
    .rdata(delay_sr_U542_rdata),
    .rst_n(delay_sr_U542_rst_n),
    .flush(delay_sr_U542_flush)
);
assign op_hcompute_lgyy_stencil_1_read[8] = delay_sr_U523_rdata;
assign op_hcompute_lgyy_stencil_1_read[7] = delay_sr_U520_rdata;
assign op_hcompute_lgyy_stencil_1_read[6] = delay_sr_U526_rdata;
assign op_hcompute_lgyy_stencil_1_read[5] = delay_sr_U528_rdata;
assign op_hcompute_lgyy_stencil_1_read[4] = delay_sr_U531_rdata;
assign op_hcompute_lgyy_stencil_1_read[3] = delay_sr_U534_rdata;
assign op_hcompute_lgyy_stencil_1_read[2] = delay_sr_U536_rdata;
assign op_hcompute_lgyy_stencil_1_read[1] = delay_sr_U539_rdata;
assign op_hcompute_lgyy_stencil_1_read[0] = delay_sr_U542_rdata;
endmodule

module delay__U509 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U510_in;
wire _U510_clk;
assign _U510_in = wdata;
assign _U510_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U510 (
    .in(_U510_in),
    .clk(_U510_clk),
    .out(rdata)
);
endmodule

module delay__U506 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U507_in;
wire _U507_clk;
assign _U507_in = wdata;
assign _U507_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U507 (
    .in(_U507_in),
    .clk(_U507_clk),
    .out(rdata)
);
endmodule

module delay__U501 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U502_in;
wire _U502_clk;
assign _U502_in = wdata;
assign _U502_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U502 (
    .in(_U502_in),
    .clk(_U502_clk),
    .out(rdata)
);
endmodule

module delay__U498 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U499_in;
wire _U499_clk;
assign _U499_in = wdata;
assign _U499_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U499 (
    .in(_U499_in),
    .clk(_U499_clk),
    .out(rdata)
);
endmodule

module delay__U493 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U494_in;
wire _U494_clk;
assign _U494_in = wdata;
assign _U494_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U494 (
    .in(_U494_in),
    .clk(_U494_clk),
    .out(rdata)
);
endmodule

module delay__U490 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U491_in;
wire _U491_clk;
assign _U491_in = wdata;
assign _U491_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U491 (
    .in(_U491_in),
    .clk(_U491_clk),
    .out(rdata)
);
endmodule

module delay__U481 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U482_in;
wire _U482_clk;
wire [15:0] _U482_out;
wire [15:0] _U483_in;
wire _U483_clk;
wire [15:0] _U483_out;
wire [15:0] _U484_in;
wire _U484_clk;
wire [15:0] _U484_out;
wire [15:0] _U485_in;
wire _U485_clk;
wire [15:0] _U485_out;
wire [15:0] _U486_in;
wire _U486_clk;
wire [15:0] _U486_out;
wire [15:0] _U487_in;
wire _U487_clk;
wire [15:0] _U487_out;
wire [15:0] _U488_in;
wire _U488_clk;
assign _U482_in = wdata;
assign _U482_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U482 (
    .in(_U482_in),
    .clk(_U482_clk),
    .out(_U482_out)
);
assign _U483_in = _U482_out;
assign _U483_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U483 (
    .in(_U483_in),
    .clk(_U483_clk),
    .out(_U483_out)
);
assign _U484_in = _U483_out;
assign _U484_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U484 (
    .in(_U484_in),
    .clk(_U484_clk),
    .out(_U484_out)
);
assign _U485_in = _U484_out;
assign _U485_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U485 (
    .in(_U485_in),
    .clk(_U485_clk),
    .out(_U485_out)
);
assign _U486_in = _U485_out;
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
    .out(rdata)
);
endmodule

module lxy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxy_stencil_1_read [8:0],
    input op_hcompute_lxy_stencil_write_wen,
    input [15:0] op_hcompute_lxy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lxy_stencil_write [0:0]
);
wire delay_sr_U489_clk;
wire [15:0] delay_sr_U489_wdata;
wire [15:0] delay_sr_U489_rdata;
wire delay_sr_U489_rst_n;
wire delay_sr_U489_flush;
wire delay_sr_U492_clk;
wire [15:0] delay_sr_U492_wdata;
wire [15:0] delay_sr_U492_rdata;
wire delay_sr_U492_rst_n;
wire delay_sr_U492_flush;
wire delay_sr_U495_clk;
wire [15:0] delay_sr_U495_wdata;
wire [15:0] delay_sr_U495_rdata;
wire delay_sr_U495_rst_n;
wire delay_sr_U495_flush;
wire delay_sr_U497_clk;
wire [15:0] delay_sr_U497_wdata;
wire [15:0] delay_sr_U497_rdata;
wire delay_sr_U497_rst_n;
wire delay_sr_U497_flush;
wire delay_sr_U500_clk;
wire [15:0] delay_sr_U500_wdata;
wire [15:0] delay_sr_U500_rdata;
wire delay_sr_U500_rst_n;
wire delay_sr_U500_flush;
wire delay_sr_U503_clk;
wire [15:0] delay_sr_U503_wdata;
wire [15:0] delay_sr_U503_rdata;
wire delay_sr_U503_rst_n;
wire delay_sr_U503_flush;
wire delay_sr_U505_clk;
wire [15:0] delay_sr_U505_wdata;
wire [15:0] delay_sr_U505_rdata;
wire delay_sr_U505_rst_n;
wire delay_sr_U505_flush;
wire delay_sr_U508_clk;
wire [15:0] delay_sr_U508_wdata;
wire [15:0] delay_sr_U508_rdata;
wire delay_sr_U508_rst_n;
wire delay_sr_U508_flush;
wire delay_sr_U511_clk;
wire [15:0] delay_sr_U511_wdata;
wire [15:0] delay_sr_U511_rdata;
wire delay_sr_U511_rst_n;
wire delay_sr_U511_flush;
assign delay_sr_U489_clk = clk;
assign delay_sr_U489_wdata = op_hcompute_lxy_stencil_write[0];
assign delay_sr_U489_rst_n = rst_n;
assign delay_sr_U489_flush = flush;
delay__U481 delay_sr_U489 (
    .clk(delay_sr_U489_clk),
    .wdata(delay_sr_U489_wdata),
    .rdata(delay_sr_U489_rdata),
    .rst_n(delay_sr_U489_rst_n),
    .flush(delay_sr_U489_flush)
);
assign delay_sr_U492_clk = clk;
assign delay_sr_U492_wdata = delay_sr_U489_rdata;
assign delay_sr_U492_rst_n = rst_n;
assign delay_sr_U492_flush = flush;
delay__U490 delay_sr_U492 (
    .clk(delay_sr_U492_clk),
    .wdata(delay_sr_U492_wdata),
    .rdata(delay_sr_U492_rdata),
    .rst_n(delay_sr_U492_rst_n),
    .flush(delay_sr_U492_flush)
);
assign delay_sr_U495_clk = clk;
assign delay_sr_U495_wdata = delay_sr_U492_rdata;
assign delay_sr_U495_rst_n = rst_n;
assign delay_sr_U495_flush = flush;
delay__U493 delay_sr_U495 (
    .clk(delay_sr_U495_clk),
    .wdata(delay_sr_U495_wdata),
    .rdata(delay_sr_U495_rdata),
    .rst_n(delay_sr_U495_rst_n),
    .flush(delay_sr_U495_flush)
);
assign delay_sr_U497_clk = clk;
assign delay_sr_U497_wdata = delay_sr_U495_rdata;
assign delay_sr_U497_rst_n = rst_n;
assign delay_sr_U497_flush = flush;
memtile_long_delay__U496 delay_sr_U497 (
    .clk(delay_sr_U497_clk),
    .wdata(delay_sr_U497_wdata),
    .rdata(delay_sr_U497_rdata),
    .rst_n(delay_sr_U497_rst_n),
    .flush(delay_sr_U497_flush)
);
assign delay_sr_U500_clk = clk;
assign delay_sr_U500_wdata = delay_sr_U497_rdata;
assign delay_sr_U500_rst_n = rst_n;
assign delay_sr_U500_flush = flush;
delay__U498 delay_sr_U500 (
    .clk(delay_sr_U500_clk),
    .wdata(delay_sr_U500_wdata),
    .rdata(delay_sr_U500_rdata),
    .rst_n(delay_sr_U500_rst_n),
    .flush(delay_sr_U500_flush)
);
assign delay_sr_U503_clk = clk;
assign delay_sr_U503_wdata = delay_sr_U500_rdata;
assign delay_sr_U503_rst_n = rst_n;
assign delay_sr_U503_flush = flush;
delay__U501 delay_sr_U503 (
    .clk(delay_sr_U503_clk),
    .wdata(delay_sr_U503_wdata),
    .rdata(delay_sr_U503_rdata),
    .rst_n(delay_sr_U503_rst_n),
    .flush(delay_sr_U503_flush)
);
assign delay_sr_U505_clk = clk;
assign delay_sr_U505_wdata = delay_sr_U503_rdata;
assign delay_sr_U505_rst_n = rst_n;
assign delay_sr_U505_flush = flush;
memtile_long_delay__U504 delay_sr_U505 (
    .clk(delay_sr_U505_clk),
    .wdata(delay_sr_U505_wdata),
    .rdata(delay_sr_U505_rdata),
    .rst_n(delay_sr_U505_rst_n),
    .flush(delay_sr_U505_flush)
);
assign delay_sr_U508_clk = clk;
assign delay_sr_U508_wdata = delay_sr_U505_rdata;
assign delay_sr_U508_rst_n = rst_n;
assign delay_sr_U508_flush = flush;
delay__U506 delay_sr_U508 (
    .clk(delay_sr_U508_clk),
    .wdata(delay_sr_U508_wdata),
    .rdata(delay_sr_U508_rdata),
    .rst_n(delay_sr_U508_rst_n),
    .flush(delay_sr_U508_flush)
);
assign delay_sr_U511_clk = clk;
assign delay_sr_U511_wdata = delay_sr_U508_rdata;
assign delay_sr_U511_rst_n = rst_n;
assign delay_sr_U511_flush = flush;
delay__U509 delay_sr_U511 (
    .clk(delay_sr_U511_clk),
    .wdata(delay_sr_U511_wdata),
    .rdata(delay_sr_U511_rdata),
    .rst_n(delay_sr_U511_rst_n),
    .flush(delay_sr_U511_flush)
);
assign op_hcompute_lgxy_stencil_1_read[8] = delay_sr_U492_rdata;
assign op_hcompute_lgxy_stencil_1_read[7] = delay_sr_U489_rdata;
assign op_hcompute_lgxy_stencil_1_read[6] = delay_sr_U495_rdata;
assign op_hcompute_lgxy_stencil_1_read[5] = delay_sr_U497_rdata;
assign op_hcompute_lgxy_stencil_1_read[4] = delay_sr_U500_rdata;
assign op_hcompute_lgxy_stencil_1_read[3] = delay_sr_U503_rdata;
assign op_hcompute_lgxy_stencil_1_read[2] = delay_sr_U505_rdata;
assign op_hcompute_lgxy_stencil_1_read[1] = delay_sr_U508_rdata;
assign op_hcompute_lgxy_stencil_1_read[0] = delay_sr_U511_rdata;
endmodule

module delay__U478 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U479_in;
wire _U479_clk;
assign _U479_in = wdata;
assign _U479_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U479 (
    .in(_U479_in),
    .clk(_U479_clk),
    .out(rdata)
);
endmodule

module delay__U475 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U476_in;
wire _U476_clk;
assign _U476_in = wdata;
assign _U476_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U476 (
    .in(_U476_in),
    .clk(_U476_clk),
    .out(rdata)
);
endmodule

module delay__U470 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U471_in;
wire _U471_clk;
assign _U471_in = wdata;
assign _U471_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U471 (
    .in(_U471_in),
    .clk(_U471_clk),
    .out(rdata)
);
endmodule

module delay__U467 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U468_in;
wire _U468_clk;
assign _U468_in = wdata;
assign _U468_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U468 (
    .in(_U468_in),
    .clk(_U468_clk),
    .out(rdata)
);
endmodule

module delay__U462 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U463_in;
wire _U463_clk;
assign _U463_in = wdata;
assign _U463_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U463 (
    .in(_U463_in),
    .clk(_U463_clk),
    .out(rdata)
);
endmodule

module delay__U459 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U460_in;
wire _U460_clk;
assign _U460_in = wdata;
assign _U460_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U460 (
    .in(_U460_in),
    .clk(_U460_clk),
    .out(rdata)
);
endmodule

module delay__U450 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U451_in;
wire _U451_clk;
wire [15:0] _U451_out;
wire [15:0] _U452_in;
wire _U452_clk;
wire [15:0] _U452_out;
wire [15:0] _U453_in;
wire _U453_clk;
wire [15:0] _U453_out;
wire [15:0] _U454_in;
wire _U454_clk;
wire [15:0] _U454_out;
wire [15:0] _U455_in;
wire _U455_clk;
wire [15:0] _U455_out;
wire [15:0] _U456_in;
wire _U456_clk;
wire [15:0] _U456_out;
wire [15:0] _U457_in;
wire _U457_clk;
assign _U451_in = wdata;
assign _U451_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U451 (
    .in(_U451_in),
    .clk(_U451_clk),
    .out(_U451_out)
);
assign _U452_in = _U451_out;
assign _U452_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U452 (
    .in(_U452_in),
    .clk(_U452_clk),
    .out(_U452_out)
);
assign _U453_in = _U452_out;
assign _U453_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U453 (
    .in(_U453_in),
    .clk(_U453_clk),
    .out(_U453_out)
);
assign _U454_in = _U453_out;
assign _U454_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U454 (
    .in(_U454_in),
    .clk(_U454_clk),
    .out(_U454_out)
);
assign _U455_in = _U454_out;
assign _U455_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U455 (
    .in(_U455_in),
    .clk(_U455_clk),
    .out(_U455_out)
);
assign _U456_in = _U455_out;
assign _U456_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U456 (
    .in(_U456_in),
    .clk(_U456_clk),
    .out(_U456_out)
);
assign _U457_in = _U456_out;
assign _U457_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U457 (
    .in(_U457_in),
    .clk(_U457_clk),
    .out(rdata)
);
endmodule

module lxx_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxx_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxx_stencil_1_read [8:0],
    input op_hcompute_lxx_stencil_write_wen,
    input [15:0] op_hcompute_lxx_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lxx_stencil_write [0:0]
);
wire delay_sr_U458_clk;
wire [15:0] delay_sr_U458_wdata;
wire [15:0] delay_sr_U458_rdata;
wire delay_sr_U458_rst_n;
wire delay_sr_U458_flush;
wire delay_sr_U461_clk;
wire [15:0] delay_sr_U461_wdata;
wire [15:0] delay_sr_U461_rdata;
wire delay_sr_U461_rst_n;
wire delay_sr_U461_flush;
wire delay_sr_U464_clk;
wire [15:0] delay_sr_U464_wdata;
wire [15:0] delay_sr_U464_rdata;
wire delay_sr_U464_rst_n;
wire delay_sr_U464_flush;
wire delay_sr_U466_clk;
wire [15:0] delay_sr_U466_wdata;
wire [15:0] delay_sr_U466_rdata;
wire delay_sr_U466_rst_n;
wire delay_sr_U466_flush;
wire delay_sr_U469_clk;
wire [15:0] delay_sr_U469_wdata;
wire [15:0] delay_sr_U469_rdata;
wire delay_sr_U469_rst_n;
wire delay_sr_U469_flush;
wire delay_sr_U472_clk;
wire [15:0] delay_sr_U472_wdata;
wire [15:0] delay_sr_U472_rdata;
wire delay_sr_U472_rst_n;
wire delay_sr_U472_flush;
wire delay_sr_U474_clk;
wire [15:0] delay_sr_U474_wdata;
wire [15:0] delay_sr_U474_rdata;
wire delay_sr_U474_rst_n;
wire delay_sr_U474_flush;
wire delay_sr_U477_clk;
wire [15:0] delay_sr_U477_wdata;
wire [15:0] delay_sr_U477_rdata;
wire delay_sr_U477_rst_n;
wire delay_sr_U477_flush;
wire delay_sr_U480_clk;
wire [15:0] delay_sr_U480_wdata;
wire [15:0] delay_sr_U480_rdata;
wire delay_sr_U480_rst_n;
wire delay_sr_U480_flush;
assign delay_sr_U458_clk = clk;
assign delay_sr_U458_wdata = op_hcompute_lxx_stencil_write[0];
assign delay_sr_U458_rst_n = rst_n;
assign delay_sr_U458_flush = flush;
delay__U450 delay_sr_U458 (
    .clk(delay_sr_U458_clk),
    .wdata(delay_sr_U458_wdata),
    .rdata(delay_sr_U458_rdata),
    .rst_n(delay_sr_U458_rst_n),
    .flush(delay_sr_U458_flush)
);
assign delay_sr_U461_clk = clk;
assign delay_sr_U461_wdata = delay_sr_U458_rdata;
assign delay_sr_U461_rst_n = rst_n;
assign delay_sr_U461_flush = flush;
delay__U459 delay_sr_U461 (
    .clk(delay_sr_U461_clk),
    .wdata(delay_sr_U461_wdata),
    .rdata(delay_sr_U461_rdata),
    .rst_n(delay_sr_U461_rst_n),
    .flush(delay_sr_U461_flush)
);
assign delay_sr_U464_clk = clk;
assign delay_sr_U464_wdata = delay_sr_U461_rdata;
assign delay_sr_U464_rst_n = rst_n;
assign delay_sr_U464_flush = flush;
delay__U462 delay_sr_U464 (
    .clk(delay_sr_U464_clk),
    .wdata(delay_sr_U464_wdata),
    .rdata(delay_sr_U464_rdata),
    .rst_n(delay_sr_U464_rst_n),
    .flush(delay_sr_U464_flush)
);
assign delay_sr_U466_clk = clk;
assign delay_sr_U466_wdata = delay_sr_U464_rdata;
assign delay_sr_U466_rst_n = rst_n;
assign delay_sr_U466_flush = flush;
memtile_long_delay__U465 delay_sr_U466 (
    .clk(delay_sr_U466_clk),
    .wdata(delay_sr_U466_wdata),
    .rdata(delay_sr_U466_rdata),
    .rst_n(delay_sr_U466_rst_n),
    .flush(delay_sr_U466_flush)
);
assign delay_sr_U469_clk = clk;
assign delay_sr_U469_wdata = delay_sr_U466_rdata;
assign delay_sr_U469_rst_n = rst_n;
assign delay_sr_U469_flush = flush;
delay__U467 delay_sr_U469 (
    .clk(delay_sr_U469_clk),
    .wdata(delay_sr_U469_wdata),
    .rdata(delay_sr_U469_rdata),
    .rst_n(delay_sr_U469_rst_n),
    .flush(delay_sr_U469_flush)
);
assign delay_sr_U472_clk = clk;
assign delay_sr_U472_wdata = delay_sr_U469_rdata;
assign delay_sr_U472_rst_n = rst_n;
assign delay_sr_U472_flush = flush;
delay__U470 delay_sr_U472 (
    .clk(delay_sr_U472_clk),
    .wdata(delay_sr_U472_wdata),
    .rdata(delay_sr_U472_rdata),
    .rst_n(delay_sr_U472_rst_n),
    .flush(delay_sr_U472_flush)
);
assign delay_sr_U474_clk = clk;
assign delay_sr_U474_wdata = delay_sr_U472_rdata;
assign delay_sr_U474_rst_n = rst_n;
assign delay_sr_U474_flush = flush;
memtile_long_delay__U473 delay_sr_U474 (
    .clk(delay_sr_U474_clk),
    .wdata(delay_sr_U474_wdata),
    .rdata(delay_sr_U474_rdata),
    .rst_n(delay_sr_U474_rst_n),
    .flush(delay_sr_U474_flush)
);
assign delay_sr_U477_clk = clk;
assign delay_sr_U477_wdata = delay_sr_U474_rdata;
assign delay_sr_U477_rst_n = rst_n;
assign delay_sr_U477_flush = flush;
delay__U475 delay_sr_U477 (
    .clk(delay_sr_U477_clk),
    .wdata(delay_sr_U477_wdata),
    .rdata(delay_sr_U477_rdata),
    .rst_n(delay_sr_U477_rst_n),
    .flush(delay_sr_U477_flush)
);
assign delay_sr_U480_clk = clk;
assign delay_sr_U480_wdata = delay_sr_U477_rdata;
assign delay_sr_U480_rst_n = rst_n;
assign delay_sr_U480_flush = flush;
delay__U478 delay_sr_U480 (
    .clk(delay_sr_U480_clk),
    .wdata(delay_sr_U480_wdata),
    .rdata(delay_sr_U480_rdata),
    .rst_n(delay_sr_U480_rst_n),
    .flush(delay_sr_U480_flush)
);
assign op_hcompute_lgxx_stencil_1_read[8] = delay_sr_U461_rdata;
assign op_hcompute_lgxx_stencil_1_read[7] = delay_sr_U458_rdata;
assign op_hcompute_lgxx_stencil_1_read[6] = delay_sr_U464_rdata;
assign op_hcompute_lgxx_stencil_1_read[5] = delay_sr_U466_rdata;
assign op_hcompute_lgxx_stencil_1_read[4] = delay_sr_U469_rdata;
assign op_hcompute_lgxx_stencil_1_read[3] = delay_sr_U472_rdata;
assign op_hcompute_lgxx_stencil_1_read[2] = delay_sr_U474_rdata;
assign op_hcompute_lgxx_stencil_1_read[1] = delay_sr_U477_rdata;
assign op_hcompute_lgxx_stencil_1_read[0] = delay_sr_U480_rdata;
endmodule

module delay__U445 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U446_in;
wire _U446_clk;
wire [15:0] _U446_out;
wire [15:0] _U447_in;
wire _U447_clk;
wire [15:0] _U447_out;
wire [15:0] _U448_in;
wire _U448_clk;
assign _U446_in = wdata;
assign _U446_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U446 (
    .in(_U446_in),
    .clk(_U446_clk),
    .out(_U446_out)
);
assign _U447_in = _U446_out;
assign _U447_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U447 (
    .in(_U447_in),
    .clk(_U447_clk),
    .out(_U447_out)
);
assign _U448_in = _U447_out;
assign _U448_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U448 (
    .in(_U448_in),
    .clk(_U448_clk),
    .out(rdata)
);
endmodule

module lgyy_stencil_clkwrk_dsa2_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgyy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgyy_stencil_1_read [0:0],
    input op_hcompute_lgyy_stencil_write_wen,
    input [15:0] op_hcompute_lgyy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgyy_stencil_write [0:0]
);
wire delay_sr_U449_clk;
wire [15:0] delay_sr_U449_wdata;
wire [15:0] delay_sr_U449_rdata;
wire delay_sr_U449_rst_n;
wire delay_sr_U449_flush;
assign delay_sr_U449_clk = clk;
assign delay_sr_U449_wdata = op_hcompute_lgyy_stencil_write[0];
assign delay_sr_U449_rst_n = rst_n;
assign delay_sr_U449_flush = flush;
delay__U445 delay_sr_U449 (
    .clk(delay_sr_U449_clk),
    .wdata(delay_sr_U449_wdata),
    .rdata(delay_sr_U449_rdata),
    .rst_n(delay_sr_U449_rst_n),
    .flush(delay_sr_U449_flush)
);
assign op_hcompute_lgyy_stencil_1_read[0] = delay_sr_U449_rdata;
endmodule

module delay__U439 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U440_in;
wire _U440_clk;
wire [15:0] _U440_out;
wire [15:0] _U441_in;
wire _U441_clk;
wire [15:0] _U441_out;
wire [15:0] _U442_in;
wire _U442_clk;
wire [15:0] _U442_out;
wire [15:0] _U443_in;
wire _U443_clk;
assign _U440_in = wdata;
assign _U440_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U440 (
    .in(_U440_in),
    .clk(_U440_clk),
    .out(_U440_out)
);
assign _U441_in = _U440_out;
assign _U441_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U441 (
    .in(_U441_in),
    .clk(_U441_clk),
    .out(_U441_out)
);
assign _U442_in = _U441_out;
assign _U442_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U442 (
    .in(_U442_in),
    .clk(_U442_clk),
    .out(_U442_out)
);
assign _U443_in = _U442_out;
assign _U443_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U443 (
    .in(_U443_in),
    .clk(_U443_clk),
    .out(rdata)
);
endmodule

module lgyy_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_cim_stencil_read_ren,
    input [15:0] op_hcompute_cim_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_cim_stencil_read [0:0],
    input op_hcompute_lgyy_stencil_1_write_wen,
    input [15:0] op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgyy_stencil_1_write [0:0]
);
wire delay_sr_U444_clk;
wire [15:0] delay_sr_U444_wdata;
wire [15:0] delay_sr_U444_rdata;
wire delay_sr_U444_rst_n;
wire delay_sr_U444_flush;
assign delay_sr_U444_clk = clk;
assign delay_sr_U444_wdata = op_hcompute_lgyy_stencil_1_write[0];
assign delay_sr_U444_rst_n = rst_n;
assign delay_sr_U444_flush = flush;
delay__U439 delay_sr_U444 (
    .clk(delay_sr_U444_clk),
    .wdata(delay_sr_U444_wdata),
    .rdata(delay_sr_U444_rdata),
    .rst_n(delay_sr_U444_rst_n),
    .flush(delay_sr_U444_flush)
);
assign op_hcompute_cim_stencil_read[0] = delay_sr_U444_rdata;
endmodule

module delay__U434 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U435_in;
wire _U435_clk;
wire [15:0] _U435_out;
wire [15:0] _U436_in;
wire _U436_clk;
wire [15:0] _U436_out;
wire [15:0] _U437_in;
wire _U437_clk;
assign _U435_in = wdata;
assign _U435_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U435 (
    .in(_U435_in),
    .clk(_U435_clk),
    .out(_U435_out)
);
assign _U436_in = _U435_out;
assign _U436_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U436 (
    .in(_U436_in),
    .clk(_U436_clk),
    .out(_U436_out)
);
assign _U437_in = _U436_out;
assign _U437_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U437 (
    .in(_U437_in),
    .clk(_U437_clk),
    .out(rdata)
);
endmodule

module lgxy_stencil_clkwrk_dsa1_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxy_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxy_stencil_1_read [0:0],
    input op_hcompute_lgxy_stencil_write_wen,
    input [15:0] op_hcompute_lgxy_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxy_stencil_write [0:0]
);
wire delay_sr_U438_clk;
wire [15:0] delay_sr_U438_wdata;
wire [15:0] delay_sr_U438_rdata;
wire delay_sr_U438_rst_n;
wire delay_sr_U438_flush;
assign delay_sr_U438_clk = clk;
assign delay_sr_U438_wdata = op_hcompute_lgxy_stencil_write[0];
assign delay_sr_U438_rst_n = rst_n;
assign delay_sr_U438_flush = flush;
delay__U434 delay_sr_U438 (
    .clk(delay_sr_U438_clk),
    .wdata(delay_sr_U438_wdata),
    .rdata(delay_sr_U438_rdata),
    .rst_n(delay_sr_U438_rst_n),
    .flush(delay_sr_U438_flush)
);
assign op_hcompute_lgxy_stencil_1_read[0] = delay_sr_U438_rdata;
endmodule

module delay__U427 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U428_in;
wire _U428_clk;
wire [15:0] _U428_out;
wire [15:0] _U429_in;
wire _U429_clk;
wire [15:0] _U429_out;
wire [15:0] _U430_in;
wire _U430_clk;
assign _U428_in = wdata;
assign _U428_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U428 (
    .in(_U428_in),
    .clk(_U428_clk),
    .out(_U428_out)
);
assign _U429_in = _U428_out;
assign _U429_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U429 (
    .in(_U429_in),
    .clk(_U429_clk),
    .out(_U429_out)
);
assign _U430_in = _U429_out;
assign _U430_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U430 (
    .in(_U430_in),
    .clk(_U430_clk),
    .out(rdata)
);
endmodule

module lgxx_stencil_clkwrk_dsa0_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_lgxx_stencil_1_read_ren,
    input [15:0] op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_lgxx_stencil_1_read [0:0],
    input op_hcompute_lgxx_stencil_write_wen,
    input [15:0] op_hcompute_lgxx_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_lgxx_stencil_write [0:0]
);
wire delay_sr_U431_clk;
wire [15:0] delay_sr_U431_wdata;
wire [15:0] delay_sr_U431_rdata;
wire delay_sr_U431_rst_n;
wire delay_sr_U431_flush;
assign delay_sr_U431_clk = clk;
assign delay_sr_U431_wdata = op_hcompute_lgxx_stencil_write[0];
assign delay_sr_U431_rst_n = rst_n;
assign delay_sr_U431_flush = flush;
delay__U427 delay_sr_U431 (
    .clk(delay_sr_U431_clk),
    .wdata(delay_sr_U431_wdata),
    .rdata(delay_sr_U431_rdata),
    .rst_n(delay_sr_U431_rst_n),
    .flush(delay_sr_U431_flush)
);
assign op_hcompute_lgxx_stencil_1_read[0] = delay_sr_U431_rdata;
endmodule

module delay__U417 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U418_in;
wire _U418_clk;
wire [15:0] _U418_out;
wire [15:0] _U419_in;
wire _U419_clk;
wire [15:0] _U419_out;
wire [15:0] _U420_in;
wire _U420_clk;
wire [15:0] _U420_out;
wire [15:0] _U421_in;
wire _U421_clk;
assign _U418_in = wdata;
assign _U418_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U418 (
    .in(_U418_in),
    .clk(_U418_clk),
    .out(_U418_out)
);
assign _U419_in = _U418_out;
assign _U419_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U419 (
    .in(_U419_in),
    .clk(_U419_clk),
    .out(_U419_out)
);
assign _U420_in = _U419_out;
assign _U420_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U420 (
    .in(_U420_in),
    .clk(_U420_clk),
    .out(_U420_out)
);
assign _U421_in = _U420_out;
assign _U421_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U421 (
    .in(_U421_in),
    .clk(_U421_clk),
    .out(rdata)
);
endmodule

module grad_y_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U422_clk;
wire [15:0] delay_sr_U422_wdata;
wire [15:0] delay_sr_U422_rdata;
wire delay_sr_U422_rst_n;
wire delay_sr_U422_flush;
wire delay_sr_U424_clk;
wire [15:0] delay_sr_U424_wdata;
wire [15:0] delay_sr_U424_rdata;
wire delay_sr_U424_rst_n;
wire delay_sr_U424_flush;
assign delay_sr_U422_clk = clk;
assign delay_sr_U422_wdata = op_hcompute_grad_y_stencil_write[0];
assign delay_sr_U422_rst_n = rst_n;
assign delay_sr_U422_flush = flush;
delay__U417 delay_sr_U422 (
    .clk(delay_sr_U422_clk),
    .wdata(delay_sr_U422_wdata),
    .rdata(delay_sr_U422_rdata),
    .rst_n(delay_sr_U422_rst_n),
    .flush(delay_sr_U422_flush)
);
assign delay_sr_U424_clk = clk;
assign delay_sr_U424_wdata = delay_sr_U422_rdata;
assign delay_sr_U424_rst_n = rst_n;
assign delay_sr_U424_flush = flush;
memtile_long_delay__U423 delay_sr_U424 (
    .clk(delay_sr_U424_clk),
    .wdata(delay_sr_U424_wdata),
    .rdata(delay_sr_U424_rdata),
    .rst_n(delay_sr_U424_rst_n),
    .flush(delay_sr_U424_flush)
);
assign op_hcompute_lxy_stencil_read[0] = delay_sr_U422_rdata;
assign op_hcompute_lyy_stencil_read[0] = delay_sr_U424_rdata;
endmodule

module delay__U409 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U410_in;
wire _U410_clk;
wire [15:0] _U410_out;
wire [15:0] _U411_in;
wire _U411_clk;
wire [15:0] _U411_out;
wire [15:0] _U412_in;
wire _U412_clk;
wire [15:0] _U412_out;
wire [15:0] _U413_in;
wire _U413_clk;
assign _U410_in = wdata;
assign _U410_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U410 (
    .in(_U410_in),
    .clk(_U410_clk),
    .out(_U410_out)
);
assign _U411_in = _U410_out;
assign _U411_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U411 (
    .in(_U411_in),
    .clk(_U411_clk),
    .out(_U411_out)
);
assign _U412_in = _U411_out;
assign _U412_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U412 (
    .in(_U412_in),
    .clk(_U412_clk),
    .out(_U412_out)
);
assign _U413_in = _U412_out;
assign _U413_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U413 (
    .in(_U413_in),
    .clk(_U413_clk),
    .out(rdata)
);
endmodule

module grad_x_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U414_clk;
wire [15:0] delay_sr_U414_wdata;
wire [15:0] delay_sr_U414_rdata;
wire delay_sr_U414_rst_n;
wire delay_sr_U414_flush;
wire delay_sr_U416_clk;
wire [15:0] delay_sr_U416_wdata;
wire [15:0] delay_sr_U416_rdata;
wire delay_sr_U416_rst_n;
wire delay_sr_U416_flush;
assign delay_sr_U414_clk = clk;
assign delay_sr_U414_wdata = op_hcompute_grad_x_stencil_write[0];
assign delay_sr_U414_rst_n = rst_n;
assign delay_sr_U414_flush = flush;
delay__U409 delay_sr_U414 (
    .clk(delay_sr_U414_clk),
    .wdata(delay_sr_U414_wdata),
    .rdata(delay_sr_U414_rdata),
    .rst_n(delay_sr_U414_rst_n),
    .flush(delay_sr_U414_flush)
);
assign delay_sr_U416_clk = clk;
assign delay_sr_U416_wdata = delay_sr_U414_rdata;
assign delay_sr_U416_rst_n = rst_n;
assign delay_sr_U416_flush = flush;
memtile_long_delay__U415 delay_sr_U416 (
    .clk(delay_sr_U416_clk),
    .wdata(delay_sr_U416_wdata),
    .rdata(delay_sr_U416_rdata),
    .rst_n(delay_sr_U416_rst_n),
    .flush(delay_sr_U416_flush)
);
assign op_hcompute_lxx_stencil_read[0] = delay_sr_U414_rdata;
assign op_hcompute_lxy_stencil_read[0] = delay_sr_U416_rdata;
endmodule

module delay__U406 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U407_in;
wire _U407_clk;
assign _U407_in = wdata;
assign _U407_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U407 (
    .in(_U407_in),
    .clk(_U407_clk),
    .out(rdata)
);
endmodule

module delay__U403 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U404_in;
wire _U404_clk;
assign _U404_in = wdata;
assign _U404_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U404 (
    .in(_U404_in),
    .clk(_U404_clk),
    .out(rdata)
);
endmodule

module delay__U398 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U399_in;
wire _U399_clk;
assign _U399_in = wdata;
assign _U399_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U399 (
    .in(_U399_in),
    .clk(_U399_clk),
    .out(rdata)
);
endmodule

module delay__U395 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U396_in;
wire _U396_clk;
assign _U396_in = wdata;
assign _U396_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U396 (
    .in(_U396_in),
    .clk(_U396_clk),
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

module cim_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U394_clk;
wire [15:0] delay_sr_U394_wdata;
wire [15:0] delay_sr_U394_rdata;
wire delay_sr_U394_rst_n;
wire delay_sr_U394_flush;
wire delay_sr_U397_clk;
wire [15:0] delay_sr_U397_wdata;
wire [15:0] delay_sr_U397_rdata;
wire delay_sr_U397_rst_n;
wire delay_sr_U397_flush;
wire delay_sr_U400_clk;
wire [15:0] delay_sr_U400_wdata;
wire [15:0] delay_sr_U400_rdata;
wire delay_sr_U400_rst_n;
wire delay_sr_U400_flush;
wire delay_sr_U402_clk;
wire [15:0] delay_sr_U402_wdata;
wire [15:0] delay_sr_U402_rdata;
wire delay_sr_U402_rst_n;
wire delay_sr_U402_flush;
wire delay_sr_U405_clk;
wire [15:0] delay_sr_U405_wdata;
wire [15:0] delay_sr_U405_rdata;
wire delay_sr_U405_rst_n;
wire delay_sr_U405_flush;
wire delay_sr_U408_clk;
wire [15:0] delay_sr_U408_wdata;
wire [15:0] delay_sr_U408_rdata;
wire delay_sr_U408_rst_n;
wire delay_sr_U408_flush;
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
assign delay_sr_U394_clk = clk;
assign delay_sr_U394_wdata = delay_sr_U392_rdata;
assign delay_sr_U394_rst_n = rst_n;
assign delay_sr_U394_flush = flush;
memtile_long_delay__U393 delay_sr_U394 (
    .clk(delay_sr_U394_clk),
    .wdata(delay_sr_U394_wdata),
    .rdata(delay_sr_U394_rdata),
    .rst_n(delay_sr_U394_rst_n),
    .flush(delay_sr_U394_flush)
);
assign delay_sr_U397_clk = clk;
assign delay_sr_U397_wdata = delay_sr_U394_rdata;
assign delay_sr_U397_rst_n = rst_n;
assign delay_sr_U397_flush = flush;
delay__U395 delay_sr_U397 (
    .clk(delay_sr_U397_clk),
    .wdata(delay_sr_U397_wdata),
    .rdata(delay_sr_U397_rdata),
    .rst_n(delay_sr_U397_rst_n),
    .flush(delay_sr_U397_flush)
);
assign delay_sr_U400_clk = clk;
assign delay_sr_U400_wdata = delay_sr_U397_rdata;
assign delay_sr_U400_rst_n = rst_n;
assign delay_sr_U400_flush = flush;
delay__U398 delay_sr_U400 (
    .clk(delay_sr_U400_clk),
    .wdata(delay_sr_U400_wdata),
    .rdata(delay_sr_U400_rdata),
    .rst_n(delay_sr_U400_rst_n),
    .flush(delay_sr_U400_flush)
);
assign delay_sr_U402_clk = clk;
assign delay_sr_U402_wdata = delay_sr_U400_rdata;
assign delay_sr_U402_rst_n = rst_n;
assign delay_sr_U402_flush = flush;
memtile_long_delay__U401 delay_sr_U402 (
    .clk(delay_sr_U402_clk),
    .wdata(delay_sr_U402_wdata),
    .rdata(delay_sr_U402_rdata),
    .rst_n(delay_sr_U402_rst_n),
    .flush(delay_sr_U402_flush)
);
assign delay_sr_U405_clk = clk;
assign delay_sr_U405_wdata = delay_sr_U402_rdata;
assign delay_sr_U405_rst_n = rst_n;
assign delay_sr_U405_flush = flush;
delay__U403 delay_sr_U405 (
    .clk(delay_sr_U405_clk),
    .wdata(delay_sr_U405_wdata),
    .rdata(delay_sr_U405_rdata),
    .rst_n(delay_sr_U405_rst_n),
    .flush(delay_sr_U405_flush)
);
assign delay_sr_U408_clk = clk;
assign delay_sr_U408_wdata = delay_sr_U405_rdata;
assign delay_sr_U408_rst_n = rst_n;
assign delay_sr_U408_flush = flush;
delay__U406 delay_sr_U408 (
    .clk(delay_sr_U408_clk),
    .wdata(delay_sr_U408_wdata),
    .rdata(delay_sr_U408_rdata),
    .rst_n(delay_sr_U408_rst_n),
    .flush(delay_sr_U408_flush)
);
assign op_hcompute_cim_output_stencil_read[8] = delay_sr_U386_rdata;
assign op_hcompute_cim_output_stencil_read[7] = delay_sr_U389_rdata;
assign op_hcompute_cim_output_stencil_read[6] = delay_sr_U392_rdata;
assign op_hcompute_cim_output_stencil_read[5] = delay_sr_U394_rdata;
assign op_hcompute_cim_output_stencil_read[4] = delay_sr_U400_rdata;
assign op_hcompute_cim_output_stencil_read[3] = delay_sr_U402_rdata;
assign op_hcompute_cim_output_stencil_read[2] = delay_sr_U405_rdata;
assign op_hcompute_cim_output_stencil_read[1] = delay_sr_U397_rdata;
assign op_hcompute_cim_output_stencil_read[0] = delay_sr_U408_rdata;
endmodule

module cim_output_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire [15:0] _U580_in;
wire _U580_clk;
wire [15:0] _U580_out;
wire cim_output_stencil_clk;
wire cim_output_stencil_flush;
wire cim_output_stencil_rst_n;
wire cim_output_stencil_op_hcompute_cim_output_stencil_write_wen;
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_cim_output_stencil_write [0:0];
wire cim_output_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_output_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire cim_stencil_clk;
wire cim_stencil_flush;
wire cim_stencil_rst_n;
wire cim_stencil_op_hcompute_cim_output_stencil_read_ren;
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_output_stencil_read [8:0];
wire cim_stencil_op_hcompute_cim_stencil_write_wen;
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars [2:0];
wire [15:0] cim_stencil_op_hcompute_cim_stencil_write [0:0];
wire grad_x_stencil_clk;
wire grad_x_stencil_flush;
wire grad_x_stencil_rst_n;
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
wire grad_y_stencil_flush;
wire grad_y_stencil_rst_n;
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
wire lgxx_stencil_flush;
wire lgxx_stencil_rst_n;
wire lgxx_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen;
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_op_hcompute_lgxx_stencil_1_write [0:0];
wire lgxx_stencil_clkwrk_dsa0_clk;
wire lgxx_stencil_clkwrk_dsa0_flush;
wire lgxx_stencil_clkwrk_dsa0_rst_n;
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read [0:0];
wire lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen;
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write [0:0];
wire lgxy_stencil_clk;
wire lgxy_stencil_flush;
wire lgxy_stencil_rst_n;
wire lgxy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen;
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_op_hcompute_lgxy_stencil_1_write [0:0];
wire lgxy_stencil_clkwrk_dsa1_clk;
wire lgxy_stencil_clkwrk_dsa1_flush;
wire lgxy_stencil_clkwrk_dsa1_rst_n;
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read [0:0];
wire lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen;
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write [0:0];
wire lgyy_stencil_clk;
wire lgyy_stencil_flush;
wire lgyy_stencil_rst_n;
wire lgyy_stencil_op_hcompute_cim_stencil_read_ren;
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_cim_stencil_read [0:0];
wire lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen;
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_op_hcompute_lgyy_stencil_1_write [0:0];
wire lgyy_stencil_clkwrk_dsa2_clk;
wire lgyy_stencil_clkwrk_dsa2_flush;
wire lgyy_stencil_clkwrk_dsa2_rst_n;
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read [0:0];
wire lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen;
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars [2:0];
wire [15:0] lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write [0:0];
wire lxx_stencil_clk;
wire lxx_stencil_flush;
wire lxx_stencil_rst_n;
wire lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren;
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lgxx_stencil_1_read [8:0];
wire lxx_stencil_op_hcompute_lxx_stencil_write_wen;
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars [2:0];
wire [15:0] lxx_stencil_op_hcompute_lxx_stencil_write [0:0];
wire lxy_stencil_clk;
wire lxy_stencil_flush;
wire lxy_stencil_rst_n;
wire lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren;
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lgxy_stencil_1_read [8:0];
wire lxy_stencil_op_hcompute_lxy_stencil_write_wen;
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars [2:0];
wire [15:0] lxy_stencil_op_hcompute_lxy_stencil_write [0:0];
wire lyy_stencil_clk;
wire lyy_stencil_flush;
wire lyy_stencil_rst_n;
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
wire padded16_global_wrapper_stencil_flush;
wire padded16_global_wrapper_stencil_rst_n;
wire padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_x_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ren;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_grad_y_stencil_read [5:0];
wire padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_wen;
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] padded16_global_wrapper_stencil_op_hcompute_padded16_global_wrapper_stencil_write [0:0];
assign _U580_in = padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0];
assign _U580_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U580 (
    .in(_U580_in),
    .clk(_U580_clk),
    .out(_U580_out)
);
assign cim_output_stencil_clk = clk;
assign cim_output_stencil_flush = flush;
assign cim_output_stencil_rst_n = rst_n;
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
    .flush(cim_output_stencil_flush),
    .rst_n(cim_output_stencil_rst_n),
    .op_hcompute_cim_output_stencil_write_wen(cim_output_stencil_op_hcompute_cim_output_stencil_write_wen),
    .op_hcompute_cim_output_stencil_write_ctrl_vars(cim_output_stencil_op_hcompute_cim_output_stencil_write_ctrl_vars),
    .op_hcompute_cim_output_stencil_write(cim_output_stencil_op_hcompute_cim_output_stencil_write),
    .op_hcompute_hw_output_stencil_read_ren(cim_output_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(cim_output_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(cim_output_stencil_op_hcompute_hw_output_stencil_read)
);
assign cim_stencil_clk = clk;
assign cim_stencil_flush = flush;
assign cim_stencil_rst_n = rst_n;
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
    .flush(cim_stencil_flush),
    .rst_n(cim_stencil_rst_n),
    .op_hcompute_cim_output_stencil_read_ren(cim_stencil_op_hcompute_cim_output_stencil_read_ren),
    .op_hcompute_cim_output_stencil_read_ctrl_vars(cim_stencil_op_hcompute_cim_output_stencil_read_ctrl_vars),
    .op_hcompute_cim_output_stencil_read(cim_stencil_op_hcompute_cim_output_stencil_read),
    .op_hcompute_cim_stencil_write_wen(cim_stencil_op_hcompute_cim_stencil_write_wen),
    .op_hcompute_cim_stencil_write_ctrl_vars(cim_stencil_op_hcompute_cim_stencil_write_ctrl_vars),
    .op_hcompute_cim_stencil_write(cim_stencil_op_hcompute_cim_stencil_write)
);
assign grad_x_stencil_clk = clk;
assign grad_x_stencil_flush = flush;
assign grad_x_stencil_rst_n = rst_n;
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
    .flush(grad_x_stencil_flush),
    .rst_n(grad_x_stencil_rst_n),
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
assign grad_y_stencil_flush = flush;
assign grad_y_stencil_rst_n = rst_n;
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
    .flush(grad_y_stencil_flush),
    .rst_n(grad_y_stencil_rst_n),
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
assign lgxx_stencil_flush = flush;
assign lgxx_stencil_rst_n = rst_n;
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
    .flush(lgxx_stencil_flush),
    .rst_n(lgxx_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgxx_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxx_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxx_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxx_stencil_1_write_wen(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_wen),
    .op_hcompute_lgxx_stencil_1_write_ctrl_vars(lgxx_stencil_op_hcompute_lgxx_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_write(lgxx_stencil_op_hcompute_lgxx_stencil_1_write)
);
assign lgxx_stencil_clkwrk_dsa0_clk = clk;
assign lgxx_stencil_clkwrk_dsa0_flush = flush;
assign lgxx_stencil_clkwrk_dsa0_rst_n = rst_n;
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
    .flush(lgxx_stencil_clkwrk_dsa0_flush),
    .rst_n(lgxx_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lgxx_stencil_write_wen(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_wen),
    .op_hcompute_lgxx_stencil_write_ctrl_vars(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write_ctrl_vars),
    .op_hcompute_lgxx_stencil_write(lgxx_stencil_clkwrk_dsa0_op_hcompute_lgxx_stencil_write)
);
assign lgxy_stencil_clk = clk;
assign lgxy_stencil_flush = flush;
assign lgxy_stencil_rst_n = rst_n;
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
    .flush(lgxy_stencil_flush),
    .rst_n(lgxy_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgxy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgxy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgxy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgxy_stencil_1_write_wen(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_wen),
    .op_hcompute_lgxy_stencil_1_write_ctrl_vars(lgxy_stencil_op_hcompute_lgxy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_write(lgxy_stencil_op_hcompute_lgxy_stencil_1_write)
);
assign lgxy_stencil_clkwrk_dsa1_clk = clk;
assign lgxy_stencil_clkwrk_dsa1_flush = flush;
assign lgxy_stencil_clkwrk_dsa1_rst_n = rst_n;
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
    .flush(lgxy_stencil_clkwrk_dsa1_flush),
    .rst_n(lgxy_stencil_clkwrk_dsa1_rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lgxy_stencil_write_wen(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_wen),
    .op_hcompute_lgxy_stencil_write_ctrl_vars(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write_ctrl_vars),
    .op_hcompute_lgxy_stencil_write(lgxy_stencil_clkwrk_dsa1_op_hcompute_lgxy_stencil_write)
);
assign lgyy_stencil_clk = clk;
assign lgyy_stencil_flush = flush;
assign lgyy_stencil_rst_n = rst_n;
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
    .flush(lgyy_stencil_flush),
    .rst_n(lgyy_stencil_rst_n),
    .op_hcompute_cim_stencil_read_ren(lgyy_stencil_op_hcompute_cim_stencil_read_ren),
    .op_hcompute_cim_stencil_read_ctrl_vars(lgyy_stencil_op_hcompute_cim_stencil_read_ctrl_vars),
    .op_hcompute_cim_stencil_read(lgyy_stencil_op_hcompute_cim_stencil_read),
    .op_hcompute_lgyy_stencil_1_write_wen(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_wen),
    .op_hcompute_lgyy_stencil_1_write_ctrl_vars(lgyy_stencil_op_hcompute_lgyy_stencil_1_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_write(lgyy_stencil_op_hcompute_lgyy_stencil_1_write)
);
assign lgyy_stencil_clkwrk_dsa2_clk = clk;
assign lgyy_stencil_clkwrk_dsa2_flush = flush;
assign lgyy_stencil_clkwrk_dsa2_rst_n = rst_n;
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
    .flush(lgyy_stencil_clkwrk_dsa2_flush),
    .rst_n(lgyy_stencil_clkwrk_dsa2_rst_n),
    .op_hcompute_lgyy_stencil_1_read_ren(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ren),
    .op_hcompute_lgyy_stencil_1_read_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgyy_stencil_1_read(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_1_read),
    .op_hcompute_lgyy_stencil_write_wen(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_wen),
    .op_hcompute_lgyy_stencil_write_ctrl_vars(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write_ctrl_vars),
    .op_hcompute_lgyy_stencil_write(lgyy_stencil_clkwrk_dsa2_op_hcompute_lgyy_stencil_write)
);
assign lxx_stencil_clk = clk;
assign lxx_stencil_flush = flush;
assign lxx_stencil_rst_n = rst_n;
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
    .flush(lxx_stencil_flush),
    .rst_n(lxx_stencil_rst_n),
    .op_hcompute_lgxx_stencil_1_read_ren(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ren),
    .op_hcompute_lgxx_stencil_1_read_ctrl_vars(lxx_stencil_op_hcompute_lgxx_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxx_stencil_1_read(lxx_stencil_op_hcompute_lgxx_stencil_1_read),
    .op_hcompute_lxx_stencil_write_wen(lxx_stencil_op_hcompute_lxx_stencil_write_wen),
    .op_hcompute_lxx_stencil_write_ctrl_vars(lxx_stencil_op_hcompute_lxx_stencil_write_ctrl_vars),
    .op_hcompute_lxx_stencil_write(lxx_stencil_op_hcompute_lxx_stencil_write)
);
assign lxy_stencil_clk = clk;
assign lxy_stencil_flush = flush;
assign lxy_stencil_rst_n = rst_n;
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
    .flush(lxy_stencil_flush),
    .rst_n(lxy_stencil_rst_n),
    .op_hcompute_lgxy_stencil_1_read_ren(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ren),
    .op_hcompute_lgxy_stencil_1_read_ctrl_vars(lxy_stencil_op_hcompute_lgxy_stencil_1_read_ctrl_vars),
    .op_hcompute_lgxy_stencil_1_read(lxy_stencil_op_hcompute_lgxy_stencil_1_read),
    .op_hcompute_lxy_stencil_write_wen(lxy_stencil_op_hcompute_lxy_stencil_write_wen),
    .op_hcompute_lxy_stencil_write_ctrl_vars(lxy_stencil_op_hcompute_lxy_stencil_write_ctrl_vars),
    .op_hcompute_lxy_stencil_write(lxy_stencil_op_hcompute_lxy_stencil_write)
);
assign lyy_stencil_clk = clk;
assign lyy_stencil_flush = flush;
assign lyy_stencil_rst_n = rst_n;
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
    .flush(lyy_stencil_flush),
    .rst_n(lyy_stencil_rst_n),
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
assign op_hcompute_padded16_global_wrapper_stencil_padded16_stencil_op_hcompute_padded16_global_wrapper_stencil_read[0] = _U580_out;
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
assign padded16_global_wrapper_stencil_flush = flush;
assign padded16_global_wrapper_stencil_rst_n = rst_n;
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
    .flush(padded16_global_wrapper_stencil_flush),
    .rst_n(padded16_global_wrapper_stencil_rst_n),
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

