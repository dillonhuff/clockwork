#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_s0_x_x, ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(0, (hw_input_global_wrapper_s0_x_x + ((0*126) + -3)), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_s0_x_x, ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(1, (hw_input_global_wrapper_s0_x_x + ((0*126) + -3)), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_s0_x_x, ((hw_input_global_wrapper_s0_y + -3) + 3)) = hw_input.stencil(2, (hw_input_global_wrapper_s0_x_x + ((0*126) + -3)), (hw_input_global_wrapper_s0_y + -3))
hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) hw_input_stencil.extract<0, 15>();

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x_x, ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(0, hw_input_global_wrapper_global_wrapper_s0_x_x, ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x_x, ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(1, hw_input_global_wrapper_global_wrapper_s0_x_x, ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x_x, ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3)) = hw_input_global_wrapper.glb.stencil(2, hw_input_global_wrapper_global_wrapper_s0_x_x, ((hw_input_global_wrapper_global_wrapper_s0_y + -3) + 3))
hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) hw_input_global_wrapper_glb_stencil.extract<0, 15>();

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: gray.stencil(gray_s0_x_x, ((gray_s0_y + -3) + 3)) = (((hw_input_global_wrapper_global_wrapper.stencil(1, gray_s0_x_x, ((gray_s0_y + -3) + 3))*(uint16)150) + ((hw_input_global_wrapper_global_wrapper.stencil(2, gray_s0_x_x, ((gray_s0_y + -3) + 3))*(uint16)29) + (hw_input_global_wrapper_global_wrapper.stencil(0, gray_s0_x_x, ((gray_s0_y + -3) + 3))*(uint16)77)))/(uint16)256)
hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>();
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>();

  uint16_t _421 = (uint16_t)(150);
  uint16_t _422 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _421;
  uint16_t _423 = (uint16_t)(29);
  uint16_t _424 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _423;
  uint16_t _425 = (uint16_t)(77);
  uint16_t _426 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _425;
  uint16_t _427 = _424 + _426;
  uint16_t _428 = _422 + _427;
  uint16_t _429 = (uint16_t)(8);
  uint16_t _430 = _428 >> _429;
  return _430;
}

