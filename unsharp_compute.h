#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_c) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y, hw_input_global_wrapper_s0_c)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: gray.stencil(gray_s0_x, gray_s0_y) = (((hw_input_global_wrapper.stencil(gray_s0_x, gray_s0_y, 1)*(uint16)150) + ((hw_input_global_wrapper.stencil(gray_s0_x, gray_s0_y, 2)*(uint16)29) + (hw_input_global_wrapper.stencil(gray_s0_x, gray_s0_y, 0)*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _326 = (uint16_t)(150);
  uint16_t _327 = _hw_input_global_wrapper_stencil_1 * _326;
  uint16_t _328 = (uint16_t)(29);
  uint16_t _329 = _hw_input_global_wrapper_stencil_2 * _328;
  uint16_t _330 = (uint16_t)(77);
  uint16_t _331 = _hw_input_global_wrapper_stencil_3 * _330;
  uint16_t _332 = _329 + _331;
  uint16_t _333 = _327 + _332;
  uint16_t _334 = (uint16_t)(8);
  uint16_t _335 = _333 >> _334;
  return _335;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _359 = (uint16_t)(0);
  return _359;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) = ((gray.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y)*(uint16)74) + (blur_unnormalized.stencil(blur_unnormalized_s1_x, blur_unnormalized_s1_y) + ((gray.stencil((blur_unnormalized_s1_x + 1), blur_unnormalized_s1_y)*(uint16)59) + ((gray.stencil((blur_unnormalized_s1_x + 2), blur_unnormalized_s1_y)*(uint16)30) + ((gray.stencil((blur_unnormalized_s1_x + 3), blur_unnormalized_s1_y)*(uint16)10) + ((gray.stencil((blur_unnormalized_s1_x + 4), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 1))*(uint16)74) + ((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)59) + ((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 1))*(uint16)10) + ((gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 1))*(uint16)2) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 2))*(uint16)74) + ((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)59) + ((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)30) + ((gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 2))*(uint16)10) + ((gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 3))*(uint16)74) + ((gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 3))*(uint16)59) + ((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 3))*(uint16)30) + ((gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 3))*(uint16)10) + ((gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(blur_unnormalized_s1_x, (blur_unnormalized_s1_y + 4))*(uint16)74) + ((((gray.stencil((blur_unnormalized_s1_x + 2), (blur_unnormalized_s1_y + 4))*(uint16)15) + (gray.stencil((blur_unnormalized_s1_x + 4), (blur_unnormalized_s1_y + 4)) + (gray.stencil((blur_unnormalized_s1_x + 3), (blur_unnormalized_s1_y + 4))*(uint16)5)))*(uint16)2) + (gray.stencil((blur_unnormalized_s1_x + 1), (blur_unnormalized_s1_y + 4))*(uint16)59))))))))))))))))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<400>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_1 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

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

  uint16_t _362 = (uint16_t)(74);
  uint16_t _363 = _gray_stencil_1 * _362;
  uint16_t _364 = (uint16_t)(59);
  uint16_t _365 = _gray_stencil_2 * _364;
  uint16_t _366 = (uint16_t)(30);
  uint16_t _367 = _gray_stencil_3 * _366;
  uint16_t _368 = (uint16_t)(10);
  uint16_t _369 = _gray_stencil_4 * _368;
  uint16_t _370 = (uint16_t)(2);
  uint16_t _371 = _gray_stencil_5 * _370;
  uint16_t _372 = _gray_stencil_6 * _362;
  uint16_t _373 = _gray_stencil_7 * _364;
  uint16_t _374 = _gray_stencil_8 * _366;
  uint16_t _375 = _gray_stencil_9 * _368;
  uint16_t _376 = _gray_stencil_10 * _370;
  uint16_t _377 = _gray_stencil_11 * _362;
  uint16_t _378 = _gray_stencil_12 * _364;
  uint16_t _379 = _gray_stencil_13 * _366;
  uint16_t _380 = _gray_stencil_14 * _368;
  uint16_t _381 = _gray_stencil_15 * _370;
  uint16_t _382 = _gray_stencil_16 * _362;
  uint16_t _383 = _gray_stencil_17 * _364;
  uint16_t _384 = _gray_stencil_18 * _366;
  uint16_t _385 = _gray_stencil_19 * _368;
  uint16_t _386 = _gray_stencil_20 * _370;
  uint16_t _387 = _gray_stencil_21 * _362;
  uint16_t _388 = (uint16_t)(15);
  uint16_t _389 = _gray_stencil_22 * _388;
  uint16_t _390 = (uint16_t)(5);
  uint16_t _391 = _gray_stencil_24 * _390;
  uint16_t _392 = _gray_stencil_23 + _391;
  uint16_t _393 = _389 + _392;
  uint16_t _394 = _393 * _370;
  uint16_t _395 = _gray_stencil_25 * _364;
  uint16_t _396 = _394 + _395;
  uint16_t _397 = _387 + _396;
  uint16_t _398 = _386 + _397;
  uint16_t _399 = _385 + _398;
  uint16_t _400 = _384 + _399;
  uint16_t _401 = _383 + _400;
  uint16_t _402 = _382 + _401;
  uint16_t _403 = _381 + _402;
  uint16_t _404 = _380 + _403;
  uint16_t _405 = _379 + _404;
  uint16_t _406 = _378 + _405;
  uint16_t _407 = _377 + _406;
  uint16_t _408 = _376 + _407;
  uint16_t _409 = _375 + _408;
  uint16_t _410 = _374 + _409;
  uint16_t _411 = _373 + _410;
  uint16_t _412 = _372 + _411;
  uint16_t _413 = _371 + _412;
  uint16_t _414 = _369 + _413;
  uint16_t _415 = _367 + _414;
  uint16_t _416 = _365 + _415;
  uint16_t _417 = _blur_unnormalized_stencil_1 + _416;
  uint16_t _418 = _363 + _417;
  return _418;
}

