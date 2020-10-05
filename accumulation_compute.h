#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: conv.stencil(conv.s0.x, conv.s0.y) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _257 = (uint16_t)(0);
  return _257;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y) = (conv.stencil(conv.s1.x, conv.s1.y) + (hw_input.stencil((conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))*uint16(kernel.stencil((conv.s1.r$x + (conv.s1.r$y*3))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, int _conv_s1_r_x, int _conv_s1_r_y) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t kernel_stencil[9];  // produce kernel.stencil
  kernel_stencil[0] = 0;
  kernel_stencil[1] = 1;
  kernel_stencil[2] = 2;
  kernel_stencil[3] = 3;
  kernel_stencil[4] = 4;
  kernel_stencil[5] = 5;
  kernel_stencil[6] = 6;
  kernel_stencil[7] = 7;
  kernel_stencil[8] = 8;

  uint16_t _260 = _conv_s1_r_y * 3;
  uint16_t _261 = _conv_s1_r_x + _260;
    uint16_t _262 = kernel_stencil[_261];
  uint16_t _263 = (uint16_t)(_262);
  uint16_t _264 = _hw_input_stencil_1 * _263;
  uint16_t _265 = _conv_stencil_1 + _264;
    return _265;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _282 = (uint16_t)(_conv_stencil_2);
  return _282;
}

