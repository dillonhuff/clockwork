#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + -3), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_1 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_1;
}

//store is: hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + -3), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_1(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_2 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_2;
}

//store is: hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + -3), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_2(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_3 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_3;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + -2), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_3(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_4 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_4;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + -2), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_4(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_5 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_5;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + -2), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_5(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_6 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_6;
}

//store is: hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(0, ((hw_input_global_wrapper_s0_x_x*3) + -1), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_6(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_7 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_7;
}

//store is: hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(1, ((hw_input_global_wrapper_s0_x_x*3) + -1), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_7(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_8 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_8;
}

//store is: hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_s0_y + 3)) = hw_input.stencil(2, ((hw_input_global_wrapper_s0_x_x*3) + -1), hw_input_global_wrapper_s0_y)
static hw_uint<16> hcompute_hw_input_global_wrapper_glb_stencil_8(hw_uint<16>& hw_input_stencil) {
  uint16_t _hw_input_stencil_9 = (uint16_t) (hw_input_stencil.extract<0, 15>());

  return _hw_input_stencil_9;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_1 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_1;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_1(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_2 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_2;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, (hw_input_global_wrapper_global_wrapper_s0_x_x*3), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_2(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_3 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_3;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_3(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_4 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_4;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_4(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_5 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_5;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 1), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_5(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_6 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_6;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(0, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_6(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_7 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_7;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(1, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_7(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_8 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_8;
}

//store is: hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_global_wrapper_s0_y + 3)) = hw_input_global_wrapper.glb.stencil(2, ((hw_input_global_wrapper_global_wrapper_s0_x_x*3) + 2), (hw_input_global_wrapper_global_wrapper_s0_y + 3))
static hw_uint<16> hcompute_hw_input_global_wrapper_global_wrapper_stencil_8(hw_uint<16>& hw_input_global_wrapper_glb_stencil) {
  uint16_t _hw_input_global_wrapper_glb_stencil_9 = (uint16_t) (hw_input_global_wrapper_glb_stencil.extract<0, 15>());

  return _hw_input_global_wrapper_glb_stencil_9;
}

//store is: gray.stencil((gray_s0_x_x*3), (gray_s0_y + 3)) = (((hw_input_global_wrapper_global_wrapper.stencil(1, (gray_s0_x_x*3), (gray_s0_y + 3))*(uint16)150) + ((hw_input_global_wrapper_global_wrapper.stencil(2, (gray_s0_x_x*3), (gray_s0_y + 3))*(uint16)29) + (hw_input_global_wrapper_global_wrapper.stencil(0, (gray_s0_x_x*3), (gray_s0_y + 3))*(uint16)77)))/(uint16)256)
static hw_uint<16> hcompute_gray_stencil(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_1 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_2 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_3 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _465 = (uint16_t)(150);
  uint16_t _466 = _hw_input_global_wrapper_global_wrapper_stencil_1 * _465;
  uint16_t _467 = (uint16_t)(29);
  uint16_t _468 = _hw_input_global_wrapper_global_wrapper_stencil_2 * _467;
  uint16_t _469 = (uint16_t)(77);
  uint16_t _470 = _hw_input_global_wrapper_global_wrapper_stencil_3 * _469;
  uint16_t _471 = _468 + _470;
  uint16_t _472 = _466 + _471;
  uint16_t _473 = (uint16_t)(8);
  uint16_t _474 = _472 >> _473;
  return _474;
}

//store is: gray.stencil(((gray_s0_x_x*3) + 1), (gray_s0_y + 3)) = (((hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*3) + 1), (gray_s0_y + 3))*(uint16)150) + ((hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*3) + 1), (gray_s0_y + 3))*(uint16)29) + (hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*3) + 1), (gray_s0_y + 3))*(uint16)77)))/(uint16)256)
static hw_uint<16> hcompute_gray_stencil_1(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_4 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_5 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_6 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _500 = (uint16_t)(150);
  uint16_t _501 = _hw_input_global_wrapper_global_wrapper_stencil_4 * _500;
  uint16_t _502 = (uint16_t)(29);
  uint16_t _503 = _hw_input_global_wrapper_global_wrapper_stencil_5 * _502;
  uint16_t _504 = (uint16_t)(77);
  uint16_t _505 = _hw_input_global_wrapper_global_wrapper_stencil_6 * _504;
  uint16_t _506 = _503 + _505;
  uint16_t _507 = _501 + _506;
  uint16_t _508 = (uint16_t)(8);
  uint16_t _509 = _507 >> _508;
  return _509;
}

//store is: gray.stencil(((gray_s0_x_x*3) + 2), (gray_s0_y + 3)) = (((hw_input_global_wrapper_global_wrapper.stencil(1, ((gray_s0_x_x*3) + 2), (gray_s0_y + 3))*(uint16)150) + ((hw_input_global_wrapper_global_wrapper.stencil(2, ((gray_s0_x_x*3) + 2), (gray_s0_y + 3))*(uint16)29) + (hw_input_global_wrapper_global_wrapper.stencil(0, ((gray_s0_x_x*3) + 2), (gray_s0_y + 3))*(uint16)77)))/(uint16)256)
static hw_uint<16> hcompute_gray_stencil_2(hw_uint<48>& hw_input_global_wrapper_global_wrapper_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_7 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_8 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<16, 31>());
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_9 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<32, 47>());

  uint16_t _536 = (uint16_t)(150);
  uint16_t _537 = _hw_input_global_wrapper_global_wrapper_stencil_7 * _536;
  uint16_t _538 = (uint16_t)(29);
  uint16_t _539 = _hw_input_global_wrapper_global_wrapper_stencil_8 * _538;
  uint16_t _540 = (uint16_t)(77);
  uint16_t _541 = _hw_input_global_wrapper_global_wrapper_stencil_9 * _540;
  uint16_t _542 = _539 + _541;
  uint16_t _543 = _537 + _542;
  uint16_t _544 = (uint16_t)(8);
  uint16_t _545 = _543 >> _544;
  return _545;
}

//store is: reciprocal.stencil((reciprocal_s0_x_x*3), reciprocal_s0_y) = rom_div_lookupa0[(int32(max(gray.stencil(((reciprocal_s0_x_x*3) + 3), (reciprocal_s0_y + 3)), (uint16)1)) + -1)]
static hw_uint<16> hcompute_reciprocal_stencil(hw_uint<16>& gray_stencil) {
  uint16_t _gray_stencil_1 = (uint16_t) (gray_stencil.extract<0, 15>());

  uint16_t _rom_div_lookupa0[255];
  // produce rom_div_lookupa0
  uint16_t _827 = (uint16_t)(256);
  _rom_div_lookupa0[0] = _827;
  uint16_t _828 = (uint16_t)(128);
  _rom_div_lookupa0[1] = _828;
  uint16_t _829 = (uint16_t)(85);
  _rom_div_lookupa0[2] = _829;
  uint16_t _830 = (uint16_t)(64);
  _rom_div_lookupa0[3] = _830;
  uint16_t _831 = (uint16_t)(51);
  _rom_div_lookupa0[4] = _831;
  uint16_t _832 = (uint16_t)(42);
  _rom_div_lookupa0[5] = _832;
  uint16_t _833 = (uint16_t)(36);
  _rom_div_lookupa0[6] = _833;
  uint16_t _834 = (uint16_t)(32);
  _rom_div_lookupa0[7] = _834;
  uint16_t _835 = (uint16_t)(28);
  _rom_div_lookupa0[8] = _835;
  uint16_t _836 = (uint16_t)(25);
  _rom_div_lookupa0[9] = _836;
  uint16_t _837 = (uint16_t)(23);
  _rom_div_lookupa0[10] = _837;
  uint16_t _838 = (uint16_t)(21);
  _rom_div_lookupa0[11] = _838;
  uint16_t _839 = (uint16_t)(19);
  _rom_div_lookupa0[12] = _839;
  uint16_t _840 = (uint16_t)(18);
  _rom_div_lookupa0[13] = _840;
  uint16_t _841 = (uint16_t)(17);
  _rom_div_lookupa0[14] = _841;
  uint16_t _842 = (uint16_t)(16);
  _rom_div_lookupa0[15] = _842;
  uint16_t _843 = (uint16_t)(15);
  _rom_div_lookupa0[16] = _843;
  uint16_t _844 = (uint16_t)(14);
  _rom_div_lookupa0[17] = _844;
  uint16_t _845 = (uint16_t)(13);
  _rom_div_lookupa0[18] = _845;
  uint16_t _846 = (uint16_t)(12);
  _rom_div_lookupa0[19] = _846;
  uint16_t _847 = (uint16_t)(12);
  _rom_div_lookupa0[20] = _847;
  uint16_t _848 = (uint16_t)(11);
  _rom_div_lookupa0[21] = _848;
  uint16_t _849 = (uint16_t)(11);
  _rom_div_lookupa0[22] = _849;
  uint16_t _850 = (uint16_t)(10);
  _rom_div_lookupa0[23] = _850;
  uint16_t _851 = (uint16_t)(10);
  _rom_div_lookupa0[24] = _851;
  uint16_t _852 = (uint16_t)(9);
  _rom_div_lookupa0[25] = _852;
  uint16_t _853 = (uint16_t)(9);
  _rom_div_lookupa0[26] = _853;
  uint16_t _854 = (uint16_t)(9);
  _rom_div_lookupa0[27] = _854;
  uint16_t _855 = (uint16_t)(8);
  _rom_div_lookupa0[28] = _855;
  uint16_t _856 = (uint16_t)(8);
  _rom_div_lookupa0[29] = _856;
  uint16_t _857 = (uint16_t)(8);
  _rom_div_lookupa0[30] = _857;
  uint16_t _858 = (uint16_t)(8);
  _rom_div_lookupa0[31] = _858;
  uint16_t _859 = (uint16_t)(7);
  _rom_div_lookupa0[32] = _859;
  uint16_t _860 = (uint16_t)(7);
  _rom_div_lookupa0[33] = _860;
  uint16_t _861 = (uint16_t)(7);
  _rom_div_lookupa0[34] = _861;
  uint16_t _862 = (uint16_t)(7);
  _rom_div_lookupa0[35] = _862;
  uint16_t _863 = (uint16_t)(6);
  _rom_div_lookupa0[36] = _863;
  uint16_t _864 = (uint16_t)(6);
  _rom_div_lookupa0[37] = _864;
  uint16_t _865 = (uint16_t)(6);
  _rom_div_lookupa0[38] = _865;
  uint16_t _866 = (uint16_t)(6);
  _rom_div_lookupa0[39] = _866;
  uint16_t _867 = (uint16_t)(6);
  _rom_div_lookupa0[40] = _867;
  uint16_t _868 = (uint16_t)(6);
  _rom_div_lookupa0[41] = _868;
  uint16_t _869 = (uint16_t)(5);
  _rom_div_lookupa0[42] = _869;
  uint16_t _870 = (uint16_t)(5);
  _rom_div_lookupa0[43] = _870;
  uint16_t _871 = (uint16_t)(5);
  _rom_div_lookupa0[44] = _871;
  uint16_t _872 = (uint16_t)(5);
  _rom_div_lookupa0[45] = _872;
  uint16_t _873 = (uint16_t)(5);
  _rom_div_lookupa0[46] = _873;
  uint16_t _874 = (uint16_t)(5);
  _rom_div_lookupa0[47] = _874;
  uint16_t _875 = (uint16_t)(5);
  _rom_div_lookupa0[48] = _875;
  uint16_t _876 = (uint16_t)(5);
  _rom_div_lookupa0[49] = _876;
  uint16_t _877 = (uint16_t)(5);
  _rom_div_lookupa0[50] = _877;
  uint16_t _878 = (uint16_t)(4);
  _rom_div_lookupa0[51] = _878;
  uint16_t _879 = (uint16_t)(4);
  _rom_div_lookupa0[52] = _879;
  uint16_t _880 = (uint16_t)(4);
  _rom_div_lookupa0[53] = _880;
  uint16_t _881 = (uint16_t)(4);
  _rom_div_lookupa0[54] = _881;
  uint16_t _882 = (uint16_t)(4);
  _rom_div_lookupa0[55] = _882;
  uint16_t _883 = (uint16_t)(4);
  _rom_div_lookupa0[56] = _883;
  uint16_t _884 = (uint16_t)(4);
  _rom_div_lookupa0[57] = _884;
  uint16_t _885 = (uint16_t)(4);
  _rom_div_lookupa0[58] = _885;
  uint16_t _886 = (uint16_t)(4);
  _rom_div_lookupa0[59] = _886;
  uint16_t _887 = (uint16_t)(4);
  _rom_div_lookupa0[60] = _887;
  uint16_t _888 = (uint16_t)(4);
  _rom_div_lookupa0[61] = _888;
  uint16_t _889 = (uint16_t)(4);
  _rom_div_lookupa0[62] = _889;
  uint16_t _890 = (uint16_t)(4);
  _rom_div_lookupa0[63] = _890;
  uint16_t _891 = (uint16_t)(3);
  _rom_div_lookupa0[64] = _891;
  uint16_t _892 = (uint16_t)(3);
  _rom_div_lookupa0[65] = _892;
  uint16_t _893 = (uint16_t)(3);
  _rom_div_lookupa0[66] = _893;
  uint16_t _894 = (uint16_t)(3);
  _rom_div_lookupa0[67] = _894;
  uint16_t _895 = (uint16_t)(3);
  _rom_div_lookupa0[68] = _895;
  uint16_t _896 = (uint16_t)(3);
  _rom_div_lookupa0[69] = _896;
  uint16_t _897 = (uint16_t)(3);
  _rom_div_lookupa0[70] = _897;
  uint16_t _898 = (uint16_t)(3);
  _rom_div_lookupa0[71] = _898;
  uint16_t _899 = (uint16_t)(3);
  _rom_div_lookupa0[72] = _899;
  uint16_t _900 = (uint16_t)(3);
  _rom_div_lookupa0[73] = _900;
  uint16_t _901 = (uint16_t)(3);
  _rom_div_lookupa0[74] = _901;
  uint16_t _902 = (uint16_t)(3);
  _rom_div_lookupa0[75] = _902;
  uint16_t _903 = (uint16_t)(3);
  _rom_div_lookupa0[76] = _903;
  uint16_t _904 = (uint16_t)(3);
  _rom_div_lookupa0[77] = _904;
  uint16_t _905 = (uint16_t)(3);
  _rom_div_lookupa0[78] = _905;
  uint16_t _906 = (uint16_t)(3);
  _rom_div_lookupa0[79] = _906;
  uint16_t _907 = (uint16_t)(3);
  _rom_div_lookupa0[80] = _907;
  uint16_t _908 = (uint16_t)(3);
  _rom_div_lookupa0[81] = _908;
  uint16_t _909 = (uint16_t)(3);
  _rom_div_lookupa0[82] = _909;
  uint16_t _910 = (uint16_t)(3);
  _rom_div_lookupa0[83] = _910;
  uint16_t _911 = (uint16_t)(3);
  _rom_div_lookupa0[84] = _911;
  uint16_t _912 = (uint16_t)(2);
  _rom_div_lookupa0[85] = _912;
  uint16_t _913 = (uint16_t)(2);
  _rom_div_lookupa0[86] = _913;
  uint16_t _914 = (uint16_t)(2);
  _rom_div_lookupa0[87] = _914;
  uint16_t _915 = (uint16_t)(2);
  _rom_div_lookupa0[88] = _915;
  uint16_t _916 = (uint16_t)(2);
  _rom_div_lookupa0[89] = _916;
  uint16_t _917 = (uint16_t)(2);
  _rom_div_lookupa0[90] = _917;
  uint16_t _918 = (uint16_t)(2);
  _rom_div_lookupa0[91] = _918;
  uint16_t _919 = (uint16_t)(2);
  _rom_div_lookupa0[92] = _919;
  uint16_t _920 = (uint16_t)(2);
  _rom_div_lookupa0[93] = _920;
  uint16_t _921 = (uint16_t)(2);
  _rom_div_lookupa0[94] = _921;
  uint16_t _922 = (uint16_t)(2);
  _rom_div_lookupa0[95] = _922;
  uint16_t _923 = (uint16_t)(2);
  _rom_div_lookupa0[96] = _923;
  uint16_t _924 = (uint16_t)(2);
  _rom_div_lookupa0[97] = _924;
  uint16_t _925 = (uint16_t)(2);
  _rom_div_lookupa0[98] = _925;
  uint16_t _926 = (uint16_t)(2);
  _rom_div_lookupa0[99] = _926;
  uint16_t _927 = (uint16_t)(2);
  _rom_div_lookupa0[100] = _927;
  uint16_t _928 = (uint16_t)(2);
  _rom_div_lookupa0[101] = _928;
  uint16_t _929 = (uint16_t)(2);
  _rom_div_lookupa0[102] = _929;
  uint16_t _930 = (uint16_t)(2);
  _rom_div_lookupa0[103] = _930;
  uint16_t _931 = (uint16_t)(2);
  _rom_div_lookupa0[104] = _931;
  uint16_t _932 = (uint16_t)(2);
  _rom_div_lookupa0[105] = _932;
  uint16_t _933 = (uint16_t)(2);
  _rom_div_lookupa0[106] = _933;
  uint16_t _934 = (uint16_t)(2);
  _rom_div_lookupa0[107] = _934;
  uint16_t _935 = (uint16_t)(2);
  _rom_div_lookupa0[108] = _935;
  uint16_t _936 = (uint16_t)(2);
  _rom_div_lookupa0[109] = _936;
  uint16_t _937 = (uint16_t)(2);
  _rom_div_lookupa0[110] = _937;
  uint16_t _938 = (uint16_t)(2);
  _rom_div_lookupa0[111] = _938;
  uint16_t _939 = (uint16_t)(2);
  _rom_div_lookupa0[112] = _939;
  uint16_t _940 = (uint16_t)(2);
  _rom_div_lookupa0[113] = _940;
  uint16_t _941 = (uint16_t)(2);
  _rom_div_lookupa0[114] = _941;
  uint16_t _942 = (uint16_t)(2);
  _rom_div_lookupa0[115] = _942;
  uint16_t _943 = (uint16_t)(2);
  _rom_div_lookupa0[116] = _943;
  uint16_t _944 = (uint16_t)(2);
  _rom_div_lookupa0[117] = _944;
  uint16_t _945 = (uint16_t)(2);
  _rom_div_lookupa0[118] = _945;
  uint16_t _946 = (uint16_t)(2);
  _rom_div_lookupa0[119] = _946;
  uint16_t _947 = (uint16_t)(2);
  _rom_div_lookupa0[120] = _947;
  uint16_t _948 = (uint16_t)(2);
  _rom_div_lookupa0[121] = _948;
  uint16_t _949 = (uint16_t)(2);
  _rom_div_lookupa0[122] = _949;
  uint16_t _950 = (uint16_t)(2);
  _rom_div_lookupa0[123] = _950;
  uint16_t _951 = (uint16_t)(2);
  _rom_div_lookupa0[124] = _951;
  uint16_t _952 = (uint16_t)(2);
  _rom_div_lookupa0[125] = _952;
  uint16_t _953 = (uint16_t)(2);
  _rom_div_lookupa0[126] = _953;
  uint16_t _954 = (uint16_t)(2);
  _rom_div_lookupa0[127] = _954;
  uint16_t _955 = (uint16_t)(1);
  _rom_div_lookupa0[128] = _955;
  uint16_t _956 = (uint16_t)(1);
  _rom_div_lookupa0[129] = _956;
  uint16_t _957 = (uint16_t)(1);
  _rom_div_lookupa0[130] = _957;
  uint16_t _958 = (uint16_t)(1);
  _rom_div_lookupa0[131] = _958;
  uint16_t _959 = (uint16_t)(1);
  _rom_div_lookupa0[132] = _959;
  uint16_t _960 = (uint16_t)(1);
  _rom_div_lookupa0[133] = _960;
  uint16_t _961 = (uint16_t)(1);
  _rom_div_lookupa0[134] = _961;
  uint16_t _962 = (uint16_t)(1);
  _rom_div_lookupa0[135] = _962;
  uint16_t _963 = (uint16_t)(1);
  _rom_div_lookupa0[136] = _963;
  uint16_t _964 = (uint16_t)(1);
  _rom_div_lookupa0[137] = _964;
  uint16_t _965 = (uint16_t)(1);
  _rom_div_lookupa0[138] = _965;
  uint16_t _966 = (uint16_t)(1);
  _rom_div_lookupa0[139] = _966;
  uint16_t _967 = (uint16_t)(1);
  _rom_div_lookupa0[140] = _967;
  uint16_t _968 = (uint16_t)(1);
  _rom_div_lookupa0[141] = _968;
  uint16_t _969 = (uint16_t)(1);
  _rom_div_lookupa0[142] = _969;
  uint16_t _970 = (uint16_t)(1);
  _rom_div_lookupa0[143] = _970;
  uint16_t _971 = (uint16_t)(1);
  _rom_div_lookupa0[144] = _971;
  uint16_t _972 = (uint16_t)(1);
  _rom_div_lookupa0[145] = _972;
  uint16_t _973 = (uint16_t)(1);
  _rom_div_lookupa0[146] = _973;
  uint16_t _974 = (uint16_t)(1);
  _rom_div_lookupa0[147] = _974;
  uint16_t _975 = (uint16_t)(1);
  _rom_div_lookupa0[148] = _975;
  uint16_t _976 = (uint16_t)(1);
  _rom_div_lookupa0[149] = _976;
  uint16_t _977 = (uint16_t)(1);
  _rom_div_lookupa0[150] = _977;
  uint16_t _978 = (uint16_t)(1);
  _rom_div_lookupa0[151] = _978;
  uint16_t _979 = (uint16_t)(1);
  _rom_div_lookupa0[152] = _979;
  uint16_t _980 = (uint16_t)(1);
  _rom_div_lookupa0[153] = _980;
  uint16_t _981 = (uint16_t)(1);
  _rom_div_lookupa0[154] = _981;
  uint16_t _982 = (uint16_t)(1);
  _rom_div_lookupa0[155] = _982;
  uint16_t _983 = (uint16_t)(1);
  _rom_div_lookupa0[156] = _983;
  uint16_t _984 = (uint16_t)(1);
  _rom_div_lookupa0[157] = _984;
  uint16_t _985 = (uint16_t)(1);
  _rom_div_lookupa0[158] = _985;
  uint16_t _986 = (uint16_t)(1);
  _rom_div_lookupa0[159] = _986;
  uint16_t _987 = (uint16_t)(1);
  _rom_div_lookupa0[160] = _987;
  uint16_t _988 = (uint16_t)(1);
  _rom_div_lookupa0[161] = _988;
  uint16_t _989 = (uint16_t)(1);
  _rom_div_lookupa0[162] = _989;
  uint16_t _990 = (uint16_t)(1);
  _rom_div_lookupa0[163] = _990;
  uint16_t _991 = (uint16_t)(1);
  _rom_div_lookupa0[164] = _991;
  uint16_t _992 = (uint16_t)(1);
  _rom_div_lookupa0[165] = _992;
  uint16_t _993 = (uint16_t)(1);
  _rom_div_lookupa0[166] = _993;
  uint16_t _994 = (uint16_t)(1);
  _rom_div_lookupa0[167] = _994;
  uint16_t _995 = (uint16_t)(1);
  _rom_div_lookupa0[168] = _995;
  uint16_t _996 = (uint16_t)(1);
  _rom_div_lookupa0[169] = _996;
  uint16_t _997 = (uint16_t)(1);
  _rom_div_lookupa0[170] = _997;
  uint16_t _998 = (uint16_t)(1);
  _rom_div_lookupa0[171] = _998;
  uint16_t _999 = (uint16_t)(1);
  _rom_div_lookupa0[172] = _999;
  uint16_t _1000 = (uint16_t)(1);
  _rom_div_lookupa0[173] = _1000;
  uint16_t _1001 = (uint16_t)(1);
  _rom_div_lookupa0[174] = _1001;
  uint16_t _1002 = (uint16_t)(1);
  _rom_div_lookupa0[175] = _1002;
  uint16_t _1003 = (uint16_t)(1);
  _rom_div_lookupa0[176] = _1003;
  uint16_t _1004 = (uint16_t)(1);
  _rom_div_lookupa0[177] = _1004;
  uint16_t _1005 = (uint16_t)(1);
  _rom_div_lookupa0[178] = _1005;
  uint16_t _1006 = (uint16_t)(1);
  _rom_div_lookupa0[179] = _1006;
  uint16_t _1007 = (uint16_t)(1);
  _rom_div_lookupa0[180] = _1007;
  uint16_t _1008 = (uint16_t)(1);
  _rom_div_lookupa0[181] = _1008;
  uint16_t _1009 = (uint16_t)(1);
  _rom_div_lookupa0[182] = _1009;
  uint16_t _1010 = (uint16_t)(1);
  _rom_div_lookupa0[183] = _1010;
  uint16_t _1011 = (uint16_t)(1);
  _rom_div_lookupa0[184] = _1011;
  uint16_t _1012 = (uint16_t)(1);
  _rom_div_lookupa0[185] = _1012;
  uint16_t _1013 = (uint16_t)(1);
  _rom_div_lookupa0[186] = _1013;
  uint16_t _1014 = (uint16_t)(1);
  _rom_div_lookupa0[187] = _1014;
  uint16_t _1015 = (uint16_t)(1);
  _rom_div_lookupa0[188] = _1015;
  uint16_t _1016 = (uint16_t)(1);
  _rom_div_lookupa0[189] = _1016;
  uint16_t _1017 = (uint16_t)(1);
  _rom_div_lookupa0[190] = _1017;
  uint16_t _1018 = (uint16_t)(1);
  _rom_div_lookupa0[191] = _1018;
  uint16_t _1019 = (uint16_t)(1);
  _rom_div_lookupa0[192] = _1019;
  uint16_t _1020 = (uint16_t)(1);
  _rom_div_lookupa0[193] = _1020;
  uint16_t _1021 = (uint16_t)(1);
  _rom_div_lookupa0[194] = _1021;
  uint16_t _1022 = (uint16_t)(1);
  _rom_div_lookupa0[195] = _1022;
  uint16_t _1023 = (uint16_t)(1);
  _rom_div_lookupa0[196] = _1023;
  uint16_t _1024 = (uint16_t)(1);
  _rom_div_lookupa0[197] = _1024;
  uint16_t _1025 = (uint16_t)(1);
  _rom_div_lookupa0[198] = _1025;
  uint16_t _1026 = (uint16_t)(1);
  _rom_div_lookupa0[199] = _1026;
  uint16_t _1027 = (uint16_t)(1);
  _rom_div_lookupa0[200] = _1027;
  uint16_t _1028 = (uint16_t)(1);
  _rom_div_lookupa0[201] = _1028;
  uint16_t _1029 = (uint16_t)(1);
  _rom_div_lookupa0[202] = _1029;
  uint16_t _1030 = (uint16_t)(1);
  _rom_div_lookupa0[203] = _1030;
  uint16_t _1031 = (uint16_t)(1);
  _rom_div_lookupa0[204] = _1031;
  uint16_t _1032 = (uint16_t)(1);
  _rom_div_lookupa0[205] = _1032;
  uint16_t _1033 = (uint16_t)(1);
  _rom_div_lookupa0[206] = _1033;
  uint16_t _1034 = (uint16_t)(1);
  _rom_div_lookupa0[207] = _1034;
  uint16_t _1035 = (uint16_t)(1);
  _rom_div_lookupa0[208] = _1035;
  uint16_t _1036 = (uint16_t)(1);
  _rom_div_lookupa0[209] = _1036;
  uint16_t _1037 = (uint16_t)(1);
  _rom_div_lookupa0[210] = _1037;
  uint16_t _1038 = (uint16_t)(1);
  _rom_div_lookupa0[211] = _1038;
  uint16_t _1039 = (uint16_t)(1);
  _rom_div_lookupa0[212] = _1039;
  uint16_t _1040 = (uint16_t)(1);
  _rom_div_lookupa0[213] = _1040;
  uint16_t _1041 = (uint16_t)(1);
  _rom_div_lookupa0[214] = _1041;
  uint16_t _1042 = (uint16_t)(1);
  _rom_div_lookupa0[215] = _1042;
  uint16_t _1043 = (uint16_t)(1);
  _rom_div_lookupa0[216] = _1043;
  uint16_t _1044 = (uint16_t)(1);
  _rom_div_lookupa0[217] = _1044;
  uint16_t _1045 = (uint16_t)(1);
  _rom_div_lookupa0[218] = _1045;
  uint16_t _1046 = (uint16_t)(1);
  _rom_div_lookupa0[219] = _1046;
  uint16_t _1047 = (uint16_t)(1);
  _rom_div_lookupa0[220] = _1047;
  uint16_t _1048 = (uint16_t)(1);
  _rom_div_lookupa0[221] = _1048;
  uint16_t _1049 = (uint16_t)(1);
  _rom_div_lookupa0[222] = _1049;
  uint16_t _1050 = (uint16_t)(1);
  _rom_div_lookupa0[223] = _1050;
  uint16_t _1051 = (uint16_t)(1);
  _rom_div_lookupa0[224] = _1051;
  uint16_t _1052 = (uint16_t)(1);
  _rom_div_lookupa0[225] = _1052;
  uint16_t _1053 = (uint16_t)(1);
  _rom_div_lookupa0[226] = _1053;
  uint16_t _1054 = (uint16_t)(1);
  _rom_div_lookupa0[227] = _1054;
  uint16_t _1055 = (uint16_t)(1);
  _rom_div_lookupa0[228] = _1055;
  uint16_t _1056 = (uint16_t)(1);
  _rom_div_lookupa0[229] = _1056;
  uint16_t _1057 = (uint16_t)(1);
  _rom_div_lookupa0[230] = _1057;
  uint16_t _1058 = (uint16_t)(1);
  _rom_div_lookupa0[231] = _1058;
  uint16_t _1059 = (uint16_t)(1);
  _rom_div_lookupa0[232] = _1059;
  uint16_t _1060 = (uint16_t)(1);
  _rom_div_lookupa0[233] = _1060;
  uint16_t _1061 = (uint16_t)(1);
  _rom_div_lookupa0[234] = _1061;
  uint16_t _1062 = (uint16_t)(1);
  _rom_div_lookupa0[235] = _1062;
  uint16_t _1063 = (uint16_t)(1);
  _rom_div_lookupa0[236] = _1063;
  uint16_t _1064 = (uint16_t)(1);
  _rom_div_lookupa0[237] = _1064;
  uint16_t _1065 = (uint16_t)(1);
  _rom_div_lookupa0[238] = _1065;
  uint16_t _1066 = (uint16_t)(1);
  _rom_div_lookupa0[239] = _1066;
  uint16_t _1067 = (uint16_t)(1);
  _rom_div_lookupa0[240] = _1067;
  uint16_t _1068 = (uint16_t)(1);
  _rom_div_lookupa0[241] = _1068;
  uint16_t _1069 = (uint16_t)(1);
  _rom_div_lookupa0[242] = _1069;
  uint16_t _1070 = (uint16_t)(1);
  _rom_div_lookupa0[243] = _1070;
  uint16_t _1071 = (uint16_t)(1);
  _rom_div_lookupa0[244] = _1071;
  uint16_t _1072 = (uint16_t)(1);
  _rom_div_lookupa0[245] = _1072;
  uint16_t _1073 = (uint16_t)(1);
  _rom_div_lookupa0[246] = _1073;
  uint16_t _1074 = (uint16_t)(1);
  _rom_div_lookupa0[247] = _1074;
  uint16_t _1075 = (uint16_t)(1);
  _rom_div_lookupa0[248] = _1075;
  uint16_t _1076 = (uint16_t)(1);
  _rom_div_lookupa0[249] = _1076;
  uint16_t _1077 = (uint16_t)(1);
  _rom_div_lookupa0[250] = _1077;
  uint16_t _1078 = (uint16_t)(1);
  _rom_div_lookupa0[251] = _1078;
  uint16_t _1079 = (uint16_t)(1);
  _rom_div_lookupa0[252] = _1079;
  uint16_t _1080 = (uint16_t)(1);
  _rom_div_lookupa0[253] = _1080;
  uint16_t _1081 = (uint16_t)(1);
  _rom_div_lookupa0[254] = _1081;

  uint16_t _1082 = (uint16_t)(1);
  uint16_t _1083 = max(_gray_stencil_1, _1082);
  int32_t _1084 = (int32_t)(_1083);
  int32_t _1085 = _1084 + -1;
  uint16_t _1086 = ((const uint16_t *)_rom_div_lookupa0)[_1085];
  return _1086;
}

//store is: reciprocal.stencil(((reciprocal_s0_x_x*3) + 1), reciprocal_s0_y) = rom_div_lookupa0[(int32(max(gray.stencil(((reciprocal_s0_x_x*3) + 4), (reciprocal_s0_y + 3)), (uint16)1)) + -1)]
static hw_uint<16> hcompute_reciprocal_stencil_1(hw_uint<16>& gray_stencil) {
  uint16_t _gray_stencil_2 = (uint16_t) (gray_stencil.extract<0, 15>());

  uint16_t _rom_div_lookupa0[255];
  // produce rom_div_lookupa0
  uint16_t _1101 = (uint16_t)(256);
  _rom_div_lookupa0[0] = _1101;
  uint16_t _1102 = (uint16_t)(128);
  _rom_div_lookupa0[1] = _1102;
  uint16_t _1103 = (uint16_t)(85);
  _rom_div_lookupa0[2] = _1103;
  uint16_t _1104 = (uint16_t)(64);
  _rom_div_lookupa0[3] = _1104;
  uint16_t _1105 = (uint16_t)(51);
  _rom_div_lookupa0[4] = _1105;
  uint16_t _1106 = (uint16_t)(42);
  _rom_div_lookupa0[5] = _1106;
  uint16_t _1107 = (uint16_t)(36);
  _rom_div_lookupa0[6] = _1107;
  uint16_t _1108 = (uint16_t)(32);
  _rom_div_lookupa0[7] = _1108;
  uint16_t _1109 = (uint16_t)(28);
  _rom_div_lookupa0[8] = _1109;
  uint16_t _1110 = (uint16_t)(25);
  _rom_div_lookupa0[9] = _1110;
  uint16_t _1111 = (uint16_t)(23);
  _rom_div_lookupa0[10] = _1111;
  uint16_t _1112 = (uint16_t)(21);
  _rom_div_lookupa0[11] = _1112;
  uint16_t _1113 = (uint16_t)(19);
  _rom_div_lookupa0[12] = _1113;
  uint16_t _1114 = (uint16_t)(18);
  _rom_div_lookupa0[13] = _1114;
  uint16_t _1115 = (uint16_t)(17);
  _rom_div_lookupa0[14] = _1115;
  uint16_t _1116 = (uint16_t)(16);
  _rom_div_lookupa0[15] = _1116;
  uint16_t _1117 = (uint16_t)(15);
  _rom_div_lookupa0[16] = _1117;
  uint16_t _1118 = (uint16_t)(14);
  _rom_div_lookupa0[17] = _1118;
  uint16_t _1119 = (uint16_t)(13);
  _rom_div_lookupa0[18] = _1119;
  uint16_t _1120 = (uint16_t)(12);
  _rom_div_lookupa0[19] = _1120;
  uint16_t _1121 = (uint16_t)(12);
  _rom_div_lookupa0[20] = _1121;
  uint16_t _1122 = (uint16_t)(11);
  _rom_div_lookupa0[21] = _1122;
  uint16_t _1123 = (uint16_t)(11);
  _rom_div_lookupa0[22] = _1123;
  uint16_t _1124 = (uint16_t)(10);
  _rom_div_lookupa0[23] = _1124;
  uint16_t _1125 = (uint16_t)(10);
  _rom_div_lookupa0[24] = _1125;
  uint16_t _1126 = (uint16_t)(9);
  _rom_div_lookupa0[25] = _1126;
  uint16_t _1127 = (uint16_t)(9);
  _rom_div_lookupa0[26] = _1127;
  uint16_t _1128 = (uint16_t)(9);
  _rom_div_lookupa0[27] = _1128;
  uint16_t _1129 = (uint16_t)(8);
  _rom_div_lookupa0[28] = _1129;
  uint16_t _1130 = (uint16_t)(8);
  _rom_div_lookupa0[29] = _1130;
  uint16_t _1131 = (uint16_t)(8);
  _rom_div_lookupa0[30] = _1131;
  uint16_t _1132 = (uint16_t)(8);
  _rom_div_lookupa0[31] = _1132;
  uint16_t _1133 = (uint16_t)(7);
  _rom_div_lookupa0[32] = _1133;
  uint16_t _1134 = (uint16_t)(7);
  _rom_div_lookupa0[33] = _1134;
  uint16_t _1135 = (uint16_t)(7);
  _rom_div_lookupa0[34] = _1135;
  uint16_t _1136 = (uint16_t)(7);
  _rom_div_lookupa0[35] = _1136;
  uint16_t _1137 = (uint16_t)(6);
  _rom_div_lookupa0[36] = _1137;
  uint16_t _1138 = (uint16_t)(6);
  _rom_div_lookupa0[37] = _1138;
  uint16_t _1139 = (uint16_t)(6);
  _rom_div_lookupa0[38] = _1139;
  uint16_t _1140 = (uint16_t)(6);
  _rom_div_lookupa0[39] = _1140;
  uint16_t _1141 = (uint16_t)(6);
  _rom_div_lookupa0[40] = _1141;
  uint16_t _1142 = (uint16_t)(6);
  _rom_div_lookupa0[41] = _1142;
  uint16_t _1143 = (uint16_t)(5);
  _rom_div_lookupa0[42] = _1143;
  uint16_t _1144 = (uint16_t)(5);
  _rom_div_lookupa0[43] = _1144;
  uint16_t _1145 = (uint16_t)(5);
  _rom_div_lookupa0[44] = _1145;
  uint16_t _1146 = (uint16_t)(5);
  _rom_div_lookupa0[45] = _1146;
  uint16_t _1147 = (uint16_t)(5);
  _rom_div_lookupa0[46] = _1147;
  uint16_t _1148 = (uint16_t)(5);
  _rom_div_lookupa0[47] = _1148;
  uint16_t _1149 = (uint16_t)(5);
  _rom_div_lookupa0[48] = _1149;
  uint16_t _1150 = (uint16_t)(5);
  _rom_div_lookupa0[49] = _1150;
  uint16_t _1151 = (uint16_t)(5);
  _rom_div_lookupa0[50] = _1151;
  uint16_t _1152 = (uint16_t)(4);
  _rom_div_lookupa0[51] = _1152;
  uint16_t _1153 = (uint16_t)(4);
  _rom_div_lookupa0[52] = _1153;
  uint16_t _1154 = (uint16_t)(4);
  _rom_div_lookupa0[53] = _1154;
  uint16_t _1155 = (uint16_t)(4);
  _rom_div_lookupa0[54] = _1155;
  uint16_t _1156 = (uint16_t)(4);
  _rom_div_lookupa0[55] = _1156;
  uint16_t _1157 = (uint16_t)(4);
  _rom_div_lookupa0[56] = _1157;
  uint16_t _1158 = (uint16_t)(4);
  _rom_div_lookupa0[57] = _1158;
  uint16_t _1159 = (uint16_t)(4);
  _rom_div_lookupa0[58] = _1159;
  uint16_t _1160 = (uint16_t)(4);
  _rom_div_lookupa0[59] = _1160;
  uint16_t _1161 = (uint16_t)(4);
  _rom_div_lookupa0[60] = _1161;
  uint16_t _1162 = (uint16_t)(4);
  _rom_div_lookupa0[61] = _1162;
  uint16_t _1163 = (uint16_t)(4);
  _rom_div_lookupa0[62] = _1163;
  uint16_t _1164 = (uint16_t)(4);
  _rom_div_lookupa0[63] = _1164;
  uint16_t _1165 = (uint16_t)(3);
  _rom_div_lookupa0[64] = _1165;
  uint16_t _1166 = (uint16_t)(3);
  _rom_div_lookupa0[65] = _1166;
  uint16_t _1167 = (uint16_t)(3);
  _rom_div_lookupa0[66] = _1167;
  uint16_t _1168 = (uint16_t)(3);
  _rom_div_lookupa0[67] = _1168;
  uint16_t _1169 = (uint16_t)(3);
  _rom_div_lookupa0[68] = _1169;
  uint16_t _1170 = (uint16_t)(3);
  _rom_div_lookupa0[69] = _1170;
  uint16_t _1171 = (uint16_t)(3);
  _rom_div_lookupa0[70] = _1171;
  uint16_t _1172 = (uint16_t)(3);
  _rom_div_lookupa0[71] = _1172;
  uint16_t _1173 = (uint16_t)(3);
  _rom_div_lookupa0[72] = _1173;
  uint16_t _1174 = (uint16_t)(3);
  _rom_div_lookupa0[73] = _1174;
  uint16_t _1175 = (uint16_t)(3);
  _rom_div_lookupa0[74] = _1175;
  uint16_t _1176 = (uint16_t)(3);
  _rom_div_lookupa0[75] = _1176;
  uint16_t _1177 = (uint16_t)(3);
  _rom_div_lookupa0[76] = _1177;
  uint16_t _1178 = (uint16_t)(3);
  _rom_div_lookupa0[77] = _1178;
  uint16_t _1179 = (uint16_t)(3);
  _rom_div_lookupa0[78] = _1179;
  uint16_t _1180 = (uint16_t)(3);
  _rom_div_lookupa0[79] = _1180;
  uint16_t _1181 = (uint16_t)(3);
  _rom_div_lookupa0[80] = _1181;
  uint16_t _1182 = (uint16_t)(3);
  _rom_div_lookupa0[81] = _1182;
  uint16_t _1183 = (uint16_t)(3);
  _rom_div_lookupa0[82] = _1183;
  uint16_t _1184 = (uint16_t)(3);
  _rom_div_lookupa0[83] = _1184;
  uint16_t _1185 = (uint16_t)(3);
  _rom_div_lookupa0[84] = _1185;
  uint16_t _1186 = (uint16_t)(2);
  _rom_div_lookupa0[85] = _1186;
  uint16_t _1187 = (uint16_t)(2);
  _rom_div_lookupa0[86] = _1187;
  uint16_t _1188 = (uint16_t)(2);
  _rom_div_lookupa0[87] = _1188;
  uint16_t _1189 = (uint16_t)(2);
  _rom_div_lookupa0[88] = _1189;
  uint16_t _1190 = (uint16_t)(2);
  _rom_div_lookupa0[89] = _1190;
  uint16_t _1191 = (uint16_t)(2);
  _rom_div_lookupa0[90] = _1191;
  uint16_t _1192 = (uint16_t)(2);
  _rom_div_lookupa0[91] = _1192;
  uint16_t _1193 = (uint16_t)(2);
  _rom_div_lookupa0[92] = _1193;
  uint16_t _1194 = (uint16_t)(2);
  _rom_div_lookupa0[93] = _1194;
  uint16_t _1195 = (uint16_t)(2);
  _rom_div_lookupa0[94] = _1195;
  uint16_t _1196 = (uint16_t)(2);
  _rom_div_lookupa0[95] = _1196;
  uint16_t _1197 = (uint16_t)(2);
  _rom_div_lookupa0[96] = _1197;
  uint16_t _1198 = (uint16_t)(2);
  _rom_div_lookupa0[97] = _1198;
  uint16_t _1199 = (uint16_t)(2);
  _rom_div_lookupa0[98] = _1199;
  uint16_t _1200 = (uint16_t)(2);
  _rom_div_lookupa0[99] = _1200;
  uint16_t _1201 = (uint16_t)(2);
  _rom_div_lookupa0[100] = _1201;
  uint16_t _1202 = (uint16_t)(2);
  _rom_div_lookupa0[101] = _1202;
  uint16_t _1203 = (uint16_t)(2);
  _rom_div_lookupa0[102] = _1203;
  uint16_t _1204 = (uint16_t)(2);
  _rom_div_lookupa0[103] = _1204;
  uint16_t _1205 = (uint16_t)(2);
  _rom_div_lookupa0[104] = _1205;
  uint16_t _1206 = (uint16_t)(2);
  _rom_div_lookupa0[105] = _1206;
  uint16_t _1207 = (uint16_t)(2);
  _rom_div_lookupa0[106] = _1207;
  uint16_t _1208 = (uint16_t)(2);
  _rom_div_lookupa0[107] = _1208;
  uint16_t _1209 = (uint16_t)(2);
  _rom_div_lookupa0[108] = _1209;
  uint16_t _1210 = (uint16_t)(2);
  _rom_div_lookupa0[109] = _1210;
  uint16_t _1211 = (uint16_t)(2);
  _rom_div_lookupa0[110] = _1211;
  uint16_t _1212 = (uint16_t)(2);
  _rom_div_lookupa0[111] = _1212;
  uint16_t _1213 = (uint16_t)(2);
  _rom_div_lookupa0[112] = _1213;
  uint16_t _1214 = (uint16_t)(2);
  _rom_div_lookupa0[113] = _1214;
  uint16_t _1215 = (uint16_t)(2);
  _rom_div_lookupa0[114] = _1215;
  uint16_t _1216 = (uint16_t)(2);
  _rom_div_lookupa0[115] = _1216;
  uint16_t _1217 = (uint16_t)(2);
  _rom_div_lookupa0[116] = _1217;
  uint16_t _1218 = (uint16_t)(2);
  _rom_div_lookupa0[117] = _1218;
  uint16_t _1219 = (uint16_t)(2);
  _rom_div_lookupa0[118] = _1219;
  uint16_t _1220 = (uint16_t)(2);
  _rom_div_lookupa0[119] = _1220;
  uint16_t _1221 = (uint16_t)(2);
  _rom_div_lookupa0[120] = _1221;
  uint16_t _1222 = (uint16_t)(2);
  _rom_div_lookupa0[121] = _1222;
  uint16_t _1223 = (uint16_t)(2);
  _rom_div_lookupa0[122] = _1223;
  uint16_t _1224 = (uint16_t)(2);
  _rom_div_lookupa0[123] = _1224;
  uint16_t _1225 = (uint16_t)(2);
  _rom_div_lookupa0[124] = _1225;
  uint16_t _1226 = (uint16_t)(2);
  _rom_div_lookupa0[125] = _1226;
  uint16_t _1227 = (uint16_t)(2);
  _rom_div_lookupa0[126] = _1227;
  uint16_t _1228 = (uint16_t)(2);
  _rom_div_lookupa0[127] = _1228;
  uint16_t _1229 = (uint16_t)(1);
  _rom_div_lookupa0[128] = _1229;
  uint16_t _1230 = (uint16_t)(1);
  _rom_div_lookupa0[129] = _1230;
  uint16_t _1231 = (uint16_t)(1);
  _rom_div_lookupa0[130] = _1231;
  uint16_t _1232 = (uint16_t)(1);
  _rom_div_lookupa0[131] = _1232;
  uint16_t _1233 = (uint16_t)(1);
  _rom_div_lookupa0[132] = _1233;
  uint16_t _1234 = (uint16_t)(1);
  _rom_div_lookupa0[133] = _1234;
  uint16_t _1235 = (uint16_t)(1);
  _rom_div_lookupa0[134] = _1235;
  uint16_t _1236 = (uint16_t)(1);
  _rom_div_lookupa0[135] = _1236;
  uint16_t _1237 = (uint16_t)(1);
  _rom_div_lookupa0[136] = _1237;
  uint16_t _1238 = (uint16_t)(1);
  _rom_div_lookupa0[137] = _1238;
  uint16_t _1239 = (uint16_t)(1);
  _rom_div_lookupa0[138] = _1239;
  uint16_t _1240 = (uint16_t)(1);
  _rom_div_lookupa0[139] = _1240;
  uint16_t _1241 = (uint16_t)(1);
  _rom_div_lookupa0[140] = _1241;
  uint16_t _1242 = (uint16_t)(1);
  _rom_div_lookupa0[141] = _1242;
  uint16_t _1243 = (uint16_t)(1);
  _rom_div_lookupa0[142] = _1243;
  uint16_t _1244 = (uint16_t)(1);
  _rom_div_lookupa0[143] = _1244;
  uint16_t _1245 = (uint16_t)(1);
  _rom_div_lookupa0[144] = _1245;
  uint16_t _1246 = (uint16_t)(1);
  _rom_div_lookupa0[145] = _1246;
  uint16_t _1247 = (uint16_t)(1);
  _rom_div_lookupa0[146] = _1247;
  uint16_t _1248 = (uint16_t)(1);
  _rom_div_lookupa0[147] = _1248;
  uint16_t _1249 = (uint16_t)(1);
  _rom_div_lookupa0[148] = _1249;
  uint16_t _1250 = (uint16_t)(1);
  _rom_div_lookupa0[149] = _1250;
  uint16_t _1251 = (uint16_t)(1);
  _rom_div_lookupa0[150] = _1251;
  uint16_t _1252 = (uint16_t)(1);
  _rom_div_lookupa0[151] = _1252;
  uint16_t _1253 = (uint16_t)(1);
  _rom_div_lookupa0[152] = _1253;
  uint16_t _1254 = (uint16_t)(1);
  _rom_div_lookupa0[153] = _1254;
  uint16_t _1255 = (uint16_t)(1);
  _rom_div_lookupa0[154] = _1255;
  uint16_t _1256 = (uint16_t)(1);
  _rom_div_lookupa0[155] = _1256;
  uint16_t _1257 = (uint16_t)(1);
  _rom_div_lookupa0[156] = _1257;
  uint16_t _1258 = (uint16_t)(1);
  _rom_div_lookupa0[157] = _1258;
  uint16_t _1259 = (uint16_t)(1);
  _rom_div_lookupa0[158] = _1259;
  uint16_t _1260 = (uint16_t)(1);
  _rom_div_lookupa0[159] = _1260;
  uint16_t _1261 = (uint16_t)(1);
  _rom_div_lookupa0[160] = _1261;
  uint16_t _1262 = (uint16_t)(1);
  _rom_div_lookupa0[161] = _1262;
  uint16_t _1263 = (uint16_t)(1);
  _rom_div_lookupa0[162] = _1263;
  uint16_t _1264 = (uint16_t)(1);
  _rom_div_lookupa0[163] = _1264;
  uint16_t _1265 = (uint16_t)(1);
  _rom_div_lookupa0[164] = _1265;
  uint16_t _1266 = (uint16_t)(1);
  _rom_div_lookupa0[165] = _1266;
  uint16_t _1267 = (uint16_t)(1);
  _rom_div_lookupa0[166] = _1267;
  uint16_t _1268 = (uint16_t)(1);
  _rom_div_lookupa0[167] = _1268;
  uint16_t _1269 = (uint16_t)(1);
  _rom_div_lookupa0[168] = _1269;
  uint16_t _1270 = (uint16_t)(1);
  _rom_div_lookupa0[169] = _1270;
  uint16_t _1271 = (uint16_t)(1);
  _rom_div_lookupa0[170] = _1271;
  uint16_t _1272 = (uint16_t)(1);
  _rom_div_lookupa0[171] = _1272;
  uint16_t _1273 = (uint16_t)(1);
  _rom_div_lookupa0[172] = _1273;
  uint16_t _1274 = (uint16_t)(1);
  _rom_div_lookupa0[173] = _1274;
  uint16_t _1275 = (uint16_t)(1);
  _rom_div_lookupa0[174] = _1275;
  uint16_t _1276 = (uint16_t)(1);
  _rom_div_lookupa0[175] = _1276;
  uint16_t _1277 = (uint16_t)(1);
  _rom_div_lookupa0[176] = _1277;
  uint16_t _1278 = (uint16_t)(1);
  _rom_div_lookupa0[177] = _1278;
  uint16_t _1279 = (uint16_t)(1);
  _rom_div_lookupa0[178] = _1279;
  uint16_t _1280 = (uint16_t)(1);
  _rom_div_lookupa0[179] = _1280;
  uint16_t _1281 = (uint16_t)(1);
  _rom_div_lookupa0[180] = _1281;
  uint16_t _1282 = (uint16_t)(1);
  _rom_div_lookupa0[181] = _1282;
  uint16_t _1283 = (uint16_t)(1);
  _rom_div_lookupa0[182] = _1283;
  uint16_t _1284 = (uint16_t)(1);
  _rom_div_lookupa0[183] = _1284;
  uint16_t _1285 = (uint16_t)(1);
  _rom_div_lookupa0[184] = _1285;
  uint16_t _1286 = (uint16_t)(1);
  _rom_div_lookupa0[185] = _1286;
  uint16_t _1287 = (uint16_t)(1);
  _rom_div_lookupa0[186] = _1287;
  uint16_t _1288 = (uint16_t)(1);
  _rom_div_lookupa0[187] = _1288;
  uint16_t _1289 = (uint16_t)(1);
  _rom_div_lookupa0[188] = _1289;
  uint16_t _1290 = (uint16_t)(1);
  _rom_div_lookupa0[189] = _1290;
  uint16_t _1291 = (uint16_t)(1);
  _rom_div_lookupa0[190] = _1291;
  uint16_t _1292 = (uint16_t)(1);
  _rom_div_lookupa0[191] = _1292;
  uint16_t _1293 = (uint16_t)(1);
  _rom_div_lookupa0[192] = _1293;
  uint16_t _1294 = (uint16_t)(1);
  _rom_div_lookupa0[193] = _1294;
  uint16_t _1295 = (uint16_t)(1);
  _rom_div_lookupa0[194] = _1295;
  uint16_t _1296 = (uint16_t)(1);
  _rom_div_lookupa0[195] = _1296;
  uint16_t _1297 = (uint16_t)(1);
  _rom_div_lookupa0[196] = _1297;
  uint16_t _1298 = (uint16_t)(1);
  _rom_div_lookupa0[197] = _1298;
  uint16_t _1299 = (uint16_t)(1);
  _rom_div_lookupa0[198] = _1299;
  uint16_t _1300 = (uint16_t)(1);
  _rom_div_lookupa0[199] = _1300;
  uint16_t _1301 = (uint16_t)(1);
  _rom_div_lookupa0[200] = _1301;
  uint16_t _1302 = (uint16_t)(1);
  _rom_div_lookupa0[201] = _1302;
  uint16_t _1303 = (uint16_t)(1);
  _rom_div_lookupa0[202] = _1303;
  uint16_t _1304 = (uint16_t)(1);
  _rom_div_lookupa0[203] = _1304;
  uint16_t _1305 = (uint16_t)(1);
  _rom_div_lookupa0[204] = _1305;
  uint16_t _1306 = (uint16_t)(1);
  _rom_div_lookupa0[205] = _1306;
  uint16_t _1307 = (uint16_t)(1);
  _rom_div_lookupa0[206] = _1307;
  uint16_t _1308 = (uint16_t)(1);
  _rom_div_lookupa0[207] = _1308;
  uint16_t _1309 = (uint16_t)(1);
  _rom_div_lookupa0[208] = _1309;
  uint16_t _1310 = (uint16_t)(1);
  _rom_div_lookupa0[209] = _1310;
  uint16_t _1311 = (uint16_t)(1);
  _rom_div_lookupa0[210] = _1311;
  uint16_t _1312 = (uint16_t)(1);
  _rom_div_lookupa0[211] = _1312;
  uint16_t _1313 = (uint16_t)(1);
  _rom_div_lookupa0[212] = _1313;
  uint16_t _1314 = (uint16_t)(1);
  _rom_div_lookupa0[213] = _1314;
  uint16_t _1315 = (uint16_t)(1);
  _rom_div_lookupa0[214] = _1315;
  uint16_t _1316 = (uint16_t)(1);
  _rom_div_lookupa0[215] = _1316;
  uint16_t _1317 = (uint16_t)(1);
  _rom_div_lookupa0[216] = _1317;
  uint16_t _1318 = (uint16_t)(1);
  _rom_div_lookupa0[217] = _1318;
  uint16_t _1319 = (uint16_t)(1);
  _rom_div_lookupa0[218] = _1319;
  uint16_t _1320 = (uint16_t)(1);
  _rom_div_lookupa0[219] = _1320;
  uint16_t _1321 = (uint16_t)(1);
  _rom_div_lookupa0[220] = _1321;
  uint16_t _1322 = (uint16_t)(1);
  _rom_div_lookupa0[221] = _1322;
  uint16_t _1323 = (uint16_t)(1);
  _rom_div_lookupa0[222] = _1323;
  uint16_t _1324 = (uint16_t)(1);
  _rom_div_lookupa0[223] = _1324;
  uint16_t _1325 = (uint16_t)(1);
  _rom_div_lookupa0[224] = _1325;
  uint16_t _1326 = (uint16_t)(1);
  _rom_div_lookupa0[225] = _1326;
  uint16_t _1327 = (uint16_t)(1);
  _rom_div_lookupa0[226] = _1327;
  uint16_t _1328 = (uint16_t)(1);
  _rom_div_lookupa0[227] = _1328;
  uint16_t _1329 = (uint16_t)(1);
  _rom_div_lookupa0[228] = _1329;
  uint16_t _1330 = (uint16_t)(1);
  _rom_div_lookupa0[229] = _1330;
  uint16_t _1331 = (uint16_t)(1);
  _rom_div_lookupa0[230] = _1331;
  uint16_t _1332 = (uint16_t)(1);
  _rom_div_lookupa0[231] = _1332;
  uint16_t _1333 = (uint16_t)(1);
  _rom_div_lookupa0[232] = _1333;
  uint16_t _1334 = (uint16_t)(1);
  _rom_div_lookupa0[233] = _1334;
  uint16_t _1335 = (uint16_t)(1);
  _rom_div_lookupa0[234] = _1335;
  uint16_t _1336 = (uint16_t)(1);
  _rom_div_lookupa0[235] = _1336;
  uint16_t _1337 = (uint16_t)(1);
  _rom_div_lookupa0[236] = _1337;
  uint16_t _1338 = (uint16_t)(1);
  _rom_div_lookupa0[237] = _1338;
  uint16_t _1339 = (uint16_t)(1);
  _rom_div_lookupa0[238] = _1339;
  uint16_t _1340 = (uint16_t)(1);
  _rom_div_lookupa0[239] = _1340;
  uint16_t _1341 = (uint16_t)(1);
  _rom_div_lookupa0[240] = _1341;
  uint16_t _1342 = (uint16_t)(1);
  _rom_div_lookupa0[241] = _1342;
  uint16_t _1343 = (uint16_t)(1);
  _rom_div_lookupa0[242] = _1343;
  uint16_t _1344 = (uint16_t)(1);
  _rom_div_lookupa0[243] = _1344;
  uint16_t _1345 = (uint16_t)(1);
  _rom_div_lookupa0[244] = _1345;
  uint16_t _1346 = (uint16_t)(1);
  _rom_div_lookupa0[245] = _1346;
  uint16_t _1347 = (uint16_t)(1);
  _rom_div_lookupa0[246] = _1347;
  uint16_t _1348 = (uint16_t)(1);
  _rom_div_lookupa0[247] = _1348;
  uint16_t _1349 = (uint16_t)(1);
  _rom_div_lookupa0[248] = _1349;
  uint16_t _1350 = (uint16_t)(1);
  _rom_div_lookupa0[249] = _1350;
  uint16_t _1351 = (uint16_t)(1);
  _rom_div_lookupa0[250] = _1351;
  uint16_t _1352 = (uint16_t)(1);
  _rom_div_lookupa0[251] = _1352;
  uint16_t _1353 = (uint16_t)(1);
  _rom_div_lookupa0[252] = _1353;
  uint16_t _1354 = (uint16_t)(1);
  _rom_div_lookupa0[253] = _1354;
  uint16_t _1355 = (uint16_t)(1);
  _rom_div_lookupa0[254] = _1355;

  uint16_t _1356 = (uint16_t)(1);
  uint16_t _1357 = max(_gray_stencil_2, _1356);
  int32_t _1358 = (int32_t)(_1357);
  int32_t _1359 = _1358 + -1;
  uint16_t _1360 = ((const uint16_t *)_rom_div_lookupa0)[_1359];
  return _1360;
}

//store is: reciprocal.stencil(((reciprocal_s0_x_x*3) + 2), reciprocal_s0_y) = rom_div_lookupa0[(int32(max(gray.stencil(((reciprocal_s0_x_x*3) + 5), (reciprocal_s0_y + 3)), (uint16)1)) + -1)]
static hw_uint<16> hcompute_reciprocal_stencil_2(hw_uint<16>& gray_stencil) {
  uint16_t _gray_stencil_3 = (uint16_t) (gray_stencil.extract<0, 15>());

  uint16_t _rom_div_lookupa0[255];
  // produce rom_div_lookupa0
  uint16_t _1376 = (uint16_t)(256);
  _rom_div_lookupa0[0] = _1376;
  uint16_t _1377 = (uint16_t)(128);
  _rom_div_lookupa0[1] = _1377;
  uint16_t _1378 = (uint16_t)(85);
  _rom_div_lookupa0[2] = _1378;
  uint16_t _1379 = (uint16_t)(64);
  _rom_div_lookupa0[3] = _1379;
  uint16_t _1380 = (uint16_t)(51);
  _rom_div_lookupa0[4] = _1380;
  uint16_t _1381 = (uint16_t)(42);
  _rom_div_lookupa0[5] = _1381;
  uint16_t _1382 = (uint16_t)(36);
  _rom_div_lookupa0[6] = _1382;
  uint16_t _1383 = (uint16_t)(32);
  _rom_div_lookupa0[7] = _1383;
  uint16_t _1384 = (uint16_t)(28);
  _rom_div_lookupa0[8] = _1384;
  uint16_t _1385 = (uint16_t)(25);
  _rom_div_lookupa0[9] = _1385;
  uint16_t _1386 = (uint16_t)(23);
  _rom_div_lookupa0[10] = _1386;
  uint16_t _1387 = (uint16_t)(21);
  _rom_div_lookupa0[11] = _1387;
  uint16_t _1388 = (uint16_t)(19);
  _rom_div_lookupa0[12] = _1388;
  uint16_t _1389 = (uint16_t)(18);
  _rom_div_lookupa0[13] = _1389;
  uint16_t _1390 = (uint16_t)(17);
  _rom_div_lookupa0[14] = _1390;
  uint16_t _1391 = (uint16_t)(16);
  _rom_div_lookupa0[15] = _1391;
  uint16_t _1392 = (uint16_t)(15);
  _rom_div_lookupa0[16] = _1392;
  uint16_t _1393 = (uint16_t)(14);
  _rom_div_lookupa0[17] = _1393;
  uint16_t _1394 = (uint16_t)(13);
  _rom_div_lookupa0[18] = _1394;
  uint16_t _1395 = (uint16_t)(12);
  _rom_div_lookupa0[19] = _1395;
  uint16_t _1396 = (uint16_t)(12);
  _rom_div_lookupa0[20] = _1396;
  uint16_t _1397 = (uint16_t)(11);
  _rom_div_lookupa0[21] = _1397;
  uint16_t _1398 = (uint16_t)(11);
  _rom_div_lookupa0[22] = _1398;
  uint16_t _1399 = (uint16_t)(10);
  _rom_div_lookupa0[23] = _1399;
  uint16_t _1400 = (uint16_t)(10);
  _rom_div_lookupa0[24] = _1400;
  uint16_t _1401 = (uint16_t)(9);
  _rom_div_lookupa0[25] = _1401;
  uint16_t _1402 = (uint16_t)(9);
  _rom_div_lookupa0[26] = _1402;
  uint16_t _1403 = (uint16_t)(9);
  _rom_div_lookupa0[27] = _1403;
  uint16_t _1404 = (uint16_t)(8);
  _rom_div_lookupa0[28] = _1404;
  uint16_t _1405 = (uint16_t)(8);
  _rom_div_lookupa0[29] = _1405;
  uint16_t _1406 = (uint16_t)(8);
  _rom_div_lookupa0[30] = _1406;
  uint16_t _1407 = (uint16_t)(8);
  _rom_div_lookupa0[31] = _1407;
  uint16_t _1408 = (uint16_t)(7);
  _rom_div_lookupa0[32] = _1408;
  uint16_t _1409 = (uint16_t)(7);
  _rom_div_lookupa0[33] = _1409;
  uint16_t _1410 = (uint16_t)(7);
  _rom_div_lookupa0[34] = _1410;
  uint16_t _1411 = (uint16_t)(7);
  _rom_div_lookupa0[35] = _1411;
  uint16_t _1412 = (uint16_t)(6);
  _rom_div_lookupa0[36] = _1412;
  uint16_t _1413 = (uint16_t)(6);
  _rom_div_lookupa0[37] = _1413;
  uint16_t _1414 = (uint16_t)(6);
  _rom_div_lookupa0[38] = _1414;
  uint16_t _1415 = (uint16_t)(6);
  _rom_div_lookupa0[39] = _1415;
  uint16_t _1416 = (uint16_t)(6);
  _rom_div_lookupa0[40] = _1416;
  uint16_t _1417 = (uint16_t)(6);
  _rom_div_lookupa0[41] = _1417;
  uint16_t _1418 = (uint16_t)(5);
  _rom_div_lookupa0[42] = _1418;
  uint16_t _1419 = (uint16_t)(5);
  _rom_div_lookupa0[43] = _1419;
  uint16_t _1420 = (uint16_t)(5);
  _rom_div_lookupa0[44] = _1420;
  uint16_t _1421 = (uint16_t)(5);
  _rom_div_lookupa0[45] = _1421;
  uint16_t _1422 = (uint16_t)(5);
  _rom_div_lookupa0[46] = _1422;
  uint16_t _1423 = (uint16_t)(5);
  _rom_div_lookupa0[47] = _1423;
  uint16_t _1424 = (uint16_t)(5);
  _rom_div_lookupa0[48] = _1424;
  uint16_t _1425 = (uint16_t)(5);
  _rom_div_lookupa0[49] = _1425;
  uint16_t _1426 = (uint16_t)(5);
  _rom_div_lookupa0[50] = _1426;
  uint16_t _1427 = (uint16_t)(4);
  _rom_div_lookupa0[51] = _1427;
  uint16_t _1428 = (uint16_t)(4);
  _rom_div_lookupa0[52] = _1428;
  uint16_t _1429 = (uint16_t)(4);
  _rom_div_lookupa0[53] = _1429;
  uint16_t _1430 = (uint16_t)(4);
  _rom_div_lookupa0[54] = _1430;
  uint16_t _1431 = (uint16_t)(4);
  _rom_div_lookupa0[55] = _1431;
  uint16_t _1432 = (uint16_t)(4);
  _rom_div_lookupa0[56] = _1432;
  uint16_t _1433 = (uint16_t)(4);
  _rom_div_lookupa0[57] = _1433;
  uint16_t _1434 = (uint16_t)(4);
  _rom_div_lookupa0[58] = _1434;
  uint16_t _1435 = (uint16_t)(4);
  _rom_div_lookupa0[59] = _1435;
  uint16_t _1436 = (uint16_t)(4);
  _rom_div_lookupa0[60] = _1436;
  uint16_t _1437 = (uint16_t)(4);
  _rom_div_lookupa0[61] = _1437;
  uint16_t _1438 = (uint16_t)(4);
  _rom_div_lookupa0[62] = _1438;
  uint16_t _1439 = (uint16_t)(4);
  _rom_div_lookupa0[63] = _1439;
  uint16_t _1440 = (uint16_t)(3);
  _rom_div_lookupa0[64] = _1440;
  uint16_t _1441 = (uint16_t)(3);
  _rom_div_lookupa0[65] = _1441;
  uint16_t _1442 = (uint16_t)(3);
  _rom_div_lookupa0[66] = _1442;
  uint16_t _1443 = (uint16_t)(3);
  _rom_div_lookupa0[67] = _1443;
  uint16_t _1444 = (uint16_t)(3);
  _rom_div_lookupa0[68] = _1444;
  uint16_t _1445 = (uint16_t)(3);
  _rom_div_lookupa0[69] = _1445;
  uint16_t _1446 = (uint16_t)(3);
  _rom_div_lookupa0[70] = _1446;
  uint16_t _1447 = (uint16_t)(3);
  _rom_div_lookupa0[71] = _1447;
  uint16_t _1448 = (uint16_t)(3);
  _rom_div_lookupa0[72] = _1448;
  uint16_t _1449 = (uint16_t)(3);
  _rom_div_lookupa0[73] = _1449;
  uint16_t _1450 = (uint16_t)(3);
  _rom_div_lookupa0[74] = _1450;
  uint16_t _1451 = (uint16_t)(3);
  _rom_div_lookupa0[75] = _1451;
  uint16_t _1452 = (uint16_t)(3);
  _rom_div_lookupa0[76] = _1452;
  uint16_t _1453 = (uint16_t)(3);
  _rom_div_lookupa0[77] = _1453;
  uint16_t _1454 = (uint16_t)(3);
  _rom_div_lookupa0[78] = _1454;
  uint16_t _1455 = (uint16_t)(3);
  _rom_div_lookupa0[79] = _1455;
  uint16_t _1456 = (uint16_t)(3);
  _rom_div_lookupa0[80] = _1456;
  uint16_t _1457 = (uint16_t)(3);
  _rom_div_lookupa0[81] = _1457;
  uint16_t _1458 = (uint16_t)(3);
  _rom_div_lookupa0[82] = _1458;
  uint16_t _1459 = (uint16_t)(3);
  _rom_div_lookupa0[83] = _1459;
  uint16_t _1460 = (uint16_t)(3);
  _rom_div_lookupa0[84] = _1460;
  uint16_t _1461 = (uint16_t)(2);
  _rom_div_lookupa0[85] = _1461;
  uint16_t _1462 = (uint16_t)(2);
  _rom_div_lookupa0[86] = _1462;
  uint16_t _1463 = (uint16_t)(2);
  _rom_div_lookupa0[87] = _1463;
  uint16_t _1464 = (uint16_t)(2);
  _rom_div_lookupa0[88] = _1464;
  uint16_t _1465 = (uint16_t)(2);
  _rom_div_lookupa0[89] = _1465;
  uint16_t _1466 = (uint16_t)(2);
  _rom_div_lookupa0[90] = _1466;
  uint16_t _1467 = (uint16_t)(2);
  _rom_div_lookupa0[91] = _1467;
  uint16_t _1468 = (uint16_t)(2);
  _rom_div_lookupa0[92] = _1468;
  uint16_t _1469 = (uint16_t)(2);
  _rom_div_lookupa0[93] = _1469;
  uint16_t _1470 = (uint16_t)(2);
  _rom_div_lookupa0[94] = _1470;
  uint16_t _1471 = (uint16_t)(2);
  _rom_div_lookupa0[95] = _1471;
  uint16_t _1472 = (uint16_t)(2);
  _rom_div_lookupa0[96] = _1472;
  uint16_t _1473 = (uint16_t)(2);
  _rom_div_lookupa0[97] = _1473;
  uint16_t _1474 = (uint16_t)(2);
  _rom_div_lookupa0[98] = _1474;
  uint16_t _1475 = (uint16_t)(2);
  _rom_div_lookupa0[99] = _1475;
  uint16_t _1476 = (uint16_t)(2);
  _rom_div_lookupa0[100] = _1476;
  uint16_t _1477 = (uint16_t)(2);
  _rom_div_lookupa0[101] = _1477;
  uint16_t _1478 = (uint16_t)(2);
  _rom_div_lookupa0[102] = _1478;
  uint16_t _1479 = (uint16_t)(2);
  _rom_div_lookupa0[103] = _1479;
  uint16_t _1480 = (uint16_t)(2);
  _rom_div_lookupa0[104] = _1480;
  uint16_t _1481 = (uint16_t)(2);
  _rom_div_lookupa0[105] = _1481;
  uint16_t _1482 = (uint16_t)(2);
  _rom_div_lookupa0[106] = _1482;
  uint16_t _1483 = (uint16_t)(2);
  _rom_div_lookupa0[107] = _1483;
  uint16_t _1484 = (uint16_t)(2);
  _rom_div_lookupa0[108] = _1484;
  uint16_t _1485 = (uint16_t)(2);
  _rom_div_lookupa0[109] = _1485;
  uint16_t _1486 = (uint16_t)(2);
  _rom_div_lookupa0[110] = _1486;
  uint16_t _1487 = (uint16_t)(2);
  _rom_div_lookupa0[111] = _1487;
  uint16_t _1488 = (uint16_t)(2);
  _rom_div_lookupa0[112] = _1488;
  uint16_t _1489 = (uint16_t)(2);
  _rom_div_lookupa0[113] = _1489;
  uint16_t _1490 = (uint16_t)(2);
  _rom_div_lookupa0[114] = _1490;
  uint16_t _1491 = (uint16_t)(2);
  _rom_div_lookupa0[115] = _1491;
  uint16_t _1492 = (uint16_t)(2);
  _rom_div_lookupa0[116] = _1492;
  uint16_t _1493 = (uint16_t)(2);
  _rom_div_lookupa0[117] = _1493;
  uint16_t _1494 = (uint16_t)(2);
  _rom_div_lookupa0[118] = _1494;
  uint16_t _1495 = (uint16_t)(2);
  _rom_div_lookupa0[119] = _1495;
  uint16_t _1496 = (uint16_t)(2);
  _rom_div_lookupa0[120] = _1496;
  uint16_t _1497 = (uint16_t)(2);
  _rom_div_lookupa0[121] = _1497;
  uint16_t _1498 = (uint16_t)(2);
  _rom_div_lookupa0[122] = _1498;
  uint16_t _1499 = (uint16_t)(2);
  _rom_div_lookupa0[123] = _1499;
  uint16_t _1500 = (uint16_t)(2);
  _rom_div_lookupa0[124] = _1500;
  uint16_t _1501 = (uint16_t)(2);
  _rom_div_lookupa0[125] = _1501;
  uint16_t _1502 = (uint16_t)(2);
  _rom_div_lookupa0[126] = _1502;
  uint16_t _1503 = (uint16_t)(2);
  _rom_div_lookupa0[127] = _1503;
  uint16_t _1504 = (uint16_t)(1);
  _rom_div_lookupa0[128] = _1504;
  uint16_t _1505 = (uint16_t)(1);
  _rom_div_lookupa0[129] = _1505;
  uint16_t _1506 = (uint16_t)(1);
  _rom_div_lookupa0[130] = _1506;
  uint16_t _1507 = (uint16_t)(1);
  _rom_div_lookupa0[131] = _1507;
  uint16_t _1508 = (uint16_t)(1);
  _rom_div_lookupa0[132] = _1508;
  uint16_t _1509 = (uint16_t)(1);
  _rom_div_lookupa0[133] = _1509;
  uint16_t _1510 = (uint16_t)(1);
  _rom_div_lookupa0[134] = _1510;
  uint16_t _1511 = (uint16_t)(1);
  _rom_div_lookupa0[135] = _1511;
  uint16_t _1512 = (uint16_t)(1);
  _rom_div_lookupa0[136] = _1512;
  uint16_t _1513 = (uint16_t)(1);
  _rom_div_lookupa0[137] = _1513;
  uint16_t _1514 = (uint16_t)(1);
  _rom_div_lookupa0[138] = _1514;
  uint16_t _1515 = (uint16_t)(1);
  _rom_div_lookupa0[139] = _1515;
  uint16_t _1516 = (uint16_t)(1);
  _rom_div_lookupa0[140] = _1516;
  uint16_t _1517 = (uint16_t)(1);
  _rom_div_lookupa0[141] = _1517;
  uint16_t _1518 = (uint16_t)(1);
  _rom_div_lookupa0[142] = _1518;
  uint16_t _1519 = (uint16_t)(1);
  _rom_div_lookupa0[143] = _1519;
  uint16_t _1520 = (uint16_t)(1);
  _rom_div_lookupa0[144] = _1520;
  uint16_t _1521 = (uint16_t)(1);
  _rom_div_lookupa0[145] = _1521;
  uint16_t _1522 = (uint16_t)(1);
  _rom_div_lookupa0[146] = _1522;
  uint16_t _1523 = (uint16_t)(1);
  _rom_div_lookupa0[147] = _1523;
  uint16_t _1524 = (uint16_t)(1);
  _rom_div_lookupa0[148] = _1524;
  uint16_t _1525 = (uint16_t)(1);
  _rom_div_lookupa0[149] = _1525;
  uint16_t _1526 = (uint16_t)(1);
  _rom_div_lookupa0[150] = _1526;
  uint16_t _1527 = (uint16_t)(1);
  _rom_div_lookupa0[151] = _1527;
  uint16_t _1528 = (uint16_t)(1);
  _rom_div_lookupa0[152] = _1528;
  uint16_t _1529 = (uint16_t)(1);
  _rom_div_lookupa0[153] = _1529;
  uint16_t _1530 = (uint16_t)(1);
  _rom_div_lookupa0[154] = _1530;
  uint16_t _1531 = (uint16_t)(1);
  _rom_div_lookupa0[155] = _1531;
  uint16_t _1532 = (uint16_t)(1);
  _rom_div_lookupa0[156] = _1532;
  uint16_t _1533 = (uint16_t)(1);
  _rom_div_lookupa0[157] = _1533;
  uint16_t _1534 = (uint16_t)(1);
  _rom_div_lookupa0[158] = _1534;
  uint16_t _1535 = (uint16_t)(1);
  _rom_div_lookupa0[159] = _1535;
  uint16_t _1536 = (uint16_t)(1);
  _rom_div_lookupa0[160] = _1536;
  uint16_t _1537 = (uint16_t)(1);
  _rom_div_lookupa0[161] = _1537;
  uint16_t _1538 = (uint16_t)(1);
  _rom_div_lookupa0[162] = _1538;
  uint16_t _1539 = (uint16_t)(1);
  _rom_div_lookupa0[163] = _1539;
  uint16_t _1540 = (uint16_t)(1);
  _rom_div_lookupa0[164] = _1540;
  uint16_t _1541 = (uint16_t)(1);
  _rom_div_lookupa0[165] = _1541;
  uint16_t _1542 = (uint16_t)(1);
  _rom_div_lookupa0[166] = _1542;
  uint16_t _1543 = (uint16_t)(1);
  _rom_div_lookupa0[167] = _1543;
  uint16_t _1544 = (uint16_t)(1);
  _rom_div_lookupa0[168] = _1544;
  uint16_t _1545 = (uint16_t)(1);
  _rom_div_lookupa0[169] = _1545;
  uint16_t _1546 = (uint16_t)(1);
  _rom_div_lookupa0[170] = _1546;
  uint16_t _1547 = (uint16_t)(1);
  _rom_div_lookupa0[171] = _1547;
  uint16_t _1548 = (uint16_t)(1);
  _rom_div_lookupa0[172] = _1548;
  uint16_t _1549 = (uint16_t)(1);
  _rom_div_lookupa0[173] = _1549;
  uint16_t _1550 = (uint16_t)(1);
  _rom_div_lookupa0[174] = _1550;
  uint16_t _1551 = (uint16_t)(1);
  _rom_div_lookupa0[175] = _1551;
  uint16_t _1552 = (uint16_t)(1);
  _rom_div_lookupa0[176] = _1552;
  uint16_t _1553 = (uint16_t)(1);
  _rom_div_lookupa0[177] = _1553;
  uint16_t _1554 = (uint16_t)(1);
  _rom_div_lookupa0[178] = _1554;
  uint16_t _1555 = (uint16_t)(1);
  _rom_div_lookupa0[179] = _1555;
  uint16_t _1556 = (uint16_t)(1);
  _rom_div_lookupa0[180] = _1556;
  uint16_t _1557 = (uint16_t)(1);
  _rom_div_lookupa0[181] = _1557;
  uint16_t _1558 = (uint16_t)(1);
  _rom_div_lookupa0[182] = _1558;
  uint16_t _1559 = (uint16_t)(1);
  _rom_div_lookupa0[183] = _1559;
  uint16_t _1560 = (uint16_t)(1);
  _rom_div_lookupa0[184] = _1560;
  uint16_t _1561 = (uint16_t)(1);
  _rom_div_lookupa0[185] = _1561;
  uint16_t _1562 = (uint16_t)(1);
  _rom_div_lookupa0[186] = _1562;
  uint16_t _1563 = (uint16_t)(1);
  _rom_div_lookupa0[187] = _1563;
  uint16_t _1564 = (uint16_t)(1);
  _rom_div_lookupa0[188] = _1564;
  uint16_t _1565 = (uint16_t)(1);
  _rom_div_lookupa0[189] = _1565;
  uint16_t _1566 = (uint16_t)(1);
  _rom_div_lookupa0[190] = _1566;
  uint16_t _1567 = (uint16_t)(1);
  _rom_div_lookupa0[191] = _1567;
  uint16_t _1568 = (uint16_t)(1);
  _rom_div_lookupa0[192] = _1568;
  uint16_t _1569 = (uint16_t)(1);
  _rom_div_lookupa0[193] = _1569;
  uint16_t _1570 = (uint16_t)(1);
  _rom_div_lookupa0[194] = _1570;
  uint16_t _1571 = (uint16_t)(1);
  _rom_div_lookupa0[195] = _1571;
  uint16_t _1572 = (uint16_t)(1);
  _rom_div_lookupa0[196] = _1572;
  uint16_t _1573 = (uint16_t)(1);
  _rom_div_lookupa0[197] = _1573;
  uint16_t _1574 = (uint16_t)(1);
  _rom_div_lookupa0[198] = _1574;
  uint16_t _1575 = (uint16_t)(1);
  _rom_div_lookupa0[199] = _1575;
  uint16_t _1576 = (uint16_t)(1);
  _rom_div_lookupa0[200] = _1576;
  uint16_t _1577 = (uint16_t)(1);
  _rom_div_lookupa0[201] = _1577;
  uint16_t _1578 = (uint16_t)(1);
  _rom_div_lookupa0[202] = _1578;
  uint16_t _1579 = (uint16_t)(1);
  _rom_div_lookupa0[203] = _1579;
  uint16_t _1580 = (uint16_t)(1);
  _rom_div_lookupa0[204] = _1580;
  uint16_t _1581 = (uint16_t)(1);
  _rom_div_lookupa0[205] = _1581;
  uint16_t _1582 = (uint16_t)(1);
  _rom_div_lookupa0[206] = _1582;
  uint16_t _1583 = (uint16_t)(1);
  _rom_div_lookupa0[207] = _1583;
  uint16_t _1584 = (uint16_t)(1);
  _rom_div_lookupa0[208] = _1584;
  uint16_t _1585 = (uint16_t)(1);
  _rom_div_lookupa0[209] = _1585;
  uint16_t _1586 = (uint16_t)(1);
  _rom_div_lookupa0[210] = _1586;
  uint16_t _1587 = (uint16_t)(1);
  _rom_div_lookupa0[211] = _1587;
  uint16_t _1588 = (uint16_t)(1);
  _rom_div_lookupa0[212] = _1588;
  uint16_t _1589 = (uint16_t)(1);
  _rom_div_lookupa0[213] = _1589;
  uint16_t _1590 = (uint16_t)(1);
  _rom_div_lookupa0[214] = _1590;
  uint16_t _1591 = (uint16_t)(1);
  _rom_div_lookupa0[215] = _1591;
  uint16_t _1592 = (uint16_t)(1);
  _rom_div_lookupa0[216] = _1592;
  uint16_t _1593 = (uint16_t)(1);
  _rom_div_lookupa0[217] = _1593;
  uint16_t _1594 = (uint16_t)(1);
  _rom_div_lookupa0[218] = _1594;
  uint16_t _1595 = (uint16_t)(1);
  _rom_div_lookupa0[219] = _1595;
  uint16_t _1596 = (uint16_t)(1);
  _rom_div_lookupa0[220] = _1596;
  uint16_t _1597 = (uint16_t)(1);
  _rom_div_lookupa0[221] = _1597;
  uint16_t _1598 = (uint16_t)(1);
  _rom_div_lookupa0[222] = _1598;
  uint16_t _1599 = (uint16_t)(1);
  _rom_div_lookupa0[223] = _1599;
  uint16_t _1600 = (uint16_t)(1);
  _rom_div_lookupa0[224] = _1600;
  uint16_t _1601 = (uint16_t)(1);
  _rom_div_lookupa0[225] = _1601;
  uint16_t _1602 = (uint16_t)(1);
  _rom_div_lookupa0[226] = _1602;
  uint16_t _1603 = (uint16_t)(1);
  _rom_div_lookupa0[227] = _1603;
  uint16_t _1604 = (uint16_t)(1);
  _rom_div_lookupa0[228] = _1604;
  uint16_t _1605 = (uint16_t)(1);
  _rom_div_lookupa0[229] = _1605;
  uint16_t _1606 = (uint16_t)(1);
  _rom_div_lookupa0[230] = _1606;
  uint16_t _1607 = (uint16_t)(1);
  _rom_div_lookupa0[231] = _1607;
  uint16_t _1608 = (uint16_t)(1);
  _rom_div_lookupa0[232] = _1608;
  uint16_t _1609 = (uint16_t)(1);
  _rom_div_lookupa0[233] = _1609;
  uint16_t _1610 = (uint16_t)(1);
  _rom_div_lookupa0[234] = _1610;
  uint16_t _1611 = (uint16_t)(1);
  _rom_div_lookupa0[235] = _1611;
  uint16_t _1612 = (uint16_t)(1);
  _rom_div_lookupa0[236] = _1612;
  uint16_t _1613 = (uint16_t)(1);
  _rom_div_lookupa0[237] = _1613;
  uint16_t _1614 = (uint16_t)(1);
  _rom_div_lookupa0[238] = _1614;
  uint16_t _1615 = (uint16_t)(1);
  _rom_div_lookupa0[239] = _1615;
  uint16_t _1616 = (uint16_t)(1);
  _rom_div_lookupa0[240] = _1616;
  uint16_t _1617 = (uint16_t)(1);
  _rom_div_lookupa0[241] = _1617;
  uint16_t _1618 = (uint16_t)(1);
  _rom_div_lookupa0[242] = _1618;
  uint16_t _1619 = (uint16_t)(1);
  _rom_div_lookupa0[243] = _1619;
  uint16_t _1620 = (uint16_t)(1);
  _rom_div_lookupa0[244] = _1620;
  uint16_t _1621 = (uint16_t)(1);
  _rom_div_lookupa0[245] = _1621;
  uint16_t _1622 = (uint16_t)(1);
  _rom_div_lookupa0[246] = _1622;
  uint16_t _1623 = (uint16_t)(1);
  _rom_div_lookupa0[247] = _1623;
  uint16_t _1624 = (uint16_t)(1);
  _rom_div_lookupa0[248] = _1624;
  uint16_t _1625 = (uint16_t)(1);
  _rom_div_lookupa0[249] = _1625;
  uint16_t _1626 = (uint16_t)(1);
  _rom_div_lookupa0[250] = _1626;
  uint16_t _1627 = (uint16_t)(1);
  _rom_div_lookupa0[251] = _1627;
  uint16_t _1628 = (uint16_t)(1);
  _rom_div_lookupa0[252] = _1628;
  uint16_t _1629 = (uint16_t)(1);
  _rom_div_lookupa0[253] = _1629;
  uint16_t _1630 = (uint16_t)(1);
  _rom_div_lookupa0[254] = _1630;

  uint16_t _1631 = (uint16_t)(1);
  uint16_t _1632 = max(_gray_stencil_3, _1631);
  int32_t _1633 = (int32_t)(_1632);
  int32_t _1634 = _1633 + -1;
  uint16_t _1635 = ((const uint16_t *)_rom_div_lookupa0)[_1634];
  return _1635;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s0_x_x*3), blur_unnormalized_s0_y) = (uint16)0
static hw_uint<16> hcompute_blur_unnormalized_stencil() {
  uint16_t _1651 = (uint16_t)(0);
  return _1651;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*3) + 1), blur_unnormalized_s0_y) = (uint16)0
static hw_uint<16> hcompute_blur_unnormalized_stencil_1() {
  uint16_t _1655 = (uint16_t)(0);
  return _1655;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s0_x_x*3) + 2), blur_unnormalized_s0_y) = (uint16)0
static hw_uint<16> hcompute_blur_unnormalized_stencil_2() {
  uint16_t _1660 = (uint16_t)(0);
  return _1660;
}

//store is: blur_unnormalized.stencil((blur_unnormalized_s1_x_x*3), blur_unnormalized_s1_y) = (gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), blur_unnormalized_s1_y) + (blur_unnormalized.stencil((blur_unnormalized_s1_x_x*3), blur_unnormalized_s1_y) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), blur_unnormalized_s1_y)*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), blur_unnormalized_s1_y) + (gray.stencil((blur_unnormalized_s1_x_x*3), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 1))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 1))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 1)) + ((gray.stencil((blur_unnormalized_s1_x_x*3), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 2))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x*3), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 3))*(uint16)18) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil((blur_unnormalized_s1_x_x*3), (blur_unnormalized_s1_y + 4))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 4))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 4))*(uint16)2) + (gray.stencil((blur_unnormalized_s1_x_x*3), (blur_unnormalized_s1_y + 5)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 5))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 5))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 5))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 5)) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 6)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 6))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 6))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 6)) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 6))*(uint16)2))))))))))))))))))))))))))))))))))))))))))))))
static hw_uint<16> hcompute_blur_unnormalized_stencil_3(hw_uint<16>& blur_unnormalized_stencil, hw_uint<720>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_3 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _gray_stencil_10 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_11 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_12 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_13 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_14 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_15 = (uint16_t) (gray_stencil.extract<80, 95>());
  uint16_t _gray_stencil_16 = (uint16_t) (gray_stencil.extract<96, 111>());
  uint16_t _gray_stencil_17 = (uint16_t) (gray_stencil.extract<112, 127>());
  uint16_t _gray_stencil_18 = (uint16_t) (gray_stencil.extract<128, 143>());
  uint16_t _gray_stencil_19 = (uint16_t) (gray_stencil.extract<144, 159>());
  uint16_t _gray_stencil_20 = (uint16_t) (gray_stencil.extract<160, 175>());
  uint16_t _gray_stencil_21 = (uint16_t) (gray_stencil.extract<176, 191>());
  uint16_t _gray_stencil_22 = (uint16_t) (gray_stencil.extract<192, 207>());
  uint16_t _gray_stencil_23 = (uint16_t) (gray_stencil.extract<208, 223>());
  uint16_t _gray_stencil_24 = (uint16_t) (gray_stencil.extract<224, 239>());
  uint16_t _gray_stencil_25 = (uint16_t) (gray_stencil.extract<240, 255>());
  uint16_t _gray_stencil_26 = (uint16_t) (gray_stencil.extract<256, 271>());
  uint16_t _gray_stencil_27 = (uint16_t) (gray_stencil.extract<272, 287>());
  uint16_t _gray_stencil_28 = (uint16_t) (gray_stencil.extract<288, 303>());
  uint16_t _gray_stencil_29 = (uint16_t) (gray_stencil.extract<304, 319>());
  uint16_t _gray_stencil_30 = (uint16_t) (gray_stencil.extract<320, 335>());
  uint16_t _gray_stencil_31 = (uint16_t) (gray_stencil.extract<336, 351>());
  uint16_t _gray_stencil_32 = (uint16_t) (gray_stencil.extract<352, 367>());
  uint16_t _gray_stencil_33 = (uint16_t) (gray_stencil.extract<368, 383>());
  uint16_t _gray_stencil_34 = (uint16_t) (gray_stencil.extract<384, 399>());
  uint16_t _gray_stencil_35 = (uint16_t) (gray_stencil.extract<400, 415>());
  uint16_t _gray_stencil_36 = (uint16_t) (gray_stencil.extract<416, 431>());
  uint16_t _gray_stencil_37 = (uint16_t) (gray_stencil.extract<432, 447>());
  uint16_t _gray_stencil_38 = (uint16_t) (gray_stencil.extract<448, 463>());
  uint16_t _gray_stencil_39 = (uint16_t) (gray_stencil.extract<464, 479>());
  uint16_t _gray_stencil_4 = (uint16_t) (gray_stencil.extract<480, 495>());
  uint16_t _gray_stencil_40 = (uint16_t) (gray_stencil.extract<496, 511>());
  uint16_t _gray_stencil_41 = (uint16_t) (gray_stencil.extract<512, 527>());
  uint16_t _gray_stencil_42 = (uint16_t) (gray_stencil.extract<528, 543>());
  uint16_t _gray_stencil_43 = (uint16_t) (gray_stencil.extract<544, 559>());
  uint16_t _gray_stencil_44 = (uint16_t) (gray_stencil.extract<560, 575>());
  uint16_t _gray_stencil_45 = (uint16_t) (gray_stencil.extract<576, 591>());
  uint16_t _gray_stencil_46 = (uint16_t) (gray_stencil.extract<592, 607>());
  uint16_t _gray_stencil_47 = (uint16_t) (gray_stencil.extract<608, 623>());
  uint16_t _gray_stencil_48 = (uint16_t) (gray_stencil.extract<624, 639>());
  uint16_t _gray_stencil_5 = (uint16_t) (gray_stencil.extract<640, 655>());
  uint16_t _gray_stencil_6 = (uint16_t) (gray_stencil.extract<656, 671>());
  uint16_t _gray_stencil_7 = (uint16_t) (gray_stencil.extract<672, 687>());
  uint16_t _gray_stencil_8 = (uint16_t) (gray_stencil.extract<688, 703>());
  uint16_t _gray_stencil_9 = (uint16_t) (gray_stencil.extract<704, 719>());

  uint16_t _1665 = (uint16_t)(2);
  uint16_t _1666 = _gray_stencil_5 * _1665;
  uint16_t _1667 = _gray_stencil_6 * _1665;
  uint16_t _1668 = _gray_stencil_7 * _1665;
  uint16_t _1669 = (uint16_t)(3);
  uint16_t _1670 = _gray_stencil_10 * _1669;
  uint16_t _1671 = (uint16_t)(6);
  uint16_t _1672 = _gray_stencil_11 * _1671;
  uint16_t _1673 = (uint16_t)(7);
  uint16_t _1674 = _gray_stencil_12 * _1673;
  uint16_t _1675 = _gray_stencil_13 * _1671;
  uint16_t _1676 = _gray_stencil_14 * _1669;
  uint16_t _1677 = _gray_stencil_16 * _1665;
  uint16_t _1678 = _gray_stencil_17 * _1671;
  uint16_t _1679 = (uint16_t)(12);
  uint16_t _1680 = _gray_stencil_18 * _1679;
  uint16_t _1681 = (uint16_t)(15);
  uint16_t _1682 = _gray_stencil_19 * _1681;
  uint16_t _1683 = _gray_stencil_20 * _1679;
  uint16_t _1684 = _gray_stencil_21 * _1671;
  uint16_t _1685 = _gray_stencil_22 * _1665;
  uint16_t _1686 = _gray_stencil_23 * _1665;
  uint16_t _1687 = _gray_stencil_24 * _1673;
  uint16_t _1688 = _gray_stencil_25 * _1681;
  uint16_t _1689 = (uint16_t)(18);
  uint16_t _1690 = _gray_stencil_26 * _1689;
  uint16_t _1691 = _gray_stencil_27 * _1681;
  uint16_t _1692 = _gray_stencil_28 * _1673;
  uint16_t _1693 = _gray_stencil_29 * _1665;
  uint16_t _1694 = _gray_stencil_30 * _1665;
  uint16_t _1695 = _gray_stencil_31 * _1671;
  uint16_t _1696 = _gray_stencil_32 * _1679;
  uint16_t _1697 = _gray_stencil_33 * _1681;
  uint16_t _1698 = _gray_stencil_34 * _1679;
  uint16_t _1699 = _gray_stencil_35 * _1671;
  uint16_t _1700 = _gray_stencil_36 * _1665;
  uint16_t _1701 = _gray_stencil_38 * _1669;
  uint16_t _1702 = _gray_stencil_39 * _1671;
  uint16_t _1703 = _gray_stencil_40 * _1673;
  uint16_t _1704 = _gray_stencil_41 * _1671;
  uint16_t _1705 = _gray_stencil_42 * _1669;
  uint16_t _1706 = _gray_stencil_45 * _1665;
  uint16_t _1707 = _gray_stencil_46 * _1665;
  uint16_t _1708 = _gray_stencil_48 * _1665;
  uint16_t _1709 = _gray_stencil_47 + _1708;
  uint16_t _1710 = _1707 + _1709;
  uint16_t _1711 = _1706 + _1710;
  uint16_t _1712 = _gray_stencil_44 + _1711;
  uint16_t _1713 = _gray_stencil_43 + _1712;
  uint16_t _1714 = _1705 + _1713;
  uint16_t _1715 = _1704 + _1714;
  uint16_t _1716 = _1703 + _1715;
  uint16_t _1717 = _1702 + _1716;
  uint16_t _1718 = _1701 + _1717;
  uint16_t _1719 = _gray_stencil_37 + _1718;
  uint16_t _1720 = _1700 + _1719;
  uint16_t _1721 = _1699 + _1720;
  uint16_t _1722 = _1698 + _1721;
  uint16_t _1723 = _1697 + _1722;
  uint16_t _1724 = _1696 + _1723;
  uint16_t _1725 = _1695 + _1724;
  uint16_t _1726 = _1694 + _1725;
  uint16_t _1727 = _1693 + _1726;
  uint16_t _1728 = _1692 + _1727;
  uint16_t _1729 = _1691 + _1728;
  uint16_t _1730 = _1690 + _1729;
  uint16_t _1731 = _1688 + _1730;
  uint16_t _1732 = _1687 + _1731;
  uint16_t _1733 = _1686 + _1732;
  uint16_t _1734 = _1685 + _1733;
  uint16_t _1735 = _1684 + _1734;
  uint16_t _1736 = _1683 + _1735;
  uint16_t _1737 = _1682 + _1736;
  uint16_t _1738 = _1680 + _1737;
  uint16_t _1739 = _1678 + _1738;
  uint16_t _1740 = _1677 + _1739;
  uint16_t _1741 = _gray_stencil_15 + _1740;
  uint16_t _1742 = _1676 + _1741;
  uint16_t _1743 = _1675 + _1742;
  uint16_t _1744 = _1674 + _1743;
  uint16_t _1745 = _1672 + _1744;
  uint16_t _1746 = _1670 + _1745;
  uint16_t _1747 = _gray_stencil_9 + _1746;
  uint16_t _1748 = _gray_stencil_8 + _1747;
  uint16_t _1749 = _1668 + _1748;
  uint16_t _1750 = _1667 + _1749;
  uint16_t _1751 = _1666 + _1750;
  uint16_t _1752 = _blur_unnormalized_stencil_3 + _1751;
  uint16_t _1753 = _gray_stencil_4 + _1752;
  return _1753;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*3) + 1), blur_unnormalized_s1_y) = (gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), blur_unnormalized_s1_y) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*3) + 1), blur_unnormalized_s1_y) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), blur_unnormalized_s1_y)*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), blur_unnormalized_s1_y) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 1))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 1))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 2))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 3))*(uint16)18) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 4))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 4))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 4))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 1), (blur_unnormalized_s1_y + 5)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 5))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 5))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 5))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 5)) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 6)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 6))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 6))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 6)) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 6))*(uint16)2))))))))))))))))))))))))))))))))))))))))))))))
