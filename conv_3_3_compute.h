#pragma once
#include "hw_classes.h"


//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y)
hw_uint<16> hcompute_hw_input_copy_stencil(hw_uint<16>& hw_input_stencil) {
  return hw_input_stencil;
}

//store is: conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = 0
hw_uint<16> hcompute_conv_stencil() {
  return 0;
}

//store is: conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = (conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) + int32(hw_input_copy.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo)))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_copy_stencil) {
  return (conv_stencil + int32(hw_input_copy_stencil));
}

//store is: hw_output.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo) = uint8(conv.stencil(hw_output.s0.x.xo, hw_output.s0.y.yo))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  return uint8(conv_stencil);
}

