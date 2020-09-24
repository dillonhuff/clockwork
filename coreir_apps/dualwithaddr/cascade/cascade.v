module hcompute_hw_output_stencil (
    output [15:0] out_hw_output_stencil,
    input [15:0] in0_conv2_stencil [0:0]
);
assign out_hw_output_stencil = in0_conv2_stencil[0];
endmodule

module hcompute_hw_input_global_wrapper_stencil (
    output [15:0] out_hw_input_global_wrapper_stencil,
    input [15:0] in0_hw_input_stencil [0:0]
);
assign out_hw_input_global_wrapper_stencil = in0_hw_input_stencil[0];
endmodule

module cu_op_hcompute_hw_output_stencil (
    input clk,
    input [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0],
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_output_stencil;
wire [15:0] inner_compute_in0_conv2_stencil [0:0];
assign inner_compute_in0_conv2_stencil[0] = conv2_stencil_op_hcompute_hw_output_stencil_read[0];
hcompute_hw_output_stencil inner_compute (
    .out_hw_output_stencil(inner_compute_out_hw_output_stencil),
    .in0_conv2_stencil(inner_compute_in0_conv2_stencil)
);
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = inner_compute_out_hw_output_stencil;
endmodule

module cu_op_hcompute_hw_input_global_wrapper_stencil (
    input clk,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire [15:0] inner_compute_out_hw_input_global_wrapper_stencil;
wire [15:0] inner_compute_in0_hw_input_stencil [0:0];
assign inner_compute_in0_hw_input_stencil[0] = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
hcompute_hw_input_global_wrapper_stencil inner_compute (
    .out_hw_input_global_wrapper_stencil(inner_compute_out_hw_input_global_wrapper_stencil),
    .in0_hw_input_stencil(inner_compute_in0_hw_input_stencil)
);
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = inner_compute_out_hw_input_global_wrapper_stencil;
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

module delay__U876 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire [15:0] _U877_in;
wire _U877_clk;
wire [15:0] _U877_out;
wire [15:0] _U878_in;
wire _U878_clk;
wire [15:0] _U878_out;
wire [15:0] _U879_in;
wire _U879_clk;
wire [15:0] _U879_out;
wire [15:0] _U880_in;
wire _U880_clk;
wire [15:0] _U880_out;
wire [15:0] _U881_in;
wire _U881_clk;
wire [15:0] _U881_out;
wire [15:0] _U882_in;
wire _U882_clk;
wire [15:0] _U882_out;
wire [15:0] _U883_in;
wire _U883_clk;
wire [15:0] _U883_out;
wire [15:0] _U884_in;
wire _U884_clk;
wire [15:0] _U884_out;
wire [15:0] _U885_in;
wire _U885_clk;
wire [15:0] _U885_out;
wire [15:0] _U886_in;
wire _U886_clk;
wire [15:0] _U886_out;
wire [15:0] _U887_in;
wire _U887_clk;
wire [15:0] _U887_out;
wire [15:0] _U888_in;
wire _U888_clk;
wire [15:0] _U888_out;
wire [15:0] _U889_in;
wire _U889_clk;
wire [15:0] _U889_out;
wire [15:0] _U890_in;
wire _U890_clk;
wire [15:0] _U890_out;
wire [15:0] _U891_in;
wire _U891_clk;
wire [15:0] _U891_out;
wire [15:0] _U892_in;
wire _U892_clk;
wire [15:0] _U892_out;
wire [15:0] _U893_in;
wire _U893_clk;
wire [15:0] _U893_out;
wire [15:0] _U894_in;
wire _U894_clk;
wire [15:0] _U894_out;
wire [15:0] _U895_in;
wire _U895_clk;
wire [15:0] _U895_out;
wire [15:0] _U896_in;
wire _U896_clk;
wire [15:0] _U896_out;
wire [15:0] _U897_in;
wire _U897_clk;
wire [15:0] _U897_out;
wire [15:0] _U898_in;
wire _U898_clk;
wire [15:0] _U898_out;
wire [15:0] _U899_in;
wire _U899_clk;
wire [15:0] _U899_out;
wire [15:0] _U900_in;
wire _U900_clk;
wire [15:0] _U900_out;
wire [15:0] _U901_in;
wire _U901_clk;
wire [15:0] _U901_out;
wire [15:0] _U902_in;
wire _U902_clk;
wire [15:0] _U902_out;
wire [15:0] _U903_in;
wire _U903_clk;
wire [15:0] _U903_out;
wire [15:0] _U904_in;
wire _U904_clk;
wire [15:0] _U904_out;
wire [15:0] _U905_in;
wire _U905_clk;
wire [15:0] _U905_out;
wire [15:0] _U906_in;
wire _U906_clk;
wire [15:0] _U906_out;
wire [15:0] _U907_in;
wire _U907_clk;
wire [15:0] _U907_out;
wire [15:0] _U908_in;
wire _U908_clk;
wire [15:0] _U908_out;
wire [15:0] _U909_in;
wire _U909_clk;
wire [15:0] _U909_out;
wire [15:0] _U910_in;
wire _U910_clk;
wire [15:0] _U910_out;
wire [15:0] _U911_in;
wire _U911_clk;
wire [15:0] _U911_out;
wire [15:0] _U912_in;
wire _U912_clk;
wire [15:0] _U912_out;
wire [15:0] _U913_in;
wire _U913_clk;
wire [15:0] _U913_out;
wire [15:0] _U914_in;
wire _U914_clk;
wire [15:0] _U914_out;
wire [15:0] _U915_in;
wire _U915_clk;
wire [15:0] _U915_out;
wire [15:0] _U916_in;
wire _U916_clk;
wire [15:0] _U916_out;
wire [15:0] _U917_in;
wire _U917_clk;
wire [15:0] _U917_out;
wire [15:0] _U918_in;
wire _U918_clk;
wire [15:0] _U918_out;
wire [15:0] _U919_in;
wire _U919_clk;
wire [15:0] _U919_out;
wire [15:0] _U920_in;
wire _U920_clk;
wire [15:0] _U920_out;
wire [15:0] _U921_in;
wire _U921_clk;
wire [15:0] _U921_out;
wire [15:0] _U922_in;
wire _U922_clk;
wire [15:0] _U922_out;
wire [15:0] _U923_in;
wire _U923_clk;
wire [15:0] _U923_out;
wire [15:0] _U924_in;
wire _U924_clk;
wire [15:0] _U924_out;
wire [15:0] _U925_in;
wire _U925_clk;
wire [15:0] _U925_out;
wire [15:0] _U926_in;
wire _U926_clk;
wire [15:0] _U926_out;
wire [15:0] _U927_in;
wire _U927_clk;
wire [15:0] _U927_out;
wire [15:0] _U928_in;
wire _U928_clk;
wire [15:0] _U928_out;
wire [15:0] _U929_in;
wire _U929_clk;
wire [15:0] _U929_out;
wire [15:0] _U930_in;
wire _U930_clk;
wire [15:0] _U930_out;
wire [15:0] _U931_in;
wire _U931_clk;
wire [15:0] _U931_out;
wire [15:0] _U932_in;
wire _U932_clk;
wire [15:0] _U932_out;
wire [15:0] _U933_in;
wire _U933_clk;
wire [15:0] _U933_out;
wire [15:0] _U934_in;
wire _U934_clk;
wire [15:0] _U934_out;
wire [15:0] _U935_in;
wire _U935_clk;
wire [15:0] _U935_out;
wire [15:0] _U936_in;
wire _U936_clk;
wire [15:0] _U936_out;
wire [15:0] _U937_in;
wire _U937_clk;
wire [15:0] _U937_out;
wire [15:0] _U938_in;
wire _U938_clk;
assign _U877_in = wdata;
assign _U877_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U877 (
    .in(_U877_in),
    .clk(_U877_clk),
    .out(_U877_out)
);
assign _U878_in = _U877_out;
assign _U878_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U878 (
    .in(_U878_in),
    .clk(_U878_clk),
    .out(_U878_out)
);
assign _U879_in = _U878_out;
assign _U879_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U879 (
    .in(_U879_in),
    .clk(_U879_clk),
    .out(_U879_out)
);
assign _U880_in = _U879_out;
assign _U880_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U880 (
    .in(_U880_in),
    .clk(_U880_clk),
    .out(_U880_out)
);
assign _U881_in = _U880_out;
assign _U881_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U881 (
    .in(_U881_in),
    .clk(_U881_clk),
    .out(_U881_out)
);
assign _U882_in = _U881_out;
assign _U882_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U882 (
    .in(_U882_in),
    .clk(_U882_clk),
    .out(_U882_out)
);
assign _U883_in = _U882_out;
assign _U883_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U883 (
    .in(_U883_in),
    .clk(_U883_clk),
    .out(_U883_out)
);
assign _U884_in = _U883_out;
assign _U884_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U884 (
    .in(_U884_in),
    .clk(_U884_clk),
    .out(_U884_out)
);
assign _U885_in = _U884_out;
assign _U885_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U885 (
    .in(_U885_in),
    .clk(_U885_clk),
    .out(_U885_out)
);
assign _U886_in = _U885_out;
assign _U886_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U886 (
    .in(_U886_in),
    .clk(_U886_clk),
    .out(_U886_out)
);
assign _U887_in = _U886_out;
assign _U887_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U887 (
    .in(_U887_in),
    .clk(_U887_clk),
    .out(_U887_out)
);
assign _U888_in = _U887_out;
assign _U888_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U888 (
    .in(_U888_in),
    .clk(_U888_clk),
    .out(_U888_out)
);
assign _U889_in = _U888_out;
assign _U889_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U889 (
    .in(_U889_in),
    .clk(_U889_clk),
    .out(_U889_out)
);
assign _U890_in = _U889_out;
assign _U890_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U890 (
    .in(_U890_in),
    .clk(_U890_clk),
    .out(_U890_out)
);
assign _U891_in = _U890_out;
assign _U891_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U891 (
    .in(_U891_in),
    .clk(_U891_clk),
    .out(_U891_out)
);
assign _U892_in = _U891_out;
assign _U892_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U892 (
    .in(_U892_in),
    .clk(_U892_clk),
    .out(_U892_out)
);
assign _U893_in = _U892_out;
assign _U893_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U893 (
    .in(_U893_in),
    .clk(_U893_clk),
    .out(_U893_out)
);
assign _U894_in = _U893_out;
assign _U894_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U894 (
    .in(_U894_in),
    .clk(_U894_clk),
    .out(_U894_out)
);
assign _U895_in = _U894_out;
assign _U895_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U895 (
    .in(_U895_in),
    .clk(_U895_clk),
    .out(_U895_out)
);
assign _U896_in = _U895_out;
assign _U896_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U896 (
    .in(_U896_in),
    .clk(_U896_clk),
    .out(_U896_out)
);
assign _U897_in = _U896_out;
assign _U897_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U897 (
    .in(_U897_in),
    .clk(_U897_clk),
    .out(_U897_out)
);
assign _U898_in = _U897_out;
assign _U898_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U898 (
    .in(_U898_in),
    .clk(_U898_clk),
    .out(_U898_out)
);
assign _U899_in = _U898_out;
assign _U899_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U899 (
    .in(_U899_in),
    .clk(_U899_clk),
    .out(_U899_out)
);
assign _U900_in = _U899_out;
assign _U900_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U900 (
    .in(_U900_in),
    .clk(_U900_clk),
    .out(_U900_out)
);
assign _U901_in = _U900_out;
assign _U901_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U901 (
    .in(_U901_in),
    .clk(_U901_clk),
    .out(_U901_out)
);
assign _U902_in = _U901_out;
assign _U902_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U902 (
    .in(_U902_in),
    .clk(_U902_clk),
    .out(_U902_out)
);
assign _U903_in = _U902_out;
assign _U903_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U903 (
    .in(_U903_in),
    .clk(_U903_clk),
    .out(_U903_out)
);
assign _U904_in = _U903_out;
assign _U904_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U904 (
    .in(_U904_in),
    .clk(_U904_clk),
    .out(_U904_out)
);
assign _U905_in = _U904_out;
assign _U905_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U905 (
    .in(_U905_in),
    .clk(_U905_clk),
    .out(_U905_out)
);
assign _U906_in = _U905_out;
assign _U906_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U906 (
    .in(_U906_in),
    .clk(_U906_clk),
    .out(_U906_out)
);
assign _U907_in = _U906_out;
assign _U907_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U907 (
    .in(_U907_in),
    .clk(_U907_clk),
    .out(_U907_out)
);
assign _U908_in = _U907_out;
assign _U908_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U908 (
    .in(_U908_in),
    .clk(_U908_clk),
    .out(_U908_out)
);
assign _U909_in = _U908_out;
assign _U909_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U909 (
    .in(_U909_in),
    .clk(_U909_clk),
    .out(_U909_out)
);
assign _U910_in = _U909_out;
assign _U910_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U910 (
    .in(_U910_in),
    .clk(_U910_clk),
    .out(_U910_out)
);
assign _U911_in = _U910_out;
assign _U911_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U911 (
    .in(_U911_in),
    .clk(_U911_clk),
    .out(_U911_out)
);
assign _U912_in = _U911_out;
assign _U912_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U912 (
    .in(_U912_in),
    .clk(_U912_clk),
    .out(_U912_out)
);
assign _U913_in = _U912_out;
assign _U913_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U913 (
    .in(_U913_in),
    .clk(_U913_clk),
    .out(_U913_out)
);
assign _U914_in = _U913_out;
assign _U914_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U914 (
    .in(_U914_in),
    .clk(_U914_clk),
    .out(_U914_out)
);
assign _U915_in = _U914_out;
assign _U915_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U915 (
    .in(_U915_in),
    .clk(_U915_clk),
    .out(_U915_out)
);
assign _U916_in = _U915_out;
assign _U916_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U916 (
    .in(_U916_in),
    .clk(_U916_clk),
    .out(_U916_out)
);
assign _U917_in = _U916_out;
assign _U917_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U917 (
    .in(_U917_in),
    .clk(_U917_clk),
    .out(_U917_out)
);
assign _U918_in = _U917_out;
assign _U918_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U918 (
    .in(_U918_in),
    .clk(_U918_clk),
    .out(_U918_out)
);
assign _U919_in = _U918_out;
assign _U919_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U919 (
    .in(_U919_in),
    .clk(_U919_clk),
    .out(_U919_out)
);
assign _U920_in = _U919_out;
assign _U920_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U920 (
    .in(_U920_in),
    .clk(_U920_clk),
    .out(_U920_out)
);
assign _U921_in = _U920_out;
assign _U921_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U921 (
    .in(_U921_in),
    .clk(_U921_clk),
    .out(_U921_out)
);
assign _U922_in = _U921_out;
assign _U922_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U922 (
    .in(_U922_in),
    .clk(_U922_clk),
    .out(_U922_out)
);
assign _U923_in = _U922_out;
assign _U923_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U923 (
    .in(_U923_in),
    .clk(_U923_clk),
    .out(_U923_out)
);
assign _U924_in = _U923_out;
assign _U924_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U924 (
    .in(_U924_in),
    .clk(_U924_clk),
    .out(_U924_out)
);
assign _U925_in = _U924_out;
assign _U925_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U925 (
    .in(_U925_in),
    .clk(_U925_clk),
    .out(_U925_out)
);
assign _U926_in = _U925_out;
assign _U926_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U926 (
    .in(_U926_in),
    .clk(_U926_clk),
    .out(_U926_out)
);
assign _U927_in = _U926_out;
assign _U927_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U927 (
    .in(_U927_in),
    .clk(_U927_clk),
    .out(_U927_out)
);
assign _U928_in = _U927_out;
assign _U928_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U928 (
    .in(_U928_in),
    .clk(_U928_clk),
    .out(_U928_out)
);
assign _U929_in = _U928_out;
assign _U929_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U929 (
    .in(_U929_in),
    .clk(_U929_clk),
    .out(_U929_out)
);
assign _U930_in = _U929_out;
assign _U930_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U930 (
    .in(_U930_in),
    .clk(_U930_clk),
    .out(_U930_out)
);
assign _U931_in = _U930_out;
assign _U931_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U931 (
    .in(_U931_in),
    .clk(_U931_clk),
    .out(_U931_out)
);
assign _U932_in = _U931_out;
assign _U932_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U932 (
    .in(_U932_in),
    .clk(_U932_clk),
    .out(_U932_out)
);
assign _U933_in = _U932_out;
assign _U933_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U933 (
    .in(_U933_in),
    .clk(_U933_clk),
    .out(_U933_out)
);
assign _U934_in = _U933_out;
assign _U934_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U934 (
    .in(_U934_in),
    .clk(_U934_clk),
    .out(_U934_out)
);
assign _U935_in = _U934_out;
assign _U935_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U935 (
    .in(_U935_in),
    .clk(_U935_clk),
    .out(_U935_out)
);
assign _U936_in = _U935_out;
assign _U936_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U936 (
    .in(_U936_in),
    .clk(_U936_clk),
    .out(_U936_out)
);
assign _U937_in = _U936_out;
assign _U937_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U937 (
    .in(_U937_in),
    .clk(_U937_clk),
    .out(_U937_out)
);
assign _U938_in = _U937_out;
assign _U938_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U938 (
    .in(_U938_in),
    .clk(_U938_clk),
    .out(rdata)
);
endmodule

module delay_tile__delay62 (
    input clk,
    input rst_n,
    input flush,
    input [15:0] wdata,
    output [15:0] rdata
);
wire delay_mod_clk;
wire delay_mod_rst_n;
wire delay_mod_flush;
wire [15:0] delay_mod_wdata;
assign delay_mod_clk = clk;
assign delay_mod_rst_n = rst_n;
assign delay_mod_flush = flush;
assign delay_mod_wdata = wdata;
delay__U876 delay_mod (
    .clk(delay_mod_clk),
    .rst_n(delay_mod_rst_n),
    .flush(delay_mod_flush),
    .wdata(delay_mod_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U867 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U859 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U821 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module memtile_long_delay__U813 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire delay_tile_m_clk;
wire delay_tile_m_rst_n;
wire delay_tile_m_flush;
wire [15:0] delay_tile_m_wdata;
assign delay_tile_m_clk = clk;
assign delay_tile_m_rst_n = rst_n;
assign delay_tile_m_flush = flush;
assign delay_tile_m_wdata = wdata;
delay_tile__delay62 delay_tile_m (
    .clk(delay_tile_m_clk),
    .rst_n(delay_tile_m_rst_n),
    .flush(delay_tile_m_flush),
    .wdata(delay_tile_m_wdata),
    .rdata(rdata)
);
endmodule

module delay__U872 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U873_in;
wire _U873_clk;
assign _U873_in = wdata;
assign _U873_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U873 (
    .in(_U873_in),
    .clk(_U873_clk),
    .out(rdata)
);
endmodule

module delay__U869 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U870_in;
wire _U870_clk;
assign _U870_in = wdata;
assign _U870_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U870 (
    .in(_U870_in),
    .clk(_U870_clk),
    .out(rdata)
);
endmodule

module delay__U864 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U865_in;
wire _U865_clk;
assign _U865_in = wdata;
assign _U865_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U865 (
    .in(_U865_in),
    .clk(_U865_clk),
    .out(rdata)
);
endmodule

module delay__U861 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U862_in;
wire _U862_clk;
assign _U862_in = wdata;
assign _U862_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U862 (
    .in(_U862_in),
    .clk(_U862_clk),
    .out(rdata)
);
endmodule

module delay__U856 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U857_in;
wire _U857_clk;
assign _U857_in = wdata;
assign _U857_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U857 (
    .in(_U857_in),
    .clk(_U857_clk),
    .out(rdata)
);
endmodule

module delay__U853 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U854_in;
wire _U854_clk;
assign _U854_in = wdata;
assign _U854_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U854 (
    .in(_U854_in),
    .clk(_U854_clk),
    .out(rdata)
);
endmodule

module delay__U845 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U846_in;
wire _U846_clk;
wire [15:0] _U846_out;
wire [15:0] _U847_in;
wire _U847_clk;
wire [15:0] _U847_out;
wire [15:0] _U848_in;
wire _U848_clk;
wire [15:0] _U848_out;
wire [15:0] _U849_in;
wire _U849_clk;
wire [15:0] _U849_out;
wire [15:0] _U850_in;
wire _U850_clk;
wire [15:0] _U850_out;
wire [15:0] _U851_in;
wire _U851_clk;
assign _U846_in = wdata;
assign _U846_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U846 (
    .in(_U846_in),
    .clk(_U846_clk),
    .out(_U846_out)
);
assign _U847_in = _U846_out;
assign _U847_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U847 (
    .in(_U847_in),
    .clk(_U847_clk),
    .out(_U847_out)
);
assign _U848_in = _U847_out;
assign _U848_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U848 (
    .in(_U848_in),
    .clk(_U848_clk),
    .out(_U848_out)
);
assign _U849_in = _U848_out;
assign _U849_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U849 (
    .in(_U849_in),
    .clk(_U849_clk),
    .out(_U849_out)
);
assign _U850_in = _U849_out;
assign _U850_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U850 (
    .in(_U850_in),
    .clk(_U850_clk),
    .out(_U850_out)
);
assign _U851_in = _U850_out;
assign _U851_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U851 (
    .in(_U851_in),
    .clk(_U851_clk),
    .out(rdata)
);
endmodule

module hw_input_global_wrapper_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv1_stencil_1_read_ren,
    input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv1_stencil_1_read [8:0],
    input op_hcompute_hw_input_global_wrapper_stencil_write_wen,
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_hw_input_global_wrapper_stencil_write [0:0]
);
wire delay_sr_U852_clk;
wire [15:0] delay_sr_U852_wdata;
wire [15:0] delay_sr_U852_rdata;
wire delay_sr_U852_rst_n;
wire delay_sr_U852_flush;
wire delay_sr_U855_clk;
wire [15:0] delay_sr_U855_wdata;
wire [15:0] delay_sr_U855_rdata;
wire delay_sr_U855_rst_n;
wire delay_sr_U855_flush;
wire delay_sr_U858_clk;
wire [15:0] delay_sr_U858_wdata;
wire [15:0] delay_sr_U858_rdata;
wire delay_sr_U858_rst_n;
wire delay_sr_U858_flush;
wire delay_sr_U860_clk;
wire [15:0] delay_sr_U860_wdata;
wire [15:0] delay_sr_U860_rdata;
wire delay_sr_U860_rst_n;
wire delay_sr_U860_flush;
wire delay_sr_U863_clk;
wire [15:0] delay_sr_U863_wdata;
wire [15:0] delay_sr_U863_rdata;
wire delay_sr_U863_rst_n;
wire delay_sr_U863_flush;
wire delay_sr_U866_clk;
wire [15:0] delay_sr_U866_wdata;
wire [15:0] delay_sr_U866_rdata;
wire delay_sr_U866_rst_n;
wire delay_sr_U866_flush;
wire delay_sr_U868_clk;
wire [15:0] delay_sr_U868_wdata;
wire [15:0] delay_sr_U868_rdata;
wire delay_sr_U868_rst_n;
wire delay_sr_U868_flush;
wire delay_sr_U871_clk;
wire [15:0] delay_sr_U871_wdata;
wire [15:0] delay_sr_U871_rdata;
wire delay_sr_U871_rst_n;
wire delay_sr_U871_flush;
wire delay_sr_U874_clk;
wire [15:0] delay_sr_U874_wdata;
wire [15:0] delay_sr_U874_rdata;
wire delay_sr_U874_rst_n;
wire delay_sr_U874_flush;
assign delay_sr_U852_clk = clk;
assign delay_sr_U852_wdata = op_hcompute_hw_input_global_wrapper_stencil_write[0];
assign delay_sr_U852_rst_n = rst_n;
assign delay_sr_U852_flush = flush;
delay__U845 delay_sr_U852 (
    .clk(delay_sr_U852_clk),
    .wdata(delay_sr_U852_wdata),
    .rdata(delay_sr_U852_rdata),
    .rst_n(delay_sr_U852_rst_n),
    .flush(delay_sr_U852_flush)
);
assign delay_sr_U855_clk = clk;
assign delay_sr_U855_wdata = delay_sr_U852_rdata;
assign delay_sr_U855_rst_n = rst_n;
assign delay_sr_U855_flush = flush;
delay__U853 delay_sr_U855 (
    .clk(delay_sr_U855_clk),
    .wdata(delay_sr_U855_wdata),
    .rdata(delay_sr_U855_rdata),
    .rst_n(delay_sr_U855_rst_n),
    .flush(delay_sr_U855_flush)
);
assign delay_sr_U858_clk = clk;
assign delay_sr_U858_wdata = delay_sr_U855_rdata;
assign delay_sr_U858_rst_n = rst_n;
assign delay_sr_U858_flush = flush;
delay__U856 delay_sr_U858 (
    .clk(delay_sr_U858_clk),
    .wdata(delay_sr_U858_wdata),
    .rdata(delay_sr_U858_rdata),
    .rst_n(delay_sr_U858_rst_n),
    .flush(delay_sr_U858_flush)
);
assign delay_sr_U860_clk = clk;
assign delay_sr_U860_wdata = delay_sr_U858_rdata;
assign delay_sr_U860_rst_n = rst_n;
assign delay_sr_U860_flush = flush;
memtile_long_delay__U859 delay_sr_U860 (
    .clk(delay_sr_U860_clk),
    .wdata(delay_sr_U860_wdata),
    .rdata(delay_sr_U860_rdata),
    .rst_n(delay_sr_U860_rst_n),
    .flush(delay_sr_U860_flush)
);
assign delay_sr_U863_clk = clk;
assign delay_sr_U863_wdata = delay_sr_U860_rdata;
assign delay_sr_U863_rst_n = rst_n;
assign delay_sr_U863_flush = flush;
delay__U861 delay_sr_U863 (
    .clk(delay_sr_U863_clk),
    .wdata(delay_sr_U863_wdata),
    .rdata(delay_sr_U863_rdata),
    .rst_n(delay_sr_U863_rst_n),
    .flush(delay_sr_U863_flush)
);
assign delay_sr_U866_clk = clk;
assign delay_sr_U866_wdata = delay_sr_U863_rdata;
assign delay_sr_U866_rst_n = rst_n;
assign delay_sr_U866_flush = flush;
delay__U864 delay_sr_U866 (
    .clk(delay_sr_U866_clk),
    .wdata(delay_sr_U866_wdata),
    .rdata(delay_sr_U866_rdata),
    .rst_n(delay_sr_U866_rst_n),
    .flush(delay_sr_U866_flush)
);
assign delay_sr_U868_clk = clk;
assign delay_sr_U868_wdata = delay_sr_U866_rdata;
assign delay_sr_U868_rst_n = rst_n;
assign delay_sr_U868_flush = flush;
memtile_long_delay__U867 delay_sr_U868 (
    .clk(delay_sr_U868_clk),
    .wdata(delay_sr_U868_wdata),
    .rdata(delay_sr_U868_rdata),
    .rst_n(delay_sr_U868_rst_n),
    .flush(delay_sr_U868_flush)
);
assign delay_sr_U871_clk = clk;
assign delay_sr_U871_wdata = delay_sr_U868_rdata;
assign delay_sr_U871_rst_n = rst_n;
assign delay_sr_U871_flush = flush;
delay__U869 delay_sr_U871 (
    .clk(delay_sr_U871_clk),
    .wdata(delay_sr_U871_wdata),
    .rdata(delay_sr_U871_rdata),
    .rst_n(delay_sr_U871_rst_n),
    .flush(delay_sr_U871_flush)
);
assign delay_sr_U874_clk = clk;
assign delay_sr_U874_wdata = delay_sr_U871_rdata;
assign delay_sr_U874_rst_n = rst_n;
assign delay_sr_U874_flush = flush;
delay__U872 delay_sr_U874 (
    .clk(delay_sr_U874_clk),
    .wdata(delay_sr_U874_wdata),
    .rdata(delay_sr_U874_rdata),
    .rst_n(delay_sr_U874_rst_n),
    .flush(delay_sr_U874_flush)
);
assign op_hcompute_conv1_stencil_1_read[8] = delay_sr_U860_rdata;
assign op_hcompute_conv1_stencil_1_read[7] = delay_sr_U852_rdata;
assign op_hcompute_conv1_stencil_1_read[6] = delay_sr_U868_rdata;
assign op_hcompute_conv1_stencil_1_read[5] = delay_sr_U855_rdata;
assign op_hcompute_conv1_stencil_1_read[4] = delay_sr_U863_rdata;
assign op_hcompute_conv1_stencil_1_read[3] = delay_sr_U871_rdata;
assign op_hcompute_conv1_stencil_1_read[2] = delay_sr_U858_rdata;
assign op_hcompute_conv1_stencil_1_read[1] = delay_sr_U866_rdata;
assign op_hcompute_conv1_stencil_1_read[0] = delay_sr_U874_rdata;
endmodule

module delay__U840 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U841_in;
wire _U841_clk;
wire [15:0] _U841_out;
wire [15:0] _U842_in;
wire _U842_clk;
wire [15:0] _U842_out;
wire [15:0] _U843_in;
wire _U843_clk;
assign _U841_in = wdata;
assign _U841_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U841 (
    .in(_U841_in),
    .clk(_U841_clk),
    .out(_U841_out)
);
assign _U842_in = _U841_out;
assign _U842_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U842 (
    .in(_U842_in),
    .clk(_U842_clk),
    .out(_U842_out)
);
assign _U843_in = _U842_out;
assign _U843_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U843 (
    .in(_U843_in),
    .clk(_U843_clk),
    .out(rdata)
);
endmodule

module delay__U834 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U835_in;
wire _U835_clk;
wire [15:0] _U835_out;
wire [15:0] _U836_in;
wire _U836_clk;
wire [15:0] _U836_out;
wire [15:0] _U837_in;
wire _U837_clk;
wire [15:0] _U837_out;
wire [15:0] _U838_in;
wire _U838_clk;
assign _U835_in = wdata;
assign _U835_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U835 (
    .in(_U835_in),
    .clk(_U835_clk),
    .out(_U835_out)
);
assign _U836_in = _U835_out;
assign _U836_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U836 (
    .in(_U836_in),
    .clk(_U836_clk),
    .out(_U836_out)
);
assign _U837_in = _U836_out;
assign _U837_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U837 (
    .in(_U837_in),
    .clk(_U837_clk),
    .out(_U837_out)
);
assign _U838_in = _U837_out;
assign _U838_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U838 (
    .in(_U838_in),
    .clk(_U838_clk),
    .out(rdata)
);
endmodule

module delay__U829 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U830_in;
wire _U830_clk;
wire [15:0] _U830_out;
wire [15:0] _U831_in;
wire _U831_clk;
wire [15:0] _U831_out;
wire [15:0] _U832_in;
wire _U832_clk;
assign _U830_in = wdata;
assign _U830_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U830 (
    .in(_U830_in),
    .clk(_U830_clk),
    .out(_U830_out)
);
assign _U831_in = _U830_out;
assign _U831_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U831 (
    .in(_U831_in),
    .clk(_U831_clk),
    .out(_U831_out)
);
assign _U832_in = _U831_out;
assign _U832_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U832 (
    .in(_U832_in),
    .clk(_U832_clk),
    .out(rdata)
);
endmodule

module delay__U826 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U827_in;
wire _U827_clk;
assign _U827_in = wdata;
assign _U827_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U827 (
    .in(_U827_in),
    .clk(_U827_clk),
    .out(rdata)
);
endmodule

module delay__U823 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U824_in;
wire _U824_clk;
assign _U824_in = wdata;
assign _U824_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U824 (
    .in(_U824_in),
    .clk(_U824_clk),
    .out(rdata)
);
endmodule

module delay__U818 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U819_in;
wire _U819_clk;
assign _U819_in = wdata;
assign _U819_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U819 (
    .in(_U819_in),
    .clk(_U819_clk),
    .out(rdata)
);
endmodule

module delay__U815 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U816_in;
wire _U816_clk;
assign _U816_in = wdata;
assign _U816_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U816 (
    .in(_U816_in),
    .clk(_U816_clk),
    .out(rdata)
);
endmodule

module delay__U810 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U811_in;
wire _U811_clk;
assign _U811_in = wdata;
assign _U811_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U811 (
    .in(_U811_in),
    .clk(_U811_clk),
    .out(rdata)
);
endmodule

module delay__U807 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U808_in;
wire _U808_clk;
assign _U808_in = wdata;
assign _U808_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U808 (
    .in(_U808_in),
    .clk(_U808_clk),
    .out(rdata)
);
endmodule

module delay__U798 (
    input clk,
    input [15:0] wdata,
    output [15:0] rdata,
    input rst_n,
    input flush
);
wire [15:0] _U799_in;
wire _U799_clk;
wire [15:0] _U799_out;
wire [15:0] _U800_in;
wire _U800_clk;
wire [15:0] _U800_out;
wire [15:0] _U801_in;
wire _U801_clk;
wire [15:0] _U801_out;
wire [15:0] _U802_in;
wire _U802_clk;
wire [15:0] _U802_out;
wire [15:0] _U803_in;
wire _U803_clk;
wire [15:0] _U803_out;
wire [15:0] _U804_in;
wire _U804_clk;
wire [15:0] _U804_out;
wire [15:0] _U805_in;
wire _U805_clk;
assign _U799_in = wdata;
assign _U799_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U799 (
    .in(_U799_in),
    .clk(_U799_clk),
    .out(_U799_out)
);
assign _U800_in = _U799_out;
assign _U800_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U800 (
    .in(_U800_in),
    .clk(_U800_clk),
    .out(_U800_out)
);
assign _U801_in = _U800_out;
assign _U801_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U801 (
    .in(_U801_in),
    .clk(_U801_clk),
    .out(_U801_out)
);
assign _U802_in = _U801_out;
assign _U802_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U802 (
    .in(_U802_in),
    .clk(_U802_clk),
    .out(_U802_out)
);
assign _U803_in = _U802_out;
assign _U803_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U803 (
    .in(_U803_in),
    .clk(_U803_clk),
    .out(_U803_out)
);
assign _U804_in = _U803_out;
assign _U804_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U804 (
    .in(_U804_in),
    .clk(_U804_clk),
    .out(_U804_out)
);
assign _U805_in = _U804_out;
assign _U805_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U805 (
    .in(_U805_in),
    .clk(_U805_clk),
    .out(rdata)
);
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

module hcompute_conv2_stencil (
    output [15:0] out_conv2_stencil
);
assign out_conv2_stencil = 16'h0000;
endmodule

module cu_op_hcompute_conv2_stencil (
    input clk,
    output [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0]
);
wire [15:0] inner_compute_out_conv2_stencil;
hcompute_conv2_stencil inner_compute (
    .out_conv2_stencil(inner_compute_out_conv2_stencil)
);
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0] = inner_compute_out_conv2_stencil;
endmodule

module hcompute_conv1_stencil (
    output [15:0] out_conv1_stencil
);
assign out_conv1_stencil = 16'h0000;
endmodule

module cu_op_hcompute_conv1_stencil (
    input clk,
    output [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0]
);
wire [15:0] inner_compute_out_conv1_stencil;
hcompute_conv1_stencil inner_compute (
    .out_conv1_stencil(inner_compute_out_conv1_stencil)
);
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0] = inner_compute_out_conv1_stencil;
endmodule

module hcompute_conv2_stencil_1 (
    output [15:0] out_conv2_stencil,
    input [15:0] in0_conv1_stencil [8:0],
    input [15:0] in1_conv2_stencil [0:0]
);
assign out_conv2_stencil = 16'((16'(in0_conv1_stencil[1] * 16'h0021)) + (16'(in1_conv2_stencil[0] + (16'((16'((16'(in0_conv1_stencil[2] * 16'h0002)) + (16'(in0_conv1_stencil[3] + (16'((16'(in0_conv1_stencil[4] * 16'h0002)) + (16'((16'(in0_conv1_stencil[5] * 16'h0004)) + (16'((16'(in0_conv1_stencil[6] * 16'h0002)) + (16'(in0_conv1_stencil[7] + (16'(in0_conv1_stencil[8] + (16'(in0_conv1_stencil[0] * 16'h0002)))))))))))))))) * 16'h0021)))));
endmodule

