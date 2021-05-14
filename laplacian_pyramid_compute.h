#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _405 = (uint16_t)(0);
  return _405;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)3) + (blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)21) + ((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)3) + ((hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)21) + ((((hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)7) + (hw_input_global_wrapper.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2)) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (hw_input_global_wrapper.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)158)))))))
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

  uint16_t _408 = (uint16_t)(3);
  uint16_t _409 = _hw_input_global_wrapper_stencil_1 * _408;
  uint16_t _410 = (uint16_t)(21);
  uint16_t _411 = _hw_input_global_wrapper_stencil_2 * _410;
  uint16_t _412 = _hw_input_global_wrapper_stencil_3 * _408;
  uint16_t _413 = _hw_input_global_wrapper_stencil_4 * _410;
  uint16_t _414 = (uint16_t)(7);
  uint16_t _415 = _hw_input_global_wrapper_stencil_5 * _414;
  uint16_t _416 = _hw_input_global_wrapper_stencil_8 * _414;
  uint16_t _417 = _hw_input_global_wrapper_stencil_7 + _416;
  uint16_t _418 = _hw_input_global_wrapper_stencil_6 + _417;
  uint16_t _419 = _415 + _418;
  uint16_t _420 = _419 * _408;
  uint16_t _421 = (uint16_t)(158);
  uint16_t _422 = _hw_input_global_wrapper_stencil_9 * _421;
  uint16_t _423 = _420 + _422;
  uint16_t _424 = _413 + _423;
  uint16_t _425 = _412 + _424;
  uint16_t _426 = _411 + _425;
  uint16_t _427 = _blur_unnormalized_stencil_1 + _426;
  uint16_t _428 = _409 + _427;
  return _428;
}

//store is: l0$0.stencil(l0_0_s0_x, l0_0_s0_y) = (blur_unnormalized.stencil((l0_0_s0_x + -1), (l0_0_s0_y + -1))/(uint16)256)
hw_uint<16> hcompute_l0_0_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _485 = (uint16_t)(8);
  uint16_t _486 = _blur_unnormalized_stencil_2 >> _485;
  return _486;
}

//store is: h0$0.stencil(h0_0_s0_x, h0_0_s0_y) = (hw_input_global_wrapper.stencil(h0_0_s0_x, h0_0_s0_y) - l0$0.stencil(h0_0_s0_x, h0_0_s0_y))
hw_uint<16> hcompute_h0_0_stencil(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& l0_0_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _l0_0_stencil_1 = (uint16_t) l0_0_stencil.extract<0, 15>();

  uint16_t _494 = _hw_input_global_wrapper_stencil_10 - _l0_0_stencil_1;
  return _494;
}

//store is: f1$0.stencil(f1_0_s0_x, f1_0_s0_y) = l0$0.stencil((f1_0_s0_x*2), (f1_0_s0_y*2))
hw_uint<16> hcompute_f1_0_stencil(hw_uint<16>& l0_0_stencil) {
  uint16_t _l0_0_stencil_2 = (uint16_t) l0_0_stencil.extract<0, 15>();

  return _l0_0_stencil_2;
}

//store is: f1_blur_unnormalized.stencil(f1_blur_unnormalized_s0_x, f1_blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_f1_blur_unnormalized_stencil() {
  uint16_t _502 = (uint16_t)(0);
  return _502;
}

