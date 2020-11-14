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

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + -1))*kernel_x.stencil(-1, -1)) + (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + ((padded16_global_wrapper.stencil(grad_x_s0_x, (grad_x_s0_y + -1))*kernel_x.stencil(0, -1)) + ((padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + -1))*kernel_x.stencil(1, -1)) + ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), grad_x_s0_y)*kernel_x.stencil(-1, 0)) + ((padded16_global_wrapper.stencil(grad_x_s0_x, grad_x_s0_y)*kernel_x.stencil(0, 0)) + ((padded16_global_wrapper.stencil((grad_x_s0_x + 1), grad_x_s0_y)*kernel_x.stencil(1, 0)) + ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + 1))*kernel_x.stencil(-1, 1)) + ((padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + 1))*kernel_x.stencil(1, 1)) + (padded16_global_wrapper.stencil(grad_x_s0_x, (grad_x_s0_y + 1))*kernel_x.stencil(0, 1)))))))))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<144>& kernel_x_stencil, hw_uint<144>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_x_stencil_1 = (int16_t) kernel_x_stencil.extract<0, 15>();
  int16_t _kernel_x_stencil_2 = (int16_t) kernel_x_stencil.extract<16, 31>();
  int16_t _kernel_x_stencil_3 = (int16_t) kernel_x_stencil.extract<32, 47>();
  int16_t _kernel_x_stencil_4 = (int16_t) kernel_x_stencil.extract<48, 63>();
  int16_t _kernel_x_stencil_5 = (int16_t) kernel_x_stencil.extract<64, 79>();
  int16_t _kernel_x_stencil_6 = (int16_t) kernel_x_stencil.extract<80, 95>();
  int16_t _kernel_x_stencil_7 = (int16_t) kernel_x_stencil.extract<96, 111>();
  int16_t _kernel_x_stencil_8 = (int16_t) kernel_x_stencil.extract<112, 127>();
  int16_t _kernel_x_stencil_9 = (int16_t) kernel_x_stencil.extract<128, 143>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<96, 111>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<112, 127>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<128, 143>();

  int16_t _309 = _padded16_global_wrapper_stencil_1 * _kernel_x_stencil_1;
  int16_t _310 = _padded16_global_wrapper_stencil_2 * _kernel_x_stencil_2;
  int16_t _311 = _padded16_global_wrapper_stencil_3 * _kernel_x_stencil_3;
  int16_t _312 = _padded16_global_wrapper_stencil_4 * _kernel_x_stencil_4;
  int16_t _313 = _padded16_global_wrapper_stencil_5 * _kernel_x_stencil_5;
  int16_t _314 = _padded16_global_wrapper_stencil_6 * _kernel_x_stencil_6;
  int16_t _315 = _padded16_global_wrapper_stencil_7 * _kernel_x_stencil_7;
  int16_t _316 = _padded16_global_wrapper_stencil_8 * _kernel_x_stencil_8;
  int16_t _317 = _padded16_global_wrapper_stencil_9 * _kernel_x_stencil_9;
  int16_t _318 = _316 + _317;
  int16_t _319 = _315 + _318;
  int16_t _320 = _314 + _319;
  int16_t _321 = _313 + _320;
  int16_t _322 = _312 + _321;
  int16_t _323 = _311 + _322;
  int16_t _324 = _310 + _323;
  int16_t _325 = _grad_x_unclamp_stencil_1 + _324;
  int16_t _326 = _309 + _325;
  return _326;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _386 = (int16_t)(180);
  int16_t _387 = min(_grad_x_unclamp_stencil_2, _386);
  int16_t _388 = (int16_t)(-180);
  int16_t _389 = max(_387, _388);
  return _389;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _399 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _400 = (int16_t)(6);
  int16_t _401 = _399 >> _400;
  return _401;
}

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _409 = (int16_t)(0);
  return _409;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
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

  int16_t _412 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _413 = _lxx_stencil_7 + _412;
  int16_t _414 = _lxx_stencil_6 + _413;
  int16_t _415 = _lxx_stencil_5 + _414;
  int16_t _416 = _lxx_stencil_4 + _415;
  int16_t _417 = _lxx_stencil_3 + _416;
  int16_t _418 = _lxx_stencil_2 + _417;
  int16_t _419 = _lgxx_stencil_1 + _418;
  int16_t _420 = _lxx_stencil_1 + _419;
  return _420;
}

