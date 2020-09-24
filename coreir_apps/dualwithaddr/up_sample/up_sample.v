module cu_op_hcompute_nearest_neighbor_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read [0:0],
    output [15:0] nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write [0:0]
);
assign nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write[0] = hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read[0];
endmodule

module cu_op_hcompute_hw_input_stencil (
    input clk,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0],
    output [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0]
);
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
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

module delay__U453 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
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
assign _U454_in = wdata;
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

module nearest_neighbor_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0],
    input op_hcompute_nearest_neighbor_stencil_write_wen,
    input [15:0] op_hcompute_nearest_neighbor_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_nearest_neighbor_stencil_write [0:0]
);
wire delay_sr_U458_clk;
wire [15:0] delay_sr_U458_wdata;
wire [15:0] delay_sr_U458_rdata;
wire delay_sr_U458_rst_n;
wire delay_sr_U458_flush;
assign delay_sr_U458_clk = clk;
assign delay_sr_U458_wdata = op_hcompute_nearest_neighbor_stencil_write[0];
assign delay_sr_U458_rst_n = rst_n;
assign delay_sr_U458_flush = flush;
delay__U453 delay_sr_U458 (
    .clk(delay_sr_U458_clk),
    .wdata(delay_sr_U458_wdata),
    .rdata(delay_sr_U458_rdata),
    .rst_n(delay_sr_U458_rst_n),
    .flush(delay_sr_U458_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U458_rdata;
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

module raw_dual_port_sram_tile__depth2048 (
    input clk,
    input [15:0] wdata,
    input [15:0] waddr,
    input wen,
    output [15:0] rdata,
    input [15:0] raddr,
    input ren
);
wire mem_clk;
wire [15:0] mem_wdata;
wire [10:0] mem_waddr;
wire mem_wen;
wire [15:0] mem_rdata;
wire [10:0] mem_raddr;
wire [15:0] readreg_in;
wire readreg_clk;
wire readreg_en;
assign mem_clk = clk;
assign mem_wdata = wdata;
assign mem_waddr = waddr[11 - 1:0];
assign mem_wen = wen;
assign mem_raddr = raddr[11 - 1:0];
coreir_mem #(
    .depth(2048),
    .has_init(1'b0),
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

module array_delay_U395 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U396_in;
wire _U396_clk;
wire [15:0] _U396_out;
wire [15:0] _U397_in;
wire _U397_clk;
wire [15:0] _U397_out;
wire [15:0] _U398_in;
wire _U398_clk;
wire [15:0] _U398_out;
assign _U396_in = in[0];
assign _U396_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U396 (
    .in(_U396_in),
    .clk(_U396_clk),
    .out(_U396_out)
);
assign _U397_in = in[1];
assign _U397_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U397 (
    .in(_U397_in),
    .clk(_U397_clk),
    .out(_U397_out)
);
assign _U398_in = in[2];
assign _U398_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U398 (
    .in(_U398_in),
    .clk(_U398_clk),
    .out(_U398_out)
);
assign out[2] = _U398_out;
assign out[1] = _U397_out;
assign out[0] = _U396_out;
endmodule

module array_delay_U391 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
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
assign _U392_in = in[0];
assign _U392_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U392 (
    .in(_U392_in),
    .clk(_U392_clk),
    .out(_U392_out)
);
assign _U393_in = in[1];
assign _U393_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U393 (
    .in(_U393_in),
    .clk(_U393_clk),
    .out(_U393_out)
);
assign _U394_in = in[2];
assign _U394_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U394 (
    .in(_U394_in),
    .clk(_U394_clk),
    .out(_U394_out)
);
assign out[2] = _U394_out;
assign out[1] = _U393_out;
assign out[0] = _U392_out;
endmodule

module array_delay_U370 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U371_in;
wire _U371_clk;
wire [15:0] _U371_out;
wire [15:0] _U372_in;
wire _U372_clk;
wire [15:0] _U372_out;
wire [15:0] _U373_in;
wire _U373_clk;
wire [15:0] _U373_out;
assign _U371_in = in[0];
assign _U371_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U371 (
    .in(_U371_in),
    .clk(_U371_clk),
    .out(_U371_out)
);
assign _U372_in = in[1];
assign _U372_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U372 (
    .in(_U372_in),
    .clk(_U372_clk),
    .out(_U372_out)
);
assign _U373_in = in[2];
assign _U373_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U373 (
    .in(_U373_in),
    .clk(_U373_clk),
    .out(_U373_out)
);
assign out[2] = _U373_out;
assign out[1] = _U372_out;
assign out[0] = _U371_out;
endmodule

module array_delay_U366 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U367_in;
wire _U367_clk;
wire [15:0] _U367_out;
wire [15:0] _U368_in;
wire _U368_clk;
wire [15:0] _U368_out;
wire [15:0] _U369_in;
wire _U369_clk;
wire [15:0] _U369_out;
assign _U367_in = in[0];
assign _U367_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U367 (
    .in(_U367_in),
    .clk(_U367_clk),
    .out(_U367_out)
);
assign _U368_in = in[1];
assign _U368_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U368 (
    .in(_U368_in),
    .clk(_U368_clk),
    .out(_U368_out)
);
assign _U369_in = in[2];
assign _U369_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U369 (
    .in(_U369_in),
    .clk(_U369_clk),
    .out(_U369_out)
);
assign out[2] = _U369_out;
assign out[1] = _U368_out;
assign out[0] = _U367_out;
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

module array_delay_U341 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U342_in;
wire _U342_clk;
wire [15:0] _U342_out;
wire [15:0] _U343_in;
wire _U343_clk;
wire [15:0] _U343_out;
wire [15:0] _U344_in;
wire _U344_clk;
wire [15:0] _U344_out;
assign _U342_in = in[0];
assign _U342_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U342 (
    .in(_U342_in),
    .clk(_U342_clk),
    .out(_U342_out)
);
assign _U343_in = in[1];
assign _U343_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U343 (
    .in(_U343_in),
    .clk(_U343_clk),
    .out(_U343_out)
);
assign _U344_in = in[2];
assign _U344_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U344 (
    .in(_U344_in),
    .clk(_U344_clk),
    .out(_U344_out)
);
assign out[2] = _U344_out;
assign out[1] = _U343_out;
assign out[0] = _U342_out;
endmodule

module aff__U91 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0002);
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

module aff__U73 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0001);
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

module aff__U55 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0001);
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

