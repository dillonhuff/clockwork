#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_4 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_5 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_6 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -1), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_6(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_7 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_7;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -1), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_7(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_8 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_8;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x*4) + (0*294)) + -1), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_8(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_9 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_9;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*4) + (0*294)), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_9(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_10 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_10;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*4) + (0*294)), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_10(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_11 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_11;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*4) + (0*294)), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_11(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_12 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_12;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_1 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_2 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*4), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_3 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_4 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_5 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_6 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_7 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_7;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_8 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_8;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_9 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_9;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_9(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_10 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_10;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_10(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_11 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_11;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_11(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_12 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_12;
}

//store is: gray.stencil((gray_s0_x_x*4), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*4), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*4), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*4), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _480 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_1);
  uint16_t _481 = (uint16_t)(150);
  uint16_t _482 = _480 * _481;
  uint16_t _483 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_2);
  uint16_t _484 = (uint16_t)(29);
  uint16_t _485 = _483 * _484;
  uint16_t _486 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_3);
  uint16_t _487 = (uint16_t)(77);
  uint16_t _488 = _486 * _487;
  uint16_t _489 = _485 + _488;
  uint16_t _490 = _482 + _489;
  uint16_t _491 = (uint16_t)(8);
  uint16_t _492 = _490 >> _491;
  return _492;
}

//store is: gray.stencil(((gray_s0_x_x*4) + 1), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*4) + 1), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*4) + 1), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*4) + 1), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_1(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _525 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_4);
  uint16_t _526 = (uint16_t)(150);
  uint16_t _527 = _525 * _526;
  uint16_t _528 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_5);
  uint16_t _529 = (uint16_t)(29);
  uint16_t _530 = _528 * _529;
  uint16_t _531 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_6);
  uint16_t _532 = (uint16_t)(77);
  uint16_t _533 = _531 * _532;
  uint16_t _534 = _530 + _533;
  uint16_t _535 = _527 + _534;
  uint16_t _536 = (uint16_t)(8);
  uint16_t _537 = _535 >> _536;
  return _537;
}

//store is: gray.stencil(((gray_s0_x_x*4) + 2), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*4) + 2), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*4) + 2), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*4) + 2), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_2(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_7 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_8 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_9 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _571 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_7);
  uint16_t _572 = (uint16_t)(150);
  uint16_t _573 = _571 * _572;
  uint16_t _574 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_8);
  uint16_t _575 = (uint16_t)(29);
  uint16_t _576 = _574 * _575;
  uint16_t _577 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_9);
  uint16_t _578 = (uint16_t)(77);
  uint16_t _579 = _577 * _578;
  uint16_t _580 = _576 + _579;
  uint16_t _581 = _573 + _580;
  uint16_t _582 = (uint16_t)(8);
  uint16_t _583 = _581 >> _582;
  return _583;
}

//store is: gray.stencil(((gray_s0_x_x*4) + 3), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*4) + 3), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*4) + 3), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*4) + 3), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_3(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_10 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_11 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_12 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _617 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_10);
  uint16_t _618 = (uint16_t)(150);
  uint16_t _619 = _617 * _618;
  uint16_t _620 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_11);
  uint16_t _621 = (uint16_t)(29);
  uint16_t _622 = _620 * _621;
  uint16_t _623 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_12);
  uint16_t _624 = (uint16_t)(77);
  uint16_t _625 = _623 * _624;
  uint16_t _626 = _622 + _625;
  uint16_t _627 = _619 + _626;
  uint16_t _628 = (uint16_t)(8);
  uint16_t _629 = _627 >> _628;
  return _629;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*4), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _664 = (int16_t)(0);
  return _664;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*4) + 1), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_1() {
  int16_t _670 = (int16_t)(0);
  return _670;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*4) + 2), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_2() {
  int16_t _677 = (int16_t)(0);
  return _677;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*4) + 3), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_3() {
  int16_t _684 = (int16_t)(0);
  return _684;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*4), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*4), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*4), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*4), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*4), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_4(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_1 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_2 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_3 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_4 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_5 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_6 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _692 = (int16_t)(_gray_stencil_1);
  int16_t _693 = (int16_t)(2);
  int16_t _694 = _692 * _693;
  int16_t _695 = _grad_x_unclamp_stencil_1 + _694;
  int16_t _696 = (int16_t)(_gray_stencil_2);
  int16_t _697 = _695 - _696;
  int16_t _698 = (int16_t)(_gray_stencil_3);
  int16_t _699 = _697 + _698;
  int16_t _700 = (int16_t)(_gray_stencil_4);
  int16_t _701 = _700 * _693;
  int16_t _702 = _699 - _701;
  int16_t _703 = (int16_t)(_gray_stencil_5);
  int16_t _704 = _702 - _703;
  int16_t _705 = (int16_t)(_gray_stencil_6);
  int16_t _706 = _704 + _705;
  return _706;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 1), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 1), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 1), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 1), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 1), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_5(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_10 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_11 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_12 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_7 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_8 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_9 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _750 = (int16_t)(_gray_stencil_7);
  int16_t _751 = (int16_t)(2);
  int16_t _752 = _750 * _751;
  int16_t _753 = _grad_x_unclamp_stencil_2 + _752;
  int16_t _754 = (int16_t)(_gray_stencil_8);
  int16_t _755 = _753 - _754;
  int16_t _756 = (int16_t)(_gray_stencil_9);
  int16_t _757 = _755 + _756;
  int16_t _758 = (int16_t)(_gray_stencil_10);
  int16_t _759 = _758 * _751;
  int16_t _760 = _757 - _759;
  int16_t _761 = (int16_t)(_gray_stencil_11);
  int16_t _762 = _760 - _761;
  int16_t _763 = (int16_t)(_gray_stencil_12);
  int16_t _764 = _762 + _763;
  return _764;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 4), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 4), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 2), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 4), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_6(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_13 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_14 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_15 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_16 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_17 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_18 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _809 = (int16_t)(_gray_stencil_13);
  int16_t _810 = (int16_t)(2);
  int16_t _811 = _809 * _810;
  int16_t _812 = _grad_x_unclamp_stencil_3 + _811;
  int16_t _813 = (int16_t)(_gray_stencil_14);
  int16_t _814 = _812 - _813;
  int16_t _815 = (int16_t)(_gray_stencil_15);
  int16_t _816 = _814 + _815;
  int16_t _817 = (int16_t)(_gray_stencil_16);
  int16_t _818 = _817 * _810;
  int16_t _819 = _816 - _818;
  int16_t _820 = (int16_t)(_gray_stencil_17);
  int16_t _821 = _819 - _820;
  int16_t _822 = (int16_t)(_gray_stencil_18);
  int16_t _823 = _821 + _822;
  return _823;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 5), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 5), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 3), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*4) + 5), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_7(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_4 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_19 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_20 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_21 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_22 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_23 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_24 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _868 = (int16_t)(_gray_stencil_19);
  int16_t _869 = (int16_t)(2);
  int16_t _870 = _868 * _869;
  int16_t _871 = _grad_x_unclamp_stencil_4 + _870;
  int16_t _872 = (int16_t)(_gray_stencil_20);
  int16_t _873 = _871 - _872;
  int16_t _874 = (int16_t)(_gray_stencil_21);
  int16_t _875 = _873 + _874;
  int16_t _876 = (int16_t)(_gray_stencil_22);
  int16_t _877 = _876 * _869;
  int16_t _878 = _875 - _877;
  int16_t _879 = (int16_t)(_gray_stencil_23);
  int16_t _880 = _878 - _879;
  int16_t _881 = (int16_t)(_gray_stencil_24);
  int16_t _882 = _880 + _881;
  return _882;
}

//store is: lxx.stencil((lxx_s0_x_x*4), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*4), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*4), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_5 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _928 = (int16_t)(180);
  int16_t _929 = min(_grad_x_unclamp_stencil_5, _928);
  int16_t _930 = (int16_t)(-180);
  int16_t _931 = max(_929, _930);
  int16_t _932 = _931 * _931;
  int16_t _933 = (int16_t)(6);
  int16_t _934 = _932 >> _933;
  return _934;
}

//store is: lxx.stencil(((lxx_s0_x_x*4) + 1), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 1), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 1), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_6 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _953 = (int16_t)(180);
  int16_t _954 = min(_grad_x_unclamp_stencil_6, _953);
  int16_t _955 = (int16_t)(-180);
  int16_t _956 = max(_954, _955);
  int16_t _957 = _956 * _956;
  int16_t _958 = (int16_t)(6);
  int16_t _959 = _957 >> _958;
  return _959;
}

//store is: lxx.stencil(((lxx_s0_x_x*4) + 2), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 2), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 2), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_2(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_7 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _979 = (int16_t)(180);
  int16_t _980 = min(_grad_x_unclamp_stencil_7, _979);
  int16_t _981 = (int16_t)(-180);
  int16_t _982 = max(_980, _981);
  int16_t _983 = _982 * _982;
  int16_t _984 = (int16_t)(6);
  int16_t _985 = _983 >> _984;
  return _985;
}

//store is: lxx.stencil(((lxx_s0_x_x*4) + 3), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 3), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*4) + 3), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_3(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_8 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _1005 = (int16_t)(180);
  int16_t _1006 = min(_grad_x_unclamp_stencil_8, _1005);
  int16_t _1007 = (int16_t)(-180);
  int16_t _1008 = max(_1006, _1007);
  int16_t _1009 = _1008 * _1008;
  int16_t _1010 = (int16_t)(6);
  int16_t _1011 = _1009 >> _1010;
  return _1011;
}

//store is: lgxx.stencil((lgxx_s0_x_x*4), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _1032 = (int16_t)(0);
  return _1032;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*4) + 1), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _1038 = (int16_t)(0);
  return _1038;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*4) + 2), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _1045 = (int16_t)(0);
  return _1045;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*4) + 3), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_3() {
  int16_t _1052 = (int16_t)(0);
  return _1052;
}

