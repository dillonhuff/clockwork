#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = (hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) + ((hw_input_global_wrapper.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) + uint16(hw_output_s0_y_yi)) + uint16(hw_output_s0_x_xi)))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& hw_input_global_wrapper_stencil, const int _hw_output_s0_x_xi, const int _hw_output_s0_y_yi) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _257 = (uint16_t)(_hw_output_s0_y_yi);
  uint16_t _258 = _hw_input_global_wrapper_stencil_1 + _257;
  uint16_t _259 = (uint16_t)(_hw_output_s0_x_xi);
  uint16_t _260 = _258 + _259;
  uint16_t _261 = _hw_input_global_wrapper_stencil_1 + _260;
  return _261;
}