module aff__U441 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0000);
endmodule

module aff__U399 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'(((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0001 * d[1])))) + (16'(16'h0000 * d[2])))) + 16'h0001)) >> 16'h0001) * 16'hffc0)) + (16'(((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0000 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001)) >> 16'h0001) * 16'hffff)))) + (16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0000)));
endmodule

module hw_input_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_hw_input_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0],
    input op_hcompute_nearest_neighbor_stencil_read_ren,
    input [15:0] op_hcompute_nearest_neighbor_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_nearest_neighbor_stencil_read [0:0]
);
wire [15:0] addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_out;
wire [15:0] addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_d [2:0];
wire [15:0] addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_out;
wire [15:0] addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_d [2:0];
wire hw_input_stencil_bank_clk;
wire [15:0] hw_input_stencil_bank_wdata;
wire [15:0] hw_input_stencil_bank_waddr;
wire hw_input_stencil_bank_wen;
wire [15:0] hw_input_stencil_bank_rdata;
wire [15:0] hw_input_stencil_bank_raddr;
wire hw_input_stencil_bank_ren;
assign addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_d[2] = op_hcompute_hw_input_stencil_write_ctrl_vars[2];
assign addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_d[1] = op_hcompute_hw_input_stencil_write_ctrl_vars[1];
assign addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_d[0] = op_hcompute_hw_input_stencil_write_ctrl_vars[0];
aff__U441 addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452 (
    .out(addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_out),
    .d(addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_d)
);
assign addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_d[2] = op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2];
assign addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_d[1] = op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1];
assign addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_d[0] = op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[0];
aff__U399 addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440 (
    .out(addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_out),
    .d(addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_d)
);
assign hw_input_stencil_bank_clk = clk;
assign hw_input_stencil_bank_wdata = op_hcompute_hw_input_stencil_write[0];
assign hw_input_stencil_bank_waddr = addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_4_U452_out;
assign hw_input_stencil_bank_wen = op_hcompute_hw_input_stencil_write_wen;
assign hw_input_stencil_bank_raddr = addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_1_U440_out;
assign hw_input_stencil_bank_ren = op_hcompute_nearest_neighbor_stencil_read_ren;
raw_dual_port_sram_tile__depth2048 hw_input_stencil_bank (
    .clk(hw_input_stencil_bank_clk),
    .wdata(hw_input_stencil_bank_wdata),
    .waddr(hw_input_stencil_bank_waddr),
    .wen(hw_input_stencil_bank_wen),
    .rdata(hw_input_stencil_bank_rdata),
    .raddr(hw_input_stencil_bank_raddr),
    .ren(hw_input_stencil_bank_ren)
);
assign op_hcompute_nearest_neighbor_stencil_read[0] = hw_input_stencil_bank_rdata;
endmodule