static hw_uint<16> hcompute_blur_unnormalized_stencil_4(hw_uint<16>& blur_unnormalized_stencil, hw_uint<720>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_4 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _gray_stencil_49 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_50 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_51 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_52 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_53 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_54 = (uint16_t) (gray_stencil.extract<80, 95>());
  uint16_t _gray_stencil_55 = (uint16_t) (gray_stencil.extract<96, 111>());
  uint16_t _gray_stencil_56 = (uint16_t) (gray_stencil.extract<112, 127>());
  uint16_t _gray_stencil_57 = (uint16_t) (gray_stencil.extract<128, 143>());
  uint16_t _gray_stencil_58 = (uint16_t) (gray_stencil.extract<144, 159>());
  uint16_t _gray_stencil_59 = (uint16_t) (gray_stencil.extract<160, 175>());
  uint16_t _gray_stencil_60 = (uint16_t) (gray_stencil.extract<176, 191>());
  uint16_t _gray_stencil_61 = (uint16_t) (gray_stencil.extract<192, 207>());
  uint16_t _gray_stencil_62 = (uint16_t) (gray_stencil.extract<208, 223>());
  uint16_t _gray_stencil_63 = (uint16_t) (gray_stencil.extract<224, 239>());
  uint16_t _gray_stencil_64 = (uint16_t) (gray_stencil.extract<240, 255>());
  uint16_t _gray_stencil_65 = (uint16_t) (gray_stencil.extract<256, 271>());
  uint16_t _gray_stencil_66 = (uint16_t) (gray_stencil.extract<272, 287>());
  uint16_t _gray_stencil_67 = (uint16_t) (gray_stencil.extract<288, 303>());
  uint16_t _gray_stencil_68 = (uint16_t) (gray_stencil.extract<304, 319>());
  uint16_t _gray_stencil_69 = (uint16_t) (gray_stencil.extract<320, 335>());
  uint16_t _gray_stencil_70 = (uint16_t) (gray_stencil.extract<336, 351>());
  uint16_t _gray_stencil_71 = (uint16_t) (gray_stencil.extract<352, 367>());
  uint16_t _gray_stencil_72 = (uint16_t) (gray_stencil.extract<368, 383>());
  uint16_t _gray_stencil_73 = (uint16_t) (gray_stencil.extract<384, 399>());
  uint16_t _gray_stencil_74 = (uint16_t) (gray_stencil.extract<400, 415>());
  uint16_t _gray_stencil_75 = (uint16_t) (gray_stencil.extract<416, 431>());
  uint16_t _gray_stencil_76 = (uint16_t) (gray_stencil.extract<432, 447>());
  uint16_t _gray_stencil_77 = (uint16_t) (gray_stencil.extract<448, 463>());
  uint16_t _gray_stencil_78 = (uint16_t) (gray_stencil.extract<464, 479>());
  uint16_t _gray_stencil_79 = (uint16_t) (gray_stencil.extract<480, 495>());
  uint16_t _gray_stencil_80 = (uint16_t) (gray_stencil.extract<496, 511>());
  uint16_t _gray_stencil_81 = (uint16_t) (gray_stencil.extract<512, 527>());
  uint16_t _gray_stencil_82 = (uint16_t) (gray_stencil.extract<528, 543>());
  uint16_t _gray_stencil_83 = (uint16_t) (gray_stencil.extract<544, 559>());
  uint16_t _gray_stencil_84 = (uint16_t) (gray_stencil.extract<560, 575>());
  uint16_t _gray_stencil_85 = (uint16_t) (gray_stencil.extract<576, 591>());
  uint16_t _gray_stencil_86 = (uint16_t) (gray_stencil.extract<592, 607>());
  uint16_t _gray_stencil_87 = (uint16_t) (gray_stencil.extract<608, 623>());
  uint16_t _gray_stencil_88 = (uint16_t) (gray_stencil.extract<624, 639>());
  uint16_t _gray_stencil_89 = (uint16_t) (gray_stencil.extract<640, 655>());
  uint16_t _gray_stencil_90 = (uint16_t) (gray_stencil.extract<656, 671>());
  uint16_t _gray_stencil_91 = (uint16_t) (gray_stencil.extract<672, 687>());
  uint16_t _gray_stencil_92 = (uint16_t) (gray_stencil.extract<688, 703>());
  uint16_t _gray_stencil_93 = (uint16_t) (gray_stencil.extract<704, 719>());

  uint16_t _1991 = (uint16_t)(2);
  uint16_t _1992 = _gray_stencil_50 * _1991;
  uint16_t _1993 = _gray_stencil_51 * _1991;
  uint16_t _1994 = _gray_stencil_52 * _1991;
  uint16_t _1995 = (uint16_t)(3);
  uint16_t _1996 = _gray_stencil_55 * _1995;
  uint16_t _1997 = (uint16_t)(6);
  uint16_t _1998 = _gray_stencil_56 * _1997;
  uint16_t _1999 = (uint16_t)(7);
  uint16_t _2000 = _gray_stencil_57 * _1999;
  uint16_t _2001 = _gray_stencil_58 * _1997;
  uint16_t _2002 = _gray_stencil_59 * _1995;
  uint16_t _2003 = _gray_stencil_61 * _1991;
  uint16_t _2004 = _gray_stencil_62 * _1997;
  uint16_t _2005 = (uint16_t)(12);
  uint16_t _2006 = _gray_stencil_63 * _2005;
  uint16_t _2007 = (uint16_t)(15);
  uint16_t _2008 = _gray_stencil_64 * _2007;
  uint16_t _2009 = _gray_stencil_65 * _2005;
  uint16_t _2010 = _gray_stencil_66 * _1997;
  uint16_t _2011 = _gray_stencil_67 * _1991;
  uint16_t _2012 = _gray_stencil_68 * _1991;
  uint16_t _2013 = _gray_stencil_69 * _1999;
  uint16_t _2014 = _gray_stencil_70 * _2007;
  uint16_t _2015 = (uint16_t)(18);
  uint16_t _2016 = _gray_stencil_71 * _2015;
  uint16_t _2017 = _gray_stencil_72 * _2007;
  uint16_t _2018 = _gray_stencil_73 * _1999;
  uint16_t _2019 = _gray_stencil_74 * _1991;
  uint16_t _2020 = _gray_stencil_75 * _1991;
  uint16_t _2021 = _gray_stencil_76 * _1997;
  uint16_t _2022 = _gray_stencil_77 * _2005;
  uint16_t _2023 = _gray_stencil_78 * _2007;
  uint16_t _2024 = _gray_stencil_79 * _2005;
  uint16_t _2025 = _gray_stencil_80 * _1997;
  uint16_t _2026 = _gray_stencil_81 * _1991;
  uint16_t _2027 = _gray_stencil_83 * _1995;
  uint16_t _2028 = _gray_stencil_84 * _1997;
  uint16_t _2029 = _gray_stencil_85 * _1999;
  uint16_t _2030 = _gray_stencil_86 * _1997;
  uint16_t _2031 = _gray_stencil_87 * _1995;
  uint16_t _2032 = _gray_stencil_90 * _1991;
  uint16_t _2033 = _gray_stencil_91 * _1991;
  uint16_t _2034 = _gray_stencil_93 * _1991;
  uint16_t _2035 = _gray_stencil_92 + _2034;
  uint16_t _2036 = _2033 + _2035;
  uint16_t _2037 = _2032 + _2036;
  uint16_t _2038 = _gray_stencil_89 + _2037;
  uint16_t _2039 = _gray_stencil_88 + _2038;
  uint16_t _2040 = _2031 + _2039;
  uint16_t _2041 = _2030 + _2040;
  uint16_t _2042 = _2029 + _2041;
  uint16_t _2043 = _2028 + _2042;
  uint16_t _2044 = _2027 + _2043;
  uint16_t _2045 = _gray_stencil_82 + _2044;
  uint16_t _2046 = _2026 + _2045;
  uint16_t _2047 = _2025 + _2046;
  uint16_t _2048 = _2024 + _2047;
  uint16_t _2049 = _2023 + _2048;
  uint16_t _2050 = _2022 + _2049;
  uint16_t _2051 = _2021 + _2050;
  uint16_t _2052 = _2020 + _2051;
  uint16_t _2053 = _2019 + _2052;
  uint16_t _2054 = _2018 + _2053;
  uint16_t _2055 = _2017 + _2054;
  uint16_t _2056 = _2016 + _2055;
  uint16_t _2057 = _2014 + _2056;
  uint16_t _2058 = _2013 + _2057;
  uint16_t _2059 = _2012 + _2058;
  uint16_t _2060 = _2011 + _2059;
  uint16_t _2061 = _2010 + _2060;
  uint16_t _2062 = _2009 + _2061;
  uint16_t _2063 = _2008 + _2062;
  uint16_t _2064 = _2006 + _2063;
  uint16_t _2065 = _2004 + _2064;
  uint16_t _2066 = _2003 + _2065;
  uint16_t _2067 = _gray_stencil_60 + _2066;
  uint16_t _2068 = _2002 + _2067;
  uint16_t _2069 = _2001 + _2068;
  uint16_t _2070 = _2000 + _2069;
  uint16_t _2071 = _1998 + _2070;
  uint16_t _2072 = _1996 + _2071;
  uint16_t _2073 = _gray_stencil_54 + _2072;
  uint16_t _2074 = _gray_stencil_53 + _2073;
  uint16_t _2075 = _1994 + _2074;
  uint16_t _2076 = _1993 + _2075;
  uint16_t _2077 = _1992 + _2076;
  uint16_t _2078 = _blur_unnormalized_stencil_4 + _2077;
  uint16_t _2079 = _gray_stencil_49 + _2078;
  return _2079;
}

