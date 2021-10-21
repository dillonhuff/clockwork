#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_kernel_global_wrapper_stencil(hw_uint<16>& hw_kernel_stencil) {
  uint16_t _hw_kernel_stencil_1 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  return _hw_kernel_stencil_1;
}

//store is: mul.stencil((mul_s0_x_x*8), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil() {
  uint16_t _392 = (uint16_t)(0);
  return _392;
}

//store is: mul.stencil(((mul_s0_x_x*8) + 1), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil_1() {
  uint16_t _396 = (uint16_t)(0);
  return _396;
}

//store is: mul.stencil(((mul_s0_x_x*8) + 2), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil_2() {
  uint16_t _401 = (uint16_t)(0);
  return _401;
}

//store is: mul.stencil(((mul_s0_x_x*8) + 3), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil_3() {
  uint16_t _406 = (uint16_t)(0);
  return _406;
}

//store is: mul.stencil(((mul_s0_x_x*8) + 4), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil_4() {
  uint16_t _411 = (uint16_t)(0);
  return _411;
}

//store is: mul.stencil(((mul_s0_x_x*8) + 5), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil_5() {
  uint16_t _416 = (uint16_t)(0);
  return _416;
}

//store is: mul.stencil(((mul_s0_x_x*8) + 6), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil_6() {
  uint16_t _421 = (uint16_t)(0);
  return _421;
}

//store is: mul.stencil(((mul_s0_x_x*8) + 7), mul_s0_y) = (uint16)0
hw_uint<16> hcompute_mul_stencil_7() {
  uint16_t _426 = (uint16_t)(0);
  return _426;
}

//store is: mul.stencil((mul_s1_x_x*8), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x*8), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), (mul_s1_r_x_r_x*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 6))) + (mul.stencil((mul_s1_x_x*8), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil((mul_s1_x_x*8), ((mul_s1_r_x_r_x*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_8(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_1 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_2 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_3 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_4 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_5 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_6 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_7 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_8 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_1 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _431 = _hw_input_global_wrapper_stencil_1 * _hw_kernel_global_wrapper_stencil_1;
  uint16_t _432 = _hw_input_global_wrapper_stencil_2 * _hw_kernel_global_wrapper_stencil_2;
  uint16_t _433 = _hw_input_global_wrapper_stencil_3 * _hw_kernel_global_wrapper_stencil_3;
  uint16_t _434 = _hw_input_global_wrapper_stencil_4 * _hw_kernel_global_wrapper_stencil_4;
  uint16_t _435 = _hw_input_global_wrapper_stencil_5 * _hw_kernel_global_wrapper_stencil_5;
  uint16_t _436 = _hw_input_global_wrapper_stencil_6 * _hw_kernel_global_wrapper_stencil_6;
  uint16_t _437 = _hw_input_global_wrapper_stencil_7 * _hw_kernel_global_wrapper_stencil_7;
  uint16_t _438 = _hw_input_global_wrapper_stencil_8 * _hw_kernel_global_wrapper_stencil_8;
  uint16_t _439 = _mul_stencil_1 + _438;
  uint16_t _440 = _437 + _439;
  uint16_t _441 = _436 + _440;
  uint16_t _442 = _435 + _441;
  uint16_t _443 = _434 + _442;
  uint16_t _444 = _433 + _443;
  uint16_t _445 = _432 + _444;
  uint16_t _446 = _431 + _445;
  return _446;
}

//store is: mul.stencil(((mul_s1_x_x*8) + 1), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x_1*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), (mul_s1_r_x_r_x_1*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_1*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x_1*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_1*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x_1*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_1*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x_1*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_1*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x_1*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_1*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x_1*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_1*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x_1*8) + 6))) + (mul.stencil(((mul_s1_x_x*8) + 1), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_1*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 1), ((mul_s1_r_x_r_x_1*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_9(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_11 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_12 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_13 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_14 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_15 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_16 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_10 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_11 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_12 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_13 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_14 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_15 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_16 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_9 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_2 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _505 = _hw_input_global_wrapper_stencil_9 * _hw_kernel_global_wrapper_stencil_9;
  uint16_t _506 = _hw_input_global_wrapper_stencil_10 * _hw_kernel_global_wrapper_stencil_10;
  uint16_t _507 = _hw_input_global_wrapper_stencil_11 * _hw_kernel_global_wrapper_stencil_11;
  uint16_t _508 = _hw_input_global_wrapper_stencil_12 * _hw_kernel_global_wrapper_stencil_12;
  uint16_t _509 = _hw_input_global_wrapper_stencil_13 * _hw_kernel_global_wrapper_stencil_13;
  uint16_t _510 = _hw_input_global_wrapper_stencil_14 * _hw_kernel_global_wrapper_stencil_14;
  uint16_t _511 = _hw_input_global_wrapper_stencil_15 * _hw_kernel_global_wrapper_stencil_15;
  uint16_t _512 = _hw_input_global_wrapper_stencil_16 * _hw_kernel_global_wrapper_stencil_16;
  uint16_t _513 = _mul_stencil_2 + _512;
  uint16_t _514 = _511 + _513;
  uint16_t _515 = _510 + _514;
  uint16_t _516 = _509 + _515;
  uint16_t _517 = _508 + _516;
  uint16_t _518 = _507 + _517;
  uint16_t _519 = _506 + _518;
  uint16_t _520 = _505 + _519;
  return _520;
}

