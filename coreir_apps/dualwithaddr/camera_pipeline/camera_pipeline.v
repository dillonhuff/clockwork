// Module `memtile_long_delay__U522` defined externally
// Module `memtile_long_delay__U512` defined externally
// Module `memtile_long_delay__U483` defined externally
// Module `memtile_long_delay__U455` defined externally
// Module `memtile_long_delay__U397` defined externally
// Module `memtile_long_delay__U373` defined externally
// Module `memtile_long_delay__U359` defined externally
// Module `memtile_long_delay__U357` defined externally
// Module `memtile_long_delay__U355` defined externally
// Module `memtile_long_delay__U353` defined externally
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

module corrected_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U354_clk;
wire [15:0] delay_sr_U354_wdata;
wire [15:0] delay_sr_U354_rdata;
wire delay_sr_U354_rst_n;
wire delay_sr_U354_flush;
wire delay_sr_U356_clk;
wire [15:0] delay_sr_U356_wdata;
wire [15:0] delay_sr_U356_rdata;
wire delay_sr_U356_rst_n;
wire delay_sr_U356_flush;
wire delay_sr_U358_clk;
wire [15:0] delay_sr_U358_wdata;
wire [15:0] delay_sr_U358_rdata;
wire delay_sr_U358_rst_n;
wire delay_sr_U358_flush;
assign delay_sr_U354_clk = clk;
assign delay_sr_U354_wdata = op_hcompute_corrected_stencil_1_write[0];
assign delay_sr_U354_rst_n = rst_n;
assign delay_sr_U354_flush = flush;
memtile_long_delay__U353 delay_sr_U354 (
    .clk(delay_sr_U354_clk),
    .wdata(delay_sr_U354_wdata),
    .rdata(delay_sr_U354_rdata),
    .rst_n(delay_sr_U354_rst_n),
    .flush(delay_sr_U354_flush)
);
assign delay_sr_U356_clk = clk;
assign delay_sr_U356_wdata = op_hcompute_corrected_stencil_2_write[0];
assign delay_sr_U356_rst_n = rst_n;
assign delay_sr_U356_flush = flush;
memtile_long_delay__U355 delay_sr_U356 (
    .clk(delay_sr_U356_clk),
    .wdata(delay_sr_U356_wdata),
    .rdata(delay_sr_U356_rdata),
    .rst_n(delay_sr_U356_rst_n),
    .flush(delay_sr_U356_flush)
);
assign delay_sr_U358_clk = clk;
assign delay_sr_U358_wdata = op_hcompute_corrected_stencil_write[0];
assign delay_sr_U358_rst_n = rst_n;
assign delay_sr_U358_flush = flush;
memtile_long_delay__U357 delay_sr_U358 (
    .clk(delay_sr_U358_clk),
    .wdata(delay_sr_U358_wdata),
    .rdata(delay_sr_U358_rdata),
    .rst_n(delay_sr_U358_rst_n),
    .flush(delay_sr_U358_flush)
);
assign op_hcompute_curved_stencil_1_read[0] = delay_sr_U354_rdata;
assign op_hcompute_curved_stencil_2_read[0] = delay_sr_U356_rdata;
assign op_hcompute_curved_stencil_read[0] = delay_sr_U358_rdata;
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

module delay__U518 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U519_in;
wire _U519_clk;
wire [15:0] _U519_out;
wire [15:0] _U520_in;
wire _U520_clk;
assign _U519_in = wdata;
assign _U519_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U519 (
    .in(_U519_in),
    .clk(_U519_clk),
    .out(_U519_out)
);
assign _U520_in = _U519_out;
assign _U520_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U520 (
    .in(_U520_in),
    .clk(_U520_clk),
    .out(rdata)
);
endmodule

module delay__U514 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U515_in;
wire _U515_clk;
wire [15:0] _U515_out;
wire [15:0] _U516_in;
wire _U516_clk;
assign _U515_in = wdata;
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
    .out(rdata)
);
endmodule

