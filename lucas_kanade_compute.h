#pragma once
#include "hw_classes.h"
#include "clockwork_standard_compute_units.h"


//store is: nu.stencil(0, 0, nu_s0_w) = 0.000000f
hw_uint<32> hcompute_nu_stencil() {
  float _858 = float_from_bits(0 /* 0 */);
  return _858;
}

//store is: ft.stencil(((ft_s0_x + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil() {
  float _861 = float_from_bits(0 /* 0 */);
  return _861;
}

//store is: ft.stencil(((ft_s1_x + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))) - float32(uint16(input0_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))) - float32(uint16(input0_copy.stencil(((ft_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_1(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_1 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_1 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_2 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_1 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_2 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _866 = (uint16_t)(_input1_copy_stencil_1);
  float _867 = (float)(_866);
  uint16_t _868 = (uint16_t)(_input0_copy_stencil_1);
  float _869 = (float)(_868);
  float _870 = _867 - _869;
  float _871 = float_from_bits(981500033 /* 0.000980392 */);
  float _872 = _870 * _871;
  uint16_t _873 = (uint16_t)(_input1_copy_stencil_2);
  float _874 = (float)(_873);
  uint16_t _875 = (uint16_t)(_input0_copy_stencil_2);
  float _876 = (float)(_875);
  float _877 = _874 - _876;
  float _878 = _877 * _871;
  float _879 = _ft_stencil_1 + _878;
  float _880 = _878 + _879;
  float _881 = _872 + _880;
  float _882 = _872 + _881;
  return _882;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil() {
  float _938 = float_from_bits(0 /* 0 */);
  return _938;
}

//store is: fx$1.stencil(((fx_1_s0_x + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil() {
  float _941 = float_from_bits(0 /* 0 */);
  return _941;
}

//store is: fx$1.stencil(((fx_1_s1_x + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi) + 1))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x + hw_output_s0_x_xi), (((nu_s1_rwin_x_rwin_x*8)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_1(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_1 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_3 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_4 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _946 = (uint16_t)(_input0_copy_stencil_3);
  float _947 = (float)(_946);
  float _948 = float_from_bits(981500033 /* 0.000980392 */);
  float _949 = _947 * _948;
  uint16_t _950 = (uint16_t)(_input0_copy_stencil_4);
  float _951 = (float)(_950);
  float _952 = _951 * _948;
  float _953 = _fx_1_stencil_1 - _952;
  float _954 = _953 - _952;
  float _955 = _949 + _954;
  float _956 = _949 + _955;
  return _956;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil(((nu_s1_rwin_x_rwin_x*8) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil(((nu_s1_rwin_x_rwin_x*8) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_1(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_1 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_1 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_2 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_3 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_4 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_2 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_1 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_1 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_2 = (float) inv_stencil.extract<32, 63>();

  float _998 = _AtA_stencil_1 * _AtA_stencil_2;
  float _999 = _AtA_stencil_3 * _AtA_stencil_4;
  float _1000 = _998 - _999;
  float _1001 = _inv_stencil_1 / _1000;
  float _1002 = _fx_1_stencil_2 * _1001;
  float _1003 = _inv_stencil_2 * _fx_stencil_1;
  float _1004 = _Apinv_stencil_1 + _1003;
  float _1005 = _1002 + _1004;
  return _1005;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil(((nu_s1_rwin_x_rwin_x*8) % 31), 0))
hw_uint<32> hcompute_nu_stencil_1(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_2 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_2 = (float) ft_stencil.extract<0, 31>();

  float _1042 = _Apinv_stencil_2 * _ft_stencil_2;
  return _1042;
}

//store is: ft.stencil(((ft_s0_x_1 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_2() {
  float _1058 = float_from_bits(0 /* 0 */);
  return _1058;
}

//store is: ft.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x_1 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_3(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_3 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_5 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_6 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_3 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_4 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _1063 = (uint16_t)(_input1_copy_stencil_3);
  float _1064 = (float)(_1063);
  uint16_t _1065 = (uint16_t)(_input0_copy_stencil_5);
  float _1066 = (float)(_1065);
  float _1067 = _1064 - _1066;
  float _1068 = float_from_bits(981500033 /* 0.000980392 */);
  float _1069 = _1067 * _1068;
  uint16_t _1070 = (uint16_t)(_input1_copy_stencil_4);
  float _1071 = (float)(_1070);
  uint16_t _1072 = (uint16_t)(_input0_copy_stencil_6);
  float _1073 = (float)(_1072);
  float _1074 = _1071 - _1073;
  float _1075 = _1074 * _1068;
  float _1076 = _ft_stencil_3 + _1075;
  float _1077 = _1075 + _1076;
  float _1078 = _1069 + _1077;
  float _1079 = _1069 + _1078;
  return _1079;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_2() {
  float _1145 = float_from_bits(0 /* 0 */);
  return _1145;
}

//store is: fx$1.stencil(((fx_1_s0_x_1 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_2() {
  float _1148 = float_from_bits(0 /* 0 */);
  return _1148;
}

//store is: fx$1.stencil(((fx_1_s1_x_1 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_1 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 32)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_1 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_1 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 1)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_3(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_3 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_7 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_8 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _1153 = (uint16_t)(_input0_copy_stencil_7);
  float _1154 = (float)(_1153);
  float _1155 = float_from_bits(981500033 /* 0.000980392 */);
  float _1156 = _1154 * _1155;
  uint16_t _1157 = (uint16_t)(_input0_copy_stencil_8);
  float _1158 = (float)(_1157);
  float _1159 = _1158 * _1155;
  float _1160 = _fx_1_stencil_3 - _1159;
  float _1161 = _1160 - _1159;
  float _1162 = _1156 + _1161;
  float _1163 = _1156 + _1162;
  return _1163;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 1) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 1) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_3(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_3 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_5 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_6 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_7 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_8 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_4 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_2 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_3 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_4 = (float) inv_stencil.extract<32, 63>();

  float _1215 = _AtA_stencil_5 * _AtA_stencil_6;
  float _1216 = _AtA_stencil_7 * _AtA_stencil_8;
  float _1217 = _1215 - _1216;
  float _1218 = _inv_stencil_3 / _1217;
  float _1219 = _fx_1_stencil_4 * _1218;
  float _1220 = _inv_stencil_4 * _fx_stencil_2;
  float _1221 = _Apinv_stencil_3 + _1220;
  float _1222 = _1219 + _1221;
  return _1222;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 1) % 31), 0))