//store is: ratio.stencil(ratio_s0_x, ratio_s0_y) = min(((min(((gray.stencil(ratio_s0_x, ratio_s0_y)*(uint16)2) - (blur_unnormalized.stencil(ratio_s0_x, ratio_s0_y)/(uint16)256)), (uint16)255)*(uint16)32)/max(gray.stencil(ratio_s0_x, ratio_s0_y), (uint16)1)), (uint16)255)
hw_uint<16> hcompute_ratio_stencil(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_26 = (uint16_t) gray_stencil.extract<0, 15>();

  uint16_t _567 = (uint16_t)(2);
  uint16_t _568 = _gray_stencil_26 * _567;
  uint16_t _569 = (uint16_t)(8);
  uint16_t _570 = _blur_unnormalized_stencil_2 >> _569;
  uint16_t _571 = _568 - _570;
  uint16_t _572 = (uint16_t)(255);
  uint16_t _573 = min(_571, _572);
  uint16_t _574 = (uint16_t)(32);
  uint16_t _575 = _573 * _574;
  uint16_t _576 = (uint16_t)(1);
  uint16_t _577 = max(_gray_stencil_26, _576);
  uint16_t _578 = _575 / _577;
  uint16_t _579 = min(_578, _572);
  return _579;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = min(((ratio.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)*gray.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))/(uint16)32), (uint16)255)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& gray_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _gray_stencil_27 = (uint16_t) gray_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_1 = (uint16_t) ratio_stencil.extract<0, 15>();

  uint16_t _608 = _ratio_stencil_1 * _gray_stencil_27;
  uint16_t _609 = (uint16_t)(5);
  uint16_t _610 = _608 >> _609;
  uint16_t _611 = (uint16_t)(255);
  uint16_t _612 = min(_610, _611);
  return _612;
}