//store is: kernel_y.stencil(-1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil() {
  int16_t _453 = (int16_t)(0);
  return _453;
}

//store is: kernel_y.stencil(0, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_1() {
  int16_t _456 = (int16_t)(0);
  return _456;
}

//store is: kernel_y.stencil(1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_2() {
  int16_t _459 = (int16_t)(0);
  return _459;
}

//store is: kernel_y.stencil(-1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_3() {
  int16_t _462 = (int16_t)(0);
  return _462;
}

//store is: kernel_y.stencil(0, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_4() {
  int16_t _465 = (int16_t)(0);
  return _465;
}

//store is: kernel_y.stencil(1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_5() {
  int16_t _468 = (int16_t)(0);
  return _468;
}

//store is: kernel_y.stencil(-1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_6() {
  int16_t _471 = (int16_t)(0);
  return _471;
}

//store is: kernel_y.stencil(0, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_7() {
  int16_t _474 = (int16_t)(0);
  return _474;
}

//store is: kernel_y.stencil(1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_8() {
  int16_t _477 = (int16_t)(0);
  return _477;
}

//store is: kernel_y.stencil(-1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_9() {
  int16_t _480 = (int16_t)(1);
  return _480;
}

//store is: kernel_y.stencil(0, 1) = (int16)2
hw_uint<16> hcompute_kernel_y_stencil_10() {
  int16_t _483 = (int16_t)(2);
  return _483;
}

//store is: kernel_y.stencil(1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_11() {
  int16_t _486 = (int16_t)(1);
  return _486;
}

//store is: kernel_y.stencil(-1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_12() {
  int16_t _489 = (int16_t)(-1);
  return _489;
}

//store is: kernel_y.stencil(0, -1) = (int16)-2
hw_uint<16> hcompute_kernel_y_stencil_13() {
  int16_t _492 = (int16_t)(-2);
  return _492;
}

