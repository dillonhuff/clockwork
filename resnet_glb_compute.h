#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: input_glb.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y) = input_host.stencil(input_glb_s0_z, input_glb_s0_x, input_glb_s0_y)
hw_uint<16> hcompute_input_glb_stencil(hw_uint<16>& input_host_stencil) {
  uint16_t _input_host_stencil_1 = (uint16_t) input_host_stencil.extract<0, 15>();

  return _input_host_stencil_1;
}

//store is: kernel_glb.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y) = kernel_host.stencil(kernel_glb_s0_z, kernel_glb_s0_w, kernel_glb_s0_x, kernel_glb_s0_y)
hw_uint<16> hcompute_kernel_glb_stencil(hw_uint<16>& kernel_host_stencil) {
  uint16_t _kernel_host_stencil_1 = (uint16_t) kernel_host_stencil.extract<0, 15>();

  return _kernel_host_stencil_1;
}

//store is: output_cgra.stencil(output_cgra_s0_w_w_cgra, (((output_glb_s0_x_x_glb*28) + output_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = (uint16)0
hw_uint<16> hcompute_output_cgra_stencil() {
  uint16_t _675 = (uint16_t)(0);
  return _675;
}

//store is: input_cgra.stencil(input_cgra_s0_zz, input_cgra_s0_z, (((output_glb_s0_x_x_glb*28) + input_cgra_s0_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + input_cgra_s0_y) - (output_glb_s0_y_y_glb*28))) = input_glb.stencil(((input_cgra_s0_z*16) + input_cgra_s0_zz), ((output_glb_s0_x_x_glb*28) + input_cgra_s0_x), ((output_glb_s0_y_y_glb*28) + input_cgra_s0_y))
hw_uint<16> hcompute_input_cgra_stencil(hw_uint<16>& input_glb_stencil) {
  uint16_t _input_glb_stencil_1 = (uint16_t) input_glb_stencil.extract<0, 15>();

  return _input_glb_stencil_1;
}

//store is: kernel_cgra.stencil(kernel_cgra_s0_zz, kernel_cgra_s0_z, kernel_cgra_s0_w_w_cgra, kernel_cgra_s0_x, kernel_cgra_s0_y) = kernel_glb.stencil(((kernel_cgra_s0_z*16) + kernel_cgra_s0_zz), ((output_glb_s0_w_w_glb*16) + kernel_cgra_s0_w_w_cgra), kernel_cgra_s0_x, kernel_cgra_s0_y)
hw_uint<16> hcompute_kernel_cgra_stencil(hw_uint<16>& kernel_glb_stencil) {
  uint16_t _kernel_glb_stencil_1 = (uint16_t) kernel_glb_stencil.extract<0, 15>();

  return _kernel_glb_stencil_1;
}

//store is: output_cgra.stencil(0, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(0, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 0, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_1(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_1 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_10 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_11 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_12 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_13 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_14 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_15 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_16 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_2 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_3 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_4 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_5 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_6 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_7 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_8 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_9 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_1 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_10 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_11 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_12 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_13 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_14 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_15 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_16 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_2 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_3 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_4 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_5 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_6 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_7 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_8 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_9 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_1 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _702 = _kernel_cgra_stencil_1 * _input_cgra_stencil_1;
  uint16_t _703 = _kernel_cgra_stencil_2 * _input_cgra_stencil_2;
  uint16_t _704 = _kernel_cgra_stencil_3 * _input_cgra_stencil_3;
  uint16_t _705 = _kernel_cgra_stencil_4 * _input_cgra_stencil_4;
  uint16_t _706 = _kernel_cgra_stencil_5 * _input_cgra_stencil_5;
  uint16_t _707 = _kernel_cgra_stencil_6 * _input_cgra_stencil_6;
  uint16_t _708 = _kernel_cgra_stencil_7 * _input_cgra_stencil_7;
  uint16_t _709 = _kernel_cgra_stencil_8 * _input_cgra_stencil_8;
  uint16_t _710 = _kernel_cgra_stencil_9 * _input_cgra_stencil_9;
  uint16_t _711 = _kernel_cgra_stencil_10 * _input_cgra_stencil_10;
  uint16_t _712 = _kernel_cgra_stencil_11 * _input_cgra_stencil_11;
  uint16_t _713 = _kernel_cgra_stencil_12 * _input_cgra_stencil_12;
  uint16_t _714 = _kernel_cgra_stencil_13 * _input_cgra_stencil_13;
  uint16_t _715 = _kernel_cgra_stencil_14 * _input_cgra_stencil_14;
  uint16_t _716 = _kernel_cgra_stencil_15 * _input_cgra_stencil_15;
  uint16_t _717 = _kernel_cgra_stencil_16 * _input_cgra_stencil_16;
  uint16_t _718 = _716 + _717;
  uint16_t _719 = _715 + _718;
  uint16_t _720 = _714 + _719;
  uint16_t _721 = _713 + _720;
  uint16_t _722 = _712 + _721;
  uint16_t _723 = _711 + _722;
  uint16_t _724 = _710 + _723;
  uint16_t _725 = _709 + _724;
  uint16_t _726 = _708 + _725;
  uint16_t _727 = _707 + _726;
  uint16_t _728 = _706 + _727;
  uint16_t _729 = _705 + _728;
  uint16_t _730 = _704 + _729;
  uint16_t _731 = _703 + _730;
  uint16_t _732 = _output_cgra_stencil_1 + _731;
  uint16_t _733 = _702 + _732;
  return _733;
}

//store is: output_cgra.stencil(1, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(1, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 1, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_2(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_17 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_18 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_19 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_20 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_21 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_22 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_23 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_24 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_25 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_26 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_27 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_28 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_29 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_30 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_31 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_32 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_17 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_18 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_19 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_20 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_21 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_22 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_23 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_24 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_25 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_26 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_27 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_28 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_29 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_30 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_31 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_32 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_2 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _841 = _kernel_cgra_stencil_17 * _input_cgra_stencil_17;
  uint16_t _842 = _kernel_cgra_stencil_18 * _input_cgra_stencil_18;
  uint16_t _843 = _kernel_cgra_stencil_19 * _input_cgra_stencil_19;
  uint16_t _844 = _kernel_cgra_stencil_20 * _input_cgra_stencil_20;
  uint16_t _845 = _kernel_cgra_stencil_21 * _input_cgra_stencil_21;
  uint16_t _846 = _kernel_cgra_stencil_22 * _input_cgra_stencil_22;
  uint16_t _847 = _kernel_cgra_stencil_23 * _input_cgra_stencil_23;
  uint16_t _848 = _kernel_cgra_stencil_24 * _input_cgra_stencil_24;
  uint16_t _849 = _kernel_cgra_stencil_25 * _input_cgra_stencil_25;
  uint16_t _850 = _kernel_cgra_stencil_26 * _input_cgra_stencil_26;
  uint16_t _851 = _kernel_cgra_stencil_27 * _input_cgra_stencil_27;
  uint16_t _852 = _kernel_cgra_stencil_28 * _input_cgra_stencil_28;
  uint16_t _853 = _kernel_cgra_stencil_29 * _input_cgra_stencil_29;
  uint16_t _854 = _kernel_cgra_stencil_30 * _input_cgra_stencil_30;
  uint16_t _855 = _kernel_cgra_stencil_31 * _input_cgra_stencil_31;
  uint16_t _856 = _kernel_cgra_stencil_32 * _input_cgra_stencil_32;
  uint16_t _857 = _855 + _856;
  uint16_t _858 = _854 + _857;
  uint16_t _859 = _853 + _858;
  uint16_t _860 = _852 + _859;
  uint16_t _861 = _851 + _860;
  uint16_t _862 = _850 + _861;
  uint16_t _863 = _849 + _862;
  uint16_t _864 = _848 + _863;
  uint16_t _865 = _847 + _864;
  uint16_t _866 = _846 + _865;
  uint16_t _867 = _845 + _866;
  uint16_t _868 = _844 + _867;
  uint16_t _869 = _843 + _868;
  uint16_t _870 = _842 + _869;
  uint16_t _871 = _output_cgra_stencil_2 + _870;
  uint16_t _872 = _841 + _871;
  return _872;
}

