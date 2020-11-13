#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: kernel_x.stencil(-1, -1) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil() {
  int16_t _260 = (int16_t)(0);
  return _260;
}

//store is: kernel_x.stencil(0, -1) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_1() {
  int16_t _263 = (int16_t)(0);
  return _263;
}

//store is: kernel_x.stencil(1, -1) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_2() {
  int16_t _266 = (int16_t)(0);
  return _266;
}

//store is: kernel_x.stencil(-1, 0) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_3() {
  int16_t _269 = (int16_t)(0);
  return _269;
}

//store is: kernel_x.stencil(0, 0) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_4() {
  int16_t _272 = (int16_t)(0);
  return _272;
}

//store is: kernel_x.stencil(1, 0) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_5() {
  int16_t _275 = (int16_t)(0);
  return _275;
}

//store is: kernel_x.stencil(-1, 1) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_6() {
  int16_t _278 = (int16_t)(0);
  return _278;
}

//store is: kernel_x.stencil(0, 1) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_7() {
  int16_t _281 = (int16_t)(0);
  return _281;
}

//store is: kernel_x.stencil(1, 1) = (int16)0
hw_uint<16> hcompute_kernel_x_stencil_8() {
  int16_t _284 = (int16_t)(0);
  return _284;
}

//store is: kernel_x.stencil(-1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_x_stencil_9() {
  int16_t _287 = (int16_t)(-1);
  return _287;
}

//store is: kernel_x.stencil(-1, 0) = (int16)-2
hw_uint<16> hcompute_kernel_x_stencil_10() {
  int16_t _290 = (int16_t)(-2);
  return _290;
}

//store is: kernel_x.stencil(-1, 1) = (int16)-1
hw_uint<16> hcompute_kernel_x_stencil_11() {
  int16_t _293 = (int16_t)(-1);
  return _293;
}

//store is: kernel_x.stencil(1, -1) = (int16)1
hw_uint<16> hcompute_kernel_x_stencil_12() {
  int16_t _296 = (int16_t)(1);
  return _296;
}

//store is: kernel_x.stencil(1, 0) = (int16)2
hw_uint<16> hcompute_kernel_x_stencil_13() {
  int16_t _299 = (int16_t)(2);
  return _299;
}

//store is: kernel_x.stencil(1, 1) = (int16)1
hw_uint<16> hcompute_kernel_x_stencil_14() {
  int16_t _302 = (int16_t)(1);
  return _302;
}

//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _306 = (int16_t)(0);
  return _306;
}

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + grad_x_unclamp_s1_r_x), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(grad_x_unclamp_s1_r_x, grad_x_unclamp_s1_r_y)))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& kernel_x_stencil, hw_uint<16>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_x_stencil_1 = (int16_t) kernel_x_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();

  int16_t _309 = _padded16_global_wrapper_stencil_1 * _kernel_x_stencil_1;
  int16_t _310 = _grad_x_unclamp_stencil_1 + _309;
  return _310;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _320 = (int16_t)(180);
  int16_t _321 = min(_grad_x_unclamp_stencil_2, _320);
  int16_t _322 = (int16_t)(-180);
  int16_t _323 = max(_321, _322);
  return _323;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _333 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _334 = (int16_t)(6);
  int16_t _335 = _333 >> _334;
  return _335;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _343 = (int16_t)(0);
  return _343;
}

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _350 = (int16_t)(0);
  return _350;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _356 = (int16_t)(0);
  return _356;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_3() {
  int16_t _363 = (int16_t)(0);
  return _363;
}

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_4() {
  int16_t _369 = (int16_t)(0);
  return _369;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_5() {
  int16_t _374 = (int16_t)(0);
  return _374;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_6() {
  int16_t _380 = (int16_t)(0);
  return _380;
}

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_7() {
  int16_t _387 = (int16_t)(0);
  return _387;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_8() {
  int16_t _393 = (int16_t)(0);
  return _393;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_box_x + lgxx_s1_x), (lgxx_s1_box_y + lgxx_s1_y)))
hw_uint<16> hcompute_lgxx_stencil_9(hw_uint<16>& lgxx_stencil, hw_uint<16>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();

  int16_t _400 = _lgxx_stencil_1 + _lxx_stencil_1;
  return _400;
}

//store is: kernel_y.stencil(-1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil() {
  int16_t _407 = (int16_t)(0);
  return _407;
}

//store is: kernel_y.stencil(0, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_1() {
  int16_t _410 = (int16_t)(0);
  return _410;
}

//store is: kernel_y.stencil(1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_2() {
  int16_t _413 = (int16_t)(0);
  return _413;
}

//store is: kernel_y.stencil(-1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_3() {
  int16_t _416 = (int16_t)(0);
  return _416;
}

//store is: kernel_y.stencil(0, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_4() {
  int16_t _419 = (int16_t)(0);
  return _419;
}

//store is: kernel_y.stencil(1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_5() {
  int16_t _422 = (int16_t)(0);
  return _422;
}

//store is: kernel_y.stencil(-1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_6() {
  int16_t _425 = (int16_t)(0);
  return _425;
}

//store is: kernel_y.stencil(0, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_7() {
  int16_t _428 = (int16_t)(0);
  return _428;
}

//store is: kernel_y.stencil(1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_8() {
  int16_t _431 = (int16_t)(0);
  return _431;
}

//store is: kernel_y.stencil(-1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_9() {
  int16_t _434 = (int16_t)(1);
  return _434;
}

