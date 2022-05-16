#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil((hw_input_global_wrapper_s0_x + 7), (hw_input_global_wrapper_s0_y + 7)) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x + 7), (blur_unnormalized_s0_y + 7)) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _407 = (uint16_t)(0);
  return _407;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 7)) = ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 7))*(uint16)3) + (blur_unnormalized.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 7)) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 8), (blur_unnormalized_s1_y + 7))*(uint16)21) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 9), (blur_unnormalized_s1_y + 7))*(uint16)3) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 8))*(uint16)21) + ((((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 9), (blur_unnormalized_s1_y + 8))*(uint16)7) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 7), (blur_unnormalized_s1_y + 9)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 9), (blur_unnormalized_s1_y + 9)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 8), (blur_unnormalized_s1_y + 9))*(uint16)7))))*(uint16)3) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 8), (blur_unnormalized_s1_y + 8))*(uint16)158)))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_stencil) {
  uint16_t _blur_unnormalized_stencil_1 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_stencil.extract<128, 143>();

  uint16_t _412 = (uint16_t)(3);
  uint16_t _413 = _hw_input_global_wrapper_stencil_1 * _412;
  uint16_t _414 = (uint16_t)(21);
  uint16_t _415 = _hw_input_global_wrapper_stencil_2 * _414;
  uint16_t _416 = _hw_input_global_wrapper_stencil_3 * _412;
  uint16_t _417 = _hw_input_global_wrapper_stencil_4 * _414;
  uint16_t _418 = (uint16_t)(7);
  uint16_t _419 = _hw_input_global_wrapper_stencil_5 * _418;
  uint16_t _420 = _hw_input_global_wrapper_stencil_8 * _418;
  uint16_t _421 = _hw_input_global_wrapper_stencil_7 + _420;
  uint16_t _422 = _hw_input_global_wrapper_stencil_6 + _421;
  uint16_t _423 = _419 + _422;
  uint16_t _424 = _423 * _412;
  uint16_t _425 = (uint16_t)(158);
  uint16_t _426 = _hw_input_global_wrapper_stencil_9 * _425;
  uint16_t _427 = _424 + _426;
  uint16_t _428 = _417 + _427;
  uint16_t _429 = _416 + _428;
  uint16_t _430 = _415 + _429;
  uint16_t _431 = _blur_unnormalized_stencil_1 + _430;
  uint16_t _432 = _413 + _431;
  return _432;
}

//store is: l0$0.stencil((l0_0_s0_x + 6), (l0_0_s0_y + 6)) = (blur_unnormalized.stencil((l0_0_s0_x + 6), (l0_0_s0_y + 6))/(uint16)256)
hw_uint<16> hcompute_l0_0_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _491 = (uint16_t)(8);
  uint16_t _492 = _blur_unnormalized_stencil_2 >> _491;
  return _492;
}

//store is: h0$0.stencil(h0_0_s0_x, h0_0_s0_y) = (hw_input_global_wrapper.stencil((h0_0_s0_x + 7), (h0_0_s0_y + 7)) - l0$0.stencil((h0_0_s0_x + 6), (h0_0_s0_y + 6)))
hw_uint<16> hcompute_h0_0_stencil(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& l0_0_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _l0_0_stencil_1 = (uint16_t) l0_0_stencil.extract<0, 15>();

  uint16_t _500 = _hw_input_global_wrapper_stencil_10 - _l0_0_stencil_1;
  return _500;
}

//store is: f1$0.stencil((f1_0_s0_x + 3), (f1_0_s0_y + 3)) = l0$0.stencil(((f1_0_s0_x*2) + 6), ((f1_0_s0_y*2) + 6))
hw_uint<16> hcompute_f1_0_stencil(hw_uint<16>& l0_0_stencil) {
  uint16_t _l0_0_stencil_2 = (uint16_t) l0_0_stencil.extract<0, 15>();

  return _l0_0_stencil_2;
}

//store is: f1_blur_unnormalized.stencil((f1_blur_unnormalized_s0_x + 3), (f1_blur_unnormalized_s0_y + 3)) = (uint16)0
hw_uint<16> hcompute_f1_blur_unnormalized_stencil() {
  uint16_t _516 = (uint16_t)(0);
  return _516;
}

