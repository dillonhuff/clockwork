#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_1 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_2 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_3 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_4 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_5 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_6 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -1), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_6(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_7 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_7;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -1), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_7(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_8 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_8;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x + (0*40))*3) + -1), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_8(hw_uint<16>& hw_input_stencil) {
  int16_t _hw_input_stencil_9 = (int16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_9;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_1 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_2 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_3 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_4 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_5 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_6 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_7 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_7;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_8 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_8;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  int16_t _hw_input_global_wrapper_glb_stencil_9 = (int16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_9;
}

//store is: gray.stencil((gray_s0_x_x*3), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*3), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*3), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*3), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _453 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_1);
  uint16_t _454 = (uint16_t)(150);
  uint16_t _455 = _453 * _454;
  uint16_t _456 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_2);
  uint16_t _457 = (uint16_t)(29);
  uint16_t _458 = _456 * _457;
  uint16_t _459 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_3);
  uint16_t _460 = (uint16_t)(77);
  uint16_t _461 = _459 * _460;
  uint16_t _462 = _458 + _461;
  uint16_t _463 = _455 + _462;
  uint16_t _464 = (uint16_t)(8);
  uint16_t _465 = _463 >> _464;
  return _465;
}

//store is: gray.stencil(((gray_s0_x_x*3) + 1), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*3) + 1), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*3) + 1), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*3) + 1), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_1(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _498 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_4);
  uint16_t _499 = (uint16_t)(150);
  uint16_t _500 = _498 * _499;
  uint16_t _501 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_5);
  uint16_t _502 = (uint16_t)(29);
  uint16_t _503 = _501 * _502;
  uint16_t _504 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_6);
  uint16_t _505 = (uint16_t)(77);
  uint16_t _506 = _504 * _505;
  uint16_t _507 = _503 + _506;
  uint16_t _508 = _500 + _507;
  uint16_t _509 = (uint16_t)(8);
  uint16_t _510 = _508 >> _509;
  return _510;
}

//store is: gray.stencil(((gray_s0_x_x*3) + 2), ((gray_s0_y + -3) + 3)) = (((uint16(hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*3) + 2), ((gray_s0_y + -3) + 3)))*(uint16)150) + ((uint16(hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*3) + 2), ((gray_s0_y + -3) + 3)))*(uint16)29) + (uint16(hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*3) + 2), ((gray_s0_y + -3) + 3)))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_2(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_7 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_8 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  int16_t _hw_input_global_wrapper_global_wrapper_stencil_9 = (int16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _544 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_7);
  uint16_t _545 = (uint16_t)(150);
  uint16_t _546 = _544 * _545;
  uint16_t _547 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_8);
  uint16_t _548 = (uint16_t)(29);
  uint16_t _549 = _547 * _548;
  uint16_t _550 = (uint16_t)(_hw_input_global_wrapper_global_wrapper_stencil_9);
  uint16_t _551 = (uint16_t)(77);
  uint16_t _552 = _550 * _551;
  uint16_t _553 = _549 + _552;
  uint16_t _554 = _546 + _553;
  uint16_t _555 = (uint16_t)(8);
  uint16_t _556 = _554 >> _555;
  return _556;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s0_x_x*3), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil() {
  int16_t _591 = (int16_t)(0);
  return _591;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*3) + 1), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_1() {
  int16_t _597 = (int16_t)(0);
  return _597;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s0_x_x*3) + 2), ((grad_x_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_x_unclamp_stencil_2() {
  int16_t _604 = (int16_t)(0);
  return _604;
}

//store is: grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*3), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil((grad_x_unclamp_s1_x_x*3), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*3), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil((grad_x_unclamp_s1_x_x*3), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil((grad_x_unclamp_s1_x_x*3), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_3(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_1 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_1 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_2 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_3 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_4 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_5 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_6 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _612 = (int16_t)(_gray_stencil_1);
  int16_t _613 = (int16_t)(2);
  int16_t _614 = _612 * _613;
  int16_t _615 = _grad_x_unclamp_stencil_1 + _614;
  int16_t _616 = (int16_t)(_gray_stencil_2);
  int16_t _617 = _615 - _616;
  int16_t _618 = (int16_t)(_gray_stencil_3);
  int16_t _619 = _617 + _618;
  int16_t _620 = (int16_t)(_gray_stencil_4);
  int16_t _621 = _620 * _613;
  int16_t _622 = _619 - _621;
  int16_t _623 = (int16_t)(_gray_stencil_5);
  int16_t _624 = _622 - _623;
  int16_t _625 = (int16_t)(_gray_stencil_6);
  int16_t _626 = _624 + _625;
  return _626;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 1), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 1), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 3), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 1), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 3), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 1), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 1), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 3), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_4(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_2 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_10 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_11 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_12 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_7 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_8 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_9 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _670 = (int16_t)(_gray_stencil_7);
  int16_t _671 = (int16_t)(2);
  int16_t _672 = _670 * _671;
  int16_t _673 = _grad_x_unclamp_stencil_2 + _672;
  int16_t _674 = (int16_t)(_gray_stencil_8);
  int16_t _675 = _673 - _674;
  int16_t _676 = (int16_t)(_gray_stencil_9);
  int16_t _677 = _675 + _676;
  int16_t _678 = (int16_t)(_gray_stencil_10);
  int16_t _679 = _678 * _671;
  int16_t _680 = _677 - _679;
  int16_t _681 = (int16_t)(_gray_stencil_11);
  int16_t _682 = _680 - _681;
  int16_t _683 = (int16_t)(_gray_stencil_12);
  int16_t _684 = _682 + _683;
  return _684;
}

