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

//store is: d.stencil((d_s0_x + 2), (d_s0_y + 2), (d_s0_dx + 2), (d_s0_dy + 2)) = 0.000000h
hw_uint<16> hcompute_d_stencil() {
  bfloat16_t _889 = bfloat_from_bits(0 /* 0 */);
  return _889;
}

//store is: d.stencil((d_s1_x + 2), (d_s1_y + 2), (d_s1_dx + 2), (d_s1_dy + 2)) = (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_x + 2), (d_s1_y + 2), (d_s1_dx + 2), (d_s1_dy + 2)) + ((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
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

//store is: blur_d_y.stencil((blur_d_y_s0_x + 2), blur_d_y_s0_y, (blur_d_y_s0_dx + 2), (blur_d_y_s0_dy + 2)) = 0.000000h
hw_uint<16> hcompute_blur_d_y_stencil() {
  bfloat16_t _940 = bfloat_from_bits(0 /* 0 */);
  return _940;
}

//store is: blur_d_y.stencil((blur_d_y_s1_x + 2), blur_d_y_s1_y, (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) = (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 4), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 3), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 2), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (d.stencil((blur_d_y_s1_x + 2), (blur_d_y_s1_y + 1), (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + (blur_d_y.stencil((blur_d_y_s1_x + 2), blur_d_y_s1_y, (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)) + d.stencil((blur_d_y_s1_x + 2), blur_d_y_s1_y, (blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2)))))))
hw_uint<16> hcompute_blur_d_y_stencil_1(hw_uint<16>& blur_d_y_stencil, hw_uint<80>& d_stencil) {
  bfloat16_t _blur_d_y_stencil_1 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<0, 15>());

  bfloat16_t _d_stencil_2 = bfloat16_t::make_from_bits(d_stencil.extract<0, 15>());
  bfloat16_t _d_stencil_3 = bfloat16_t::make_from_bits(d_stencil.extract<16, 31>());
  bfloat16_t _d_stencil_4 = bfloat16_t::make_from_bits(d_stencil.extract<32, 47>());
  bfloat16_t _d_stencil_5 = bfloat16_t::make_from_bits(d_stencil.extract<48, 63>());
  bfloat16_t _d_stencil_6 = bfloat16_t::make_from_bits(d_stencil.extract<64, 79>());

  bfloat16_t _946 = _blur_d_y_stencil_1 + _d_stencil_6;
  bfloat16_t _947 = _d_stencil_5 + _946;
  bfloat16_t _948 = _d_stencil_4 + _947;
  bfloat16_t _949 = _d_stencil_3 + _948;
  bfloat16_t _950 = _d_stencil_2 + _949;
  return _950;
}

//store is: blur_d.stencil(blur_d_s0_x, blur_d_s0_y, (blur_d_s0_dx + 2), (blur_d_s0_dy + 2)) = 0.000000h
hw_uint<16> hcompute_blur_d_stencil() {
  bfloat16_t _974 = bfloat_from_bits(0 /* 0 */);
  return _974;
}

//store is: blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) = (blur_d_y.stencil((blur_d_s1_x + 4), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d_y.stencil((blur_d_s1_x + 3), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d_y.stencil((blur_d_s1_x + 2), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d_y.stencil((blur_d_s1_x + 1), blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + (blur_d.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)) + blur_d_y.stencil(blur_d_s1_x, blur_d_s1_y, (blur_d_s1_dx + 2), (blur_d_s1_dy + 2)))))))
hw_uint<16> hcompute_blur_d_stencil_1(hw_uint<16>& blur_d_stencil, hw_uint<80>& blur_d_y_stencil) {
  bfloat16_t _blur_d_stencil_1 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _blur_d_y_stencil_2 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<0, 15>());
  bfloat16_t _blur_d_y_stencil_3 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<16, 31>());
  bfloat16_t _blur_d_y_stencil_4 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<32, 47>());
  bfloat16_t _blur_d_y_stencil_5 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<48, 63>());
  bfloat16_t _blur_d_y_stencil_6 = bfloat16_t::make_from_bits(blur_d_y_stencil.extract<64, 79>());

  bfloat16_t _979 = _blur_d_stencil_1 + _blur_d_y_stencil_6;
  bfloat16_t _980 = _blur_d_y_stencil_5 + _979;
  bfloat16_t _981 = _blur_d_y_stencil_4 + _980;
  bfloat16_t _982 = _blur_d_y_stencil_3 + _981;
  bfloat16_t _983 = _blur_d_y_stencil_2 + _982;
  return _983;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil() {
  bfloat16_t _1006 = bfloat_from_bits(0 /* 0 */);
  return _1006;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 1) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_1() {
  bfloat16_t _1009 = bfloat_from_bits(0 /* 0 */);
  return _1009;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 2) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_2() {
  bfloat16_t _1012 = bfloat_from_bits(0 /* 0 */);
  return _1012;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 3) = 0.000000h
