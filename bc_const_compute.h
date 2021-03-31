#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: constant_exterior.stencil((constant_exterior_s0_x + 1), 0) = (int16)0
hw_uint<16> hcompute_constant_exterior_stencil() {
  int16_t _257 = (int16_t)(0);
  return _257;
}

//store is: constant_exterior.stencil(0, (constant_exterior_s0_y + 1)) = (int16)0
hw_uint<16> hcompute_constant_exterior_stencil_1() {
  int16_t _261 = (int16_t)(0);
  return _261;
}

//store is: constant_exterior.stencil((constant_exterior_s0_x_1 + 1), (constant_exterior_s0_y + 1)) = hw_input_global_wrapper.stencil(constant_exterior_s0_x_1, constant_exterior_s0_y)
hw_uint<16> hcompute_constant_exterior_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_1;
}

//store is: constant_exterior.stencil(65, (constant_exterior_s0_y + 1)) = (int16)0
hw_uint<16> hcompute_constant_exterior_stencil_3() {
  int16_t _268 = (int16_t)(0);
  return _268;
}

//store is: constant_exterior.stencil((constant_exterior_s0_x_2 + 1), 65) = (int16)0
hw_uint<16> hcompute_constant_exterior_stencil_4() {
  int16_t _272 = (int16_t)(0);
  return _272;
}

//store is: constant_exterior$1.stencil((constant_exterior_1_s0_x + 1), 0) = (int16)5
hw_uint<16> hcompute_constant_exterior_1_stencil() {
  int16_t _276 = (int16_t)(5);
  return _276;
}

//store is: constant_exterior$1.stencil(0, (constant_exterior_1_s0_y + 1)) = (int16)5
hw_uint<16> hcompute_constant_exterior_1_stencil_1() {
  int16_t _280 = (int16_t)(5);
  return _280;
}

//store is: constant_exterior$1.stencil((constant_exterior_1_s0_x_1 + 1), (constant_exterior_1_s0_y + 1)) = hw_input_global_wrapper.stencil(constant_exterior_1_s0_x_1, constant_exterior_1_s0_y)
hw_uint<16> hcompute_constant_exterior_1_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_stencil_2;
}

//store is: constant_exterior$1.stencil(65, (constant_exterior_1_s0_y + 1)) = (int16)5
hw_uint<16> hcompute_constant_exterior_1_stencil_3() {
  int16_t _287 = (int16_t)(5);
  return _287;
}

//store is: constant_exterior$1.stencil((constant_exterior_1_s0_x_2 + 1), 65) = (int16)5
hw_uint<16> hcompute_constant_exterior_1_stencil_4() {
  int16_t _291 = (int16_t)(5);
  return _291;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y) = (int16)0
