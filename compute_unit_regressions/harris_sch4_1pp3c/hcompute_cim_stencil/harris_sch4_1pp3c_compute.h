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

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(-1, grad_x_unclamp_s1_r_y)) + ((padded16_global_wrapper.stencil(grad_x_s0_x, (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(0, grad_x_unclamp_s1_r_y)) + (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*kernel_x.stencil(1, grad_x_unclamp_s1_r_y)))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<48>& kernel_x_stencil, hw_uint<48>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_x_stencil_1 = (int16_t) kernel_x_stencil.extract<0, 15>();
  int16_t _kernel_x_stencil_2 = (int16_t) kernel_x_stencil.extract<16, 31>();
  int16_t _kernel_x_stencil_3 = (int16_t) kernel_x_stencil.extract<32, 47>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

  int16_t _309 = _padded16_global_wrapper_stencil_1 * _kernel_x_stencil_1;
  int16_t _310 = _padded16_global_wrapper_stencil_2 * _kernel_x_stencil_2;
  int16_t _311 = _padded16_global_wrapper_stencil_3 * _kernel_x_stencil_3;
  int16_t _312 = _grad_x_unclamp_stencil_1 + _311;
  int16_t _313 = _310 + _312;
  int16_t _314 = _309 + _313;
  return _314;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _337 = (int16_t)(180);
  int16_t _338 = min(_grad_x_unclamp_stencil_2, _337);
  int16_t _339 = (int16_t)(-180);
  int16_t _340 = max(_338, _339);
  return _340;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _350 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _351 = (int16_t)(6);
  int16_t _352 = _350 >> _351;
  return _352;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + -1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _360 = (int16_t)(0);
  return _360;
}

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _367 = (int16_t)(0);
  return _367;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _373 = (int16_t)(0);
  return _373;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + -1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_3() {
  int16_t _380 = (int16_t)(0);
  return _380;
}

//store is: lgxx.stencil((lgxx_s0_x_x_1*3), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_4() {
  int16_t _386 = (int16_t)(0);
  return _386;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_1*3) + 1), (lgxx_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_5() {
  int16_t _391 = (int16_t)(0);
  return _391;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + -1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_6() {
  int16_t _397 = (int16_t)(0);
  return _397;
}

//store is: lgxx.stencil((lgxx_s0_x_x_2*3), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_7() {
  int16_t _404 = (int16_t)(0);
  return _404;
}

//store is: lgxx.stencil(((lgxx_s0_x_x_2*3) + 1), ((lgxx_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_8() {
  int16_t _410 = (int16_t)(0);
  return _410;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_box_y + lgxx_s1_y)) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_box_y + lgxx_s1_y)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_box_y + lgxx_s1_y)))))
hw_uint<16> hcompute_lgxx_stencil_9(hw_uint<16>& lgxx_stencil, hw_uint<48>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_2 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_3 = (int16_t) lxx_stencil.extract<32, 47>();

  int16_t _417 = _lgxx_stencil_1 + _lxx_stencil_3;
  int16_t _418 = _lxx_stencil_2 + _417;
  int16_t _419 = _lxx_stencil_1 + _418;
  return _419;
}

//store is: kernel_y.stencil(-1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil() {
  int16_t _433 = (int16_t)(0);
  return _433;
}

//store is: kernel_y.stencil(0, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_1() {
  int16_t _436 = (int16_t)(0);
  return _436;
}

//store is: kernel_y.stencil(1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_2() {
  int16_t _439 = (int16_t)(0);
  return _439;
}

//store is: kernel_y.stencil(-1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_3() {
  int16_t _442 = (int16_t)(0);
  return _442;
}

//store is: kernel_y.stencil(0, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_4() {
  int16_t _445 = (int16_t)(0);
  return _445;
}

//store is: kernel_y.stencil(1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_5() {
  int16_t _448 = (int16_t)(0);
  return _448;
}

//store is: kernel_y.stencil(-1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_6() {
  int16_t _451 = (int16_t)(0);
  return _451;
}

//store is: kernel_y.stencil(0, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_7() {
  int16_t _454 = (int16_t)(0);
  return _454;
}

//store is: kernel_y.stencil(1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_8() {
  int16_t _457 = (int16_t)(0);
  return _457;
}

//store is: kernel_y.stencil(-1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_9() {
  int16_t _460 = (int16_t)(1);
  return _460;
}

//store is: kernel_y.stencil(0, 1) = (int16)2
hw_uint<16> hcompute_kernel_y_stencil_10() {
  int16_t _463 = (int16_t)(2);
  return _463;
}

//store is: kernel_y.stencil(1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_11() {
  int16_t _466 = (int16_t)(1);
  return _466;
}

//store is: kernel_y.stencil(-1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_12() {
  int16_t _469 = (int16_t)(-1);
  return _469;
}

//store is: kernel_y.stencil(0, -1) = (int16)-2
hw_uint<16> hcompute_kernel_y_stencil_13() {
  int16_t _472 = (int16_t)(-2);
  return _472;
}

