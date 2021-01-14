#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: demosaicked$1.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y, 0) = select(((demosaicked_1_s0_y % 2) == 0), select(((demosaicked_1_s0_x % 2) == 0), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)), select(((demosaicked_1_s0_x % 2) == 0), select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x + 1), (demosaicked_1_s0_y + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x + -1), (demosaicked_1_s0_y + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x, demosaicked_1_s0_y) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x, (demosaicked_1_s0_y + -1))) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
hw_uint<16> hcompute_demosaicked_1_stencil(hw_uint<128>& hw_input_global_wrapper_stencil, const int _demosaicked_1_s0_x, const int _demosaicked_1_s0_y) {
  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _321 = _hw_input_global_wrapper_stencil_1 + _hw_input_global_wrapper_stencil_2;
  uint16_t _322 = (uint16_t)(1);
  uint16_t _323 = _321 + _322;
  uint16_t _324 = _323 >> _322;
  uint16_t _325 = _hw_input_global_wrapper_stencil_1 + _324;
  uint16_t _326 = _hw_input_global_wrapper_stencil_2 + _hw_input_global_wrapper_stencil_3;
  uint16_t _327 = _326 + _322;
  uint16_t _328 = _327 >> _322;
  uint16_t _329 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_2;
  uint16_t _330 = _hw_input_global_wrapper_stencil_2 - _hw_input_global_wrapper_stencil_1;
  bool _331 = _hw_input_global_wrapper_stencil_2 < _hw_input_global_wrapper_stencil_1;
  uint16_t _332 = (uint16_t)(_331 ? _329 : _330);
  uint16_t _333 = _332;
  uint16_t _334 = _hw_input_global_wrapper_stencil_3 - _hw_input_global_wrapper_stencil_2;
  uint16_t _335 = _hw_input_global_wrapper_stencil_2 - _hw_input_global_wrapper_stencil_3;
  bool _336 = _hw_input_global_wrapper_stencil_2 < _hw_input_global_wrapper_stencil_3;
  uint16_t _337 = (uint16_t)(_336 ? _334 : _335);
  uint16_t _338 = _337;
  bool _339 = _333 < _338;
  uint16_t _340 = (uint16_t)(_339 ? _324 : _328);
  uint16_t _341 = _hw_input_global_wrapper_stencil_4 + _hw_input_global_wrapper_stencil_1;
  uint16_t _342 = _341 + _322;
  uint16_t _343 = _342 >> _322;
  uint16_t _344 = _hw_input_global_wrapper_stencil_5 + _hw_input_global_wrapper_stencil_1;
  uint16_t _345 = _344 + _322;
  uint16_t _346 = _345 >> _322;
  uint16_t _347 = _hw_input_global_wrapper_stencil_4 - _hw_input_global_wrapper_stencil_1;
  uint16_t _348 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_4;
  bool _349 = _hw_input_global_wrapper_stencil_1 < _hw_input_global_wrapper_stencil_4;
  uint16_t _350 = (uint16_t)(_349 ? _347 : _348);
  uint16_t _351 = _350;
  uint16_t _352 = _hw_input_global_wrapper_stencil_5 - _hw_input_global_wrapper_stencil_1;
  uint16_t _353 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_5;
  bool _354 = _hw_input_global_wrapper_stencil_1 < _hw_input_global_wrapper_stencil_5;
  uint16_t _355 = (uint16_t)(_354 ? _352 : _353);
  uint16_t _356 = _355;
  bool _357 = _351 < _356;
  uint16_t _358 = (uint16_t)(_357 ? _343 : _346);
  uint16_t _359 = _340 + _358;
  uint16_t _360 = _359 + _322;
  uint16_t _361 = _360 >> _322;
  uint16_t _362 = _325 - _361;
  int32_t _363 = _demosaicked_1_s0_x & 1;
  bool _364 = _363 == 0;
  uint16_t _365 = (uint16_t)(_364 ? _362 : _hw_input_global_wrapper_stencil_1);
  uint16_t _366 = _hw_input_global_wrapper_stencil_1 + _hw_input_global_wrapper_stencil_6;
  uint16_t _367 = _366 + _322;
  uint16_t _368 = _367 >> _322;
  uint16_t _369 = _hw_input_global_wrapper_stencil_1 + _hw_input_global_wrapper_stencil_7;
  uint16_t _370 = _369 + _322;
  uint16_t _371 = _370 >> _322;
  bool _372 = _hw_input_global_wrapper_stencil_1 < _hw_input_global_wrapper_stencil_2;
  uint16_t _373 = (uint16_t)(_372 ? _330 : _329);
  uint16_t _374 = _373;
  uint16_t _375 = _hw_input_global_wrapper_stencil_7 - _hw_input_global_wrapper_stencil_1;
  uint16_t _376 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_7;
  bool _377 = _hw_input_global_wrapper_stencil_1 < _hw_input_global_wrapper_stencil_7;
  uint16_t _378 = (uint16_t)(_377 ? _375 : _376);
  uint16_t _379 = _378;
  bool _380 = _374 < _379;
  uint16_t _381 = (uint16_t)(_380 ? _324 : _371);
  uint16_t _382 = _368 + _381;
  uint16_t _383 = _hw_input_global_wrapper_stencil_7 + _hw_input_global_wrapper_stencil_6;
  uint16_t _384 = _383 + _322;
  uint16_t _385 = _384 >> _322;
  uint16_t _386 = _hw_input_global_wrapper_stencil_6 + _hw_input_global_wrapper_stencil_2;
  uint16_t _387 = _386 + _322;
  uint16_t _388 = _387 >> _322;
  uint16_t _389 = _hw_input_global_wrapper_stencil_7 - _hw_input_global_wrapper_stencil_6;
  uint16_t _390 = _hw_input_global_wrapper_stencil_6 - _hw_input_global_wrapper_stencil_7;
  bool _391 = _hw_input_global_wrapper_stencil_6 < _hw_input_global_wrapper_stencil_7;
  uint16_t _392 = (uint16_t)(_391 ? _389 : _390);
  uint16_t _393 = _392;
  uint16_t _394 = _hw_input_global_wrapper_stencil_2 - _hw_input_global_wrapper_stencil_6;
  uint16_t _395 = _hw_input_global_wrapper_stencil_6 - _hw_input_global_wrapper_stencil_2;
  bool _396 = _hw_input_global_wrapper_stencil_6 < _hw_input_global_wrapper_stencil_2;
  uint16_t _397 = (uint16_t)(_396 ? _394 : _395);
  uint16_t _398 = _397;
  bool _399 = _393 < _398;
  uint16_t _400 = (uint16_t)(_399 ? _385 : _388);
  uint16_t _401 = _400 + _358;
  uint16_t _402 = _401 + _322;
  uint16_t _403 = _402 >> _322;
  uint16_t _404 = _382 - _403;
  uint16_t _405 = _hw_input_global_wrapper_stencil_2 + _hw_input_global_wrapper_stencil_7;
  uint16_t _406 = _405 + _322;
  uint16_t _407 = _406 >> _322;
  uint16_t _408 = _407 + _381;
  uint16_t _409 = _hw_input_global_wrapper_stencil_8 + _hw_input_global_wrapper_stencil_7;
  uint16_t _410 = _409 + _322;
  uint16_t _411 = _410 >> _322;
  uint16_t _412 = _hw_input_global_wrapper_stencil_8 - _hw_input_global_wrapper_stencil_7;
  uint16_t _413 = _hw_input_global_wrapper_stencil_7 - _hw_input_global_wrapper_stencil_8;
  bool _414 = _hw_input_global_wrapper_stencil_7 < _hw_input_global_wrapper_stencil_8;
  uint16_t _415 = (uint16_t)(_414 ? _412 : _413);
  uint16_t _416 = _415;
  bool _417 = _hw_input_global_wrapper_stencil_7 < _hw_input_global_wrapper_stencil_1;
  uint16_t _418 = (uint16_t)(_417 ? _376 : _375);
  uint16_t _419 = _418;
  bool _420 = _416 < _419;
  uint16_t _421 = (uint16_t)(_420 ? _411 : _371);
  uint16_t _422 = _340 + _421;
  uint16_t _423 = _422 + _322;
  uint16_t _424 = _423 >> _322;
  uint16_t _425 = _408 - _424;
  uint16_t _426 = _hw_input_global_wrapper_stencil_1 - _hw_input_global_wrapper_stencil_6;
  uint16_t _427 = _hw_input_global_wrapper_stencil_6 - _hw_input_global_wrapper_stencil_1;
  bool _428 = _hw_input_global_wrapper_stencil_6 < _hw_input_global_wrapper_stencil_1;
  uint16_t _429 = (uint16_t)(_428 ? _426 : _427);
  uint16_t _430 = _429;
  uint16_t _431 = _hw_input_global_wrapper_stencil_2 - _hw_input_global_wrapper_stencil_7;
  uint16_t _432 = _hw_input_global_wrapper_stencil_7 - _hw_input_global_wrapper_stencil_2;
  bool _433 = _hw_input_global_wrapper_stencil_7 < _hw_input_global_wrapper_stencil_2;
  uint16_t _434 = (uint16_t)(_433 ? _431 : _432);
  uint16_t _435 = _434;
  bool _436 = _430 < _435;
  uint16_t _437 = (uint16_t)(_436 ? _404 : _425);
  uint16_t _438 = _hw_input_global_wrapper_stencil_1 + _371;
  uint16_t _439 = _358 + _421;
  uint16_t _440 = _439 + _322;
  uint16_t _441 = _440 >> _322;
  uint16_t _442 = _438 - _441;
  uint16_t _443 = (uint16_t)(_364 ? _437 : _442);
  int32_t _444 = _demosaicked_1_s0_y & 1;
  bool _445 = _444 == 0;
  uint16_t _446 = (uint16_t)(_445 ? _365 : _443);
  return _446;
}

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1, 1) = select(((demosaicked_1_s0_y_1 % 2) == 0), select(((demosaicked_1_s0_x_1 % 2) == 0), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + -1), demosaicked_1_s0_y_1) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2))), select(((demosaicked_1_s0_x_1 % 2) == 0), select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_1 + 1), demosaicked_1_s0_y_1) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, (demosaicked_1_s0_y_1 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)) + (uint16)1)/(uint16)2)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_1, demosaicked_1_s0_y_1)))
hw_uint<16> hcompute_demosaicked_1_stencil_1(hw_uint<80>& hw_input_global_wrapper_stencil, const int _demosaicked_1_s0_x_1, const int _demosaicked_1_s0_y_1) {
  uint16_t _hw_input_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_11 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_12 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_13 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();

  uint16_t _668 = _hw_input_global_wrapper_stencil_10 + _hw_input_global_wrapper_stencil_9;
  uint16_t _669 = (uint16_t)(1);
  uint16_t _670 = _668 + _669;
  uint16_t _671 = _670 >> _669;
  uint16_t _672 = _hw_input_global_wrapper_stencil_11 + _hw_input_global_wrapper_stencil_9;
  uint16_t _673 = _672 + _669;
  uint16_t _674 = _673 >> _669;
  uint16_t _675 = _hw_input_global_wrapper_stencil_10 - _hw_input_global_wrapper_stencil_9;
  uint16_t _676 = _hw_input_global_wrapper_stencil_9 - _hw_input_global_wrapper_stencil_10;
  bool _677 = _hw_input_global_wrapper_stencil_9 < _hw_input_global_wrapper_stencil_10;
  uint16_t _678 = (uint16_t)(_677 ? _675 : _676);
  uint16_t _679 = _678;
  uint16_t _680 = _hw_input_global_wrapper_stencil_11 - _hw_input_global_wrapper_stencil_9;
  uint16_t _681 = _hw_input_global_wrapper_stencil_9 - _hw_input_global_wrapper_stencil_11;
  bool _682 = _hw_input_global_wrapper_stencil_9 < _hw_input_global_wrapper_stencil_11;
  uint16_t _683 = (uint16_t)(_682 ? _680 : _681);
  uint16_t _684 = _683;
  bool _685 = _679 < _684;
  uint16_t _686 = (uint16_t)(_685 ? _671 : _674);
  int32_t _687 = _demosaicked_1_s0_x_1 & 1;
  bool _688 = _687 == 0;
  uint16_t _689 = (uint16_t)(_688 ? _hw_input_global_wrapper_stencil_9 : _686);
  uint16_t _690 = _hw_input_global_wrapper_stencil_12 + _hw_input_global_wrapper_stencil_9;
  uint16_t _691 = _690 + _669;
  uint16_t _692 = _691 >> _669;
  uint16_t _693 = _hw_input_global_wrapper_stencil_13 + _hw_input_global_wrapper_stencil_9;
  uint16_t _694 = _693 + _669;
  uint16_t _695 = _694 >> _669;
  uint16_t _696 = _hw_input_global_wrapper_stencil_12 - _hw_input_global_wrapper_stencil_9;
  uint16_t _697 = _hw_input_global_wrapper_stencil_9 - _hw_input_global_wrapper_stencil_12;
  bool _698 = _hw_input_global_wrapper_stencil_9 < _hw_input_global_wrapper_stencil_12;
  uint16_t _699 = (uint16_t)(_698 ? _696 : _697);
  uint16_t _700 = _699;
  uint16_t _701 = _hw_input_global_wrapper_stencil_13 - _hw_input_global_wrapper_stencil_9;
  uint16_t _702 = _hw_input_global_wrapper_stencil_9 - _hw_input_global_wrapper_stencil_13;
  bool _703 = _hw_input_global_wrapper_stencil_9 < _hw_input_global_wrapper_stencil_13;
  uint16_t _704 = (uint16_t)(_703 ? _701 : _702);
  uint16_t _705 = _704;
  bool _706 = _700 < _705;
  uint16_t _707 = (uint16_t)(_706 ? _692 : _695);
  uint16_t _708 = (uint16_t)(_688 ? _707 : _hw_input_global_wrapper_stencil_9);
  int32_t _709 = _demosaicked_1_s0_y_1 & 1;
  bool _710 = _709 == 0;
  uint16_t _711 = (uint16_t)(_710 ? _689 : _708);
  return _711;
}

