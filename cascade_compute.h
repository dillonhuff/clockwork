#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: conv1.stencil(conv1_s0_x, conv1_s0_y) = (uint16)0
hw_uint<16> hcompute_conv1_stencil() {
  uint16_t _257 = (uint16_t)(0);
  return _257;
}

//store is: conv1.stencil(conv1_s1_x, conv1_s1_y) = (hw_input_global_wrapper.stencil(conv1_s1_x, conv1_s1_y) + (conv1.stencil(conv1_s1_x, conv1_s1_y) + ((hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 1))*(uint16)2) + (hw_input_global_wrapper.stencil(conv1_s1_x, (conv1_s1_y + 2)) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), conv1_s1_y)*(uint16)2) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 1))*(uint16)4) + ((hw_input_global_wrapper.stencil((conv1_s1_x + 1), (conv1_s1_y + 2))*(uint16)2) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), conv1_s1_y) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 2)) + (hw_input_global_wrapper.stencil((conv1_s1_x + 2), (conv1_s1_y + 1))*(uint16)2))))))))))
hw_uint<16> hcompute_conv1_stencil_1(hw_uint<16>& conv1_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
  uint16_t _conv1_stencil_1 = (uint16_t) conv1_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_stencil.extract<128, 143>();

  uint16_t _260 = (uint16_t)(2);
  uint16_t _261 = _hw_input_global_wrapper_stencil_2 * _260;
  uint16_t _262 = _hw_input_global_wrapper_stencil_4 * _260;
  uint16_t _263 = (uint16_t)(4);
  uint16_t _264 = _hw_input_global_wrapper_stencil_5 * _263;
  uint16_t _265 = _hw_input_global_wrapper_stencil_6 * _260;
  uint16_t _266 = _hw_input_global_wrapper_stencil_9 * _260;
  uint16_t _267 = _hw_input_global_wrapper_stencil_8 + _266;
  uint16_t _268 = _hw_input_global_wrapper_stencil_7 + _267;
  uint16_t _269 = _265 + _268;
  uint16_t _270 = _264 + _269;
  uint16_t _271 = _262 + _270;
  uint16_t _272 = _hw_input_global_wrapper_stencil_3 + _271;
  uint16_t _273 = _261 + _272;
  uint16_t _274 = _conv1_stencil_1 + _273;
  uint16_t _275 = _hw_input_global_wrapper_stencil_1 + _274;
  return _275;
}

//store is: conv2.stencil(conv2_s0_x, conv2_s0_y) = (uint16)0
hw_uint<16> hcompute_conv2_stencil() {
  uint16_t _322 = (uint16_t)(0);
  return _322;
}

//store is: conv2.stencil(conv2_s1_x, conv2_s1_y) = (conv1.stencil(conv2_s1_x, conv2_s1_y) + (conv2.stencil(conv2_s1_x, conv2_s1_y) + ((conv1.stencil((conv2_s1_x + 1), conv2_s1_y)*(uint16)2) + (conv1.stencil((conv2_s1_x + 2), conv2_s1_y) + ((conv1.stencil(conv2_s1_x, (conv2_s1_y + 1))*(uint16)2) + ((conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 1))*(uint16)4) + ((conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 1))*(uint16)2) + (conv1.stencil(conv2_s1_x, (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 2), (conv2_s1_y + 2)) + (conv1.stencil((conv2_s1_x + 1), (conv2_s1_y + 2))*(uint16)2))))))))))
hw_uint<16> hcompute_conv2_stencil_1(hw_uint<144>& conv1_stencil, hw_uint<16>& conv2_stencil) {
  uint16_t _conv1_stencil_10 = (uint16_t) conv1_stencil.extract<0, 15>();
  uint16_t _conv1_stencil_2 = (uint16_t) conv1_stencil.extract<16, 31>();
  uint16_t _conv1_stencil_3 = (uint16_t) conv1_stencil.extract<32, 47>();
  uint16_t _conv1_stencil_4 = (uint16_t) conv1_stencil.extract<48, 63>();
  uint16_t _conv1_stencil_5 = (uint16_t) conv1_stencil.extract<64, 79>();
  uint16_t _conv1_stencil_6 = (uint16_t) conv1_stencil.extract<80, 95>();
  uint16_t _conv1_stencil_7 = (uint16_t) conv1_stencil.extract<96, 111>();
  uint16_t _conv1_stencil_8 = (uint16_t) conv1_stencil.extract<112, 127>();
  uint16_t _conv1_stencil_9 = (uint16_t) conv1_stencil.extract<128, 143>();

  uint16_t _conv2_stencil_1 = (uint16_t) conv2_stencil.extract<0, 15>();

  uint16_t _325 = (uint16_t)(2);
  uint16_t _326 = _conv1_stencil_3 * _325;
  uint16_t _327 = _conv1_stencil_5 * _325;
  uint16_t _328 = (uint16_t)(4);
  uint16_t _329 = _conv1_stencil_6 * _328;
  uint16_t _330 = _conv1_stencil_7 * _325;
  uint16_t _331 = _conv1_stencil_10 * _325;
  uint16_t _332 = _conv1_stencil_9 + _331;
  uint16_t _333 = _conv1_stencil_8 + _332;
  uint16_t _334 = _330 + _333;
  uint16_t _335 = _329 + _334;
  uint16_t _336 = _327 + _335;
  uint16_t _337 = _conv1_stencil_4 + _336;
  uint16_t _338 = _326 + _337;
  uint16_t _339 = _conv2_stencil_1 + _338;
  uint16_t _340 = _conv1_stencil_2 + _339;
  return _340;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv2.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv2_stencil) {
  uint16_t _conv2_stencil_2 = (uint16_t) conv2_stencil.extract<0, 15>();

  return _conv2_stencil_2;
}

