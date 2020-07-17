module affine_controller(input clk,
  input rst_n,
  output logic valid,
  output logic [15:0] addr_out);

reg [15:0] cycle_time;

assign valid = cycle_time == addr_out;

always_ff @(posedge clk, negedge rst_n) begin
  if (~rst_n) begin
    cycle_time <= 16'h0;
  end
  else begin
    cycle_time <= cycle_time + 16'd1;
  end
end

addr_gen_6 time_addr(
  .addr_out(addr_out),
  .clk(clk),
  .clk_en(1),
  .dimensionality(2),
  .flush(0),
  .ranges({16'd5, 16'd5, 16'd5, 16'd5, 16'd6, 16'd5}),
  .rst_n(rst_n),
  .starting_addr(10),
  .step(valid),
  .strides({16'd1, 16'd1, 16'd1, 16'd1, 16'd11, 16'd2}));


endmodule
