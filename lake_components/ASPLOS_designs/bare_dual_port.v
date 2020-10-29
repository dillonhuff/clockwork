module Chain (
  input logic accessor_output,
  input logic [0:0] [15:0] chain_data_in,
  input logic clk_en,
  input logic [0:0] [15:0] curr_tile_data_out,
  output logic [0:0] [15:0] data_out_tile,
  input logic flush
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
  output logic [1:0] [31:0] config_data_out,
  input logic [1:0] config_en,
  input logic config_read,
  input logic config_write,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  input logic flush,
  input logic [1:0] mode,
  input logic [0:0] [15:0] raddr,
  input logic ren_in,
  input logic rst_n,
  input logic tile_en,
  input logic [0:0] [15:0] waddr,
  input logic wen_in
);

logic accessor_output;
logic cfg_seq_clk;
logic [15:0] config_data_in_shrt;
logic [1:0][15:0] config_data_out_shrt;
logic config_seq_clk;
logic config_seq_clk_en;
logic [0:0][15:0] data_out_tile;
logic gclk;
logic [8:0] mem_addr_cfg;
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
logic [0:0][0:0][8:0] rd_mem_addr_dp;
logic [0:0][0:0][8:0] rd_mem_addr_in;
logic rf_0_clk;
logic [0:0][15:0] rf_0_data_in;
logic [0:0][15:0] rf_0_data_out;
logic [8:0] rf_0_rd_addr;
logic rf_0_ren;
logic rf_0_wen;
logic [8:0] rf_0_wr_addr;
logic strg_ub_clk;
logic [15:0] strg_ub_read_addr;
logic [15:0] strg_ub_write_addr;
logic [0:0] ub_cen_to_mem;
logic [0:0][15:0] ub_data_out;
logic [0:0][0:0][0:0][15:0] ub_data_to_mem;
logic [0:0][0:0][8:0] ub_rd_addr_to_mem;
logic ub_valid_out;
logic [0:0] ub_wen_to_mem;
logic [0:0][0:0][8:0] ub_wr_addr_to_mem;
logic valid_out_tile;
logic [0:0][0:0][8:0] wr_mem_addr_dp;
logic [0:0][0:0][8:0] wr_mem_addr_in;
assign config_data_in_shrt = config_data_in[15:0];
assign config_data_out[0] = 32'(config_data_out_shrt[0]);
assign config_data_out[1] = 32'(config_data_out_shrt[1]);
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
assign strg_ub_read_addr = raddr[0];
assign strg_ub_write_addr = waddr[0];
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

strg_ub_thin strg_ub (
  .accessor_output(accessor_output),
  .cen_to_strg(ub_cen_to_mem),
  .clk(strg_ub_clk),
  .clk_en(clk_en),
  .data_from_strg(mem_data_out),
  .data_in(data_in),
  .data_out(ub_data_out),
  .data_to_strg(ub_data_to_mem),
  .flush(flush),
  .rd_addr_out(ub_rd_addr_to_mem),
  .read_addr(strg_ub_read_addr),
  .ren_in(ren_in),
  .rst_n(rst_n),
  .wen_in(wen_in),
  .wen_to_strg(ub_wen_to_mem),
  .wr_addr_out(ub_wr_addr_to_mem),
  .write_addr(strg_ub_write_addr)
);

register_file rf_0 (
  .clk(rf_0_clk),
  .clk_en(clk_en),
  .data_in(rf_0_data_in),
  .data_out(rf_0_data_out),
  .flush(flush),
  .rd_addr(rf_0_rd_addr),
  .ren(rf_0_ren),
  .rst_n(rst_n),
  .wen(rf_0_wen),
  .wr_addr(rf_0_wr_addr)
);

Chain chain (
  .accessor_output(accessor_output),
  .chain_data_in(chain_data_in),
  .clk_en(clk_en),
  .curr_tile_data_out(data_out_tile),
  .data_out_tile(data_out),
  .flush(flush)
);

endmodule   // LakeTop

module register_file (
  input logic clk,
  input logic clk_en,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  input logic flush,
  input logic [8:0] rd_addr,
  input logic ren,
  input logic rst_n,
  input logic wen,
  input logic [8:0] wr_addr
);

logic [511:0][0:0][15:0] data_array;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    data_array <= 8192'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      data_array <= 8192'h0;
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

module storage_config_seq (
  output logic [8:0] addr_out,
  input logic clk,
  input logic clk_en,
  input logic [7:0] config_addr_in,
  input logic [15:0] config_data_in,
  input logic [1:0] config_en,
  input logic config_rd,
  input logic config_wr,
  input logic flush,
  output logic [1:0] [15:0] rd_data_out,
  input logic [0:0][0:0] [15:0] rd_data_stg,
  output logic ren_out,
  input logic rst_n,
  output logic wen_out,
  output logic [0:0] [15:0] wr_data
);

logic [1:0] reduce_en;
logic set_to_addr;
assign reduce_en[0] = |config_en[0];
assign reduce_en[1] = |config_en[1];
always_comb begin
  set_to_addr = 1'h0;
  for (int unsigned i = 0; i < 2; i += 1) begin
      if (reduce_en[1'(i)]) begin
        set_to_addr = 1'(i);
      end
    end
end
assign addr_out = {set_to_addr, config_addr_in};
assign wr_data[0] = config_data_in;
assign rd_data_out[0] = rd_data_stg[0];
assign rd_data_out[1] = rd_data_stg[0];
assign wen_out = config_wr;
assign ren_out = config_rd;
endmodule   // storage_config_seq

module strg_ub_thin (
  output logic accessor_output,
  output logic cen_to_strg,
  input logic clk,
  input logic clk_en,
  input logic [15:0] data_from_strg,
  input logic [0:0] [15:0] data_in,
  output logic [0:0] [15:0] data_out,
  output logic [15:0] data_to_strg,
  input logic flush,
  output logic [8:0] rd_addr_out,
  input logic [15:0] read_addr,
  input logic ren_in,
  output logic ren_to_strg,
  input logic rst_n,
  input logic wen_in,
  output logic wen_to_strg,
  output logic [8:0] wr_addr_out,
  input logic [15:0] write_addr
);

assign accessor_output = ren_in;
assign cen_to_strg = wen_in | ren_in;
assign wen_to_strg = wen_in;
assign ren_to_strg = ren_in;
assign data_out = data_from_strg;
assign data_to_strg = data_in;
assign wr_addr_out = write_addr[8:0];
assign rd_addr_out = read_addr[8:0];
endmodule   // strg_ub_thin


