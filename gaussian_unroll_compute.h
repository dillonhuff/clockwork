#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil((hw_input_global_wrapper_s0_x_x*4), hw_input_global_wrapper_s0_y) = hw_input.stencil(((hw_input_global_wrapper_s0_x_x*4) + (0*254)), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 1), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x*4) + (0*254)) + 1), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 2), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x*4) + (0*254)) + 2), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(((hw_input_global_wrapper_s0_x_x*4) + 3), hw_input_global_wrapper_s0_y) = hw_input.stencil((((hw_input_global_wrapper_s0_x_x*4) + (0*254)) + 3), hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x, blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _280 = (uint16_t)(0);
  return _280;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*4), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil((blur_unnormalized_s1_x_x*4), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _blur_unnormalized_stencil_1 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_glb_stencil_4 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_glb_stencil_5 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_glb_stencil_6 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_glb_stencil_7 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_glb_stencil_8 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_glb_stencil_9 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<128, 143>();

  uint16_t _283 = (uint16_t)(24);
  uint16_t _284 = _hw_input_global_wrapper_glb_stencil_1 * _283;
  uint16_t _285 = (uint16_t)(30);
  uint16_t _286 = _hw_input_global_wrapper_glb_stencil_2 * _285;
  uint16_t _287 = _hw_input_global_wrapper_glb_stencil_3 * _283;
  uint16_t _288 = _hw_input_global_wrapper_glb_stencil_4 * _285;
  uint16_t _289 = (uint16_t)(37);
  uint16_t _290 = _hw_input_global_wrapper_glb_stencil_5 * _289;
  uint16_t _291 = _hw_input_global_wrapper_glb_stencil_6 * _285;
  uint16_t _292 = _hw_input_global_wrapper_glb_stencil_7 * _283;
  uint16_t _293 = _hw_input_global_wrapper_glb_stencil_8 * _283;
  uint16_t _294 = _hw_input_global_wrapper_glb_stencil_9 * _285;
  uint16_t _295 = _293 + _294;
  uint16_t _296 = _292 + _295;
  uint16_t _297 = _291 + _296;
  uint16_t _298 = _290 + _297;
  uint16_t _299 = _288 + _298;
  uint16_t _300 = _287 + _299;
  uint16_t _301 = _286 + _300;
  uint16_t _302 = _blur_unnormalized_stencil_1 + _301;
  uint16_t _303 = _284 + _302;
  return _303;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 1), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 1), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_2(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_glb_stencil_10 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_glb_stencil_11 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_glb_stencil_12 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_glb_stencil_13 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_glb_stencil_14 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_glb_stencil_15 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_glb_stencil_16 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_glb_stencil_17 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_glb_stencil_18 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<128, 143>();

  uint16_t _361 = (uint16_t)(24);
  uint16_t _362 = _hw_input_global_wrapper_glb_stencil_10 * _361;
  uint16_t _363 = (uint16_t)(30);
  uint16_t _364 = _hw_input_global_wrapper_glb_stencil_11 * _363;
  uint16_t _365 = _hw_input_global_wrapper_glb_stencil_12 * _361;
  uint16_t _366 = _hw_input_global_wrapper_glb_stencil_13 * _363;
  uint16_t _367 = (uint16_t)(37);
  uint16_t _368 = _hw_input_global_wrapper_glb_stencil_14 * _367;
  uint16_t _369 = _hw_input_global_wrapper_glb_stencil_15 * _363;
  uint16_t _370 = _hw_input_global_wrapper_glb_stencil_16 * _361;
  uint16_t _371 = _hw_input_global_wrapper_glb_stencil_17 * _361;
  uint16_t _372 = _hw_input_global_wrapper_glb_stencil_18 * _363;
  uint16_t _373 = _371 + _372;
  uint16_t _374 = _370 + _373;
  uint16_t _375 = _369 + _374;
  uint16_t _376 = _368 + _375;
  uint16_t _377 = _366 + _376;
  uint16_t _378 = _365 + _377;
  uint16_t _379 = _364 + _378;
  uint16_t _380 = _blur_unnormalized_stencil_2 + _379;
  uint16_t _381 = _362 + _380;
  return _381;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 2), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 2), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_3(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _blur_unnormalized_stencil_3 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_glb_stencil_19 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_glb_stencil_20 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_glb_stencil_21 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_glb_stencil_22 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_glb_stencil_23 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_glb_stencil_24 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_glb_stencil_25 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_glb_stencil_26 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_glb_stencil_27 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<128, 143>();

  uint16_t _440 = (uint16_t)(24);
  uint16_t _441 = _hw_input_global_wrapper_glb_stencil_19 * _440;
  uint16_t _442 = (uint16_t)(30);
  uint16_t _443 = _hw_input_global_wrapper_glb_stencil_20 * _442;
  uint16_t _444 = _hw_input_global_wrapper_glb_stencil_21 * _440;
  uint16_t _445 = _hw_input_global_wrapper_glb_stencil_22 * _442;
  uint16_t _446 = (uint16_t)(37);
  uint16_t _447 = _hw_input_global_wrapper_glb_stencil_23 * _446;
  uint16_t _448 = _hw_input_global_wrapper_glb_stencil_24 * _442;
  uint16_t _449 = _hw_input_global_wrapper_glb_stencil_25 * _440;
  uint16_t _450 = _hw_input_global_wrapper_glb_stencil_26 * _440;
  uint16_t _451 = _hw_input_global_wrapper_glb_stencil_27 * _442;
  uint16_t _452 = _450 + _451;
  uint16_t _453 = _449 + _452;
  uint16_t _454 = _448 + _453;
  uint16_t _455 = _447 + _454;
  uint16_t _456 = _445 + _455;
  uint16_t _457 = _444 + _456;
  uint16_t _458 = _443 + _457;
  uint16_t _459 = _blur_unnormalized_stencil_3 + _458;
  uint16_t _460 = _441 + _459;
  return _460;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) = ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y)*(uint16)24) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*4) + 3), blur_unnormalized_s1_y) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), blur_unnormalized_s1_y)*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 5), blur_unnormalized_s1_y)*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 1))*(uint16)37) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 1))*(uint16)30) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 3), (blur_unnormalized_s1_y + 2))*(uint16)24) + ((hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 5), (blur_unnormalized_s1_y + 2))*(uint16)24) + (hw_input_global_wrapper.glb.stencil(((blur_unnormalized_s1_x_x*4) + 4), (blur_unnormalized_s1_y + 2))*(uint16)30))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_4(hw_uint<16>& blur_unnormalized_stencil, hw_uint<144>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _blur_unnormalized_stencil_4 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_glb_stencil_28 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_glb_stencil_29 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_glb_stencil_30 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_glb_stencil_31 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_glb_stencil_32 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_glb_stencil_33 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_glb_stencil_34 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_glb_stencil_35 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<112, 127>();
  uint16_t _hw_input_global_wrapper_glb_stencil_36 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<128, 143>();

  uint16_t _519 = (uint16_t)(24);
  uint16_t _520 = _hw_input_global_wrapper_glb_stencil_28 * _519;
  uint16_t _521 = (uint16_t)(30);
  uint16_t _522 = _hw_input_global_wrapper_glb_stencil_29 * _521;
  uint16_t _523 = _hw_input_global_wrapper_glb_stencil_30 * _519;
  uint16_t _524 = _hw_input_global_wrapper_glb_stencil_31 * _521;
  uint16_t _525 = (uint16_t)(37);
  uint16_t _526 = _hw_input_global_wrapper_glb_stencil_32 * _525;
  uint16_t _527 = _hw_input_global_wrapper_glb_stencil_33 * _521;
  uint16_t _528 = _hw_input_global_wrapper_glb_stencil_34 * _519;
  uint16_t _529 = _hw_input_global_wrapper_glb_stencil_35 * _519;
  uint16_t _530 = _hw_input_global_wrapper_glb_stencil_36 * _521;
  uint16_t _531 = _529 + _530;
  uint16_t _532 = _528 + _531;
  uint16_t _533 = _527 + _532;
  uint16_t _534 = _526 + _533;
  uint16_t _535 = _524 + _534;
  uint16_t _536 = _523 + _535;
  uint16_t _537 = _522 + _536;
  uint16_t _538 = _blur_unnormalized_stencil_4 + _537;
  uint16_t _539 = _520 + _538;
  return _539;
}