//store is: kernel_y.stencil(1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_14() {
  int16_t _475 = (int16_t)(-1);
  return _475;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _478 = (int16_t)(0);
  return _478;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(-1, grad_y_unclamp_s1_r_y)) + ((padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(0, grad_y_unclamp_s1_r_y)) + (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*kernel_y.stencil(1, grad_y_unclamp_s1_r_y)))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<48>& kernel_y_stencil, hw_uint<48>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_y_stencil_1 = (int16_t) kernel_y_stencil.extract<0, 15>();
  int16_t _kernel_y_stencil_2 = (int16_t) kernel_y_stencil.extract<16, 31>();
  int16_t _kernel_y_stencil_3 = (int16_t) kernel_y_stencil.extract<32, 47>();

  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

  int16_t _481 = _padded16_global_wrapper_stencil_4 * _kernel_y_stencil_1;
  int16_t _482 = _padded16_global_wrapper_stencil_5 * _kernel_y_stencil_2;
  int16_t _483 = _padded16_global_wrapper_stencil_6 * _kernel_y_stencil_3;
  int16_t _484 = _grad_y_unclamp_stencil_1 + _483;
  int16_t _485 = _482 + _484;
  int16_t _486 = _481 + _485;
  return _486;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _509 = (int16_t)(180);
  int16_t _510 = min(_grad_y_unclamp_stencil_2, _509);
  int16_t _511 = (int16_t)(-180);
  int16_t _512 = max(_510, _511);
  return _512;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _522 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _523 = (int16_t)(6);
  int16_t _524 = _522 >> _523;
  return _524;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + -1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _533 = (int16_t)(0);
  return _533;
}

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _540 = (int16_t)(0);
  return _540;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _546 = (int16_t)(0);
  return _546;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + -1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_3() {
  int16_t _553 = (int16_t)(0);
  return _553;
}

//store is: lgxy.stencil((lgxy_s0_x_x_1*3), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_4() {
  int16_t _559 = (int16_t)(0);
  return _559;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_1*3) + 1), (lgxy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_5() {
  int16_t _564 = (int16_t)(0);
  return _564;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + -1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_6() {
  int16_t _570 = (int16_t)(0);
  return _570;
}

//store is: lgxy.stencil((lgxy_s0_x_x_2*3), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_7() {
  int16_t _577 = (int16_t)(0);
  return _577;
}

//store is: lgxy.stencil(((lgxy_s0_x_x_2*3) + 1), ((lgxy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_8() {
  int16_t _583 = (int16_t)(0);
  return _583;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_box_y + lgxy_s1_y)) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_box_y + lgxy_s1_y)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_box_y + lgxy_s1_y)))))
hw_uint<16> hcompute_lgxy_stencil_9(hw_uint<16>& lgxy_stencil, hw_uint<48>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_2 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_3 = (int16_t) lxy_stencil.extract<32, 47>();

  int16_t _590 = _lgxy_stencil_1 + _lxy_stencil_3;
  int16_t _591 = _lxy_stencil_2 + _590;
  int16_t _592 = _lxy_stencil_1 + _591;
  return _592;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _606 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _607 = (int16_t)(6);
  int16_t _608 = _606 >> _607;
  return _608;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + -1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _616 = (int16_t)(0);
  return _616;
}

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _623 = (int16_t)(0);
  return _623;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y_y*3) + -1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _629 = (int16_t)(0);
  return _629;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + -1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_3() {
  int16_t _636 = (int16_t)(0);
  return _636;
}

//store is: lgyy.stencil((lgyy_s0_x_x_1*3), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_4() {
  int16_t _642 = (int16_t)(0);
  return _642;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_1*3) + 1), (lgyy_s0_y_y*3)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_5() {
  int16_t _647 = (int16_t)(0);
  return _647;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + -1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_6() {
  int16_t _653 = (int16_t)(0);
  return _653;
}

//store is: lgyy.stencil((lgyy_s0_x_x_2*3), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_7() {
  int16_t _660 = (int16_t)(0);
  return _660;
}

//store is: lgyy.stencil(((lgyy_s0_x_x_2*3) + 1), ((lgyy_s0_y_y*3) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_8() {
  int16_t _666 = (int16_t)(0);
  return _666;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_box_y + lgyy_s1_y)) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_box_y + lgyy_s1_y)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_box_y + lgyy_s1_y)))))
hw_uint<16> hcompute_lgyy_stencil_9(hw_uint<16>& lgyy_stencil, hw_uint<48>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_2 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_3 = (int16_t) lyy_stencil.extract<32, 47>();

  int16_t _673 = _lgyy_stencil_1 + _lyy_stencil_3;
  int16_t _674 = _lyy_stencil_2 + _673;
  int16_t _675 = _lyy_stencil_1 + _674;
  return _675;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _689 = (int16_t)(6);
  int16_t _690 = _lgxx_stencil_2 >> _689;
  int16_t _691 = _lgyy_stencil_2 >> _689;
  int16_t _692 = _690 * _691;
  int16_t _693 = _lgxy_stencil_2 >> _689;
  int16_t _694 = _693 * _693;
  int16_t _695 = _692 - _694;
  int16_t _696 = _690 + _691;
  int16_t _697 = _696 * _696;
  int16_t _698 = (int16_t)(4);
  int16_t _699 = _697 >> _698;
  int16_t _700 = _695 - _699;
  return _700;
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

  bool _728 = _cim_stencil_1 < _cim_stencil_2;
  bool _729 = _cim_stencil_3 < _cim_stencil_2;
  bool _730 = _728 && _729;
  bool _731 = _cim_stencil_4 < _cim_stencil_2;
  bool _732 = _730 && _731;
  bool _733 = _cim_stencil_5 < _cim_stencil_2;
  bool _734 = _732 && _733;
  bool _735 = _cim_stencil_6 < _cim_stencil_2;
  bool _736 = _734 && _735;
  bool _737 = _cim_stencil_7 < _cim_stencil_2;
  bool _738 = _736 && _737;
  bool _739 = _cim_stencil_8 < _cim_stencil_2;
  bool _740 = _738 && _739;
  bool _741 = _cim_stencil_9 < _cim_stencil_2;
  bool _742 = _740 && _741;
  int16_t _743 = (int16_t)(1);
  bool _744 = _743 <= _cim_stencil_2;
  bool _745 = _742 && _744;
  int32_t _746 = (int32_t)(_745 ? 255 : 0);
  int16_t _747 = (int16_t)(_746);
  return _747;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

