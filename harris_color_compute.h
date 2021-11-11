#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_s0_x_x, (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, (hw_input_global_wrapper_s0_x_x + -3), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_s0_x_x, (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, (hw_input_global_wrapper_s0_x_x + -3), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_s0_x_x, (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, (hw_input_global_wrapper_s0_x_x + -3), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_1 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_2 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x_x, (hw_input_global_wrapper_global_wrapper_s0_y + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_3 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: gray.stencil(gray_s0_x_x, (gray_s0_y + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, gray_s0_x_x, (gray_s0_y + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, gray_s0_x_x, (gray_s0_y + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, gray_s0_x_x, (gray_s0_y + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _344 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_1);
  uint16_t _345 = (uint16_t)(150);
  uint16_t _346 = _344 * _345;
  uint16_t _347 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_2);
  uint16_t _348 = (uint16_t)(29);
  uint16_t _349 = _347 * _348;
  uint16_t _350 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_3);
  uint16_t _351 = (uint16_t)(77);
  uint16_t _352 = _350 * _351;
  uint16_t _353 = _349 + _352;
  uint16_t _354 = _346 + _353;
  uint16_t _355 = (uint16_t)(8);
  uint16_t _356 = _354 >> _355;
  return _356;
}

//store is: grad_x_unclamp.stencil(grad_x_unclamp_s0_x_x, (grad_x_unclamp_s0_y + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _387 = (int16_t)(0);
  return _387;
}

//store is: grad_x_unclamp.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 2)) = ((((((grad_x_unclamp.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 2)) + (int16(gray.stencil((grad_x_unclamp_s1_x_x + 2), (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 2)))) + int16(gray.stencil((grad_x_unclamp_s1_x_x + 2), (grad_x_unclamp_s1_y + 2)))) - (int16(gray.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 3)))*(int16)2)) - int16(gray.stencil(grad_x_unclamp_s1_x_x, (grad_x_unclamp_s1_y + 4)))) + int16(gray.stencil((grad_x_unclamp_s1_x_x + 2), (grad_x_unclamp_s1_y + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_1 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_2 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_3 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_4 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_5 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_6 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _391 = (int16_t)(_gray_stencil_1);
  int16_t _392 = (int16_t)(2);
  int16_t _393 = _391 * _392;
  int16_t _394 = _grad_x_unclamp_stencil_1 + _393;
  int16_t _395 = (int16_t)(_gray_stencil_2);
  int16_t _396 = _394 - _395;
  int16_t _397 = (int16_t)(_gray_stencil_3);
  int16_t _398 = _396 + _397;
  int16_t _399 = (int16_t)(_gray_stencil_4);
  int16_t _400 = _399 * _392;
  int16_t _401 = _398 - _400;
  int16_t _402 = (int16_t)(_gray_stencil_5);
  int16_t _403 = _401 - _402;
  int16_t _404 = (int16_t)(_gray_stencil_6);
  int16_t _405 = _403 + _404;
  return _405;
}

//store is: lxx.stencil(lxx_s0_x_x, (lxx_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(lxx_s0_x_x, (lxx_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(lxx_s0_x_x, (lxx_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _447 = (int16_t)(180);
  int16_t _448 = min(_grad_x_unclamp_stencil_2, _447);
  int16_t _449 = (int16_t)(-180);
  int16_t _450 = max(_448, _449);
  int16_t _451 = _450 * _450;
  int16_t _452 = (int16_t)(6);
  int16_t _453 = _451 >> _452;
  return _453;
}

//store is: lgxx.stencil(lgxx_s0_x_x, (lgxx_s0_y + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _470 = (int16_t)(0);
  return _470;
}

//store is: lgxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 1)) = (lxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 1)) + (lgxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x + 1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x + 2), (lgxx_s1_y + 1)) + (lxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x_x + 1), (lgxx_s1_y + 2)) + (lxx.stencil((lgxx_s1_x_x + 2), (lgxx_s1_y + 2)) + (lxx.stencil(lgxx_s1_x_x, (lgxx_s1_y + 3)) + (lxx.stencil((lgxx_s1_x_x + 2), (lgxx_s1_y + 3)) + lxx.stencil((lgxx_s1_x_x + 1), (lgxx_s1_y + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
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

  int16_t _474 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _475 = _lxx_stencil_7 + _474;
  int16_t _476 = _lxx_stencil_6 + _475;
  int16_t _477 = _lxx_stencil_5 + _476;
  int16_t _478 = _lxx_stencil_4 + _477;
  int16_t _479 = _lxx_stencil_3 + _478;
  int16_t _480 = _lxx_stencil_2 + _479;
  int16_t _481 = _lgxx_stencil_1 + _480;
  int16_t _482 = _lxx_stencil_1 + _481;
  return _482;
}

