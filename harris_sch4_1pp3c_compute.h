#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: padded16_global_wrapper.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y) = padded16.stencil(padded16_global_wrapper_s0_x, padded16_global_wrapper_s0_y)
hw_uint<16> hcompute_padded16_global_wrapper_stencil(hw_uint<16>& padded16_stencil) {
  int16_t _padded16_stencil_1 = (int16_t) padded16_stencil.extract<0, 15>();

  return _padded16_stencil_1;
}

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _264 = (int16_t)(0);
  return _264;
}

//store is: grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) = ((padded16_global_wrapper.stencil((grad_x_s0_x + -1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_xa0[((grad_x_unclamp_s1_r_y*3) + 3)])) + ((padded16_global_wrapper.stencil(grad_x_s0_x, (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_xa0[((grad_x_unclamp_s1_r_y*3) + 4)])) + (grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y) + (padded16_global_wrapper.stencil((grad_x_s0_x + 1), (grad_x_s0_y + grad_x_unclamp_s1_r_y))*int16(kernel_xa0[((grad_x_unclamp_s1_r_y*3) + 5)])))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<48>& padded16_global_wrapper_stencil, const int _grad_x_unclamp_s1_r_y) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_1 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_2 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_3 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

  int32_t _kernel_xa0[9];
  // produce kernel_xa0
  for (int _kernel_x_s0_y = -1; _kernel_x_s0_y < -1 + 3; _kernel_x_s0_y++)
  {
   for (int _kernel_x_s0_x = -1; _kernel_x_s0_x < -1 + 3; _kernel_x_s0_x++)
   {
    int32_t _267 = _kernel_x_s0_y * 3;
    int32_t _268 = _267 + 4;
    int32_t _269 = _kernel_x_s0_x + _268;
    _kernel_xa0[_269] = 0;
   } // for _kernel_x_s0_x
  } // for _kernel_x_s0_y
  _kernel_xa0[0] = -1;
  _kernel_xa0[3] = -2;
  _kernel_xa0[6] = -1;
  _kernel_xa0[2] = 1;
  _kernel_xa0[5] = 2;
  _kernel_xa0[8] = 1;

  int32_t _276 = _grad_x_unclamp_s1_r_y * 3;
  int32_t _277 = _276 + 3;
  int32_t _278 = ((const int32_t *)_kernel_xa0)[_277];
  int16_t _279 = (int16_t)(_278);
  int16_t _280 = _padded16_global_wrapper_stencil_1 * _279;
  int32_t _281 = _276 + 4;
  int32_t _282 = ((const int32_t *)_kernel_xa0)[_281];
  int16_t _283 = (int16_t)(_282);
  int16_t _284 = _padded16_global_wrapper_stencil_2 * _283;
  int32_t _285 = _276 + 5;
  int32_t _286 = ((const int32_t *)_kernel_xa0)[_285];
  int16_t _287 = (int16_t)(_286);
  int16_t _288 = _padded16_global_wrapper_stencil_3 * _287;
  int16_t _289 = _grad_x_unclamp_stencil_1 + _288;
  int16_t _290 = _284 + _289;
  int16_t _291 = _280 + _290;
  return _291;
}

//store is: grad_x.stencil(grad_x_s0_x, grad_x_s0_y) = max(min(grad_x_unclamp.stencil(grad_x_s0_x, grad_x_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_x_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _331 = (int16_t)(255);
  int16_t _332 = min(_grad_x_unclamp_stencil_2, _331);
  int16_t _333 = (int16_t)(-255);
  int16_t _334 = max(_332, _333);
  return _334;
}

//store is: lxx.stencil(lxx_s0_x, lxx_s0_y) = ((grad_x.stencil(lxx_s0_x, lxx_s0_y)*grad_x.stencil(lxx_s0_x, lxx_s0_y))/(int16)128)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_stencil) {
  int16_t _grad_x_stencil_1 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _344 = _grad_x_stencil_1 * _grad_x_stencil_1;
  int16_t _345 = (int16_t)(7);
  int16_t _346 = _344 >> _345;
  return _346;
}

//store is: lgxx.stencil(lgxx_s0_x, lgxx_s0_y) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _354 = (int16_t)(0);
  return _354;
}

//store is: lgxx.stencil(lgxx_s1_x, lgxx_s1_y) = (lxx.stencil((lgxx_s1_x + -1), (lgxx_s1_box_y + lgxx_s1_y)) + (lxx.stencil(lgxx_s1_x, (lgxx_s1_box_y + lgxx_s1_y)) + (lgxx.stencil(lgxx_s1_x, lgxx_s1_y) + lxx.stencil((lgxx_s1_x + 1), (lgxx_s1_box_y + lgxx_s1_y)))))
hw_uint<16> hcompute_lgxx_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<48>& lxx_stencil) {
  int16_t _lgxx_stencil_1 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_1 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_2 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_3 = (int16_t) lxx_stencil.extract<32, 47>();

  int16_t _357 = _lgxx_stencil_1 + _lxx_stencil_3;
  int16_t _358 = _lxx_stencil_2 + _357;
  int16_t _359 = _lxx_stencil_1 + _358;
  return _359;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _376 = (int16_t)(0);
  return _376;
}