//store is: blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*3) + 2), blur_unnormalized_s1_y) = (gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), blur_unnormalized_s1_y) + (blur_unnormalized.stencil(((blur_unnormalized_s1_x_x*3) + 2), blur_unnormalized_s1_y) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), blur_unnormalized_s1_y)*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), blur_unnormalized_s1_y)*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), blur_unnormalized_s1_y) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 1))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 1))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 1))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 1))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 8), (blur_unnormalized_s1_y + 1)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 2))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 2))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 2))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 8), (blur_unnormalized_s1_y + 2))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 3))*(uint16)18) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 3))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 3))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 8), (blur_unnormalized_s1_y + 3))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 4))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 4))*(uint16)15) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 4))*(uint16)12) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 4))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 8), (blur_unnormalized_s1_y + 4))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 2), (blur_unnormalized_s1_y + 5)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 5))*(uint16)3) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 5))*(uint16)7) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 5))*(uint16)6) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 5))*(uint16)3) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 8), (blur_unnormalized_s1_y + 5)) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 3), (blur_unnormalized_s1_y + 6)) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 4), (blur_unnormalized_s1_y + 6))*(uint16)2) + ((gray.stencil(((blur_unnormalized_s1_x_x*3) + 5), (blur_unnormalized_s1_y + 6))*(uint16)2) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 7), (blur_unnormalized_s1_y + 6)) + (gray.stencil(((blur_unnormalized_s1_x_x*3) + 6), (blur_unnormalized_s1_y + 6))*(uint16)2))))))))))))))))))))))))))))))))))))))))))))))
static hw_uint<16> hcompute_blur_unnormalized_stencil_5(hw_uint<16>& blur_unnormalized_stencil, hw_uint<720>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_5 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _gray_stencil_100 = (uint16_t) (gray_stencil.extract<0, 15>());
  uint16_t _gray_stencil_101 = (uint16_t) (gray_stencil.extract<16, 31>());
  uint16_t _gray_stencil_102 = (uint16_t) (gray_stencil.extract<32, 47>());
  uint16_t _gray_stencil_103 = (uint16_t) (gray_stencil.extract<48, 63>());
  uint16_t _gray_stencil_104 = (uint16_t) (gray_stencil.extract<64, 79>());
  uint16_t _gray_stencil_105 = (uint16_t) (gray_stencil.extract<80, 95>());
  uint16_t _gray_stencil_106 = (uint16_t) (gray_stencil.extract<96, 111>());
  uint16_t _gray_stencil_107 = (uint16_t) (gray_stencil.extract<112, 127>());
  uint16_t _gray_stencil_108 = (uint16_t) (gray_stencil.extract<128, 143>());
  uint16_t _gray_stencil_109 = (uint16_t) (gray_stencil.extract<144, 159>());
  uint16_t _gray_stencil_110 = (uint16_t) (gray_stencil.extract<160, 175>());
  uint16_t _gray_stencil_111 = (uint16_t) (gray_stencil.extract<176, 191>());
  uint16_t _gray_stencil_112 = (uint16_t) (gray_stencil.extract<192, 207>());
  uint16_t _gray_stencil_113 = (uint16_t) (gray_stencil.extract<208, 223>());
  uint16_t _gray_stencil_114 = (uint16_t) (gray_stencil.extract<224, 239>());
  uint16_t _gray_stencil_115 = (uint16_t) (gray_stencil.extract<240, 255>());
  uint16_t _gray_stencil_116 = (uint16_t) (gray_stencil.extract<256, 271>());
  uint16_t _gray_stencil_117 = (uint16_t) (gray_stencil.extract<272, 287>());
  uint16_t _gray_stencil_118 = (uint16_t) (gray_stencil.extract<288, 303>());
  uint16_t _gray_stencil_119 = (uint16_t) (gray_stencil.extract<304, 319>());
  uint16_t _gray_stencil_120 = (uint16_t) (gray_stencil.extract<320, 335>());
  uint16_t _gray_stencil_121 = (uint16_t) (gray_stencil.extract<336, 351>());
  uint16_t _gray_stencil_122 = (uint16_t) (gray_stencil.extract<352, 367>());
  uint16_t _gray_stencil_123 = (uint16_t) (gray_stencil.extract<368, 383>());
  uint16_t _gray_stencil_124 = (uint16_t) (gray_stencil.extract<384, 399>());
  uint16_t _gray_stencil_125 = (uint16_t) (gray_stencil.extract<400, 415>());
  uint16_t _gray_stencil_126 = (uint16_t) (gray_stencil.extract<416, 431>());
  uint16_t _gray_stencil_127 = (uint16_t) (gray_stencil.extract<432, 447>());
  uint16_t _gray_stencil_128 = (uint16_t) (gray_stencil.extract<448, 463>());
  uint16_t _gray_stencil_129 = (uint16_t) (gray_stencil.extract<464, 479>());
  uint16_t _gray_stencil_130 = (uint16_t) (gray_stencil.extract<480, 495>());
  uint16_t _gray_stencil_131 = (uint16_t) (gray_stencil.extract<496, 511>());
  uint16_t _gray_stencil_132 = (uint16_t) (gray_stencil.extract<512, 527>());
  uint16_t _gray_stencil_133 = (uint16_t) (gray_stencil.extract<528, 543>());
  uint16_t _gray_stencil_134 = (uint16_t) (gray_stencil.extract<544, 559>());
  uint16_t _gray_stencil_135 = (uint16_t) (gray_stencil.extract<560, 575>());
  uint16_t _gray_stencil_136 = (uint16_t) (gray_stencil.extract<576, 591>());
  uint16_t _gray_stencil_137 = (uint16_t) (gray_stencil.extract<592, 607>());
  uint16_t _gray_stencil_138 = (uint16_t) (gray_stencil.extract<608, 623>());
  uint16_t _gray_stencil_94 = (uint16_t) (gray_stencil.extract<624, 639>());
  uint16_t _gray_stencil_95 = (uint16_t) (gray_stencil.extract<640, 655>());
  uint16_t _gray_stencil_96 = (uint16_t) (gray_stencil.extract<656, 671>());
  uint16_t _gray_stencil_97 = (uint16_t) (gray_stencil.extract<672, 687>());
  uint16_t _gray_stencil_98 = (uint16_t) (gray_stencil.extract<688, 703>());
  uint16_t _gray_stencil_99 = (uint16_t) (gray_stencil.extract<704, 719>());

  uint16_t _2318 = (uint16_t)(2);
  uint16_t _2319 = _gray_stencil_95 * _2318;
  uint16_t _2320 = _gray_stencil_96 * _2318;
  uint16_t _2321 = _gray_stencil_97 * _2318;
  uint16_t _2322 = (uint16_t)(3);
  uint16_t _2323 = _gray_stencil_100 * _2322;
  uint16_t _2324 = (uint16_t)(6);
  uint16_t _2325 = _gray_stencil_101 * _2324;
  uint16_t _2326 = (uint16_t)(7);
  uint16_t _2327 = _gray_stencil_102 * _2326;
  uint16_t _2328 = _gray_stencil_103 * _2324;
  uint16_t _2329 = _gray_stencil_104 * _2322;
  uint16_t _2330 = _gray_stencil_106 * _2318;
  uint16_t _2331 = _gray_stencil_107 * _2324;
  uint16_t _2332 = (uint16_t)(12);
  uint16_t _2333 = _gray_stencil_108 * _2332;
  uint16_t _2334 = (uint16_t)(15);
  uint16_t _2335 = _gray_stencil_109 * _2334;
  uint16_t _2336 = _gray_stencil_110 * _2332;
  uint16_t _2337 = _gray_stencil_111 * _2324;
  uint16_t _2338 = _gray_stencil_112 * _2318;
  uint16_t _2339 = _gray_stencil_113 * _2318;
  uint16_t _2340 = _gray_stencil_114 * _2326;
  uint16_t _2341 = _gray_stencil_115 * _2334;
  uint16_t _2342 = (uint16_t)(18);
  uint16_t _2343 = _gray_stencil_116 * _2342;
  uint16_t _2344 = _gray_stencil_117 * _2334;
  uint16_t _2345 = _gray_stencil_118 * _2326;
  uint16_t _2346 = _gray_stencil_119 * _2318;
  uint16_t _2347 = _gray_stencil_120 * _2318;
  uint16_t _2348 = _gray_stencil_121 * _2324;
  uint16_t _2349 = _gray_stencil_122 * _2332;
  uint16_t _2350 = _gray_stencil_123 * _2334;
  uint16_t _2351 = _gray_stencil_124 * _2332;
  uint16_t _2352 = _gray_stencil_125 * _2324;
  uint16_t _2353 = _gray_stencil_126 * _2318;
  uint16_t _2354 = _gray_stencil_128 * _2322;
  uint16_t _2355 = _gray_stencil_129 * _2324;
  uint16_t _2356 = _gray_stencil_130 * _2326;
  uint16_t _2357 = _gray_stencil_131 * _2324;
  uint16_t _2358 = _gray_stencil_132 * _2322;
  uint16_t _2359 = _gray_stencil_135 * _2318;
  uint16_t _2360 = _gray_stencil_136 * _2318;
  uint16_t _2361 = _gray_stencil_138 * _2318;
  uint16_t _2362 = _gray_stencil_137 + _2361;
  uint16_t _2363 = _2360 + _2362;
  uint16_t _2364 = _2359 + _2363;
  uint16_t _2365 = _gray_stencil_134 + _2364;
  uint16_t _2366 = _gray_stencil_133 + _2365;
  uint16_t _2367 = _2358 + _2366;
  uint16_t _2368 = _2357 + _2367;
  uint16_t _2369 = _2356 + _2368;
  uint16_t _2370 = _2355 + _2369;
  uint16_t _2371 = _2354 + _2370;
  uint16_t _2372 = _gray_stencil_127 + _2371;
  uint16_t _2373 = _2353 + _2372;
  uint16_t _2374 = _2352 + _2373;
  uint16_t _2375 = _2351 + _2374;
  uint16_t _2376 = _2350 + _2375;
  uint16_t _2377 = _2349 + _2376;
  uint16_t _2378 = _2348 + _2377;
  uint16_t _2379 = _2347 + _2378;
  uint16_t _2380 = _2346 + _2379;
  uint16_t _2381 = _2345 + _2380;
  uint16_t _2382 = _2344 + _2381;
  uint16_t _2383 = _2343 + _2382;
  uint16_t _2384 = _2341 + _2383;
  uint16_t _2385 = _2340 + _2384;
  uint16_t _2386 = _2339 + _2385;
  uint16_t _2387 = _2338 + _2386;
  uint16_t _2388 = _2337 + _2387;
  uint16_t _2389 = _2336 + _2388;
  uint16_t _2390 = _2335 + _2389;
  uint16_t _2391 = _2333 + _2390;
  uint16_t _2392 = _2331 + _2391;
  uint16_t _2393 = _2330 + _2392;
  uint16_t _2394 = _gray_stencil_105 + _2393;
  uint16_t _2395 = _2329 + _2394;
  uint16_t _2396 = _2328 + _2395;
  uint16_t _2397 = _2327 + _2396;
  uint16_t _2398 = _2325 + _2397;
  uint16_t _2399 = _2323 + _2398;
  uint16_t _2400 = _gray_stencil_99 + _2399;
  uint16_t _2401 = _gray_stencil_98 + _2400;
  uint16_t _2402 = _2321 + _2401;
  uint16_t _2403 = _2320 + _2402;
  uint16_t _2404 = _2319 + _2403;
  uint16_t _2405 = _blur_unnormalized_stencil_5 + _2404;
  uint16_t _2406 = _gray_stencil_94 + _2405;
  return _2406;
}

