#include "clockwork_standard_compute_units.h"

hw_uint<128> pw_math_in_oc02_cu581(hw_uint<32*4>& in_oc) {
  hw_uint<32> in_oc_lane_0;
  set_at<0, 32, 32>(in_oc_lane_0, in_oc.extract<0, 31>());
  hw_uint<32> in_oc_lane_1;
  set_at<0, 32, 32>(in_oc_lane_1, in_oc.extract<32, 63>());
  hw_uint<32> in_oc_lane_2;
  set_at<0, 32, 32>(in_oc_lane_2, in_oc.extract<64, 95>());
  hw_uint<32> in_oc_lane_3;
  set_at<0, 32, 32>(in_oc_lane_3, in_oc.extract<96, 127>());

	
  hw_uint<32 > in_oc_lane_0_pack;
  set_at<0, 32, 32>(in_oc_lane_0_pack, in_oc_lane_0);
auto res_pw_math_in_oc03_sm158_3259 = id(in_oc_lane_0_pack);

	  hw_uint<32 > in_oc_lane_1_pack;
  set_at<0, 32, 32>(in_oc_lane_1_pack, in_oc_lane_1);
auto res_pw_math_in_oc03_sm158_2257 = id(in_oc_lane_1_pack);

	  hw_uint<32 > in_oc_lane_2_pack;
  set_at<0, 32, 32>(in_oc_lane_2_pack, in_oc_lane_2);
auto res_pw_math_in_oc03_sm158_1255 = id(in_oc_lane_2_pack);

	  hw_uint<32 > in_oc_lane_3_pack;
  set_at<0, 32, 32>(in_oc_lane_3_pack, in_oc_lane_3);
auto res_pw_math_in_oc03_sm158_0253 = id(in_oc_lane_3_pack);
  hw_uint<128 > return_value582;
  set_at<0, 128, 32>(return_value582, res_pw_math_in_oc03_sm158_3259);
  set_at<32, 128, 32>(return_value582, res_pw_math_in_oc03_sm158_2257);
  set_at<64, 128, 32>(return_value582, res_pw_math_in_oc03_sm158_1255);
  set_at<96, 128, 32>(return_value582, res_pw_math_in_oc03_sm158_0253);
  return return_value582;

}

hw_uint<128> stencil_05_cu584(hw_uint<32*36>& in, hw_uint<32*4>& stencil_0) {
  hw_uint<32> in_lane_0;
  set_at<0, 32, 32>(in_lane_0, in.extract<0, 31>());
  hw_uint<32> in_lane_1;
  set_at<0, 32, 32>(in_lane_1, in.extract<32, 63>());
  hw_uint<32> in_lane_2;
  set_at<0, 32, 32>(in_lane_2, in.extract<64, 95>());
  hw_uint<32> in_lane_3;
  set_at<0, 32, 32>(in_lane_3, in.extract<96, 127>());
  hw_uint<32> in_lane_4;
  set_at<0, 32, 32>(in_lane_4, in.extract<128, 159>());
  hw_uint<32> in_lane_5;
  set_at<0, 32, 32>(in_lane_5, in.extract<160, 191>());
  hw_uint<32> in_lane_6;
  set_at<0, 32, 32>(in_lane_6, in.extract<192, 223>());
  hw_uint<32> in_lane_7;
  set_at<0, 32, 32>(in_lane_7, in.extract<224, 255>());
  hw_uint<32> in_lane_8;
  set_at<0, 32, 32>(in_lane_8, in.extract<256, 287>());
  hw_uint<32> in_lane_9;
  set_at<0, 32, 32>(in_lane_9, in.extract<288, 319>());
  hw_uint<32> in_lane_10;
  set_at<0, 32, 32>(in_lane_10, in.extract<320, 351>());
  hw_uint<32> in_lane_11;
  set_at<0, 32, 32>(in_lane_11, in.extract<352, 383>());
  hw_uint<32> in_lane_12;
  set_at<0, 32, 32>(in_lane_12, in.extract<384, 415>());
  hw_uint<32> in_lane_13;
  set_at<0, 32, 32>(in_lane_13, in.extract<416, 447>());
  hw_uint<32> in_lane_14;
  set_at<0, 32, 32>(in_lane_14, in.extract<448, 479>());
  hw_uint<32> in_lane_15;
  set_at<0, 32, 32>(in_lane_15, in.extract<480, 511>());
  hw_uint<32> in_lane_16;
  set_at<0, 32, 32>(in_lane_16, in.extract<512, 543>());
  hw_uint<32> in_lane_17;
  set_at<0, 32, 32>(in_lane_17, in.extract<544, 575>());
  hw_uint<32> in_lane_18;
  set_at<0, 32, 32>(in_lane_18, in.extract<576, 607>());
  hw_uint<32> in_lane_19;
  set_at<0, 32, 32>(in_lane_19, in.extract<608, 639>());
  hw_uint<32> in_lane_20;
  set_at<0, 32, 32>(in_lane_20, in.extract<640, 671>());
  hw_uint<32> in_lane_21;
  set_at<0, 32, 32>(in_lane_21, in.extract<672, 703>());
  hw_uint<32> in_lane_22;
  set_at<0, 32, 32>(in_lane_22, in.extract<704, 735>());
  hw_uint<32> in_lane_23;
  set_at<0, 32, 32>(in_lane_23, in.extract<736, 767>());
  hw_uint<32> in_lane_24;
  set_at<0, 32, 32>(in_lane_24, in.extract<768, 799>());
  hw_uint<32> in_lane_25;
  set_at<0, 32, 32>(in_lane_25, in.extract<800, 831>());
  hw_uint<32> in_lane_26;
  set_at<0, 32, 32>(in_lane_26, in.extract<832, 863>());
  hw_uint<32> in_lane_27;
  set_at<0, 32, 32>(in_lane_27, in.extract<864, 895>());
  hw_uint<32> in_lane_28;
  set_at<0, 32, 32>(in_lane_28, in.extract<896, 927>());
  hw_uint<32> in_lane_29;
  set_at<0, 32, 32>(in_lane_29, in.extract<928, 959>());
  hw_uint<32> in_lane_30;
  set_at<0, 32, 32>(in_lane_30, in.extract<960, 991>());
  hw_uint<32> in_lane_31;
  set_at<0, 32, 32>(in_lane_31, in.extract<992, 1023>());
  hw_uint<32> in_lane_32;
  set_at<0, 32, 32>(in_lane_32, in.extract<1024, 1055>());
  hw_uint<32> in_lane_33;
  set_at<0, 32, 32>(in_lane_33, in.extract<1056, 1087>());
  hw_uint<32> in_lane_34;
  set_at<0, 32, 32>(in_lane_34, in.extract<1088, 1119>());
  hw_uint<32> in_lane_35;
  set_at<0, 32, 32>(in_lane_35, in.extract<1120, 1151>());
  hw_uint<32> stencil_0_lane_0;
  set_at<0, 32, 32>(stencil_0_lane_0, stencil_0.extract<0, 31>());
  hw_uint<32> stencil_0_lane_1;
  set_at<0, 32, 32>(stencil_0_lane_1, stencil_0.extract<32, 63>());
  hw_uint<32> stencil_0_lane_2;
  set_at<0, 32, 32>(stencil_0_lane_2, stencil_0.extract<64, 95>());
  hw_uint<32> stencil_0_lane_3;
  set_at<0, 32, 32>(stencil_0_lane_3, stencil_0.extract<96, 127>());

	
  hw_uint<32 > in_lane_0_pack;
  set_at<0, 32, 32>(in_lane_0_pack, in_lane_0);
  hw_uint<32 > stencil_0_lane_0_pack;
  set_at<0, 32, 32>(stencil_0_lane_0_pack, stencil_0_lane_0);
auto res_update9_stencil_07_148_stencil_06__m_1140_sm159_3339 = add(in_lane_0_pack, stencil_0_lane_0_pack);

	  hw_uint<32 > in_lane_1_pack;
  set_at<0, 32, 32>(in_lane_1_pack, in_lane_1);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06__m_1140_sm159_3339_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06__m_1140_sm159_3339_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_3339);
auto res_update9_stencil_07_046_stencil_06__m_1142_sm159_3337 = add(in_lane_1_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_3339_pack);

	  hw_uint<32 > in_lane_2_pack;
  set_at<0, 32, 32>(in_lane_2_pack, in_lane_2);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06__m_1142_sm159_3337_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06__m_1142_sm159_3337_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_3337);
auto res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_3335 = add(in_lane_2_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_3337_pack);

	  hw_uint<32 > in_lane_3_pack;
  set_at<0, 32, 32>(in_lane_3_pack, in_lane_3);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_3335_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_3335_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_3335);
auto res_update9_stencil_07_148_stencil_06_0146_sm159_3333 = add(in_lane_3_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_3335_pack);

	  hw_uint<32 > in_lane_4_pack;
  set_at<0, 32, 32>(in_lane_4_pack, in_lane_4);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_0146_sm159_3333_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_0146_sm159_3333_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_3333);
auto res_update9_stencil_07_046_stencil_06_0148_sm159_3331 = add(in_lane_4_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_3333_pack);

	  hw_uint<32 > in_lane_5_pack;
  set_at<0, 32, 32>(in_lane_5_pack, in_lane_5);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_0148_sm159_3331_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_0148_sm159_3331_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_3331);
auto res_update9_stencil_07__m_144_stencil_06_0150_sm159_3329 = add(in_lane_5_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_3331_pack);

	  hw_uint<32 > in_lane_6_pack;
  set_at<0, 32, 32>(in_lane_6_pack, in_lane_6);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06_0150_sm159_3329_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06_0150_sm159_3329_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_3329);
auto res_update9_stencil_07_148_stencil_06_1152_sm159_3327 = add(in_lane_6_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_3329_pack);

	  hw_uint<32 > in_lane_7_pack;
  set_at<0, 32, 32>(in_lane_7_pack, in_lane_7);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_1152_sm159_3327_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_1152_sm159_3327_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_3327);
auto res_update9_stencil_07_046_stencil_06_1154_sm159_3325 = add(in_lane_7_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_3327_pack);

	  hw_uint<32 > in_lane_8_pack;
  set_at<0, 32, 32>(in_lane_8_pack, in_lane_8);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_1154_sm159_3325_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_1154_sm159_3325_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_3325);
auto res_update9_stencil_07__m_144_stencil_06_1156_sm159_3323 = add(in_lane_8_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_3325_pack);

	auto res_init8_sm159_3321 = set_zero_32();

	  hw_uint<32 > in_lane_9_pack;
  set_at<0, 32, 32>(in_lane_9_pack, in_lane_9);
  hw_uint<32 > stencil_0_lane_1_pack;
  set_at<0, 32, 32>(stencil_0_lane_1_pack, stencil_0_lane_1);
auto res_update9_stencil_07_148_stencil_06__m_1140_sm159_2319 = add(in_lane_9_pack, stencil_0_lane_1_pack);

	  hw_uint<32 > in_lane_10_pack;
  set_at<0, 32, 32>(in_lane_10_pack, in_lane_10);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06__m_1140_sm159_2319_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06__m_1140_sm159_2319_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_2319);
auto res_update9_stencil_07_046_stencil_06__m_1142_sm159_2317 = add(in_lane_10_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_2319_pack);

	  hw_uint<32 > in_lane_11_pack;
  set_at<0, 32, 32>(in_lane_11_pack, in_lane_11);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06__m_1142_sm159_2317_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06__m_1142_sm159_2317_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_2317);
auto res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_2315 = add(in_lane_11_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_2317_pack);

	  hw_uint<32 > in_lane_12_pack;
  set_at<0, 32, 32>(in_lane_12_pack, in_lane_12);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_2315_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_2315_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_2315);
auto res_update9_stencil_07_148_stencil_06_0146_sm159_2313 = add(in_lane_12_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_2315_pack);

	  hw_uint<32 > in_lane_13_pack;
  set_at<0, 32, 32>(in_lane_13_pack, in_lane_13);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_0146_sm159_2313_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_0146_sm159_2313_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_2313);
auto res_update9_stencil_07_046_stencil_06_0148_sm159_2311 = add(in_lane_13_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_2313_pack);

	  hw_uint<32 > in_lane_14_pack;
  set_at<0, 32, 32>(in_lane_14_pack, in_lane_14);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_0148_sm159_2311_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_0148_sm159_2311_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_2311);
auto res_update9_stencil_07__m_144_stencil_06_0150_sm159_2309 = add(in_lane_14_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_2311_pack);

	  hw_uint<32 > in_lane_15_pack;
  set_at<0, 32, 32>(in_lane_15_pack, in_lane_15);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06_0150_sm159_2309_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06_0150_sm159_2309_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_2309);
auto res_update9_stencil_07_148_stencil_06_1152_sm159_2307 = add(in_lane_15_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_2309_pack);

	  hw_uint<32 > in_lane_16_pack;
  set_at<0, 32, 32>(in_lane_16_pack, in_lane_16);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_1152_sm159_2307_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_1152_sm159_2307_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_2307);
auto res_update9_stencil_07_046_stencil_06_1154_sm159_2305 = add(in_lane_16_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_2307_pack);

	  hw_uint<32 > in_lane_17_pack;
  set_at<0, 32, 32>(in_lane_17_pack, in_lane_17);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_1154_sm159_2305_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_1154_sm159_2305_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_2305);
auto res_update9_stencil_07__m_144_stencil_06_1156_sm159_2303 = add(in_lane_17_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_2305_pack);

	auto res_init8_sm159_2301 = set_zero_32();

	  hw_uint<32 > in_lane_18_pack;
  set_at<0, 32, 32>(in_lane_18_pack, in_lane_18);
  hw_uint<32 > stencil_0_lane_2_pack;
  set_at<0, 32, 32>(stencil_0_lane_2_pack, stencil_0_lane_2);
auto res_update9_stencil_07_148_stencil_06__m_1140_sm159_1299 = add(in_lane_18_pack, stencil_0_lane_2_pack);

	  hw_uint<32 > in_lane_19_pack;
  set_at<0, 32, 32>(in_lane_19_pack, in_lane_19);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06__m_1140_sm159_1299_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06__m_1140_sm159_1299_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_1299);
