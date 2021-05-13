#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _257 = (uint16_t)(0);
  return _257;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (conv.stencil(conv_s1_x, conv_s1_y) + (hw_input_global_wrapper.stencil((conv_s1_r_x + conv_s1_x), conv_s1_y)*uint16(kernela0[conv_s1_r_x])))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, const int _conv_s1_r_x) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  int32_t _kernela0[3];
  // produce kernela0
  for (int _kernel_s0_x = 0; _kernel_s0_x < 0 + 3; _kernel_s0_x++)
  {
   _kernela0[_kernel_s0_x] = 0;
  } // for _kernel_s0_x
  _kernela0[0] = 1;
  _kernela0[1] = 1;
  _kernela0[2] = 1;

  int32_t _260 = ((const int32_t *)_kernela0)[_conv_s1_r_x];
  uint16_t _261 = (uint16_t)(_260);
  uint16_t _262 = _hw_input_global_wrapper_stencil_1 * _261;
  uint16_t _263 = _conv_stencil_1 + _262;
  return _263;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

