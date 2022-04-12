#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + -3), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + -3), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + -3), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + -2), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_4 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + -2), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_5 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + -2), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_6 = (int16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_1 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_2 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_3 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_4 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_5 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_6 = (int16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: gray.stencil((gray_s0_x_x*2), (gray_s0_y + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*2), (gray_s0_y + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*2), (gray_s0_y + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*2), (gray_s0_y + 3)))*(uint16)77)))/(uint16)256)
static hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _377 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_1);
  uint16_t _378 = (uint16_t)(150);
  uint16_t _379 = _377 * _378;
  uint16_t _380 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_2);
  uint16_t _381 = (uint16_t)(29);
  uint16_t _382 = _380 * _381;
  uint16_t _383 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_3);
  uint16_t _384 = (uint16_t)(77);
  uint16_t _385 = _383 * _384;
  uint16_t _386 = _382 + _385;
  uint16_t _387 = _379 + _386;
  uint16_t _388 = (uint16_t)(8);
  uint16_t _389 = _387 >> _388;
  return _389;
}

//store is: gray.stencil(((gray_s0_x_x*2) + 1), (gray_s0_y + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*2) + 1), (gray_s0_y + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*2) + 1), (gray_s0_y + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*2) + 1), (gray_s0_y + 3)))*(uint16)77)))/(uint16)256)
static hw_uint<16> hcompute_gray_stencil_1(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (int16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _421 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_4);
  uint16_t _422 = (uint16_t)(150);
  uint16_t _423 = _421 * _422;
  uint16_t _424 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_5);
  uint16_t _425 = (uint16_t)(29);
  uint16_t _426 = _424 * _425;
  uint16_t _427 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_6);
  uint16_t _428 = (uint16_t)(77);
  uint16_t _429 = _427 * _428;
  uint16_t _430 = _426 + _429;
  uint16_t _431 = _423 + _430;
  uint16_t _432 = (uint16_t)(8);
  uint16_t _433 = _431 >> _432;
  return _433;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*2), (grad_x_unclamp_s0_y + 2)) = (int16)0
static hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _466 = (int16_t)(0);
  return _466;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + 1), (grad_x_unclamp_s0_y + 2)) = (int16)0
static hw_uint<16> hcompute_grad_x_unclamp_stencil_1() {
  int16_t _471 = (int16_t)(0);
  return _471;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 2)) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 2)))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), (grad_x_unclamp_s1_y + 4))))
static hw_uint<16> hcompute_grad_x_unclamp_stencil_2(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_1 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_2 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_3 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_4 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_5 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_6 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _477 = (int16_t)(_gray_stencil_1);
  int16_t _478 = (int16_t)(2);
  int16_t _479 = _477 * _478;
  int16_t _480 = _grad_x_unclamp_stencil_1 + _479;
  int16_t _481 = (int16_t)(_gray_stencil_2);
  int16_t _482 = _480 - _481;
  int16_t _483 = (int16_t)(_gray_stencil_3);
  int16_t _484 = _482 + _483;
  int16_t _485 = (int16_t)(_gray_stencil_4);
  int16_t _486 = _485 * _478;
  int16_t _487 = _484 - _486;
  int16_t _488 = (int16_t)(_gray_stencil_5);
  int16_t _489 = _487 - _488;
  int16_t _490 = (int16_t)(_gray_stencil_6);
  int16_t _491 = _489 + _490;
  return _491;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), (grad_x_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), (grad_x_unclamp_s1_y + 4))))
static hw_uint<16> hcompute_grad_x_unclamp_stencil_3(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_10 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_11 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_12 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_7 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_8 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_9 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _534 = (int16_t)(_gray_stencil_7);
  int16_t _535 = (int16_t)(2);
  int16_t _536 = _534 * _535;
  int16_t _537 = _grad_x_unclamp_stencil_2 + _536;
  int16_t _538 = (int16_t)(_gray_stencil_8);
  int16_t _539 = _537 - _538;
  int16_t _540 = (int16_t)(_gray_stencil_9);
  int16_t _541 = _539 + _540;
  int16_t _542 = (int16_t)(_gray_stencil_10);
  int16_t _543 = _542 * _535;
  int16_t _544 = _541 - _543;
  int16_t _545 = (int16_t)(_gray_stencil_11);
  int16_t _546 = _544 - _545;
  int16_t _547 = (int16_t)(_gray_stencil_12);
  int16_t _548 = _546 + _547;
  return _548;
}

