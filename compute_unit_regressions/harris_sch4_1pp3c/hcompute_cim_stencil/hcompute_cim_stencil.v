module hcompute_cim_stencil (
    output [15:0] out_cim_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_lgxy_stencil [0:0],
    input [15:0] in2_lgyy_stencil [0:0]
);
wire [15:0] add_702_703_708_out;
wire [15:0] ashr_lgxx_stencil_2_701_702_out;
wire [15:0] ashr_lgxy_stencil_2_701_705_out;
wire [15:0] ashr_lgyy_stencil_2_701_703_out;
assign add_702_703_708_out = 16'(ashr_lgxx_stencil_2_701_702_out + ashr_lgyy_stencil_2_701_703_out);
assign ashr_lgxx_stencil_2_701_702_out = ($signed(in0_lgxx_stencil[0])) >>> 16'h0006;
assign ashr_lgxy_stencil_2_701_705_out = ($signed(in1_lgxy_stencil[0])) >>> 16'h0006;
assign ashr_lgyy_stencil_2_701_703_out = ($signed(in2_lgyy_stencil[0])) >>> 16'h0006;
assign out_cim_stencil = 16'((16'((16'(ashr_lgxx_stencil_2_701_702_out * ashr_lgyy_stencil_2_701_703_out)) - (16'(ashr_lgxy_stencil_2_701_705_out * ashr_lgxy_stencil_2_701_705_out)))) - (($signed(16'(add_702_703_708_out * add_702_703_708_out))) >>> 16'h0004));
endmodule

