#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: repeat_edge.stencil((repeat_edge_s0_x + 1), 0) = hw_input_global_wrapper.stencil(max(min(repeat_edge_s0_x, 63), 0), 0)
hw_uint<16> hcompute_repeat_edge_stencil(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: repeat_edge.stencil(0, (repeat_edge_s0_y + 1)) = hw_input_global_wrapper.stencil(0, repeat_edge_s0_y)
hw_uint<16> hcompute_repeat_edge_stencil_1(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: repeat_edge.stencil((repeat_edge_s0_x_1 + 1), (repeat_edge_s0_y + 1)) = hw_input_global_wrapper.stencil(repeat_edge_s0_x_1, repeat_edge_s0_y)
hw_uint<16> hcompute_repeat_edge_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_3;
}

//store is: repeat_edge.stencil(65, (repeat_edge_s0_y + 1)) = hw_input_global_wrapper.stencil(63, repeat_edge_s0_y)
hw_uint<16> hcompute_repeat_edge_stencil_3(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_4;
}

//store is: repeat_edge.stencil((repeat_edge_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(max(min(repeat_edge_s0_x_2, 63), 0), 63)
hw_uint<16> hcompute_repeat_edge_stencil_4(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_5;
}

//store is: repeat_image.stencil((repeat_image_s0_x + 1), 0) = hw_input_global_wrapper.stencil(select(((64 <= repeat_image_s0_x) || (repeat_image_s0_x < 0)), (repeat_image_s0_x % 64), max(min(repeat_image_s0_x, 63), 0)), 63)
hw_uint<16> hcompute_repeat_image_stencil(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_6;
}

//store is: repeat_image.stencil(0, (repeat_image_s0_y + 1)) = hw_input_global_wrapper.stencil(63, repeat_image_s0_y)
hw_uint<16> hcompute_repeat_image_stencil_1(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_7;
}

//store is: repeat_image.stencil((repeat_image_s0_x_1 + 1), (repeat_image_s0_y + 1)) = hw_input_global_wrapper.stencil(repeat_image_s0_x_1, repeat_image_s0_y)
hw_uint<16> hcompute_repeat_image_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_8;
}

//store is: repeat_image.stencil(65, (repeat_image_s0_y + 1)) = hw_input_global_wrapper.stencil(0, repeat_image_s0_y)
hw_uint<16> hcompute_repeat_image_stencil_3(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_9;
}

//store is: repeat_image.stencil((repeat_image_s0_x_2 + 1), 65) = hw_input_global_wrapper.stencil(select(((64 <= repeat_image_s0_x_2) || (repeat_image_s0_x_2 < 0)), (repeat_image_s0_x_2 % 64), max(min(repeat_image_s0_x_2, 63), 0)), 0)
hw_uint<16> hcompute_repeat_image_stencil_4(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_10 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_10;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (int16)0
hw_uint<16> hcompute_conv_stencil() {
  int16_t _297 = (int16_t)(0);
  return _297;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (repeat_image.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (repeat_edge.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (repeat_image.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (repeat_edge.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (repeat_image.stencil(conv_s1_x, (conv_s1_y + 2)) + (repeat_edge.stencil(conv_s1_x, (conv_s1_y + 2)) + (repeat_image.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (repeat_edge.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (repeat_image.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (repeat_edge.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (repeat_image.stencil(conv_s1_x, (conv_s1_y + 1)) + (repeat_edge.stencil(conv_s1_x, (conv_s1_y + 1)) + (repeat_image.stencil((conv_s1_x + 2), conv_s1_y) + (repeat_edge.stencil((conv_s1_x + 2), conv_s1_y) + (repeat_image.stencil((conv_s1_x + 1), conv_s1_y) + (repeat_edge.stencil((conv_s1_x + 1), conv_s1_y) + (repeat_image.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + repeat_edge.stencil(conv_s1_x, conv_s1_y)))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<144>& repeat_edge_stencil, hw_uint<144>& repeat_image_stencil) {
  int16_t _conv_stencil_1 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _repeat_edge_stencil_1 = (int16_t) repeat_edge_stencil.extract<0, 15>();
  int16_t _repeat_edge_stencil_2 = (int16_t) repeat_edge_stencil.extract<16, 31>();
  int16_t _repeat_edge_stencil_3 = (int16_t) repeat_edge_stencil.extract<32, 47>();
  int16_t _repeat_edge_stencil_4 = (int16_t) repeat_edge_stencil.extract<48, 63>();
  int16_t _repeat_edge_stencil_5 = (int16_t) repeat_edge_stencil.extract<64, 79>();
  int16_t _repeat_edge_stencil_6 = (int16_t) repeat_edge_stencil.extract<80, 95>();
  int16_t _repeat_edge_stencil_7 = (int16_t) repeat_edge_stencil.extract<96, 111>();
  int16_t _repeat_edge_stencil_8 = (int16_t) repeat_edge_stencil.extract<112, 127>();
  int16_t _repeat_edge_stencil_9 = (int16_t) repeat_edge_stencil.extract<128, 143>();

  int16_t _repeat_image_stencil_1 = (int16_t) repeat_image_stencil.extract<0, 15>();
  int16_t _repeat_image_stencil_2 = (int16_t) repeat_image_stencil.extract<16, 31>();
  int16_t _repeat_image_stencil_3 = (int16_t) repeat_image_stencil.extract<32, 47>();
  int16_t _repeat_image_stencil_4 = (int16_t) repeat_image_stencil.extract<48, 63>();
  int16_t _repeat_image_stencil_5 = (int16_t) repeat_image_stencil.extract<64, 79>();
  int16_t _repeat_image_stencil_6 = (int16_t) repeat_image_stencil.extract<80, 95>();
  int16_t _repeat_image_stencil_7 = (int16_t) repeat_image_stencil.extract<96, 111>();
  int16_t _repeat_image_stencil_8 = (int16_t) repeat_image_stencil.extract<112, 127>();
  int16_t _repeat_image_stencil_9 = (int16_t) repeat_image_stencil.extract<128, 143>();

  int16_t _300 = _conv_stencil_1 + _repeat_edge_stencil_9;
  int16_t _301 = _repeat_image_stencil_9 + _300;
  int16_t _302 = _repeat_edge_stencil_8 + _301;
  int16_t _303 = _repeat_image_stencil_8 + _302;
  int16_t _304 = _repeat_edge_stencil_7 + _303;
  int16_t _305 = _repeat_image_stencil_7 + _304;
  int16_t _306 = _repeat_edge_stencil_6 + _305;
  int16_t _307 = _repeat_image_stencil_6 + _306;
  int16_t _308 = _repeat_edge_stencil_5 + _307;
  int16_t _309 = _repeat_image_stencil_5 + _308;
  int16_t _310 = _repeat_edge_stencil_4 + _309;
  int16_t _311 = _repeat_image_stencil_4 + _310;
  int16_t _312 = _repeat_edge_stencil_3 + _311;
  int16_t _313 = _repeat_image_stencil_3 + _312;
  int16_t _314 = _repeat_edge_stencil_2 + _313;
  int16_t _315 = _repeat_image_stencil_2 + _314;
  int16_t _316 = _repeat_edge_stencil_1 + _315;
  int16_t _317 = _repeat_image_stencil_1 + _316;
  return _317;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_2 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