//store is: mul.stencil(((mul_s1_x_x*8) + 2), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x_2*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), (mul_s1_r_x_r_x_2*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_2*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x_2*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_2*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x_2*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_2*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x_2*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_2*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x_2*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_2*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x_2*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_2*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x_2*8) + 6))) + (mul.stencil(((mul_s1_x_x*8) + 2), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_2*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 2), ((mul_s1_r_x_r_x_2*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_10(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_17 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_18 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_19 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_20 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_21 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_22 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_23 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_24 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_17 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_18 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_19 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_20 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_21 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_22 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_23 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_24 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_3 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _580 = _hw_input_global_wrapper_stencil_17 * _hw_kernel_global_wrapper_stencil_17;
  uint16_t _581 = _hw_input_global_wrapper_stencil_18 * _hw_kernel_global_wrapper_stencil_18;
  uint16_t _582 = _hw_input_global_wrapper_stencil_19 * _hw_kernel_global_wrapper_stencil_19;
  uint16_t _583 = _hw_input_global_wrapper_stencil_20 * _hw_kernel_global_wrapper_stencil_20;
  uint16_t _584 = _hw_input_global_wrapper_stencil_21 * _hw_kernel_global_wrapper_stencil_21;
  uint16_t _585 = _hw_input_global_wrapper_stencil_22 * _hw_kernel_global_wrapper_stencil_22;
  uint16_t _586 = _hw_input_global_wrapper_stencil_23 * _hw_kernel_global_wrapper_stencil_23;
  uint16_t _587 = _hw_input_global_wrapper_stencil_24 * _hw_kernel_global_wrapper_stencil_24;
  uint16_t _588 = _mul_stencil_3 + _587;
  uint16_t _589 = _586 + _588;
  uint16_t _590 = _585 + _589;
  uint16_t _591 = _584 + _590;
  uint16_t _592 = _583 + _591;
  uint16_t _593 = _582 + _592;
  uint16_t _594 = _581 + _593;
  uint16_t _595 = _580 + _594;
  return _595;
}

//store is: mul.stencil(((mul_s1_x_x*8) + 3), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x_3*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), (mul_s1_r_x_r_x_3*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_3*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x_3*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_3*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x_3*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_3*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x_3*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_3*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x_3*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_3*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x_3*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_3*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x_3*8) + 6))) + (mul.stencil(((mul_s1_x_x*8) + 3), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_3*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 3), ((mul_s1_r_x_r_x_3*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_11(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_25 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_26 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_27 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_28 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_29 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_30 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_31 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_32 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_25 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_26 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_27 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_28 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_29 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_30 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_31 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_32 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_4 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _655 = _hw_input_global_wrapper_stencil_25 * _hw_kernel_global_wrapper_stencil_25;
  uint16_t _656 = _hw_input_global_wrapper_stencil_26 * _hw_kernel_global_wrapper_stencil_26;
  uint16_t _657 = _hw_input_global_wrapper_stencil_27 * _hw_kernel_global_wrapper_stencil_27;
  uint16_t _658 = _hw_input_global_wrapper_stencil_28 * _hw_kernel_global_wrapper_stencil_28;
  uint16_t _659 = _hw_input_global_wrapper_stencil_29 * _hw_kernel_global_wrapper_stencil_29;
  uint16_t _660 = _hw_input_global_wrapper_stencil_30 * _hw_kernel_global_wrapper_stencil_30;
  uint16_t _661 = _hw_input_global_wrapper_stencil_31 * _hw_kernel_global_wrapper_stencil_31;
  uint16_t _662 = _hw_input_global_wrapper_stencil_32 * _hw_kernel_global_wrapper_stencil_32;
  uint16_t _663 = _mul_stencil_4 + _662;
  uint16_t _664 = _661 + _663;
  uint16_t _665 = _660 + _664;
  uint16_t _666 = _659 + _665;
  uint16_t _667 = _658 + _666;
  uint16_t _668 = _657 + _667;
  uint16_t _669 = _656 + _668;
  uint16_t _670 = _655 + _669;
  return _670;
}