auto res_update9_stencil_07_046_stencil_06__m_1142_sm159_1297 = add(in_lane_19_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_1299_pack);

	  hw_uint<32 > in_lane_20_pack;
  set_at<0, 32, 32>(in_lane_20_pack, in_lane_20);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06__m_1142_sm159_1297_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06__m_1142_sm159_1297_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_1297);
auto res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_1295 = add(in_lane_20_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_1297_pack);

	  hw_uint<32 > in_lane_21_pack;
  set_at<0, 32, 32>(in_lane_21_pack, in_lane_21);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_1295_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_1295_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_1295);
auto res_update9_stencil_07_148_stencil_06_0146_sm159_1293 = add(in_lane_21_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_1295_pack);

	  hw_uint<32 > in_lane_22_pack;
  set_at<0, 32, 32>(in_lane_22_pack, in_lane_22);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_0146_sm159_1293_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_0146_sm159_1293_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_1293);
auto res_update9_stencil_07_046_stencil_06_0148_sm159_1291 = add(in_lane_22_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_1293_pack);

	  hw_uint<32 > in_lane_23_pack;
  set_at<0, 32, 32>(in_lane_23_pack, in_lane_23);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_0148_sm159_1291_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_0148_sm159_1291_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_1291);
auto res_update9_stencil_07__m_144_stencil_06_0150_sm159_1289 = add(in_lane_23_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_1291_pack);

	  hw_uint<32 > in_lane_24_pack;
  set_at<0, 32, 32>(in_lane_24_pack, in_lane_24);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06_0150_sm159_1289_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06_0150_sm159_1289_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_1289);
auto res_update9_stencil_07_148_stencil_06_1152_sm159_1287 = add(in_lane_24_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_1289_pack);

	  hw_uint<32 > in_lane_25_pack;
  set_at<0, 32, 32>(in_lane_25_pack, in_lane_25);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_1152_sm159_1287_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_1152_sm159_1287_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_1287);
auto res_update9_stencil_07_046_stencil_06_1154_sm159_1285 = add(in_lane_25_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_1287_pack);

	  hw_uint<32 > in_lane_26_pack;
  set_at<0, 32, 32>(in_lane_26_pack, in_lane_26);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_1154_sm159_1285_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_1154_sm159_1285_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_1285);
auto res_update9_stencil_07__m_144_stencil_06_1156_sm159_1283 = add(in_lane_26_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_1285_pack);

	auto res_init8_sm159_1281 = set_zero_32();

	  hw_uint<32 > in_lane_27_pack;
  set_at<0, 32, 32>(in_lane_27_pack, in_lane_27);
  hw_uint<32 > stencil_0_lane_3_pack;
  set_at<0, 32, 32>(stencil_0_lane_3_pack, stencil_0_lane_3);
auto res_update9_stencil_07_148_stencil_06__m_1140_sm159_0279 = add(in_lane_27_pack, stencil_0_lane_3_pack);

	  hw_uint<32 > in_lane_28_pack;
  set_at<0, 32, 32>(in_lane_28_pack, in_lane_28);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06__m_1140_sm159_0279_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06__m_1140_sm159_0279_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_0279);
auto res_update9_stencil_07_046_stencil_06__m_1142_sm159_0277 = add(in_lane_28_pack, res_update9_stencil_07_148_stencil_06__m_1140_sm159_0279_pack);

	  hw_uint<32 > in_lane_29_pack;
  set_at<0, 32, 32>(in_lane_29_pack, in_lane_29);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06__m_1142_sm159_0277_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06__m_1142_sm159_0277_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_0277);
auto res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_0275 = add(in_lane_29_pack, res_update9_stencil_07_046_stencil_06__m_1142_sm159_0277_pack);

	  hw_uint<32 > in_lane_30_pack;
  set_at<0, 32, 32>(in_lane_30_pack, in_lane_30);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_0275_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_0275_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_0275);
auto res_update9_stencil_07_148_stencil_06_0146_sm159_0273 = add(in_lane_30_pack, res_update9_stencil_07__m_144_stencil_06__m_1144_sm159_0275_pack);

	  hw_uint<32 > in_lane_31_pack;
  set_at<0, 32, 32>(in_lane_31_pack, in_lane_31);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_0146_sm159_0273_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_0146_sm159_0273_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_0273);
auto res_update9_stencil_07_046_stencil_06_0148_sm159_0271 = add(in_lane_31_pack, res_update9_stencil_07_148_stencil_06_0146_sm159_0273_pack);

	  hw_uint<32 > in_lane_32_pack;
  set_at<0, 32, 32>(in_lane_32_pack, in_lane_32);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_0148_sm159_0271_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_0148_sm159_0271_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_0271);
auto res_update9_stencil_07__m_144_stencil_06_0150_sm159_0269 = add(in_lane_32_pack, res_update9_stencil_07_046_stencil_06_0148_sm159_0271_pack);

	  hw_uint<32 > in_lane_33_pack;
  set_at<0, 32, 32>(in_lane_33_pack, in_lane_33);
  hw_uint<32 > res_update9_stencil_07__m_144_stencil_06_0150_sm159_0269_pack;
  set_at<0, 32, 32>(res_update9_stencil_07__m_144_stencil_06_0150_sm159_0269_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_0269);
auto res_update9_stencil_07_148_stencil_06_1152_sm159_0267 = add(in_lane_33_pack, res_update9_stencil_07__m_144_stencil_06_0150_sm159_0269_pack);

	  hw_uint<32 > in_lane_34_pack;
  set_at<0, 32, 32>(in_lane_34_pack, in_lane_34);
  hw_uint<32 > res_update9_stencil_07_148_stencil_06_1152_sm159_0267_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_148_stencil_06_1152_sm159_0267_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_0267);
auto res_update9_stencil_07_046_stencil_06_1154_sm159_0265 = add(in_lane_34_pack, res_update9_stencil_07_148_stencil_06_1152_sm159_0267_pack);

	  hw_uint<32 > in_lane_35_pack;
  set_at<0, 32, 32>(in_lane_35_pack, in_lane_35);
  hw_uint<32 > res_update9_stencil_07_046_stencil_06_1154_sm159_0265_pack;
  set_at<0, 32, 32>(res_update9_stencil_07_046_stencil_06_1154_sm159_0265_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_0265);
auto res_update9_stencil_07__m_144_stencil_06_1156_sm159_0263 = add(in_lane_35_pack, res_update9_stencil_07_046_stencil_06_1154_sm159_0265_pack);

	auto res_init8_sm159_0261 = set_zero_32();
  hw_uint<128 > return_value585;
  set_at<0, 128, 32>(return_value585, res_init8_sm159_3321);
  set_at<32, 128, 32>(return_value585, res_init8_sm159_2301);
  set_at<64, 128, 32>(return_value585, res_init8_sm159_1281);
  set_at<96, 128, 32>(return_value585, res_init8_sm159_0261);
  return return_value585;

}

hw_uint<128> stencil_111_cu587(hw_uint<32*36>& stencil_0, hw_uint<32*4>& stencil_1) {
  hw_uint<32> stencil_0_lane_0;
  set_at<0, 32, 32>(stencil_0_lane_0, stencil_0.extract<0, 31>());
  hw_uint<32> stencil_0_lane_1;
  set_at<0, 32, 32>(stencil_0_lane_1, stencil_0.extract<32, 63>());
  hw_uint<32> stencil_0_lane_2;
  set_at<0, 32, 32>(stencil_0_lane_2, stencil_0.extract<64, 95>());
  hw_uint<32> stencil_0_lane_3;
  set_at<0, 32, 32>(stencil_0_lane_3, stencil_0.extract<96, 127>());
  hw_uint<32> stencil_0_lane_4;
  set_at<0, 32, 32>(stencil_0_lane_4, stencil_0.extract<128, 159>());
  hw_uint<32> stencil_0_lane_5;
  set_at<0, 32, 32>(stencil_0_lane_5, stencil_0.extract<160, 191>());
  hw_uint<32> stencil_0_lane_6;
  set_at<0, 32, 32>(stencil_0_lane_6, stencil_0.extract<192, 223>());
  hw_uint<32> stencil_0_lane_7;
  set_at<0, 32, 32>(stencil_0_lane_7, stencil_0.extract<224, 255>());
  hw_uint<32> stencil_0_lane_8;
  set_at<0, 32, 32>(stencil_0_lane_8, stencil_0.extract<256, 287>());
  hw_uint<32> stencil_0_lane_9;
  set_at<0, 32, 32>(stencil_0_lane_9, stencil_0.extract<288, 319>());
  hw_uint<32> stencil_0_lane_10;
  set_at<0, 32, 32>(stencil_0_lane_10, stencil_0.extract<320, 351>());
  hw_uint<32> stencil_0_lane_11;
  set_at<0, 32, 32>(stencil_0_lane_11, stencil_0.extract<352, 383>());
  hw_uint<32> stencil_0_lane_12;
  set_at<0, 32, 32>(stencil_0_lane_12, stencil_0.extract<384, 415>());
  hw_uint<32> stencil_0_lane_13;
  set_at<0, 32, 32>(stencil_0_lane_13, stencil_0.extract<416, 447>());
  hw_uint<32> stencil_0_lane_14;
  set_at<0, 32, 32>(stencil_0_lane_14, stencil_0.extract<448, 479>());
  hw_uint<32> stencil_0_lane_15;
  set_at<0, 32, 32>(stencil_0_lane_15, stencil_0.extract<480, 511>());
  hw_uint<32> stencil_0_lane_16;
  set_at<0, 32, 32>(stencil_0_lane_16, stencil_0.extract<512, 543>());
  hw_uint<32> stencil_0_lane_17;
  set_at<0, 32, 32>(stencil_0_lane_17, stencil_0.extract<544, 575>());
  hw_uint<32> stencil_0_lane_18;
  set_at<0, 32, 32>(stencil_0_lane_18, stencil_0.extract<576, 607>());
  hw_uint<32> stencil_0_lane_19;
  set_at<0, 32, 32>(stencil_0_lane_19, stencil_0.extract<608, 639>());
  hw_uint<32> stencil_0_lane_20;
  set_at<0, 32, 32>(stencil_0_lane_20, stencil_0.extract<640, 671>());
  hw_uint<32> stencil_0_lane_21;
  set_at<0, 32, 32>(stencil_0_lane_21, stencil_0.extract<672, 703>());
  hw_uint<32> stencil_0_lane_22;
  set_at<0, 32, 32>(stencil_0_lane_22, stencil_0.extract<704, 735>());
  hw_uint<32> stencil_0_lane_23;
  set_at<0, 32, 32>(stencil_0_lane_23, stencil_0.extract<736, 767>());
  hw_uint<32> stencil_0_lane_24;
  set_at<0, 32, 32>(stencil_0_lane_24, stencil_0.extract<768, 799>());
  hw_uint<32> stencil_0_lane_25;
  set_at<0, 32, 32>(stencil_0_lane_25, stencil_0.extract<800, 831>());
  hw_uint<32> stencil_0_lane_26;
  set_at<0, 32, 32>(stencil_0_lane_26, stencil_0.extract<832, 863>());
  hw_uint<32> stencil_0_lane_27;
  set_at<0, 32, 32>(stencil_0_lane_27, stencil_0.extract<864, 895>());
  hw_uint<32> stencil_0_lane_28;
  set_at<0, 32, 32>(stencil_0_lane_28, stencil_0.extract<896, 927>());
  hw_uint<32> stencil_0_lane_29;
  set_at<0, 32, 32>(stencil_0_lane_29, stencil_0.extract<928, 959>());
  hw_uint<32> stencil_0_lane_30;
  set_at<0, 32, 32>(stencil_0_lane_30, stencil_0.extract<960, 991>());
  hw_uint<32> stencil_0_lane_31;
  set_at<0, 32, 32>(stencil_0_lane_31, stencil_0.extract<992, 1023>());
  hw_uint<32> stencil_0_lane_32;
  set_at<0, 32, 32>(stencil_0_lane_32, stencil_0.extract<1024, 1055>());
  hw_uint<32> stencil_0_lane_33;
  set_at<0, 32, 32>(stencil_0_lane_33, stencil_0.extract<1056, 1087>());
  hw_uint<32> stencil_0_lane_34;
  set_at<0, 32, 32>(stencil_0_lane_34, stencil_0.extract<1088, 1119>());
  hw_uint<32> stencil_0_lane_35;
  set_at<0, 32, 32>(stencil_0_lane_35, stencil_0.extract<1120, 1151>());
  hw_uint<32> stencil_1_lane_0;
  set_at<0, 32, 32>(stencil_1_lane_0, stencil_1.extract<0, 31>());
  hw_uint<32> stencil_1_lane_1;
  set_at<0, 32, 32>(stencil_1_lane_1, stencil_1.extract<32, 63>());
  hw_uint<32> stencil_1_lane_2;
  set_at<0, 32, 32>(stencil_1_lane_2, stencil_1.extract<64, 95>());
  hw_uint<32> stencil_1_lane_3;
  set_at<0, 32, 32>(stencil_1_lane_3, stencil_1.extract<96, 127>());

	
  hw_uint<32 > stencil_0_lane_0_pack;
  set_at<0, 32, 32>(stencil_0_lane_0_pack, stencil_0_lane_0);
  hw_uint<32 > stencil_1_lane_0_pack;
  set_at<0, 32, 32>(stencil_1_lane_0_pack, stencil_1_lane_0);
auto res_update15_stencil_113_160_stencil_112__m_1104_sm160_3499 = add(stencil_0_lane_0_pack, stencil_1_lane_0_pack);

	  hw_uint<32 > stencil_0_lane_1_pack;
  set_at<0, 32, 32>(stencil_0_lane_1_pack, stencil_0_lane_1);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112__m_1104_sm160_3499_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112__m_1104_sm160_3499_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_3499);