//store is: output_cgra.stencil(2, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(2, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 2, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_3(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_33 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_34 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_35 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_36 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_37 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_38 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_39 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_40 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_41 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_42 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_43 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_44 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_45 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_46 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_47 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_48 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_33 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_34 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_35 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_36 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_37 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_38 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_39 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_40 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_41 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_42 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_43 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_44 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_45 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_46 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_47 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_48 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_3 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _980 = _kernel_cgra_stencil_33 * _input_cgra_stencil_33;
  uint16_t _981 = _kernel_cgra_stencil_34 * _input_cgra_stencil_34;
  uint16_t _982 = _kernel_cgra_stencil_35 * _input_cgra_stencil_35;
  uint16_t _983 = _kernel_cgra_stencil_36 * _input_cgra_stencil_36;
  uint16_t _984 = _kernel_cgra_stencil_37 * _input_cgra_stencil_37;
  uint16_t _985 = _kernel_cgra_stencil_38 * _input_cgra_stencil_38;
  uint16_t _986 = _kernel_cgra_stencil_39 * _input_cgra_stencil_39;
  uint16_t _987 = _kernel_cgra_stencil_40 * _input_cgra_stencil_40;
  uint16_t _988 = _kernel_cgra_stencil_41 * _input_cgra_stencil_41;
  uint16_t _989 = _kernel_cgra_stencil_42 * _input_cgra_stencil_42;
  uint16_t _990 = _kernel_cgra_stencil_43 * _input_cgra_stencil_43;
  uint16_t _991 = _kernel_cgra_stencil_44 * _input_cgra_stencil_44;
  uint16_t _992 = _kernel_cgra_stencil_45 * _input_cgra_stencil_45;
  uint16_t _993 = _kernel_cgra_stencil_46 * _input_cgra_stencil_46;
  uint16_t _994 = _kernel_cgra_stencil_47 * _input_cgra_stencil_47;
  uint16_t _995 = _kernel_cgra_stencil_48 * _input_cgra_stencil_48;
  uint16_t _996 = _994 + _995;
  uint16_t _997 = _993 + _996;
  uint16_t _998 = _992 + _997;
  uint16_t _999 = _991 + _998;
  uint16_t _1000 = _990 + _999;
  uint16_t _1001 = _989 + _1000;
  uint16_t _1002 = _988 + _1001;
  uint16_t _1003 = _987 + _1002;
  uint16_t _1004 = _986 + _1003;
  uint16_t _1005 = _985 + _1004;
  uint16_t _1006 = _984 + _1005;
  uint16_t _1007 = _983 + _1006;
  uint16_t _1008 = _982 + _1007;
  uint16_t _1009 = _981 + _1008;
  uint16_t _1010 = _output_cgra_stencil_3 + _1009;
  uint16_t _1011 = _980 + _1010;
  return _1011;
}

//store is: output_cgra.stencil(3, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(3, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 3, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_4(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_49 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_50 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_51 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_52 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_53 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_54 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_55 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_56 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_57 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_58 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_59 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_60 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_61 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_62 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_63 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_64 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_49 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_50 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_51 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_52 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_53 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_54 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_55 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_56 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_57 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_58 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_59 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_60 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_61 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_62 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_63 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_64 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_4 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1119 = _kernel_cgra_stencil_49 * _input_cgra_stencil_49;
  uint16_t _1120 = _kernel_cgra_stencil_50 * _input_cgra_stencil_50;
  uint16_t _1121 = _kernel_cgra_stencil_51 * _input_cgra_stencil_51;
  uint16_t _1122 = _kernel_cgra_stencil_52 * _input_cgra_stencil_52;
  uint16_t _1123 = _kernel_cgra_stencil_53 * _input_cgra_stencil_53;
  uint16_t _1124 = _kernel_cgra_stencil_54 * _input_cgra_stencil_54;
  uint16_t _1125 = _kernel_cgra_stencil_55 * _input_cgra_stencil_55;
  uint16_t _1126 = _kernel_cgra_stencil_56 * _input_cgra_stencil_56;
  uint16_t _1127 = _kernel_cgra_stencil_57 * _input_cgra_stencil_57;
  uint16_t _1128 = _kernel_cgra_stencil_58 * _input_cgra_stencil_58;
  uint16_t _1129 = _kernel_cgra_stencil_59 * _input_cgra_stencil_59;
  uint16_t _1130 = _kernel_cgra_stencil_60 * _input_cgra_stencil_60;
  uint16_t _1131 = _kernel_cgra_stencil_61 * _input_cgra_stencil_61;
  uint16_t _1132 = _kernel_cgra_stencil_62 * _input_cgra_stencil_62;
  uint16_t _1133 = _kernel_cgra_stencil_63 * _input_cgra_stencil_63;
  uint16_t _1134 = _kernel_cgra_stencil_64 * _input_cgra_stencil_64;
  uint16_t _1135 = _1133 + _1134;
  uint16_t _1136 = _1132 + _1135;
  uint16_t _1137 = _1131 + _1136;
  uint16_t _1138 = _1130 + _1137;
  uint16_t _1139 = _1129 + _1138;
  uint16_t _1140 = _1128 + _1139;
  uint16_t _1141 = _1127 + _1140;
  uint16_t _1142 = _1126 + _1141;
  uint16_t _1143 = _1125 + _1142;
  uint16_t _1144 = _1124 + _1143;
  uint16_t _1145 = _1123 + _1144;
  uint16_t _1146 = _1122 + _1145;
  uint16_t _1147 = _1121 + _1146;
  uint16_t _1148 = _1120 + _1147;
  uint16_t _1149 = _output_cgra_stencil_4 + _1148;
  uint16_t _1150 = _1119 + _1149;
  return _1150;
}