//store is: grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 2)) = ((((((grad_x_unclamp.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 4), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 4), ((grad_x_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 3)))*(int16)2)) - int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 2), ((grad_x_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_x_unclamp_s1_x_x*3) + 4), ((grad_x_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_x_unclamp_stencil_5(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_x_unclamp_stencil_3 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_13 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_14 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_15 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_16 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_17 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_18 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _729 = (int16_t)(_gray_stencil_13);
  int16_t _730 = (int16_t)(2);
  int16_t _731 = _729 * _730;
  int16_t _732 = _grad_x_unclamp_stencil_3 + _731;
  int16_t _733 = (int16_t)(_gray_stencil_14);
  int16_t _734 = _732 - _733;
  int16_t _735 = (int16_t)(_gray_stencil_15);
  int16_t _736 = _734 + _735;
  int16_t _737 = (int16_t)(_gray_stencil_16);
  int16_t _738 = _737 * _730;
  int16_t _739 = _736 - _738;
  int16_t _740 = (int16_t)(_gray_stencil_17);
  int16_t _741 = _739 - _740;
  int16_t _742 = (int16_t)(_gray_stencil_18);
  int16_t _743 = _741 + _742;
  return _743;
}

//store is: lxx.stencil((lxx_s0_x_x*3), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxx_s0_x_x*3), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil((lxx_s0_x_x*3), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_4 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _789 = (int16_t)(180);
  int16_t _790 = min(_grad_x_unclamp_stencil_4, _789);
  int16_t _791 = (int16_t)(-180);
  int16_t _792 = max(_790, _791);
  int16_t _793 = _792 * _792;
  int16_t _794 = (int16_t)(6);
  int16_t _795 = _793 >> _794;
  return _795;
}

//store is: lxx.stencil(((lxx_s0_x_x*3) + 1), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 1), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 1), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_1(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_5 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _814 = (int16_t)(180);
  int16_t _815 = min(_grad_x_unclamp_stencil_5, _814);
  int16_t _816 = (int16_t)(-180);
  int16_t _817 = max(_815, _816);
  int16_t _818 = _817 * _817;
  int16_t _819 = (int16_t)(6);
  int16_t _820 = _818 >> _819;
  return _820;
}

//store is: lxx.stencil(((lxx_s0_x_x*3) + 2), ((lxx_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 2), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_x_unclamp.stencil(((lxx_s0_x_x*3) + 2), ((lxx_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxx_stencil_2(hw_uint<16>& grad_x_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_6 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _840 = (int16_t)(180);
  int16_t _841 = min(_grad_x_unclamp_stencil_6, _840);
  int16_t _842 = (int16_t)(-180);
  int16_t _843 = max(_841, _842);
  int16_t _844 = _843 * _843;
  int16_t _845 = (int16_t)(6);
  int16_t _846 = _844 >> _845;
  return _846;
}

//store is: lgxx.stencil((lgxx_s0_x_x*3), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil() {
  int16_t _867 = (int16_t)(0);
  return _867;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 1), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_1() {
  int16_t _873 = (int16_t)(0);
  return _873;
}

//store is: lgxx.stencil(((lgxx_s0_x_x*3) + 2), ((lgxx_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxx_stencil_2() {
  int16_t _880 = (int16_t)(0);
  return _880;
}

//store is: lgxx.stencil((lgxx_s1_x_x*3), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil((lgxx_s1_x_x*3), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil((lgxx_s1_x_x*3), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil((lgxx_s1_x_x*3), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil((lgxx_s1_x_x*3), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_3(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
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

  int16_t _888 = _lxx_stencil_8 + _lxx_stencil_9;
  int16_t _889 = _lxx_stencil_7 + _888;
  int16_t _890 = _lxx_stencil_6 + _889;
  int16_t _891 = _lxx_stencil_5 + _890;
  int16_t _892 = _lxx_stencil_4 + _891;
  int16_t _893 = _lxx_stencil_3 + _892;
  int16_t _894 = _lxx_stencil_2 + _893;
  int16_t _895 = _lgxx_stencil_1 + _894;
  int16_t _896 = _lxx_stencil_1 + _895;
  return _896;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 1), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_4(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_2 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_10 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_11 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_12 = (int16_t) lxx_stencil.extract<32, 47>();
  int16_t _lxx_stencil_13 = (int16_t) lxx_stencil.extract<48, 63>();
  int16_t _lxx_stencil_14 = (int16_t) lxx_stencil.extract<64, 79>();
  int16_t _lxx_stencil_15 = (int16_t) lxx_stencil.extract<80, 95>();
  int16_t _lxx_stencil_16 = (int16_t) lxx_stencil.extract<96, 111>();
  int16_t _lxx_stencil_17 = (int16_t) lxx_stencil.extract<112, 127>();
  int16_t _lxx_stencil_18 = (int16_t) lxx_stencil.extract<128, 143>();

  int16_t _932 = _lxx_stencil_17 + _lxx_stencil_18;
  int16_t _933 = _lxx_stencil_16 + _932;
  int16_t _934 = _lxx_stencil_15 + _933;
  int16_t _935 = _lxx_stencil_14 + _934;
  int16_t _936 = _lxx_stencil_13 + _935;
  int16_t _937 = _lxx_stencil_12 + _936;
  int16_t _938 = _lxx_stencil_11 + _937;
  int16_t _939 = _lgxx_stencil_2 + _938;
  int16_t _940 = _lxx_stencil_10 + _939;
  return _940;
}