//store is: lgxx.stencil((lgxx_s1_x_x*4), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil((lgxx_s1_x_x*4), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil((lgxx_s1_x_x*4), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil((lgxx_s1_x_x*4), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil((lgxx_s1_x_x*4), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_4(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_1 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_2 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_3 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_4 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_5 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_6 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_7 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_8 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_9 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _1060 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _1061 = _lxx_stencil_7 + _1060;
  int16_t _1062 = _lxx_stencil_6 + _1061;
  int16_t _1063 = _lxx_stencil_5 + _1062;
  int16_t _1064 = _lxx_stencil_4 + _1063;
  int16_t _1065 = _lxx_stencil_3 + _1064;
  int16_t _1066 = _lxx_stencil_2 + _1065;
  int16_t _1067 = _lgxx_stencil_1 + _1066;
  int16_t _1068 = _lxx_stencil_1 + _1067;
  return _1068;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 1), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_5(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_10 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_11 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_12 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_13 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_14 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_15 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_16 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_17 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_18 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _1104 = _lxx_stencil_17 + _lxx_stencil_18;
  int16_t _1105 = _lxx_stencil_16 + _1104;
  int16_t _1106 = _lxx_stencil_15 + _1105;
  int16_t _1107 = _lxx_stencil_14 + _1106;
  int16_t _1108 = _lxx_stencil_13 + _1107;
  int16_t _1109 = _lxx_stencil_12 + _1108;
  int16_t _1110 = _lxx_stencil_11 + _1109;
  int16_t _1111 = _lgxx_stencil_2 + _1110;
  int16_t _1112 = _lxx_stencil_10 + _1111;
  return _1112;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 2), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_6(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_19 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_20 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_21 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_22 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_23 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_24 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_25 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_26 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_27 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _1149 = _lxx_stencil_26 + _lxx_stencil_27;
  int16_t _1150 = _lxx_stencil_25 + _1149;
  int16_t _1151 = _lxx_stencil_24 + _1150;
  int16_t _1152 = _lxx_stencil_23 + _1151;
  int16_t _1153 = _lxx_stencil_22 + _1152;
  int16_t _1154 = _lxx_stencil_21 + _1153;
  int16_t _1155 = _lxx_stencil_20 + _1154;
  int16_t _1156 = _lgxx_stencil_3 + _1155;
  int16_t _1157 = _lxx_stencil_19 + _1156;
  return _1157;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 5), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 4), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 5), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*4) + 3), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*4) + 5), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*4) + 4), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_7(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_4 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_28 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_29 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_30 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_31 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_32 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_33 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_34 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_35 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_36 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _1194 = _lxx_stencil_35 + _lxx_stencil_36;
  int16_t _1195 = _lxx_stencil_34 + _1194;
  int16_t _1196 = _lxx_stencil_33 + _1195;
  int16_t _1197 = _lxx_stencil_32 + _1196;
  int16_t _1198 = _lxx_stencil_31 + _1197;
  int16_t _1199 = _lxx_stencil_30 + _1198;
  int16_t _1200 = _lxx_stencil_29 + _1199;
  int16_t _1201 = _lgxx_stencil_4 + _1200;
  int16_t _1202 = _lxx_stencil_28 + _1201;
  return _1202;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*4), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _1240 = (int16_t)(0);
  return _1240;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*4) + 1), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_1() {
  int16_t _1246 = (int16_t)(0);
  return _1246;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*4) + 2), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_2() {
  int16_t _1253 = (int16_t)(0);
  return _1253;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*4) + 3), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_3() {
  int16_t _1260 = (int16_t)(0);
  return _1260;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*4), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*4), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*4), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*4), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_4(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_25 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_26 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_27 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_28 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_29 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_30 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _1268 = (int16_t)(_gray_stencil_25);
  int16_t _1269 = (int16_t)(2);
  int16_t _1270 = _1268 * _1269;
  int16_t _1271 = _grad_y_unclamp_stencil_1 + _1270;
  int16_t _1272 = (int16_t)(_gray_stencil_26);
  int16_t _1273 = _1271 - _1272;
  int16_t _1274 = (int16_t)(_gray_stencil_27);
  int16_t _1275 = _1274 * _1269;
  int16_t _1276 = _1273 - _1275;
  int16_t _1277 = (int16_t)(_gray_stencil_28);
  int16_t _1278 = _1276 - _1277;
  int16_t _1279 = (int16_t)(_gray_stencil_29);
  int16_t _1280 = _1278 + _1279;
  int16_t _1281 = (int16_t)(_gray_stencil_30);
  int16_t _1282 = _1280 + _1281;
  return _1282;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 1), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 1), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 1), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_5(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_31 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_32 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_33 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_34 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_35 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_36 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _1326 = (int16_t)(_gray_stencil_31);
  int16_t _1327 = (int16_t)(2);
  int16_t _1328 = _1326 * _1327;
  int16_t _1329 = _grad_y_unclamp_stencil_2 + _1328;
  int16_t _1330 = (int16_t)(_gray_stencil_32);
  int16_t _1331 = _1329 - _1330;
  int16_t _1332 = (int16_t)(_gray_stencil_33);
  int16_t _1333 = _1332 * _1327;
  int16_t _1334 = _1331 - _1333;
  int16_t _1335 = (int16_t)(_gray_stencil_34);
  int16_t _1336 = _1334 - _1335;
  int16_t _1337 = (int16_t)(_gray_stencil_35);
  int16_t _1338 = _1336 + _1337;
  int16_t _1339 = (int16_t)(_gray_stencil_36);
  int16_t _1340 = _1338 + _1339;
  return _1340;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 2), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_6(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_3 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_37 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_38 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_39 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_40 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_41 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_42 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _1385 = (int16_t)(_gray_stencil_37);
  int16_t _1386 = (int16_t)(2);
  int16_t _1387 = _1385 * _1386;
  int16_t _1388 = _grad_y_unclamp_stencil_3 + _1387;
  int16_t _1389 = (int16_t)(_gray_stencil_38);
  int16_t _1390 = _1388 - _1389;
  int16_t _1391 = (int16_t)(_gray_stencil_39);
  int16_t _1392 = _1391 * _1386;
  int16_t _1393 = _1390 - _1392;
  int16_t _1394 = (int16_t)(_gray_stencil_40);
  int16_t _1395 = _1393 - _1394;
  int16_t _1396 = (int16_t)(_gray_stencil_41);
  int16_t _1397 = _1395 + _1396;
  int16_t _1398 = (int16_t)(_gray_stencil_42);
  int16_t _1399 = _1397 + _1398;
  return _1399;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 4), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 5), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 3), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*4) + 5), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_7(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_4 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_43 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_44 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_45 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_46 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_47 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_48 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _1444 = (int16_t)(_gray_stencil_43);
  int16_t _1445 = (int16_t)(2);
  int16_t _1446 = _1444 * _1445;
  int16_t _1447 = _grad_y_unclamp_stencil_4 + _1446;
  int16_t _1448 = (int16_t)(_gray_stencil_44);
  int16_t _1449 = _1447 - _1448;
  int16_t _1450 = (int16_t)(_gray_stencil_45);
  int16_t _1451 = _1450 * _1445;
  int16_t _1452 = _1449 - _1451;
  int16_t _1453 = (int16_t)(_gray_stencil_46);
  int16_t _1454 = _1452 - _1453;
  int16_t _1455 = (int16_t)(_gray_stencil_47);
  int16_t _1456 = _1454 + _1455;
  int16_t _1457 = (int16_t)(_gray_stencil_48);
  int16_t _1458 = _1456 + _1457;
  return _1458;
}

//store is: lxy.stencil((lxy_s0_x_x*4), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*4), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*4), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_9 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_5 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1504 = (int16_t)(180);
  int16_t _1505 = min(_grad_x_unclamp_stencil_9, _1504);
  int16_t _1506 = (int16_t)(-180);
  int16_t _1507 = max(_1505, _1506);
  int16_t _1508 = min(_grad_y_unclamp_stencil_5, _1504);
  int16_t _1509 = max(_1508, _1506);
  int16_t _1510 = _1507 * _1509;
  int16_t _1511 = (int16_t)(6);
  int16_t _1512 = _1510 >> _1511;
  return _1512;
}

//store is: lxy.stencil(((lxy_s0_x_x*4) + 1), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*4) + 1), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*4) + 1), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_10 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_6 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1536 = (int16_t)(180);
  int16_t _1537 = min(_grad_x_unclamp_stencil_10, _1536);
  int16_t _1538 = (int16_t)(-180);
  int16_t _1539 = max(_1537, _1538);
  int16_t _1540 = min(_grad_y_unclamp_stencil_6, _1536);
  int16_t _1541 = max(_1540, _1538);
  int16_t _1542 = _1539 * _1541;
  int16_t _1543 = (int16_t)(6);
  int16_t _1544 = _1542 >> _1543;
  return _1544;
}

//store is: lxy.stencil(((lxy_s0_x_x*4) + 2), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*4) + 2), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*4) + 2), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_2(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_11 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_7 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1569 = (int16_t)(180);
  int16_t _1570 = min(_grad_x_unclamp_stencil_11, _1569);
  int16_t _1571 = (int16_t)(-180);
  int16_t _1572 = max(_1570, _1571);
  int16_t _1573 = min(_grad_y_unclamp_stencil_7, _1569);
  int16_t _1574 = max(_1573, _1571);
  int16_t _1575 = _1572 * _1574;
  int16_t _1576 = (int16_t)(6);
  int16_t _1577 = _1575 >> _1576;
  return _1577;
}

//store is: lxy.stencil(((lxy_s0_x_x*4) + 3), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*4) + 3), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*4) + 3), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_3(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_12 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_8 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1602 = (int16_t)(180);
  int16_t _1603 = min(_grad_x_unclamp_stencil_12, _1602);
  int16_t _1604 = (int16_t)(-180);
  int16_t _1605 = max(_1603, _1604);
  int16_t _1606 = min(_grad_y_unclamp_stencil_8, _1602);
  int16_t _1607 = max(_1606, _1604);
  int16_t _1608 = _1605 * _1607;
  int16_t _1609 = (int16_t)(6);
  int16_t _1610 = _1608 >> _1609;
  return _1610;
}

//store is: lgxy.stencil((lgxy_s0_x_x*4), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _1636 = (int16_t)(0);
  return _1636;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*4) + 1), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _1642 = (int16_t)(0);
  return _1642;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*4) + 2), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _1649 = (int16_t)(0);
  return _1649;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*4) + 3), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_3() {
  int16_t _1656 = (int16_t)(0);
  return _1656;
}