//store is: f1_blur_unnormalized.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 3)) = ((f1$0.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 3))*(uint16)3) + (f1_blur_unnormalized.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 3)) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 4), (f1_blur_unnormalized_s1_y + 3))*(uint16)21) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 5), (f1_blur_unnormalized_s1_y + 3))*(uint16)3) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 4))*(uint16)21) + ((((f1$0.stencil((f1_blur_unnormalized_s1_x + 5), (f1_blur_unnormalized_s1_y + 4))*(uint16)7) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 3), (f1_blur_unnormalized_s1_y + 5)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 5), (f1_blur_unnormalized_s1_y + 5)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 4), (f1_blur_unnormalized_s1_y + 5))*(uint16)7))))*(uint16)3) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 4), (f1_blur_unnormalized_s1_y + 4))*(uint16)158)))))))
hw_uint<16> hcompute_f1_blur_unnormalized_stencil_1(hw_uint<144>& f1_0_stencil, hw_uint<16>& f1_blur_unnormalized_stencil) {
  uint16_t _f1_0_stencil_1 = (uint16_t) f1_0_stencil.extract<0, 15>();
  uint16_t _f1_0_stencil_2 = (uint16_t) f1_0_stencil.extract<16, 31>();
  uint16_t _f1_0_stencil_3 = (uint16_t) f1_0_stencil.extract<32, 47>();
  uint16_t _f1_0_stencil_4 = (uint16_t) f1_0_stencil.extract<48, 63>();
  uint16_t _f1_0_stencil_5 = (uint16_t) f1_0_stencil.extract<64, 79>();
  uint16_t _f1_0_stencil_6 = (uint16_t) f1_0_stencil.extract<80, 95>();
  uint16_t _f1_0_stencil_7 = (uint16_t) f1_0_stencil.extract<96, 111>();
  uint16_t _f1_0_stencil_8 = (uint16_t) f1_0_stencil.extract<112, 127>();
  uint16_t _f1_0_stencil_9 = (uint16_t) f1_0_stencil.extract<128, 143>();

  uint16_t _f1_blur_unnormalized_stencil_1 = (uint16_t) f1_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _521 = (uint16_t)(3);
  uint16_t _522 = _f1_0_stencil_1 * _521;
  uint16_t _523 = (uint16_t)(21);
  uint16_t _524 = _f1_0_stencil_2 * _523;
  uint16_t _525 = _f1_0_stencil_3 * _521;
  uint16_t _526 = _f1_0_stencil_4 * _523;
  uint16_t _527 = (uint16_t)(7);
  uint16_t _528 = _f1_0_stencil_5 * _527;
  uint16_t _529 = _f1_0_stencil_8 * _527;
  uint16_t _530 = _f1_0_stencil_7 + _529;
  uint16_t _531 = _f1_0_stencil_6 + _530;
  uint16_t _532 = _528 + _531;
  uint16_t _533 = _532 * _521;
  uint16_t _534 = (uint16_t)(158);
  uint16_t _535 = _f1_0_stencil_9 * _534;
  uint16_t _536 = _533 + _535;
  uint16_t _537 = _526 + _536;
  uint16_t _538 = _525 + _537;
  uint16_t _539 = _524 + _538;
  uint16_t _540 = _f1_blur_unnormalized_stencil_1 + _539;
  uint16_t _541 = _522 + _540;
  return _541;
}

//store is: l1$0.stencil((l1_0_s0_x + 2), (l1_0_s0_y + 2)) = (f1_blur_unnormalized.stencil((l1_0_s0_x + 2), (l1_0_s0_y + 2))/(uint16)256)
hw_uint<16> hcompute_l1_0_stencil(hw_uint<16>& f1_blur_unnormalized_stencil) {
  uint16_t _f1_blur_unnormalized_stencil_2 = (uint16_t) f1_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _600 = (uint16_t)(8);
  uint16_t _601 = _f1_blur_unnormalized_stencil_2 >> _600;
  return _601;
}