//store is: lxx.stencil((lxx_s0_x_x*2), (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _592 = (int16_t)(180);
  int16_t _593 = min(_grad_x_unclamp_stencil_3, _592);
  int16_t _594 = (int16_t)(-180);
  int16_t _595 = max(_593, _594);
  int16_t _596 = _595 * _595;
  int16_t _597 = (int16_t)(6);
  int16_t _598 = _596 >> _597;
  return _598;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + 1), (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_4 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _616 = (int16_t)(180);
  int16_t _617 = min(_grad_x_unclamp_stencil_4, _616);
  int16_t _618 = (int16_t)(-180);
  int16_t _619 = max(_617, _618);
  int16_t _620 = _619 * _619;
  int16_t _621 = (int16_t)(6);
  int16_t _622 = _620 >> _621;
  return _622;
}

//store is: lgxx.stencil((lgxx_s0_x_x*2), (lgxx_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _641 = (int16_t)(0);
  return _641;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + 1), (lgxx_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _646 = (int16_t)(0);
  return _646;
}

//store is: lgxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) = (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + (lgxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 3)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 3)) + lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgxx_stencil_2(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
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

  int16_t _652 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _653 = _lxx_stencil_7 + _652;
  int16_t _654 = _lxx_stencil_6 + _653;
  int16_t _655 = _lxx_stencil_5 + _654;
  int16_t _656 = _lxx_stencil_4 + _655;
  int16_t _657 = _lxx_stencil_3 + _656;
  int16_t _658 = _lxx_stencil_2 + _657;
  int16_t _659 = _lgxx_stencil_1 + _658;
  int16_t _660 = _lxx_stencil_1 + _659;
  return _660;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) = (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lgxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 3)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), (lgxx_s1_y + 3)) + lxx.stencil(((lgxx_s1_x_x*2) + 2), (lgxx_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgxx_stencil_3(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
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

  int16_t _695 = _lxx_stencil_17 + _lxx_stencil_18;
  int16_t _696 = _lxx_stencil_16 + _695;
  int16_t _697 = _lxx_stencil_15 + _696;
  int16_t _698 = _lxx_stencil_14 + _697;
  int16_t _699 = _lxx_stencil_13 + _698;
  int16_t _700 = _lxx_stencil_12 + _699;
  int16_t _701 = _lxx_stencil_11 + _700;
  int16_t _702 = _lgxx_stencil_2 + _701;
  int16_t _703 = _lxx_stencil_10 + _702;
  return _703;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*2), (grad_y_unclamp_s0_y + 2)) = (int16)0
static hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _739 = (int16_t)(0);
  return _739;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + 1), (grad_y_unclamp_s0_y + 2)) = (int16)0
static hw_uint<16> hcompute_grad_y_unclamp_stencil_1() {
  int16_t _744 = (int16_t)(0);
  return _744;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 2)) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 4)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 4))))
static hw_uint<16> hcompute_grad_y_unclamp_stencil_2(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_13 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_14 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_15 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_16 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_17 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_18 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _750 = (int16_t)(_gray_stencil_13);
  int16_t _751 = (int16_t)(2);
  int16_t _752 = _750 * _751;
  int16_t _753 = _grad_y_unclamp_stencil_1 + _752;
  int16_t _754 = (int16_t)(_gray_stencil_14);
  int16_t _755 = _753 - _754;
  int16_t _756 = (int16_t)(_gray_stencil_15);
  int16_t _757 = _756 * _751;
  int16_t _758 = _755 - _757;
  int16_t _759 = (int16_t)(_gray_stencil_16);
  int16_t _760 = _758 - _759;
  int16_t _761 = (int16_t)(_gray_stencil_17);
  int16_t _762 = _760 + _761;
  int16_t _763 = (int16_t)(_gray_stencil_18);
  int16_t _764 = _762 + _763;
  return _764;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), (grad_y_unclamp_s1_y + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), (grad_y_unclamp_s1_y + 4))))