//store is: lgxy.stencil((lgxy_s1_x_x*4), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil((lgxy_s1_x_x*4), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil((lgxy_s1_x_x*4), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil((lgxy_s1_x_x*4), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil((lgxy_s1_x_x*4), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_4(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_1 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_2 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_3 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_4 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_5 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_6 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_7 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_8 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_9 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _1664 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _1665 = _lxy_stencil_7 + _1664;
  int16_t _1666 = _lxy_stencil_6 + _1665;
  int16_t _1667 = _lxy_stencil_5 + _1666;
  int16_t _1668 = _lxy_stencil_4 + _1667;
  int16_t _1669 = _lxy_stencil_3 + _1668;
  int16_t _1670 = _lxy_stencil_2 + _1669;
  int16_t _1671 = _lgxy_stencil_1 + _1670;
  int16_t _1672 = _lxy_stencil_1 + _1671;
  return _1672;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 1), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_5(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_2 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_10 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_11 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_12 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_13 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_14 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_15 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_16 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_17 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_18 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _1708 = _lxy_stencil_17 + _lxy_stencil_18;
  int16_t _1709 = _lxy_stencil_16 + _1708;
  int16_t _1710 = _lxy_stencil_15 + _1709;
  int16_t _1711 = _lxy_stencil_14 + _1710;
  int16_t _1712 = _lxy_stencil_13 + _1711;
  int16_t _1713 = _lxy_stencil_12 + _1712;
  int16_t _1714 = _lxy_stencil_11 + _1713;
  int16_t _1715 = _lgxy_stencil_2 + _1714;
  int16_t _1716 = _lxy_stencil_10 + _1715;
  return _1716;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 2), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_6(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_3 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_19 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_20 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_21 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_22 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_23 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_24 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_25 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_26 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_27 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _1753 = _lxy_stencil_26 + _lxy_stencil_27;
  int16_t _1754 = _lxy_stencil_25 + _1753;
  int16_t _1755 = _lxy_stencil_24 + _1754;
  int16_t _1756 = _lxy_stencil_23 + _1755;
  int16_t _1757 = _lxy_stencil_22 + _1756;
  int16_t _1758 = _lxy_stencil_21 + _1757;
  int16_t _1759 = _lxy_stencil_20 + _1758;
  int16_t _1760 = _lgxy_stencil_3 + _1759;
  int16_t _1761 = _lxy_stencil_19 + _1760;
  return _1761;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 5), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 4), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 5), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*4) + 3), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*4) + 5), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*4) + 4), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_7(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_4 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_28 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_29 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_30 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_31 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_32 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_33 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_34 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_35 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_36 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _1798 = _lxy_stencil_35 + _lxy_stencil_36;
  int16_t _1799 = _lxy_stencil_34 + _1798;
  int16_t _1800 = _lxy_stencil_33 + _1799;
  int16_t _1801 = _lxy_stencil_32 + _1800;
  int16_t _1802 = _lxy_stencil_31 + _1801;
  int16_t _1803 = _lxy_stencil_30 + _1802;
  int16_t _1804 = _lxy_stencil_29 + _1803;
  int16_t _1805 = _lgxy_stencil_4 + _1804;
  int16_t _1806 = _lxy_stencil_28 + _1805;
  return _1806;
}

//store is: lyy.stencil((lyy_s0_x_x*4), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*4), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*4), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_9 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1844 = (int16_t)(180);
  int16_t _1845 = min(_grad_y_unclamp_stencil_9, _1844);
  int16_t _1846 = (int16_t)(-180);
  int16_t _1847 = max(_1845, _1846);
  int16_t _1848 = _1847 * _1847;
  int16_t _1849 = (int16_t)(6);
  int16_t _1850 = _1848 >> _1849;
  return _1850;
}

//store is: lyy.stencil(((lyy_s0_x_x*4) + 1), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 1), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 1), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_1(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_10 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1869 = (int16_t)(180);
  int16_t _1870 = min(_grad_y_unclamp_stencil_10, _1869);
  int16_t _1871 = (int16_t)(-180);
  int16_t _1872 = max(_1870, _1871);
  int16_t _1873 = _1872 * _1872;
  int16_t _1874 = (int16_t)(6);
  int16_t _1875 = _1873 >> _1874;
  return _1875;
}

//store is: lyy.stencil(((lyy_s0_x_x*4) + 2), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 2), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 2), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_2(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_11 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1895 = (int16_t)(180);
  int16_t _1896 = min(_grad_y_unclamp_stencil_11, _1895);
  int16_t _1897 = (int16_t)(-180);
  int16_t _1898 = max(_1896, _1897);
  int16_t _1899 = _1898 * _1898;
  int16_t _1900 = (int16_t)(6);
  int16_t _1901 = _1899 >> _1900;
  return _1901;
}

//store is: lyy.stencil(((lyy_s0_x_x*4) + 3), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 3), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*4) + 3), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_3(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_12 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1921 = (int16_t)(180);
  int16_t _1922 = min(_grad_y_unclamp_stencil_12, _1921);
  int16_t _1923 = (int16_t)(-180);
  int16_t _1924 = max(_1922, _1923);
  int16_t _1925 = _1924 * _1924;
  int16_t _1926 = (int16_t)(6);
  int16_t _1927 = _1925 >> _1926;
  return _1927;
}

//store is: lgyy.stencil((lgyy_s0_x_x*4), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _1948 = (int16_t)(0);
  return _1948;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*4) + 1), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _1954 = (int16_t)(0);
  return _1954;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*4) + 2), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _1961 = (int16_t)(0);
  return _1961;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*4) + 3), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_3() {
  int16_t _1968 = (int16_t)(0);
  return _1968;
}

//store is: lgyy.stencil((lgyy_s1_x_x*4), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil((lgyy_s1_x_x*4), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil((lgyy_s1_x_x*4), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil((lgyy_s1_x_x*4), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil((lgyy_s1_x_x*4), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_4(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_1 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_2 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_3 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_4 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_5 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_6 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_7 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_8 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_9 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _1976 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _1977 = _lyy_stencil_7 + _1976;
  int16_t _1978 = _lyy_stencil_6 + _1977;
  int16_t _1979 = _lyy_stencil_5 + _1978;
  int16_t _1980 = _lyy_stencil_4 + _1979;
  int16_t _1981 = _lyy_stencil_3 + _1980;
  int16_t _1982 = _lyy_stencil_2 + _1981;
  int16_t _1983 = _lgyy_stencil_1 + _1982;
  int16_t _1984 = _lyy_stencil_1 + _1983;
  return _1984;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 1), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_5(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_2 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_10 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_11 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_12 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_13 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_14 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_15 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_16 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_17 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_18 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _2020 = _lyy_stencil_17 + _lyy_stencil_18;
  int16_t _2021 = _lyy_stencil_16 + _2020;
  int16_t _2022 = _lyy_stencil_15 + _2021;
  int16_t _2023 = _lyy_stencil_14 + _2022;
  int16_t _2024 = _lyy_stencil_13 + _2023;
  int16_t _2025 = _lyy_stencil_12 + _2024;
  int16_t _2026 = _lyy_stencil_11 + _2025;
  int16_t _2027 = _lgyy_stencil_2 + _2026;
  int16_t _2028 = _lyy_stencil_10 + _2027;
  return _2028;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 2), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_6(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_3 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_19 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_20 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_21 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_22 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_23 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_24 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_25 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_26 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_27 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _2065 = _lyy_stencil_26 + _lyy_stencil_27;
  int16_t _2066 = _lyy_stencil_25 + _2065;
  int16_t _2067 = _lyy_stencil_24 + _2066;
  int16_t _2068 = _lyy_stencil_23 + _2067;
  int16_t _2069 = _lyy_stencil_22 + _2068;
  int16_t _2070 = _lyy_stencil_21 + _2069;
  int16_t _2071 = _lyy_stencil_20 + _2070;
  int16_t _2072 = _lgyy_stencil_3 + _2071;
  int16_t _2073 = _lyy_stencil_19 + _2072;
  return _2073;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 5), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 4), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 5), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*4) + 3), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*4) + 5), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*4) + 4), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_7(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_4 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_28 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_29 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_30 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_31 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_32 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_33 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_34 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_35 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_36 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _2110 = _lyy_stencil_35 + _lyy_stencil_36;
  int16_t _2111 = _lyy_stencil_34 + _2110;
  int16_t _2112 = _lyy_stencil_33 + _2111;
  int16_t _2113 = _lyy_stencil_32 + _2112;
  int16_t _2114 = _lyy_stencil_31 + _2113;
  int16_t _2115 = _lyy_stencil_30 + _2114;
  int16_t _2116 = _lyy_stencil_29 + _2115;
  int16_t _2117 = _lgyy_stencil_4 + _2116;
  int16_t _2118 = _lyy_stencil_28 + _2117;
  return _2118;
}

//store is: cim.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*4), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_5 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_5 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_5 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _2156 = (int16_t)(6);
  int16_t _2157 = _lgxx_stencil_5 >> _2156;
  int16_t _2158 = _lgyy_stencil_5 >> _2156;
  int16_t _2159 = _2157 * _2158;
  int16_t _2160 = _lgxy_stencil_5 >> _2156;
  int16_t _2161 = _2160 * _2160;
  int16_t _2162 = _2159 - _2161;
  int16_t _2163 = _2157 + _2158;
  int16_t _2164 = _2163 * _2163;
  int16_t _2165 = (int16_t)(4);
  int16_t _2166 = _2164 >> _2165;
  int16_t _2167 = _2162 - _2166;
  return _2167;
}

//store is: cim.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 1), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_6 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_6 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_6 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _2198 = (int16_t)(6);
  int16_t _2199 = _lgxx_stencil_6 >> _2198;
  int16_t _2200 = _lgyy_stencil_6 >> _2198;
  int16_t _2201 = _2199 * _2200;
  int16_t _2202 = _lgxy_stencil_6 >> _2198;
  int16_t _2203 = _2202 * _2202;
  int16_t _2204 = _2201 - _2203;
  int16_t _2205 = _2199 + _2200;
  int16_t _2206 = _2205 * _2205;
  int16_t _2207 = (int16_t)(4);
  int16_t _2208 = _2206 >> _2207;
  int16_t _2209 = _2204 - _2208;
  return _2209;
}

//store is: cim.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 2), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_2(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_7 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_7 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_7 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _2241 = (int16_t)(6);
  int16_t _2242 = _lgxx_stencil_7 >> _2241;
  int16_t _2243 = _lgyy_stencil_7 >> _2241;
  int16_t _2244 = _2242 * _2243;
  int16_t _2245 = _lgxy_stencil_7 >> _2241;
  int16_t _2246 = _2245 * _2245;
  int16_t _2247 = _2244 - _2246;
  int16_t _2248 = _2242 + _2243;
  int16_t _2249 = _2248 * _2248;
  int16_t _2250 = (int16_t)(4);
  int16_t _2251 = _2249 >> _2250;
  int16_t _2252 = _2247 - _2251;
  return _2252;
}

