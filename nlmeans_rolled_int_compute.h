#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: d.stencil((d_s0_dx + 2), (d_s0_dy + 2), (d_s0_x + 2), (d_s0_y + 2)) = (uint16)0
hw_uint<16> hcompute_d_stencil() {
  uint16_t _679 = (uint16_t)(0);
  return _679;
}

//store is: d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) = (((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) + (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + ((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
hw_uint<16> hcompute_d_stencil_1(hw_uint<16>& d_stencil, hw_uint<96>& hw_input_global_wrapper_stencil) {
  uint16_t _d_stencil_1 = (uint16_t) (d_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) (hw_input_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) (hw_input_global_wrapper_stencil.extract<32, 47>());
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) (hw_input_global_wrapper_stencil.extract<48, 63>());
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) (hw_input_global_wrapper_stencil.extract<64, 79>());
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) (hw_input_global_wrapper_stencil.extract<80, 95>());

  uint16_t _686 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_2;
  uint16_t _687 = _686 * _686;
  uint16_t _688 = _hw_input_global_wrapper_stencil_3 - _hw_input_global_wrapper_stencil_4;
  uint16_t _689 = _688 * _688;
  uint16_t _690 = _hw_input_global_wrapper_stencil_5 - _hw_input_global_wrapper_stencil_6;
  uint16_t _691 = _690 * _690;
  uint16_t _692 = _689 + _691;
  uint16_t _693 = _d_stencil_1 + _692;
  uint16_t _694 = _687 + _693;
  return _694;
}

//store is: blur_d_y.stencil((blur_d_y_s0_dx + 2), (blur_d_y_s0_dy + 2), (blur_d_y_s0_x + 2), blur_d_y_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_d_y_stencil() {
  uint16_t _730 = (uint16_t)(0);
  return _730;
}

//store is: blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) = (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 1)) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 3)) + d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 2))))))
hw_uint<16> hcompute_blur_d_y_stencil_1(hw_uint<16>& blur_d_y_stencil, hw_uint<64>& d_stencil) {
  uint16_t _blur_d_y_stencil_1 = (uint16_t) (blur_d_y_stencil.extract<0, 15>());

  uint16_t _d_stencil_2 = (uint16_t) (d_stencil.extract<0, 15>());
  uint16_t _d_stencil_3 = (uint16_t) (d_stencil.extract<16, 31>());
  uint16_t _d_stencil_4 = (uint16_t) (d_stencil.extract<32, 47>());
  uint16_t _d_stencil_5 = (uint16_t) (d_stencil.extract<48, 63>());

  uint16_t _736 = _d_stencil_4 + _d_stencil_5;
  uint16_t _737 = _d_stencil_3 + _736;
  uint16_t _738 = _blur_d_y_stencil_1 + _737;
  uint16_t _739 = _d_stencil_2 + _738;
  return _739;
}

//store is: blur_d.stencil((blur_d_s0_dx + 2), (blur_d_s0_dy + 2), blur_d_s0_x, blur_d_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_d_stencil() {
  uint16_t _759 = (uint16_t)(0);
  return _759;
}