//store is: sharpen.stencil((sharpen_s0_x_x*3), sharpen_s0_y) = uint16(max(min(((int16(gray.stencil(((sharpen_s0_x_x*3) + 3), (sharpen_s0_y + 3)))*(int16)2) - int16(uint8((blur_unnormalized.stencil((sharpen_s0_x_x*3), sharpen_s0_y)/(uint16)256)))), (int16)255), (int16)0))
static hw_uint<16> hcompute_sharpen_stencil(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_6 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _gray_stencil_139 = (uint16_t) (gray_stencil.extract<0, 15>());

  int16_t _2645 = (int16_t)(_gray_stencil_139);
  int16_t _2646 = (int16_t)(2);
  int16_t _2647 = _2645 * _2646;
  uint16_t _2648 = (uint16_t)(8);
  uint16_t _2649 = _blur_unnormalized_stencil_6 >> _2648;
  uint8_t _2650 = (uint8_t)(_2649);
  int16_t _2651 = (int16_t)(_2650);
  int16_t _2652 = _2647 - _2651;
  int16_t _2653 = (int16_t)(255);
  int16_t _2654 = min(_2652, _2653);
  int16_t _2655 = (int16_t)(0);
  int16_t _2656 = max(_2654, _2655);
  uint16_t _2657 = (uint16_t)(_2656);
  return _2657;
}

