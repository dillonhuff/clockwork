#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: mirror_image.stencil((mirror_image_s0_x + 1), 0) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_s0_x) || (mirror_image_s0_x < 0)), min(select(((mirror_image_s0_x % 128) < 64), (mirror_image_s0_x % 128), (127 - (mirror_image_s0_x % 128))), 63), max(min(mirror_image_s0_x, 63), 0)), 0)
hw_uint<16> hcompute_mirror_image_stencil(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: mirror_image.stencil(0, (mirror_image_s0_y + 1)) = hw_input_global_wrapper.stencil(0, mirror_image_s0_y)
hw_uint<16> hcompute_mirror_image_stencil_1(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: mirror_image.stencil((mirror_image_s0_x_1 + 1), (mirror_image_s0_y + 1)) = hw_input_global_wrapper.stencil(mirror_image_s0_x_1, mirror_image_s0_y)
hw_uint<16> hcompute_mirror_image_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_3;
}

//store is: mirror_image.stencil(65, (mirror_image_s0_y + 1)) = hw_input_global_wrapper.stencil(63, mirror_image_s0_y)
hw_uint<16> hcompute_mirror_image_stencil_3(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_4;
}

//store is: mirror_image.stencil((mirror_image_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_s0_x_2) || (mirror_image_s0_x_2 < 0)), min(select(((mirror_image_s0_x_2 % 128) < 64), (mirror_image_s0_x_2 % 128), (127 - (mirror_image_s0_x_2 % 128))), 63), max(min(mirror_image_s0_x_2, 63), 0)), 63)
hw_uint<16> hcompute_mirror_image_stencil_4(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_5;
}

//store is: mirror_image$1.stencil((mirror_image_1_s0_x + 1), 0) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_1_s0_x) || (mirror_image_1_s0_x < 0)), min(select(((mirror_image_1_s0_x % 128) < 64), (mirror_image_1_s0_x % 128), (127 - (mirror_image_1_s0_x % 128))), 63), max(min(mirror_image_1_s0_x, 63), 0)), 0)
hw_uint<16> hcompute_mirror_image_1_stencil(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_6;
}

//store is: mirror_image$1.stencil(0, (mirror_image_1_s0_y + 1)) = hw_input_global_wrapper.stencil(0, mirror_image_1_s0_y)
hw_uint<16> hcompute_mirror_image_1_stencil_1(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_7;
}

//store is: mirror_image$1.stencil((mirror_image_1_s0_x_1 + 1), (mirror_image_1_s0_y + 1)) = hw_input_global_wrapper.stencil(mirror_image_1_s0_x_1, mirror_image_1_s0_y)
hw_uint<16> hcompute_mirror_image_1_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_8;
}

//store is: mirror_image$1.stencil(65, (mirror_image_1_s0_y + 1)) = hw_input_global_wrapper.stencil(63, mirror_image_1_s0_y)
hw_uint<16> hcompute_mirror_image_1_stencil_3(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_9;
}

