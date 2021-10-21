#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z, (kernel_glb_s0_w + 120), kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _688 = (int16_t)(0);
  return _688;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _697 = (int16_t)(0);
  return _697;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _706 = (int16_t)(0);
  return _706;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _715 = (int16_t)(0);
  return _715;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _724 = (int16_t)(0);
  return _724;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _733 = (int16_t)(0);
  return _733;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _742 = (int16_t)(0);
  return _742;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*14))) = (int16)0
hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _751 = (int16_t)(0);
  return _751;
}

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra, (((output_glb_s0_x_x_glb*28) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra), ((output_glb_s0_x_x_glb*28) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*28) + input_cgra_s0_y))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + kernel_cgra_s0_z_z_cgra), (((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra) + 120), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(0, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _779 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _780 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _781 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _782 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _783 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _784 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _785 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _786 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _787 = _785 + _786;
  int16_t _788 = _784 + _787;
  int16_t _789 = _783 + _788;
  int16_t _790 = _782 + _789;
  int16_t _791 = _781 + _790;
  int16_t _792 = _780 + _791;
  int16_t _793 = _output_cgra_stencil_1 + _792;
  int16_t _794 = _779 + _793;
  return _794;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(1, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _858 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _859 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _860 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _861 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _862 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _863 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _864 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _865 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _866 = _864 + _865;
  int16_t _867 = _863 + _866;
  int16_t _868 = _862 + _867;
  int16_t _869 = _861 + _868;
  int16_t _870 = _860 + _869;
  int16_t _871 = _859 + _870;
  int16_t _872 = _output_cgra_stencil_2 + _871;
  int16_t _873 = _858 + _872;
  return _873;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(2, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _937 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _938 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _939 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _940 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _941 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _942 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _943 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _944 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _945 = _943 + _944;
  int16_t _946 = _942 + _945;
  int16_t _947 = _941 + _946;
  int16_t _948 = _940 + _947;
  int16_t _949 = _939 + _948;
  int16_t _950 = _938 + _949;
  int16_t _951 = _output_cgra_stencil_3 + _950;
  int16_t _952 = _937 + _951;
  return _952;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(3, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _1016 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _1017 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _1018 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _1019 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _1020 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _1021 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _1022 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _1023 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _1024 = _1022 + _1023;
  int16_t _1025 = _1021 + _1024;
  int16_t _1026 = _1020 + _1025;
  int16_t _1027 = _1019 + _1026;
  int16_t _1028 = _1018 + _1027;
  int16_t _1029 = _1017 + _1028;
  int16_t _1030 = _output_cgra_stencil_4 + _1029;
  int16_t _1031 = _1016 + _1030;
  return _1031;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(4, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _1095 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _1096 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _1097 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _1098 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _1099 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _1100 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _1101 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _1102 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _1103 = _1101 + _1102;
  int16_t _1104 = _1100 + _1103;
  int16_t _1105 = _1099 + _1104;
  int16_t _1106 = _1098 + _1105;
  int16_t _1107 = _1097 + _1106;
  int16_t _1108 = _1096 + _1107;
  int16_t _1109 = _output_cgra_stencil_5 + _1108;
  int16_t _1110 = _1095 + _1109;
  return _1110;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(5, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _1174 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1175 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1176 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1177 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1178 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1179 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1180 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1181 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1182 = _1180 + _1181;
  int16_t _1183 = _1179 + _1182;
  int16_t _1184 = _1178 + _1183;
  int16_t _1185 = _1177 + _1184;
  int16_t _1186 = _1176 + _1185;
  int16_t _1187 = _1175 + _1186;
  int16_t _1188 = _output_cgra_stencil_6 + _1187;
  int16_t _1189 = _1174 + _1188;
  return _1189;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(6, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _1253 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1254 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1255 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1256 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1257 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1258 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1259 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1260 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1261 = _1259 + _1260;
  int16_t _1262 = _1258 + _1261;
  int16_t _1263 = _1257 + _1262;
  int16_t _1264 = _1256 + _1263;
  int16_t _1265 = _1255 + _1264;
  int16_t _1266 = _1254 + _1265;
  int16_t _1267 = _output_cgra_stencil_7 + _1266;
  int16_t _1268 = _1253 + _1267;
  return _1268;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(7, (((output_glb_s0_x_x_glb*14) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*14)), (((output_glb_s0_y_y_glb*14) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*14))) + ((kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(6, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (((((output_glb_s0_x_x_glb*14) + output_cgra_s1_x)*2) + output_cgra_s1_r_x) - (output_glb_s0_x_x_glb*28)), (((((output_glb_s0_y_y_glb*14) + output_cgra_s1_y)*2) + output_cgra_s1_r_y) - (output_glb_s0_y_y_glb*28))))))))))))
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

  int16_t _1332 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1333 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1334 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1335 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1336 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1337 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1338 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1339 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1340 = _1338 + _1339;
  int16_t _1341 = _1337 + _1340;
  int16_t _1342 = _1336 + _1341;
  int16_t _1343 = _1335 + _1342;
  int16_t _1344 = _1334 + _1343;
  int16_t _1345 = _1333 + _1344;
  int16_t _1346 = _output_cgra_stencil_8 + _1345;
  int16_t _1347 = _1332 + _1346;
  return _1347;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*8) + output_glb_s0_w_w_cgra), ((output_glb_s0_x_x_glb*14) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*14) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_9 = (int16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_9;
}

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) output_glb_stencil.extract<0, 15>();

  return _output_glb_stencil_1;
}