//store is: h1$0.stencil((h1_0_s0_x + 1), (h1_0_s0_y + 1)) = (f1$0.stencil((h1_0_s0_x + 3), (h1_0_s0_y + 3)) - l1$0.stencil((h1_0_s0_x + 2), (h1_0_s0_y + 2)))
hw_uint<16> hcompute_h1_0_stencil(hw_uint<16>& f1_0_stencil, hw_uint<16>& l1_0_stencil) {
  uint16_t _f1_0_stencil_10 = (uint16_t) f1_0_stencil.extract<0, 15>();

  uint16_t _l1_0_stencil_1 = (uint16_t) l1_0_stencil.extract<0, 15>();

  uint16_t _609 = _f1_0_stencil_10 - _l1_0_stencil_1;
  return _609;
}

//store is: f2$0.stencil((f2_0_s0_x + 1), (f2_0_s0_y + 1)) = l1$0.stencil(((f2_0_s0_x*2) + 2), ((f2_0_s0_y*2) + 2))
hw_uint<16> hcompute_f2_0_stencil(hw_uint<16>& l1_0_stencil) {
  uint16_t _l1_0_stencil_2 = (uint16_t) l1_0_stencil.extract<0, 15>();

  return _l1_0_stencil_2;
}

//store is: f2_temp.stencil((f2_temp_s0_x + 2), (f2_temp_s0_y + 2)) = f2$0.stencil(((f2_temp_s0_x/2) + 1), ((f2_temp_s0_y/2) + 1))
hw_uint<16> hcompute_f2_temp_stencil(hw_uint<16>& f2_0_stencil) {
  uint16_t _f2_0_stencil_1 = (uint16_t) f2_0_stencil.extract<0, 15>();

  return _f2_0_stencil_1;
}

//store is: f2_temp_blur_unnormalized.stencil((f2_temp_blur_unnormalized_s0_x + 2), (f2_temp_blur_unnormalized_s0_y + 2)) = (uint16)0
hw_uint<16> hcompute_f2_temp_blur_unnormalized_stencil() {
  uint16_t _634 = (uint16_t)(0);
  return _634;
}

//store is: f2_temp_blur_unnormalized.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2)) = ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)3) + (f2_temp_blur_unnormalized.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2)) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 3), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)21) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 4), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)3) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 3))*(uint16)21) + ((((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 4), (f2_temp_blur_unnormalized_s1_y + 3))*(uint16)7) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 4)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 4), (f2_temp_blur_unnormalized_s1_y + 4)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 3), (f2_temp_blur_unnormalized_s1_y + 4))*(uint16)7))))*(uint16)3) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 3), (f2_temp_blur_unnormalized_s1_y + 3))*(uint16)158)))))))
hw_uint<16> hcompute_f2_temp_blur_unnormalized_stencil_1(hw_uint<144>& f2_temp_stencil, hw_uint<16>& f2_temp_blur_unnormalized_stencil) {
  uint16_t _f2_temp_stencil_1 = (uint16_t) f2_temp_stencil.extract<0, 15>();
  uint16_t _f2_temp_stencil_2 = (uint16_t) f2_temp_stencil.extract<16, 31>();
  uint16_t _f2_temp_stencil_3 = (uint16_t) f2_temp_stencil.extract<32, 47>();
  uint16_t _f2_temp_stencil_4 = (uint16_t) f2_temp_stencil.extract<48, 63>();
  uint16_t _f2_temp_stencil_5 = (uint16_t) f2_temp_stencil.extract<64, 79>();
  uint16_t _f2_temp_stencil_6 = (uint16_t) f2_temp_stencil.extract<80, 95>();
  uint16_t _f2_temp_stencil_7 = (uint16_t) f2_temp_stencil.extract<96, 111>();
  uint16_t _f2_temp_stencil_8 = (uint16_t) f2_temp_stencil.extract<112, 127>();
  uint16_t _f2_temp_stencil_9 = (uint16_t) f2_temp_stencil.extract<128, 143>();

  uint16_t _f2_temp_blur_unnormalized_stencil_1 = (uint16_t) f2_temp_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _639 = (uint16_t)(3);
  uint16_t _640 = _f2_temp_stencil_1 * _639;
  uint16_t _641 = (uint16_t)(21);
  uint16_t _642 = _f2_temp_stencil_2 * _641;
  uint16_t _643 = _f2_temp_stencil_3 * _639;
  uint16_t _644 = _f2_temp_stencil_4 * _641;
  uint16_t _645 = (uint16_t)(7);
  uint16_t _646 = _f2_temp_stencil_5 * _645;
  uint16_t _647 = _f2_temp_stencil_8 * _645;
  uint16_t _648 = _f2_temp_stencil_7 + _647;
  uint16_t _649 = _f2_temp_stencil_6 + _648;
  uint16_t _650 = _646 + _649;
  uint16_t _651 = _650 * _639;
  uint16_t _652 = (uint16_t)(158);
  uint16_t _653 = _f2_temp_stencil_9 * _652;
  uint16_t _654 = _651 + _653;
  uint16_t _655 = _644 + _654;
  uint16_t _656 = _643 + _655;
  uint16_t _657 = _642 + _656;
  uint16_t _658 = _f2_temp_blur_unnormalized_stencil_1 + _657;
  uint16_t _659 = _640 + _658;
  return _659;
}

