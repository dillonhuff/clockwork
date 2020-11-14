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

//store is: padded16_global_wrapper.stencil(((padded16_global_wrapper_s0_x_x*2) + -3), padded16_global_wrapper_s0_y) = padded16.stencil(((padded16_global_wrapper_s0_x_x*2) + -3), padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: padded16_global_wrapper.stencil(((padded16_global_wrapper_s0_x_x*2) + -2), padded16_global_wrapper_s0_y) = padded16.stencil(((padded16_global_wrapper_s0_x_x*2) + -2), padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil_1(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_2 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_2;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + -2), grad_x_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _311 = (int16_t)(0);
  return _311;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*2) + -1), grad_x_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_1() {
  int16_t _316 = (int16_t)(0);
  return _316;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y) = ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), (grad_x_unclamp_s1_y + -1))*kernel_x.stencil(-1, -1)) + (grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + -1))*kernel_x.stencil(0, -1)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + -1))*kernel_x.stencil(1, -1)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), grad_x_unclamp_s1_y)*kernel_x.stencil(-1, 0)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y)*kernel_x.stencil(0, 0)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y)*kernel_x.stencil(1, 0)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -3), (grad_x_unclamp_s1_y + 1))*kernel_x.stencil(-1, 1)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + 1))*kernel_x.stencil(1, 1)) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + 1))*kernel_x.stencil(0, 1)))))))))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_2(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<144>& kernel_x_stencil, hw_uint<144>& padded16_global_wrapper_stencil) {
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

  int16_t _321 = _padded16_global_wrapper_stencil_1 * _kernel_x_stencil_1;
  int16_t _322 = _padded16_global_wrapper_stencil_2 * _kernel_x_stencil_2;
  int16_t _323 = _padded16_global_wrapper_stencil_3 * _kernel_x_stencil_3;
  int16_t _324 = _padded16_global_wrapper_stencil_4 * _kernel_x_stencil_4;
  int16_t _325 = _padded16_global_wrapper_stencil_5 * _kernel_x_stencil_5;
  int16_t _326 = _padded16_global_wrapper_stencil_6 * _kernel_x_stencil_6;
  int16_t _327 = _padded16_global_wrapper_stencil_7 * _kernel_x_stencil_7;
  int16_t _328 = _padded16_global_wrapper_stencil_8 * _kernel_x_stencil_8;
  int16_t _329 = _padded16_global_wrapper_stencil_9 * _kernel_x_stencil_9;
  int16_t _330 = _328 + _329;
  int16_t _331 = _327 + _330;
  int16_t _332 = _326 + _331;
  int16_t _333 = _325 + _332;
  int16_t _334 = _324 + _333;
  int16_t _335 = _323 + _334;
  int16_t _336 = _322 + _335;
  int16_t _337 = _grad_x_unclamp_stencil_1 + _336;
  int16_t _338 = _321 + _337;
  return _338;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y) = ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + -1))*kernel_x.stencil(-1, -1)) + (grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + -1))*kernel_x.stencil(0, -1)) + ((padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + -1))*kernel_x.stencil(1, -1)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), grad_x_unclamp_s1_y)*kernel_x.stencil(-1, 0)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), grad_x_unclamp_s1_y)*kernel_x.stencil(0, 0)) + ((padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), grad_x_unclamp_s1_y)*kernel_x.stencil(1, 0)) + ((padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -2), (grad_x_unclamp_s1_y + 1))*kernel_x.stencil(-1, 1)) + ((padded16_global_wrapper.stencil((grad_x_unclamp_s1_x_x*2), (grad_x_unclamp_s1_y + 1))*kernel_x.stencil(1, 1)) + (padded16_global_wrapper.stencil(((grad_x_unclamp_s1_x_x*2) + -1), (grad_x_unclamp_s1_y + 1))*kernel_x.stencil(0, 1)))))))))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_3(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<144>& kernel_x_stencil, hw_uint<144>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_x_stencil_10 = (int16_t) kernel_x_stencil.extract<0, 15>();
  int16_t _kernel_x_stencil_11 = (int16_t) kernel_x_stencil.extract<16, 31>();
  int16_t _kernel_x_stencil_12 = (int16_t) kernel_x_stencil.extract<32, 47>();
  int16_t _kernel_x_stencil_13 = (int16_t) kernel_x_stencil.extract<48, 63>();
  int16_t _kernel_x_stencil_14 = (int16_t) kernel_x_stencil.extract<64, 79>();
  int16_t _kernel_x_stencil_15 = (int16_t) kernel_x_stencil.extract<80, 95>();
  int16_t _kernel_x_stencil_16 = (int16_t) kernel_x_stencil.extract<96, 111>();
  int16_t _kernel_x_stencil_17 = (int16_t) kernel_x_stencil.extract<112, 127>();
  int16_t _kernel_x_stencil_18 = (int16_t) kernel_x_stencil.extract<128, 143>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_13 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_14 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_15 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();
  int16_t _padded16_global_wrapper_stencil_16 = (int16_t) padded16_global_wrapper_stencil.extract<96, 111>();
  int16_t _padded16_global_wrapper_stencil_17 = (int16_t) padded16_global_wrapper_stencil.extract<112, 127>();
  int16_t _padded16_global_wrapper_stencil_18 = (int16_t) padded16_global_wrapper_stencil.extract<128, 143>();

  int16_t _400 = _padded16_global_wrapper_stencil_10 * _kernel_x_stencil_10;
  int16_t _401 = _padded16_global_wrapper_stencil_11 * _kernel_x_stencil_11;
  int16_t _402 = _padded16_global_wrapper_stencil_12 * _kernel_x_stencil_12;
  int16_t _403 = _padded16_global_wrapper_stencil_13 * _kernel_x_stencil_13;
  int16_t _404 = _padded16_global_wrapper_stencil_14 * _kernel_x_stencil_14;
  int16_t _405 = _padded16_global_wrapper_stencil_15 * _kernel_x_stencil_15;
  int16_t _406 = _padded16_global_wrapper_stencil_16 * _kernel_x_stencil_16;
  int16_t _407 = _padded16_global_wrapper_stencil_17 * _kernel_x_stencil_17;
  int16_t _408 = _padded16_global_wrapper_stencil_18 * _kernel_x_stencil_18;
  int16_t _409 = _407 + _408;
  int16_t _410 = _406 + _409;
  int16_t _411 = _405 + _410;
  int16_t _412 = _404 + _411;
  int16_t _413 = _403 + _412;
  int16_t _414 = _402 + _413;
  int16_t _415 = _401 + _414;
  int16_t _416 = _grad_x_unclamp_stencil_2 + _415;
  int16_t _417 = _400 + _416;
  return _417;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -2), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _478 = (int16_t)(180);
  int16_t _479 = min(_grad_x_unclamp_stencil_3, _478);
  int16_t _480 = (int16_t)(-180);
  int16_t _481 = max(_479, _480);
  int16_t _482 = _481 * _481;
  int16_t _483 = (int16_t)(6);
  int16_t _484 = _482 >> _483;
  return _484;
}