module delay__U505 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U506_in;
wire _U506_clk;
wire [15:0] _U506_out;
wire [15:0] _U507_in;
wire _U507_clk;
wire [15:0] _U507_out;
wire [15:0] _U508_in;
wire _U508_clk;
wire [15:0] _U508_out;
wire [15:0] _U509_in;
wire _U509_clk;
wire [15:0] _U509_out;
wire [15:0] _U510_in;
wire _U510_clk;
assign _U506_in = wdata;
assign _U506_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U506 (
    .in(_U506_in),
    .clk(_U506_clk),
    .out(_U506_out)
);
assign _U507_in = _U506_out;
assign _U507_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U507 (
    .in(_U507_in),
    .clk(_U507_clk),
    .out(_U507_out)
);
assign _U508_in = _U507_out;
assign _U508_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U508 (
    .in(_U508_in),
    .clk(_U508_clk),
    .out(_U508_out)
);
assign _U509_in = _U508_out;
assign _U509_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U509 (
    .in(_U509_in),
    .clk(_U509_clk),
    .out(_U509_out)
);
assign _U510_in = _U509_out;
assign _U510_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U510 (
    .in(_U510_in),
    .clk(_U510_clk),
    .out(rdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_denoised_1_stencil_read_ren,
    input [15:0] op_hcompute_denoised_1_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_denoised_1_stencil_read [4:0],
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U511_clk;
wire [15:0] delay_sr_U511_wdata;
wire [15:0] delay_sr_U511_rdata;
wire delay_sr_U511_rst_n;
wire delay_sr_U511_flush;
wire delay_sr_U513_clk;
wire [15:0] delay_sr_U513_wdata;
wire [15:0] delay_sr_U513_rdata;
wire delay_sr_U513_rst_n;
wire delay_sr_U513_flush;
wire delay_sr_U517_clk;
wire [15:0] delay_sr_U517_wdata;
wire [15:0] delay_sr_U517_rdata;
wire delay_sr_U517_rst_n;
wire delay_sr_U517_flush;
wire delay_sr_U521_clk;
wire [15:0] delay_sr_U521_wdata;
wire [15:0] delay_sr_U521_rdata;
wire delay_sr_U521_rst_n;
wire delay_sr_U521_flush;
wire delay_sr_U523_clk;
wire [15:0] delay_sr_U523_wdata;
wire [15:0] delay_sr_U523_rdata;
wire delay_sr_U523_rst_n;
wire delay_sr_U523_flush;
assign delay_sr_U511_clk = clk;
assign delay_sr_U511_wdata = op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign delay_sr_U511_rst_n = rst_n;
assign delay_sr_U511_flush = flush;
delay__U505 delay_sr_U511 (
    .clk(delay_sr_U511_clk),
    .wdata(delay_sr_U511_wdata),
    .rdata(delay_sr_U511_rdata),
    .rst_n(delay_sr_U511_rst_n),
    .flush(delay_sr_U511_flush)
);
assign delay_sr_U513_clk = clk;
assign delay_sr_U513_wdata = delay_sr_U511_rdata;
assign delay_sr_U513_rst_n = rst_n;
assign delay_sr_U513_flush = flush;
memtile_long_delay__U512 delay_sr_U513 (
    .clk(delay_sr_U513_clk),
    .wdata(delay_sr_U513_wdata),
    .rdata(delay_sr_U513_rdata),
    .rst_n(delay_sr_U513_rst_n),
    .flush(delay_sr_U513_flush)
);
assign delay_sr_U517_clk = clk;
assign delay_sr_U517_wdata = delay_sr_U513_rdata;
assign delay_sr_U517_rst_n = rst_n;
assign delay_sr_U517_flush = flush;
delay__U514 delay_sr_U517 (
    .clk(delay_sr_U517_clk),
    .wdata(delay_sr_U517_wdata),
    .rdata(delay_sr_U517_rdata),
    .rst_n(delay_sr_U517_rst_n),
    .flush(delay_sr_U517_flush)
);
assign delay_sr_U521_clk = clk;
assign delay_sr_U521_wdata = delay_sr_U517_rdata;
assign delay_sr_U521_rst_n = rst_n;
assign delay_sr_U521_flush = flush;
delay__U518 delay_sr_U521 (
    .clk(delay_sr_U521_clk),
    .wdata(delay_sr_U521_wdata),
    .rdata(delay_sr_U521_rdata),
    .rst_n(delay_sr_U521_rst_n),
    .flush(delay_sr_U521_flush)
);
assign delay_sr_U523_clk = clk;
assign delay_sr_U523_wdata = delay_sr_U521_rdata;
assign delay_sr_U523_rst_n = rst_n;
assign delay_sr_U523_flush = flush;
memtile_long_delay__U522 delay_sr_U523 (
    .clk(delay_sr_U523_clk),
    .wdata(delay_sr_U523_wdata),
    .rdata(delay_sr_U523_rdata),
    .rst_n(delay_sr_U523_rst_n),
    .flush(delay_sr_U523_flush)
);
assign op_hcompute_denoised_1_stencil_read[4] = delay_sr_U513_rdata;
assign op_hcompute_denoised_1_stencil_read[3] = delay_sr_U521_rdata;
assign op_hcompute_denoised_1_stencil_read[2] = delay_sr_U523_rdata;
assign op_hcompute_denoised_1_stencil_read[1] = delay_sr_U511_rdata;
assign op_hcompute_denoised_1_stencil_read[0] = delay_sr_U517_rdata;
endmodule

module delay__U502 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U503_in;
wire _U503_clk;
assign _U503_in = wdata;
assign _U503_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U503 (
    .in(_U503_in),
    .clk(_U503_clk),
    .out(rdata)
);
endmodule

module delay__U496 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U497_in;
wire _U497_clk;
wire [15:0] _U497_out;
wire [15:0] _U498_in;
wire _U498_clk;
wire [15:0] _U498_out;
wire [15:0] _U499_in;
wire _U499_clk;
wire [15:0] _U499_out;
wire [15:0] _U500_in;
wire _U500_clk;
assign _U497_in = wdata;
assign _U497_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U497 (
    .in(_U497_in),
    .clk(_U497_clk),
    .out(_U497_out)
);
assign _U498_in = _U497_out;
assign _U498_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U498 (
    .in(_U498_in),
    .clk(_U498_clk),
    .out(_U498_out)
);
assign _U499_in = _U498_out;
assign _U499_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U499 (
    .in(_U499_in),
    .clk(_U499_clk),
    .out(_U499_out)
);
assign _U500_in = _U499_out;
assign _U500_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U500 (
    .in(_U500_in),
    .clk(_U500_clk),
    .out(rdata)
);
endmodule

module delay__U491 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U492_in;
wire _U492_clk;
wire [15:0] _U492_out;
wire [15:0] _U493_in;
wire _U493_clk;
wire [15:0] _U493_out;
wire [15:0] _U494_in;
wire _U494_clk;
assign _U492_in = wdata;
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
    .out(rdata)
);
endmodule

module delay__U488 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U489_in;
wire _U489_clk;
assign _U489_in = wdata;
assign _U489_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U489 (
    .in(_U489_in),
    .clk(_U489_clk),
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
assign _U486_in = wdata;
assign _U486_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U486 (
    .in(_U486_in),
    .clk(_U486_clk),
    .out(rdata)
);
endmodule

module delay__U480 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U481_in;
wire _U481_clk;
assign _U481_in = wdata;
assign _U481_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U481 (
    .in(_U481_in),
    .clk(_U481_clk),
    .out(rdata)
);
endmodule

module delay__U477 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U478_in;
wire _U478_clk;
assign _U478_in = wdata;
assign _U478_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U478 (
    .in(_U478_in),
    .clk(_U478_clk),
    .out(rdata)
);
endmodule

module delay__U473 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U474_in;
wire _U474_clk;
wire [15:0] _U474_out;
wire [15:0] _U475_in;
wire _U475_clk;
assign _U474_in = wdata;
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

module delay__U463 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U464_in;
wire _U464_clk;
wire [15:0] _U464_out;
wire [15:0] _U465_in;
wire _U465_clk;
assign _U464_in = wdata;
assign _U464_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U464 (
    .in(_U464_in),
    .clk(_U464_clk),
    .out(_U464_out)
);
assign _U465_in = _U464_out;
assign _U465_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U465 (
    .in(_U465_in),
    .clk(_U465_clk),
    .out(rdata)
);
endmodule

module delay__U460 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U461_in;
wire _U461_clk;
assign _U461_in = wdata;
assign _U461_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U461 (
    .in(_U461_in),
    .clk(_U461_clk),
    .out(rdata)
);
endmodule

module delay__U457 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U458_in;
wire _U458_clk;
assign _U458_in = wdata;
assign _U458_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U458 (
    .in(_U458_in),
    .clk(_U458_clk),
    .out(rdata)
);
endmodule

module delay__U452 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U453_in;
wire _U453_clk;
assign _U453_in = wdata;
assign _U453_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U453 (
    .in(_U453_in),
    .clk(_U453_clk),
    .out(rdata)
);
endmodule

module delay__U449 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U450_in;
wire _U450_clk;
assign _U450_in = wdata;
assign _U450_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U450 (
    .in(_U450_in),
    .clk(_U450_clk),
    .out(rdata)
);
endmodule

module delay__U444 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U445_in;
wire _U445_clk;
wire [15:0] _U445_out;
wire [15:0] _U446_in;
wire _U446_clk;
wire [15:0] _U446_out;
wire [15:0] _U447_in;
wire _U447_clk;
assign _U445_in = wdata;
assign _U445_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U445 (
    .in(_U445_in),
    .clk(_U445_clk),
    .out(_U445_out)
);
assign _U446_in = _U445_out;
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
    .out(rdata)
);
endmodule

module delay__U438 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U439_in;
wire _U439_clk;
wire [15:0] _U439_out;
wire [15:0] _U440_in;
wire _U440_clk;
wire [15:0] _U440_out;
wire [15:0] _U441_in;
wire _U441_clk;
wire [15:0] _U441_out;
wire [15:0] _U442_in;
wire _U442_clk;
assign _U439_in = wdata;
assign _U439_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U439 (
    .in(_U439_in),
    .clk(_U439_clk),
    .out(_U439_out)
);
assign _U440_in = _U439_out;
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
    .out(rdata)
);
endmodule