//store is: lgxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 1)) = (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 1)) + (lgxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 4), ((lgxx_s1_y + -1) + 1)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 3), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 4), ((lgxx_s1_y + -1) + 2)) + (lxx.stencil(((lgxx_s1_x_x*3) + 2), ((lgxx_s1_y + -1) + 3)) + (lxx.stencil(((lgxx_s1_x_x*3) + 4), ((lgxx_s1_y + -1) + 3)) + lxx.stencil(((lgxx_s1_x_x*3) + 3), ((lgxx_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxx_stencil_5(hw_uint<16>& lgxx_stencil, hw_uint<144>& lxx_stencil) {
  int16_t _lgxx_stencil_3 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lxx_stencil_19 = (int16_t) lxx_stencil.extract<0, 15>();
  int16_t _lxx_stencil_20 = (int16_t) lxx_stencil.extract<16, 31>();
  int16_t _lxx_stencil_21 = (int16_t) lxx_stencil.extract<32, 47>();
  int16_t _lxx_stencil_22 = (int16_t) lxx_stencil.extract<48, 63>();
  int16_t _lxx_stencil_23 = (int16_t) lxx_stencil.extract<64, 79>();
  int16_t _lxx_stencil_24 = (int16_t) lxx_stencil.extract<80, 95>();
  int16_t _lxx_stencil_25 = (int16_t) lxx_stencil.extract<96, 111>();
  int16_t _lxx_stencil_26 = (int16_t) lxx_stencil.extract<112, 127>();
  int16_t _lxx_stencil_27 = (int16_t) lxx_stencil.extract<128, 143>();

  int16_t _977 = _lxx_stencil_26 + _lxx_stencil_27;
  int16_t _978 = _lxx_stencil_25 + _977;
  int16_t _979 = _lxx_stencil_24 + _978;
  int16_t _980 = _lxx_stencil_23 + _979;
  int16_t _981 = _lxx_stencil_22 + _980;
  int16_t _982 = _lxx_stencil_21 + _981;
  int16_t _983 = _lxx_stencil_20 + _982;
  int16_t _984 = _lgxx_stencil_3 + _983;
  int16_t _985 = _lxx_stencil_19 + _984;
  return _985;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s0_x_x*3), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil() {
  int16_t _1023 = (int16_t)(0);
  return _1023;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*3) + 1), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_1() {
  int16_t _1029 = (int16_t)(0);
  return _1029;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s0_x_x*3) + 2), ((grad_y_unclamp_s0_y + -2) + 2)) = (int16)0
hw_uint<16> hcompute_grad_y_unclamp_stencil_2() {
  int16_t _1036 = (int16_t)(0);
  return _1036;
}

//store is: grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*3), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil((grad_y_unclamp_s1_x_x*3), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil((grad_y_unclamp_s1_x_x*3), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil((grad_y_unclamp_s1_x_x*3), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_3(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_1 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_19 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_20 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_21 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_22 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_23 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_24 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _1044 = (int16_t)(_gray_stencil_19);
  int16_t _1045 = (int16_t)(2);
  int16_t _1046 = _1044 * _1045;
  int16_t _1047 = _grad_y_unclamp_stencil_1 + _1046;
  int16_t _1048 = (int16_t)(_gray_stencil_20);
  int16_t _1049 = _1047 - _1048;
  int16_t _1050 = (int16_t)(_gray_stencil_21);
  int16_t _1051 = _1050 * _1045;
  int16_t _1052 = _1049 - _1051;
  int16_t _1053 = (int16_t)(_gray_stencil_22);
  int16_t _1054 = _1052 - _1053;
  int16_t _1055 = (int16_t)(_gray_stencil_23);
  int16_t _1056 = _1054 + _1055;
  int16_t _1057 = (int16_t)(_gray_stencil_24);
  int16_t _1058 = _1056 + _1057;
  return _1058;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 1), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 1), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 1), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_4(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_2 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_25 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_26 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_27 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_28 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_29 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_30 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _1102 = (int16_t)(_gray_stencil_25);
  int16_t _1103 = (int16_t)(2);
  int16_t _1104 = _1102 * _1103;
  int16_t _1105 = _grad_y_unclamp_stencil_2 + _1104;
  int16_t _1106 = (int16_t)(_gray_stencil_26);
  int16_t _1107 = _1105 - _1106;
  int16_t _1108 = (int16_t)(_gray_stencil_27);
  int16_t _1109 = _1108 * _1103;
  int16_t _1110 = _1107 - _1109;
  int16_t _1111 = (int16_t)(_gray_stencil_28);
  int16_t _1112 = _1110 - _1111;
  int16_t _1113 = (int16_t)(_gray_stencil_29);
  int16_t _1114 = _1112 + _1113;
  int16_t _1115 = (int16_t)(_gray_stencil_30);
  int16_t _1116 = _1114 + _1115;
  return _1116;
}

