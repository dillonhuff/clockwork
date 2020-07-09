module sram_stub (
  input logic [8:0] addr,
  input logic cen,
  input logic clk,
  input logic [3:0] [15:0] data_in,
  output logic [3:0] [15:0] data_out,
  input logic wen
);

logic [511:0][3:0][15:0] data_array;

always_ff @(posedge clk) begin
  if (cen & wen) begin
    data_array[addr] <= data_in;
  end
end

always_ff @(posedge clk) begin
  if (cen & (~wen)) begin
    data_out <= data_array[addr];
  end
end
endmodule   // sram_stub