//store is: sharpen.stencil(((sharpen_s0_x_x*3) + 1), sharpen_s0_y) = uint16(max(min(((int16(gray.stencil(((sharpen_s0_x_x*3) + 4), (sharpen_s0_y + 3)))*(int16)2) - int16(uint8((blur_unnormalized.stencil(((sharpen_s0_x_x*3) + 1), sharpen_s0_y)/(uint16)256)))), (int16)255), (int16)0))
static hw_uint<16> hcompute_sharpen_stencil_1(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_7 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _gray_stencil_140 = (uint16_t) (gray_stencil.extract<0, 15>());

  int16_t _2689 = (int16_t)(_gray_stencil_140);
  int16_t _2690 = (int16_t)(2);
  int16_t _2691 = _2689 * _2690;
  uint16_t _2692 = (uint16_t)(8);
  uint16_t _2693 = _blur_unnormalized_stencil_7 >> _2692;
  uint8_t _2694 = (uint8_t)(_2693);
  int16_t _2695 = (int16_t)(_2694);
  int16_t _2696 = _2691 - _2695;
  int16_t _2697 = (int16_t)(255);
  int16_t _2698 = min(_2696, _2697);
  int16_t _2699 = (int16_t)(0);
  int16_t _2700 = max(_2698, _2699);
  uint16_t _2701 = (uint16_t)(_2700);
  return _2701;
}