//store is: lxx.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*2) + -1), lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_4 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _502 = (int16_t)(180);
  int16_t _503 = min(_grad_x_unclamp_stencil_4, _502);
  int16_t _504 = (int16_t)(-180);
  int16_t _505 = max(_503, _504);
  int16_t _506 = _505 * _505;
  int16_t _507 = (int16_t)(6);
  int16_t _508 = _506 >> _507;
  return _508;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*2) + -1), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _526 = (int16_t)(0);
  return _526;
}

//store is: lgxx.stencil((lgxx_s0_x_x*2), lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _531 = (int16_t)(0);
  return _531;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*2) + -2), (lgxx_s1_y + -1)) + (lgxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + -2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -2), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)) + lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + 1)))))))))))
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

  int16_t _535 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _536 = _lxx_stencil_7 + _535;
  int16_t _537 = _lxx_stencil_6 + _536;
  int16_t _538 = _lxx_stencil_5 + _537;
  int16_t _539 = _lxx_stencil_4 + _538;
  int16_t _540 = _lxx_stencil_3 + _539;
  int16_t _541 = _lxx_stencil_2 + _540;
  int16_t _542 = _lgxx_stencil_1 + _541;
  int16_t _543 = _lxx_stencil_1 + _542;
  return _543;
}