hw_uint<32> hcompute_nu_stencil_2(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_4 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_4 = (float) ft_stencil.extract<0, 31>();

  float _1260 = _Apinv_stencil_4 * _ft_stencil_4;
  return _1260;
}

//store is: ft.stencil(((ft_s0_x_2 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_4() {
  float _1277 = float_from_bits(0 /* 0 */);
  return _1277;
}

//store is: ft.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x_2 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_5(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_5 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_10 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_9 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_5 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_6 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _1282 = (uint16_t)(_input1_copy_stencil_5);
  float _1283 = (float)(_1282);
  uint16_t _1284 = (uint16_t)(_input0_copy_stencil_9);
  float _1285 = (float)(_1284);
  float _1286 = _1283 - _1285;
  float _1287 = float_from_bits(981500033 /* 0.000980392 */);
  float _1288 = _1286 * _1287;
  uint16_t _1289 = (uint16_t)(_input1_copy_stencil_6);
  float _1290 = (float)(_1289);
  uint16_t _1291 = (uint16_t)(_input0_copy_stencil_10);
  float _1292 = (float)(_1291);
  float _1293 = _1290 - _1292;
  float _1294 = _1293 * _1287;
  float _1295 = _ft_stencil_5 + _1294;
  float _1296 = _1294 + _1295;
  float _1297 = _1288 + _1296;
  float _1298 = _1288 + _1297;
  return _1298;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_4() {
  float _1364 = float_from_bits(0 /* 0 */);
  return _1364;
}

//store is: fx$1.stencil(((fx_1_s0_x_2 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_4() {
  float _1367 = float_from_bits(0 /* 0 */);
  return _1367;
}

//store is: fx$1.stencil(((fx_1_s1_x_2 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_2 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 33)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_2 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_2 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 2)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_5(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_5 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_11 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_12 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _1372 = (uint16_t)(_input0_copy_stencil_11);
  float _1373 = (float)(_1372);
  float _1374 = float_from_bits(981500033 /* 0.000980392 */);
  float _1375 = _1373 * _1374;
  uint16_t _1376 = (uint16_t)(_input0_copy_stencil_12);
  float _1377 = (float)(_1376);
  float _1378 = _1377 * _1374;
  float _1379 = _fx_1_stencil_5 - _1378;
  float _1380 = _1379 - _1378;
  float _1381 = _1375 + _1380;
  float _1382 = _1375 + _1381;
  return _1382;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 2) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 2) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_5(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_5 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_10 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_11 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_12 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_9 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_6 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_3 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_5 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_6 = (float) inv_stencil.extract<32, 63>();

  float _1434 = _AtA_stencil_9 * _AtA_stencil_10;
  float _1435 = _AtA_stencil_11 * _AtA_stencil_12;
  float _1436 = _1434 - _1435;
  float _1437 = _inv_stencil_5 / _1436;
  float _1438 = _fx_1_stencil_6 * _1437;
  float _1439 = _inv_stencil_6 * _fx_stencil_3;
  float _1440 = _Apinv_stencil_5 + _1439;
  float _1441 = _1438 + _1440;
  return _1441;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 2) % 31), 0))
