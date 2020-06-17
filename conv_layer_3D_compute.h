#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: hw_weight.stencil(hw_weight.s0.x, hw_weight.s0.y, hw_weight.s0.c, hw_weight.s0.k) = weight_copy.stencil(hw_weight.s0.x, hw_weight.s0.y, hw_weight.s0.c, hw_weight.s0.k)
hw_uint<16> hcompute_hw_weight_stencil(hw_uint<16>& weight_copy_stencil) {
  uint16_t _weight_copy_stencil_1 = (uint16_t) weight_copy_stencil.extract<0, 15>();

  return _weight_copy_stencil_1;
}

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.k) = 0
hw_uint<16> hcompute_conv_stencil() {
  return 0;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, conv.s1.k) = (conv.stencil(conv.s1.x, conv.s1.y, conv.s1.k) + int32((hw_weight.stencil(conv.s1.win$x, conv.s1.win$y, conv.s1.win$z, conv.s1.k)*hw_input.stencil((conv.s1.win$x + conv.s1.x), (conv.s1.win$y + conv.s1.y), conv.s1.win$z))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_weight_stencil) {
  int32_t _conv_stencil_1 = (int32_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_weight_stencil_1 = (uint16_t) hw_weight_stencil.extract<0, 15>();

  uint16_t _693 = _hw_weight_stencil_1 * _hw_input_stencil_1;
  int32_t _694 = (int32_t)(_693);
  int32_t _695 = _conv_stencil_1 + _694;
  return _695;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.k.ki) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.k.ki))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int32_t _conv_stencil_2 = (int32_t) conv_stencil.extract<0, 15>();

  uint8_t _707 = (uint8_t)(_conv_stencil_2);
  return _707;
}

//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c) = input_copy.stencil(hw_input.s0.x, hw_input.s0.y, hw_input.s0.c)
hw_uint<16> hcompute_hw_input_stencil_1(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_2 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_2;
}

//store is: hw_weight.stencil(hw_weight.s0.x, hw_weight.s0.y, hw_weight.s0.c, hw_weight.s0.k) = weight_copy.stencil(hw_weight.s0.x, hw_weight.s0.y, hw_weight.s0.c, hw_weight.s0.k)
hw_uint<16> hcompute_hw_weight_stencil_1(hw_uint<16>& weight_copy_stencil) {
  uint16_t _weight_copy_stencil_2 = (uint16_t) weight_copy_stencil.extract<0, 15>();

  return _weight_copy_stencil_2;
}

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.k) = 0
hw_uint<16> hcompute_conv_stencil_2() {
  return 0;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, conv.s1.k) = (conv.stencil(conv.s1.x, conv.s1.y, conv.s1.k) + int32((hw_weight.stencil(conv.s1.win$x, conv.s1.win$y, conv.s1.win$z, conv.s1.k)*hw_input.stencil((conv.s1.win$x + conv.s1.x), (conv.s1.win$y + conv.s1.y), conv.s1.win$z))))
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_stencil, hw_uint<16>& hw_weight_stencil) {
  int32_t _conv_stencil_3 = (int32_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  uint16_t _hw_weight_stencil_2 = (uint16_t) hw_weight_stencil.extract<0, 15>();

  uint16_t _713 = _hw_weight_stencil_2 * _hw_input_stencil_2;
  int32_t _714 = (int32_t)(_713);
  int32_t _715 = _conv_stencil_3 + _714;
  return _715;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, (hw_output.s0.k.ki + 11)) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, (hw_output.s0.k.ki + 11)))
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& conv_stencil) {
  int32_t _conv_stencil_4 = (int32_t) conv_stencil.extract<0, 15>();

  uint8_t _727 = (uint8_t)(_conv_stencil_4);
  return _727;
}