//store is: reciprocal.stencil(reciprocal_s0_x_x, reciprocal_s0_y) = rom_div_lookupa0[(int32(max(gray.stencil((reciprocal_s0_x_x + 3), (reciprocal_s0_y + 3)), (uint16)1)) + -1)]
hw_uint<16> hcompute_reciprocal_stencil(hw_uint<16>& gray_stencil) {
  uint16_t _gray_stencil_1 = (uint16_t) gray_stencil.extract<0, 15>();

  uint16_t _rom_div_lookupa0[255];
  // produce rom_div_lookupa0
  uint16_t _711 = (uint16_t)(256);
  _rom_div_lookupa0[0] = _711;
  uint16_t _712 = (uint16_t)(128);
  _rom_div_lookupa0[1] = _712;
  uint16_t _713 = (uint16_t)(85);
  _rom_div_lookupa0[2] = _713;
  uint16_t _714 = (uint16_t)(64);
  _rom_div_lookupa0[3] = _714;
  uint16_t _715 = (uint16_t)(51);
  _rom_div_lookupa0[4] = _715;
  uint16_t _716 = (uint16_t)(42);
  _rom_div_lookupa0[5] = _716;
  uint16_t _717 = (uint16_t)(36);
  _rom_div_lookupa0[6] = _717;
  uint16_t _718 = (uint16_t)(32);
  _rom_div_lookupa0[7] = _718;
  uint16_t _719 = (uint16_t)(28);
  _rom_div_lookupa0[8] = _719;
  uint16_t _720 = (uint16_t)(25);
  _rom_div_lookupa0[9] = _720;
  uint16_t _721 = (uint16_t)(23);
  _rom_div_lookupa0[10] = _721;
  uint16_t _722 = (uint16_t)(21);
  _rom_div_lookupa0[11] = _722;
  uint16_t _723 = (uint16_t)(19);
  _rom_div_lookupa0[12] = _723;
  uint16_t _724 = (uint16_t)(18);
  _rom_div_lookupa0[13] = _724;
  uint16_t _725 = (uint16_t)(17);
  _rom_div_lookupa0[14] = _725;
  uint16_t _726 = (uint16_t)(16);
  _rom_div_lookupa0[15] = _726;
  uint16_t _727 = (uint16_t)(15);
  _rom_div_lookupa0[16] = _727;
  uint16_t _728 = (uint16_t)(14);
  _rom_div_lookupa0[17] = _728;
  uint16_t _729 = (uint16_t)(13);
  _rom_div_lookupa0[18] = _729;
  uint16_t _730 = (uint16_t)(12);
  _rom_div_lookupa0[19] = _730;
  uint16_t _731 = (uint16_t)(12);
  _rom_div_lookupa0[20] = _731;
  uint16_t _732 = (uint16_t)(11);
  _rom_div_lookupa0[21] = _732;
  uint16_t _733 = (uint16_t)(11);
  _rom_div_lookupa0[22] = _733;
  uint16_t _734 = (uint16_t)(10);
  _rom_div_lookupa0[23] = _734;
  uint16_t _735 = (uint16_t)(10);
  _rom_div_lookupa0[24] = _735;
  uint16_t _736 = (uint16_t)(9);
  _rom_div_lookupa0[25] = _736;
  uint16_t _737 = (uint16_t)(9);
  _rom_div_lookupa0[26] = _737;
  uint16_t _738 = (uint16_t)(9);
  _rom_div_lookupa0[27] = _738;
  uint16_t _739 = (uint16_t)(8);
  _rom_div_lookupa0[28] = _739;
  uint16_t _740 = (uint16_t)(8);
  _rom_div_lookupa0[29] = _740;
  uint16_t _741 = (uint16_t)(8);
  _rom_div_lookupa0[30] = _741;
  uint16_t _742 = (uint16_t)(8);
  _rom_div_lookupa0[31] = _742;
  uint16_t _743 = (uint16_t)(7);
  _rom_div_lookupa0[32] = _743;
  uint16_t _744 = (uint16_t)(7);
  _rom_div_lookupa0[33] = _744;
  uint16_t _745 = (uint16_t)(7);
  _rom_div_lookupa0[34] = _745;
  uint16_t _746 = (uint16_t)(7);
  _rom_div_lookupa0[35] = _746;
  uint16_t _747 = (uint16_t)(6);
  _rom_div_lookupa0[36] = _747;
  uint16_t _748 = (uint16_t)(6);
  _rom_div_lookupa0[37] = _748;
  uint16_t _749 = (uint16_t)(6);
  _rom_div_lookupa0[38] = _749;
  uint16_t _750 = (uint16_t)(6);
  _rom_div_lookupa0[39] = _750;
  uint16_t _751 = (uint16_t)(6);
  _rom_div_lookupa0[40] = _751;
  uint16_t _752 = (uint16_t)(6);
  _rom_div_lookupa0[41] = _752;
  uint16_t _753 = (uint16_t)(5);
  _rom_div_lookupa0[42] = _753;
  uint16_t _754 = (uint16_t)(5);
  _rom_div_lookupa0[43] = _754;
  uint16_t _755 = (uint16_t)(5);
  _rom_div_lookupa0[44] = _755;
  uint16_t _756 = (uint16_t)(5);
  _rom_div_lookupa0[45] = _756;
  uint16_t _757 = (uint16_t)(5);
  _rom_div_lookupa0[46] = _757;
  uint16_t _758 = (uint16_t)(5);
  _rom_div_lookupa0[47] = _758;
  uint16_t _759 = (uint16_t)(5);
  _rom_div_lookupa0[48] = _759;
  uint16_t _760 = (uint16_t)(5);
  _rom_div_lookupa0[49] = _760;
  uint16_t _761 = (uint16_t)(5);
  _rom_div_lookupa0[50] = _761;
  uint16_t _762 = (uint16_t)(4);
  _rom_div_lookupa0[51] = _762;
  uint16_t _763 = (uint16_t)(4);
  _rom_div_lookupa0[52] = _763;
  uint16_t _764 = (uint16_t)(4);
  _rom_div_lookupa0[53] = _764;
  uint16_t _765 = (uint16_t)(4);
  _rom_div_lookupa0[54] = _765;
  uint16_t _766 = (uint16_t)(4);
  _rom_div_lookupa0[55] = _766;
  uint16_t _767 = (uint16_t)(4);
  _rom_div_lookupa0[56] = _767;
  uint16_t _768 = (uint16_t)(4);
  _rom_div_lookupa0[57] = _768;
  uint16_t _769 = (uint16_t)(4);
  _rom_div_lookupa0[58] = _769;
  uint16_t _770 = (uint16_t)(4);
  _rom_div_lookupa0[59] = _770;
  uint16_t _771 = (uint16_t)(4);
  _rom_div_lookupa0[60] = _771;
  uint16_t _772 = (uint16_t)(4);
  _rom_div_lookupa0[61] = _772;
  uint16_t _773 = (uint16_t)(4);
  _rom_div_lookupa0[62] = _773;
  uint16_t _774 = (uint16_t)(4);
  _rom_div_lookupa0[63] = _774;
  uint16_t _775 = (uint16_t)(3);
  _rom_div_lookupa0[64] = _775;
  uint16_t _776 = (uint16_t)(3);
  _rom_div_lookupa0[65] = _776;
  uint16_t _777 = (uint16_t)(3);
  _rom_div_lookupa0[66] = _777;
  uint16_t _778 = (uint16_t)(3);
  _rom_div_lookupa0[67] = _778;
  uint16_t _779 = (uint16_t)(3);
  _rom_div_lookupa0[68] = _779;
  uint16_t _780 = (uint16_t)(3);
  _rom_div_lookupa0[69] = _780;
  uint16_t _781 = (uint16_t)(3);
  _rom_div_lookupa0[70] = _781;
  uint16_t _782 = (uint16_t)(3);
  _rom_div_lookupa0[71] = _782;
  uint16_t _783 = (uint16_t)(3);
  _rom_div_lookupa0[72] = _783;
  uint16_t _784 = (uint16_t)(3);
  _rom_div_lookupa0[73] = _784;
  uint16_t _785 = (uint16_t)(3);
  _rom_div_lookupa0[74] = _785;
  uint16_t _786 = (uint16_t)(3);
  _rom_div_lookupa0[75] = _786;
  uint16_t _787 = (uint16_t)(3);
  _rom_div_lookupa0[76] = _787;
  uint16_t _788 = (uint16_t)(3);
  _rom_div_lookupa0[77] = _788;
  uint16_t _789 = (uint16_t)(3);
  _rom_div_lookupa0[78] = _789;
  uint16_t _790 = (uint16_t)(3);
  _rom_div_lookupa0[79] = _790;
  uint16_t _791 = (uint16_t)(3);
  _rom_div_lookupa0[80] = _791;
  uint16_t _792 = (uint16_t)(3);
  _rom_div_lookupa0[81] = _792;
  uint16_t _793 = (uint16_t)(3);
  _rom_div_lookupa0[82] = _793;
  uint16_t _794 = (uint16_t)(3);
  _rom_div_lookupa0[83] = _794;
  uint16_t _795 = (uint16_t)(3);
  _rom_div_lookupa0[84] = _795;
  uint16_t _796 = (uint16_t)(2);
  _rom_div_lookupa0[85] = _796;
  uint16_t _797 = (uint16_t)(2);
  _rom_div_lookupa0[86] = _797;
  uint16_t _798 = (uint16_t)(2);
  _rom_div_lookupa0[87] = _798;
  uint16_t _799 = (uint16_t)(2);
  _rom_div_lookupa0[88] = _799;
  uint16_t _800 = (uint16_t)(2);
  _rom_div_lookupa0[89] = _800;
  uint16_t _801 = (uint16_t)(2);
  _rom_div_lookupa0[90] = _801;
  uint16_t _802 = (uint16_t)(2);
  _rom_div_lookupa0[91] = _802;
  uint16_t _803 = (uint16_t)(2);
  _rom_div_lookupa0[92] = _803;
  uint16_t _804 = (uint16_t)(2);
  _rom_div_lookupa0[93] = _804;
  uint16_t _805 = (uint16_t)(2);
  _rom_div_lookupa0[94] = _805;
  uint16_t _806 = (uint16_t)(2);
  _rom_div_lookupa0[95] = _806;
  uint16_t _807 = (uint16_t)(2);
  _rom_div_lookupa0[96] = _807;
  uint16_t _808 = (uint16_t)(2);
  _rom_div_lookupa0[97] = _808;
  uint16_t _809 = (uint16_t)(2);
  _rom_div_lookupa0[98] = _809;
  uint16_t _810 = (uint16_t)(2);
  _rom_div_lookupa0[99] = _810;
  uint16_t _811 = (uint16_t)(2);
  _rom_div_lookupa0[100] = _811;
  uint16_t _812 = (uint16_t)(2);
  _rom_div_lookupa0[101] = _812;
  uint16_t _813 = (uint16_t)(2);
  _rom_div_lookupa0[102] = _813;
  uint16_t _814 = (uint16_t)(2);
  _rom_div_lookupa0[103] = _814;
  uint16_t _815 = (uint16_t)(2);
  _rom_div_lookupa0[104] = _815;
  uint16_t _816 = (uint16_t)(2);
  _rom_div_lookupa0[105] = _816;
  uint16_t _817 = (uint16_t)(2);
  _rom_div_lookupa0[106] = _817;
  uint16_t _818 = (uint16_t)(2);
  _rom_div_lookupa0[107] = _818;
  uint16_t _819 = (uint16_t)(2);
  _rom_div_lookupa0[108] = _819;
  uint16_t _820 = (uint16_t)(2);
  _rom_div_lookupa0[109] = _820;
  uint16_t _821 = (uint16_t)(2);
  _rom_div_lookupa0[110] = _821;
  uint16_t _822 = (uint16_t)(2);
  _rom_div_lookupa0[111] = _822;
  uint16_t _823 = (uint16_t)(2);
  _rom_div_lookupa0[112] = _823;
  uint16_t _824 = (uint16_t)(2);
  _rom_div_lookupa0[113] = _824;
  uint16_t _825 = (uint16_t)(2);
  _rom_div_lookupa0[114] = _825;
  uint16_t _826 = (uint16_t)(2);
  _rom_div_lookupa0[115] = _826;
  uint16_t _827 = (uint16_t)(2);
  _rom_div_lookupa0[116] = _827;
  uint16_t _828 = (uint16_t)(2);
  _rom_div_lookupa0[117] = _828;
  uint16_t _829 = (uint16_t)(2);
  _rom_div_lookupa0[118] = _829;
  uint16_t _830 = (uint16_t)(2);
  _rom_div_lookupa0[119] = _830;
  uint16_t _831 = (uint16_t)(2);
  _rom_div_lookupa0[120] = _831;
  uint16_t _832 = (uint16_t)(2);
  _rom_div_lookupa0[121] = _832;
  uint16_t _833 = (uint16_t)(2);
  _rom_div_lookupa0[122] = _833;
  uint16_t _834 = (uint16_t)(2);
  _rom_div_lookupa0[123] = _834;
  uint16_t _835 = (uint16_t)(2);
  _rom_div_lookupa0[124] = _835;
  uint16_t _836 = (uint16_t)(2);
  _rom_div_lookupa0[125] = _836;
  uint16_t _837 = (uint16_t)(2);
  _rom_div_lookupa0[126] = _837;
  uint16_t _838 = (uint16_t)(2);
  _rom_div_lookupa0[127] = _838;
  uint16_t _839 = (uint16_t)(1);
  _rom_div_lookupa0[128] = _839;
  uint16_t _840 = (uint16_t)(1);
  _rom_div_lookupa0[129] = _840;
  uint16_t _841 = (uint16_t)(1);
  _rom_div_lookupa0[130] = _841;
  uint16_t _842 = (uint16_t)(1);
  _rom_div_lookupa0[131] = _842;
  uint16_t _843 = (uint16_t)(1);
  _rom_div_lookupa0[132] = _843;
  uint16_t _844 = (uint16_t)(1);
  _rom_div_lookupa0[133] = _844;
  uint16_t _845 = (uint16_t)(1);
  _rom_div_lookupa0[134] = _845;
  uint16_t _846 = (uint16_t)(1);
  _rom_div_lookupa0[135] = _846;
  uint16_t _847 = (uint16_t)(1);
  _rom_div_lookupa0[136] = _847;
  uint16_t _848 = (uint16_t)(1);
  _rom_div_lookupa0[137] = _848;
  uint16_t _849 = (uint16_t)(1);
  _rom_div_lookupa0[138] = _849;
  uint16_t _850 = (uint16_t)(1);
  _rom_div_lookupa0[139] = _850;
  uint16_t _851 = (uint16_t)(1);
  _rom_div_lookupa0[140] = _851;
  uint16_t _852 = (uint16_t)(1);
  _rom_div_lookupa0[141] = _852;
  uint16_t _853 = (uint16_t)(1);
  _rom_div_lookupa0[142] = _853;
  uint16_t _854 = (uint16_t)(1);
  _rom_div_lookupa0[143] = _854;
  uint16_t _855 = (uint16_t)(1);
  _rom_div_lookupa0[144] = _855;
  uint16_t _856 = (uint16_t)(1);
  _rom_div_lookupa0[145] = _856;
  uint16_t _857 = (uint16_t)(1);
  _rom_div_lookupa0[146] = _857;
  uint16_t _858 = (uint16_t)(1);
  _rom_div_lookupa0[147] = _858;
  uint16_t _859 = (uint16_t)(1);
  _rom_div_lookupa0[148] = _859;
  uint16_t _860 = (uint16_t)(1);
  _rom_div_lookupa0[149] = _860;
  uint16_t _861 = (uint16_t)(1);
  _rom_div_lookupa0[150] = _861;
  uint16_t _862 = (uint16_t)(1);
  _rom_div_lookupa0[151] = _862;
  uint16_t _863 = (uint16_t)(1);
  _rom_div_lookupa0[152] = _863;
  uint16_t _864 = (uint16_t)(1);
  _rom_div_lookupa0[153] = _864;
  uint16_t _865 = (uint16_t)(1);
  _rom_div_lookupa0[154] = _865;
  uint16_t _866 = (uint16_t)(1);
  _rom_div_lookupa0[155] = _866;
  uint16_t _867 = (uint16_t)(1);
  _rom_div_lookupa0[156] = _867;
  uint16_t _868 = (uint16_t)(1);
  _rom_div_lookupa0[157] = _868;
  uint16_t _869 = (uint16_t)(1);
  _rom_div_lookupa0[158] = _869;
  uint16_t _870 = (uint16_t)(1);
  _rom_div_lookupa0[159] = _870;
  uint16_t _871 = (uint16_t)(1);
  _rom_div_lookupa0[160] = _871;
  uint16_t _872 = (uint16_t)(1);
  _rom_div_lookupa0[161] = _872;
  uint16_t _873 = (uint16_t)(1);
  _rom_div_lookupa0[162] = _873;
  uint16_t _874 = (uint16_t)(1);
  _rom_div_lookupa0[163] = _874;
  uint16_t _875 = (uint16_t)(1);
  _rom_div_lookupa0[164] = _875;
  uint16_t _876 = (uint16_t)(1);
  _rom_div_lookupa0[165] = _876;
  uint16_t _877 = (uint16_t)(1);
  _rom_div_lookupa0[166] = _877;
  uint16_t _878 = (uint16_t)(1);
  _rom_div_lookupa0[167] = _878;
  uint16_t _879 = (uint16_t)(1);
  _rom_div_lookupa0[168] = _879;
  uint16_t _880 = (uint16_t)(1);
  _rom_div_lookupa0[169] = _880;
  uint16_t _881 = (uint16_t)(1);
  _rom_div_lookupa0[170] = _881;
  uint16_t _882 = (uint16_t)(1);
  _rom_div_lookupa0[171] = _882;
  uint16_t _883 = (uint16_t)(1);
  _rom_div_lookupa0[172] = _883;
  uint16_t _884 = (uint16_t)(1);
  _rom_div_lookupa0[173] = _884;
  uint16_t _885 = (uint16_t)(1);
  _rom_div_lookupa0[174] = _885;
  uint16_t _886 = (uint16_t)(1);
  _rom_div_lookupa0[175] = _886;
  uint16_t _887 = (uint16_t)(1);
  _rom_div_lookupa0[176] = _887;
  uint16_t _888 = (uint16_t)(1);
  _rom_div_lookupa0[177] = _888;
  uint16_t _889 = (uint16_t)(1);
  _rom_div_lookupa0[178] = _889;
  uint16_t _890 = (uint16_t)(1);
  _rom_div_lookupa0[179] = _890;
  uint16_t _891 = (uint16_t)(1);
  _rom_div_lookupa0[180] = _891;
  uint16_t _892 = (uint16_t)(1);
  _rom_div_lookupa0[181] = _892;
  uint16_t _893 = (uint16_t)(1);
  _rom_div_lookupa0[182] = _893;
  uint16_t _894 = (uint16_t)(1);
  _rom_div_lookupa0[183] = _894;
  uint16_t _895 = (uint16_t)(1);
  _rom_div_lookupa0[184] = _895;
  uint16_t _896 = (uint16_t)(1);
  _rom_div_lookupa0[185] = _896;
  uint16_t _897 = (uint16_t)(1);
  _rom_div_lookupa0[186] = _897;
  uint16_t _898 = (uint16_t)(1);
  _rom_div_lookupa0[187] = _898;
  uint16_t _899 = (uint16_t)(1);
  _rom_div_lookupa0[188] = _899;
  uint16_t _900 = (uint16_t)(1);
  _rom_div_lookupa0[189] = _900;
  uint16_t _901 = (uint16_t)(1);
  _rom_div_lookupa0[190] = _901;
  uint16_t _902 = (uint16_t)(1);
  _rom_div_lookupa0[191] = _902;
  uint16_t _903 = (uint16_t)(1);
  _rom_div_lookupa0[192] = _903;
  uint16_t _904 = (uint16_t)(1);
  _rom_div_lookupa0[193] = _904;
  uint16_t _905 = (uint16_t)(1);
  _rom_div_lookupa0[194] = _905;
  uint16_t _906 = (uint16_t)(1);
  _rom_div_lookupa0[195] = _906;
  uint16_t _907 = (uint16_t)(1);
  _rom_div_lookupa0[196] = _907;
  uint16_t _908 = (uint16_t)(1);
  _rom_div_lookupa0[197] = _908;
  uint16_t _909 = (uint16_t)(1);
  _rom_div_lookupa0[198] = _909;
  uint16_t _910 = (uint16_t)(1);
  _rom_div_lookupa0[199] = _910;
  uint16_t _911 = (uint16_t)(1);
  _rom_div_lookupa0[200] = _911;
  uint16_t _912 = (uint16_t)(1);
  _rom_div_lookupa0[201] = _912;
  uint16_t _913 = (uint16_t)(1);
  _rom_div_lookupa0[202] = _913;
  uint16_t _914 = (uint16_t)(1);
  _rom_div_lookupa0[203] = _914;
  uint16_t _915 = (uint16_t)(1);
  _rom_div_lookupa0[204] = _915;
  uint16_t _916 = (uint16_t)(1);
  _rom_div_lookupa0[205] = _916;
  uint16_t _917 = (uint16_t)(1);
  _rom_div_lookupa0[206] = _917;
  uint16_t _918 = (uint16_t)(1);
  _rom_div_lookupa0[207] = _918;
  uint16_t _919 = (uint16_t)(1);
  _rom_div_lookupa0[208] = _919;
  uint16_t _920 = (uint16_t)(1);
  _rom_div_lookupa0[209] = _920;
  uint16_t _921 = (uint16_t)(1);
  _rom_div_lookupa0[210] = _921;
  uint16_t _922 = (uint16_t)(1);
  _rom_div_lookupa0[211] = _922;
  uint16_t _923 = (uint16_t)(1);
  _rom_div_lookupa0[212] = _923;
  uint16_t _924 = (uint16_t)(1);
  _rom_div_lookupa0[213] = _924;
  uint16_t _925 = (uint16_t)(1);
  _rom_div_lookupa0[214] = _925;
  uint16_t _926 = (uint16_t)(1);
  _rom_div_lookupa0[215] = _926;
  uint16_t _927 = (uint16_t)(1);
  _rom_div_lookupa0[216] = _927;
  uint16_t _928 = (uint16_t)(1);
  _rom_div_lookupa0[217] = _928;
  uint16_t _929 = (uint16_t)(1);
  _rom_div_lookupa0[218] = _929;
  uint16_t _930 = (uint16_t)(1);
  _rom_div_lookupa0[219] = _930;
  uint16_t _931 = (uint16_t)(1);
  _rom_div_lookupa0[220] = _931;
  uint16_t _932 = (uint16_t)(1);
  _rom_div_lookupa0[221] = _932;
  uint16_t _933 = (uint16_t)(1);
  _rom_div_lookupa0[222] = _933;
  uint16_t _934 = (uint16_t)(1);
  _rom_div_lookupa0[223] = _934;
  uint16_t _935 = (uint16_t)(1);
  _rom_div_lookupa0[224] = _935;
  uint16_t _936 = (uint16_t)(1);
  _rom_div_lookupa0[225] = _936;
  uint16_t _937 = (uint16_t)(1);
  _rom_div_lookupa0[226] = _937;
  uint16_t _938 = (uint16_t)(1);
  _rom_div_lookupa0[227] = _938;
  uint16_t _939 = (uint16_t)(1);
  _rom_div_lookupa0[228] = _939;
  uint16_t _940 = (uint16_t)(1);
  _rom_div_lookupa0[229] = _940;
  uint16_t _941 = (uint16_t)(1);
  _rom_div_lookupa0[230] = _941;
  uint16_t _942 = (uint16_t)(1);
  _rom_div_lookupa0[231] = _942;
  uint16_t _943 = (uint16_t)(1);
  _rom_div_lookupa0[232] = _943;
  uint16_t _944 = (uint16_t)(1);
  _rom_div_lookupa0[233] = _944;
  uint16_t _945 = (uint16_t)(1);
  _rom_div_lookupa0[234] = _945;
  uint16_t _946 = (uint16_t)(1);
  _rom_div_lookupa0[235] = _946;
  uint16_t _947 = (uint16_t)(1);
  _rom_div_lookupa0[236] = _947;
  uint16_t _948 = (uint16_t)(1);
  _rom_div_lookupa0[237] = _948;
  uint16_t _949 = (uint16_t)(1);
  _rom_div_lookupa0[238] = _949;
  uint16_t _950 = (uint16_t)(1);
  _rom_div_lookupa0[239] = _950;
  uint16_t _951 = (uint16_t)(1);
  _rom_div_lookupa0[240] = _951;
  uint16_t _952 = (uint16_t)(1);
  _rom_div_lookupa0[241] = _952;
  uint16_t _953 = (uint16_t)(1);
  _rom_div_lookupa0[242] = _953;
  uint16_t _954 = (uint16_t)(1);
  _rom_div_lookupa0[243] = _954;
  uint16_t _955 = (uint16_t)(1);
  _rom_div_lookupa0[244] = _955;
  uint16_t _956 = (uint16_t)(1);
  _rom_div_lookupa0[245] = _956;
  uint16_t _957 = (uint16_t)(1);
  _rom_div_lookupa0[246] = _957;
  uint16_t _958 = (uint16_t)(1);
  _rom_div_lookupa0[247] = _958;
  uint16_t _959 = (uint16_t)(1);
  _rom_div_lookupa0[248] = _959;
  uint16_t _960 = (uint16_t)(1);
  _rom_div_lookupa0[249] = _960;
  uint16_t _961 = (uint16_t)(1);
  _rom_div_lookupa0[250] = _961;
  uint16_t _962 = (uint16_t)(1);
  _rom_div_lookupa0[251] = _962;
  uint16_t _963 = (uint16_t)(1);
  _rom_div_lookupa0[252] = _963;
  uint16_t _964 = (uint16_t)(1);
  _rom_div_lookupa0[253] = _964;
  uint16_t _965 = (uint16_t)(1);
  _rom_div_lookupa0[254] = _965;

  uint16_t _966 = (uint16_t)(1);
  uint16_t _967 = max(_gray_stencil_1, _966);
  int32_t _968 = (int32_t)(_967);
  int32_t _969 = _968 + -1;
  uint16_t _970 = ((const uint16_t *)_rom_div_lookupa0)[_969];
  return _970;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s0_x_x, blur_unnormalized_s0_y) = (uint16)0
hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _984 = (uint16_t)(0);
  return _984;
}

//store is: blur_unnormalized.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y) = (gray.stencil((blur_unnormalized_s1_x_x + 1), blur_unnormalized_s1_y) + (blur_unnormalized.stencil(blur_unnormalized_s1_x_x, blur_unnormalized_s1_y) + ((gray.stencil((blur_unnormalized_s1_x_x + 2), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x + 3), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x + 4), blur_unnormalized_s1_y)*(uint16)2) + (gray.stencil((blur_unnormalized_s1_x_x + 5), blur_unnormalized_s1_y) + (gray.stencil(blur_unnormalized_s1_x_x, (blur_unnormalized_s1_y + 1)) + ((gray.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 1))*(uint16)3) + ((gray.stencil((blur_unnormalized_s1_x_x + 2), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 3), (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x_x + 4), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 5), (blur_unnormalized_s1_y + 1))*(uint16)3) + (gray.stencil((blur_unnormalized_s1_x_x + 6), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(blur_unnormalized_s1_x_x, (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 2), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil((blur_unnormalized_s1_x_x + 3), (blur_unnormalized_s1_y + 2))*(uint16)15) + ((gray.stencil((blur_unnormalized_s1_x_x + 4), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil((blur_unnormalized_s1_x_x + 5), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 6), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(blur_unnormalized_s1_x_x, (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x_x + 2), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil((blur_unnormalized_s1_x_x + 3), (blur_unnormalized_s1_y + 3))*(uint16)18) + ((gray.stencil((blur_unnormalized_s1_x_x + 4), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil((blur_unnormalized_s1_x_x + 5), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x_x + 6), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(blur_unnormalized_s1_x_x, (blur_unnormalized_s1_y + 4))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 2), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil((blur_unnormalized_s1_x_x + 3), (blur_unnormalized_s1_y + 4))*(uint16)15) + ((gray.stencil((blur_unnormalized_s1_x_x + 4), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil((blur_unnormalized_s1_x_x + 5), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 6), (blur_unnormalized_s1_y + 4))*(uint16)2) + (gray.stencil(blur_unnormalized_s1_x_x, (blur_unnormalized_s1_y + 5)) + ((gray.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 5))*(uint16)3) + ((gray.stencil((blur_unnormalized_s1_x_x + 2), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 3), (blur_unnormalized_s1_y + 5))*(uint16)7) + ((gray.stencil((blur_unnormalized_s1_x_x + 4), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil((blur_unnormalized_s1_x_x + 5), (blur_unnormalized_s1_y + 5))*(uint16)3) + (gray.stencil((blur_unnormalized_s1_x_x + 6), (blur_unnormalized_s1_y + 5)) + (gray.stencil((blur_unnormalized_s1_x_x + 1), (blur_unnormalized_s1_y + 6)) + ((gray.stencil((blur_unnormalized_s1_x_x + 2), (blur_unnormalized_s1_y + 6))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x + 3), (blur_unnormalized_s1_y + 6))*(uint16)2) + (gray.stencil((blur_unnormalized_s1_x_x + 5), (blur_unnormalized_s1_y + 6)) + (gray.stencil((blur_unnormalized_s1_x_x + 4), (blur_unnormalized_s1_y + 6))*(uint16)2))))))))))))))))))))))))))))))))))))))))))))))
hw_uint<16> hcompute_blur_unnormalized_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<720>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_1 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

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
  uint16_t _gray_stencil_2 = (uint16_t) gray_stencil.extract<160, 175>();
  uint16_t _gray_stencil_20 = (uint16_t) gray_stencil.extract<176, 191>();
  uint16_t _gray_stencil_21 = (uint16_t) gray_stencil.extract<192, 207>();
  uint16_t _gray_stencil_22 = (uint16_t) gray_stencil.extract<208, 223>();
  uint16_t _gray_stencil_23 = (uint16_t) gray_stencil.extract<224, 239>();
  uint16_t _gray_stencil_24 = (uint16_t) gray_stencil.extract<240, 255>();
  uint16_t _gray_stencil_25 = (uint16_t) gray_stencil.extract<256, 271>();
  uint16_t _gray_stencil_26 = (uint16_t) gray_stencil.extract<272, 287>();
  uint16_t _gray_stencil_27 = (uint16_t) gray_stencil.extract<288, 303>();
  uint16_t _gray_stencil_28 = (uint16_t) gray_stencil.extract<304, 319>();
  uint16_t _gray_stencil_29 = (uint16_t) gray_stencil.extract<320, 335>();
  uint16_t _gray_stencil_3 = (uint16_t) gray_stencil.extract<336, 351>();
  uint16_t _gray_stencil_30 = (uint16_t) gray_stencil.extract<352, 367>();
  uint16_t _gray_stencil_31 = (uint16_t) gray_stencil.extract<368, 383>();
  uint16_t _gray_stencil_32 = (uint16_t) gray_stencil.extract<384, 399>();
  uint16_t _gray_stencil_33 = (uint16_t) gray_stencil.extract<400, 415>();
  uint16_t _gray_stencil_34 = (uint16_t) gray_stencil.extract<416, 431>();
  uint16_t _gray_stencil_35 = (uint16_t) gray_stencil.extract<432, 447>();
  uint16_t _gray_stencil_36 = (uint16_t) gray_stencil.extract<448, 463>();
  uint16_t _gray_stencil_37 = (uint16_t) gray_stencil.extract<464, 479>();
  uint16_t _gray_stencil_38 = (uint16_t) gray_stencil.extract<480, 495>();
  uint16_t _gray_stencil_39 = (uint16_t) gray_stencil.extract<496, 511>();
  uint16_t _gray_stencil_4 = (uint16_t) gray_stencil.extract<512, 527>();
  uint16_t _gray_stencil_40 = (uint16_t) gray_stencil.extract<528, 543>();
  uint16_t _gray_stencil_41 = (uint16_t) gray_stencil.extract<544, 559>();
  uint16_t _gray_stencil_42 = (uint16_t) gray_stencil.extract<560, 575>();
  uint16_t _gray_stencil_43 = (uint16_t) gray_stencil.extract<576, 591>();
  uint16_t _gray_stencil_44 = (uint16_t) gray_stencil.extract<592, 607>();
  uint16_t _gray_stencil_45 = (uint16_t) gray_stencil.extract<608, 623>();
  uint16_t _gray_stencil_46 = (uint16_t) gray_stencil.extract<624, 639>();
  uint16_t _gray_stencil_5 = (uint16_t) gray_stencil.extract<640, 655>();
  uint16_t _gray_stencil_6 = (uint16_t) gray_stencil.extract<656, 671>();
  uint16_t _gray_stencil_7 = (uint16_t) gray_stencil.extract<672, 687>();
  uint16_t _gray_stencil_8 = (uint16_t) gray_stencil.extract<688, 703>();
  uint16_t _gray_stencil_9 = (uint16_t) gray_stencil.extract<704, 719>();

  uint16_t _987 = (uint16_t)(2);
  uint16_t _988 = _gray_stencil_3 * _987;
  uint16_t _989 = _gray_stencil_4 * _987;
  uint16_t _990 = _gray_stencil_5 * _987;
  uint16_t _991 = (uint16_t)(3);
  uint16_t _992 = _gray_stencil_8 * _991;
  uint16_t _993 = (uint16_t)(6);
  uint16_t _994 = _gray_stencil_9 * _993;
  uint16_t _995 = (uint16_t)(7);
  uint16_t _996 = _gray_stencil_10 * _995;
  uint16_t _997 = _gray_stencil_11 * _993;
  uint16_t _998 = _gray_stencil_12 * _991;
  uint16_t _999 = _gray_stencil_14 * _987;
  uint16_t _1000 = _gray_stencil_15 * _993;
  uint16_t _1001 = (uint16_t)(12);
  uint16_t _1002 = _gray_stencil_16 * _1001;
  uint16_t _1003 = (uint16_t)(15);
  uint16_t _1004 = _gray_stencil_17 * _1003;
  uint16_t _1005 = _gray_stencil_18 * _1001;
  uint16_t _1006 = _gray_stencil_19 * _993;
  uint16_t _1007 = _gray_stencil_20 * _987;
  uint16_t _1008 = _gray_stencil_21 * _987;
  uint16_t _1009 = _gray_stencil_22 * _995;
  uint16_t _1010 = _gray_stencil_23 * _1003;
  uint16_t _1011 = (uint16_t)(18);
  uint16_t _1012 = _gray_stencil_24 * _1011;
  uint16_t _1013 = _gray_stencil_25 * _1003;
  uint16_t _1014 = _gray_stencil_26 * _995;
  uint16_t _1015 = _gray_stencil_27 * _987;
  uint16_t _1016 = _gray_stencil_28 * _987;
  uint16_t _1017 = _gray_stencil_29 * _993;
  uint16_t _1018 = _gray_stencil_30 * _1001;
  uint16_t _1019 = _gray_stencil_31 * _1003;
  uint16_t _1020 = _gray_stencil_32 * _1001;
  uint16_t _1021 = _gray_stencil_33 * _993;
  uint16_t _1022 = _gray_stencil_34 * _987;
  uint16_t _1023 = _gray_stencil_36 * _991;
  uint16_t _1024 = _gray_stencil_37 * _993;
  uint16_t _1025 = _gray_stencil_38 * _995;
  uint16_t _1026 = _gray_stencil_39 * _993;
  uint16_t _1027 = _gray_stencil_40 * _991;
  uint16_t _1028 = _gray_stencil_43 * _987;
  uint16_t _1029 = _gray_stencil_44 * _987;
  uint16_t _1030 = _gray_stencil_46 * _987;
  uint16_t _1031 = _gray_stencil_45 + _1030;
  uint16_t _1032 = _1029 + _1031;
  uint16_t _1033 = _1028 + _1032;
  uint16_t _1034 = _gray_stencil_42 + _1033;
  uint16_t _1035 = _gray_stencil_41 + _1034;
  uint16_t _1036 = _1027 + _1035;
  uint16_t _1037 = _1026 + _1036;
  uint16_t _1038 = _1025 + _1037;
  uint16_t _1039 = _1024 + _1038;
  uint16_t _1040 = _1023 + _1039;
  uint16_t _1041 = _gray_stencil_35 + _1040;
  uint16_t _1042 = _1022 + _1041;
  uint16_t _1043 = _1021 + _1042;
  uint16_t _1044 = _1020 + _1043;
  uint16_t _1045 = _1019 + _1044;
  uint16_t _1046 = _1018 + _1045;
  uint16_t _1047 = _1017 + _1046;
  uint16_t _1048 = _1016 + _1047;
  uint16_t _1049 = _1015 + _1048;
  uint16_t _1050 = _1014 + _1049;
  uint16_t _1051 = _1013 + _1050;
  uint16_t _1052 = _1012 + _1051;
  uint16_t _1053 = _1010 + _1052;
  uint16_t _1054 = _1009 + _1053;
  uint16_t _1055 = _1008 + _1054;
  uint16_t _1056 = _1007 + _1055;
  uint16_t _1057 = _1006 + _1056;
  uint16_t _1058 = _1005 + _1057;
  uint16_t _1059 = _1004 + _1058;
  uint16_t _1060 = _1002 + _1059;
  uint16_t _1061 = _1000 + _1060;
  uint16_t _1062 = _999 + _1061;
  uint16_t _1063 = _gray_stencil_13 + _1062;
  uint16_t _1064 = _998 + _1063;
  uint16_t _1065 = _997 + _1064;
  uint16_t _1066 = _996 + _1065;
  uint16_t _1067 = _994 + _1066;
  uint16_t _1068 = _992 + _1067;
  uint16_t _1069 = _gray_stencil_7 + _1068;
  uint16_t _1070 = _gray_stencil_6 + _1069;
  uint16_t _1071 = _990 + _1070;
  uint16_t _1072 = _989 + _1071;
  uint16_t _1073 = _988 + _1072;
  uint16_t _1074 = _blur_unnormalized_stencil_1 + _1073;
  uint16_t _1075 = _gray_stencil_2 + _1074;
  return _1075;
}