//store is: grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 2)) = ((((((grad_y_unclamp.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 2)) + (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), ((grad_y_unclamp_s1_y + -2) + 4)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 2)))) - (int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 3), ((grad_y_unclamp_s1_y + -2) + 2)))*(int16)2)) - int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 4), ((grad_y_unclamp_s1_y + -2) + 2)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 2), ((grad_y_unclamp_s1_y + -2) + 4)))) + int16(gray.stencil(((grad_y_unclamp_s1_x_x*3) + 4), ((grad_y_unclamp_s1_y + -2) + 4))))
hw_uint<16> hcompute_grad_y_unclamp_stencil_5(hw_uint<16>& grad_y_unclamp_stencil, hw_uint<96>& gray_stencil) {
  int16_t _grad_y_unclamp_stencil_3 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  uint16_t _gray_stencil_31 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_32 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_33 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_34 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_35 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_36 = (uint16_t) gray_stencil.extract<80, 95>();

  int16_t _1161 = (int16_t)(_gray_stencil_31);
  int16_t _1162 = (int16_t)(2);
  int16_t _1163 = _1161 * _1162;
  int16_t _1164 = _grad_y_unclamp_stencil_3 + _1163;
  int16_t _1165 = (int16_t)(_gray_stencil_32);
  int16_t _1166 = _1164 - _1165;
  int16_t _1167 = (int16_t)(_gray_stencil_33);
  int16_t _1168 = _1167 * _1162;
  int16_t _1169 = _1166 - _1168;
  int16_t _1170 = (int16_t)(_gray_stencil_34);
  int16_t _1171 = _1169 - _1170;
  int16_t _1172 = (int16_t)(_gray_stencil_35);
  int16_t _1173 = _1171 + _1172;
  int16_t _1174 = (int16_t)(_gray_stencil_36);
  int16_t _1175 = _1173 + _1174;
  return _1175;
}

//store is: lxy.stencil((lxy_s0_x_x*3), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil((lxy_s0_x_x*3), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lxy_s0_x_x*3), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_7 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_4 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1221 = (int16_t)(180);
  int16_t _1222 = min(_grad_x_unclamp_stencil_7, _1221);
  int16_t _1223 = (int16_t)(-180);
  int16_t _1224 = max(_1222, _1223);
  int16_t _1225 = min(_grad_y_unclamp_stencil_4, _1221);
  int16_t _1226 = max(_1225, _1223);
  int16_t _1227 = _1224 * _1226;
  int16_t _1228 = (int16_t)(6);
  int16_t _1229 = _1227 >> _1228;
  return _1229;
}

//store is: lxy.stencil(((lxy_s0_x_x*3) + 1), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*3) + 1), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*3) + 1), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_1(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_8 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_5 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1253 = (int16_t)(180);
  int16_t _1254 = min(_grad_x_unclamp_stencil_8, _1253);
  int16_t _1255 = (int16_t)(-180);
  int16_t _1256 = max(_1254, _1255);
  int16_t _1257 = min(_grad_y_unclamp_stencil_5, _1253);
  int16_t _1258 = max(_1257, _1255);
  int16_t _1259 = _1256 * _1258;
  int16_t _1260 = (int16_t)(6);
  int16_t _1261 = _1259 >> _1260;
  return _1261;
}

//store is: lxy.stencil(((lxy_s0_x_x*3) + 2), ((lxy_s0_y + -2) + 2)) = ((max(min(grad_x_unclamp.stencil(((lxy_s0_x_x*3) + 2), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lxy_s0_x_x*3) + 2), ((lxy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lxy_stencil_2(hw_uint<16>& grad_x_unclamp_stencil, hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_x_unclamp_stencil_9 = (int16_t) grad_x_unclamp_stencil.extract<0, 15>();

  int16_t _grad_y_unclamp_stencil_6 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1286 = (int16_t)(180);
  int16_t _1287 = min(_grad_x_unclamp_stencil_9, _1286);
  int16_t _1288 = (int16_t)(-180);
  int16_t _1289 = max(_1287, _1288);
  int16_t _1290 = min(_grad_y_unclamp_stencil_6, _1286);
  int16_t _1291 = max(_1290, _1288);
  int16_t _1292 = _1289 * _1291;
  int16_t _1293 = (int16_t)(6);
  int16_t _1294 = _1292 >> _1293;
  return _1294;
}

//store is: lgxy.stencil((lgxy_s0_x_x*3), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil() {
  int16_t _1320 = (int16_t)(0);
  return _1320;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 1), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_1() {
  int16_t _1326 = (int16_t)(0);
  return _1326;
}

//store is: lgxy.stencil(((lgxy_s0_x_x*3) + 2), ((lgxy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgxy_stencil_2() {
  int16_t _1333 = (int16_t)(0);
  return _1333;
}