//store is: l1_up.stencil((l1_up_s0_x + 1), (l1_up_s0_y + 1)) = (f2_temp_blur_unnormalized.stencil((l1_up_s0_x + 1), (l1_up_s0_y + 1))/(uint16)256)
hw_uint<16> hcompute_l1_up_stencil(hw_uint<16>& f2_temp_blur_unnormalized_stencil) {
  uint16_t _f2_temp_blur_unnormalized_stencil_2 = (uint16_t) f2_temp_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _718 = (uint16_t)(8);
  uint16_t _719 = _f2_temp_blur_unnormalized_stencil_2 >> _718;
  return _719;
}

//store is: f1_up.stencil((f1_up_s0_x + 1), (f1_up_s0_y + 1)) = (l1_up.stencil((f1_up_s0_x + 1), (f1_up_s0_y + 1)) + h1$0.stencil((f1_up_s0_x + 1), (f1_up_s0_y + 1)))
hw_uint<16> hcompute_f1_up_stencil_1(hw_uint<16>& h1_0_stencil, hw_uint<16>& l1_up_stencil) {
  uint16_t _h1_0_stencil_1 = (uint16_t) h1_0_stencil.extract<0, 15>();

  uint16_t _l1_up_stencil_1 = (uint16_t) l1_up_stencil.extract<0, 15>();

  uint16_t _727 = _l1_up_stencil_1 + _h1_0_stencil_1;
  return _727;
}

//store is: f1_temp.stencil((f1_temp_s0_x + 1), (f1_temp_s0_y + 1)) = f1_up.stencil(((f1_temp_s0_x/2) + 1), ((f1_temp_s0_y/2) + 1))
hw_uint<16> hcompute_f1_temp_stencil(hw_uint<16>& f1_up_stencil) {
  uint16_t _f1_up_stencil_1 = (uint16_t) f1_up_stencil.extract<0, 15>();

  return _f1_up_stencil_1;
}

//store is: f1_temp_blur_unnormalized.stencil((f1_temp_blur_unnormalized_s0_x + 1), (f1_temp_blur_unnormalized_s0_y + 1)) = (uint16)0
hw_uint<16> hcompute_f1_temp_blur_unnormalized_stencil() {
  uint16_t _741 = (uint16_t)(0);
  return _741;
}