module cu_op_hcompute_conv2_stencil_1 (
    input clk,
    input [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0],
    input [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0],
    output [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_conv2_stencil;
wire [15:0] inner_compute_in0_conv1_stencil [8:0];
wire [15:0] inner_compute_in1_conv2_stencil [0:0];
assign inner_compute_in0_conv1_stencil[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign inner_compute_in0_conv1_stencil[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign inner_compute_in0_conv1_stencil[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign inner_compute_in0_conv1_stencil[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign inner_compute_in0_conv1_stencil[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign inner_compute_in0_conv1_stencil[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign inner_compute_in0_conv1_stencil[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign inner_compute_in0_conv1_stencil[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
assign inner_compute_in1_conv2_stencil[0] = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0];
hcompute_conv2_stencil_1 inner_compute (
    .out_conv2_stencil(inner_compute_out_conv2_stencil),
    .in0_conv1_stencil(inner_compute_in0_conv1_stencil),
    .in1_conv2_stencil(inner_compute_in1_conv2_stencil)
);
assign conv2_stencil_op_hcompute_conv2_stencil_1_write[0] = inner_compute_out_conv2_stencil;
endmodule

module hcompute_conv1_stencil_1 (
    output [15:0] out_conv1_stencil,
    input [15:0] in0_conv1_stencil [0:0],
    input [15:0] in1_hw_input_global_wrapper_stencil [8:0]
);
assign out_conv1_stencil = 16'(in1_hw_input_global_wrapper_stencil[0] + (16'(in0_conv1_stencil[0] + (16'((16'(in1_hw_input_global_wrapper_stencil[1] * 16'h0002)) + (16'(in1_hw_input_global_wrapper_stencil[2] + (16'((16'(in1_hw_input_global_wrapper_stencil[3] * 16'h0002)) + (16'((16'(in1_hw_input_global_wrapper_stencil[4] * 16'h0004)) + (16'((16'(in1_hw_input_global_wrapper_stencil[5] * 16'h0002)) + (16'(in1_hw_input_global_wrapper_stencil[6] + (16'(in1_hw_input_global_wrapper_stencil[7] + (16'(in1_hw_input_global_wrapper_stencil[8] * 16'h0002)))))))))))))))))));
endmodule

module cu_op_hcompute_conv1_stencil_1 (
    input clk,
    input [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0],
    input [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0],
    output [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0]
);
wire [15:0] inner_compute_out_conv1_stencil;
wire [15:0] inner_compute_in0_conv1_stencil [0:0];
wire [15:0] inner_compute_in1_hw_input_global_wrapper_stencil [8:0];
assign inner_compute_in0_conv1_stencil[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
assign inner_compute_in1_hw_input_global_wrapper_stencil[8] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8];
assign inner_compute_in1_hw_input_global_wrapper_stencil[7] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7];
assign inner_compute_in1_hw_input_global_wrapper_stencil[6] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6];
assign inner_compute_in1_hw_input_global_wrapper_stencil[5] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5];
assign inner_compute_in1_hw_input_global_wrapper_stencil[4] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4];
assign inner_compute_in1_hw_input_global_wrapper_stencil[3] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3];
assign inner_compute_in1_hw_input_global_wrapper_stencil[2] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2];
assign inner_compute_in1_hw_input_global_wrapper_stencil[1] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1];
assign inner_compute_in1_hw_input_global_wrapper_stencil[0] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0];
hcompute_conv1_stencil_1 inner_compute (
    .out_conv1_stencil(inner_compute_out_conv1_stencil),
    .in0_conv1_stencil(inner_compute_in0_conv1_stencil),
    .in1_hw_input_global_wrapper_stencil(inner_compute_in1_hw_input_global_wrapper_stencil)
);
assign conv1_stencil_op_hcompute_conv1_stencil_1_write[0] = inner_compute_out_conv1_stencil;
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

module conv2_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv2_stencil_1_write_wen,
    input [15:0] op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv2_stencil_1_write [0:0],
    input op_hcompute_hw_output_stencil_read_ren,
    input [15:0] op_hcompute_hw_output_stencil_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_hw_output_stencil_read [0:0]
);
wire delay_sr_U839_clk;
wire [15:0] delay_sr_U839_wdata;
wire [15:0] delay_sr_U839_rdata;
wire delay_sr_U839_rst_n;
wire delay_sr_U839_flush;
assign delay_sr_U839_clk = clk;
assign delay_sr_U839_wdata = op_hcompute_conv2_stencil_1_write[0];
assign delay_sr_U839_rst_n = rst_n;
assign delay_sr_U839_flush = flush;
delay__U834 delay_sr_U839 (
    .clk(delay_sr_U839_clk),
    .wdata(delay_sr_U839_wdata),
    .rdata(delay_sr_U839_rdata),
    .rst_n(delay_sr_U839_rst_n),
    .flush(delay_sr_U839_flush)
);
assign op_hcompute_hw_output_stencil_read[0] = delay_sr_U839_rdata;
endmodule

module conv2_stencil_clkwrk_dsa1_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv2_stencil_1_read_ren,
    input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv2_stencil_1_read [0:0],
    input op_hcompute_conv2_stencil_write_wen,
    input [15:0] op_hcompute_conv2_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv2_stencil_write [0:0]
);
wire delay_sr_U844_clk;
wire [15:0] delay_sr_U844_wdata;
wire [15:0] delay_sr_U844_rdata;
wire delay_sr_U844_rst_n;
wire delay_sr_U844_flush;
assign delay_sr_U844_clk = clk;
assign delay_sr_U844_wdata = op_hcompute_conv2_stencil_write[0];
assign delay_sr_U844_rst_n = rst_n;
assign delay_sr_U844_flush = flush;
delay__U840 delay_sr_U844 (
    .clk(delay_sr_U844_clk),
    .wdata(delay_sr_U844_wdata),
    .rdata(delay_sr_U844_rdata),
    .rst_n(delay_sr_U844_rst_n),
    .flush(delay_sr_U844_flush)
);
assign op_hcompute_conv2_stencil_1_read[0] = delay_sr_U844_rdata;
endmodule

module conv1_stencil_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv1_stencil_1_write_wen,
    input [15:0] op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv1_stencil_1_write [0:0],
    input op_hcompute_conv2_stencil_1_read_ren,
    input [15:0] op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv2_stencil_1_read [8:0]
);
wire delay_sr_U806_clk;
wire [15:0] delay_sr_U806_wdata;
wire [15:0] delay_sr_U806_rdata;
wire delay_sr_U806_rst_n;
wire delay_sr_U806_flush;
wire delay_sr_U809_clk;
wire [15:0] delay_sr_U809_wdata;
wire [15:0] delay_sr_U809_rdata;
wire delay_sr_U809_rst_n;
wire delay_sr_U809_flush;
wire delay_sr_U812_clk;
wire [15:0] delay_sr_U812_wdata;
wire [15:0] delay_sr_U812_rdata;
wire delay_sr_U812_rst_n;
wire delay_sr_U812_flush;
wire delay_sr_U814_clk;
wire [15:0] delay_sr_U814_wdata;
wire [15:0] delay_sr_U814_rdata;
wire delay_sr_U814_rst_n;
wire delay_sr_U814_flush;
wire delay_sr_U817_clk;
wire [15:0] delay_sr_U817_wdata;
wire [15:0] delay_sr_U817_rdata;
wire delay_sr_U817_rst_n;
wire delay_sr_U817_flush;
wire delay_sr_U820_clk;
wire [15:0] delay_sr_U820_wdata;
wire [15:0] delay_sr_U820_rdata;
wire delay_sr_U820_rst_n;
wire delay_sr_U820_flush;
wire delay_sr_U822_clk;
wire [15:0] delay_sr_U822_wdata;
wire [15:0] delay_sr_U822_rdata;
wire delay_sr_U822_rst_n;
wire delay_sr_U822_flush;
wire delay_sr_U825_clk;
wire [15:0] delay_sr_U825_wdata;
wire [15:0] delay_sr_U825_rdata;
wire delay_sr_U825_rst_n;
wire delay_sr_U825_flush;
wire delay_sr_U828_clk;
wire [15:0] delay_sr_U828_wdata;
wire [15:0] delay_sr_U828_rdata;
wire delay_sr_U828_rst_n;
wire delay_sr_U828_flush;
assign delay_sr_U806_clk = clk;
assign delay_sr_U806_wdata = op_hcompute_conv1_stencil_1_write[0];
assign delay_sr_U806_rst_n = rst_n;
assign delay_sr_U806_flush = flush;
delay__U798 delay_sr_U806 (
    .clk(delay_sr_U806_clk),
    .wdata(delay_sr_U806_wdata),
    .rdata(delay_sr_U806_rdata),
    .rst_n(delay_sr_U806_rst_n),
    .flush(delay_sr_U806_flush)
);
assign delay_sr_U809_clk = clk;
assign delay_sr_U809_wdata = delay_sr_U806_rdata;
assign delay_sr_U809_rst_n = rst_n;
assign delay_sr_U809_flush = flush;
delay__U807 delay_sr_U809 (
    .clk(delay_sr_U809_clk),
    .wdata(delay_sr_U809_wdata),
    .rdata(delay_sr_U809_rdata),
    .rst_n(delay_sr_U809_rst_n),
    .flush(delay_sr_U809_flush)
);
assign delay_sr_U812_clk = clk;
assign delay_sr_U812_wdata = delay_sr_U809_rdata;
assign delay_sr_U812_rst_n = rst_n;
assign delay_sr_U812_flush = flush;
delay__U810 delay_sr_U812 (
    .clk(delay_sr_U812_clk),
    .wdata(delay_sr_U812_wdata),
    .rdata(delay_sr_U812_rdata),
    .rst_n(delay_sr_U812_rst_n),
    .flush(delay_sr_U812_flush)
);
assign delay_sr_U814_clk = clk;
assign delay_sr_U814_wdata = delay_sr_U812_rdata;
assign delay_sr_U814_rst_n = rst_n;
assign delay_sr_U814_flush = flush;
memtile_long_delay__U813 delay_sr_U814 (
    .clk(delay_sr_U814_clk),
    .wdata(delay_sr_U814_wdata),
    .rdata(delay_sr_U814_rdata),
    .rst_n(delay_sr_U814_rst_n),
    .flush(delay_sr_U814_flush)
);
assign delay_sr_U817_clk = clk;
assign delay_sr_U817_wdata = delay_sr_U814_rdata;
assign delay_sr_U817_rst_n = rst_n;
assign delay_sr_U817_flush = flush;
delay__U815 delay_sr_U817 (
    .clk(delay_sr_U817_clk),
    .wdata(delay_sr_U817_wdata),
    .rdata(delay_sr_U817_rdata),
    .rst_n(delay_sr_U817_rst_n),
    .flush(delay_sr_U817_flush)
);
assign delay_sr_U820_clk = clk;
assign delay_sr_U820_wdata = delay_sr_U817_rdata;
assign delay_sr_U820_rst_n = rst_n;
assign delay_sr_U820_flush = flush;
delay__U818 delay_sr_U820 (
    .clk(delay_sr_U820_clk),
    .wdata(delay_sr_U820_wdata),
    .rdata(delay_sr_U820_rdata),
    .rst_n(delay_sr_U820_rst_n),
    .flush(delay_sr_U820_flush)
);
assign delay_sr_U822_clk = clk;
assign delay_sr_U822_wdata = delay_sr_U820_rdata;
assign delay_sr_U822_rst_n = rst_n;
assign delay_sr_U822_flush = flush;
memtile_long_delay__U821 delay_sr_U822 (
    .clk(delay_sr_U822_clk),
    .wdata(delay_sr_U822_wdata),
    .rdata(delay_sr_U822_rdata),
    .rst_n(delay_sr_U822_rst_n),
    .flush(delay_sr_U822_flush)
);
assign delay_sr_U825_clk = clk;
assign delay_sr_U825_wdata = delay_sr_U822_rdata;
assign delay_sr_U825_rst_n = rst_n;
assign delay_sr_U825_flush = flush;
delay__U823 delay_sr_U825 (
    .clk(delay_sr_U825_clk),
    .wdata(delay_sr_U825_wdata),
    .rdata(delay_sr_U825_rdata),
    .rst_n(delay_sr_U825_rst_n),
    .flush(delay_sr_U825_flush)
);
assign delay_sr_U828_clk = clk;
assign delay_sr_U828_wdata = delay_sr_U825_rdata;
assign delay_sr_U828_rst_n = rst_n;
assign delay_sr_U828_flush = flush;
delay__U826 delay_sr_U828 (
    .clk(delay_sr_U828_clk),
    .wdata(delay_sr_U828_wdata),
    .rdata(delay_sr_U828_rdata),
    .rst_n(delay_sr_U828_rst_n),
    .flush(delay_sr_U828_flush)
);
assign op_hcompute_conv2_stencil_1_read[8] = delay_sr_U806_rdata;
assign op_hcompute_conv2_stencil_1_read[7] = delay_sr_U812_rdata;
assign op_hcompute_conv2_stencil_1_read[6] = delay_sr_U814_rdata;
assign op_hcompute_conv2_stencil_1_read[5] = delay_sr_U817_rdata;
assign op_hcompute_conv2_stencil_1_read[4] = delay_sr_U820_rdata;
assign op_hcompute_conv2_stencil_1_read[3] = delay_sr_U822_rdata;
assign op_hcompute_conv2_stencil_1_read[2] = delay_sr_U825_rdata;
assign op_hcompute_conv2_stencil_1_read[1] = delay_sr_U828_rdata;
assign op_hcompute_conv2_stencil_1_read[0] = delay_sr_U809_rdata;
endmodule

module conv1_stencil_clkwrk_dsa0_ub (
    input clk,
    input flush,
    input rst_n,
    input op_hcompute_conv1_stencil_1_read_ren,
    input [15:0] op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0],
    output [15:0] op_hcompute_conv1_stencil_1_read [0:0],
    input op_hcompute_conv1_stencil_write_wen,
    input [15:0] op_hcompute_conv1_stencil_write_ctrl_vars [2:0],
    input [15:0] op_hcompute_conv1_stencil_write [0:0]
);
wire delay_sr_U833_clk;
wire [15:0] delay_sr_U833_wdata;
wire [15:0] delay_sr_U833_rdata;
wire delay_sr_U833_rst_n;
wire delay_sr_U833_flush;
assign delay_sr_U833_clk = clk;
assign delay_sr_U833_wdata = op_hcompute_conv1_stencil_write[0];
assign delay_sr_U833_rst_n = rst_n;
assign delay_sr_U833_flush = flush;
delay__U829 delay_sr_U833 (
    .clk(delay_sr_U833_clk),
    .wdata(delay_sr_U833_wdata),
    .rdata(delay_sr_U833_rdata),
    .rst_n(delay_sr_U833_rst_n),
    .flush(delay_sr_U833_flush)
);
assign op_hcompute_conv1_stencil_1_read[0] = delay_sr_U833_rdata;
endmodule

module array_delay_U794 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U795_in;
wire _U795_clk;
wire [15:0] _U795_out;
wire [15:0] _U796_in;
wire _U796_clk;
wire [15:0] _U796_out;
wire [15:0] _U797_in;
wire _U797_clk;
wire [15:0] _U797_out;
assign _U795_in = in[0];
assign _U795_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U795 (
    .in(_U795_in),
    .clk(_U795_clk),
    .out(_U795_out)
);
assign _U796_in = in[1];
assign _U796_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U796 (
    .in(_U796_in),
    .clk(_U796_clk),
    .out(_U796_out)
);
assign _U797_in = in[2];
assign _U797_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U797 (
    .in(_U797_in),
    .clk(_U797_clk),
    .out(_U797_out)
);
assign out[2] = _U797_out;
assign out[1] = _U796_out;
assign out[0] = _U795_out;
endmodule

module array_delay_U790 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U791_in;
wire _U791_clk;
wire [15:0] _U791_out;
wire [15:0] _U792_in;
wire _U792_clk;
wire [15:0] _U792_out;
wire [15:0] _U793_in;
wire _U793_clk;
wire [15:0] _U793_out;
assign _U791_in = in[0];
assign _U791_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U791 (
    .in(_U791_in),
    .clk(_U791_clk),
    .out(_U791_out)
);
assign _U792_in = in[1];
assign _U792_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U792 (
    .in(_U792_in),
    .clk(_U792_clk),
    .out(_U792_out)
);
assign _U793_in = in[2];
assign _U793_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U793 (
    .in(_U793_in),
    .clk(_U793_clk),
    .out(_U793_out)
);
assign out[2] = _U793_out;
assign out[1] = _U792_out;
assign out[0] = _U791_out;
endmodule

module array_delay_U769 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U770_in;
wire _U770_clk;
wire [15:0] _U770_out;
wire [15:0] _U771_in;
wire _U771_clk;
wire [15:0] _U771_out;
wire [15:0] _U772_in;
wire _U772_clk;
wire [15:0] _U772_out;
assign _U770_in = in[0];
assign _U770_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U770 (
    .in(_U770_in),
    .clk(_U770_clk),
    .out(_U770_out)
);
assign _U771_in = in[1];
assign _U771_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U771 (
    .in(_U771_in),
    .clk(_U771_clk),
    .out(_U771_out)
);
assign _U772_in = in[2];
assign _U772_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U772 (
    .in(_U772_in),
    .clk(_U772_clk),
    .out(_U772_out)
);
assign out[2] = _U772_out;
assign out[1] = _U771_out;
assign out[0] = _U770_out;
endmodule

module array_delay_U765 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U766_in;
wire _U766_clk;
wire [15:0] _U766_out;
wire [15:0] _U767_in;
wire _U767_clk;
wire [15:0] _U767_out;
wire [15:0] _U768_in;
wire _U768_clk;
wire [15:0] _U768_out;
assign _U766_in = in[0];
assign _U766_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U766 (
    .in(_U766_in),
    .clk(_U766_clk),
    .out(_U766_out)
);
assign _U767_in = in[1];
assign _U767_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U767 (
    .in(_U767_in),
    .clk(_U767_clk),
    .out(_U767_out)
);
assign _U768_in = in[2];
assign _U768_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U768 (
    .in(_U768_in),
    .clk(_U768_clk),
    .out(_U768_out)
);
assign out[2] = _U768_out;
assign out[1] = _U767_out;
assign out[0] = _U766_out;
endmodule

module array_delay_U744 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U745_in;
wire _U745_clk;
wire [15:0] _U745_out;
wire [15:0] _U746_in;
wire _U746_clk;
wire [15:0] _U746_out;
wire [15:0] _U747_in;
wire _U747_clk;
wire [15:0] _U747_out;
assign _U745_in = in[0];
assign _U745_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U745 (
    .in(_U745_in),
    .clk(_U745_clk),
    .out(_U745_out)
);
assign _U746_in = in[1];
assign _U746_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U746 (
    .in(_U746_in),
    .clk(_U746_clk),
    .out(_U746_out)
);
assign _U747_in = in[2];
assign _U747_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U747 (
    .in(_U747_in),
    .clk(_U747_clk),
    .out(_U747_out)
);
assign out[2] = _U747_out;
assign out[1] = _U746_out;
assign out[0] = _U745_out;
endmodule

module array_delay_U740 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U741_in;
wire _U741_clk;
wire [15:0] _U741_out;
wire [15:0] _U742_in;
wire _U742_clk;
wire [15:0] _U742_out;
wire [15:0] _U743_in;
wire _U743_clk;
wire [15:0] _U743_out;
assign _U741_in = in[0];
assign _U741_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U741 (
    .in(_U741_in),
    .clk(_U741_clk),
    .out(_U741_out)
);
assign _U742_in = in[1];
assign _U742_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U742 (
    .in(_U742_in),
    .clk(_U742_clk),
    .out(_U742_out)
);
assign _U743_in = in[2];
assign _U743_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U743 (
    .in(_U743_in),
    .clk(_U743_clk),
    .out(_U743_out)
);
assign out[2] = _U743_out;
assign out[1] = _U742_out;
assign out[0] = _U741_out;
endmodule

module array_delay_U719 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U720_in;
wire _U720_clk;
wire [15:0] _U720_out;
wire [15:0] _U721_in;
wire _U721_clk;
wire [15:0] _U721_out;
wire [15:0] _U722_in;
wire _U722_clk;
wire [15:0] _U722_out;
assign _U720_in = in[0];
assign _U720_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U720 (
    .in(_U720_in),
    .clk(_U720_clk),
    .out(_U720_out)
);
assign _U721_in = in[1];
assign _U721_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U721 (
    .in(_U721_in),
    .clk(_U721_clk),
    .out(_U721_out)
);
assign _U722_in = in[2];
assign _U722_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U722 (
    .in(_U722_in),
    .clk(_U722_clk),
    .out(_U722_out)
);
assign out[2] = _U722_out;
assign out[1] = _U721_out;
assign out[0] = _U720_out;
endmodule

module array_delay_U715 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U716_in;
wire _U716_clk;
wire [15:0] _U716_out;
wire [15:0] _U717_in;
wire _U717_clk;
wire [15:0] _U717_out;
wire [15:0] _U718_in;
wire _U718_clk;
wire [15:0] _U718_out;
assign _U716_in = in[0];
assign _U716_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U716 (
    .in(_U716_in),
    .clk(_U716_clk),
    .out(_U716_out)
);
assign _U717_in = in[1];
assign _U717_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U717 (
    .in(_U717_in),
    .clk(_U717_clk),
    .out(_U717_out)
);
assign _U718_in = in[2];
assign _U718_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U718 (
    .in(_U718_in),
    .clk(_U718_clk),
    .out(_U718_out)
);
assign out[2] = _U718_out;
assign out[1] = _U717_out;
assign out[0] = _U716_out;
endmodule

module array_delay_U694 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U695_in;
wire _U695_clk;
wire [15:0] _U695_out;
wire [15:0] _U696_in;
wire _U696_clk;
wire [15:0] _U696_out;
wire [15:0] _U697_in;
wire _U697_clk;
wire [15:0] _U697_out;
assign _U695_in = in[0];
assign _U695_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U695 (
    .in(_U695_in),
    .clk(_U695_clk),
    .out(_U695_out)
);
assign _U696_in = in[1];
assign _U696_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U696 (
    .in(_U696_in),
    .clk(_U696_clk),
    .out(_U696_out)
);
assign _U697_in = in[2];
assign _U697_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U697 (
    .in(_U697_in),
    .clk(_U697_clk),
    .out(_U697_out)
);
assign out[2] = _U697_out;
assign out[1] = _U696_out;
assign out[0] = _U695_out;
endmodule

module array_delay_U690 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U691_in;
wire _U691_clk;
wire [15:0] _U691_out;
wire [15:0] _U692_in;
wire _U692_clk;
wire [15:0] _U692_out;
wire [15:0] _U693_in;
wire _U693_clk;
wire [15:0] _U693_out;
assign _U691_in = in[0];
assign _U691_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U691 (
    .in(_U691_in),
    .clk(_U691_clk),
    .out(_U691_out)
);
assign _U692_in = in[1];
assign _U692_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U692 (
    .in(_U692_in),
    .clk(_U692_clk),
    .out(_U692_out)
);
assign _U693_in = in[2];
assign _U693_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U693 (
    .in(_U693_in),
    .clk(_U693_clk),
    .out(_U693_out)
);
assign out[2] = _U693_out;
assign out[1] = _U692_out;
assign out[0] = _U691_out;
endmodule

module array_delay_U669 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U670_in;
wire _U670_clk;
wire [15:0] _U670_out;
wire [15:0] _U671_in;
wire _U671_clk;
wire [15:0] _U671_out;
wire [15:0] _U672_in;
wire _U672_clk;
wire [15:0] _U672_out;
assign _U670_in = in[0];
assign _U670_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U670 (
    .in(_U670_in),
    .clk(_U670_clk),
    .out(_U670_out)
);
assign _U671_in = in[1];
assign _U671_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U671 (
    .in(_U671_in),
    .clk(_U671_clk),
    .out(_U671_out)
);
assign _U672_in = in[2];
assign _U672_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U672 (
    .in(_U672_in),
    .clk(_U672_clk),
    .out(_U672_out)
);
assign out[2] = _U672_out;
assign out[1] = _U671_out;
assign out[0] = _U670_out;
endmodule

module array_delay_U665 (
    input clk,
    input [15:0] in [2:0],
    output [15:0] out [2:0]
);
wire [15:0] _U666_in;
wire _U666_clk;
wire [15:0] _U666_out;
wire [15:0] _U667_in;
wire _U667_clk;
wire [15:0] _U667_out;
wire [15:0] _U668_in;
wire _U668_clk;
wire [15:0] _U668_out;
assign _U666_in = in[0];
assign _U666_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U666 (
    .in(_U666_in),
    .clk(_U666_clk),
    .out(_U666_out)
);
assign _U667_in = in[1];
assign _U667_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U667 (
    .in(_U667_in),
    .clk(_U667_clk),
    .out(_U667_out)
);
assign _U668_in = in[2];
assign _U668_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U668 (
    .in(_U668_in),
    .clk(_U668_clk),
    .out(_U668_out)
);
assign out[2] = _U668_out;
assign out[1] = _U667_out;
assign out[0] = _U666_out;
endmodule

module aff__U91 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0002);
endmodule

module affine_controller__U90 (
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
aff__U91 affine_func (
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

module aff__U774 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U773 (
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
aff__U774 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U749 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U748 (
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
aff__U749 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U73 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U72 (
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
aff__U73 affine_func (
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

module aff__U724 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U723 (
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
aff__U724 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U699 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U698 (
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
aff__U699 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U674 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U673 (
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
aff__U674 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U649 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h0000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U648 (
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
aff__U649 affine_func (
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

module aff__U631 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U630 (
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
aff__U631 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U613 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U612 (
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
aff__U613 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U595 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U594 (
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
aff__U595 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U577 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U576 (
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
aff__U577 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U559 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0116);
endmodule

module affine_controller__U558 (
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
aff__U559 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U55 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U54 (
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
aff__U55 affine_func (
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

module aff__U541 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0115);
endmodule

module affine_controller__U540 (
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
aff__U541 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U523 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0113);
endmodule

module affine_controller__U522 (
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
aff__U523 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U505 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U504 (
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
aff__U505 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U487 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U486 (
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
aff__U487 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U469 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U468 (
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
aff__U469 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U451 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U450 (
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
aff__U451 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U433 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0111);
endmodule

module affine_controller__U432 (
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
aff__U433 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U415 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0112);
endmodule

module affine_controller__U414 (
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
aff__U415 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U397 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0111);
endmodule

module affine_controller__U396 (
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
aff__U397 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U379 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0110);
endmodule

module affine_controller__U378 (
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
aff__U379 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U37 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U36 (
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
aff__U37 affine_func (
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

module aff__U361 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U360 (
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
aff__U361 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U343 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U342 (
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
aff__U343 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U325 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h010f);
endmodule

module affine_controller__U324 (
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
aff__U325 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003b;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003b;
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

module aff__U307 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h008a);
endmodule

module affine_controller__U306 (
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
aff__U307 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U289 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U288 (
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
aff__U289 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U271 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U270 (
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
aff__U271 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U253 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U252 (
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
aff__U253 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U235 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U234 (
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
aff__U235 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U217 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0088);
endmodule

module affine_controller__U216 (
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
aff__U217 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U199 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0089);
endmodule

module affine_controller__U198 (
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
aff__U199 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U19 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
endmodule

module affine_controller__U18 (
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
aff__U19 affine_func (
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

module aff__U181 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0088);
endmodule

module affine_controller__U180 (
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
aff__U181 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U163 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0087);
endmodule

module affine_controller__U162 (
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
aff__U163 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U145 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U144 (
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
aff__U145 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U127 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U126 (
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
aff__U127 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U109 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0086);
endmodule

module affine_controller__U108 (
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
aff__U109 affine_func (
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
assign d_1_at_max_out = d_1_reg_out == 16'h003d;
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
assign d_2_at_max_out = d_2_reg_out == 16'h003d;
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

module aff__U1 (
    output [15:0] out,
    input [15:0] d [2:0]
);
assign out = 16'((16'((16'((16'(16'h1000 * d[0])) + (16'(16'h0040 * d[1])))) + (16'(16'h0001 * d[2])))) + 16'h0001);
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

module cascade (
    input clk,
    input rst_n,
    input flush,
    output hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid,
    input [15:0] hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0],
    output hw_output_stencil_op_hcompute_hw_output_stencil_write_en,
    output [15:0] hw_output_stencil_op_hcompute_hw_output_stencil_write [0:0]
);
wire [15:0] _U875_in;
wire _U875_clk;
wire [15:0] _U875_out;
wire conv1_stencil_clk;
wire conv1_stencil_flush;
wire conv1_stencil_rst_n;
wire conv1_stencil_op_hcompute_conv1_stencil_1_write_wen;
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire conv1_stencil_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire conv1_stencil_clkwrk_dsa0_clk;
wire conv1_stencil_clkwrk_dsa0_flush;
wire conv1_stencil_clkwrk_dsa0_rst_n;
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen;
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars [2:0];
wire [15:0] conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire conv2_stencil_clk;
wire conv2_stencil_flush;
wire conv2_stencil_rst_n;
wire conv2_stencil_op_hcompute_conv2_stencil_1_write_wen;
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire conv2_stencil_op_hcompute_hw_output_stencil_read_ren;
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
wire conv2_stencil_clkwrk_dsa1_clk;
wire conv2_stencil_clkwrk_dsa1_flush;
wire conv2_stencil_clkwrk_dsa1_rst_n;
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen;
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars [2:0];
wire [15:0] conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire hw_input_global_wrapper_stencil_clk;
wire hw_input_global_wrapper_stencil_flush;
wire hw_input_global_wrapper_stencil_rst_n;
wire hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
wire hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen;
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars [2:0];
wire [15:0] hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_conv1_stencil_clk;
wire [15:0] op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write [0:0];
wire op_hcompute_conv1_stencil_1_clk;
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read [0:0];
wire [15:0] op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read [8:0];
wire [15:0] op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write [0:0];
wire op_hcompute_conv1_stencil_1_exe_start_clk;
wire op_hcompute_conv1_stencil_1_exe_start_in;
wire op_hcompute_conv1_stencil_1_exe_start_out;
wire op_hcompute_conv1_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_clk;
wire op_hcompute_conv1_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U197_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U197_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U197_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U215_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U215_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U215_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U233_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U233_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U233_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U251_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U251_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U251_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U269_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U269_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U269_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U287_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U287_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U287_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U305_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U305_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U305_d [2:0];
wire op_hcompute_conv1_stencil_1_port_controller_U323_clk;
wire op_hcompute_conv1_stencil_1_port_controller_U323_valid;
wire [15:0] op_hcompute_conv1_stencil_1_port_controller_U323_d [2:0];
wire op_hcompute_conv1_stencil_1_read_start;
wire op_hcompute_conv1_stencil_1_write_start;
wire op_hcompute_conv1_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_exe_start_clk;
wire op_hcompute_conv1_stencil_exe_start_in;
wire op_hcompute_conv1_stencil_exe_start_out;
wire op_hcompute_conv1_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv1_stencil_port_controller_clk;
wire op_hcompute_conv1_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U125_clk;
wire op_hcompute_conv1_stencil_port_controller_U125_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U125_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U143_clk;
wire op_hcompute_conv1_stencil_port_controller_U143_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U143_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U161_clk;
wire op_hcompute_conv1_stencil_port_controller_U161_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U161_d [2:0];
wire op_hcompute_conv1_stencil_port_controller_U179_clk;
wire op_hcompute_conv1_stencil_port_controller_U179_valid;
wire [15:0] op_hcompute_conv1_stencil_port_controller_U179_d [2:0];
wire op_hcompute_conv1_stencil_read_start;
wire op_hcompute_conv1_stencil_write_start;
wire op_hcompute_conv1_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv1_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_clk;
wire [15:0] op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write [0:0];
wire op_hcompute_conv2_stencil_1_clk;
wire [15:0] op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read [8:0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read [0:0];
wire [15:0] op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write [0:0];
wire op_hcompute_conv2_stencil_1_exe_start_clk;
wire op_hcompute_conv2_stencil_1_exe_start_in;
wire op_hcompute_conv2_stencil_1_exe_start_out;
wire op_hcompute_conv2_stencil_1_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_1_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_clk;
wire op_hcompute_conv2_stencil_1_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U413_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U413_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U413_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U431_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U431_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U431_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U449_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U449_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U449_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U467_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U467_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U467_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U485_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U485_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U485_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U503_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U503_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U503_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U521_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U521_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U521_d [2:0];
wire op_hcompute_conv2_stencil_1_port_controller_U539_clk;
wire op_hcompute_conv2_stencil_1_port_controller_U539_valid;
wire [15:0] op_hcompute_conv2_stencil_1_port_controller_U539_d [2:0];
wire op_hcompute_conv2_stencil_1_read_start;
wire op_hcompute_conv2_stencil_1_write_start;
wire op_hcompute_conv2_stencil_1_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_1_write_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_exe_start_clk;
wire op_hcompute_conv2_stencil_exe_start_in;
wire op_hcompute_conv2_stencil_exe_start_out;
wire op_hcompute_conv2_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_conv2_stencil_port_controller_clk;
wire op_hcompute_conv2_stencil_port_controller_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U341_clk;
wire op_hcompute_conv2_stencil_port_controller_U341_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U341_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U359_clk;
wire op_hcompute_conv2_stencil_port_controller_U359_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U359_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U377_clk;
wire op_hcompute_conv2_stencil_port_controller_U377_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U377_d [2:0];
wire op_hcompute_conv2_stencil_port_controller_U395_clk;
wire op_hcompute_conv2_stencil_port_controller_U395_valid;
wire [15:0] op_hcompute_conv2_stencil_port_controller_U395_d [2:0];
wire op_hcompute_conv2_stencil_read_start;
wire op_hcompute_conv2_stencil_write_start;
wire op_hcompute_conv2_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_conv2_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read [0:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write [0:0];
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_in;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
wire op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk;
wire op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d [2:0];
wire op_hcompute_hw_input_global_wrapper_stencil_read_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start;
wire op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out [2:0];
wire op_hcompute_hw_output_stencil_clk;
wire [15:0] op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read [0:0];
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
wire op_hcompute_hw_output_stencil_port_controller_U557_clk;
wire op_hcompute_hw_output_stencil_port_controller_U557_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U557_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U575_clk;
wire op_hcompute_hw_output_stencil_port_controller_U575_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U575_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U593_clk;
wire op_hcompute_hw_output_stencil_port_controller_U593_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U593_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U611_clk;
wire op_hcompute_hw_output_stencil_port_controller_U611_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U611_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U629_clk;
wire op_hcompute_hw_output_stencil_port_controller_U629_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U629_d [2:0];
wire op_hcompute_hw_output_stencil_port_controller_U647_clk;
wire op_hcompute_hw_output_stencil_port_controller_U647_valid;
wire [15:0] op_hcompute_hw_output_stencil_port_controller_U647_d [2:0];
wire op_hcompute_hw_output_stencil_read_start;
wire op_hcompute_hw_output_stencil_write_start;
wire op_hcompute_hw_output_stencil_write_start_control_vars_clk;
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_in [2:0];
wire [15:0] op_hcompute_hw_output_stencil_write_start_control_vars_out [2:0];
assign _U875_in = hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0];
assign _U875_clk = clk;
mantle_reg__has_clrFalse__has_enFalse__has_rstFalse__width16 #(
    .init(16'h0000)
) _U875 (
    .in(_U875_in),
    .clk(_U875_clk),
    .out(_U875_out)
);
assign conv1_stencil_clk = clk;
assign conv1_stencil_flush = flush;
assign conv1_stencil_rst_n = rst_n;
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_wen = op_hcompute_conv1_stencil_1_write_start;
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[2] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[2];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[1] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[1];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars[0] = op_hcompute_conv1_stencil_1_write_start_control_vars_out[0];
assign conv1_stencil_op_hcompute_conv1_stencil_1_write[0] = op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write[0];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ren = op_hcompute_conv2_stencil_1_read_start;
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
conv1_stencil_ub conv1_stencil (
    .clk(conv1_stencil_clk),
    .flush(conv1_stencil_flush),
    .rst_n(conv1_stencil_rst_n),
    .op_hcompute_conv1_stencil_1_write_wen(conv1_stencil_op_hcompute_conv1_stencil_1_write_wen),
    .op_hcompute_conv1_stencil_1_write_ctrl_vars(conv1_stencil_op_hcompute_conv1_stencil_1_write_ctrl_vars),
    .op_hcompute_conv1_stencil_1_write(conv1_stencil_op_hcompute_conv1_stencil_1_write),
    .op_hcompute_conv2_stencil_1_read_ren(conv1_stencil_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv1_stencil_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv1_stencil_op_hcompute_conv2_stencil_1_read)
);
assign conv1_stencil_clkwrk_dsa0_clk = clk;
assign conv1_stencil_clkwrk_dsa0_flush = flush;
assign conv1_stencil_clkwrk_dsa0_rst_n = rst_n;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren = op_hcompute_conv1_stencil_1_read_start;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen = op_hcompute_conv1_stencil_write_start;
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[2] = op_hcompute_conv1_stencil_write_start_control_vars_out[2];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[1] = op_hcompute_conv1_stencil_write_start_control_vars_out[1];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars[0] = op_hcompute_conv1_stencil_write_start_control_vars_out[0];
assign conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0] = op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write[0];
conv1_stencil_clkwrk_dsa0_ub conv1_stencil_clkwrk_dsa0 (
    .clk(conv1_stencil_clkwrk_dsa0_clk),
    .flush(conv1_stencil_clkwrk_dsa0_flush),
    .rst_n(conv1_stencil_clkwrk_dsa0_rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ren),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_conv1_stencil_write_wen(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_wen),
    .op_hcompute_conv1_stencil_write_ctrl_vars(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write_ctrl_vars),
    .op_hcompute_conv1_stencil_write(conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
assign conv2_stencil_clk = clk;
assign conv2_stencil_flush = flush;
assign conv2_stencil_rst_n = rst_n;
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_wen = op_hcompute_conv2_stencil_1_write_start;
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[2] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[2];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[1] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[1];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars[0] = op_hcompute_conv2_stencil_1_write_start_control_vars_out[0];
assign conv2_stencil_op_hcompute_conv2_stencil_1_write[0] = op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write[0];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ren = op_hcompute_hw_output_stencil_read_start;
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
conv2_stencil_ub conv2_stencil (
    .clk(conv2_stencil_clk),
    .flush(conv2_stencil_flush),
    .rst_n(conv2_stencil_rst_n),
    .op_hcompute_conv2_stencil_1_write_wen(conv2_stencil_op_hcompute_conv2_stencil_1_write_wen),
    .op_hcompute_conv2_stencil_1_write_ctrl_vars(conv2_stencil_op_hcompute_conv2_stencil_1_write_ctrl_vars),
    .op_hcompute_conv2_stencil_1_write(conv2_stencil_op_hcompute_conv2_stencil_1_write),
    .op_hcompute_hw_output_stencil_read_ren(conv2_stencil_op_hcompute_hw_output_stencil_read_ren),
    .op_hcompute_hw_output_stencil_read_ctrl_vars(conv2_stencil_op_hcompute_hw_output_stencil_read_ctrl_vars),
    .op_hcompute_hw_output_stencil_read(conv2_stencil_op_hcompute_hw_output_stencil_read)
);
assign conv2_stencil_clkwrk_dsa1_clk = clk;
assign conv2_stencil_clkwrk_dsa1_flush = flush;
assign conv2_stencil_clkwrk_dsa1_rst_n = rst_n;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren = op_hcompute_conv2_stencil_1_read_start;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen = op_hcompute_conv2_stencil_write_start;
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[2] = op_hcompute_conv2_stencil_write_start_control_vars_out[2];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[1] = op_hcompute_conv2_stencil_write_start_control_vars_out[1];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars[0] = op_hcompute_conv2_stencil_write_start_control_vars_out[0];
assign conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0] = op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write[0];
conv2_stencil_clkwrk_dsa1_ub conv2_stencil_clkwrk_dsa1 (
    .clk(conv2_stencil_clkwrk_dsa1_clk),
    .flush(conv2_stencil_clkwrk_dsa1_flush),
    .rst_n(conv2_stencil_clkwrk_dsa1_rst_n),
    .op_hcompute_conv2_stencil_1_read_ren(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ren),
    .op_hcompute_conv2_stencil_1_read_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read_ctrl_vars),
    .op_hcompute_conv2_stencil_1_read(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .op_hcompute_conv2_stencil_write_wen(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_wen),
    .op_hcompute_conv2_stencil_write_ctrl_vars(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write_ctrl_vars),
    .op_hcompute_conv2_stencil_write(conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
assign hw_input_global_wrapper_stencil_clk = clk;
assign hw_input_global_wrapper_stencil_flush = flush;
assign hw_input_global_wrapper_stencil_rst_n = rst_n;
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren = op_hcompute_conv1_stencil_1_read_start;
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen = op_hcompute_hw_input_global_wrapper_stencil_write_start;
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[2] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[2];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[1] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[1];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars[0] = op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out[0];
assign hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0] = op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write[0];
hw_input_global_wrapper_stencil_ub hw_input_global_wrapper_stencil (
    .clk(hw_input_global_wrapper_stencil_clk),
    .flush(hw_input_global_wrapper_stencil_flush),
    .rst_n(hw_input_global_wrapper_stencil_rst_n),
    .op_hcompute_conv1_stencil_1_read_ren(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ren),
    .op_hcompute_conv1_stencil_1_read_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read_ctrl_vars),
    .op_hcompute_conv1_stencil_1_read(hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .op_hcompute_hw_input_global_wrapper_stencil_write_wen(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_wen),
    .op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write_ctrl_vars),
    .op_hcompute_hw_input_global_wrapper_stencil_write(hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_conv1_stencil_clk = clk;
cu_op_hcompute_conv1_stencil op_hcompute_conv1_stencil (
    .clk(op_hcompute_conv1_stencil_clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write(op_hcompute_conv1_stencil_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_write)
);
assign op_hcompute_conv1_stencil_1_clk = clk;
assign op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0] = conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read[0];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[8];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[7];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[6];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[5];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[4];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[3];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[2];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[1];
assign op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0] = hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read[0];
cu_op_hcompute_conv1_stencil_1 op_hcompute_conv1_stencil_1 (
    .clk(op_hcompute_conv1_stencil_1_clk),
    .conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_conv1_stencil_clkwrk_dsa0_op_hcompute_conv1_stencil_1_read),
    .hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read(op_hcompute_conv1_stencil_1_hw_input_global_wrapper_stencil_op_hcompute_conv1_stencil_1_read),
    .conv1_stencil_op_hcompute_conv1_stencil_1_write(op_hcompute_conv1_stencil_1_conv1_stencil_op_hcompute_conv1_stencil_1_write)
);
assign op_hcompute_conv1_stencil_1_exe_start_clk = clk;
assign op_hcompute_conv1_stencil_1_exe_start_in = op_hcompute_conv1_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_1_exe_start (
    .clk(op_hcompute_conv1_stencil_1_exe_start_clk),
    .in(op_hcompute_conv1_stencil_1_exe_start_in),
    .out(op_hcompute_conv1_stencil_1_exe_start_out)
);
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U719 op_hcompute_conv1_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_conv1_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_1_port_controller_clk = clk;
affine_controller__U698 op_hcompute_conv1_stencil_1_port_controller (
    .clk(op_hcompute_conv1_stencil_1_port_controller_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U197_clk = clk;
affine_controller__U180 op_hcompute_conv1_stencil_1_port_controller_U197 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U197_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U197_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U197_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U215_clk = clk;
affine_controller__U198 op_hcompute_conv1_stencil_1_port_controller_U215 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U215_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U215_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U215_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U233_clk = clk;
affine_controller__U216 op_hcompute_conv1_stencil_1_port_controller_U233 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U233_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U233_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U233_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U251_clk = clk;
affine_controller__U234 op_hcompute_conv1_stencil_1_port_controller_U251 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U251_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U251_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U251_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U269_clk = clk;
affine_controller__U252 op_hcompute_conv1_stencil_1_port_controller_U269 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U269_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U269_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U269_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U287_clk = clk;
affine_controller__U270 op_hcompute_conv1_stencil_1_port_controller_U287 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U287_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U287_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U287_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U305_clk = clk;
affine_controller__U288 op_hcompute_conv1_stencil_1_port_controller_U305 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U305_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U305_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U305_d)
);
assign op_hcompute_conv1_stencil_1_port_controller_U323_clk = clk;
affine_controller__U306 op_hcompute_conv1_stencil_1_port_controller_U323 (
    .clk(op_hcompute_conv1_stencil_1_port_controller_U323_clk),
    .valid(op_hcompute_conv1_stencil_1_port_controller_U323_valid),
    .d(op_hcompute_conv1_stencil_1_port_controller_U323_d)
);
assign op_hcompute_conv1_stencil_1_read_start = op_hcompute_conv1_stencil_1_port_controller_valid;
assign op_hcompute_conv1_stencil_1_write_start = op_hcompute_conv1_stencil_1_exe_start_out;
assign op_hcompute_conv1_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_1_port_controller_d[2];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_1_port_controller_d[1];
assign op_hcompute_conv1_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_1_port_controller_d[0];
array_delay_U715 op_hcompute_conv1_stencil_1_write_start_control_vars (
    .clk(op_hcompute_conv1_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_exe_start_clk = clk;
assign op_hcompute_conv1_stencil_exe_start_in = op_hcompute_conv1_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv1_stencil_exe_start (
    .clk(op_hcompute_conv1_stencil_exe_start_clk),
    .in(op_hcompute_conv1_stencil_exe_start_in),
    .out(op_hcompute_conv1_stencil_exe_start_out)
);
assign op_hcompute_conv1_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_exe_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U694 op_hcompute_conv1_stencil_exe_start_control_vars (
    .clk(op_hcompute_conv1_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_exe_start_control_vars_out)
);
assign op_hcompute_conv1_stencil_port_controller_clk = clk;
affine_controller__U673 op_hcompute_conv1_stencil_port_controller (
    .clk(op_hcompute_conv1_stencil_port_controller_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_valid),
    .d(op_hcompute_conv1_stencil_port_controller_d)
);
assign op_hcompute_conv1_stencil_port_controller_U125_clk = clk;
affine_controller__U108 op_hcompute_conv1_stencil_port_controller_U125 (
    .clk(op_hcompute_conv1_stencil_port_controller_U125_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U125_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U125_d)
);
assign op_hcompute_conv1_stencil_port_controller_U143_clk = clk;
affine_controller__U126 op_hcompute_conv1_stencil_port_controller_U143 (
    .clk(op_hcompute_conv1_stencil_port_controller_U143_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U143_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U143_d)
);
assign op_hcompute_conv1_stencil_port_controller_U161_clk = clk;
affine_controller__U144 op_hcompute_conv1_stencil_port_controller_U161 (
    .clk(op_hcompute_conv1_stencil_port_controller_U161_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U161_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U161_d)
);
assign op_hcompute_conv1_stencil_port_controller_U179_clk = clk;
affine_controller__U162 op_hcompute_conv1_stencil_port_controller_U179 (
    .clk(op_hcompute_conv1_stencil_port_controller_U179_clk),
    .valid(op_hcompute_conv1_stencil_port_controller_U179_valid),
    .d(op_hcompute_conv1_stencil_port_controller_U179_d)
);
assign op_hcompute_conv1_stencil_read_start = op_hcompute_conv1_stencil_port_controller_valid;
assign op_hcompute_conv1_stencil_write_start = op_hcompute_conv1_stencil_exe_start_out;
assign op_hcompute_conv1_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_conv1_stencil_write_start_control_vars_in[2] = op_hcompute_conv1_stencil_port_controller_d[2];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[1] = op_hcompute_conv1_stencil_port_controller_d[1];
assign op_hcompute_conv1_stencil_write_start_control_vars_in[0] = op_hcompute_conv1_stencil_port_controller_d[0];
array_delay_U690 op_hcompute_conv1_stencil_write_start_control_vars (
    .clk(op_hcompute_conv1_stencil_write_start_control_vars_clk),
    .in(op_hcompute_conv1_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv1_stencil_write_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_clk = clk;
cu_op_hcompute_conv2_stencil op_hcompute_conv2_stencil (
    .clk(op_hcompute_conv2_stencil_clk),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write(op_hcompute_conv2_stencil_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_write)
);
assign op_hcompute_conv2_stencil_1_clk = clk;
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[8] = conv1_stencil_op_hcompute_conv2_stencil_1_read[8];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[7] = conv1_stencil_op_hcompute_conv2_stencil_1_read[7];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[6] = conv1_stencil_op_hcompute_conv2_stencil_1_read[6];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[5] = conv1_stencil_op_hcompute_conv2_stencil_1_read[5];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[4] = conv1_stencil_op_hcompute_conv2_stencil_1_read[4];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[3] = conv1_stencil_op_hcompute_conv2_stencil_1_read[3];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[2] = conv1_stencil_op_hcompute_conv2_stencil_1_read[2];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[1] = conv1_stencil_op_hcompute_conv2_stencil_1_read[1];
assign op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read[0] = conv1_stencil_op_hcompute_conv2_stencil_1_read[0];
assign op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0] = conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read[0];
cu_op_hcompute_conv2_stencil_1 op_hcompute_conv2_stencil_1 (
    .clk(op_hcompute_conv2_stencil_1_clk),
    .conv1_stencil_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv1_stencil_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read(op_hcompute_conv2_stencil_1_conv2_stencil_clkwrk_dsa1_op_hcompute_conv2_stencil_1_read),
    .conv2_stencil_op_hcompute_conv2_stencil_1_write(op_hcompute_conv2_stencil_1_conv2_stencil_op_hcompute_conv2_stencil_1_write)
);
assign op_hcompute_conv2_stencil_1_exe_start_clk = clk;
assign op_hcompute_conv2_stencil_1_exe_start_in = op_hcompute_conv2_stencil_1_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_1_exe_start (
    .clk(op_hcompute_conv2_stencil_1_exe_start_clk),
    .in(op_hcompute_conv2_stencil_1_exe_start_in),
    .out(op_hcompute_conv2_stencil_1_exe_start_out)
);
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U769 op_hcompute_conv2_stencil_1_exe_start_control_vars (
    .clk(op_hcompute_conv2_stencil_1_exe_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_1_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_exe_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_1_port_controller_clk = clk;
affine_controller__U748 op_hcompute_conv2_stencil_1_port_controller (
    .clk(op_hcompute_conv2_stencil_1_port_controller_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U413_clk = clk;
affine_controller__U396 op_hcompute_conv2_stencil_1_port_controller_U413 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U413_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U413_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U413_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U431_clk = clk;
affine_controller__U414 op_hcompute_conv2_stencil_1_port_controller_U431 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U431_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U431_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U431_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U449_clk = clk;
affine_controller__U432 op_hcompute_conv2_stencil_1_port_controller_U449 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U449_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U449_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U449_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U467_clk = clk;
affine_controller__U450 op_hcompute_conv2_stencil_1_port_controller_U467 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U467_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U467_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U467_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U485_clk = clk;
affine_controller__U468 op_hcompute_conv2_stencil_1_port_controller_U485 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U485_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U485_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U485_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U503_clk = clk;
affine_controller__U486 op_hcompute_conv2_stencil_1_port_controller_U503 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U503_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U503_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U503_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U521_clk = clk;
affine_controller__U504 op_hcompute_conv2_stencil_1_port_controller_U521 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U521_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U521_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U521_d)
);
assign op_hcompute_conv2_stencil_1_port_controller_U539_clk = clk;
affine_controller__U522 op_hcompute_conv2_stencil_1_port_controller_U539 (
    .clk(op_hcompute_conv2_stencil_1_port_controller_U539_clk),
    .valid(op_hcompute_conv2_stencil_1_port_controller_U539_valid),
    .d(op_hcompute_conv2_stencil_1_port_controller_U539_d)
);
assign op_hcompute_conv2_stencil_1_read_start = op_hcompute_conv2_stencil_1_port_controller_valid;
assign op_hcompute_conv2_stencil_1_write_start = op_hcompute_conv2_stencil_1_exe_start_out;
assign op_hcompute_conv2_stencil_1_write_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_1_port_controller_d[2];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_1_port_controller_d[1];
assign op_hcompute_conv2_stencil_1_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_1_port_controller_d[0];
array_delay_U765 op_hcompute_conv2_stencil_1_write_start_control_vars (
    .clk(op_hcompute_conv2_stencil_1_write_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_1_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_1_write_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_exe_start_clk = clk;
assign op_hcompute_conv2_stencil_exe_start_in = op_hcompute_conv2_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_conv2_stencil_exe_start (
    .clk(op_hcompute_conv2_stencil_exe_start_clk),
    .in(op_hcompute_conv2_stencil_exe_start_in),
    .out(op_hcompute_conv2_stencil_exe_start_out)
);
assign op_hcompute_conv2_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_exe_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U744 op_hcompute_conv2_stencil_exe_start_control_vars (
    .clk(op_hcompute_conv2_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_exe_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_exe_start_control_vars_out)
);
assign op_hcompute_conv2_stencil_port_controller_clk = clk;
affine_controller__U723 op_hcompute_conv2_stencil_port_controller (
    .clk(op_hcompute_conv2_stencil_port_controller_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_valid),
    .d(op_hcompute_conv2_stencil_port_controller_d)
);
assign op_hcompute_conv2_stencil_port_controller_U341_clk = clk;
affine_controller__U324 op_hcompute_conv2_stencil_port_controller_U341 (
    .clk(op_hcompute_conv2_stencil_port_controller_U341_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U341_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U341_d)
);
assign op_hcompute_conv2_stencil_port_controller_U359_clk = clk;
affine_controller__U342 op_hcompute_conv2_stencil_port_controller_U359 (
    .clk(op_hcompute_conv2_stencil_port_controller_U359_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U359_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U359_d)
);
assign op_hcompute_conv2_stencil_port_controller_U377_clk = clk;
affine_controller__U360 op_hcompute_conv2_stencil_port_controller_U377 (
    .clk(op_hcompute_conv2_stencil_port_controller_U377_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U377_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U377_d)
);
assign op_hcompute_conv2_stencil_port_controller_U395_clk = clk;
affine_controller__U378 op_hcompute_conv2_stencil_port_controller_U395 (
    .clk(op_hcompute_conv2_stencil_port_controller_U395_clk),
    .valid(op_hcompute_conv2_stencil_port_controller_U395_valid),
    .d(op_hcompute_conv2_stencil_port_controller_U395_d)
);
assign op_hcompute_conv2_stencil_read_start = op_hcompute_conv2_stencil_port_controller_valid;
assign op_hcompute_conv2_stencil_write_start = op_hcompute_conv2_stencil_exe_start_out;
assign op_hcompute_conv2_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_conv2_stencil_write_start_control_vars_in[2] = op_hcompute_conv2_stencil_port_controller_d[2];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[1] = op_hcompute_conv2_stencil_port_controller_d[1];
assign op_hcompute_conv2_stencil_write_start_control_vars_in[0] = op_hcompute_conv2_stencil_port_controller_d[0];
array_delay_U740 op_hcompute_conv2_stencil_write_start_control_vars (
    .clk(op_hcompute_conv2_stencil_write_start_control_vars_clk),
    .in(op_hcompute_conv2_stencil_write_start_control_vars_in),
    .out(op_hcompute_conv2_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read[0] = _U875_out;
cu_op_hcompute_hw_input_global_wrapper_stencil op_hcompute_hw_input_global_wrapper_stencil (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_clk),
    .hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read(op_hcompute_hw_input_global_wrapper_stencil_hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read),
    .hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write(op_hcompute_hw_input_global_wrapper_stencil_hw_input_global_wrapper_stencil_op_hcompute_hw_input_global_wrapper_stencil_write)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_in = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
corebit_reg #(
    .clk_posedge(1'b1),
    .init(1'b0)
) op_hcompute_hw_input_global_wrapper_stencil_exe_start (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U669 op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk = clk;
affine_controller__U648 op_hcompute_hw_input_global_wrapper_stencil_port_controller (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk = clk;
affine_controller__U90 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U107_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk = clk;
affine_controller__U0 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U17_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk = clk;
affine_controller__U18 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U35_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk = clk;
affine_controller__U36 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U53_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk = clk;
affine_controller__U54 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U71_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk = clk;
affine_controller__U72 op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89 (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_clk),
    .valid(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_valid),
    .d(op_hcompute_hw_input_global_wrapper_stencil_port_controller_U89_d)
);
assign op_hcompute_hw_input_global_wrapper_stencil_read_start = op_hcompute_hw_input_global_wrapper_stencil_port_controller_valid;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start = op_hcompute_hw_input_global_wrapper_stencil_exe_start_out;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[2] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[2];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[1] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[1];
assign op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in[0] = op_hcompute_hw_input_global_wrapper_stencil_port_controller_d[0];
array_delay_U665 op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_input_global_wrapper_stencil_write_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_clk = clk;
assign op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read[0] = conv2_stencil_op_hcompute_hw_output_stencil_read[0];
cu_op_hcompute_hw_output_stencil op_hcompute_hw_output_stencil (
    .clk(op_hcompute_hw_output_stencil_clk),
    .conv2_stencil_op_hcompute_hw_output_stencil_read(op_hcompute_hw_output_stencil_conv2_stencil_op_hcompute_hw_output_stencil_read),
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
array_delay_U794 op_hcompute_hw_output_stencil_exe_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_exe_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_exe_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_exe_start_control_vars_out)
);
assign op_hcompute_hw_output_stencil_port_controller_clk = clk;
affine_controller__U773 op_hcompute_hw_output_stencil_port_controller (
    .clk(op_hcompute_hw_output_stencil_port_controller_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U557_clk = clk;
affine_controller__U540 op_hcompute_hw_output_stencil_port_controller_U557 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U557_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U557_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U557_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U575_clk = clk;
affine_controller__U558 op_hcompute_hw_output_stencil_port_controller_U575 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U575_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U575_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U575_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U593_clk = clk;
affine_controller__U576 op_hcompute_hw_output_stencil_port_controller_U593 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U593_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U593_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U593_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U611_clk = clk;
affine_controller__U594 op_hcompute_hw_output_stencil_port_controller_U611 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U611_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U611_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U611_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U629_clk = clk;
affine_controller__U612 op_hcompute_hw_output_stencil_port_controller_U629 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U629_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U629_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U629_d)
);
assign op_hcompute_hw_output_stencil_port_controller_U647_clk = clk;
affine_controller__U630 op_hcompute_hw_output_stencil_port_controller_U647 (
    .clk(op_hcompute_hw_output_stencil_port_controller_U647_clk),
    .valid(op_hcompute_hw_output_stencil_port_controller_U647_valid),
    .d(op_hcompute_hw_output_stencil_port_controller_U647_d)
);
assign op_hcompute_hw_output_stencil_read_start = op_hcompute_hw_output_stencil_port_controller_valid;
assign op_hcompute_hw_output_stencil_write_start = op_hcompute_hw_output_stencil_exe_start_out;
assign op_hcompute_hw_output_stencil_write_start_control_vars_clk = clk;
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[2] = op_hcompute_hw_output_stencil_port_controller_d[2];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[1] = op_hcompute_hw_output_stencil_port_controller_d[1];
assign op_hcompute_hw_output_stencil_write_start_control_vars_in[0] = op_hcompute_hw_output_stencil_port_controller_d[0];
array_delay_U790 op_hcompute_hw_output_stencil_write_start_control_vars (
    .clk(op_hcompute_hw_output_stencil_write_start_control_vars_clk),
    .in(op_hcompute_hw_output_stencil_write_start_control_vars_in),
    .out(op_hcompute_hw_output_stencil_write_start_control_vars_out)
);
assign hw_input_stencil_op_hcompute_hw_input_global_wrapper_stencil_read_valid = op_hcompute_hw_input_global_wrapper_stencil_read_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write_en = op_hcompute_hw_output_stencil_write_start;
assign hw_output_stencil_op_hcompute_hw_output_stencil_write[0] = op_hcompute_hw_output_stencil_hw_output_stencil_op_hcompute_hw_output_stencil_write[0];
endmodule