//store is: f1_blur_unnormalized.stencil(f1_blur_unnormalized_s1_x, f1_blur_unnormalized_s1_y) = ((f1$0.stencil(f1_blur_unnormalized_s1_x, f1_blur_unnormalized_s1_y)*(uint16)3) + (f1_blur_unnormalized.stencil(f1_blur_unnormalized_s1_x, f1_blur_unnormalized_s1_y) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 1), f1_blur_unnormalized_s1_y)*(uint16)21) + ((f1$0.stencil((f1_blur_unnormalized_s1_x + 2), f1_blur_unnormalized_s1_y)*(uint16)3) + ((f1$0.stencil(f1_blur_unnormalized_s1_x, (f1_blur_unnormalized_s1_y + 1))*(uint16)21) + ((((f1$0.stencil((f1_blur_unnormalized_s1_x + 2), (f1_blur_unnormalized_s1_y + 1))*(uint16)7) + (f1$0.stencil(f1_blur_unnormalized_s1_x, (f1_blur_unnormalized_s1_y + 2)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 2), (f1_blur_unnormalized_s1_y + 2)) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 1), (f1_blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (f1$0.stencil((f1_blur_unnormalized_s1_x + 1), (f1_blur_unnormalized_s1_y + 1))*(uint16)158)))))))
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

  uint16_t _505 = (uint16_t)(3);
  uint16_t _506 = _f1_0_stencil_1 * _505;
  uint16_t _507 = (uint16_t)(21);
  uint16_t _508 = _f1_0_stencil_2 * _507;
  uint16_t _509 = _f1_0_stencil_3 * _505;
  uint16_t _510 = _f1_0_stencil_4 * _507;
  uint16_t _511 = (uint16_t)(7);
  uint16_t _512 = _f1_0_stencil_5 * _511;
  uint16_t _513 = _f1_0_stencil_8 * _511;
  uint16_t _514 = _f1_0_stencil_7 + _513;
  uint16_t _515 = _f1_0_stencil_6 + _514;
  uint16_t _516 = _512 + _515;
  uint16_t _517 = _516 * _505;
  uint16_t _518 = (uint16_t)(158);
  uint16_t _519 = _f1_0_stencil_9 * _518;
  uint16_t _520 = _517 + _519;
  uint16_t _521 = _510 + _520;
  uint16_t _522 = _509 + _521;
  uint16_t _523 = _508 + _522;
  uint16_t _524 = _f1_blur_unnormalized_stencil_1 + _523;
  uint16_t _525 = _506 + _524;
  return _525;
}

//store is: l1$0.stencil(l1_0_s0_x, l1_0_s0_y) = (f1_blur_unnormalized.stencil((l1_0_s0_x + -1), (l1_0_s0_y + -1))/(uint16)256)
hw_uint<16> hcompute_l1_0_stencil(hw_uint<16>& f1_blur_unnormalized_stencil) {
  uint16_t _f1_blur_unnormalized_stencil_2 = (uint16_t) f1_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _582 = (uint16_t)(8);
  uint16_t _583 = _f1_blur_unnormalized_stencil_2 >> _582;
  return _583;
}

//store is: h1$0.stencil(h1_0_s0_x, h1_0_s0_y) = (f1$0.stencil(h1_0_s0_x, h1_0_s0_y) - l1$0.stencil(h1_0_s0_x, h1_0_s0_y))
hw_uint<16> hcompute_h1_0_stencil(hw_uint<16>& f1_0_stencil, hw_uint<16>& l1_0_stencil) {
  uint16_t _f1_0_stencil_10 = (uint16_t) f1_0_stencil.extract<0, 15>();

  uint16_t _l1_0_stencil_1 = (uint16_t) l1_0_stencil.extract<0, 15>();

  uint16_t _591 = _f1_0_stencil_10 - _l1_0_stencil_1;
  return _591;
}

//store is: f2$0.stencil(f2_0_s0_x, f2_0_s0_y) = l1$0.stencil((f2_0_s0_x*2), (f2_0_s0_y*2))
hw_uint<16> hcompute_f2_0_stencil(hw_uint<16>& l1_0_stencil) {
  uint16_t _l1_0_stencil_2 = (uint16_t) l1_0_stencil.extract<0, 15>();

  return _l1_0_stencil_2;
}

//store is: f2_temp.stencil(f2_temp_s0_x, f2_temp_s0_y) = f2$0.stencil((f2_temp_s0_x/2), (f2_temp_s0_y/2))
hw_uint<16> hcompute_f2_temp_stencil(hw_uint<16>& f2_0_stencil) {
  uint16_t _f2_0_stencil_1 = (uint16_t) f2_0_stencil.extract<0, 15>();

  return _f2_0_stencil_1;
}

//store is: f2_temp_blur_unnormalized.stencil(f2_temp_blur_unnormalized_s0_x, f2_temp_blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_f2_temp_blur_unnormalized_stencil() {
  uint16_t _602 = (uint16_t)(0);
  return _602;
}

