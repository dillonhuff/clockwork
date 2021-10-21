#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x + (0*64))*2) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x + (0*64))*2) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x + (0*64))*2) + -3), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (((hw_input_global_wrapper_s0_x_x + (0*64))*2) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_4 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (((hw_input_global_wrapper_s0_x_x + (0*64))*2) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_5 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (((hw_input_global_wrapper_s0_x_x + (0*64))*2) + -2), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_6 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*2), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_4 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_5 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*2) + 1), ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_6 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: gray.stencil((gray_s0_x_x*2), ((gray_s0_y + -3) + 3)) = (((hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*2), ((gray_s0_y + -3) + 3))*(uint16)150) + ((hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*2), ((gray_s0_y + -3) + 3))*(uint16)29) + (hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*2), ((gray_s0_y + -3) + 3))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _472 = (uint16_t)(150);
  uint16_t _473 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _472;
  uint16_t _474 = (uint16_t)(29);
  uint16_t _475 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _474;
  uint16_t _476 = (uint16_t)(77);
  uint16_t _477 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _476;
  uint16_t _478 = _475 + _477;
  uint16_t _479 = _473 + _478;
  uint16_t _480 = (uint16_t)(8);
  uint16_t _481 = _479 >> _480;
  return _481;
}

//store is: gray.stencil(((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3)) = (((hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3))*(uint16)150) + ((hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3))*(uint16)29) + (hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*2) + 1), ((gray_s0_y + -3) + 3))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil_1(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _508 = (uint16_t)(150);
  uint16_t _509 = _hw_input_global_wrapper_global_wrapper_stencil_4 * _508;
  uint16_t _510 = (uint16_t)(29);
  uint16_t _511 = _hw_input_global_wrapper_global_wrapper_stencil_5 * _510;
  uint16_t _512 = (uint16_t)(77);
  uint16_t _513 = _hw_input_global_wrapper_global_wrapper_stencil_6 * _512;
  uint16_t _514 = _511 + _513;
  uint16_t _515 = _509 + _514;
  uint16_t _516 = (uint16_t)(8);
  uint16_t _517 = _515 >> _516;
  return _517;
}