//store is: f1_temp_blur_unnormalized.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1)) = ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)3) + (f1_temp_blur_unnormalized.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1)) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)21) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 3), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)3) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)21) + ((((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 3), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)7) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 3)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 3), (f1_temp_blur_unnormalized_s1_y + 3)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 3))*(uint16)7))))*(uint16)3) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)158)))))))
hw_uint<16> hcompute_f1_temp_blur_unnormalized_stencil_1(hw_uint<144>& f1_temp_stencil, hw_uint<16>& f1_temp_blur_unnormalized_stencil) {
  uint16_t _f1_temp_stencil_1 = (uint16_t) f1_temp_stencil.extract<0, 15>();
  uint16_t _f1_temp_stencil_2 = (uint16_t) f1_temp_stencil.extract<16, 31>();
  uint16_t _f1_temp_stencil_3 = (uint16_t) f1_temp_stencil.extract<32, 47>();
  uint16_t _f1_temp_stencil_4 = (uint16_t) f1_temp_stencil.extract<48, 63>();
  uint16_t _f1_temp_stencil_5 = (uint16_t) f1_temp_stencil.extract<64, 79>();
  uint16_t _f1_temp_stencil_6 = (uint16_t) f1_temp_stencil.extract<80, 95>();
  uint16_t _f1_temp_stencil_7 = (uint16_t) f1_temp_stencil.extract<96, 111>();
  uint16_t _f1_temp_stencil_8 = (uint16_t) f1_temp_stencil.extract<112, 127>();
  uint16_t _f1_temp_stencil_9 = (uint16_t) f1_temp_stencil.extract<128, 143>();

  uint16_t _f1_temp_blur_unnormalized_stencil_1 = (uint16_t) f1_temp_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _746 = (uint16_t)(3);
  uint16_t _747 = _f1_temp_stencil_1 * _746;
  uint16_t _748 = (uint16_t)(21);
  uint16_t _749 = _f1_temp_stencil_2 * _748;
  uint16_t _750 = _f1_temp_stencil_3 * _746;
  uint16_t _751 = _f1_temp_stencil_4 * _748;
  uint16_t _752 = (uint16_t)(7);
  uint16_t _753 = _f1_temp_stencil_5 * _752;
  uint16_t _754 = _f1_temp_stencil_8 * _752;
  uint16_t _755 = _f1_temp_stencil_7 + _754;
  uint16_t _756 = _f1_temp_stencil_6 + _755;
  uint16_t _757 = _753 + _756;
  uint16_t _758 = _757 * _746;
  uint16_t _759 = (uint16_t)(158);
  uint16_t _760 = _f1_temp_stencil_9 * _759;
  uint16_t _761 = _758 + _760;
  uint16_t _762 = _751 + _761;
  uint16_t _763 = _750 + _762;
  uint16_t _764 = _749 + _763;
  uint16_t _765 = _f1_temp_blur_unnormalized_stencil_1 + _764;
  uint16_t _766 = _747 + _765;
  return _766;
}

//store is: l0_up.stencil(l0_up_s0_x, l0_up_s0_y) = (f1_temp_blur_unnormalized.stencil(l0_up_s0_x, l0_up_s0_y)/(uint16)256)
hw_uint<16> hcompute_l0_up_stencil(hw_uint<16>& f1_temp_blur_unnormalized_stencil) {
  uint16_t _f1_temp_blur_unnormalized_stencil_2 = (uint16_t) f1_temp_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _825 = (uint16_t)(8);
  uint16_t _826 = _f1_temp_blur_unnormalized_stencil_2 >> _825;
  return _826;
}

//store is: f0_up.stencil(f0_up_s0_x, f0_up_s0_y) = (l0_up.stencil(f0_up_s0_x, f0_up_s0_y) + h0$0.stencil(f0_up_s0_x, f0_up_s0_y))
hw_uint<16> hcompute_f0_up_stencil(hw_uint<16>& h0_0_stencil, hw_uint<16>& l0_up_stencil) {
  uint16_t _h0_0_stencil_1 = (uint16_t) h0_0_stencil.extract<0, 15>();

  uint16_t _l0_up_stencil_1 = (uint16_t) l0_up_stencil.extract<0, 15>();

  uint16_t _832 = _l0_up_stencil_1 + _h0_0_stencil_1;
  return _832;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = f0_up.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& f0_up_stencil) {
  uint16_t _f0_up_stencil_1 = (uint16_t) f0_up_stencil.extract<0, 15>();

  return _f0_up_stencil_1;
}

