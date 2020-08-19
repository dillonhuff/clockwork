module addr_gen_6 (
  input logic clk,
  input logic clk_en,
  input logic [3:0] dimensionality,
  input logic flush,
  input logic [5:0] [15:0] ranges,
  input logic rst_n,
  input logic [15:0] starting_addr,
  input logic step,
  input logic [5:0] [15:0] strides,
  output logic [15:0] addr_out
);

logic [15:0] calc_addr;
logic [5:0][15:0] current_loc;
logic [5:0][15:0] dim_counter;
logic [15:0] strt_addr;
logic [5:0] update;
assign strt_addr = starting_addr;
assign addr_out = calc_addr;
assign update[0] = 1'h1;
assign update[1] = (dim_counter[0] == (ranges[0] - 16'h1)) & update[0];
assign update[2] = (dim_counter[1] == (ranges[1] - 16'h1)) & update[1];
assign update[3] = (dim_counter[2] == (ranges[2] - 16'h1)) & update[2];
assign update[4] = (dim_counter[3] == (ranges[3] - 16'h1)) & update[3];
assign update[5] = (dim_counter[4] == (ranges[4] - 16'h1)) & update[4];
always_comb begin
  calc_addr = ((4'h0 < dimensionality) ? current_loc[0]: 16'h0) + ((4'h1 < dimensionality) ?
      current_loc[1]: 16'h0) + ((4'h2 < dimensionality) ? current_loc[2]: 16'h0) +
      ((4'h3 < dimensionality) ? current_loc[3]: 16'h0) + ((4'h4 < dimensionality) ?
      current_loc[4]: 16'h0) + ((4'h5 < dimensionality) ? current_loc[5]: 16'h0) +
      strt_addr;
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    dim_counter <= 96'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      for (int unsigned i = 0; i < 6; i += 1) begin
          dim_counter[3'(i)] <= 16'h0;
        end
    end
    else if (step) begin
      for (int unsigned i = 0; i < 6; i += 1) begin
          if (update[3'(i)] & (4'(i) < dimensionality)) begin
            if (dim_counter[3'(i)] == (ranges[3'(i)] - 16'h1)) begin
              dim_counter[3'(i)] <= 16'h0;
            end
            else dim_counter[3'(i)] <= dim_counter[3'(i)] + 16'h1;
          end
        end
    end
  end
end

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    current_loc <= 96'h0;
  end
  else if (clk_en) begin
    if (flush) begin
      for (int unsigned i = 0; i < 6; i += 1) begin
          current_loc[3'(i)] <= 16'h0;
        end
    end
    else if (step) begin
      for (int unsigned i = 0; i < 6; i += 1) begin
          if (update[3'(i)] & (4'(i) < dimensionality)) begin
            if (dim_counter[3'(i)] == (ranges[3'(i)] - 16'h1)) begin
              current_loc[3'(i)] <= 16'h0;
            end
            else current_loc[3'(i)] <= current_loc[3'(i)] + strides[3'(i)];
          end
        end
    end
  end
end
endmodule   // addr_gen_6