//store is: reciprocal.stencil((reciprocal_s0_x_x*2), reciprocal_s0_y) = rom_div_lookupa0[(int32(max(gray.stencil(((reciprocal_s0_x_x*2) + 3), (reciprocal_s0_y + 3)), (uint16)1)) + -1)]
hw_uint<16> hcompute_reciprocal_stencil(hw_uint<16>& gray_stencil) {
  uint16_t _gray_stencil_1 = (uint16_t) gray_stencil.extract<0, 15>();

  uint16_t _rom_div_lookupa0[255];
  // produce rom_div_lookupa0
  uint16_t _800 = (uint16_t)(256);
  _rom_div_lookupa0[0] = _800;
  uint16_t _801 = (uint16_t)(128);
  _rom_div_lookupa0[1] = _801;
  uint16_t _802 = (uint16_t)(85);
  _rom_div_lookupa0[2] = _802;
  uint16_t _803 = (uint16_t)(64);
  _rom_div_lookupa0[3] = _803;
  uint16_t _804 = (uint16_t)(51);
  _rom_div_lookupa0[4] = _804;
  uint16_t _805 = (uint16_t)(42);
  _rom_div_lookupa0[5] = _805;
  uint16_t _806 = (uint16_t)(36);
  _rom_div_lookupa0[6] = _806;
  uint16_t _807 = (uint16_t)(32);
  _rom_div_lookupa0[7] = _807;
  uint16_t _808 = (uint16_t)(28);
  _rom_div_lookupa0[8] = _808;
  uint16_t _809 = (uint16_t)(25);
  _rom_div_lookupa0[9] = _809;
  uint16_t _810 = (uint16_t)(23);
  _rom_div_lookupa0[10] = _810;
  uint16_t _811 = (uint16_t)(21);
  _rom_div_lookupa0[11] = _811;
  uint16_t _812 = (uint16_t)(19);
  _rom_div_lookupa0[12] = _812;
  uint16_t _813 = (uint16_t)(18);
  _rom_div_lookupa0[13] = _813;
  uint16_t _814 = (uint16_t)(17);
  _rom_div_lookupa0[14] = _814;
  uint16_t _815 = (uint16_t)(16);
  _rom_div_lookupa0[15] = _815;
  uint16_t _816 = (uint16_t)(15);
  _rom_div_lookupa0[16] = _816;
  uint16_t _817 = (uint16_t)(14);
  _rom_div_lookupa0[17] = _817;
  uint16_t _818 = (uint16_t)(13);
  _rom_div_lookupa0[18] = _818;
  uint16_t _819 = (uint16_t)(12);
  _rom_div_lookupa0[19] = _819;
  uint16_t _820 = (uint16_t)(12);
  _rom_div_lookupa0[20] = _820;
  uint16_t _821 = (uint16_t)(11);
  _rom_div_lookupa0[21] = _821;
  uint16_t _822 = (uint16_t)(11);
  _rom_div_lookupa0[22] = _822;
  uint16_t _823 = (uint16_t)(10);
  _rom_div_lookupa0[23] = _823;
  uint16_t _824 = (uint16_t)(10);
  _rom_div_lookupa0[24] = _824;
  uint16_t _825 = (uint16_t)(9);
  _rom_div_lookupa0[25] = _825;
  uint16_t _826 = (uint16_t)(9);
  _rom_div_lookupa0[26] = _826;
  uint16_t _827 = (uint16_t)(9);
  _rom_div_lookupa0[27] = _827;
  uint16_t _828 = (uint16_t)(8);
  _rom_div_lookupa0[28] = _828;
  uint16_t _829 = (uint16_t)(8);
  _rom_div_lookupa0[29] = _829;
  uint16_t _830 = (uint16_t)(8);
  _rom_div_lookupa0[30] = _830;
  uint16_t _831 = (uint16_t)(8);
  _rom_div_lookupa0[31] = _831;
  uint16_t _832 = (uint16_t)(7);
  _rom_div_lookupa0[32] = _832;
  uint16_t _833 = (uint16_t)(7);
  _rom_div_lookupa0[33] = _833;
  uint16_t _834 = (uint16_t)(7);
  _rom_div_lookupa0[34] = _834;
  uint16_t _835 = (uint16_t)(7);
  _rom_div_lookupa0[35] = _835;
  uint16_t _836 = (uint16_t)(6);
  _rom_div_lookupa0[36] = _836;
  uint16_t _837 = (uint16_t)(6);
  _rom_div_lookupa0[37] = _837;
  uint16_t _838 = (uint16_t)(6);
  _rom_div_lookupa0[38] = _838;
  uint16_t _839 = (uint16_t)(6);
  _rom_div_lookupa0[39] = _839;
  uint16_t _840 = (uint16_t)(6);
  _rom_div_lookupa0[40] = _840;
  uint16_t _841 = (uint16_t)(6);
  _rom_div_lookupa0[41] = _841;
  uint16_t _842 = (uint16_t)(5);
  _rom_div_lookupa0[42] = _842;
  uint16_t _843 = (uint16_t)(5);
  _rom_div_lookupa0[43] = _843;
  uint16_t _844 = (uint16_t)(5);
  _rom_div_lookupa0[44] = _844;
  uint16_t _845 = (uint16_t)(5);
  _rom_div_lookupa0[45] = _845;
  uint16_t _846 = (uint16_t)(5);
  _rom_div_lookupa0[46] = _846;
  uint16_t _847 = (uint16_t)(5);
  _rom_div_lookupa0[47] = _847;
  uint16_t _848 = (uint16_t)(5);
  _rom_div_lookupa0[48] = _848;
  uint16_t _849 = (uint16_t)(5);
  _rom_div_lookupa0[49] = _849;
  uint16_t _850 = (uint16_t)(5);
  _rom_div_lookupa0[50] = _850;
  uint16_t _851 = (uint16_t)(4);
  _rom_div_lookupa0[51] = _851;
  uint16_t _852 = (uint16_t)(4);
  _rom_div_lookupa0[52] = _852;
  uint16_t _853 = (uint16_t)(4);
  _rom_div_lookupa0[53] = _853;
  uint16_t _854 = (uint16_t)(4);
  _rom_div_lookupa0[54] = _854;
  uint16_t _855 = (uint16_t)(4);
  _rom_div_lookupa0[55] = _855;
  uint16_t _856 = (uint16_t)(4);
  _rom_div_lookupa0[56] = _856;
  uint16_t _857 = (uint16_t)(4);
  _rom_div_lookupa0[57] = _857;
  uint16_t _858 = (uint16_t)(4);
  _rom_div_lookupa0[58] = _858;
  uint16_t _859 = (uint16_t)(4);
  _rom_div_lookupa0[59] = _859;
  uint16_t _860 = (uint16_t)(4);
  _rom_div_lookupa0[60] = _860;
  uint16_t _861 = (uint16_t)(4);
  _rom_div_lookupa0[61] = _861;
  uint16_t _862 = (uint16_t)(4);
  _rom_div_lookupa0[62] = _862;
  uint16_t _863 = (uint16_t)(4);
  _rom_div_lookupa0[63] = _863;
  uint16_t _864 = (uint16_t)(3);
  _rom_div_lookupa0[64] = _864;
  uint16_t _865 = (uint16_t)(3);
  _rom_div_lookupa0[65] = _865;
  uint16_t _866 = (uint16_t)(3);
  _rom_div_lookupa0[66] = _866;
  uint16_t _867 = (uint16_t)(3);
  _rom_div_lookupa0[67] = _867;
  uint16_t _868 = (uint16_t)(3);
  _rom_div_lookupa0[68] = _868;
  uint16_t _869 = (uint16_t)(3);
  _rom_div_lookupa0[69] = _869;
  uint16_t _870 = (uint16_t)(3);
  _rom_div_lookupa0[70] = _870;
  uint16_t _871 = (uint16_t)(3);
  _rom_div_lookupa0[71] = _871;
  uint16_t _872 = (uint16_t)(3);
  _rom_div_lookupa0[72] = _872;
  uint16_t _873 = (uint16_t)(3);
  _rom_div_lookupa0[73] = _873;
  uint16_t _874 = (uint16_t)(3);
  _rom_div_lookupa0[74] = _874;
  uint16_t _875 = (uint16_t)(3);
  _rom_div_lookupa0[75] = _875;
  uint16_t _876 = (uint16_t)(3);
  _rom_div_lookupa0[76] = _876;
  uint16_t _877 = (uint16_t)(3);
  _rom_div_lookupa0[77] = _877;
  uint16_t _878 = (uint16_t)(3);
  _rom_div_lookupa0[78] = _878;
  uint16_t _879 = (uint16_t)(3);
  _rom_div_lookupa0[79] = _879;
  uint16_t _880 = (uint16_t)(3);
  _rom_div_lookupa0[80] = _880;
  uint16_t _881 = (uint16_t)(3);
  _rom_div_lookupa0[81] = _881;
  uint16_t _882 = (uint16_t)(3);
  _rom_div_lookupa0[82] = _882;
  uint16_t _883 = (uint16_t)(3);
  _rom_div_lookupa0[83] = _883;
  uint16_t _884 = (uint16_t)(3);
  _rom_div_lookupa0[84] = _884;
  uint16_t _885 = (uint16_t)(2);
  _rom_div_lookupa0[85] = _885;
  uint16_t _886 = (uint16_t)(2);
  _rom_div_lookupa0[86] = _886;
  uint16_t _887 = (uint16_t)(2);
  _rom_div_lookupa0[87] = _887;
  uint16_t _888 = (uint16_t)(2);
  _rom_div_lookupa0[88] = _888;
  uint16_t _889 = (uint16_t)(2);
  _rom_div_lookupa0[89] = _889;
  uint16_t _890 = (uint16_t)(2);
  _rom_div_lookupa0[90] = _890;
  uint16_t _891 = (uint16_t)(2);
  _rom_div_lookupa0[91] = _891;
  uint16_t _892 = (uint16_t)(2);
  _rom_div_lookupa0[92] = _892;
  uint16_t _893 = (uint16_t)(2);
  _rom_div_lookupa0[93] = _893;
  uint16_t _894 = (uint16_t)(2);
  _rom_div_lookupa0[94] = _894;
  uint16_t _895 = (uint16_t)(2);
  _rom_div_lookupa0[95] = _895;
  uint16_t _896 = (uint16_t)(2);
  _rom_div_lookupa0[96] = _896;
  uint16_t _897 = (uint16_t)(2);
  _rom_div_lookupa0[97] = _897;
  uint16_t _898 = (uint16_t)(2);
  _rom_div_lookupa0[98] = _898;
  uint16_t _899 = (uint16_t)(2);
  _rom_div_lookupa0[99] = _899;
  uint16_t _900 = (uint16_t)(2);
  _rom_div_lookupa0[100] = _900;
  uint16_t _901 = (uint16_t)(2);
  _rom_div_lookupa0[101] = _901;
  uint16_t _902 = (uint16_t)(2);
  _rom_div_lookupa0[102] = _902;
  uint16_t _903 = (uint16_t)(2);
  _rom_div_lookupa0[103] = _903;
  uint16_t _904 = (uint16_t)(2);
  _rom_div_lookupa0[104] = _904;
  uint16_t _905 = (uint16_t)(2);
  _rom_div_lookupa0[105] = _905;
  uint16_t _906 = (uint16_t)(2);
  _rom_div_lookupa0[106] = _906;
  uint16_t _907 = (uint16_t)(2);
  _rom_div_lookupa0[107] = _907;
  uint16_t _908 = (uint16_t)(2);
  _rom_div_lookupa0[108] = _908;
  uint16_t _909 = (uint16_t)(2);
  _rom_div_lookupa0[109] = _909;
  uint16_t _910 = (uint16_t)(2);
  _rom_div_lookupa0[110] = _910;
  uint16_t _911 = (uint16_t)(2);
  _rom_div_lookupa0[111] = _911;
  uint16_t _912 = (uint16_t)(2);
  _rom_div_lookupa0[112] = _912;
  uint16_t _913 = (uint16_t)(2);
  _rom_div_lookupa0[113] = _913;
  uint16_t _914 = (uint16_t)(2);
  _rom_div_lookupa0[114] = _914;
  uint16_t _915 = (uint16_t)(2);
  _rom_div_lookupa0[115] = _915;
  uint16_t _916 = (uint16_t)(2);
  _rom_div_lookupa0[116] = _916;
  uint16_t _917 = (uint16_t)(2);
  _rom_div_lookupa0[117] = _917;
  uint16_t _918 = (uint16_t)(2);
  _rom_div_lookupa0[118] = _918;
  uint16_t _919 = (uint16_t)(2);
  _rom_div_lookupa0[119] = _919;
  uint16_t _920 = (uint16_t)(2);
  _rom_div_lookupa0[120] = _920;
  uint16_t _921 = (uint16_t)(2);
  _rom_div_lookupa0[121] = _921;
  uint16_t _922 = (uint16_t)(2);
  _rom_div_lookupa0[122] = _922;
  uint16_t _923 = (uint16_t)(2);
  _rom_div_lookupa0[123] = _923;
  uint16_t _924 = (uint16_t)(2);
  _rom_div_lookupa0[124] = _924;
  uint16_t _925 = (uint16_t)(2);
  _rom_div_lookupa0[125] = _925;
  uint16_t _926 = (uint16_t)(2);
  _rom_div_lookupa0[126] = _926;
  uint16_t _927 = (uint16_t)(2);
  _rom_div_lookupa0[127] = _927;
  uint16_t _928 = (uint16_t)(1);
  _rom_div_lookupa0[128] = _928;
  uint16_t _929 = (uint16_t)(1);
  _rom_div_lookupa0[129] = _929;
  uint16_t _930 = (uint16_t)(1);
  _rom_div_lookupa0[130] = _930;
  uint16_t _931 = (uint16_t)(1);
  _rom_div_lookupa0[131] = _931;
  uint16_t _932 = (uint16_t)(1);
  _rom_div_lookupa0[132] = _932;
  uint16_t _933 = (uint16_t)(1);
  _rom_div_lookupa0[133] = _933;
  uint16_t _934 = (uint16_t)(1);
  _rom_div_lookupa0[134] = _934;
  uint16_t _935 = (uint16_t)(1);
  _rom_div_lookupa0[135] = _935;
  uint16_t _936 = (uint16_t)(1);
  _rom_div_lookupa0[136] = _936;
  uint16_t _937 = (uint16_t)(1);
  _rom_div_lookupa0[137] = _937;
  uint16_t _938 = (uint16_t)(1);
  _rom_div_lookupa0[138] = _938;
  uint16_t _939 = (uint16_t)(1);
  _rom_div_lookupa0[139] = _939;
  uint16_t _940 = (uint16_t)(1);
  _rom_div_lookupa0[140] = _940;
  uint16_t _941 = (uint16_t)(1);
  _rom_div_lookupa0[141] = _941;
  uint16_t _942 = (uint16_t)(1);
  _rom_div_lookupa0[142] = _942;
  uint16_t _943 = (uint16_t)(1);
  _rom_div_lookupa0[143] = _943;
  uint16_t _944 = (uint16_t)(1);
  _rom_div_lookupa0[144] = _944;
  uint16_t _945 = (uint16_t)(1);
  _rom_div_lookupa0[145] = _945;
  uint16_t _946 = (uint16_t)(1);
  _rom_div_lookupa0[146] = _946;
  uint16_t _947 = (uint16_t)(1);
  _rom_div_lookupa0[147] = _947;
  uint16_t _948 = (uint16_t)(1);
  _rom_div_lookupa0[148] = _948;
  uint16_t _949 = (uint16_t)(1);
  _rom_div_lookupa0[149] = _949;
  uint16_t _950 = (uint16_t)(1);
  _rom_div_lookupa0[150] = _950;
  uint16_t _951 = (uint16_t)(1);
  _rom_div_lookupa0[151] = _951;
  uint16_t _952 = (uint16_t)(1);
  _rom_div_lookupa0[152] = _952;
  uint16_t _953 = (uint16_t)(1);
  _rom_div_lookupa0[153] = _953;
  uint16_t _954 = (uint16_t)(1);
  _rom_div_lookupa0[154] = _954;
  uint16_t _955 = (uint16_t)(1);
  _rom_div_lookupa0[155] = _955;
  uint16_t _956 = (uint16_t)(1);
  _rom_div_lookupa0[156] = _956;
  uint16_t _957 = (uint16_t)(1);
  _rom_div_lookupa0[157] = _957;
  uint16_t _958 = (uint16_t)(1);
  _rom_div_lookupa0[158] = _958;
  uint16_t _959 = (uint16_t)(1);
  _rom_div_lookupa0[159] = _959;
  uint16_t _960 = (uint16_t)(1);
  _rom_div_lookupa0[160] = _960;
  uint16_t _961 = (uint16_t)(1);
  _rom_div_lookupa0[161] = _961;
  uint16_t _962 = (uint16_t)(1);
  _rom_div_lookupa0[162] = _962;
  uint16_t _963 = (uint16_t)(1);
  _rom_div_lookupa0[163] = _963;
  uint16_t _964 = (uint16_t)(1);
  _rom_div_lookupa0[164] = _964;
  uint16_t _965 = (uint16_t)(1);
  _rom_div_lookupa0[165] = _965;
  uint16_t _966 = (uint16_t)(1);
  _rom_div_lookupa0[166] = _966;
  uint16_t _967 = (uint16_t)(1);
  _rom_div_lookupa0[167] = _967;
  uint16_t _968 = (uint16_t)(1);
  _rom_div_lookupa0[168] = _968;
  uint16_t _969 = (uint16_t)(1);
  _rom_div_lookupa0[169] = _969;
  uint16_t _970 = (uint16_t)(1);
  _rom_div_lookupa0[170] = _970;
  uint16_t _971 = (uint16_t)(1);
  _rom_div_lookupa0[171] = _971;
  uint16_t _972 = (uint16_t)(1);
  _rom_div_lookupa0[172] = _972;
  uint16_t _973 = (uint16_t)(1);
  _rom_div_lookupa0[173] = _973;
  uint16_t _974 = (uint16_t)(1);
  _rom_div_lookupa0[174] = _974;
  uint16_t _975 = (uint16_t)(1);
  _rom_div_lookupa0[175] = _975;
  uint16_t _976 = (uint16_t)(1);
  _rom_div_lookupa0[176] = _976;
  uint16_t _977 = (uint16_t)(1);
  _rom_div_lookupa0[177] = _977;
  uint16_t _978 = (uint16_t)(1);
  _rom_div_lookupa0[178] = _978;
  uint16_t _979 = (uint16_t)(1);
  _rom_div_lookupa0[179] = _979;
  uint16_t _980 = (uint16_t)(1);
  _rom_div_lookupa0[180] = _980;
  uint16_t _981 = (uint16_t)(1);
  _rom_div_lookupa0[181] = _981;
  uint16_t _982 = (uint16_t)(1);
  _rom_div_lookupa0[182] = _982;
  uint16_t _983 = (uint16_t)(1);
  _rom_div_lookupa0[183] = _983;
  uint16_t _984 = (uint16_t)(1);
  _rom_div_lookupa0[184] = _984;
  uint16_t _985 = (uint16_t)(1);
  _rom_div_lookupa0[185] = _985;
  uint16_t _986 = (uint16_t)(1);
  _rom_div_lookupa0[186] = _986;
  uint16_t _987 = (uint16_t)(1);
  _rom_div_lookupa0[187] = _987;
  uint16_t _988 = (uint16_t)(1);
  _rom_div_lookupa0[188] = _988;
  uint16_t _989 = (uint16_t)(1);
  _rom_div_lookupa0[189] = _989;
  uint16_t _990 = (uint16_t)(1);
  _rom_div_lookupa0[190] = _990;
  uint16_t _991 = (uint16_t)(1);
  _rom_div_lookupa0[191] = _991;
  uint16_t _992 = (uint16_t)(1);
  _rom_div_lookupa0[192] = _992;
  uint16_t _993 = (uint16_t)(1);
  _rom_div_lookupa0[193] = _993;
  uint16_t _994 = (uint16_t)(1);
  _rom_div_lookupa0[194] = _994;
  uint16_t _995 = (uint16_t)(1);
  _rom_div_lookupa0[195] = _995;
  uint16_t _996 = (uint16_t)(1);
  _rom_div_lookupa0[196] = _996;
  uint16_t _997 = (uint16_t)(1);
  _rom_div_lookupa0[197] = _997;
  uint16_t _998 = (uint16_t)(1);
  _rom_div_lookupa0[198] = _998;
  uint16_t _999 = (uint16_t)(1);
  _rom_div_lookupa0[199] = _999;
  uint16_t _1000 = (uint16_t)(1);
  _rom_div_lookupa0[200] = _1000;
  uint16_t _1001 = (uint16_t)(1);
  _rom_div_lookupa0[201] = _1001;
  uint16_t _1002 = (uint16_t)(1);
  _rom_div_lookupa0[202] = _1002;
  uint16_t _1003 = (uint16_t)(1);
  _rom_div_lookupa0[203] = _1003;
  uint16_t _1004 = (uint16_t)(1);
  _rom_div_lookupa0[204] = _1004;
  uint16_t _1005 = (uint16_t)(1);
  _rom_div_lookupa0[205] = _1005;
  uint16_t _1006 = (uint16_t)(1);
  _rom_div_lookupa0[206] = _1006;
  uint16_t _1007 = (uint16_t)(1);
  _rom_div_lookupa0[207] = _1007;
  uint16_t _1008 = (uint16_t)(1);
  _rom_div_lookupa0[208] = _1008;
  uint16_t _1009 = (uint16_t)(1);
  _rom_div_lookupa0[209] = _1009;
  uint16_t _1010 = (uint16_t)(1);
  _rom_div_lookupa0[210] = _1010;
  uint16_t _1011 = (uint16_t)(1);
  _rom_div_lookupa0[211] = _1011;
  uint16_t _1012 = (uint16_t)(1);
  _rom_div_lookupa0[212] = _1012;
  uint16_t _1013 = (uint16_t)(1);
  _rom_div_lookupa0[213] = _1013;
  uint16_t _1014 = (uint16_t)(1);
  _rom_div_lookupa0[214] = _1014;
  uint16_t _1015 = (uint16_t)(1);
  _rom_div_lookupa0[215] = _1015;
  uint16_t _1016 = (uint16_t)(1);
  _rom_div_lookupa0[216] = _1016;
  uint16_t _1017 = (uint16_t)(1);
  _rom_div_lookupa0[217] = _1017;
  uint16_t _1018 = (uint16_t)(1);
  _rom_div_lookupa0[218] = _1018;
  uint16_t _1019 = (uint16_t)(1);
  _rom_div_lookupa0[219] = _1019;
  uint16_t _1020 = (uint16_t)(1);
  _rom_div_lookupa0[220] = _1020;
  uint16_t _1021 = (uint16_t)(1);
  _rom_div_lookupa0[221] = _1021;
  uint16_t _1022 = (uint16_t)(1);
  _rom_div_lookupa0[222] = _1022;
  uint16_t _1023 = (uint16_t)(1);
  _rom_div_lookupa0[223] = _1023;
  uint16_t _1024 = (uint16_t)(1);
  _rom_div_lookupa0[224] = _1024;
  uint16_t _1025 = (uint16_t)(1);
  _rom_div_lookupa0[225] = _1025;
  uint16_t _1026 = (uint16_t)(1);
  _rom_div_lookupa0[226] = _1026;
  uint16_t _1027 = (uint16_t)(1);
  _rom_div_lookupa0[227] = _1027;
  uint16_t _1028 = (uint16_t)(1);
  _rom_div_lookupa0[228] = _1028;
  uint16_t _1029 = (uint16_t)(1);
  _rom_div_lookupa0[229] = _1029;
  uint16_t _1030 = (uint16_t)(1);
  _rom_div_lookupa0[230] = _1030;
  uint16_t _1031 = (uint16_t)(1);
  _rom_div_lookupa0[231] = _1031;
  uint16_t _1032 = (uint16_t)(1);
  _rom_div_lookupa0[232] = _1032;
  uint16_t _1033 = (uint16_t)(1);
  _rom_div_lookupa0[233] = _1033;
  uint16_t _1034 = (uint16_t)(1);
  _rom_div_lookupa0[234] = _1034;
  uint16_t _1035 = (uint16_t)(1);
  _rom_div_lookupa0[235] = _1035;
  uint16_t _1036 = (uint16_t)(1);
  _rom_div_lookupa0[236] = _1036;
  uint16_t _1037 = (uint16_t)(1);
  _rom_div_lookupa0[237] = _1037;
  uint16_t _1038 = (uint16_t)(1);
  _rom_div_lookupa0[238] = _1038;
  uint16_t _1039 = (uint16_t)(1);
  _rom_div_lookupa0[239] = _1039;
  uint16_t _1040 = (uint16_t)(1);
  _rom_div_lookupa0[240] = _1040;
  uint16_t _1041 = (uint16_t)(1);
  _rom_div_lookupa0[241] = _1041;
  uint16_t _1042 = (uint16_t)(1);
  _rom_div_lookupa0[242] = _1042;
  uint16_t _1043 = (uint16_t)(1);
  _rom_div_lookupa0[243] = _1043;
  uint16_t _1044 = (uint16_t)(1);
  _rom_div_lookupa0[244] = _1044;
  uint16_t _1045 = (uint16_t)(1);
  _rom_div_lookupa0[245] = _1045;
  uint16_t _1046 = (uint16_t)(1);
  _rom_div_lookupa0[246] = _1046;
  uint16_t _1047 = (uint16_t)(1);
  _rom_div_lookupa0[247] = _1047;
  uint16_t _1048 = (uint16_t)(1);
  _rom_div_lookupa0[248] = _1048;
  uint16_t _1049 = (uint16_t)(1);
  _rom_div_lookupa0[249] = _1049;
  uint16_t _1050 = (uint16_t)(1);
  _rom_div_lookupa0[250] = _1050;
  uint16_t _1051 = (uint16_t)(1);
  _rom_div_lookupa0[251] = _1051;
  uint16_t _1052 = (uint16_t)(1);
  _rom_div_lookupa0[252] = _1052;
  uint16_t _1053 = (uint16_t)(1);
  _rom_div_lookupa0[253] = _1053;
  uint16_t _1054 = (uint16_t)(1);
  _rom_div_lookupa0[254] = _1054;

  uint16_t _1055 = (uint16_t)(1);
  uint16_t _1056 = max(_gray_stencil_1, _1055);
  int32_t _1057 = (int32_t)(_1056);
  int32_t _1058 = _1057 + -1;
  uint16_t _1059 = ((const uint16_t *)_rom_div_lookupa0)[_1058];
  return _1059;
}

