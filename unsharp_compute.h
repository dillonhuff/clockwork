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

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = (((((((((((((((blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + int16(gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + -1)))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + -1))*(uint16)2))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + -1))*(uint16)2))) + int16(gray.stencil((blur_unnormalized_s1_x + -1), blur_unnormalized_s1_y))) + int16((gray.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)3))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 1))*(uint16)2))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)7))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)14))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + -1), (blur_unnormalized_s1_y + 2))*(uint16)2))) + int16((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)8))) + int16((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)17))) + int16((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)21)))
hw_uint<16> hcompute_blur_unnormalized_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<240>& gray_stencil) {
  int16_t _blur_unnormalized_stencil_1 = (int16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_1 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_10 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_11 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_12 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_13 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_14 = (uint16_t) gray_stencil.extract<80, 95>();
  uint16_t _gray_stencil_15 = (uint16_t) gray_stencil.extract<96, 111>();
  uint16_t _gray_stencil_2 = (uint16_t) gray_stencil.extract<112, 127>();
  uint16_t _gray_stencil_3 = (uint16_t) gray_stencil.extract<128, 143>();
  uint16_t _gray_stencil_4 = (uint16_t) gray_stencil.extract<144, 159>();
  uint16_t _gray_stencil_5 = (uint16_t) gray_stencil.extract<160, 175>();
  uint16_t _gray_stencil_6 = (uint16_t) gray_stencil.extract<176, 191>();
  uint16_t _gray_stencil_7 = (uint16_t) gray_stencil.extract<192, 207>();
  uint16_t _gray_stencil_8 = (uint16_t) gray_stencil.extract<208, 223>();
  uint16_t _gray_stencil_9 = (uint16_t) gray_stencil.extract<224, 239>();

  int16_t _429 = (int16_t)(_gray_stencil_1);
  int16_t _430 = _blur_unnormalized_stencil_1 + _429;
  uint16_t _431 = (uint16_t)(2);
  uint16_t _432 = _gray_stencil_2 * _431;
  int16_t _433 = (int16_t)(_432);
  int16_t _434 = _430 + _433;
  uint16_t _435 = _gray_stencil_3 * _431;
  int16_t _436 = (int16_t)(_435);
  int16_t _437 = _434 + _436;
  int16_t _438 = (int16_t)(_gray_stencil_4);
  int16_t _439 = _437 + _438;
  uint16_t _440 = (uint16_t)(3);
  uint16_t _441 = _gray_stencil_5 * _440;
  int16_t _442 = (int16_t)(_441);
  int16_t _443 = _439 + _442;
  uint16_t _444 = (uint16_t)(7);
  uint16_t _445 = _gray_stencil_6 * _444;
  int16_t _446 = (int16_t)(_445);
  int16_t _447 = _443 + _446;
  uint16_t _448 = (uint16_t)(8);
  uint16_t _449 = _gray_stencil_7 * _448;
  int16_t _450 = (int16_t)(_449);
  int16_t _451 = _447 + _450;
  uint16_t _452 = _gray_stencil_8 * _431;
  int16_t _453 = (int16_t)(_452);
  int16_t _454 = _451 + _453;
  uint16_t _455 = _gray_stencil_9 * _444;
  int16_t _456 = (int16_t)(_455);
  int16_t _457 = _454 + _456;
  uint16_t _458 = (uint16_t)(14);
  uint16_t _459 = _gray_stencil_10 * _458;
  int16_t _460 = (int16_t)(_459);
  int16_t _461 = _457 + _460;
  uint16_t _462 = (uint16_t)(17);
  uint16_t _463 = _gray_stencil_11 * _462;
  int16_t _464 = (int16_t)(_463);
  int16_t _465 = _461 + _464;
  uint16_t _466 = _gray_stencil_12 * _431;
  int16_t _467 = (int16_t)(_466);
  int16_t _468 = _465 + _467;
  uint16_t _469 = _gray_stencil_13 * _448;
  int16_t _470 = (int16_t)(_469);
  int16_t _471 = _468 + _470;
  uint16_t _472 = _gray_stencil_14 * _462;
  int16_t _473 = (int16_t)(_472);
  int16_t _474 = _471 + _473;
  uint16_t _475 = (uint16_t)(21);
  uint16_t _476 = _gray_stencil_15 * _475;
  int16_t _477 = (int16_t)(_476);
  int16_t _478 = _474 + _477;
  return _478;
}

//store is: ratio.stencil(ratio_s0_x, ratio_s0_y) = min(((min(((gray.stencil(ratio_s0_x, ratio_s0_y)*(uint16)2) - uint16((blur_unnormalized.stencil(ratio_s0_x, ratio_s0_y)/(int16)256))), (uint16)255)*(uint16)32)/max(gray.stencil(ratio_s0_x, ratio_s0_y), (uint16)1)), (uint16)255)
hw_uint<16> hcompute_ratio_stencil(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  int16_t _blur_unnormalized_stencil_2 = (int16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_16 = (uint16_t) gray_stencil.extract<0, 15>();

  uint16_t _601 = (uint16_t)(2);
  uint16_t _602 = _gray_stencil_16 * _601;
  int16_t _603 = (int16_t)(8);
  int16_t _604 = _blur_unnormalized_stencil_2 >> _603;
  uint16_t _605 = (uint16_t)(_604);
  uint16_t _606 = _602 - _605;
  uint16_t _607 = (uint16_t)(255);
  uint16_t _608 = min(_606, _607);
  uint16_t _609 = (uint16_t)(32);
  uint16_t _610 = _608 * _609;
  uint16_t _611 = (uint16_t)(1);
  uint16_t _612 = max(_gray_stencil_16, _611);
  uint16_t _613 = _610 / _612;
  uint16_t _614 = min(_613, _607);
  return _614;
}

//store is: hw_output.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(0, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_1 = (uint16_t) ratio_stencil.extract<0, 15>();

  uint16_t _645 = _ratio_stencil_1 * _hw_input_global_wrapper_stencil_4;
  uint16_t _646 = (uint16_t)(5);
  uint16_t _647 = _645 >> _646;
  uint16_t _648 = (uint16_t)(255);
  uint16_t _649 = min(_647, _648);
  return _649;
}

//store is: hw_output.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(1, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_2 = (uint16_t) ratio_stencil.extract<0, 15>();

  uint16_t _662 = _ratio_stencil_2 * _hw_input_global_wrapper_stencil_5;
  uint16_t _663 = (uint16_t)(5);
  uint16_t _664 = _662 >> _663;
  uint16_t _665 = (uint16_t)(255);
  uint16_t _666 = min(_664, _665);
  return _666;
}

//store is: hw_output.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*hw_input_global_wrapper.stencil(2, hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_3 = (uint16_t) ratio_stencil.extract<0, 15>();

  uint16_t _679 = _ratio_stencil_3 * _hw_input_global_wrapper_stencil_6;
  uint16_t _680 = (uint16_t)(5);
  uint16_t _681 = _679 >> _680;
  uint16_t _682 = (uint16_t)(255);
  uint16_t _683 = min(_681, _682);
  return _683;
}