//store is: lgxy.stencil((lgxy_s1_x_x*3), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil((lgxy_s1_x_x*3), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil((lgxy_s1_x_x*3), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil((lgxy_s1_x_x*3), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil((lgxy_s1_x_x*3), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_3(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
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

  int16_t _1341 = _lxy_stencil_8 + _lxy_stencil_9;
  int16_t _1342 = _lxy_stencil_7 + _1341;
  int16_t _1343 = _lxy_stencil_6 + _1342;
  int16_t _1344 = _lxy_stencil_5 + _1343;
  int16_t _1345 = _lxy_stencil_4 + _1344;
  int16_t _1346 = _lxy_stencil_3 + _1345;
  int16_t _1347 = _lxy_stencil_2 + _1346;
  int16_t _1348 = _lgxy_stencil_1 + _1347;
  int16_t _1349 = _lxy_stencil_1 + _1348;
  return _1349;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 1), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_4(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_2 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_10 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_11 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_12 = (int16_t) lxy_stencil.extract<32, 47>();
  int16_t _lxy_stencil_13 = (int16_t) lxy_stencil.extract<48, 63>();
  int16_t _lxy_stencil_14 = (int16_t) lxy_stencil.extract<64, 79>();
  int16_t _lxy_stencil_15 = (int16_t) lxy_stencil.extract<80, 95>();
  int16_t _lxy_stencil_16 = (int16_t) lxy_stencil.extract<96, 111>();
  int16_t _lxy_stencil_17 = (int16_t) lxy_stencil.extract<112, 127>();
  int16_t _lxy_stencil_18 = (int16_t) lxy_stencil.extract<128, 143>();

  int16_t _1385 = _lxy_stencil_17 + _lxy_stencil_18;
  int16_t _1386 = _lxy_stencil_16 + _1385;
  int16_t _1387 = _lxy_stencil_15 + _1386;
  int16_t _1388 = _lxy_stencil_14 + _1387;
  int16_t _1389 = _lxy_stencil_13 + _1388;
  int16_t _1390 = _lxy_stencil_12 + _1389;
  int16_t _1391 = _lxy_stencil_11 + _1390;
  int16_t _1392 = _lgxy_stencil_2 + _1391;
  int16_t _1393 = _lxy_stencil_10 + _1392;
  return _1393;
}

//store is: lgxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 1)) = (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 1)) + (lgxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 4), ((lgxy_s1_y + -1) + 1)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 3), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 4), ((lgxy_s1_y + -1) + 2)) + (lxy.stencil(((lgxy_s1_x_x*3) + 2), ((lgxy_s1_y + -1) + 3)) + (lxy.stencil(((lgxy_s1_x_x*3) + 4), ((lgxy_s1_y + -1) + 3)) + lxy.stencil(((lgxy_s1_x_x*3) + 3), ((lgxy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgxy_stencil_5(hw_uint<16>& lgxy_stencil, hw_uint<144>& lxy_stencil) {
  int16_t _lgxy_stencil_3 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lxy_stencil_19 = (int16_t) lxy_stencil.extract<0, 15>();
  int16_t _lxy_stencil_20 = (int16_t) lxy_stencil.extract<16, 31>();
  int16_t _lxy_stencil_21 = (int16_t) lxy_stencil.extract<32, 47>();
  int16_t _lxy_stencil_22 = (int16_t) lxy_stencil.extract<48, 63>();
  int16_t _lxy_stencil_23 = (int16_t) lxy_stencil.extract<64, 79>();
  int16_t _lxy_stencil_24 = (int16_t) lxy_stencil.extract<80, 95>();
  int16_t _lxy_stencil_25 = (int16_t) lxy_stencil.extract<96, 111>();
  int16_t _lxy_stencil_26 = (int16_t) lxy_stencil.extract<112, 127>();
  int16_t _lxy_stencil_27 = (int16_t) lxy_stencil.extract<128, 143>();

  int16_t _1430 = _lxy_stencil_26 + _lxy_stencil_27;
  int16_t _1431 = _lxy_stencil_25 + _1430;
  int16_t _1432 = _lxy_stencil_24 + _1431;
  int16_t _1433 = _lxy_stencil_23 + _1432;
  int16_t _1434 = _lxy_stencil_22 + _1433;
  int16_t _1435 = _lxy_stencil_21 + _1434;
  int16_t _1436 = _lxy_stencil_20 + _1435;
  int16_t _1437 = _lgxy_stencil_3 + _1436;
  int16_t _1438 = _lxy_stencil_19 + _1437;
  return _1438;
}

//store is: lyy.stencil((lyy_s0_x_x*3), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil((lyy_s0_x_x*3), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil((lyy_s0_x_x*3), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_2(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_7 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1476 = (int16_t)(180);
  int16_t _1477 = min(_grad_y_unclamp_stencil_7, _1476);
  int16_t _1478 = (int16_t)(-180);
  int16_t _1479 = max(_1477, _1478);
  int16_t _1480 = _1479 * _1479;
  int16_t _1481 = (int16_t)(6);
  int16_t _1482 = _1480 >> _1481;
  return _1482;
}

