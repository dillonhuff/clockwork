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

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(3, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_3(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_4 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, conv_s0_w) = (int16)0
hw_uint<16> hcompute_conv_stencil() {
  int16_t _396 = (int16_t)(0);
  return _396;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((conv.stencil(conv_s1_x, conv_s1_y, 0) + int16((int32(hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2)))*7))) + int16((int32(hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2)))*21)))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_1 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();

  int32_t _399 = (int32_t)(_hw_input_global_wrapper_stencil_1);
  int32_t _400 = _399 * 7;
  int16_t _401 = (int16_t)(_400);
  int16_t _402 = _conv_stencil_1 + _401;
  int32_t _403 = (int32_t)(_hw_input_global_wrapper_stencil_2);
  int32_t _404 = _403 * 21;
  int16_t _405 = (int16_t)(_404);
  int16_t _406 = _402 + _405;
  return _406;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((conv.stencil(conv_s1_x, conv_s1_y, 1) + int16((int32(hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2)))*29))) + int16((int32(hw_input_global_wrapper.stencil(3, ((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2)))*18)))
hw_uint<16> hcompute_conv_stencil_2(hw_uint<16>& conv_stencil, hw_uint<32>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_2 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();

  int32_t _430 = (int32_t)(_hw_input_global_wrapper_stencil_3);
  int32_t _431 = _430 * 29;
  int16_t _432 = (int16_t)(_431);
  int16_t _433 = _conv_stencil_2 + _432;
  int32_t _434 = (int32_t)(_hw_input_global_wrapper_stencil_4);
  int32_t _435 = _434 * 18;
  int16_t _436 = (int16_t)(_435);
  int16_t _437 = _433 + _436;
  return _437;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = conv.stencil(conv_s1_x, conv_s1_y, 2)
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_3 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_3;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((((((((((((conv.stencil(conv_s1_x, conv_s1_y, 3) + int16((int32(hw_input_global_wrapper.stencil(1, (conv_s1_x*2), (conv_s1_y*2)))*67))) + int16((int32(hw_input_global_wrapper.stencil(3, (conv_s1_x*2), (conv_s1_y*2)))*30))) + int16((int32(hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + 1), (conv_s1_y*2)))*37))) + int16((int32(hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + 1), (conv_s1_y*2)))*24))) + int16((int32(hw_input_global_wrapper.stencil(0, (conv_s1_x*2), ((conv_s1_y*2) + 1)))*32))) + int16((int32(hw_input_global_wrapper.stencil(1, (conv_s1_x*2), ((conv_s1_y*2) + 1)))*76))) + int16((int32(hw_input_global_wrapper.stencil(2, (conv_s1_x*2), ((conv_s1_y*2) + 1)))*39))) + int16((int32(hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + 1), ((conv_s1_y*2) + 1)))*86))) + int16((int32(hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + 1), ((conv_s1_y*2) + 1)))*89))) + int16((int32(hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + 2), ((conv_s1_y*2) + 1)))*19))) + int16((int32(hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2)))*4))) + int16((int32(hw_input_global_wrapper.stencil(3, ((conv_s1_x*2) + 2), ((conv_s1_y*2) + 2)))*13)))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<192>& hw_input_global_wrapper_stencil) {
  int16_t _conv_stencil_4 = (int16_t) conv_stencil.extract<0, 15>();

  int16_t _hw_input_global_wrapper_stencil_10 = (int16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_stencil_11 = (int16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_stencil_12 = (int16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  int16_t _hw_input_global_wrapper_stencil_13 = (int16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  int16_t _hw_input_global_wrapper_stencil_14 = (int16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  int16_t _hw_input_global_wrapper_stencil_15 = (int16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  int16_t _hw_input_global_wrapper_stencil_16 = (int16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  int16_t _hw_input_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  int16_t _hw_input_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_stencil.extract<128, 143>();
  int16_t _hw_input_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_stencil.extract<144, 159>();
  int16_t _hw_input_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_stencil.extract<160, 175>();
  int16_t _hw_input_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_stencil.extract<176, 191>();

  int32_t _462 = (int32_t)(_hw_input_global_wrapper_stencil_5);
  int32_t _463 = _462 * 67;
  int16_t _464 = (int16_t)(_463);
  int16_t _465 = _conv_stencil_4 + _464;
  int32_t _466 = (int32_t)(_hw_input_global_wrapper_stencil_6);
  int32_t _467 = _466 * 30;
  int16_t _468 = (int16_t)(_467);
  int16_t _469 = _465 + _468;
  int32_t _470 = (int32_t)(_hw_input_global_wrapper_stencil_7);
  int32_t _471 = _470 * 37;
  int16_t _472 = (int16_t)(_471);
  int16_t _473 = _469 + _472;
  int32_t _474 = (int32_t)(_hw_input_global_wrapper_stencil_8);
  int32_t _475 = _474 * 24;
  int16_t _476 = (int16_t)(_475);
  int16_t _477 = _473 + _476;
  int32_t _478 = (int32_t)(_hw_input_global_wrapper_stencil_9);
  int32_t _479 = _478 * 32;
  int16_t _480 = (int16_t)(_479);
  int16_t _481 = _477 + _480;
  int32_t _482 = (int32_t)(_hw_input_global_wrapper_stencil_10);
  int32_t _483 = _482 * 76;
  int16_t _484 = (int16_t)(_483);
  int16_t _485 = _481 + _484;
  int32_t _486 = (int32_t)(_hw_input_global_wrapper_stencil_11);
  int32_t _487 = _486 * 39;
  int16_t _488 = (int16_t)(_487);
  int16_t _489 = _485 + _488;
  int32_t _490 = (int32_t)(_hw_input_global_wrapper_stencil_12);
  int32_t _491 = _490 * 86;
  int16_t _492 = (int16_t)(_491);
  int16_t _493 = _489 + _492;
  int32_t _494 = (int32_t)(_hw_input_global_wrapper_stencil_13);
  int32_t _495 = _494 * 89;
  int16_t _496 = (int16_t)(_495);
  int16_t _497 = _493 + _496;
  int32_t _498 = (int32_t)(_hw_input_global_wrapper_stencil_14);
  int32_t _499 = _498 * 19;
  int16_t _500 = (int16_t)(_499);
  int16_t _501 = _497 + _500;
  int32_t _502 = (int32_t)(_hw_input_global_wrapper_stencil_15);
  int32_t _503 = _502 * 4;
  int16_t _504 = (int16_t)(_503);
  int16_t _505 = _501 + _504;
  int32_t _506 = (int32_t)(_hw_input_global_wrapper_stencil_16);
  int32_t _507 = _506 * 13;
  int16_t _508 = (int16_t)(_507);
  int16_t _509 = _505 + _508;
  return _509;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_w)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  int16_t _conv_stencil_5 = (int16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_5;
}