static hw_uint<16> hcompute_grad_y_unclamp_stencil_3(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  uint16_t _gray_stencil_19 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_20 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_21 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_22 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_23 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_24 = (uint16_t) (gray_stencil.extract<80, 95>());

  int16_t _807 = (int16_t)(_gray_stencil_19);
  int16_t _808 = (int16_t)(2);
  int16_t _809 = _807 * _808;
  int16_t _810 = _grad_y_unclamp_stencil_2 + _809;
  int16_t _811 = (int16_t)(_gray_stencil_20);
  int16_t _812 = _810 - _811;
  int16_t _813 = (int16_t)(_gray_stencil_21);
  int16_t _814 = _813 * _808;
  int16_t _815 = _812 - _814;
  int16_t _816 = (int16_t)(_gray_stencil_22);
  int16_t _817 = _815 - _816;
  int16_t _818 = (int16_t)(_gray_stencil_23);
  int16_t _819 = _817 + _818;
  int16_t _820 = (int16_t)(_gray_stencil_24);
  int16_t _821 = _819 + _820;
  return _821;
}

//store is: lxy.stencil((lxy_s0_x_x*2), (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*2), (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*2), (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_5 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_3 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _865 = (int16_t)(180);
  int16_t _866 = min(_grad_x_unclamp_stencil_5, _865);
  int16_t _867 = (int16_t)(-180);
  int16_t _868 = max(_866, _867);
  int16_t _869 = min(_grad_y_unclamp_stencil_3, _865);
  int16_t _870 = max(_869, _867);
  int16_t _871 = _868 * _870;
  int16_t _872 = (int16_t)(6);
  int16_t _873 = _871 >> _872;
  return _873;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + 1), (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + 1), (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + 1), (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_6 = (int16_t) (grad_x_unclamp_stencil.extract<0, 15>());

  int16_t _grad_y_unclamp_stencil_4 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _896 = (int16_t)(180);
  int16_t _897 = min(_grad_x_unclamp_stencil_6, _896);
  int16_t _898 = (int16_t)(-180);
  int16_t _899 = max(_897, _898);
  int16_t _900 = min(_grad_y_unclamp_stencil_4, _896);
  int16_t _901 = max(_900, _898);
  int16_t _902 = _899 * _901;
  int16_t _903 = (int16_t)(6);
  int16_t _904 = _902 >> _903;
  return _904;
}

//store is: lgxy.stencil((lgxy_s0_x_x*2), (lgxy_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _928 = (int16_t)(0);
  return _928;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + 1), (lgxy_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _933 = (int16_t)(0);
  return _933;
}

//store is: lgxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) = (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + (lgxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 3)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 3)) + lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgxy_stencil_2(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
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

  int16_t _939 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _940 = _lxy_stencil_7 + _939;
  int16_t _941 = _lxy_stencil_6 + _940;
  int16_t _942 = _lxy_stencil_5 + _941;
  int16_t _943 = _lxy_stencil_4 + _942;
  int16_t _944 = _lxy_stencil_3 + _943;
  int16_t _945 = _lxy_stencil_2 + _944;
  int16_t _946 = _lgxy_stencil_1 + _945;
  int16_t _947 = _lxy_stencil_1 + _946;
  return _947;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) = (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lgxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 3)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), (lgxy_s1_y + 3)) + lxy.stencil(((lgxy_s1_x_x*2) + 2), (lgxy_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgxy_stencil_3(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
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

  int16_t _982 = _lxy_stencil_17 + _lxy_stencil_18;
  int16_t _983 = _lxy_stencil_16 + _982;
  int16_t _984 = _lxy_stencil_15 + _983;
  int16_t _985 = _lxy_stencil_14 + _984;
  int16_t _986 = _lxy_stencil_13 + _985;
  int16_t _987 = _lxy_stencil_12 + _986;
  int16_t _988 = _lxy_stencil_11 + _987;
  int16_t _989 = _lgxy_stencil_2 + _988;
  int16_t _990 = _lxy_stencil_10 + _989;
  return _990;
}

//store is: lyy.stencil((lyy_s0_x_x*2), (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_5 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1026 = (int16_t)(180);
  int16_t _1027 = min(_grad_y_unclamp_stencil_5, _1026);
  int16_t _1028 = (int16_t)(-180);
  int16_t _1029 = max(_1027, _1028);
  int16_t _1030 = _1029 * _1029;
  int16_t _1031 = (int16_t)(6);
  int16_t _1032 = _1030 >> _1031;
  return _1032;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + 1), (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
static hw_uint<16> hcompute_lyy_stencil_1(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_6 = (int16_t) (grad_y_unclamp_stencil.extract<0, 15>());

  int16_t _1050 = (int16_t)(180);
  int16_t _1051 = min(_grad_y_unclamp_stencil_6, _1050);
  int16_t _1052 = (int16_t)(-180);
  int16_t _1053 = max(_1051, _1052);
  int16_t _1054 = _1053 * _1053;
  int16_t _1055 = (int16_t)(6);
  int16_t _1056 = _1054 >> _1055;
  return _1056;
}

//store is: lgyy.stencil((lgyy_s0_x_x*2), (lgyy_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _1075 = (int16_t)(0);
  return _1075;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + 1), (lgyy_s0_y + 1)) = (int16)0
static hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _1080 = (int16_t)(0);
  return _1080;
}

//store is: lgyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) = (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + (lgyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 3)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 3)) + lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgyy_stencil_2(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
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

  int16_t _1086 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _1087 = _lyy_stencil_7 + _1086;
  int16_t _1088 = _lyy_stencil_6 + _1087;
  int16_t _1089 = _lyy_stencil_5 + _1088;
  int16_t _1090 = _lyy_stencil_4 + _1089;
  int16_t _1091 = _lyy_stencil_3 + _1090;
  int16_t _1092 = _lyy_stencil_2 + _1091;
  int16_t _1093 = _lgyy_stencil_1 + _1092;
  int16_t _1094 = _lyy_stencil_1 + _1093;
  return _1094;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) = (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lgyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 3)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), (lgyy_s1_y + 3)) + lyy.stencil(((lgyy_s1_x_x*2) + 2), (lgyy_s1_y + 3)))))))))))
static hw_uint<16> hcompute_lgyy_stencil_3(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
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

  int16_t _1129 = _lyy_stencil_17 + _lyy_stencil_18;
  int16_t _1130 = _lyy_stencil_16 + _1129;
  int16_t _1131 = _lyy_stencil_15 + _1130;
  int16_t _1132 = _lyy_stencil_14 + _1131;
  int16_t _1133 = _lyy_stencil_13 + _1132;
  int16_t _1134 = _lyy_stencil_12 + _1133;
  int16_t _1135 = _lyy_stencil_11 + _1134;
  int16_t _1136 = _lgyy_stencil_2 + _1135;
  int16_t _1137 = _lyy_stencil_10 + _1136;
  return _1137;
}

//store is: cim.stencil((cim_s0_x_x*2), (cim_s0_y + 1)) = ((((lgxx.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), (cim_s0_y + 1))/(int16)64)))/(int16)16))
static hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_3 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_3 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _1173 = (int16_t)(6);
  int16_t _1174 = _lgxx_stencil_3 >> _1173;
  int16_t _1175 = _lgyy_stencil_3 >> _1173;
  int16_t _1176 = _1174 * _1175;
  int16_t _1177 = _lgxy_stencil_3 >> _1173;
  int16_t _1178 = _1177 * _1177;
  int16_t _1179 = _1176 - _1178;
  int16_t _1180 = _1174 + _1175;
  int16_t _1181 = _1180 * _1180;
  int16_t _1182 = (int16_t)(4);
  int16_t _1183 = _1181 >> _1182;
  int16_t _1184 = _1179 - _1183;
  return _1184;
}

