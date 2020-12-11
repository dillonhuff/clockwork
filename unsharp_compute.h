#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: gray.stencil(gray_s0_x, gray_s0_y) = (((hw_input_global_wrapper.stencil(1, gray_s0_x, gray_s0_y)*(uint16)150) + ((hw_input_global_wrapper.stencil(2, gray_s0_x, gray_s0_y)*(uint16)29) + (hw_input_global_wrapper.stencil(0, gray_s0_x, gray_s0_y)*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _393 = (uint16_t)(150);
  uint16_t _394 = _hw_input_global_wrapper_stencil_1 * _393;
  uint16_t _395 = (uint16_t)(29);
  uint16_t _396 = _hw_input_global_wrapper_stencil_2 * _395;
  uint16_t _397 = (uint16_t)(77);
  uint16_t _398 = _hw_input_global_wrapper_stencil_3 * _397;
  uint16_t _399 = _396 + _398;
  uint16_t _400 = _394 + _399;
  uint16_t _401 = (uint16_t)(8);
  uint16_t _402 = _400 >> _401;
  return _402;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (int16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  int16_t _426 = (int16_t)(0);
  return _426;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = (((((((((((((((((((((((((blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + -2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + -2))*(uint16)7))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + -2))*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + -2))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + -2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + -1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + -1))*(uint16)14))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + -1))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + -1))*(uint16)14))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + -1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), blur_unnormalized_s1_y)*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), blur_unnormalized_s1_y)*(uint16)17))) + int16((gray.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)21))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + 1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 1))*(uint16)14))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)14))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + -2), (blur_unnormalized_s1_y + 2))*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 2))*(uint16)7))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)3)))