//store is: reciprocal.stencil(((reciprocal_s0_x_x*2) + 1), reciprocal_s0_y) = rom_div_lookupa0[(int32(max(gray.stencil(((reciprocal_s0_x_x*2) + 4), (reciprocal_s0_y + 3)), (uint16)1)) + -1)]
hw_uint<16> hcompute_reciprocal_stencil_1(hw_uint<16>& gray_stencil) {
  uint16_t _gray_stencil_2 = (uint16_t) gray_stencil.extract<0, 15>();

  uint16_t _rom_div_lookupa0[255];
  // produce rom_div_lookupa0
  uint16_t _1074 = (uint16_t)(256);
  _rom_div_lookupa0[0] = _1074;
  uint16_t _1075 = (uint16_t)(128);
  _rom_div_lookupa0[1] = _1075;
  uint16_t _1076 = (uint16_t)(85);
  _rom_div_lookupa0[2] = _1076;
  uint16_t _1077 = (uint16_t)(64);
  _rom_div_lookupa0[3] = _1077;
  uint16_t _1078 = (uint16_t)(51);
  _rom_div_lookupa0[4] = _1078;
  uint16_t _1079 = (uint16_t)(42);
  _rom_div_lookupa0[5] = _1079;
  uint16_t _1080 = (uint16_t)(36);
  _rom_div_lookupa0[6] = _1080;
  uint16_t _1081 = (uint16_t)(32);
  _rom_div_lookupa0[7] = _1081;
  uint16_t _1082 = (uint16_t)(28);
  _rom_div_lookupa0[8] = _1082;
  uint16_t _1083 = (uint16_t)(25);
  _rom_div_lookupa0[9] = _1083;
  uint16_t _1084 = (uint16_t)(23);
  _rom_div_lookupa0[10] = _1084;
  uint16_t _1085 = (uint16_t)(21);
  _rom_div_lookupa0[11] = _1085;
  uint16_t _1086 = (uint16_t)(19);
  _rom_div_lookupa0[12] = _1086;
  uint16_t _1087 = (uint16_t)(18);
  _rom_div_lookupa0[13] = _1087;
  uint16_t _1088 = (uint16_t)(17);
  _rom_div_lookupa0[14] = _1088;
  uint16_t _1089 = (uint16_t)(16);
  _rom_div_lookupa0[15] = _1089;
  uint16_t _1090 = (uint16_t)(15);
  _rom_div_lookupa0[16] = _1090;
  uint16_t _1091 = (uint16_t)(14);
  _rom_div_lookupa0[17] = _1091;
  uint16_t _1092 = (uint16_t)(13);
  _rom_div_lookupa0[18] = _1092;
  uint16_t _1093 = (uint16_t)(12);
  _rom_div_lookupa0[19] = _1093;
  uint16_t _1094 = (uint16_t)(12);
  _rom_div_lookupa0[20] = _1094;
  uint16_t _1095 = (uint16_t)(11);
  _rom_div_lookupa0[21] = _1095;
  uint16_t _1096 = (uint16_t)(11);
  _rom_div_lookupa0[22] = _1096;
  uint16_t _1097 = (uint16_t)(10);
  _rom_div_lookupa0[23] = _1097;
  uint16_t _1098 = (uint16_t)(10);
  _rom_div_lookupa0[24] = _1098;
  uint16_t _1099 = (uint16_t)(9);
  _rom_div_lookupa0[25] = _1099;
  uint16_t _1100 = (uint16_t)(9);
  _rom_div_lookupa0[26] = _1100;
  uint16_t _1101 = (uint16_t)(9);
  _rom_div_lookupa0[27] = _1101;
  uint16_t _1102 = (uint16_t)(8);
  _rom_div_lookupa0[28] = _1102;
  uint16_t _1103 = (uint16_t)(8);
  _rom_div_lookupa0[29] = _1103;
  uint16_t _1104 = (uint16_t)(8);
  _rom_div_lookupa0[30] = _1104;
  uint16_t _1105 = (uint16_t)(8);
  _rom_div_lookupa0[31] = _1105;
  uint16_t _1106 = (uint16_t)(7);
  _rom_div_lookupa0[32] = _1106;
  uint16_t _1107 = (uint16_t)(7);
  _rom_div_lookupa0[33] = _1107;
  uint16_t _1108 = (uint16_t)(7);
  _rom_div_lookupa0[34] = _1108;
  uint16_t _1109 = (uint16_t)(7);
  _rom_div_lookupa0[35] = _1109;
  uint16_t _1110 = (uint16_t)(6);
  _rom_div_lookupa0[36] = _1110;
  uint16_t _1111 = (uint16_t)(6);
  _rom_div_lookupa0[37] = _1111;
  uint16_t _1112 = (uint16_t)(6);
  _rom_div_lookupa0[38] = _1112;
  uint16_t _1113 = (uint16_t)(6);
  _rom_div_lookupa0[39] = _1113;
  uint16_t _1114 = (uint16_t)(6);
  _rom_div_lookupa0[40] = _1114;
  uint16_t _1115 = (uint16_t)(6);
  _rom_div_lookupa0[41] = _1115;
  uint16_t _1116 = (uint16_t)(5);
  _rom_div_lookupa0[42] = _1116;
  uint16_t _1117 = (uint16_t)(5);
  _rom_div_lookupa0[43] = _1117;
  uint16_t _1118 = (uint16_t)(5);
  _rom_div_lookupa0[44] = _1118;
  uint16_t _1119 = (uint16_t)(5);
  _rom_div_lookupa0[45] = _1119;
  uint16_t _1120 = (uint16_t)(5);
  _rom_div_lookupa0[46] = _1120;
  uint16_t _1121 = (uint16_t)(5);
  _rom_div_lookupa0[47] = _1121;
  uint16_t _1122 = (uint16_t)(5);
  _rom_div_lookupa0[48] = _1122;
  uint16_t _1123 = (uint16_t)(5);
  _rom_div_lookupa0[49] = _1123;
  uint16_t _1124 = (uint16_t)(5);
  _rom_div_lookupa0[50] = _1124;
  uint16_t _1125 = (uint16_t)(4);
  _rom_div_lookupa0[51] = _1125;
  uint16_t _1126 = (uint16_t)(4);
  _rom_div_lookupa0[52] = _1126;
  uint16_t _1127 = (uint16_t)(4);
  _rom_div_lookupa0[53] = _1127;
  uint16_t _1128 = (uint16_t)(4);
  _rom_div_lookupa0[54] = _1128;
  uint16_t _1129 = (uint16_t)(4);
  _rom_div_lookupa0[55] = _1129;
  uint16_t _1130 = (uint16_t)(4);
  _rom_div_lookupa0[56] = _1130;
  uint16_t _1131 = (uint16_t)(4);
  _rom_div_lookupa0[57] = _1131;
  uint16_t _1132 = (uint16_t)(4);
  _rom_div_lookupa0[58] = _1132;
  uint16_t _1133 = (uint16_t)(4);
  _rom_div_lookupa0[59] = _1133;
  uint16_t _1134 = (uint16_t)(4);
  _rom_div_lookupa0[60] = _1134;
  uint16_t _1135 = (uint16_t)(4);
  _rom_div_lookupa0[61] = _1135;
  uint16_t _1136 = (uint16_t)(4);
  _rom_div_lookupa0[62] = _1136;
  uint16_t _1137 = (uint16_t)(4);
  _rom_div_lookupa0[63] = _1137;
  uint16_t _1138 = (uint16_t)(3);
  _rom_div_lookupa0[64] = _1138;
  uint16_t _1139 = (uint16_t)(3);
  _rom_div_lookupa0[65] = _1139;
  uint16_t _1140 = (uint16_t)(3);
  _rom_div_lookupa0[66] = _1140;
  uint16_t _1141 = (uint16_t)(3);
  _rom_div_lookupa0[67] = _1141;
  uint16_t _1142 = (uint16_t)(3);
  _rom_div_lookupa0[68] = _1142;
  uint16_t _1143 = (uint16_t)(3);
  _rom_div_lookupa0[69] = _1143;
  uint16_t _1144 = (uint16_t)(3);
  _rom_div_lookupa0[70] = _1144;
  uint16_t _1145 = (uint16_t)(3);
  _rom_div_lookupa0[71] = _1145;
  uint16_t _1146 = (uint16_t)(3);
  _rom_div_lookupa0[72] = _1146;
  uint16_t _1147 = (uint16_t)(3);
  _rom_div_lookupa0[73] = _1147;
  uint16_t _1148 = (uint16_t)(3);
  _rom_div_lookupa0[74] = _1148;
  uint16_t _1149 = (uint16_t)(3);
  _rom_div_lookupa0[75] = _1149;
  uint16_t _1150 = (uint16_t)(3);
  _rom_div_lookupa0[76] = _1150;
  uint16_t _1151 = (uint16_t)(3);
  _rom_div_lookupa0[77] = _1151;
  uint16_t _1152 = (uint16_t)(3);
  _rom_div_lookupa0[78] = _1152;
  uint16_t _1153 = (uint16_t)(3);
  _rom_div_lookupa0[79] = _1153;
  uint16_t _1154 = (uint16_t)(3);
  _rom_div_lookupa0[80] = _1154;
  uint16_t _1155 = (uint16_t)(3);
  _rom_div_lookupa0[81] = _1155;
  uint16_t _1156 = (uint16_t)(3);
  _rom_div_lookupa0[82] = _1156;
  uint16_t _1157 = (uint16_t)(3);
  _rom_div_lookupa0[83] = _1157;
  uint16_t _1158 = (uint16_t)(3);
  _rom_div_lookupa0[84] = _1158;
  uint16_t _1159 = (uint16_t)(2);
  _rom_div_lookupa0[85] = _1159;
  uint16_t _1160 = (uint16_t)(2);
  _rom_div_lookupa0[86] = _1160;
  uint16_t _1161 = (uint16_t)(2);
  _rom_div_lookupa0[87] = _1161;
  uint16_t _1162 = (uint16_t)(2);
  _rom_div_lookupa0[88] = _1162;
  uint16_t _1163 = (uint16_t)(2);
  _rom_div_lookupa0[89] = _1163;
  uint16_t _1164 = (uint16_t)(2);
  _rom_div_lookupa0[90] = _1164;
  uint16_t _1165 = (uint16_t)(2);
  _rom_div_lookupa0[91] = _1165;
  uint16_t _1166 = (uint16_t)(2);
  _rom_div_lookupa0[92] = _1166;
  uint16_t _1167 = (uint16_t)(2);
  _rom_div_lookupa0[93] = _1167;
  uint16_t _1168 = (uint16_t)(2);
  _rom_div_lookupa0[94] = _1168;
  uint16_t _1169 = (uint16_t)(2);
  _rom_div_lookupa0[95] = _1169;
  uint16_t _1170 = (uint16_t)(2);
  _rom_div_lookupa0[96] = _1170;
  uint16_t _1171 = (uint16_t)(2);
  _rom_div_lookupa0[97] = _1171;
  uint16_t _1172 = (uint16_t)(2);
  _rom_div_lookupa0[98] = _1172;
  uint16_t _1173 = (uint16_t)(2);
  _rom_div_lookupa0[99] = _1173;
  uint16_t _1174 = (uint16_t)(2);
  _rom_div_lookupa0[100] = _1174;
  uint16_t _1175 = (uint16_t)(2);
  _rom_div_lookupa0[101] = _1175;
  uint16_t _1176 = (uint16_t)(2);
  _rom_div_lookupa0[102] = _1176;
  uint16_t _1177 = (uint16_t)(2);
  _rom_div_lookupa0[103] = _1177;
  uint16_t _1178 = (uint16_t)(2);
  _rom_div_lookupa0[104] = _1178;
  uint16_t _1179 = (uint16_t)(2);
  _rom_div_lookupa0[105] = _1179;
  uint16_t _1180 = (uint16_t)(2);
  _rom_div_lookupa0[106] = _1180;
  uint16_t _1181 = (uint16_t)(2);
  _rom_div_lookupa0[107] = _1181;
  uint16_t _1182 = (uint16_t)(2);
  _rom_div_lookupa0[108] = _1182;
  uint16_t _1183 = (uint16_t)(2);
  _rom_div_lookupa0[109] = _1183;
  uint16_t _1184 = (uint16_t)(2);
  _rom_div_lookupa0[110] = _1184;
  uint16_t _1185 = (uint16_t)(2);
  _rom_div_lookupa0[111] = _1185;
  uint16_t _1186 = (uint16_t)(2);
  _rom_div_lookupa0[112] = _1186;
  uint16_t _1187 = (uint16_t)(2);
  _rom_div_lookupa0[113] = _1187;
  uint16_t _1188 = (uint16_t)(2);
  _rom_div_lookupa0[114] = _1188;
  uint16_t _1189 = (uint16_t)(2);
  _rom_div_lookupa0[115] = _1189;
  uint16_t _1190 = (uint16_t)(2);
  _rom_div_lookupa0[116] = _1190;
  uint16_t _1191 = (uint16_t)(2);
  _rom_div_lookupa0[117] = _1191;
  uint16_t _1192 = (uint16_t)(2);
  _rom_div_lookupa0[118] = _1192;
  uint16_t _1193 = (uint16_t)(2);
  _rom_div_lookupa0[119] = _1193;
  uint16_t _1194 = (uint16_t)(2);
  _rom_div_lookupa0[120] = _1194;
  uint16_t _1195 = (uint16_t)(2);
  _rom_div_lookupa0[121] = _1195;
  uint16_t _1196 = (uint16_t)(2);
  _rom_div_lookupa0[122] = _1196;
  uint16_t _1197 = (uint16_t)(2);
  _rom_div_lookupa0[123] = _1197;
  uint16_t _1198 = (uint16_t)(2);
  _rom_div_lookupa0[124] = _1198;
  uint16_t _1199 = (uint16_t)(2);
  _rom_div_lookupa0[125] = _1199;
  uint16_t _1200 = (uint16_t)(2);
  _rom_div_lookupa0[126] = _1200;
  uint16_t _1201 = (uint16_t)(2);
  _rom_div_lookupa0[127] = _1201;
  uint16_t _1202 = (uint16_t)(1);
  _rom_div_lookupa0[128] = _1202;
  uint16_t _1203 = (uint16_t)(1);
  _rom_div_lookupa0[129] = _1203;
  uint16_t _1204 = (uint16_t)(1);
  _rom_div_lookupa0[130] = _1204;
  uint16_t _1205 = (uint16_t)(1);
  _rom_div_lookupa0[131] = _1205;
  uint16_t _1206 = (uint16_t)(1);
  _rom_div_lookupa0[132] = _1206;
  uint16_t _1207 = (uint16_t)(1);
  _rom_div_lookupa0[133] = _1207;
  uint16_t _1208 = (uint16_t)(1);
  _rom_div_lookupa0[134] = _1208;
  uint16_t _1209 = (uint16_t)(1);
  _rom_div_lookupa0[135] = _1209;
  uint16_t _1210 = (uint16_t)(1);
  _rom_div_lookupa0[136] = _1210;
  uint16_t _1211 = (uint16_t)(1);
  _rom_div_lookupa0[137] = _1211;
  uint16_t _1212 = (uint16_t)(1);
  _rom_div_lookupa0[138] = _1212;
  uint16_t _1213 = (uint16_t)(1);
  _rom_div_lookupa0[139] = _1213;
  uint16_t _1214 = (uint16_t)(1);
  _rom_div_lookupa0[140] = _1214;
  uint16_t _1215 = (uint16_t)(1);
  _rom_div_lookupa0[141] = _1215;
  uint16_t _1216 = (uint16_t)(1);
  _rom_div_lookupa0[142] = _1216;
  uint16_t _1217 = (uint16_t)(1);
  _rom_div_lookupa0[143] = _1217;
  uint16_t _1218 = (uint16_t)(1);
  _rom_div_lookupa0[144] = _1218;
  uint16_t _1219 = (uint16_t)(1);
  _rom_div_lookupa0[145] = _1219;
  uint16_t _1220 = (uint16_t)(1);
  _rom_div_lookupa0[146] = _1220;
  uint16_t _1221 = (uint16_t)(1);
  _rom_div_lookupa0[147] = _1221;
  uint16_t _1222 = (uint16_t)(1);
  _rom_div_lookupa0[148] = _1222;
  uint16_t _1223 = (uint16_t)(1);
  _rom_div_lookupa0[149] = _1223;
  uint16_t _1224 = (uint16_t)(1);
  _rom_div_lookupa0[150] = _1224;
  uint16_t _1225 = (uint16_t)(1);
  _rom_div_lookupa0[151] = _1225;
  uint16_t _1226 = (uint16_t)(1);
  _rom_div_lookupa0[152] = _1226;
  uint16_t _1227 = (uint16_t)(1);
  _rom_div_lookupa0[153] = _1227;
  uint16_t _1228 = (uint16_t)(1);
  _rom_div_lookupa0[154] = _1228;
  uint16_t _1229 = (uint16_t)(1);
  _rom_div_lookupa0[155] = _1229;
  uint16_t _1230 = (uint16_t)(1);
  _rom_div_lookupa0[156] = _1230;
  uint16_t _1231 = (uint16_t)(1);
  _rom_div_lookupa0[157] = _1231;
  uint16_t _1232 = (uint16_t)(1);
  _rom_div_lookupa0[158] = _1232;
  uint16_t _1233 = (uint16_t)(1);
  _rom_div_lookupa0[159] = _1233;
  uint16_t _1234 = (uint16_t)(1);
  _rom_div_lookupa0[160] = _1234;
  uint16_t _1235 = (uint16_t)(1);
  _rom_div_lookupa0[161] = _1235;
  uint16_t _1236 = (uint16_t)(1);
  _rom_div_lookupa0[162] = _1236;
  uint16_t _1237 = (uint16_t)(1);
  _rom_div_lookupa0[163] = _1237;
  uint16_t _1238 = (uint16_t)(1);
  _rom_div_lookupa0[164] = _1238;
  uint16_t _1239 = (uint16_t)(1);
  _rom_div_lookupa0[165] = _1239;
  uint16_t _1240 = (uint16_t)(1);
  _rom_div_lookupa0[166] = _1240;
  uint16_t _1241 = (uint16_t)(1);
  _rom_div_lookupa0[167] = _1241;
  uint16_t _1242 = (uint16_t)(1);
  _rom_div_lookupa0[168] = _1242;
  uint16_t _1243 = (uint16_t)(1);
  _rom_div_lookupa0[169] = _1243;
  uint16_t _1244 = (uint16_t)(1);
  _rom_div_lookupa0[170] = _1244;
  uint16_t _1245 = (uint16_t)(1);
  _rom_div_lookupa0[171] = _1245;
  uint16_t _1246 = (uint16_t)(1);
  _rom_div_lookupa0[172] = _1246;
  uint16_t _1247 = (uint16_t)(1);
  _rom_div_lookupa0[173] = _1247;
  uint16_t _1248 = (uint16_t)(1);
  _rom_div_lookupa0[174] = _1248;
  uint16_t _1249 = (uint16_t)(1);
  _rom_div_lookupa0[175] = _1249;
  uint16_t _1250 = (uint16_t)(1);
  _rom_div_lookupa0[176] = _1250;
  uint16_t _1251 = (uint16_t)(1);
  _rom_div_lookupa0[177] = _1251;
  uint16_t _1252 = (uint16_t)(1);
  _rom_div_lookupa0[178] = _1252;
  uint16_t _1253 = (uint16_t)(1);
  _rom_div_lookupa0[179] = _1253;
  uint16_t _1254 = (uint16_t)(1);
  _rom_div_lookupa0[180] = _1254;
  uint16_t _1255 = (uint16_t)(1);
  _rom_div_lookupa0[181] = _1255;
  uint16_t _1256 = (uint16_t)(1);
  _rom_div_lookupa0[182] = _1256;
  uint16_t _1257 = (uint16_t)(1);
  _rom_div_lookupa0[183] = _1257;
  uint16_t _1258 = (uint16_t)(1);
  _rom_div_lookupa0[184] = _1258;
  uint16_t _1259 = (uint16_t)(1);
  _rom_div_lookupa0[185] = _1259;
  uint16_t _1260 = (uint16_t)(1);
  _rom_div_lookupa0[186] = _1260;
  uint16_t _1261 = (uint16_t)(1);
  _rom_div_lookupa0[187] = _1261;
  uint16_t _1262 = (uint16_t)(1);
  _rom_div_lookupa0[188] = _1262;
  uint16_t _1263 = (uint16_t)(1);
  _rom_div_lookupa0[189] = _1263;
  uint16_t _1264 = (uint16_t)(1);
  _rom_div_lookupa0[190] = _1264;
  uint16_t _1265 = (uint16_t)(1);
  _rom_div_lookupa0[191] = _1265;
  uint16_t _1266 = (uint16_t)(1);
  _rom_div_lookupa0[192] = _1266;
  uint16_t _1267 = (uint16_t)(1);
  _rom_div_lookupa0[193] = _1267;
  uint16_t _1268 = (uint16_t)(1);
  _rom_div_lookupa0[194] = _1268;
  uint16_t _1269 = (uint16_t)(1);
  _rom_div_lookupa0[195] = _1269;
  uint16_t _1270 = (uint16_t)(1);
  _rom_div_lookupa0[196] = _1270;
  uint16_t _1271 = (uint16_t)(1);
  _rom_div_lookupa0[197] = _1271;
  uint16_t _1272 = (uint16_t)(1);
  _rom_div_lookupa0[198] = _1272;
  uint16_t _1273 = (uint16_t)(1);
  _rom_div_lookupa0[199] = _1273;
  uint16_t _1274 = (uint16_t)(1);
  _rom_div_lookupa0[200] = _1274;
  uint16_t _1275 = (uint16_t)(1);
  _rom_div_lookupa0[201] = _1275;
  uint16_t _1276 = (uint16_t)(1);
  _rom_div_lookupa0[202] = _1276;
  uint16_t _1277 = (uint16_t)(1);
  _rom_div_lookupa0[203] = _1277;
  uint16_t _1278 = (uint16_t)(1);
  _rom_div_lookupa0[204] = _1278;
  uint16_t _1279 = (uint16_t)(1);
  _rom_div_lookupa0[205] = _1279;
  uint16_t _1280 = (uint16_t)(1);
  _rom_div_lookupa0[206] = _1280;
  uint16_t _1281 = (uint16_t)(1);
  _rom_div_lookupa0[207] = _1281;
  uint16_t _1282 = (uint16_t)(1);
  _rom_div_lookupa0[208] = _1282;
  uint16_t _1283 = (uint16_t)(1);
  _rom_div_lookupa0[209] = _1283;
  uint16_t _1284 = (uint16_t)(1);
  _rom_div_lookupa0[210] = _1284;
  uint16_t _1285 = (uint16_t)(1);
  _rom_div_lookupa0[211] = _1285;
  uint16_t _1286 = (uint16_t)(1);
  _rom_div_lookupa0[212] = _1286;
  uint16_t _1287 = (uint16_t)(1);
  _rom_div_lookupa0[213] = _1287;
  uint16_t _1288 = (uint16_t)(1);
  _rom_div_lookupa0[214] = _1288;
  uint16_t _1289 = (uint16_t)(1);
  _rom_div_lookupa0[215] = _1289;
  uint16_t _1290 = (uint16_t)(1);
  _rom_div_lookupa0[216] = _1290;
  uint16_t _1291 = (uint16_t)(1);
  _rom_div_lookupa0[217] = _1291;
  uint16_t _1292 = (uint16_t)(1);
  _rom_div_lookupa0[218] = _1292;
  uint16_t _1293 = (uint16_t)(1);
  _rom_div_lookupa0[219] = _1293;
  uint16_t _1294 = (uint16_t)(1);
  _rom_div_lookupa0[220] = _1294;
  uint16_t _1295 = (uint16_t)(1);
  _rom_div_lookupa0[221] = _1295;
  uint16_t _1296 = (uint16_t)(1);
  _rom_div_lookupa0[222] = _1296;
  uint16_t _1297 = (uint16_t)(1);
  _rom_div_lookupa0[223] = _1297;
  uint16_t _1298 = (uint16_t)(1);
  _rom_div_lookupa0[224] = _1298;
  uint16_t _1299 = (uint16_t)(1);
  _rom_div_lookupa0[225] = _1299;
  uint16_t _1300 = (uint16_t)(1);
  _rom_div_lookupa0[226] = _1300;
  uint16_t _1301 = (uint16_t)(1);
  _rom_div_lookupa0[227] = _1301;
  uint16_t _1302 = (uint16_t)(1);
  _rom_div_lookupa0[228] = _1302;
  uint16_t _1303 = (uint16_t)(1);
  _rom_div_lookupa0[229] = _1303;
  uint16_t _1304 = (uint16_t)(1);
  _rom_div_lookupa0[230] = _1304;
  uint16_t _1305 = (uint16_t)(1);
  _rom_div_lookupa0[231] = _1305;
  uint16_t _1306 = (uint16_t)(1);
  _rom_div_lookupa0[232] = _1306;
  uint16_t _1307 = (uint16_t)(1);
  _rom_div_lookupa0[233] = _1307;
  uint16_t _1308 = (uint16_t)(1);
  _rom_div_lookupa0[234] = _1308;
  uint16_t _1309 = (uint16_t)(1);
  _rom_div_lookupa0[235] = _1309;
  uint16_t _1310 = (uint16_t)(1);
  _rom_div_lookupa0[236] = _1310;
  uint16_t _1311 = (uint16_t)(1);
  _rom_div_lookupa0[237] = _1311;
  uint16_t _1312 = (uint16_t)(1);
  _rom_div_lookupa0[238] = _1312;
  uint16_t _1313 = (uint16_t)(1);
  _rom_div_lookupa0[239] = _1313;
  uint16_t _1314 = (uint16_t)(1);
  _rom_div_lookupa0[240] = _1314;
  uint16_t _1315 = (uint16_t)(1);
  _rom_div_lookupa0[241] = _1315;
  uint16_t _1316 = (uint16_t)(1);
  _rom_div_lookupa0[242] = _1316;
  uint16_t _1317 = (uint16_t)(1);
  _rom_div_lookupa0[243] = _1317;
  uint16_t _1318 = (uint16_t)(1);
  _rom_div_lookupa0[244] = _1318;
  uint16_t _1319 = (uint16_t)(1);
  _rom_div_lookupa0[245] = _1319;
  uint16_t _1320 = (uint16_t)(1);
  _rom_div_lookupa0[246] = _1320;
  uint16_t _1321 = (uint16_t)(1);
  _rom_div_lookupa0[247] = _1321;
  uint16_t _1322 = (uint16_t)(1);
  _rom_div_lookupa0[248] = _1322;
  uint16_t _1323 = (uint16_t)(1);
  _rom_div_lookupa0[249] = _1323;
  uint16_t _1324 = (uint16_t)(1);
  _rom_div_lookupa0[250] = _1324;
  uint16_t _1325 = (uint16_t)(1);
  _rom_div_lookupa0[251] = _1325;
  uint16_t _1326 = (uint16_t)(1);
  _rom_div_lookupa0[252] = _1326;
  uint16_t _1327 = (uint16_t)(1);
  _rom_div_lookupa0[253] = _1327;
  uint16_t _1328 = (uint16_t)(1);
  _rom_div_lookupa0[254] = _1328;

  uint16_t _1329 = (uint16_t)(1);
  uint16_t _1330 = max(_gray_stencil_2, _1329);
  int32_t _1331 = (int32_t)(_1330);
  int32_t _1332 = _1331 + -1;
  uint16_t _1333 = ((const uint16_t *)_rom_div_lookupa0)[_1332];
  return _1333;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*2), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _1349 = (uint16_t)(0);
  return _1349;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*2) + 1), blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil_1() {
  uint16_t _1353 = (uint16_t)(0);
  return _1353;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y) = (gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*2), blur_unnormalized_s1_y) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), blur_unnormalized_s1_y)*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), blur_unnormalized_s1_y) + (gray.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 1))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 1))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 1)) + ((gray.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 2))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 3))*(uint16)18) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 4))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 4))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 4))*(uint16)2) + (gray.stencil((blur_unnormalized_s1_x_x*2), (blur_unnormalized_s1_y + 5)) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 5))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 5))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 5))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 5)) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 6)) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 6))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 6))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 6)) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 6))*(uint16)2))))))))))))))))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_2(hw_uint<16>& blur_unnormalized_stencil, hw_uint<720>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_10 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_11 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_12 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_13 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_14 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_15 = (uint16_t) gray_stencil.extract<80, 95>();
  uint16_t _gray_stencil_16 = (uint16_t) gray_stencil.extract<96, 111>();
  uint16_t _gray_stencil_17 = (uint16_t) gray_stencil.extract<112, 127>();
  uint16_t _gray_stencil_18 = (uint16_t) gray_stencil.extract<128, 143>();
  uint16_t _gray_stencil_19 = (uint16_t) gray_stencil.extract<144, 159>();
  uint16_t _gray_stencil_20 = (uint16_t) gray_stencil.extract<160, 175>();
  uint16_t _gray_stencil_21 = (uint16_t) gray_stencil.extract<176, 191>();
  uint16_t _gray_stencil_22 = (uint16_t) gray_stencil.extract<192, 207>();
  uint16_t _gray_stencil_23 = (uint16_t) gray_stencil.extract<208, 223>();
  uint16_t _gray_stencil_24 = (uint16_t) gray_stencil.extract<224, 239>();
  uint16_t _gray_stencil_25 = (uint16_t) gray_stencil.extract<240, 255>();
  uint16_t _gray_stencil_26 = (uint16_t) gray_stencil.extract<256, 271>();
  uint16_t _gray_stencil_27 = (uint16_t) gray_stencil.extract<272, 287>();
  uint16_t _gray_stencil_28 = (uint16_t) gray_stencil.extract<288, 303>();
  uint16_t _gray_stencil_29 = (uint16_t) gray_stencil.extract<304, 319>();
  uint16_t _gray_stencil_3 = (uint16_t) gray_stencil.extract<320, 335>();
  uint16_t _gray_stencil_30 = (uint16_t) gray_stencil.extract<336, 351>();
  uint16_t _gray_stencil_31 = (uint16_t) gray_stencil.extract<352, 367>();
  uint16_t _gray_stencil_32 = (uint16_t) gray_stencil.extract<368, 383>();
  uint16_t _gray_stencil_33 = (uint16_t) gray_stencil.extract<384, 399>();
  uint16_t _gray_stencil_34 = (uint16_t) gray_stencil.extract<400, 415>();
  uint16_t _gray_stencil_35 = (uint16_t) gray_stencil.extract<416, 431>();
  uint16_t _gray_stencil_36 = (uint16_t) gray_stencil.extract<432, 447>();
  uint16_t _gray_stencil_37 = (uint16_t) gray_stencil.extract<448, 463>();
  uint16_t _gray_stencil_38 = (uint16_t) gray_stencil.extract<464, 479>();
  uint16_t _gray_stencil_39 = (uint16_t) gray_stencil.extract<480, 495>();
  uint16_t _gray_stencil_4 = (uint16_t) gray_stencil.extract<496, 511>();
  uint16_t _gray_stencil_40 = (uint16_t) gray_stencil.extract<512, 527>();
  uint16_t _gray_stencil_41 = (uint16_t) gray_stencil.extract<528, 543>();
  uint16_t _gray_stencil_42 = (uint16_t) gray_stencil.extract<544, 559>();
  uint16_t _gray_stencil_43 = (uint16_t) gray_stencil.extract<560, 575>();
  uint16_t _gray_stencil_44 = (uint16_t) gray_stencil.extract<576, 591>();
  uint16_t _gray_stencil_45 = (uint16_t) gray_stencil.extract<592, 607>();
  uint16_t _gray_stencil_46 = (uint16_t) gray_stencil.extract<608, 623>();
  uint16_t _gray_stencil_47 = (uint16_t) gray_stencil.extract<624, 639>();
  uint16_t _gray_stencil_5 = (uint16_t) gray_stencil.extract<640, 655>();
  uint16_t _gray_stencil_6 = (uint16_t) gray_stencil.extract<656, 671>();
  uint16_t _gray_stencil_7 = (uint16_t) gray_stencil.extract<672, 687>();
  uint16_t _gray_stencil_8 = (uint16_t) gray_stencil.extract<688, 703>();
  uint16_t _gray_stencil_9 = (uint16_t) gray_stencil.extract<704, 719>();

  uint16_t _1358 = (uint16_t)(2);
  uint16_t _1359 = _gray_stencil_4 * _1358;
  uint16_t _1360 = _gray_stencil_5 * _1358;
  uint16_t _1361 = _gray_stencil_6 * _1358;
  uint16_t _1362 = (uint16_t)(3);
  uint16_t _1363 = _gray_stencil_9 * _1362;
  uint16_t _1364 = (uint16_t)(6);
  uint16_t _1365 = _gray_stencil_10 * _1364;
  uint16_t _1366 = (uint16_t)(7);
  uint16_t _1367 = _gray_stencil_11 * _1366;
  uint16_t _1368 = _gray_stencil_12 * _1364;
  uint16_t _1369 = _gray_stencil_13 * _1362;
  uint16_t _1370 = _gray_stencil_15 * _1358;
  uint16_t _1371 = _gray_stencil_16 * _1364;
  uint16_t _1372 = (uint16_t)(12);
  uint16_t _1373 = _gray_stencil_17 * _1372;
  uint16_t _1374 = (uint16_t)(15);
  uint16_t _1375 = _gray_stencil_18 * _1374;
  uint16_t _1376 = _gray_stencil_19 * _1372;
  uint16_t _1377 = _gray_stencil_20 * _1364;
  uint16_t _1378 = _gray_stencil_21 * _1358;
  uint16_t _1379 = _gray_stencil_22 * _1358;
  uint16_t _1380 = _gray_stencil_23 * _1366;
  uint16_t _1381 = _gray_stencil_24 * _1374;
  uint16_t _1382 = (uint16_t)(18);
  uint16_t _1383 = _gray_stencil_25 * _1382;
  uint16_t _1384 = _gray_stencil_26 * _1374;
  uint16_t _1385 = _gray_stencil_27 * _1366;
  uint16_t _1386 = _gray_stencil_28 * _1358;
  uint16_t _1387 = _gray_stencil_29 * _1358;
  uint16_t _1388 = _gray_stencil_30 * _1364;
  uint16_t _1389 = _gray_stencil_31 * _1372;
  uint16_t _1390 = _gray_stencil_32 * _1374;
  uint16_t _1391 = _gray_stencil_33 * _1372;
  uint16_t _1392 = _gray_stencil_34 * _1364;
  uint16_t _1393 = _gray_stencil_35 * _1358;
  uint16_t _1394 = _gray_stencil_37 * _1362;
  uint16_t _1395 = _gray_stencil_38 * _1364;
  uint16_t _1396 = _gray_stencil_39 * _1366;
  uint16_t _1397 = _gray_stencil_40 * _1364;
  uint16_t _1398 = _gray_stencil_41 * _1362;
  uint16_t _1399 = _gray_stencil_44 * _1358;
  uint16_t _1400 = _gray_stencil_45 * _1358;
  uint16_t _1401 = _gray_stencil_47 * _1358;
  uint16_t _1402 = _gray_stencil_46 + _1401;
  uint16_t _1403 = _1400 + _1402;
  uint16_t _1404 = _1399 + _1403;
  uint16_t _1405 = _gray_stencil_43 + _1404;
  uint16_t _1406 = _gray_stencil_42 + _1405;
  uint16_t _1407 = _1398 + _1406;
  uint16_t _1408 = _1397 + _1407;
  uint16_t _1409 = _1396 + _1408;
  uint16_t _1410 = _1395 + _1409;
  uint16_t _1411 = _1394 + _1410;
  uint16_t _1412 = _gray_stencil_36 + _1411;
  uint16_t _1413 = _1393 + _1412;
  uint16_t _1414 = _1392 + _1413;
  uint16_t _1415 = _1391 + _1414;
  uint16_t _1416 = _1390 + _1415;
  uint16_t _1417 = _1389 + _1416;
  uint16_t _1418 = _1388 + _1417;
  uint16_t _1419 = _1387 + _1418;
  uint16_t _1420 = _1386 + _1419;
  uint16_t _1421 = _1385 + _1420;
  uint16_t _1422 = _1384 + _1421;
  uint16_t _1423 = _1383 + _1422;
  uint16_t _1424 = _1381 + _1423;
  uint16_t _1425 = _1380 + _1424;
  uint16_t _1426 = _1379 + _1425;
  uint16_t _1427 = _1378 + _1426;
  uint16_t _1428 = _1377 + _1427;
  uint16_t _1429 = _1376 + _1428;
  uint16_t _1430 = _1375 + _1429;
  uint16_t _1431 = _1373 + _1430;
  uint16_t _1432 = _1371 + _1431;
  uint16_t _1433 = _1370 + _1432;
  uint16_t _1434 = _gray_stencil_14 + _1433;
  uint16_t _1435 = _1369 + _1434;
  uint16_t _1436 = _1368 + _1435;
  uint16_t _1437 = _1367 + _1436;
  uint16_t _1438 = _1365 + _1437;
  uint16_t _1439 = _1363 + _1438;
  uint16_t _1440 = _gray_stencil_8 + _1439;
  uint16_t _1441 = _gray_stencil_7 + _1440;
  uint16_t _1442 = _1361 + _1441;
  uint16_t _1443 = _1360 + _1442;
  uint16_t _1444 = _1359 + _1443;
  uint16_t _1445 = _blur_unnormalized_stencil_2 + _1444;
  uint16_t _1446 = _gray_stencil_3 + _1445;
  return _1446;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y) = (gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), blur_unnormalized_s1_y) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*2) + 1), blur_unnormalized_s1_y) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), blur_unnormalized_s1_y)*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), blur_unnormalized_s1_y) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 1))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 1))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 7), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 2))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 7), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 3))*(uint16)18) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 7), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 4))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 4))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 7), (blur_unnormalized_s1_y + 4))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 1), (blur_unnormalized_s1_y + 5)) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 5))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 5))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 5))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 7), (blur_unnormalized_s1_y + 5)) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 2), (blur_unnormalized_s1_y + 6)) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 3), (blur_unnormalized_s1_y + 6))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*2) + 4), (blur_unnormalized_s1_y + 6))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 6), (blur_unnormalized_s1_y + 6)) + (gray.stencil(((blur_unnormalized_s1_x_x*2) + 5), (blur_unnormalized_s1_y + 6))*(uint16)2))))))))))))))))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_3(hw_uint<16>& blur_unnormalized_stencil, hw_uint<720>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_3 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_48 = (uint16_t) gray_stencil.extract<0, 15>();
  uint16_t _gray_stencil_49 = (uint16_t) gray_stencil.extract<16, 31>();
  uint16_t _gray_stencil_50 = (uint16_t) gray_stencil.extract<32, 47>();
  uint16_t _gray_stencil_51 = (uint16_t) gray_stencil.extract<48, 63>();
  uint16_t _gray_stencil_52 = (uint16_t) gray_stencil.extract<64, 79>();
  uint16_t _gray_stencil_53 = (uint16_t) gray_stencil.extract<80, 95>();
  uint16_t _gray_stencil_54 = (uint16_t) gray_stencil.extract<96, 111>();
  uint16_t _gray_stencil_55 = (uint16_t) gray_stencil.extract<112, 127>();
  uint16_t _gray_stencil_56 = (uint16_t) gray_stencil.extract<128, 143>();
  uint16_t _gray_stencil_57 = (uint16_t) gray_stencil.extract<144, 159>();
  uint16_t _gray_stencil_58 = (uint16_t) gray_stencil.extract<160, 175>();
  uint16_t _gray_stencil_59 = (uint16_t) gray_stencil.extract<176, 191>();
  uint16_t _gray_stencil_60 = (uint16_t) gray_stencil.extract<192, 207>();
  uint16_t _gray_stencil_61 = (uint16_t) gray_stencil.extract<208, 223>();
  uint16_t _gray_stencil_62 = (uint16_t) gray_stencil.extract<224, 239>();
  uint16_t _gray_stencil_63 = (uint16_t) gray_stencil.extract<240, 255>();
  uint16_t _gray_stencil_64 = (uint16_t) gray_stencil.extract<256, 271>();
  uint16_t _gray_stencil_65 = (uint16_t) gray_stencil.extract<272, 287>();
  uint16_t _gray_stencil_66 = (uint16_t) gray_stencil.extract<288, 303>();
  uint16_t _gray_stencil_67 = (uint16_t) gray_stencil.extract<304, 319>();
  uint16_t _gray_stencil_68 = (uint16_t) gray_stencil.extract<320, 335>();
  uint16_t _gray_stencil_69 = (uint16_t) gray_stencil.extract<336, 351>();
  uint16_t _gray_stencil_70 = (uint16_t) gray_stencil.extract<352, 367>();
  uint16_t _gray_stencil_71 = (uint16_t) gray_stencil.extract<368, 383>();
  uint16_t _gray_stencil_72 = (uint16_t) gray_stencil.extract<384, 399>();
  uint16_t _gray_stencil_73 = (uint16_t) gray_stencil.extract<400, 415>();
  uint16_t _gray_stencil_74 = (uint16_t) gray_stencil.extract<416, 431>();
  uint16_t _gray_stencil_75 = (uint16_t) gray_stencil.extract<432, 447>();
  uint16_t _gray_stencil_76 = (uint16_t) gray_stencil.extract<448, 463>();
  uint16_t _gray_stencil_77 = (uint16_t) gray_stencil.extract<464, 479>();
  uint16_t _gray_stencil_78 = (uint16_t) gray_stencil.extract<480, 495>();
  uint16_t _gray_stencil_79 = (uint16_t) gray_stencil.extract<496, 511>();
  uint16_t _gray_stencil_80 = (uint16_t) gray_stencil.extract<512, 527>();
  uint16_t _gray_stencil_81 = (uint16_t) gray_stencil.extract<528, 543>();
  uint16_t _gray_stencil_82 = (uint16_t) gray_stencil.extract<544, 559>();
  uint16_t _gray_stencil_83 = (uint16_t) gray_stencil.extract<560, 575>();
  uint16_t _gray_stencil_84 = (uint16_t) gray_stencil.extract<576, 591>();
  uint16_t _gray_stencil_85 = (uint16_t) gray_stencil.extract<592, 607>();
  uint16_t _gray_stencil_86 = (uint16_t) gray_stencil.extract<608, 623>();
  uint16_t _gray_stencil_87 = (uint16_t) gray_stencil.extract<624, 639>();
  uint16_t _gray_stencil_88 = (uint16_t) gray_stencil.extract<640, 655>();
  uint16_t _gray_stencil_89 = (uint16_t) gray_stencil.extract<656, 671>();
  uint16_t _gray_stencil_90 = (uint16_t) gray_stencil.extract<672, 687>();
  uint16_t _gray_stencil_91 = (uint16_t) gray_stencil.extract<688, 703>();
  uint16_t _gray_stencil_92 = (uint16_t) gray_stencil.extract<704, 719>();

  uint16_t _1684 = (uint16_t)(2);
  uint16_t _1685 = _gray_stencil_49 * _1684;
  uint16_t _1686 = _gray_stencil_50 * _1684;
  uint16_t _1687 = _gray_stencil_51 * _1684;
  uint16_t _1688 = (uint16_t)(3);
  uint16_t _1689 = _gray_stencil_54 * _1688;
  uint16_t _1690 = (uint16_t)(6);
  uint16_t _1691 = _gray_stencil_55 * _1690;
  uint16_t _1692 = (uint16_t)(7);
  uint16_t _1693 = _gray_stencil_56 * _1692;
  uint16_t _1694 = _gray_stencil_57 * _1690;
  uint16_t _1695 = _gray_stencil_58 * _1688;
  uint16_t _1696 = _gray_stencil_60 * _1684;
  uint16_t _1697 = _gray_stencil_61 * _1690;
  uint16_t _1698 = (uint16_t)(12);
  uint16_t _1699 = _gray_stencil_62 * _1698;
  uint16_t _1700 = (uint16_t)(15);
  uint16_t _1701 = _gray_stencil_63 * _1700;
  uint16_t _1702 = _gray_stencil_64 * _1698;
  uint16_t _1703 = _gray_stencil_65 * _1690;
  uint16_t _1704 = _gray_stencil_66 * _1684;
  uint16_t _1705 = _gray_stencil_67 * _1684;
  uint16_t _1706 = _gray_stencil_68 * _1692;
  uint16_t _1707 = _gray_stencil_69 * _1700;
  uint16_t _1708 = (uint16_t)(18);
  uint16_t _1709 = _gray_stencil_70 * _1708;
  uint16_t _1710 = _gray_stencil_71 * _1700;
  uint16_t _1711 = _gray_stencil_72 * _1692;
  uint16_t _1712 = _gray_stencil_73 * _1684;
  uint16_t _1713 = _gray_stencil_74 * _1684;
  uint16_t _1714 = _gray_stencil_75 * _1690;
  uint16_t _1715 = _gray_stencil_76 * _1698;
  uint16_t _1716 = _gray_stencil_77 * _1700;
  uint16_t _1717 = _gray_stencil_78 * _1698;
  uint16_t _1718 = _gray_stencil_79 * _1690;
  uint16_t _1719 = _gray_stencil_80 * _1684;
  uint16_t _1720 = _gray_stencil_82 * _1688;
  uint16_t _1721 = _gray_stencil_83 * _1690;
  uint16_t _1722 = _gray_stencil_84 * _1692;
  uint16_t _1723 = _gray_stencil_85 * _1690;
  uint16_t _1724 = _gray_stencil_86 * _1688;
  uint16_t _1725 = _gray_stencil_89 * _1684;
  uint16_t _1726 = _gray_stencil_90 * _1684;
  uint16_t _1727 = _gray_stencil_92 * _1684;
  uint16_t _1728 = _gray_stencil_91 + _1727;
  uint16_t _1729 = _1726 + _1728;
  uint16_t _1730 = _1725 + _1729;
  uint16_t _1731 = _gray_stencil_88 + _1730;
  uint16_t _1732 = _gray_stencil_87 + _1731;
  uint16_t _1733 = _1724 + _1732;
  uint16_t _1734 = _1723 + _1733;
  uint16_t _1735 = _1722 + _1734;
  uint16_t _1736 = _1721 + _1735;
  uint16_t _1737 = _1720 + _1736;
  uint16_t _1738 = _gray_stencil_81 + _1737;
  uint16_t _1739 = _1719 + _1738;
  uint16_t _1740 = _1718 + _1739;
  uint16_t _1741 = _1717 + _1740;
  uint16_t _1742 = _1716 + _1741;
  uint16_t _1743 = _1715 + _1742;
  uint16_t _1744 = _1714 + _1743;
  uint16_t _1745 = _1713 + _1744;
  uint16_t _1746 = _1712 + _1745;
  uint16_t _1747 = _1711 + _1746;
  uint16_t _1748 = _1710 + _1747;
  uint16_t _1749 = _1709 + _1748;
  uint16_t _1750 = _1707 + _1749;
  uint16_t _1751 = _1706 + _1750;
  uint16_t _1752 = _1705 + _1751;
  uint16_t _1753 = _1704 + _1752;
  uint16_t _1754 = _1703 + _1753;
  uint16_t _1755 = _1702 + _1754;
  uint16_t _1756 = _1701 + _1755;
  uint16_t _1757 = _1699 + _1756;
  uint16_t _1758 = _1697 + _1757;
  uint16_t _1759 = _1696 + _1758;
  uint16_t _1760 = _gray_stencil_59 + _1759;
  uint16_t _1761 = _1695 + _1760;
  uint16_t _1762 = _1694 + _1761;
  uint16_t _1763 = _1693 + _1762;
  uint16_t _1764 = _1691 + _1763;
  uint16_t _1765 = _1689 + _1764;
  uint16_t _1766 = _gray_stencil_53 + _1765;
  uint16_t _1767 = _gray_stencil_52 + _1766;
  uint16_t _1768 = _1687 + _1767;
  uint16_t _1769 = _1686 + _1768;
  uint16_t _1770 = _1685 + _1769;
  uint16_t _1771 = _blur_unnormalized_stencil_3 + _1770;
  uint16_t _1772 = _gray_stencil_48 + _1771;
  return _1772;
}