hw_uint<32> hcompute_nu_stencil_3(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_6 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_6 = (float) ft_stencil.extract<0, 31>();

  float _1479 = _Apinv_stencil_6 * _ft_stencil_6;
  return _1479;
}

//store is: ft.stencil(((ft_s0_x_3 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_6() {
  float _1496 = float_from_bits(0 /* 0 */);
  return _1496;
}

//store is: ft.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x_3 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_7(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_7 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_13 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_14 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_7 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_8 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _1501 = (uint16_t)(_input1_copy_stencil_7);
  float _1502 = (float)(_1501);
  uint16_t _1503 = (uint16_t)(_input0_copy_stencil_13);
  float _1504 = (float)(_1503);
  float _1505 = _1502 - _1504;
  float _1506 = float_from_bits(981500033 /* 0.000980392 */);
  float _1507 = _1505 * _1506;
  uint16_t _1508 = (uint16_t)(_input1_copy_stencil_8);
  float _1509 = (float)(_1508);
  uint16_t _1510 = (uint16_t)(_input0_copy_stencil_14);
  float _1511 = (float)(_1510);
  float _1512 = _1509 - _1511;
  float _1513 = _1512 * _1506;
  float _1514 = _ft_stencil_7 + _1513;
  float _1515 = _1513 + _1514;
  float _1516 = _1507 + _1515;
  float _1517 = _1507 + _1516;
  return _1517;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_6() {
  float _1583 = float_from_bits(0 /* 0 */);
  return _1583;
}

//store is: fx$1.stencil(((fx_1_s0_x_3 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_6() {
  float _1586 = float_from_bits(0 /* 0 */);
  return _1586;
}

//store is: fx$1.stencil(((fx_1_s1_x_3 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_3 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 34)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_3 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_3 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 3)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_7(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_7 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_15 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_16 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _1591 = (uint16_t)(_input0_copy_stencil_15);
  float _1592 = (float)(_1591);
  float _1593 = float_from_bits(981500033 /* 0.000980392 */);
  float _1594 = _1592 * _1593;
  uint16_t _1595 = (uint16_t)(_input0_copy_stencil_16);
  float _1596 = (float)(_1595);
  float _1597 = _1596 * _1593;
  float _1598 = _fx_1_stencil_7 - _1597;
  float _1599 = _1598 - _1597;
  float _1600 = _1594 + _1599;
  float _1601 = _1594 + _1600;
  return _1601;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 3) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 3) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_7(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_7 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_13 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_14 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_15 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_16 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_8 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_4 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_7 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_8 = (float) inv_stencil.extract<32, 63>();

  float _1653 = _AtA_stencil_13 * _AtA_stencil_14;
  float _1654 = _AtA_stencil_15 * _AtA_stencil_16;
  float _1655 = _1653 - _1654;
  float _1656 = _inv_stencil_7 / _1655;
  float _1657 = _fx_1_stencil_8 * _1656;
  float _1658 = _inv_stencil_8 * _fx_stencil_4;
  float _1659 = _Apinv_stencil_7 + _1658;
  float _1660 = _1657 + _1659;
  return _1660;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 3) % 31), 0))
hw_uint<32> hcompute_nu_stencil_4(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_8 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_8 = (float) ft_stencil.extract<0, 31>();

  float _1698 = _Apinv_stencil_8 * _ft_stencil_8;
  return _1698;
}

//store is: ft.stencil(((ft_s0_x_4 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_8() {
  float _1715 = float_from_bits(0 /* 0 */);
  return _1715;
}