//store is: output_cgra.stencil(4, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(4, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 4, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_5(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_65 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_66 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_67 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_68 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_69 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_70 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_71 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_72 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_73 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_74 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_75 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_76 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_77 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_78 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_79 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_80 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_65 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_66 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_67 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_68 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_69 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_70 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_71 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_72 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_73 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_74 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_75 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_76 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_77 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_78 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_79 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_80 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_5 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1258 = _kernel_cgra_stencil_65 * _input_cgra_stencil_65;
  uint16_t _1259 = _kernel_cgra_stencil_66 * _input_cgra_stencil_66;
  uint16_t _1260 = _kernel_cgra_stencil_67 * _input_cgra_stencil_67;
  uint16_t _1261 = _kernel_cgra_stencil_68 * _input_cgra_stencil_68;
  uint16_t _1262 = _kernel_cgra_stencil_69 * _input_cgra_stencil_69;
  uint16_t _1263 = _kernel_cgra_stencil_70 * _input_cgra_stencil_70;
  uint16_t _1264 = _kernel_cgra_stencil_71 * _input_cgra_stencil_71;
  uint16_t _1265 = _kernel_cgra_stencil_72 * _input_cgra_stencil_72;
  uint16_t _1266 = _kernel_cgra_stencil_73 * _input_cgra_stencil_73;
  uint16_t _1267 = _kernel_cgra_stencil_74 * _input_cgra_stencil_74;
  uint16_t _1268 = _kernel_cgra_stencil_75 * _input_cgra_stencil_75;
  uint16_t _1269 = _kernel_cgra_stencil_76 * _input_cgra_stencil_76;
  uint16_t _1270 = _kernel_cgra_stencil_77 * _input_cgra_stencil_77;
  uint16_t _1271 = _kernel_cgra_stencil_78 * _input_cgra_stencil_78;
  uint16_t _1272 = _kernel_cgra_stencil_79 * _input_cgra_stencil_79;
  uint16_t _1273 = _kernel_cgra_stencil_80 * _input_cgra_stencil_80;
  uint16_t _1274 = _1272 + _1273;
  uint16_t _1275 = _1271 + _1274;
  uint16_t _1276 = _1270 + _1275;
  uint16_t _1277 = _1269 + _1276;
  uint16_t _1278 = _1268 + _1277;
  uint16_t _1279 = _1267 + _1278;
  uint16_t _1280 = _1266 + _1279;
  uint16_t _1281 = _1265 + _1280;
  uint16_t _1282 = _1264 + _1281;
  uint16_t _1283 = _1263 + _1282;
  uint16_t _1284 = _1262 + _1283;
  uint16_t _1285 = _1261 + _1284;
  uint16_t _1286 = _1260 + _1285;
  uint16_t _1287 = _1259 + _1286;
  uint16_t _1288 = _output_cgra_stencil_5 + _1287;
  uint16_t _1289 = _1258 + _1288;
  return _1289;
}

//store is: output_cgra.stencil(5, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(5, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 5, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_6(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_81 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_82 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_83 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_84 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_85 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_86 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_87 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_88 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_89 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_90 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_91 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_92 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_93 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_94 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_95 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_96 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_81 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_82 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_83 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_84 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_85 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_86 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_87 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_88 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_89 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_90 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_91 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_92 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_93 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_94 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_95 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_96 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_6 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1397 = _kernel_cgra_stencil_81 * _input_cgra_stencil_81;
  uint16_t _1398 = _kernel_cgra_stencil_82 * _input_cgra_stencil_82;
  uint16_t _1399 = _kernel_cgra_stencil_83 * _input_cgra_stencil_83;
  uint16_t _1400 = _kernel_cgra_stencil_84 * _input_cgra_stencil_84;
  uint16_t _1401 = _kernel_cgra_stencil_85 * _input_cgra_stencil_85;
  uint16_t _1402 = _kernel_cgra_stencil_86 * _input_cgra_stencil_86;
  uint16_t _1403 = _kernel_cgra_stencil_87 * _input_cgra_stencil_87;
  uint16_t _1404 = _kernel_cgra_stencil_88 * _input_cgra_stencil_88;
  uint16_t _1405 = _kernel_cgra_stencil_89 * _input_cgra_stencil_89;
  uint16_t _1406 = _kernel_cgra_stencil_90 * _input_cgra_stencil_90;
  uint16_t _1407 = _kernel_cgra_stencil_91 * _input_cgra_stencil_91;
  uint16_t _1408 = _kernel_cgra_stencil_92 * _input_cgra_stencil_92;
  uint16_t _1409 = _kernel_cgra_stencil_93 * _input_cgra_stencil_93;
  uint16_t _1410 = _kernel_cgra_stencil_94 * _input_cgra_stencil_94;
  uint16_t _1411 = _kernel_cgra_stencil_95 * _input_cgra_stencil_95;
  uint16_t _1412 = _kernel_cgra_stencil_96 * _input_cgra_stencil_96;
  uint16_t _1413 = _1411 + _1412;
  uint16_t _1414 = _1410 + _1413;
  uint16_t _1415 = _1409 + _1414;
  uint16_t _1416 = _1408 + _1415;
  uint16_t _1417 = _1407 + _1416;
  uint16_t _1418 = _1406 + _1417;
  uint16_t _1419 = _1405 + _1418;
  uint16_t _1420 = _1404 + _1419;
  uint16_t _1421 = _1403 + _1420;
  uint16_t _1422 = _1402 + _1421;
  uint16_t _1423 = _1401 + _1422;
  uint16_t _1424 = _1400 + _1423;
  uint16_t _1425 = _1399 + _1424;
  uint16_t _1426 = _1398 + _1425;
  uint16_t _1427 = _output_cgra_stencil_6 + _1426;
  uint16_t _1428 = _1397 + _1427;
  return _1428;
}