hw_uint<16> hcompute_non_local_means_sum_stencil_3() {
  bfloat16_t _1015 = bfloat_from_bits(0 /* 0 */);
  return _1015;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(0, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))))
hw_uint<16> hcompute_non_local_means_sum_stencil_4(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_2 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_7 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_1 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1018 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1019 = _blur_d_stencil_2 * _1018;
  bfloat16_t _1020 = exp_bf16(_1019);
  bfloat16_t _1021 = _1020 * _hw_input_global_wrapper_stencil_7;
  bfloat16_t _1022 = _non_local_means_sum_stencil_1 + _1021;
  return _1022;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(1, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))))
hw_uint<16> hcompute_non_local_means_sum_stencil_5(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_3 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_8 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_2 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1038 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1039 = _blur_d_stencil_3 * _1038;
  bfloat16_t _1040 = exp_bf16(_1039);
  bfloat16_t _1041 = _1040 * _hw_input_global_wrapper_stencil_8;
  bfloat16_t _1042 = _non_local_means_sum_stencil_2 + _1041;
  return _1042;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h))*hw_input_global_wrapper.stencil(2, (non_local_means_sum_s1_x + 6), (non_local_means_sum_s1_y + 6))))
hw_uint<16> hcompute_non_local_means_sum_stencil_6(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_4 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());

  bfloat16_t _hw_input_global_wrapper_stencil_9 = bfloat16_t::make_from_bits(hw_input_global_wrapper_stencil.extract<0, 15>());

  bfloat16_t _non_local_means_sum_stencil_3 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1058 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1059 = _blur_d_stencil_4 * _1058;
  bfloat16_t _1060 = exp_bf16(_1059);
  bfloat16_t _1061 = _1060 * _hw_input_global_wrapper_stencil_9;
  bfloat16_t _1062 = _non_local_means_sum_stencil_3 + _1061;
  return _1062;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) = (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 4)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 3)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 2)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 1)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 4, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 2, 0)*-1.414062h)) + (exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 1, 0)*-1.414062h)) + (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 3) + exp_bf16((blur_d.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0, 0)*-1.414062h)))))))))))))))))))))))))))
