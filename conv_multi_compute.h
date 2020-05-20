#pragma once
#include "hw_classes.h"


//store is: hw_input_copy.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z) = hw_input.stencil(hw_input_copy.s0.x, hw_input_copy.s0.y, hw_input_copy.s0.z)
hw_uint<16> hcompute_hw_input_copy_stencil(hw_uint<16>& hw_input_stencil) {
  return hw_input_stencil;
}

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = 0
hw_uint<16> hcompute_conv_stencil() {
  return 0;
}

//store is: conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = ((conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) + int32(hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), t15, 0))) + int32(hw_input_copy.stencil((conv.s1.r$x + hw_output.s0.x.xi), t15, 1)))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_copy_stencil) {
  hw_uint<16> hw_input_copy_stencil_0 = hw_input_copy_stencil.extract<0, 15>();
  hw_uint<16> hw_input_copy_stencil_1 = hw_input_copy_stencil.extract<16, 31>();

  return ((conv_stencil + int32(hw_input_copy_stencil_0)) + int32(hw_input_copy_stencil_1));
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  hw_uint<16> conv_stencil_1 = conv_stencil.extract<0, 15>();

  return uint8(conv_stencil_1);
}