//store is: output_cgra.stencil(6, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(6, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 6, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_7(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_100 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_101 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_102 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_103 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_104 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_105 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_106 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_107 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_108 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_109 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_110 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_111 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_112 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_97 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_98 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_99 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_100 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_101 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_102 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_103 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_104 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_105 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_106 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_107 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_108 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_109 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_110 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_111 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_112 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_97 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_98 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_99 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_7 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1536 = _kernel_cgra_stencil_97 * _input_cgra_stencil_97;
  uint16_t _1537 = _kernel_cgra_stencil_98 * _input_cgra_stencil_98;
  uint16_t _1538 = _kernel_cgra_stencil_99 * _input_cgra_stencil_99;
  uint16_t _1539 = _kernel_cgra_stencil_100 * _input_cgra_stencil_100;
  uint16_t _1540 = _kernel_cgra_stencil_101 * _input_cgra_stencil_101;
  uint16_t _1541 = _kernel_cgra_stencil_102 * _input_cgra_stencil_102;
  uint16_t _1542 = _kernel_cgra_stencil_103 * _input_cgra_stencil_103;
  uint16_t _1543 = _kernel_cgra_stencil_104 * _input_cgra_stencil_104;
  uint16_t _1544 = _kernel_cgra_stencil_105 * _input_cgra_stencil_105;
  uint16_t _1545 = _kernel_cgra_stencil_106 * _input_cgra_stencil_106;
  uint16_t _1546 = _kernel_cgra_stencil_107 * _input_cgra_stencil_107;
  uint16_t _1547 = _kernel_cgra_stencil_108 * _input_cgra_stencil_108;
  uint16_t _1548 = _kernel_cgra_stencil_109 * _input_cgra_stencil_109;
  uint16_t _1549 = _kernel_cgra_stencil_110 * _input_cgra_stencil_110;
  uint16_t _1550 = _kernel_cgra_stencil_111 * _input_cgra_stencil_111;
  uint16_t _1551 = _kernel_cgra_stencil_112 * _input_cgra_stencil_112;
  uint16_t _1552 = _1550 + _1551;
  uint16_t _1553 = _1549 + _1552;
  uint16_t _1554 = _1548 + _1553;
  uint16_t _1555 = _1547 + _1554;
  uint16_t _1556 = _1546 + _1555;
  uint16_t _1557 = _1545 + _1556;
  uint16_t _1558 = _1544 + _1557;
  uint16_t _1559 = _1543 + _1558;
  uint16_t _1560 = _1542 + _1559;
  uint16_t _1561 = _1541 + _1560;
  uint16_t _1562 = _1540 + _1561;
  uint16_t _1563 = _1539 + _1562;
  uint16_t _1564 = _1538 + _1563;
  uint16_t _1565 = _1537 + _1564;
  uint16_t _1566 = _output_cgra_stencil_7 + _1565;
  uint16_t _1567 = _1536 + _1566;
  return _1567;
}

//store is: output_cgra.stencil(7, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(7, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 7, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_8(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_113 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_114 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_115 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_116 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_117 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_118 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_119 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_120 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_121 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_122 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_123 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_124 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_125 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_126 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_127 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_128 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_113 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_114 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_115 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_116 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_117 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_118 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_119 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_120 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_121 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_122 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_123 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_124 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_125 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_126 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_127 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_128 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_8 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1675 = _kernel_cgra_stencil_113 * _input_cgra_stencil_113;
  uint16_t _1676 = _kernel_cgra_stencil_114 * _input_cgra_stencil_114;
  uint16_t _1677 = _kernel_cgra_stencil_115 * _input_cgra_stencil_115;
  uint16_t _1678 = _kernel_cgra_stencil_116 * _input_cgra_stencil_116;
  uint16_t _1679 = _kernel_cgra_stencil_117 * _input_cgra_stencil_117;
  uint16_t _1680 = _kernel_cgra_stencil_118 * _input_cgra_stencil_118;
  uint16_t _1681 = _kernel_cgra_stencil_119 * _input_cgra_stencil_119;
  uint16_t _1682 = _kernel_cgra_stencil_120 * _input_cgra_stencil_120;
  uint16_t _1683 = _kernel_cgra_stencil_121 * _input_cgra_stencil_121;
  uint16_t _1684 = _kernel_cgra_stencil_122 * _input_cgra_stencil_122;
  uint16_t _1685 = _kernel_cgra_stencil_123 * _input_cgra_stencil_123;
  uint16_t _1686 = _kernel_cgra_stencil_124 * _input_cgra_stencil_124;
  uint16_t _1687 = _kernel_cgra_stencil_125 * _input_cgra_stencil_125;
  uint16_t _1688 = _kernel_cgra_stencil_126 * _input_cgra_stencil_126;
  uint16_t _1689 = _kernel_cgra_stencil_127 * _input_cgra_stencil_127;
  uint16_t _1690 = _kernel_cgra_stencil_128 * _input_cgra_stencil_128;
  uint16_t _1691 = _1689 + _1690;
  uint16_t _1692 = _1688 + _1691;
  uint16_t _1693 = _1687 + _1692;
  uint16_t _1694 = _1686 + _1693;
  uint16_t _1695 = _1685 + _1694;
  uint16_t _1696 = _1684 + _1695;
  uint16_t _1697 = _1683 + _1696;
  uint16_t _1698 = _1682 + _1697;
  uint16_t _1699 = _1681 + _1698;
  uint16_t _1700 = _1680 + _1699;
  uint16_t _1701 = _1679 + _1700;
  uint16_t _1702 = _1678 + _1701;
  uint16_t _1703 = _1677 + _1702;
  uint16_t _1704 = _1676 + _1703;
  uint16_t _1705 = _output_cgra_stencil_8 + _1704;
  uint16_t _1706 = _1675 + _1705;
  return _1706;
}

//store is: output_cgra.stencil(8, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(8, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 8, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_9(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_129 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_130 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_131 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_132 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_133 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_134 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_135 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_136 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_137 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_138 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_139 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_140 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_141 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_142 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_143 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_144 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_129 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_130 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_131 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_132 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_133 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_134 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_135 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_136 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_137 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_138 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_139 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_140 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_141 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_142 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_143 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_144 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_9 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1814 = _kernel_cgra_stencil_129 * _input_cgra_stencil_129;
  uint16_t _1815 = _kernel_cgra_stencil_130 * _input_cgra_stencil_130;
  uint16_t _1816 = _kernel_cgra_stencil_131 * _input_cgra_stencil_131;
  uint16_t _1817 = _kernel_cgra_stencil_132 * _input_cgra_stencil_132;
  uint16_t _1818 = _kernel_cgra_stencil_133 * _input_cgra_stencil_133;
  uint16_t _1819 = _kernel_cgra_stencil_134 * _input_cgra_stencil_134;
  uint16_t _1820 = _kernel_cgra_stencil_135 * _input_cgra_stencil_135;
  uint16_t _1821 = _kernel_cgra_stencil_136 * _input_cgra_stencil_136;
  uint16_t _1822 = _kernel_cgra_stencil_137 * _input_cgra_stencil_137;
  uint16_t _1823 = _kernel_cgra_stencil_138 * _input_cgra_stencil_138;
  uint16_t _1824 = _kernel_cgra_stencil_139 * _input_cgra_stencil_139;
  uint16_t _1825 = _kernel_cgra_stencil_140 * _input_cgra_stencil_140;
  uint16_t _1826 = _kernel_cgra_stencil_141 * _input_cgra_stencil_141;
  uint16_t _1827 = _kernel_cgra_stencil_142 * _input_cgra_stencil_142;
  uint16_t _1828 = _kernel_cgra_stencil_143 * _input_cgra_stencil_143;
  uint16_t _1829 = _kernel_cgra_stencil_144 * _input_cgra_stencil_144;
  uint16_t _1830 = _1828 + _1829;
  uint16_t _1831 = _1827 + _1830;
  uint16_t _1832 = _1826 + _1831;
  uint16_t _1833 = _1825 + _1832;
  uint16_t _1834 = _1824 + _1833;
  uint16_t _1835 = _1823 + _1834;
  uint16_t _1836 = _1822 + _1835;
  uint16_t _1837 = _1821 + _1836;
  uint16_t _1838 = _1820 + _1837;
  uint16_t _1839 = _1819 + _1838;
  uint16_t _1840 = _1818 + _1839;
  uint16_t _1841 = _1817 + _1840;
  uint16_t _1842 = _1816 + _1841;
  uint16_t _1843 = _1815 + _1842;
  uint16_t _1844 = _output_cgra_stencil_9 + _1843;
  uint16_t _1845 = _1814 + _1844;
  return _1845;
}