//store is: sharpen.stencil(sharpen_s0_x_x, sharpen_s0_y) = uint16(max(min(((int16(gray.stencil((sharpen_s0_x_x + 3), (sharpen_s0_y + 3)))*(int16)2) - int16(uint8((blur_unnormalized.stencil(sharpen_s0_x_x, sharpen_s0_y)/(uint16)256)))), (int16)255), (int16)0))
hw_uint<16> hcompute_sharpen_stencil(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_2 = (uint16_t) blur_unnormalized_stencil.extract<0, 15>();

  uint16_t _gray_stencil_47 = (uint16_t) gray_stencil.extract<0, 15>();

  int16_t _1312 = (int16_t)(_gray_stencil_47);
  int16_t _1313 = (int16_t)(2);
  int16_t _1314 = _1312 * _1313;
  uint16_t _1315 = (uint16_t)(8);
  uint16_t _1316 = _blur_unnormalized_stencil_2 >> _1315;
  uint8_t _1317 = (uint8_t)(_1316);
  int16_t _1318 = (int16_t)(_1317);
  int16_t _1319 = _1314 - _1318;
  int16_t _1320 = (int16_t)(255);
  int16_t _1321 = min(_1319, _1320);
  int16_t _1322 = (int16_t)(0);
  int16_t _1323 = max(_1321, _1322);
  uint16_t _1324 = (uint16_t)(_1323);
  return _1324;
}