hw_uint<16> hcompute_non_local_means_sum_stencil_7(hw_uint<400>& blur_d_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  bfloat16_t _blur_d_stencil_10 = bfloat16_t::make_from_bits(blur_d_stencil.extract<0, 15>());
  bfloat16_t _blur_d_stencil_11 = bfloat16_t::make_from_bits(blur_d_stencil.extract<16, 31>());
  bfloat16_t _blur_d_stencil_12 = bfloat16_t::make_from_bits(blur_d_stencil.extract<32, 47>());
  bfloat16_t _blur_d_stencil_13 = bfloat16_t::make_from_bits(blur_d_stencil.extract<48, 63>());
  bfloat16_t _blur_d_stencil_14 = bfloat16_t::make_from_bits(blur_d_stencil.extract<64, 79>());
  bfloat16_t _blur_d_stencil_15 = bfloat16_t::make_from_bits(blur_d_stencil.extract<80, 95>());
  bfloat16_t _blur_d_stencil_16 = bfloat16_t::make_from_bits(blur_d_stencil.extract<96, 111>());
  bfloat16_t _blur_d_stencil_17 = bfloat16_t::make_from_bits(blur_d_stencil.extract<112, 127>());
  bfloat16_t _blur_d_stencil_18 = bfloat16_t::make_from_bits(blur_d_stencil.extract<128, 143>());
  bfloat16_t _blur_d_stencil_19 = bfloat16_t::make_from_bits(blur_d_stencil.extract<144, 159>());
  bfloat16_t _blur_d_stencil_20 = bfloat16_t::make_from_bits(blur_d_stencil.extract<160, 175>());
  bfloat16_t _blur_d_stencil_21 = bfloat16_t::make_from_bits(blur_d_stencil.extract<176, 191>());
  bfloat16_t _blur_d_stencil_22 = bfloat16_t::make_from_bits(blur_d_stencil.extract<192, 207>());
  bfloat16_t _blur_d_stencil_23 = bfloat16_t::make_from_bits(blur_d_stencil.extract<208, 223>());
  bfloat16_t _blur_d_stencil_24 = bfloat16_t::make_from_bits(blur_d_stencil.extract<224, 239>());
  bfloat16_t _blur_d_stencil_25 = bfloat16_t::make_from_bits(blur_d_stencil.extract<240, 255>());
  bfloat16_t _blur_d_stencil_26 = bfloat16_t::make_from_bits(blur_d_stencil.extract<256, 271>());
  bfloat16_t _blur_d_stencil_27 = bfloat16_t::make_from_bits(blur_d_stencil.extract<272, 287>());
  bfloat16_t _blur_d_stencil_28 = bfloat16_t::make_from_bits(blur_d_stencil.extract<288, 303>());
  bfloat16_t _blur_d_stencil_29 = bfloat16_t::make_from_bits(blur_d_stencil.extract<304, 319>());
  bfloat16_t _blur_d_stencil_5 = bfloat16_t::make_from_bits(blur_d_stencil.extract<320, 335>());
  bfloat16_t _blur_d_stencil_6 = bfloat16_t::make_from_bits(blur_d_stencil.extract<336, 351>());
  bfloat16_t _blur_d_stencil_7 = bfloat16_t::make_from_bits(blur_d_stencil.extract<352, 367>());
  bfloat16_t _blur_d_stencil_8 = bfloat16_t::make_from_bits(blur_d_stencil.extract<368, 383>());
  bfloat16_t _blur_d_stencil_9 = bfloat16_t::make_from_bits(blur_d_stencil.extract<384, 399>());

  bfloat16_t _non_local_means_sum_stencil_4 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());

  bfloat16_t _1078 = bfloat_from_bits(3216310272 /* -1.41406 */);
  bfloat16_t _1079 = _blur_d_stencil_5 * _1078;
  bfloat16_t _1080 = exp_bf16(_1079);
  bfloat16_t _1081 = _blur_d_stencil_6 * _1078;
  bfloat16_t _1082 = exp_bf16(_1081);
  bfloat16_t _1083 = _blur_d_stencil_7 * _1078;
  bfloat16_t _1084 = exp_bf16(_1083);
  bfloat16_t _1085 = _blur_d_stencil_8 * _1078;
  bfloat16_t _1086 = exp_bf16(_1085);
  bfloat16_t _1087 = _blur_d_stencil_9 * _1078;
  bfloat16_t _1088 = exp_bf16(_1087);
  bfloat16_t _1089 = _blur_d_stencil_10 * _1078;
  bfloat16_t _1090 = exp_bf16(_1089);
  bfloat16_t _1091 = _blur_d_stencil_11 * _1078;
  bfloat16_t _1092 = exp_bf16(_1091);
  bfloat16_t _1093 = _blur_d_stencil_12 * _1078;
  bfloat16_t _1094 = exp_bf16(_1093);
  bfloat16_t _1095 = _blur_d_stencil_13 * _1078;
  bfloat16_t _1096 = exp_bf16(_1095);
  bfloat16_t _1097 = _blur_d_stencil_14 * _1078;
  bfloat16_t _1098 = exp_bf16(_1097);
  bfloat16_t _1099 = _blur_d_stencil_15 * _1078;
  bfloat16_t _1100 = exp_bf16(_1099);
  bfloat16_t _1101 = _blur_d_stencil_16 * _1078;
  bfloat16_t _1102 = exp_bf16(_1101);
  bfloat16_t _1103 = _blur_d_stencil_17 * _1078;
  bfloat16_t _1104 = exp_bf16(_1103);
  bfloat16_t _1105 = _blur_d_stencil_18 * _1078;
  bfloat16_t _1106 = exp_bf16(_1105);
  bfloat16_t _1107 = _blur_d_stencil_19 * _1078;
  bfloat16_t _1108 = exp_bf16(_1107);
  bfloat16_t _1109 = _blur_d_stencil_20 * _1078;
  bfloat16_t _1110 = exp_bf16(_1109);
  bfloat16_t _1111 = _blur_d_stencil_21 * _1078;
  bfloat16_t _1112 = exp_bf16(_1111);
  bfloat16_t _1113 = _blur_d_stencil_22 * _1078;
  bfloat16_t _1114 = exp_bf16(_1113);
  bfloat16_t _1115 = _blur_d_stencil_23 * _1078;
  bfloat16_t _1116 = exp_bf16(_1115);
  bfloat16_t _1117 = _blur_d_stencil_24 * _1078;
  bfloat16_t _1118 = exp_bf16(_1117);
  bfloat16_t _1119 = _blur_d_stencil_25 * _1078;
  bfloat16_t _1120 = exp_bf16(_1119);
  bfloat16_t _1121 = _blur_d_stencil_26 * _1078;
  bfloat16_t _1122 = exp_bf16(_1121);
  bfloat16_t _1123 = _blur_d_stencil_27 * _1078;
  bfloat16_t _1124 = exp_bf16(_1123);
  bfloat16_t _1125 = _blur_d_stencil_28 * _1078;
  bfloat16_t _1126 = exp_bf16(_1125);
  bfloat16_t _1127 = _blur_d_stencil_29 * _1078;
  bfloat16_t _1128 = exp_bf16(_1127);
  bfloat16_t _1129 = _non_local_means_sum_stencil_4 + _1128;
  bfloat16_t _1130 = _1126 + _1129;
  bfloat16_t _1131 = _1124 + _1130;
  bfloat16_t _1132 = _1122 + _1131;
  bfloat16_t _1133 = _1120 + _1132;
  bfloat16_t _1134 = _1118 + _1133;
  bfloat16_t _1135 = _1116 + _1134;
  bfloat16_t _1136 = _1114 + _1135;
  bfloat16_t _1137 = _1112 + _1136;
  bfloat16_t _1138 = _1110 + _1137;
  bfloat16_t _1139 = _1108 + _1138;
  bfloat16_t _1140 = _1106 + _1139;
  bfloat16_t _1141 = _1104 + _1140;
  bfloat16_t _1142 = _1102 + _1141;
  bfloat16_t _1143 = _1100 + _1142;
  bfloat16_t _1144 = _1098 + _1143;
  bfloat16_t _1145 = _1096 + _1144;
  bfloat16_t _1146 = _1094 + _1145;
  bfloat16_t _1147 = _1092 + _1146;
  bfloat16_t _1148 = _1090 + _1147;
  bfloat16_t _1149 = _1088 + _1148;
  bfloat16_t _1150 = _1086 + _1149;
  bfloat16_t _1151 = _1084 + _1150;
  bfloat16_t _1152 = _1082 + _1151;
  bfloat16_t _1153 = _1080 + _1152;
  return _1153;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_5 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_6 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1332 = _non_local_means_sum_stencil_5 / _non_local_means_sum_stencil_6;
  bfloat16_t _1333 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1334 = min(_1332, _1333);
  bfloat16_t _1335 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1336 = max(_1334, _1335);
  bfloat16_t _1337 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1338 = _1336 * _1337;
  return _1338;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_7 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_8 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1355 = _non_local_means_sum_stencil_7 / _non_local_means_sum_stencil_8;
  bfloat16_t _1356 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1357 = min(_1355, _1356);
  bfloat16_t _1358 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1359 = max(_1357, _1358);
  bfloat16_t _1360 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1361 = _1359 * _1360;
  return _1361;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = (max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)/non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), 1.000000h), 0.000000h)*255.000000h)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<32>& non_local_means_sum_stencil) {
  bfloat16_t _non_local_means_sum_stencil_10 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<0, 15>());
  bfloat16_t _non_local_means_sum_stencil_9 = bfloat16_t::make_from_bits(non_local_means_sum_stencil.extract<16, 31>());

  bfloat16_t _1378 = _non_local_means_sum_stencil_9 / _non_local_means_sum_stencil_10;
  bfloat16_t _1379 = bfloat_from_bits(1065353216 /* 1 */);
  bfloat16_t _1380 = min(_1378, _1379);
  bfloat16_t _1381 = bfloat_from_bits(0 /* 0 */);
  bfloat16_t _1382 = max(_1380, _1381);
  bfloat16_t _1383 = bfloat_from_bits(1132396544 /* 255 */);
  bfloat16_t _1384 = _1382 * _1383;
  return _1384;
}