//store is: blur.stencil(min((blur_s0_x_x*4), 250), blur_s0_y) = (blur_unnormalized.stencil(min((blur_s0_x_x*4), 250), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_5 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _598 = (uint16_t)(8);
  uint16_t _599 = _blur_unnormalized_stencil_5 >> _598;
  return _599;
}

//store is: blur.stencil((min((blur_s0_x_x*4), 250) + 1), blur_s0_y) = (blur_unnormalized.stencil((min((blur_s0_x_x*4), 250) + 1), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_1(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_6 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _607 = (uint16_t)(8);
  uint16_t _608 = _blur_unnormalized_stencil_6 >> _607;
  return _608;
}

//store is: blur.stencil((min((blur_s0_x_x*4), 250) + 2), blur_s0_y) = (blur_unnormalized.stencil((min((blur_s0_x_x*4), 250) + 2), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_2(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_7 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _617 = (uint16_t)(8);
  uint16_t _618 = _blur_unnormalized_stencil_7 >> _617;
  return _618;
}

//store is: blur.stencil((min((blur_s0_x_x*4), 250) + 3), blur_s0_y) = (blur_unnormalized.stencil((min((blur_s0_x_x*4), 250) + 3), blur_s0_y)/(uint16)256)
hw_uint<16> hcompute_blur_stencil_3(hw_uint<16>& blur_unnormalized_stencil) {
  uint16_t _blur_unnormalized_stencil_8 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _627 = (uint16_t)(8);
  uint16_t _628 = _blur_unnormalized_stencil_8 >> _627;
  return _628;
}

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi) = blur.stencil((hw_output_s0_x_xi_xi*4), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_1 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_1;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 1), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_2 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_2;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 2), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_2(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_3 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_3;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi) = blur.stencil(((hw_output_s0_x_xi_xi*4) + 3), hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_3(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_4 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_4;
}

//store is: hw_output.glb.stencil(250, hw_output_s0_y_yi) = blur.stencil(250, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_4(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_5 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_5;
}

