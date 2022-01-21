#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil((input_glb_s0_z_z*4), input_glb_s0_x, input_glb_s0_y) = input_host.stencil((input_glb_s0_z_z*4), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*4) + 1), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*4) + 1), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_1(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_2 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_2;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*4) + 2), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*4) + 2), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_2(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_3 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_3;
}

//store is: input_glb.stencil(((input_glb_s0_z_z*4) + 3), input_glb_s0_x, input_glb_s0_y) = input_host.stencil(((input_glb_s0_z_z*4) + 3), input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil_3(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_4 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_4;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil((output_cgra_s0_w_w*8), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _695 = (int16_t)(0);
  return _695;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 1), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _699 = (int16_t)(0);
  return _699;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 2), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _704 = (int16_t)(0);
  return _704;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 3), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _709 = (int16_t)(0);
  return _709;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 4), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _714 = (int16_t)(0);
  return _714;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 5), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _719 = (int16_t)(0);
  return _719;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 6), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _724 = (int16_t)(0);
  return _724;
}

//store is: output_cgra.stencil(((output_cgra_s0_w_w*8) + 7), output_cgra_s0_x, output_cgra_s0_y) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _729 = (int16_t)(0);
  return _729;
}

//store is: input_cgra.stencil((input_cgra_s0_z_z_cgra_z_cgra*4), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil((((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra_z_cgra)*4), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*4) + 1), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra_z_cgra)*4) + 1), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_1(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_2 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_2;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*4) + 2), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra_z_cgra)*4) + 2), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_2(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_3 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_3;
}

//store is: input_cgra.stencil(((input_cgra_s0_z_z_cgra_z_cgra*4) + 3), input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra_z_cgra)*4) + 3), input_cgra_s0_x, input_cgra_s0_y)
hw_uint<16> hcompute_input_cgra_stencil_3(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_4 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_4;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((output_cgra_s1_r_z_rz_glb*32) + kernel_cgra_s0_z_z_cgra_z_cgra), ((output_glb_s0_w_w_glb*64) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil((output_cgra_s1_w_w*8), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_w_w*8), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _780 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _781 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _782 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _783 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _784 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _785 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _786 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _787 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _788 = _786 + _787;
  int16_t _789 = _785 + _788;
  int16_t _790 = _784 + _789;
  int16_t _791 = _783 + _790;
  int16_t _792 = _782 + _791;
  int16_t _793 = _781 + _792;
  int16_t _794 = _output_cgra_stencil_1 + _793;
  int16_t _795 = _780 + _794;
  return _795;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 1), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), ((output_cgra_s1_w_w*8) + 1), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _856 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _857 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _858 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _859 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _860 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _861 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _862 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _863 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _864 = _862 + _863;
  int16_t _865 = _861 + _864;
  int16_t _866 = _860 + _865;
  int16_t _867 = _859 + _866;
  int16_t _868 = _858 + _867;
  int16_t _869 = _857 + _868;
  int16_t _870 = _output_cgra_stencil_2 + _869;
  int16_t _871 = _856 + _870;
  return _871;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 2), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), ((output_cgra_s1_w_w*8) + 2), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _933 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _934 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _935 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _936 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _937 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _938 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _939 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _940 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _941 = _939 + _940;
  int16_t _942 = _938 + _941;
  int16_t _943 = _937 + _942;
  int16_t _944 = _936 + _943;
  int16_t _945 = _935 + _944;
  int16_t _946 = _934 + _945;
  int16_t _947 = _output_cgra_stencil_3 + _946;
  int16_t _948 = _933 + _947;
  return _948;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 3), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), ((output_cgra_s1_w_w*8) + 3), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _1010 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _1011 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _1012 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _1013 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _1014 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _1015 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _1016 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _1017 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _1018 = _1016 + _1017;
  int16_t _1019 = _1015 + _1018;
  int16_t _1020 = _1014 + _1019;
  int16_t _1021 = _1013 + _1020;
  int16_t _1022 = _1012 + _1021;
  int16_t _1023 = _1011 + _1022;
  int16_t _1024 = _output_cgra_stencil_4 + _1023;
  int16_t _1025 = _1010 + _1024;
  return _1025;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 4), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), ((output_cgra_s1_w_w*8) + 4), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _1087 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1088 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1089 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1090 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1091 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1092 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1093 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1094 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1095 = _1093 + _1094;
  int16_t _1096 = _1092 + _1095;
  int16_t _1097 = _1091 + _1096;
  int16_t _1098 = _1090 + _1097;
  int16_t _1099 = _1089 + _1098;
  int16_t _1100 = _1088 + _1099;
  int16_t _1101 = _output_cgra_stencil_5 + _1100;
  int16_t _1102 = _1087 + _1101;
  return _1102;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 5), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), ((output_cgra_s1_w_w*8) + 5), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _1164 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1165 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1166 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1167 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1168 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1169 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1170 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1171 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1172 = _1170 + _1171;
  int16_t _1173 = _1169 + _1172;
  int16_t _1174 = _1168 + _1173;
  int16_t _1175 = _1167 + _1174;
  int16_t _1176 = _1166 + _1175;
  int16_t _1177 = _1165 + _1176;
  int16_t _1178 = _output_cgra_stencil_6 + _1177;
  int16_t _1179 = _1164 + _1178;
  return _1179;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 6), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), ((output_cgra_s1_w_w*8) + 6), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _1241 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1242 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1243 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1244 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1245 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1246 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1247 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1248 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1249 = _1247 + _1248;
  int16_t _1250 = _1246 + _1249;
  int16_t _1251 = _1245 + _1250;
  int16_t _1252 = _1244 + _1251;
  int16_t _1253 = _1243 + _1252;
  int16_t _1254 = _1242 + _1253;
  int16_t _1255 = _output_cgra_stencil_7 + _1254;
  int16_t _1256 = _1241 + _1255;
  return _1256;
}

//store is: output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil((output_cgra_s1_r_z_rz_cgra_rz_cgra*8), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(((output_cgra_s1_w_w*8) + 7), output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 1), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 2), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 3), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 4), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 5), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 7), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), ((output_cgra_s1_w_w*8) + 7), output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(((output_cgra_s1_r_z_rz_cgra_rz_cgra*8) + 6), (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
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

  int16_t _1318 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1319 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1320 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1321 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1322 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1323 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1324 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1325 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1326 = _1324 + _1325;
  int16_t _1327 = _1323 + _1326;
  int16_t _1328 = _1322 + _1327;
  int16_t _1329 = _1321 + _1328;
  int16_t _1330 = _1320 + _1329;
  int16_t _1331 = _1319 + _1330;
  int16_t _1332 = _output_cgra_stencil_8 + _1331;
  int16_t _1333 = _1318 + _1332;
  return _1333;
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