//store is: lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) = (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + -1)) + (lgxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + -1)) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x_x*2), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), lgxx_s1_y) + (lxx.stencil(((lgxx_s1_x_x*2) + -1), (lgxx_s1_y + 1)) + (lxx.stencil(((lgxx_s1_x_x*2) + 1), (lgxx_s1_y + 1)) + lxx.stencil((lgxx_s1_x_x*2), (lgxx_s1_y + 1)))))))))))
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

  int16_t _577 = _lxx_stencil_17 + _lxx_stencil_18;
  int16_t _578 = _lxx_stencil_16 + _577;
  int16_t _579 = _lxx_stencil_15 + _578;
  int16_t _580 = _lxx_stencil_14 + _579;
  int16_t _581 = _lxx_stencil_13 + _580;
  int16_t _582 = _lxx_stencil_12 + _581;
  int16_t _583 = _lxx_stencil_11 + _582;
  int16_t _584 = _lgxx_stencil_2 + _583;
  int16_t _585 = _lxx_stencil_10 + _584;
  return _585;
}

//store is: kernel_y.stencil(-1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil() {
  int16_t _619 = (int16_t)(0);
  return _619;
}

//store is: kernel_y.stencil(0, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_1() {
  int16_t _622 = (int16_t)(0);
  return _622;
}

//store is: kernel_y.stencil(1, -1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_2() {
  int16_t _625 = (int16_t)(0);
  return _625;
}

//store is: kernel_y.stencil(-1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_3() {
  int16_t _628 = (int16_t)(0);
  return _628;
}

//store is: kernel_y.stencil(0, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_4() {
  int16_t _631 = (int16_t)(0);
  return _631;
}

//store is: kernel_y.stencil(1, 0) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_5() {
  int16_t _634 = (int16_t)(0);
  return _634;
}

//store is: kernel_y.stencil(-1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_6() {
  int16_t _637 = (int16_t)(0);
  return _637;
}

//store is: kernel_y.stencil(0, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_7() {
  int16_t _640 = (int16_t)(0);
  return _640;
}

//store is: kernel_y.stencil(1, 1) = (int16)0
hw_uint<16> hcompute_kernel_y_stencil_8() {
  int16_t _643 = (int16_t)(0);
  return _643;
}

//store is: kernel_y.stencil(-1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_9() {
  int16_t _646 = (int16_t)(1);
  return _646;
}

//store is: kernel_y.stencil(0, 1) = (int16)2
hw_uint<16> hcompute_kernel_y_stencil_10() {
  int16_t _649 = (int16_t)(2);
  return _649;
}

//store is: kernel_y.stencil(1, 1) = (int16)1
hw_uint<16> hcompute_kernel_y_stencil_11() {
  int16_t _652 = (int16_t)(1);
  return _652;
}

//store is: kernel_y.stencil(-1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_12() {
  int16_t _655 = (int16_t)(-1);
  return _655;
}

//store is: kernel_y.stencil(0, -1) = (int16)-2
hw_uint<16> hcompute_kernel_y_stencil_13() {
  int16_t _658 = (int16_t)(-2);
  return _658;
}

