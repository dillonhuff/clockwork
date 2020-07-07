#pragma once
#include "hw_classes.h"
#include "conv_3x3.h"


//store is: hw_input.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y) = input_copy.stencil(hw_input.s0.z, hw_input.s0.x, hw_input.s0.y)
hw_uint<16> hcompute_hw_input_stencil(hw_uint<16>& input_copy_stencil) {
  uint16_t _input_copy_stencil_1 = (uint16_t) input_copy_stencil.extract<0, 15>();

  return _input_copy_stencil_1;
}

//store is: hw_kernel.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y) = kernel_copy.stencil(hw_kernel.s0.z, hw_kernel.s0.w, hw_kernel.s0.x, hw_kernel.s0.y)
hw_uint<16> hcompute_hw_kernel_stencil(hw_uint<16>& kernel_copy_stencil) {
  uint16_t _kernel_copy_stencil_1 = (uint16_t) kernel_copy_stencil.extract<0, 15>();

  return _kernel_copy_stencil_1;
}

//store is: conv.stencil(conv.s0.x, conv.s0.y, conv.s0.w) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _656 = (uint16_t)(0);
  return _656;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 0) = ((hw_kernel.stencil(0, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 0) + (hw_kernel.stencil(7, 0, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_1(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_7 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_8 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_1 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_2 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_3 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_4 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_5 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_6 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_7 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_8 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _659 = _hw_kernel_stencil_1 * _hw_input_stencil_1;
  uint16_t _660 = _hw_kernel_stencil_2 * _hw_input_stencil_2;
  uint16_t _661 = _hw_kernel_stencil_3 * _hw_input_stencil_3;
  uint16_t _662 = _hw_kernel_stencil_4 * _hw_input_stencil_4;
  uint16_t _663 = _hw_kernel_stencil_5 * _hw_input_stencil_5;
  uint16_t _664 = _hw_kernel_stencil_6 * _hw_input_stencil_6;
  uint16_t _665 = _hw_kernel_stencil_7 * _hw_input_stencil_7;
  uint16_t _666 = _hw_kernel_stencil_8 * _hw_input_stencil_8;
  uint16_t _667 = _conv_stencil_1 + _666;
  uint16_t _668 = _665 + _667;
  uint16_t _669 = _664 + _668;
  uint16_t _670 = _663 + _669;
  uint16_t _671 = _662 + _670;
  uint16_t _672 = _661 + _671;
  uint16_t _673 = _660 + _672;
  uint16_t _674 = _659 + _673;
  return _674;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 1) = ((hw_kernel.stencil(0, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 1) + (hw_kernel.stencil(7, 1, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_2(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_10 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_11 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_12 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_13 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_14 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_15 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_16 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_9 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_10 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_11 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_12 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_13 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_14 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_15 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_16 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_9 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _726 = _hw_kernel_stencil_9 * _hw_input_stencil_9;
  uint16_t _727 = _hw_kernel_stencil_10 * _hw_input_stencil_10;
  uint16_t _728 = _hw_kernel_stencil_11 * _hw_input_stencil_11;
  uint16_t _729 = _hw_kernel_stencil_12 * _hw_input_stencil_12;
  uint16_t _730 = _hw_kernel_stencil_13 * _hw_input_stencil_13;
  uint16_t _731 = _hw_kernel_stencil_14 * _hw_input_stencil_14;
  uint16_t _732 = _hw_kernel_stencil_15 * _hw_input_stencil_15;
  uint16_t _733 = _hw_kernel_stencil_16 * _hw_input_stencil_16;
  uint16_t _734 = _conv_stencil_2 + _733;
  uint16_t _735 = _732 + _734;
  uint16_t _736 = _731 + _735;
  uint16_t _737 = _730 + _736;
  uint16_t _738 = _729 + _737;
  uint16_t _739 = _728 + _738;
  uint16_t _740 = _727 + _739;
  uint16_t _741 = _726 + _740;
  return _741;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 2) = ((hw_kernel.stencil(0, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 2) + (hw_kernel.stencil(7, 2, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_3(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_3 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_17 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_18 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_19 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_20 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_21 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_22 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_23 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_24 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_17 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_18 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_19 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_20 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_21 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_22 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_23 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_24 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _793 = _hw_kernel_stencil_17 * _hw_input_stencil_17;
  uint16_t _794 = _hw_kernel_stencil_18 * _hw_input_stencil_18;
  uint16_t _795 = _hw_kernel_stencil_19 * _hw_input_stencil_19;
  uint16_t _796 = _hw_kernel_stencil_20 * _hw_input_stencil_20;
  uint16_t _797 = _hw_kernel_stencil_21 * _hw_input_stencil_21;
  uint16_t _798 = _hw_kernel_stencil_22 * _hw_input_stencil_22;
  uint16_t _799 = _hw_kernel_stencil_23 * _hw_input_stencil_23;
  uint16_t _800 = _hw_kernel_stencil_24 * _hw_input_stencil_24;
  uint16_t _801 = _conv_stencil_3 + _800;
  uint16_t _802 = _799 + _801;
  uint16_t _803 = _798 + _802;
  uint16_t _804 = _797 + _803;
  uint16_t _805 = _796 + _804;
  uint16_t _806 = _795 + _805;
  uint16_t _807 = _794 + _806;
  uint16_t _808 = _793 + _807;
  return _808;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 3) = ((hw_kernel.stencil(0, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 3) + (hw_kernel.stencil(7, 3, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_4(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_4 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_25 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_26 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_27 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_28 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_29 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_30 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_31 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_32 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_25 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_26 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_27 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_28 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_29 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_30 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_31 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_32 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _860 = _hw_kernel_stencil_25 * _hw_input_stencil_25;
  uint16_t _861 = _hw_kernel_stencil_26 * _hw_input_stencil_26;
  uint16_t _862 = _hw_kernel_stencil_27 * _hw_input_stencil_27;
  uint16_t _863 = _hw_kernel_stencil_28 * _hw_input_stencil_28;
  uint16_t _864 = _hw_kernel_stencil_29 * _hw_input_stencil_29;
  uint16_t _865 = _hw_kernel_stencil_30 * _hw_input_stencil_30;
  uint16_t _866 = _hw_kernel_stencil_31 * _hw_input_stencil_31;
  uint16_t _867 = _hw_kernel_stencil_32 * _hw_input_stencil_32;
  uint16_t _868 = _conv_stencil_4 + _867;
  uint16_t _869 = _866 + _868;
  uint16_t _870 = _865 + _869;
  uint16_t _871 = _864 + _870;
  uint16_t _872 = _863 + _871;
  uint16_t _873 = _862 + _872;
  uint16_t _874 = _861 + _873;
  uint16_t _875 = _860 + _874;
  return _875;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 4) = ((hw_kernel.stencil(0, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 4) + (hw_kernel.stencil(7, 4, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_5(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_5 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_33 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_34 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_35 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_36 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_37 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_38 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_39 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_40 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_33 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_34 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_35 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_36 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_37 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_38 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_39 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_40 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _927 = _hw_kernel_stencil_33 * _hw_input_stencil_33;
  uint16_t _928 = _hw_kernel_stencil_34 * _hw_input_stencil_34;
  uint16_t _929 = _hw_kernel_stencil_35 * _hw_input_stencil_35;
  uint16_t _930 = _hw_kernel_stencil_36 * _hw_input_stencil_36;
  uint16_t _931 = _hw_kernel_stencil_37 * _hw_input_stencil_37;
  uint16_t _932 = _hw_kernel_stencil_38 * _hw_input_stencil_38;
  uint16_t _933 = _hw_kernel_stencil_39 * _hw_input_stencil_39;
  uint16_t _934 = _hw_kernel_stencil_40 * _hw_input_stencil_40;
  uint16_t _935 = _conv_stencil_5 + _934;
  uint16_t _936 = _933 + _935;
  uint16_t _937 = _932 + _936;
  uint16_t _938 = _931 + _937;
  uint16_t _939 = _930 + _938;
  uint16_t _940 = _929 + _939;
  uint16_t _941 = _928 + _940;
  uint16_t _942 = _927 + _941;
  return _942;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 5) = ((hw_kernel.stencil(0, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 5) + (hw_kernel.stencil(7, 5, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_6(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_6 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_41 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_42 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_43 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_44 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_45 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_46 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_47 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_48 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_41 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_42 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_43 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_44 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_45 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_46 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_47 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_48 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _994 = _hw_kernel_stencil_41 * _hw_input_stencil_41;
  uint16_t _995 = _hw_kernel_stencil_42 * _hw_input_stencil_42;
  uint16_t _996 = _hw_kernel_stencil_43 * _hw_input_stencil_43;
  uint16_t _997 = _hw_kernel_stencil_44 * _hw_input_stencil_44;
  uint16_t _998 = _hw_kernel_stencil_45 * _hw_input_stencil_45;
  uint16_t _999 = _hw_kernel_stencil_46 * _hw_input_stencil_46;
  uint16_t _1000 = _hw_kernel_stencil_47 * _hw_input_stencil_47;
  uint16_t _1001 = _hw_kernel_stencil_48 * _hw_input_stencil_48;
  uint16_t _1002 = _conv_stencil_6 + _1001;
  uint16_t _1003 = _1000 + _1002;
  uint16_t _1004 = _999 + _1003;
  uint16_t _1005 = _998 + _1004;
  uint16_t _1006 = _997 + _1005;
  uint16_t _1007 = _996 + _1006;
  uint16_t _1008 = _995 + _1007;
  uint16_t _1009 = _994 + _1008;
  return _1009;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 6) = ((hw_kernel.stencil(0, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 6) + (hw_kernel.stencil(7, 6, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_7(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_7 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_49 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_50 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_51 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_52 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_53 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_54 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_55 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_56 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_49 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_50 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_51 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_52 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_53 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_54 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_55 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_56 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1061 = _hw_kernel_stencil_49 * _hw_input_stencil_49;
  uint16_t _1062 = _hw_kernel_stencil_50 * _hw_input_stencil_50;
  uint16_t _1063 = _hw_kernel_stencil_51 * _hw_input_stencil_51;
  uint16_t _1064 = _hw_kernel_stencil_52 * _hw_input_stencil_52;
  uint16_t _1065 = _hw_kernel_stencil_53 * _hw_input_stencil_53;
  uint16_t _1066 = _hw_kernel_stencil_54 * _hw_input_stencil_54;
  uint16_t _1067 = _hw_kernel_stencil_55 * _hw_input_stencil_55;
  uint16_t _1068 = _hw_kernel_stencil_56 * _hw_input_stencil_56;
  uint16_t _1069 = _conv_stencil_7 + _1068;
  uint16_t _1070 = _1067 + _1069;
  uint16_t _1071 = _1066 + _1070;
  uint16_t _1072 = _1065 + _1071;
  uint16_t _1073 = _1064 + _1072;
  uint16_t _1074 = _1063 + _1073;
  uint16_t _1075 = _1062 + _1074;
  uint16_t _1076 = _1061 + _1075;
  return _1076;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 7) = ((hw_kernel.stencil(0, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 7) + (hw_kernel.stencil(7, 7, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_8(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_8 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_57 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_58 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_59 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_60 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_61 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_62 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_63 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_64 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_57 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_58 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_59 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_60 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_61 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_62 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_63 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_64 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1128 = _hw_kernel_stencil_57 * _hw_input_stencil_57;
  uint16_t _1129 = _hw_kernel_stencil_58 * _hw_input_stencil_58;
  uint16_t _1130 = _hw_kernel_stencil_59 * _hw_input_stencil_59;
  uint16_t _1131 = _hw_kernel_stencil_60 * _hw_input_stencil_60;
  uint16_t _1132 = _hw_kernel_stencil_61 * _hw_input_stencil_61;
  uint16_t _1133 = _hw_kernel_stencil_62 * _hw_input_stencil_62;
  uint16_t _1134 = _hw_kernel_stencil_63 * _hw_input_stencil_63;
  uint16_t _1135 = _hw_kernel_stencil_64 * _hw_input_stencil_64;
  uint16_t _1136 = _conv_stencil_8 + _1135;
  uint16_t _1137 = _1134 + _1136;
  uint16_t _1138 = _1133 + _1137;
  uint16_t _1139 = _1132 + _1138;
  uint16_t _1140 = _1131 + _1139;
  uint16_t _1141 = _1130 + _1140;
  uint16_t _1142 = _1129 + _1141;
  uint16_t _1143 = _1128 + _1142;
  return _1143;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 8) = ((hw_kernel.stencil(0, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 8) + (hw_kernel.stencil(7, 8, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_9(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_9 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_65 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_66 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_67 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_68 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_69 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_70 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_71 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_72 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_65 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_66 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_67 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_68 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_69 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_70 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_71 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_72 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1195 = _hw_kernel_stencil_65 * _hw_input_stencil_65;
  uint16_t _1196 = _hw_kernel_stencil_66 * _hw_input_stencil_66;
  uint16_t _1197 = _hw_kernel_stencil_67 * _hw_input_stencil_67;
  uint16_t _1198 = _hw_kernel_stencil_68 * _hw_input_stencil_68;
  uint16_t _1199 = _hw_kernel_stencil_69 * _hw_input_stencil_69;
  uint16_t _1200 = _hw_kernel_stencil_70 * _hw_input_stencil_70;
  uint16_t _1201 = _hw_kernel_stencil_71 * _hw_input_stencil_71;
  uint16_t _1202 = _hw_kernel_stencil_72 * _hw_input_stencil_72;
  uint16_t _1203 = _conv_stencil_9 + _1202;
  uint16_t _1204 = _1201 + _1203;
  uint16_t _1205 = _1200 + _1204;
  uint16_t _1206 = _1199 + _1205;
  uint16_t _1207 = _1198 + _1206;
  uint16_t _1208 = _1197 + _1207;
  uint16_t _1209 = _1196 + _1208;
  uint16_t _1210 = _1195 + _1209;
  return _1210;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 9) = ((hw_kernel.stencil(0, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 9) + (hw_kernel.stencil(7, 9, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_10(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_10 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_73 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_74 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_75 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_76 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_77 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_78 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_79 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_80 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_73 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_74 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_75 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_76 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_77 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_78 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_79 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_80 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1262 = _hw_kernel_stencil_73 * _hw_input_stencil_73;
  uint16_t _1263 = _hw_kernel_stencil_74 * _hw_input_stencil_74;
  uint16_t _1264 = _hw_kernel_stencil_75 * _hw_input_stencil_75;
  uint16_t _1265 = _hw_kernel_stencil_76 * _hw_input_stencil_76;
  uint16_t _1266 = _hw_kernel_stencil_77 * _hw_input_stencil_77;
  uint16_t _1267 = _hw_kernel_stencil_78 * _hw_input_stencil_78;
  uint16_t _1268 = _hw_kernel_stencil_79 * _hw_input_stencil_79;
  uint16_t _1269 = _hw_kernel_stencil_80 * _hw_input_stencil_80;
  uint16_t _1270 = _conv_stencil_10 + _1269;
  uint16_t _1271 = _1268 + _1270;
  uint16_t _1272 = _1267 + _1271;
  uint16_t _1273 = _1266 + _1272;
  uint16_t _1274 = _1265 + _1273;
  uint16_t _1275 = _1264 + _1274;
  uint16_t _1276 = _1263 + _1275;
  uint16_t _1277 = _1262 + _1276;
  return _1277;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 10) = ((hw_kernel.stencil(0, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 10) + (hw_kernel.stencil(7, 10, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_11(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_11 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_81 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_82 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_83 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_84 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_85 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_86 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_87 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_88 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_81 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_82 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_83 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_84 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_85 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_86 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_87 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_88 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1329 = _hw_kernel_stencil_81 * _hw_input_stencil_81;
  uint16_t _1330 = _hw_kernel_stencil_82 * _hw_input_stencil_82;
  uint16_t _1331 = _hw_kernel_stencil_83 * _hw_input_stencil_83;
  uint16_t _1332 = _hw_kernel_stencil_84 * _hw_input_stencil_84;
  uint16_t _1333 = _hw_kernel_stencil_85 * _hw_input_stencil_85;
  uint16_t _1334 = _hw_kernel_stencil_86 * _hw_input_stencil_86;
  uint16_t _1335 = _hw_kernel_stencil_87 * _hw_input_stencil_87;
  uint16_t _1336 = _hw_kernel_stencil_88 * _hw_input_stencil_88;
  uint16_t _1337 = _conv_stencil_11 + _1336;
  uint16_t _1338 = _1335 + _1337;
  uint16_t _1339 = _1334 + _1338;
  uint16_t _1340 = _1333 + _1339;
  uint16_t _1341 = _1332 + _1340;
  uint16_t _1342 = _1331 + _1341;
  uint16_t _1343 = _1330 + _1342;
  uint16_t _1344 = _1329 + _1343;
  return _1344;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 11) = ((hw_kernel.stencil(0, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 11) + (hw_kernel.stencil(7, 11, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_12(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_12 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_89 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_90 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_91 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_92 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_93 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_94 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_95 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_96 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_89 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_90 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_91 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_92 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_93 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_94 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_95 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_96 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1396 = _hw_kernel_stencil_89 * _hw_input_stencil_89;
  uint16_t _1397 = _hw_kernel_stencil_90 * _hw_input_stencil_90;
  uint16_t _1398 = _hw_kernel_stencil_91 * _hw_input_stencil_91;
  uint16_t _1399 = _hw_kernel_stencil_92 * _hw_input_stencil_92;
  uint16_t _1400 = _hw_kernel_stencil_93 * _hw_input_stencil_93;
  uint16_t _1401 = _hw_kernel_stencil_94 * _hw_input_stencil_94;
  uint16_t _1402 = _hw_kernel_stencil_95 * _hw_input_stencil_95;
  uint16_t _1403 = _hw_kernel_stencil_96 * _hw_input_stencil_96;
  uint16_t _1404 = _conv_stencil_12 + _1403;
  uint16_t _1405 = _1402 + _1404;
  uint16_t _1406 = _1401 + _1405;
  uint16_t _1407 = _1400 + _1406;
  uint16_t _1408 = _1399 + _1407;
  uint16_t _1409 = _1398 + _1408;
  uint16_t _1410 = _1397 + _1409;
  uint16_t _1411 = _1396 + _1410;
  return _1411;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 12) = ((hw_kernel.stencil(0, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 12) + (hw_kernel.stencil(7, 12, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_13(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_13 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_100 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_101 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_102 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_103 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_104 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_97 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_98 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_99 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_100 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_101 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_102 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_103 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_104 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_97 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_98 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_99 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1463 = _hw_kernel_stencil_97 * _hw_input_stencil_97;
  uint16_t _1464 = _hw_kernel_stencil_98 * _hw_input_stencil_98;
  uint16_t _1465 = _hw_kernel_stencil_99 * _hw_input_stencil_99;
  uint16_t _1466 = _hw_kernel_stencil_100 * _hw_input_stencil_100;
  uint16_t _1467 = _hw_kernel_stencil_101 * _hw_input_stencil_101;
  uint16_t _1468 = _hw_kernel_stencil_102 * _hw_input_stencil_102;
  uint16_t _1469 = _hw_kernel_stencil_103 * _hw_input_stencil_103;
  uint16_t _1470 = _hw_kernel_stencil_104 * _hw_input_stencil_104;
  uint16_t _1471 = _conv_stencil_13 + _1470;
  uint16_t _1472 = _1469 + _1471;
  uint16_t _1473 = _1468 + _1472;
  uint16_t _1474 = _1467 + _1473;
  uint16_t _1475 = _1466 + _1474;
  uint16_t _1476 = _1465 + _1475;
  uint16_t _1477 = _1464 + _1476;
  uint16_t _1478 = _1463 + _1477;
  return _1478;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 13) = ((hw_kernel.stencil(0, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 13) + (hw_kernel.stencil(7, 13, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_14(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_14 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_105 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_106 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_107 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_108 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_109 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_110 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_111 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_112 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_105 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_106 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_107 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_108 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_109 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_110 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_111 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_112 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1530 = _hw_kernel_stencil_105 * _hw_input_stencil_105;
  uint16_t _1531 = _hw_kernel_stencil_106 * _hw_input_stencil_106;
  uint16_t _1532 = _hw_kernel_stencil_107 * _hw_input_stencil_107;
  uint16_t _1533 = _hw_kernel_stencil_108 * _hw_input_stencil_108;
  uint16_t _1534 = _hw_kernel_stencil_109 * _hw_input_stencil_109;
  uint16_t _1535 = _hw_kernel_stencil_110 * _hw_input_stencil_110;
  uint16_t _1536 = _hw_kernel_stencil_111 * _hw_input_stencil_111;
  uint16_t _1537 = _hw_kernel_stencil_112 * _hw_input_stencil_112;
  uint16_t _1538 = _conv_stencil_14 + _1537;
  uint16_t _1539 = _1536 + _1538;
  uint16_t _1540 = _1535 + _1539;
  uint16_t _1541 = _1534 + _1540;
  uint16_t _1542 = _1533 + _1541;
  uint16_t _1543 = _1532 + _1542;
  uint16_t _1544 = _1531 + _1543;
  uint16_t _1545 = _1530 + _1544;
  return _1545;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 14) = ((hw_kernel.stencil(0, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 14) + (hw_kernel.stencil(7, 14, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_15(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_15 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_113 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_114 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_115 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_116 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_117 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_118 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_119 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_120 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_113 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_114 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_115 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_116 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_117 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_118 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_119 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_120 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1597 = _hw_kernel_stencil_113 * _hw_input_stencil_113;
  uint16_t _1598 = _hw_kernel_stencil_114 * _hw_input_stencil_114;
  uint16_t _1599 = _hw_kernel_stencil_115 * _hw_input_stencil_115;
  uint16_t _1600 = _hw_kernel_stencil_116 * _hw_input_stencil_116;
  uint16_t _1601 = _hw_kernel_stencil_117 * _hw_input_stencil_117;
  uint16_t _1602 = _hw_kernel_stencil_118 * _hw_input_stencil_118;
  uint16_t _1603 = _hw_kernel_stencil_119 * _hw_input_stencil_119;
  uint16_t _1604 = _hw_kernel_stencil_120 * _hw_input_stencil_120;
  uint16_t _1605 = _conv_stencil_15 + _1604;
  uint16_t _1606 = _1603 + _1605;
  uint16_t _1607 = _1602 + _1606;
  uint16_t _1608 = _1601 + _1607;
  uint16_t _1609 = _1600 + _1608;
  uint16_t _1610 = _1599 + _1609;
  uint16_t _1611 = _1598 + _1610;
  uint16_t _1612 = _1597 + _1611;
  return _1612;
}

//store is: conv.stencil(conv.s1.x, conv.s1.y, 15) = ((hw_kernel.stencil(0, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(0, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(1, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(1, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(2, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(2, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(3, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(3, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(4, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(4, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(5, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(5, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + ((hw_kernel.stencil(6, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(6, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y))) + (conv.stencil(conv.s1.x, conv.s1.y, 15) + (hw_kernel.stencil(7, 15, conv.s1.r$x, conv.s1.r$y)*hw_input.stencil(7, (conv.s1.r$x + conv.s1.x), (conv.s1.r$y + conv.s1.y)))))))))))
hw_uint<16> hcompute_conv_stencil_16(hw_uint<16>& conv_stencil, hw_uint<128>& hw_input_stencil, hw_uint<128>& hw_kernel_stencil) {
  uint16_t _conv_stencil_16 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_stencil_121 = (uint16_t) hw_input_stencil.extract<0, 15>();
  uint16_t _hw_input_stencil_122 = (uint16_t) hw_input_stencil.extract<16, 31>();
  uint16_t _hw_input_stencil_123 = (uint16_t) hw_input_stencil.extract<32, 47>();
  uint16_t _hw_input_stencil_124 = (uint16_t) hw_input_stencil.extract<48, 63>();
  uint16_t _hw_input_stencil_125 = (uint16_t) hw_input_stencil.extract<64, 79>();
  uint16_t _hw_input_stencil_126 = (uint16_t) hw_input_stencil.extract<80, 95>();
  uint16_t _hw_input_stencil_127 = (uint16_t) hw_input_stencil.extract<96, 111>();
  uint16_t _hw_input_stencil_128 = (uint16_t) hw_input_stencil.extract<112, 127>();

  uint16_t _hw_kernel_stencil_121 = (uint16_t) hw_kernel_stencil.extract<0, 15>();
  uint16_t _hw_kernel_stencil_122 = (uint16_t) hw_kernel_stencil.extract<16, 31>();
  uint16_t _hw_kernel_stencil_123 = (uint16_t) hw_kernel_stencil.extract<32, 47>();
  uint16_t _hw_kernel_stencil_124 = (uint16_t) hw_kernel_stencil.extract<48, 63>();
  uint16_t _hw_kernel_stencil_125 = (uint16_t) hw_kernel_stencil.extract<64, 79>();
  uint16_t _hw_kernel_stencil_126 = (uint16_t) hw_kernel_stencil.extract<80, 95>();
  uint16_t _hw_kernel_stencil_127 = (uint16_t) hw_kernel_stencil.extract<96, 111>();
  uint16_t _hw_kernel_stencil_128 = (uint16_t) hw_kernel_stencil.extract<112, 127>();

  uint16_t _1664 = _hw_kernel_stencil_121 * _hw_input_stencil_121;
  uint16_t _1665 = _hw_kernel_stencil_122 * _hw_input_stencil_122;
  uint16_t _1666 = _hw_kernel_stencil_123 * _hw_input_stencil_123;
  uint16_t _1667 = _hw_kernel_stencil_124 * _hw_input_stencil_124;
  uint16_t _1668 = _hw_kernel_stencil_125 * _hw_input_stencil_125;
  uint16_t _1669 = _hw_kernel_stencil_126 * _hw_input_stencil_126;
  uint16_t _1670 = _hw_kernel_stencil_127 * _hw_input_stencil_127;
  uint16_t _1671 = _hw_kernel_stencil_128 * _hw_input_stencil_128;
  uint16_t _1672 = _conv_stencil_16 + _1671;
  uint16_t _1673 = _1670 + _1672;
  uint16_t _1674 = _1669 + _1673;
  uint16_t _1675 = _1668 + _1674;
  uint16_t _1676 = _1667 + _1675;
  uint16_t _1677 = _1666 + _1676;
  uint16_t _1678 = _1665 + _1677;
  uint16_t _1679 = _1664 + _1678;
  return _1679;
}

//store is: hw_output.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w) = uint8(conv.stencil(hw_output.s0.x.xi, hw_output.s0.y.yi, hw_output.s0.w))
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_17 = (uint16_t) conv_stencil.extract<0, 15>();

  uint8_t _1731 = (uint8_t)(_conv_stencil_17);
  return _1731;
}