//store is: grad_y_unclamp.stencil(grad_y_unclamp_s0_x_x, (grad_y_unclamp_s0_y + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _516 = (int16_t)(0);
  return _516;
}

//store is: grad_y_unclamp.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 2)) = ((((((grad_y_unclamp.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 2)) + (int16(gray.stencil((grad_y_unclamp_s1_x_x + 1), (grad_y_unclamp_s1_y + 4)))*(int16)2)) - int16(gray.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 2)))) - (int16(gray.stencil((grad_y_unclamp_s1_x_x + 1), (grad_y_unclamp_s1_y + 2)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x + 2), (grad_y_unclamp_s1_y + 2)))) + int16(gray.stencil(grad_y_unclamp_s1_x_x, (grad_y_unclamp_s1_y + 4)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x + 2), (grad_y_unclamp_s1_y + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_10 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_11 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_12 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_7 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_8 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_9 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _520 = (int16_t)(_gray_stencil_7);
  int16_t _521 = (int16_t)(2);
  int16_t _522 = _520 * _521;
  int16_t _523 = _grad_y_unclamp_stencil_1 + _522;
  int16_t _524 = (int16_t)(_gray_stencil_8);
  int16_t _525 = _523 - _524;
  int16_t _526 = (int16_t)(_gray_stencil_9);
  int16_t _527 = _526 * _521;
  int16_t _528 = _525 - _527;
  int16_t _529 = (int16_t)(_gray_stencil_10);
  int16_t _530 = _528 - _529;
  int16_t _531 = (int16_t)(_gray_stencil_11);
  int16_t _532 = _530 + _531;
  int16_t _533 = (int16_t)(_gray_stencil_12);
  int16_t _534 = _532 + _533;
  return _534;
}

//store is: lxy.stencil(lxy_s0_x_x, (lxy_s0_y + 2)) = ((max(min(grad_x_unclamp.stencil(lxy_s0_x_x, (lxy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(lxy_s0_x_x, (lxy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _576 = (int16_t)(180);
  int16_t _577 = min(_grad_x_unclamp_stencil_3, _576);
  int16_t _578 = (int16_t)(-180);
  int16_t _579 = max(_577, _578);
  int16_t _580 = min(_grad_y_unclamp_stencil_2, _576);
  int16_t _581 = max(_580, _578);
  int16_t _582 = _579 * _581;
  int16_t _583 = (int16_t)(6);
  int16_t _584 = _582 >> _583;
  return _584;
}

//store is: lgxy.stencil(lgxy_s0_x_x, (lgxy_s0_y + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _606 = (int16_t)(0);
  return _606;
}

//store is: lgxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 1)) = (lxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 1)) + (lgxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x + 1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x + 2), (lgxy_s1_y + 1)) + (lxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x_x + 1), (lgxy_s1_y + 2)) + (lxy.stencil((lgxy_s1_x_x + 2), (lgxy_s1_y + 2)) + (lxy.stencil(lgxy_s1_x_x, (lgxy_s1_y + 3)) + (lxy.stencil((lgxy_s1_x_x + 2), (lgxy_s1_y + 3)) + lxy.stencil((lgxy_s1_x_x + 1), (lgxy_s1_y + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
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

  int16_t _610 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _611 = _lxy_stencil_7 + _610;
  int16_t _612 = _lxy_stencil_6 + _611;
  int16_t _613 = _lxy_stencil_5 + _612;
  int16_t _614 = _lxy_stencil_4 + _613;
  int16_t _615 = _lxy_stencil_3 + _614;
  int16_t _616 = _lxy_stencil_2 + _615;
  int16_t _617 = _lgxy_stencil_1 + _616;
  int16_t _618 = _lxy_stencil_1 + _617;
  return _618;
}