module delay__U435 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U436_in;
wire _U436_clk;
assign _U436_in = wdata;
assign _U436_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U436 (
    .in(_U436_in),
    .clk(_U436_clk),
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
wire [15:0] _U430_out;
wire [15:0] _U431_in;
wire _U431_clk;
wire [15:0] _U431_out;
wire [15:0] _U432_in;
wire _U432_clk;
wire [15:0] _U432_out;
wire [15:0] _U433_in;
wire _U433_clk;
assign _U430_in = wdata;
assign _U430_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U430 (
    .in(_U430_in),
    .clk(_U430_clk),
    .out(_U430_out)
);
assign _U431_in = _U430_out;
assign _U431_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U431 (
    .in(_U431_in),
    .clk(_U431_clk),
    .out(_U431_out)
);
assign _U432_in = _U431_out;
assign _U432_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U432 (
    .in(_U432_in),
    .clk(_U432_clk),
    .out(_U432_out)
);
assign _U433_in = _U432_out;
assign _U433_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U433 (
    .in(_U433_in),
    .clk(_U433_clk),
    .out(rdata)
);
endmodule

module denoised_1_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U434_clk;
wire [15:0] delay_sr_U434_wdata;
wire [15:0] delay_sr_U434_rdata;
wire delay_sr_U434_rst_n;
wire delay_sr_U434_flush;
wire delay_sr_U437_clk;
wire [15:0] delay_sr_U437_wdata;
wire [15:0] delay_sr_U437_rdata;
wire delay_sr_U437_rst_n;
wire delay_sr_U437_flush;
wire delay_sr_U443_clk;
wire [15:0] delay_sr_U443_wdata;
wire [15:0] delay_sr_U443_rdata;
wire delay_sr_U443_rst_n;
wire delay_sr_U443_flush;
wire delay_sr_U448_clk;
wire [15:0] delay_sr_U448_wdata;
wire [15:0] delay_sr_U448_rdata;
wire delay_sr_U448_rst_n;
wire delay_sr_U448_flush;
wire delay_sr_U451_clk;
wire [15:0] delay_sr_U451_wdata;
wire [15:0] delay_sr_U451_rdata;
wire delay_sr_U451_rst_n;
wire delay_sr_U451_flush;
wire delay_sr_U454_clk;
wire [15:0] delay_sr_U454_wdata;
wire [15:0] delay_sr_U454_rdata;
wire delay_sr_U454_rst_n;
wire delay_sr_U454_flush;
wire delay_sr_U456_clk;
wire [15:0] delay_sr_U456_wdata;
wire [15:0] delay_sr_U456_rdata;
wire delay_sr_U456_rst_n;
wire delay_sr_U456_flush;
wire delay_sr_U459_clk;
wire [15:0] delay_sr_U459_wdata;
wire [15:0] delay_sr_U459_rdata;
wire delay_sr_U459_rst_n;
wire delay_sr_U459_flush;
wire delay_sr_U462_clk;
wire [15:0] delay_sr_U462_wdata;
wire [15:0] delay_sr_U462_rdata;
wire delay_sr_U462_rst_n;
wire delay_sr_U462_flush;
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
wire delay_sr_U476_clk;
wire [15:0] delay_sr_U476_wdata;
wire [15:0] delay_sr_U476_rdata;
wire delay_sr_U476_rst_n;
wire delay_sr_U476_flush;
wire delay_sr_U479_clk;
wire [15:0] delay_sr_U479_wdata;
wire [15:0] delay_sr_U479_rdata;
wire delay_sr_U479_rst_n;
wire delay_sr_U479_flush;
wire delay_sr_U482_clk;
wire [15:0] delay_sr_U482_wdata;
wire [15:0] delay_sr_U482_rdata;
wire delay_sr_U482_rst_n;
wire delay_sr_U482_flush;
wire delay_sr_U484_clk;
wire [15:0] delay_sr_U484_wdata;
wire [15:0] delay_sr_U484_rdata;
wire delay_sr_U484_rst_n;
wire delay_sr_U484_flush;
wire delay_sr_U487_clk;
wire [15:0] delay_sr_U487_wdata;
wire [15:0] delay_sr_U487_rdata;
wire delay_sr_U487_rst_n;
wire delay_sr_U487_flush;
wire delay_sr_U490_clk;
wire [15:0] delay_sr_U490_wdata;
wire [15:0] delay_sr_U490_rdata;
wire delay_sr_U490_rst_n;
wire delay_sr_U490_flush;
wire delay_sr_U495_clk;
wire [15:0] delay_sr_U495_wdata;
wire [15:0] delay_sr_U495_rdata;
wire delay_sr_U495_rst_n;
wire delay_sr_U495_flush;
wire delay_sr_U501_clk;
wire [15:0] delay_sr_U501_wdata;
wire [15:0] delay_sr_U501_rdata;
wire delay_sr_U501_rst_n;
wire delay_sr_U501_flush;
wire delay_sr_U504_clk;
wire [15:0] delay_sr_U504_wdata;
wire [15:0] delay_sr_U504_rdata;
wire delay_sr_U504_rst_n;
wire delay_sr_U504_flush;
assign delay_sr_U434_clk = clk;
assign delay_sr_U434_wdata = op_hcompute_denoised_1_stencil_write[0];
assign delay_sr_U434_rst_n = rst_n;
assign delay_sr_U434_flush = flush;
delay__U429 delay_sr_U434 (
    .clk(delay_sr_U434_clk),
    .wdata(delay_sr_U434_wdata),
    .rdata(delay_sr_U434_rdata),
    .rst_n(delay_sr_U434_rst_n),
    .flush(delay_sr_U434_flush)
);
assign delay_sr_U437_clk = clk;
assign delay_sr_U437_wdata = delay_sr_U434_rdata;
assign delay_sr_U437_rst_n = rst_n;
assign delay_sr_U437_flush = flush;
delay__U435 delay_sr_U437 (
    .clk(delay_sr_U437_clk),
    .wdata(delay_sr_U437_wdata),
    .rdata(delay_sr_U437_rdata),
    .rst_n(delay_sr_U437_rst_n),
    .flush(delay_sr_U437_flush)
);
assign delay_sr_U443_clk = clk;
assign delay_sr_U443_wdata = delay_sr_U437_rdata;
assign delay_sr_U443_rst_n = rst_n;
assign delay_sr_U443_flush = flush;
delay__U438 delay_sr_U443 (
    .clk(delay_sr_U443_clk),
    .wdata(delay_sr_U443_wdata),
    .rdata(delay_sr_U443_rdata),
    .rst_n(delay_sr_U443_rst_n),
    .flush(delay_sr_U443_flush)
);
assign delay_sr_U448_clk = clk;
assign delay_sr_U448_wdata = delay_sr_U443_rdata;
assign delay_sr_U448_rst_n = rst_n;
assign delay_sr_U448_flush = flush;
delay__U444 delay_sr_U448 (
    .clk(delay_sr_U448_clk),
    .wdata(delay_sr_U448_wdata),
    .rdata(delay_sr_U448_rdata),
    .rst_n(delay_sr_U448_rst_n),
    .flush(delay_sr_U448_flush)
);
assign delay_sr_U451_clk = clk;
assign delay_sr_U451_wdata = delay_sr_U448_rdata;
assign delay_sr_U451_rst_n = rst_n;
assign delay_sr_U451_flush = flush;
delay__U449 delay_sr_U451 (
    .clk(delay_sr_U451_clk),
    .wdata(delay_sr_U451_wdata),
    .rdata(delay_sr_U451_rdata),
    .rst_n(delay_sr_U451_rst_n),
    .flush(delay_sr_U451_flush)
);
assign delay_sr_U454_clk = clk;
assign delay_sr_U454_wdata = delay_sr_U451_rdata;
assign delay_sr_U454_rst_n = rst_n;
assign delay_sr_U454_flush = flush;
delay__U452 delay_sr_U454 (
    .clk(delay_sr_U454_clk),
    .wdata(delay_sr_U454_wdata),
    .rdata(delay_sr_U454_rdata),
    .rst_n(delay_sr_U454_rst_n),
    .flush(delay_sr_U454_flush)
);
assign delay_sr_U456_clk = clk;
assign delay_sr_U456_wdata = delay_sr_U454_rdata;
assign delay_sr_U456_rst_n = rst_n;
assign delay_sr_U456_flush = flush;
memtile_long_delay__U455 delay_sr_U456 (
    .clk(delay_sr_U456_clk),
    .wdata(delay_sr_U456_wdata),
    .rdata(delay_sr_U456_rdata),
    .rst_n(delay_sr_U456_rst_n),
    .flush(delay_sr_U456_flush)
);
assign delay_sr_U459_clk = clk;
assign delay_sr_U459_wdata = delay_sr_U456_rdata;
assign delay_sr_U459_rst_n = rst_n;
assign delay_sr_U459_flush = flush;
delay__U457 delay_sr_U459 (
    .clk(delay_sr_U459_clk),
    .wdata(delay_sr_U459_wdata),
    .rdata(delay_sr_U459_rdata),
    .rst_n(delay_sr_U459_rst_n),
    .flush(delay_sr_U459_flush)
);
assign delay_sr_U462_clk = clk;
assign delay_sr_U462_wdata = delay_sr_U459_rdata;
assign delay_sr_U462_rst_n = rst_n;
assign delay_sr_U462_flush = flush;
delay__U460 delay_sr_U462 (
    .clk(delay_sr_U462_clk),
    .wdata(delay_sr_U462_wdata),
    .rdata(delay_sr_U462_rdata),
    .rst_n(delay_sr_U462_rst_n),
    .flush(delay_sr_U462_flush)
);
assign delay_sr_U466_clk = clk;
assign delay_sr_U466_wdata = delay_sr_U462_rdata;
assign delay_sr_U466_rst_n = rst_n;
assign delay_sr_U466_flush = flush;
delay__U463 delay_sr_U466 (
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
assign delay_sr_U476_clk = clk;
assign delay_sr_U476_wdata = delay_sr_U472_rdata;
assign delay_sr_U476_rst_n = rst_n;
assign delay_sr_U476_flush = flush;
delay__U473 delay_sr_U476 (
    .clk(delay_sr_U476_clk),
    .wdata(delay_sr_U476_wdata),
    .rdata(delay_sr_U476_rdata),
    .rst_n(delay_sr_U476_rst_n),
    .flush(delay_sr_U476_flush)
);
assign delay_sr_U479_clk = clk;
assign delay_sr_U479_wdata = delay_sr_U476_rdata;
assign delay_sr_U479_rst_n = rst_n;
assign delay_sr_U479_flush = flush;
delay__U477 delay_sr_U479 (
    .clk(delay_sr_U479_clk),
    .wdata(delay_sr_U479_wdata),
    .rdata(delay_sr_U479_rdata),
    .rst_n(delay_sr_U479_rst_n),
    .flush(delay_sr_U479_flush)
);
assign delay_sr_U482_clk = clk;
assign delay_sr_U482_wdata = delay_sr_U479_rdata;
assign delay_sr_U482_rst_n = rst_n;
assign delay_sr_U482_flush = flush;
delay__U480 delay_sr_U482 (
    .clk(delay_sr_U482_clk),
    .wdata(delay_sr_U482_wdata),
    .rdata(delay_sr_U482_rdata),
    .rst_n(delay_sr_U482_rst_n),
    .flush(delay_sr_U482_flush)
);
assign delay_sr_U484_clk = clk;
assign delay_sr_U484_wdata = delay_sr_U482_rdata;
assign delay_sr_U484_rst_n = rst_n;
assign delay_sr_U484_flush = flush;
memtile_long_delay__U483 delay_sr_U484 (
    .clk(delay_sr_U484_clk),
    .wdata(delay_sr_U484_wdata),
    .rdata(delay_sr_U484_rdata),
    .rst_n(delay_sr_U484_rst_n),
    .flush(delay_sr_U484_flush)
);
assign delay_sr_U487_clk = clk;
assign delay_sr_U487_wdata = delay_sr_U484_rdata;
assign delay_sr_U487_rst_n = rst_n;
assign delay_sr_U487_flush = flush;
delay__U485 delay_sr_U487 (
    .clk(delay_sr_U487_clk),
    .wdata(delay_sr_U487_wdata),
    .rdata(delay_sr_U487_rdata),
    .rst_n(delay_sr_U487_rst_n),
    .flush(delay_sr_U487_flush)
);
assign delay_sr_U490_clk = clk;
assign delay_sr_U490_wdata = delay_sr_U487_rdata;
assign delay_sr_U490_rst_n = rst_n;
assign delay_sr_U490_flush = flush;
delay__U488 delay_sr_U490 (
    .clk(delay_sr_U490_clk),
    .wdata(delay_sr_U490_wdata),
    .rdata(delay_sr_U490_rdata),
    .rst_n(delay_sr_U490_rst_n),
    .flush(delay_sr_U490_flush)
);
assign delay_sr_U495_clk = clk;
assign delay_sr_U495_wdata = delay_sr_U490_rdata;
assign delay_sr_U495_rst_n = rst_n;
assign delay_sr_U495_flush = flush;
delay__U491 delay_sr_U495 (
    .clk(delay_sr_U495_clk),
    .wdata(delay_sr_U495_wdata),
    .rdata(delay_sr_U495_rdata),
    .rst_n(delay_sr_U495_rst_n),
    .flush(delay_sr_U495_flush)
);
assign delay_sr_U501_clk = clk;
assign delay_sr_U501_wdata = delay_sr_U495_rdata;
assign delay_sr_U501_rst_n = rst_n;
assign delay_sr_U501_flush = flush;
delay__U496 delay_sr_U501 (
    .clk(delay_sr_U501_clk),
    .wdata(delay_sr_U501_wdata),
    .rdata(delay_sr_U501_rdata),
    .rst_n(delay_sr_U501_rst_n),
    .flush(delay_sr_U501_flush)
);
assign delay_sr_U504_clk = clk;
assign delay_sr_U504_wdata = delay_sr_U501_rdata;
assign delay_sr_U504_rst_n = rst_n;
assign delay_sr_U504_flush = flush;
delay__U502 delay_sr_U504 (
    .clk(delay_sr_U504_clk),
    .wdata(delay_sr_U504_wdata),
    .rdata(delay_sr_U504_rdata),
    .rst_n(delay_sr_U504_rst_n),
    .flush(delay_sr_U504_flush)
);
assign op_hcompute_demosaicked_1_stencil_1_read[4] = delay_sr_U469_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[3] = delay_sr_U495_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[2] = delay_sr_U466_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[1] = delay_sr_U443_rdata;
assign op_hcompute_demosaicked_1_stencil_1_read[0] = delay_sr_U472_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[7] = delay_sr_U504_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[6] = delay_sr_U482_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[5] = delay_sr_U454_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[4] = delay_sr_U501_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[3] = delay_sr_U476_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[2] = delay_sr_U448_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[1] = delay_sr_U451_rdata;
assign op_hcompute_demosaicked_1_stencil_2_read[0] = delay_sr_U479_rdata;
assign op_hcompute_demosaicked_1_stencil_read[7] = delay_sr_U490_rdata;
assign op_hcompute_demosaicked_1_stencil_read[6] = delay_sr_U487_rdata;
assign op_hcompute_demosaicked_1_stencil_read[5] = delay_sr_U484_rdata;
assign op_hcompute_demosaicked_1_stencil_read[4] = delay_sr_U437_rdata;
assign op_hcompute_demosaicked_1_stencil_read[3] = delay_sr_U462_rdata;
assign op_hcompute_demosaicked_1_stencil_read[2] = delay_sr_U434_rdata;
assign op_hcompute_demosaicked_1_stencil_read[1] = delay_sr_U456_rdata;
assign op_hcompute_demosaicked_1_stencil_read[0] = delay_sr_U459_rdata;
endmodule

module delay__U423 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U424_in;
wire _U424_clk;
wire [15:0] _U424_out;
wire [15:0] _U425_in;
wire _U425_clk;
wire [15:0] _U425_out;
wire [15:0] _U426_in;
wire _U426_clk;
wire [15:0] _U426_out;
wire [15:0] _U427_in;
wire _U427_clk;
assign _U424_in = wdata;
assign _U424_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U424 (
    .in(_U424_in),
    .clk(_U424_clk),
    .out(_U424_out)
);
assign _U425_in = _U424_out;
assign _U425_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U425 (
    .in(_U425_in),
    .clk(_U425_clk),
    .out(_U425_out)
);
assign _U426_in = _U425_out;
assign _U426_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U426 (
    .in(_U426_in),
    .clk(_U426_clk),
    .out(_U426_out)
);
assign _U427_in = _U426_out;
assign _U427_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U427 (
    .in(_U427_in),
    .clk(_U427_clk),
    .out(rdata)
);
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

module delay__U411 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U412_in;
wire _U412_clk;
wire [15:0] _U412_out;
wire [15:0] _U413_in;
wire _U413_clk;
wire [15:0] _U413_out;
wire [15:0] _U414_in;
wire _U414_clk;
wire [15:0] _U414_out;
wire [15:0] _U415_in;
wire _U415_clk;
assign _U412_in = wdata;
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
    .out(_U413_out)
);
assign _U414_in = _U413_out;
assign _U414_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U414 (
    .in(_U414_in),
    .clk(_U414_clk),
    .out(_U414_out)
);
assign _U415_in = _U414_out;
assign _U415_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U415 (
    .in(_U415_in),
    .clk(_U415_clk),
    .out(rdata)
);
endmodule

module delay__U405 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U406_in;
wire _U406_clk;
wire [15:0] _U406_out;
wire [15:0] _U407_in;
wire _U407_clk;
wire [15:0] _U407_out;
wire [15:0] _U408_in;
wire _U408_clk;
wire [15:0] _U408_out;
wire [15:0] _U409_in;
wire _U409_clk;
assign _U406_in = wdata;
assign _U406_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U406 (
    .in(_U406_in),
    .clk(_U406_clk),
    .out(_U406_out)
);
assign _U407_in = _U406_out;
assign _U407_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U407 (
    .in(_U407_in),
    .clk(_U407_clk),
    .out(_U407_out)
);
assign _U408_in = _U407_out;
assign _U408_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U408 (
    .in(_U408_in),
    .clk(_U408_clk),
    .out(_U408_out)
);
assign _U409_in = _U408_out;
assign _U409_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U409 (
    .in(_U409_in),
    .clk(_U409_clk),
    .out(rdata)
);
endmodule

module delay__U399 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U400_in;
wire _U400_clk;
wire [15:0] _U400_out;
wire [15:0] _U401_in;
wire _U401_clk;
wire [15:0] _U401_out;
wire [15:0] _U402_in;
wire _U402_clk;
wire [15:0] _U402_out;
wire [15:0] _U403_in;
wire _U403_clk;
assign _U400_in = wdata;
assign _U400_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U400 (
    .in(_U400_in),
    .clk(_U400_clk),
    .out(_U400_out)
);
assign _U401_in = _U400_out;
assign _U401_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U401 (
    .in(_U401_in),
    .clk(_U401_clk),
    .out(_U401_out)
);
assign _U402_in = _U401_out;
assign _U402_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U402 (
    .in(_U402_in),
    .clk(_U402_clk),
    .out(_U402_out)
);
assign _U403_in = _U402_out;
assign _U403_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U403 (
    .in(_U403_in),
    .clk(_U403_clk),
    .out(rdata)
);
endmodule

module delay__U391 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U392_in;
wire _U392_clk;
wire [15:0] _U392_out;
wire [15:0] _U393_in;
wire _U393_clk;
wire [15:0] _U393_out;
wire [15:0] _U394_in;
wire _U394_clk;
wire [15:0] _U394_out;
wire [15:0] _U395_in;
wire _U395_clk;
assign _U392_in = wdata;
assign _U392_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U392 (
    .in(_U392_in),
    .clk(_U392_clk),
    .out(_U392_out)
);
assign _U393_in = _U392_out;
assign _U393_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U393 (
    .in(_U393_in),
    .clk(_U393_clk),
    .out(_U393_out)
);
assign _U394_in = _U393_out;
assign _U394_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U394 (
    .in(_U394_in),
    .clk(_U394_clk),
    .out(_U394_out)
);
assign _U395_in = _U394_out;
assign _U395_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U395 (
    .in(_U395_in),
    .clk(_U395_clk),
    .out(rdata)
);
endmodule

module delay__U385 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U386_in;
wire _U386_clk;
wire [15:0] _U386_out;
wire [15:0] _U387_in;
wire _U387_clk;
wire [15:0] _U387_out;
wire [15:0] _U388_in;
wire _U388_clk;
wire [15:0] _U388_out;
wire [15:0] _U389_in;
wire _U389_clk;
assign _U386_in = wdata;
assign _U386_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U386 (
    .in(_U386_in),
    .clk(_U386_clk),
    .out(_U386_out)
);
assign _U387_in = _U386_out;
assign _U387_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U387 (
    .in(_U387_in),
    .clk(_U387_clk),
    .out(_U387_out)
);
assign _U388_in = _U387_out;
assign _U388_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U388 (
    .in(_U388_in),
    .clk(_U388_clk),
    .out(_U388_out)
);
assign _U389_in = _U388_out;
assign _U389_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U389 (
    .in(_U389_in),
    .clk(_U389_clk),
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
wire [15:0] _U379_out;
wire [15:0] _U380_in;
wire _U380_clk;
wire [15:0] _U380_out;
wire [15:0] _U381_in;
wire _U381_clk;
wire [15:0] _U381_out;
wire [15:0] _U382_in;
wire _U382_clk;
wire [15:0] _U382_out;
wire [15:0] _U383_in;
wire _U383_clk;
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
    .out(_U379_out)
);
assign _U380_in = _U379_out;
assign _U380_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U380 (
    .in(_U380_in),
    .clk(_U380_clk),
    .out(_U380_out)
);
assign _U381_in = _U380_out;
assign _U381_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U381 (
    .in(_U381_in),
    .clk(_U381_clk),
    .out(_U381_out)
);
assign _U382_in = _U381_out;
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
    .out(rdata)
);
endmodule