//store is: kernel_y.stencil(1, -1) = (int16)-1
hw_uint<16> hcompute_kernel_y_stencil_14() {
  int16_t _661 = (int16_t)(-1);
  return _661;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -2), grad_y_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _664 = (int16_t)(0);
  return _664;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*2) + -1), grad_y_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_1() {
  int16_t _669 = (int16_t)(0);
  return _669;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y) = ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -3), (grad_y_unclamp_s1_y + -1))*kernel_y.stencil(-1, -1)) + (grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + -1))*kernel_y.stencil(0, -1)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + -1))*kernel_y.stencil(1, -1)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -3), grad_y_unclamp_s1_y)*kernel_y.stencil(-1, 0)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y)*kernel_y.stencil(0, 0)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y)*kernel_y.stencil(1, 0)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -3), (grad_y_unclamp_s1_y + 1))*kernel_y.stencil(-1, 1)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + 1))*kernel_y.stencil(1, 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + 1))*kernel_y.stencil(0, 1)))))))))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_2(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<144>& kernel_y_stencil, hw_uint<144>& padded16_global_wrapper_stencil) {
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

  int16_t _padded16_global_wrapper_stencil_19 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_20 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_21 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_22 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_23 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_24 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();
  int16_t _padded16_global_wrapper_stencil_25 = (int16_t) padded16_global_wrapper_stencil.extract<96, 111>();
  int16_t _padded16_global_wrapper_stencil_26 = (int16_t) padded16_global_wrapper_stencil.extract<112, 127>();
  int16_t _padded16_global_wrapper_stencil_27 = (int16_t) padded16_global_wrapper_stencil.extract<128, 143>();

  int16_t _674 = _padded16_global_wrapper_stencil_19 * _kernel_y_stencil_1;
  int16_t _675 = _padded16_global_wrapper_stencil_20 * _kernel_y_stencil_2;
  int16_t _676 = _padded16_global_wrapper_stencil_21 * _kernel_y_stencil_3;
  int16_t _677 = _padded16_global_wrapper_stencil_22 * _kernel_y_stencil_4;
  int16_t _678 = _padded16_global_wrapper_stencil_23 * _kernel_y_stencil_5;
  int16_t _679 = _padded16_global_wrapper_stencil_24 * _kernel_y_stencil_6;
  int16_t _680 = _padded16_global_wrapper_stencil_25 * _kernel_y_stencil_7;
  int16_t _681 = _padded16_global_wrapper_stencil_26 * _kernel_y_stencil_8;
  int16_t _682 = _padded16_global_wrapper_stencil_27 * _kernel_y_stencil_9;
  int16_t _683 = _681 + _682;
  int16_t _684 = _680 + _683;
  int16_t _685 = _679 + _684;
  int16_t _686 = _678 + _685;
  int16_t _687 = _677 + _686;
  int16_t _688 = _676 + _687;
  int16_t _689 = _675 + _688;
  int16_t _690 = _grad_y_unclamp_stencil_1 + _689;
  int16_t _691 = _674 + _690;
  return _691;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y) = ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + -1))*kernel_y.stencil(-1, -1)) + (grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + -1))*kernel_y.stencil(0, -1)) + ((padded16_global_wrapper.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + -1))*kernel_y.stencil(1, -1)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), grad_y_unclamp_s1_y)*kernel_y.stencil(-1, 0)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), grad_y_unclamp_s1_y)*kernel_y.stencil(0, 0)) + ((padded16_global_wrapper.stencil((grad_y_unclamp_s1_x_x*2), grad_y_unclamp_s1_y)*kernel_y.stencil(1, 0)) + ((padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -2), (grad_y_unclamp_s1_y + 1))*kernel_y.stencil(-1, 1)) + ((padded16_global_wrapper.stencil((grad_y_unclamp_s1_x_x*2), (grad_y_unclamp_s1_y + 1))*kernel_y.stencil(1, 1)) + (padded16_global_wrapper.stencil(((grad_y_unclamp_s1_x_x*2) + -1), (grad_y_unclamp_s1_y + 1))*kernel_y.stencil(0, 1)))))))))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_3(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<144>& kernel_y_stencil, hw_uint<144>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _kernel_y_stencil_10 = (int16_t) kernel_y_stencil.extract<0, 15>();
  int16_t _kernel_y_stencil_11 = (int16_t) kernel_y_stencil.extract<16, 31>();
  int16_t _kernel_y_stencil_12 = (int16_t) kernel_y_stencil.extract<32, 47>();
  int16_t _kernel_y_stencil_13 = (int16_t) kernel_y_stencil.extract<48, 63>();
  int16_t _kernel_y_stencil_14 = (int16_t) kernel_y_stencil.extract<64, 79>();
  int16_t _kernel_y_stencil_15 = (int16_t) kernel_y_stencil.extract<80, 95>();
  int16_t _kernel_y_stencil_16 = (int16_t) kernel_y_stencil.extract<96, 111>();
  int16_t _kernel_y_stencil_17 = (int16_t) kernel_y_stencil.extract<112, 127>();
  int16_t _kernel_y_stencil_18 = (int16_t) kernel_y_stencil.extract<128, 143>();

  int16_t _padded16_global_wrapper_stencil_28 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_29 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_30 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_31 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_32 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_33 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();
  int16_t _padded16_global_wrapper_stencil_34 = (int16_t) padded16_global_wrapper_stencil.extract<96, 111>();
  int16_t _padded16_global_wrapper_stencil_35 = (int16_t) padded16_global_wrapper_stencil.extract<112, 127>();
  int16_t _padded16_global_wrapper_stencil_36 = (int16_t) padded16_global_wrapper_stencil.extract<128, 143>();

  int16_t _753 = _padded16_global_wrapper_stencil_28 * _kernel_y_stencil_10;
  int16_t _754 = _padded16_global_wrapper_stencil_29 * _kernel_y_stencil_11;
  int16_t _755 = _padded16_global_wrapper_stencil_30 * _kernel_y_stencil_12;
  int16_t _756 = _padded16_global_wrapper_stencil_31 * _kernel_y_stencil_13;
  int16_t _757 = _padded16_global_wrapper_stencil_32 * _kernel_y_stencil_14;
  int16_t _758 = _padded16_global_wrapper_stencil_33 * _kernel_y_stencil_15;
  int16_t _759 = _padded16_global_wrapper_stencil_34 * _kernel_y_stencil_16;
  int16_t _760 = _padded16_global_wrapper_stencil_35 * _kernel_y_stencil_17;
  int16_t _761 = _padded16_global_wrapper_stencil_36 * _kernel_y_stencil_18;
  int16_t _762 = _760 + _761;
  int16_t _763 = _759 + _762;
  int16_t _764 = _758 + _763;
  int16_t _765 = _757 + _764;
  int16_t _766 = _756 + _765;
  int16_t _767 = _755 + _766;
  int16_t _768 = _754 + _767;
  int16_t _769 = _grad_y_unclamp_stencil_2 + _768;
  int16_t _770 = _753 + _769;
  return _770;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -2), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_5 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_3 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _831 = (int16_t)(180);
  int16_t _832 = min(_grad_x_unclamp_stencil_5, _831);
  int16_t _833 = (int16_t)(-180);
  int16_t _834 = max(_832, _833);
  int16_t _835 = min(_grad_y_unclamp_stencil_3, _831);
  int16_t _836 = max(_835, _833);
  int16_t _837 = _834 * _836;
  int16_t _838 = (int16_t)(6);
  int16_t _839 = _837 >> _838;
  return _839;
}