//store is: output_cgra.stencil(9, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(9, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 9, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_10(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_145 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_146 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_147 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_148 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_149 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_150 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_151 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_152 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_153 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_154 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_155 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_156 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_157 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_158 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_159 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_160 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_145 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_146 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_147 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_148 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_149 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_150 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_151 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_152 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_153 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_154 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_155 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_156 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_157 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_158 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_159 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_160 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_10 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _1953 = _kernel_cgra_stencil_145 * _input_cgra_stencil_145;
  uint16_t _1954 = _kernel_cgra_stencil_146 * _input_cgra_stencil_146;
  uint16_t _1955 = _kernel_cgra_stencil_147 * _input_cgra_stencil_147;
  uint16_t _1956 = _kernel_cgra_stencil_148 * _input_cgra_stencil_148;
  uint16_t _1957 = _kernel_cgra_stencil_149 * _input_cgra_stencil_149;
  uint16_t _1958 = _kernel_cgra_stencil_150 * _input_cgra_stencil_150;
  uint16_t _1959 = _kernel_cgra_stencil_151 * _input_cgra_stencil_151;
  uint16_t _1960 = _kernel_cgra_stencil_152 * _input_cgra_stencil_152;
  uint16_t _1961 = _kernel_cgra_stencil_153 * _input_cgra_stencil_153;
  uint16_t _1962 = _kernel_cgra_stencil_154 * _input_cgra_stencil_154;
  uint16_t _1963 = _kernel_cgra_stencil_155 * _input_cgra_stencil_155;
  uint16_t _1964 = _kernel_cgra_stencil_156 * _input_cgra_stencil_156;
  uint16_t _1965 = _kernel_cgra_stencil_157 * _input_cgra_stencil_157;
  uint16_t _1966 = _kernel_cgra_stencil_158 * _input_cgra_stencil_158;
  uint16_t _1967 = _kernel_cgra_stencil_159 * _input_cgra_stencil_159;
  uint16_t _1968 = _kernel_cgra_stencil_160 * _input_cgra_stencil_160;
  uint16_t _1969 = _1967 + _1968;
  uint16_t _1970 = _1966 + _1969;
  uint16_t _1971 = _1965 + _1970;
  uint16_t _1972 = _1964 + _1971;
  uint16_t _1973 = _1963 + _1972;
  uint16_t _1974 = _1962 + _1973;
  uint16_t _1975 = _1961 + _1974;
  uint16_t _1976 = _1960 + _1975;
  uint16_t _1977 = _1959 + _1976;
  uint16_t _1978 = _1958 + _1977;
  uint16_t _1979 = _1957 + _1978;
  uint16_t _1980 = _1956 + _1979;
  uint16_t _1981 = _1955 + _1980;
  uint16_t _1982 = _1954 + _1981;
  uint16_t _1983 = _output_cgra_stencil_10 + _1982;
  uint16_t _1984 = _1953 + _1983;
  return _1984;
}

//store is: output_cgra.stencil(10, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(10, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 10, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_11(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_161 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_162 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_163 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_164 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_165 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_166 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_167 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_168 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_169 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_170 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_171 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_172 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_173 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_174 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_175 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_176 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_161 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_162 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_163 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_164 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_165 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_166 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_167 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_168 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_169 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_170 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_171 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_172 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_173 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_174 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_175 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_176 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_11 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2092 = _kernel_cgra_stencil_161 * _input_cgra_stencil_161;
  uint16_t _2093 = _kernel_cgra_stencil_162 * _input_cgra_stencil_162;
  uint16_t _2094 = _kernel_cgra_stencil_163 * _input_cgra_stencil_163;
  uint16_t _2095 = _kernel_cgra_stencil_164 * _input_cgra_stencil_164;
  uint16_t _2096 = _kernel_cgra_stencil_165 * _input_cgra_stencil_165;
  uint16_t _2097 = _kernel_cgra_stencil_166 * _input_cgra_stencil_166;
  uint16_t _2098 = _kernel_cgra_stencil_167 * _input_cgra_stencil_167;
  uint16_t _2099 = _kernel_cgra_stencil_168 * _input_cgra_stencil_168;
  uint16_t _2100 = _kernel_cgra_stencil_169 * _input_cgra_stencil_169;
  uint16_t _2101 = _kernel_cgra_stencil_170 * _input_cgra_stencil_170;
  uint16_t _2102 = _kernel_cgra_stencil_171 * _input_cgra_stencil_171;
  uint16_t _2103 = _kernel_cgra_stencil_172 * _input_cgra_stencil_172;
  uint16_t _2104 = _kernel_cgra_stencil_173 * _input_cgra_stencil_173;
  uint16_t _2105 = _kernel_cgra_stencil_174 * _input_cgra_stencil_174;
  uint16_t _2106 = _kernel_cgra_stencil_175 * _input_cgra_stencil_175;
  uint16_t _2107 = _kernel_cgra_stencil_176 * _input_cgra_stencil_176;
  uint16_t _2108 = _2106 + _2107;
  uint16_t _2109 = _2105 + _2108;
  uint16_t _2110 = _2104 + _2109;
  uint16_t _2111 = _2103 + _2110;
  uint16_t _2112 = _2102 + _2111;
  uint16_t _2113 = _2101 + _2112;
  uint16_t _2114 = _2100 + _2113;
  uint16_t _2115 = _2099 + _2114;
  uint16_t _2116 = _2098 + _2115;
  uint16_t _2117 = _2097 + _2116;
  uint16_t _2118 = _2096 + _2117;
  uint16_t _2119 = _2095 + _2118;
  uint16_t _2120 = _2094 + _2119;
  uint16_t _2121 = _2093 + _2120;
  uint16_t _2122 = _output_cgra_stencil_11 + _2121;
  uint16_t _2123 = _2092 + _2122;
  return _2123;
}

