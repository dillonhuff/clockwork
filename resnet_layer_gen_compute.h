#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(0, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(1, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y) = hw_input.stencil(2, hw_input_global_wrapper_s0_x, hw_input_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_input_global_wrapper_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_kernel_global_wrapper.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y) = hw_kernel.stencil(hw_kernel_global_wrapper_s0_z, hw_kernel_global_wrapper_s0_w, hw_kernel_global_wrapper_s0_x, hw_kernel_global_wrapper_s0_y)
hw_uint<16> hcompute_hw_kernel_global_wrapper_stencil(hw_uint<16>& hw_kernel_stencil) {
  uint16_t _hw_kernel_stencil_1 = (uint16_t) hw_kernel_stencil.extract<0, 15>();

  return _hw_kernel_stencil_1;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 0) = (uint16)0
hw_uint<16> hcompute_conv_stencil() {
  uint16_t _676 = (uint16_t)(0);
  return _676;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 1) = (uint16)0
hw_uint<16> hcompute_conv_stencil_1() {
  uint16_t _679 = (uint16_t)(0);
  return _679;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 2) = (uint16)0
hw_uint<16> hcompute_conv_stencil_2() {
  uint16_t _682 = (uint16_t)(0);
  return _682;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 3) = (uint16)0
hw_uint<16> hcompute_conv_stencil_3() {
  uint16_t _685 = (uint16_t)(0);
  return _685;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 4) = (uint16)0
hw_uint<16> hcompute_conv_stencil_4() {
  uint16_t _688 = (uint16_t)(0);
  return _688;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 5) = (uint16)0
hw_uint<16> hcompute_conv_stencil_5() {
  uint16_t _691 = (uint16_t)(0);
  return _691;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 6) = (uint16)0
hw_uint<16> hcompute_conv_stencil_6() {
  uint16_t _694 = (uint16_t)(0);
  return _694;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 7) = (uint16)0
hw_uint<16> hcompute_conv_stencil_7() {
  uint16_t _697 = (uint16_t)(0);
  return _697;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 8) = (uint16)0
hw_uint<16> hcompute_conv_stencil_8() {
  uint16_t _700 = (uint16_t)(0);
  return _700;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 9) = (uint16)0
hw_uint<16> hcompute_conv_stencil_9() {
  uint16_t _703 = (uint16_t)(0);
  return _703;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 10) = (uint16)0
hw_uint<16> hcompute_conv_stencil_10() {
  uint16_t _706 = (uint16_t)(0);
  return _706;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 11) = (uint16)0
hw_uint<16> hcompute_conv_stencil_11() {
  uint16_t _709 = (uint16_t)(0);
  return _709;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 12) = (uint16)0
hw_uint<16> hcompute_conv_stencil_12() {
  uint16_t _712 = (uint16_t)(0);
  return _712;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 13) = (uint16)0
hw_uint<16> hcompute_conv_stencil_13() {
  uint16_t _715 = (uint16_t)(0);
  return _715;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 14) = (uint16)0
hw_uint<16> hcompute_conv_stencil_14() {
  uint16_t _718 = (uint16_t)(0);
  return _718;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 15) = (uint16)0
hw_uint<16> hcompute_conv_stencil_15() {
  uint16_t _721 = (uint16_t)(0);
  return _721;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 16) = (uint16)0
hw_uint<16> hcompute_conv_stencil_16() {
  uint16_t _724 = (uint16_t)(0);
  return _724;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 17) = (uint16)0
hw_uint<16> hcompute_conv_stencil_17() {
  uint16_t _727 = (uint16_t)(0);
  return _727;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 18) = (uint16)0
hw_uint<16> hcompute_conv_stencil_18() {
  uint16_t _730 = (uint16_t)(0);
  return _730;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 19) = (uint16)0
hw_uint<16> hcompute_conv_stencil_19() {
  uint16_t _733 = (uint16_t)(0);
  return _733;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 20) = (uint16)0
hw_uint<16> hcompute_conv_stencil_20() {
  uint16_t _736 = (uint16_t)(0);
  return _736;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 21) = (uint16)0
hw_uint<16> hcompute_conv_stencil_21() {
  uint16_t _739 = (uint16_t)(0);
  return _739;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 22) = (uint16)0
hw_uint<16> hcompute_conv_stencil_22() {
  uint16_t _742 = (uint16_t)(0);
  return _742;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 23) = (uint16)0
hw_uint<16> hcompute_conv_stencil_23() {
  uint16_t _745 = (uint16_t)(0);
  return _745;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 24) = (uint16)0
hw_uint<16> hcompute_conv_stencil_24() {
  uint16_t _748 = (uint16_t)(0);
  return _748;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 25) = (uint16)0
hw_uint<16> hcompute_conv_stencil_25() {
  uint16_t _751 = (uint16_t)(0);
  return _751;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 26) = (uint16)0
hw_uint<16> hcompute_conv_stencil_26() {
  uint16_t _754 = (uint16_t)(0);
  return _754;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 27) = (uint16)0
hw_uint<16> hcompute_conv_stencil_27() {
  uint16_t _757 = (uint16_t)(0);
  return _757;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 28) = (uint16)0
hw_uint<16> hcompute_conv_stencil_28() {
  uint16_t _760 = (uint16_t)(0);
  return _760;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 29) = (uint16)0
hw_uint<16> hcompute_conv_stencil_29() {
  uint16_t _763 = (uint16_t)(0);
  return _763;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 30) = (uint16)0
hw_uint<16> hcompute_conv_stencil_30() {
  uint16_t _766 = (uint16_t)(0);
  return _766;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 31) = (uint16)0
hw_uint<16> hcompute_conv_stencil_31() {
  uint16_t _769 = (uint16_t)(0);
  return _769;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 32) = (uint16)0
hw_uint<16> hcompute_conv_stencil_32() {
  uint16_t _772 = (uint16_t)(0);
  return _772;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 33) = (uint16)0
hw_uint<16> hcompute_conv_stencil_33() {
  uint16_t _775 = (uint16_t)(0);
  return _775;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 34) = (uint16)0
hw_uint<16> hcompute_conv_stencil_34() {
  uint16_t _778 = (uint16_t)(0);
  return _778;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 35) = (uint16)0
hw_uint<16> hcompute_conv_stencil_35() {
  uint16_t _781 = (uint16_t)(0);
  return _781;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 36) = (uint16)0
hw_uint<16> hcompute_conv_stencil_36() {
  uint16_t _784 = (uint16_t)(0);
  return _784;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 37) = (uint16)0
hw_uint<16> hcompute_conv_stencil_37() {
  uint16_t _787 = (uint16_t)(0);
  return _787;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 38) = (uint16)0
hw_uint<16> hcompute_conv_stencil_38() {
  uint16_t _790 = (uint16_t)(0);
  return _790;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 39) = (uint16)0
hw_uint<16> hcompute_conv_stencil_39() {
  uint16_t _793 = (uint16_t)(0);
  return _793;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 40) = (uint16)0
hw_uint<16> hcompute_conv_stencil_40() {
  uint16_t _796 = (uint16_t)(0);
  return _796;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 41) = (uint16)0
hw_uint<16> hcompute_conv_stencil_41() {
  uint16_t _799 = (uint16_t)(0);
  return _799;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 42) = (uint16)0
hw_uint<16> hcompute_conv_stencil_42() {
  uint16_t _802 = (uint16_t)(0);
  return _802;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 43) = (uint16)0
hw_uint<16> hcompute_conv_stencil_43() {
  uint16_t _805 = (uint16_t)(0);
  return _805;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 44) = (uint16)0
hw_uint<16> hcompute_conv_stencil_44() {
  uint16_t _808 = (uint16_t)(0);
  return _808;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 45) = (uint16)0
hw_uint<16> hcompute_conv_stencil_45() {
  uint16_t _811 = (uint16_t)(0);
  return _811;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 46) = (uint16)0
hw_uint<16> hcompute_conv_stencil_46() {
  uint16_t _814 = (uint16_t)(0);
  return _814;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 47) = (uint16)0
hw_uint<16> hcompute_conv_stencil_47() {
  uint16_t _817 = (uint16_t)(0);
  return _817;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 48) = (uint16)0
hw_uint<16> hcompute_conv_stencil_48() {
  uint16_t _820 = (uint16_t)(0);
  return _820;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 49) = (uint16)0
hw_uint<16> hcompute_conv_stencil_49() {
  uint16_t _823 = (uint16_t)(0);
  return _823;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 50) = (uint16)0
hw_uint<16> hcompute_conv_stencil_50() {
  uint16_t _826 = (uint16_t)(0);
  return _826;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 51) = (uint16)0
hw_uint<16> hcompute_conv_stencil_51() {
  uint16_t _829 = (uint16_t)(0);
  return _829;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 52) = (uint16)0
hw_uint<16> hcompute_conv_stencil_52() {
  uint16_t _832 = (uint16_t)(0);
  return _832;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 53) = (uint16)0
hw_uint<16> hcompute_conv_stencil_53() {
  uint16_t _835 = (uint16_t)(0);
  return _835;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 54) = (uint16)0
hw_uint<16> hcompute_conv_stencil_54() {
  uint16_t _838 = (uint16_t)(0);
  return _838;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 55) = (uint16)0
hw_uint<16> hcompute_conv_stencil_55() {
  uint16_t _841 = (uint16_t)(0);
  return _841;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 56) = (uint16)0
hw_uint<16> hcompute_conv_stencil_56() {
  uint16_t _844 = (uint16_t)(0);
  return _844;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 57) = (uint16)0
hw_uint<16> hcompute_conv_stencil_57() {
  uint16_t _847 = (uint16_t)(0);
  return _847;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 58) = (uint16)0