//store is: cim.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1)) = ((((lgxx.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), (cim_s0_y + 1))/(int16)64)))/(int16)16))
static hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_4 = (int16_t) (lgxx_stencil.extract<0, 15>());

  int16_t _lgxy_stencil_4 = (int16_t) (lgxy_stencil.extract<0, 15>());

  int16_t _lgyy_stencil_4 = (int16_t) (lgyy_stencil.extract<0, 15>());

  int16_t _1214 = (int16_t)(6);
  int16_t _1215 = _lgxx_stencil_4 >> _1214;
  int16_t _1216 = _lgyy_stencil_4 >> _1214;
  int16_t _1217 = _1215 * _1216;
  int16_t _1218 = _lgxy_stencil_4 >> _1214;
  int16_t _1219 = _1218 * _1218;
  int16_t _1220 = _1217 - _1219;
  int16_t _1221 = _1215 + _1216;
  int16_t _1222 = _1221 * _1221;
  int16_t _1223 = (int16_t)(4);
  int16_t _1224 = _1222 >> _1223;
  int16_t _1225 = _1220 - _1224;
  return _1225;
}

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
static hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_1 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_2 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_3 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_4 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_5 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_6 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_7 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_8 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_9 = (int16_t) (cim_stencil.extract<128, 143>());

  bool _1256 = _cim_stencil_1 < _cim_stencil_2;
  bool _1257 = _cim_stencil_3 < _cim_stencil_2;
  bool _1258 = _1256 && _1257;
  bool _1259 = _cim_stencil_4 < _cim_stencil_2;
  bool _1260 = _1258 && _1259;
  bool _1261 = _cim_stencil_5 < _cim_stencil_2;
  bool _1262 = _1260 && _1261;
  bool _1263 = _cim_stencil_6 < _cim_stencil_2;
  bool _1264 = _1262 && _1263;
  bool _1265 = _cim_stencil_7 < _cim_stencil_2;
  bool _1266 = _1264 && _1265;
  bool _1267 = _cim_stencil_8 < _cim_stencil_2;
  bool _1268 = _1266 && _1267;
  bool _1269 = _cim_stencil_9 < _cim_stencil_2;
  bool _1270 = _1268 && _1269;
  int16_t _1271 = (int16_t)(1);
  bool _1272 = _1271 <= _cim_stencil_2;
  bool _1273 = _1270 && _1272;
  int32_t _1274 = (int32_t)(_1273 ? 255 : 0);
  int16_t _1275 = (int16_t)(_1274);
  return _1275;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))), 255, 0))
static hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_10 = (int16_t) (cim_stencil.extract<0, 15>());
  int16_t _cim_stencil_11 = (int16_t) (cim_stencil.extract<16, 31>());
  int16_t _cim_stencil_12 = (int16_t) (cim_stencil.extract<32, 47>());
  int16_t _cim_stencil_13 = (int16_t) (cim_stencil.extract<48, 63>());
  int16_t _cim_stencil_14 = (int16_t) (cim_stencil.extract<64, 79>());
  int16_t _cim_stencil_15 = (int16_t) (cim_stencil.extract<80, 95>());
  int16_t _cim_stencil_16 = (int16_t) (cim_stencil.extract<96, 111>());
  int16_t _cim_stencil_17 = (int16_t) (cim_stencil.extract<112, 127>());
  int16_t _cim_stencil_18 = (int16_t) (cim_stencil.extract<128, 143>());

  bool _1330 = _cim_stencil_10 < _cim_stencil_11;
  bool _1331 = _cim_stencil_12 < _cim_stencil_11;
  bool _1332 = _1330 && _1331;
  bool _1333 = _cim_stencil_13 < _cim_stencil_11;
  bool _1334 = _1332 && _1333;
  bool _1335 = _cim_stencil_14 < _cim_stencil_11;
  bool _1336 = _1334 && _1335;
  bool _1337 = _cim_stencil_15 < _cim_stencil_11;
  bool _1338 = _1336 && _1337;
  bool _1339 = _cim_stencil_16 < _cim_stencil_11;
  bool _1340 = _1338 && _1339;
  bool _1341 = _cim_stencil_17 < _cim_stencil_11;
  bool _1342 = _1340 && _1341;
  bool _1343 = _cim_stencil_18 < _cim_stencil_11;
  bool _1344 = _1342 && _1343;
  int16_t _1345 = (int16_t)(1);
  bool _1346 = _1345 <= _cim_stencil_11;
  bool _1347 = _1344 && _1346;
  int32_t _1348 = (int32_t)(_1347 ? 255 : 0);
  int16_t _1349 = (int16_t)(_1348);
  return _1349;
}

//store is: hw_output_global_wrapper.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_2 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_2;
}

