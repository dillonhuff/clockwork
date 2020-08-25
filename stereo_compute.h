#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_left_input_global_wrapper.stencil(hw_left_input_global_wrapper_s0_x, hw_left_input_global_wrapper_s0_y) = hw_left_input.stencil(hw_left_input_global_wrapper_s0_x, hw_left_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_left_input_global_wrapper_stencil(hw_uint<16>& hw_left_input_stencil) {
  uint16_t _hw_left_input_stencil_1 = (uint16_t) hw_left_input_stencil.extract<0, 15>();

  return _hw_left_input_stencil_1;
}

//store is: hw_left_input_copy.stencil(hw_left_input_copy_s0_x, hw_left_input_copy_s0_y) = hw_left_input_global_wrapper.stencil(hw_left_input_copy_s0_x, hw_left_input_copy_s0_y)
hw_uint<16> hcompute_hw_left_input_copy_stencil(hw_uint<16>& hw_left_input_global_wrapper_stencil) {
  uint16_t _hw_left_input_global_wrapper_stencil_1 = (uint16_t) hw_left_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_left_input_global_wrapper_stencil_1;
}

//store is: hw_right_input_global_wrapper.stencil(hw_right_input_global_wrapper_s0_x, hw_right_input_global_wrapper_s0_y) = hw_right_input.stencil(hw_right_input_global_wrapper_s0_x, hw_right_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_right_input_global_wrapper_stencil(hw_uint<16>& hw_right_input_stencil) {
  uint16_t _hw_right_input_stencil_1 = (uint16_t) hw_right_input_stencil.extract<0, 15>();

  return _hw_right_input_stencil_1;
}

//store is: hw_right_input_copy.stencil(hw_right_input_copy_s0_x, hw_right_input_copy_s0_y) = hw_right_input_global_wrapper.stencil(hw_right_input_copy_s0_x, hw_right_input_copy_s0_y)
hw_uint<16> hcompute_hw_right_input_copy_stencil(hw_uint<16>& hw_right_input_global_wrapper_stencil) {
  uint16_t _hw_right_input_global_wrapper_stencil_1 = (uint16_t) hw_right_input_global_wrapper_stencil.extract<0, 15>();

  return _hw_right_input_global_wrapper_stencil_1;
}

//store is: SAD.stencil(SAD_s0_x, SAD_s0_y, SAD_s0_c) = (uint16)0
hw_uint<16> hcompute_SAD_stencil() {
  uint16_t _690 = (uint16_t)(0);
  return _690;
}

//store is: SAD.stencil(SAD_s1_x, SAD_s1_y, SAD_s1_c) = (SAD.stencil(SAD_s1_x, SAD_s1_y, SAD_s1_c) + absd(hw_right_input_copy.stencil((SAD_s1_win_x + SAD_s1_x), (SAD_s1_win_y + SAD_s1_y)), hw_left_input_copy.stencil((SAD_s1_win_x + ((SAD_s1_c + SAD_s1_x) + 5)), (SAD_s1_win_y + SAD_s1_y))))
hw_uint<16> hcompute_SAD_stencil_1(hw_uint<16>& SAD_stencil, hw_uint<16>& hw_left_input_copy_stencil, hw_uint<16>& hw_right_input_copy_stencil) {
  uint16_t _SAD_stencil_1 = (uint16_t) SAD_stencil.extract<0, 15>();

  uint16_t _hw_left_input_copy_stencil_1 = (uint16_t) hw_left_input_copy_stencil.extract<0, 15>();

  uint16_t _hw_right_input_copy_stencil_1 = (uint16_t) hw_right_input_copy_stencil.extract<0, 15>();

  uint16_t _693 = _hw_left_input_copy_stencil_1 - _hw_right_input_copy_stencil_1;
  uint16_t _694 = _hw_right_input_copy_stencil_1 - _hw_left_input_copy_stencil_1;
  bool _695 = _hw_right_input_copy_stencil_1 < _hw_left_input_copy_stencil_1;
  uint16_t _696 = (uint16_t)(_695 ? _693 : _694);
  uint16_t _697 = _696;
  uint16_t _698 = _SAD_stencil_1 + _697;
  return _698;
}

//store is: offset1.stencil(offset1_s0_x, offset1_s0_y) = (uint16)65535
hw_uint<16> hcompute_offset1_stencil() {
  uint16_t _715 = (uint16_t)(65535);
  return _715;
}

//store is: offset1.stencil(offset1_s1_x, offset1_s1_y) = min(SAD.stencil(offset1_s1_x, offset1_s1_y, offset1_s1_search_x), offset1.stencil(offset1_s1_x, offset1_s1_y))
hw_uint<16> hcompute_offset1_stencil_1(hw_uint<16>& SAD_stencil, hw_uint<16>& offset1_stencil) {
  uint16_t _SAD_stencil_2 = (uint16_t) SAD_stencil.extract<0, 15>();

  uint16_t _offset1_stencil_1 = (uint16_t) offset1_stencil.extract<0, 15>();

  uint16_t _718 = min(_SAD_stencil_2, _offset1_stencil_1);
  return _718;
}

//store is: offset0.stencil(offset0_s0_x, offset0_s0_y) = (int8)0
hw_uint<8> hcompute_offset0_stencil() {
  int8_t _723 = (int8_t)(0);
  return _723;
}

//store is: offset0.stencil(offset0_s1_x, offset0_s1_y) = select((SAD.stencil(offset0_s1_x, offset0_s1_y, offset0_s1_search_x) == offset1.stencil(offset0_s1_x, offset0_s1_y)), int8(offset0_s1_search_x), offset0.stencil(offset0_s1_x, offset0_s1_y))
hw_uint<8> hcompute_offset0_stencil_1(hw_uint<16>& SAD_stencil, hw_uint<8>& offset0_stencil, hw_uint<16>& offset1_stencil, const int _offset0_s1_search_x) {
  uint16_t _SAD_stencil_3 = (uint16_t) SAD_stencil.extract<0, 15>();

  int8_t _offset0_stencil_1 = (int8_t) offset0_stencil.extract<0, 7>();

  uint16_t _offset1_stencil_2 = (uint16_t) offset1_stencil.extract<0, 15>();

  int8_t _726 = (int8_t)(_offset0_s1_search_x);
  bool _727 = _SAD_stencil_3 == _offset1_stencil_2;
  int8_t _728 = (int8_t)(_727 ? _726 : _offset0_stencil_1);
  return _728;
}

//store is: offset_out.stencil(offset_out_s0_x, offset_out_s0_y) = offset0.stencil(offset_out_s0_x, offset_out_s0_y)
hw_uint<8> hcompute_offset_out_stencil(hw_uint<8>& offset0_stencil) {
  int8_t _offset0_stencil_2 = (int8_t) offset0_stencil.extract<0, 7>();

  return _offset0_stencil_2;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi) = uint8(((uint16(offset_out.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi))*(uint16)255)/(uint16)10))
hw_uint<8> hcompute_hw_output_stencil(hw_uint<8>& offset_out_stencil) {
  int8_t _offset_out_stencil_1 = (int8_t) offset_out_stencil.extract<0, 7>();

  uint16_t _739 = (uint16_t)(_offset_out_stencil_1);
  uint16_t _740 = (uint16_t)(255);
  uint16_t _741 = _739 * _740;
  uint16_t _742 = (uint16_t)(10);
  uint16_t _743 = _741 / _742;
  uint8_t _744 = (uint8_t)(_743);
  return _744;
}

