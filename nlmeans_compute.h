#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  bfloat16_t _hw_input_stencil_1 = bfloat16_t::make_from_bits(hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  bfloat16_t _hw_input_stencil_2 = bfloat16_t::make_from_bits(hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 6), (hw_input_global_wrapper_s0_y + 6)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  bfloat16_t _hw_input_stencil_3 = bfloat16_t::make_from_bits(hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: d.stencil((d_s0_x + 3), (d_s0_y + 3), (d_s0_dx + 3), (d_s0_dy + 3)) = 0.000000h
hw_uint<16> hcompute_d_stencil() {
  bfloat16_t _889 = bfloat_from_bits(0 /* 0 */);
  return _889;
}

//store is: d.stencil((d_s1_x + 3), (d_s1_y + 3), (d_s1_dx + 3), (d_s1_dy + 3)) = (((hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (((hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))) + (d.stencil((d_s1_x + 3), (d_s1_y + 3), (d_s1_dx + 3), (d_s1_dy + 3)) + ((hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 6), (d_s1_y + 6)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 6), ((d_s1_dy + d_s1_y) + 6)))))))
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

//store is: blur_d_y.stencil((blur_d_y_s0_x + 3), blur_d_y_s0_y, (blur_d_y_s0_dx + 3), (blur_d_y_s0_dy + 3)) = 0.000000h
hw_uint<16> hcompute_blur_d_y_stencil() {
  bfloat16_t _940 = bfloat_from_bits(0 /* 0 */);
  return _940;
}

//store is: blur_d_y.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) = (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 6), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 5), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 4), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 3), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 2), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (d.stencil((blur_d_y_s1_x + 3), (blur_d_y_s1_y + 1), (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + (blur_d_y.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)) + d.stencil((blur_d_y_s1_x + 3), blur_d_y_s1_y, (blur_d_y_s1_dx + 3), (blur_d_y_s1_dy + 3)))))))))
hw_uint<16> hcompute_blur_d_y_stencil_1(hw_uint<16>& blur_d_y_stencil, hw_uint<112>& d_stencil) {
  bfloat16_t _blur_d_y_stencil_1 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<0, 15>());

  bfloat16_t _d_stencil_2 = bfloat16_t::make_from_bits(d_stencil.extract<0, 15>());
  bfloat16_t _d_stencil_3 = bfloat16_t::make_from_bits(d_stencil.extract<16, 31>());
  bfloat16_t _d_stencil_4 = bfloat16_t::make_from_bits(d_stencil.extract<32, 47>());
  bfloat16_t _d_stencil_5 = bfloat16_t::make_from_bits(d_stencil.extract<48, 63>());
  bfloat16_t _d_stencil_6 = bfloat16_t::make_from_bits(d_stencil.extract<64, 79>());
  bfloat16_t _d_stencil_7 = bfloat16_t::make_from_bits(d_stencil.extract<80, 95>());
  bfloat16_t _d_stencil_8 = bfloat16_t::make_from_bits(d_stencil.extract<96, 111>());

  bfloat16_t _946 = _blur_d_y_stencil_1 + _d_stencil_8;
  bfloat16_t _947 = _d_stencil_7 + _946;
  bfloat16_t _948 = _d_stencil_6 + _947;
  bfloat16_t _949 = _d_stencil_5 + _948;
  bfloat16_t _950 = _d_stencil_4 + _949;
  bfloat16_t _951 = _d_stencil_3 + _950;
  bfloat16_t _952 = _d_stencil_2 + _951;
  return _952;
}

//store is: blur_d.stencil(blur_d_s0_x, blur_d_s0_y, (blur_d_s0_dx + 3), (blur_d_s0_dy + 3)) = 0.000000h
hw_uint<16> hcompute_blur_d_stencil() {
  bfloat16_t _984 = bfloat_from_bits(0 /* 0 */);
  return _984;
}