//store is: sharpen.stencil(((sharpen_s0_x_x*3) + 2), sharpen_s0_y) = uint16(max(min(((int16(gray.stencil(((sharpen_s0_x_x*3) + 5), (sharpen_s0_y + 3)))*(int16)2) - int16(uint8((blur_unnormalized.stencil(((sharpen_s0_x_x*3) + 2), sharpen_s0_y)/(uint16)256)))), (int16)255), (int16)0))
static hw_uint<16> hcompute_sharpen_stencil_2(hw_uint<16>& blur_unnormalized_stencil, hw_uint<16>& gray_stencil) {
  uint16_t _blur_unnormalized_stencil_8 = (uint16_t) (blur_unnormalized_stencil.extract<0, 15>());

  uint16_t _gray_stencil_141 = (uint16_t) (gray_stencil.extract<0, 15>());

  int16_t _2734 = (int16_t)(_gray_stencil_141);
  int16_t _2735 = (int16_t)(2);
  int16_t _2736 = _2734 * _2735;
  uint16_t _2737 = (uint16_t)(8);
  uint16_t _2738 = _blur_unnormalized_stencil_8 >> _2737;
  uint8_t _2739 = (uint8_t)(_2738);
  int16_t _2740 = (int16_t)(_2739);
  int16_t _2741 = _2736 - _2740;
  int16_t _2742 = (int16_t)(255);
  int16_t _2743 = min(_2741, _2742);
  int16_t _2744 = (int16_t)(0);
  int16_t _2745 = max(_2743, _2744);
  uint16_t _2746 = (uint16_t)(_2745);
  return _2746;
}

