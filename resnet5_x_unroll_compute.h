#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil((input_glb_s0_z_z*2), input_glb_s0_x, input_glb_s0_y) = input_host.stencil((input_glb_s0_z_z*2), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*2) + 1), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*2) + 1), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_1(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_2 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_2;
}

//store is: kernel_glb.stencil((kernel_glb_s0_z_z*2), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil((kernel_glb_s0_z_z*2), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: kernel_glb.stencil(((kernel_glb_s0_z_z*2) + 1), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(((kernel_glb_s0_z_z*2) + 1), kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil_1(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_2 = (int16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_2;
}

//store is: output_cgra.stencil((output_cgra_s0_w_w*8), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _697 = (int16_t)(0);
  return _697;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 1), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _701 = (int16_t)(0);
  return _701;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 2), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _706 = (int16_t)(0);
  return _706;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 3), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _711 = (int16_t)(0);
  return _711;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 4), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _716 = (int16_t)(0);
  return _716;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 5), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _721 = (int16_t)(0);
  return _721;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 6), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _726 = (int16_t)(0);
  return _726;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 7), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _731 = (int16_t)(0);
  return _731;
}

//store is: input_cgra.stencil((input_cgra_s0_z_z_cgra_z_cgra*2), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil((((output_cgra_s1_r_z_rz_glb*4) + input_cgra_s0_z_z_cgra_z_cgra)*2), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*2) + 1), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*4) + input_cgra_s0_z_z_cgra_z_cgra)*2) + 1), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_1(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_2 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_2;
}

//store is: kernel_cgra.stencil((kernel_cgra_s0_z_z_cgra_z_cgra*2), kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil((((output_cgra_s1_r_z_rz_glb*4) + kernel_cgra_s0_z_z_cgra_z_cgra)*2), ((output_glb_s0_w_w_glb*64) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: kernel_cgra.stencil(((kernel_cgra_s0_z_z_cgra_z_cgra*2) + 1), kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((((output_cgra_s1_r_z_rz_glb*4) + kernel_cgra_s0_z_z_cgra_z_cgra)*2) + 1), ((output_glb_s0_w_w_glb*64) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil_1(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_2 = (int16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_2;
}

