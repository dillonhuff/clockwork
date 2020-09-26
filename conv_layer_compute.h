#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_c) = input_copy.stencil(hw_input_s0_x, hw_input_s0_y, hw_input_s0_c)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: dw_conv.stencil(dw_conv_s0_x, dw_conv_s0_y, dw_conv_s0_c) = (int16)0
hw_uint<16> hcompute_dw_conv_stencil() {
  int16_t _387 = (int16_t)(0);
  return _387;
}

//store is: dw_conv.stencil(dw_conv_s1_x, dw_conv_s1_y, 0) = (((((((((dw_conv.stencil(dw_conv_s1_x, dw_conv_s1_y, 0) + int16(hw_input.stencil(dw_conv_s1_x, dw_conv_s1_y, 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), dw_conv_s1_y, 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), dw_conv_s1_y, 0))) + int16(hw_input.stencil(dw_conv_s1_x, (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), (dw_conv_s1_y + 1), 0))) + int16(hw_input.stencil(dw_conv_s1_x, (dw_conv_s1_y + 2), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 1), (dw_conv_s1_y + 2), 0))) + int16(hw_input.stencil((dw_conv_s1_x + 2), (dw_conv_s1_y + 2), 0)))
hw_uint<16> hcompute_dw_conv_stencil_1(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_input_stencil) {
  int16_t _dw_conv_stencil_1 = (int16_t) dw_conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<112, 127>();
  uint16_t _hw_input_stencil_9 = (uint16_t) hw_input_stencil.extract<128, 143>();

  int16_t _390 = (int16_t)(_hw_input_stencil_1);
  int16_t _391 = _dw_conv_stencil_1 + _390;
  int16_t _392 = (int16_t)(_hw_input_stencil_2);
  int16_t _393 = _391 + _392;
  int16_t _394 = (int16_t)(_hw_input_stencil_3);
  int16_t _395 = _393 + _394;
  int16_t _396 = (int16_t)(_hw_input_stencil_4);
  int16_t _397 = _395 + _396;
  int16_t _398 = (int16_t)(_hw_input_stencil_5);
  int16_t _399 = _397 + _398;
  int16_t _400 = (int16_t)(_hw_input_stencil_6);
  int16_t _401 = _399 + _400;
  int16_t _402 = (int16_t)(_hw_input_stencil_7);
  int16_t _403 = _401 + _402;
  int16_t _404 = (int16_t)(_hw_input_stencil_8);
  int16_t _405 = _403 + _404;
  int16_t _406 = (int16_t)(_hw_input_stencil_9);
  int16_t _407 = _405 + _406;
  return _407;
}

//store is: dw_conv.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1) = (((((((((dw_conv.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1) + int16(hw_input.stencil(dw_conv_s1_x_1, dw_conv_s1_y_1, 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), dw_conv_s1_y_1, 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), dw_conv_s1_y_1, 1))) + int16(hw_input.stencil(dw_conv_s1_x_1, (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), (dw_conv_s1_y_1 + 1), 1))) + int16(hw_input.stencil(dw_conv_s1_x_1, (dw_conv_s1_y_1 + 2), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 1), (dw_conv_s1_y_1 + 2), 1))) + int16(hw_input.stencil((dw_conv_s1_x_1 + 2), (dw_conv_s1_y_1 + 2), 1)))
hw_uint<16> hcompute_dw_conv_stencil_2(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_input_stencil) {
  int16_t _dw_conv_stencil_2 = (int16_t) dw_conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_10 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_11 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_12 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_13 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_14 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_15 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_16 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_17 = (uint16_t) hw_input_stencil.extract<112, 127>();
  uint16_t _hw_input_stencil_18 = (uint16_t) hw_input_stencil.extract<128, 143>();

  int16_t _458 = (int16_t)(_hw_input_stencil_10);
  int16_t _459 = _dw_conv_stencil_2 + _458;
  int16_t _460 = (int16_t)(_hw_input_stencil_11);
  int16_t _461 = _459 + _460;
  int16_t _462 = (int16_t)(_hw_input_stencil_12);
  int16_t _463 = _461 + _462;
  int16_t _464 = (int16_t)(_hw_input_stencil_13);
  int16_t _465 = _463 + _464;
  int16_t _466 = (int16_t)(_hw_input_stencil_14);
  int16_t _467 = _465 + _466;
  int16_t _468 = (int16_t)(_hw_input_stencil_15);
  int16_t _469 = _467 + _468;
  int16_t _470 = (int16_t)(_hw_input_stencil_16);
  int16_t _471 = _469 + _470;
  int16_t _472 = (int16_t)(_hw_input_stencil_17);
  int16_t _473 = _471 + _472;
  int16_t _474 = (int16_t)(_hw_input_stencil_18);
  int16_t _475 = _473 + _474;
  return _475;
}

