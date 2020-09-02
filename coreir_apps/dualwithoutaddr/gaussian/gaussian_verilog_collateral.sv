module inner_sram__U187(input logic clk, input logic flush, input logic rst_n, output logic [15:0] rdata, output logic [15:0] wdata, output logic [15:0] raddr, output logic [15:0] waddr, output logic ren_in, output logic wen_in);

  LakeTop lake(.clk(clk), .flush(flush), .rst_n(rst_n), .data_out(rdata), .data_in(wdata), .raddr(raddr), .waddr(waddr), .ren_in(ren_in), .wen_in(wen_in), .clk_en(1), .tile_en(1));

endmodule
module inner_sram__U226(input logic clk, input logic flush, input logic rst_n, output logic [15:0] rdata, output logic [15:0] wdata, output logic [15:0] raddr, output logic [15:0] waddr, output logic ren_in, output logic wen_in);

  LakeTop lake(.clk(clk), .flush(flush), .rst_n(rst_n), .data_out(rdata), .data_in(wdata), .raddr(raddr), .waddr(waddr), .ren_in(ren_in), .wen_in(wen_in), .clk_en(1), .tile_en(1));

endmodule
