#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, conv_s0_w) = (int16)0
hw_uint<16> hcompute_conv_stencil() {
  int16_t _394 = (int16_t)(0);
  return _394;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = (conv.stencil(conv_s1_x, conv_s1_y, 0) + int16((int32(hw_input_global_wrapper.stencil(0, (conv_s1_x + 2), (conv_s1_y + 2)))*13)))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<16>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_1 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  int32_t _397 = (int32_t)(_hw_input_global_wrapper_stencil_1);
  int32_t _398 = _397 * 13;
  int16_t _399 = (int16_t)(_398);
  int16_t _400 = _conv_stencil_1 + _399;
  return _400;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = (((((((((((conv.stencil(conv_s1_x, conv_s1_y, 1) + int16((int32(hw_input_global_wrapper.stencil(0, conv_s1_x, conv_s1_y))*35))) + int16((int32(hw_input_global_wrapper.stencil(1, conv_s1_x, conv_s1_y))*92))) + int16((int32(hw_input_global_wrapper.stencil(0, (conv_s1_x + 1), conv_s1_y))*27))) + int16((int32(hw_input_global_wrapper.stencil(1, (conv_s1_x + 1), conv_s1_y))*59))) + int16((int32(hw_input_global_wrapper.stencil(1, (conv_s1_x + 2), conv_s1_y))*36))) + int16((int32(hw_input_global_wrapper.stencil(1, conv_s1_x, (conv_s1_y + 1)))*30))) + int16((int32(hw_input_global_wrapper.stencil(0, (conv_s1_x + 2), (conv_s1_y + 1)))*67))) + int16((int32(hw_input_global_wrapper.stencil(1, (conv_s1_x + 2), (conv_s1_y + 1)))*56))) + int16((int32(hw_input_global_wrapper.stencil(1, conv_s1_x, (conv_s1_y + 2)))*21))) + int16((int32(hw_input_global_wrapper.stencil(0, (conv_s1_x + 1), (conv_s1_y + 2)))*24))) + int16((int32(hw_input_global_wrapper.stencil(0, (conv_s1_x + 2), (conv_s1_y + 2)))*80)))
hw_uint<16> hcompute_conv_stencil_2(hw_uint<16>& conv_stencil, hw_uint<176>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_2 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_10 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_11 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_12 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();

  int32_t _413 = (int32_t)(_hw_input_global_wrapper_stencil_2);
  int32_t _414 = _413 * 35;
  int16_t _415 = (int16_t)(_414);
  int16_t _416 = _conv_stencil_2 + _415;
  int32_t _417 = (int32_t)(_hw_input_global_wrapper_stencil_3);
  int32_t _418 = _417 * 92;
  int16_t _419 = (int16_t)(_418);
  int16_t _420 = _416 + _419;
  int32_t _421 = (int32_t)(_hw_input_global_wrapper_stencil_4);
  int32_t _422 = _421 * 27;
  int16_t _423 = (int16_t)(_422);
  int16_t _424 = _420 + _423;
  int32_t _425 = (int32_t)(_hw_input_global_wrapper_stencil_5);
  int32_t _426 = _425 * 59;
  int16_t _427 = (int16_t)(_426);
  int16_t _428 = _424 + _427;
  int32_t _429 = (int32_t)(_hw_input_global_wrapper_stencil_6);
  int32_t _430 = _429 * 36;
  int16_t _431 = (int16_t)(_430);
  int16_t _432 = _428 + _431;
  int32_t _433 = (int32_t)(_hw_input_global_wrapper_stencil_7);
  int32_t _434 = _433 * 30;
  int16_t _435 = (int16_t)(_434);
  int16_t _436 = _432 + _435;
  int32_t _437 = (int32_t)(_hw_input_global_wrapper_stencil_8);
  int32_t _438 = _437 * 67;
  int16_t _439 = (int16_t)(_438);
  int16_t _440 = _436 + _439;
  int32_t _441 = (int32_t)(_hw_input_global_wrapper_stencil_9);
  int32_t _442 = _441 * 56;
  int16_t _443 = (int16_t)(_442);
  int16_t _444 = _440 + _443;
  int32_t _445 = (int32_t)(_hw_input_global_wrapper_stencil_10);
  int32_t _446 = _445 * 21;
  int16_t _447 = (int16_t)(_446);
  int16_t _448 = _444 + _447;
  int32_t _449 = (int32_t)(_hw_input_global_wrapper_stencil_11);
  int32_t _450 = _449 * 24;
  int16_t _451 = (int16_t)(_450);
  int16_t _452 = _448 + _451;
  int32_t _453 = (int32_t)(_hw_input_global_wrapper_stencil_12);
  int32_t _454 = _453 * 80;
  int16_t _455 = (int16_t)(_454);
  int16_t _456 = _452 + _455;
  return _456;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_3 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_3;
}