auto res_update15_stencil_113_058_stencil_112__m_1106_sm160_3497 = add(stencil_0_lane_1_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_3499_pack);

	  hw_uint<32 > stencil_0_lane_2_pack;
  set_at<0, 32, 32>(stencil_0_lane_2_pack, stencil_0_lane_2);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112__m_1106_sm160_3497_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112__m_1106_sm160_3497_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_3497);
auto res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_3495 = add(stencil_0_lane_2_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_3497_pack);

	  hw_uint<32 > stencil_0_lane_3_pack;
  set_at<0, 32, 32>(stencil_0_lane_3_pack, stencil_0_lane_3);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_3495_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_3495_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_3495);
auto res_update15_stencil_113_160_stencil_112_0110_sm160_3493 = add(stencil_0_lane_3_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_3495_pack);

	  hw_uint<32 > stencil_0_lane_4_pack;
  set_at<0, 32, 32>(stencil_0_lane_4_pack, stencil_0_lane_4);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_0110_sm160_3493_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_0110_sm160_3493_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_3493);
auto res_update15_stencil_113_058_stencil_112_0112_sm160_3491 = add(stencil_0_lane_4_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_3493_pack);

	  hw_uint<32 > stencil_0_lane_5_pack;
  set_at<0, 32, 32>(stencil_0_lane_5_pack, stencil_0_lane_5);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_0112_sm160_3491_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_0112_sm160_3491_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_3491);
auto res_update15_stencil_113__m_156_stencil_112_0114_sm160_3489 = add(stencil_0_lane_5_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_3491_pack);

	  hw_uint<32 > stencil_0_lane_6_pack;
  set_at<0, 32, 32>(stencil_0_lane_6_pack, stencil_0_lane_6);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112_0114_sm160_3489_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112_0114_sm160_3489_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_3489);
auto res_update15_stencil_113_160_stencil_112_1116_sm160_3487 = add(stencil_0_lane_6_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_3489_pack);

	  hw_uint<32 > stencil_0_lane_7_pack;
  set_at<0, 32, 32>(stencil_0_lane_7_pack, stencil_0_lane_7);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_1116_sm160_3487_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_1116_sm160_3487_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_3487);
auto res_update15_stencil_113_058_stencil_112_1118_sm160_3485 = add(stencil_0_lane_7_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_3487_pack);

	  hw_uint<32 > stencil_0_lane_8_pack;
  set_at<0, 32, 32>(stencil_0_lane_8_pack, stencil_0_lane_8);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_1118_sm160_3485_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_1118_sm160_3485_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_3485);
auto res_update15_stencil_113__m_156_stencil_112_1120_sm160_3483 = add(stencil_0_lane_8_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_3485_pack);

	auto res_init14_sm160_3481 = set_zero_32();

	  hw_uint<32 > stencil_0_lane_9_pack;
  set_at<0, 32, 32>(stencil_0_lane_9_pack, stencil_0_lane_9);
  hw_uint<32 > stencil_1_lane_1_pack;
  set_at<0, 32, 32>(stencil_1_lane_1_pack, stencil_1_lane_1);
auto res_update15_stencil_113_160_stencil_112__m_1104_sm160_2479 = add(stencil_0_lane_9_pack, stencil_1_lane_1_pack);

	  hw_uint<32 > stencil_0_lane_10_pack;
  set_at<0, 32, 32>(stencil_0_lane_10_pack, stencil_0_lane_10);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112__m_1104_sm160_2479_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112__m_1104_sm160_2479_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_2479);
auto res_update15_stencil_113_058_stencil_112__m_1106_sm160_2477 = add(stencil_0_lane_10_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_2479_pack);

	  hw_uint<32 > stencil_0_lane_11_pack;
  set_at<0, 32, 32>(stencil_0_lane_11_pack, stencil_0_lane_11);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112__m_1106_sm160_2477_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112__m_1106_sm160_2477_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_2477);
auto res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_2475 = add(stencil_0_lane_11_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_2477_pack);

	  hw_uint<32 > stencil_0_lane_12_pack;
  set_at<0, 32, 32>(stencil_0_lane_12_pack, stencil_0_lane_12);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_2475_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_2475_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_2475);
auto res_update15_stencil_113_160_stencil_112_0110_sm160_2473 = add(stencil_0_lane_12_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_2475_pack);

	  hw_uint<32 > stencil_0_lane_13_pack;
  set_at<0, 32, 32>(stencil_0_lane_13_pack, stencil_0_lane_13);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_0110_sm160_2473_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_0110_sm160_2473_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_2473);
auto res_update15_stencil_113_058_stencil_112_0112_sm160_2471 = add(stencil_0_lane_13_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_2473_pack);

	  hw_uint<32 > stencil_0_lane_14_pack;
  set_at<0, 32, 32>(stencil_0_lane_14_pack, stencil_0_lane_14);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_0112_sm160_2471_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_0112_sm160_2471_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_2471);
auto res_update15_stencil_113__m_156_stencil_112_0114_sm160_2469 = add(stencil_0_lane_14_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_2471_pack);

	  hw_uint<32 > stencil_0_lane_15_pack;
  set_at<0, 32, 32>(stencil_0_lane_15_pack, stencil_0_lane_15);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112_0114_sm160_2469_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112_0114_sm160_2469_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_2469);
auto res_update15_stencil_113_160_stencil_112_1116_sm160_2467 = add(stencil_0_lane_15_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_2469_pack);

	  hw_uint<32 > stencil_0_lane_16_pack;
  set_at<0, 32, 32>(stencil_0_lane_16_pack, stencil_0_lane_16);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_1116_sm160_2467_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_1116_sm160_2467_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_2467);
auto res_update15_stencil_113_058_stencil_112_1118_sm160_2465 = add(stencil_0_lane_16_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_2467_pack);

	  hw_uint<32 > stencil_0_lane_17_pack;
  set_at<0, 32, 32>(stencil_0_lane_17_pack, stencil_0_lane_17);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_1118_sm160_2465_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_1118_sm160_2465_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_2465);
auto res_update15_stencil_113__m_156_stencil_112_1120_sm160_2463 = add(stencil_0_lane_17_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_2465_pack);

	auto res_init14_sm160_2461 = set_zero_32();

	  hw_uint<32 > stencil_0_lane_18_pack;
  set_at<0, 32, 32>(stencil_0_lane_18_pack, stencil_0_lane_18);
  hw_uint<32 > stencil_1_lane_2_pack;
  set_at<0, 32, 32>(stencil_1_lane_2_pack, stencil_1_lane_2);
auto res_update15_stencil_113_160_stencil_112__m_1104_sm160_1459 = add(stencil_0_lane_18_pack, stencil_1_lane_2_pack);

	  hw_uint<32 > stencil_0_lane_19_pack;
  set_at<0, 32, 32>(stencil_0_lane_19_pack, stencil_0_lane_19);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112__m_1104_sm160_1459_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112__m_1104_sm160_1459_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_1459);
auto res_update15_stencil_113_058_stencil_112__m_1106_sm160_1457 = add(stencil_0_lane_19_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_1459_pack);

	  hw_uint<32 > stencil_0_lane_20_pack;
  set_at<0, 32, 32>(stencil_0_lane_20_pack, stencil_0_lane_20);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112__m_1106_sm160_1457_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112__m_1106_sm160_1457_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_1457);
auto res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_1455 = add(stencil_0_lane_20_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_1457_pack);

	  hw_uint<32 > stencil_0_lane_21_pack;
  set_at<0, 32, 32>(stencil_0_lane_21_pack, stencil_0_lane_21);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_1455_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_1455_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_1455);
auto res_update15_stencil_113_160_stencil_112_0110_sm160_1453 = add(stencil_0_lane_21_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_1455_pack);

	  hw_uint<32 > stencil_0_lane_22_pack;
  set_at<0, 32, 32>(stencil_0_lane_22_pack, stencil_0_lane_22);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_0110_sm160_1453_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_0110_sm160_1453_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_1453);
auto res_update15_stencil_113_058_stencil_112_0112_sm160_1451 = add(stencil_0_lane_22_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_1453_pack);

	  hw_uint<32 > stencil_0_lane_23_pack;
  set_at<0, 32, 32>(stencil_0_lane_23_pack, stencil_0_lane_23);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_0112_sm160_1451_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_0112_sm160_1451_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_1451);
auto res_update15_stencil_113__m_156_stencil_112_0114_sm160_1449 = add(stencil_0_lane_23_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_1451_pack);

	  hw_uint<32 > stencil_0_lane_24_pack;
  set_at<0, 32, 32>(stencil_0_lane_24_pack, stencil_0_lane_24);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112_0114_sm160_1449_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112_0114_sm160_1449_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_1449);
auto res_update15_stencil_113_160_stencil_112_1116_sm160_1447 = add(stencil_0_lane_24_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_1449_pack);

	  hw_uint<32 > stencil_0_lane_25_pack;
  set_at<0, 32, 32>(stencil_0_lane_25_pack, stencil_0_lane_25);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_1116_sm160_1447_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_1116_sm160_1447_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_1447);
auto res_update15_stencil_113_058_stencil_112_1118_sm160_1445 = add(stencil_0_lane_25_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_1447_pack);

	  hw_uint<32 > stencil_0_lane_26_pack;
  set_at<0, 32, 32>(stencil_0_lane_26_pack, stencil_0_lane_26);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_1118_sm160_1445_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_1118_sm160_1445_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_1445);
auto res_update15_stencil_113__m_156_stencil_112_1120_sm160_1443 = add(stencil_0_lane_26_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_1445_pack);

	auto res_init14_sm160_1441 = set_zero_32();

	  hw_uint<32 > stencil_0_lane_27_pack;
  set_at<0, 32, 32>(stencil_0_lane_27_pack, stencil_0_lane_27);
  hw_uint<32 > stencil_1_lane_3_pack;
  set_at<0, 32, 32>(stencil_1_lane_3_pack, stencil_1_lane_3);
auto res_update15_stencil_113_160_stencil_112__m_1104_sm160_0439 = add(stencil_0_lane_27_pack, stencil_1_lane_3_pack);

	  hw_uint<32 > stencil_0_lane_28_pack;
  set_at<0, 32, 32>(stencil_0_lane_28_pack, stencil_0_lane_28);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112__m_1104_sm160_0439_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112__m_1104_sm160_0439_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_0439);
auto res_update15_stencil_113_058_stencil_112__m_1106_sm160_0437 = add(stencil_0_lane_28_pack, res_update15_stencil_113_160_stencil_112__m_1104_sm160_0439_pack);

	  hw_uint<32 > stencil_0_lane_29_pack;
  set_at<0, 32, 32>(stencil_0_lane_29_pack, stencil_0_lane_29);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112__m_1106_sm160_0437_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112__m_1106_sm160_0437_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_0437);
auto res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_0435 = add(stencil_0_lane_29_pack, res_update15_stencil_113_058_stencil_112__m_1106_sm160_0437_pack);

	  hw_uint<32 > stencil_0_lane_30_pack;
  set_at<0, 32, 32>(stencil_0_lane_30_pack, stencil_0_lane_30);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_0435_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_0435_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_0435);
auto res_update15_stencil_113_160_stencil_112_0110_sm160_0433 = add(stencil_0_lane_30_pack, res_update15_stencil_113__m_156_stencil_112__m_1108_sm160_0435_pack);

	  hw_uint<32 > stencil_0_lane_31_pack;
  set_at<0, 32, 32>(stencil_0_lane_31_pack, stencil_0_lane_31);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_0110_sm160_0433_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_0110_sm160_0433_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_0433);
auto res_update15_stencil_113_058_stencil_112_0112_sm160_0431 = add(stencil_0_lane_31_pack, res_update15_stencil_113_160_stencil_112_0110_sm160_0433_pack);

	  hw_uint<32 > stencil_0_lane_32_pack;
  set_at<0, 32, 32>(stencil_0_lane_32_pack, stencil_0_lane_32);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_0112_sm160_0431_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_0112_sm160_0431_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_0431);
auto res_update15_stencil_113__m_156_stencil_112_0114_sm160_0429 = add(stencil_0_lane_32_pack, res_update15_stencil_113_058_stencil_112_0112_sm160_0431_pack);

	  hw_uint<32 > stencil_0_lane_33_pack;
  set_at<0, 32, 32>(stencil_0_lane_33_pack, stencil_0_lane_33);
  hw_uint<32 > res_update15_stencil_113__m_156_stencil_112_0114_sm160_0429_pack;
  set_at<0, 32, 32>(res_update15_stencil_113__m_156_stencil_112_0114_sm160_0429_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_0429);
auto res_update15_stencil_113_160_stencil_112_1116_sm160_0427 = add(stencil_0_lane_33_pack, res_update15_stencil_113__m_156_stencil_112_0114_sm160_0429_pack);

	  hw_uint<32 > stencil_0_lane_34_pack;
  set_at<0, 32, 32>(stencil_0_lane_34_pack, stencil_0_lane_34);
  hw_uint<32 > res_update15_stencil_113_160_stencil_112_1116_sm160_0427_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_160_stencil_112_1116_sm160_0427_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_0427);
auto res_update15_stencil_113_058_stencil_112_1118_sm160_0425 = add(stencil_0_lane_34_pack, res_update15_stencil_113_160_stencil_112_1116_sm160_0427_pack);

	  hw_uint<32 > stencil_0_lane_35_pack;
  set_at<0, 32, 32>(stencil_0_lane_35_pack, stencil_0_lane_35);
  hw_uint<32 > res_update15_stencil_113_058_stencil_112_1118_sm160_0425_pack;
  set_at<0, 32, 32>(res_update15_stencil_113_058_stencil_112_1118_sm160_0425_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_0425);
auto res_update15_stencil_113__m_156_stencil_112_1120_sm160_0423 = add(stencil_0_lane_35_pack, res_update15_stencil_113_058_stencil_112_1118_sm160_0425_pack);

	auto res_init14_sm160_0421 = set_zero_32();
  hw_uint<128 > return_value588;
  set_at<0, 128, 32>(return_value588, res_init14_sm160_3481);
  set_at<32, 128, 32>(return_value588, res_init14_sm160_2461);
  set_at<64, 128, 32>(return_value588, res_init14_sm160_1441);
  set_at<96, 128, 32>(return_value588, res_init14_sm160_0421);
  return return_value588;

}

