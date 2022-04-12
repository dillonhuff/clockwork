#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z_z, input_glb_s0_x, input_glb_s0_y)
static hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  int16_t _input_host_stencil_1 = (int16_t) (input_host_stencil.extract<0, 15>());

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
static hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  int16_t _kernel_host_stencil_1 = (int16_t) (kernel_host_stencil.extract<0, 15>());

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(0, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil() {
  int16_t _690 = (int16_t)(0);
  return _690;
}

//store is: output_cgra.stencil(1, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil_1() {
  int16_t _693 = (int16_t)(0);
  return _693;
}

//store is: output_cgra.stencil(2, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil_2() {
  int16_t _696 = (int16_t)(0);
  return _696;
}

//store is: output_cgra.stencil(3, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil_3() {
  int16_t _699 = (int16_t)(0);
  return _699;
}

//store is: output_cgra.stencil(4, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil_4() {
  int16_t _702 = (int16_t)(0);
  return _702;
}

//store is: output_cgra.stencil(5, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil_5() {
  int16_t _705 = (int16_t)(0);
  return _705;
}

//store is: output_cgra.stencil(6, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil_6() {
  int16_t _708 = (int16_t)(0);
  return _708;
}

//store is: output_cgra.stencil(7, output_cgra_s0_x, output_cgra_s0_y) = (int16)0
static hw_uint<16> hcompute_output_cgra_stencil_7() {
  int16_t _711 = (int16_t)(0);
  return _711;
}

//store is: input_cgra.stencil(input_cgra_s0_z_z_cgra_z_cgra, input_cgra_s0_x, input_cgra_s0_y) = input_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + input_cgra_s0_z_z_cgra_z_cgra), input_cgra_s0_x, input_cgra_s0_y)
static hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  int16_t _input_glb_stencil_1 = (int16_t) (input_glb_stencil.extract<0, 15>());

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_z_z_cgra_z_cgra, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((output_cgra_s1_r_z_rz_glb*8) + kernel_cgra_s0_z_z_cgra_z_cgra), ((output_glb_s0_w_w_glb*8) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
static hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  int16_t _kernel_glb_stencil_1 = (int16_t) (kernel_glb_stencil.extract<0, 15>());

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(0, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_1 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_2 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_3 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_4 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_5 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_6 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_7 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_8 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_1 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_2 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_3 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_4 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_5 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_6 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_7 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_8 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_1 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _722 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  int16_t _723 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  int16_t _724 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  int16_t _725 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  int16_t _726 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  int16_t _727 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  int16_t _728 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  int16_t _729 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  int16_t _730 = _728 + _729;
  int16_t _731 = _727 + _730;
  int16_t _732 = _726 + _731;
  int16_t _733 = _725 + _732;
  int16_t _734 = _724 + _733;
  int16_t _735 = _723 + _734;
  int16_t _736 = _output_cgra_stencil_1 + _735;
  int16_t _737 = _722 + _736;
  return _737;
}

//store is: output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(1, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_10 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_11 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_12 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_13 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_14 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_15 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_16 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_9 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_10 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_11 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_12 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_13 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_14 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_15 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_16 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_9 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_2 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _789 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  int16_t _790 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  int16_t _791 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  int16_t _792 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  int16_t _793 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  int16_t _794 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  int16_t _795 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  int16_t _796 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  int16_t _797 = _795 + _796;
  int16_t _798 = _794 + _797;
  int16_t _799 = _793 + _798;
  int16_t _800 = _792 + _799;
  int16_t _801 = _791 + _800;
  int16_t _802 = _790 + _801;
  int16_t _803 = _output_cgra_stencil_2 + _802;
  int16_t _804 = _789 + _803;
  return _804;
}

//store is: output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(2, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_17 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_18 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_19 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_20 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_21 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_22 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_23 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_24 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_17 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_18 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_19 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_20 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_21 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_22 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_23 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_24 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_3 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _856 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  int16_t _857 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  int16_t _858 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  int16_t _859 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  int16_t _860 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  int16_t _861 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  int16_t _862 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  int16_t _863 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  int16_t _864 = _862 + _863;
  int16_t _865 = _861 + _864;
  int16_t _866 = _860 + _865;
  int16_t _867 = _859 + _866;
  int16_t _868 = _858 + _867;
  int16_t _869 = _857 + _868;
  int16_t _870 = _output_cgra_stencil_3 + _869;
  int16_t _871 = _856 + _870;
  return _871;
}

//store is: output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(3, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_25 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_26 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_27 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_28 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_29 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_30 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_31 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_32 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_25 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_26 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_27 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_28 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_29 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_30 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_31 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_32 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_4 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _923 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  int16_t _924 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  int16_t _925 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  int16_t _926 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  int16_t _927 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  int16_t _928 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  int16_t _929 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  int16_t _930 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  int16_t _931 = _929 + _930;
  int16_t _932 = _928 + _931;
  int16_t _933 = _927 + _932;
  int16_t _934 = _926 + _933;
  int16_t _935 = _925 + _934;
  int16_t _936 = _924 + _935;
  int16_t _937 = _output_cgra_stencil_4 + _936;
  int16_t _938 = _923 + _937;
  return _938;
}

//store is: output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(4, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_33 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_34 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_35 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_36 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_37 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_38 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_39 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_40 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_33 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_34 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_35 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_36 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_37 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_38 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_39 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_40 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_5 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _990 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  int16_t _991 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  int16_t _992 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  int16_t _993 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  int16_t _994 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  int16_t _995 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  int16_t _996 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  int16_t _997 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  int16_t _998 = _996 + _997;
  int16_t _999 = _995 + _998;
  int16_t _1000 = _994 + _999;
  int16_t _1001 = _993 + _1000;
  int16_t _1002 = _992 + _1001;
  int16_t _1003 = _991 + _1002;
  int16_t _1004 = _output_cgra_stencil_5 + _1003;
  int16_t _1005 = _990 + _1004;
  return _1005;
}