//store is: f2_temp_blur_unnormalized.stencil(f2_temp_blur_unnormalized_s1_x, f2_temp_blur_unnormalized_s1_y) = ((f2_temp.stencil(f2_temp_blur_unnormalized_s1_x, f2_temp_blur_unnormalized_s1_y)*(uint16)3) + (f2_temp_blur_unnormalized.stencil(f2_temp_blur_unnormalized_s1_x, f2_temp_blur_unnormalized_s1_y) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 1), f2_temp_blur_unnormalized_s1_y)*(uint16)21) + ((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), f2_temp_blur_unnormalized_s1_y)*(uint16)3) + ((f2_temp.stencil(f2_temp_blur_unnormalized_s1_x, (f2_temp_blur_unnormalized_s1_y + 1))*(uint16)21) + ((((f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 1))*(uint16)7) + (f2_temp.stencil(f2_temp_blur_unnormalized_s1_x, (f2_temp_blur_unnormalized_s1_y + 2)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 2), (f2_temp_blur_unnormalized_s1_y + 2)) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 1), (f2_temp_blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (f2_temp.stencil((f2_temp_blur_unnormalized_s1_x + 1), (f2_temp_blur_unnormalized_s1_y + 1))*(uint16)158)))))))
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

  uint16_t _605 = (uint16_t)(3);
  uint16_t _606 = _f2_temp_stencil_1 * _605;
  uint16_t _607 = (uint16_t)(21);
  uint16_t _608 = _f2_temp_stencil_2 * _607;
  uint16_t _609 = _f2_temp_stencil_3 * _605;
  uint16_t _610 = _f2_temp_stencil_4 * _607;
  uint16_t _611 = (uint16_t)(7);
  uint16_t _612 = _f2_temp_stencil_5 * _611;
  uint16_t _613 = _f2_temp_stencil_8 * _611;
  uint16_t _614 = _f2_temp_stencil_7 + _613;
  uint16_t _615 = _f2_temp_stencil_6 + _614;
  uint16_t _616 = _612 + _615;
  uint16_t _617 = _616 * _605;
  uint16_t _618 = (uint16_t)(158);
  uint16_t _619 = _f2_temp_stencil_9 * _618;
  uint16_t _620 = _617 + _619;
  uint16_t _621 = _610 + _620;
  uint16_t _622 = _609 + _621;
  uint16_t _623 = _608 + _622;
  uint16_t _624 = _f2_temp_blur_unnormalized_stencil_1 + _623;
  uint16_t _625 = _606 + _624;
  return _625;
}

//store is: l1_up.stencil(l1_up_s0_x, l1_up_s0_y) = (f2_temp_blur_unnormalized.stencil((l1_up_s0_x + -1), (l1_up_s0_y + -1))/(uint16)256)
hw_uint<16> hcompute_l1_up_stencil(hw_uint<16>& f2_temp_blur_unnormalized_stencil) {
  uint16_t _f2_temp_blur_unnormalized_stencil_2 = (uint16_t) f2_temp_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _682 = (uint16_t)(8);
  uint16_t _683 = _f2_temp_blur_unnormalized_stencil_2 >> _682;
  return _683;
}

//store is: f1_up.stencil(f1_up_s0_x, f1_up_s0_y) = (l1_up.stencil(f1_up_s0_x, f1_up_s0_y) + h1$0.stencil(f1_up_s0_x, f1_up_s0_y))
hw_uint<16> hcompute_f1_up_stencil_1(hw_uint<16>& h1_0_stencil, hw_uint<16>& l1_up_stencil) {
  uint16_t _h1_0_stencil_1 = (uint16_t) h1_0_stencil.extract<0, 15>();

  uint16_t _l1_up_stencil_1 = (uint16_t) l1_up_stencil.extract<0, 15>();

  uint16_t _691 = _l1_up_stencil_1 + _h1_0_stencil_1;
  return _691;
}

//store is: f1_temp.stencil(f1_temp_s0_x, f1_temp_s0_y) = f1_up.stencil((f1_temp_s0_x/2), (f1_temp_s0_y/2))
hw_uint<16> hcompute_f1_temp_stencil(hw_uint<16>& f1_up_stencil) {
  uint16_t _f1_up_stencil_1 = (uint16_t) f1_up_stencil.extract<0, 15>();

  return _f1_up_stencil_1;
}