//store is: sharpen.stencil((sharpen_s0_x_x*2), sharpen_s0_y) = uint16(max(min(((int16(gray.stencil(((sharpen_s0_x_x*2) + 3), (sharpen_s0_y + 3)))*(int16)2) - int16(uint8((blur_unnormalized.stencil((sharpen_s0_x_x*2), sharpen_s0_y)/(uint16)256)))), (int16)255), (int16)0))
hw_uint<16> hcompute_sharpen_stencil(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_4 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_93 = (uint16_t) gray_stencil.extract<0, 15>();

  int16_t _2011 = (int16_t)(_gray_stencil_93);
  int16_t _2012 = (int16_t)(2);
  int16_t _2013 = _2011 * _2012;
  uint16_t _2014 = (uint16_t)(8);
  uint16_t _2015 = _blur_unnormalized_stencil_4 >> _2014;
  uint8_t _2016 = (uint8_t)(_2015);
  int16_t _2017 = (int16_t)(_2016);
  int16_t _2018 = _2013 - _2017;
  int16_t _2019 = (int16_t)(255);
  int16_t _2020 = min(_2018, _2019);
  int16_t _2021 = (int16_t)(0);
  int16_t _2022 = max(_2020, _2021);
  uint16_t _2023 = (uint16_t)(_2022);
  return _2023;
}

