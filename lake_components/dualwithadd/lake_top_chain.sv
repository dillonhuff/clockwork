module Chain (
  input logic accessor_output,
  input logic [0:0] [15:0] chain_data_in,
  input logic clk_en,
  input logic [0:0] [15:0] curr_tile_data_out,
  input logic flush,
  output logic [0:0] [15:0] data_out_tile
);

always_comb begin
  if (accessor_output) begin
    data_out_tile[0] = curr_tile_data_out[0];
  end
  else data_out_tile[0] = chain_data_in[0];
end
endmodule   // Chain

module LakeTop (
  input logic [0:0] [15:0] chain_data_in,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [31:0] config_data_in,
  input logic config_en,
  input logic config_read,
  input logic config_write,
  input logic [0:0] [15:0] data_in,
  input logic flush,
  input logic [1:0] mode,
  input logic [0:0] [15:0] raddr,
  input logic ren_in,
  input logic rst_n,
  input logic [15:0] strg_ub_sram_read_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_read_addr_gen_strides,
  input logic [3:0] strg_ub_sram_read_loops_dimensionality,
  input logic [5:0] [15:0] strg_ub_sram_read_loops_ranges,
  input logic [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_read_sched_gen_sched_addr_gen_strides,
  input logic [15:0] strg_ub_sram_write_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_write_addr_gen_strides,
  input logic [3:0] strg_ub_sram_write_loops_dimensionality,
  input logic [5:0] [15:0] strg_ub_sram_write_loops_ranges,
  input logic [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] strg_ub_sram_write_sched_gen_sched_addr_gen_strides,
  input logic tile_en,
  input logic [0:0] [15:0] waddr,
  input logic wen_in,
  output logic [0:0] [31:0] config_data_out,
  output logic [0:0] [15:0] data_out
);

logic accessor_output;
logic cfg_seq_clk;
logic [15:0] config_data_in_shrt;
logic [0:0][15:0] config_data_out_shrt;
logic config_seq_clk;
logic config_seq_clk_en;
logic [0:0][15:0] data_out_tile;
logic gclk;
logic [7:0] mem_addr_cfg;
logic [0:0] mem_cen_dp;
logic [0:0] mem_cen_in;
logic [0:0][15:0] mem_data_cfg;
logic [0:0][0:0][0:0][15:0] mem_data_dp;
logic [0:0][0:0][0:0][15:0] mem_data_in;
logic [0:0][0:0][15:0] mem_data_low_pt;
logic [0:0][0:0][0:0][15:0] mem_data_out;
logic mem_ren_cfg;
logic mem_wen_cfg;
logic [0:0] mem_wen_dp;
logic [0:0] mem_wen_in;
logic [0:0][0:0][7:0] rd_mem_addr_dp;
logic [0:0][0:0][7:0] rd_mem_addr_in;
logic rf_0_clk;
logic [0:0][15:0] rf_0_data_in;
logic [0:0][15:0] rf_0_data_out;
logic [7:0] rf_0_rd_addr;
logic rf_0_ren;
logic rf_0_wen;
logic [7:0] rf_0_wr_addr;
logic strg_ub_clk;
logic [0:0] ub_cen_to_mem;
logic [0:0][15:0] ub_data_out;
logic [0:0][0:0][0:0][15:0] ub_data_to_mem;
logic [0:0][0:0][7:0] ub_rd_addr_to_mem;
logic ub_valid_out;
logic [0:0] ub_wen_to_mem;
logic [0:0][0:0][7:0] ub_wr_addr_to_mem;
logic valid_out_tile;
logic [0:0][0:0][7:0] wr_mem_addr_dp;
logic [0:0][0:0][7:0] wr_mem_addr_in;
assign config_data_in_shrt = config_data_in[15:0];
assign config_data_out[0] = 32'(config_data_out_shrt[0]);
assign gclk = clk & tile_en;
assign mem_data_low_pt[0] = mem_data_out[0][0];
assign cfg_seq_clk = gclk;
assign config_seq_clk = cfg_seq_clk;
assign config_seq_clk_en = clk_en | (|config_en);
assign mem_wen_in = (|config_en) ? mem_wen_cfg: mem_wen_dp;
assign mem_cen_in = (|config_en) ? mem_ren_cfg: mem_cen_dp;
assign wr_mem_addr_in[0][0] = (|config_en) ? mem_addr_cfg: wr_mem_addr_dp[0][0];
assign rd_mem_addr_in[0][0] = (|config_en) ? mem_addr_cfg: rd_mem_addr_dp[0][0];
assign mem_data_in[0][0] = (|config_en) ? mem_data_cfg: mem_data_dp[0][0];
assign strg_ub_clk = gclk;
assign mem_data_dp = ub_data_to_mem;
assign mem_wen_dp = ub_wen_to_mem;
assign mem_cen_dp = ub_cen_to_mem;
assign wr_mem_addr_dp = ub_wr_addr_to_mem;
assign rd_mem_addr_dp = ub_rd_addr_to_mem;
assign rf_0_clk = gclk;
assign rf_0_wen = mem_wen_in;
assign rf_0_wr_addr = wr_mem_addr_in[0];
assign rf_0_rd_addr = rd_mem_addr_in[0];
assign rf_0_data_in = mem_data_in[0];
assign mem_data_out[0] = rf_0_data_out;
assign rf_0_ren = mem_cen_dp;
assign data_out_tile[0] = ub_data_out[0];
assign valid_out_tile = ub_valid_out;
storage_config_seq config_seq (
  .clk(config_seq_clk),
  .clk_en(config_seq_clk_en),
  .config_addr_in(config_addr_in),
  .config_data_in(config_data_in_shrt),
  .config_en(config_en),
  .config_rd(config_read),
  .config_wr(config_write),
  .flush(flush),
  .rd_data_stg(mem_data_low_pt),
  .rst_n(rst_n),
  .addr_out(mem_addr_cfg),
  .rd_data_out(config_data_out_shrt),
  .ren_out(mem_ren_cfg),
  .wen_out(mem_wen_cfg),
  .wr_data(mem_data_cfg)
);

strg_ub_thin strg_ub (
  .clk(strg_ub_clk),
  .clk_en(clk_en),
  .data_from_strg(mem_data_out),
  .data_in(data_in),
  .flush(flush),
  .rst_n(rst_n),
  .sram_read_addr_gen_starting_addr(strg_ub_sram_read_addr_gen_starting_addr),
  .sram_read_addr_gen_strides(strg_ub_sram_read_addr_gen_strides),
  .sram_read_loops_dimensionality(strg_ub_sram_read_loops_dimensionality),
  .sram_read_loops_ranges(strg_ub_sram_read_loops_ranges),
  .sram_read_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_read_sched_gen_sched_addr_gen_starting_addr),
  .sram_read_sched_gen_sched_addr_gen_strides(strg_ub_sram_read_sched_gen_sched_addr_gen_strides),
  .sram_write_addr_gen_starting_addr(strg_ub_sram_write_addr_gen_starting_addr),
  .sram_write_addr_gen_strides(strg_ub_sram_write_addr_gen_strides),
  .sram_write_loops_dimensionality(strg_ub_sram_write_loops_dimensionality),
  .sram_write_loops_ranges(strg_ub_sram_write_loops_ranges),
  .sram_write_sched_gen_sched_addr_gen_starting_addr(strg_ub_sram_write_sched_gen_sched_addr_gen_starting_addr),
  .sram_write_sched_gen_sched_addr_gen_strides(strg_ub_sram_write_sched_gen_sched_addr_gen_strides),
  .accessor_output(accessor_output),
  .cen_to_strg(ub_cen_to_mem),
  .data_out(ub_data_out),
  .data_to_strg(ub_data_to_mem),
  .rd_addr_out(ub_rd_addr_to_mem),
  .wen_to_strg(ub_wen_to_mem),
  .wr_addr_out(ub_wr_addr_to_mem)
);

