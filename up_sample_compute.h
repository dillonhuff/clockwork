#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.z) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.z)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: nearest_neighbor.stencil(nearest_neighbor.s0.x, nearest_neighbor.s0.y, nearest_neighbor.s0.z) = hw_input.stencil((nearest_neighbor.s0.x/2), (nearest_neighbor.s0.y/2), nearest_neighbor.s0.z)
hw_uint<16> hcompute_nearest_neighbor_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo, hw_output.s0.z) = uint8(nearest_neighbor.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo, hw_output.s0.z))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_1 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  uint8_t _386 = (uint8_t)(_nearest_neighbor_stencil_1);
  return _386;
}