hw_uint<128> stencil_217_cu590(hw_uint<32*36>& stencil_1, hw_uint<32*4>& stencil_2) {
  hw_uint<32> stencil_1_lane_0;
  set_at<0, 32, 32>(stencil_1_lane_0, stencil_1.extract<0, 31>());
  hw_uint<32> stencil_1_lane_1;
  set_at<0, 32, 32>(stencil_1_lane_1, stencil_1.extract<32, 63>());
  hw_uint<32> stencil_1_lane_2;
  set_at<0, 32, 32>(stencil_1_lane_2, stencil_1.extract<64, 95>());
  hw_uint<32> stencil_1_lane_3;
  set_at<0, 32, 32>(stencil_1_lane_3, stencil_1.extract<96, 127>());
  hw_uint<32> stencil_1_lane_4;
  set_at<0, 32, 32>(stencil_1_lane_4, stencil_1.extract<128, 159>());
  hw_uint<32> stencil_1_lane_5;
  set_at<0, 32, 32>(stencil_1_lane_5, stencil_1.extract<160, 191>());
  hw_uint<32> stencil_1_lane_6;
  set_at<0, 32, 32>(stencil_1_lane_6, stencil_1.extract<192, 223>());
  hw_uint<32> stencil_1_lane_7;
  set_at<0, 32, 32>(stencil_1_lane_7, stencil_1.extract<224, 255>());
  hw_uint<32> stencil_1_lane_8;
  set_at<0, 32, 32>(stencil_1_lane_8, stencil_1.extract<256, 287>());
  hw_uint<32> stencil_1_lane_9;
  set_at<0, 32, 32>(stencil_1_lane_9, stencil_1.extract<288, 319>());
  hw_uint<32> stencil_1_lane_10;
  set_at<0, 32, 32>(stencil_1_lane_10, stencil_1.extract<320, 351>());
  hw_uint<32> stencil_1_lane_11;
  set_at<0, 32, 32>(stencil_1_lane_11, stencil_1.extract<352, 383>());
  hw_uint<32> stencil_1_lane_12;
  set_at<0, 32, 32>(stencil_1_lane_12, stencil_1.extract<384, 415>());
  hw_uint<32> stencil_1_lane_13;
  set_at<0, 32, 32>(stencil_1_lane_13, stencil_1.extract<416, 447>());
  hw_uint<32> stencil_1_lane_14;
  set_at<0, 32, 32>(stencil_1_lane_14, stencil_1.extract<448, 479>());
  hw_uint<32> stencil_1_lane_15;
  set_at<0, 32, 32>(stencil_1_lane_15, stencil_1.extract<480, 511>());
  hw_uint<32> stencil_1_lane_16;
  set_at<0, 32, 32>(stencil_1_lane_16, stencil_1.extract<512, 543>());
  hw_uint<32> stencil_1_lane_17;
  set_at<0, 32, 32>(stencil_1_lane_17, stencil_1.extract<544, 575>());
  hw_uint<32> stencil_1_lane_18;
  set_at<0, 32, 32>(stencil_1_lane_18, stencil_1.extract<576, 607>());
  hw_uint<32> stencil_1_lane_19;
  set_at<0, 32, 32>(stencil_1_lane_19, stencil_1.extract<608, 639>());
  hw_uint<32> stencil_1_lane_20;
  set_at<0, 32, 32>(stencil_1_lane_20, stencil_1.extract<640, 671>());
  hw_uint<32> stencil_1_lane_21;
  set_at<0, 32, 32>(stencil_1_lane_21, stencil_1.extract<672, 703>());
  hw_uint<32> stencil_1_lane_22;
  set_at<0, 32, 32>(stencil_1_lane_22, stencil_1.extract<704, 735>());
  hw_uint<32> stencil_1_lane_23;
  set_at<0, 32, 32>(stencil_1_lane_23, stencil_1.extract<736, 767>());
  hw_uint<32> stencil_1_lane_24;
  set_at<0, 32, 32>(stencil_1_lane_24, stencil_1.extract<768, 799>());
  hw_uint<32> stencil_1_lane_25;
  set_at<0, 32, 32>(stencil_1_lane_25, stencil_1.extract<800, 831>());
  hw_uint<32> stencil_1_lane_26;
  set_at<0, 32, 32>(stencil_1_lane_26, stencil_1.extract<832, 863>());
  hw_uint<32> stencil_1_lane_27;
  set_at<0, 32, 32>(stencil_1_lane_27, stencil_1.extract<864, 895>());
  hw_uint<32> stencil_1_lane_28;
  set_at<0, 32, 32>(stencil_1_lane_28, stencil_1.extract<896, 927>());
  hw_uint<32> stencil_1_lane_29;
  set_at<0, 32, 32>(stencil_1_lane_29, stencil_1.extract<928, 959>());
  hw_uint<32> stencil_1_lane_30;
  set_at<0, 32, 32>(stencil_1_lane_30, stencil_1.extract<960, 991>());
  hw_uint<32> stencil_1_lane_31;
  set_at<0, 32, 32>(stencil_1_lane_31, stencil_1.extract<992, 1023>());
  hw_uint<32> stencil_1_lane_32;
  set_at<0, 32, 32>(stencil_1_lane_32, stencil_1.extract<1024, 1055>());
  hw_uint<32> stencil_1_lane_33;
  set_at<0, 32, 32>(stencil_1_lane_33, stencil_1.extract<1056, 1087>());
  hw_uint<32> stencil_1_lane_34;
  set_at<0, 32, 32>(stencil_1_lane_34, stencil_1.extract<1088, 1119>());
  hw_uint<32> stencil_1_lane_35;
  set_at<0, 32, 32>(stencil_1_lane_35, stencil_1.extract<1120, 1151>());
  hw_uint<32> stencil_2_lane_0;
  set_at<0, 32, 32>(stencil_2_lane_0, stencil_2.extract<0, 31>());
  hw_uint<32> stencil_2_lane_1;
  set_at<0, 32, 32>(stencil_2_lane_1, stencil_2.extract<32, 63>());
  hw_uint<32> stencil_2_lane_2;
  set_at<0, 32, 32>(stencil_2_lane_2, stencil_2.extract<64, 95>());
  hw_uint<32> stencil_2_lane_3;
  set_at<0, 32, 32>(stencil_2_lane_3, stencil_2.extract<96, 127>());

	
  hw_uint<32 > stencil_1_lane_0_pack;
  set_at<0, 32, 32>(stencil_1_lane_0_pack, stencil_1_lane_0);
  hw_uint<32 > stencil_2_lane_0_pack;
  set_at<0, 32, 32>(stencil_2_lane_0_pack, stencil_2_lane_0);
auto res_update21_stencil_219_142_stencil_218__m_168_sm161_3419 = add(stencil_1_lane_0_pack, stencil_2_lane_0_pack);

	  hw_uint<32 > stencil_1_lane_1_pack;
  set_at<0, 32, 32>(stencil_1_lane_1_pack, stencil_1_lane_1);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218__m_168_sm161_3419_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218__m_168_sm161_3419_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_3419);
auto res_update21_stencil_219_040_stencil_218__m_170_sm161_3417 = add(stencil_1_lane_1_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_3419_pack);

	  hw_uint<32 > stencil_1_lane_2_pack;
  set_at<0, 32, 32>(stencil_1_lane_2_pack, stencil_1_lane_2);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218__m_170_sm161_3417_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218__m_170_sm161_3417_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_3417);
auto res_update21_stencil_219__m_138_stencil_218__m_172_sm161_3415 = add(stencil_1_lane_2_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_3417_pack);

	  hw_uint<32 > stencil_1_lane_3_pack;
  set_at<0, 32, 32>(stencil_1_lane_3_pack, stencil_1_lane_3);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218__m_172_sm161_3415_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218__m_172_sm161_3415_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_3415);
auto res_update21_stencil_219_142_stencil_218_074_sm161_3413 = add(stencil_1_lane_3_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_3415_pack);

	  hw_uint<32 > stencil_1_lane_4_pack;
  set_at<0, 32, 32>(stencil_1_lane_4_pack, stencil_1_lane_4);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_074_sm161_3413_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_074_sm161_3413_pack, res_update21_stencil_219_142_stencil_218_074_sm161_3413);
auto res_update21_stencil_219_040_stencil_218_076_sm161_3411 = add(stencil_1_lane_4_pack, res_update21_stencil_219_142_stencil_218_074_sm161_3413_pack);

	  hw_uint<32 > stencil_1_lane_5_pack;
  set_at<0, 32, 32>(stencil_1_lane_5_pack, stencil_1_lane_5);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_076_sm161_3411_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_076_sm161_3411_pack, res_update21_stencil_219_040_stencil_218_076_sm161_3411);
auto res_update21_stencil_219__m_138_stencil_218_078_sm161_3409 = add(stencil_1_lane_5_pack, res_update21_stencil_219_040_stencil_218_076_sm161_3411_pack);

	  hw_uint<32 > stencil_1_lane_6_pack;
  set_at<0, 32, 32>(stencil_1_lane_6_pack, stencil_1_lane_6);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218_078_sm161_3409_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218_078_sm161_3409_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_3409);
auto res_update21_stencil_219_142_stencil_218_180_sm161_3407 = add(stencil_1_lane_6_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_3409_pack);

	  hw_uint<32 > stencil_1_lane_7_pack;
  set_at<0, 32, 32>(stencil_1_lane_7_pack, stencil_1_lane_7);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_180_sm161_3407_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_180_sm161_3407_pack, res_update21_stencil_219_142_stencil_218_180_sm161_3407);
auto res_update21_stencil_219_040_stencil_218_182_sm161_3405 = add(stencil_1_lane_7_pack, res_update21_stencil_219_142_stencil_218_180_sm161_3407_pack);

	  hw_uint<32 > stencil_1_lane_8_pack;
  set_at<0, 32, 32>(stencil_1_lane_8_pack, stencil_1_lane_8);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_182_sm161_3405_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_182_sm161_3405_pack, res_update21_stencil_219_040_stencil_218_182_sm161_3405);
auto res_update21_stencil_219__m_138_stencil_218_184_sm161_3403 = add(stencil_1_lane_8_pack, res_update21_stencil_219_040_stencil_218_182_sm161_3405_pack);

	auto res_init20_sm161_3401 = set_zero_32();

	  hw_uint<32 > stencil_1_lane_9_pack;
  set_at<0, 32, 32>(stencil_1_lane_9_pack, stencil_1_lane_9);
  hw_uint<32 > stencil_2_lane_1_pack;
  set_at<0, 32, 32>(stencil_2_lane_1_pack, stencil_2_lane_1);
auto res_update21_stencil_219_142_stencil_218__m_168_sm161_2399 = add(stencil_1_lane_9_pack, stencil_2_lane_1_pack);

	  hw_uint<32 > stencil_1_lane_10_pack;
  set_at<0, 32, 32>(stencil_1_lane_10_pack, stencil_1_lane_10);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218__m_168_sm161_2399_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218__m_168_sm161_2399_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_2399);
auto res_update21_stencil_219_040_stencil_218__m_170_sm161_2397 = add(stencil_1_lane_10_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_2399_pack);

	  hw_uint<32 > stencil_1_lane_11_pack;
  set_at<0, 32, 32>(stencil_1_lane_11_pack, stencil_1_lane_11);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218__m_170_sm161_2397_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218__m_170_sm161_2397_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_2397);
auto res_update21_stencil_219__m_138_stencil_218__m_172_sm161_2395 = add(stencil_1_lane_11_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_2397_pack);

	  hw_uint<32 > stencil_1_lane_12_pack;
  set_at<0, 32, 32>(stencil_1_lane_12_pack, stencil_1_lane_12);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218__m_172_sm161_2395_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218__m_172_sm161_2395_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_2395);
auto res_update21_stencil_219_142_stencil_218_074_sm161_2393 = add(stencil_1_lane_12_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_2395_pack);

	  hw_uint<32 > stencil_1_lane_13_pack;
  set_at<0, 32, 32>(stencil_1_lane_13_pack, stencil_1_lane_13);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_074_sm161_2393_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_074_sm161_2393_pack, res_update21_stencil_219_142_stencil_218_074_sm161_2393);
auto res_update21_stencil_219_040_stencil_218_076_sm161_2391 = add(stencil_1_lane_13_pack, res_update21_stencil_219_142_stencil_218_074_sm161_2393_pack);

	  hw_uint<32 > stencil_1_lane_14_pack;
  set_at<0, 32, 32>(stencil_1_lane_14_pack, stencil_1_lane_14);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_076_sm161_2391_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_076_sm161_2391_pack, res_update21_stencil_219_040_stencil_218_076_sm161_2391);
auto res_update21_stencil_219__m_138_stencil_218_078_sm161_2389 = add(stencil_1_lane_14_pack, res_update21_stencil_219_040_stencil_218_076_sm161_2391_pack);

	  hw_uint<32 > stencil_1_lane_15_pack;
  set_at<0, 32, 32>(stencil_1_lane_15_pack, stencil_1_lane_15);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218_078_sm161_2389_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218_078_sm161_2389_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_2389);
auto res_update21_stencil_219_142_stencil_218_180_sm161_2387 = add(stencil_1_lane_15_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_2389_pack);

	  hw_uint<32 > stencil_1_lane_16_pack;
  set_at<0, 32, 32>(stencil_1_lane_16_pack, stencil_1_lane_16);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_180_sm161_2387_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_180_sm161_2387_pack, res_update21_stencil_219_142_stencil_218_180_sm161_2387);