//store is: output_cgra.stencil(11, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(11, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 11, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_12(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_177 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_178 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_179 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_180 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_181 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_182 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_183 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_184 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_185 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_186 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_187 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_188 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_189 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_190 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_191 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_192 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_177 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_178 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_179 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_180 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_181 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_182 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_183 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_184 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_185 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_186 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_187 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_188 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_189 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_190 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_191 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_192 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_12 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2231 = _kernel_cgra_stencil_177 * _input_cgra_stencil_177;
  uint16_t _2232 = _kernel_cgra_stencil_178 * _input_cgra_stencil_178;
  uint16_t _2233 = _kernel_cgra_stencil_179 * _input_cgra_stencil_179;
  uint16_t _2234 = _kernel_cgra_stencil_180 * _input_cgra_stencil_180;
  uint16_t _2235 = _kernel_cgra_stencil_181 * _input_cgra_stencil_181;
  uint16_t _2236 = _kernel_cgra_stencil_182 * _input_cgra_stencil_182;
  uint16_t _2237 = _kernel_cgra_stencil_183 * _input_cgra_stencil_183;
  uint16_t _2238 = _kernel_cgra_stencil_184 * _input_cgra_stencil_184;
  uint16_t _2239 = _kernel_cgra_stencil_185 * _input_cgra_stencil_185;
  uint16_t _2240 = _kernel_cgra_stencil_186 * _input_cgra_stencil_186;
  uint16_t _2241 = _kernel_cgra_stencil_187 * _input_cgra_stencil_187;
  uint16_t _2242 = _kernel_cgra_stencil_188 * _input_cgra_stencil_188;
  uint16_t _2243 = _kernel_cgra_stencil_189 * _input_cgra_stencil_189;
  uint16_t _2244 = _kernel_cgra_stencil_190 * _input_cgra_stencil_190;
  uint16_t _2245 = _kernel_cgra_stencil_191 * _input_cgra_stencil_191;
  uint16_t _2246 = _kernel_cgra_stencil_192 * _input_cgra_stencil_192;
  uint16_t _2247 = _2245 + _2246;
  uint16_t _2248 = _2244 + _2247;
  uint16_t _2249 = _2243 + _2248;
  uint16_t _2250 = _2242 + _2249;
  uint16_t _2251 = _2241 + _2250;
  uint16_t _2252 = _2240 + _2251;
  uint16_t _2253 = _2239 + _2252;
  uint16_t _2254 = _2238 + _2253;
  uint16_t _2255 = _2237 + _2254;
  uint16_t _2256 = _2236 + _2255;
  uint16_t _2257 = _2235 + _2256;
  uint16_t _2258 = _2234 + _2257;
  uint16_t _2259 = _2233 + _2258;
  uint16_t _2260 = _2232 + _2259;
  uint16_t _2261 = _output_cgra_stencil_12 + _2260;
  uint16_t _2262 = _2231 + _2261;
  return _2262;
}

//store is: output_cgra.stencil(12, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(12, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 12, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_13(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_193 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_194 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_195 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_196 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_197 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_198 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_199 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_200 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_201 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_202 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_203 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_204 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_205 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_206 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_207 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_208 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_193 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_194 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_195 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_196 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_197 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_198 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_199 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_200 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_201 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_202 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_203 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_204 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_205 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_206 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_207 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_208 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_13 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2370 = _kernel_cgra_stencil_193 * _input_cgra_stencil_193;
  uint16_t _2371 = _kernel_cgra_stencil_194 * _input_cgra_stencil_194;
  uint16_t _2372 = _kernel_cgra_stencil_195 * _input_cgra_stencil_195;
  uint16_t _2373 = _kernel_cgra_stencil_196 * _input_cgra_stencil_196;
  uint16_t _2374 = _kernel_cgra_stencil_197 * _input_cgra_stencil_197;
  uint16_t _2375 = _kernel_cgra_stencil_198 * _input_cgra_stencil_198;
  uint16_t _2376 = _kernel_cgra_stencil_199 * _input_cgra_stencil_199;
  uint16_t _2377 = _kernel_cgra_stencil_200 * _input_cgra_stencil_200;
  uint16_t _2378 = _kernel_cgra_stencil_201 * _input_cgra_stencil_201;
  uint16_t _2379 = _kernel_cgra_stencil_202 * _input_cgra_stencil_202;
  uint16_t _2380 = _kernel_cgra_stencil_203 * _input_cgra_stencil_203;
  uint16_t _2381 = _kernel_cgra_stencil_204 * _input_cgra_stencil_204;
  uint16_t _2382 = _kernel_cgra_stencil_205 * _input_cgra_stencil_205;
  uint16_t _2383 = _kernel_cgra_stencil_206 * _input_cgra_stencil_206;
  uint16_t _2384 = _kernel_cgra_stencil_207 * _input_cgra_stencil_207;
  uint16_t _2385 = _kernel_cgra_stencil_208 * _input_cgra_stencil_208;
  uint16_t _2386 = _2384 + _2385;
  uint16_t _2387 = _2383 + _2386;
  uint16_t _2388 = _2382 + _2387;
  uint16_t _2389 = _2381 + _2388;
  uint16_t _2390 = _2380 + _2389;
  uint16_t _2391 = _2379 + _2390;
  uint16_t _2392 = _2378 + _2391;
  uint16_t _2393 = _2377 + _2392;
  uint16_t _2394 = _2376 + _2393;
  uint16_t _2395 = _2375 + _2394;
  uint16_t _2396 = _2374 + _2395;
  uint16_t _2397 = _2373 + _2396;
  uint16_t _2398 = _2372 + _2397;
  uint16_t _2399 = _2371 + _2398;
  uint16_t _2400 = _output_cgra_stencil_13 + _2399;
  uint16_t _2401 = _2370 + _2400;
  return _2401;
}