//store is: ratio.stencil((ratio_s0_x_x*3), ratio_s0_y) = (sharpen.stencil((ratio_s0_x_x*3), ratio_s0_y)*reciprocal.stencil((ratio_s0_x_x*3), ratio_s0_y))
static hw_uint<16> hcompute_ratio_stencil(hw_uint<16>& reciprocal_stencil, hw_uint<16>& sharpen_stencil) {
  uint16_t _reciprocal_stencil_1 = (uint16_t) (reciprocal_stencil.extract<0, 15>());

  uint16_t _sharpen_stencil_1 = (uint16_t) (sharpen_stencil.extract<0, 15>());

  uint16_t _2779 = _sharpen_stencil_1 * _reciprocal_stencil_1;
  return _2779;
}

//store is: ratio.stencil(((ratio_s0_x_x*3) + 1), ratio_s0_y) = (sharpen.stencil(((ratio_s0_x_x*3) + 1), ratio_s0_y)*reciprocal.stencil(((ratio_s0_x_x*3) + 1), ratio_s0_y))
static hw_uint<16> hcompute_ratio_stencil_1(hw_uint<16>& reciprocal_stencil, hw_uint<16>& sharpen_stencil) {
  uint16_t _reciprocal_stencil_2 = (uint16_t) (reciprocal_stencil.extract<0, 15>());

  uint16_t _sharpen_stencil_2 = (uint16_t) (sharpen_stencil.extract<0, 15>());

  uint16_t _2785 = _sharpen_stencil_2 * _reciprocal_stencil_2;
  return _2785;
}