module demosaicked_1_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U384_clk;
wire [15:0] delay_sr_U384_wdata;
wire [15:0] delay_sr_U384_rdata;
wire delay_sr_U384_rst_n;
wire delay_sr_U384_flush;
wire delay_sr_U390_clk;
wire [15:0] delay_sr_U390_wdata;
wire [15:0] delay_sr_U390_rdata;
wire delay_sr_U390_rst_n;
wire delay_sr_U390_flush;
wire delay_sr_U396_clk;
wire [15:0] delay_sr_U396_wdata;
wire [15:0] delay_sr_U396_rdata;
wire delay_sr_U396_rst_n;
wire delay_sr_U396_flush;
wire delay_sr_U398_clk;
wire [15:0] delay_sr_U398_wdata;
wire [15:0] delay_sr_U398_rdata;
wire delay_sr_U398_rst_n;
wire delay_sr_U398_flush;
wire delay_sr_U404_clk;
wire [15:0] delay_sr_U404_wdata;
wire [15:0] delay_sr_U404_rdata;
wire delay_sr_U404_rst_n;
wire delay_sr_U404_flush;
wire delay_sr_U410_clk;
wire [15:0] delay_sr_U410_wdata;
wire [15:0] delay_sr_U410_rdata;
wire delay_sr_U410_rst_n;
wire delay_sr_U410_flush;
wire delay_sr_U416_clk;
wire [15:0] delay_sr_U416_wdata;
wire [15:0] delay_sr_U416_rdata;
wire delay_sr_U416_rst_n;
wire delay_sr_U416_flush;
wire delay_sr_U422_clk;
wire [15:0] delay_sr_U422_wdata;
wire [15:0] delay_sr_U422_rdata;
wire delay_sr_U422_rst_n;
wire delay_sr_U422_flush;
wire delay_sr_U428_clk;
wire [15:0] delay_sr_U428_wdata;
wire [15:0] delay_sr_U428_rdata;
wire delay_sr_U428_rst_n;
wire delay_sr_U428_flush;
assign delay_sr_U384_clk = clk;
assign delay_sr_U384_wdata = op_hcompute_demosaicked_1_stencil_1_write[0];
assign delay_sr_U384_rst_n = rst_n;
assign delay_sr_U384_flush = flush;
delay__U375 delay_sr_U384 (
    .clk(delay_sr_U384_clk),
    .wdata(delay_sr_U384_wdata),
    .rdata(delay_sr_U384_rdata),
    .rst_n(delay_sr_U384_rst_n),
    .flush(delay_sr_U384_flush)
);
assign delay_sr_U390_clk = clk;
assign delay_sr_U390_wdata = delay_sr_U384_rdata;
assign delay_sr_U390_rst_n = rst_n;
assign delay_sr_U390_flush = flush;
delay__U385 delay_sr_U390 (
    .clk(delay_sr_U390_clk),
    .wdata(delay_sr_U390_wdata),
    .rdata(delay_sr_U390_rdata),
    .rst_n(delay_sr_U390_rst_n),
    .flush(delay_sr_U390_flush)
);
assign delay_sr_U396_clk = clk;
assign delay_sr_U396_wdata = delay_sr_U390_rdata;
assign delay_sr_U396_rst_n = rst_n;
assign delay_sr_U396_flush = flush;
delay__U391 delay_sr_U396 (
    .clk(delay_sr_U396_clk),
    .wdata(delay_sr_U396_wdata),
    .rdata(delay_sr_U396_rdata),
    .rst_n(delay_sr_U396_rst_n),
    .flush(delay_sr_U396_flush)
);
assign delay_sr_U398_clk = clk;
assign delay_sr_U398_wdata = op_hcompute_demosaicked_1_stencil_write[0];
assign delay_sr_U398_rst_n = rst_n;
assign delay_sr_U398_flush = flush;
memtile_long_delay__U397 delay_sr_U398 (
    .clk(delay_sr_U398_clk),
    .wdata(delay_sr_U398_wdata),
    .rdata(delay_sr_U398_rdata),
    .rst_n(delay_sr_U398_rst_n),
    .flush(delay_sr_U398_flush)
);
assign delay_sr_U404_clk = clk;
assign delay_sr_U404_wdata = delay_sr_U398_rdata;
assign delay_sr_U404_rst_n = rst_n;
assign delay_sr_U404_flush = flush;
delay__U399 delay_sr_U404 (
    .clk(delay_sr_U404_clk),
    .wdata(delay_sr_U404_wdata),
    .rdata(delay_sr_U404_rdata),
    .rst_n(delay_sr_U404_rst_n),
    .flush(delay_sr_U404_flush)
);
assign delay_sr_U410_clk = clk;
assign delay_sr_U410_wdata = delay_sr_U404_rdata;
assign delay_sr_U410_rst_n = rst_n;
assign delay_sr_U410_flush = flush;
delay__U405 delay_sr_U410 (
    .clk(delay_sr_U410_clk),
    .wdata(delay_sr_U410_wdata),
    .rdata(delay_sr_U410_rdata),
    .rst_n(delay_sr_U410_rst_n),
    .flush(delay_sr_U410_flush)
);
assign delay_sr_U416_clk = clk;
assign delay_sr_U416_wdata = op_hcompute_demosaicked_1_stencil_2_write[0];
assign delay_sr_U416_rst_n = rst_n;
assign delay_sr_U416_flush = flush;
delay__U411 delay_sr_U416 (
    .clk(delay_sr_U416_clk),
    .wdata(delay_sr_U416_wdata),
    .rdata(delay_sr_U416_rdata),
    .rst_n(delay_sr_U416_rst_n),
    .flush(delay_sr_U416_flush)
);
assign delay_sr_U422_clk = clk;
assign delay_sr_U422_wdata = delay_sr_U416_rdata;
assign delay_sr_U422_rst_n = rst_n;
assign delay_sr_U422_flush = flush;
delay__U417 delay_sr_U422 (
    .clk(delay_sr_U422_clk),
    .wdata(delay_sr_U422_wdata),
    .rdata(delay_sr_U422_rdata),
    .rst_n(delay_sr_U422_rst_n),
    .flush(delay_sr_U422_flush)
);
assign delay_sr_U428_clk = clk;
assign delay_sr_U428_wdata = delay_sr_U422_rdata;
assign delay_sr_U428_rst_n = rst_n;
assign delay_sr_U428_flush = flush;
delay__U423 delay_sr_U428 (
    .clk(delay_sr_U428_clk),
    .wdata(delay_sr_U428_wdata),
    .rdata(delay_sr_U428_rdata),
    .rst_n(delay_sr_U428_rst_n),
    .flush(delay_sr_U428_flush)
);
assign op_hcompute_corrected_stencil_1_read[2] = delay_sr_U422_rdata;
assign op_hcompute_corrected_stencil_1_read[1] = delay_sr_U404_rdata;
assign op_hcompute_corrected_stencil_1_read[0] = delay_sr_U390_rdata;
assign op_hcompute_corrected_stencil_2_read[2] = delay_sr_U410_rdata;
assign op_hcompute_corrected_stencil_2_read[1] = delay_sr_U396_rdata;
assign op_hcompute_corrected_stencil_2_read[0] = delay_sr_U428_rdata;
assign op_hcompute_corrected_stencil_read[2] = delay_sr_U384_rdata;
assign op_hcompute_corrected_stencil_read[1] = delay_sr_U416_rdata;
assign op_hcompute_corrected_stencil_read[0] = delay_sr_U398_rdata;
endmodule

