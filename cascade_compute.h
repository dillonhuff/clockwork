#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.x, hw_input.s0.y) = hw_input_copy.stencil(hw_input.s0.x, hw_input.s0.y)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& hw_input_copy_stencil) {
  uint16_t _hw_input_copy_stencil_1 = (uint16_t) hw_input_copy_stencil.extract<0, 15>();

  return _hw_input_copy_stencil_1;
}

//store is: conv1.stencil(conv1.s0.x, conv1.s0.y) = 0
hw_uint<32> hcompute_conv1_stencil() {
  return 0;
}

//store is: conv1.stencil(conv1.s1.x, conv1.s1.y) = (((((conv1.stencil(conv1.s1.x, conv1.s1.y) + (((((int32(hw_input.stencil((conv1.s1.x + 1), (conv1.s1.y + 1)))*2) + (int32(hw_input.stencil((conv1.s1.x + 1), (conv1.s1.y + 2))) + int32(hw_input.stencil((conv1.s1.x + 2), (conv1.s1.y + 1))))) + int32(hw_input.stencil(conv1.s1.x, (conv1.s1.y + 1)))) + int32(hw_input.stencil((conv1.s1.x + 1), conv1.s1.y)))*2)) + int32(hw_input.stencil(conv1.s1.x, conv1.s1.y))) + int32(hw_input.stencil((conv1.s1.x + 2), conv1.s1.y))) + int32(hw_input.stencil(conv1.s1.x, (conv1.s1.y + 2)))) + int32(hw_input.stencil((conv1.s1.x + 2), (conv1.s1.y + 2))))
hw_uint<32> hcompute_conv1_stencil_1(hw_uint<16>& conv1_stencil, hw_uint<144>& hw_input_stencil) {
  int32_t _conv1_stencil_1 = (int32_t) conv1_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<112, 127>();
  uint16_t _hw_input_stencil_9 = (uint16_t) hw_input_stencil.extract<128, 143>();

  int32_t _257 = (int32_t)(_hw_input_stencil_1);
  int32_t _258 = _257 * 2;
  int32_t _259 = (int32_t)(_hw_input_stencil_2);
  int32_t _260 = (int32_t)(_hw_input_stencil_3);
  int32_t _261 = _259 + _260;
  int32_t _262 = _258 + _261;
  int32_t _263 = (int32_t)(_hw_input_stencil_4);
  int32_t _264 = _262 + _263;
  int32_t _265 = (int32_t)(_hw_input_stencil_5);
  int32_t _266 = _264 + _265;
  int32_t _267 = _266 * 2;
  int32_t _268 = _conv1_stencil_1 + _267;
  int32_t _269 = (int32_t)(_hw_input_stencil_6);
  int32_t _270 = _268 + _269;
  int32_t _271 = (int32_t)(_hw_input_stencil_7);
  int32_t _272 = _270 + _271;
  int32_t _273 = (int32_t)(_hw_input_stencil_8);
  int32_t _274 = _272 + _273;
  int32_t _275 = (int32_t)(_hw_input_stencil_9);
  int32_t _276 = _274 + _275;
  return _276;
}

//store is: conv2.stencil(conv2.s0.x, conv2.s0.y) = 0
hw_uint<32> hcompute_conv2_stencil() {
  return 0;
}

//store is: conv2.stencil(conv2.s1.x, conv2.s1.y) = (conv1.stencil(conv2.s1.x, conv2.s1.y) + (conv2.stencil(conv2.s1.x, conv2.s1.y) + ((conv1.stencil((conv2.s1.x + 1), conv2.s1.y)*2) + (conv1.stencil((conv2.s1.x + 2), conv2.s1.y) + ((conv1.stencil(conv2.s1.x, (conv2.s1.y + 1))*2) + ((conv1.stencil((conv2.s1.x + 1), (conv2.s1.y + 1))*4) + ((conv1.stencil((conv2.s1.x + 2), (conv2.s1.y + 1))*2) + (conv1.stencil(conv2.s1.x, (conv2.s1.y + 2)) + (conv1.stencil((conv2.s1.x + 2), (conv2.s1.y + 2)) + (conv1.stencil((conv2.s1.x + 1), (conv2.s1.y + 2))*2))))))))))
hw_uint<32> hcompute_conv2_stencil_1(hw_uint<144>& conv1_stencil, hw_uint<16>& conv2_stencil) {
  int32_t _conv1_stencil_10 = (int32_t) conv1_stencil.extract<0, 15>();
  int32_t _conv1_stencil_2 = (int32_t) conv1_stencil.extract<16, 31>();
  int32_t _conv1_stencil_3 = (int32_t) conv1_stencil.extract<32, 47>();
  int32_t _conv1_stencil_4 = (int32_t) conv1_stencil.extract<48, 63>();
  int32_t _conv1_stencil_5 = (int32_t) conv1_stencil.extract<64, 79>();
  int32_t _conv1_stencil_6 = (int32_t) conv1_stencil.extract<80, 95>();
  int32_t _conv1_stencil_7 = (int32_t) conv1_stencil.extract<96, 111>();
  int32_t _conv1_stencil_8 = (int32_t) conv1_stencil.extract<112, 127>();
  int32_t _conv1_stencil_9 = (int32_t) conv1_stencil.extract<128, 143>();

  int32_t _conv2_stencil_1 = (int32_t) conv2_stencil.extract<0, 15>();

  int32_t _331 = _conv1_stencil_3 * 2;
  int32_t _332 = _conv1_stencil_5 * 2;
  int32_t _333 = _conv1_stencil_6 * 4;
  int32_t _334 = _conv1_stencil_7 * 2;
  int32_t _335 = _conv1_stencil_10 * 2;
  int32_t _336 = _conv1_stencil_9 + _335;
  int32_t _337 = _conv1_stencil_8 + _336;
  int32_t _338 = _334 + _337;
  int32_t _339 = _333 + _338;
  int32_t _340 = _332 + _339;
  int32_t _341 = _conv1_stencil_4 + _340;
  int32_t _342 = _331 + _341;
  int32_t _343 = _conv2_stencil_1 + _342;
  int32_t _344 = _conv1_stencil_2 + _343;
  return _344;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi) = uint8(conv2.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv2_stencil) {
  int32_t _conv2_stencil_2 = (int32_t) conv2_stencil.extract<0, 15>();

  uint8_t _387 = (uint8_t)(_conv2_stencil_2);
  return _387;
}

