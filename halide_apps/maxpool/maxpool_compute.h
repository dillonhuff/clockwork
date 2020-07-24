#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_output.s0.c) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_output.s0.c)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: pooled.stencil(pooled.s0.x, pooled.s0.y, hw_output.s0.c) = max(hw_input.stencil(((pooled.s0.x*2) + 1), (pooled.s0.y*2), hw_output.s0.c), max(hw_input.stencil((pooled.s0.x*2), (pooled.s0.y*2), hw_output.s0.c), hw_input.stencil(((pooled.s0.x*2) + 1), ((pooled.s0.y*2) + 1), hw_output.s0.c)))
hw_uint<16> hcompute_pooled_stencil(hw_uint<48>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<32, 47>();

  uint16_t _387 = max(_hw_input_stencil_2, _hw_input_stencil_3);
  uint16_t _388 = max(_hw_input_stencil_1, _387);
  return _388;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.c) = uint8(pooled.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.c))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& pooled_stencil) {
  uint16_t _pooled_stencil_1 = (uint16_t) pooled_stencil.extract<0, 15>();

  uint8_t _400 = (uint8_t)(_pooled_stencil_1);
  return _400;
}