auto res_update21_stencil_219_040_stencil_218_182_sm161_2385 = add(stencil_1_lane_16_pack, res_update21_stencil_219_142_stencil_218_180_sm161_2387_pack);

	  hw_uint<32 > stencil_1_lane_17_pack;
  set_at<0, 32, 32>(stencil_1_lane_17_pack, stencil_1_lane_17);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_182_sm161_2385_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_182_sm161_2385_pack, res_update21_stencil_219_040_stencil_218_182_sm161_2385);
auto res_update21_stencil_219__m_138_stencil_218_184_sm161_2383 = add(stencil_1_lane_17_pack, res_update21_stencil_219_040_stencil_218_182_sm161_2385_pack);

	auto res_init20_sm161_2381 = set_zero_32();

	  hw_uint<32 > stencil_1_lane_18_pack;
  set_at<0, 32, 32>(stencil_1_lane_18_pack, stencil_1_lane_18);
  hw_uint<32 > stencil_2_lane_2_pack;
  set_at<0, 32, 32>(stencil_2_lane_2_pack, stencil_2_lane_2);
auto res_update21_stencil_219_142_stencil_218__m_168_sm161_1379 = add(stencil_1_lane_18_pack, stencil_2_lane_2_pack);

	  hw_uint<32 > stencil_1_lane_19_pack;
  set_at<0, 32, 32>(stencil_1_lane_19_pack, stencil_1_lane_19);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218__m_168_sm161_1379_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218__m_168_sm161_1379_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_1379);
auto res_update21_stencil_219_040_stencil_218__m_170_sm161_1377 = add(stencil_1_lane_19_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_1379_pack);

	  hw_uint<32 > stencil_1_lane_20_pack;
  set_at<0, 32, 32>(stencil_1_lane_20_pack, stencil_1_lane_20);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218__m_170_sm161_1377_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218__m_170_sm161_1377_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_1377);
auto res_update21_stencil_219__m_138_stencil_218__m_172_sm161_1375 = add(stencil_1_lane_20_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_1377_pack);

	  hw_uint<32 > stencil_1_lane_21_pack;
  set_at<0, 32, 32>(stencil_1_lane_21_pack, stencil_1_lane_21);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218__m_172_sm161_1375_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218__m_172_sm161_1375_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_1375);
auto res_update21_stencil_219_142_stencil_218_074_sm161_1373 = add(stencil_1_lane_21_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_1375_pack);

	  hw_uint<32 > stencil_1_lane_22_pack;
  set_at<0, 32, 32>(stencil_1_lane_22_pack, stencil_1_lane_22);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_074_sm161_1373_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_074_sm161_1373_pack, res_update21_stencil_219_142_stencil_218_074_sm161_1373);
auto res_update21_stencil_219_040_stencil_218_076_sm161_1371 = add(stencil_1_lane_22_pack, res_update21_stencil_219_142_stencil_218_074_sm161_1373_pack);

	  hw_uint<32 > stencil_1_lane_23_pack;
  set_at<0, 32, 32>(stencil_1_lane_23_pack, stencil_1_lane_23);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_076_sm161_1371_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_076_sm161_1371_pack, res_update21_stencil_219_040_stencil_218_076_sm161_1371);
auto res_update21_stencil_219__m_138_stencil_218_078_sm161_1369 = add(stencil_1_lane_23_pack, res_update21_stencil_219_040_stencil_218_076_sm161_1371_pack);

	  hw_uint<32 > stencil_1_lane_24_pack;
  set_at<0, 32, 32>(stencil_1_lane_24_pack, stencil_1_lane_24);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218_078_sm161_1369_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218_078_sm161_1369_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_1369);
auto res_update21_stencil_219_142_stencil_218_180_sm161_1367 = add(stencil_1_lane_24_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_1369_pack);

	  hw_uint<32 > stencil_1_lane_25_pack;
  set_at<0, 32, 32>(stencil_1_lane_25_pack, stencil_1_lane_25);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_180_sm161_1367_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_180_sm161_1367_pack, res_update21_stencil_219_142_stencil_218_180_sm161_1367);
auto res_update21_stencil_219_040_stencil_218_182_sm161_1365 = add(stencil_1_lane_25_pack, res_update21_stencil_219_142_stencil_218_180_sm161_1367_pack);

	  hw_uint<32 > stencil_1_lane_26_pack;
  set_at<0, 32, 32>(stencil_1_lane_26_pack, stencil_1_lane_26);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_182_sm161_1365_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_182_sm161_1365_pack, res_update21_stencil_219_040_stencil_218_182_sm161_1365);
auto res_update21_stencil_219__m_138_stencil_218_184_sm161_1363 = add(stencil_1_lane_26_pack, res_update21_stencil_219_040_stencil_218_182_sm161_1365_pack);

	auto res_init20_sm161_1361 = set_zero_32();

	  hw_uint<32 > stencil_1_lane_27_pack;
  set_at<0, 32, 32>(stencil_1_lane_27_pack, stencil_1_lane_27);
  hw_uint<32 > stencil_2_lane_3_pack;
  set_at<0, 32, 32>(stencil_2_lane_3_pack, stencil_2_lane_3);
auto res_update21_stencil_219_142_stencil_218__m_168_sm161_0359 = add(stencil_1_lane_27_pack, stencil_2_lane_3_pack);

	  hw_uint<32 > stencil_1_lane_28_pack;
  set_at<0, 32, 32>(stencil_1_lane_28_pack, stencil_1_lane_28);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218__m_168_sm161_0359_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218__m_168_sm161_0359_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_0359);
auto res_update21_stencil_219_040_stencil_218__m_170_sm161_0357 = add(stencil_1_lane_28_pack, res_update21_stencil_219_142_stencil_218__m_168_sm161_0359_pack);

	  hw_uint<32 > stencil_1_lane_29_pack;
  set_at<0, 32, 32>(stencil_1_lane_29_pack, stencil_1_lane_29);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218__m_170_sm161_0357_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218__m_170_sm161_0357_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_0357);
auto res_update21_stencil_219__m_138_stencil_218__m_172_sm161_0355 = add(stencil_1_lane_29_pack, res_update21_stencil_219_040_stencil_218__m_170_sm161_0357_pack);

	  hw_uint<32 > stencil_1_lane_30_pack;
  set_at<0, 32, 32>(stencil_1_lane_30_pack, stencil_1_lane_30);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218__m_172_sm161_0355_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218__m_172_sm161_0355_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_0355);
auto res_update21_stencil_219_142_stencil_218_074_sm161_0353 = add(stencil_1_lane_30_pack, res_update21_stencil_219__m_138_stencil_218__m_172_sm161_0355_pack);

	  hw_uint<32 > stencil_1_lane_31_pack;
  set_at<0, 32, 32>(stencil_1_lane_31_pack, stencil_1_lane_31);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_074_sm161_0353_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_074_sm161_0353_pack, res_update21_stencil_219_142_stencil_218_074_sm161_0353);
auto res_update21_stencil_219_040_stencil_218_076_sm161_0351 = add(stencil_1_lane_31_pack, res_update21_stencil_219_142_stencil_218_074_sm161_0353_pack);

	  hw_uint<32 > stencil_1_lane_32_pack;
  set_at<0, 32, 32>(stencil_1_lane_32_pack, stencil_1_lane_32);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_076_sm161_0351_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_076_sm161_0351_pack, res_update21_stencil_219_040_stencil_218_076_sm161_0351);
auto res_update21_stencil_219__m_138_stencil_218_078_sm161_0349 = add(stencil_1_lane_32_pack, res_update21_stencil_219_040_stencil_218_076_sm161_0351_pack);

	  hw_uint<32 > stencil_1_lane_33_pack;
  set_at<0, 32, 32>(stencil_1_lane_33_pack, stencil_1_lane_33);
  hw_uint<32 > res_update21_stencil_219__m_138_stencil_218_078_sm161_0349_pack;
  set_at<0, 32, 32>(res_update21_stencil_219__m_138_stencil_218_078_sm161_0349_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_0349);
auto res_update21_stencil_219_142_stencil_218_180_sm161_0347 = add(stencil_1_lane_33_pack, res_update21_stencil_219__m_138_stencil_218_078_sm161_0349_pack);

	  hw_uint<32 > stencil_1_lane_34_pack;
  set_at<0, 32, 32>(stencil_1_lane_34_pack, stencil_1_lane_34);
  hw_uint<32 > res_update21_stencil_219_142_stencil_218_180_sm161_0347_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_142_stencil_218_180_sm161_0347_pack, res_update21_stencil_219_142_stencil_218_180_sm161_0347);
auto res_update21_stencil_219_040_stencil_218_182_sm161_0345 = add(stencil_1_lane_34_pack, res_update21_stencil_219_142_stencil_218_180_sm161_0347_pack);

	  hw_uint<32 > stencil_1_lane_35_pack;
  set_at<0, 32, 32>(stencil_1_lane_35_pack, stencil_1_lane_35);
  hw_uint<32 > res_update21_stencil_219_040_stencil_218_182_sm161_0345_pack;
  set_at<0, 32, 32>(res_update21_stencil_219_040_stencil_218_182_sm161_0345_pack, res_update21_stencil_219_040_stencil_218_182_sm161_0345);
auto res_update21_stencil_219__m_138_stencil_218_184_sm161_0343 = add(stencil_1_lane_35_pack, res_update21_stencil_219_040_stencil_218_182_sm161_0345_pack);

	auto res_init20_sm161_0341 = set_zero_32();
  hw_uint<128 > return_value591;
  set_at<0, 128, 32>(return_value591, res_init20_sm161_3401);
  set_at<32, 128, 32>(return_value591, res_init20_sm161_2381);
  set_at<64, 128, 32>(return_value591, res_init20_sm161_1361);
  set_at<96, 128, 32>(return_value591, res_init20_sm161_0341);
  return return_value591;

}

hw_uint<128> stencil_323_cu593(hw_uint<32*36>& stencil_2, hw_uint<32*4>& stencil_3) {
  hw_uint<32> stencil_2_lane_0;
  set_at<0, 32, 32>(stencil_2_lane_0, stencil_2.extract<0, 31>());
  hw_uint<32> stencil_2_lane_1;
  set_at<0, 32, 32>(stencil_2_lane_1, stencil_2.extract<32, 63>());
  hw_uint<32> stencil_2_lane_2;
  set_at<0, 32, 32>(stencil_2_lane_2, stencil_2.extract<64, 95>());
  hw_uint<32> stencil_2_lane_3;
  set_at<0, 32, 32>(stencil_2_lane_3, stencil_2.extract<96, 127>());
  hw_uint<32> stencil_2_lane_4;
  set_at<0, 32, 32>(stencil_2_lane_4, stencil_2.extract<128, 159>());
  hw_uint<32> stencil_2_lane_5;
  set_at<0, 32, 32>(stencil_2_lane_5, stencil_2.extract<160, 191>());
  hw_uint<32> stencil_2_lane_6;
  set_at<0, 32, 32>(stencil_2_lane_6, stencil_2.extract<192, 223>());
  hw_uint<32> stencil_2_lane_7;
  set_at<0, 32, 32>(stencil_2_lane_7, stencil_2.extract<224, 255>());
  hw_uint<32> stencil_2_lane_8;
  set_at<0, 32, 32>(stencil_2_lane_8, stencil_2.extract<256, 287>());
  hw_uint<32> stencil_2_lane_9;
  set_at<0, 32, 32>(stencil_2_lane_9, stencil_2.extract<288, 319>());
  hw_uint<32> stencil_2_lane_10;
  set_at<0, 32, 32>(stencil_2_lane_10, stencil_2.extract<320, 351>());
  hw_uint<32> stencil_2_lane_11;
  set_at<0, 32, 32>(stencil_2_lane_11, stencil_2.extract<352, 383>());
  hw_uint<32> stencil_2_lane_12;
  set_at<0, 32, 32>(stencil_2_lane_12, stencil_2.extract<384, 415>());
  hw_uint<32> stencil_2_lane_13;
  set_at<0, 32, 32>(stencil_2_lane_13, stencil_2.extract<416, 447>());
  hw_uint<32> stencil_2_lane_14;
  set_at<0, 32, 32>(stencil_2_lane_14, stencil_2.extract<448, 479>());
  hw_uint<32> stencil_2_lane_15;
  set_at<0, 32, 32>(stencil_2_lane_15, stencil_2.extract<480, 511>());
  hw_uint<32> stencil_2_lane_16;
  set_at<0, 32, 32>(stencil_2_lane_16, stencil_2.extract<512, 543>());
  hw_uint<32> stencil_2_lane_17;
  set_at<0, 32, 32>(stencil_2_lane_17, stencil_2.extract<544, 575>());
  hw_uint<32> stencil_2_lane_18;
  set_at<0, 32, 32>(stencil_2_lane_18, stencil_2.extract<576, 607>());
  hw_uint<32> stencil_2_lane_19;
  set_at<0, 32, 32>(stencil_2_lane_19, stencil_2.extract<608, 639>());
  hw_uint<32> stencil_2_lane_20;
  set_at<0, 32, 32>(stencil_2_lane_20, stencil_2.extract<640, 671>());
  hw_uint<32> stencil_2_lane_21;
  set_at<0, 32, 32>(stencil_2_lane_21, stencil_2.extract<672, 703>());
  hw_uint<32> stencil_2_lane_22;
  set_at<0, 32, 32>(stencil_2_lane_22, stencil_2.extract<704, 735>());
  hw_uint<32> stencil_2_lane_23;
  set_at<0, 32, 32>(stencil_2_lane_23, stencil_2.extract<736, 767>());
  hw_uint<32> stencil_2_lane_24;
  set_at<0, 32, 32>(stencil_2_lane_24, stencil_2.extract<768, 799>());
  hw_uint<32> stencil_2_lane_25;
  set_at<0, 32, 32>(stencil_2_lane_25, stencil_2.extract<800, 831>());
  hw_uint<32> stencil_2_lane_26;
  set_at<0, 32, 32>(stencil_2_lane_26, stencil_2.extract<832, 863>());
  hw_uint<32> stencil_2_lane_27;
  set_at<0, 32, 32>(stencil_2_lane_27, stencil_2.extract<864, 895>());
  hw_uint<32> stencil_2_lane_28;
  set_at<0, 32, 32>(stencil_2_lane_28, stencil_2.extract<896, 927>());
  hw_uint<32> stencil_2_lane_29;
  set_at<0, 32, 32>(stencil_2_lane_29, stencil_2.extract<928, 959>());
  hw_uint<32> stencil_2_lane_30;
  set_at<0, 32, 32>(stencil_2_lane_30, stencil_2.extract<960, 991>());
  hw_uint<32> stencil_2_lane_31;
  set_at<0, 32, 32>(stencil_2_lane_31, stencil_2.extract<992, 1023>());
  hw_uint<32> stencil_2_lane_32;
  set_at<0, 32, 32>(stencil_2_lane_32, stencil_2.extract<1024, 1055>());
  hw_uint<32> stencil_2_lane_33;
  set_at<0, 32, 32>(stencil_2_lane_33, stencil_2.extract<1056, 1087>());
  hw_uint<32> stencil_2_lane_34;
  set_at<0, 32, 32>(stencil_2_lane_34, stencil_2.extract<1088, 1119>());
  hw_uint<32> stencil_2_lane_35;
  set_at<0, 32, 32>(stencil_2_lane_35, stencil_2.extract<1120, 1151>());
  hw_uint<32> stencil_3_lane_0;
  set_at<0, 32, 32>(stencil_3_lane_0, stencil_3.extract<0, 31>());
  hw_uint<32> stencil_3_lane_1;
  set_at<0, 32, 32>(stencil_3_lane_1, stencil_3.extract<32, 63>());
  hw_uint<32> stencil_3_lane_2;
  set_at<0, 32, 32>(stencil_3_lane_2, stencil_3.extract<64, 95>());
  hw_uint<32> stencil_3_lane_3;
  set_at<0, 32, 32>(stencil_3_lane_3, stencil_3.extract<96, 127>());

	
  hw_uint<32 > stencil_2_lane_0_pack;
  set_at<0, 32, 32>(stencil_2_lane_0_pack, stencil_2_lane_0);
  hw_uint<32 > stencil_3_lane_0_pack;
  set_at<0, 32, 32>(stencil_3_lane_0_pack, stencil_3_lane_0);
auto res_update27_stencil_325_154_stencil_324__m_186_sm162_3579 = add(stencil_2_lane_0_pack, stencil_3_lane_0_pack);

	  hw_uint<32 > stencil_2_lane_1_pack;
  set_at<0, 32, 32>(stencil_2_lane_1_pack, stencil_2_lane_1);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324__m_186_sm162_3579_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324__m_186_sm162_3579_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_3579);