register_file rf_0 (
  .clk(rf_0_clk),
  .clk_en(clk_en),
  .data_in(rf_0_data_in),
  .flush(flush),
  .rd_addr(rf_0_rd_addr),
  .ren(rf_0_ren),
  .rst_n(rst_n),
  .wen(rf_0_wen),
  .wr_addr(rf_0_wr_addr),
  .data_out(rf_0_data_out)
);

Chain chain (
  .accessor_output(accessor_output),
  .chain_data_in(chain_data_in),
  .clk_en(clk_en),
  .curr_tile_data_out(data_out_tile),
  .flush(flush),
  .data_out_tile(data_out)
);

endmodule   // LakeTop

module addr_gen_6 (
  input logic clk,
  input logic clk_en,
  input logic flush,
  input logic [2:0] mux_sel,
  input logic rst_n,
  input logic [15:0] starting_addr,
  input logic step,
  input logic [5:0] [15:0] strides,
  output logic [15:0] addr_out
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

module for_loop_6 (
  input logic clk,
  input logic clk_en,
  input logic [3:0] dimensionality,
  input logic flush,
  input logic [5:0] [15:0] ranges,
  input logic rst_n,
  input logic step,
  output logic [2:0] mux_sel_out
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

module register_file (
  input logic clk,
  input logic clk_en,
  input logic [0:0] [15:0] data_in,
  input logic flush,
  input logic [7:0] rd_addr,
  input logic ren,
  input logic rst_n,
  input logic wen,
  input logic [7:0] wr_addr,
  output logic [0:0] [15:0] data_out
);

logic [255:0][0:0][15:0] data_array;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    data_array <= 4096'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      data_array <= 4096'h0;
    end
    else if (wen) begin
      data_array[wr_addr] <= data_in;
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    data_out <= 16'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      data_out <= 16'h0;
    end
    else if (ren) begin
      data_out <= data_array[rd_addr];
    end
  end
end
endmodule   // register_file

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
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(mux_sel),
  .rst_n(rst_n),
  .starting_addr(sched_addr_gen_starting_addr),
  .step(valid_out),
  .strides(sched_addr_gen_strides),
  .addr_out(addr_out)
);

endmodule   // sched_gen_6

module storage_config_seq (
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [15:0] config_data_in,
  input logic config_en,
  input logic config_rd,
  input logic config_wr,
  input logic flush,
  input logic [0:0][0:0] [15:0] rd_data_stg,
  input logic rst_n,
  output logic [7:0] addr_out,
  output logic [0:0] [15:0] rd_data_out,
  output logic ren_out,
  output logic wen_out,
  output logic [0:0] [15:0] wr_data
);

assign addr_out = config_addr_in[7:0];
assign wr_data[0] = config_data_in;
assign rd_data_out[0] = rd_data_stg[0];
assign wen_out = config_wr;
assign ren_out = config_rd;
endmodule   // storage_config_seq

module strg_ub_thin (
  input logic clk,
  input logic clk_en,
  input logic [15:0] data_from_strg,
  input logic [0:0] [15:0] data_in,
  input logic flush,
  input logic rst_n,
  input logic [15:0] sram_read_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_read_addr_gen_strides,
  input logic [3:0] sram_read_loops_dimensionality,
  input logic [5:0] [15:0] sram_read_loops_ranges,
  input logic [15:0] sram_read_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_read_sched_gen_sched_addr_gen_strides,
  input logic [15:0] sram_write_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_write_addr_gen_strides,
  input logic [3:0] sram_write_loops_dimensionality,
  input logic [5:0] [15:0] sram_write_loops_ranges,
  input logic [15:0] sram_write_sched_gen_sched_addr_gen_starting_addr,
  input logic [5:0] [15:0] sram_write_sched_gen_sched_addr_gen_strides,
  output logic accessor_output,
  output logic cen_to_strg,
  output logic [0:0] [15:0] data_out,
  output logic [15:0] data_to_strg,
  output logic [7:0] rd_addr_out,
  output logic ren_to_strg,
  output logic valid_out,
  output logic wen_to_strg,
  output logic [7:0] wr_addr_out
);

logic [15:0] cycle_count;
logic read;
logic [15:0] read_addr;
logic read_d1;
logic [2:0] sram_read_loops_mux_sel_out;
logic [2:0] sram_write_loops_mux_sel_out;
logic write;
logic [15:0] write_addr;

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
assign accessor_output = read;

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
assign valid_out = read_d1;
assign cen_to_strg = write | read;
assign wen_to_strg = write;
assign ren_to_strg = read;
assign data_out = data_from_strg;
assign data_to_strg = data_in;
assign wr_addr_out = write_addr[7:0];
assign rd_addr_out = read_addr[7:0];
for_loop_6 sram_write_loops (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(sram_write_loops_dimensionality),
  .flush(flush),
  .ranges(sram_write_loops_ranges),
  .rst_n(rst_n),
  .step(write),
  .mux_sel_out(sram_write_loops_mux_sel_out)
);

addr_gen_6 sram_write_addr_gen (
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(sram_write_loops_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(sram_write_addr_gen_starting_addr),
  .step(write),
  .strides(sram_write_addr_gen_strides),
  .addr_out(write_addr)
);

sched_gen_6 sram_write_sched_gen (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(sram_write_loops_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(sram_write_sched_gen_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(sram_write_sched_gen_sched_addr_gen_strides),
  .valid_output(write)
);

for_loop_6 sram_read_loops (
  .clk(clk),
  .clk_en(clk_en),
  .dimensionality(sram_read_loops_dimensionality),
  .flush(flush),
  .ranges(sram_read_loops_ranges),
  .rst_n(rst_n),
  .step(read),
  .mux_sel_out(sram_read_loops_mux_sel_out)
);

addr_gen_6 sram_read_addr_gen (
  .clk(clk),
  .clk_en(clk_en),
  .flush(flush),
  .mux_sel(sram_read_loops_mux_sel_out),
  .rst_n(rst_n),
  .starting_addr(sram_read_addr_gen_starting_addr),
  .step(read),
  .strides(sram_read_addr_gen_strides),
  .addr_out(read_addr)
);

sched_gen_6 sram_read_sched_gen (
  .clk(clk),
  .clk_en(clk_en),
  .cycle_count(cycle_count),
  .flush(flush),
  .mux_sel(sram_read_loops_mux_sel_out),
  .rst_n(rst_n),
  .sched_addr_gen_starting_addr(sram_read_sched_gen_sched_addr_gen_starting_addr),
  .sched_addr_gen_strides(sram_read_sched_gen_sched_addr_gen_strides),
  .valid_output(read)
);

endmodule   // strg_ub_thin

