#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  bfloat16_t _hw_input_stencil_1 = bfloat16_t::make_from_bits(hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  bfloat16_t _hw_input_stencil_2 = bfloat16_t::make_from_bits(hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  bfloat16_t _hw_input_stencil_3 = bfloat16_t::make_from_bits(hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: d.stencil((d_s0_dx + 2), (d_s0_dy + 2), (d_s0_x + 2), (d_s0_y + 2)) = 0.000000h
hw_uint<16> hcompute_d_stencil() {
  bfloat16_t _889 = bfloat_from_bits(0 /* 0 */);
  return _889;
}

//store is: d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) = (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) + ((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
hw_uint<16> hcompute_d_stencil_1(hw_uint<16>& d_stencil, hw_uint<96>& hw_input_global_wrapper_stencil) {
  bfloat16_t _d_stencil_1 = bfloat16_t::make_from_bits(d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_1 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());
  bfloat16_t _hw_input_global_wrapper_stencil_2 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<16, 31>());
  bfloat16_t _hw_input_global_wrapper_stencil_3 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<32, 47>());
  bfloat16_t _hw_input_global_wrapper_stencil_4 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<48, 63>());
  bfloat16_t _hw_input_global_wrapper_stencil_5 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<64, 79>());
  bfloat16_t _hw_input_global_wrapper_stencil_6 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<80, 95>());

  bfloat16_t _896 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_2;
  bfloat16_t _897 = _896 * _896;
  bfloat16_t _898 = _hw_input_global_wrapper_stencil_3 - _hw_input_global_wrapper_stencil_4;
  bfloat16_t _899 = _898 * _898;
  bfloat16_t _900 = _hw_input_global_wrapper_stencil_5 - _hw_input_global_wrapper_stencil_6;
  bfloat16_t _901 = _900 * _900;
  bfloat16_t _902 = _d_stencil_1 + _901;
  bfloat16_t _903 = _899 + _902;
  bfloat16_t _904 = _897 + _903;
  return _904;
}

//store is: blur_d_y.stencil((blur_d_y_s0_dx + 2), (blur_d_y_s0_dy + 2), (blur_d_y_s0_x + 2), blur_d_y_s0_y) = 0.000000h
hw_uint<16> hcompute_blur_d_y_stencil() {
  bfloat16_t _940 = bfloat_from_bits(0 /* 0 */);
  return _940;
}

//store is: blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) = (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 3)) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 2)) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 1)) + (blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y)))))
hw_uint<16> hcompute_blur_d_y_stencil_1(hw_uint<16>& blur_d_y_stencil, hw_uint<64>& d_stencil) {
  bfloat16_t _blur_d_y_stencil_1 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<0, 15>());

  bfloat16_t _d_stencil_2 = bfloat16_t::make_from_bits(d_stencil.extract<0, 15>());
  bfloat16_t _d_stencil_3 = bfloat16_t::make_from_bits(d_stencil.extract<16, 31>());
  bfloat16_t _d_stencil_4 = bfloat16_t::make_from_bits(d_stencil.extract<32, 47>());
  bfloat16_t _d_stencil_5 = bfloat16_t::make_from_bits(d_stencil.extract<48, 63>());

  bfloat16_t _946 = _blur_d_y_stencil_1 + _d_stencil_5;
  bfloat16_t _947 = _d_stencil_4 + _946;
  bfloat16_t _948 = _d_stencil_3 + _947;
  bfloat16_t _949 = _d_stencil_2 + _948;
  return _949;
}

//store is: blur_d.stencil((blur_d_s0_dx + 2), (blur_d_s0_dy + 2), blur_d_s0_x, blur_d_s0_y) = 0.000000h
hw_uint<16> hcompute_blur_d_stencil() {
  bfloat16_t _969 = bfloat_from_bits(0 /* 0 */);
  return _969;
}

//store is: blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) = (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 3), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 2), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 1), blur_d_s1_y) + (blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y)))))
hw_uint<16> hcompute_blur_d_stencil_1(hw_uint<16>& blur_d_stencil, hw_uint<64>& blur_d_y_stencil) {
  bfloat16_t _blur_d_stencil_1 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _blur_d_y_stencil_2 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<0, 15>());
  bfloat16_t _blur_d_y_stencil_3 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<16, 31>());
  bfloat16_t _blur_d_y_stencil_4 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<32, 47>());
  bfloat16_t _blur_d_y_stencil_5 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<48, 63>());

  bfloat16_t _974 = _blur_d_stencil_1 + _blur_d_y_stencil_5;
  bfloat16_t _975 = _blur_d_y_stencil_4 + _974;
  bfloat16_t _976 = _blur_d_y_stencil_3 + _975;
  bfloat16_t _977 = _blur_d_y_stencil_2 + _976;
  return _977;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil() {
  bfloat16_t _996 = bfloat_from_bits(0 /* 0 */);
  return _996;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_1, non_local_means_sum_s0_y_1, 1) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_1() {
  bfloat16_t _999 = bfloat_from_bits(0 /* 0 */);
  return _999;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_2, non_local_means_sum_s0_y_2, 2) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_2() {
  bfloat16_t _1002 = bfloat_from_bits(0 /* 0 */);
  return _1002;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_3, non_local_means_sum_s0_y_3, 3) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_3() {
  bfloat16_t _1005 = bfloat_from_bits(0 /* 0 */);
  return _1005;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (exp_bf16((blur_d.stencil((non_local_means_sum_s1_s_dom_x + 2), (non_local_means_sum_s1_s_dom_y + 2), non_local_means_sum_s1_x, non_local_means_sum_s1_y)*-1.414062h))*hw_input_global_wrapper.stencil(0, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 4), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 4))))