//store is: ft.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x_4 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_9(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_9 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_17 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_18 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_10 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_9 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _1720 = (uint16_t)(_input1_copy_stencil_9);
  float _1721 = (float)(_1720);
  uint16_t _1722 = (uint16_t)(_input0_copy_stencil_17);
  float _1723 = (float)(_1722);
  float _1724 = _1721 - _1723;
  float _1725 = float_from_bits(981500033 /* 0.000980392 */);
  float _1726 = _1724 * _1725;
  uint16_t _1727 = (uint16_t)(_input1_copy_stencil_10);
  float _1728 = (float)(_1727);
  uint16_t _1729 = (uint16_t)(_input0_copy_stencil_18);
  float _1730 = (float)(_1729);
  float _1731 = _1728 - _1730;
  float _1732 = _1731 * _1725;
  float _1733 = _ft_stencil_9 + _1732;
  float _1734 = _1732 + _1733;
  float _1735 = _1726 + _1734;
  float _1736 = _1726 + _1735;
  return _1736;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_8() {
  float _1802 = float_from_bits(0 /* 0 */);
  return _1802;
}

//store is: fx$1.stencil(((fx_1_s0_x_4 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_8() {
  float _1805 = float_from_bits(0 /* 0 */);
  return _1805;
}

//store is: fx$1.stencil(((fx_1_s1_x_4 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_4 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 35)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_4 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_4 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 4)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_9(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_9 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_19 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_20 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _1810 = (uint16_t)(_input0_copy_stencil_19);
  float _1811 = (float)(_1810);
  float _1812 = float_from_bits(981500033 /* 0.000980392 */);
  float _1813 = _1811 * _1812;
  uint16_t _1814 = (uint16_t)(_input0_copy_stencil_20);
  float _1815 = (float)(_1814);
  float _1816 = _1815 * _1812;
  float _1817 = _fx_1_stencil_9 - _1816;
  float _1818 = _1817 - _1816;
  float _1819 = _1813 + _1818;
  float _1820 = _1813 + _1819;
  return _1820;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 4) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 4) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_9(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_9 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_17 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_18 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_19 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_20 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_10 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_5 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_10 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_9 = (float) inv_stencil.extract<32, 63>();

  float _1872 = _AtA_stencil_17 * _AtA_stencil_18;
  float _1873 = _AtA_stencil_19 * _AtA_stencil_20;
  float _1874 = _1872 - _1873;
  float _1875 = _inv_stencil_9 / _1874;
  float _1876 = _fx_1_stencil_10 * _1875;
  float _1877 = _inv_stencil_10 * _fx_stencil_5;
  float _1878 = _Apinv_stencil_9 + _1877;
  float _1879 = _1876 + _1878;
  return _1879;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 4) % 31), 0))
hw_uint<32> hcompute_nu_stencil_5(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_10 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_10 = (float) ft_stencil.extract<0, 31>();

  float _1917 = _Apinv_stencil_10 * _ft_stencil_10;
  return _1917;
}

//store is: ft.stencil(((ft_s0_x_5 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_10() {
  float _1934 = float_from_bits(0 /* 0 */);
  return _1934;
}

//store is: ft.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x_5 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_11(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_11 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_21 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_22 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_11 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_12 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _1939 = (uint16_t)(_input1_copy_stencil_11);
  float _1940 = (float)(_1939);
  uint16_t _1941 = (uint16_t)(_input0_copy_stencil_21);
  float _1942 = (float)(_1941);
  float _1943 = _1940 - _1942;
  float _1944 = float_from_bits(981500033 /* 0.000980392 */);
  float _1945 = _1943 * _1944;
  uint16_t _1946 = (uint16_t)(_input1_copy_stencil_12);
  float _1947 = (float)(_1946);
  uint16_t _1948 = (uint16_t)(_input0_copy_stencil_22);
  float _1949 = (float)(_1948);
  float _1950 = _1947 - _1949;
  float _1951 = _1950 * _1944;
  float _1952 = _ft_stencil_11 + _1951;
  float _1953 = _1951 + _1952;
  float _1954 = _1945 + _1953;
  float _1955 = _1945 + _1954;
  return _1955;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_10() {
  float _2021 = float_from_bits(0 /* 0 */);
  return _2021;
}

//store is: fx$1.stencil(((fx_1_s0_x_5 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_10() {
  float _2024 = float_from_bits(0 /* 0 */);
  return _2024;
}