module delay__U361 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U362_in;
wire _U362_clk;
wire [15:0] _U362_out;
wire [15:0] _U363_in;
wire _U363_clk;
wire [15:0] _U363_out;
wire [15:0] _U364_in;
wire _U364_clk;
wire [15:0] _U364_out;
wire [15:0] _U365_in;
wire _U365_clk;
wire [15:0] _U365_out;
wire [15:0] _U366_in;
wire _U366_clk;
wire [15:0] _U366_out;
wire [15:0] _U367_in;
wire _U367_clk;
wire [15:0] _U367_out;
wire [15:0] _U368_in;
wire _U368_clk;
wire [15:0] _U368_out;
wire [15:0] _U369_in;
wire _U369_clk;
wire [15:0] _U369_out;
wire [15:0] _U370_in;
wire _U370_clk;
wire [15:0] _U370_out;
wire [15:0] _U371_in;
wire _U371_clk;
assign _U362_in = wdata;
assign _U362_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U362 (
    .in(_U362_in),
    .clk(_U362_clk),
    .out(_U362_out)
);
assign _U363_in = _U362_out;
assign _U363_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U363 (
    .in(_U363_in),
    .clk(_U363_clk),
    .out(_U363_out)
);
assign _U364_in = _U363_out;
assign _U364_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U364 (
    .in(_U364_in),
    .clk(_U364_clk),
    .out(_U364_out)
);
assign _U365_in = _U364_out;
assign _U365_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U365 (
    .in(_U365_in),
    .clk(_U365_clk),
    .out(_U365_out)
);
assign _U366_in = _U365_out;
assign _U366_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U366 (
    .in(_U366_in),
    .clk(_U366_clk),
    .out(_U366_out)
);
assign _U367_in = _U366_out;
assign _U367_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U367 (
    .in(_U367_in),
    .clk(_U367_clk),
    .out(_U367_out)
);
assign _U368_in = _U367_out;
assign _U368_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U368 (
    .in(_U368_in),
    .clk(_U368_clk),
    .out(_U368_out)
);
assign _U369_in = _U368_out;
assign _U369_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U369 (
    .in(_U369_in),
    .clk(_U369_clk),
    .out(_U369_out)
);
assign _U370_in = _U369_out;
assign _U370_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U370 (
    .in(_U370_in),
    .clk(_U370_clk),
    .out(_U370_out)
);
assign _U371_in = _U370_out;
assign _U371_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U371 (
    .in(_U371_in),
    .clk(_U371_clk),
    .out(rdata)
);
endmodule