//store is: sharpen.stencil(((sharpen_s0_x_x*2) + 1), sharpen_s0_y) = uint16(max(min(((int16(gray.stencil(((sharpen_s0_x_x*2) + 4), (sharpen_s0_y + 3)))*(int16)2) - int16(uint8((blur_unnormalized.stencil(((sharpen_s0_x_x*2) + 1), sharpen_s0_y)/(uint16)256)))), (int16)255), (int16)0))
hw_uint<16> hcompute_sharpen_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_5 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_94 = (uint16_t) gray_stencil.extract<0, 15>();

  int16_t _2055 = (int16_t)(_gray_stencil_94);
  int16_t _2056 = (int16_t)(2);
  int16_t _2057 = _2055 * _2056;
  uint16_t _2058 = (uint16_t)(8);
  uint16_t _2059 = _blur_unnormalized_stencil_5 >> _2058;
  uint8_t _2060 = (uint8_t)(_2059);
  int16_t _2061 = (int16_t)(_2060);
  int16_t _2062 = _2057 - _2061;
  int16_t _2063 = (int16_t)(255);
  int16_t _2064 = min(_2062, _2063);
  int16_t _2065 = (int16_t)(0);
  int16_t _2066 = max(_2064, _2065);
  uint16_t _2067 = (uint16_t)(_2066);
  return _2067;
}