//store is: cim.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*4) + 3), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_3(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_8 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_8 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_8 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _2284 = (int16_t)(6);
  int16_t _2285 = _lgxx_stencil_8 >> _2284;
  int16_t _2286 = _lgyy_stencil_8 >> _2284;
  int16_t _2287 = _2285 * _2286;
  int16_t _2288 = _lgxy_stencil_8 >> _2284;
  int16_t _2289 = _2288 * _2288;
  int16_t _2290 = _2287 - _2289;
  int16_t _2291 = _2285 + _2286;
  int16_t _2292 = _2291 * _2291;
  int16_t _2293 = (int16_t)(4);
  int16_t _2294 = _2292 >> _2293;
  int16_t _2295 = _2290 - _2294;
  return _2295;
}

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) = select((((((((((cim.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*4), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_1 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_2 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_3 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_4 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_5 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_6 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_7 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_8 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_9 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _2327 = (int16_t)(255);
  int16_t _2328 = (int16_t)(0);
  bool _2329 = _cim_stencil_1 < _cim_stencil_2;
  bool _2330 = _cim_stencil_3 < _cim_stencil_2;
  bool _2331 = _2329 && _2330;
  bool _2332 = _cim_stencil_4 < _cim_stencil_2;
  bool _2333 = _2331 && _2332;
  bool _2334 = _cim_stencil_5 < _cim_stencil_2;
  bool _2335 = _2333 && _2334;
  bool _2336 = _cim_stencil_6 < _cim_stencil_2;
  bool _2337 = _2335 && _2336;
  bool _2338 = _cim_stencil_7 < _cim_stencil_2;
  bool _2339 = _2337 && _2338;
  bool _2340 = _cim_stencil_8 < _cim_stencil_2;
  bool _2341 = _2339 && _2340;
  bool _2342 = _cim_stencil_9 < _cim_stencil_2;
  bool _2343 = _2341 && _2342;
  int16_t _2344 = (int16_t)(1);
  bool _2345 = _2344 <= _cim_stencil_2;
  bool _2346 = _2343 && _2345;
  int16_t _2347 = (int16_t)(_2346 ? _2327 : _2328);
  return _2347;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_10 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_11 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_12 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_13 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_14 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_15 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_16 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_17 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_18 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _2404 = (int16_t)(255);
  int16_t _2405 = (int16_t)(0);
  bool _2406 = _cim_stencil_10 < _cim_stencil_11;
  bool _2407 = _cim_stencil_12 < _cim_stencil_11;
  bool _2408 = _2406 && _2407;
  bool _2409 = _cim_stencil_13 < _cim_stencil_11;
  bool _2410 = _2408 && _2409;
  bool _2411 = _cim_stencil_14 < _cim_stencil_11;
  bool _2412 = _2410 && _2411;
  bool _2413 = _cim_stencil_15 < _cim_stencil_11;
  bool _2414 = _2412 && _2413;
  bool _2415 = _cim_stencil_16 < _cim_stencil_11;
  bool _2416 = _2414 && _2415;
  bool _2417 = _cim_stencil_17 < _cim_stencil_11;
  bool _2418 = _2416 && _2417;
  bool _2419 = _cim_stencil_18 < _cim_stencil_11;
  bool _2420 = _2418 && _2419;
  int16_t _2421 = (int16_t)(1);
  bool _2422 = _2421 <= _cim_stencil_11;
  bool _2423 = _2420 && _2422;
  int16_t _2424 = (int16_t)(_2423 ? _2404 : _2405);
  return _2424;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil_2(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_19 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_20 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_21 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_22 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_23 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_24 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_25 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_26 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_27 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _2482 = (int16_t)(255);
  int16_t _2483 = (int16_t)(0);
  bool _2484 = _cim_stencil_19 < _cim_stencil_20;
  bool _2485 = _cim_stencil_21 < _cim_stencil_20;
  bool _2486 = _2484 && _2485;
  bool _2487 = _cim_stencil_22 < _cim_stencil_20;
  bool _2488 = _2486 && _2487;
  bool _2489 = _cim_stencil_23 < _cim_stencil_20;
  bool _2490 = _2488 && _2489;
  bool _2491 = _cim_stencil_24 < _cim_stencil_20;
  bool _2492 = _2490 && _2491;
  bool _2493 = _cim_stencil_25 < _cim_stencil_20;
  bool _2494 = _2492 && _2493;
  bool _2495 = _cim_stencil_26 < _cim_stencil_20;
  bool _2496 = _2494 && _2495;
  bool _2497 = _cim_stencil_27 < _cim_stencil_20;
  bool _2498 = _2496 && _2497;
  int16_t _2499 = (int16_t)(1);
  bool _2500 = _2499 <= _cim_stencil_20;
  bool _2501 = _2498 && _2500;
  int16_t _2502 = (int16_t)(_2501 ? _2482 : _2483);
  return _2502;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 5), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 5), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*4) + 5), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*4) + 4), (hw_output_s0_y_yi + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil_3(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_28 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_29 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_30 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_31 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_32 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_33 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_34 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_35 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_36 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _2560 = (int16_t)(255);
  int16_t _2561 = (int16_t)(0);
  bool _2562 = _cim_stencil_28 < _cim_stencil_29;
  bool _2563 = _cim_stencil_30 < _cim_stencil_29;
  bool _2564 = _2562 && _2563;
  bool _2565 = _cim_stencil_31 < _cim_stencil_29;
  bool _2566 = _2564 && _2565;
  bool _2567 = _cim_stencil_32 < _cim_stencil_29;
  bool _2568 = _2566 && _2567;
  bool _2569 = _cim_stencil_33 < _cim_stencil_29;
  bool _2570 = _2568 && _2569;
  bool _2571 = _cim_stencil_34 < _cim_stencil_29;
  bool _2572 = _2570 && _2571;
  bool _2573 = _cim_stencil_35 < _cim_stencil_29;
  bool _2574 = _2572 && _2573;
  bool _2575 = _cim_stencil_36 < _cim_stencil_29;
  bool _2576 = _2574 && _2575;
  int16_t _2577 = (int16_t)(1);
  bool _2578 = _2577 <= _cim_stencil_29;
  bool _2579 = _2576 && _2578;
  int16_t _2580 = (int16_t)(_2579 ? _2560 : _2561);
  return _2580;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x_1*4), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_12(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_13 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_13;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x_1*4), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_13(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_14 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_14;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x_1*4), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_14(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_15 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_15;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_15(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_16 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_16;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_16(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_17 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_17;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_17(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_18 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_18;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 4), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_18(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_19 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_19;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 4), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_19(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_20 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_20;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 4), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_20(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_21 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_21;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 5), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_21(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_22 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_22;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 5), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_22(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_23 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_23;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 3), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x_1*4) + 5), ((hw_input_global_wrapper_global_wrapper_s0_y_1 + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_23(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_24 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_24;
}

//store is: gray.stencil((gray_s0_x_x_1*4), ((gray_s0_y_1 + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x_1*4), ((gray_s0_y_1 + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x_1*4), ((gray_s0_y_1 + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x_1*4), ((gray_s0_y_1 + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_4(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_13 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_14 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_15 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _2709 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_13);
  uint16_t _2710 = (uint16_t)(150);
  uint16_t _2711 = _2709 * _2710;
  uint16_t _2712 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_14);
  uint16_t _2713 = (uint16_t)(29);
  uint16_t _2714 = _2712 * _2713;
  uint16_t _2715 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_15);
  uint16_t _2716 = (uint16_t)(77);
  uint16_t _2717 = _2715 * _2716;
  uint16_t _2718 = _2714 + _2717;
  uint16_t _2719 = _2711 + _2718;
  uint16_t _2720 = (uint16_t)(8);
  uint16_t _2721 = _2719 >> _2720;
  return _2721;
}

//store is: gray.stencil(((gray_s0_x_x_1*4) + 1), ((gray_s0_y_1 + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x_1*4) + 1), ((gray_s0_y_1 + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x_1*4) + 1), ((gray_s0_y_1 + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x_1*4) + 1), ((gray_s0_y_1 + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_5(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_16 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_17 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_18 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _2754 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_16);
  uint16_t _2755 = (uint16_t)(150);
  uint16_t _2756 = _2754 * _2755;
  uint16_t _2757 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_17);
  uint16_t _2758 = (uint16_t)(29);
  uint16_t _2759 = _2757 * _2758;
  uint16_t _2760 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_18);
  uint16_t _2761 = (uint16_t)(77);
  uint16_t _2762 = _2760 * _2761;
  uint16_t _2763 = _2759 + _2762;
  uint16_t _2764 = _2756 + _2763;
  uint16_t _2765 = (uint16_t)(8);
  uint16_t _2766 = _2764 >> _2765;
  return _2766;
}

//store is: gray.stencil(((gray_s0_x_x_1*4) + 2), ((gray_s0_y_1 + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x_1*4) + 2), ((gray_s0_y_1 + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x_1*4) + 2), ((gray_s0_y_1 + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x_1*4) + 2), ((gray_s0_y_1 + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_6(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_19 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_20 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_21 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _2800 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_19);
  uint16_t _2801 = (uint16_t)(150);
  uint16_t _2802 = _2800 * _2801;
  uint16_t _2803 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_20);
  uint16_t _2804 = (uint16_t)(29);
  uint16_t _2805 = _2803 * _2804;
  uint16_t _2806 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_21);
  uint16_t _2807 = (uint16_t)(77);
  uint16_t _2808 = _2806 * _2807;
  uint16_t _2809 = _2805 + _2808;
  uint16_t _2810 = _2802 + _2809;
  uint16_t _2811 = (uint16_t)(8);
  uint16_t _2812 = _2810 >> _2811;
  return _2812;
}