//store is: blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) = (blur_d_y.stencil((blur_d_s1_x + 6), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 5), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 4), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 3), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 2), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d_y.stencil((blur_d_s1_x + 1), blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + (blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)) + blur_d_y.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 3), (blur_d_s1_dy + 3)))))))))
hw_uint<16> hcompute_blur_d_stencil_1(hw_uint<16>& blur_d_stencil, hw_uint<112>& blur_d_y_stencil) {
  bfloat16_t _blur_d_stencil_1 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _blur_d_y_stencil_2 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<0, 15>());
  bfloat16_t _blur_d_y_stencil_3 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<16, 31>());
  bfloat16_t _blur_d_y_stencil_4 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<32, 47>());
  bfloat16_t _blur_d_y_stencil_5 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<48, 63>());
  bfloat16_t _blur_d_y_stencil_6 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<64, 79>());
  bfloat16_t _blur_d_y_stencil_7 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<80, 95>());
  bfloat16_t _blur_d_y_stencil_8 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<96, 111>());

  bfloat16_t _989 = _blur_d_stencil_1 + _blur_d_y_stencil_8;
  bfloat16_t _990 = _blur_d_y_stencil_7 + _989;
  bfloat16_t _991 = _blur_d_y_stencil_6 + _990;
  bfloat16_t _992 = _blur_d_y_stencil_5 + _991;
  bfloat16_t _993 = _blur_d_y_stencil_4 + _992;
  bfloat16_t _994 = _blur_d_y_stencil_3 + _993;
  bfloat16_t _995 = _blur_d_y_stencil_2 + _994;
  return _995;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil() {
  bfloat16_t _1026 = bfloat_from_bits(0 /* 0 */);
  return _1026;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 1) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_1() {
  bfloat16_t _1029 = bfloat_from_bits(0 /* 0 */);
  return _1029;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 2) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_2() {
  bfloat16_t _1032 = bfloat_from_bits(0 /* 0 */);
  return _1032;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 3) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_3() {
  bfloat16_t _1035 = bfloat_from_bits(0 /* 0 */);
  return _1035;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h))*hw_input_global_wrapper.stencil(0, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6))))
hw_uint<16> hcompute_non_local_means_sum_stencil_4(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_2 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_7 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_1 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1038 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1039 = _blur_d_stencil_2 * _1038;
  bfloat16_t _1040 = exp_bf16(_1039);
  bfloat16_t _1041 = _1040 * _hw_input_global_wrapper_stencil_7;
  bfloat16_t _1042 = _non_local_means_sum_stencil_1 + _1041;
  return _1042;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h))*hw_input_global_wrapper.stencil(1, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6))))
hw_uint<16> hcompute_non_local_means_sum_stencil_5(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_3 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_8 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_2 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1062 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1063 = _blur_d_stencil_3 * _1062;
  bfloat16_t _1064 = exp_bf16(_1063);
  bfloat16_t _1065 = _1064 * _hw_input_global_wrapper_stencil_8;
  bfloat16_t _1066 = _non_local_means_sum_stencil_2 + _1065;
  return _1066;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h))*hw_input_global_wrapper.stencil(2, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 6), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 6))))
hw_uint<16> hcompute_non_local_means_sum_stencil_6(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_4 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_9 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_3 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1086 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1087 = _blur_d_stencil_4 * _1086;
  bfloat16_t _1088 = exp_bf16(_1087);
  bfloat16_t _1089 = _1088 * _hw_input_global_wrapper_stencil_9;
  bfloat16_t _1090 = _non_local_means_sum_stencil_3 + _1089;
  return _1090;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) + exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, (non_local_means_sum_s1_s_dom_x + 3), (non_local_means_sum_s1_s_dom_y + 3))*-1.414062h)))
hw_uint<16> hcompute_non_local_means_sum_stencil_7(hw_uint<16>& blur_d_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_5 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_4 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1110 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1111 = _blur_d_stencil_5 * _1110;
  bfloat16_t _1112 = exp_bf16(_1111);
  bfloat16_t _1113 = _non_local_means_sum_stencil_4 + _1112;
  return _1113;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_5 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_6 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1126 = _non_local_means_sum_stencil_5 / _non_local_means_sum_stencil_6;
  bfloat16_t _1127 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1128 = min(_1126, _1127);
  bfloat16_t _1129 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1130 = max(_1128, _1129);
  bfloat16_t _1131 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1132 = _1130 * _1131;
  return _1132;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_7 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_8 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1149 = _non_local_means_sum_stencil_7 / _non_local_means_sum_stencil_8;
  bfloat16_t _1150 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1151 = min(_1149, _1150);
  bfloat16_t _1152 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1153 = max(_1151, _1152);
  bfloat16_t _1154 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1155 = _1153 * _1154;
  return _1155;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_10 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_9 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1172 = _non_local_means_sum_stencil_9 / _non_local_means_sum_stencil_10;
  bfloat16_t _1173 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1174 = min(_1172, _1173);
  bfloat16_t _1175 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1176 = max(_1174, _1175);
  bfloat16_t _1177 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1178 = _1176 * _1177;
  return _1178;
}