//store is: ratio.stencil((ratio_s0_x_x*2), ratio_s0_y) = (sharpen.stencil((ratio_s0_x_x*2), ratio_s0_y)*reciprocal.stencil((ratio_s0_x_x*2), ratio_s0_y))
hw_uint<16> hcompute_ratio_stencil(hw_uint<16>& reciprocal_stencil, hw_uint<16>& sharpen_stencil) {
  uint16_t _reciprocal_stencil_1 = (uint16_t) reciprocal_stencil.extract<0, 15>();

  uint16_t _sharpen_stencil_1 = (uint16_t) sharpen_stencil.extract<0, 15>();

  uint16_t _2100 = _sharpen_stencil_1 * _reciprocal_stencil_1;
  return _2100;
}

//store is: ratio.stencil(((ratio_s0_x_x*2) + 1), ratio_s0_y) = (sharpen.stencil(((ratio_s0_x_x*2) + 1), ratio_s0_y)*reciprocal.stencil(((ratio_s0_x_x*2) + 1), ratio_s0_y))
hw_uint<16> hcompute_ratio_stencil_1(hw_uint<16>& reciprocal_stencil, hw_uint<16>& sharpen_stencil) {
  uint16_t _reciprocal_stencil_2 = (uint16_t) reciprocal_stencil.extract<0, 15>();

  uint16_t _sharpen_stencil_2 = (uint16_t) sharpen_stencil.extract<0, 15>();

  uint16_t _2106 = _sharpen_stencil_2 * _reciprocal_stencil_2;
  return _2106;
}