//store is: output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_2 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_3 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_4 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_5 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_6 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_7 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_8 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_1 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_2 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_3 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_4 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_5 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_6 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_7 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_8 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_1 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _769 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _770 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _771 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _772 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _773 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _774 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _775 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _776 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _777 = _775 + _776;
  int16_t _778 = _774 + _777;
  int16_t _779 = _773 + _778;
  int16_t _780 = _772 + _779;
  int16_t _781 = _771 + _780;
  int16_t _782 = _770 + _781;
  int16_t _783 = _output_cgra_stencil_1 + _782;
  int16_t _784 = _769 + _783;
  return _784;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_10 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_11 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_12 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_13 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_14 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_15 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_16 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_9 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_10 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_11 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_12 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_13 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_14 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_15 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_16 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_9 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_2 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _837 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _838 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _839 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _840 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _841 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _842 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _843 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _844 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _845 = _843 + _844;
  int16_t _846 = _842 + _845;
  int16_t _847 = _841 + _846;
  int16_t _848 = _840 + _847;
  int16_t _849 = _839 + _848;
  int16_t _850 = _838 + _849;
  int16_t _851 = _output_cgra_stencil_2 + _850;
  int16_t _852 = _837 + _851;
  return _852;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_17 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_18 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_19 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_20 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_21 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_22 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_23 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_24 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_17 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_18 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_19 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_20 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_21 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_22 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_23 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_24 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_3 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _906 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _907 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _908 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _909 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _910 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _911 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _912 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _913 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _914 = _912 + _913;
  int16_t _915 = _911 + _914;
  int16_t _916 = _910 + _915;
  int16_t _917 = _909 + _916;
  int16_t _918 = _908 + _917;
  int16_t _919 = _907 + _918;
  int16_t _920 = _output_cgra_stencil_3 + _919;
  int16_t _921 = _906 + _920;
  return _921;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_25 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_26 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_27 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_28 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_29 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_30 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_31 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_32 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_25 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_26 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_27 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_28 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_29 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_30 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_31 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_32 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_4 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _975 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _976 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _977 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _978 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _979 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _980 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _981 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _982 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _983 = _981 + _982;
  int16_t _984 = _980 + _983;
  int16_t _985 = _979 + _984;
  int16_t _986 = _978 + _985;
  int16_t _987 = _977 + _986;
  int16_t _988 = _976 + _987;
  int16_t _989 = _output_cgra_stencil_4 + _988;
  int16_t _990 = _975 + _989;
  return _990;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_33 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_34 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_35 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_36 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_37 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_38 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_39 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_40 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_33 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_34 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_35 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_36 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_37 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_38 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_39 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_40 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_5 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1044 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1045 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1046 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1047 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1048 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1049 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1050 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1051 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1052 = _1050 + _1051;
  int16_t _1053 = _1049 + _1052;
  int16_t _1054 = _1048 + _1053;
  int16_t _1055 = _1047 + _1054;
  int16_t _1056 = _1046 + _1055;
  int16_t _1057 = _1045 + _1056;
  int16_t _1058 = _output_cgra_stencil_5 + _1057;
  int16_t _1059 = _1044 + _1058;
  return _1059;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_41 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_42 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_43 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_44 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_45 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_46 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_47 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_48 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_41 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_42 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_43 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_44 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_45 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_46 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_47 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_48 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_6 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1113 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1114 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1115 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1116 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1117 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1118 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1119 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1120 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1121 = _1119 + _1120;
  int16_t _1122 = _1118 + _1121;
  int16_t _1123 = _1117 + _1122;
  int16_t _1124 = _1116 + _1123;
  int16_t _1125 = _1115 + _1124;
  int16_t _1126 = _1114 + _1125;
  int16_t _1127 = _output_cgra_stencil_6 + _1126;
  int16_t _1128 = _1113 + _1127;
  return _1128;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_49 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_50 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_51 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_52 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_53 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_54 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_55 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_56 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_49 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_50 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_51 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_52 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_53 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_54 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_55 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_56 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_7 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1182 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1183 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1184 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1185 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1186 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1187 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1188 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1189 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1190 = _1188 + _1189;
  int16_t _1191 = _1187 + _1190;
  int16_t _1192 = _1186 + _1191;
  int16_t _1193 = _1185 + _1192;
  int16_t _1194 = _1184 + _1193;
  int16_t _1195 = _1183 + _1194;
  int16_t _1196 = _output_cgra_stencil_7 + _1195;
  int16_t _1197 = _1182 + _1196;
  return _1197;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_57 = (int16_t) input_cgra_stencil.extract<0, 15>();
  int16_t _input_cgra_stencil_58 = (int16_t) input_cgra_stencil.extract<16, 31>();
  int16_t _input_cgra_stencil_59 = (int16_t) input_cgra_stencil.extract<32, 47>();
  int16_t _input_cgra_stencil_60 = (int16_t) input_cgra_stencil.extract<48, 63>();
  int16_t _input_cgra_stencil_61 = (int16_t) input_cgra_stencil.extract<64, 79>();
  int16_t _input_cgra_stencil_62 = (int16_t) input_cgra_stencil.extract<80, 95>();
  int16_t _input_cgra_stencil_63 = (int16_t) input_cgra_stencil.extract<96, 111>();
  int16_t _input_cgra_stencil_64 = (int16_t) input_cgra_stencil.extract<112, 127>();

  int16_t _kernel_cgra_stencil_57 = (int16_t) kernel_cgra_stencil.extract<0, 15>();
  int16_t _kernel_cgra_stencil_58 = (int16_t) kernel_cgra_stencil.extract<16, 31>();
  int16_t _kernel_cgra_stencil_59 = (int16_t) kernel_cgra_stencil.extract<32, 47>();
  int16_t _kernel_cgra_stencil_60 = (int16_t) kernel_cgra_stencil.extract<48, 63>();
  int16_t _kernel_cgra_stencil_61 = (int16_t) kernel_cgra_stencil.extract<64, 79>();
  int16_t _kernel_cgra_stencil_62 = (int16_t) kernel_cgra_stencil.extract<80, 95>();
  int16_t _kernel_cgra_stencil_63 = (int16_t) kernel_cgra_stencil.extract<96, 111>();
  int16_t _kernel_cgra_stencil_64 = (int16_t) kernel_cgra_stencil.extract<112, 127>();

  int16_t _output_cgra_stencil_8 = (int16_t) output_cgra_stencil.extract<0, 15>();

  int16_t _1251 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1252 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1253 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1254 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1255 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1256 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1257 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1258 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1259 = _1257 + _1258;
  int16_t _1260 = _1256 + _1259;
  int16_t _1261 = _1255 + _1260;
  int16_t _1262 = _1254 + _1261;
  int16_t _1263 = _1253 + _1262;
  int16_t _1264 = _1252 + _1263;
  int16_t _1265 = _output_cgra_stencil_8 + _1264;
  int16_t _1266 = _1251 + _1265;
  return _1266;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*64) + output_glb_s0_w_w_cgra), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_9 = (int16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_9;
}

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) output_glb_stencil.extract<0, 15>();

  return _output_glb_stencil_1;
}