//store is: demosaicked$1.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2, 2) = select(((demosaicked_1_s0_y_2 % 2) == 0), select(((demosaicked_1_s0_x_2 % 2) == 0), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)), (((((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2) + select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2))) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1))) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1)), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), (demosaicked_1_s0_y_2 + 1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + 1))) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2)))), select(((demosaicked_1_s0_x_2 % 2) == 0), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), ((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) - (((select((absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + 1), demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2)) + select((absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2)) < absd(hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2), hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)))), (((hw_input_global_wrapper.stencil(demosaicked_1_s0_x_2, demosaicked_1_s0_y_2) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2), (((hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), (demosaicked_1_s0_y_2 + -1)) + hw_input_global_wrapper.stencil((demosaicked_1_s0_x_2 + -1), demosaicked_1_s0_y_2)) + (uint16)1)/(uint16)2))) + (uint16)1)/(uint16)2))))
hw_uint<16> hcompute_demosaicked_1_stencil_2(hw_uint<128>& hw_input_global_wrapper_stencil, const int _demosaicked_1_s0_x_2, const int _demosaicked_1_s0_y_2) {
  uint16_t _hw_input_global_wrapper_stencil_14 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_15 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_16 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();
  uint16_t _hw_input_global_wrapper_stencil_17 = (uint16_t) hw_input_global_wrapper_stencil.extract<48, 63>();
  uint16_t _hw_input_global_wrapper_stencil_18 = (uint16_t) hw_input_global_wrapper_stencil.extract<64, 79>();
  uint16_t _hw_input_global_wrapper_stencil_19 = (uint16_t) hw_input_global_wrapper_stencil.extract<80, 95>();
  uint16_t _hw_input_global_wrapper_stencil_20 = (uint16_t) hw_input_global_wrapper_stencil.extract<96, 111>();
  uint16_t _hw_input_global_wrapper_stencil_21 = (uint16_t) hw_input_global_wrapper_stencil.extract<112, 127>();

  uint16_t _794 = _hw_input_global_wrapper_stencil_14 + _hw_input_global_wrapper_stencil_15;
  uint16_t _795 = (uint16_t)(1);
  uint16_t _796 = _794 + _795;
  uint16_t _797 = _796 >> _795;
  uint16_t _798 = _hw_input_global_wrapper_stencil_14 + _797;
  uint16_t _799 = _hw_input_global_wrapper_stencil_16 + _hw_input_global_wrapper_stencil_15;
  uint16_t _800 = _799 + _795;
  uint16_t _801 = _800 >> _795;
  uint16_t _802 = _hw_input_global_wrapper_stencil_16 - _hw_input_global_wrapper_stencil_15;
  uint16_t _803 = _hw_input_global_wrapper_stencil_15 - _hw_input_global_wrapper_stencil_16;
  bool _804 = _hw_input_global_wrapper_stencil_15 < _hw_input_global_wrapper_stencil_16;
  uint16_t _805 = (uint16_t)(_804 ? _802 : _803);
  uint16_t _806 = _805;
  uint16_t _807 = _hw_input_global_wrapper_stencil_14 - _hw_input_global_wrapper_stencil_15;
  uint16_t _808 = _hw_input_global_wrapper_stencil_15 - _hw_input_global_wrapper_stencil_14;
  bool _809 = _hw_input_global_wrapper_stencil_15 < _hw_input_global_wrapper_stencil_14;
  uint16_t _810 = (uint16_t)(_809 ? _807 : _808);
  uint16_t _811 = _810;
  bool _812 = _806 < _811;
  uint16_t _813 = (uint16_t)(_812 ? _801 : _797);
  uint16_t _814 = _hw_input_global_wrapper_stencil_17 + _hw_input_global_wrapper_stencil_14;
  uint16_t _815 = _814 + _795;
  uint16_t _816 = _815 >> _795;
  uint16_t _817 = _hw_input_global_wrapper_stencil_18 + _hw_input_global_wrapper_stencil_14;
  uint16_t _818 = _817 + _795;
  uint16_t _819 = _818 >> _795;
  uint16_t _820 = _hw_input_global_wrapper_stencil_17 - _hw_input_global_wrapper_stencil_14;
  uint16_t _821 = _hw_input_global_wrapper_stencil_14 - _hw_input_global_wrapper_stencil_17;
  bool _822 = _hw_input_global_wrapper_stencil_14 < _hw_input_global_wrapper_stencil_17;
  uint16_t _823 = (uint16_t)(_822 ? _820 : _821);
  uint16_t _824 = _823;
  uint16_t _825 = _hw_input_global_wrapper_stencil_18 - _hw_input_global_wrapper_stencil_14;
  uint16_t _826 = _hw_input_global_wrapper_stencil_14 - _hw_input_global_wrapper_stencil_18;
  bool _827 = _hw_input_global_wrapper_stencil_14 < _hw_input_global_wrapper_stencil_18;
  uint16_t _828 = (uint16_t)(_827 ? _825 : _826);
  uint16_t _829 = _828;
  bool _830 = _824 < _829;
  uint16_t _831 = (uint16_t)(_830 ? _816 : _819);
  uint16_t _832 = _813 + _831;
  uint16_t _833 = _832 + _795;
  uint16_t _834 = _833 >> _795;
  uint16_t _835 = _798 - _834;
  uint16_t _836 = _hw_input_global_wrapper_stencil_19 + _hw_input_global_wrapper_stencil_14;
  uint16_t _837 = _836 + _795;
  uint16_t _838 = _837 >> _795;
  uint16_t _839 = _hw_input_global_wrapper_stencil_14 + _hw_input_global_wrapper_stencil_20;
  uint16_t _840 = _839 + _795;
  uint16_t _841 = _840 >> _795;
  uint16_t _842 = _hw_input_global_wrapper_stencil_20 - _hw_input_global_wrapper_stencil_14;
  uint16_t _843 = _hw_input_global_wrapper_stencil_14 - _hw_input_global_wrapper_stencil_20;
  bool _844 = _hw_input_global_wrapper_stencil_14 < _hw_input_global_wrapper_stencil_20;
  uint16_t _845 = (uint16_t)(_844 ? _842 : _843);
  uint16_t _846 = _845;
  bool _847 = _hw_input_global_wrapper_stencil_14 < _hw_input_global_wrapper_stencil_15;
  uint16_t _848 = (uint16_t)(_847 ? _808 : _807);
  uint16_t _849 = _848;
  bool _850 = _846 < _849;
  uint16_t _851 = (uint16_t)(_850 ? _841 : _797);
  uint16_t _852 = _838 + _851;
  uint16_t _853 = _hw_input_global_wrapper_stencil_19 + _hw_input_global_wrapper_stencil_15;
  uint16_t _854 = _853 + _795;
  uint16_t _855 = _854 >> _795;
  uint16_t _856 = _hw_input_global_wrapper_stencil_19 + _hw_input_global_wrapper_stencil_20;
  uint16_t _857 = _856 + _795;
  uint16_t _858 = _857 >> _795;
  uint16_t _859 = _hw_input_global_wrapper_stencil_15 - _hw_input_global_wrapper_stencil_19;
  uint16_t _860 = _hw_input_global_wrapper_stencil_19 - _hw_input_global_wrapper_stencil_15;
  bool _861 = _hw_input_global_wrapper_stencil_19 < _hw_input_global_wrapper_stencil_15;
  uint16_t _862 = (uint16_t)(_861 ? _859 : _860);
  uint16_t _863 = _862;
  uint16_t _864 = _hw_input_global_wrapper_stencil_20 - _hw_input_global_wrapper_stencil_19;
  uint16_t _865 = _hw_input_global_wrapper_stencil_19 - _hw_input_global_wrapper_stencil_20;
  bool _866 = _hw_input_global_wrapper_stencil_19 < _hw_input_global_wrapper_stencil_20;
  uint16_t _867 = (uint16_t)(_866 ? _864 : _865);
  uint16_t _868 = _867;
  bool _869 = _863 < _868;
  uint16_t _870 = (uint16_t)(_869 ? _855 : _858);
  uint16_t _871 = _870 + _831;
  uint16_t _872 = _871 + _795;
  uint16_t _873 = _872 >> _795;
  uint16_t _874 = _852 - _873;
  uint16_t _875 = _hw_input_global_wrapper_stencil_15 + _hw_input_global_wrapper_stencil_20;
  uint16_t _876 = _875 + _795;
  uint16_t _877 = _876 >> _795;
  uint16_t _878 = _877 + _851;
  uint16_t _879 = _hw_input_global_wrapper_stencil_21 + _hw_input_global_wrapper_stencil_20;
  uint16_t _880 = _879 + _795;
  uint16_t _881 = _880 >> _795;
  bool _882 = _hw_input_global_wrapper_stencil_20 < _hw_input_global_wrapper_stencil_14;
  uint16_t _883 = (uint16_t)(_882 ? _843 : _842);
  uint16_t _884 = _883;
  uint16_t _885 = _hw_input_global_wrapper_stencil_21 - _hw_input_global_wrapper_stencil_20;
  uint16_t _886 = _hw_input_global_wrapper_stencil_20 - _hw_input_global_wrapper_stencil_21;
  bool _887 = _hw_input_global_wrapper_stencil_20 < _hw_input_global_wrapper_stencil_21;
  uint16_t _888 = (uint16_t)(_887 ? _885 : _886);
  uint16_t _889 = _888;
  bool _890 = _884 < _889;
  uint16_t _891 = (uint16_t)(_890 ? _841 : _881);
  uint16_t _892 = _813 + _891;
  uint16_t _893 = _892 + _795;
  uint16_t _894 = _893 >> _795;
  uint16_t _895 = _878 - _894;
  uint16_t _896 = _hw_input_global_wrapper_stencil_14 - _hw_input_global_wrapper_stencil_19;
  uint16_t _897 = _hw_input_global_wrapper_stencil_19 - _hw_input_global_wrapper_stencil_14;
  bool _898 = _hw_input_global_wrapper_stencil_19 < _hw_input_global_wrapper_stencil_14;
  uint16_t _899 = (uint16_t)(_898 ? _896 : _897);
  uint16_t _900 = _899;
  uint16_t _901 = _hw_input_global_wrapper_stencil_20 - _hw_input_global_wrapper_stencil_15;
  uint16_t _902 = _hw_input_global_wrapper_stencil_15 - _hw_input_global_wrapper_stencil_20;
  bool _903 = _hw_input_global_wrapper_stencil_15 < _hw_input_global_wrapper_stencil_20;
  uint16_t _904 = (uint16_t)(_903 ? _901 : _902);
  uint16_t _905 = _904;
  bool _906 = _900 < _905;
  uint16_t _907 = (uint16_t)(_906 ? _874 : _895);
  int32_t _908 = _demosaicked_1_s0_x_2 & 1;
  bool _909 = _908 == 0;
  uint16_t _910 = (uint16_t)(_909 ? _835 : _907);
  uint16_t _911 = _hw_input_global_wrapper_stencil_14 + _841;
  uint16_t _912 = _831 + _891;
  uint16_t _913 = _912 + _795;
  uint16_t _914 = _913 >> _795;
  uint16_t _915 = _911 - _914;
  uint16_t _916 = (uint16_t)(_909 ? _hw_input_global_wrapper_stencil_14 : _915);
  int32_t _917 = _demosaicked_1_s0_y_2 & 1;
  bool _918 = _917 == 0;
  uint16_t _919 = (uint16_t)(_918 ? _910 : _916);
  return _919;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = demosaicked$1.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& demosaicked_1_stencil) {
  uint16_t _demosaicked_1_stencil_1 = (uint16_t) demosaicked_1_stencil.extract<0, 15>();

  return _demosaicked_1_stencil_1;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = demosaicked$1.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& demosaicked_1_stencil) {
  uint16_t _demosaicked_1_stencil_2 = (uint16_t) demosaicked_1_stencil.extract<0, 15>();

  return _demosaicked_1_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = demosaicked$1.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& demosaicked_1_stencil) {
  uint16_t _demosaicked_1_stencil_3 = (uint16_t) demosaicked_1_stencil.extract<0, 15>();

  return _demosaicked_1_stencil_3;
}