//store is: kernel_y.stencil(1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_14() {
  int16_t _495 = (int16_t)(-1);
  return _495;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _498 = (int16_t)(0);
  return _498;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + -1))*kernel_y.stencil(-1, -1)) + (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + ((padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + -1))*kernel_y.stencil(0, -1)) + ((padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + -1))*kernel_y.stencil(1, -1)) + ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), grad_y_s0_y)*kernel_y.stencil(-1, 0)) + ((padded16_global_wrapper.stencil(grad_y_s0_x, grad_y_s0_y)*kernel_y.stencil(0, 0)) + ((padded16_global_wrapper.stencil((grad_y_s0_x + 1), grad_y_s0_y)*kernel_y.stencil(1, 0)) + ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + 1))*kernel_y.stencil(-1, 1)) + ((padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + 1))*kernel_y.stencil(1, 1)) + (padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + 1))*kernel_y.stencil(0, 1)))))))))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<144>& kernel_y_stencil, hw_uint<144>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_y_stencil_1 = (int16_t) kernel_y_stencil.extract<0, 15>();
  int16_t _kernel_y_stencil_2 = (int16_t) kernel_y_stencil.extract<16, 31>();
  int16_t _kernel_y_stencil_3 = (int16_t) kernel_y_stencil.extract<32, 47>();
  int16_t _kernel_y_stencil_4 = (int16_t) kernel_y_stencil.extract<48, 63>();
  int16_t _kernel_y_stencil_5 = (int16_t) kernel_y_stencil.extract<64, 79>();
  int16_t _kernel_y_stencil_6 = (int16_t) kernel_y_stencil.extract<80, 95>();
  int16_t _kernel_y_stencil_7 = (int16_t) kernel_y_stencil.extract<96, 111>();
  int16_t _kernel_y_stencil_8 = (int16_t) kernel_y_stencil.extract<112, 127>();
  int16_t _kernel_y_stencil_9 = (int16_t) kernel_y_stencil.extract<128, 143>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_13 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_14 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_15 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();
  int16_t _padded16_global_wrapper_stencil_16 = (int16_t) padded16_global_wrapper_stencil.extract<96, 111>();
  int16_t _padded16_global_wrapper_stencil_17 = (int16_t) padded16_global_wrapper_stencil.extract<112, 127>();
  int16_t _padded16_global_wrapper_stencil_18 = (int16_t) padded16_global_wrapper_stencil.extract<128, 143>();

  int16_t _501 = _padded16_global_wrapper_stencil_10 * _kernel_y_stencil_1;
  int16_t _502 = _padded16_global_wrapper_stencil_11 * _kernel_y_stencil_2;
  int16_t _503 = _padded16_global_wrapper_stencil_12 * _kernel_y_stencil_3;
  int16_t _504 = _padded16_global_wrapper_stencil_13 * _kernel_y_stencil_4;
  int16_t _505 = _padded16_global_wrapper_stencil_14 * _kernel_y_stencil_5;
  int16_t _506 = _padded16_global_wrapper_stencil_15 * _kernel_y_stencil_6;
  int16_t _507 = _padded16_global_wrapper_stencil_16 * _kernel_y_stencil_7;
  int16_t _508 = _padded16_global_wrapper_stencil_17 * _kernel_y_stencil_8;
  int16_t _509 = _padded16_global_wrapper_stencil_18 * _kernel_y_stencil_9;
  int16_t _510 = _508 + _509;
  int16_t _511 = _507 + _510;
  int16_t _512 = _506 + _511;
  int16_t _513 = _505 + _512;
  int16_t _514 = _504 + _513;
  int16_t _515 = _503 + _514;
  int16_t _516 = _502 + _515;
  int16_t _517 = _grad_y_unclamp_stencil_1 + _516;
  int16_t _518 = _501 + _517;
  return _518;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)180), (int16)-180)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _578 = (int16_t)(180);
  int16_t _579 = min(_grad_y_unclamp_stencil_2, _578);
  int16_t _580 = (int16_t)(-180);
  int16_t _581 = max(_579, _580);
  return _581;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _591 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _592 = (int16_t)(6);
  int16_t _593 = _591 >> _592;
  return _593;
}

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _602 = (int16_t)(0);
  return _602;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
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

  int16_t _605 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _606 = _lxy_stencil_7 + _605;
  int16_t _607 = _lxy_stencil_6 + _606;
  int16_t _608 = _lxy_stencil_5 + _607;
  int16_t _609 = _lxy_stencil_4 + _608;
  int16_t _610 = _lxy_stencil_3 + _609;
  int16_t _611 = _lxy_stencil_2 + _610;
  int16_t _612 = _lgxy_stencil_1 + _611;
  int16_t _613 = _lxy_stencil_1 + _612;
  return _613;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _646 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _647 = (int16_t)(6);
  int16_t _648 = _646 >> _647;
  return _648;
}

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _656 = (int16_t)(0);
  return _656;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
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

  int16_t _659 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _660 = _lyy_stencil_7 + _659;
  int16_t _661 = _lyy_stencil_6 + _660;
  int16_t _662 = _lyy_stencil_5 + _661;
  int16_t _663 = _lyy_stencil_4 + _662;
  int16_t _664 = _lyy_stencil_3 + _663;
  int16_t _665 = _lyy_stencil_2 + _664;
  int16_t _666 = _lgyy_stencil_1 + _665;
  int16_t _667 = _lyy_stencil_1 + _666;
  return _667;
}

//store is: cim.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1)) = ((((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)*(lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)*(lgxy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64))*((lgxx.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64) + (lgyy.stencil((cim_s0_x_xi + -1), (cim_s0_y_yi + -1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _700 = (int16_t)(6);
  int16_t _701 = _lgxx_stencil_2 >> _700;
  int16_t _702 = _lgyy_stencil_2 >> _700;
  int16_t _703 = _701 * _702;
  int16_t _704 = _lgxy_stencil_2 >> _700;
  int16_t _705 = _704 * _704;
  int16_t _706 = _703 - _705;
  int16_t _707 = _701 + _702;
  int16_t _708 = _707 * _707;
  int16_t _709 = (int16_t)(4);
  int16_t _710 = _708 >> _709;
  int16_t _711 = _706 - _710;
  return _711;
}