//store is: lxy.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*2) + -1), lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_6 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_4 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _862 = (int16_t)(180);
  int16_t _863 = min(_grad_x_unclamp_stencil_6, _862);
  int16_t _864 = (int16_t)(-180);
  int16_t _865 = max(_863, _864);
  int16_t _866 = min(_grad_y_unclamp_stencil_4, _862);
  int16_t _867 = max(_866, _864);
  int16_t _868 = _865 * _867;
  int16_t _869 = (int16_t)(6);
  int16_t _870 = _868 >> _869;
  return _870;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*2) + -1), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _893 = (int16_t)(0);
  return _893;
}

//store is: lgxy.stencil((lgxy_s0_x_x*2), lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _898 = (int16_t)(0);
  return _898;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*2) + -2), (lgxy_s1_y + -1)) + (lgxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + -2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -2), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)) + lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + 1)))))))))))
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

  int16_t _902 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _903 = _lxy_stencil_7 + _902;
  int16_t _904 = _lxy_stencil_6 + _903;
  int16_t _905 = _lxy_stencil_5 + _904;
  int16_t _906 = _lxy_stencil_4 + _905;
  int16_t _907 = _lxy_stencil_3 + _906;
  int16_t _908 = _lxy_stencil_2 + _907;
  int16_t _909 = _lgxy_stencil_1 + _908;
  int16_t _910 = _lxy_stencil_1 + _909;
  return _910;
}

//store is: lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) = (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + -1)) + (lgxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + -1)) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x_x*2), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), lgxy_s1_y) + (lxy.stencil(((lgxy_s1_x_x*2) + -1), (lgxy_s1_y + 1)) + (lxy.stencil(((lgxy_s1_x_x*2) + 1), (lgxy_s1_y + 1)) + lxy.stencil((lgxy_s1_x_x*2), (lgxy_s1_y + 1)))))))))))
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

  int16_t _944 = _lxy_stencil_17 + _lxy_stencil_18;
  int16_t _945 = _lxy_stencil_16 + _944;
  int16_t _946 = _lxy_stencil_15 + _945;
  int16_t _947 = _lxy_stencil_14 + _946;
  int16_t _948 = _lxy_stencil_13 + _947;
  int16_t _949 = _lxy_stencil_12 + _948;
  int16_t _950 = _lxy_stencil_11 + _949;
  int16_t _951 = _lgxy_stencil_2 + _950;
  int16_t _952 = _lxy_stencil_10 + _951;
  return _952;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -2), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_5 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _986 = (int16_t)(180);
  int16_t _987 = min(_grad_y_unclamp_stencil_5, _986);
  int16_t _988 = (int16_t)(-180);
  int16_t _989 = max(_987, _988);
  int16_t _990 = _989 * _989;
  int16_t _991 = (int16_t)(6);
  int16_t _992 = _990 >> _991;
  return _992;
}

