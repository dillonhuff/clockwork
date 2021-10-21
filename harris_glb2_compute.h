#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x + (0*60))*2) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x + (0*60))*2) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x + (0*60))*2) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x + (0*60))*2) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_4 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x + (0*60))*2) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_5 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x + (0*60))*2) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_6 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_1 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_2 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_3 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_4 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_5 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_6 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: gray.stencil((gray_s0_x_x*2), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*2), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*2), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*2), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _411 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_1);
  uint16_t _412 = (uint16_t)(150);
  uint16_t _413 = _411 * _412;
  uint16_t _414 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_2);
  uint16_t _415 = (uint16_t)(29);
  uint16_t _416 = _414 * _415;
  uint16_t _417 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_3);
  uint16_t _418 = (uint16_t)(77);
  uint16_t _419 = _417 * _418;
  uint16_t _420 = _416 + _419;
  uint16_t _421 = _413 + _420;
  uint16_t _422 = (uint16_t)(8);
  uint16_t _423 = _421 >> _422;
  return _423;
}

//store is: gray.stencil(((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_1(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _456 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_4);
  uint16_t _457 = (uint16_t)(150);
  uint16_t _458 = _456 * _457;
  uint16_t _459 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_5);
  uint16_t _460 = (uint16_t)(29);
  uint16_t _461 = _459 * _460;
  uint16_t _462 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_6);
  uint16_t _463 = (uint16_t)(77);
  uint16_t _464 = _462 * _463;
  uint16_t _465 = _461 + _464;
  uint16_t _466 = _458 + _465;
  uint16_t _467 = (uint16_t)(8);
  uint16_t _468 = _466 >> _467;
  return _468;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*2), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _503 = (int16_t)(0);
  return _503;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + 1), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_1() {
  int16_t _509 = (int16_t)(0);
  return _509;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*2), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*2), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*2), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 2), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_2(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_1 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_2 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_3 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_4 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_5 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_6 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _517 = (int16_t)(_gray_stencil_1);
  int16_t _518 = (int16_t)(2);
  int16_t _519 = _517 * _518;
  int16_t _520 = _grad_x_unclamp_stencil_1 + _519;
  int16_t _521 = (int16_t)(_gray_stencil_2);
  int16_t _522 = _520 - _521;
  int16_t _523 = (int16_t)(_gray_stencil_3);
  int16_t _524 = _522 + _523;
  int16_t _525 = (int16_t)(_gray_stencil_4);
  int16_t _526 = _525 * _518;
  int16_t _527 = _524 - _526;
  int16_t _528 = (int16_t)(_gray_stencil_5);
  int16_t _529 = _527 - _528;
  int16_t _530 = (int16_t)(_gray_stencil_6);
  int16_t _531 = _529 + _530;
  return _531;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + 1), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 1), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*2) + 3), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_3(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_10 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_11 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_12 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_7 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_8 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_9 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _575 = (int16_t)(_gray_stencil_7);
  int16_t _576 = (int16_t)(2);
  int16_t _577 = _575 * _576;
  int16_t _578 = _grad_x_unclamp_stencil_2 + _577;
  int16_t _579 = (int16_t)(_gray_stencil_8);
  int16_t _580 = _578 - _579;
  int16_t _581 = (int16_t)(_gray_stencil_9);
  int16_t _582 = _580 + _581;
  int16_t _583 = (int16_t)(_gray_stencil_10);
  int16_t _584 = _583 * _576;
  int16_t _585 = _582 - _584;
  int16_t _586 = (int16_t)(_gray_stencil_11);
  int16_t _587 = _585 - _586;
  int16_t _588 = (int16_t)(_gray_stencil_12);
  int16_t _589 = _587 + _588;
  return _589;
}

//store is: lxx.stencil((lxx_s0_x_x*2), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*2), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _635 = (int16_t)(180);
  int16_t _636 = min(_grad_x_unclamp_stencil_3, _635);
  int16_t _637 = (int16_t)(-180);
  int16_t _638 = max(_636, _637);
  int16_t _639 = _638 * _638;
  int16_t _640 = (int16_t)(6);
  int16_t _641 = _639 >> _640;
  return _641;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + 1), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + 1), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_4 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _660 = (int16_t)(180);
  int16_t _661 = min(_grad_x_unclamp_stencil_4, _660);
  int16_t _662 = (int16_t)(-180);
  int16_t _663 = max(_661, _662);
  int16_t _664 = _663 * _663;
  int16_t _665 = (int16_t)(6);
  int16_t _666 = _664 >> _665;
  return _666;
}

