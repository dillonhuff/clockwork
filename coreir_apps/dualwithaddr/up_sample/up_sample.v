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

module delay__U129 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U130_in;
wire _U130_clk;
wire [15:0] _U130_out;
wire [15:0] _U131_in;
wire _U131_clk;
wire [15:0] _U131_out;
wire [15:0] _U132_in;
wire _U132_clk;
wire [15:0] _U132_out;
wire [15:0] _U133_in;
wire _U133_clk;
assign _U130_in = wdata;
assign _U130_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U130 (
    .in(_U130_in),
    .clk(_U130_clk),
    .out(_U130_out)
);
assign _U131_in = _U130_out;
assign _U131_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U131 (
    .in(_U131_in),
    .clk(_U131_clk),
    .out(_U131_out)
);
assign _U132_in = _U131_out;
assign _U132_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U132 (
    .in(_U132_in),
    .clk(_U132_clk),
    .out(_U132_out)
);
assign _U133_in = _U132_out;
assign _U133_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U133 (
    .in(_U133_in),
    .clk(_U133_clk),
    .out(rdata)
);
endmodule

module nearest_neighbor_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0],
    input op_hcompute_nearest_neighbor_stencil_write_wen,
    input [15:0] op_hcompute_nearest_neighbor_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_nearest_neighbor_stencil_write [0:0]
);
wire delay_sr_U134_clk;
wire [15:0] delay_sr_U134_wdata;
wire [15:0] delay_sr_U134_rdata;
wire delay_sr_U134_rst_n;
wire delay_sr_U134_flush;
assign delay_sr_U134_clk = clk;
assign delay_sr_U134_wdata = op_hcompute_nearest_neighbor_stencil_write[0];
assign delay_sr_U134_rst_n = rst_n;
assign delay_sr_U134_flush = flush;
delay__U129 delay_sr_U134 (
    .clk(delay_sr_U134_clk),
    .wdata(delay_sr_U134_wdata),
    .rdata(delay_sr_U134_rdata),
    .rst_n(delay_sr_U134_rst_n),
    .flush(delay_sr_U134_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U134_rdata;
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

module aff__U75 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'(((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0001 * d[1])))) + (16'(16'h0000 * d[2])))) + 16'h0001)) >> 16'h0001) * 16'hffc0)) + (16'(((16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0000 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001)) >> 16'h0001) * 16'hffff)))) + (16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0000)));
endmodule

module aff__U51 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0008);
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

module aff__U26 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0080 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0004);
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

module aff__U117 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0000);
endmodule

module hw_input_stencil_ub (
    input clk,
    input rst_n,
    input flush,
    input op_hcompute_hw_input_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_stencil_write [0:0],
    input op_hcompute_nearest_neighbor_stencil_read_ren,
    input [15:0] op_hcompute_nearest_neighbor_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_nearest_neighbor_stencil_read [0:0]
);
wire [15:0] addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_out;
wire [15:0] addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_d [2:0];
wire [15:0] addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_out;
wire [15:0] addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_d [2:0];
wire hw_input_stencil_bank_clk;
wire [15:0] hw_input_stencil_bank_wdata;
wire [15:0] hw_input_stencil_bank_waddr;
wire hw_input_stencil_bank_wen;
wire [15:0] hw_input_stencil_bank_rdata;
wire [15:0] hw_input_stencil_bank_raddr;
wire hw_input_stencil_bank_ren;
assign addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_d[2] = op_hcompute_hw_input_stencil_write_ctrl_vars[2];
assign addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_d[1] = op_hcompute_hw_input_stencil_write_ctrl_vars[1];
assign addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_d[0] = op_hcompute_hw_input_stencil_write_ctrl_vars[0];
aff__U117 addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128 (
    .out(addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_out),
    .d(addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_d)
);
assign addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_d[2] = op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[2];
assign addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_d[1] = op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[1];
assign addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_d[0] = op_hcompute_nearest_neighbor_stencil_read_ctrl_vars[0];
aff__U75 addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116 (
    .out(addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_out),
    .d(addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_d)
);
assign hw_input_stencil_bank_clk = clk;
assign hw_input_stencil_bank_wdata = op_hcompute_hw_input_stencil_write[0];
assign hw_input_stencil_bank_waddr = addrgen_hw_input_stencil_op_hcompute_hw_input_stencil_0_U128_out;
assign hw_input_stencil_bank_wen = op_hcompute_hw_input_stencil_write_wen;
assign hw_input_stencil_bank_raddr = addrgen_hw_input_stencil_op_hcompute_nearest_neighbor_stencil_3_U116_out;
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