//store is: mul.stencil(((mul_s1_x_x*8) + 4), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x_4*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), (mul_s1_r_x_r_x_4*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_4*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x_4*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_4*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x_4*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_4*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x_4*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_4*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x_4*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_4*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x_4*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_4*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x_4*8) + 6))) + (mul.stencil(((mul_s1_x_x*8) + 4), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_4*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 4), ((mul_s1_r_x_r_x_4*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_12(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_33 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_34 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_35 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_36 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_37 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_38 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_39 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_40 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_33 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_34 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_35 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_36 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_37 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_38 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_39 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_40 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_5 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _730 = _hw_input_global_wrapper_stencil_33 * _hw_kernel_global_wrapper_stencil_33;
  uint16_t _731 = _hw_input_global_wrapper_stencil_34 * _hw_kernel_global_wrapper_stencil_34;
  uint16_t _732 = _hw_input_global_wrapper_stencil_35 * _hw_kernel_global_wrapper_stencil_35;
  uint16_t _733 = _hw_input_global_wrapper_stencil_36 * _hw_kernel_global_wrapper_stencil_36;
  uint16_t _734 = _hw_input_global_wrapper_stencil_37 * _hw_kernel_global_wrapper_stencil_37;
  uint16_t _735 = _hw_input_global_wrapper_stencil_38 * _hw_kernel_global_wrapper_stencil_38;
  uint16_t _736 = _hw_input_global_wrapper_stencil_39 * _hw_kernel_global_wrapper_stencil_39;
  uint16_t _737 = _hw_input_global_wrapper_stencil_40 * _hw_kernel_global_wrapper_stencil_40;
  uint16_t _738 = _mul_stencil_5 + _737;
  uint16_t _739 = _736 + _738;
  uint16_t _740 = _735 + _739;
  uint16_t _741 = _734 + _740;
  uint16_t _742 = _733 + _741;
  uint16_t _743 = _732 + _742;
  uint16_t _744 = _731 + _743;
  uint16_t _745 = _730 + _744;
  return _745;
}

//store is: mul.stencil(((mul_s1_x_x*8) + 5), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x_5*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), (mul_s1_r_x_r_x_5*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_5*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x_5*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_5*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x_5*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_5*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x_5*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_5*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x_5*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_5*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x_5*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_5*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x_5*8) + 6))) + (mul.stencil(((mul_s1_x_x*8) + 5), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_5*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 5), ((mul_s1_r_x_r_x_5*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_13(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_41 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_42 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_43 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_44 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_45 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_46 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_47 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_48 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_41 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_42 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_43 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_44 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_45 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_46 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_47 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_48 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_6 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _805 = _hw_input_global_wrapper_stencil_41 * _hw_kernel_global_wrapper_stencil_41;
  uint16_t _806 = _hw_input_global_wrapper_stencil_42 * _hw_kernel_global_wrapper_stencil_42;
  uint16_t _807 = _hw_input_global_wrapper_stencil_43 * _hw_kernel_global_wrapper_stencil_43;
  uint16_t _808 = _hw_input_global_wrapper_stencil_44 * _hw_kernel_global_wrapper_stencil_44;
  uint16_t _809 = _hw_input_global_wrapper_stencil_45 * _hw_kernel_global_wrapper_stencil_45;
  uint16_t _810 = _hw_input_global_wrapper_stencil_46 * _hw_kernel_global_wrapper_stencil_46;
  uint16_t _811 = _hw_input_global_wrapper_stencil_47 * _hw_kernel_global_wrapper_stencil_47;
  uint16_t _812 = _hw_input_global_wrapper_stencil_48 * _hw_kernel_global_wrapper_stencil_48;
  uint16_t _813 = _mul_stencil_6 + _812;
  uint16_t _814 = _811 + _813;
  uint16_t _815 = _810 + _814;
  uint16_t _816 = _809 + _815;
  uint16_t _817 = _808 + _816;
  uint16_t _818 = _807 + _817;
  uint16_t _819 = _806 + _818;
  uint16_t _820 = _805 + _819;
  return _820;
}