//store is: fx$1.stencil(((fx_1_s1_x_5 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_5 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 36)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_5 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_5 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 5)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_11(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_11 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_23 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_24 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _2029 = (uint16_t)(_input0_copy_stencil_23);
  float _2030 = (float)(_2029);
  float _2031 = float_from_bits(981500033 /* 0.000980392 */);
  float _2032 = _2030 * _2031;
  uint16_t _2033 = (uint16_t)(_input0_copy_stencil_24);
  float _2034 = (float)(_2033);
  float _2035 = _2034 * _2031;
  float _2036 = _fx_1_stencil_11 - _2035;
  float _2037 = _2036 - _2035;
  float _2038 = _2032 + _2037;
  float _2039 = _2032 + _2038;
  return _2039;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 5) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 5) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_11(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_11 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_21 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_22 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_23 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_24 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_12 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_6 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_11 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_12 = (float) inv_stencil.extract<32, 63>();

  float _2091 = _AtA_stencil_21 * _AtA_stencil_22;
  float _2092 = _AtA_stencil_23 * _AtA_stencil_24;
  float _2093 = _2091 - _2092;
  float _2094 = _inv_stencil_11 / _2093;
  float _2095 = _fx_1_stencil_12 * _2094;
  float _2096 = _inv_stencil_12 * _fx_stencil_6;
  float _2097 = _Apinv_stencil_11 + _2096;
  float _2098 = _2095 + _2097;
  return _2098;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 5) % 31), 0))
hw_uint<32> hcompute_nu_stencil_6(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_12 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_12 = (float) ft_stencil.extract<0, 31>();

  float _2136 = _Apinv_stencil_12 * _ft_stencil_12;
  return _2136;
}

//store is: ft.stencil(((ft_s0_x_6 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_12() {
  float _2153 = float_from_bits(0 /* 0 */);
  return _2153;
}

//store is: ft.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x_6 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_13(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_13 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_25 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_26 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_13 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_14 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _2158 = (uint16_t)(_input1_copy_stencil_13);
  float _2159 = (float)(_2158);
  uint16_t _2160 = (uint16_t)(_input0_copy_stencil_25);
  float _2161 = (float)(_2160);
  float _2162 = _2159 - _2161;
  float _2163 = float_from_bits(981500033 /* 0.000980392 */);
  float _2164 = _2162 * _2163;
  uint16_t _2165 = (uint16_t)(_input1_copy_stencil_14);
  float _2166 = (float)(_2165);
  uint16_t _2167 = (uint16_t)(_input0_copy_stencil_26);
  float _2168 = (float)(_2167);
  float _2169 = _2166 - _2168;
  float _2170 = _2169 * _2163;
  float _2171 = _ft_stencil_13 + _2170;
  float _2172 = _2170 + _2171;
  float _2173 = _2164 + _2172;
  float _2174 = _2164 + _2173;
  return _2174;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_12() {
  float _2240 = float_from_bits(0 /* 0 */);
  return _2240;
}

//store is: fx$1.stencil(((fx_1_s0_x_6 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_12() {
  float _2243 = float_from_bits(0 /* 0 */);
  return _2243;
}

//store is: fx$1.stencil(((fx_1_s1_x_6 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_6 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 37)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_6 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_6 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 6)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_13(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_13 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_27 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_28 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _2248 = (uint16_t)(_input0_copy_stencil_27);
  float _2249 = (float)(_2248);
  float _2250 = float_from_bits(981500033 /* 0.000980392 */);
  float _2251 = _2249 * _2250;
  uint16_t _2252 = (uint16_t)(_input0_copy_stencil_28);
  float _2253 = (float)(_2252);
  float _2254 = _2253 * _2250;
  float _2255 = _fx_1_stencil_13 - _2254;
  float _2256 = _2255 - _2254;
  float _2257 = _2251 + _2256;
  float _2258 = _2251 + _2257;
  return _2258;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 6) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 6) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_13(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_13 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_25 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_26 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_27 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_28 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_14 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_7 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_13 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_14 = (float) inv_stencil.extract<32, 63>();

  float _2310 = _AtA_stencil_25 * _AtA_stencil_26;
  float _2311 = _AtA_stencil_27 * _AtA_stencil_28;
  float _2312 = _2310 - _2311;
  float _2313 = _inv_stencil_13 / _2312;
  float _2314 = _fx_1_stencil_14 * _2313;
  float _2315 = _inv_stencil_14 * _fx_stencil_7;
  float _2316 = _Apinv_stencil_13 + _2315;
  float _2317 = _2314 + _2316;
  return _2317;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 6) % 31), 0))
hw_uint<32> hcompute_nu_stencil_7(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_14 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_14 = (float) ft_stencil.extract<0, 31>();

  float _2355 = _Apinv_stencil_14 * _ft_stencil_14;
  return _2355;
}