//store is: dw_conv.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2) = (((((((((dw_conv.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2) + int16(hw_input.stencil(dw_conv_s1_x_2, dw_conv_s1_y_2, 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), dw_conv_s1_y_2, 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), dw_conv_s1_y_2, 2))) + int16(hw_input.stencil(dw_conv_s1_x_2, (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), (dw_conv_s1_y_2 + 1), 2))) + int16(hw_input.stencil(dw_conv_s1_x_2, (dw_conv_s1_y_2 + 2), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 1), (dw_conv_s1_y_2 + 2), 2))) + int16(hw_input.stencil((dw_conv_s1_x_2 + 2), (dw_conv_s1_y_2 + 2), 2)))
hw_uint<16> hcompute_dw_conv_stencil_3(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_input_stencil) {
  int16_t _dw_conv_stencil_3 = (int16_t) dw_conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_19 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_20 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_21 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_22 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_23 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_24 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_25 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_26 = (uint16_t) hw_input_stencil.extract<112, 127>();
  uint16_t _hw_input_stencil_27 = (uint16_t) hw_input_stencil.extract<128, 143>();

  int16_t _526 = (int16_t)(_hw_input_stencil_19);
  int16_t _527 = _dw_conv_stencil_3 + _526;
  int16_t _528 = (int16_t)(_hw_input_stencil_20);
  int16_t _529 = _527 + _528;
  int16_t _530 = (int16_t)(_hw_input_stencil_21);
  int16_t _531 = _529 + _530;
  int16_t _532 = (int16_t)(_hw_input_stencil_22);
  int16_t _533 = _531 + _532;
  int16_t _534 = (int16_t)(_hw_input_stencil_23);
  int16_t _535 = _533 + _534;
  int16_t _536 = (int16_t)(_hw_input_stencil_24);
  int16_t _537 = _535 + _536;
  int16_t _538 = (int16_t)(_hw_input_stencil_25);
  int16_t _539 = _537 + _538;
  int16_t _540 = (int16_t)(_hw_input_stencil_26);
  int16_t _541 = _539 + _540;
  int16_t _542 = (int16_t)(_hw_input_stencil_27);
  int16_t _543 = _541 + _542;
  return _543;
}