//store is: output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(5, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_41 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_42 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_43 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_44 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_45 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_46 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_47 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_48 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_41 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_42 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_43 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_44 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_45 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_46 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_47 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_48 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_6 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1057 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  int16_t _1058 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  int16_t _1059 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  int16_t _1060 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  int16_t _1061 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  int16_t _1062 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  int16_t _1063 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  int16_t _1064 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  int16_t _1065 = _1063 + _1064;
  int16_t _1066 = _1062 + _1065;
  int16_t _1067 = _1061 + _1066;
  int16_t _1068 = _1060 + _1067;
  int16_t _1069 = _1059 + _1068;
  int16_t _1070 = _1058 + _1069;
  int16_t _1071 = _output_cgra_stencil_6 + _1070;
  int16_t _1072 = _1057 + _1071;
  return _1072;
}

//store is: output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(6, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_49 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_50 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_51 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_52 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_53 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_54 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_55 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_56 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_49 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_50 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_51 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_52 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_53 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_54 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_55 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_56 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_7 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1124 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  int16_t _1125 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  int16_t _1126 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  int16_t _1127 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  int16_t _1128 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  int16_t _1129 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  int16_t _1130 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  int16_t _1131 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  int16_t _1132 = _1130 + _1131;
  int16_t _1133 = _1129 + _1132;
  int16_t _1134 = _1128 + _1133;
  int16_t _1135 = _1127 + _1134;
  int16_t _1136 = _1126 + _1135;
  int16_t _1137 = _1125 + _1136;
  int16_t _1138 = _output_cgra_stencil_7 + _1137;
  int16_t _1139 = _1124 + _1138;
  return _1139;
}

//store is: output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) = ((kernel_cgra.stencil(0, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (output_cgra.stencil(7, output_cgra_s1_x, output_cgra_s1_y) + ((kernel_cgra.stencil(1, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(2, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(3, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(4, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(5, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + ((kernel_cgra.stencil(7, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y))) + (kernel_cgra.stencil(6, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, (output_cgra_s1_r_x + output_cgra_s1_x), (output_cgra_s1_r_y + output_cgra_s1_y)))))))))))
static hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<128>& input_cgra_stencil, hw_uint<128>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  int16_t _input_cgra_stencil_57 = (int16_t) (input_cgra_stencil.extract<0, 15>());
  int16_t _input_cgra_stencil_58 = (int16_t) (input_cgra_stencil.extract<16, 31>());
  int16_t _input_cgra_stencil_59 = (int16_t) (input_cgra_stencil.extract<32, 47>());
  int16_t _input_cgra_stencil_60 = (int16_t) (input_cgra_stencil.extract<48, 63>());
  int16_t _input_cgra_stencil_61 = (int16_t) (input_cgra_stencil.extract<64, 79>());
  int16_t _input_cgra_stencil_62 = (int16_t) (input_cgra_stencil.extract<80, 95>());
  int16_t _input_cgra_stencil_63 = (int16_t) (input_cgra_stencil.extract<96, 111>());
  int16_t _input_cgra_stencil_64 = (int16_t) (input_cgra_stencil.extract<112, 127>());

  int16_t _kernel_cgra_stencil_57 = (int16_t) (kernel_cgra_stencil.extract<0, 15>());
  int16_t _kernel_cgra_stencil_58 = (int16_t) (kernel_cgra_stencil.extract<16, 31>());
  int16_t _kernel_cgra_stencil_59 = (int16_t) (kernel_cgra_stencil.extract<32, 47>());
  int16_t _kernel_cgra_stencil_60 = (int16_t) (kernel_cgra_stencil.extract<48, 63>());
  int16_t _kernel_cgra_stencil_61 = (int16_t) (kernel_cgra_stencil.extract<64, 79>());
  int16_t _kernel_cgra_stencil_62 = (int16_t) (kernel_cgra_stencil.extract<80, 95>());
  int16_t _kernel_cgra_stencil_63 = (int16_t) (kernel_cgra_stencil.extract<96, 111>());
  int16_t _kernel_cgra_stencil_64 = (int16_t) (kernel_cgra_stencil.extract<112, 127>());

  int16_t _output_cgra_stencil_8 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  int16_t _1191 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  int16_t _1192 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  int16_t _1193 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  int16_t _1194 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  int16_t _1195 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  int16_t _1196 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  int16_t _1197 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  int16_t _1198 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  int16_t _1199 = _1197 + _1198;
  int16_t _1200 = _1196 + _1199;
  int16_t _1201 = _1195 + _1200;
  int16_t _1202 = _1194 + _1201;
  int16_t _1203 = _1193 + _1202;
  int16_t _1204 = _1192 + _1203;
  int16_t _1205 = _output_cgra_stencil_8 + _1204;
  int16_t _1206 = _1191 + _1205;
  return _1206;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*8) + output_glb_s0_w_w_cgra_w_cgra), output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra) = output_cgra.stencil(output_glb_s0_w_w_cgra_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
static hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  int16_t _output_cgra_stencil_9 = (int16_t) (output_cgra_stencil.extract<0, 15>());

  return _output_cgra_stencil_9;
}

//store is: hw_output.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
static hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  int16_t _output_glb_stencil_1 = (int16_t) (output_glb_stencil.extract<0, 15>());

  return _output_glb_stencil_1;
}