//store is: blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) = (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 1), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 3), blur_d_s1_y) + blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 2), blur_d_s1_y)))))
hw_uint<16> hcompute_blur_d_stencil_1(hw_uint<16>& blur_d_stencil, hw_uint<64>& blur_d_y_stencil) {
  uint16_t _blur_d_stencil_1 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _blur_d_y_stencil_2 = (uint16_t) (blur_d_y_stencil.extract<0, 15>());
  uint16_t _blur_d_y_stencil_3 = (uint16_t) (blur_d_y_stencil.extract<16, 31>());
  uint16_t _blur_d_y_stencil_4 = (uint16_t) (blur_d_y_stencil.extract<32, 47>());
  uint16_t _blur_d_y_stencil_5 = (uint16_t) (blur_d_y_stencil.extract<48, 63>());

  uint16_t _764 = _blur_d_y_stencil_4 + _blur_d_y_stencil_5;
  uint16_t _765 = _blur_d_y_stencil_3 + _764;
  uint16_t _766 = _blur_d_stencil_1 + _765;
  uint16_t _767 = _blur_d_y_stencil_2 + _766;
  return _767;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = (int16)0
hw_uint<16> hcompute_non_local_means_sum_stencil() {
  int16_t _786 = (int16_t)(0);
  return _786;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_1, non_local_means_sum_s0_y_1, 1) = (int16)0
hw_uint<16> hcompute_non_local_means_sum_stencil_1() {
  int16_t _789 = (int16_t)(0);
  return _789;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_2, non_local_means_sum_s0_y_2, 2) = (int16)0
hw_uint<16> hcompute_non_local_means_sum_stencil_2() {
  int16_t _792 = (int16_t)(0);
  return _792;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_3, non_local_means_sum_s0_y_3, 3) = (int16)0
hw_uint<16> hcompute_non_local_means_sum_stencil_3() {
  int16_t _795 = (int16_t)(0);
  return _795;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x + 2), (non_local_means_sum_s1_s_dom_y + 2), non_local_means_sum_s1_x, non_local_means_sum_s1_y)*hw_input_global_wrapper.stencil(0, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 4), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 4)))*(uint16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_4(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _blur_d_stencil_2 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_1 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  uint16_t _798 = _blur_d_stencil_2 * _hw_input_global_wrapper_stencil_7;
  uint16_t _799 = (uint16_t)(16);
  uint16_t _800 = _798 * _799;
  int16_t _801 = (int16_t)(_800);
  int16_t _802 = _non_local_means_sum_stencil_1 + _801;
  return _802;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x_1 + 2), (non_local_means_sum_s1_s_dom_y_1 + 2), non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1)*hw_input_global_wrapper.stencil(1, ((non_local_means_sum_s1_s_dom_x_1 + non_local_means_sum_s1_x_1) + 4), ((non_local_means_sum_s1_s_dom_y_1 + non_local_means_sum_s1_y_1) + 4)))*(uint16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_5(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _blur_d_stencil_3 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_2 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  uint16_t _822 = _blur_d_stencil_3 * _hw_input_global_wrapper_stencil_8;
  uint16_t _823 = (uint16_t)(16);
  uint16_t _824 = _822 * _823;
  int16_t _825 = (int16_t)(_824);
  int16_t _826 = _non_local_means_sum_stencil_2 + _825;
  return _826;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x_2 + 2), (non_local_means_sum_s1_s_dom_y_2 + 2), non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2)*hw_input_global_wrapper.stencil(2, ((non_local_means_sum_s1_s_dom_x_2 + non_local_means_sum_s1_x_2) + 4), ((non_local_means_sum_s1_s_dom_y_2 + non_local_means_sum_s1_y_2) + 4)))*(uint16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_6(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _blur_d_stencil_4 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_3 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  uint16_t _846 = _blur_d_stencil_4 * _hw_input_global_wrapper_stencil_9;
  uint16_t _847 = (uint16_t)(16);
  uint16_t _848 = _846 * _847;
  int16_t _849 = (int16_t)(_848);
  int16_t _850 = _non_local_means_sum_stencil_3 + _849;
  return _850;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_3, non_local_means_sum_s1_y_3, 3) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_3, non_local_means_sum_s1_y_3, 3) + int16((blur_d.stencil((non_local_means_sum_s1_s_dom_x_3 + 2), (non_local_means_sum_s1_s_dom_y_3 + 2), non_local_means_sum_s1_x_3, non_local_means_sum_s1_y_3)*(uint16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_7(hw_uint<16>& blur_d_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _blur_d_stencil_5 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_4 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  uint16_t _870 = (uint16_t)(16);
  uint16_t _871 = _blur_d_stencil_5 * _870;
  int16_t _872 = (int16_t)(_871);
  int16_t _873 = _non_local_means_sum_stencil_4 + _872;
  return _873;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)*non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), (int16)255), (int16)0))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<32>& non_local_means_sum_stencil) {
  int16_t _non_local_means_sum_stencil_5 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());
  int16_t _non_local_means_sum_stencil_6 = (int16_t) (non_local_means_sum_stencil.extract<16, 31>());

  int16_t _886 = _non_local_means_sum_stencil_5 * _non_local_means_sum_stencil_6;
  int16_t _887 = (int16_t)(255);
  int16_t _888 = min(_886, _887);
  int16_t _889 = (int16_t)(0);
  int16_t _890 = max(_888, _889);
  uint16_t _891 = (uint16_t)(_890);
  return _891;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)*non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), (int16)255), (int16)0))
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<32>& non_local_means_sum_stencil) {
  int16_t _non_local_means_sum_stencil_7 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());
  int16_t _non_local_means_sum_stencil_8 = (int16_t) (non_local_means_sum_stencil.extract<16, 31>());

  int16_t _906 = _non_local_means_sum_stencil_7 * _non_local_means_sum_stencil_8;
  int16_t _907 = (int16_t)(255);
  int16_t _908 = min(_906, _907);
  int16_t _909 = (int16_t)(0);
  int16_t _910 = max(_908, _909);
  uint16_t _911 = (uint16_t)(_910);
  return _911;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)*non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 3)), (int16)255), (int16)0))
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<32>& non_local_means_sum_stencil) {
  int16_t _non_local_means_sum_stencil_10 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());
  int16_t _non_local_means_sum_stencil_9 = (int16_t) (non_local_means_sum_stencil.extract<16, 31>());

  int16_t _926 = _non_local_means_sum_stencil_9 * _non_local_means_sum_stencil_10;
  int16_t _927 = (int16_t)(255);
  int16_t _928 = min(_926, _927);
  int16_t _929 = (int16_t)(0);
  int16_t _930 = max(_928, _929);
  uint16_t _931 = (uint16_t)(_930);
  return _931;
}