//store is: lyy.stencil(((lyy_s0_x_x*3) + 1), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 1), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 1), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_3(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_8 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1501 = (int16_t)(180);
  int16_t _1502 = min(_grad_y_unclamp_stencil_8, _1501);
  int16_t _1503 = (int16_t)(-180);
  int16_t _1504 = max(_1502, _1503);
  int16_t _1505 = _1504 * _1504;
  int16_t _1506 = (int16_t)(6);
  int16_t _1507 = _1505 >> _1506;
  return _1507;
}

//store is: lyy.stencil(((lyy_s0_x_x*3) + 2), ((lyy_s0_y + -2) + 2)) = ((max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 2), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180)*max(min(grad_y_unclamp.stencil(((lyy_s0_x_x*3) + 2), ((lyy_s0_y + -2) + 2)), (int16)180), (int16)-180))/(int16)64)
hw_uint<16> hcompute_lyy_stencil_4(hw_uint<16>& grad_y_unclamp_stencil) {
  int16_t _grad_y_unclamp_stencil_9 = (int16_t) grad_y_unclamp_stencil.extract<0, 15>();

  int16_t _1527 = (int16_t)(180);
  int16_t _1528 = min(_grad_y_unclamp_stencil_9, _1527);
  int16_t _1529 = (int16_t)(-180);
  int16_t _1530 = max(_1528, _1529);
  int16_t _1531 = _1530 * _1530;
  int16_t _1532 = (int16_t)(6);
  int16_t _1533 = _1531 >> _1532;
  return _1533;
}

//store is: lgyy.stencil((lgyy_s0_x_x*3), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil() {
  int16_t _1554 = (int16_t)(0);
  return _1554;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 1), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_1() {
  int16_t _1560 = (int16_t)(0);
  return _1560;
}

//store is: lgyy.stencil(((lgyy_s0_x_x*3) + 2), ((lgyy_s0_y + -1) + 1)) = (int16)0
hw_uint<16> hcompute_lgyy_stencil_2() {
  int16_t _1567 = (int16_t)(0);
  return _1567;
}

//store is: lgyy.stencil((lgyy_s1_x_x*3), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil((lgyy_s1_x_x*3), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil((lgyy_s1_x_x*3), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil((lgyy_s1_x_x*3), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil((lgyy_s1_x_x*3), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_3(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
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

  int16_t _1575 = _lyy_stencil_8 + _lyy_stencil_9;
  int16_t _1576 = _lyy_stencil_7 + _1575;
  int16_t _1577 = _lyy_stencil_6 + _1576;
  int16_t _1578 = _lyy_stencil_5 + _1577;
  int16_t _1579 = _lyy_stencil_4 + _1578;
  int16_t _1580 = _lyy_stencil_3 + _1579;
  int16_t _1581 = _lyy_stencil_2 + _1580;
  int16_t _1582 = _lgyy_stencil_1 + _1581;
  int16_t _1583 = _lyy_stencil_1 + _1582;
  return _1583;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 1), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_4(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_2 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_10 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_11 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_12 = (int16_t) lyy_stencil.extract<32, 47>();
  int16_t _lyy_stencil_13 = (int16_t) lyy_stencil.extract<48, 63>();
  int16_t _lyy_stencil_14 = (int16_t) lyy_stencil.extract<64, 79>();
  int16_t _lyy_stencil_15 = (int16_t) lyy_stencil.extract<80, 95>();
  int16_t _lyy_stencil_16 = (int16_t) lyy_stencil.extract<96, 111>();
  int16_t _lyy_stencil_17 = (int16_t) lyy_stencil.extract<112, 127>();
  int16_t _lyy_stencil_18 = (int16_t) lyy_stencil.extract<128, 143>();

  int16_t _1619 = _lyy_stencil_17 + _lyy_stencil_18;
  int16_t _1620 = _lyy_stencil_16 + _1619;
  int16_t _1621 = _lyy_stencil_15 + _1620;
  int16_t _1622 = _lyy_stencil_14 + _1621;
  int16_t _1623 = _lyy_stencil_13 + _1622;
  int16_t _1624 = _lyy_stencil_12 + _1623;
  int16_t _1625 = _lyy_stencil_11 + _1624;
  int16_t _1626 = _lgyy_stencil_2 + _1625;
  int16_t _1627 = _lyy_stencil_10 + _1626;
  return _1627;
}