//store is: lgxx.stencil((lgxx_s0_x_x*2), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _687 = (int16_t)(0);
  return _687;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + 1), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _693 = (int16_t)(0);
  return _693;
}

//store is: lgxx.stencil((lgxx_s1_x_x*2), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil((lgxx_s1_x_x*2), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil((lgxx_s1_x_x*2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil((lgxx_s1_x_x*2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil((lgxx_s1_x_x*2), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_2(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_2 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_3 = (int16_t) lxx_stencil.extract<32, 47>();
  int16_t _lxx_stencil_4 = (int16_t) lxx_stencil.extract<48, 63>();
  int16_t _lxx_stencil_5 = (int16_t) lxx_stencil.extract<64, 79>();
  int16_t _lxx_stencil_6 = (int16_t) lxx_stencil.extract<80, 95>();
  int16_t _lxx_stencil_7 = (int16_t) lxx_stencil.extract<96, 111>();
  int16_t _lxx_stencil_8 = (int16_t) lxx_stencil.extract<112, 127>();
  int16_t _lxx_stencil_9 = (int16_t) lxx_stencil.extract<128, 143>();

  int16_t _701 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _702 = _lxx_stencil_7 + _701;
  int16_t _703 = _lxx_stencil_6 + _702;
  int16_t _704 = _lxx_stencil_5 + _703;
  int16_t _705 = _lxx_stencil_4 + _704;
  int16_t _706 = _lxx_stencil_3 + _705;
  int16_t _707 = _lxx_stencil_2 + _706;
  int16_t _708 = _lgxx_stencil_1 + _707;
  int16_t _709 = _lxx_stencil_1 + _708;
  return _709;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*2) + 3), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*2) + 2), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_3(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_10 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_11 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_12 = (int16_t) lxx_stencil.extract<32, 47>();
  int16_t _lxx_stencil_13 = (int16_t) lxx_stencil.extract<48, 63>();
  int16_t _lxx_stencil_14 = (int16_t) lxx_stencil.extract<64, 79>();
  int16_t _lxx_stencil_15 = (int16_t) lxx_stencil.extract<80, 95>();
  int16_t _lxx_stencil_16 = (int16_t) lxx_stencil.extract<96, 111>();
  int16_t _lxx_stencil_17 = (int16_t) lxx_stencil.extract<112, 127>();
  int16_t _lxx_stencil_18 = (int16_t) lxx_stencil.extract<128, 143>();

  int16_t _745 = _lxx_stencil_17 + _lxx_stencil_18;
  int16_t _746 = _lxx_stencil_16 + _745;
  int16_t _747 = _lxx_stencil_15 + _746;
  int16_t _748 = _lxx_stencil_14 + _747;
  int16_t _749 = _lxx_stencil_13 + _748;
  int16_t _750 = _lxx_stencil_12 + _749;
  int16_t _751 = _lxx_stencil_11 + _750;
  int16_t _752 = _lgxx_stencil_2 + _751;
  int16_t _753 = _lxx_stencil_10 + _752;
  return _753;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*2), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _791 = (int16_t)(0);
  return _791;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + 1), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_1() {
  int16_t _797 = (int16_t)(0);
  return _797;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*2), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*2), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*2), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_2(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_13 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_14 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_15 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_16 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_17 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_18 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _805 = (int16_t)(_gray_stencil_13);
  int16_t _806 = (int16_t)(2);
  int16_t _807 = _805 * _806;
  int16_t _808 = _grad_y_unclamp_stencil_1 + _807;
  int16_t _809 = (int16_t)(_gray_stencil_14);
  int16_t _810 = _808 - _809;
  int16_t _811 = (int16_t)(_gray_stencil_15);
  int16_t _812 = _811 * _806;
  int16_t _813 = _810 - _812;
  int16_t _814 = (int16_t)(_gray_stencil_16);
  int16_t _815 = _813 - _814;
  int16_t _816 = (int16_t)(_gray_stencil_17);
  int16_t _817 = _815 + _816;
  int16_t _818 = (int16_t)(_gray_stencil_18);
  int16_t _819 = _817 + _818;
  return _819;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + 1), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 1), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*2) + 3), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_3(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_19 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_20 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_21 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_22 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_23 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_24 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _863 = (int16_t)(_gray_stencil_19);
  int16_t _864 = (int16_t)(2);
  int16_t _865 = _863 * _864;
  int16_t _866 = _grad_y_unclamp_stencil_2 + _865;
  int16_t _867 = (int16_t)(_gray_stencil_20);
  int16_t _868 = _866 - _867;
  int16_t _869 = (int16_t)(_gray_stencil_21);
  int16_t _870 = _869 * _864;
  int16_t _871 = _868 - _870;
  int16_t _872 = (int16_t)(_gray_stencil_22);
  int16_t _873 = _871 - _872;
  int16_t _874 = (int16_t)(_gray_stencil_23);
  int16_t _875 = _873 + _874;
  int16_t _876 = (int16_t)(_gray_stencil_24);
  int16_t _877 = _875 + _876;
  return _877;
}

