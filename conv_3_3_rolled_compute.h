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
  uint16_t _259 = (uint16_t)(0);
  return _259;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (conv.stencil(conv_s1_x, conv_s1_y) + (hw_input_global_wrapper.stencil((conv_s1_r_x + conv_s1_x), (conv_s1_r_y + conv_s1_y))*uint16(kernela0[(conv_s1_r_x + (conv_s1_r_y*3))])))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_global_wrapper_stencil, const int _conv_s1_r_x, const int _conv_s1_r_y) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  int32_t _kernela0[9];
  // produce kernela0
  for (int _kernel_s0_y = 0; _kernel_s0_y < 0 + 3; _kernel_s0_y++)
  {
   for (int _kernel_s0_x = 0; _kernel_s0_x < 0 + 3; _kernel_s0_x++)
   {
    int32_t _262 = _kernel_s0_y * 3;
    int32_t _263 = _kernel_s0_x + _262;
    _kernela0[_263] = 0;
   } // for _kernel_s0_x
  } // for _kernel_s0_y
  _kernela0[0] = 11;
  _kernela0[3] = 12;
  _kernela0[6] = 13;
  _kernela0[1] = 14;
  _kernela0[4] = 255;
  _kernela0[7] = 16;
  _kernela0[2] = 17;
  _kernela0[5] = 18;
  _kernela0[8] = 19;

  int32_t _264 = _conv_s1_r_y * 3;
  int32_t _265 = _conv_s1_r_x + _264;
  int32_t _266 = ((const int32_t *)_kernela0)[_265];
  uint16_t _267 = (uint16_t)(_266);
  uint16_t _268 = _hw_input_global_wrapper_stencil_1 * _267;
  uint16_t _269 = _conv_stencil_1 + _268;
  return _269;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

