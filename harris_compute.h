#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: grad_x_unclamp.stencil(grad_x_unclamp_s0_x, grad_x_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _261 = (int16_t)(0);
  return _261;
}

//store is: grad_x_unclamp.stencil(grad_x_unclamp_s1_x, grad_x_unclamp_s1_y) = ((((grad_x_unclamp.stencil(grad_x_unclamp_s1_x, grad_x_unclamp_s1_y) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 1), (grad_x_unclamp_s1_y + -1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 1), (grad_x_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + 1), grad_x_unclamp_s1_y)*(int16)2)))) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + -1), (grad_x_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + -1), grad_x_unclamp_s1_y)*(int16)2)) - padded16_global_wrapper.stencil((grad_x_unclamp_s1_x + -1), (grad_x_unclamp_s1_y + 1)))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _264 = (int16_t)(2);
  int16_t _265 = _padded16_global_wrapper_stencil_3 * _264;
  int16_t _266 = _padded16_global_wrapper_stencil_2 + _265;
  int16_t _267 = _padded16_global_wrapper_stencil_1 + _266;
  int16_t _268 = _grad_x_unclamp_stencil_1 + _267;
  int16_t _269 = _268 - _padded16_global_wrapper_stencil_4;
  int16_t _270 = _padded16_global_wrapper_stencil_5 * _264;
  int16_t _271 = _269 - _270;
  int16_t _272 = _271 - _padded16_global_wrapper_stencil_6;
  return _272;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((max(min(grad_x_unclamp.stencil(lxx_s0_x, lxx_s0_y), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(lxx_s0_x, lxx_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _302 = (int16_t)(180);
  int16_t _303 = min(_grad_x_unclamp_stencil_2, _302);
  int16_t _304 = (int16_t)(-180);
  int16_t _305 = max(_303, _304);
  int16_t _306 = _305 * _305;
  int16_t _307 = (int16_t)(6);
  int16_t _308 = _306 >> _307;
  return _308;
}

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _324 = (int16_t)(0);
  return _324;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + -1)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + -1)) + (lxx.stencil((lgxx_s1_x + -1), lgxx_s1_y) + (lxx.stencil(lgxx_s1_x, lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + 1), lgxx_s1_y) + (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_y + 1)) + (lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_y + 1)) + lxx.stencil(lgxx_s1_x, (lgxx_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
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

  int16_t _327 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _328 = _lxx_stencil_7 + _327;
  int16_t _329 = _lxx_stencil_6 + _328;
  int16_t _330 = _lxx_stencil_5 + _329;
  int16_t _331 = _lxx_stencil_4 + _330;
  int16_t _332 = _lxx_stencil_3 + _331;
  int16_t _333 = _lxx_stencil_2 + _332;
  int16_t _334 = _lgxx_stencil_1 + _333;
  int16_t _335 = _lxx_stencil_1 + _334;
  return _335;
}

//store is: grad_y_unclamp.stencil(grad_y_unclamp_s0_x, grad_y_unclamp_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _368 = (int16_t)(0);
  return _368;
}