auto res_update27_stencil_325_052_stencil_324__m_188_sm162_3577 = add(stencil_2_lane_1_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_3579_pack);

	  hw_uint<32 > stencil_2_lane_2_pack;
  set_at<0, 32, 32>(stencil_2_lane_2_pack, stencil_2_lane_2);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324__m_188_sm162_3577_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324__m_188_sm162_3577_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_3577);
auto res_update27_stencil_325__m_150_stencil_324__m_190_sm162_3575 = add(stencil_2_lane_2_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_3577_pack);

	  hw_uint<32 > stencil_2_lane_3_pack;
  set_at<0, 32, 32>(stencil_2_lane_3_pack, stencil_2_lane_3);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324__m_190_sm162_3575_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324__m_190_sm162_3575_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_3575);
auto res_update27_stencil_325_154_stencil_324_092_sm162_3573 = add(stencil_2_lane_3_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_3575_pack);

	  hw_uint<32 > stencil_2_lane_4_pack;
  set_at<0, 32, 32>(stencil_2_lane_4_pack, stencil_2_lane_4);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_092_sm162_3573_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_092_sm162_3573_pack, res_update27_stencil_325_154_stencil_324_092_sm162_3573);
auto res_update27_stencil_325_052_stencil_324_094_sm162_3571 = add(stencil_2_lane_4_pack, res_update27_stencil_325_154_stencil_324_092_sm162_3573_pack);

	  hw_uint<32 > stencil_2_lane_5_pack;
  set_at<0, 32, 32>(stencil_2_lane_5_pack, stencil_2_lane_5);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_094_sm162_3571_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_094_sm162_3571_pack, res_update27_stencil_325_052_stencil_324_094_sm162_3571);
auto res_update27_stencil_325__m_150_stencil_324_096_sm162_3569 = add(stencil_2_lane_5_pack, res_update27_stencil_325_052_stencil_324_094_sm162_3571_pack);

	  hw_uint<32 > stencil_2_lane_6_pack;
  set_at<0, 32, 32>(stencil_2_lane_6_pack, stencil_2_lane_6);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324_096_sm162_3569_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324_096_sm162_3569_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_3569);
auto res_update27_stencil_325_154_stencil_324_198_sm162_3567 = add(stencil_2_lane_6_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_3569_pack);

	  hw_uint<32 > stencil_2_lane_7_pack;
  set_at<0, 32, 32>(stencil_2_lane_7_pack, stencil_2_lane_7);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_198_sm162_3567_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_198_sm162_3567_pack, res_update27_stencil_325_154_stencil_324_198_sm162_3567);
auto res_update27_stencil_325_052_stencil_324_1100_sm162_3565 = add(stencil_2_lane_7_pack, res_update27_stencil_325_154_stencil_324_198_sm162_3567_pack);

	  hw_uint<32 > stencil_2_lane_8_pack;
  set_at<0, 32, 32>(stencil_2_lane_8_pack, stencil_2_lane_8);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_1100_sm162_3565_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_1100_sm162_3565_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_3565);
auto res_update27_stencil_325__m_150_stencil_324_1102_sm162_3563 = add(stencil_2_lane_8_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_3565_pack);

	auto res_init26_sm162_3561 = set_zero_32();

	  hw_uint<32 > stencil_2_lane_9_pack;
  set_at<0, 32, 32>(stencil_2_lane_9_pack, stencil_2_lane_9);
  hw_uint<32 > stencil_3_lane_1_pack;
  set_at<0, 32, 32>(stencil_3_lane_1_pack, stencil_3_lane_1);
auto res_update27_stencil_325_154_stencil_324__m_186_sm162_2559 = add(stencil_2_lane_9_pack, stencil_3_lane_1_pack);

	  hw_uint<32 > stencil_2_lane_10_pack;
  set_at<0, 32, 32>(stencil_2_lane_10_pack, stencil_2_lane_10);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324__m_186_sm162_2559_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324__m_186_sm162_2559_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_2559);
auto res_update27_stencil_325_052_stencil_324__m_188_sm162_2557 = add(stencil_2_lane_10_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_2559_pack);

	  hw_uint<32 > stencil_2_lane_11_pack;
  set_at<0, 32, 32>(stencil_2_lane_11_pack, stencil_2_lane_11);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324__m_188_sm162_2557_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324__m_188_sm162_2557_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_2557);
auto res_update27_stencil_325__m_150_stencil_324__m_190_sm162_2555 = add(stencil_2_lane_11_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_2557_pack);

	  hw_uint<32 > stencil_2_lane_12_pack;
  set_at<0, 32, 32>(stencil_2_lane_12_pack, stencil_2_lane_12);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324__m_190_sm162_2555_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324__m_190_sm162_2555_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_2555);
auto res_update27_stencil_325_154_stencil_324_092_sm162_2553 = add(stencil_2_lane_12_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_2555_pack);

	  hw_uint<32 > stencil_2_lane_13_pack;
  set_at<0, 32, 32>(stencil_2_lane_13_pack, stencil_2_lane_13);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_092_sm162_2553_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_092_sm162_2553_pack, res_update27_stencil_325_154_stencil_324_092_sm162_2553);
auto res_update27_stencil_325_052_stencil_324_094_sm162_2551 = add(stencil_2_lane_13_pack, res_update27_stencil_325_154_stencil_324_092_sm162_2553_pack);

	  hw_uint<32 > stencil_2_lane_14_pack;
  set_at<0, 32, 32>(stencil_2_lane_14_pack, stencil_2_lane_14);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_094_sm162_2551_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_094_sm162_2551_pack, res_update27_stencil_325_052_stencil_324_094_sm162_2551);
auto res_update27_stencil_325__m_150_stencil_324_096_sm162_2549 = add(stencil_2_lane_14_pack, res_update27_stencil_325_052_stencil_324_094_sm162_2551_pack);

	  hw_uint<32 > stencil_2_lane_15_pack;
  set_at<0, 32, 32>(stencil_2_lane_15_pack, stencil_2_lane_15);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324_096_sm162_2549_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324_096_sm162_2549_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_2549);
auto res_update27_stencil_325_154_stencil_324_198_sm162_2547 = add(stencil_2_lane_15_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_2549_pack);

	  hw_uint<32 > stencil_2_lane_16_pack;
  set_at<0, 32, 32>(stencil_2_lane_16_pack, stencil_2_lane_16);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_198_sm162_2547_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_198_sm162_2547_pack, res_update27_stencil_325_154_stencil_324_198_sm162_2547);
auto res_update27_stencil_325_052_stencil_324_1100_sm162_2545 = add(stencil_2_lane_16_pack, res_update27_stencil_325_154_stencil_324_198_sm162_2547_pack);

	  hw_uint<32 > stencil_2_lane_17_pack;
  set_at<0, 32, 32>(stencil_2_lane_17_pack, stencil_2_lane_17);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_1100_sm162_2545_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_1100_sm162_2545_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_2545);
auto res_update27_stencil_325__m_150_stencil_324_1102_sm162_2543 = add(stencil_2_lane_17_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_2545_pack);

	auto res_init26_sm162_2541 = set_zero_32();

	  hw_uint<32 > stencil_2_lane_18_pack;
  set_at<0, 32, 32>(stencil_2_lane_18_pack, stencil_2_lane_18);
  hw_uint<32 > stencil_3_lane_2_pack;
  set_at<0, 32, 32>(stencil_3_lane_2_pack, stencil_3_lane_2);
auto res_update27_stencil_325_154_stencil_324__m_186_sm162_1539 = add(stencil_2_lane_18_pack, stencil_3_lane_2_pack);

	  hw_uint<32 > stencil_2_lane_19_pack;
  set_at<0, 32, 32>(stencil_2_lane_19_pack, stencil_2_lane_19);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324__m_186_sm162_1539_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324__m_186_sm162_1539_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_1539);
auto res_update27_stencil_325_052_stencil_324__m_188_sm162_1537 = add(stencil_2_lane_19_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_1539_pack);

	  hw_uint<32 > stencil_2_lane_20_pack;
  set_at<0, 32, 32>(stencil_2_lane_20_pack, stencil_2_lane_20);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324__m_188_sm162_1537_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324__m_188_sm162_1537_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_1537);
auto res_update27_stencil_325__m_150_stencil_324__m_190_sm162_1535 = add(stencil_2_lane_20_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_1537_pack);

	  hw_uint<32 > stencil_2_lane_21_pack;
  set_at<0, 32, 32>(stencil_2_lane_21_pack, stencil_2_lane_21);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324__m_190_sm162_1535_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324__m_190_sm162_1535_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_1535);
auto res_update27_stencil_325_154_stencil_324_092_sm162_1533 = add(stencil_2_lane_21_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_1535_pack);

	  hw_uint<32 > stencil_2_lane_22_pack;
  set_at<0, 32, 32>(stencil_2_lane_22_pack, stencil_2_lane_22);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_092_sm162_1533_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_092_sm162_1533_pack, res_update27_stencil_325_154_stencil_324_092_sm162_1533);
auto res_update27_stencil_325_052_stencil_324_094_sm162_1531 = add(stencil_2_lane_22_pack, res_update27_stencil_325_154_stencil_324_092_sm162_1533_pack);

	  hw_uint<32 > stencil_2_lane_23_pack;
  set_at<0, 32, 32>(stencil_2_lane_23_pack, stencil_2_lane_23);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_094_sm162_1531_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_094_sm162_1531_pack, res_update27_stencil_325_052_stencil_324_094_sm162_1531);
auto res_update27_stencil_325__m_150_stencil_324_096_sm162_1529 = add(stencil_2_lane_23_pack, res_update27_stencil_325_052_stencil_324_094_sm162_1531_pack);

	  hw_uint<32 > stencil_2_lane_24_pack;
  set_at<0, 32, 32>(stencil_2_lane_24_pack, stencil_2_lane_24);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324_096_sm162_1529_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324_096_sm162_1529_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_1529);
auto res_update27_stencil_325_154_stencil_324_198_sm162_1527 = add(stencil_2_lane_24_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_1529_pack);

	  hw_uint<32 > stencil_2_lane_25_pack;
  set_at<0, 32, 32>(stencil_2_lane_25_pack, stencil_2_lane_25);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_198_sm162_1527_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_198_sm162_1527_pack, res_update27_stencil_325_154_stencil_324_198_sm162_1527);
auto res_update27_stencil_325_052_stencil_324_1100_sm162_1525 = add(stencil_2_lane_25_pack, res_update27_stencil_325_154_stencil_324_198_sm162_1527_pack);

	  hw_uint<32 > stencil_2_lane_26_pack;
  set_at<0, 32, 32>(stencil_2_lane_26_pack, stencil_2_lane_26);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_1100_sm162_1525_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_1100_sm162_1525_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_1525);
auto res_update27_stencil_325__m_150_stencil_324_1102_sm162_1523 = add(stencil_2_lane_26_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_1525_pack);

	auto res_init26_sm162_1521 = set_zero_32();

	  hw_uint<32 > stencil_2_lane_27_pack;
  set_at<0, 32, 32>(stencil_2_lane_27_pack, stencil_2_lane_27);
  hw_uint<32 > stencil_3_lane_3_pack;
  set_at<0, 32, 32>(stencil_3_lane_3_pack, stencil_3_lane_3);
auto res_update27_stencil_325_154_stencil_324__m_186_sm162_0519 = add(stencil_2_lane_27_pack, stencil_3_lane_3_pack);

	  hw_uint<32 > stencil_2_lane_28_pack;
  set_at<0, 32, 32>(stencil_2_lane_28_pack, stencil_2_lane_28);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324__m_186_sm162_0519_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324__m_186_sm162_0519_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_0519);