module aff__U375 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
endmodule

module affine_controller__U374 (
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
aff__U375 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0001);
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

module aff__U350 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
endmodule

module affine_controller__U349 (
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
aff__U350 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0001);
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

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0007);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0005);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0001);
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0003);
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
assign d_1_at_max_out = d_1_reg_out == 16'h007f;
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
assign d_2_at_max_out = d_2_reg_out == 16'h007f;
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
assign out = 16'((16'((16'((16'(16'h4000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0001);
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

module up_sample (
    input clk,
    input rst_n,
    input flush,
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0],
    output input_copy_stencil_op_hcompute_hw_input_stencil_read_valid,
    input [15:0] input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0]
);
wire [15:0] _U459_in;
wire _U459_clk;
wire [15:0] _U459_out;
wire hw_input_stencil_clk;
wire hw_input_stencil_flush;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_op_hcompute_hw_input_stencil_write_wen;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ren;
wire [15:0] hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ctrl_vars [2:0];
wire [15:0] hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read [0:0];
wire nearest_neighbor_stencil_clk;
wire nearest_neighbor_stencil_flush;
wire nearest_neighbor_stencil_rst_n;
wire nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_wen;
wire [15:0] nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_ctrl_vars [2:0];
wire [15:0] nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write [0:0];
wire op_hcompute_hw_input_stencil_clk;
wire [15:0] op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire op_hcompute_hw_input_stencil_exe_start_clk;
wire op_hcompute_hw_input_stencil_exe_start_in;
wire op_hcompute_hw_input_stencil_exe_start_out;
wire op_hcompute_hw_input_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_stencil_port_controller_clk;
wire op_hcompute_hw_input_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U107_clk;
wire op_hcompute_hw_input_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U107_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U17_clk;
wire op_hcompute_hw_input_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U17_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U35_clk;
wire op_hcompute_hw_input_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U35_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U53_clk;
wire op_hcompute_hw_input_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U53_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U71_clk;
wire op_hcompute_hw_input_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U71_d [2:0];
wire op_hcompute_hw_input_stencil_port_controller_U89_clk;
wire op_hcompute_hw_input_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_hw_input_stencil_port_controller_U89_d [2:0];
wire op_hcompute_hw_input_stencil_read_start;
wire op_hcompute_hw_input_stencil_write_start;
wire op_hcompute_hw_input_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read [0:0];
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
wire op_hcompute_hw_output_stencil_port_controller_U233_clk;
wire op_hcompute_hw_output_stencil_port_controller_U233_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U233_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U251_clk;
wire op_hcompute_hw_output_stencil_port_controller_U251_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U251_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U269_clk;
wire op_hcompute_hw_output_stencil_port_controller_U269_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U269_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U287_clk;
wire op_hcompute_hw_output_stencil_port_controller_U287_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U287_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U305_clk;
wire op_hcompute_hw_output_stencil_port_controller_U305_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U305_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U323_clk;
wire op_hcompute_hw_output_stencil_port_controller_U323_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U323_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_nearest_neighbor_stencil_clk;
wire [15:0] op_hcompute_nearest_neighbor_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read [0:0];
wire [15:0] op_hcompute_nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write [0:0];
wire op_hcompute_nearest_neighbor_stencil_exe_start_clk;
wire op_hcompute_nearest_neighbor_stencil_exe_start_in;
wire op_hcompute_nearest_neighbor_stencil_exe_start_out;
wire op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_nearest_neighbor_stencil_port_controller_clk;
wire op_hcompute_nearest_neighbor_stencil_port_controller_valid;
wire [15:0] op_hcompute_nearest_neighbor_stencil_port_controller_d [2:0];
wire op_hcompute_nearest_neighbor_stencil_port_controller_U125_clk;
wire op_hcompute_nearest_neighbor_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_nearest_neighbor_stencil_port_controller_U125_d [2:0];
wire op_hcompute_nearest_neighbor_stencil_port_controller_U143_clk;
wire op_hcompute_nearest_neighbor_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_nearest_neighbor_stencil_port_controller_U143_d [2:0];
wire op_hcompute_nearest_neighbor_stencil_port_controller_U161_clk;
wire op_hcompute_nearest_neighbor_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_nearest_neighbor_stencil_port_controller_U161_d [2:0];
wire op_hcompute_nearest_neighbor_stencil_port_controller_U179_clk;
wire op_hcompute_nearest_neighbor_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_nearest_neighbor_stencil_port_controller_U179_d [2:0];
wire op_hcompute_nearest_neighbor_stencil_port_controller_U197_clk;
wire op_hcompute_nearest_neighbor_stencil_port_controller_U197_valid;
wire [15:0] op_hcompute_nearest_neighbor_stencil_port_controller_U197_d [2:0];
wire op_hcompute_nearest_neighbor_stencil_port_controller_U215_clk;
wire op_hcompute_nearest_neighbor_stencil_port_controller_U215_valid;
wire [15:0] op_hcompute_nearest_neighbor_stencil_port_controller_U215_d [2:0];
wire op_hcompute_nearest_neighbor_stencil_read_start;
wire op_hcompute_nearest_neighbor_stencil_write_start;
wire op_hcompute_nearest_neighbor_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_nearest_neighbor_stencil_write_start_control_vars_out [2:0];
assign _U459_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U459_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U459 (
    .in(_U459_in),
    .clk(_U459_clk),
    .out(_U459_out)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_flush = flush;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_wen = op_hcompute_hw_input_stencil_write_start;
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_stencil_write_start_control_vars_out[2];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_stencil_write_start_control_vars_out[1];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_stencil_write_start_control_vars_out[0];
assign hw_input_stencil_op_hcompute_hw_input_stencil_write[0] = op_hcompute_hw_input_stencil_hw_input_stencil_op_hcompute_hw_input_stencil_write[0];
assign hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ren = op_hcompute_nearest_neighbor_stencil_read_start;
assign hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2] = op_hcompute_nearest_neighbor_stencil_port_controller_d[2];
assign hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1] = op_hcompute_nearest_neighbor_stencil_port_controller_d[1];
assign hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[0] = op_hcompute_nearest_neighbor_stencil_port_controller_d[0];
hw_input_stencil_ub hw_input_stencil (
    .clk(hw_input_stencil_clk),
    .flush(hw_input_stencil_flush),
    .rst_n(hw_input_stencil_rst_n),
    .op_hcompute_hw_input_stencil_write_wen(hw_input_stencil_op_hcompute_hw_input_stencil_write_wen),
    .op_hcompute_hw_input_stencil_write_ctrl_vars(hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write),
    .op_hcompute_nearest_neighbor_stencil_read_ren(hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ren),
    .op_hcompute_nearest_neighbor_stencil_read_ctrl_vars(hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ctrl_vars),
    .op_hcompute_nearest_neighbor_stencil_read(hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read)
);
assign nearest_neighbor_stencil_clk = clk;
assign nearest_neighbor_stencil_flush = flush;
assign nearest_neighbor_stencil_rst_n = rst_n;
assign nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
assign nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_wen = op_hcompute_nearest_neighbor_stencil_write_start;
assign nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[2] = op_hcompute_nearest_neighbor_stencil_write_start_control_vars_out[2];
assign nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[1] = op_hcompute_nearest_neighbor_stencil_write_start_control_vars_out[1];
assign nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_ctrl_vars[0] = op_hcompute_nearest_neighbor_stencil_write_start_control_vars_out[0];
assign nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write[0] = op_hcompute_nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write[0];
nearest_neighbor_stencil_ub nearest_neighbor_stencil (
    .clk(nearest_neighbor_stencil_clk),
    .flush(nearest_neighbor_stencil_flush),
    .rst_n(nearest_neighbor_stencil_rst_n),
    .op_hcompute_hw_output_stencil_read_ren(nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read),
    .op_hcompute_nearest_neighbor_stencil_write_wen(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_wen),
    .op_hcompute_nearest_neighbor_stencil_write_ctrl_vars(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_ctrl_vars),
    .op_hcompute_nearest_neighbor_stencil_write(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U459_out;
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
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U345 op_hcompute_hw_input_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_stencil_port_controller_clk = clk;
affine_controller__U324 op_hcompute_hw_input_stencil_port_controller (
    .clk(op_hcompute_hw_input_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U107_clk = clk;
affine_controller__U90 op_hcompute_hw_input_stencil_port_controller_U107 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U107_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U107_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U107_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U17_clk = clk;
affine_controller__U0 op_hcompute_hw_input_stencil_port_controller_U17 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U17_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U17_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U17_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U35_clk = clk;
affine_controller__U18 op_hcompute_hw_input_stencil_port_controller_U35 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U35_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U35_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U35_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U53_clk = clk;
affine_controller__U36 op_hcompute_hw_input_stencil_port_controller_U53 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U53_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U53_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U53_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U71_clk = clk;
affine_controller__U54 op_hcompute_hw_input_stencil_port_controller_U71 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U71_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U71_d)
);
assign op_hcompute_hw_input_stencil_port_controller_U89_clk = clk;
affine_controller__U72 op_hcompute_hw_input_stencil_port_controller_U89 (
    .clk(op_hcompute_hw_input_stencil_port_controller_U89_clk),
    .valid(op_hcompute_hw_input_stencil_port_controller_U89_valid),
    .d(op_hcompute_hw_input_stencil_port_controller_U89_d)
);
assign op_hcompute_hw_input_stencil_read_start = op_hcompute_hw_input_stencil_port_controller_valid;
assign op_hcompute_hw_input_stencil_write_start = op_hcompute_hw_input_stencil_exe_start_out;
assign op_hcompute_hw_input_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U341 op_hcompute_hw_input_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read[0] = nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read),
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
array_delay_U395 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U374 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_hw_output_stencil_port_controller_U233 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U233_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U233_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U233_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_hw_output_stencil_port_controller_U251 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U251_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U251_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U251_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_hw_output_stencil_port_controller_U269 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U269_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U269_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U269_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_hw_output_stencil_port_controller_U287 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U287_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U287_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U287_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_hw_output_stencil_port_controller_U305 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U305_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U305_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U305_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_hw_output_stencil_port_controller_U323 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U323_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U323_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U323_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U391 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign op_hcompute_nearest_neighbor_stencil_clk = clk;
assign op_hcompute_nearest_neighbor_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read[0] = hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read[0];
cu_op_hcompute_nearest_neighbor_stencil op_hcompute_nearest_neighbor_stencil (
    .clk(op_hcompute_nearest_neighbor_stencil_clk),
    .hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read(op_hcompute_nearest_neighbor_stencil_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read),
    .nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write(op_hcompute_nearest_neighbor_stencil_nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write)
);
assign op_hcompute_nearest_neighbor_stencil_exe_start_clk = clk;
assign op_hcompute_nearest_neighbor_stencil_exe_start_in = op_hcompute_nearest_neighbor_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_nearest_neighbor_stencil_exe_start (
    .clk(op_hcompute_nearest_neighbor_stencil_exe_start_clk),
    .in(op_hcompute_nearest_neighbor_stencil_exe_start_in),
    .out(op_hcompute_nearest_neighbor_stencil_exe_start_out)
);
assign op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_in[2] = op_hcompute_nearest_neighbor_stencil_port_controller_d[2];
assign op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_in[1] = op_hcompute_nearest_neighbor_stencil_port_controller_d[1];
assign op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_in[0] = op_hcompute_nearest_neighbor_stencil_port_controller_d[0];
array_delay_U370 op_hcompute_nearest_neighbor_stencil_exe_start_control_vars (
    .clk(op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_in),
    .out(op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_out)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_clk = clk;
affine_controller__U349 op_hcompute_nearest_neighbor_stencil_port_controller (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_d)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_nearest_neighbor_stencil_port_controller_U125 (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_U125_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_U125_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_U125_d)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_nearest_neighbor_stencil_port_controller_U143 (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_U143_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_U143_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_U143_d)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_nearest_neighbor_stencil_port_controller_U161 (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_U161_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_U161_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_U161_d)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_nearest_neighbor_stencil_port_controller_U179 (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_U179_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_U179_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_U179_d)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_nearest_neighbor_stencil_port_controller_U197 (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_U197_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_U197_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_U197_d)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_nearest_neighbor_stencil_port_controller_U215 (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_U215_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_U215_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_U215_d)
);
assign op_hcompute_nearest_neighbor_stencil_read_start = op_hcompute_nearest_neighbor_stencil_port_controller_valid;
assign op_hcompute_nearest_neighbor_stencil_write_start = op_hcompute_nearest_neighbor_stencil_exe_start_out;
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in[2] = op_hcompute_nearest_neighbor_stencil_port_controller_d[2];
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in[1] = op_hcompute_nearest_neighbor_stencil_port_controller_d[1];
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in[0] = op_hcompute_nearest_neighbor_stencil_port_controller_d[0];
array_delay_U366 op_hcompute_nearest_neighbor_stencil_write_start_control_vars (
    .clk(op_hcompute_nearest_neighbor_stencil_write_start_control_vars_clk),
    .in(op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in),
    .out(op_hcompute_nearest_neighbor_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start;
endmodule

