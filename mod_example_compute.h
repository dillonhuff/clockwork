#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil((hw_input_global_wrapper_s0_x + 1), (hw_input_global_wrapper_s0_y + 1)) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = ((((hw_input_global_wrapper.stencil(((hw_output_s0_x_xi/2) + ((hw_output_s0_x_xi % 2)*2)), ((hw_output_s0_y_yi/2) + ((hw_output_s0_y_yi % 2)*2)))/(uint16)4) + ((hw_input_global_wrapper.stencil(((hw_output_s0_x_xi/2) + 1), ((hw_output_s0_y_yi/2) + ((hw_output_s0_y_yi % 2)*2)))*(uint16)3)/(uint16)4))/(uint16)4) + ((((hw_input_global_wrapper.stencil(((hw_output_s0_x_xi/2) + ((hw_output_s0_x_xi % 2)*2)), ((hw_output_s0_y_yi/2) + 1))/(uint16)4) + ((hw_input_global_wrapper.stencil(((hw_output_s0_x_xi/2) + 1), ((hw_output_s0_y_yi/2) + 1))*(uint16)3)/(uint16)4))*(uint16)3)/(uint16)4))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<64>& hw_input_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();

  uint16_t _260 = (uint16_t)(2);
  uint16_t _261 = _hw_input_global_wrapper_stencil_1 >> _260;
  uint16_t _262 = (uint16_t)(3);
  uint16_t _263 = _hw_input_global_wrapper_stencil_2 * _262;
  uint16_t _264 = _263 >> _260;
  uint16_t _265 = _261 + _264;
  uint16_t _266 = _265 >> _260;
  uint16_t _267 = _hw_input_global_wrapper_stencil_3 >> _260;
  uint16_t _268 = _hw_input_global_wrapper_stencil_4 * _262;
  uint16_t _269 = _268 >> _260;
  uint16_t _270 = _267 + _269;
  uint16_t _271 = _270 * _262;
  uint16_t _272 = _271 >> _260;
  uint16_t _273 = _266 + _272;
  return _273;
}

