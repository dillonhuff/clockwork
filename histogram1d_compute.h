#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, 0) = hw_input.stencil(hw_input_global_wrapper_s0_x, 0)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: bin.stencil(bin_s0_x) = int32(hw_input_global_wrapper.stencil(bin_s0_x, 0))
hw_uint<32> hcompute_bin_stencil(hw_uint<16>& hw_input_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  int32_t _253 = (int32_t)(_hw_input_global_wrapper_stencil_1);
  return _253;
}

//store is: histogram.stencil(histogram_s0_b) = (uint16)0
hw_uint<16> hcompute_histogram_stencil() {
  uint16_t _257 = (uint16_t)(0);
  return _257;
}

//store is: histogram.stencil(bin.stencil(histogram_s1_r_x)) = (histogram.stencil(bin.stencil(histogram_s1_r_x)) + (uint16)1)
hw_uint<16> hcompute_histogram_stencil_1(hw_uint<16>& histogram_stencil) {
  uint16_t _histogram_stencil_1 = (uint16_t) histogram_stencil.extract<0, 15>();

  uint16_t _260 = (uint16_t)(1);
  uint16_t _261 = _histogram_stencil_1 + _260;
  return _261;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = histogram.stencil(hw_output_s0_x_xi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& histogram_stencil) {
  uint16_t _histogram_stencil_2 = (uint16_t) histogram_stencil.extract<0, 15>();

  return _histogram_stencil_2;
}