//store is: lyy.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*2) + -1), lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_1(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_6 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1010 = (int16_t)(180);
  int16_t _1011 = min(_grad_y_unclamp_stencil_6, _1010);
  int16_t _1012 = (int16_t)(-180);
  int16_t _1013 = max(_1011, _1012);
  int16_t _1014 = _1013 * _1013;
  int16_t _1015 = (int16_t)(6);
  int16_t _1016 = _1014 >> _1015;
  return _1016;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*2) + -1), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _1034 = (int16_t)(0);
  return _1034;
}

//store is: lgyy.stencil((lgyy_s0_x_x*2), lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _1039 = (int16_t)(0);
  return _1039;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*2) + -2), (lgyy_s1_y + -1)) + (lgyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + -2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -2), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)) + lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + 1)))))))))))
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

  int16_t _1043 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _1044 = _lyy_stencil_7 + _1043;
  int16_t _1045 = _lyy_stencil_6 + _1044;
  int16_t _1046 = _lyy_stencil_5 + _1045;
  int16_t _1047 = _lyy_stencil_4 + _1046;
  int16_t _1048 = _lyy_stencil_3 + _1047;
  int16_t _1049 = _lyy_stencil_2 + _1048;
  int16_t _1050 = _lgyy_stencil_1 + _1049;
  int16_t _1051 = _lyy_stencil_1 + _1050;
  return _1051;
}

//store is: lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) = (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + -1)) + (lgyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + -1)) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x_x*2), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), lgyy_s1_y) + (lyy.stencil(((lgyy_s1_x_x*2) + -1), (lgyy_s1_y + 1)) + (lyy.stencil(((lgyy_s1_x_x*2) + 1), (lgyy_s1_y + 1)) + lyy.stencil((lgyy_s1_x_x*2), (lgyy_s1_y + 1)))))))))))
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

  int16_t _1085 = _lyy_stencil_17 + _lyy_stencil_18;
  int16_t _1086 = _lyy_stencil_16 + _1085;
  int16_t _1087 = _lyy_stencil_15 + _1086;
  int16_t _1088 = _lyy_stencil_14 + _1087;
  int16_t _1089 = _lyy_stencil_13 + _1088;
  int16_t _1090 = _lyy_stencil_12 + _1089;
  int16_t _1091 = _lyy_stencil_11 + _1090;
  int16_t _1092 = _lgyy_stencil_2 + _1091;
  int16_t _1093 = _lyy_stencil_10 + _1092;
  return _1093;
}

//store is: cim.stencil(((cim_s0_x_x*2) + -1), cim_s0_y) = ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)*(lgxy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64))*((lgxx.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64) + (lgyy.stencil(((cim_s0_x_x*2) + -1), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_3 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_3 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _1127 = (int16_t)(6);
  int16_t _1128 = _lgxx_stencil_3 >> _1127;
  int16_t _1129 = _lgyy_stencil_3 >> _1127;
  int16_t _1130 = _1128 * _1129;
  int16_t _1131 = _lgxy_stencil_3 >> _1127;
  int16_t _1132 = _1131 * _1131;
  int16_t _1133 = _1130 - _1132;
  int16_t _1134 = _1128 + _1129;
  int16_t _1135 = _1134 * _1134;
  int16_t _1136 = (int16_t)(4);
  int16_t _1137 = _1135 >> _1136;
  int16_t _1138 = _1133 - _1137;
  return _1138;
}

