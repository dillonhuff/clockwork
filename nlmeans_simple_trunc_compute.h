#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, (hw_input_global_wrapper_s0_x + 4), (hw_input_global_wrapper_s0_y + 4)) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: d.stencil((d_s0_dx + 2), (d_s0_dy + 2), (d_s0_x + 2), (d_s0_y + 2)) = (int16)0
hw_uint<16> hcompute_d_stencil() {
  int16_t _679 = (int16_t)(0);
  return _679;
}

hw_uint<16> hcompute_d_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) (hw_input_stencil.extract<0, 15>());
  return _hw_input_stencil_2;
}

//store is: d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) = (((hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(0, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(0, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + (d.stencil((d_s1_dx + 2), (d_s1_dy + 2), (d_s1_x + 2), (d_s1_y + 2)) + (((hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(2, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(2, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))) + ((hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))*(hw_input_global_wrapper.stencil(1, (d_s1_x + 4), (d_s1_y + 4)) - hw_input_global_wrapper.stencil(1, ((d_s1_dx + d_s1_x) + 4), ((d_s1_dy + d_s1_y) + 4)))))))
hw_uint<16> hcompute_d_stencil_1(hw_uint<16>& d_stencil, hw_uint<96>& hw_input_global_wrapper_stencil) {
  int16_t _d_stencil_1 = (int16_t) (d_stencil.extract<0, 15>());

  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) (hw_input_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) (hw_input_global_wrapper_stencil.extract<32, 47>());
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) (hw_input_global_wrapper_stencil.extract<48, 63>());
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) (hw_input_global_wrapper_stencil.extract<64, 79>());
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) (hw_input_global_wrapper_stencil.extract<80, 95>());

  int16_t _686 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_2;
  int16_t _687 = _686 * _686;
  int16_t _688 = _hw_input_global_wrapper_stencil_3 - _hw_input_global_wrapper_stencil_4;
  int16_t _689 = _688 * _688;
  int16_t _690 = _hw_input_global_wrapper_stencil_5 - _hw_input_global_wrapper_stencil_6;
  int16_t _691 = _690 * _690;
  int16_t _692 = _689 + _691;
  int16_t _693 = _d_stencil_1 + _692;
  int16_t _694 = _687 + _693;
  return _694;
}

//store is: blur_d_y.stencil((blur_d_y_s0_dx + 2), (blur_d_y_s0_dy + 2), (blur_d_y_s0_x + 2), blur_d_y_s0_y) = (int16)0
hw_uint<16> hcompute_blur_d_y_stencil() {
  int16_t _730 = (int16_t)(0);
  return _730;
}

//store is: blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) = (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (blur_d_y.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), blur_d_y_s1_y) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 1)) + (d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 3)) + d.stencil((blur_d_y_s1_dx + 2), (blur_d_y_s1_dy + 2), (blur_d_y_s1_x + 2), (blur_d_y_s1_y + 2))))))
hw_uint<16> hcompute_blur_d_y_stencil_1(hw_uint<16>& blur_d_y_stencil, hw_uint<64>& d_stencil) {
  int16_t _blur_d_y_stencil_1 = (int16_t) (blur_d_y_stencil.extract<0, 15>());

  int16_t _d_stencil_2 = (int16_t) (d_stencil.extract<0, 15>());
  int16_t _d_stencil_3 = (int16_t) (d_stencil.extract<16, 31>());
  int16_t _d_stencil_4 = (int16_t) (d_stencil.extract<32, 47>());
  int16_t _d_stencil_5 = (int16_t) (d_stencil.extract<48, 63>());

  int16_t _736 = _d_stencil_4 + _d_stencil_5;
  int16_t _737 = _d_stencil_3 + _736;
  int16_t _738 = _blur_d_y_stencil_1 + _737;
  int16_t _739 = _d_stencil_2 + _738;
  return _739;
}

//store is: blur_d.stencil((blur_d_s0_dx + 2), (blur_d_s0_dy + 2), blur_d_s0_x, blur_d_s0_y) = (int16)0
hw_uint<16> hcompute_blur_d_stencil() {
  int16_t _759 = (int16_t)(0);
  return _759;
}

//store is: blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) = (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), blur_d_s1_x, blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 1), blur_d_s1_y) + (blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 3), blur_d_s1_y) + blur_d_y.stencil((blur_d_s1_dx + 2), (blur_d_s1_dy + 2), (blur_d_s1_x + 2), blur_d_s1_y)))))
hw_uint<16> hcompute_blur_d_stencil_1(hw_uint<16>& blur_d_stencil, hw_uint<64>& blur_d_y_stencil) {
  int16_t _blur_d_stencil_1 = (int16_t) (blur_d_stencil.extract<0, 15>());

  int16_t _blur_d_y_stencil_2 = (int16_t) (blur_d_y_stencil.extract<0, 15>());
  int16_t _blur_d_y_stencil_3 = (int16_t) (blur_d_y_stencil.extract<16, 31>());
  int16_t _blur_d_y_stencil_4 = (int16_t) (blur_d_y_stencil.extract<32, 47>());
  int16_t _blur_d_y_stencil_5 = (int16_t) (blur_d_y_stencil.extract<48, 63>());

  int16_t _764 = _blur_d_y_stencil_4 + _blur_d_y_stencil_5;
  int16_t _765 = _blur_d_y_stencil_3 + _764;
  int16_t _766 = _blur_d_stencil_1 + _765;
  int16_t _767 = _blur_d_y_stencil_2 + _766;
  return _767;
}

//store is: non_local_means_div.stencil(non_local_means_div_s0_x, non_local_means_div_s0_y) = (int16)0
hw_uint<16> hcompute_non_local_means_div_stencil() {
  int16_t _786 = (int16_t)(0);
  return _786;
}