//store is: hw_output.glb.stencil(0, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = int16(((int32(ratio.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_7 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_1 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _2113 = (int32_t)(_ratio_stencil_1);
  int32_t _2114 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_7);
  int32_t _2115 = _2113 * _2114;
  int32_t _2116 = _2115 >> 8;
  int16_t _2117 = (int16_t)(_2116);
  return _2117;
}

//store is: hw_output.glb.stencil(1, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = int16(((int32(ratio.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_8 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_2 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _2131 = (int32_t)(_ratio_stencil_2);
  int32_t _2132 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_8);
  int32_t _2133 = _2131 * _2132;
  int32_t _2134 = _2133 >> 8;
  int16_t _2135 = (int16_t)(_2134);
  return _2135;
}

//store is: hw_output.glb.stencil(2, (hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi) = int16(((int32(ratio.stencil((hw_output_s0_x_xi_xi*2), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_output_s0_x_xi_xi*2) + 3), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil_2(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_9 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_3 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _2149 = (int32_t)(_ratio_stencil_3);
  int32_t _2150 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_9);
  int32_t _2151 = _2149 * _2150;
  int32_t _2152 = _2151 >> 8;
  int16_t _2153 = (int16_t)(_2152);
  return _2153;
}

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_output_s0_x_xi_xi*2) + 4), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil_3(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_10 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_4 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _2167 = (int32_t)(_ratio_stencil_4);
  int32_t _2168 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_10);
  int32_t _2169 = _2167 * _2168;
  int32_t _2170 = _2169 >> 8;
  int16_t _2171 = (int16_t)(_2170);
  return _2171;
}

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_output_s0_x_xi_xi*2) + 4), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil_4(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_11 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_5 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _2186 = (int32_t)(_ratio_stencil_5);
  int32_t _2187 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_11);
  int32_t _2188 = _2186 * _2187;
  int32_t _2189 = _2188 >> 8;
  int16_t _2190 = (int16_t)(_2189);
  return _2190;
}

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*2) + 1), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_output_s0_x_xi_xi*2) + 4), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil_5(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_12 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_6 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _2205 = (int32_t)(_ratio_stencil_6);
  int32_t _2206 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_12);
  int32_t _2207 = _2205 * _2206;
  int32_t _2208 = _2207 >> 8;
  int16_t _2209 = (int16_t)(_2208);
  return _2209;
}

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_2 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_2;
}

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*2), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_2(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_3 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_3;
}

//store is: hw_output_global_wrapper.stencil(0, (((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_3(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_4 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_4;
}

//store is: hw_output_global_wrapper.stencil(1, (((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_4(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_5 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_5;
}

//store is: hw_output_global_wrapper.stencil(2, (((hw_output_global_wrapper_s0_x_xi_xi + (0*64))*2) + 1), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*2) + 1), hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_5(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_6 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_6;
}