//store is: mul.stencil(((mul_s1_x_x*8) + 6), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x_6*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), (mul_s1_r_x_r_x_6*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_6*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x_6*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_6*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x_6*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_6*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x_6*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_6*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x_6*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_6*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x_6*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_6*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x_6*8) + 6))) + (mul.stencil(((mul_s1_x_x*8) + 6), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_6*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 6), ((mul_s1_r_x_r_x_6*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_14(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_49 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_50 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_51 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_52 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_53 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_54 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_55 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_56 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_49 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_50 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_51 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_52 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_53 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_54 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_55 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_56 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_7 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _880 = _hw_input_global_wrapper_stencil_49 * _hw_kernel_global_wrapper_stencil_49;
  uint16_t _881 = _hw_input_global_wrapper_stencil_50 * _hw_kernel_global_wrapper_stencil_50;
  uint16_t _882 = _hw_input_global_wrapper_stencil_51 * _hw_kernel_global_wrapper_stencil_51;
  uint16_t _883 = _hw_input_global_wrapper_stencil_52 * _hw_kernel_global_wrapper_stencil_52;
  uint16_t _884 = _hw_input_global_wrapper_stencil_53 * _hw_kernel_global_wrapper_stencil_53;
  uint16_t _885 = _hw_input_global_wrapper_stencil_54 * _hw_kernel_global_wrapper_stencil_54;
  uint16_t _886 = _hw_input_global_wrapper_stencil_55 * _hw_kernel_global_wrapper_stencil_55;
  uint16_t _887 = _hw_input_global_wrapper_stencil_56 * _hw_kernel_global_wrapper_stencil_56;
  uint16_t _888 = _mul_stencil_7 + _887;
  uint16_t _889 = _886 + _888;
  uint16_t _890 = _885 + _889;
  uint16_t _891 = _884 + _890;
  uint16_t _892 = _883 + _891;
  uint16_t _893 = _882 + _892;
  uint16_t _894 = _881 + _893;
  uint16_t _895 = _880 + _894;
  return _895;
}

//store is: mul.stencil(((mul_s1_x_x*8) + 7), mul_s1_y) = ((hw_input_global_wrapper.stencil((mul_s1_r_x_r_x_7*8), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), (mul_s1_r_x_r_x_7*8))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_7*8) + 1), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x_7*8) + 1))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_7*8) + 2), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x_7*8) + 2))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_7*8) + 3), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x_7*8) + 3))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_7*8) + 4), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x_7*8) + 4))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_7*8) + 5), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x_7*8) + 5))) + ((hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_7*8) + 6), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x_7*8) + 6))) + (mul.stencil(((mul_s1_x_x*8) + 7), mul_s1_y) + (hw_input_global_wrapper.stencil(((mul_s1_r_x_r_x_7*8) + 7), mul_s1_y)*hw_kernel_global_wrapper.stencil(((mul_s1_x_x*8) + 7), ((mul_s1_r_x_r_x_7*8) + 7)))))))))))
hw_uint<16> hcompute_mul_stencil_15(hw_uint<128>& hw_input_global_wrapper_stencil, hw_uint<128>& hw_kernel_global_wrapper_stencil, hw_uint<16>& mul_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_57 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_58 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_59 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_60 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_61 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_62 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_63 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_64 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _hw_kernel_global_wrapper_stencil_57 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_58 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_59 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_kernel_global_wrapper_stencil_60 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_kernel_global_wrapper_stencil_61 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_kernel_global_wrapper_stencil_62 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_kernel_global_wrapper_stencil_63 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_kernel_global_wrapper_stencil_64 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<112, 127>();

  uint16_t _mul_stencil_8 = (uint16_t) mul_stencil.extract<0, 15>();

  uint16_t _955 = _hw_input_global_wrapper_stencil_57 * _hw_kernel_global_wrapper_stencil_57;
  uint16_t _956 = _hw_input_global_wrapper_stencil_58 * _hw_kernel_global_wrapper_stencil_58;
  uint16_t _957 = _hw_input_global_wrapper_stencil_59 * _hw_kernel_global_wrapper_stencil_59;
  uint16_t _958 = _hw_input_global_wrapper_stencil_60 * _hw_kernel_global_wrapper_stencil_60;
  uint16_t _959 = _hw_input_global_wrapper_stencil_61 * _hw_kernel_global_wrapper_stencil_61;
  uint16_t _960 = _hw_input_global_wrapper_stencil_62 * _hw_kernel_global_wrapper_stencil_62;
  uint16_t _961 = _hw_input_global_wrapper_stencil_63 * _hw_kernel_global_wrapper_stencil_63;
  uint16_t _962 = _hw_input_global_wrapper_stencil_64 * _hw_kernel_global_wrapper_stencil_64;
  uint16_t _963 = _mul_stencil_8 + _962;
  uint16_t _964 = _961 + _963;
  uint16_t _965 = _960 + _964;
  uint16_t _966 = _959 + _965;
  uint16_t _967 = _958 + _966;
  uint16_t _968 = _957 + _967;
  uint16_t _969 = _956 + _968;
  uint16_t _970 = _955 + _969;
  return _970;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = mul.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& mul_stencil) {
  uint16_t _mul_stencil_9 = (uint16_t) mul_stencil.extract<0, 15>();

  return _mul_stencil_9;
}