//store is: non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) = (non_local_means_div.stencil(non_local_means_div_s1_x, non_local_means_div_s1_y) + (blur_d.stencil((non_local_means_div_s1_s_dom_x + 2), (non_local_means_div_s1_s_dom_y + 2), non_local_means_div_s1_x, non_local_means_div_s1_y)/(int16)16))
hw_uint<16> hcompute_non_local_means_div_stencil_1(hw_uint<16>& blur_d_stencil, hw_uint<16>& non_local_means_div_stencil) {
  int16_t _blur_d_stencil_2 = (int16_t) (blur_d_stencil.extract<0, 15>());

  int16_t _non_local_means_div_stencil_1 = (int16_t) (non_local_means_div_stencil.extract<0, 15>());

  int16_t _789 = (int16_t)(4);
  int16_t _790 = _blur_d_stencil_2 >> _789;
  int16_t _791 = _non_local_means_div_stencil_1 + _790;
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

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) = (non_local_means_sum.stencil(non_local_means_sum_s1_x, non_local_means_sum_s1_y, 0) + (hw_input_global_wrapper.stencil(0, ((non_local_means_sum_s1_s_dom_x + non_local_means_sum_s1_x) + 4), ((non_local_means_sum_s1_s_dom_y + non_local_means_sum_s1_y) + 4))*(blur_d.stencil((non_local_means_sum_s1_s_dom_x + 2), (non_local_means_sum_s1_s_dom_y + 2), non_local_means_sum_s1_x, non_local_means_sum_s1_y)/(int16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_3(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  int16_t _blur_d_stencil_3 = (int16_t) (blur_d_stencil.extract<0, 15>());

  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_1 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _811 = (int16_t)(4);
  int16_t _812 = _blur_d_stencil_3 >> _811;
  int16_t _813 = _hw_input_global_wrapper_stencil_7 * _812;
  int16_t _814 = _non_local_means_sum_stencil_1 + _813;
  return _814;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1, 1) + (hw_input_global_wrapper.stencil(1, ((non_local_means_sum_s1_s_dom_x_1 + non_local_means_sum_s1_x_1) + 4), ((non_local_means_sum_s1_s_dom_y_1 + non_local_means_sum_s1_y_1) + 4))*(blur_d.stencil((non_local_means_sum_s1_s_dom_x_1 + 2), (non_local_means_sum_s1_s_dom_y_1 + 2), non_local_means_sum_s1_x_1, non_local_means_sum_s1_y_1)/(int16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_4(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  int16_t _blur_d_stencil_4 = (int16_t) (blur_d_stencil.extract<0, 15>());

  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_2 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _832 = (int16_t)(4);
  int16_t _833 = _blur_d_stencil_4 >> _832;
  int16_t _834 = _hw_input_global_wrapper_stencil_8 * _833;
  int16_t _835 = _non_local_means_sum_stencil_2 + _834;
  return _835;
}

//store is: non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) = (non_local_means_sum.stencil(non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2, 2) + (hw_input_global_wrapper.stencil(2, ((non_local_means_sum_s1_s_dom_x_2 + non_local_means_sum_s1_x_2) + 4), ((non_local_means_sum_s1_s_dom_y_2 + non_local_means_sum_s1_y_2) + 4))*(blur_d.stencil((non_local_means_sum_s1_s_dom_x_2 + 2), (non_local_means_sum_s1_s_dom_y_2 + 2), non_local_means_sum_s1_x_2, non_local_means_sum_s1_y_2)/(int16)16)))
hw_uint<16> hcompute_non_local_means_sum_stencil_5(hw_uint<16>& blur_d_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  int16_t _blur_d_stencil_5 = (int16_t) (blur_d_stencil.extract<0, 15>());

  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) (hw_input_global_wrapper_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_3 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _853 = (int16_t)(4);
  int16_t _854 = _blur_d_stencil_5 >> _853;
  int16_t _855 = _hw_input_global_wrapper_stencil_9 * _854;
  int16_t _856 = _non_local_means_sum_stencil_3 + _855;
  return _856;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)*non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)), (int16)255), (int16)0)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& non_local_means_div_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  int16_t _non_local_means_div_stencil_2 = (int16_t) (non_local_means_div_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_4 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _874 = _non_local_means_sum_stencil_4 - _non_local_means_div_stencil_2;
  int16_t _875 = (int16_t)(255);
  int16_t _876 = min(_874, _875);
  int16_t _877 = (int16_t)(0);
  int16_t _878 = max(_876, _877);
  return _878;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1)*non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)), (int16)255), (int16)0)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& non_local_means_div_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  int16_t _non_local_means_div_stencil_3 = (int16_t) (non_local_means_div_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_5 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _891 = _non_local_means_sum_stencil_5 - _non_local_means_div_stencil_3;
  int16_t _892 = (int16_t)(255);
  int16_t _893 = min(_891, _892);
  int16_t _894 = (int16_t)(0);
  int16_t _895 = max(_893, _894);
  return _895;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = max(min((non_local_means_sum.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 2)*non_local_means_div.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)), (int16)255), (int16)0)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& non_local_means_div_stencil, hw_uint<16>& non_local_means_sum_stencil) {
  int16_t _non_local_means_div_stencil_4 = (int16_t) (non_local_means_div_stencil.extract<0, 15>());

  int16_t _non_local_means_sum_stencil_6 = (int16_t) (non_local_means_sum_stencil.extract<0, 15>());

  int16_t _908 = _non_local_means_sum_stencil_6 - _non_local_means_div_stencil_4;
  int16_t _909 = (int16_t)(255);
  int16_t _910 = min(_908, _909);
  int16_t _911 = (int16_t)(0);
  int16_t _912 = max(_910, _911);
  return _912;
}