//store is: f1_temp_blur_unnormalized.stencil(f1_temp_blur_unnormalized_s0_x, f1_temp_blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_f1_temp_blur_unnormalized_stencil() {
  uint16_t _699 = (uint16_t)(0);
  return _699;
}

//store is: f1_temp_blur_unnormalized.stencil(f1_temp_blur_unnormalized_s1_x, f1_temp_blur_unnormalized_s1_y) = ((f1_temp.stencil(f1_temp_blur_unnormalized_s1_x, f1_temp_blur_unnormalized_s1_y)*(uint16)3) + (f1_temp_blur_unnormalized.stencil(f1_temp_blur_unnormalized_s1_x, f1_temp_blur_unnormalized_s1_y) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), f1_temp_blur_unnormalized_s1_y)*(uint16)21) + ((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), f1_temp_blur_unnormalized_s1_y)*(uint16)3) + ((f1_temp.stencil(f1_temp_blur_unnormalized_s1_x, (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)21) + ((((f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)7) + (f1_temp.stencil(f1_temp_blur_unnormalized_s1_x, (f1_temp_blur_unnormalized_s1_y + 2)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 2), (f1_temp_blur_unnormalized_s1_y + 2)) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 2))*(uint16)7))))*(uint16)3) + (f1_temp.stencil((f1_temp_blur_unnormalized_s1_x + 1), (f1_temp_blur_unnormalized_s1_y + 1))*(uint16)158)))))))
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

  uint16_t _702 = (uint16_t)(3);
  uint16_t _703 = _f1_temp_stencil_1 * _702;
  uint16_t _704 = (uint16_t)(21);
  uint16_t _705 = _f1_temp_stencil_2 * _704;
  uint16_t _706 = _f1_temp_stencil_3 * _702;
  uint16_t _707 = _f1_temp_stencil_4 * _704;
  uint16_t _708 = (uint16_t)(7);
  uint16_t _709 = _f1_temp_stencil_5 * _708;
  uint16_t _710 = _f1_temp_stencil_8 * _708;
  uint16_t _711 = _f1_temp_stencil_7 + _710;
  uint16_t _712 = _f1_temp_stencil_6 + _711;
  uint16_t _713 = _709 + _712;
  uint16_t _714 = _713 * _702;
  uint16_t _715 = (uint16_t)(158);
  uint16_t _716 = _f1_temp_stencil_9 * _715;
  uint16_t _717 = _714 + _716;
  uint16_t _718 = _707 + _717;
  uint16_t _719 = _706 + _718;
  uint16_t _720 = _705 + _719;
  uint16_t _721 = _f1_temp_blur_unnormalized_stencil_1 + _720;
  uint16_t _722 = _703 + _721;
  return _722;
}

//store is: l0_up.stencil(l0_up_s0_x, l0_up_s0_y) = (f1_temp_blur_unnormalized.stencil((l0_up_s0_x + -1), (l0_up_s0_y + -1))/(uint16)256)
hw_uint<16> hcompute_l0_up_stencil(hw_uint<16>& f1_temp_blur_unnormalized_stencil) {
  uint16_t _f1_temp_blur_unnormalized_stencil_2 = (uint16_t) f1_temp_blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _779 = (uint16_t)(8);
  uint16_t _780 = _f1_temp_blur_unnormalized_stencil_2 >> _779;
  return _780;
}

//store is: f0_up.stencil(f0_up_s0_x, f0_up_s0_y) = (l0_up.stencil(f0_up_s0_x, f0_up_s0_y) + h0$0.stencil(f0_up_s0_x, f0_up_s0_y))
hw_uint<16> hcompute_f0_up_stencil(hw_uint<16>& h0_0_stencil, hw_uint<16>& l0_up_stencil) {
  uint16_t _h0_0_stencil_1 = (uint16_t) h0_0_stencil.extract<0, 15>();

  uint16_t _l0_up_stencil_1 = (uint16_t) l0_up_stencil.extract<0, 15>();

  uint16_t _788 = _l0_up_stencil_1 + _h0_0_stencil_1;
  return _788;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = f0_up.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& f0_up_stencil) {
  uint16_t _f0_up_stencil_1 = (uint16_t) f0_up_stencil.extract<0, 15>();

  return _f0_up_stencil_1;
}