auto res_update27_stencil_325_052_stencil_324__m_188_sm162_0517 = add(stencil_2_lane_28_pack, res_update27_stencil_325_154_stencil_324__m_186_sm162_0519_pack);

	  hw_uint<32 > stencil_2_lane_29_pack;
  set_at<0, 32, 32>(stencil_2_lane_29_pack, stencil_2_lane_29);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324__m_188_sm162_0517_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324__m_188_sm162_0517_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_0517);
auto res_update27_stencil_325__m_150_stencil_324__m_190_sm162_0515 = add(stencil_2_lane_29_pack, res_update27_stencil_325_052_stencil_324__m_188_sm162_0517_pack);

	  hw_uint<32 > stencil_2_lane_30_pack;
  set_at<0, 32, 32>(stencil_2_lane_30_pack, stencil_2_lane_30);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324__m_190_sm162_0515_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324__m_190_sm162_0515_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_0515);
auto res_update27_stencil_325_154_stencil_324_092_sm162_0513 = add(stencil_2_lane_30_pack, res_update27_stencil_325__m_150_stencil_324__m_190_sm162_0515_pack);

	  hw_uint<32 > stencil_2_lane_31_pack;
  set_at<0, 32, 32>(stencil_2_lane_31_pack, stencil_2_lane_31);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_092_sm162_0513_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_092_sm162_0513_pack, res_update27_stencil_325_154_stencil_324_092_sm162_0513);
auto res_update27_stencil_325_052_stencil_324_094_sm162_0511 = add(stencil_2_lane_31_pack, res_update27_stencil_325_154_stencil_324_092_sm162_0513_pack);

	  hw_uint<32 > stencil_2_lane_32_pack;
  set_at<0, 32, 32>(stencil_2_lane_32_pack, stencil_2_lane_32);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_094_sm162_0511_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_094_sm162_0511_pack, res_update27_stencil_325_052_stencil_324_094_sm162_0511);
auto res_update27_stencil_325__m_150_stencil_324_096_sm162_0509 = add(stencil_2_lane_32_pack, res_update27_stencil_325_052_stencil_324_094_sm162_0511_pack);

	  hw_uint<32 > stencil_2_lane_33_pack;
  set_at<0, 32, 32>(stencil_2_lane_33_pack, stencil_2_lane_33);
  hw_uint<32 > res_update27_stencil_325__m_150_stencil_324_096_sm162_0509_pack;
  set_at<0, 32, 32>(res_update27_stencil_325__m_150_stencil_324_096_sm162_0509_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_0509);
auto res_update27_stencil_325_154_stencil_324_198_sm162_0507 = add(stencil_2_lane_33_pack, res_update27_stencil_325__m_150_stencil_324_096_sm162_0509_pack);

	  hw_uint<32 > stencil_2_lane_34_pack;
  set_at<0, 32, 32>(stencil_2_lane_34_pack, stencil_2_lane_34);
  hw_uint<32 > res_update27_stencil_325_154_stencil_324_198_sm162_0507_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_154_stencil_324_198_sm162_0507_pack, res_update27_stencil_325_154_stencil_324_198_sm162_0507);
auto res_update27_stencil_325_052_stencil_324_1100_sm162_0505 = add(stencil_2_lane_34_pack, res_update27_stencil_325_154_stencil_324_198_sm162_0507_pack);

	  hw_uint<32 > stencil_2_lane_35_pack;
  set_at<0, 32, 32>(stencil_2_lane_35_pack, stencil_2_lane_35);
  hw_uint<32 > res_update27_stencil_325_052_stencil_324_1100_sm162_0505_pack;
  set_at<0, 32, 32>(res_update27_stencil_325_052_stencil_324_1100_sm162_0505_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_0505);
auto res_update27_stencil_325__m_150_stencil_324_1102_sm162_0503 = add(stencil_2_lane_35_pack, res_update27_stencil_325_052_stencil_324_1100_sm162_0505_pack);

	auto res_init26_sm162_0501 = set_zero_32();
  hw_uint<128 > return_value594;
  set_at<0, 128, 32>(return_value594, res_init26_sm162_3561);
  set_at<32, 128, 32>(return_value594, res_init26_sm162_2541);
  set_at<64, 128, 32>(return_value594, res_init26_sm162_1521);
  set_at<96, 128, 32>(return_value594, res_init26_sm162_0501);
  return return_value594;

}

hw_uint<128> stencil_429_cu596(hw_uint<32*36>& stencil_3, hw_uint<32*4>& stencil_4) {
  hw_uint<32> stencil_3_lane_0;
  set_at<0, 32, 32>(stencil_3_lane_0, stencil_3.extract<0, 31>());
  hw_uint<32> stencil_3_lane_1;
  set_at<0, 32, 32>(stencil_3_lane_1, stencil_3.extract<32, 63>());
  hw_uint<32> stencil_3_lane_2;
  set_at<0, 32, 32>(stencil_3_lane_2, stencil_3.extract<64, 95>());
  hw_uint<32> stencil_3_lane_3;
  set_at<0, 32, 32>(stencil_3_lane_3, stencil_3.extract<96, 127>());
  hw_uint<32> stencil_3_lane_4;
  set_at<0, 32, 32>(stencil_3_lane_4, stencil_3.extract<128, 159>());
  hw_uint<32> stencil_3_lane_5;
  set_at<0, 32, 32>(stencil_3_lane_5, stencil_3.extract<160, 191>());
  hw_uint<32> stencil_3_lane_6;
  set_at<0, 32, 32>(stencil_3_lane_6, stencil_3.extract<192, 223>());
  hw_uint<32> stencil_3_lane_7;
  set_at<0, 32, 32>(stencil_3_lane_7, stencil_3.extract<224, 255>());
  hw_uint<32> stencil_3_lane_8;
  set_at<0, 32, 32>(stencil_3_lane_8, stencil_3.extract<256, 287>());
  hw_uint<32> stencil_3_lane_9;
  set_at<0, 32, 32>(stencil_3_lane_9, stencil_3.extract<288, 319>());
  hw_uint<32> stencil_3_lane_10;
  set_at<0, 32, 32>(stencil_3_lane_10, stencil_3.extract<320, 351>());
  hw_uint<32> stencil_3_lane_11;
  set_at<0, 32, 32>(stencil_3_lane_11, stencil_3.extract<352, 383>());
  hw_uint<32> stencil_3_lane_12;
  set_at<0, 32, 32>(stencil_3_lane_12, stencil_3.extract<384, 415>());
  hw_uint<32> stencil_3_lane_13;
  set_at<0, 32, 32>(stencil_3_lane_13, stencil_3.extract<416, 447>());
  hw_uint<32> stencil_3_lane_14;
  set_at<0, 32, 32>(stencil_3_lane_14, stencil_3.extract<448, 479>());
  hw_uint<32> stencil_3_lane_15;
  set_at<0, 32, 32>(stencil_3_lane_15, stencil_3.extract<480, 511>());
  hw_uint<32> stencil_3_lane_16;
  set_at<0, 32, 32>(stencil_3_lane_16, stencil_3.extract<512, 543>());
  hw_uint<32> stencil_3_lane_17;
  set_at<0, 32, 32>(stencil_3_lane_17, stencil_3.extract<544, 575>());
  hw_uint<32> stencil_3_lane_18;
  set_at<0, 32, 32>(stencil_3_lane_18, stencil_3.extract<576, 607>());
  hw_uint<32> stencil_3_lane_19;
  set_at<0, 32, 32>(stencil_3_lane_19, stencil_3.extract<608, 639>());
  hw_uint<32> stencil_3_lane_20;
  set_at<0, 32, 32>(stencil_3_lane_20, stencil_3.extract<640, 671>());
  hw_uint<32> stencil_3_lane_21;
  set_at<0, 32, 32>(stencil_3_lane_21, stencil_3.extract<672, 703>());
  hw_uint<32> stencil_3_lane_22;
  set_at<0, 32, 32>(stencil_3_lane_22, stencil_3.extract<704, 735>());
  hw_uint<32> stencil_3_lane_23;
  set_at<0, 32, 32>(stencil_3_lane_23, stencil_3.extract<736, 767>());
  hw_uint<32> stencil_3_lane_24;
  set_at<0, 32, 32>(stencil_3_lane_24, stencil_3.extract<768, 799>());
  hw_uint<32> stencil_3_lane_25;
  set_at<0, 32, 32>(stencil_3_lane_25, stencil_3.extract<800, 831>());
  hw_uint<32> stencil_3_lane_26;
  set_at<0, 32, 32>(stencil_3_lane_26, stencil_3.extract<832, 863>());
  hw_uint<32> stencil_3_lane_27;
  set_at<0, 32, 32>(stencil_3_lane_27, stencil_3.extract<864, 895>());
  hw_uint<32> stencil_3_lane_28;
  set_at<0, 32, 32>(stencil_3_lane_28, stencil_3.extract<896, 927>());
  hw_uint<32> stencil_3_lane_29;
  set_at<0, 32, 32>(stencil_3_lane_29, stencil_3.extract<928, 959>());
  hw_uint<32> stencil_3_lane_30;
  set_at<0, 32, 32>(stencil_3_lane_30, stencil_3.extract<960, 991>());
  hw_uint<32> stencil_3_lane_31;
  set_at<0, 32, 32>(stencil_3_lane_31, stencil_3.extract<992, 1023>());
  hw_uint<32> stencil_3_lane_32;
  set_at<0, 32, 32>(stencil_3_lane_32, stencil_3.extract<1024, 1055>());
  hw_uint<32> stencil_3_lane_33;
  set_at<0, 32, 32>(stencil_3_lane_33, stencil_3.extract<1056, 1087>());
  hw_uint<32> stencil_3_lane_34;
  set_at<0, 32, 32>(stencil_3_lane_34, stencil_3.extract<1088, 1119>());
  hw_uint<32> stencil_3_lane_35;
  set_at<0, 32, 32>(stencil_3_lane_35, stencil_3.extract<1120, 1151>());
  hw_uint<32> stencil_4_lane_0;
  set_at<0, 32, 32>(stencil_4_lane_0, stencil_4.extract<0, 31>());
  hw_uint<32> stencil_4_lane_1;
  set_at<0, 32, 32>(stencil_4_lane_1, stencil_4.extract<32, 63>());
  hw_uint<32> stencil_4_lane_2;
  set_at<0, 32, 32>(stencil_4_lane_2, stencil_4.extract<64, 95>());
  hw_uint<32> stencil_4_lane_3;
  set_at<0, 32, 32>(stencil_4_lane_3, stencil_4.extract<96, 127>());

	
  hw_uint<32 > stencil_3_lane_0_pack;
  set_at<0, 32, 32>(stencil_3_lane_0_pack, stencil_3_lane_0);
  hw_uint<32 > stencil_4_lane_0_pack;
  set_at<0, 32, 32>(stencil_4_lane_0_pack, stencil_4_lane_0);
auto res_update33_stencil_431_166_stencil_430__m_1122_sm163_3243 = add(stencil_3_lane_0_pack, stencil_4_lane_0_pack);

	  hw_uint<32 > stencil_3_lane_1_pack;
  set_at<0, 32, 32>(stencil_3_lane_1_pack, stencil_3_lane_1);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430__m_1122_sm163_3243_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430__m_1122_sm163_3243_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_3243);
auto res_update33_stencil_431_064_stencil_430__m_1124_sm163_3241 = add(stencil_3_lane_1_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_3243_pack);

	  hw_uint<32 > stencil_3_lane_2_pack;
  set_at<0, 32, 32>(stencil_3_lane_2_pack, stencil_3_lane_2);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430__m_1124_sm163_3241_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430__m_1124_sm163_3241_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_3241);
auto res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_3239 = add(stencil_3_lane_2_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_3241_pack);

	  hw_uint<32 > stencil_3_lane_3_pack;
  set_at<0, 32, 32>(stencil_3_lane_3_pack, stencil_3_lane_3);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_3239_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_3239_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_3239);
auto res_update33_stencil_431_166_stencil_430_0128_sm163_3237 = add(stencil_3_lane_3_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_3239_pack);

	  hw_uint<32 > stencil_3_lane_4_pack;
  set_at<0, 32, 32>(stencil_3_lane_4_pack, stencil_3_lane_4);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_0128_sm163_3237_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_0128_sm163_3237_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_3237);
auto res_update33_stencil_431_064_stencil_430_0130_sm163_3235 = add(stencil_3_lane_4_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_3237_pack);

	  hw_uint<32 > stencil_3_lane_5_pack;
  set_at<0, 32, 32>(stencil_3_lane_5_pack, stencil_3_lane_5);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_0130_sm163_3235_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_0130_sm163_3235_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_3235);
auto res_update33_stencil_431__m_162_stencil_430_0132_sm163_3233 = add(stencil_3_lane_5_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_3235_pack);

	  hw_uint<32 > stencil_3_lane_6_pack;
  set_at<0, 32, 32>(stencil_3_lane_6_pack, stencil_3_lane_6);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430_0132_sm163_3233_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430_0132_sm163_3233_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_3233);
auto res_update33_stencil_431_166_stencil_430_1134_sm163_3231 = add(stencil_3_lane_6_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_3233_pack);

	  hw_uint<32 > stencil_3_lane_7_pack;
  set_at<0, 32, 32>(stencil_3_lane_7_pack, stencil_3_lane_7);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_1134_sm163_3231_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_1134_sm163_3231_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_3231);
auto res_update33_stencil_431_064_stencil_430_1136_sm163_3229 = add(stencil_3_lane_7_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_3231_pack);

	  hw_uint<32 > stencil_3_lane_8_pack;
  set_at<0, 32, 32>(stencil_3_lane_8_pack, stencil_3_lane_8);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_1136_sm163_3229_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_1136_sm163_3229_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_3229);