//store is: ft.stencil(((ft_s0_x_7 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_14() {
  float _2372 = float_from_bits(0 /* 0 */);
  return _2372;
}

//store is: ft.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))))*0.000980f) + (ft.stencil(((ft_s1_x_7 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))) - float32(uint16(input0_copy.stencil((ft_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_15(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_15 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_29 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_30 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_15 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_16 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _2377 = (uint16_t)(_input1_copy_stencil_15);
  float _2378 = (float)(_2377);
  uint16_t _2379 = (uint16_t)(_input0_copy_stencil_29);
  float _2380 = (float)(_2379);
  float _2381 = _2378 - _2380;
  float _2382 = float_from_bits(981500033 /* 0.000980392 */);
  float _2383 = _2381 * _2382;
  uint16_t _2384 = (uint16_t)(_input1_copy_stencil_16);
  float _2385 = (float)(_2384);
  uint16_t _2386 = (uint16_t)(_input0_copy_stencil_30);
  float _2387 = (float)(_2386);
  float _2388 = _2385 - _2387;
  float _2389 = _2388 * _2382;
  float _2390 = _ft_stencil_15 + _2389;
  float _2391 = _2389 + _2390;
  float _2392 = _2383 + _2391;
  float _2393 = _2383 + _2392;
  return _2393;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_14() {
  float _2459 = float_from_bits(0 /* 0 */);
  return _2459;
}

//store is: fx$1.stencil(((fx_1_s0_x_7 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_14() {
  float _2462 = float_from_bits(0 /* 0 */);
  return _2462;
}

//store is: fx$1.stencil(((fx_1_s1_x_7 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_7 + hw_output_s0_x_xi) + 1), ((((nu_s1_rwin_x_rwin_x*8) + 38)/31) + hw_output_s0_y_yi))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_7 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_7 + hw_output_s0_x_xi), ((((nu_s1_rwin_x_rwin_x*8) + 7)/31) + hw_output_s0_y_yi))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_15(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_15 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_31 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_32 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _2467 = (uint16_t)(_input0_copy_stencil_31);
  float _2468 = (float)(_2467);
  float _2469 = float_from_bits(981500033 /* 0.000980392 */);
  float _2470 = _2468 * _2469;
  uint16_t _2471 = (uint16_t)(_input0_copy_stencil_32);
  float _2472 = (float)(_2471);
  float _2473 = _2472 * _2469;
  float _2474 = _fx_1_stencil_15 - _2473;
  float _2475 = _2474 - _2473;
  float _2476 = _2470 + _2475;
  float _2477 = _2470 + _2476;
  return _2477;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil((((nu_s1_rwin_x_rwin_x*8) + 7) % 31), 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil((((nu_s1_rwin_x_rwin_x*8) + 7) % 31), 0))))
hw_uint<32> hcompute_Apinv_stencil_15(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_15 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_29 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_30 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_31 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_32 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_16 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_8 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_15 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_16 = (float) inv_stencil.extract<32, 63>();

  float _2529 = _AtA_stencil_29 * _AtA_stencil_30;
  float _2530 = _AtA_stencil_31 * _AtA_stencil_32;
  float _2531 = _2529 - _2530;
  float _2532 = _inv_stencil_15 / _2531;
  float _2533 = _fx_1_stencil_16 * _2532;
  float _2534 = _inv_stencil_16 * _fx_stencil_8;
  float _2535 = _Apinv_stencil_15 + _2534;
  float _2536 = _2533 + _2535;
  return _2536;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil((((nu_s1_rwin_x_rwin_x*8) + 7) % 31), 0))
hw_uint<32> hcompute_nu_stencil_8(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_16 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_16 = (float) ft_stencil.extract<0, 31>();

  float _2574 = _Apinv_stencil_16 * _ft_stencil_16;
  return _2574;
}

//store is: ft.stencil(((ft_s0_x_8 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_ft_stencil_16() {
  float _2591 = float_from_bits(0 /* 0 */);
  return _2591;
}