//store is: lxy.stencil((lxy_s0_x_x*2), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*2), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*2), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_5 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_3 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _923 = (int16_t)(180);
  int16_t _924 = min(_grad_x_unclamp_stencil_5, _923);
  int16_t _925 = (int16_t)(-180);
  int16_t _926 = max(_924, _925);
  int16_t _927 = min(_grad_y_unclamp_stencil_3, _923);
  int16_t _928 = max(_927, _925);
  int16_t _929 = _926 * _928;
  int16_t _930 = (int16_t)(6);
  int16_t _931 = _929 >> _930;
  return _931;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + 1), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + 1), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + 1), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_6 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_4 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _955 = (int16_t)(180);
  int16_t _956 = min(_grad_x_unclamp_stencil_6, _955);
  int16_t _957 = (int16_t)(-180);
  int16_t _958 = max(_956, _957);
  int16_t _959 = min(_grad_y_unclamp_stencil_4, _955);
  int16_t _960 = max(_959, _957);
  int16_t _961 = _958 * _960;
  int16_t _962 = (int16_t)(6);
  int16_t _963 = _961 >> _962;
  return _963;
}

//store is: lgxy.stencil((lgxy_s0_x_x*2), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _989 = (int16_t)(0);
  return _989;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + 1), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _995 = (int16_t)(0);
  return _995;
}

//store is: lgxy.stencil((lgxy_s1_x_x*2), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil((lgxy_s1_x_x*2), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil((lgxy_s1_x_x*2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil((lgxy_s1_x_x*2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil((lgxy_s1_x_x*2), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_2(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_2 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_3 = (int16_t) lxy_stencil.extract<32, 47>();
  int16_t _lxy_stencil_4 = (int16_t) lxy_stencil.extract<48, 63>();
  int16_t _lxy_stencil_5 = (int16_t) lxy_stencil.extract<64, 79>();
  int16_t _lxy_stencil_6 = (int16_t) lxy_stencil.extract<80, 95>();
  int16_t _lxy_stencil_7 = (int16_t) lxy_stencil.extract<96, 111>();
  int16_t _lxy_stencil_8 = (int16_t) lxy_stencil.extract<112, 127>();
  int16_t _lxy_stencil_9 = (int16_t) lxy_stencil.extract<128, 143>();

  int16_t _1003 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _1004 = _lxy_stencil_7 + _1003;
  int16_t _1005 = _lxy_stencil_6 + _1004;
  int16_t _1006 = _lxy_stencil_5 + _1005;
  int16_t _1007 = _lxy_stencil_4 + _1006;
  int16_t _1008 = _lxy_stencil_3 + _1007;
  int16_t _1009 = _lxy_stencil_2 + _1008;
  int16_t _1010 = _lgxy_stencil_1 + _1009;
  int16_t _1011 = _lxy_stencil_1 + _1010;
  return _1011;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*2) + 3), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*2) + 2), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_3(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_10 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_11 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_12 = (int16_t) lxy_stencil.extract<32, 47>();
  int16_t _lxy_stencil_13 = (int16_t) lxy_stencil.extract<48, 63>();
  int16_t _lxy_stencil_14 = (int16_t) lxy_stencil.extract<64, 79>();
  int16_t _lxy_stencil_15 = (int16_t) lxy_stencil.extract<80, 95>();
  int16_t _lxy_stencil_16 = (int16_t) lxy_stencil.extract<96, 111>();
  int16_t _lxy_stencil_17 = (int16_t) lxy_stencil.extract<112, 127>();
  int16_t _lxy_stencil_18 = (int16_t) lxy_stencil.extract<128, 143>();

  int16_t _1047 = _lxy_stencil_17 + _lxy_stencil_18;
  int16_t _1048 = _lxy_stencil_16 + _1047;
  int16_t _1049 = _lxy_stencil_15 + _1048;
  int16_t _1050 = _lxy_stencil_14 + _1049;
  int16_t _1051 = _lxy_stencil_13 + _1050;
  int16_t _1052 = _lxy_stencil_12 + _1051;
  int16_t _1053 = _lxy_stencil_11 + _1052;
  int16_t _1054 = _lgxy_stencil_2 + _1053;
  int16_t _1055 = _lxy_stencil_10 + _1054;
  return _1055;
}

