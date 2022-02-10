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

//store is: non_local_means_div.stencil(non_local_means_div_s0_x, non_local_means_div_s0_y) = (uint16)0
hw_uint<16> hcompute_non_local_means_div_stencil() {
  uint16_t _786 = (uint16_t)(0);
  return _786;
}

//store is: non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) = (non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) + (blur_d.stencil((non_local_means_div_s1_s_dom_x + 2), (non_local_means_div_s1_s_dom_y + 2), non_local_means_div_s1_x, non_local_means_div_s1_y)*(uint16)16))
hw_uint<16> hcompute_non_local_means_div_stencil_1(hw_uint<16>& blur_d_stencil, hw_uint<16>& non_local_means_div_stencil) {
  uint16_t _blur_d_stencil_2 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _non_local_means_div_stencil_1 = (uint16_t) (non_local_means_div_stencil.extract<0, 15>());

  uint16_t _789 = (uint16_t)(16);
  uint16_t _790 = _blur_d_stencil_2 * _789;
  uint16_t _791 = _non_local_means_div_stencil_1 + _790;
  return _791;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x, non_local_means_sum_s0_y, 0) = (int16)0
hw_uint<16> hcompute_non_local_means_sum_stencil() {
  int16_t _802 = (int16_t)(0);
  return _802;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_1, non_local_means_sum_s0_y_1, 1) = (int16)0
hw_uint<16> hcompute_non_local_means_sum_stencil_1() {
  int16_t _805 = (int16_t)(0);
  return _805;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s0_x_2, non_local_means_sum_s0_y_2, 2) = (int16)0
hw_uint<16> hcompute_non_local_means_sum_stencil_2() {
  int16_t _808 = (int16_t)(0);
  return _808;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x + 2), (non_local_means_sum_s1_s_dom_y + 2), non_local_means_sum_s1_x, non_local_means_sum_s1_y)*hw_input_global_wrapper.stencil(0, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 4), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 4)))*(uint16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_3(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _blur_d_stencil_3 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_1 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  uint16_t _811 = _blur_d_stencil_3 * _hw_input_global_wrapper_stencil_7;
  uint16_t _812 = (uint16_t)(16);
  uint16_t _813 = _811 * _812;
  int16_t _814 = (int16_t)(_813);
  int16_t _815 = _non_local_means_sum_stencil_1 + _814;
  return _815;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x_1 + 2), (non_local_means_sum_s1_s_dom_y_1 + 2), non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1)*hw_input_global_wrapper.stencil(1, ((non_local_means_sum_s1_s_dom_x_1 + non_local_means_sum_s1_x_1) + 4), ((non_local_means_sum_s1_s_dom_y_1 + non_local_means_sum_s1_y_1) + 4)))*(uint16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_4(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _blur_d_stencil_4 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_2 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  uint16_t _835 = _blur_d_stencil_4 * _hw_input_global_wrapper_stencil_8;
  uint16_t _836 = (uint16_t)(16);
  uint16_t _837 = _835 * _836;
  int16_t _838 = (int16_t)(_837);
  int16_t _839 = _non_local_means_sum_stencil_2 + _838;
  return _839;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) + int16(((blur_d.stencil((non_local_means_sum_s1_s_dom_x_2 + 2), (non_local_means_sum_s1_s_dom_y_2 + 2), non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2)*hw_input_global_wrapper.stencil(2, ((non_local_means_sum_s1_s_dom_x_2 + non_local_means_sum_s1_x_2) + 4), ((non_local_means_sum_s1_s_dom_y_2 + non_local_means_sum_s1_y_2) + 4)))*(uint16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_5(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _blur_d_stencil_5 = (uint16_t) (blur_d_stencil.extract<0, 15>());

  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_3 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  uint16_t _859 = _blur_d_stencil_5 * _hw_input_global_wrapper_stencil_9;
  uint16_t _860 = (uint16_t)(16);
  uint16_t _861 = _859 * _860;
  int16_t _862 = (int16_t)(_861);
  int16_t _863 = _non_local_means_sum_stencil_3 + _862;
  return _863;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)*int16(non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))), (int16)255), (int16)0))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& non_local_means_div_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _non_local_means_div_stencil_2 = (uint16_t) (non_local_means_div_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_4 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _883 = (int16_t)(_non_local_means_div_stencil_2);
  int16_t _884 = _non_local_means_sum_stencil_4 * _883;
  int16_t _885 = (int16_t)(255);
  int16_t _886 = min(_884, _885);
  int16_t _887 = (int16_t)(0);
  int16_t _888 = max(_886, _887);
  uint16_t _889 = (uint16_t)(_888);
  return _889;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)*int16(non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))), (int16)255), (int16)0))
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& non_local_means_div_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _non_local_means_div_stencil_3 = (uint16_t) (non_local_means_div_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_5 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _906 = (int16_t)(_non_local_means_div_stencil_3);
  int16_t _907 = _non_local_means_sum_stencil_5 * _906;
  int16_t _908 = (int16_t)(255);
  int16_t _909 = min(_907, _908);
  int16_t _910 = (int16_t)(0);
  int16_t _911 = max(_909, _910);
  uint16_t _912 = (uint16_t)(_911);
  return _912;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint16(max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)*int16(non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))), (int16)255), (int16)0))
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& non_local_means_div_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  uint16_t _non_local_means_div_stencil_4 = (uint16_t) (non_local_means_div_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_6 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _929 = (int16_t)(_non_local_means_div_stencil_4);
  int16_t _930 = _non_local_means_sum_stencil_6 * _929;
  int16_t _931 = (int16_t)(255);
  int16_t _932 = min(_930, _931);
  int16_t _933 = (int16_t)(0);
  int16_t _934 = max(_932, _933);
  uint16_t _935 = (uint16_t)(_934);
  return _935;
}