//store is: mirror_image$1.stencil((mirror_image_1_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(select(((64 <= mirror_image_1_s0_x_2) || (mirror_image_1_s0_x_2 < 0)), min(select(((mirror_image_1_s0_x_2 % 128) < 64), (mirror_image_1_s0_x_2 % 128), (127 - (mirror_image_1_s0_x_2 % 128))), 63), max(min(mirror_image_1_s0_x_2, 63), 0)), 63)
hw_uint<16> hcompute_mirror_image_1_stencil_4(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_10 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_10;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (int16)0
hw_uint<16> hcompute_conv_stencil() {
  int16_t _323 = (int16_t)(0);
  return _323;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (mirror_image$1.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (mirror_image.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (mirror_image$1.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (mirror_image.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (mirror_image$1.stencil(conv_s1_x, (conv_s1_y + 2)) + (mirror_image.stencil(conv_s1_x, (conv_s1_y + 2)) + (mirror_image$1.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (mirror_image.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (mirror_image$1.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (mirror_image.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (mirror_image$1.stencil(conv_s1_x, (conv_s1_y + 1)) + (mirror_image.stencil(conv_s1_x, (conv_s1_y + 1)) + (mirror_image$1.stencil((conv_s1_x + 2), conv_s1_y) + (mirror_image.stencil((conv_s1_x + 2), conv_s1_y) + (mirror_image$1.stencil((conv_s1_x + 1), conv_s1_y) + (mirror_image.stencil((conv_s1_x + 1), conv_s1_y) + (mirror_image$1.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + mirror_image.stencil(conv_s1_x, conv_s1_y)))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<144>& mirror_image_stencil, hw_uint<144>& mirror_image_1_stencil) {
  int16_t _conv_stencil_1 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _mirror_image_1_stencil_1 = (int16_t) mirror_image_1_stencil.extract<0, 15>();
  int16_t _mirror_image_1_stencil_2 = (int16_t) mirror_image_1_stencil.extract<16, 31>();
  int16_t _mirror_image_1_stencil_3 = (int16_t) mirror_image_1_stencil.extract<32, 47>();
  int16_t _mirror_image_1_stencil_4 = (int16_t) mirror_image_1_stencil.extract<48, 63>();
  int16_t _mirror_image_1_stencil_5 = (int16_t) mirror_image_1_stencil.extract<64, 79>();
  int16_t _mirror_image_1_stencil_6 = (int16_t) mirror_image_1_stencil.extract<80, 95>();
  int16_t _mirror_image_1_stencil_7 = (int16_t) mirror_image_1_stencil.extract<96, 111>();
  int16_t _mirror_image_1_stencil_8 = (int16_t) mirror_image_1_stencil.extract<112, 127>();
  int16_t _mirror_image_1_stencil_9 = (int16_t) mirror_image_1_stencil.extract<128, 143>();

  int16_t _mirror_image_stencil_1 = (int16_t) mirror_image_stencil.extract<0, 15>();
  int16_t _mirror_image_stencil_2 = (int16_t) mirror_image_stencil.extract<16, 31>();
  int16_t _mirror_image_stencil_3 = (int16_t) mirror_image_stencil.extract<32, 47>();
  int16_t _mirror_image_stencil_4 = (int16_t) mirror_image_stencil.extract<48, 63>();
  int16_t _mirror_image_stencil_5 = (int16_t) mirror_image_stencil.extract<64, 79>();
  int16_t _mirror_image_stencil_6 = (int16_t) mirror_image_stencil.extract<80, 95>();
  int16_t _mirror_image_stencil_7 = (int16_t) mirror_image_stencil.extract<96, 111>();
  int16_t _mirror_image_stencil_8 = (int16_t) mirror_image_stencil.extract<112, 127>();
  int16_t _mirror_image_stencil_9 = (int16_t) mirror_image_stencil.extract<128, 143>();

  int16_t _326 = _conv_stencil_1 + _mirror_image_stencil_9;
  int16_t _327 = _mirror_image_1_stencil_9 + _326;
  int16_t _328 = _mirror_image_stencil_8 + _327;
  int16_t _329 = _mirror_image_1_stencil_8 + _328;
  int16_t _330 = _mirror_image_stencil_7 + _329;
  int16_t _331 = _mirror_image_1_stencil_7 + _330;
  int16_t _332 = _mirror_image_stencil_6 + _331;
  int16_t _333 = _mirror_image_1_stencil_6 + _332;
  int16_t _334 = _mirror_image_stencil_5 + _333;
  int16_t _335 = _mirror_image_1_stencil_5 + _334;
  int16_t _336 = _mirror_image_stencil_4 + _335;
  int16_t _337 = _mirror_image_1_stencil_4 + _336;
  int16_t _338 = _mirror_image_stencil_3 + _337;
  int16_t _339 = _mirror_image_1_stencil_3 + _338;
  int16_t _340 = _mirror_image_stencil_2 + _339;
  int16_t _341 = _mirror_image_1_stencil_2 + _340;
  int16_t _342 = _mirror_image_stencil_1 + _341;
  int16_t _343 = _mirror_image_1_stencil_1 + _342;
  return _343;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_2 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