module curved_stencil_ub (
    input clk,
    input flush,
    input rst_n,
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
wire delay_sr_U360_clk;
wire [15:0] delay_sr_U360_wdata;
wire [15:0] delay_sr_U360_rdata;
wire delay_sr_U360_rst_n;
wire delay_sr_U360_flush;
wire delay_sr_U372_clk;
wire [15:0] delay_sr_U372_wdata;
wire [15:0] delay_sr_U372_rdata;
wire delay_sr_U372_rst_n;
wire delay_sr_U372_flush;
wire delay_sr_U374_clk;
wire [15:0] delay_sr_U374_wdata;
wire [15:0] delay_sr_U374_rdata;
wire delay_sr_U374_rst_n;
wire delay_sr_U374_flush;
assign delay_sr_U360_clk = clk;
assign delay_sr_U360_wdata = op_hcompute_curved_stencil_1_write[0];
assign delay_sr_U360_rst_n = rst_n;
assign delay_sr_U360_flush = flush;
memtile_long_delay__U359 delay_sr_U360 (
    .clk(delay_sr_U360_clk),
    .wdata(delay_sr_U360_wdata),
    .rdata(delay_sr_U360_rdata),
    .rst_n(delay_sr_U360_rst_n),
    .flush(delay_sr_U360_flush)
);
assign delay_sr_U372_clk = clk;
assign delay_sr_U372_wdata = op_hcompute_curved_stencil_2_write[0];
assign delay_sr_U372_rst_n = rst_n;
assign delay_sr_U372_flush = flush;
delay__U361 delay_sr_U372 (
    .clk(delay_sr_U372_clk),
    .wdata(delay_sr_U372_wdata),
    .rdata(delay_sr_U372_rdata),
    .rst_n(delay_sr_U372_rst_n),
    .flush(delay_sr_U372_flush)
);
assign delay_sr_U374_clk = clk;
assign delay_sr_U374_wdata = op_hcompute_curved_stencil_write[0];
assign delay_sr_U374_rst_n = rst_n;
assign delay_sr_U374_flush = flush;
memtile_long_delay__U373 delay_sr_U374 (
    .clk(delay_sr_U374_clk),
    .wdata(delay_sr_U374_wdata),
    .rdata(delay_sr_U374_rdata),
    .rst_n(delay_sr_U374_rst_n),
    .flush(delay_sr_U374_flush)
);
assign op_hcompute_hw_output_stencil_1_read[0] = delay_sr_U360_rdata;
assign op_hcompute_hw_output_stencil_2_read[0] = delay_sr_U372_rdata;
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U374_rdata;
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
wire [15:0] _U524_in;
wire _U524_clk;
wire [15:0] _U524_out;
wire corrected_stencil_clk;
wire corrected_stencil_flush;
wire corrected_stencil_rst_n;
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
wire curved_stencil_flush;
wire curved_stencil_rst_n;
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
wire demosaicked_1_stencil_flush;
wire demosaicked_1_stencil_rst_n;
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
wire denoised_1_stencil_flush;
wire denoised_1_stencil_rst_n;
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
wire hw_input_global_wrapper_stencil_flush;
wire hw_input_global_wrapper_stencil_rst_n;
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
assign _U524_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U524_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U524 (
    .in(_U524_in),
    .clk(_U524_clk),
    .out(_U524_out)
);
assign corrected_stencil_clk = clk;
assign corrected_stencil_flush = flush;
assign corrected_stencil_rst_n = rst_n;
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
    .flush(corrected_stencil_flush),
    .rst_n(corrected_stencil_rst_n),
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
assign curved_stencil_flush = flush;
assign curved_stencil_rst_n = rst_n;
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
    .flush(curved_stencil_flush),
    .rst_n(curved_stencil_rst_n),
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
assign demosaicked_1_stencil_flush = flush;
assign demosaicked_1_stencil_rst_n = rst_n;
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
    .flush(demosaicked_1_stencil_flush),
    .rst_n(demosaicked_1_stencil_rst_n),
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
assign denoised_1_stencil_flush = flush;
assign denoised_1_stencil_rst_n = rst_n;
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
    .flush(denoised_1_stencil_flush),
    .rst_n(denoised_1_stencil_rst_n),
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
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
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
    .flush(hw_input_global_wrapper_stencil_flush),
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
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
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U524_out;
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