//store is: lyy.stencil(lyy_s0_x_x, (lyy_s0_y + 2)) = ((max(min(grad_y_unclamp.stencil(lyy_s0_x_x, (lyy_s0_y + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(lyy_s0_x_x, (lyy_s0_y + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_3 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _652 = (int16_t)(180);
  int16_t _653 = min(_grad_y_unclamp_stencil_3, _652);
  int16_t _654 = (int16_t)(-180);
  int16_t _655 = max(_653, _654);
  int16_t _656 = _655 * _655;
  int16_t _657 = (int16_t)(6);
  int16_t _658 = _656 >> _657;
  return _658;
}

//store is: lgyy.stencil(lgyy_s0_x_x, (lgyy_s0_y + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _675 = (int16_t)(0);
  return _675;
}

//store is: lgyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 1)) = (lyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 1)) + (lgyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x + 1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x + 2), (lgyy_s1_y + 1)) + (lyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x_x + 1), (lgyy_s1_y + 2)) + (lyy.stencil((lgyy_s1_x_x + 2), (lgyy_s1_y + 2)) + (lyy.stencil(lgyy_s1_x_x, (lgyy_s1_y + 3)) + (lyy.stencil((lgyy_s1_x_x + 2), (lgyy_s1_y + 3)) + lyy.stencil((lgyy_s1_x_x + 1), (lgyy_s1_y + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
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

  int16_t _679 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _680 = _lyy_stencil_7 + _679;
  int16_t _681 = _lyy_stencil_6 + _680;
  int16_t _682 = _lyy_stencil_5 + _681;
  int16_t _683 = _lyy_stencil_4 + _682;
  int16_t _684 = _lyy_stencil_3 + _683;
  int16_t _685 = _lyy_stencil_2 + _684;
  int16_t _686 = _lgyy_stencil_1 + _685;
  int16_t _687 = _lyy_stencil_1 + _686;
  return _687;
}

//store is: cim.stencil(cim_s0_x_x, (cim_s0_y + 1)) = ((((lgxx.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)*(lgyy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)) - ((lgxy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)*(lgxy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64))) - ((((lgxx.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64))*((lgxx.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64) + (lgyy.stencil(cim_s0_x_x, (cim_s0_y + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _721 = (int16_t)(6);
  int16_t _722 = _lgxx_stencil_2 >> _721;
  int16_t _723 = _lgyy_stencil_2 >> _721;
  int16_t _724 = _722 * _723;
  int16_t _725 = _lgxy_stencil_2 >> _721;
  int16_t _726 = _725 * _725;
  int16_t _727 = _724 - _726;
  int16_t _728 = _722 + _723;
  int16_t _729 = _728 * _728;
  int16_t _730 = (int16_t)(4);
  int16_t _731 = _729 >> _730;
  int16_t _732 = _727 - _731;
  return _732;
}

//store is: hw_output.glb.stencil(hw_output_s0_x_xi_xi, hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(hw_output_s0_x_xi_xi, hw_output_s0_y_yi) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil((hw_output_s0_x_xi_xi + 1), hw_output_s0_y_yi) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 2), hw_output_s0_y_yi) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(hw_output_s0_x_xi_xi, (hw_output_s0_y_yi + 1)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 2), (hw_output_s0_y_yi + 1)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(hw_output_s0_x_xi_xi, (hw_output_s0_y_yi + 2)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 2)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi + 2), (hw_output_s0_y_yi + 2)) < cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil((hw_output_s0_x_xi_xi + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
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

  bool _761 = _cim_stencil_1 < _cim_stencil_2;
  bool _762 = _cim_stencil_3 < _cim_stencil_2;
  bool _763 = _761 && _762;
  bool _764 = _cim_stencil_4 < _cim_stencil_2;
  bool _765 = _763 && _764;
  bool _766 = _cim_stencil_5 < _cim_stencil_2;
  bool _767 = _765 && _766;
  bool _768 = _cim_stencil_6 < _cim_stencil_2;
  bool _769 = _767 && _768;
  bool _770 = _cim_stencil_7 < _cim_stencil_2;
  bool _771 = _769 && _770;
  bool _772 = _cim_stencil_8 < _cim_stencil_2;
  bool _773 = _771 && _772;
  bool _774 = _cim_stencil_9 < _cim_stencil_2;
  bool _775 = _773 && _774;
  int16_t _776 = (int16_t)(1);
  bool _777 = _776 <= _cim_stencil_2;
  bool _778 = _775 && _777;
  int32_t _779 = (int32_t)(_778 ? 255 : 0);
  int16_t _780 = (int16_t)(_779);
  return _780;
}

//store is: hw_output_global_wrapper.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_1;
}

