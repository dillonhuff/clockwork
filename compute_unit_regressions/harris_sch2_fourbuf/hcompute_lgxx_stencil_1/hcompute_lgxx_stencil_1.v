module commonlib_smin__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) <= ($signed(in1)) ? in0 : in1;
endmodule

module commonlib_smax__width16 (
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out
);
assign out = ($signed(in0)) >= ($signed(in1)) ? in0 : in1;
endmodule

module hcompute_lgxx_stencil_1 (
    output [15:0] out_lgxx_stencil,
    input [15:0] in0_lgxx_stencil [0:0],
    input [15:0] in1_padded16_global_wrapper_stencil [5:0]
);
wire [15:0] smax_289_290_291_in0;
wire [15:0] smax_289_290_291_in1;
wire [15:0] smax_289_290_291_out;
wire [15:0] smin_287_288_289_in0;
wire [15:0] smin_287_288_289_in1;
wire [15:0] smin_287_288_289_out;
assign smax_289_290_291_in0 = smin_287_288_289_out;
assign smax_289_290_291_in1 = 16'hff01;
commonlib_smax__width16 smax_289_290_291 (
    .in0(smax_289_290_291_in0),
    .in1(smax_289_290_291_in1),
    .out(smax_289_290_291_out)
);
assign smin_287_288_289_in0 = 16'((16'((16'((16'(in1_padded16_global_wrapper_stencil[0] + (16'(in1_padded16_global_wrapper_stencil[1] + (16'(in1_padded16_global_wrapper_stencil[2] * 16'h0002)))))) - in1_padded16_global_wrapper_stencil[3])) - (16'(in1_padded16_global_wrapper_stencil[4] * 16'h0002)))) - in1_padded16_global_wrapper_stencil[5]);
assign smin_287_288_289_in1 = 16'h00ff;
commonlib_smin__width16 smin_287_288_289 (
    .in0(smin_287_288_289_in0),
    .in1(smin_287_288_289_in1),
    .out(smin_287_288_289_out)
);
assign out_lgxx_stencil = 16'(in0_lgxx_stencil[0] + (($signed(16'(smax_289_290_291_out * smax_289_290_291_out))) >>> 16'h0007));
endmodule