module aff__U1 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0100 * d[1])))) + (16'(16'h0002 * d[2])))) + 16'h0001);
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
wire [15:0] _U135_in;
wire _U135_clk;
wire [15:0] _U135_out;
wire hw_input_stencil_clk;
wire hw_input_stencil_rst_n;
wire hw_input_stencil_flush;
wire hw_input_stencil_op_hcompute_hw_input_stencil_write_wen;
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_stencil_op_hcompute_hw_input_stencil_write [0:0];
wire hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ren;
wire [15:0] hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ctrl_vars [2:0];
wire [15:0] hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read [0:0];
wire nearest_neighbor_stencil_clk;
wire nearest_neighbor_stencil_rst_n;
wire nearest_neighbor_stencil_flush;
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
wire op_hcompute_nearest_neighbor_stencil_read_start;
wire op_hcompute_nearest_neighbor_stencil_write_start;
wire op_hcompute_nearest_neighbor_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_nearest_neighbor_stencil_write_start_control_vars_out [2:0];
assign _U135_in = input_copy_stencil_op_hcompute_hw_input_stencil_read[0];
assign _U135_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U135 (
    .in(_U135_in),
    .clk(_U135_clk),
    .out(_U135_out)
);
assign hw_input_stencil_clk = clk;
assign hw_input_stencil_rst_n = rst_n;
assign hw_input_stencil_flush = flush;
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
    .rst_n(hw_input_stencil_rst_n),
    .flush(hw_input_stencil_flush),
    .op_hcompute_hw_input_stencil_write_wen(hw_input_stencil_op_hcompute_hw_input_stencil_write_wen),
    .op_hcompute_hw_input_stencil_write_ctrl_vars(hw_input_stencil_op_hcompute_hw_input_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_stencil_write(hw_input_stencil_op_hcompute_hw_input_stencil_write),
    .op_hcompute_nearest_neighbor_stencil_read_ren(hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ren),
    .op_hcompute_nearest_neighbor_stencil_read_ctrl_vars(hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read_ctrl_vars),
    .op_hcompute_nearest_neighbor_stencil_read(hw_input_stencil_op_hcompute_nearest_neighbor_stencil_read)
);
assign nearest_neighbor_stencil_clk = clk;
assign nearest_neighbor_stencil_rst_n = rst_n;
assign nearest_neighbor_stencil_flush = flush;
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
    .rst_n(nearest_neighbor_stencil_rst_n),
    .flush(nearest_neighbor_stencil_flush),
    .op_hcompute_hw_output_stencil_read_ren(nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(nearest_neighbor_stencil_op_hcompute_hw_output_stencil_read),
    .op_hcompute_nearest_neighbor_stencil_write_wen(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_wen),
    .op_hcompute_nearest_neighbor_stencil_write_ctrl_vars(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write_ctrl_vars),
    .op_hcompute_nearest_neighbor_stencil_write(nearest_neighbor_stencil_op_hcompute_nearest_neighbor_stencil_write)
);
assign op_hcompute_hw_input_stencil_clk = clk;
assign op_hcompute_hw_input_stencil_input_copy_stencil_op_hcompute_hw_input_stencil_read[0] = _U135_out;
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
array_delay_U21 op_hcompute_hw_input_stencil_exe_start_control_vars (
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
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_stencil_port_controller_d[2];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_stencil_port_controller_d[1];
assign op_hcompute_hw_input_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_stencil_port_controller_d[0];
array_delay_U17 op_hcompute_hw_input_stencil_write_start_control_vars (
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
array_delay_U71 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U50 op_hcompute_hw_output_stencil_port_controller (
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
array_delay_U67 op_hcompute_hw_output_stencil_write_start_control_vars (
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
array_delay_U46 op_hcompute_nearest_neighbor_stencil_exe_start_control_vars (
    .clk(op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_in),
    .out(op_hcompute_nearest_neighbor_stencil_exe_start_control_vars_out)
);
assign op_hcompute_nearest_neighbor_stencil_port_controller_clk = clk;
affine_controller__U25 op_hcompute_nearest_neighbor_stencil_port_controller (
    .clk(op_hcompute_nearest_neighbor_stencil_port_controller_clk),
    .valid(op_hcompute_nearest_neighbor_stencil_port_controller_valid),
    .d(op_hcompute_nearest_neighbor_stencil_port_controller_d)
);
assign op_hcompute_nearest_neighbor_stencil_read_start = op_hcompute_nearest_neighbor_stencil_port_controller_valid;
assign op_hcompute_nearest_neighbor_stencil_write_start = op_hcompute_nearest_neighbor_stencil_exe_start_out;
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in[2] = op_hcompute_nearest_neighbor_stencil_port_controller_d[2];
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in[1] = op_hcompute_nearest_neighbor_stencil_port_controller_d[1];
assign op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in[0] = op_hcompute_nearest_neighbor_stencil_port_controller_d[0];
array_delay_U42 op_hcompute_nearest_neighbor_stencil_write_start_control_vars (
    .clk(op_hcompute_nearest_neighbor_stencil_write_start_control_vars_clk),
    .in(op_hcompute_nearest_neighbor_stencil_write_start_control_vars_in),
    .out(op_hcompute_nearest_neighbor_stencil_write_start_control_vars_out)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
assign input_copy_stencil_op_hcompute_hw_input_stencil_read_valid = op_hcompute_hw_input_stencil_read_start;
endmodule