//store is: grad_y_unclamp.stencil(grad_y_unclamp_s1_x, grad_y_unclamp_s1_y) = ((((grad_y_unclamp.stencil(grad_y_unclamp_s1_x, grad_y_unclamp_s1_y) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + -1), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 1), (grad_y_unclamp_s1_y + 1)) + (padded16_global_wrapper.stencil(grad_y_unclamp_s1_x, (grad_y_unclamp_s1_y + 1))*(int16)2)))) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + -1), (grad_y_unclamp_s1_y + -1))) - (padded16_global_wrapper.stencil(grad_y_unclamp_s1_x, (grad_y_unclamp_s1_y + -1))*(int16)2)) - padded16_global_wrapper.stencil((grad_y_unclamp_s1_x + 1), (grad_y_unclamp_s1_y + -1)))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& padded16_global_wrapper_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_10 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_11 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_12 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();
  int16_t _padded16_global_wrapper_stencil_7 = (int16_t) padded16_global_wrapper_stencil.extract<48, 63>();
  int16_t _padded16_global_wrapper_stencil_8 = (int16_t) padded16_global_wrapper_stencil.extract<64, 79>();
  int16_t _padded16_global_wrapper_stencil_9 = (int16_t) padded16_global_wrapper_stencil.extract<80, 95>();

  int16_t _371 = (int16_t)(2);
  int16_t _372 = _padded16_global_wrapper_stencil_9 * _371;
  int16_t _373 = _padded16_global_wrapper_stencil_8 + _372;
  int16_t _374 = _padded16_global_wrapper_stencil_7 + _373;
  int16_t _375 = _grad_y_unclamp_stencil_1 + _374;
  int16_t _376 = _375 - _padded16_global_wrapper_stencil_10;
  int16_t _377 = _padded16_global_wrapper_stencil_11 * _371;
  int16_t _378 = _376 - _377;
  int16_t _379 = _378 - _padded16_global_wrapper_stencil_12;
  return _379;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((max(min(grad_x_unclamp.stencil(lxy_s0_x, lxy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(lxy_s0_x, lxy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _409 = (int16_t)(180);
  int16_t _410 = min(_grad_x_unclamp_stencil_3, _409);
  int16_t _411 = (int16_t)(-180);
  int16_t _412 = max(_410, _411);
  int16_t _413 = min(_grad_y_unclamp_stencil_2, _409);
  int16_t _414 = max(_413, _411);
  int16_t _415 = _412 * _414;
  int16_t _416 = (int16_t)(6);
  int16_t _417 = _415 >> _416;
  return _417;
}

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _438 = (int16_t)(0);
  return _438;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + -1)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + -1)) + (lxy.stencil((lgxy_s1_x + -1), lgxy_s1_y) + (lxy.stencil(lgxy_s1_x, lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + 1), lgxy_s1_y) + (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_y + 1)) + (lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_y + 1)) + lxy.stencil(lgxy_s1_x, (lgxy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
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

  int16_t _441 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _442 = _lxy_stencil_7 + _441;
  int16_t _443 = _lxy_stencil_6 + _442;
  int16_t _444 = _lxy_stencil_5 + _443;
  int16_t _445 = _lxy_stencil_4 + _444;
  int16_t _446 = _lxy_stencil_3 + _445;
  int16_t _447 = _lxy_stencil_2 + _446;
  int16_t _448 = _lgxy_stencil_1 + _447;
  int16_t _449 = _lxy_stencil_1 + _448;
  return _449;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((max(min(grad_y_unclamp.stencil(lyy_s0_x, lyy_s0_y), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(lyy_s0_x, lyy_s0_y), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_3 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _482 = (int16_t)(180);
  int16_t _483 = min(_grad_y_unclamp_stencil_3, _482);
  int16_t _484 = (int16_t)(-180);
  int16_t _485 = max(_483, _484);
  int16_t _486 = _485 * _485;
  int16_t _487 = (int16_t)(6);
  int16_t _488 = _486 >> _487;
  return _488;
}

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _504 = (int16_t)(0);
  return _504;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + -1)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + -1)) + (lyy.stencil((lgyy_s1_x + -1), lgyy_s1_y) + (lyy.stencil(lgyy_s1_x, lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + 1), lgyy_s1_y) + (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_y + 1)) + (lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_y + 1)) + lyy.stencil(lgyy_s1_x, (lgyy_s1_y + 1)))))))))))
hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
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

  int16_t _507 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _508 = _lyy_stencil_7 + _507;
  int16_t _509 = _lyy_stencil_6 + _508;
  int16_t _510 = _lyy_stencil_5 + _509;
  int16_t _511 = _lyy_stencil_4 + _510;
  int16_t _512 = _lyy_stencil_3 + _511;
  int16_t _513 = _lyy_stencil_2 + _512;
  int16_t _514 = _lgyy_stencil_1 + _513;
  int16_t _515 = _lyy_stencil_1 + _514;
  return _515;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _548 = (int16_t)(6);
  int16_t _549 = _lgxx_stencil_2 >> _548;
  int16_t _550 = _lgyy_stencil_2 >> _548;
  int16_t _551 = _549 * _550;
  int16_t _552 = _lgxy_stencil_2 >> _548;
  int16_t _553 = _552 * _552;
  int16_t _554 = _551 - _553;
  int16_t _555 = _549 + _550;
  int16_t _556 = _555 * _555;
  int16_t _557 = (int16_t)(4);
  int16_t _558 = _556 >> _557;
  int16_t _559 = _554 - _558;
  return _559;
}

//store is: cim_output.stencil(cim_output_s0_x, cim_output_s0_y) = int16(select((((((((((cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y)) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + -1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), cim_output_s0_y) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + -1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil(cim_output_s0_x, (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && (cim.stencil((cim_output_s0_x + 1), (cim_output_s0_y + 1)) < cim.stencil(cim_output_s0_x, cim_output_s0_y))) && ((int16)1 <= cim.stencil(cim_output_s0_x, cim_output_s0_y))), 255, 0))
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

  bool _587 = _cim_stencil_1 < _cim_stencil_2;
  bool _588 = _cim_stencil_3 < _cim_stencil_2;
  bool _589 = _587 && _588;
  bool _590 = _cim_stencil_4 < _cim_stencil_2;
  bool _591 = _589 && _590;
  bool _592 = _cim_stencil_5 < _cim_stencil_2;
  bool _593 = _591 && _592;
  bool _594 = _cim_stencil_6 < _cim_stencil_2;
  bool _595 = _593 && _594;
  bool _596 = _cim_stencil_7 < _cim_stencil_2;
  bool _597 = _595 && _596;
  bool _598 = _cim_stencil_8 < _cim_stencil_2;
  bool _599 = _597 && _598;
  bool _600 = _cim_stencil_9 < _cim_stencil_2;
  bool _601 = _599 && _600;
  int16_t _602 = (int16_t)(1);
  bool _603 = _602 <= _cim_stencil_2;
  bool _604 = _601 && _603;
  int32_t _605 = (int32_t)(_604 ? 255 : 0);
  int16_t _606 = (int16_t)(_605);
  return _606;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