//store is: dw_conv.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3) = (((((((((dw_conv.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3) + int16(hw_input.stencil(dw_conv_s1_x_3, dw_conv_s1_y_3, 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), dw_conv_s1_y_3, 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), dw_conv_s1_y_3, 3))) + int16(hw_input.stencil(dw_conv_s1_x_3, (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), (dw_conv_s1_y_3 + 1), 3))) + int16(hw_input.stencil(dw_conv_s1_x_3, (dw_conv_s1_y_3 + 2), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 1), (dw_conv_s1_y_3 + 2), 3))) + int16(hw_input.stencil((dw_conv_s1_x_3 + 2), (dw_conv_s1_y_3 + 2), 3)))
hw_uint<16> hcompute_dw_conv_stencil_4(hw_uint<16>& dw_conv_stencil, hw_uint<144>& hw_input_stencil) {
  int16_t _dw_conv_stencil_4 = (int16_t) dw_conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_28 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_29 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_30 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_31 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_32 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_33 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_34 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_35 = (uint16_t) hw_input_stencil.extract<112, 127>();
  uint16_t _hw_input_stencil_36 = (uint16_t) hw_input_stencil.extract<128, 143>();

  int16_t _594 = (int16_t)(_hw_input_stencil_28);
  int16_t _595 = _dw_conv_stencil_4 + _594;
  int16_t _596 = (int16_t)(_hw_input_stencil_29);
  int16_t _597 = _595 + _596;
  int16_t _598 = (int16_t)(_hw_input_stencil_30);
  int16_t _599 = _597 + _598;
  int16_t _600 = (int16_t)(_hw_input_stencil_31);
  int16_t _601 = _599 + _600;
  int16_t _602 = (int16_t)(_hw_input_stencil_32);
  int16_t _603 = _601 + _602;
  int16_t _604 = (int16_t)(_hw_input_stencil_33);
  int16_t _605 = _603 + _604;
  int16_t _606 = (int16_t)(_hw_input_stencil_34);
  int16_t _607 = _605 + _606;
  int16_t _608 = (int16_t)(_hw_input_stencil_35);
  int16_t _609 = _607 + _608;
  int16_t _610 = (int16_t)(_hw_input_stencil_36);
  int16_t _611 = _609 + _610;
  return _611;
}

//store is: pw_conv.stencil(pw_conv_s0_k, pw_conv_s0_x, pw_conv_s0_y, pw_conv_s0_c) = (int16)0
hw_uint<16> hcompute_pw_conv_stencil() {
  int16_t _662 = (int16_t)(0);
  return _662;
}

//store is: pw_conv.stencil(0, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(0, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_1(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_5 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_1 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _665 = (int16_t)(3);
  int16_t _666 = _dw_conv_stencil_5 * _665;
  int16_t _667 = _pw_conv_stencil_1 + _666;
  return _667;
}

//store is: pw_conv.stencil(1, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(1, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_2(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_6 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_2 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _676 = (int16_t)(3);
  int16_t _677 = _dw_conv_stencil_6 * _676;
  int16_t _678 = _pw_conv_stencil_2 + _677;
  return _678;
}

//store is: pw_conv.stencil(2, pw_conv_s1_x, pw_conv_s1_y, 0) = (pw_conv.stencil(2, pw_conv_s1_x, pw_conv_s1_y, 0) + (dw_conv.stencil(pw_conv_s1_x, pw_conv_s1_y, 0)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_3(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_7 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_3 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _687 = (int16_t)(3);
  int16_t _688 = _dw_conv_stencil_7 * _687;
  int16_t _689 = _pw_conv_stencil_3 + _688;
  return _689;
}

//store is: pw_conv.stencil(0, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(0, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_4(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_8 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_4 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _698 = (int16_t)(3);
  int16_t _699 = _dw_conv_stencil_8 * _698;
  int16_t _700 = _pw_conv_stencil_4 + _699;
  return _700;
}

//store is: pw_conv.stencil(1, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(1, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_5(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_9 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_5 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _709 = (int16_t)(3);
  int16_t _710 = _dw_conv_stencil_9 * _709;
  int16_t _711 = _pw_conv_stencil_5 + _710;
  return _711;
}

//store is: pw_conv.stencil(2, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) = (pw_conv.stencil(2, pw_conv_s1_x_1, pw_conv_s1_y_1, 1) + (dw_conv.stencil(pw_conv_s1_x_1, pw_conv_s1_y_1, 1)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_6(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_10 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_6 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _720 = (int16_t)(3);
  int16_t _721 = _dw_conv_stencil_10 * _720;
  int16_t _722 = _pw_conv_stencil_6 + _721;
  return _722;
}

//store is: pw_conv.stencil(0, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(0, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_7(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_11 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_7 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _731 = (int16_t)(3);
  int16_t _732 = _dw_conv_stencil_11 * _731;
  int16_t _733 = _pw_conv_stencil_7 + _732;
  return _733;
}