hw_uint<16> hcompute_non_local_means_sum_stencil_4(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_2 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_7 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_1 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1008 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1009 = _blur_d_stencil_2 * _1008;
  bfloat16_t _1010 = exp_bf16(_1009);
  bfloat16_t _1011 = _1010 * _hw_input_global_wrapper_stencil_7;
  bfloat16_t _1012 = _non_local_means_sum_stencil_1 + _1011;
  return _1012;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) + (exp_bf16((blur_d.stencil((non_local_means_sum_s1_s_dom_x_1 + 2), (non_local_means_sum_s1_s_dom_y_1 + 2), non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1)*-1.414062h))*hw_input_global_wrapper.stencil(1, ((non_local_means_sum_s1_s_dom_x_1 + non_local_means_sum_s1_x_1) + 4), ((non_local_means_sum_s1_s_dom_y_1 + non_local_means_sum_s1_y_1) + 4))))
hw_uint<16> hcompute_non_local_means_sum_stencil_5(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_3 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_8 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_2 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1032 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1033 = _blur_d_stencil_3 * _1032;
  bfloat16_t _1034 = exp_bf16(_1033);
  bfloat16_t _1035 = _1034 * _hw_input_global_wrapper_stencil_8;
  bfloat16_t _1036 = _non_local_means_sum_stencil_2 + _1035;
  return _1036;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) + (exp_bf16((blur_d.stencil((non_local_means_sum_s1_s_dom_x_2 + 2), (non_local_means_sum_s1_s_dom_y_2 + 2), non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2)*-1.414062h))*hw_input_global_wrapper.stencil(2, ((non_local_means_sum_s1_s_dom_x_2 + non_local_means_sum_s1_x_2) + 4), ((non_local_means_sum_s1_s_dom_y_2 + non_local_means_sum_s1_y_2) + 4))))
hw_uint<16> hcompute_non_local_means_sum_stencil_6(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_4 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_9 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_3 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1056 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1057 = _blur_d_stencil_4 * _1056;
  bfloat16_t _1058 = exp_bf16(_1057);
  bfloat16_t _1059 = _1058 * _hw_input_global_wrapper_stencil_9;
  bfloat16_t _1060 = _non_local_means_sum_stencil_3 + _1059;
  return _1060;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_3, non_local_means_sum_s1_y_3, 3) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_3, non_local_means_sum_s1_y_3, 3) + exp_bf16((blur_d.stencil((non_local_means_sum_s1_s_dom_x_3 + 2), (non_local_means_sum_s1_s_dom_y_3 + 2), non_local_means_sum_s1_x_3, non_local_means_sum_s1_y_3)*-1.414062h)))
hw_uint<16> hcompute_non_local_means_sum_stencil_7(hw_uint<16>& blur_d_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_5 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_4 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1080 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1081 = _blur_d_stencil_5 * _1080;
  bfloat16_t _1082 = exp_bf16(_1081);
  bfloat16_t _1083 = _non_local_means_sum_stencil_4 + _1082;
  return _1083;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_5 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_6 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1096 = _non_local_means_sum_stencil_5 / _non_local_means_sum_stencil_6;
  bfloat16_t _1097 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1098 = min(_1096, _1097);
  bfloat16_t _1099 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1100 = max(_1098, _1099);
  bfloat16_t _1101 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1102 = _1100 * _1101;
  return _1102;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_7 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_8 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1119 = _non_local_means_sum_stencil_7 / _non_local_means_sum_stencil_8;
  bfloat16_t _1120 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1121 = min(_1119, _1120);
  bfloat16_t _1122 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1123 = max(_1121, _1122);
  bfloat16_t _1124 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1125 = _1123 * _1124;
  return _1125;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_10 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_9 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1142 = _non_local_means_sum_stencil_9 / _non_local_means_sum_stencil_10;
  bfloat16_t _1143 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1144 = min(_1142, _1143);
  bfloat16_t _1145 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1146 = max(_1144, _1145);
  bfloat16_t _1147 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1148 = _1146 * _1147;
  return _1148;
}