//store is: hw_output.glb.stencil(251, hw_output_s0_y_yi) = blur.stencil(251, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_5(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_6 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_6;
}

//store is: hw_output.glb.stencil(252, hw_output_s0_y_yi) = blur.stencil(252, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_6(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_7 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_7;
}

//store is: hw_output.glb.stencil(253, hw_output_s0_y_yi) = blur.stencil(253, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_glb_stencil_7(hw_uint<16>& blur_stencil) {
  uint16_t _blur_stencil_8 = (uint16_t) blur_stencil.extract<0, 15>();

  return _blur_stencil_8;
}

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*254)), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*4), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_1 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*254)) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_2 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_2;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*254)) + 2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_2(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_3 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_3;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi*4) + (0*254)) + 3), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*4) + 3), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_3(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_4 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_4;
}

//store is: hw_output_global_wrapper.stencil(((0*254) + 250), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(250, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_4(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_5 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_5;
}

//store is: hw_output_global_wrapper.stencil(((0*254) + 251), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(251, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_5(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_6 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_6;
}

//store is: hw_output_global_wrapper.stencil(((0*254) + 252), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(252, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_6(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_7 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_7;
}

//store is: hw_output_global_wrapper.stencil(((0*254) + 253), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(253, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_7(hw_uint<16>& hw_output_glb_stencil) {
  uint16_t _hw_output_glb_stencil_8 = (uint16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_8;
}