//store is: lgyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 1)) = (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 1)) + (lgyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 4), ((lgyy_s1_y + -1) + 1)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 3), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 4), ((lgyy_s1_y + -1) + 2)) + (lyy.stencil(((lgyy_s1_x_x*3) + 2), ((lgyy_s1_y + -1) + 3)) + (lyy.stencil(((lgyy_s1_x_x*3) + 4), ((lgyy_s1_y + -1) + 3)) + lyy.stencil(((lgyy_s1_x_x*3) + 3), ((lgyy_s1_y + -1) + 3)))))))))))
hw_uint<16> hcompute_lgyy_stencil_5(hw_uint<16>& lgyy_stencil, hw_uint<144>& lyy_stencil) {
  int16_t _lgyy_stencil_3 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _lyy_stencil_19 = (int16_t) lyy_stencil.extract<0, 15>();
  int16_t _lyy_stencil_20 = (int16_t) lyy_stencil.extract<16, 31>();
  int16_t _lyy_stencil_21 = (int16_t) lyy_stencil.extract<32, 47>();
  int16_t _lyy_stencil_22 = (int16_t) lyy_stencil.extract<48, 63>();
  int16_t _lyy_stencil_23 = (int16_t) lyy_stencil.extract<64, 79>();
  int16_t _lyy_stencil_24 = (int16_t) lyy_stencil.extract<80, 95>();
  int16_t _lyy_stencil_25 = (int16_t) lyy_stencil.extract<96, 111>();
  int16_t _lyy_stencil_26 = (int16_t) lyy_stencil.extract<112, 127>();
  int16_t _lyy_stencil_27 = (int16_t) lyy_stencil.extract<128, 143>();

  int16_t _1664 = _lyy_stencil_26 + _lyy_stencil_27;
  int16_t _1665 = _lyy_stencil_25 + _1664;
  int16_t _1666 = _lyy_stencil_24 + _1665;
  int16_t _1667 = _lyy_stencil_23 + _1666;
  int16_t _1668 = _lyy_stencil_22 + _1667;
  int16_t _1669 = _lyy_stencil_21 + _1668;
  int16_t _1670 = _lyy_stencil_20 + _1669;
  int16_t _1671 = _lgyy_stencil_3 + _1670;
  int16_t _1672 = _lyy_stencil_19 + _1671;
  return _1672;
}

//store is: cim.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil((cim_s0_x_x*3), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_4 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_4 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_4 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _1710 = (int16_t)(6);
  int16_t _1711 = _lgxx_stencil_4 >> _1710;
  int16_t _1712 = _lgyy_stencil_4 >> _1710;
  int16_t _1713 = _1711 * _1712;
  int16_t _1714 = _lgxy_stencil_4 >> _1710;
  int16_t _1715 = _1714 * _1714;
  int16_t _1716 = _1713 - _1715;
  int16_t _1717 = _1711 + _1712;
  int16_t _1718 = _1717 * _1717;
  int16_t _1719 = (int16_t)(4);
  int16_t _1720 = _1718 >> _1719;
  int16_t _1721 = _1716 - _1720;
  return _1721;
}

//store is: cim.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 1), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_1(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_5 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_5 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_5 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _1752 = (int16_t)(6);
  int16_t _1753 = _lgxx_stencil_5 >> _1752;
  int16_t _1754 = _lgyy_stencil_5 >> _1752;
  int16_t _1755 = _1753 * _1754;
  int16_t _1756 = _lgxy_stencil_5 >> _1752;
  int16_t _1757 = _1756 * _1756;
  int16_t _1758 = _1755 - _1757;
  int16_t _1759 = _1753 + _1754;
  int16_t _1760 = _1759 * _1759;
  int16_t _1761 = (int16_t)(4);
  int16_t _1762 = _1760 >> _1761;
  int16_t _1763 = _1758 - _1762;
  return _1763;
}

//store is: cim.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1)) = ((((lgxx.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64)*(lgyy.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64)) - ((lgxy.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64)*(lgxy.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64))) - ((((lgxx.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64))*((lgxx.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64) + (lgyy.stencil(((cim_s0_x_x*3) + 2), ((cim_s0_y + -1) + 1))/(int16)64)))/(int16)16))
hw_uint<16> hcompute_cim_stencil_2(hw_uint<16>& lgxx_stencil, hw_uint<16>& lgxy_stencil, hw_uint<16>& lgyy_stencil) {
  int16_t _lgxx_stencil_6 = (int16_t) lgxx_stencil.extract<0, 15>();

  int16_t _lgxy_stencil_6 = (int16_t) lgxy_stencil.extract<0, 15>();

  int16_t _lgyy_stencil_6 = (int16_t) lgyy_stencil.extract<0, 15>();

  int16_t _1795 = (int16_t)(6);
  int16_t _1796 = _lgxx_stencil_6 >> _1795;
  int16_t _1797 = _lgyy_stencil_6 >> _1795;
  int16_t _1798 = _1796 * _1797;
  int16_t _1799 = _lgxy_stencil_6 >> _1795;
  int16_t _1800 = _1799 * _1799;
  int16_t _1801 = _1798 - _1800;
  int16_t _1802 = _1796 + _1797;
  int16_t _1803 = _1802 * _1802;
  int16_t _1804 = (int16_t)(4);
  int16_t _1805 = _1803 >> _1804;
  int16_t _1806 = _1801 - _1805;
  return _1806;
}