//store is: lyy.stencil((lyy_s0_x_x*2), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*2), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_5 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1093 = (int16_t)(180);
  int16_t _1094 = min(_grad_y_unclamp_stencil_5, _1093);
  int16_t _1095 = (int16_t)(-180);
  int16_t _1096 = max(_1094, _1095);
  int16_t _1097 = _1096 * _1096;
  int16_t _1098 = (int16_t)(6);
  int16_t _1099 = _1097 >> _1098;
  return _1099;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + 1), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + 1), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_1(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_6 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1118 = (int16_t)(180);
  int16_t _1119 = min(_grad_y_unclamp_stencil_6, _1118);
  int16_t _1120 = (int16_t)(-180);
  int16_t _1121 = max(_1119, _1120);
  int16_t _1122 = _1121 * _1121;
  int16_t _1123 = (int16_t)(6);
  int16_t _1124 = _1122 >> _1123;
  return _1124;
}

//store is: lgyy.stencil((lgyy_s0_x_x*2), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _1145 = (int16_t)(0);
  return _1145;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + 1), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _1151 = (int16_t)(0);
  return _1151;
}

//store is: lgyy.stencil((lgyy_s1_x_x*2), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil((lgyy_s1_x_x*2), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil((lgyy_s1_x_x*2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil((lgyy_s1_x_x*2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil((lgyy_s1_x_x*2), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_2(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_2 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_3 = (int16_t) lyy_stencil.extract<32, 47>();
  int16_t _lyy_stencil_4 = (int16_t) lyy_stencil.extract<48, 63>();
  int16_t _lyy_stencil_5 = (int16_t) lyy_stencil.extract<64, 79>();
  int16_t _lyy_stencil_6 = (int16_t) lyy_stencil.extract<80, 95>();
  int16_t _lyy_stencil_7 = (int16_t) lyy_stencil.extract<96, 111>();
  int16_t _lyy_stencil_8 = (int16_t) lyy_stencil.extract<112, 127>();
  int16_t _lyy_stencil_9 = (int16_t) lyy_stencil.extract<128, 143>();

  int16_t _1159 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _1160 = _lyy_stencil_7 + _1159;
  int16_t _1161 = _lyy_stencil_6 + _1160;
  int16_t _1162 = _lyy_stencil_5 + _1161;
  int16_t _1163 = _lyy_stencil_4 + _1162;
  int16_t _1164 = _lyy_stencil_3 + _1163;
  int16_t _1165 = _lyy_stencil_2 + _1164;
  int16_t _1166 = _lgyy_stencil_1 + _1165;
  int16_t _1167 = _lyy_stencil_1 + _1166;
  return _1167;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*2) + 3), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*2) + 2), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_3(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_10 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_11 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_12 = (int16_t) lyy_stencil.extract<32, 47>();
  int16_t _lyy_stencil_13 = (int16_t) lyy_stencil.extract<48, 63>();
  int16_t _lyy_stencil_14 = (int16_t) lyy_stencil.extract<64, 79>();
  int16_t _lyy_stencil_15 = (int16_t) lyy_stencil.extract<80, 95>();
  int16_t _lyy_stencil_16 = (int16_t) lyy_stencil.extract<96, 111>();
  int16_t _lyy_stencil_17 = (int16_t) lyy_stencil.extract<112, 127>();
  int16_t _lyy_stencil_18 = (int16_t) lyy_stencil.extract<128, 143>();

  int16_t _1203 = _lyy_stencil_17 + _lyy_stencil_18;
  int16_t _1204 = _lyy_stencil_16 + _1203;
  int16_t _1205 = _lyy_stencil_15 + _1204;
  int16_t _1206 = _lyy_stencil_14 + _1205;
  int16_t _1207 = _lyy_stencil_13 + _1206;
  int16_t _1208 = _lyy_stencil_12 + _1207;
  int16_t _1209 = _lyy_stencil_11 + _1208;
  int16_t _1210 = _lgyy_stencil_2 + _1209;
  int16_t _1211 = _lyy_stencil_10 + _1210;
  return _1211;
}