//store is: pw_conv.stencil(1, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(1, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_8(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_12 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_8 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _742 = (int16_t)(3);
  int16_t _743 = _dw_conv_stencil_12 * _742;
  int16_t _744 = _pw_conv_stencil_8 + _743;
  return _744;
}

//store is: pw_conv.stencil(2, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) = (pw_conv.stencil(2, pw_conv_s1_x_2, pw_conv_s1_y_2, 2) + (dw_conv.stencil(pw_conv_s1_x_2, pw_conv_s1_y_2, 2)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_9(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_13 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_9 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _753 = (int16_t)(3);
  int16_t _754 = _dw_conv_stencil_13 * _753;
  int16_t _755 = _pw_conv_stencil_9 + _754;
  return _755;
}

//store is: pw_conv.stencil(0, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(0, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_10(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_14 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_10 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _764 = (int16_t)(3);
  int16_t _765 = _dw_conv_stencil_14 * _764;
  int16_t _766 = _pw_conv_stencil_10 + _765;
  return _766;
}

//store is: pw_conv.stencil(1, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(1, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_11(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_15 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_11 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _775 = (int16_t)(3);
  int16_t _776 = _dw_conv_stencil_15 * _775;
  int16_t _777 = _pw_conv_stencil_11 + _776;
  return _777;
}

//store is: pw_conv.stencil(2, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) = (pw_conv.stencil(2, pw_conv_s1_x_3, pw_conv_s1_y_3, 3) + (dw_conv.stencil(pw_conv_s1_x_3, pw_conv_s1_y_3, 3)*(int16)3))
hw_uint<16> hcompute_pw_conv_stencil_12(hw_uint<16>& dw_conv_stencil, hw_uint<16>& pw_conv_stencil) {
  int16_t _dw_conv_stencil_16 = (int16_t) dw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_stencil_12 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _786 = (int16_t)(3);
  int16_t _787 = _dw_conv_stencil_16 * _786;
  int16_t _788 = _pw_conv_stencil_12 + _787;
  return _788;
}

//store is: pw_conv_reduction.stencil(pw_conv_reduction_s0_k, pw_conv_reduction_s0_x, pw_conv_reduction_s0_y) = (int16)0
hw_uint<16> hcompute_pw_conv_reduction_stencil() {
  int16_t _797 = (int16_t)(0);
  return _797;
}

//store is: pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(0, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
hw_uint<16> hcompute_pw_conv_reduction_stencil_1(hw_uint<16>& pw_conv_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_stencil_13 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_reduction_stencil_1 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _800 = _pw_conv_reduction_stencil_1 + _pw_conv_stencil_13;
  return _800;
}

//store is: pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(1, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
hw_uint<16> hcompute_pw_conv_reduction_stencil_2(hw_uint<16>& pw_conv_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_stencil_14 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_reduction_stencil_2 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _805 = _pw_conv_reduction_stencil_2 + _pw_conv_stencil_14;
  return _805;
}

//store is: pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) = (pw_conv_reduction.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y) + pw_conv.stencil(2, pw_conv_reduction_s1_x, pw_conv_reduction_s1_y, pw_conv_reduction_s1_r_pw_x))
hw_uint<16> hcompute_pw_conv_reduction_stencil_3(hw_uint<16>& pw_conv_stencil, hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_stencil_15 = (int16_t) pw_conv_stencil.extract<0, 15>();

  int16_t _pw_conv_reduction_stencil_3 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _810 = _pw_conv_reduction_stencil_3 + _pw_conv_stencil_15;
  return _810;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_k) = uint8(max(pw_conv_reduction.stencil(hw_output_s0_k, hw_output_s0_x_xi, hw_output_s0_y_yi), (int16)0))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& pw_conv_reduction_stencil) {
  int16_t _pw_conv_reduction_stencil_4 = (int16_t) pw_conv_reduction_stencil.extract<0, 15>();

  int16_t _815 = (int16_t)(0);
  int16_t _816 = max(_pw_conv_reduction_stencil_4, _815);
  uint16_t _817 = (uint16_t)(_816);
  return _817;
}