//store is: ft.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = (((float32(uint16(input1_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))))*0.000980f) + (((float32(uint16(input1_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))) - float32(uint16(input0_copy.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31)))))*0.000980f) + (((float32(uint16(input1_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))) - float32(uint16(input0_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))))*0.000980f) + (ft.stencil(((ft_s1_x_8 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) + ((float32(uint16(input1_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))) - float32(uint16(input0_copy.stencil((ft_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30)))))*0.000980f)))))
hw_uint<32> hcompute_ft_stencil_17(hw_uint<32>& ft_stencil, hw_uint<16>& input0_copy_stencil, hw_uint<16>& input1_copy_stencil) {
  float _ft_stencil_17 = (float) ft_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_33 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_34 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint8_t _input1_copy_stencil_17 = (uint8_t) input1_copy_stencil.extract<0, 7>();
  uint8_t _input1_copy_stencil_18 = (uint8_t) input1_copy_stencil.extract<8, 15>();

  uint16_t _2596 = (uint16_t)(_input1_copy_stencil_17);
  float _2597 = (float)(_2596);
  uint16_t _2598 = (uint16_t)(_input0_copy_stencil_33);
  float _2599 = (float)(_2598);
  float _2600 = _2597 - _2599;
  float _2601 = float_from_bits(981500033 /* 0.000980392 */);
  float _2602 = _2600 * _2601;
  uint16_t _2603 = (uint16_t)(_input1_copy_stencil_18);
  float _2604 = (float)(_2603);
  uint16_t _2605 = (uint16_t)(_input0_copy_stencil_34);
  float _2606 = (float)(_2605);
  float _2607 = _2604 - _2606;
  float _2608 = _2607 * _2601;
  float _2609 = _ft_stencil_17 + _2608;
  float _2610 = _2608 + _2609;
  float _2611 = _2602 + _2610;
  float _2612 = _2602 + _2611;
  return _2612;
}

//store is: Apinv.stencil(0, 0, 0, 0) = 0.000000f
hw_uint<32> hcompute_Apinv_stencil_16() {
  float _2657 = float_from_bits(0 /* 0 */);
  return _2657;
}

//store is: fx$1.stencil(((fx_1_s0_x_8 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = 0.000000f
hw_uint<32> hcompute_fx_1_stencil_16() {
  float _2660 = float_from_bits(0 /* 0 */);
  return _2660;
}

//store is: fx$1.stencil(((fx_1_s1_x_8 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) = ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31))))*0.000980f) + ((float32(uint16(input0_copy.stencil(((fx_1_s1_x_8 + hw_output_s0_x_xi) + 1), (hw_output_s0_y_yi + 31))))*0.000980f) + ((fx$1.stencil(((fx_1_s1_x_8 + hw_output_s0_x_xi) - hw_output_s0_x_xi), 0) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30))))*0.000980f)) - (float32(uint16(input0_copy.stencil((fx_1_s1_x_8 + hw_output_s0_x_xi), (hw_output_s0_y_yi + 30))))*0.000980f))))
hw_uint<32> hcompute_fx_1_stencil_17(hw_uint<32>& fx_1_stencil, hw_uint<16>& input0_copy_stencil) {
  float _fx_1_stencil_17 = (float) fx_1_stencil.extract<0, 31>();

  uint8_t _input0_copy_stencil_35 = (uint8_t) input0_copy_stencil.extract<0, 7>();
  uint8_t _input0_copy_stencil_36 = (uint8_t) input0_copy_stencil.extract<8, 15>();

  uint16_t _2665 = (uint16_t)(_input0_copy_stencil_35);
  float _2666 = (float)(_2665);
  float _2667 = float_from_bits(981500033 /* 0.000980392 */);
  float _2668 = _2666 * _2667;
  uint16_t _2669 = (uint16_t)(_input0_copy_stencil_36);
  float _2670 = (float)(_2669);
  float _2671 = _2670 * _2667;
  float _2672 = _fx_1_stencil_17 - _2671;
  float _2673 = _2672 - _2671;
  float _2674 = _2668 + _2673;
  float _2675 = _2668 + _2674;
  return _2675;
}