//store is: ratio.stencil(((ratio_s0_x_x*3) + 2), ratio_s0_y) = (sharpen.stencil(((ratio_s0_x_x*3) + 2), ratio_s0_y)*reciprocal.stencil(((ratio_s0_x_x*3) + 2), ratio_s0_y))
static hw_uint<16> hcompute_ratio_stencil_2(hw_uint<16>& reciprocal_stencil, hw_uint<16>& sharpen_stencil) {
  uint16_t _reciprocal_stencil_3 = (uint16_t) (reciprocal_stencil.extract<0, 15>());

  uint16_t _sharpen_stencil_3 = (uint16_t) (sharpen_stencil.extract<0, 15>());

  uint16_t _2792 = _sharpen_stencil_3 * _reciprocal_stencil_3;
  return _2792;
}

//store is: hw_output.glb.stencil(0, (hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi) = int16(((int32(ratio.stencil((hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_10 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_1 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2799 = (int32_t)(_ratio_stencil_1);
  int32_t _2800 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_10);
  int32_t _2801 = _2799 * _2800;
  int32_t _2802 = _2801 >> 8;
  int16_t _2803 = (int16_t)(_2802);
  return _2803;
}

//store is: hw_output.glb.stencil(1, (hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi) = int16(((int32(ratio.stencil((hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_1(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_11 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_2 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2817 = (int32_t)(_ratio_stencil_2);
  int32_t _2818 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_11);
  int32_t _2819 = _2817 * _2818;
  int32_t _2820 = _2819 >> 8;
  int16_t _2821 = (int16_t)(_2820);
  return _2821;
}

//store is: hw_output.glb.stencil(2, (hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi) = int16(((int32(ratio.stencil((hw_output_s0_x_xi_xi*3), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_output_s0_x_xi_xi*3) + 3), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_2(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_12 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_3 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2835 = (int32_t)(_ratio_stencil_3);
  int32_t _2836 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_12);
  int32_t _2837 = _2835 * _2836;
  int32_t _2838 = _2837 >> 8;
  int16_t _2839 = (int16_t)(_2838);
  return _2839;
}

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_output_s0_x_xi_xi*3) + 4), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_3(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_13 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_4 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2853 = (int32_t)(_ratio_stencil_4);
  int32_t _2854 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_13);
  int32_t _2855 = _2853 * _2854;
  int32_t _2856 = _2855 >> 8;
  int16_t _2857 = (int16_t)(_2856);
  return _2857;
}

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_output_s0_x_xi_xi*3) + 4), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_4(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_14 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_5 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2872 = (int32_t)(_ratio_stencil_5);
  int32_t _2873 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_14);
  int32_t _2874 = _2872 * _2873;
  int32_t _2875 = _2874 >> 8;
  int16_t _2876 = (int16_t)(_2875);
  return _2876;
}

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*3) + 1), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_output_s0_x_xi_xi*3) + 4), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_5(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_15 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_6 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2891 = (int32_t)(_ratio_stencil_6);
  int32_t _2892 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_15);
  int32_t _2893 = _2891 * _2892;
  int32_t _2894 = _2893 >> 8;
  int16_t _2895 = (int16_t)(_2894);
  return _2895;
}

//store is: hw_output.glb.stencil(0, ((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(0, ((hw_output_s0_x_xi_xi*3) + 5), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_6(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_16 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_7 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2910 = (int32_t)(_ratio_stencil_7);
  int32_t _2911 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_16);
  int32_t _2912 = _2910 * _2911;
  int32_t _2913 = _2912 >> 8;
  int16_t _2914 = (int16_t)(_2913);
  return _2914;
}

//store is: hw_output.glb.stencil(1, ((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(1, ((hw_output_s0_x_xi_xi*3) + 5), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_7(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_17 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_8 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2929 = (int32_t)(_ratio_stencil_8);
  int32_t _2930 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_17);
  int32_t _2931 = _2929 * _2930;
  int32_t _2932 = _2931 >> 8;
  int16_t _2933 = (int16_t)(_2932);
  return _2933;
}

//store is: hw_output.glb.stencil(2, ((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi) = int16(((int32(ratio.stencil(((hw_output_s0_x_xi_xi*3) + 2), hw_output_s0_y_yi))*int32(hw_input_global_wrapper_global_wrapper.stencil(2, ((hw_output_s0_x_xi_xi*3) + 5), (hw_output_s0_y_yi + 3))))/256))
static hw_uint<16> hcompute_hw_output_glb_stencil_8(hw_uint<16>& hw_input_global_wrapper_global_wrapper_stencil, hw_uint<16>& ratio_stencil) {
  uint16_t _hw_input_global_wrapper_global_wrapper_stencil_18 = (uint16_t) (hw_input_global_wrapper_global_wrapper_stencil.extract<0, 15>());

  uint16_t _ratio_stencil_9 = (uint16_t) (ratio_stencil.extract<0, 15>());

  int32_t _2948 = (int32_t)(_ratio_stencil_9);
  int32_t _2949 = (int32_t)(_hw_input_global_wrapper_global_wrapper_stencil_18);
  int32_t _2950 = _2948 * _2949;
  int32_t _2951 = _2950 >> 8;
  int16_t _2952 = (int16_t)(_2951);
  return _2952;
}

//store is: hw_output_global_wrapper.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(0, (hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_1 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_1;
}

//store is: hw_output_global_wrapper.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(1, (hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_1(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_2 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_2;
}

//store is: hw_output_global_wrapper.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(2, (hw_output_global_wrapper_s0_x_xi_xi*3), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_2(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_3 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_3;
}

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_3(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_4 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_4;
}

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_4(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_5 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_5;
}

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 1), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_5(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_6 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_6;
}

//store is: hw_output_global_wrapper.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(0, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_6(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_7 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_7;
}

//store is: hw_output_global_wrapper.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(1, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_7(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_8 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_8;
}

//store is: hw_output_global_wrapper.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi) = hw_output.glb.stencil(2, ((hw_output_global_wrapper_s0_x_xi_xi*3) + 2), hw_output_global_wrapper_s0_y_yi)
static hw_uint<16> hcompute_hw_output_global_wrapper_stencil_8(hw_uint<16>& hw_output_glb_stencil) {
  int16_t _hw_output_glb_stencil_9 = (int16_t) (hw_output_glb_stencil.extract<0, 15>());

  return _hw_output_glb_stencil_9;
}