//store is: gray.stencil(((gray_s0_x_x_1*4) + 3), ((gray_s0_y_1 + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x_1*4) + 3), ((gray_s0_y_1 + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x_1*4) + 3), ((gray_s0_y_1 + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x_1*4) + 3), ((gray_s0_y_1 + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_7(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_22 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_23 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_24 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _2846 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_22);
  uint16_t _2847 = (uint16_t)(150);
  uint16_t _2848 = _2846 * _2847;
  uint16_t _2849 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_23);
  uint16_t _2850 = (uint16_t)(29);
  uint16_t _2851 = _2849 * _2850;
  uint16_t _2852 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_24);
  uint16_t _2853 = (uint16_t)(77);
  uint16_t _2854 = _2852 * _2853;
  uint16_t _2855 = _2851 + _2854;
  uint16_t _2856 = _2848 + _2855;
  uint16_t _2857 = (uint16_t)(8);
  uint16_t _2858 = _2856 >> _2857;
  return _2858;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x_1*4), ((grad_x_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_8() {
  int16_t _2893 = (int16_t)(0);
  return _2893;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x_1*4) + 1), ((grad_x_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_9() {
  int16_t _2899 = (int16_t)(0);
  return _2899;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x_1*4) + 2), ((grad_x_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_10() {
  int16_t _2906 = (int16_t)(0);
  return _2906;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x_1*4) + 3), ((grad_x_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_11() {
  int16_t _2913 = (int16_t)(0);
  return _2913;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x_1*4), ((grad_x_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x_1*4), ((grad_x_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x_1*4), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x_1*4), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x_1*4), ((grad_x_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_12(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_13 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_49 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_50 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_51 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_52 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_53 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_54 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _2921 = (int16_t)(_gray_stencil_49);
  int16_t _2922 = (int16_t)(2);
  int16_t _2923 = _2921 * _2922;
  int16_t _2924 = _grad_x_unclamp_stencil_13 + _2923;
  int16_t _2925 = (int16_t)(_gray_stencil_50);
  int16_t _2926 = _2924 - _2925;
  int16_t _2927 = (int16_t)(_gray_stencil_51);
  int16_t _2928 = _2926 + _2927;
  int16_t _2929 = (int16_t)(_gray_stencil_52);
  int16_t _2930 = _2929 * _2922;
  int16_t _2931 = _2928 - _2930;
  int16_t _2932 = (int16_t)(_gray_stencil_53);
  int16_t _2933 = _2931 - _2932;
  int16_t _2934 = (int16_t)(_gray_stencil_54);
  int16_t _2935 = _2933 + _2934;
  return _2935;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x_1*4) + 1), ((grad_x_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x_1*4) + 1), ((grad_x_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 1), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 1), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 1), ((grad_x_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_13(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_14 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_55 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_56 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_57 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_58 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_59 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_60 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _2979 = (int16_t)(_gray_stencil_55);
  int16_t _2980 = (int16_t)(2);
  int16_t _2981 = _2979 * _2980;
  int16_t _2982 = _grad_x_unclamp_stencil_14 + _2981;
  int16_t _2983 = (int16_t)(_gray_stencil_56);
  int16_t _2984 = _2982 - _2983;
  int16_t _2985 = (int16_t)(_gray_stencil_57);
  int16_t _2986 = _2984 + _2985;
  int16_t _2987 = (int16_t)(_gray_stencil_58);
  int16_t _2988 = _2987 * _2980;
  int16_t _2989 = _2986 - _2988;
  int16_t _2990 = (int16_t)(_gray_stencil_59);
  int16_t _2991 = _2989 - _2990;
  int16_t _2992 = (int16_t)(_gray_stencil_60);
  int16_t _2993 = _2991 + _2992;
  return _2993;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 4), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 4), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 2), ((grad_x_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 4), ((grad_x_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_14(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_15 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_61 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_62 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_63 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_64 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_65 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_66 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _3038 = (int16_t)(_gray_stencil_61);
  int16_t _3039 = (int16_t)(2);
  int16_t _3040 = _3038 * _3039;
  int16_t _3041 = _grad_x_unclamp_stencil_15 + _3040;
  int16_t _3042 = (int16_t)(_gray_stencil_62);
  int16_t _3043 = _3041 - _3042;
  int16_t _3044 = (int16_t)(_gray_stencil_63);
  int16_t _3045 = _3043 + _3044;
  int16_t _3046 = (int16_t)(_gray_stencil_64);
  int16_t _3047 = _3046 * _3039;
  int16_t _3048 = _3045 - _3047;
  int16_t _3049 = (int16_t)(_gray_stencil_65);
  int16_t _3050 = _3048 - _3049;
  int16_t _3051 = (int16_t)(_gray_stencil_66);
  int16_t _3052 = _3050 + _3051;
  return _3052;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 5), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 5), ((grad_x_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 3), ((grad_x_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x_1*4) + 5), ((grad_x_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_15(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_16 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_67 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_68 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_69 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_70 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_71 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_72 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _3097 = (int16_t)(_gray_stencil_67);
  int16_t _3098 = (int16_t)(2);
  int16_t _3099 = _3097 * _3098;
  int16_t _3100 = _grad_x_unclamp_stencil_16 + _3099;
  int16_t _3101 = (int16_t)(_gray_stencil_68);
  int16_t _3102 = _3100 - _3101;
  int16_t _3103 = (int16_t)(_gray_stencil_69);
  int16_t _3104 = _3102 + _3103;
  int16_t _3105 = (int16_t)(_gray_stencil_70);
  int16_t _3106 = _3105 * _3098;
  int16_t _3107 = _3104 - _3106;
  int16_t _3108 = (int16_t)(_gray_stencil_71);
  int16_t _3109 = _3107 - _3108;
  int16_t _3110 = (int16_t)(_gray_stencil_72);
  int16_t _3111 = _3109 + _3110;
  return _3111;
}

//store is: lxx.stencil((lxx_s0_x_x_1*4), ((lxx_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x_1*4), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x_1*4), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_4(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_17 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _3157 = (int16_t)(180);
  int16_t _3158 = min(_grad_x_unclamp_stencil_17, _3157);
  int16_t _3159 = (int16_t)(-180);
  int16_t _3160 = max(_3158, _3159);
  int16_t _3161 = _3160 * _3160;
  int16_t _3162 = (int16_t)(6);
  int16_t _3163 = _3161 >> _3162;
  return _3163;
}

//store is: lxx.stencil(((lxx_s0_x_x_1*4) + 1), ((lxx_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x_1*4) + 1), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x_1*4) + 1), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_5(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_18 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _3182 = (int16_t)(180);
  int16_t _3183 = min(_grad_x_unclamp_stencil_18, _3182);
  int16_t _3184 = (int16_t)(-180);
  int16_t _3185 = max(_3183, _3184);
  int16_t _3186 = _3185 * _3185;
  int16_t _3187 = (int16_t)(6);
  int16_t _3188 = _3186 >> _3187;
  return _3188;
}

//store is: lxx.stencil(((lxx_s0_x_x_1*4) + 2), ((lxx_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x_1*4) + 2), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x_1*4) + 2), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_6(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_19 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _3208 = (int16_t)(180);
  int16_t _3209 = min(_grad_x_unclamp_stencil_19, _3208);
  int16_t _3210 = (int16_t)(-180);
  int16_t _3211 = max(_3209, _3210);
  int16_t _3212 = _3211 * _3211;
  int16_t _3213 = (int16_t)(6);
  int16_t _3214 = _3212 >> _3213;
  return _3214;
}

//store is: lxx.stencil(((lxx_s0_x_x_1*4) + 3), ((lxx_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x_1*4) + 3), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x_1*4) + 3), ((lxx_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_7(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_20 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _3234 = (int16_t)(180);
  int16_t _3235 = min(_grad_x_unclamp_stencil_20, _3234);
  int16_t _3236 = (int16_t)(-180);
  int16_t _3237 = max(_3235, _3236);
  int16_t _3238 = _3237 * _3237;
  int16_t _3239 = (int16_t)(6);
  int16_t _3240 = _3238 >> _3239;
  return _3240;
}

//store is: lgxx.stencil((lgxx_s0_x_x_1*4), ((lgxx_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_8() {
  int16_t _3261 = (int16_t)(0);
  return _3261;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*4) + 1), ((lgxx_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_9() {
  int16_t _3267 = (int16_t)(0);
  return _3267;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*4) + 2), ((lgxx_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_10() {
  int16_t _3274 = (int16_t)(0);
  return _3274;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*4) + 3), ((lgxx_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_11() {
  int16_t _3281 = (int16_t)(0);
  return _3281;
}

//store is: lgxx.stencil((lgxx_s1_x_x_1*4), ((lgxx_s1_y_1 + -1) + 1)) = (lxx.stencil((lgxx_s1_x_x_1*4), ((lgxx_s1_y_1 + -1) + 1)) + (lgxx.stencil((lgxx_s1_x_x_1*4), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil((lgxx_s1_x_x_1*4), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil((lgxx_s1_x_x_1*4), ((lgxx_s1_y_1 + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_12(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_9 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_37 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_38 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_39 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_40 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_41 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_42 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_43 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_44 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_45 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _3289 = _lxx_stencil_44 + _lxx_stencil_45;
  int16_t _3290 = _lxx_stencil_43 + _3289;
  int16_t _3291 = _lxx_stencil_42 + _3290;
  int16_t _3292 = _lxx_stencil_41 + _3291;
  int16_t _3293 = _lxx_stencil_40 + _3292;
  int16_t _3294 = _lxx_stencil_39 + _3293;
  int16_t _3295 = _lxx_stencil_38 + _3294;
  int16_t _3296 = _lgxx_stencil_9 + _3295;
  int16_t _3297 = _lxx_stencil_37 + _3296;
  return _3297;
}

//store is: lgxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 1), ((lgxx_s1_y_1 + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_13(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_10 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_46 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_47 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_48 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_49 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_50 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_51 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_52 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_53 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_54 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _3333 = _lxx_stencil_53 + _lxx_stencil_54;
  int16_t _3334 = _lxx_stencil_52 + _3333;
  int16_t _3335 = _lxx_stencil_51 + _3334;
  int16_t _3336 = _lxx_stencil_50 + _3335;
  int16_t _3337 = _lxx_stencil_49 + _3336;
  int16_t _3338 = _lxx_stencil_48 + _3337;
  int16_t _3339 = _lxx_stencil_47 + _3338;
  int16_t _3340 = _lgxx_stencil_10 + _3339;
  int16_t _3341 = _lxx_stencil_46 + _3340;
  return _3341;
}

//store is: lgxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 4), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 4), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 2), ((lgxx_s1_y_1 + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 4), ((lgxx_s1_y_1 + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_14(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_11 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_55 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_56 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_57 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_58 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_59 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_60 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_61 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_62 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_63 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _3378 = _lxx_stencil_62 + _lxx_stencil_63;
  int16_t _3379 = _lxx_stencil_61 + _3378;
  int16_t _3380 = _lxx_stencil_60 + _3379;
  int16_t _3381 = _lxx_stencil_59 + _3380;
  int16_t _3382 = _lxx_stencil_58 + _3381;
  int16_t _3383 = _lxx_stencil_57 + _3382;
  int16_t _3384 = _lxx_stencil_56 + _3383;
  int16_t _3385 = _lgxx_stencil_11 + _3384;
  int16_t _3386 = _lxx_stencil_55 + _3385;
  return _3386;
}

//store is: lgxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 4), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 5), ((lgxx_s1_y_1 + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 4), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 5), ((lgxx_s1_y_1 + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 3), ((lgxx_s1_y_1 + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x_1*4) + 5), ((lgxx_s1_y_1 + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x_1*4) + 4), ((lgxx_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_15(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_12 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lxx_stencil_64 = (int16_t) (lxx_stencil.extract<0, 15>());
  int16_t _lxx_stencil_65 = (int16_t) (lxx_stencil.extract<16, 31>());
  int16_t _lxx_stencil_66 = (int16_t) (lxx_stencil.extract<32, 47>());
  int16_t _lxx_stencil_67 = (int16_t) (lxx_stencil.extract<48, 63>());
  int16_t _lxx_stencil_68 = (int16_t) (lxx_stencil.extract<64, 79>());
  int16_t _lxx_stencil_69 = (int16_t) (lxx_stencil.extract<80, 95>());
  int16_t _lxx_stencil_70 = (int16_t) (lxx_stencil.extract<96, 111>());
  int16_t _lxx_stencil_71 = (int16_t) (lxx_stencil.extract<112, 127>());
  int16_t _lxx_stencil_72 = (int16_t) (lxx_stencil.extract<128, 143>());

  int16_t _3423 = _lxx_stencil_71 + _lxx_stencil_72;
  int16_t _3424 = _lxx_stencil_70 + _3423;
  int16_t _3425 = _lxx_stencil_69 + _3424;
  int16_t _3426 = _lxx_stencil_68 + _3425;
  int16_t _3427 = _lxx_stencil_67 + _3426;
  int16_t _3428 = _lxx_stencil_66 + _3427;
  int16_t _3429 = _lxx_stencil_65 + _3428;
  int16_t _3430 = _lgxx_stencil_12 + _3429;
  int16_t _3431 = _lxx_stencil_64 + _3430;
  return _3431;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x_1*4), ((grad_y_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_8() {
  int16_t _3469 = (int16_t)(0);
  return _3469;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x_1*4) + 1), ((grad_y_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_9() {
  int16_t _3475 = (int16_t)(0);
  return _3475;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x_1*4) + 2), ((grad_y_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_10() {
  int16_t _3482 = (int16_t)(0);
  return _3482;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x_1*4) + 3), ((grad_y_unclamp_s0_y_1 + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_11() {
  int16_t _3489 = (int16_t)(0);
  return _3489;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x_1*4), ((grad_y_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x_1*4), ((grad_y_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 1), ((grad_y_unclamp_s1_y_1 + -2) + 4)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x_1*4), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 1), ((grad_y_unclamp_s1_y_1 + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x_1*4), ((grad_y_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_12(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_13 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_73 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_74 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_75 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_76 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_77 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_78 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _3497 = (int16_t)(_gray_stencil_73);
  int16_t _3498 = (int16_t)(2);
  int16_t _3499 = _3497 * _3498;
  int16_t _3500 = _grad_y_unclamp_stencil_13 + _3499;
  int16_t _3501 = (int16_t)(_gray_stencil_74);
  int16_t _3502 = _3500 - _3501;
  int16_t _3503 = (int16_t)(_gray_stencil_75);
  int16_t _3504 = _3503 * _3498;
  int16_t _3505 = _3502 - _3504;
  int16_t _3506 = (int16_t)(_gray_stencil_76);
  int16_t _3507 = _3505 - _3506;
  int16_t _3508 = (int16_t)(_gray_stencil_77);
  int16_t _3509 = _3507 + _3508;
  int16_t _3510 = (int16_t)(_gray_stencil_78);
  int16_t _3511 = _3509 + _3510;
  return _3511;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x_1*4) + 1), ((grad_y_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x_1*4) + 1), ((grad_y_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 1), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 1), ((grad_y_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_13(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_14 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_79 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_80 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_81 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_82 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_83 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_84 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _3555 = (int16_t)(_gray_stencil_79);
  int16_t _3556 = (int16_t)(2);
  int16_t _3557 = _3555 * _3556;
  int16_t _3558 = _grad_y_unclamp_stencil_14 + _3557;
  int16_t _3559 = (int16_t)(_gray_stencil_80);
  int16_t _3560 = _3558 - _3559;
  int16_t _3561 = (int16_t)(_gray_stencil_81);
  int16_t _3562 = _3561 * _3556;
  int16_t _3563 = _3560 - _3562;
  int16_t _3564 = (int16_t)(_gray_stencil_82);
  int16_t _3565 = _3563 - _3564;
  int16_t _3566 = (int16_t)(_gray_stencil_83);
  int16_t _3567 = _3565 + _3566;
  int16_t _3568 = (int16_t)(_gray_stencil_84);
  int16_t _3569 = _3567 + _3568;
  return _3569;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 4), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 2), ((grad_y_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 4), ((grad_y_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_14(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_15 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_85 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_86 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_87 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_88 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_89 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_90 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _3614 = (int16_t)(_gray_stencil_85);
  int16_t _3615 = (int16_t)(2);
  int16_t _3616 = _3614 * _3615;
  int16_t _3617 = _grad_y_unclamp_stencil_15 + _3616;
  int16_t _3618 = (int16_t)(_gray_stencil_86);
  int16_t _3619 = _3617 - _3618;
  int16_t _3620 = (int16_t)(_gray_stencil_87);
  int16_t _3621 = _3620 * _3615;
  int16_t _3622 = _3619 - _3621;
  int16_t _3623 = (int16_t)(_gray_stencil_88);
  int16_t _3624 = _3622 - _3623;
  int16_t _3625 = (int16_t)(_gray_stencil_89);
  int16_t _3626 = _3624 + _3625;
  int16_t _3627 = (int16_t)(_gray_stencil_90);
  int16_t _3628 = _3626 + _3627;
  return _3628;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 4), ((grad_y_unclamp_s1_y_1 + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 4), ((grad_y_unclamp_s1_y_1 + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 5), ((grad_y_unclamp_s1_y_1 + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 3), ((grad_y_unclamp_s1_y_1 + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x_1*4) + 5), ((grad_y_unclamp_s1_y_1 + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_15(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_16 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_91 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_92 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_93 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_94 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_95 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_96 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _3673 = (int16_t)(_gray_stencil_91);
  int16_t _3674 = (int16_t)(2);
  int16_t _3675 = _3673 * _3674;
  int16_t _3676 = _grad_y_unclamp_stencil_16 + _3675;
  int16_t _3677 = (int16_t)(_gray_stencil_92);
  int16_t _3678 = _3676 - _3677;
  int16_t _3679 = (int16_t)(_gray_stencil_93);
  int16_t _3680 = _3679 * _3674;
  int16_t _3681 = _3678 - _3680;
  int16_t _3682 = (int16_t)(_gray_stencil_94);
  int16_t _3683 = _3681 - _3682;
  int16_t _3684 = (int16_t)(_gray_stencil_95);
  int16_t _3685 = _3683 + _3684;
  int16_t _3686 = (int16_t)(_gray_stencil_96);
  int16_t _3687 = _3685 + _3686;
  return _3687;
}

//store is: lxy.stencil((lxy_s0_x_x_1*4), ((lxy_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x_1*4), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x_1*4), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_4(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_21 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_17 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _3733 = (int16_t)(180);
  int16_t _3734 = min(_grad_x_unclamp_stencil_21, _3733);
  int16_t _3735 = (int16_t)(-180);
  int16_t _3736 = max(_3734, _3735);
  int16_t _3737 = min(_grad_y_unclamp_stencil_17, _3733);
  int16_t _3738 = max(_3737, _3735);
  int16_t _3739 = _3736 * _3738;
  int16_t _3740 = (int16_t)(6);
  int16_t _3741 = _3739 >> _3740;
  return _3741;
}

//store is: lxy.stencil(((lxy_s0_x_x_1*4) + 1), ((lxy_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x_1*4) + 1), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x_1*4) + 1), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_5(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_22 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_18 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _3765 = (int16_t)(180);
  int16_t _3766 = min(_grad_x_unclamp_stencil_22, _3765);
  int16_t _3767 = (int16_t)(-180);
  int16_t _3768 = max(_3766, _3767);
  int16_t _3769 = min(_grad_y_unclamp_stencil_18, _3765);
  int16_t _3770 = max(_3769, _3767);
  int16_t _3771 = _3768 * _3770;
  int16_t _3772 = (int16_t)(6);
  int16_t _3773 = _3771 >> _3772;
  return _3773;
}

//store is: lxy.stencil(((lxy_s0_x_x_1*4) + 2), ((lxy_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x_1*4) + 2), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x_1*4) + 2), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_6(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_23 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_19 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _3798 = (int16_t)(180);
  int16_t _3799 = min(_grad_x_unclamp_stencil_23, _3798);
  int16_t _3800 = (int16_t)(-180);
  int16_t _3801 = max(_3799, _3800);
  int16_t _3802 = min(_grad_y_unclamp_stencil_19, _3798);
  int16_t _3803 = max(_3802, _3800);
  int16_t _3804 = _3801 * _3803;
  int16_t _3805 = (int16_t)(6);
  int16_t _3806 = _3804 >> _3805;
  return _3806;
}

//store is: lxy.stencil(((lxy_s0_x_x_1*4) + 3), ((lxy_s0_y_1 + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x_1*4) + 3), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x_1*4) + 3), ((lxy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_7(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_24 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_20 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _3831 = (int16_t)(180);
  int16_t _3832 = min(_grad_x_unclamp_stencil_24, _3831);
  int16_t _3833 = (int16_t)(-180);
  int16_t _3834 = max(_3832, _3833);
  int16_t _3835 = min(_grad_y_unclamp_stencil_20, _3831);
  int16_t _3836 = max(_3835, _3833);
  int16_t _3837 = _3834 * _3836;
  int16_t _3838 = (int16_t)(6);
  int16_t _3839 = _3837 >> _3838;
  return _3839;
}

//store is: lgxy.stencil((lgxy_s0_x_x_1*4), ((lgxy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_8() {
  int16_t _3865 = (int16_t)(0);
  return _3865;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*4) + 1), ((lgxy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_9() {
  int16_t _3871 = (int16_t)(0);
  return _3871;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*4) + 2), ((lgxy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_10() {
  int16_t _3878 = (int16_t)(0);
  return _3878;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*4) + 3), ((lgxy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_11() {
  int16_t _3885 = (int16_t)(0);
  return _3885;
}

//store is: lgxy.stencil((lgxy_s1_x_x_1*4), ((lgxy_s1_y_1 + -1) + 1)) = (lxy.stencil((lgxy_s1_x_x_1*4), ((lgxy_s1_y_1 + -1) + 1)) + (lgxy.stencil((lgxy_s1_x_x_1*4), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil((lgxy_s1_x_x_1*4), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil((lgxy_s1_x_x_1*4), ((lgxy_s1_y_1 + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_12(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_9 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_37 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_38 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_39 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_40 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_41 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_42 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_43 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_44 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_45 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _3893 = _lxy_stencil_44 + _lxy_stencil_45;
  int16_t _3894 = _lxy_stencil_43 + _3893;
  int16_t _3895 = _lxy_stencil_42 + _3894;
  int16_t _3896 = _lxy_stencil_41 + _3895;
  int16_t _3897 = _lxy_stencil_40 + _3896;
  int16_t _3898 = _lxy_stencil_39 + _3897;
  int16_t _3899 = _lxy_stencil_38 + _3898;
  int16_t _3900 = _lgxy_stencil_9 + _3899;
  int16_t _3901 = _lxy_stencil_37 + _3900;
  return _3901;
}

//store is: lgxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 1), ((lgxy_s1_y_1 + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_13(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_10 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_46 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_47 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_48 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_49 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_50 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_51 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_52 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_53 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_54 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _3937 = _lxy_stencil_53 + _lxy_stencil_54;
  int16_t _3938 = _lxy_stencil_52 + _3937;
  int16_t _3939 = _lxy_stencil_51 + _3938;
  int16_t _3940 = _lxy_stencil_50 + _3939;
  int16_t _3941 = _lxy_stencil_49 + _3940;
  int16_t _3942 = _lxy_stencil_48 + _3941;
  int16_t _3943 = _lxy_stencil_47 + _3942;
  int16_t _3944 = _lgxy_stencil_10 + _3943;
  int16_t _3945 = _lxy_stencil_46 + _3944;
  return _3945;
}

//store is: lgxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 4), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 4), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 2), ((lgxy_s1_y_1 + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 4), ((lgxy_s1_y_1 + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_14(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_11 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_55 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_56 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_57 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_58 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_59 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_60 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_61 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_62 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_63 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _3982 = _lxy_stencil_62 + _lxy_stencil_63;
  int16_t _3983 = _lxy_stencil_61 + _3982;
  int16_t _3984 = _lxy_stencil_60 + _3983;
  int16_t _3985 = _lxy_stencil_59 + _3984;
  int16_t _3986 = _lxy_stencil_58 + _3985;
  int16_t _3987 = _lxy_stencil_57 + _3986;
  int16_t _3988 = _lxy_stencil_56 + _3987;
  int16_t _3989 = _lgxy_stencil_11 + _3988;
  int16_t _3990 = _lxy_stencil_55 + _3989;
  return _3990;
}

//store is: lgxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 4), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 5), ((lgxy_s1_y_1 + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 4), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 5), ((lgxy_s1_y_1 + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 3), ((lgxy_s1_y_1 + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x_1*4) + 5), ((lgxy_s1_y_1 + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x_1*4) + 4), ((lgxy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_15(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_12 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lxy_stencil_64 = (int16_t) (lxy_stencil.extract<0, 15>());
  int16_t _lxy_stencil_65 = (int16_t) (lxy_stencil.extract<16, 31>());
  int16_t _lxy_stencil_66 = (int16_t) (lxy_stencil.extract<32, 47>());
  int16_t _lxy_stencil_67 = (int16_t) (lxy_stencil.extract<48, 63>());
  int16_t _lxy_stencil_68 = (int16_t) (lxy_stencil.extract<64, 79>());
  int16_t _lxy_stencil_69 = (int16_t) (lxy_stencil.extract<80, 95>());
  int16_t _lxy_stencil_70 = (int16_t) (lxy_stencil.extract<96, 111>());
  int16_t _lxy_stencil_71 = (int16_t) (lxy_stencil.extract<112, 127>());
  int16_t _lxy_stencil_72 = (int16_t) (lxy_stencil.extract<128, 143>());

  int16_t _4027 = _lxy_stencil_71 + _lxy_stencil_72;
  int16_t _4028 = _lxy_stencil_70 + _4027;
  int16_t _4029 = _lxy_stencil_69 + _4028;
  int16_t _4030 = _lxy_stencil_68 + _4029;
  int16_t _4031 = _lxy_stencil_67 + _4030;
  int16_t _4032 = _lxy_stencil_66 + _4031;
  int16_t _4033 = _lxy_stencil_65 + _4032;
  int16_t _4034 = _lgxy_stencil_12 + _4033;
  int16_t _4035 = _lxy_stencil_64 + _4034;
  return _4035;
}

//store is: lyy.stencil((lyy_s0_x_x_1*4), ((lyy_s0_y_1 + -2) + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x_1*4), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x_1*4), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_4(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_21 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _4073 = (int16_t)(180);
  int16_t _4074 = min(_grad_y_unclamp_stencil_21, _4073);
  int16_t _4075 = (int16_t)(-180);
  int16_t _4076 = max(_4074, _4075);
  int16_t _4077 = _4076 * _4076;
  int16_t _4078 = (int16_t)(6);
  int16_t _4079 = _4077 >> _4078;
  return _4079;
}

//store is: lyy.stencil(((lyy_s0_x_x_1*4) + 1), ((lyy_s0_y_1 + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x_1*4) + 1), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x_1*4) + 1), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_5(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_22 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _4098 = (int16_t)(180);
  int16_t _4099 = min(_grad_y_unclamp_stencil_22, _4098);
  int16_t _4100 = (int16_t)(-180);
  int16_t _4101 = max(_4099, _4100);
  int16_t _4102 = _4101 * _4101;
  int16_t _4103 = (int16_t)(6);
  int16_t _4104 = _4102 >> _4103;
  return _4104;
}

//store is: lyy.stencil(((lyy_s0_x_x_1*4) + 2), ((lyy_s0_y_1 + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x_1*4) + 2), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x_1*4) + 2), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_6(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_23 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _4124 = (int16_t)(180);
  int16_t _4125 = min(_grad_y_unclamp_stencil_23, _4124);
  int16_t _4126 = (int16_t)(-180);
  int16_t _4127 = max(_4125, _4126);
  int16_t _4128 = _4127 * _4127;
  int16_t _4129 = (int16_t)(6);
  int16_t _4130 = _4128 >> _4129;
  return _4130;
}

//store is: lyy.stencil(((lyy_s0_x_x_1*4) + 3), ((lyy_s0_y_1 + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x_1*4) + 3), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x_1*4) + 3), ((lyy_s0_y_1 + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_7(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_24 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _4150 = (int16_t)(180);
  int16_t _4151 = min(_grad_y_unclamp_stencil_24, _4150);
  int16_t _4152 = (int16_t)(-180);
  int16_t _4153 = max(_4151, _4152);
  int16_t _4154 = _4153 * _4153;
  int16_t _4155 = (int16_t)(6);
  int16_t _4156 = _4154 >> _4155;
  return _4156;
}

//store is: lgyy.stencil((lgyy_s0_x_x_1*4), ((lgyy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_8() {
  int16_t _4177 = (int16_t)(0);
  return _4177;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*4) + 1), ((lgyy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_9() {
  int16_t _4183 = (int16_t)(0);
  return _4183;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*4) + 2), ((lgyy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_10() {
  int16_t _4190 = (int16_t)(0);
  return _4190;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*4) + 3), ((lgyy_s0_y_1 + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_11() {
  int16_t _4197 = (int16_t)(0);
  return _4197;
}

//store is: lgyy.stencil((lgyy_s1_x_x_1*4), ((lgyy_s1_y_1 + -1) + 1)) = (lyy.stencil((lgyy_s1_x_x_1*4), ((lgyy_s1_y_1 + -1) + 1)) + (lgyy.stencil((lgyy_s1_x_x_1*4), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil((lgyy_s1_x_x_1*4), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil((lgyy_s1_x_x_1*4), ((lgyy_s1_y_1 + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_12(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_9 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_37 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_38 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_39 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_40 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_41 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_42 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_43 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_44 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_45 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _4205 = _lyy_stencil_44 + _lyy_stencil_45;
  int16_t _4206 = _lyy_stencil_43 + _4205;
  int16_t _4207 = _lyy_stencil_42 + _4206;
  int16_t _4208 = _lyy_stencil_41 + _4207;
  int16_t _4209 = _lyy_stencil_40 + _4208;
  int16_t _4210 = _lyy_stencil_39 + _4209;
  int16_t _4211 = _lyy_stencil_38 + _4210;
  int16_t _4212 = _lgyy_stencil_9 + _4211;
  int16_t _4213 = _lyy_stencil_37 + _4212;
  return _4213;
}

//store is: lgyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 1), ((lgyy_s1_y_1 + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_13(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_10 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_46 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_47 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_48 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_49 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_50 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_51 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_52 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_53 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_54 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _4249 = _lyy_stencil_53 + _lyy_stencil_54;
  int16_t _4250 = _lyy_stencil_52 + _4249;
  int16_t _4251 = _lyy_stencil_51 + _4250;
  int16_t _4252 = _lyy_stencil_50 + _4251;
  int16_t _4253 = _lyy_stencil_49 + _4252;
  int16_t _4254 = _lyy_stencil_48 + _4253;
  int16_t _4255 = _lyy_stencil_47 + _4254;
  int16_t _4256 = _lgyy_stencil_10 + _4255;
  int16_t _4257 = _lyy_stencil_46 + _4256;
  return _4257;
}

//store is: lgyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 4), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 4), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 2), ((lgyy_s1_y_1 + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 4), ((lgyy_s1_y_1 + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_14(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_11 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_55 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_56 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_57 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_58 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_59 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_60 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_61 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_62 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_63 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _4294 = _lyy_stencil_62 + _lyy_stencil_63;
  int16_t _4295 = _lyy_stencil_61 + _4294;
  int16_t _4296 = _lyy_stencil_60 + _4295;
  int16_t _4297 = _lyy_stencil_59 + _4296;
  int16_t _4298 = _lyy_stencil_58 + _4297;
  int16_t _4299 = _lyy_stencil_57 + _4298;
  int16_t _4300 = _lyy_stencil_56 + _4299;
  int16_t _4301 = _lgyy_stencil_11 + _4300;
  int16_t _4302 = _lyy_stencil_55 + _4301;
  return _4302;
}

//store is: lgyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 4), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 5), ((lgyy_s1_y_1 + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 4), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 5), ((lgyy_s1_y_1 + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 3), ((lgyy_s1_y_1 + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x_1*4) + 5), ((lgyy_s1_y_1 + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x_1*4) + 4), ((lgyy_s1_y_1 + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_15(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_12 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _lyy_stencil_64 = (int16_t) (lyy_stencil.extract<0, 15>());
  int16_t _lyy_stencil_65 = (int16_t) (lyy_stencil.extract<16, 31>());
  int16_t _lyy_stencil_66 = (int16_t) (lyy_stencil.extract<32, 47>());
  int16_t _lyy_stencil_67 = (int16_t) (lyy_stencil.extract<48, 63>());
  int16_t _lyy_stencil_68 = (int16_t) (lyy_stencil.extract<64, 79>());
  int16_t _lyy_stencil_69 = (int16_t) (lyy_stencil.extract<80, 95>());
  int16_t _lyy_stencil_70 = (int16_t) (lyy_stencil.extract<96, 111>());
  int16_t _lyy_stencil_71 = (int16_t) (lyy_stencil.extract<112, 127>());
  int16_t _lyy_stencil_72 = (int16_t) (lyy_stencil.extract<128, 143>());

  int16_t _4339 = _lyy_stencil_71 + _lyy_stencil_72;
  int16_t _4340 = _lyy_stencil_70 + _4339;
  int16_t _4341 = _lyy_stencil_69 + _4340;
  int16_t _4342 = _lyy_stencil_68 + _4341;
  int16_t _4343 = _lyy_stencil_67 + _4342;
  int16_t _4344 = _lyy_stencil_66 + _4343;
  int16_t _4345 = _lyy_stencil_65 + _4344;
  int16_t _4346 = _lgyy_stencil_12 + _4345;
  int16_t _4347 = _lyy_stencil_64 + _4346;
  return _4347;
}

//store is: cim.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1)) = ((((lgxx.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgyy.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgxy.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64))*((lgxx.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x_1*4), ((cim_s0_y_1 + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_4(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_13 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_13 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_13 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _4385 = (int16_t)(6);
  int16_t _4386 = _lgxx_stencil_13 >> _4385;
  int16_t _4387 = _lgyy_stencil_13 >> _4385;
  int16_t _4388 = _4386 * _4387;
  int16_t _4389 = _lgxy_stencil_13 >> _4385;
  int16_t _4390 = _4389 * _4389;
  int16_t _4391 = _4388 - _4390;
  int16_t _4392 = _4386 + _4387;
  int16_t _4393 = _4392 * _4392;
  int16_t _4394 = (int16_t)(4);
  int16_t _4395 = _4393 >> _4394;
  int16_t _4396 = _4391 - _4395;
  return _4396;
}

//store is: cim.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x_1*4) + 1), ((cim_s0_y_1 + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_5(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_14 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_14 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_14 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _4427 = (int16_t)(6);
  int16_t _4428 = _lgxx_stencil_14 >> _4427;
  int16_t _4429 = _lgyy_stencil_14 >> _4427;
  int16_t _4430 = _4428 * _4429;
  int16_t _4431 = _lgxy_stencil_14 >> _4427;
  int16_t _4432 = _4431 * _4431;
  int16_t _4433 = _4430 - _4432;
  int16_t _4434 = _4428 + _4429;
  int16_t _4435 = _4434 * _4434;
  int16_t _4436 = (int16_t)(4);
  int16_t _4437 = _4435 >> _4436;
  int16_t _4438 = _4433 - _4437;
  return _4438;
}

//store is: cim.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x_1*4) + 2), ((cim_s0_y_1 + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_6(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_15 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_15 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_15 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _4470 = (int16_t)(6);
  int16_t _4471 = _lgxx_stencil_15 >> _4470;
  int16_t _4472 = _lgyy_stencil_15 >> _4470;
  int16_t _4473 = _4471 * _4472;
  int16_t _4474 = _lgxy_stencil_15 >> _4470;
  int16_t _4475 = _4474 * _4474;
  int16_t _4476 = _4473 - _4475;
  int16_t _4477 = _4471 + _4472;
  int16_t _4478 = _4477 * _4477;
  int16_t _4479 = (int16_t)(4);
  int16_t _4480 = _4478 >> _4479;
  int16_t _4481 = _4476 - _4480;
  return _4481;
}

//store is: cim.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x_1*4) + 3), ((cim_s0_y_1 + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_7(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_16 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_16 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_16 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _4513 = (int16_t)(6);
  int16_t _4514 = _lgxx_stencil_16 >> _4513;
  int16_t _4515 = _lgyy_stencil_16 >> _4513;
  int16_t _4516 = _4514 * _4515;
  int16_t _4517 = _lgxy_stencil_16 >> _4513;
  int16_t _4518 = _4517 * _4517;
  int16_t _4519 = _4516 - _4518;
  int16_t _4520 = _4514 + _4515;
  int16_t _4521 = _4520 * _4520;
  int16_t _4522 = (int16_t)(4);
  int16_t _4523 = _4521 >> _4522;
  int16_t _4524 = _4519 - _4523;
  return _4524;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), hw_output_s0_y_yi_1) = select((((((((((cim.stencil((hw_output_s0_x_xi_xi_1*4), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi_1*4), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi_1*4), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil_4(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_37 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_38 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_39 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_40 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_41 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_42 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_43 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_44 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_45 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _4556 = (int16_t)(255);
  int16_t _4557 = (int16_t)(0);
  bool _4558 = _cim_stencil_37 < _cim_stencil_38;
  bool _4559 = _cim_stencil_39 < _cim_stencil_38;
  bool _4560 = _4558 && _4559;
  bool _4561 = _cim_stencil_40 < _cim_stencil_38;
  bool _4562 = _4560 && _4561;
  bool _4563 = _cim_stencil_41 < _cim_stencil_38;
  bool _4564 = _4562 && _4563;
  bool _4565 = _cim_stencil_42 < _cim_stencil_38;
  bool _4566 = _4564 && _4565;
  bool _4567 = _cim_stencil_43 < _cim_stencil_38;
  bool _4568 = _4566 && _4567;
  bool _4569 = _cim_stencil_44 < _cim_stencil_38;
  bool _4570 = _4568 && _4569;
  bool _4571 = _cim_stencil_45 < _cim_stencil_38;
  bool _4572 = _4570 && _4571;
  int16_t _4573 = (int16_t)(1);
  bool _4574 = _4573 <= _cim_stencil_38;
  bool _4575 = _4572 && _4574;
  int16_t _4576 = (int16_t)(_4575 ? _4556 : _4557);
  return _4576;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), hw_output_s0_y_yi_1) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 1), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil_5(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_46 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_47 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_48 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_49 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_50 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_51 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_52 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_53 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_54 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _4633 = (int16_t)(255);
  int16_t _4634 = (int16_t)(0);
  bool _4635 = _cim_stencil_46 < _cim_stencil_47;
  bool _4636 = _cim_stencil_48 < _cim_stencil_47;
  bool _4637 = _4635 && _4636;
  bool _4638 = _cim_stencil_49 < _cim_stencil_47;
  bool _4639 = _4637 && _4638;
  bool _4640 = _cim_stencil_50 < _cim_stencil_47;
  bool _4641 = _4639 && _4640;
  bool _4642 = _cim_stencil_51 < _cim_stencil_47;
  bool _4643 = _4641 && _4642;
  bool _4644 = _cim_stencil_52 < _cim_stencil_47;
  bool _4645 = _4643 && _4644;
  bool _4646 = _cim_stencil_53 < _cim_stencil_47;
  bool _4647 = _4645 && _4646;
  bool _4648 = _cim_stencil_54 < _cim_stencil_47;
  bool _4649 = _4647 && _4648;
  int16_t _4650 = (int16_t)(1);
  bool _4651 = _4650 <= _cim_stencil_47;
  bool _4652 = _4649 && _4651;
  int16_t _4653 = (int16_t)(_4652 ? _4633 : _4634);
  return _4653;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), hw_output_s0_y_yi_1) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 2), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil_6(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_55 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_56 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_57 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_58 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_59 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_60 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_61 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_62 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_63 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _4711 = (int16_t)(255);
  int16_t _4712 = (int16_t)(0);
  bool _4713 = _cim_stencil_55 < _cim_stencil_56;
  bool _4714 = _cim_stencil_57 < _cim_stencil_56;
  bool _4715 = _4713 && _4714;
  bool _4716 = _cim_stencil_58 < _cim_stencil_56;
  bool _4717 = _4715 && _4716;
  bool _4718 = _cim_stencil_59 < _cim_stencil_56;
  bool _4719 = _4717 && _4718;
  bool _4720 = _cim_stencil_60 < _cim_stencil_56;
  bool _4721 = _4719 && _4720;
  bool _4722 = _cim_stencil_61 < _cim_stencil_56;
  bool _4723 = _4721 && _4722;
  bool _4724 = _cim_stencil_62 < _cim_stencil_56;
  bool _4725 = _4723 && _4724;
  bool _4726 = _cim_stencil_63 < _cim_stencil_56;
  bool _4727 = _4725 && _4726;
  int16_t _4728 = (int16_t)(1);
  bool _4729 = _4728 <= _cim_stencil_56;
  bool _4730 = _4727 && _4729;
  int16_t _4731 = (int16_t)(_4730 ? _4711 : _4712);
  return _4731;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi_1*4) + 5), hw_output_s0_y_yi_1) = select((((((((((cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 5), hw_output_s0_y_yi_1) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 5), (hw_output_s0_y_yi_1 + 1)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 3), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 5), (hw_output_s0_y_yi_1 + 2)) < cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi_1*4) + 4), (hw_output_s0_y_yi_1 + 1)))), (int16)255, (int16)0)
hw_uint<16> hcompute_hw_output_glb_stencil_7(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_64 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_65 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_66 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_67 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_68 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_69 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_70 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_71 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_72 = (int16_t) (cim_stencil.extract<128, 143>());

  int16_t _4789 = (int16_t)(255);
  int16_t _4790 = (int16_t)(0);
  bool _4791 = _cim_stencil_64 < _cim_stencil_65;
  bool _4792 = _cim_stencil_66 < _cim_stencil_65;
  bool _4793 = _4791 && _4792;
  bool _4794 = _cim_stencil_67 < _cim_stencil_65;
  bool _4795 = _4793 && _4794;
  bool _4796 = _cim_stencil_68 < _cim_stencil_65;
  bool _4797 = _4795 && _4796;
  bool _4798 = _cim_stencil_69 < _cim_stencil_65;
  bool _4799 = _4797 && _4798;
  bool _4800 = _cim_stencil_70 < _cim_stencil_65;
  bool _4801 = _4799 && _4800;
  bool _4802 = _cim_stencil_71 < _cim_stencil_65;
  bool _4803 = _4801 && _4802;
  bool _4804 = _cim_stencil_72 < _cim_stencil_65;
  bool _4805 = _4803 && _4804;
  int16_t _4806 = (int16_t)(1);
  bool _4807 = _4806 <= _cim_stencil_65;
  bool _4808 = _4805 && _4807;
  int16_t _4809 = (int16_t)(_4808 ? _4789 : _4790);
  return _4809;
}

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*294)), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*4), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*294)) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_2 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_2;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*294)) + 2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_2(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_3 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_3;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*294)) + 3), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 3), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_3(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_4 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_4;
}

