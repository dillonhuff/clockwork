#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: mult.stencil(mult.s0.x, mult.s0.y) = (hw_input.stencil(mult.s0.x, mult.s0.y)*(uint16)2)
hw_uint<16> hcompute_mult_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _257 = (uint16_t)(2);
  uint16_t _258 = _hw_input_stencil_1 * _257;
  return _258;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(mult.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& mult_stencil) {
  uint16_t _mult_stencil_1 = (uint16_t) mult_stencil.extract<0, 15>();

  uint8_t _264 = (uint8_t)(_mult_stencil_1);
  return _264;
}