//store is: cim.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_3 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_3 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _1249 = (int16_t)(6);
  int16_t _1250 = _lgxx_stencil_3 >> _1249;
  int16_t _1251 = _lgyy_stencil_3 >> _1249;
  int16_t _1252 = _1250 * _1251;
  int16_t _1253 = _lgxy_stencil_3 >> _1249;
  int16_t _1254 = _1253 * _1253;
  int16_t _1255 = _1252 - _1254;
  int16_t _1256 = _1250 + _1251;
  int16_t _1257 = _1256 * _1256;
  int16_t _1258 = (int16_t)(4);
  int16_t _1259 = _1257 >> _1258;
  int16_t _1260 = _1255 - _1259;
  return _1260;
}

//store is: cim.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + 1), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_4 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_4 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_4 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _1291 = (int16_t)(6);
  int16_t _1292 = _lgxx_stencil_4 >> _1291;
  int16_t _1293 = _lgyy_stencil_4 >> _1291;
  int16_t _1294 = _1292 * _1293;
  int16_t _1295 = _lgxy_stencil_4 >> _1291;
  int16_t _1296 = _1295 * _1295;
  int16_t _1297 = _1294 - _1296;
  int16_t _1298 = _1292 + _1293;
  int16_t _1299 = _1298 * _1298;
  int16_t _1300 = (int16_t)(4);
  int16_t _1301 = _1299 >> _1300;
  int16_t _1302 = _1297 - _1301;
  return _1302;
}

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_1 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_2 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_3 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_4 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_5 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_6 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_7 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_8 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_9 = (int16_t) cim_stencil.extract<128, 143>();

  bool _1334 = _cim_stencil_1 < _cim_stencil_2;
  bool _1335 = _cim_stencil_3 < _cim_stencil_2;
  bool _1336 = _1334 && _1335;
  bool _1337 = _cim_stencil_4 < _cim_stencil_2;
  bool _1338 = _1336 && _1337;
  bool _1339 = _cim_stencil_5 < _cim_stencil_2;
  bool _1340 = _1338 && _1339;
  bool _1341 = _cim_stencil_6 < _cim_stencil_2;
  bool _1342 = _1340 && _1341;
  bool _1343 = _cim_stencil_7 < _cim_stencil_2;
  bool _1344 = _1342 && _1343;
  bool _1345 = _cim_stencil_8 < _cim_stencil_2;
  bool _1346 = _1344 && _1345;
  bool _1347 = _cim_stencil_9 < _cim_stencil_2;
  bool _1348 = _1346 && _1347;
  int16_t _1349 = (int16_t)(1);
  bool _1350 = _1349 <= _cim_stencil_2;
  bool _1351 = _1348 && _1350;
  int32_t _1352 = (int32_t)(_1351 ? 255 : 0);
  int16_t _1353 = (int16_t)(_1352);
  return _1353;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*2) + 2), (hw_output_s0_y_yi + 1)))), 255, 0))
hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_10 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_11 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_12 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_13 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_14 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_15 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_16 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_17 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_18 = (int16_t) cim_stencil.extract<128, 143>();

  bool _1408 = _cim_stencil_10 < _cim_stencil_11;
  bool _1409 = _cim_stencil_12 < _cim_stencil_11;
  bool _1410 = _1408 && _1409;
  bool _1411 = _cim_stencil_13 < _cim_stencil_11;
  bool _1412 = _1410 && _1411;
  bool _1413 = _cim_stencil_14 < _cim_stencil_11;
  bool _1414 = _1412 && _1413;
  bool _1415 = _cim_stencil_15 < _cim_stencil_11;
  bool _1416 = _1414 && _1415;
  bool _1417 = _cim_stencil_16 < _cim_stencil_11;
  bool _1418 = _1416 && _1417;
  bool _1419 = _cim_stencil_17 < _cim_stencil_11;
  bool _1420 = _1418 && _1419;
  bool _1421 = _cim_stencil_18 < _cim_stencil_11;
  bool _1422 = _1420 && _1421;
  int16_t _1423 = (int16_t)(1);
  bool _1424 = _1423 <= _cim_stencil_11;
  bool _1425 = _1422 && _1424;
  int32_t _1426 = (int32_t)(_1425 ? 255 : 0);
  int16_t _1427 = (int16_t)(_1426);
  return _1427;
}

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi + (0*60))*2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*60))*2) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_2 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_2;
}