//store is: cim.stencil((cim_s0_x_x*2), cim_s0_y) = ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)*(lgxy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64))*((lgxx.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64) + (lgyy.stencil((cim_s0_x_x*2), cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_4 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_4 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_4 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _1168 = (int16_t)(6);
  int16_t _1169 = _lgxx_stencil_4 >> _1168;
  int16_t _1170 = _lgyy_stencil_4 >> _1168;
  int16_t _1171 = _1169 * _1170;
  int16_t _1172 = _lgxy_stencil_4 >> _1168;
  int16_t _1173 = _1172 * _1172;
  int16_t _1174 = _1171 - _1173;
  int16_t _1175 = _1169 + _1170;
  int16_t _1176 = _1175 * _1175;
  int16_t _1177 = (int16_t)(4);
  int16_t _1178 = _1176 >> _1177;
  int16_t _1179 = _1174 - _1178;
  return _1179;
}

//store is: cim_output.stencil((cim_output_s0_x_x*2), cim_output_s0_y) = int16(select((((((((((cim.stencil(((cim_output_s0_x_x*2) + -1), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y)) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + -1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + -1), cim_output_s0_y) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + -1), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + 1)) < cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))) && ((int16)1 <= cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y))), 255, 0))
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

  bool _1208 = _cim_stencil_1 < _cim_stencil_2;
  bool _1209 = _cim_stencil_3 < _cim_stencil_2;
  bool _1210 = _1208 && _1209;
  bool _1211 = _cim_stencil_4 < _cim_stencil_2;
  bool _1212 = _1210 && _1211;
  bool _1213 = _cim_stencil_5 < _cim_stencil_2;
  bool _1214 = _1212 && _1213;
  bool _1215 = _cim_stencil_6 < _cim_stencil_2;
  bool _1216 = _1214 && _1215;
  bool _1217 = _cim_stencil_7 < _cim_stencil_2;
  bool _1218 = _1216 && _1217;
  bool _1219 = _cim_stencil_8 < _cim_stencil_2;
  bool _1220 = _1218 && _1219;
  bool _1221 = _cim_stencil_9 < _cim_stencil_2;
  bool _1222 = _1220 && _1221;
  int16_t _1223 = (int16_t)(1);
  bool _1224 = _1223 <= _cim_stencil_2;
  bool _1225 = _1222 && _1224;
  int32_t _1226 = (int32_t)(_1225 ? 255 : 0);
  int16_t _1227 = (int16_t)(_1226);
  return _1227;
}

//store is: cim_output.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y)) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), (cim_output_s0_y + -1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), cim_output_s0_y) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), cim_output_s0_y) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil((cim_output_s0_x_x*2), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 1), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && (cim.stencil(((cim_output_s0_x_x*2) + 2), (cim_output_s0_y + 1)) < cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))) && ((int16)1 <= cim.stencil(((cim_output_s0_x_x*2) + 1), cim_output_s0_y))), 255, 0))
hw_uint<16> hcompute_cim_output_stencil_1(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_10 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_11 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_12 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_13 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_14 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_15 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_16 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_17 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_18 = (int16_t) cim_stencil.extract<128, 143>();

  bool _1282 = _cim_stencil_10 < _cim_stencil_11;
  bool _1283 = _cim_stencil_12 < _cim_stencil_11;
  bool _1284 = _1282 && _1283;
  bool _1285 = _cim_stencil_13 < _cim_stencil_11;
  bool _1286 = _1284 && _1285;
  bool _1287 = _cim_stencil_14 < _cim_stencil_11;
  bool _1288 = _1286 && _1287;
  bool _1289 = _cim_stencil_15 < _cim_stencil_11;
  bool _1290 = _1288 && _1289;
  bool _1291 = _cim_stencil_16 < _cim_stencil_11;
  bool _1292 = _1290 && _1291;
  bool _1293 = _cim_stencil_17 < _cim_stencil_11;
  bool _1294 = _1292 && _1293;
  bool _1295 = _cim_stencil_18 < _cim_stencil_11;
  bool _1296 = _1294 && _1295;
  int16_t _1297 = (int16_t)(1);
  bool _1298 = _1297 <= _cim_stencil_11;
  bool _1299 = _1296 && _1298;
  int32_t _1300 = (int32_t)(_1299 ? 255 : 0);
  int16_t _1301 = (int16_t)(_1300);
  return _1301;
}

//store is: hw_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = cim_output.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

//store is: hw_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = cim_output.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_2 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_2;
}

