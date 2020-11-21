#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_c, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: gray.stencil(gray_s0_x, gray_s0_y) = (((hw_input_global_wrapper.stencil(1, gray_s0_x, gray_s0_y)*(uint16)150) + ((hw_input_global_wrapper.stencil(2, gray_s0_x, gray_s0_y)*(uint16)29) + (hw_input_global_wrapper.stencil(0, gray_s0_x, gray_s0_y)*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _391 = (uint16_t)(150);
  uint16_t _392 = _hw_input_global_wrapper_stencil_1 * _391;
  uint16_t _393 = (uint16_t)(29);
  uint16_t _394 = _hw_input_global_wrapper_stencil_2 * _393;
  uint16_t _395 = (uint16_t)(77);
  uint16_t _396 = _hw_input_global_wrapper_stencil_3 * _395;
  uint16_t _397 = _394 + _396;
  uint16_t _398 = _392 + _397;
  uint16_t _399 = (uint16_t)(8);
  uint16_t _400 = _398 >> _399;
  return _400;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (int16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  int16_t _424 = (int16_t)(0);
  return _424;
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

  int16_t _427 = (int16_t)(_gray_stencil_1);
  int16_t _428 = _blur_unnormalized_stencil_1 + _427;
  uint16_t _429 = (uint16_t)(2);
  uint16_t _430 = _gray_stencil_2 * _429;
  int16_t _431 = (int16_t)(_430);
  int16_t _432 = _428 + _431;
  uint16_t _433 = _gray_stencil_3 * _429;
  int16_t _434 = (int16_t)(_433);
  int16_t _435 = _432 + _434;
  int16_t _436 = (int16_t)(_gray_stencil_4);
  int16_t _437 = _435 + _436;
  uint16_t _438 = (uint16_t)(3);
  uint16_t _439 = _gray_stencil_5 * _438;
  int16_t _440 = (int16_t)(_439);
  int16_t _441 = _437 + _440;
  uint16_t _442 = (uint16_t)(7);
  uint16_t _443 = _gray_stencil_6 * _442;
  int16_t _444 = (int16_t)(_443);
  int16_t _445 = _441 + _444;
  uint16_t _446 = (uint16_t)(8);
  uint16_t _447 = _gray_stencil_7 * _446;
  int16_t _448 = (int16_t)(_447);
  int16_t _449 = _445 + _448;
  uint16_t _450 = _gray_stencil_8 * _429;
  int16_t _451 = (int16_t)(_450);
  int16_t _452 = _449 + _451;
  uint16_t _453 = _gray_stencil_9 * _442;
  int16_t _454 = (int16_t)(_453);
  int16_t _455 = _452 + _454;
  uint16_t _456 = (uint16_t)(14);
  uint16_t _457 = _gray_stencil_10 * _456;
  int16_t _458 = (int16_t)(_457);
  int16_t _459 = _455 + _458;
  uint16_t _460 = (uint16_t)(17);
  uint16_t _461 = _gray_stencil_11 * _460;
  int16_t _462 = (int16_t)(_461);
  int16_t _463 = _459 + _462;
  uint16_t _464 = _gray_stencil_12 * _429;
  int16_t _465 = (int16_t)(_464);
  int16_t _466 = _463 + _465;
  uint16_t _467 = _gray_stencil_13 * _446;
  int16_t _468 = (int16_t)(_467);
  int16_t _469 = _466 + _468;
  uint16_t _470 = _gray_stencil_14 * _460;
  int16_t _471 = (int16_t)(_470);
  int16_t _472 = _469 + _471;
  uint16_t _473 = (uint16_t)(21);
  uint16_t _474 = _gray_stencil_15 * _473;
  int16_t _475 = (int16_t)(_474);
  int16_t _476 = _472 + _475;
  return _476;
}

//store is: ratio.stencil(ratio_s0_x, ratio_s0_y) = uint8(min(((uint16(uint8(min(((gray.stencil(ratio_s0_x, ratio_s0_y)*(uint16)2) - uint16(uint8((blur_unnormalized.stencil(ratio_s0_x, ratio_s0_y)/(int16)256)))), (uint16)255)))*(uint16)32)/max(gray.stencil(ratio_s0_x, ratio_s0_y), (uint16)1)), (uint16)255))
hw_uint<8> hcompute_ratio_stencil(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  int16_t _blur_unnormalized_stencil_2 = (int16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_16 = (uint16_t) gray_stencil.extract<0, 15>();

  uint16_t _599 = (uint16_t)(2);
  uint16_t _600 = _gray_stencil_16 * _599;
  int16_t _601 = (int16_t)(8);
  int16_t _602 = _blur_unnormalized_stencil_2 >> _601;
  uint8_t _603 = (uint8_t)(_602);
  uint16_t _604 = (uint16_t)(_603);
  uint16_t _605 = _600 - _604;
  uint16_t _606 = (uint16_t)(255);
  uint16_t _607 = min(_605, _606);
  uint8_t _608 = (uint8_t)(_607);
  uint16_t _609 = (uint16_t)(_608);
  uint16_t _610 = (uint16_t)(32);
  uint16_t _611 = _609 * _610;
  uint16_t _612 = (uint16_t)(1);
  uint16_t _613 = max(_gray_stencil_16, _612);
  uint16_t _614 = _611 / _613;
  uint16_t _615 = min(_614, _606);
  uint8_t _616 = (uint8_t)(_615);
  return _616;
}

//store is: hw_output.stencil(hw_output_s0_c, hw_output_s0_x_xi, hw_output_s0_y_yi) = uint8(min(((hw_input_global_wrapper.stencil(hw_output_s0_c, hw_output_s0_x_xi, hw_output_s0_y_yi)*uint16(ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)))/(uint16)32), (uint16)255))
hw_uint<8> hcompute_hw_output_stencil(hw_uint<16>& hw_input_global_wrapper_stencil, hw_uint<8>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();

  uint8_t _ratio_stencil_1 = (uint8_t) ratio_stencil.extract<0, 7>();

  uint16_t _655 = (uint16_t)(_ratio_stencil_1);
  uint16_t _656 = _hw_input_global_wrapper_stencil_4 * _655;
  uint16_t _657 = (uint16_t)(5);
  uint16_t _658 = _656 >> _657;
  uint16_t _659 = (uint16_t)(255);
  uint16_t _660 = min(_658, _659);
  uint8_t _661 = (uint8_t)(_660);
  return _661;
}