//store is: kernel_y.stencil(0, 1) = (int16)2
hw_uint<16> hcompute_kernel_y_stencil_10() {
  int16_t _437 = (int16_t)(2);
  return _437;
}

//store is: kernel_y.stencil(1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_11() {
  int16_t _440 = (int16_t)(1);
  return _440;
}

//store is: kernel_y.stencil(-1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_12() {
  int16_t _443 = (int16_t)(-1);
  return _443;
}

//store is: kernel_y.stencil(0, -1) = (int16)-2
hw_uint<16> hcompute_kernel_y_stencil_13() {
  int16_t _446 = (int16_t)(-2);
  return _446;
}

//store is: kernel_y.stencil(1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_14() {
  int16_t _449 = (int16_t)(-1);
  return _449;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _452 = (int16_t)(0);
  return _452;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + grad_y_unclamp_s1_r_x), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(grad_y_unclamp_s1_r_x, grad_y_unclamp_s1_r_y)))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<16>& kernel_y_stencil, hw_uint<16>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_y_stencil_1 = (int16_t) kernel_y_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();

  int16_t _455 = _padded16_global_wrapper_stencil_2 * _kernel_y_stencil_1;
  int16_t _456 = _grad_y_unclamp_stencil_1 + _455;
  return _456;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _466 = (int16_t)(180);
  int16_t _467 = min(_grad_y_unclamp_stencil_2, _466);
  int16_t _468 = (int16_t)(-180);
  int16_t _469 = max(_467, _468);
  return _469;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _479 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _480 = (int16_t)(6);
  int16_t _481 = _479 >> _480;
  return _481;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _490 = (int16_t)(0);
  return _490;
}

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _497 = (int16_t)(0);
  return _497;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _503 = (int16_t)(0);
  return _503;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_3() {
  int16_t _510 = (int16_t)(0);
  return _510;
}

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_4() {
  int16_t _516 = (int16_t)(0);
  return _516;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_5() {
  int16_t _521 = (int16_t)(0);
  return _521;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_6() {
  int16_t _527 = (int16_t)(0);
  return _527;
}

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_7() {
  int16_t _534 = (int16_t)(0);
  return _534;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_8() {
  int16_t _540 = (int16_t)(0);
  return _540;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_box_x + lgxy_s1_x), (lgxy_s1_box_y + lgxy_s1_y)))
hw_uint<16> hcompute_lgxy_stencil_9(hw_uint<16>& lgxy_stencil, hw_uint<16>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();

  int16_t _547 = _lgxy_stencil_1 + _lxy_stencil_1;
  return _547;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _554 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _555 = (int16_t)(6);
  int16_t _556 = _554 >> _555;
  return _556;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _564 = (int16_t)(0);
  return _564;
}

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _571 = (int16_t)(0);
  return _571;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _577 = (int16_t)(0);
  return _577;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_3() {
  int16_t _584 = (int16_t)(0);
  return _584;
}

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_4() {
  int16_t _590 = (int16_t)(0);
  return _590;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_5() {
  int16_t _595 = (int16_t)(0);
  return _595;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_6() {
  int16_t _601 = (int16_t)(0);
  return _601;
}

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_7() {
  int16_t _608 = (int16_t)(0);
  return _608;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_8() {
  int16_t _614 = (int16_t)(0);
  return _614;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_box_x + lgyy_s1_x), (lgyy_s1_box_y + lgyy_s1_y)))
hw_uint<16> hcompute_lgyy_stencil_9(hw_uint<16>& lgyy_stencil, hw_uint<16>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();

  int16_t _621 = _lgyy_stencil_1 + _lyy_stencil_1;
  return _621;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _628 = (int16_t)(6);
  int16_t _629 = _lgxx_stencil_2 >> _628;
  int16_t _630 = _lgyy_stencil_2 >> _628;
  int16_t _631 = _629 * _630;
  int16_t _632 = _lgxy_stencil_2 >> _628;
  int16_t _633 = _632 * _632;
  int16_t _634 = _631 - _633;
  int16_t _635 = _629 + _630;
  int16_t _636 = _635 * _635;
  int16_t _637 = (int16_t)(4);
  int16_t _638 = _636 >> _637;
  int16_t _639 = _634 - _638;
  return _639;
}

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
hw_uint<16> hcompute_cim_output_stencil(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_1 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_2 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_3 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_4 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_5 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_6 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_7 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_8 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_9 = (int16_t) cim_stencil.extract<128, 143>();

  bool _667 = _cim_stencil_1 < _cim_stencil_2;
  bool _668 = _cim_stencil_3 < _cim_stencil_2;
  bool _669 = _667 && _668;
  bool _670 = _cim_stencil_4 < _cim_stencil_2;
  bool _671 = _669 && _670;
  bool _672 = _cim_stencil_5 < _cim_stencil_2;
  bool _673 = _671 && _672;
  bool _674 = _cim_stencil_6 < _cim_stencil_2;
  bool _675 = _673 && _674;
  bool _676 = _cim_stencil_7 < _cim_stencil_2;
  bool _677 = _675 && _676;
  bool _678 = _cim_stencil_8 < _cim_stencil_2;
  bool _679 = _677 && _678;
  bool _680 = _cim_stencil_9 < _cim_stencil_2;
  bool _681 = _679 && _680;
  int16_t _682 = (int16_t)(1);
  bool _683 = _682 <= _cim_stencil_2;
  bool _684 = _681 && _683;
  int32_t _685 = (int32_t)(_684 ? 255 : 0);
  int16_t _686 = (int16_t)(_685);
  return _686;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