//store is: grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) = ((padded16_global_wrapper.stencil((grad_y_s0_x + -1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[((grad_y_unclamp_s1_r_y*3) + 3)])) + ((padded16_global_wrapper.stencil(grad_y_s0_x, (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[((grad_y_unclamp_s1_r_y*3) + 4)])) + (grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y) + (padded16_global_wrapper.stencil((grad_y_s0_x + 1), (grad_y_s0_y + grad_y_unclamp_s1_r_y))*int16(kernel_ya1[((grad_y_unclamp_s1_r_y*3) + 5)])))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_1(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<48>& padded16_global_wrapper_stencil, const int _grad_y_unclamp_s1_r_y) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _padded16_global_wrapper_stencil_4 = (int16_t) padded16_global_wrapper_stencil.extract<0, 15>();
  int16_t _padded16_global_wrapper_stencil_5 = (int16_t) padded16_global_wrapper_stencil.extract<16, 31>();
  int16_t _padded16_global_wrapper_stencil_6 = (int16_t) padded16_global_wrapper_stencil.extract<32, 47>();

  int32_t _kernel_ya1[9];
  // produce kernel_ya1
  for (int _kernel_y_s0_y = -1; _kernel_y_s0_y < -1 + 3; _kernel_y_s0_y++)
  {
   for (int _kernel_y_s0_x = -1; _kernel_y_s0_x < -1 + 3; _kernel_y_s0_x++)
   {
    int32_t _379 = _kernel_y_s0_y * 3;
    int32_t _380 = _379 + 4;
    int32_t _381 = _kernel_y_s0_x + _380;
    _kernel_ya1[_381] = 0;
   } // for _kernel_y_s0_x
  } // for _kernel_y_s0_y
  _kernel_ya1[6] = -1;
  _kernel_ya1[7] = -2;
  _kernel_ya1[8] = -1;
  _kernel_ya1[0] = 1;
  _kernel_ya1[1] = 2;
  _kernel_ya1[2] = 1;

  int32_t _388 = _grad_y_unclamp_s1_r_y * 3;
  int32_t _389 = _388 + 3;
  int32_t _390 = ((const int32_t *)_kernel_ya1)[_389];
  int16_t _391 = (int16_t)(_390);
  int16_t _392 = _padded16_global_wrapper_stencil_4 * _391;
  int32_t _393 = _388 + 4;
  int32_t _394 = ((const int32_t *)_kernel_ya1)[_393];
  int16_t _395 = (int16_t)(_394);
  int16_t _396 = _padded16_global_wrapper_stencil_5 * _395;
  int32_t _397 = _388 + 5;
  int32_t _398 = ((const int32_t *)_kernel_ya1)[_397];
  int16_t _399 = (int16_t)(_398);
  int16_t _400 = _padded16_global_wrapper_stencil_6 * _399;
  int16_t _401 = _grad_y_unclamp_stencil_1 + _400;
  int16_t _402 = _396 + _401;
  int16_t _403 = _392 + _402;
  return _403;
}

//store is: grad_y.stencil(grad_y_s0_x, grad_y_s0_y) = max(min(grad_y_unclamp.stencil(grad_y_s0_x, grad_y_s0_y), (int16)255), (int16)-255)
hw_uint<16> hcompute_grad_y_stencil(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _443 = (int16_t)(255);
  int16_t _444 = min(_grad_y_unclamp_stencil_2, _443);
  int16_t _445 = (int16_t)(-255);
  int16_t _446 = max(_444, _445);
  return _446;
}

//store is: lxy.stencil(lxy_s0_x, lxy_s0_y) = ((grad_x.stencil(lxy_s0_x, lxy_s0_y)*grad_y.stencil(lxy_s0_x, lxy_s0_y))/(int16)128)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_stencil, hw_uint<16>& grad_y_stencil) {
  int16_t _grad_x_stencil_2 = (int16_t) grad_x_stencil.extract<0, 15>();

  int16_t _grad_y_stencil_1 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _456 = _grad_x_stencil_2 * _grad_y_stencil_1;
  int16_t _457 = (int16_t)(7);
  int16_t _458 = _456 >> _457;
  return _458;
}

//store is: lgxy.stencil(lgxy_s0_x, lgxy_s0_y) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _467 = (int16_t)(0);
  return _467;
}

