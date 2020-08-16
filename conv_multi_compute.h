#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z)
hw_uint<16> hcompute_hw_input_copy_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _326 = (uint16_t)(0);
  return _326;
}

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = (hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), (conv.s1.r$y + hw_output.s0.y.yi), 0) + (conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) + hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), (conv.s1.r$y + hw_output.s0.y.yi), 1)))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_copy_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_copy_stencil_1 = (uint16_t) hw_input_copy_stencil.extract<0, 15>();
  uint16_t _hw_input_copy_stencil_2 = (uint16_t) hw_input_copy_stencil.extract<16, 31>();

  uint16_t _329 = _conv_stencil_1 + _hw_input_copy_stencil_2;
  uint16_t _330 = _hw_input_copy_stencil_1 + _329;
  return _330;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _340 = (uint16_t)(_conv_stencil_2);
  return _340;
}