//store is: ratio.stencil(ratio_s0_x_x, ratio_s0_y) = (sharpen.stencil(ratio_s0_x_x, ratio_s0_y)*reciprocal.stencil(ratio_s0_x_x, ratio_s0_y))
hw_uint<16> hcompute_ratio_stencil(hw_uint<16>& reciprocal_stencil, hw_uint<16>& sharpen_stencil) {
  uint16_t _reciprocal_stencil_1 = (uint16_t) reciprocal_stencil.extract<0, 15>();

  uint16_t _sharpen_stencil_1 = (uint16_t) sharpen_stencil.extract<0, 15>();

  uint16_t _1355 = _sharpen_stencil_1 * _reciprocal_stencil_1;
  return _1355;
}

//store is: hw_output.glb.stencil(0, hw_output_s0_x_xi_xi, hw_output_s0_y_yi) = int16(((int32(ratio.stencil(hw_output_s0_x_xi_xi, hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(0, (hw_output_s0_x_xi_xi + 3), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_1 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _1360 = (int32_t)(_ratio_stencil_1);
  int32_t _1361 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_4);
  int32_t _1362 = _1360 * _1361;
  int32_t _1363 = _1362 >> 8;
  int16_t _1364 = (int16_t)(_1363);
  return _1364;
}