auto res_update33_stencil_431__m_162_stencil_430_1138_sm163_3227 = add(stencil_3_lane_8_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_3229_pack);

	auto res_init32_sm163_3225 = set_zero_32();

	  hw_uint<32 > stencil_3_lane_9_pack;
  set_at<0, 32, 32>(stencil_3_lane_9_pack, stencil_3_lane_9);
  hw_uint<32 > stencil_4_lane_1_pack;
  set_at<0, 32, 32>(stencil_4_lane_1_pack, stencil_4_lane_1);
auto res_update33_stencil_431_166_stencil_430__m_1122_sm163_2223 = add(stencil_3_lane_9_pack, stencil_4_lane_1_pack);

	  hw_uint<32 > stencil_3_lane_10_pack;
  set_at<0, 32, 32>(stencil_3_lane_10_pack, stencil_3_lane_10);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430__m_1122_sm163_2223_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430__m_1122_sm163_2223_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_2223);
auto res_update33_stencil_431_064_stencil_430__m_1124_sm163_2221 = add(stencil_3_lane_10_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_2223_pack);

	  hw_uint<32 > stencil_3_lane_11_pack;
  set_at<0, 32, 32>(stencil_3_lane_11_pack, stencil_3_lane_11);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430__m_1124_sm163_2221_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430__m_1124_sm163_2221_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_2221);
auto res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_2219 = add(stencil_3_lane_11_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_2221_pack);

	  hw_uint<32 > stencil_3_lane_12_pack;
  set_at<0, 32, 32>(stencil_3_lane_12_pack, stencil_3_lane_12);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_2219_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_2219_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_2219);
auto res_update33_stencil_431_166_stencil_430_0128_sm163_2217 = add(stencil_3_lane_12_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_2219_pack);

	  hw_uint<32 > stencil_3_lane_13_pack;
  set_at<0, 32, 32>(stencil_3_lane_13_pack, stencil_3_lane_13);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_0128_sm163_2217_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_0128_sm163_2217_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_2217);
auto res_update33_stencil_431_064_stencil_430_0130_sm163_2215 = add(stencil_3_lane_13_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_2217_pack);

	  hw_uint<32 > stencil_3_lane_14_pack;
  set_at<0, 32, 32>(stencil_3_lane_14_pack, stencil_3_lane_14);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_0130_sm163_2215_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_0130_sm163_2215_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_2215);
auto res_update33_stencil_431__m_162_stencil_430_0132_sm163_2213 = add(stencil_3_lane_14_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_2215_pack);

	  hw_uint<32 > stencil_3_lane_15_pack;
  set_at<0, 32, 32>(stencil_3_lane_15_pack, stencil_3_lane_15);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430_0132_sm163_2213_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430_0132_sm163_2213_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_2213);
auto res_update33_stencil_431_166_stencil_430_1134_sm163_2211 = add(stencil_3_lane_15_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_2213_pack);

	  hw_uint<32 > stencil_3_lane_16_pack;
  set_at<0, 32, 32>(stencil_3_lane_16_pack, stencil_3_lane_16);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_1134_sm163_2211_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_1134_sm163_2211_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_2211);
auto res_update33_stencil_431_064_stencil_430_1136_sm163_2209 = add(stencil_3_lane_16_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_2211_pack);

	  hw_uint<32 > stencil_3_lane_17_pack;
  set_at<0, 32, 32>(stencil_3_lane_17_pack, stencil_3_lane_17);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_1136_sm163_2209_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_1136_sm163_2209_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_2209);
auto res_update33_stencil_431__m_162_stencil_430_1138_sm163_2207 = add(stencil_3_lane_17_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_2209_pack);

	auto res_init32_sm163_2205 = set_zero_32();

	  hw_uint<32 > stencil_3_lane_18_pack;
  set_at<0, 32, 32>(stencil_3_lane_18_pack, stencil_3_lane_18);
  hw_uint<32 > stencil_4_lane_2_pack;
  set_at<0, 32, 32>(stencil_4_lane_2_pack, stencil_4_lane_2);
auto res_update33_stencil_431_166_stencil_430__m_1122_sm163_1203 = add(stencil_3_lane_18_pack, stencil_4_lane_2_pack);

	  hw_uint<32 > stencil_3_lane_19_pack;
  set_at<0, 32, 32>(stencil_3_lane_19_pack, stencil_3_lane_19);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430__m_1122_sm163_1203_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430__m_1122_sm163_1203_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_1203);
auto res_update33_stencil_431_064_stencil_430__m_1124_sm163_1201 = add(stencil_3_lane_19_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_1203_pack);

	  hw_uint<32 > stencil_3_lane_20_pack;
  set_at<0, 32, 32>(stencil_3_lane_20_pack, stencil_3_lane_20);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430__m_1124_sm163_1201_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430__m_1124_sm163_1201_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_1201);
auto res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_1199 = add(stencil_3_lane_20_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_1201_pack);

	  hw_uint<32 > stencil_3_lane_21_pack;
  set_at<0, 32, 32>(stencil_3_lane_21_pack, stencil_3_lane_21);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_1199_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_1199_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_1199);
auto res_update33_stencil_431_166_stencil_430_0128_sm163_1197 = add(stencil_3_lane_21_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_1199_pack);

	  hw_uint<32 > stencil_3_lane_22_pack;
  set_at<0, 32, 32>(stencil_3_lane_22_pack, stencil_3_lane_22);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_0128_sm163_1197_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_0128_sm163_1197_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_1197);
auto res_update33_stencil_431_064_stencil_430_0130_sm163_1195 = add(stencil_3_lane_22_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_1197_pack);

	  hw_uint<32 > stencil_3_lane_23_pack;
  set_at<0, 32, 32>(stencil_3_lane_23_pack, stencil_3_lane_23);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_0130_sm163_1195_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_0130_sm163_1195_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_1195);
auto res_update33_stencil_431__m_162_stencil_430_0132_sm163_1193 = add(stencil_3_lane_23_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_1195_pack);

	  hw_uint<32 > stencil_3_lane_24_pack;
  set_at<0, 32, 32>(stencil_3_lane_24_pack, stencil_3_lane_24);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430_0132_sm163_1193_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430_0132_sm163_1193_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_1193);
auto res_update33_stencil_431_166_stencil_430_1134_sm163_1191 = add(stencil_3_lane_24_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_1193_pack);

	  hw_uint<32 > stencil_3_lane_25_pack;
  set_at<0, 32, 32>(stencil_3_lane_25_pack, stencil_3_lane_25);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_1134_sm163_1191_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_1134_sm163_1191_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_1191);
auto res_update33_stencil_431_064_stencil_430_1136_sm163_1189 = add(stencil_3_lane_25_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_1191_pack);

	  hw_uint<32 > stencil_3_lane_26_pack;
  set_at<0, 32, 32>(stencil_3_lane_26_pack, stencil_3_lane_26);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_1136_sm163_1189_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_1136_sm163_1189_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_1189);
auto res_update33_stencil_431__m_162_stencil_430_1138_sm163_1187 = add(stencil_3_lane_26_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_1189_pack);

	auto res_init32_sm163_1185 = set_zero_32();

	  hw_uint<32 > stencil_3_lane_27_pack;
  set_at<0, 32, 32>(stencil_3_lane_27_pack, stencil_3_lane_27);
  hw_uint<32 > stencil_4_lane_3_pack;
  set_at<0, 32, 32>(stencil_4_lane_3_pack, stencil_4_lane_3);
auto res_update33_stencil_431_166_stencil_430__m_1122_sm163_0183 = add(stencil_3_lane_27_pack, stencil_4_lane_3_pack);

	  hw_uint<32 > stencil_3_lane_28_pack;
  set_at<0, 32, 32>(stencil_3_lane_28_pack, stencil_3_lane_28);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430__m_1122_sm163_0183_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430__m_1122_sm163_0183_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_0183);
auto res_update33_stencil_431_064_stencil_430__m_1124_sm163_0181 = add(stencil_3_lane_28_pack, res_update33_stencil_431_166_stencil_430__m_1122_sm163_0183_pack);

	  hw_uint<32 > stencil_3_lane_29_pack;
  set_at<0, 32, 32>(stencil_3_lane_29_pack, stencil_3_lane_29);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430__m_1124_sm163_0181_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430__m_1124_sm163_0181_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_0181);
auto res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_0179 = add(stencil_3_lane_29_pack, res_update33_stencil_431_064_stencil_430__m_1124_sm163_0181_pack);

	  hw_uint<32 > stencil_3_lane_30_pack;
  set_at<0, 32, 32>(stencil_3_lane_30_pack, stencil_3_lane_30);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_0179_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_0179_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_0179);
auto res_update33_stencil_431_166_stencil_430_0128_sm163_0177 = add(stencil_3_lane_30_pack, res_update33_stencil_431__m_162_stencil_430__m_1126_sm163_0179_pack);

	  hw_uint<32 > stencil_3_lane_31_pack;
  set_at<0, 32, 32>(stencil_3_lane_31_pack, stencil_3_lane_31);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_0128_sm163_0177_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_0128_sm163_0177_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_0177);
auto res_update33_stencil_431_064_stencil_430_0130_sm163_0175 = add(stencil_3_lane_31_pack, res_update33_stencil_431_166_stencil_430_0128_sm163_0177_pack);

	  hw_uint<32 > stencil_3_lane_32_pack;
  set_at<0, 32, 32>(stencil_3_lane_32_pack, stencil_3_lane_32);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_0130_sm163_0175_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_0130_sm163_0175_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_0175);
auto res_update33_stencil_431__m_162_stencil_430_0132_sm163_0173 = add(stencil_3_lane_32_pack, res_update33_stencil_431_064_stencil_430_0130_sm163_0175_pack);

	  hw_uint<32 > stencil_3_lane_33_pack;
  set_at<0, 32, 32>(stencil_3_lane_33_pack, stencil_3_lane_33);
  hw_uint<32 > res_update33_stencil_431__m_162_stencil_430_0132_sm163_0173_pack;
  set_at<0, 32, 32>(res_update33_stencil_431__m_162_stencil_430_0132_sm163_0173_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_0173);
auto res_update33_stencil_431_166_stencil_430_1134_sm163_0171 = add(stencil_3_lane_33_pack, res_update33_stencil_431__m_162_stencil_430_0132_sm163_0173_pack);

	  hw_uint<32 > stencil_3_lane_34_pack;
  set_at<0, 32, 32>(stencil_3_lane_34_pack, stencil_3_lane_34);
  hw_uint<32 > res_update33_stencil_431_166_stencil_430_1134_sm163_0171_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_166_stencil_430_1134_sm163_0171_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_0171);
auto res_update33_stencil_431_064_stencil_430_1136_sm163_0169 = add(stencil_3_lane_34_pack, res_update33_stencil_431_166_stencil_430_1134_sm163_0171_pack);

	  hw_uint<32 > stencil_3_lane_35_pack;
  set_at<0, 32, 32>(stencil_3_lane_35_pack, stencil_3_lane_35);
  hw_uint<32 > res_update33_stencil_431_064_stencil_430_1136_sm163_0169_pack;
  set_at<0, 32, 32>(res_update33_stencil_431_064_stencil_430_1136_sm163_0169_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_0169);
auto res_update33_stencil_431__m_162_stencil_430_1138_sm163_0167 = add(stencil_3_lane_35_pack, res_update33_stencil_431_064_stencil_430_1136_sm163_0169_pack);

	auto res_init32_sm163_0165 = set_zero_32();
  hw_uint<128 > return_value597;
  set_at<0, 128, 32>(return_value597, res_init32_sm163_3225);
  set_at<32, 128, 32>(return_value597, res_init32_sm163_2205);
  set_at<64, 128, 32>(return_value597, res_init32_sm163_1185);
  set_at<96, 128, 32>(return_value597, res_init32_sm163_0165);
  return return_value597;

}

hw_uint<128> pw_math_stencil_43436_cu599(hw_uint<32*4>& stencil_4) {
  hw_uint<32> stencil_4_lane_0;
  set_at<0, 32, 32>(stencil_4_lane_0, stencil_4.extract<0, 31>());
  hw_uint<32> stencil_4_lane_1;
  set_at<0, 32, 32>(stencil_4_lane_1, stencil_4.extract<32, 63>());
  hw_uint<32> stencil_4_lane_2;
  set_at<0, 32, 32>(stencil_4_lane_2, stencil_4.extract<64, 95>());
  hw_uint<32> stencil_4_lane_3;
  set_at<0, 32, 32>(stencil_4_lane_3, stencil_4.extract<96, 127>());

	
  hw_uint<32 > stencil_4_lane_0_pack;
  set_at<0, 32, 32>(stencil_4_lane_0_pack, stencil_4_lane_0);
auto res_pw_math_stencil_43437_sm164_3251 = id(stencil_4_lane_0_pack);

	  hw_uint<32 > stencil_4_lane_1_pack;
  set_at<0, 32, 32>(stencil_4_lane_1_pack, stencil_4_lane_1);
auto res_pw_math_stencil_43437_sm164_2249 = id(stencil_4_lane_1_pack);

	  hw_uint<32 > stencil_4_lane_2_pack;
  set_at<0, 32, 32>(stencil_4_lane_2_pack, stencil_4_lane_2);
auto res_pw_math_stencil_43437_sm164_1247 = id(stencil_4_lane_2_pack);

	  hw_uint<32 > stencil_4_lane_3_pack;
  set_at<0, 32, 32>(stencil_4_lane_3_pack, stencil_4_lane_3);
auto res_pw_math_stencil_43437_sm164_0245 = id(stencil_4_lane_3_pack);
  hw_uint<128 > return_value600;
  set_at<0, 128, 32>(return_value600, res_pw_math_stencil_43437_sm164_3251);
  set_at<32, 128, 32>(return_value600, res_pw_math_stencil_43437_sm164_2249);
  set_at<64, 128, 32>(return_value600, res_pw_math_stencil_43437_sm164_1247);
  set_at<96, 128, 32>(return_value600, res_pw_math_stencil_43437_sm164_0245);
  return return_value600;

}