//store is: lgxy.stencil(lgxy_s1_x, lgxy_s1_y) = (lxy.stencil((lgxy_s1_x + -1), (lgxy_s1_box_y + lgxy_s1_y)) + (lxy.stencil(lgxy_s1_x, (lgxy_s1_box_y + lgxy_s1_y)) + (lgxy.stencil(lgxy_s1_x, lgxy_s1_y) + lxy.stencil((lgxy_s1_x + 1), (lgxy_s1_box_y + lgxy_s1_y)))))
hw_uint<16> hcompute_lgxy_stencil_1(hw_uint<16>& lgxy_stencil, hw_uint<48>& lxy_stencil) {
  int16_t _lgxy_stencil_1 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_1 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_2 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_3 = (int16_t) lxy_stencil.extract<32, 47>();

  int16_t _470 = _lgxy_stencil_1 + _lxy_stencil_3;
  int16_t _471 = _lxy_stencil_2 + _470;
  int16_t _472 = _lxy_stencil_1 + _471;
  return _472;
}

//store is: lyy.stencil(lyy_s0_x, lyy_s0_y) = ((grad_y.stencil(lyy_s0_x, lyy_s0_y)*grad_y.stencil(lyy_s0_x, lyy_s0_y))/(int16)128)
hw_uint<16> hcompute_lyy_stencil(hw_uint<16>& grad_y_stencil) {
  int16_t _grad_y_stencil_2 = (int16_t) grad_y_stencil.extract<0, 15>();

  int16_t _486 = _grad_y_stencil_2 * _grad_y_stencil_2;
  int16_t _487 = (int16_t)(7);
  int16_t _488 = _486 >> _487;
  return _488;
}

//store is: lgyy.stencil(lgyy_s0_x, lgyy_s0_y) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _496 = (int16_t)(0);
  return _496;
}

//store is: lgyy.stencil(lgyy_s1_x, lgyy_s1_y) = (lyy.stencil((lgyy_s1_x + -1), (lgyy_s1_box_y + lgyy_s1_y)) + (lyy.stencil(lgyy_s1_x, (lgyy_s1_box_y + lgyy_s1_y)) + (lgyy.stencil(lgyy_s1_x, lgyy_s1_y) + lyy.stencil((lgyy_s1_x + 1), (lgyy_s1_box_y + lgyy_s1_y)))))
hw_uint<16> hcompute_lgyy_stencil_1(hw_uint<16>& lgyy_stencil, hw_uint<48>& lyy_stencil) {
  int16_t _lgyy_stencil_1 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_1 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_2 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_3 = (int16_t) lyy_stencil.extract<32, 47>();

  int16_t _499 = _lgyy_stencil_1 + _lyy_stencil_3;
  int16_t _500 = _lyy_stencil_2 + _499;
  int16_t _501 = _lyy_stencil_1 + _500;
  return _501;
}

//store is: cim.stencil(cim_s0_x, cim_s0_y) = ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)) - ((lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64)*(lgxy.stencil(cim_s0_x, cim_s0_y)/(int16)64))) - ((((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64))*((lgxx.stencil(cim_s0_x, cim_s0_y)/(int16)64) + (lgyy.stencil(cim_s0_x, cim_s0_y)/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _515 = (int16_t)(6);
  int16_t _516 = _lgxx_stencil_2 >> _515;
  int16_t _517 = _lgyy_stencil_2 >> _515;
  int16_t _518 = _516 * _517;
  int16_t _519 = _lgxy_stencil_2 >> _515;
  int16_t _520 = _519 * _519;
  int16_t _521 = _518 - _520;
  int16_t _522 = _516 + _517;
  int16_t _523 = _522 * _522;
  int16_t _524 = (int16_t)(4);
  int16_t _525 = _523 >> _524;
  int16_t _526 = _521 - _525;
  return _526;
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

  bool _554 = _cim_stencil_1 < _cim_stencil_2;
  bool _555 = _cim_stencil_3 < _cim_stencil_2;
  bool _556 = _554 && _555;
  bool _557 = _cim_stencil_4 < _cim_stencil_2;
  bool _558 = _556 && _557;
  bool _559 = _cim_stencil_5 < _cim_stencil_2;
  bool _560 = _558 && _559;
  bool _561 = _cim_stencil_6 < _cim_stencil_2;
  bool _562 = _560 && _561;
  bool _563 = _cim_stencil_7 < _cim_stencil_2;
  bool _564 = _562 && _563;
  bool _565 = _cim_stencil_8 < _cim_stencil_2;
  bool _566 = _564 && _565;
  bool _567 = _cim_stencil_9 < _cim_stencil_2;
  bool _568 = _566 && _567;
  int16_t _569 = (int16_t)(1);
  bool _570 = _569 <= _cim_stencil_2;
  bool _571 = _568 && _570;
  int32_t _572 = (int32_t)(_571 ? 255 : 0);
  int16_t _573 = (int16_t)(_572);
  return _573;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = cim_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& cim_output_stencil) {
  int16_t _cim_output_stencil_1 = (int16_t) cim_output_stencil.extract<0, 15>();

  return _cim_output_stencil_1;
}