//store is: Apinv.stencil(0, 0, 0, 0) = ((fx$1.stencil(30, 0)*(inv.stencil(0, 0, 1, nu_s1_w)/((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1))))) + (Apinv.stencil(0, 0, 0, 0) + (inv.stencil(0, 0, 0, nu_s1_w)*fx.stencil(30, 0))))
hw_uint<32> hcompute_Apinv_stencil_17(hw_uint<32>& Apinv_stencil, hw_uint<128>& AtA_stencil, hw_uint<32>& fx_stencil, hw_uint<32>& fx_1_stencil, hw_uint<64>& inv_stencil) {
  float _Apinv_stencil_17 = (float) Apinv_stencil.extract<0, 31>();

  float _AtA_stencil_33 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_34 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_35 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_36 = (float) AtA_stencil.extract<96, 127>();

  float _fx_1_stencil_18 = (float) fx_1_stencil.extract<0, 31>();

  float _fx_stencil_9 = (float) fx_stencil.extract<0, 31>();

  float _inv_stencil_17 = (float) inv_stencil.extract<0, 31>();
  float _inv_stencil_18 = (float) inv_stencil.extract<32, 63>();

  float _2706 = _AtA_stencil_33 * _AtA_stencil_34;
  float _2707 = _AtA_stencil_35 * _AtA_stencil_36;
  float _2708 = _2706 - _2707;
  float _2709 = _inv_stencil_17 / _2708;
  float _2710 = _fx_1_stencil_18 * _2709;
  float _2711 = _inv_stencil_18 * _fx_stencil_9;
  float _2712 = _Apinv_stencil_17 + _2711;
  float _2713 = _2710 + _2712;
  return _2713;
}

//store is: nu.stencil(0, 0, nu_s1_w) = (Apinv.stencil(0, 0, 0, 0)*ft.stencil(30, 0))
hw_uint<32> hcompute_nu_stencil_9(hw_uint<32>& Apinv_stencil, hw_uint<32>& ft_stencil) {
  float _Apinv_stencil_18 = (float) Apinv_stencil.extract<0, 31>();

  float _ft_stencil_18 = (float) ft_stencil.extract<0, 31>();

  float _2739 = _Apinv_stencil_18 * _ft_stencil_18;
  return _2739;
}

//store is: hw_output.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, hw_output_s0_z) = select(((select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f) - ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))))*0.250000f), 0.000000f) + (min((select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) + sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)))))*select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) + sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)))))), (select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)))))*select((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) < (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)), (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)), ((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - sqrt_f32((((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))*(AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1) - AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0))) - (((AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 1)) - (AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 1, 0)*AtA.stencil(hw_output_s0_x_xi, hw_output_s0_y_yi, 0, 1)))*4.000000f)))))))*0.250000f)) < 0.010000f), 0.000000f, (nu.stencil(0, 0, 0) + nu.stencil(0, 0, 1)))
hw_uint<32> hcompute_hw_output_stencil(hw_uint<128>& AtA_stencil, hw_uint<64>& nu_stencil) {
  float _AtA_stencil_37 = (float) AtA_stencil.extract<0, 31>();
  float _AtA_stencil_38 = (float) AtA_stencil.extract<32, 63>();
  float _AtA_stencil_39 = (float) AtA_stencil.extract<64, 95>();
  float _AtA_stencil_40 = (float) AtA_stencil.extract<96, 127>();

  float _nu_stencil_1 = (float) nu_stencil.extract<0, 31>();
  float _nu_stencil_2 = (float) nu_stencil.extract<32, 63>();

  float _2744 = float_from_bits(0 /* 0 */);
  float _2745 = _nu_stencil_1 + _nu_stencil_2;
  float _2746 = _AtA_stencil_38 * _AtA_stencil_37;
  float _2747 = _AtA_stencil_39 * _AtA_stencil_40;
  float _2748 = _2746 - _2747;
  float _2749 = float_from_bits(1082130432 /* 4 */);
  float _2750 = _2748 * _2749;
  float _2751 = _AtA_stencil_37 - _AtA_stencil_38;
  float _2752 = _2751 * _2751;
  float _2753 = _2750 - _2752;
  float _2754 = float_from_bits(1048576000 /* 0.25 */);
  float _2755 = _2753 * _2754;
  bool _2756 = _2752 < _2750;
  float _2757 = (float)(_2756 ? _2755 : _2744);
  float _2758 = _AtA_stencil_38 - _AtA_stencil_37;
  float _2759 = _2752 - _2750;
  float _2760 = sqrtf(_2759);
  float _2761 = _2758 + _2760;
  float _2762 = (float)(_2756 ? _2758 : _2761);
  float _2763 = _2762 * _2762;
  float _2764 = _2758 - _2760;
  float _2765 = (float)(_2756 ? _2758 : _2764);
  float _2766 = _2765 * _2765;
  float _2767 = min(_2763, _2766);
  float _2768 = _2767 * _2754;
  float _2769 = _2757 + _2768;
  float _2770 = float_from_bits(1008981770 /* 0.01 */);
  bool _2771 = _2769 < _2770;
  float _2772 = (float)(_2771 ? _2744 : _2745);
  return _2772;
}