//store is: hw_output.glb.stencil((hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil((hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil((hw_output_s0_x_xi_xi*3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)))), 255, 0))
hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_1 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_2 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_3 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_4 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_5 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_6 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_7 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_8 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_9 = (int16_t) cim_stencil.extract<128, 143>();

  bool _1838 = _cim_stencil_1 < _cim_stencil_2;
  bool _1839 = _cim_stencil_3 < _cim_stencil_2;
  bool _1840 = _1838 && _1839;
  bool _1841 = _cim_stencil_4 < _cim_stencil_2;
  bool _1842 = _1840 && _1841;
  bool _1843 = _cim_stencil_5 < _cim_stencil_2;
  bool _1844 = _1842 && _1843;
  bool _1845 = _cim_stencil_6 < _cim_stencil_2;
  bool _1846 = _1844 && _1845;
  bool _1847 = _cim_stencil_7 < _cim_stencil_2;
  bool _1848 = _1846 && _1847;
  bool _1849 = _cim_stencil_8 < _cim_stencil_2;
  bool _1850 = _1848 && _1849;
  bool _1851 = _cim_stencil_9 < _cim_stencil_2;
  bool _1852 = _1850 && _1851;
  int16_t _1853 = (int16_t)(1);
  bool _1854 = _1853 <= _cim_stencil_2;
  bool _1855 = _1852 && _1854;
  int32_t _1856 = (int32_t)(_1855 ? 255 : 0);
  int16_t _1857 = (int16_t)(_1856);
  return _1857;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 1), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)))), 255, 0))
hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_10 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_11 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_12 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_13 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_14 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_15 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_16 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_17 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_18 = (int16_t) cim_stencil.extract<128, 143>();

  bool _1912 = _cim_stencil_10 < _cim_stencil_11;
  bool _1913 = _cim_stencil_12 < _cim_stencil_11;
  bool _1914 = _1912 && _1913;
  bool _1915 = _cim_stencil_13 < _cim_stencil_11;
  bool _1916 = _1914 && _1915;
  bool _1917 = _cim_stencil_14 < _cim_stencil_11;
  bool _1918 = _1916 && _1917;
  bool _1919 = _cim_stencil_15 < _cim_stencil_11;
  bool _1920 = _1918 && _1919;
  bool _1921 = _cim_stencil_16 < _cim_stencil_11;
  bool _1922 = _1920 && _1921;
  bool _1923 = _cim_stencil_17 < _cim_stencil_11;
  bool _1924 = _1922 && _1923;
  bool _1925 = _cim_stencil_18 < _cim_stencil_11;
  bool _1926 = _1924 && _1925;
  int16_t _1927 = (int16_t)(1);
  bool _1928 = _1927 <= _cim_stencil_11;
  bool _1929 = _1926 && _1928;
  int32_t _1930 = (int32_t)(_1929 ? 255 : 0);
  int16_t _1931 = (int16_t)(_1930);
  return _1931;
}

//store is: hw_output.glb.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) = int16(select((((((((((cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 4), hw_output_s0_y_yi) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 4), (hw_output_s0_y_yi + 1)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 2), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && (cim.stencil(((hw_output_s0_x_xi_xi*3) + 4), (hw_output_s0_y_yi + 2)) < cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))) && ((int16)1 <= cim.stencil(((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 1)))), 255, 0))
hw_uint<16> hcompute_hw_output_glb_stencil_2(hw_uint<144>& cim_stencil) {
  int16_t _cim_stencil_19 = (int16_t) cim_stencil.extract<0, 15>();
  int16_t _cim_stencil_20 = (int16_t) cim_stencil.extract<16, 31>();
  int16_t _cim_stencil_21 = (int16_t) cim_stencil.extract<32, 47>();
  int16_t _cim_stencil_22 = (int16_t) cim_stencil.extract<48, 63>();
  int16_t _cim_stencil_23 = (int16_t) cim_stencil.extract<64, 79>();
  int16_t _cim_stencil_24 = (int16_t) cim_stencil.extract<80, 95>();
  int16_t _cim_stencil_25 = (int16_t) cim_stencil.extract<96, 111>();
  int16_t _cim_stencil_26 = (int16_t) cim_stencil.extract<112, 127>();
  int16_t _cim_stencil_27 = (int16_t) cim_stencil.extract<128, 143>();

  bool _1987 = _cim_stencil_19 < _cim_stencil_20;
  bool _1988 = _cim_stencil_21 < _cim_stencil_20;
  bool _1989 = _1987 && _1988;
  bool _1990 = _cim_stencil_22 < _cim_stencil_20;
  bool _1991 = _1989 && _1990;
  bool _1992 = _cim_stencil_23 < _cim_stencil_20;
  bool _1993 = _1991 && _1992;
  bool _1994 = _cim_stencil_24 < _cim_stencil_20;
  bool _1995 = _1993 && _1994;
  bool _1996 = _cim_stencil_25 < _cim_stencil_20;
  bool _1997 = _1995 && _1996;
  bool _1998 = _cim_stencil_26 < _cim_stencil_20;
  bool _1999 = _1997 && _1998;
  bool _2000 = _cim_stencil_27 < _cim_stencil_20;
  bool _2001 = _1999 && _2000;
  int16_t _2002 = (int16_t)(1);
  bool _2003 = _2002 <= _cim_stencil_20;
  bool _2004 = _2001 && _2003;
  int32_t _2005 = (int32_t)(_2004 ? 255 : 0);
  int16_t _2006 = (int16_t)(_2005);
  return _2006;
}

//store is: hw_output_global_wrapper.stencil(((hw_output_global_wrapper_s0_x_xi_xi + (0*40))*3), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil((hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*40))*3) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_2 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_2;
}

//store is: hw_output_global_wrapper.stencil((((hw_output_global_wrapper_s0_x_xi_xi + (0*40))*3) + 2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_2(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_3 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_3;
}