hw_uint<16> hcompute_conv_stencil_58() {
  uint16_t _850 = (uint16_t)(0);
  return _850;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 59) = (uint16)0
hw_uint<16> hcompute_conv_stencil_59() {
  uint16_t _853 = (uint16_t)(0);
  return _853;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 60) = (uint16)0
hw_uint<16> hcompute_conv_stencil_60() {
  uint16_t _856 = (uint16_t)(0);
  return _856;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 61) = (uint16)0
hw_uint<16> hcompute_conv_stencil_61() {
  uint16_t _859 = (uint16_t)(0);
  return _859;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 62) = (uint16)0
hw_uint<16> hcompute_conv_stencil_62() {
  uint16_t _862 = (uint16_t)(0);
  return _862;
}

//store is: conv.stencil(conv_s0_x, conv_s0_y, 63) = (uint16)0
hw_uint<16> hcompute_conv_stencil_63() {
  uint16_t _865 = (uint16_t)(0);
  return _865;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 0) = ((hw_kernel_global_wrapper.stencil(0, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 0) + ((hw_kernel_global_wrapper.stencil(2, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 0, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_64(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_1 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_1 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_2 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_3 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _868 = _hw_kernel_global_wrapper_stencil_1 * _hw_input_global_wrapper_stencil_1;
  uint16_t _869 = _hw_kernel_global_wrapper_stencil_2 * _hw_input_global_wrapper_stencil_2;
  uint16_t _870 = _hw_kernel_global_wrapper_stencil_3 * _hw_input_global_wrapper_stencil_3;
  uint16_t _871 = _869 + _870;
  uint16_t _872 = _conv_stencil_1 + _871;
  uint16_t _873 = _868 + _872;
  return _873;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 1) = ((hw_kernel_global_wrapper.stencil(0, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 1) + ((hw_kernel_global_wrapper.stencil(2, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 1, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_65(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_2 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_4 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_5 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_6 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _897 = _hw_kernel_global_wrapper_stencil_4 * _hw_input_global_wrapper_stencil_4;
  uint16_t _898 = _hw_kernel_global_wrapper_stencil_5 * _hw_input_global_wrapper_stencil_5;
  uint16_t _899 = _hw_kernel_global_wrapper_stencil_6 * _hw_input_global_wrapper_stencil_6;
  uint16_t _900 = _898 + _899;
  uint16_t _901 = _conv_stencil_2 + _900;
  uint16_t _902 = _897 + _901;
  return _902;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 2) = ((hw_kernel_global_wrapper.stencil(0, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 2) + ((hw_kernel_global_wrapper.stencil(2, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 2, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_66(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_3 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_7 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_8 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_9 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _926 = _hw_kernel_global_wrapper_stencil_7 * _hw_input_global_wrapper_stencil_7;
  uint16_t _927 = _hw_kernel_global_wrapper_stencil_8 * _hw_input_global_wrapper_stencil_8;
  uint16_t _928 = _hw_kernel_global_wrapper_stencil_9 * _hw_input_global_wrapper_stencil_9;
  uint16_t _929 = _927 + _928;
  uint16_t _930 = _conv_stencil_3 + _929;
  uint16_t _931 = _926 + _930;
  return _931;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 3) = ((hw_kernel_global_wrapper.stencil(0, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 3) + ((hw_kernel_global_wrapper.stencil(2, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 3, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_67(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_4 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_11 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_12 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_10 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_11 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_12 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _955 = _hw_kernel_global_wrapper_stencil_10 * _hw_input_global_wrapper_stencil_10;
  uint16_t _956 = _hw_kernel_global_wrapper_stencil_11 * _hw_input_global_wrapper_stencil_11;
  uint16_t _957 = _hw_kernel_global_wrapper_stencil_12 * _hw_input_global_wrapper_stencil_12;
  uint16_t _958 = _956 + _957;
  uint16_t _959 = _conv_stencil_4 + _958;
  uint16_t _960 = _955 + _959;
  return _960;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 4) = ((hw_kernel_global_wrapper.stencil(0, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 4) + ((hw_kernel_global_wrapper.stencil(2, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 4, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_68(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_5 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_13 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_14 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_15 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_13 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_14 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_15 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _984 = _hw_kernel_global_wrapper_stencil_13 * _hw_input_global_wrapper_stencil_13;
  uint16_t _985 = _hw_kernel_global_wrapper_stencil_14 * _hw_input_global_wrapper_stencil_14;
  uint16_t _986 = _hw_kernel_global_wrapper_stencil_15 * _hw_input_global_wrapper_stencil_15;
  uint16_t _987 = _985 + _986;
  uint16_t _988 = _conv_stencil_5 + _987;
  uint16_t _989 = _984 + _988;
  return _989;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 5) = ((hw_kernel_global_wrapper.stencil(0, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 5) + ((hw_kernel_global_wrapper.stencil(2, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 5, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_69(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_6 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_16 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_17 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_18 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_16 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_17 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_18 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1013 = _hw_kernel_global_wrapper_stencil_16 * _hw_input_global_wrapper_stencil_16;
  uint16_t _1014 = _hw_kernel_global_wrapper_stencil_17 * _hw_input_global_wrapper_stencil_17;
  uint16_t _1015 = _hw_kernel_global_wrapper_stencil_18 * _hw_input_global_wrapper_stencil_18;
  uint16_t _1016 = _1014 + _1015;
  uint16_t _1017 = _conv_stencil_6 + _1016;
  uint16_t _1018 = _1013 + _1017;
  return _1018;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 6) = ((hw_kernel_global_wrapper.stencil(0, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 6) + ((hw_kernel_global_wrapper.stencil(2, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 6, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_70(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_7 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_19 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_20 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_21 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_19 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_20 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_21 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1042 = _hw_kernel_global_wrapper_stencil_19 * _hw_input_global_wrapper_stencil_19;
  uint16_t _1043 = _hw_kernel_global_wrapper_stencil_20 * _hw_input_global_wrapper_stencil_20;
  uint16_t _1044 = _hw_kernel_global_wrapper_stencil_21 * _hw_input_global_wrapper_stencil_21;
  uint16_t _1045 = _1043 + _1044;
  uint16_t _1046 = _conv_stencil_7 + _1045;
  uint16_t _1047 = _1042 + _1046;
  return _1047;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 7) = ((hw_kernel_global_wrapper.stencil(0, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 7) + ((hw_kernel_global_wrapper.stencil(2, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 7, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_71(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_8 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_22 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_23 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_24 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_22 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_23 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_24 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1071 = _hw_kernel_global_wrapper_stencil_22 * _hw_input_global_wrapper_stencil_22;
  uint16_t _1072 = _hw_kernel_global_wrapper_stencil_23 * _hw_input_global_wrapper_stencil_23;
  uint16_t _1073 = _hw_kernel_global_wrapper_stencil_24 * _hw_input_global_wrapper_stencil_24;
  uint16_t _1074 = _1072 + _1073;
  uint16_t _1075 = _conv_stencil_8 + _1074;
  uint16_t _1076 = _1071 + _1075;
  return _1076;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 8) = ((hw_kernel_global_wrapper.stencil(0, 8, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 8) + ((hw_kernel_global_wrapper.stencil(2, 8, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 8, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_72(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_9 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_25 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_26 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_27 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_25 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_26 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_27 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1100 = _hw_kernel_global_wrapper_stencil_25 * _hw_input_global_wrapper_stencil_25;
  uint16_t _1101 = _hw_kernel_global_wrapper_stencil_26 * _hw_input_global_wrapper_stencil_26;
  uint16_t _1102 = _hw_kernel_global_wrapper_stencil_27 * _hw_input_global_wrapper_stencil_27;
  uint16_t _1103 = _1101 + _1102;
  uint16_t _1104 = _conv_stencil_9 + _1103;
  uint16_t _1105 = _1100 + _1104;
  return _1105;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 9) = ((hw_kernel_global_wrapper.stencil(0, 9, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 9) + ((hw_kernel_global_wrapper.stencil(2, 9, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 9, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_73(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_10 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_28 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_29 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_30 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_28 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_29 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_30 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1129 = _hw_kernel_global_wrapper_stencil_28 * _hw_input_global_wrapper_stencil_28;
  uint16_t _1130 = _hw_kernel_global_wrapper_stencil_29 * _hw_input_global_wrapper_stencil_29;
  uint16_t _1131 = _hw_kernel_global_wrapper_stencil_30 * _hw_input_global_wrapper_stencil_30;
  uint16_t _1132 = _1130 + _1131;
  uint16_t _1133 = _conv_stencil_10 + _1132;
  uint16_t _1134 = _1129 + _1133;
  return _1134;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 10) = ((hw_kernel_global_wrapper.stencil(0, 10, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 10) + ((hw_kernel_global_wrapper.stencil(2, 10, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 10, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_74(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_11 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_31 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_32 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_33 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_31 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_32 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_33 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1158 = _hw_kernel_global_wrapper_stencil_31 * _hw_input_global_wrapper_stencil_31;
  uint16_t _1159 = _hw_kernel_global_wrapper_stencil_32 * _hw_input_global_wrapper_stencil_32;
  uint16_t _1160 = _hw_kernel_global_wrapper_stencil_33 * _hw_input_global_wrapper_stencil_33;
  uint16_t _1161 = _1159 + _1160;
  uint16_t _1162 = _conv_stencil_11 + _1161;
  uint16_t _1163 = _1158 + _1162;
  return _1163;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 11) = ((hw_kernel_global_wrapper.stencil(0, 11, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 11) + ((hw_kernel_global_wrapper.stencil(2, 11, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 11, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_75(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_12 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_34 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_35 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_36 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_34 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_35 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_36 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1187 = _hw_kernel_global_wrapper_stencil_34 * _hw_input_global_wrapper_stencil_34;
  uint16_t _1188 = _hw_kernel_global_wrapper_stencil_35 * _hw_input_global_wrapper_stencil_35;
  uint16_t _1189 = _hw_kernel_global_wrapper_stencil_36 * _hw_input_global_wrapper_stencil_36;
  uint16_t _1190 = _1188 + _1189;
  uint16_t _1191 = _conv_stencil_12 + _1190;
  uint16_t _1192 = _1187 + _1191;
  return _1192;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 12) = ((hw_kernel_global_wrapper.stencil(0, 12, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 12) + ((hw_kernel_global_wrapper.stencil(2, 12, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 12, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_76(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_13 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_37 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_38 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_39 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_37 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_38 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_39 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1216 = _hw_kernel_global_wrapper_stencil_37 * _hw_input_global_wrapper_stencil_37;
  uint16_t _1217 = _hw_kernel_global_wrapper_stencil_38 * _hw_input_global_wrapper_stencil_38;
  uint16_t _1218 = _hw_kernel_global_wrapper_stencil_39 * _hw_input_global_wrapper_stencil_39;
  uint16_t _1219 = _1217 + _1218;
  uint16_t _1220 = _conv_stencil_13 + _1219;
  uint16_t _1221 = _1216 + _1220;
  return _1221;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 13) = ((hw_kernel_global_wrapper.stencil(0, 13, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 13) + ((hw_kernel_global_wrapper.stencil(2, 13, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 13, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_77(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_14 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_40 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_41 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_42 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_40 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_41 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_42 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1245 = _hw_kernel_global_wrapper_stencil_40 * _hw_input_global_wrapper_stencil_40;
  uint16_t _1246 = _hw_kernel_global_wrapper_stencil_41 * _hw_input_global_wrapper_stencil_41;
  uint16_t _1247 = _hw_kernel_global_wrapper_stencil_42 * _hw_input_global_wrapper_stencil_42;
  uint16_t _1248 = _1246 + _1247;
  uint16_t _1249 = _conv_stencil_14 + _1248;
  uint16_t _1250 = _1245 + _1249;
  return _1250;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 14) = ((hw_kernel_global_wrapper.stencil(0, 14, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 14) + ((hw_kernel_global_wrapper.stencil(2, 14, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 14, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_78(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_15 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_43 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_44 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_45 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_43 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_44 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_45 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1274 = _hw_kernel_global_wrapper_stencil_43 * _hw_input_global_wrapper_stencil_43;
  uint16_t _1275 = _hw_kernel_global_wrapper_stencil_44 * _hw_input_global_wrapper_stencil_44;
  uint16_t _1276 = _hw_kernel_global_wrapper_stencil_45 * _hw_input_global_wrapper_stencil_45;
  uint16_t _1277 = _1275 + _1276;
  uint16_t _1278 = _conv_stencil_15 + _1277;
  uint16_t _1279 = _1274 + _1278;
  return _1279;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 15) = ((hw_kernel_global_wrapper.stencil(0, 15, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 15) + ((hw_kernel_global_wrapper.stencil(2, 15, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 15, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_79(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_16 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_46 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_47 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_48 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_46 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_47 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_48 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1303 = _hw_kernel_global_wrapper_stencil_46 * _hw_input_global_wrapper_stencil_46;
  uint16_t _1304 = _hw_kernel_global_wrapper_stencil_47 * _hw_input_global_wrapper_stencil_47;
  uint16_t _1305 = _hw_kernel_global_wrapper_stencil_48 * _hw_input_global_wrapper_stencil_48;
  uint16_t _1306 = _1304 + _1305;
  uint16_t _1307 = _conv_stencil_16 + _1306;
  uint16_t _1308 = _1303 + _1307;
  return _1308;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 16) = ((hw_kernel_global_wrapper.stencil(0, 16, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 16) + ((hw_kernel_global_wrapper.stencil(2, 16, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 16, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_80(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_17 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_49 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_50 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_51 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_49 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_50 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_51 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1332 = _hw_kernel_global_wrapper_stencil_49 * _hw_input_global_wrapper_stencil_49;
  uint16_t _1333 = _hw_kernel_global_wrapper_stencil_50 * _hw_input_global_wrapper_stencil_50;
  uint16_t _1334 = _hw_kernel_global_wrapper_stencil_51 * _hw_input_global_wrapper_stencil_51;
  uint16_t _1335 = _1333 + _1334;
  uint16_t _1336 = _conv_stencil_17 + _1335;
  uint16_t _1337 = _1332 + _1336;
  return _1337;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 17) = ((hw_kernel_global_wrapper.stencil(0, 17, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 17) + ((hw_kernel_global_wrapper.stencil(2, 17, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 17, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_81(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_18 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_52 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_53 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_54 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_52 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_53 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_54 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1361 = _hw_kernel_global_wrapper_stencil_52 * _hw_input_global_wrapper_stencil_52;
  uint16_t _1362 = _hw_kernel_global_wrapper_stencil_53 * _hw_input_global_wrapper_stencil_53;
  uint16_t _1363 = _hw_kernel_global_wrapper_stencil_54 * _hw_input_global_wrapper_stencil_54;
  uint16_t _1364 = _1362 + _1363;
  uint16_t _1365 = _conv_stencil_18 + _1364;
  uint16_t _1366 = _1361 + _1365;
  return _1366;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 18) = ((hw_kernel_global_wrapper.stencil(0, 18, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 18) + ((hw_kernel_global_wrapper.stencil(2, 18, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 18, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_82(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_19 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_55 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_56 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_57 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_55 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_56 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_57 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1390 = _hw_kernel_global_wrapper_stencil_55 * _hw_input_global_wrapper_stencil_55;
  uint16_t _1391 = _hw_kernel_global_wrapper_stencil_56 * _hw_input_global_wrapper_stencil_56;
  uint16_t _1392 = _hw_kernel_global_wrapper_stencil_57 * _hw_input_global_wrapper_stencil_57;
  uint16_t _1393 = _1391 + _1392;
  uint16_t _1394 = _conv_stencil_19 + _1393;
  uint16_t _1395 = _1390 + _1394;
  return _1395;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 19) = ((hw_kernel_global_wrapper.stencil(0, 19, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 19) + ((hw_kernel_global_wrapper.stencil(2, 19, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 19, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_83(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_20 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_58 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_59 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_60 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_58 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_59 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_60 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1419 = _hw_kernel_global_wrapper_stencil_58 * _hw_input_global_wrapper_stencil_58;
  uint16_t _1420 = _hw_kernel_global_wrapper_stencil_59 * _hw_input_global_wrapper_stencil_59;
  uint16_t _1421 = _hw_kernel_global_wrapper_stencil_60 * _hw_input_global_wrapper_stencil_60;
  uint16_t _1422 = _1420 + _1421;
  uint16_t _1423 = _conv_stencil_20 + _1422;
  uint16_t _1424 = _1419 + _1423;
  return _1424;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 20) = ((hw_kernel_global_wrapper.stencil(0, 20, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 20) + ((hw_kernel_global_wrapper.stencil(2, 20, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 20, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_84(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_21 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_61 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_62 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_63 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_61 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_62 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_63 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1448 = _hw_kernel_global_wrapper_stencil_61 * _hw_input_global_wrapper_stencil_61;
  uint16_t _1449 = _hw_kernel_global_wrapper_stencil_62 * _hw_input_global_wrapper_stencil_62;
  uint16_t _1450 = _hw_kernel_global_wrapper_stencil_63 * _hw_input_global_wrapper_stencil_63;
  uint16_t _1451 = _1449 + _1450;
  uint16_t _1452 = _conv_stencil_21 + _1451;
  uint16_t _1453 = _1448 + _1452;
  return _1453;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 21) = ((hw_kernel_global_wrapper.stencil(0, 21, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 21) + ((hw_kernel_global_wrapper.stencil(2, 21, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 21, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_85(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_22 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_64 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_65 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_66 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_64 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_65 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_66 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1477 = _hw_kernel_global_wrapper_stencil_64 * _hw_input_global_wrapper_stencil_64;
  uint16_t _1478 = _hw_kernel_global_wrapper_stencil_65 * _hw_input_global_wrapper_stencil_65;
  uint16_t _1479 = _hw_kernel_global_wrapper_stencil_66 * _hw_input_global_wrapper_stencil_66;
  uint16_t _1480 = _1478 + _1479;
  uint16_t _1481 = _conv_stencil_22 + _1480;
  uint16_t _1482 = _1477 + _1481;
  return _1482;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 22) = ((hw_kernel_global_wrapper.stencil(0, 22, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 22) + ((hw_kernel_global_wrapper.stencil(2, 22, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 22, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_86(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_23 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_67 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_68 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_69 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_67 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_68 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_69 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1506 = _hw_kernel_global_wrapper_stencil_67 * _hw_input_global_wrapper_stencil_67;
  uint16_t _1507 = _hw_kernel_global_wrapper_stencil_68 * _hw_input_global_wrapper_stencil_68;
  uint16_t _1508 = _hw_kernel_global_wrapper_stencil_69 * _hw_input_global_wrapper_stencil_69;
  uint16_t _1509 = _1507 + _1508;
  uint16_t _1510 = _conv_stencil_23 + _1509;
  uint16_t _1511 = _1506 + _1510;
  return _1511;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 23) = ((hw_kernel_global_wrapper.stencil(0, 23, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 23) + ((hw_kernel_global_wrapper.stencil(2, 23, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 23, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_87(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_24 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_70 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_71 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_72 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_70 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_71 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_72 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1535 = _hw_kernel_global_wrapper_stencil_70 * _hw_input_global_wrapper_stencil_70;
  uint16_t _1536 = _hw_kernel_global_wrapper_stencil_71 * _hw_input_global_wrapper_stencil_71;
  uint16_t _1537 = _hw_kernel_global_wrapper_stencil_72 * _hw_input_global_wrapper_stencil_72;
  uint16_t _1538 = _1536 + _1537;
  uint16_t _1539 = _conv_stencil_24 + _1538;
  uint16_t _1540 = _1535 + _1539;
  return _1540;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 24) = ((hw_kernel_global_wrapper.stencil(0, 24, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 24) + ((hw_kernel_global_wrapper.stencil(2, 24, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 24, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_88(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_25 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_73 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_74 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_75 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_73 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_74 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_75 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1564 = _hw_kernel_global_wrapper_stencil_73 * _hw_input_global_wrapper_stencil_73;
  uint16_t _1565 = _hw_kernel_global_wrapper_stencil_74 * _hw_input_global_wrapper_stencil_74;
  uint16_t _1566 = _hw_kernel_global_wrapper_stencil_75 * _hw_input_global_wrapper_stencil_75;
  uint16_t _1567 = _1565 + _1566;
  uint16_t _1568 = _conv_stencil_25 + _1567;
  uint16_t _1569 = _1564 + _1568;
  return _1569;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 25) = ((hw_kernel_global_wrapper.stencil(0, 25, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 25) + ((hw_kernel_global_wrapper.stencil(2, 25, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 25, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_89(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_26 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_76 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_77 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_78 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_76 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_77 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_78 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1593 = _hw_kernel_global_wrapper_stencil_76 * _hw_input_global_wrapper_stencil_76;
  uint16_t _1594 = _hw_kernel_global_wrapper_stencil_77 * _hw_input_global_wrapper_stencil_77;
  uint16_t _1595 = _hw_kernel_global_wrapper_stencil_78 * _hw_input_global_wrapper_stencil_78;
  uint16_t _1596 = _1594 + _1595;
  uint16_t _1597 = _conv_stencil_26 + _1596;
  uint16_t _1598 = _1593 + _1597;
  return _1598;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 26) = ((hw_kernel_global_wrapper.stencil(0, 26, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 26) + ((hw_kernel_global_wrapper.stencil(2, 26, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 26, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_90(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_27 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_79 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_80 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_81 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_79 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_80 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_81 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1622 = _hw_kernel_global_wrapper_stencil_79 * _hw_input_global_wrapper_stencil_79;
  uint16_t _1623 = _hw_kernel_global_wrapper_stencil_80 * _hw_input_global_wrapper_stencil_80;
  uint16_t _1624 = _hw_kernel_global_wrapper_stencil_81 * _hw_input_global_wrapper_stencil_81;
  uint16_t _1625 = _1623 + _1624;
  uint16_t _1626 = _conv_stencil_27 + _1625;
  uint16_t _1627 = _1622 + _1626;
  return _1627;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 27) = ((hw_kernel_global_wrapper.stencil(0, 27, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 27) + ((hw_kernel_global_wrapper.stencil(2, 27, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 27, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_91(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_28 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_82 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_83 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_84 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_82 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_83 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_84 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1651 = _hw_kernel_global_wrapper_stencil_82 * _hw_input_global_wrapper_stencil_82;
  uint16_t _1652 = _hw_kernel_global_wrapper_stencil_83 * _hw_input_global_wrapper_stencil_83;
  uint16_t _1653 = _hw_kernel_global_wrapper_stencil_84 * _hw_input_global_wrapper_stencil_84;
  uint16_t _1654 = _1652 + _1653;
  uint16_t _1655 = _conv_stencil_28 + _1654;
  uint16_t _1656 = _1651 + _1655;
  return _1656;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 28) = ((hw_kernel_global_wrapper.stencil(0, 28, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 28) + ((hw_kernel_global_wrapper.stencil(2, 28, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 28, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_92(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_29 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_85 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_86 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_87 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_85 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_86 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_87 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1680 = _hw_kernel_global_wrapper_stencil_85 * _hw_input_global_wrapper_stencil_85;
  uint16_t _1681 = _hw_kernel_global_wrapper_stencil_86 * _hw_input_global_wrapper_stencil_86;
  uint16_t _1682 = _hw_kernel_global_wrapper_stencil_87 * _hw_input_global_wrapper_stencil_87;
  uint16_t _1683 = _1681 + _1682;
  uint16_t _1684 = _conv_stencil_29 + _1683;
  uint16_t _1685 = _1680 + _1684;
  return _1685;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 29) = ((hw_kernel_global_wrapper.stencil(0, 29, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 29) + ((hw_kernel_global_wrapper.stencil(2, 29, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 29, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_93(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_30 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_88 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_89 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_90 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_88 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_89 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_90 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1709 = _hw_kernel_global_wrapper_stencil_88 * _hw_input_global_wrapper_stencil_88;
  uint16_t _1710 = _hw_kernel_global_wrapper_stencil_89 * _hw_input_global_wrapper_stencil_89;
  uint16_t _1711 = _hw_kernel_global_wrapper_stencil_90 * _hw_input_global_wrapper_stencil_90;
  uint16_t _1712 = _1710 + _1711;
  uint16_t _1713 = _conv_stencil_30 + _1712;
  uint16_t _1714 = _1709 + _1713;
  return _1714;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 30) = ((hw_kernel_global_wrapper.stencil(0, 30, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 30) + ((hw_kernel_global_wrapper.stencil(2, 30, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 30, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_94(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_31 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_91 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_92 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_93 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_91 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_92 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_93 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1738 = _hw_kernel_global_wrapper_stencil_91 * _hw_input_global_wrapper_stencil_91;
  uint16_t _1739 = _hw_kernel_global_wrapper_stencil_92 * _hw_input_global_wrapper_stencil_92;
  uint16_t _1740 = _hw_kernel_global_wrapper_stencil_93 * _hw_input_global_wrapper_stencil_93;
  uint16_t _1741 = _1739 + _1740;
  uint16_t _1742 = _conv_stencil_31 + _1741;
  uint16_t _1743 = _1738 + _1742;
  return _1743;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 31) = ((hw_kernel_global_wrapper.stencil(0, 31, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 31) + ((hw_kernel_global_wrapper.stencil(2, 31, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 31, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_95(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_32 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_94 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_95 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_96 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_94 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_95 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_96 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1767 = _hw_kernel_global_wrapper_stencil_94 * _hw_input_global_wrapper_stencil_94;
  uint16_t _1768 = _hw_kernel_global_wrapper_stencil_95 * _hw_input_global_wrapper_stencil_95;
  uint16_t _1769 = _hw_kernel_global_wrapper_stencil_96 * _hw_input_global_wrapper_stencil_96;
  uint16_t _1770 = _1768 + _1769;
  uint16_t _1771 = _conv_stencil_32 + _1770;
  uint16_t _1772 = _1767 + _1771;
  return _1772;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 32) = ((hw_kernel_global_wrapper.stencil(0, 32, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 32) + ((hw_kernel_global_wrapper.stencil(2, 32, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 32, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_96(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_33 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_97 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_98 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_99 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_97 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_98 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_99 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1796 = _hw_kernel_global_wrapper_stencil_97 * _hw_input_global_wrapper_stencil_97;
  uint16_t _1797 = _hw_kernel_global_wrapper_stencil_98 * _hw_input_global_wrapper_stencil_98;
  uint16_t _1798 = _hw_kernel_global_wrapper_stencil_99 * _hw_input_global_wrapper_stencil_99;
  uint16_t _1799 = _1797 + _1798;
  uint16_t _1800 = _conv_stencil_33 + _1799;
  uint16_t _1801 = _1796 + _1800;
  return _1801;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 33) = ((hw_kernel_global_wrapper.stencil(0, 33, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 33) + ((hw_kernel_global_wrapper.stencil(2, 33, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 33, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_97(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_34 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_100 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_101 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_102 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_100 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_101 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_102 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1825 = _hw_kernel_global_wrapper_stencil_100 * _hw_input_global_wrapper_stencil_100;
  uint16_t _1826 = _hw_kernel_global_wrapper_stencil_101 * _hw_input_global_wrapper_stencil_101;
  uint16_t _1827 = _hw_kernel_global_wrapper_stencil_102 * _hw_input_global_wrapper_stencil_102;
  uint16_t _1828 = _1826 + _1827;
  uint16_t _1829 = _conv_stencil_34 + _1828;
  uint16_t _1830 = _1825 + _1829;
  return _1830;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 34) = ((hw_kernel_global_wrapper.stencil(0, 34, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 34) + ((hw_kernel_global_wrapper.stencil(2, 34, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 34, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_98(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_35 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_103 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_104 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_105 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_103 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_104 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_105 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1854 = _hw_kernel_global_wrapper_stencil_103 * _hw_input_global_wrapper_stencil_103;
  uint16_t _1855 = _hw_kernel_global_wrapper_stencil_104 * _hw_input_global_wrapper_stencil_104;
  uint16_t _1856 = _hw_kernel_global_wrapper_stencil_105 * _hw_input_global_wrapper_stencil_105;
  uint16_t _1857 = _1855 + _1856;
  uint16_t _1858 = _conv_stencil_35 + _1857;
  uint16_t _1859 = _1854 + _1858;
  return _1859;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 35) = ((hw_kernel_global_wrapper.stencil(0, 35, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 35) + ((hw_kernel_global_wrapper.stencil(2, 35, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 35, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_99(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_36 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_106 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_107 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_108 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_106 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_107 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_108 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1883 = _hw_kernel_global_wrapper_stencil_106 * _hw_input_global_wrapper_stencil_106;
  uint16_t _1884 = _hw_kernel_global_wrapper_stencil_107 * _hw_input_global_wrapper_stencil_107;
  uint16_t _1885 = _hw_kernel_global_wrapper_stencil_108 * _hw_input_global_wrapper_stencil_108;
  uint16_t _1886 = _1884 + _1885;
  uint16_t _1887 = _conv_stencil_36 + _1886;
  uint16_t _1888 = _1883 + _1887;
  return _1888;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 36) = ((hw_kernel_global_wrapper.stencil(0, 36, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 36) + ((hw_kernel_global_wrapper.stencil(2, 36, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 36, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_100(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_37 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_109 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_110 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_111 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_109 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_110 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_111 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1912 = _hw_kernel_global_wrapper_stencil_109 * _hw_input_global_wrapper_stencil_109;
  uint16_t _1913 = _hw_kernel_global_wrapper_stencil_110 * _hw_input_global_wrapper_stencil_110;
  uint16_t _1914 = _hw_kernel_global_wrapper_stencil_111 * _hw_input_global_wrapper_stencil_111;
  uint16_t _1915 = _1913 + _1914;
  uint16_t _1916 = _conv_stencil_37 + _1915;
  uint16_t _1917 = _1912 + _1916;
  return _1917;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 37) = ((hw_kernel_global_wrapper.stencil(0, 37, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 37) + ((hw_kernel_global_wrapper.stencil(2, 37, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 37, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_101(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_38 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_112 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_113 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_114 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_112 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_113 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_114 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1941 = _hw_kernel_global_wrapper_stencil_112 * _hw_input_global_wrapper_stencil_112;
  uint16_t _1942 = _hw_kernel_global_wrapper_stencil_113 * _hw_input_global_wrapper_stencil_113;
  uint16_t _1943 = _hw_kernel_global_wrapper_stencil_114 * _hw_input_global_wrapper_stencil_114;
  uint16_t _1944 = _1942 + _1943;
  uint16_t _1945 = _conv_stencil_38 + _1944;
  uint16_t _1946 = _1941 + _1945;
  return _1946;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 38) = ((hw_kernel_global_wrapper.stencil(0, 38, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 38) + ((hw_kernel_global_wrapper.stencil(2, 38, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 38, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_102(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_39 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_115 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_116 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_117 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_115 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_116 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_117 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1970 = _hw_kernel_global_wrapper_stencil_115 * _hw_input_global_wrapper_stencil_115;
  uint16_t _1971 = _hw_kernel_global_wrapper_stencil_116 * _hw_input_global_wrapper_stencil_116;
  uint16_t _1972 = _hw_kernel_global_wrapper_stencil_117 * _hw_input_global_wrapper_stencil_117;
  uint16_t _1973 = _1971 + _1972;
  uint16_t _1974 = _conv_stencil_39 + _1973;
  uint16_t _1975 = _1970 + _1974;
  return _1975;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 39) = ((hw_kernel_global_wrapper.stencil(0, 39, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 39) + ((hw_kernel_global_wrapper.stencil(2, 39, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 39, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_103(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_40 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_118 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_119 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_120 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_118 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_119 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_120 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _1999 = _hw_kernel_global_wrapper_stencil_118 * _hw_input_global_wrapper_stencil_118;
  uint16_t _2000 = _hw_kernel_global_wrapper_stencil_119 * _hw_input_global_wrapper_stencil_119;
  uint16_t _2001 = _hw_kernel_global_wrapper_stencil_120 * _hw_input_global_wrapper_stencil_120;
  uint16_t _2002 = _2000 + _2001;
  uint16_t _2003 = _conv_stencil_40 + _2002;
  uint16_t _2004 = _1999 + _2003;
  return _2004;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 40) = ((hw_kernel_global_wrapper.stencil(0, 40, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 40) + ((hw_kernel_global_wrapper.stencil(2, 40, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 40, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_104(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_41 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_121 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_122 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_123 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_121 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_122 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_123 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2028 = _hw_kernel_global_wrapper_stencil_121 * _hw_input_global_wrapper_stencil_121;
  uint16_t _2029 = _hw_kernel_global_wrapper_stencil_122 * _hw_input_global_wrapper_stencil_122;
  uint16_t _2030 = _hw_kernel_global_wrapper_stencil_123 * _hw_input_global_wrapper_stencil_123;
  uint16_t _2031 = _2029 + _2030;
  uint16_t _2032 = _conv_stencil_41 + _2031;
  uint16_t _2033 = _2028 + _2032;
  return _2033;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 41) = ((hw_kernel_global_wrapper.stencil(0, 41, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 41) + ((hw_kernel_global_wrapper.stencil(2, 41, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 41, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_105(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_42 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_124 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_125 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_126 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_124 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_125 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_126 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2057 = _hw_kernel_global_wrapper_stencil_124 * _hw_input_global_wrapper_stencil_124;
  uint16_t _2058 = _hw_kernel_global_wrapper_stencil_125 * _hw_input_global_wrapper_stencil_125;
  uint16_t _2059 = _hw_kernel_global_wrapper_stencil_126 * _hw_input_global_wrapper_stencil_126;
  uint16_t _2060 = _2058 + _2059;
  uint16_t _2061 = _conv_stencil_42 + _2060;
  uint16_t _2062 = _2057 + _2061;
  return _2062;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 42) = ((hw_kernel_global_wrapper.stencil(0, 42, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 42) + ((hw_kernel_global_wrapper.stencil(2, 42, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 42, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_106(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_43 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_127 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_128 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_129 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_127 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_128 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_129 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2086 = _hw_kernel_global_wrapper_stencil_127 * _hw_input_global_wrapper_stencil_127;
  uint16_t _2087 = _hw_kernel_global_wrapper_stencil_128 * _hw_input_global_wrapper_stencil_128;
  uint16_t _2088 = _hw_kernel_global_wrapper_stencil_129 * _hw_input_global_wrapper_stencil_129;
  uint16_t _2089 = _2087 + _2088;
  uint16_t _2090 = _conv_stencil_43 + _2089;
  uint16_t _2091 = _2086 + _2090;
  return _2091;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 43) = ((hw_kernel_global_wrapper.stencil(0, 43, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 43) + ((hw_kernel_global_wrapper.stencil(2, 43, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 43, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_107(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_44 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_130 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_131 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_132 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_130 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_131 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_132 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2115 = _hw_kernel_global_wrapper_stencil_130 * _hw_input_global_wrapper_stencil_130;
  uint16_t _2116 = _hw_kernel_global_wrapper_stencil_131 * _hw_input_global_wrapper_stencil_131;
  uint16_t _2117 = _hw_kernel_global_wrapper_stencil_132 * _hw_input_global_wrapper_stencil_132;
  uint16_t _2118 = _2116 + _2117;
  uint16_t _2119 = _conv_stencil_44 + _2118;
  uint16_t _2120 = _2115 + _2119;
  return _2120;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 44) = ((hw_kernel_global_wrapper.stencil(0, 44, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 44) + ((hw_kernel_global_wrapper.stencil(2, 44, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 44, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_108(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_45 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_133 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_134 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_135 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_133 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_134 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_135 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2144 = _hw_kernel_global_wrapper_stencil_133 * _hw_input_global_wrapper_stencil_133;
  uint16_t _2145 = _hw_kernel_global_wrapper_stencil_134 * _hw_input_global_wrapper_stencil_134;
  uint16_t _2146 = _hw_kernel_global_wrapper_stencil_135 * _hw_input_global_wrapper_stencil_135;
  uint16_t _2147 = _2145 + _2146;
  uint16_t _2148 = _conv_stencil_45 + _2147;
  uint16_t _2149 = _2144 + _2148;
  return _2149;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 45) = ((hw_kernel_global_wrapper.stencil(0, 45, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 45) + ((hw_kernel_global_wrapper.stencil(2, 45, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 45, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_109(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_46 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_136 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_137 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_138 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_136 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_137 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_138 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2173 = _hw_kernel_global_wrapper_stencil_136 * _hw_input_global_wrapper_stencil_136;
  uint16_t _2174 = _hw_kernel_global_wrapper_stencil_137 * _hw_input_global_wrapper_stencil_137;
  uint16_t _2175 = _hw_kernel_global_wrapper_stencil_138 * _hw_input_global_wrapper_stencil_138;
  uint16_t _2176 = _2174 + _2175;
  uint16_t _2177 = _conv_stencil_46 + _2176;
  uint16_t _2178 = _2173 + _2177;
  return _2178;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 46) = ((hw_kernel_global_wrapper.stencil(0, 46, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 46) + ((hw_kernel_global_wrapper.stencil(2, 46, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 46, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_110(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_47 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_139 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_140 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_141 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_139 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_140 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_141 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2202 = _hw_kernel_global_wrapper_stencil_139 * _hw_input_global_wrapper_stencil_139;
  uint16_t _2203 = _hw_kernel_global_wrapper_stencil_140 * _hw_input_global_wrapper_stencil_140;
  uint16_t _2204 = _hw_kernel_global_wrapper_stencil_141 * _hw_input_global_wrapper_stencil_141;
  uint16_t _2205 = _2203 + _2204;
  uint16_t _2206 = _conv_stencil_47 + _2205;
  uint16_t _2207 = _2202 + _2206;
  return _2207;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 47) = ((hw_kernel_global_wrapper.stencil(0, 47, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 47) + ((hw_kernel_global_wrapper.stencil(2, 47, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 47, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_111(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_48 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_142 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_143 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_144 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_142 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_143 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_144 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2231 = _hw_kernel_global_wrapper_stencil_142 * _hw_input_global_wrapper_stencil_142;
  uint16_t _2232 = _hw_kernel_global_wrapper_stencil_143 * _hw_input_global_wrapper_stencil_143;
  uint16_t _2233 = _hw_kernel_global_wrapper_stencil_144 * _hw_input_global_wrapper_stencil_144;
  uint16_t _2234 = _2232 + _2233;
  uint16_t _2235 = _conv_stencil_48 + _2234;
  uint16_t _2236 = _2231 + _2235;
  return _2236;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 48) = ((hw_kernel_global_wrapper.stencil(0, 48, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 48) + ((hw_kernel_global_wrapper.stencil(2, 48, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 48, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_112(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_49 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_145 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_146 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_147 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_145 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_146 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_147 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2260 = _hw_kernel_global_wrapper_stencil_145 * _hw_input_global_wrapper_stencil_145;
  uint16_t _2261 = _hw_kernel_global_wrapper_stencil_146 * _hw_input_global_wrapper_stencil_146;
  uint16_t _2262 = _hw_kernel_global_wrapper_stencil_147 * _hw_input_global_wrapper_stencil_147;
  uint16_t _2263 = _2261 + _2262;
  uint16_t _2264 = _conv_stencil_49 + _2263;
  uint16_t _2265 = _2260 + _2264;
  return _2265;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 49) = ((hw_kernel_global_wrapper.stencil(0, 49, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 49) + ((hw_kernel_global_wrapper.stencil(2, 49, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 49, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_113(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_50 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_148 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_149 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_150 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_148 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_149 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_150 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2289 = _hw_kernel_global_wrapper_stencil_148 * _hw_input_global_wrapper_stencil_148;
  uint16_t _2290 = _hw_kernel_global_wrapper_stencil_149 * _hw_input_global_wrapper_stencil_149;
  uint16_t _2291 = _hw_kernel_global_wrapper_stencil_150 * _hw_input_global_wrapper_stencil_150;
  uint16_t _2292 = _2290 + _2291;
  uint16_t _2293 = _conv_stencil_50 + _2292;
  uint16_t _2294 = _2289 + _2293;
  return _2294;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 50) = ((hw_kernel_global_wrapper.stencil(0, 50, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 50) + ((hw_kernel_global_wrapper.stencil(2, 50, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 50, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_114(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_51 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_151 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_152 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_153 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_151 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_152 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_153 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2318 = _hw_kernel_global_wrapper_stencil_151 * _hw_input_global_wrapper_stencil_151;
  uint16_t _2319 = _hw_kernel_global_wrapper_stencil_152 * _hw_input_global_wrapper_stencil_152;
  uint16_t _2320 = _hw_kernel_global_wrapper_stencil_153 * _hw_input_global_wrapper_stencil_153;
  uint16_t _2321 = _2319 + _2320;
  uint16_t _2322 = _conv_stencil_51 + _2321;
  uint16_t _2323 = _2318 + _2322;
  return _2323;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 51) = ((hw_kernel_global_wrapper.stencil(0, 51, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 51) + ((hw_kernel_global_wrapper.stencil(2, 51, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 51, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_115(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_52 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_154 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_155 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_156 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_154 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_155 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_156 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2347 = _hw_kernel_global_wrapper_stencil_154 * _hw_input_global_wrapper_stencil_154;
  uint16_t _2348 = _hw_kernel_global_wrapper_stencil_155 * _hw_input_global_wrapper_stencil_155;
  uint16_t _2349 = _hw_kernel_global_wrapper_stencil_156 * _hw_input_global_wrapper_stencil_156;
  uint16_t _2350 = _2348 + _2349;
  uint16_t _2351 = _conv_stencil_52 + _2350;
  uint16_t _2352 = _2347 + _2351;
  return _2352;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 52) = ((hw_kernel_global_wrapper.stencil(0, 52, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 52) + ((hw_kernel_global_wrapper.stencil(2, 52, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 52, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_116(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_53 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_157 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_158 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_159 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_157 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_158 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_159 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2376 = _hw_kernel_global_wrapper_stencil_157 * _hw_input_global_wrapper_stencil_157;
  uint16_t _2377 = _hw_kernel_global_wrapper_stencil_158 * _hw_input_global_wrapper_stencil_158;
  uint16_t _2378 = _hw_kernel_global_wrapper_stencil_159 * _hw_input_global_wrapper_stencil_159;
  uint16_t _2379 = _2377 + _2378;
  uint16_t _2380 = _conv_stencil_53 + _2379;
  uint16_t _2381 = _2376 + _2380;
  return _2381;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 53) = ((hw_kernel_global_wrapper.stencil(0, 53, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 53) + ((hw_kernel_global_wrapper.stencil(2, 53, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 53, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_117(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_54 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_160 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_161 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_162 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_160 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_161 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_162 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2405 = _hw_kernel_global_wrapper_stencil_160 * _hw_input_global_wrapper_stencil_160;
  uint16_t _2406 = _hw_kernel_global_wrapper_stencil_161 * _hw_input_global_wrapper_stencil_161;
  uint16_t _2407 = _hw_kernel_global_wrapper_stencil_162 * _hw_input_global_wrapper_stencil_162;
  uint16_t _2408 = _2406 + _2407;
  uint16_t _2409 = _conv_stencil_54 + _2408;
  uint16_t _2410 = _2405 + _2409;
  return _2410;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 54) = ((hw_kernel_global_wrapper.stencil(0, 54, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 54) + ((hw_kernel_global_wrapper.stencil(2, 54, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 54, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_118(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_55 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_163 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_164 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_165 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_163 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_164 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_165 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2434 = _hw_kernel_global_wrapper_stencil_163 * _hw_input_global_wrapper_stencil_163;
  uint16_t _2435 = _hw_kernel_global_wrapper_stencil_164 * _hw_input_global_wrapper_stencil_164;
  uint16_t _2436 = _hw_kernel_global_wrapper_stencil_165 * _hw_input_global_wrapper_stencil_165;
  uint16_t _2437 = _2435 + _2436;
  uint16_t _2438 = _conv_stencil_55 + _2437;
  uint16_t _2439 = _2434 + _2438;
  return _2439;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 55) = ((hw_kernel_global_wrapper.stencil(0, 55, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 55) + ((hw_kernel_global_wrapper.stencil(2, 55, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 55, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_119(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_56 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_166 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_167 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_168 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_166 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_167 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_168 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2463 = _hw_kernel_global_wrapper_stencil_166 * _hw_input_global_wrapper_stencil_166;
  uint16_t _2464 = _hw_kernel_global_wrapper_stencil_167 * _hw_input_global_wrapper_stencil_167;
  uint16_t _2465 = _hw_kernel_global_wrapper_stencil_168 * _hw_input_global_wrapper_stencil_168;
  uint16_t _2466 = _2464 + _2465;
  uint16_t _2467 = _conv_stencil_56 + _2466;
  uint16_t _2468 = _2463 + _2467;
  return _2468;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 56) = ((hw_kernel_global_wrapper.stencil(0, 56, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 56) + ((hw_kernel_global_wrapper.stencil(2, 56, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 56, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_120(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_57 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_169 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_170 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_171 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_169 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_170 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_171 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2492 = _hw_kernel_global_wrapper_stencil_169 * _hw_input_global_wrapper_stencil_169;
  uint16_t _2493 = _hw_kernel_global_wrapper_stencil_170 * _hw_input_global_wrapper_stencil_170;
  uint16_t _2494 = _hw_kernel_global_wrapper_stencil_171 * _hw_input_global_wrapper_stencil_171;
  uint16_t _2495 = _2493 + _2494;
  uint16_t _2496 = _conv_stencil_57 + _2495;
  uint16_t _2497 = _2492 + _2496;
  return _2497;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 57) = ((hw_kernel_global_wrapper.stencil(0, 57, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 57) + ((hw_kernel_global_wrapper.stencil(2, 57, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 57, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_121(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_58 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_172 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_173 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_174 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_172 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_173 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_174 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2521 = _hw_kernel_global_wrapper_stencil_172 * _hw_input_global_wrapper_stencil_172;
  uint16_t _2522 = _hw_kernel_global_wrapper_stencil_173 * _hw_input_global_wrapper_stencil_173;
  uint16_t _2523 = _hw_kernel_global_wrapper_stencil_174 * _hw_input_global_wrapper_stencil_174;
  uint16_t _2524 = _2522 + _2523;
  uint16_t _2525 = _conv_stencil_58 + _2524;
  uint16_t _2526 = _2521 + _2525;
  return _2526;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 58) = ((hw_kernel_global_wrapper.stencil(0, 58, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 58) + ((hw_kernel_global_wrapper.stencil(2, 58, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 58, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_122(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_59 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_175 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_176 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_177 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_175 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_176 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_177 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2550 = _hw_kernel_global_wrapper_stencil_175 * _hw_input_global_wrapper_stencil_175;
  uint16_t _2551 = _hw_kernel_global_wrapper_stencil_176 * _hw_input_global_wrapper_stencil_176;
  uint16_t _2552 = _hw_kernel_global_wrapper_stencil_177 * _hw_input_global_wrapper_stencil_177;
  uint16_t _2553 = _2551 + _2552;
  uint16_t _2554 = _conv_stencil_59 + _2553;
  uint16_t _2555 = _2550 + _2554;
  return _2555;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 59) = ((hw_kernel_global_wrapper.stencil(0, 59, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 59) + ((hw_kernel_global_wrapper.stencil(2, 59, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 59, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_123(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_60 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_178 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_179 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_180 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_178 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_179 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_180 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2579 = _hw_kernel_global_wrapper_stencil_178 * _hw_input_global_wrapper_stencil_178;
  uint16_t _2580 = _hw_kernel_global_wrapper_stencil_179 * _hw_input_global_wrapper_stencil_179;
  uint16_t _2581 = _hw_kernel_global_wrapper_stencil_180 * _hw_input_global_wrapper_stencil_180;
  uint16_t _2582 = _2580 + _2581;
  uint16_t _2583 = _conv_stencil_60 + _2582;
  uint16_t _2584 = _2579 + _2583;
  return _2584;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 60) = ((hw_kernel_global_wrapper.stencil(0, 60, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 60) + ((hw_kernel_global_wrapper.stencil(2, 60, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 60, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_124(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_61 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_181 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_182 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_183 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_181 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_182 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_183 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2608 = _hw_kernel_global_wrapper_stencil_181 * _hw_input_global_wrapper_stencil_181;
  uint16_t _2609 = _hw_kernel_global_wrapper_stencil_182 * _hw_input_global_wrapper_stencil_182;
  uint16_t _2610 = _hw_kernel_global_wrapper_stencil_183 * _hw_input_global_wrapper_stencil_183;
  uint16_t _2611 = _2609 + _2610;
  uint16_t _2612 = _conv_stencil_61 + _2611;
  uint16_t _2613 = _2608 + _2612;
  return _2613;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 61) = ((hw_kernel_global_wrapper.stencil(0, 61, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 61) + ((hw_kernel_global_wrapper.stencil(2, 61, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 61, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_125(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_62 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_184 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_185 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_186 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_184 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_185 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_186 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2637 = _hw_kernel_global_wrapper_stencil_184 * _hw_input_global_wrapper_stencil_184;
  uint16_t _2638 = _hw_kernel_global_wrapper_stencil_185 * _hw_input_global_wrapper_stencil_185;
  uint16_t _2639 = _hw_kernel_global_wrapper_stencil_186 * _hw_input_global_wrapper_stencil_186;
  uint16_t _2640 = _2638 + _2639;
  uint16_t _2641 = _conv_stencil_62 + _2640;
  uint16_t _2642 = _2637 + _2641;
  return _2642;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 62) = ((hw_kernel_global_wrapper.stencil(0, 62, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 62) + ((hw_kernel_global_wrapper.stencil(2, 62, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 62, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_126(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_63 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_187 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_188 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_189 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_187 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_188 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_189 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2666 = _hw_kernel_global_wrapper_stencil_187 * _hw_input_global_wrapper_stencil_187;
  uint16_t _2667 = _hw_kernel_global_wrapper_stencil_188 * _hw_input_global_wrapper_stencil_188;
  uint16_t _2668 = _hw_kernel_global_wrapper_stencil_189 * _hw_input_global_wrapper_stencil_189;
  uint16_t _2669 = _2667 + _2668;
  uint16_t _2670 = _conv_stencil_63 + _2669;
  uint16_t _2671 = _2666 + _2670;
  return _2671;
}

//store is: conv.stencil(conv_s1_x, conv_s1_y, 63) = ((hw_kernel_global_wrapper.stencil(0, 63, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(0, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (conv.stencil(conv_s1_x, conv_s1_y, 63) + ((hw_kernel_global_wrapper.stencil(2, 63, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(2, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))) + (hw_kernel_global_wrapper.stencil(1, 63, conv_s1_r_x, conv_s1_r_y)*hw_input_global_wrapper.stencil(1, ((conv_s1_x*2) + conv_s1_r_x), ((conv_s1_y*2) + conv_s1_r_y))))))
hw_uint<16> hcompute_conv_stencil_127(hw_uint<16>& conv_stencil, hw_uint<48>& hw_input_global_wrapper_stencil, hw_uint<48>& hw_kernel_global_wrapper_stencil) {
  uint16_t _conv_stencil_64 = (uint16_t) conv_stencil.extract<0, 15>();

  uint16_t _hw_input_global_wrapper_stencil_190 = (uint16_t) hw_input_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_stencil_191 = (uint16_t) hw_input_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_stencil_192 = (uint16_t) hw_input_global_wrapper_stencil.extract<32, 47>();

  uint16_t _hw_kernel_global_wrapper_stencil_190 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_kernel_global_wrapper_stencil_191 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_kernel_global_wrapper_stencil_192 = (uint16_t) hw_kernel_global_wrapper_stencil.extract<32, 47>();

  uint16_t _2695 = _hw_kernel_global_wrapper_stencil_190 * _hw_input_global_wrapper_stencil_190;
  uint16_t _2696 = _hw_kernel_global_wrapper_stencil_191 * _hw_input_global_wrapper_stencil_191;
  uint16_t _2697 = _hw_kernel_global_wrapper_stencil_192 * _hw_input_global_wrapper_stencil_192;
  uint16_t _2698 = _2696 + _2697;
  uint16_t _2699 = _conv_stencil_64 + _2698;
  uint16_t _2700 = _2695 + _2699;
  return _2700;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0) = conv.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0)
hw_uint<16> hcompute_hw_output_stencil(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_65 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_65;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1) = conv.stencil(hw_output_s0_x_xi_1, hw_output_s0_y_yi_1, 1)
hw_uint<16> hcompute_hw_output_stencil_1(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_66 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_66;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2) = conv.stencil(hw_output_s0_x_xi_2, hw_output_s0_y_yi_2, 2)
hw_uint<16> hcompute_hw_output_stencil_2(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_67 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_67;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3) = conv.stencil(hw_output_s0_x_xi_3, hw_output_s0_y_yi_3, 3)
hw_uint<16> hcompute_hw_output_stencil_3(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_68 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_68;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4) = conv.stencil(hw_output_s0_x_xi_4, hw_output_s0_y_yi_4, 4)
hw_uint<16> hcompute_hw_output_stencil_4(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_69 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_69;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5) = conv.stencil(hw_output_s0_x_xi_5, hw_output_s0_y_yi_5, 5)
hw_uint<16> hcompute_hw_output_stencil_5(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_70 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_70;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6) = conv.stencil(hw_output_s0_x_xi_6, hw_output_s0_y_yi_6, 6)
hw_uint<16> hcompute_hw_output_stencil_6(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_71 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_71;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7) = conv.stencil(hw_output_s0_x_xi_7, hw_output_s0_y_yi_7, 7)
hw_uint<16> hcompute_hw_output_stencil_7(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_72 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_72;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_8, hw_output_s0_y_yi_8, 8) = conv.stencil(hw_output_s0_x_xi_8, hw_output_s0_y_yi_8, 8)
hw_uint<16> hcompute_hw_output_stencil_8(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_73 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_73;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_9, hw_output_s0_y_yi_9, 9) = conv.stencil(hw_output_s0_x_xi_9, hw_output_s0_y_yi_9, 9)
hw_uint<16> hcompute_hw_output_stencil_9(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_74 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_74;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_10, hw_output_s0_y_yi_10, 10) = conv.stencil(hw_output_s0_x_xi_10, hw_output_s0_y_yi_10, 10)
hw_uint<16> hcompute_hw_output_stencil_10(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_75 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_75;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_11, hw_output_s0_y_yi_11, 11) = conv.stencil(hw_output_s0_x_xi_11, hw_output_s0_y_yi_11, 11)
hw_uint<16> hcompute_hw_output_stencil_11(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_76 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_76;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_12, hw_output_s0_y_yi_12, 12) = conv.stencil(hw_output_s0_x_xi_12, hw_output_s0_y_yi_12, 12)
hw_uint<16> hcompute_hw_output_stencil_12(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_77 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_77;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_13, hw_output_s0_y_yi_13, 13) = conv.stencil(hw_output_s0_x_xi_13, hw_output_s0_y_yi_13, 13)
hw_uint<16> hcompute_hw_output_stencil_13(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_78 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_78;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_14, hw_output_s0_y_yi_14, 14) = conv.stencil(hw_output_s0_x_xi_14, hw_output_s0_y_yi_14, 14)
hw_uint<16> hcompute_hw_output_stencil_14(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_79 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_79;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_15, hw_output_s0_y_yi_15, 15) = conv.stencil(hw_output_s0_x_xi_15, hw_output_s0_y_yi_15, 15)
hw_uint<16> hcompute_hw_output_stencil_15(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_80 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_80;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_16, hw_output_s0_y_yi_16, 16) = conv.stencil(hw_output_s0_x_xi_16, hw_output_s0_y_yi_16, 16)
hw_uint<16> hcompute_hw_output_stencil_16(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_81 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_81;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_17, hw_output_s0_y_yi_17, 17) = conv.stencil(hw_output_s0_x_xi_17, hw_output_s0_y_yi_17, 17)
hw_uint<16> hcompute_hw_output_stencil_17(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_82 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_82;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_18, hw_output_s0_y_yi_18, 18) = conv.stencil(hw_output_s0_x_xi_18, hw_output_s0_y_yi_18, 18)
hw_uint<16> hcompute_hw_output_stencil_18(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_83 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_83;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_19, hw_output_s0_y_yi_19, 19) = conv.stencil(hw_output_s0_x_xi_19, hw_output_s0_y_yi_19, 19)
hw_uint<16> hcompute_hw_output_stencil_19(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_84 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_84;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_20, hw_output_s0_y_yi_20, 20) = conv.stencil(hw_output_s0_x_xi_20, hw_output_s0_y_yi_20, 20)
hw_uint<16> hcompute_hw_output_stencil_20(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_85 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_85;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_21, hw_output_s0_y_yi_21, 21) = conv.stencil(hw_output_s0_x_xi_21, hw_output_s0_y_yi_21, 21)
hw_uint<16> hcompute_hw_output_stencil_21(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_86 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_86;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_22, hw_output_s0_y_yi_22, 22) = conv.stencil(hw_output_s0_x_xi_22, hw_output_s0_y_yi_22, 22)
hw_uint<16> hcompute_hw_output_stencil_22(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_87 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_87;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_23, hw_output_s0_y_yi_23, 23) = conv.stencil(hw_output_s0_x_xi_23, hw_output_s0_y_yi_23, 23)
hw_uint<16> hcompute_hw_output_stencil_23(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_88 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_88;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_24, hw_output_s0_y_yi_24, 24) = conv.stencil(hw_output_s0_x_xi_24, hw_output_s0_y_yi_24, 24)
hw_uint<16> hcompute_hw_output_stencil_24(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_89 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_89;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_25, hw_output_s0_y_yi_25, 25) = conv.stencil(hw_output_s0_x_xi_25, hw_output_s0_y_yi_25, 25)
hw_uint<16> hcompute_hw_output_stencil_25(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_90 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_90;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_26, hw_output_s0_y_yi_26, 26) = conv.stencil(hw_output_s0_x_xi_26, hw_output_s0_y_yi_26, 26)
hw_uint<16> hcompute_hw_output_stencil_26(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_91 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_91;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_27, hw_output_s0_y_yi_27, 27) = conv.stencil(hw_output_s0_x_xi_27, hw_output_s0_y_yi_27, 27)
hw_uint<16> hcompute_hw_output_stencil_27(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_92 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_92;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_28, hw_output_s0_y_yi_28, 28) = conv.stencil(hw_output_s0_x_xi_28, hw_output_s0_y_yi_28, 28)
hw_uint<16> hcompute_hw_output_stencil_28(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_93 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_93;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_29, hw_output_s0_y_yi_29, 29) = conv.stencil(hw_output_s0_x_xi_29, hw_output_s0_y_yi_29, 29)
hw_uint<16> hcompute_hw_output_stencil_29(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_94 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_94;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_30, hw_output_s0_y_yi_30, 30) = conv.stencil(hw_output_s0_x_xi_30, hw_output_s0_y_yi_30, 30)
hw_uint<16> hcompute_hw_output_stencil_30(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_95 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_95;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_31, hw_output_s0_y_yi_31, 31) = conv.stencil(hw_output_s0_x_xi_31, hw_output_s0_y_yi_31, 31)
hw_uint<16> hcompute_hw_output_stencil_31(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_96 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_96;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_32, hw_output_s0_y_yi_32, 32) = conv.stencil(hw_output_s0_x_xi_32, hw_output_s0_y_yi_32, 32)
hw_uint<16> hcompute_hw_output_stencil_32(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_97 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_97;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_33, hw_output_s0_y_yi_33, 33) = conv.stencil(hw_output_s0_x_xi_33, hw_output_s0_y_yi_33, 33)
hw_uint<16> hcompute_hw_output_stencil_33(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_98 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_98;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_34, hw_output_s0_y_yi_34, 34) = conv.stencil(hw_output_s0_x_xi_34, hw_output_s0_y_yi_34, 34)
hw_uint<16> hcompute_hw_output_stencil_34(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_99 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_99;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_35, hw_output_s0_y_yi_35, 35) = conv.stencil(hw_output_s0_x_xi_35, hw_output_s0_y_yi_35, 35)
hw_uint<16> hcompute_hw_output_stencil_35(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_100 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_100;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_36, hw_output_s0_y_yi_36, 36) = conv.stencil(hw_output_s0_x_xi_36, hw_output_s0_y_yi_36, 36)
hw_uint<16> hcompute_hw_output_stencil_36(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_101 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_101;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_37, hw_output_s0_y_yi_37, 37) = conv.stencil(hw_output_s0_x_xi_37, hw_output_s0_y_yi_37, 37)
hw_uint<16> hcompute_hw_output_stencil_37(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_102 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_102;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_38, hw_output_s0_y_yi_38, 38) = conv.stencil(hw_output_s0_x_xi_38, hw_output_s0_y_yi_38, 38)
hw_uint<16> hcompute_hw_output_stencil_38(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_103 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_103;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_39, hw_output_s0_y_yi_39, 39) = conv.stencil(hw_output_s0_x_xi_39, hw_output_s0_y_yi_39, 39)
hw_uint<16> hcompute_hw_output_stencil_39(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_104 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_104;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_40, hw_output_s0_y_yi_40, 40) = conv.stencil(hw_output_s0_x_xi_40, hw_output_s0_y_yi_40, 40)
hw_uint<16> hcompute_hw_output_stencil_40(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_105 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_105;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_41, hw_output_s0_y_yi_41, 41) = conv.stencil(hw_output_s0_x_xi_41, hw_output_s0_y_yi_41, 41)
hw_uint<16> hcompute_hw_output_stencil_41(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_106 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_106;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_42, hw_output_s0_y_yi_42, 42) = conv.stencil(hw_output_s0_x_xi_42, hw_output_s0_y_yi_42, 42)
hw_uint<16> hcompute_hw_output_stencil_42(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_107 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_107;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_43, hw_output_s0_y_yi_43, 43) = conv.stencil(hw_output_s0_x_xi_43, hw_output_s0_y_yi_43, 43)
hw_uint<16> hcompute_hw_output_stencil_43(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_108 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_108;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_44, hw_output_s0_y_yi_44, 44) = conv.stencil(hw_output_s0_x_xi_44, hw_output_s0_y_yi_44, 44)
hw_uint<16> hcompute_hw_output_stencil_44(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_109 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_109;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_45, hw_output_s0_y_yi_45, 45) = conv.stencil(hw_output_s0_x_xi_45, hw_output_s0_y_yi_45, 45)
hw_uint<16> hcompute_hw_output_stencil_45(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_110 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_110;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_46, hw_output_s0_y_yi_46, 46) = conv.stencil(hw_output_s0_x_xi_46, hw_output_s0_y_yi_46, 46)
hw_uint<16> hcompute_hw_output_stencil_46(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_111 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_111;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_47, hw_output_s0_y_yi_47, 47) = conv.stencil(hw_output_s0_x_xi_47, hw_output_s0_y_yi_47, 47)
hw_uint<16> hcompute_hw_output_stencil_47(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_112 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_112;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_48, hw_output_s0_y_yi_48, 48) = conv.stencil(hw_output_s0_x_xi_48, hw_output_s0_y_yi_48, 48)
hw_uint<16> hcompute_hw_output_stencil_48(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_113 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_113;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_49, hw_output_s0_y_yi_49, 49) = conv.stencil(hw_output_s0_x_xi_49, hw_output_s0_y_yi_49, 49)
hw_uint<16> hcompute_hw_output_stencil_49(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_114 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_114;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_50, hw_output_s0_y_yi_50, 50) = conv.stencil(hw_output_s0_x_xi_50, hw_output_s0_y_yi_50, 50)
hw_uint<16> hcompute_hw_output_stencil_50(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_115 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_115;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_51, hw_output_s0_y_yi_51, 51) = conv.stencil(hw_output_s0_x_xi_51, hw_output_s0_y_yi_51, 51)
hw_uint<16> hcompute_hw_output_stencil_51(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_116 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_116;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_52, hw_output_s0_y_yi_52, 52) = conv.stencil(hw_output_s0_x_xi_52, hw_output_s0_y_yi_52, 52)
hw_uint<16> hcompute_hw_output_stencil_52(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_117 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_117;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_53, hw_output_s0_y_yi_53, 53) = conv.stencil(hw_output_s0_x_xi_53, hw_output_s0_y_yi_53, 53)
hw_uint<16> hcompute_hw_output_stencil_53(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_118 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_118;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_54, hw_output_s0_y_yi_54, 54) = conv.stencil(hw_output_s0_x_xi_54, hw_output_s0_y_yi_54, 54)
hw_uint<16> hcompute_hw_output_stencil_54(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_119 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_119;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_55, hw_output_s0_y_yi_55, 55) = conv.stencil(hw_output_s0_x_xi_55, hw_output_s0_y_yi_55, 55)
hw_uint<16> hcompute_hw_output_stencil_55(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_120 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_120;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_56, hw_output_s0_y_yi_56, 56) = conv.stencil(hw_output_s0_x_xi_56, hw_output_s0_y_yi_56, 56)
hw_uint<16> hcompute_hw_output_stencil_56(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_121 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_121;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_57, hw_output_s0_y_yi_57, 57) = conv.stencil(hw_output_s0_x_xi_57, hw_output_s0_y_yi_57, 57)
hw_uint<16> hcompute_hw_output_stencil_57(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_122 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_122;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_58, hw_output_s0_y_yi_58, 58) = conv.stencil(hw_output_s0_x_xi_58, hw_output_s0_y_yi_58, 58)
hw_uint<16> hcompute_hw_output_stencil_58(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_123 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_123;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_59, hw_output_s0_y_yi_59, 59) = conv.stencil(hw_output_s0_x_xi_59, hw_output_s0_y_yi_59, 59)
hw_uint<16> hcompute_hw_output_stencil_59(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_124 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_124;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_60, hw_output_s0_y_yi_60, 60) = conv.stencil(hw_output_s0_x_xi_60, hw_output_s0_y_yi_60, 60)
hw_uint<16> hcompute_hw_output_stencil_60(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_125 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_125;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_61, hw_output_s0_y_yi_61, 61) = conv.stencil(hw_output_s0_x_xi_61, hw_output_s0_y_yi_61, 61)
hw_uint<16> hcompute_hw_output_stencil_61(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_126 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_126;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_62, hw_output_s0_y_yi_62, 62) = conv.stencil(hw_output_s0_x_xi_62, hw_output_s0_y_yi_62, 62)
hw_uint<16> hcompute_hw_output_stencil_62(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_127 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_127;
}

//store is: hw_output.stencil(hw_output_s0_x_xi_63, hw_output_s0_y_yi_63, 63) = conv.stencil(hw_output_s0_x_xi_63, hw_output_s0_y_yi_63, 63)
hw_uint<16> hcompute_hw_output_stencil_63(hw_uint<16>& conv_stencil) {
  uint16_t _conv_stencil_128 = (uint16_t) conv_stencil.extract<0, 15>();

  return _conv_stencil_128;
}