//store is: hw_output.glb.stencil(1, hw_output_s0_x_xi_xi, hw_output_s0_y_yi) = int16(((int32(ratio.stencil(hw_output_s0_x_xi_xi, hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(1, (hw_output_s0_x_xi_xi + 3), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_2 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _1377 = (int32_t)(_ratio_stencil_2);
  int32_t _1378 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_5);
  int32_t _1379 = _1377 * _1378;
  int32_t _1380 = _1379 >> 8;
  int16_t _1381 = (int16_t)(_1380);
  return _1381;
}

//store is: hw_output.glb.stencil(2, hw_output_s0_x_xi_xi, hw_output_s0_y_yi) = int16(((int32(ratio.stencil(hw_output_s0_x_xi_xi, hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(2, (hw_output_s0_x_xi_xi + 3), (hw_output_s0_y_yi + 3))))/256))
hw_uint<16> hcompute_hw_output_glb_stencil_2(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (uint16_t) hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>();

  uint16_t _ratio_stencil_3 = (uint16_t) ratio_stencil.extract<0, 15>();

  int32_t _1394 = (int32_t)(_ratio_stencil_3);
  int32_t _1395 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_6);
  int32_t _1396 = _1394 * _1395;
  int32_t _1397 = _1396 >> 8;
  int16_t _1398 = (int16_t)(_1397);
  return _1398;
}

//store is: hw_output_global_wrapper.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi + (0*126)), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(0, hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi + (0*126)), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(1, hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_2 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_2;
}

//store is: hw_output_global_wrapper.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi + (0*126)), (hw_output_global_wrapper_s0_y_yi + 0)) = hw_output.glb.stencil(2, hw_output_global_wrapper_s0_x_xi_xi, hw_output_global_wrapper_s0_y_yi)
hw_uint<16> hcompute_hw_output_global_wrapper_stencil_2(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_3 = (int16_t) hw_output_glb_stencil.extract<0, 15>();

  return _hw_output_glb_stencil_3;
}