//store is: output_cgra.stencil(13, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(13, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 13, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_14(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_209 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_210 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_211 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_212 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_213 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_214 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_215 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_216 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_217 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_218 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_219 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_220 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_221 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_222 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_223 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_224 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_209 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_210 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_211 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_212 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_213 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_214 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_215 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_216 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_217 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_218 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_219 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_220 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_221 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_222 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_223 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_224 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_14 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2509 = _kernel_cgra_stencil_209 * _input_cgra_stencil_209;
  uint16_t _2510 = _kernel_cgra_stencil_210 * _input_cgra_stencil_210;
  uint16_t _2511 = _kernel_cgra_stencil_211 * _input_cgra_stencil_211;
  uint16_t _2512 = _kernel_cgra_stencil_212 * _input_cgra_stencil_212;
  uint16_t _2513 = _kernel_cgra_stencil_213 * _input_cgra_stencil_213;
  uint16_t _2514 = _kernel_cgra_stencil_214 * _input_cgra_stencil_214;
  uint16_t _2515 = _kernel_cgra_stencil_215 * _input_cgra_stencil_215;
  uint16_t _2516 = _kernel_cgra_stencil_216 * _input_cgra_stencil_216;
  uint16_t _2517 = _kernel_cgra_stencil_217 * _input_cgra_stencil_217;
  uint16_t _2518 = _kernel_cgra_stencil_218 * _input_cgra_stencil_218;
  uint16_t _2519 = _kernel_cgra_stencil_219 * _input_cgra_stencil_219;
  uint16_t _2520 = _kernel_cgra_stencil_220 * _input_cgra_stencil_220;
  uint16_t _2521 = _kernel_cgra_stencil_221 * _input_cgra_stencil_221;
  uint16_t _2522 = _kernel_cgra_stencil_222 * _input_cgra_stencil_222;
  uint16_t _2523 = _kernel_cgra_stencil_223 * _input_cgra_stencil_223;
  uint16_t _2524 = _kernel_cgra_stencil_224 * _input_cgra_stencil_224;
  uint16_t _2525 = _2523 + _2524;
  uint16_t _2526 = _2522 + _2525;
  uint16_t _2527 = _2521 + _2526;
  uint16_t _2528 = _2520 + _2527;
  uint16_t _2529 = _2519 + _2528;
  uint16_t _2530 = _2518 + _2529;
  uint16_t _2531 = _2517 + _2530;
  uint16_t _2532 = _2516 + _2531;
  uint16_t _2533 = _2515 + _2532;
  uint16_t _2534 = _2514 + _2533;
  uint16_t _2535 = _2513 + _2534;
  uint16_t _2536 = _2512 + _2535;
  uint16_t _2537 = _2511 + _2536;
  uint16_t _2538 = _2510 + _2537;
  uint16_t _2539 = _output_cgra_stencil_14 + _2538;
  uint16_t _2540 = _2509 + _2539;
  return _2540;
}

//store is: output_cgra.stencil(14, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(14, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 14, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_15(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_225 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_226 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_227 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_228 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_229 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_230 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_231 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_232 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_233 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_234 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_235 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_236 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_237 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_238 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_239 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_240 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_225 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_226 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_227 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_228 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_229 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_230 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_231 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_232 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_233 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_234 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_235 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_236 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_237 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_238 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_239 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_240 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_15 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2648 = _kernel_cgra_stencil_225 * _input_cgra_stencil_225;
  uint16_t _2649 = _kernel_cgra_stencil_226 * _input_cgra_stencil_226;
  uint16_t _2650 = _kernel_cgra_stencil_227 * _input_cgra_stencil_227;
  uint16_t _2651 = _kernel_cgra_stencil_228 * _input_cgra_stencil_228;
  uint16_t _2652 = _kernel_cgra_stencil_229 * _input_cgra_stencil_229;
  uint16_t _2653 = _kernel_cgra_stencil_230 * _input_cgra_stencil_230;
  uint16_t _2654 = _kernel_cgra_stencil_231 * _input_cgra_stencil_231;
  uint16_t _2655 = _kernel_cgra_stencil_232 * _input_cgra_stencil_232;
  uint16_t _2656 = _kernel_cgra_stencil_233 * _input_cgra_stencil_233;
  uint16_t _2657 = _kernel_cgra_stencil_234 * _input_cgra_stencil_234;
  uint16_t _2658 = _kernel_cgra_stencil_235 * _input_cgra_stencil_235;
  uint16_t _2659 = _kernel_cgra_stencil_236 * _input_cgra_stencil_236;
  uint16_t _2660 = _kernel_cgra_stencil_237 * _input_cgra_stencil_237;
  uint16_t _2661 = _kernel_cgra_stencil_238 * _input_cgra_stencil_238;
  uint16_t _2662 = _kernel_cgra_stencil_239 * _input_cgra_stencil_239;
  uint16_t _2663 = _kernel_cgra_stencil_240 * _input_cgra_stencil_240;
  uint16_t _2664 = _2662 + _2663;
  uint16_t _2665 = _2661 + _2664;
  uint16_t _2666 = _2660 + _2665;
  uint16_t _2667 = _2659 + _2666;
  uint16_t _2668 = _2658 + _2667;
  uint16_t _2669 = _2657 + _2668;
  uint16_t _2670 = _2656 + _2669;
  uint16_t _2671 = _2655 + _2670;
  uint16_t _2672 = _2654 + _2671;
  uint16_t _2673 = _2653 + _2672;
  uint16_t _2674 = _2652 + _2673;
  uint16_t _2675 = _2651 + _2674;
  uint16_t _2676 = _2650 + _2675;
  uint16_t _2677 = _2649 + _2676;
  uint16_t _2678 = _output_cgra_stencil_15 + _2677;
  uint16_t _2679 = _2648 + _2678;
  return _2679;
}