hw_uint<16> hcompute_conv_stencil() {
  int16_t _295 = (int16_t)(0);
  return _295;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y) = (constant_exterior$1.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (constant_exterior.stencil((conv_s1_x + 2), (conv_s1_y + 2)) + (constant_exterior$1.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (constant_exterior.stencil((conv_s1_x + 1), (conv_s1_y + 2)) + (constant_exterior$1.stencil(conv_s1_x, (conv_s1_y + 2)) + (constant_exterior.stencil(conv_s1_x, (conv_s1_y + 2)) + (constant_exterior$1.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (constant_exterior.stencil((conv_s1_x + 2), (conv_s1_y + 1)) + (constant_exterior$1.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (constant_exterior.stencil((conv_s1_x + 1), (conv_s1_y + 1)) + (constant_exterior$1.stencil(conv_s1_x, (conv_s1_y + 1)) + (constant_exterior.stencil(conv_s1_x, (conv_s1_y + 1)) + (constant_exterior$1.stencil((conv_s1_x + 2), conv_s1_y) + (constant_exterior.stencil((conv_s1_x + 2), conv_s1_y) + (constant_exterior$1.stencil((conv_s1_x + 1), conv_s1_y) + (constant_exterior.stencil((conv_s1_x + 1), conv_s1_y) + (constant_exterior$1.stencil(conv_s1_x, conv_s1_y) + (conv.stencil(conv_s1_x, conv_s1_y) + constant_exterior.stencil(conv_s1_x, conv_s1_y)))))))))))))))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<144>& constant_exterior_stencil, hw_uint<144>& constant_exterior_1_stencil, hw_uint<16>& conv_stencil) {
  int16_t _constant_exterior_1_stencil_1 = (int16_t) constant_exterior_1_stencil.extract<0, 15>();
  int16_t _constant_exterior_1_stencil_2 = (int16_t) constant_exterior_1_stencil.extract<16, 31>();
  int16_t _constant_exterior_1_stencil_3 = (int16_t) constant_exterior_1_stencil.extract<32, 47>();
  int16_t _constant_exterior_1_stencil_4 = (int16_t) constant_exterior_1_stencil.extract<48, 63>();
  int16_t _constant_exterior_1_stencil_5 = (int16_t) constant_exterior_1_stencil.extract<64, 79>();
  int16_t _constant_exterior_1_stencil_6 = (int16_t) constant_exterior_1_stencil.extract<80, 95>();
  int16_t _constant_exterior_1_stencil_7 = (int16_t) constant_exterior_1_stencil.extract<96, 111>();
  int16_t _constant_exterior_1_stencil_8 = (int16_t) constant_exterior_1_stencil.extract<112, 127>();
  int16_t _constant_exterior_1_stencil_9 = (int16_t) constant_exterior_1_stencil.extract<128, 143>();

  int16_t _constant_exterior_stencil_1 = (int16_t) constant_exterior_stencil.extract<0, 15>();
  int16_t _constant_exterior_stencil_2 = (int16_t) constant_exterior_stencil.extract<16, 31>();
  int16_t _constant_exterior_stencil_3 = (int16_t) constant_exterior_stencil.extract<32, 47>();
  int16_t _constant_exterior_stencil_4 = (int16_t) constant_exterior_stencil.extract<48, 63>();
  int16_t _constant_exterior_stencil_5 = (int16_t) constant_exterior_stencil.extract<64, 79>();
  int16_t _constant_exterior_stencil_6 = (int16_t) constant_exterior_stencil.extract<80, 95>();
  int16_t _constant_exterior_stencil_7 = (int16_t) constant_exterior_stencil.extract<96, 111>();
  int16_t _constant_exterior_stencil_8 = (int16_t) constant_exterior_stencil.extract<112, 127>();
  int16_t _constant_exterior_stencil_9 = (int16_t) constant_exterior_stencil.extract<128, 143>();

  int16_t _conv_stencil_1 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _298 = _conv_stencil_1 + _constant_exterior_stencil_9;
  int16_t _299 = _constant_exterior_1_stencil_9 + _298;
  int16_t _300 = _constant_exterior_stencil_8 + _299;
  int16_t _301 = _constant_exterior_1_stencil_8 + _300;
  int16_t _302 = _constant_exterior_stencil_7 + _301;
  int16_t _303 = _constant_exterior_1_stencil_7 + _302;
  int16_t _304 = _constant_exterior_stencil_6 + _303;
  int16_t _305 = _constant_exterior_1_stencil_6 + _304;
  int16_t _306 = _constant_exterior_stencil_5 + _305;
  int16_t _307 = _constant_exterior_1_stencil_5 + _306;
  int16_t _308 = _constant_exterior_stencil_4 + _307;
  int16_t _309 = _constant_exterior_1_stencil_4 + _308;
  int16_t _310 = _constant_exterior_stencil_3 + _309;
  int16_t _311 = _constant_exterior_1_stencil_3 + _310;
  int16_t _312 = _constant_exterior_stencil_2 + _311;
  int16_t _313 = _constant_exterior_1_stencil_2 + _312;
  int16_t _314 = _constant_exterior_stencil_1 + _313;
  int16_t _315 = _constant_exterior_1_stencil_1 + _314;
  return _315;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_2 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_2;
}

