module Chain (
  input logic [0:0] [15:0] chain_data_in,
  output logic [0:0] [15:0] chain_data_out,
  input logic chain_idx_output,
  input logic chain_valid_in,
  output logic chain_valid_out,
  input logic clk_en,
  input logic [0:0] [15:0] curr_tile_data_out,
  input logic curr_tile_valid_out,
  output logic [0:0] [15:0] data_out_tile,
  input logic enable_chain_output,
  input logic flush,
  output logic valid_out_tile
);

logic [0:0][15:0] chain_data_out_inter;
logic chain_valid_out_inter;
always_comb begin
  if (enable_chain_output) begin
    data_out_tile = chain_data_out_inter;
  end
  else data_out_tile = curr_tile_data_out;
end
always_comb begin
  if (enable_chain_output) begin
    if (~(chain_idx_output == 1'h0)) begin
      valid_out_tile = 1'h0;
    end
    else valid_out_tile = chain_valid_out_inter;
  end
  else valid_out_tile = curr_tile_valid_out;
end
always_comb begin
  chain_data_out = chain_data_out_inter;
end
always_comb begin
  if ((chain_idx_output == 1'h0) | (~enable_chain_output)) begin
    chain_valid_out = 1'h0;
  end
  else chain_valid_out = chain_valid_out_inter;
end
always_comb begin
  if (chain_valid_in == 1'h0) begin
    chain_data_out_inter[0] = curr_tile_data_out[0];
    chain_valid_out_inter = curr_tile_valid_out;
  end
  else begin
    chain_data_out_inter[0] = chain_data_in[0];
    chain_valid_out_inter = chain_valid_in;
  end
end
endmodule   // Chain

module LakeTop (
  input logic [0:0] [15:0] addr_in,
  input logic [0:0] [15:0] chain_data_in,
  output logic [0:0] [15:0] chain_data_out,
  input logic chain_idx_input,
  input logic chain_idx_output,
  input logic chain_valid_in,
  output logic chain_valid_out,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [31:0] config_data_in,
  output logic [0:0] [31:0] config_data_out,
  input logic config_en,
  input logic config_read,
  input logic config_write,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  output logic empty,
  input logic enable_chain_input,
  input logic enable_chain_output,
  input logic [15:0] fifo_ctrl_fifo_depth,
  input logic flush,
  output logic full,
  input logic [1:0] mode,
  input logic ren_in,
  input logic rst_n,
  output logic sram_ready_out,

  input logic [7:0] strg_ub_agg_read_addr_gen_0_starting_addr,
  input logic [3:0] [7:0] strg_ub_agg_read_addr_gen_0_strides,
  input logic [3:0] strg_ub_agg_write_addr_gen_0_starting_addr,
  input logic [3:0] [3:0] strg_ub_agg_write_addr_gen_0_strides,
  input logic [3:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr,
  input logic [3:0] [3:0] strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides,

  input logic [15:0] strg_ub_input_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_input_addr_gen_strides,
  input logic [15:0] strg_ub_input_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_input_sched_gen_sched_addr_gen_strides,

  input logic [3:0] strg_ub_loops_buf2out_autovec_read_dimensionality,
  input logic [5:0] [15:0] strg_ub_loops_buf2out_autovec_read_ranges,
  input logic [1:0] strg_ub_loops_buf2out_autovec_write_0_dimensionality,
  input logic [1:0] [5:0] strg_ub_loops_buf2out_autovec_write_0_ranges,
  input logic [1:0] strg_ub_loops_buf2out_read_0_dimensionality,
  input logic [1:0] [15:0] strg_ub_loops_buf2out_read_0_ranges,

  input logic [2:0] strg_ub_loops_in2buf_0_dimensionality,
  input logic [3:0] [3:0] strg_ub_loops_in2buf_0_ranges,
  input logic [2:0] strg_ub_loops_in2buf_autovec_read_0_dimensionality,
  input logic [3:0] [7:0] strg_ub_loops_in2buf_autovec_read_0_ranges,
  input logic [3:0] strg_ub_loops_in2buf_autovec_write_dimensionality,
  input logic [5:0] [15:0] strg_ub_loops_in2buf_autovec_write_ranges,

  input logic [15:0] strg_ub_output_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_output_addr_gen_strides,
  input logic [15:0] strg_ub_output_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_output_sched_gen_sched_addr_gen_strides,

  input logic [5:0] strg_ub_tb_read_addr_gen_0_starting_addr,
  input logic [1:0] [5:0] strg_ub_tb_read_addr_gen_0_strides,
  input logic [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_starting_addr,
  input logic [1:0] [15:0] strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides,
  input logic [5:0] strg_ub_tb_write_addr_gen_0_starting_addr,
  input logic [1:0] [5:0] strg_ub_tb_write_addr_gen_0_strides,

  input logic tile_en,
  output logic valid_out,
  input logic wen_in
);

logic [2:0][0:0][7:0] all_addr_to_mem;
logic [2:0][15:0] all_data_out;
logic [2:0][0:0][3:0][15:0] all_data_to_mem;
logic [2:0][0:0] all_ren_to_mem;
logic [2:0] all_valid_out;
logic [2:0][0:0] all_wen_to_mem;
logic cfg_seq_clk;
logic [15:0] config_data_in_shrt;
logic [0:0][15:0] config_data_out_shrt;
logic config_seq_clk;
logic config_seq_clk_en;
logic [0:0][15:0] data_out_tile;
logic [0:0][7:0] fifo_addr_to_mem;
logic fifo_ctrl_clk;
logic [15:0] fifo_ctrl_data_in;
logic fifo_ctrl_pop;
logic fifo_ctrl_push;
logic [15:0] fifo_data_out;
logic [0:0][3:0][15:0] fifo_data_to_mem;
logic fifo_empty;
logic fifo_full;
logic fifo_ren_to_mem;
logic fifo_valid_out;
logic fifo_wen_to_mem;
logic gclk;
logic mem_0_clk;
logic mem_0_clk_en;
logic [7:0] mem_0_mem_addr_in_bank;
logic mem_0_mem_cen_in_bank;
logic [3:0][15:0] mem_0_mem_data_in_bank;
logic [0:0][3:0][15:0] mem_0_mem_data_out_bank;
logic mem_0_mem_wen_in_bank;
logic mem_0_valid_data;
logic [7:0] mem_addr_cfg;
logic [0:0][0:0][7:0] mem_addr_dp;
logic [0:0][0:0][7:0] mem_addr_in;
logic [0:0] mem_cen_dp;
logic [0:0] mem_cen_in;
logic [3:0][15:0] mem_data_cfg;
logic [0:0][0:0][3:0][15:0] mem_data_dp;
logic [0:0][0:0][3:0][15:0] mem_data_in;
logic [0:0][3:0][15:0] mem_data_low_pt;
logic [0:0][0:0][3:0][15:0] mem_data_out;
logic mem_ren_cfg;
logic [0:0] mem_valid_data;
logic mem_wen_cfg;
logic [0:0] mem_wen_dp;
logic [0:0] mem_wen_in;
logic [0:0][7:0] sram_addr_to_mem;
logic sram_ctrl_clk;
logic [15:0] sram_ctrl_data_in;
logic [15:0] sram_ctrl_rd_addr_in;
logic sram_ctrl_ren;
logic sram_ctrl_wen;
logic [15:0] sram_ctrl_wr_addr_in;
logic [15:0] sram_data_out;
logic [0:0][3:0][15:0] sram_data_to_mem;
logic sram_ren_to_mem;
logic sram_valid_out;
logic sram_wen_to_mem;
logic strg_ub_clk;
logic [0:0][0:0][7:0] ub_addr_to_mem;
logic [0:0] ub_cen_to_mem;
logic [0:0][15:0] ub_data_out;
logic [0:0][0:0][3:0][15:0] ub_data_to_mem;
logic ub_valid_out;
logic [0:0] ub_wen_to_mem;
logic valid_out_tile;
assign config_data_in_shrt = config_data_in[15:0];
assign config_data_out[0] = 32'(config_data_out_shrt[0]);
assign gclk = clk & tile_en;
assign mem_data_low_pt[0] = mem_data_out[0][0];
assign cfg_seq_clk = gclk;
assign config_seq_clk = cfg_seq_clk;
assign config_seq_clk_en = clk_en | (|config_en);
assign mem_wen_in = (|config_en) ? mem_wen_cfg: mem_wen_dp;
assign mem_cen_in = (|config_en) ? mem_wen_cfg | mem_ren_cfg: mem_cen_dp;
assign mem_addr_in[0][0] = (|config_en) ? mem_addr_cfg: mem_addr_dp[0][0];
assign mem_data_in[0][0] = (|config_en) ? mem_data_cfg: mem_data_dp[0][0];
assign strg_ub_clk = gclk;
assign sram_ctrl_clk = gclk;
assign sram_ctrl_wen = wen_in;
assign sram_ctrl_ren = ren_in;
assign sram_ctrl_data_in = data_in[0];
assign sram_ctrl_wr_addr_in = addr_in[0];
assign sram_ctrl_rd_addr_in = addr_in[0];
assign fifo_ctrl_clk = gclk;
assign fifo_ctrl_data_in = data_in[0];
assign fifo_ctrl_push = wen_in;
assign fifo_ctrl_pop = ren_in;
assign empty = fifo_empty;
assign full = fifo_full;
assign all_data_to_mem[0] = ub_data_to_mem;
assign all_wen_to_mem[0] = ub_wen_to_mem;
assign all_ren_to_mem[0] = ub_cen_to_mem;
assign all_addr_to_mem[0] = ub_addr_to_mem;
assign all_data_to_mem[1] = fifo_data_to_mem;
assign all_wen_to_mem[1] = fifo_wen_to_mem;
assign all_ren_to_mem[1] = fifo_ren_to_mem;
assign all_addr_to_mem[1][0] = fifo_addr_to_mem[0];
assign all_data_to_mem[2] = sram_data_to_mem;
assign all_wen_to_mem[2] = sram_wen_to_mem;
assign all_ren_to_mem[2] = sram_ren_to_mem;
assign all_addr_to_mem[2][0] = sram_addr_to_mem[0];
assign mem_data_dp = all_data_to_mem[mode];
assign mem_cen_dp = all_ren_to_mem[mode] | all_wen_to_mem[mode];
assign mem_wen_dp = all_wen_to_mem[mode];
assign mem_addr_dp = all_addr_to_mem[mode];
assign mem_0_clk = gclk;
assign mem_0_clk_en = clk_en | (|config_en);
assign mem_0_mem_data_in_bank = mem_data_in[0];
assign mem_data_out[0] = mem_0_mem_data_out_bank;
assign mem_0_mem_addr_in_bank = mem_addr_in[0];
assign mem_0_mem_cen_in_bank = mem_cen_in;
assign mem_0_mem_wen_in_bank = mem_wen_in;
assign mem_valid_data = mem_0_valid_data;
assign all_data_out[0] = ub_data_out[0];
assign all_valid_out[0] = ub_valid_out;
assign all_data_out[1] = fifo_data_out;
assign all_valid_out[1] = fifo_valid_out;
assign all_data_out[2] = sram_data_out;
assign all_valid_out[2] = sram_valid_out;
assign data_out_tile[0] = all_data_out[mode];
assign valid_out_tile = all_valid_out[mode];
storage_config_seq config_seq (
  .addr_out(mem_addr_cfg),
  .clk(config_seq_clk),
  .clk_en(config_seq_clk_en),
  .config_addr_in(config_addr_in),
  .config_data_in(config_data_in_shrt),
  .config_en(config_en),
  .config_rd(config_read),
  .config_wr(config_write),
  .flush(flush),
  .rd_data_out(config_data_out_shrt),
  .rd_data_stg(mem_data_low_pt),
  .ren_out(mem_ren_cfg),
  .rst_n(rst_n),
  .wen_out(mem_wen_cfg),
  .wr_data(mem_data_cfg)
);

strg_ub_vec strg_ub (
  .addr_out(ub_addr_to_mem),
  .agg_read_addr_gen_0_starting_addr(strg_ub_agg_read_addr_gen_0_starting_addr),
  .agg_read_addr_gen_0_strides(strg_ub_agg_read_addr_gen_0_strides),
  .agg_write_addr_gen_0_starting_addr(strg_ub_agg_write_addr_gen_0_starting_addr),
  .agg_write_addr_gen_0_strides(strg_ub_agg_write_addr_gen_0_strides),
  .agg_write_sched_gen_0_sched_addr_gen_starting_addr(strg_ub_agg_write_sched_gen_0_sched_addr_gen_starting_addr),
  .agg_write_sched_gen_0_sched_addr_gen_strides(strg_ub_agg_write_sched_gen_0_sched_addr_gen_strides),
  .cen_to_strg(ub_cen_to_mem),
  .clk(strg_ub_clk),
  .clk_en(clk_en),
  .data_from_strg(mem_data_out),
  .data_in(data_in),
  .data_out(ub_data_out),
  .data_to_strg(ub_data_to_mem),
  .flush(flush),
  .input_addr_gen_starting_addr(strg_ub_input_addr_gen_starting_addr),
  .input_addr_gen_strides(strg_ub_input_addr_gen_strides),
  .input_sched_gen_sched_addr_gen_starting_addr(strg_ub_input_sched_gen_sched_addr_gen_starting_addr),
  .input_sched_gen_sched_addr_gen_strides(strg_ub_input_sched_gen_sched_addr_gen_strides),
  .loops_buf2out_autovec_read_dimensionality(strg_ub_loops_buf2out_autovec_read_dimensionality),
  .loops_buf2out_autovec_read_ranges(strg_ub_loops_buf2out_autovec_read_ranges),
  .loops_buf2out_autovec_write_0_dimensionality(strg_ub_loops_buf2out_autovec_write_0_dimensionality),
  .loops_buf2out_autovec_write_0_ranges(strg_ub_loops_buf2out_autovec_write_0_ranges),
  .loops_buf2out_read_0_dimensionality(strg_ub_loops_buf2out_read_0_dimensionality),
  .loops_buf2out_read_0_ranges(strg_ub_loops_buf2out_read_0_ranges),
  .loops_in2buf_0_dimensionality(strg_ub_loops_in2buf_0_dimensionality),
  .loops_in2buf_0_ranges(strg_ub_loops_in2buf_0_ranges),
  .loops_in2buf_autovec_read_0_dimensionality(strg_ub_loops_in2buf_autovec_read_0_dimensionality),
  .loops_in2buf_autovec_read_0_ranges(strg_ub_loops_in2buf_autovec_read_0_ranges),
  .loops_in2buf_autovec_write_dimensionality(strg_ub_loops_in2buf_autovec_write_dimensionality),
  .loops_in2buf_autovec_write_ranges(strg_ub_loops_in2buf_autovec_write_ranges),
  .output_addr_gen_starting_addr(strg_ub_output_addr_gen_starting_addr),
  .output_addr_gen_strides(strg_ub_output_addr_gen_strides),
  .output_sched_gen_sched_addr_gen_starting_addr(strg_ub_output_sched_gen_sched_addr_gen_starting_addr),
  .output_sched_gen_sched_addr_gen_strides(strg_ub_output_sched_gen_sched_addr_gen_strides),
  .rst_n(rst_n),
  .tb_read_addr_gen_0_starting_addr(strg_ub_tb_read_addr_gen_0_starting_addr),
  .tb_read_addr_gen_0_strides(strg_ub_tb_read_addr_gen_0_strides),
  .tb_read_sched_gen_0_sched_addr_gen_starting_addr(strg_ub_tb_read_sched_gen_0_sched_addr_gen_starting_addr),
  .tb_read_sched_gen_0_sched_addr_gen_strides(strg_ub_tb_read_sched_gen_0_sched_addr_gen_strides),
  .tb_write_addr_gen_0_starting_addr(strg_ub_tb_write_addr_gen_0_starting_addr),
  .tb_write_addr_gen_0_strides(strg_ub_tb_write_addr_gen_0_strides),
  .wen_to_strg(ub_wen_to_mem)
);

strg_ram sram_ctrl (
  .addr_out(sram_addr_to_mem),
  .clk(sram_ctrl_clk),
  .clk_en(clk_en),
  .data_from_strg(mem_data_out),
  .data_in(sram_ctrl_data_in),
  .data_out(sram_data_out),
  .data_to_strg(sram_data_to_mem),
  .flush(flush),
  .rd_addr_in(sram_ctrl_rd_addr_in),
  .ready(sram_ready_out),
  .ren(sram_ctrl_ren),
  .ren_to_strg(sram_ren_to_mem),
  .rst_n(rst_n),
  .valid_out(sram_valid_out),
  .wen(sram_ctrl_wen),
  .wen_to_strg(sram_wen_to_mem),
  .wr_addr_in(sram_ctrl_wr_addr_in)
);

strg_fifo fifo_ctrl (
  .addr_out(fifo_addr_to_mem),
  .clk(fifo_ctrl_clk),
  .clk_en(clk_en),
  .data_from_strg(mem_data_out),
  .data_in(fifo_ctrl_data_in),
  .data_out(fifo_data_out),
  .data_to_strg(fifo_data_to_mem),
  .empty(fifo_empty),
  .fifo_depth(fifo_ctrl_fifo_depth),
  .flush(flush),
  .full(fifo_full),
  .pop(fifo_ctrl_pop),
  .push(fifo_ctrl_push),
  .ren_to_strg(fifo_ren_to_mem),
  .rst_n(rst_n),
  .valid_out(fifo_valid_out),
  .wen_to_strg(fifo_wen_to_mem)
);

tsmc_name_generator mem_0 (
  .chain_idx_input(chain_idx_input),
  .chain_idx_output(chain_idx_output),
  .clk(mem_0_clk),
  .clk_en(mem_0_clk_en),
  .enable_chain_input(enable_chain_input),
  .enable_chain_output(enable_chain_output),
  .flush(flush),
  .mem_addr_in_bank(mem_0_mem_addr_in_bank),
  .mem_cen_in_bank(mem_0_mem_cen_in_bank),
  .mem_data_in_bank(mem_0_mem_data_in_bank),
  .mem_data_out_bank(mem_0_mem_data_out_bank),
  .mem_wen_in_bank(mem_0_mem_wen_in_bank),
  .rtsel(2'h0),
  .valid_data(mem_0_valid_data),
  .wtsel(2'h0)
);

Chain chain (
  .chain_data_in(chain_data_in),
  .chain_data_out(chain_data_out),
  .chain_idx_output(chain_idx_output),
  .chain_valid_in(chain_valid_in),
  .chain_valid_out(chain_valid_out),
  .clk_en(clk_en),
  .curr_tile_data_out(data_out_tile),
  .curr_tile_valid_out(valid_out_tile),
  .data_out_tile(data_out),
  .enable_chain_output(enable_chain_output),
  .flush(flush),
  .valid_out_tile(valid_out)
);

endmodule   // LakeTop

module addr_gen_2 (
  output logic [5:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic flush,
  input logic mux_sel,
  input logic rst_n,
  input logic [5:0] starting_addr,
  input logic step,
  input logic [1:0] [5:0] strides
);

logic [5:0] calc_addr;
logic [5:0] current_addr;
logic [5:0] strt_addr;
assign strt_addr = starting_addr;
assign addr_out = calc_addr;
assign calc_addr = strt_addr + current_addr;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    current_addr <= 6'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      current_addr <= 6'h0;
    end
    else if (step) begin
      current_addr <= current_addr + strides[mux_sel];
    end
  end
end
endmodule   // addr_gen_2

module addr_gen_2_unq0 (
  output logic [15:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic flush,
  input logic mux_sel,
  input logic rst_n,
  input logic [15:0] starting_addr,
  input logic step,
  input logic [1:0] [15:0] strides
);

logic [15:0] calc_addr;
logic [15:0] current_addr;
logic [15:0] strt_addr;
assign strt_addr = starting_addr;
assign addr_out = calc_addr;
assign calc_addr = strt_addr + current_addr;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    current_addr <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      current_addr <= 16'h0;
    end
    else if (step) begin
      current_addr <= current_addr + strides[mux_sel];
    end
  end
end
endmodule   // addr_gen_2_unq0

module addr_gen_4 (
  output logic [3:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic flush,
  input logic [1:0] mux_sel,
  input logic rst_n,
  input logic [3:0] starting_addr,
  input logic step,
  input logic [3:0] [3:0] strides
);

logic [3:0] calc_addr;
logic [3:0] current_addr;
logic [3:0] strt_addr;
assign strt_addr = starting_addr;
assign addr_out = calc_addr;
assign calc_addr = strt_addr + current_addr;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    current_addr <= 4'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      current_addr <= 4'h0;
    end
    else if (step) begin
      current_addr <= current_addr + strides[mux_sel];
    end
  end
end
endmodule   // addr_gen_4

module addr_gen_4_unq0 (
  output logic [7:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic flush,
  input logic [1:0] mux_sel,
  input logic rst_n,
  input logic [7:0] starting_addr,
  input logic step,
  input logic [3:0] [7:0] strides
);

logic [7:0] calc_addr;
logic [7:0] current_addr;
logic [7:0] strt_addr;
assign strt_addr = starting_addr;
assign addr_out = calc_addr;
assign calc_addr = strt_addr + current_addr;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    current_addr <= 8'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      current_addr <= 8'h0;
    end
    else if (step) begin
      current_addr <= current_addr + strides[mux_sel];
    end
  end
end
endmodule   // addr_gen_4_unq0

module addr_gen_6 (
  output logic [15:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic flush,
  input logic [2:0] mux_sel,
  input logic rst_n,
  input logic [15:0] starting_addr,
  input logic step,
  input logic [5:0] [15:0] strides
);

logic [15:0] calc_addr;
logic [15:0] current_addr;
logic [15:0] strt_addr;
assign strt_addr = starting_addr;
assign addr_out = calc_addr;
assign calc_addr = strt_addr + current_addr;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    current_addr <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      current_addr <= 16'h0;
    end
    else if (step) begin
      current_addr <= current_addr + strides[mux_sel];
    end
  end
end
endmodule   // addr_gen_6

module for_loop_2 (
  input logic clk,
  input logic clk_en,
  input logic [1:0] dimensionality,
  input logic flush,
  output logic mux_sel_out,
  input logic [1:0] [5:0] ranges,
  input logic rst_n,
  input logic step
);

logic [1:0] clear;
logic [1:0][5:0] dim_counter;
logic done;
logic [1:0] inc;
logic [5:0] inced_cnt;
logic [1:0] max_value;
logic maxed_value;
logic mux_sel;
assign mux_sel_out = mux_sel;
assign inced_cnt = dim_counter[mux_sel] + 6'h1;
assign maxed_value = (dim_counter[mux_sel] == ranges[mux_sel]) & inc[mux_sel];
always_comb begin
  mux_sel = 1'h0;
  done = 1'h0;
  if (~done) begin
    if (~max_value[0]) begin
      mux_sel = 1'h0;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[1]) begin
      mux_sel = 1'h1;
      done = 1'h1;
    end
  end
end
always_comb begin
  clear[0] = 1'h0;
  if ((mux_sel > 1'h0) & step) begin
    clear[0] = 1'h1;
  end
end
always_comb begin
  inc[0] = 1'h0;
  if ((5'h0 == 5'h0) & step) begin
    inc[0] = 1'h1;
  end
  else if ((mux_sel == 1'h0) & step) begin
    inc[0] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[0] <= 6'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[0] <= 6'h0;
    end
    else if (clear[0]) begin
      dim_counter[0] <= 6'h0;
    end
    else if (inc[0]) begin
      dim_counter[0] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[0] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[0] <= 1'h0;
    end
    else if (clear[0]) begin
      max_value[0] <= 1'h0;
    end
    else if (inc[0]) begin
      max_value[0] <= maxed_value;
    end
  end
end
always_comb begin
  clear[1] = 1'h0;
  if ((mux_sel > 1'h1) & step) begin
    clear[1] = 1'h1;
  end
end
always_comb begin
  inc[1] = 1'h0;
  if ((5'h1 == 5'h0) & step) begin
    inc[1] = 1'h1;
  end
  else if ((mux_sel == 1'h1) & step) begin
    inc[1] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[1] <= 6'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[1] <= 6'h0;
    end
    else if (clear[1]) begin
      dim_counter[1] <= 6'h0;
    end
    else if (inc[1]) begin
      dim_counter[1] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[1] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[1] <= 1'h0;
    end
    else if (clear[1]) begin
      max_value[1] <= 1'h0;
    end
    else if (inc[1]) begin
      max_value[1] <= maxed_value;
    end
  end
end
endmodule   // for_loop_2

module for_loop_2_unq0 (
  input logic clk,
  input logic clk_en,
  input logic [1:0] dimensionality,
  input logic flush,
  output logic mux_sel_out,
  input logic [1:0] [15:0] ranges,
  input logic rst_n,
  input logic step
);

logic [1:0] clear;
logic [1:0][15:0] dim_counter;
logic done;
logic [1:0] inc;
logic [15:0] inced_cnt;
logic [1:0] max_value;
logic maxed_value;
logic mux_sel;
assign mux_sel_out = mux_sel;
assign inced_cnt = dim_counter[mux_sel] + 16'h1;
assign maxed_value = (dim_counter[mux_sel] == ranges[mux_sel]) & inc[mux_sel];
always_comb begin
  mux_sel = 1'h0;
  done = 1'h0;
  if (~done) begin
    if (~max_value[0]) begin
      mux_sel = 1'h0;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[1]) begin
      mux_sel = 1'h1;
      done = 1'h1;
    end
  end
end
always_comb begin
  clear[0] = 1'h0;
  if ((mux_sel > 1'h0) & step) begin
    clear[0] = 1'h1;
  end
end
always_comb begin
  inc[0] = 1'h0;
  if ((5'h0 == 5'h0) & step) begin
    inc[0] = 1'h1;
  end
  else if ((mux_sel == 1'h0) & step) begin
    inc[0] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[0] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[0] <= 16'h0;
    end
    else if (clear[0]) begin
      dim_counter[0] <= 16'h0;
    end
    else if (inc[0]) begin
      dim_counter[0] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[0] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[0] <= 1'h0;
    end
    else if (clear[0]) begin
      max_value[0] <= 1'h0;
    end
    else if (inc[0]) begin
      max_value[0] <= maxed_value;
    end
  end
end
always_comb begin
  clear[1] = 1'h0;
  if ((mux_sel > 1'h1) & step) begin
    clear[1] = 1'h1;
  end
end
always_comb begin
  inc[1] = 1'h0;
  if ((5'h1 == 5'h0) & step) begin
    inc[1] = 1'h1;
  end
  else if ((mux_sel == 1'h1) & step) begin
    inc[1] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[1] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[1] <= 16'h0;
    end
    else if (clear[1]) begin
      dim_counter[1] <= 16'h0;
    end
    else if (inc[1]) begin
      dim_counter[1] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[1] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[1] <= 1'h0;
    end
    else if (clear[1]) begin
      max_value[1] <= 1'h0;
    end
    else if (inc[1]) begin
      max_value[1] <= maxed_value;
    end
  end
end
endmodule   // for_loop_2_unq0

module for_loop_4 (
  input logic clk,
  input logic clk_en,
  input logic [2:0] dimensionality,
  input logic flush,
  output logic [1:0] mux_sel_out,
  input logic [3:0] [3:0] ranges,
  input logic rst_n,
  input logic step
);

logic [3:0] clear;
logic [3:0][3:0] dim_counter;
logic done;
logic [3:0] inc;
logic [3:0] inced_cnt;
logic [3:0] max_value;
logic maxed_value;
logic [1:0] mux_sel;
assign mux_sel_out = mux_sel;
assign inced_cnt = dim_counter[mux_sel] + 4'h1;
assign maxed_value = (dim_counter[mux_sel] == ranges[mux_sel]) & inc[mux_sel];
always_comb begin
  mux_sel = 2'h0;
  done = 1'h0;
  if (~done) begin
    if (~max_value[0]) begin
      mux_sel = 2'h0;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[1]) begin
      mux_sel = 2'h1;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[2]) begin
      mux_sel = 2'h2;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[3]) begin
      mux_sel = 2'h3;
      done = 1'h1;
    end
  end
end
always_comb begin
  clear[0] = 1'h0;
  if ((mux_sel > 2'h0) & step) begin
    clear[0] = 1'h1;
  end
end
always_comb begin
  inc[0] = 1'h0;
  if ((5'h0 == 5'h0) & step) begin
    inc[0] = 1'h1;
  end
  else if ((mux_sel == 2'h0) & step) begin
    inc[0] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[0] <= 4'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[0] <= 4'h0;
    end
    else if (clear[0]) begin
      dim_counter[0] <= 4'h0;
    end
    else if (inc[0]) begin
      dim_counter[0] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[0] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[0] <= 1'h0;
    end
    else if (clear[0]) begin
      max_value[0] <= 1'h0;
    end
    else if (inc[0]) begin
      max_value[0] <= maxed_value;
    end
  end
end
always_comb begin
  clear[1] = 1'h0;
  if ((mux_sel > 2'h1) & step) begin
    clear[1] = 1'h1;
  end
end
always_comb begin
  inc[1] = 1'h0;
  if ((5'h1 == 5'h0) & step) begin
    inc[1] = 1'h1;
  end
  else if ((mux_sel == 2'h1) & step) begin
    inc[1] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[1] <= 4'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[1] <= 4'h0;
    end
    else if (clear[1]) begin
      dim_counter[1] <= 4'h0;
    end
    else if (inc[1]) begin
      dim_counter[1] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[1] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[1] <= 1'h0;
    end
    else if (clear[1]) begin
      max_value[1] <= 1'h0;
    end
    else if (inc[1]) begin
      max_value[1] <= maxed_value;
    end
  end
end
always_comb begin
  clear[2] = 1'h0;
  if ((mux_sel > 2'h2) & step) begin
    clear[2] = 1'h1;
  end
end
always_comb begin
  inc[2] = 1'h0;
  if ((5'h2 == 5'h0) & step) begin
    inc[2] = 1'h1;
  end
  else if ((mux_sel == 2'h2) & step) begin
    inc[2] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[2] <= 4'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[2] <= 4'h0;
    end
    else if (clear[2]) begin
      dim_counter[2] <= 4'h0;
    end
    else if (inc[2]) begin
      dim_counter[2] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[2] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[2] <= 1'h0;
    end
    else if (clear[2]) begin
      max_value[2] <= 1'h0;
    end
    else if (inc[2]) begin
      max_value[2] <= maxed_value;
    end
  end
end
always_comb begin
  clear[3] = 1'h0;
  if ((mux_sel > 2'h3) & step) begin
    clear[3] = 1'h1;
  end
end
always_comb begin
  inc[3] = 1'h0;
  if ((5'h3 == 5'h0) & step) begin
    inc[3] = 1'h1;
  end
  else if ((mux_sel == 2'h3) & step) begin
    inc[3] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[3] <= 4'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[3] <= 4'h0;
    end
    else if (clear[3]) begin
      dim_counter[3] <= 4'h0;
    end
    else if (inc[3]) begin
      dim_counter[3] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[3] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[3] <= 1'h0;
    end
    else if (clear[3]) begin
      max_value[3] <= 1'h0;
    end
    else if (inc[3]) begin
      max_value[3] <= maxed_value;
    end
  end
end
endmodule   // for_loop_4

module for_loop_4_unq0 (
  input logic clk,
  input logic clk_en,
  input logic [2:0] dimensionality,
  input logic flush,
  output logic [1:0] mux_sel_out,
  input logic [3:0] [7:0] ranges,
  input logic rst_n,
  input logic step
);

logic [3:0] clear;
logic [3:0][7:0] dim_counter;
logic done;
logic [3:0] inc;
logic [7:0] inced_cnt;
logic [3:0] max_value;
logic maxed_value;
logic [1:0] mux_sel;
assign mux_sel_out = mux_sel;
assign inced_cnt = dim_counter[mux_sel] + 8'h1;
assign maxed_value = (dim_counter[mux_sel] == ranges[mux_sel]) & inc[mux_sel];
always_comb begin
  mux_sel = 2'h0;
  done = 1'h0;
  if (~done) begin
    if (~max_value[0]) begin
      mux_sel = 2'h0;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[1]) begin
      mux_sel = 2'h1;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[2]) begin
      mux_sel = 2'h2;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[3]) begin
      mux_sel = 2'h3;
      done = 1'h1;
    end
  end
end
always_comb begin
  clear[0] = 1'h0;
  if ((mux_sel > 2'h0) & step) begin
    clear[0] = 1'h1;
  end
end
always_comb begin
  inc[0] = 1'h0;
  if ((5'h0 == 5'h0) & step) begin
    inc[0] = 1'h1;
  end
  else if ((mux_sel == 2'h0) & step) begin
    inc[0] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[0] <= 8'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[0] <= 8'h0;
    end
    else if (clear[0]) begin
      dim_counter[0] <= 8'h0;
    end
    else if (inc[0]) begin
      dim_counter[0] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[0] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[0] <= 1'h0;
    end
    else if (clear[0]) begin
      max_value[0] <= 1'h0;
    end
    else if (inc[0]) begin
      max_value[0] <= maxed_value;
    end
  end
end
always_comb begin
  clear[1] = 1'h0;
  if ((mux_sel > 2'h1) & step) begin
    clear[1] = 1'h1;
  end
end
always_comb begin
  inc[1] = 1'h0;
  if ((5'h1 == 5'h0) & step) begin
    inc[1] = 1'h1;
  end
  else if ((mux_sel == 2'h1) & step) begin
    inc[1] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[1] <= 8'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[1] <= 8'h0;
    end
    else if (clear[1]) begin
      dim_counter[1] <= 8'h0;
    end
    else if (inc[1]) begin
      dim_counter[1] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[1] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[1] <= 1'h0;
    end
    else if (clear[1]) begin
      max_value[1] <= 1'h0;
    end
    else if (inc[1]) begin
      max_value[1] <= maxed_value;
    end
  end
end
always_comb begin
  clear[2] = 1'h0;
  if ((mux_sel > 2'h2) & step) begin
    clear[2] = 1'h1;
  end
end
always_comb begin
  inc[2] = 1'h0;
  if ((5'h2 == 5'h0) & step) begin
    inc[2] = 1'h1;
  end
  else if ((mux_sel == 2'h2) & step) begin
    inc[2] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[2] <= 8'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[2] <= 8'h0;
    end
    else if (clear[2]) begin
      dim_counter[2] <= 8'h0;
    end
    else if (inc[2]) begin
      dim_counter[2] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[2] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[2] <= 1'h0;
    end
    else if (clear[2]) begin
      max_value[2] <= 1'h0;
    end
    else if (inc[2]) begin
      max_value[2] <= maxed_value;
    end
  end
end
always_comb begin
  clear[3] = 1'h0;
  if ((mux_sel > 2'h3) & step) begin
    clear[3] = 1'h1;
  end
end
always_comb begin
  inc[3] = 1'h0;
  if ((5'h3 == 5'h0) & step) begin
    inc[3] = 1'h1;
  end
  else if ((mux_sel == 2'h3) & step) begin
    inc[3] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[3] <= 8'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[3] <= 8'h0;
    end
    else if (clear[3]) begin
      dim_counter[3] <= 8'h0;
    end
    else if (inc[3]) begin
      dim_counter[3] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[3] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[3] <= 1'h0;
    end
    else if (clear[3]) begin
      max_value[3] <= 1'h0;
    end
    else if (inc[3]) begin
      max_value[3] <= maxed_value;
    end
  end
end
endmodule   // for_loop_4_unq0

module for_loop_6 (
  input logic clk,
  input logic clk_en,
  input logic [3:0] dimensionality,
  input logic flush,
  output logic [2:0] mux_sel_out,
  input logic [5:0] [15:0] ranges,
  input logic rst_n,
  input logic step
);

logic [5:0] clear;
logic [5:0][15:0] dim_counter;
logic done;
logic [5:0] inc;
logic [15:0] inced_cnt;
logic [5:0] max_value;
logic maxed_value;
logic [2:0] mux_sel;
assign mux_sel_out = mux_sel;
assign inced_cnt = dim_counter[mux_sel] + 16'h1;
assign maxed_value = (dim_counter[mux_sel] == ranges[mux_sel]) & inc[mux_sel];
always_comb begin
  mux_sel = 3'h0;
  done = 1'h0;
  if (~done) begin
    if (~max_value[0]) begin
      mux_sel = 3'h0;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[1]) begin
      mux_sel = 3'h1;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[2]) begin
      mux_sel = 3'h2;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[3]) begin
      mux_sel = 3'h3;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[4]) begin
      mux_sel = 3'h4;
      done = 1'h1;
    end
  end
  if (~done) begin
    if (~max_value[5]) begin
      mux_sel = 3'h5;
      done = 1'h1;
    end
  end
end
always_comb begin
  clear[0] = 1'h0;
  if ((mux_sel > 3'h0) & step) begin
    clear[0] = 1'h1;
  end
end
always_comb begin
  inc[0] = 1'h0;
  if ((5'h0 == 5'h0) & step) begin
    inc[0] = 1'h1;
  end
  else if ((mux_sel == 3'h0) & step) begin
    inc[0] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[0] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[0] <= 16'h0;
    end
    else if (clear[0]) begin
      dim_counter[0] <= 16'h0;
    end
    else if (inc[0]) begin
      dim_counter[0] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[0] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[0] <= 1'h0;
    end
    else if (clear[0]) begin
      max_value[0] <= 1'h0;
    end
    else if (inc[0]) begin
      max_value[0] <= maxed_value;
    end
  end
end
always_comb begin
  clear[1] = 1'h0;
  if ((mux_sel > 3'h1) & step) begin
    clear[1] = 1'h1;
  end
end
always_comb begin
  inc[1] = 1'h0;
  if ((5'h1 == 5'h0) & step) begin
    inc[1] = 1'h1;
  end
  else if ((mux_sel == 3'h1) & step) begin
    inc[1] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[1] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[1] <= 16'h0;
    end
    else if (clear[1]) begin
      dim_counter[1] <= 16'h0;
    end
    else if (inc[1]) begin
      dim_counter[1] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[1] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[1] <= 1'h0;
    end
    else if (clear[1]) begin
      max_value[1] <= 1'h0;
    end
    else if (inc[1]) begin
      max_value[1] <= maxed_value;
    end
  end
end
always_comb begin
  clear[2] = 1'h0;
  if ((mux_sel > 3'h2) & step) begin
    clear[2] = 1'h1;
  end
end
always_comb begin
  inc[2] = 1'h0;
  if ((5'h2 == 5'h0) & step) begin
    inc[2] = 1'h1;
  end
  else if ((mux_sel == 3'h2) & step) begin
    inc[2] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[2] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[2] <= 16'h0;
    end
    else if (clear[2]) begin
      dim_counter[2] <= 16'h0;
    end
    else if (inc[2]) begin
      dim_counter[2] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[2] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[2] <= 1'h0;
    end
    else if (clear[2]) begin
      max_value[2] <= 1'h0;
    end
    else if (inc[2]) begin
      max_value[2] <= maxed_value;
    end
  end
end
always_comb begin
  clear[3] = 1'h0;
  if ((mux_sel > 3'h3) & step) begin
    clear[3] = 1'h1;
  end
end
always_comb begin
  inc[3] = 1'h0;
  if ((5'h3 == 5'h0) & step) begin
    inc[3] = 1'h1;
  end
  else if ((mux_sel == 3'h3) & step) begin
    inc[3] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[3] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[3] <= 16'h0;
    end
    else if (clear[3]) begin
      dim_counter[3] <= 16'h0;
    end
    else if (inc[3]) begin
      dim_counter[3] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[3] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[3] <= 1'h0;
    end
    else if (clear[3]) begin
      max_value[3] <= 1'h0;
    end
    else if (inc[3]) begin
      max_value[3] <= maxed_value;
    end
  end
end
always_comb begin
  clear[4] = 1'h0;
  if ((mux_sel > 3'h4) & step) begin
    clear[4] = 1'h1;
  end
end
always_comb begin
  inc[4] = 1'h0;
  if ((5'h4 == 5'h0) & step) begin
    inc[4] = 1'h1;
  end
  else if ((mux_sel == 3'h4) & step) begin
    inc[4] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[4] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[4] <= 16'h0;
    end
    else if (clear[4]) begin
      dim_counter[4] <= 16'h0;
    end
    else if (inc[4]) begin
      dim_counter[4] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[4] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[4] <= 1'h0;
    end
    else if (clear[4]) begin
      max_value[4] <= 1'h0;
    end
    else if (inc[4]) begin
      max_value[4] <= maxed_value;
    end
  end
end
always_comb begin
  clear[5] = 1'h0;
  if ((mux_sel > 3'h5) & step) begin
    clear[5] = 1'h1;
  end
end
always_comb begin
  inc[5] = 1'h0;
  if ((5'h5 == 5'h0) & step) begin
    inc[5] = 1'h1;
  end
  else if ((mux_sel == 3'h5) & step) begin
    inc[5] = 1'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter[5] <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      dim_counter[5] <= 16'h0;
    end
    else if (clear[5]) begin
      dim_counter[5] <= 16'h0;
    end
    else if (inc[5]) begin
      dim_counter[5] <= inced_cnt;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    max_value[5] <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      max_value[5] <= 1'h0;
    end
    else if (clear[5]) begin
      max_value[5] <= 1'h0;
    end
    else if (inc[5]) begin
      max_value[5] <= maxed_value;
    end
  end
end
endmodule   // for_loop_6

module reg_fifo_d4_w1 #(parameter data_width = 16'h10)
(
  input logic clk,
  input logic clk_en,
  input logic [0:0] [data_width-1:0] data_in,
  output logic [0:0] [data_width-1:0] data_out,
  output logic empty,
  input logic flush,
  output logic full,
  input logic mem_valid_data,
  output logic mem_valid_data_out,
  input logic [2:0] num_load,
  input logic [3:0][0:0] [data_width-1:0] parallel_in,
  input logic parallel_load,
  output logic [3:0][0:0] [data_width-1:0] parallel_out,
  input logic parallel_read,
  input logic pop,
  input logic push,
  output logic [1:0] rd_ptr_out,
  input logic rst_n,
  output logic valid
);

logic [3:0] mvd_array;
logic [2:0] num_items;
logic passthru;
logic [1:0] rd_ptr;
logic read;
logic [3:0][0:0][data_width-1:0] reg_array;
logic [1:0] wr_ptr;
logic write;
assign rd_ptr_out = rd_ptr;
assign full = num_items == 3'h4;
assign empty = num_items == 3'h0;
assign read = pop & (~passthru) & (~empty);
assign passthru = pop & push & empty;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    num_items <= 3'h0;
  end
  else if (flush) begin
    num_items <= 3'h0;
  end
  else if (clk_en) begin
    if (parallel_load) begin
      if (num_load == 3'h0) begin
        num_items <= 3'(push);
      end
      else num_items <= num_load;
    end
    else if (parallel_read) begin
      if (push) begin
        num_items <= 3'h1;
      end
      else num_items <= 3'h0;
    end
    else if (write & (~read)) begin
      num_items <= num_items + 3'h1;
    end
    else if ((~write) & read) begin
      num_items <= num_items - 3'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    reg_array <= 64'h0;
    mvd_array <= 4'h0;
  end
  else if (flush) begin
    reg_array <= 64'h0;
    mvd_array <= 4'h0;
  end
  else if (clk_en) begin
    if (parallel_load) begin
      reg_array <= parallel_in;
      mvd_array <= 4'h0;
    end
    else if (write) begin
      if (parallel_read) begin
        reg_array[0] <= data_in;
        mvd_array[0] <= mem_valid_data;
      end
      else begin
        reg_array[wr_ptr] <= data_in;
        mvd_array[wr_ptr] <= mem_valid_data;
      end
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    wr_ptr <= 2'h0;
  end
  else if (flush) begin
    wr_ptr <= 2'h0;
  end
  else if (clk_en) begin
    if (parallel_load) begin
      wr_ptr <= num_load[1:0];
    end
    else if (parallel_read) begin
      if (push) begin
        wr_ptr <= 2'h1;
      end
      else wr_ptr <= 2'h0;
    end
    else if (write) begin
      wr_ptr <= wr_ptr + 2'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    rd_ptr <= 2'h0;
  end
  else if (flush) begin
    rd_ptr <= 2'h0;
  end
  else if (clk_en) begin
    if (parallel_load | parallel_read) begin
      rd_ptr <= 2'h0;
    end
    else if (read) begin
      rd_ptr <= rd_ptr + 2'h1;
    end
  end
end
assign parallel_out = reg_array;
assign write = push & (~passthru) & ((~full) | pop | parallel_read);
always_comb begin
  if (passthru) begin
    data_out = data_in;
    mem_valid_data_out = mem_valid_data;
  end
  else begin
    data_out = reg_array[rd_ptr];
    mem_valid_data_out = mvd_array[rd_ptr];
  end
end
always_comb begin
  valid = pop & ((~empty) | passthru);
end
endmodule   // reg_fifo_d4_w1

module reg_fifo_d4_w1_unq0 #(parameter data_width = 16'h10)
(
  input logic clk,
  input logic clk_en,
  input logic [0:0] [data_width-1:0] data_in,
  output logic [0:0] [data_width-1:0] data_out,
  output logic empty,
  input logic flush,
  output logic full,
  input logic mem_valid_data,
  output logic mem_valid_data_out,
  input logic [2:0] num_load,
  input logic [3:0][0:0] [data_width-1:0] parallel_in,
  input logic parallel_load,
  output logic [3:0][0:0] [data_width-1:0] parallel_out,
  input logic parallel_read,
  input logic pop,
  input logic push,
  input logic rst_n,
  output logic valid
);

logic [3:0] mvd_array;
logic [2:0] num_items;
logic passthru;
logic [1:0] rd_ptr;
logic read;
logic [3:0][0:0][data_width-1:0] reg_array;
logic [1:0] wr_ptr;
logic write;
assign full = num_items == 3'h4;
assign empty = num_items == 3'h0;
assign read = pop & (~passthru) & (~empty);
assign passthru = pop & push & empty;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    num_items <= 3'h0;
  end
  else if (flush) begin
    num_items <= 3'h0;
  end
  else if (clk_en) begin
    if (parallel_load) begin
      if (num_load == 3'h0) begin
        num_items <= 3'(push);
      end
      else num_items <= num_load;
    end
    else if (parallel_read) begin
      if (push) begin
        num_items <= 3'h1;
      end
      else num_items <= 3'h0;
    end
    else if (write & (~read)) begin
      num_items <= num_items + 3'h1;
    end
    else if ((~write) & read) begin
      num_items <= num_items - 3'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    reg_array <= 64'h0;
    mvd_array <= 4'h0;
  end
  else if (flush) begin
    reg_array <= 64'h0;
    mvd_array <= 4'h0;
  end
  else if (clk_en) begin
    if (parallel_load) begin
      reg_array <= parallel_in;
      mvd_array <= 4'h0;
    end
    else if (write) begin
      if (parallel_read) begin
        reg_array[0] <= data_in;
        mvd_array[0] <= mem_valid_data;
      end
      else begin
        reg_array[wr_ptr] <= data_in;
        mvd_array[wr_ptr] <= mem_valid_data;
      end
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    wr_ptr <= 2'h0;
  end
  else if (flush) begin
    wr_ptr <= 2'h0;
  end
  else if (clk_en) begin
    if (parallel_load) begin
      wr_ptr <= num_load[1:0];
    end
    else if (parallel_read) begin
      if (push) begin
        wr_ptr <= 2'h1;
      end
      else wr_ptr <= 2'h0;
    end
    else if (write) begin
      wr_ptr <= wr_ptr + 2'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    rd_ptr <= 2'h0;
  end
  else if (flush) begin
    rd_ptr <= 2'h0;
  end
  else if (clk_en) begin
    if (parallel_load | parallel_read) begin
      rd_ptr <= 2'h0;
    end
    else if (read) begin
      rd_ptr <= rd_ptr + 2'h1;
    end
  end
end
assign parallel_out = reg_array;
assign write = push & (~passthru) & ((~full) | pop | parallel_read);
always_comb begin
  if (passthru) begin
    data_out = data_in;
    mem_valid_data_out = mem_valid_data;
  end
  else begin
    data_out = reg_array[rd_ptr];
    mem_valid_data_out = mvd_array[rd_ptr];
  end
end
always_comb begin
  valid = pop & ((~empty) | passthru);
end
endmodule   // reg_fifo_d4_w1_unq0

module sched_gen_2 (
  input logic clk,
  input logic clk_en,
  input logic [15:0] cycle_count,
  input logic flush,
  input logic mux_sel,
  input logic rst_n,
  input logic [15:0] sched_addr_gen_starting_addr,
  input logic [1:0] [15:0] sched_addr_gen_strides,
  output logic valid_output
);

logic [15:0] addr_out;
logic valid_out;
always_comb begin
  if (cycle_count[15:0] == addr_out[15:0]) begin
    valid_out = 1'h1;
  end
  else valid_out = 1'h0;
end
always_comb begin
  valid_output = valid_out;
end
addr_gen_2_unq0 sched_addr_gen (
  .addr_out(addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(mux_sel),
  .rst_n(rst_n),
  .starting_addr(sched_addr_gen_starting_addr),
  .step(valid_out),
  .strides(sched_addr_gen_strides)
);

endmodule   // sched_gen_2

module sched_gen_4 (
  input logic clk,
  input logic clk_en,
  input logic [15:0] cycle_count,
  input logic flush,
  input logic [1:0] mux_sel,
  input logic rst_n,
  input logic [3:0] sched_addr_gen_starting_addr,
  input logic [3:0] [3:0] sched_addr_gen_strides,
  output logic valid_output
);

logic [3:0] addr_out;
logic valid_out;
always_comb begin
  if (cycle_count[3:0] == addr_out[3:0]) begin
    valid_out = 1'h1;
  end
  else valid_out = 1'h0;
end
always_comb begin
  valid_output = valid_out;
end
addr_gen_4 sched_addr_gen (
  .addr_out(addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(mux_sel),
  .rst_n(rst_n),
  .starting_addr(sched_addr_gen_starting_addr),
  .step(valid_out),
  .strides(sched_addr_gen_strides)
);

endmodule   // sched_gen_4

module sched_gen_6 (
  input logic clk,
  input logic clk_en,
  input logic [15:0] cycle_count,
  input logic flush,
  input logic [2:0] mux_sel,
  input logic rst_n,
  input logic [15:0] sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] sched_addr_gen_strides,
  output logic valid_output
);

logic [15:0] addr_out;
logic valid_out;
always_comb begin
  if (cycle_count[15:0] == addr_out[15:0]) begin
    valid_out = 1'h1;
  end
  else valid_out = 1'h0;
end
always_comb begin
  valid_output = valid_out;
end
addr_gen_6 sched_addr_gen (
  .addr_out(addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(mux_sel),
  .rst_n(rst_n),
  .starting_addr(sched_addr_gen_starting_addr),
  .step(valid_out),
  .strides(sched_addr_gen_strides)
);

endmodule   // sched_gen_6

module sram_stub (
  input logic [7:0] addr,
  input logic cen,
  input logic clk,
  input logic clk_en,
  input logic [3:0] [15:0] data_in,
  output logic [3:0] [15:0] data_out,
  input logic flush,
  input logic wen
);

logic [255:0][3:0][15:0] data_array;

always_ff @(posedge clk) begin
  if (clk_en) begin
    if (cen & wen) begin
      //$display("Writing %b to %d", data_in, addr);
      data_array[addr] <= data_in;
    end
  end
end

always_ff @(posedge clk) begin
  if (clk_en) begin
    if (cen & (~wen)) begin
      //$display("Reading from %d", addr);
      data_out <= data_array[addr];
    end
  end
end
endmodule   // sram_stub

module storage_config_seq (
  output logic [7:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [15:0] config_data_in,
  input logic config_en,
  input logic config_rd,
  input logic config_wr,
  input logic flush,
  output logic [0:0] [15:0] rd_data_out,
  input logic [0:0][3:0] [15:0] rd_data_stg,
  output logic ren_out,
  input logic rst_n,
  output logic wen_out,
  output logic [3:0] [15:0] wr_data
);

logic [1:0] cnt;
logic [2:0][15:0] data_wr_reg;
logic [1:0] rd_cnt;
assign addr_out = config_addr_in[7:0];

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    cnt <= 2'h0;
  end
  else if (flush) begin
    cnt <= 2'h0;
  end
  else if (clk_en) begin
    if ((config_wr | config_rd) & (|config_en)) begin
      cnt <= cnt + 2'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    rd_cnt <= 2'h0;
  end
  else if (flush) begin
    rd_cnt <= 2'h0;
  end
  else if (clk_en) begin
    rd_cnt <= cnt;
  end
end
assign rd_data_out[0] = rd_data_stg[0][rd_cnt];

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    data_wr_reg <= 48'h0;
  end
  else if (flush) begin
    data_wr_reg <= 48'h0;
  end
  else if (clk_en) begin
    if (config_wr & (cnt < 2'h3)) begin
      data_wr_reg[cnt] <= config_data_in;
    end
  end
end
assign wr_data[0] = data_wr_reg[0];
assign wr_data[1] = data_wr_reg[1];
assign wr_data[2] = data_wr_reg[2];
assign wr_data[3] = config_data_in;
assign wen_out = config_wr & (cnt == 2'h3);
assign ren_out = config_rd;
endmodule   // storage_config_seq

module strg_fifo (
  output logic [0:0] [7:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic [0:0][3:0] [15:0] data_from_strg,
  input logic [15:0] data_in,
  output logic [15:0] data_out,
  output logic [0:0][3:0] [15:0] data_to_strg,
  output logic empty,
  input logic [15:0] fifo_depth,
  input logic flush,
  output logic full,
  input logic pop,
  input logic push,
  output logic ren_to_strg,
  input logic rst_n,
  output logic valid_out,
  output logic wen_to_strg
);

logic [15:0] back_data_in;
logic [15:0] back_data_out;
logic back_empty;
logic back_full;
logic [2:0] back_num_load;
logic [2:0] back_occ;
logic [3:0][0:0][15:0] back_par_in;
logic back_pl;
logic back_pop;
logic back_push;
logic [0:0][15:0] back_rf_data_in;
logic [0:0][15:0] back_rf_data_out;
logic back_rf_parallel_load;
logic back_valid;
logic curr_bank_rd;
logic curr_bank_wr;
logic [3:0][15:0] front_combined;
logic [15:0] front_data_out;
logic front_empty;
logic front_full;
logic [2:0] front_occ;
logic [3:0][0:0][15:0] front_par_out;
logic front_par_read;
logic front_pop;
logic front_push;
logic [1:0] front_rd_ptr;
logic [0:0][15:0] front_rf_data_in;
logic [0:0][15:0] front_rf_data_out;
logic front_valid;
logic fw_is_1;
logic [15:0] num_items;
logic [15:0] num_words_mem;
logic prev_bank_rd;
logic queued_write;
logic [0:0][7:0] ren_addr;
logic ren_delay;
logic [0:0][7:0] wen_addr;
logic [0:0][3:0][15:0] write_queue;
assign curr_bank_wr = 1'h0;
assign curr_bank_rd = 1'h0;
assign front_push = push & ((~full) | pop);
assign front_rf_data_in[0] = data_in;
assign front_data_out = front_rf_data_out[0];
assign fw_is_1 = 1'h0;
assign back_pop = pop & ((~empty) | push);
assign back_rf_parallel_load = back_pl & (|back_num_load);
assign back_rf_data_in[0] = back_data_in;
assign back_data_out = back_rf_data_out[0];
always_comb begin
  wen_to_strg = ((~ren_to_strg) | 1'h0) & (queued_write | ((front_occ == 3'h4) & push &
      (~front_pop) & (curr_bank_wr == 1'h0)));
end
always_comb begin
  ren_to_strg = ((back_occ == 3'h1) | fw_is_1) & (curr_bank_rd == 1'h0) & (pop | ((back_occ ==
      3'h0) & (back_num_load == 3'h0))) & ((num_words_mem > 16'h1) | ((num_words_mem
      == 16'h1) & (~back_pl)));
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    ren_delay <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      ren_delay <= 1'h0;
    end
    else ren_delay <= |ren_to_strg;
  end
end
assign back_pl = ren_delay;
assign front_combined[0] = front_par_out[front_rd_ptr + 2'h0];
assign front_combined[1] = front_par_out[front_rd_ptr + 2'h1];
assign front_combined[2] = front_par_out[front_rd_ptr + 2'h2];
assign front_combined[3] = front_par_out[front_rd_ptr + 2'h3];
assign data_to_strg[0] = queued_write ? write_queue[0]: front_combined;
assign back_data_in = front_data_out;
assign back_push = front_valid;
always_comb begin
  front_pop = ((num_words_mem == 16'h0) | ((num_words_mem == 16'h1) & back_pl)) & ((~back_pl)
      | (back_pl & (back_num_load == 3'h0))) & ((~(back_occ == 3'h4)) | pop) &
      ((~(front_occ == 3'h0)) | push);
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    write_queue[0] <= 64'h0;
    queued_write <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      write_queue[0] <= 64'h0;
      queued_write <= 1'h0;
    end
    else if (front_par_read & (~wen_to_strg) & (curr_bank_wr == 1'h0)) begin
      write_queue[0] <= front_combined;
      queued_write <= 1'h1;
    end
    else if (wen_to_strg) begin
      queued_write <= 1'h0;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    num_words_mem <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      num_words_mem <= 16'h0;
    end
    else if ((~back_pl) & front_par_read) begin
      num_words_mem <= num_words_mem + 16'h1;
    end
    else if (back_pl & (~front_par_read)) begin
      num_words_mem <= num_words_mem - 16'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    front_occ <= 3'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      front_occ <= 3'h0;
    end
    else if (front_par_read) begin
      if (front_push) begin
        front_occ <= 3'h1;
      end
      else front_occ <= 3'h0;
    end
    else if (front_push & (~front_pop)) begin
      front_occ <= front_occ + 3'h1;
    end
    else if ((~front_push) & front_pop) begin
      front_occ <= front_occ - 3'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    back_occ <= 3'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      back_occ <= 3'h0;
    end
    else if (back_pl) begin
      if (back_num_load == 3'h0) begin
        back_occ <= 3'(back_push);
      end
      else back_occ <= back_num_load;
    end
    else if (back_push & (~back_pop)) begin
      back_occ <= back_occ + 3'h1;
    end
    else if ((~back_push) & back_pop) begin
      back_occ <= back_occ - 3'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    prev_bank_rd <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      prev_bank_rd <= 1'h0;
    end
    else prev_bank_rd <= curr_bank_rd;
  end
end
assign back_par_in[0] = (back_num_load == 3'h4) ? data_from_strg[prev_bank_rd][0]:
    data_from_strg[prev_bank_rd][1];
assign back_par_in[1] = (back_num_load == 3'h4) ? data_from_strg[prev_bank_rd][1]:
    data_from_strg[prev_bank_rd][2];
assign back_par_in[2] = (back_num_load == 3'h4) ? data_from_strg[prev_bank_rd][2]:
    data_from_strg[prev_bank_rd][3];
assign back_par_in[3] = (back_num_load == 3'h4) ? data_from_strg[prev_bank_rd][3]: 16'h0;
always_comb begin
  front_par_read = (front_occ == 3'h4) & push & (~front_pop);
end
always_comb begin
  if (back_pl) begin
    back_num_load = pop ? 3'h3: 3'h4;
  end
  else back_num_load = 3'h0;
end
assign data_out = back_pl ? data_from_strg[prev_bank_rd][0]: back_data_out;
assign valid_out = back_pl ? pop: back_valid;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    wen_addr[0] <= 8'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      wen_addr[0] <= 8'h0;
    end
    else if (wen_to_strg) begin
      wen_addr[0] <= wen_addr[0] + 8'h1;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    ren_addr[0] <= 8'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      ren_addr[0] <= 8'h0;
    end
    else if (ren_to_strg) begin
      ren_addr[0] <= ren_addr[0] + 8'h1;
    end
  end
end
assign addr_out[0] = wen_to_strg ? wen_addr[0]: ren_addr[0];
always_comb begin
  num_items = 16'(num_words_mem * 16'h4) + 16'(front_occ) + 16'(back_occ);
end
assign empty = num_items == 16'h0;
assign full = fifo_depth == num_items;
reg_fifo_d4_w1 #(
  .data_width(16'h10)) front_rf (
  .clk(clk),
  .clk_en(clk_en),
  .data_in(front_rf_data_in),
  .data_out(front_rf_data_out),
  .empty(front_empty),
  .flush(flush),
  .full(front_full),
  .mem_valid_data(1'h1),
  .num_load(3'h0),
  .parallel_in(64'h0),
  .parallel_load(1'h0),
  .parallel_out(front_par_out),
  .parallel_read(front_par_read),
  .pop(front_pop),
  .push(front_push),
  .rd_ptr_out(front_rd_ptr),
  .rst_n(rst_n),
  .valid(front_valid)
);

reg_fifo_d4_w1_unq0 #(
  .data_width(16'h10)) back_rf (
  .clk(clk),
  .clk_en(clk_en),
  .data_in(back_rf_data_in),
  .data_out(back_rf_data_out),
  .empty(back_empty),
  .flush(flush),
  .full(back_full),
  .mem_valid_data(1'h1),
  .num_load(back_num_load),
  .parallel_in(back_par_in),
  .parallel_load(back_rf_parallel_load),
  .parallel_read(1'h0),
  .pop(back_pop),
  .push(back_push),
  .rst_n(rst_n),
  .valid(back_valid)
);

endmodule   // strg_fifo

module strg_ram (
  output logic [0:0] [7:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic [0:0][3:0] [15:0] data_from_strg,
  input logic [15:0] data_in,
  output logic [15:0] data_out,
  output logic [0:0][3:0] [15:0] data_to_strg,
  input logic flush,
  input logic [15:0] rd_addr_in,
  output logic ready,
  input logic ren,
  output logic ren_to_strg,
  input logic rst_n,
  output logic valid_out,
  input logic wen,
  output logic wen_to_strg,
  input logic [15:0] wr_addr_in
);

typedef enum logic[1:0] {
  IDLE = 2'h0,
  MODIFY = 2'h1,
  READ = 2'h2
} r_w_seq_state;
logic [15:0] addr_to_write;
logic [3:0][15:0] data_combined;
logic [15:0] data_to_write;
r_w_seq_state r_w_seq_current_state;
r_w_seq_state r_w_seq_next_state;
logic [15:0] rd_addr;
logic rd_bank;
logic rd_valid;
logic read_gate;
logic [15:0] wr_addr;
logic write_gate;
assign wr_addr = wr_addr_in;
assign rd_addr = wr_addr_in;
assign rd_bank = 1'h0;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    rd_valid <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      rd_valid <= 1'h0;
    end
    else rd_valid <= ren & (~wen);
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    data_to_write <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      data_to_write <= 16'h0;
    end
    else data_to_write <= data_in;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    addr_to_write <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      addr_to_write <= 16'h0;
    end
    else addr_to_write <= wr_addr;
  end
end
assign data_to_strg[0] = data_combined;
assign ren_to_strg = (wen | ren) & read_gate;
assign wen_to_strg = write_gate;
always_comb begin
  addr_out[0] = rd_addr[9:2];
  if (wen & (~write_gate)) begin
    addr_out[0] = wr_addr[9:2];
  end
  else if (write_gate) begin
    addr_out[0] = addr_to_write[9:2];
  end
end
always_comb begin
  if (addr_to_write[1:0] == 2'h0) begin
    data_combined[0] = data_to_write;
  end
  else data_combined[0] = data_from_strg[rd_bank][0];
end
always_comb begin
  if (addr_to_write[1:0] == 2'h1) begin
    data_combined[1] = data_to_write;
  end
  else data_combined[1] = data_from_strg[rd_bank][1];
end
always_comb begin
  if (addr_to_write[1:0] == 2'h2) begin
    data_combined[2] = data_to_write;
  end
  else data_combined[2] = data_from_strg[rd_bank][2];
end
always_comb begin
  if (addr_to_write[1:0] == 2'h3) begin
    data_combined[3] = data_to_write;
  end
  else data_combined[3] = data_from_strg[rd_bank][3];
end

always_ff @(posedge clk, negedge rst_n) begin
  if (!rst_n) begin
    r_w_seq_current_state <= IDLE;
  end
  else r_w_seq_current_state <= r_w_seq_next_state;
end
always_comb begin
  r_w_seq_next_state = r_w_seq_current_state;
  unique case (r_w_seq_current_state)
    IDLE: if ((~wen) & (~ren)) begin
      r_w_seq_next_state = IDLE;
    end
    else if (wen) begin
      r_w_seq_next_state = MODIFY;
    end
    else if (ren & (~wen)) begin
      r_w_seq_next_state = READ;
    end
    MODIFY: if (1'h1) begin
      r_w_seq_next_state = IDLE;
    end
    READ: if ((~wen) & (~ren)) begin
      r_w_seq_next_state = IDLE;
    end
    else if (wen) begin
      r_w_seq_next_state = MODIFY;
    end
    else if (ren & (~wen)) begin
      r_w_seq_next_state = READ;
    end
    default: r_w_seq_next_state = r_w_seq_current_state;
  endcase
end
always_comb begin
  unique case (r_w_seq_current_state)
    IDLE: begin :r_w_seq_IDLE_Output
        data_out = 16'h0;
        read_gate = 1'h1;
        ready = 1'h1;
        valid_out = 1'h0;
        write_gate = 1'h0;
      end :r_w_seq_IDLE_Output
    MODIFY: begin :r_w_seq_MODIFY_Output
        data_out = 16'h0;
        read_gate = 1'h0;
        ready = 1'h0;
        valid_out = 1'h0;
        write_gate = 1'h1;
      end :r_w_seq_MODIFY_Output
    READ: begin :r_w_seq_READ_Output
        data_out = data_from_strg[rd_bank][addr_to_write[1:0]];
        read_gate = 1'h1;
        ready = 1'h1;
        valid_out = 1'h1;
        write_gate = 1'h0;
      end :r_w_seq_READ_Output
  endcase
end
endmodule   // strg_ram

module strg_ub_vec (
  output logic [7:0] addr_out,
  input logic [7:0] agg_read_addr_gen_0_starting_addr,
  input logic [3:0] [7:0] agg_read_addr_gen_0_strides,
  input logic [3:0] agg_write_addr_gen_0_starting_addr,
  input logic [3:0] [3:0] agg_write_addr_gen_0_strides,
  input logic [3:0] agg_write_sched_gen_0_sched_addr_gen_starting_addr,
  input logic [3:0] [3:0] agg_write_sched_gen_0_sched_addr_gen_strides,
  output logic cen_to_strg,
  input logic clk,
  input logic clk_en,
  input logic [3:0] [15:0] data_from_strg,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  output logic [3:0] [15:0] data_to_strg,
  input logic flush,
  input logic [15:0] input_addr_gen_starting_addr,
  input logic [5:0] [15:0] input_addr_gen_strides,
  input logic [15:0] input_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] input_sched_gen_sched_addr_gen_strides,
  input logic [3:0] loops_buf2out_autovec_read_dimensionality,
  input logic [5:0] [15:0] loops_buf2out_autovec_read_ranges,
  input logic [1:0] loops_buf2out_autovec_write_0_dimensionality,
  input logic [1:0] [5:0] loops_buf2out_autovec_write_0_ranges,
  input logic [1:0] loops_buf2out_read_0_dimensionality,
  input logic [1:0] [15:0] loops_buf2out_read_0_ranges,
  input logic [2:0] loops_in2buf_0_dimensionality,
  input logic [3:0] [3:0] loops_in2buf_0_ranges,
  input logic [2:0] loops_in2buf_autovec_read_0_dimensionality,
  input logic [3:0] [7:0] loops_in2buf_autovec_read_0_ranges,
  input logic [3:0] loops_in2buf_autovec_write_dimensionality,
  input logic [5:0] [15:0] loops_in2buf_autovec_write_ranges,
  input logic [15:0] output_addr_gen_starting_addr,
  input logic [5:0] [15:0] output_addr_gen_strides,
  input logic [15:0] output_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] output_sched_gen_sched_addr_gen_strides,
  input logic rst_n,
  input logic [5:0] tb_read_addr_gen_0_starting_addr,
  input logic [1:0] [5:0] tb_read_addr_gen_0_strides,
  input logic [15:0] tb_read_sched_gen_0_sched_addr_gen_starting_addr,
  input logic [1:0] [15:0] tb_read_sched_gen_0_sched_addr_gen_strides,
  input logic [5:0] tb_write_addr_gen_0_starting_addr,
  input logic [1:0] [5:0] tb_write_addr_gen_0_strides,
  output logic wen_to_strg
);

logic [7:0] addr;
logic [0:0][3:0][3:0][15:0] agg;
logic [0:0][1:0] agg_read_addr;
logic [7:0] agg_read_addr_gen_0_addr_out;
logic agg_read_addr_gen_0_step;
logic [0:0][7:0] agg_read_addr_gen_out;
logic agg_write;
logic [0:0][3:0] agg_write_addr;
logic [3:0] agg_write_addr_gen_0_addr_out;
logic agg_write_addr_gen_0_step;
logic agg_write_sched_gen_0_valid_output;
logic [15:0] cycle_count;
logic input_port_sel_addr;
logic [2:0] loops_buf2out_autovec_read_mux_sel_out;
logic loops_buf2out_autovec_write_0_mux_sel_out;
logic loops_buf2out_autovec_write_0_step;
logic loops_buf2out_read_0_mux_sel_out;
logic loops_buf2out_read_0_step;
logic [1:0] loops_in2buf_0_mux_sel_out;
logic loops_in2buf_0_step;
logic [1:0] loops_in2buf_autovec_read_0_mux_sel_out;
logic loops_in2buf_autovec_read_0_step;
logic [2:0] loops_in2buf_autovec_write_mux_sel_out;
logic output_port_sel_addr;
logic read;
logic [15:0] read_addr;
logic read_d1;
logic [3:0][15:0] sram_read_data;
logic [3:0][15:0] sram_write_data;
logic [0:0][3:0][3:0][15:0] tb;
logic tb_read;
logic [0:0][5:0] tb_read_addr;
logic [5:0] tb_read_addr_gen_0_addr_out;
logic tb_read_addr_gen_0_step;
logic tb_read_sched_gen_0_valid_output;
logic [0:0][5:0] tb_write_addr;
logic [5:0] tb_write_addr_gen_0_addr_out;
logic tb_write_addr_gen_0_step;
logic write;
logic [15:0] write_addr;

always @(posedge clk) begin
  //$display("agg start = %d", agg_write_sched_gen_0_sched_addr_gen_starting_addr);
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    cycle_count <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      cycle_count <= 16'h0;
    end
    else cycle_count <= cycle_count + 16'h1;
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    read_d1 <= 1'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      read_d1 <= 1'h0;
    end
    else read_d1 <= read;
  end
end
assign addr_out = addr;
assign data_to_strg = sram_write_data;
assign sram_read_data = data_from_strg;
assign wen_to_strg = write;
assign cen_to_strg = write | read;
assign loops_in2buf_0_step = agg_write;
assign agg_write_addr_gen_0_step = agg_write;
assign agg_write_addr[0] = agg_write_addr_gen_0_addr_out;
assign agg_write = agg_write_sched_gen_0_valid_output;
assign loops_in2buf_autovec_read_0_step = write & (1'h0 == input_port_sel_addr);
assign agg_read_addr_gen_0_step = write & (1'h0 == input_port_sel_addr);
assign agg_read_addr_gen_out[0] = agg_read_addr_gen_0_addr_out;
assign agg_read_addr[0] = agg_read_addr_gen_out[0][1:0];
assign input_port_sel_addr = 1'h0;
assign loops_buf2out_autovec_write_0_step = read_d1 & (1'h0 == output_port_sel_addr);
assign tb_write_addr_gen_0_step = read_d1 & (1'h0 == output_port_sel_addr);
assign tb_write_addr[0] = tb_write_addr_gen_0_addr_out;
assign loops_buf2out_read_0_step = tb_read;
assign tb_read_addr_gen_0_step = tb_read;
assign tb_read_addr[0] = tb_read_addr_gen_0_addr_out;
assign tb_read = tb_read_sched_gen_0_valid_output;
assign output_port_sel_addr = 1'h0;
always_comb begin
  if (write) begin
    addr = write_addr[7:0];
  end
  else addr = read_addr[7:0];
end

always_ff @(posedge clk) begin
  if (clk_en) begin
    if (agg_write) begin
      $display("Writing: %b to %d, %d, agg = %b", data_in[0], agg_write_addr[0][3:2], agg_write_addr[0][1:0], agg[0]);
      agg[0][agg_write_addr[0][3:2]][agg_write_addr[0][1:0]] <= data_in[0];
    end
  end
end
always_comb begin
  sram_write_data[0] = agg[input_port_sel_addr][agg_read_addr[input_port_sel_addr]][0];
  sram_write_data[1] = agg[input_port_sel_addr][agg_read_addr[input_port_sel_addr]][1];
  sram_write_data[2] = agg[input_port_sel_addr][agg_read_addr[input_port_sel_addr]][2];
  sram_write_data[3] = agg[input_port_sel_addr][agg_read_addr[input_port_sel_addr]][3];
end

always_ff @(posedge clk) begin
  if (clk_en) begin
    if (read_d1) begin
      tb[output_port_sel_addr][tb_write_addr[output_port_sel_addr][1:0]] <= sram_read_data;
    end
  end
end
always_comb begin
  data_out[0] = tb[0][tb_read_addr[0][3:2]][tb_read_addr[0][1:0]];
end
for_loop_4 loops_in2buf_0 (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(loops_in2buf_0_dimensionality),
  .flush(flush),
  .mux_sel_out(loops_in2buf_0_mux_sel_out),
  .ranges(loops_in2buf_0_ranges),
  .rst_n(rst_n),
  .step(loops_in2buf_0_step)
);

addr_gen_4 agg_write_addr_gen_0 (
  .addr_out(agg_write_addr_gen_0_addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(loops_in2buf_0_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(agg_write_addr_gen_0_starting_addr),
  .step(agg_write_addr_gen_0_step),
  .strides(agg_write_addr_gen_0_strides)
);

sched_gen_4 agg_write_sched_gen_0 (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(loops_in2buf_0_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(agg_write_sched_gen_0_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(agg_write_sched_gen_0_sched_addr_gen_strides),
  .valid_output(agg_write_sched_gen_0_valid_output)
);

for_loop_4_unq0 loops_in2buf_autovec_read_0 (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(loops_in2buf_autovec_read_0_dimensionality),
  .flush(flush),
  .mux_sel_out(loops_in2buf_autovec_read_0_mux_sel_out),
  .ranges(loops_in2buf_autovec_read_0_ranges),
  .rst_n(rst_n),
  .step(loops_in2buf_autovec_read_0_step)
);

addr_gen_4_unq0 agg_read_addr_gen_0 (
  .addr_out(agg_read_addr_gen_0_addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(loops_in2buf_autovec_read_0_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(agg_read_addr_gen_0_starting_addr),
  .step(agg_read_addr_gen_0_step),
  .strides(agg_read_addr_gen_0_strides)
);

for_loop_6 loops_in2buf_autovec_write (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(loops_in2buf_autovec_write_dimensionality),
  .flush(flush),
  .mux_sel_out(loops_in2buf_autovec_write_mux_sel_out),
  .ranges(loops_in2buf_autovec_write_ranges),
  .rst_n(rst_n),
  .step(write)
);

addr_gen_6 input_addr_gen (
  .addr_out(write_addr),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(loops_in2buf_autovec_write_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(input_addr_gen_starting_addr),
  .step(write),
  .strides(input_addr_gen_strides)
);

sched_gen_6 input_sched_gen (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(loops_in2buf_autovec_write_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(input_sched_gen_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(input_sched_gen_sched_addr_gen_strides),
  .valid_output(write)
);

for_loop_6 loops_buf2out_autovec_read (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(loops_buf2out_autovec_read_dimensionality),
  .flush(flush),
  .mux_sel_out(loops_buf2out_autovec_read_mux_sel_out),
  .ranges(loops_buf2out_autovec_read_ranges),
  .rst_n(rst_n),
  .step(read)
);

addr_gen_6 output_addr_gen (
  .addr_out(read_addr),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(loops_buf2out_autovec_read_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(output_addr_gen_starting_addr),
  .step(read),
  .strides(output_addr_gen_strides)
);

sched_gen_6 output_sched_gen (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(loops_buf2out_autovec_read_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(output_sched_gen_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(output_sched_gen_sched_addr_gen_strides),
  .valid_output(read)
);

for_loop_2 loops_buf2out_autovec_write_0 (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(loops_buf2out_autovec_write_0_dimensionality),
  .flush(flush),
  .mux_sel_out(loops_buf2out_autovec_write_0_mux_sel_out),
  .ranges(loops_buf2out_autovec_write_0_ranges),
  .rst_n(rst_n),
  .step(loops_buf2out_autovec_write_0_step)
);

addr_gen_2 tb_write_addr_gen_0 (
  .addr_out(tb_write_addr_gen_0_addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(loops_buf2out_autovec_write_0_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(tb_write_addr_gen_0_starting_addr),
  .step(tb_write_addr_gen_0_step),
  .strides(tb_write_addr_gen_0_strides)
);

for_loop_2_unq0 loops_buf2out_read_0 (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(loops_buf2out_read_0_dimensionality),
  .flush(flush),
  .mux_sel_out(loops_buf2out_read_0_mux_sel_out),
  .ranges(loops_buf2out_read_0_ranges),
  .rst_n(rst_n),
  .step(loops_buf2out_read_0_step)
);

addr_gen_2 tb_read_addr_gen_0 (
  .addr_out(tb_read_addr_gen_0_addr_out),
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(loops_buf2out_read_0_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(tb_read_addr_gen_0_starting_addr),
  .step(tb_read_addr_gen_0_step),
  .strides(tb_read_addr_gen_0_strides)
);

sched_gen_2 tb_read_sched_gen_0 (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(loops_buf2out_read_0_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(tb_read_sched_gen_0_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(tb_read_sched_gen_0_sched_addr_gen_strides),
  .valid_output(tb_read_sched_gen_0_valid_output)
);

endmodule   // strg_ub_vec

module tsmc_name_generator (
  input logic chain_idx_input,
  input logic chain_idx_output,
  input logic clk,
  input logic clk_en,
  input logic enable_chain_input,
  input logic enable_chain_output,
  input logic flush,
  input logic [7:0] mem_addr_in_bank,
  input logic mem_cen_in_bank,
  input logic [3:0] [15:0] mem_data_in_bank,
  output logic [0:0][3:0] [15:0] mem_data_out_bank,
  input logic mem_wen_in_bank,
  input logic [1:0] rtsel,
  output logic valid_data,
  input logic [1:0] wtsel
);

logic chain_idx_tile;
logic [7:0] mem_addr_to_sram;
logic mem_cen_in_bank_chain;
logic mem_wen_in_bank_chain;
always_comb begin
  chain_idx_tile = 1'h0;
end
always_comb begin
  mem_addr_to_sram = mem_addr_in_bank;
end
always_comb begin
  mem_wen_in_bank_chain = mem_wen_in_bank;
end
always_comb begin
  mem_cen_in_bank_chain = mem_cen_in_bank;
end

always_ff @(posedge clk) begin
  if (clk_en) begin
    if (~mem_wen_in_bank) begin
      if (enable_chain_output) begin
        if (chain_idx_output == chain_idx_tile) begin
          valid_data <= mem_cen_in_bank;
        end
        else valid_data <= 1'h0;
      end
      else valid_data <= mem_cen_in_bank;
    end
    else valid_data <= 1'h0;
  end
end
sram_stub mem_0 (
  .addr(mem_addr_to_sram),
  .cen(mem_cen_in_bank_chain),
  .clk(clk),
  .clk_en(clk_en),
  .data_in(mem_data_in_bank),
  .data_out(mem_data_out_bank),
  .flush(flush),
  .wen(mem_wen_in_bank_chain)
);

endmodule   // tsmc_name_generator