hw_uint<16> hcompute_blur_unnormalized_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<400>& gray_stencil) {
  int16_t _blur_unnormalized_stencil_1 = (int16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_1 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_10 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_11 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_12 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_13 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_14 = (uint16_t) gray_stencil.extract<80, 95>();
  uint16_t _gray_stencil_15 = (uint16_t) gray_stencil.extract<96, 111>();
  uint16_t _gray_stencil_16 = (uint16_t) gray_stencil.extract<112, 127>();
  uint16_t _gray_stencil_17 = (uint16_t) gray_stencil.extract<128, 143>();
  uint16_t _gray_stencil_18 = (uint16_t) gray_stencil.extract<144, 159>();
  uint16_t _gray_stencil_19 = (uint16_t) gray_stencil.extract<160, 175>();
  uint16_t _gray_stencil_2 = (uint16_t) gray_stencil.extract<176, 191>();
  uint16_t _gray_stencil_20 = (uint16_t) gray_stencil.extract<192, 207>();
  uint16_t _gray_stencil_21 = (uint16_t) gray_stencil.extract<208, 223>();
  uint16_t _gray_stencil_22 = (uint16_t) gray_stencil.extract<224, 239>();
  uint16_t _gray_stencil_23 = (uint16_t) gray_stencil.extract<240, 255>();
  uint16_t _gray_stencil_24 = (uint16_t) gray_stencil.extract<256, 271>();
  uint16_t _gray_stencil_25 = (uint16_t) gray_stencil.extract<272, 287>();
  uint16_t _gray_stencil_3 = (uint16_t) gray_stencil.extract<288, 303>();
  uint16_t _gray_stencil_4 = (uint16_t) gray_stencil.extract<304, 319>();
  uint16_t _gray_stencil_5 = (uint16_t) gray_stencil.extract<320, 335>();
  uint16_t _gray_stencil_6 = (uint16_t) gray_stencil.extract<336, 351>();
  uint16_t _gray_stencil_7 = (uint16_t) gray_stencil.extract<352, 367>();
  uint16_t _gray_stencil_8 = (uint16_t) gray_stencil.extract<368, 383>();
  uint16_t _gray_stencil_9 = (uint16_t) gray_stencil.extract<384, 399>();

  uint16_t _429 = (uint16_t)(3);
  uint16_t _430 = _gray_stencil_1 * _429;
  int16_t _431 = (int16_t)(_430);
  int16_t _432 = _blur_unnormalized_stencil_1 + _431;
  uint16_t _433 = (uint16_t)(7);
  uint16_t _434 = _gray_stencil_2 * _433;
  int16_t _435 = (int16_t)(_434);
  int16_t _436 = _432 + _435;
  uint16_t _437 = (uint16_t)(8);
  uint16_t _438 = _gray_stencil_3 * _437;
  int16_t _439 = (int16_t)(_438);
  int16_t _440 = _436 + _439;
  uint16_t _441 = _gray_stencil_4 * _433;
  int16_t _442 = (int16_t)(_441);
  int16_t _443 = _440 + _442;
  uint16_t _444 = _gray_stencil_5 * _429;
  int16_t _445 = (int16_t)(_444);
  int16_t _446 = _443 + _445;
  uint16_t _447 = _gray_stencil_6 * _433;
  int16_t _448 = (int16_t)(_447);
  int16_t _449 = _446 + _448;
  uint16_t _450 = (uint16_t)(14);
  uint16_t _451 = _gray_stencil_7 * _450;
  int16_t _452 = (int16_t)(_451);
  int16_t _453 = _449 + _452;
  uint16_t _454 = (uint16_t)(17);
  uint16_t _455 = _gray_stencil_8 * _454;
  int16_t _456 = (int16_t)(_455);
  int16_t _457 = _453 + _456;
  uint16_t _458 = _gray_stencil_9 * _450;
  int16_t _459 = (int16_t)(_458);
  int16_t _460 = _457 + _459;
  uint16_t _461 = _gray_stencil_10 * _433;
  int16_t _462 = (int16_t)(_461);
  int16_t _463 = _460 + _462;
  uint16_t _464 = _gray_stencil_11 * _437;
  int16_t _465 = (int16_t)(_464);
  int16_t _466 = _463 + _465;
  uint16_t _467 = _gray_stencil_12 * _454;
  int16_t _468 = (int16_t)(_467);
  int16_t _469 = _466 + _468;
  uint16_t _470 = (uint16_t)(21);
  uint16_t _471 = _gray_stencil_13 * _470;
  int16_t _472 = (int16_t)(_471);
  int16_t _473 = _469 + _472;
  uint16_t _474 = _gray_stencil_14 * _454;
  int16_t _475 = (int16_t)(_474);
  int16_t _476 = _473 + _475;
  uint16_t _477 = _gray_stencil_15 * _437;
  int16_t _478 = (int16_t)(_477);
  int16_t _479 = _476 + _478;
  uint16_t _480 = _gray_stencil_16 * _433;
  int16_t _481 = (int16_t)(_480);
  int16_t _482 = _479 + _481;
  uint16_t _483 = _gray_stencil_17 * _450;
  int16_t _484 = (int16_t)(_483);
  int16_t _485 = _482 + _484;
  uint16_t _486 = _gray_stencil_18 * _454;
  int16_t _487 = (int16_t)(_486);
  int16_t _488 = _485 + _487;
  uint16_t _489 = _gray_stencil_19 * _450;
  int16_t _490 = (int16_t)(_489);
  int16_t _491 = _488 + _490;
  uint16_t _492 = _gray_stencil_20 * _433;
  int16_t _493 = (int16_t)(_492);
  int16_t _494 = _491 + _493;
  uint16_t _495 = _gray_stencil_21 * _429;
  int16_t _496 = (int16_t)(_495);
  int16_t _497 = _494 + _496;
  uint16_t _498 = _gray_stencil_22 * _433;
  int16_t _499 = (int16_t)(_498);
  int16_t _500 = _497 + _499;
  uint16_t _501 = _gray_stencil_23 * _437;
  int16_t _502 = (int16_t)(_501);
  int16_t _503 = _500 + _502;
  uint16_t _504 = _gray_stencil_24 * _433;
  int16_t _505 = (int16_t)(_504);
  int16_t _506 = _503 + _505;
  uint16_t _507 = _gray_stencil_25 * _429;
  int16_t _508 = (int16_t)(_507);
  int16_t _509 = _506 + _508;
  return _509;
}

//store is: ratio.stencil(ratio_s0_x, ratio_s0_y) = min(((uint16(max(min(((int16(gray.stencil(ratio_s0_x, ratio_s0_y))*(int16)2) - int16(uint8((blur_unnormalized.stencil(ratio_s0_x, ratio_s0_y)/(int16)256)))), (int16)255), (int16)0))*(uint16)32)/max(gray.stencil(ratio_s0_x, ratio_s0_y), (uint16)1)), (uint16)255)
hw_uint<16> hcompute_ratio_stencil(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  int16_t _blur_unnormalized_stencil_2 = (int16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_26 = (uint16_t) gray_stencil.extract<0, 15>();

  int16_t _706 = (int16_t)(_gray_stencil_26);
  int16_t _707 = (int16_t)(2);
  int16_t _708 = _706 * _707;
  int16_t _709 = (int16_t)(8);
  int16_t _710 = _blur_unnormalized_stencil_2 >> _709;
  uint8_t _711 = (uint8_t)(_710);
  int16_t _712 = (int16_t)(_711);
  int16_t _713 = _708 - _712;
  int16_t _714 = (int16_t)(255);
  int16_t _715 = min(_713, _714);
  int16_t _716 = (int16_t)(0);
  int16_t _717 = max(_715, _716);
  uint16_t _718 = (uint16_t)(_717);
  uint16_t _719 = (uint16_t)(32);
  uint16_t _720 = _718 * _719;
  uint16_t _721 = (uint16_t)(1);
  uint16_t _722 = max(_gray_stencil_26, _721);
  uint16_t _723 = _720 / _722;
  uint16_t _724 = (uint16_t)(255);
  uint16_t _725 = min(_723, _724);
  return _725;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_1 = (uint16_t) ratio_stencil.extract<0, 15>();

  uint16_t _768 = _ratio_stencil_1 * _hw_input_global_wrapper_stencil_4;
  uint16_t _769 = (uint16_t)(5);
  uint16_t _770 = _768 >> _769;
  uint16_t _771 = (uint16_t)(255);
  uint16_t _772 = min(_770, _771);
  return _772;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_2 = (uint16_t) ratio_stencil.extract<0, 15>();

  uint16_t _785 = _ratio_stencil_2 * _hw_input_global_wrapper_stencil_5;
  uint16_t _786 = (uint16_t)(5);
  uint16_t _787 = _785 >> _786;
  uint16_t _788 = (uint16_t)(255);
  uint16_t _789 = min(_787, _788);
  return _789;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_3 = (uint16_t) ratio_stencil.extract<0, 15>();

  uint16_t _802 = _ratio_stencil_3 * _hw_input_global_wrapper_stencil_6;
  uint16_t _803 = (uint16_t)(5);
  uint16_t _804 = _802 >> _803;
  uint16_t _805 = (uint16_t)(255);
  uint16_t _806 = min(_804, _805);
  return _806;
}