//store is: output_cgra.stencil(15, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) = ((kernel_cgra.stencil(0, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(0, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (output_cgra.stencil(15, (((output_glb_s0_x_x_glb*28) + output_cgra_s1_x) - (output_glb_s0_x_x_glb*28)), (((output_glb_s0_y_y_glb*28) + output_cgra_s1_y) - (output_glb_s0_y_y_glb*28))) + ((kernel_cgra.stencil(1, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(1, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(2, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(2, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(3, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(3, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(4, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(4, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(5, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(5, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(6, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(6, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(7, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(7, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(8, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(8, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(9, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(9, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(10, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(10, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(11, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(11, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(12, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(12, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(13, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(13, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + ((kernel_cgra.stencil(15, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(15, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28)))) + (kernel_cgra.stencil(14, output_cgra_s1_r_z, 15, output_cgra_s1_r_x, output_cgra_s1_r_y)*input_cgra.stencil(14, output_cgra_s1_r_z, ((output_cgra_s1_r_x + ((output_glb_s0_x_x_glb*28) + output_cgra_s1_x)) - (output_glb_s0_x_x_glb*28)), ((output_cgra_s1_r_y + ((output_glb_s0_y_y_glb*28) + output_cgra_s1_y)) - (output_glb_s0_y_y_glb*28))))))))))))))))))))
hw_uint<16> hcompute_output_cgra_stencil_16(hw_uint<256>& input_cgra_stencil, hw_uint<256>& kernel_cgra_stencil, hw_uint<16>& output_cgra_stencil) {
  uint16_t _input_cgra_stencil_241 = (uint16_t) input_cgra_stencil.extract<0, 15>();
  uint16_t _input_cgra_stencil_242 = (uint16_t) input_cgra_stencil.extract<16, 31>();
  uint16_t _input_cgra_stencil_243 = (uint16_t) input_cgra_stencil.extract<32, 47>();
  uint16_t _input_cgra_stencil_244 = (uint16_t) input_cgra_stencil.extract<48, 63>();
  uint16_t _input_cgra_stencil_245 = (uint16_t) input_cgra_stencil.extract<64, 79>();
  uint16_t _input_cgra_stencil_246 = (uint16_t) input_cgra_stencil.extract<80, 95>();
  uint16_t _input_cgra_stencil_247 = (uint16_t) input_cgra_stencil.extract<96, 111>();
  uint16_t _input_cgra_stencil_248 = (uint16_t) input_cgra_stencil.extract<112, 127>();
  uint16_t _input_cgra_stencil_249 = (uint16_t) input_cgra_stencil.extract<128, 143>();
  uint16_t _input_cgra_stencil_250 = (uint16_t) input_cgra_stencil.extract<144, 159>();
  uint16_t _input_cgra_stencil_251 = (uint16_t) input_cgra_stencil.extract<160, 175>();
  uint16_t _input_cgra_stencil_252 = (uint16_t) input_cgra_stencil.extract<176, 191>();
  uint16_t _input_cgra_stencil_253 = (uint16_t) input_cgra_stencil.extract<192, 207>();
  uint16_t _input_cgra_stencil_254 = (uint16_t) input_cgra_stencil.extract<208, 223>();
  uint16_t _input_cgra_stencil_255 = (uint16_t) input_cgra_stencil.extract<224, 239>();
  uint16_t _input_cgra_stencil_256 = (uint16_t) input_cgra_stencil.extract<240, 255>();

  uint16_t _kernel_cgra_stencil_241 = (uint16_t) kernel_cgra_stencil.extract<0, 15>();
  uint16_t _kernel_cgra_stencil_242 = (uint16_t) kernel_cgra_stencil.extract<16, 31>();
  uint16_t _kernel_cgra_stencil_243 = (uint16_t) kernel_cgra_stencil.extract<32, 47>();
  uint16_t _kernel_cgra_stencil_244 = (uint16_t) kernel_cgra_stencil.extract<48, 63>();
  uint16_t _kernel_cgra_stencil_245 = (uint16_t) kernel_cgra_stencil.extract<64, 79>();
  uint16_t _kernel_cgra_stencil_246 = (uint16_t) kernel_cgra_stencil.extract<80, 95>();
  uint16_t _kernel_cgra_stencil_247 = (uint16_t) kernel_cgra_stencil.extract<96, 111>();
  uint16_t _kernel_cgra_stencil_248 = (uint16_t) kernel_cgra_stencil.extract<112, 127>();
  uint16_t _kernel_cgra_stencil_249 = (uint16_t) kernel_cgra_stencil.extract<128, 143>();
  uint16_t _kernel_cgra_stencil_250 = (uint16_t) kernel_cgra_stencil.extract<144, 159>();
  uint16_t _kernel_cgra_stencil_251 = (uint16_t) kernel_cgra_stencil.extract<160, 175>();
  uint16_t _kernel_cgra_stencil_252 = (uint16_t) kernel_cgra_stencil.extract<176, 191>();
  uint16_t _kernel_cgra_stencil_253 = (uint16_t) kernel_cgra_stencil.extract<192, 207>();
  uint16_t _kernel_cgra_stencil_254 = (uint16_t) kernel_cgra_stencil.extract<208, 223>();
  uint16_t _kernel_cgra_stencil_255 = (uint16_t) kernel_cgra_stencil.extract<224, 239>();
  uint16_t _kernel_cgra_stencil_256 = (uint16_t) kernel_cgra_stencil.extract<240, 255>();

  uint16_t _output_cgra_stencil_16 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  uint16_t _2787 = _kernel_cgra_stencil_241 * _input_cgra_stencil_241;
  uint16_t _2788 = _kernel_cgra_stencil_242 * _input_cgra_stencil_242;
  uint16_t _2789 = _kernel_cgra_stencil_243 * _input_cgra_stencil_243;
  uint16_t _2790 = _kernel_cgra_stencil_244 * _input_cgra_stencil_244;
  uint16_t _2791 = _kernel_cgra_stencil_245 * _input_cgra_stencil_245;
  uint16_t _2792 = _kernel_cgra_stencil_246 * _input_cgra_stencil_246;
  uint16_t _2793 = _kernel_cgra_stencil_247 * _input_cgra_stencil_247;
  uint16_t _2794 = _kernel_cgra_stencil_248 * _input_cgra_stencil_248;
  uint16_t _2795 = _kernel_cgra_stencil_249 * _input_cgra_stencil_249;
  uint16_t _2796 = _kernel_cgra_stencil_250 * _input_cgra_stencil_250;
  uint16_t _2797 = _kernel_cgra_stencil_251 * _input_cgra_stencil_251;
  uint16_t _2798 = _kernel_cgra_stencil_252 * _input_cgra_stencil_252;
  uint16_t _2799 = _kernel_cgra_stencil_253 * _input_cgra_stencil_253;
  uint16_t _2800 = _kernel_cgra_stencil_254 * _input_cgra_stencil_254;
  uint16_t _2801 = _kernel_cgra_stencil_255 * _input_cgra_stencil_255;
  uint16_t _2802 = _kernel_cgra_stencil_256 * _input_cgra_stencil_256;
  uint16_t _2803 = _2801 + _2802;
  uint16_t _2804 = _2800 + _2803;
  uint16_t _2805 = _2799 + _2804;
  uint16_t _2806 = _2798 + _2805;
  uint16_t _2807 = _2797 + _2806;
  uint16_t _2808 = _2796 + _2807;
  uint16_t _2809 = _2795 + _2808;
  uint16_t _2810 = _2794 + _2809;
  uint16_t _2811 = _2793 + _2810;
  uint16_t _2812 = _2792 + _2811;
  uint16_t _2813 = _2791 + _2812;
  uint16_t _2814 = _2790 + _2813;
  uint16_t _2815 = _2789 + _2814;
  uint16_t _2816 = _2788 + _2815;
  uint16_t _2817 = _output_cgra_stencil_16 + _2816;
  uint16_t _2818 = _2787 + _2817;
  return _2818;
}

//store is: output_glb.stencil(((output_glb_s0_w_w_glb*16) + output_glb_s0_w_w_cgra), ((output_glb_s0_x_x_glb*28) + output_glb_s0_x_x_cgra), ((output_glb_s0_y_y_glb*28) + output_glb_s0_y_y_cgra)) = output_cgra.stencil(output_glb_s0_w_w_cgra, output_glb_s0_x_x_cgra, output_glb_s0_y_y_cgra)
hw_uint<16> hcompute_output_glb_stencil(hw_uint<16>& output_cgra_stencil) {
  uint16_t _output_cgra_stencil_17 = (uint16_t) output_cgra_stencil.extract<0, 15>();

  return _output_cgra_stencil_17;
}

//store is: hw_output.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi) = output_glb.stencil(hw_output_s0_w, hw_output_s0_x_xi, hw_output_s0_y_yi)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& output_glb_stencil) {
  uint16_t _output_glb_stencil_1 = (uint16_t) output_glb_stencil.extract<0, 15>();

  return _output_glb_stencil_1;
}

