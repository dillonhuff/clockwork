#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, 0) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, 0)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: nearest_neighbor.stencil(nearest_neighbor_s0_x, nearest_neighbor_s0_y, 0) = hw_input.stencil((nearest_neighbor_s0_x/2), (nearest_neighbor_s0_y/2), 0)
hw_uint<16> hcompute_nearest_neighbor_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = uint8(nearest_neighbor.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& nearest_neighbor_stencil) {
  uint16_t _nearest_neighbor_stencil_1 = (uint16_t) nearest_neighbor_stencil.extract<0, 15>();

  uint16_t _386 = (uint16_t)(_nearest_neighbor_stencil_1);
  return _386;
}

