#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<128> pw_math_in0_oc02_cu484(hw_uint<32*4>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();
  hw_uint<32> in0_oc_lane_2 = in0_oc.extract<64, 95>();
  hw_uint<32> in0_oc_lane_3 = in0_oc.extract<96, 127>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm313_3482 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm313_2480 = llf_int_to_float(in0_oc_lane_1_pack);

  hw_uint<32 > in0_oc_lane_2_pack;
  set_at<0, 32, 32>(in0_oc_lane_2_pack, in0_oc_lane_2);
  auto res_pw_math_in0_oc03_sm313_1478 = llf_int_to_float(in0_oc_lane_2_pack);

  hw_uint<32 > in0_oc_lane_3_pack;
  set_at<0, 32, 32>(in0_oc_lane_3_pack, in0_oc_lane_3);
  auto res_pw_math_in0_oc03_sm313_0476 = llf_int_to_float(in0_oc_lane_3_pack);
  hw_uint<128 > return_value485;
  set_at<0, 128, 32>(return_value485, res_pw_math_in0_oc03_sm313_3482);
  set_at<32, 128, 32>(return_value485, res_pw_math_in0_oc03_sm313_2480);
  set_at<64, 128, 32>(return_value485, res_pw_math_in0_oc03_sm313_1478);
  set_at<96, 128, 32>(return_value485, res_pw_math_in0_oc03_sm313_0476);
  return return_value485;

}

hw_uint<128> pw_math_in1_oc46_cu487(hw_uint<32*4>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();
  hw_uint<32> in1_oc_lane_2 = in1_oc.extract<64, 95>();
  hw_uint<32> in1_oc_lane_3 = in1_oc.extract<96, 127>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm314_3350 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm314_2348 = llf_int_to_float(in1_oc_lane_1_pack);

  hw_uint<32 > in1_oc_lane_2_pack;
  set_at<0, 32, 32>(in1_oc_lane_2_pack, in1_oc_lane_2);
  auto res_pw_math_in1_oc47_sm314_1346 = llf_int_to_float(in1_oc_lane_2_pack);

  hw_uint<32 > in1_oc_lane_3_pack;
  set_at<0, 32, 32>(in1_oc_lane_3_pack, in1_oc_lane_3);
  auto res_pw_math_in1_oc47_sm314_0344 = llf_int_to_float(in1_oc_lane_3_pack);
  hw_uint<128 > return_value488;
  set_at<0, 128, 32>(return_value488, res_pw_math_in1_oc47_sm314_3350);
  set_at<32, 128, 32>(return_value488, res_pw_math_in1_oc47_sm314_2348);
  set_at<64, 128, 32>(return_value488, res_pw_math_in1_oc47_sm314_1346);
  set_at<96, 128, 32>(return_value488, res_pw_math_in1_oc47_sm314_0344);
  return return_value488;

}

hw_uint<64> gp_in0_110_cu490(hw_uint<32*18>& in0) {
  hw_uint<32> in0_lane_0 = in0.extract<0, 31>();
  hw_uint<32> in0_lane_1 = in0.extract<32, 63>();
  hw_uint<32> in0_lane_2 = in0.extract<64, 95>();
  hw_uint<32> in0_lane_3 = in0.extract<96, 127>();
  hw_uint<32> in0_lane_4 = in0.extract<128, 159>();
  hw_uint<32> in0_lane_5 = in0.extract<160, 191>();
  hw_uint<32> in0_lane_6 = in0.extract<192, 223>();
  hw_uint<32> in0_lane_7 = in0.extract<224, 255>();
  hw_uint<32> in0_lane_8 = in0.extract<256, 287>();
  hw_uint<32> in0_lane_9 = in0.extract<288, 319>();
  hw_uint<32> in0_lane_10 = in0.extract<320, 351>();
  hw_uint<32> in0_lane_11 = in0.extract<352, 383>();
  hw_uint<32> in0_lane_12 = in0.extract<384, 415>();
  hw_uint<32> in0_lane_13 = in0.extract<416, 447>();
  hw_uint<32> in0_lane_14 = in0.extract<448, 479>();
  hw_uint<32> in0_lane_15 = in0.extract<480, 511>();
  hw_uint<32> in0_lane_16 = in0.extract<512, 543>();
  hw_uint<32> in0_lane_17 = in0.extract<544, 575>();

	
  hw_uint<288 > in0_lane_8_pack;
  set_at<0, 288, 32>(in0_lane_8_pack, in0_lane_0);
  set_at<32, 288, 32>(in0_lane_8_pack, in0_lane_1);
  set_at<64, 288, 32>(in0_lane_8_pack, in0_lane_2);
  set_at<96, 288, 32>(in0_lane_8_pack, in0_lane_3);
  set_at<128, 288, 32>(in0_lane_8_pack, in0_lane_4);
  set_at<160, 288, 32>(in0_lane_8_pack, in0_lane_5);
  set_at<192, 288, 32>(in0_lane_8_pack, in0_lane_6);
  set_at<224, 288, 32>(in0_lane_8_pack, in0_lane_7);
  set_at<256, 288, 32>(in0_lane_8_pack, in0_lane_8);
  auto res_gp_in0_110_merged297_sm315_1354 = gp_in0_110_cu295(in0_lane_8_pack);

  hw_uint<288 > in0_lane_17_pack;
  set_at<0, 288, 32>(in0_lane_17_pack, in0_lane_9);
  set_at<32, 288, 32>(in0_lane_17_pack, in0_lane_10);
  set_at<64, 288, 32>(in0_lane_17_pack, in0_lane_11);
  set_at<96, 288, 32>(in0_lane_17_pack, in0_lane_12);
  set_at<128, 288, 32>(in0_lane_17_pack, in0_lane_13);
  set_at<160, 288, 32>(in0_lane_17_pack, in0_lane_14);
  set_at<192, 288, 32>(in0_lane_17_pack, in0_lane_15);
  set_at<224, 288, 32>(in0_lane_17_pack, in0_lane_16);
  set_at<256, 288, 32>(in0_lane_17_pack, in0_lane_17);
  auto res_gp_in0_110_merged297_sm315_0352 = gp_in0_110_cu295(in0_lane_17_pack);
  hw_uint<64 > return_value491;
  set_at<0, 64, 32>(return_value491, res_gp_in0_110_merged297_sm315_1354);
  set_at<32, 64, 32>(return_value491, res_gp_in0_110_merged297_sm315_0352);
  return return_value491;

}

hw_uint<64> us_gp_in0_2_buf1642_cu493(hw_uint<32*2>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<64> lp_in0_146_cu495(hw_uint<32*2>& gp_in0_1_buf8, hw_uint<32*2>& gp_in0_2_buf16_us40) {
  hw_uint<32> gp_in0_1_buf8_lane_0 = gp_in0_1_buf8.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_lane_1 = gp_in0_1_buf8.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_0 = gp_in0_2_buf16_us40.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_1 = gp_in0_2_buf16_us40.extract<32, 63>();

	
  hw_uint<32 > gp_in0_1_buf8_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_0_pack, gp_in0_1_buf8_lane_0);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_0_pack, gp_in0_2_buf16_us40_lane_0);
  auto res_diff47_sm321_1454 = llf_diff_float_32(gp_in0_1_buf8_lane_0_pack, gp_in0_2_buf16_us40_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_1_pack, gp_in0_1_buf8_lane_1);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_1_pack, gp_in0_2_buf16_us40_lane_1);
  auto res_diff47_sm321_0452 = llf_diff_float_32(gp_in0_1_buf8_lane_1_pack, gp_in0_2_buf16_us40_lane_1_pack);
  hw_uint<64 > return_value496;
  set_at<0, 64, 32>(return_value496, res_diff47_sm321_1454);
  set_at<32, 64, 32>(return_value496, res_diff47_sm321_0452);
  return return_value496;

}

hw_uint<128> us_gp_in0_1_buf850_cu498(hw_uint<32*4>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<128> lp_in0_054_cu500(hw_uint<32*4>& gp_in0_1_buf8_us48, hw_uint<32*4>& in0) {
  hw_uint<32> gp_in0_1_buf8_us48_lane_0 = gp_in0_1_buf8_us48.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_1 = gp_in0_1_buf8_us48.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_2 = gp_in0_1_buf8_us48.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_3 = gp_in0_1_buf8_us48.extract<96, 127>();
  hw_uint<32> in0_lane_0 = in0.extract<0, 31>();
  hw_uint<32> in0_lane_1 = in0.extract<32, 63>();
  hw_uint<32> in0_lane_2 = in0.extract<64, 95>();
  hw_uint<32> in0_lane_3 = in0.extract<96, 127>();

	
  hw_uint<32 > gp_in0_1_buf8_us48_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_0_pack, gp_in0_1_buf8_us48_lane_0);
  hw_uint<32 > in0_lane_0_pack;
  set_at<0, 32, 32>(in0_lane_0_pack, in0_lane_0);
  auto res_diff55_sm323_3470 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_0_pack, in0_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_1_pack, gp_in0_1_buf8_us48_lane_1);
  hw_uint<32 > in0_lane_1_pack;
  set_at<0, 32, 32>(in0_lane_1_pack, in0_lane_1);
  auto res_diff55_sm323_2468 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_1_pack, in0_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_2_pack, gp_in0_1_buf8_us48_lane_2);
  hw_uint<32 > in0_lane_2_pack;
  set_at<0, 32, 32>(in0_lane_2_pack, in0_lane_2);
  auto res_diff55_sm323_1466 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_2_pack, in0_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_3_pack, gp_in0_1_buf8_us48_lane_3);
  hw_uint<32 > in0_lane_3_pack;
  set_at<0, 32, 32>(in0_lane_3_pack, in0_lane_3);
  auto res_diff55_sm323_0464 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_3_pack, in0_lane_3_pack);
  hw_uint<128 > return_value501;
  set_at<0, 128, 32>(return_value501, res_diff55_sm323_3470);
  set_at<32, 128, 32>(return_value501, res_diff55_sm323_2468);
  set_at<64, 128, 32>(return_value501, res_diff55_sm323_1466);
  set_at<96, 128, 32>(return_value501, res_diff55_sm323_0464);
  return return_value501;

}

hw_uint<64> gp_in1_158_cu503(hw_uint<32*18>& in1) {
  hw_uint<32> in1_lane_0 = in1.extract<0, 31>();
  hw_uint<32> in1_lane_1 = in1.extract<32, 63>();
  hw_uint<32> in1_lane_2 = in1.extract<64, 95>();
  hw_uint<32> in1_lane_3 = in1.extract<96, 127>();
  hw_uint<32> in1_lane_4 = in1.extract<128, 159>();
  hw_uint<32> in1_lane_5 = in1.extract<160, 191>();
  hw_uint<32> in1_lane_6 = in1.extract<192, 223>();
  hw_uint<32> in1_lane_7 = in1.extract<224, 255>();
  hw_uint<32> in1_lane_8 = in1.extract<256, 287>();
  hw_uint<32> in1_lane_9 = in1.extract<288, 319>();
  hw_uint<32> in1_lane_10 = in1.extract<320, 351>();
  hw_uint<32> in1_lane_11 = in1.extract<352, 383>();
  hw_uint<32> in1_lane_12 = in1.extract<384, 415>();
  hw_uint<32> in1_lane_13 = in1.extract<416, 447>();
  hw_uint<32> in1_lane_14 = in1.extract<448, 479>();
  hw_uint<32> in1_lane_15 = in1.extract<480, 511>();
  hw_uint<32> in1_lane_16 = in1.extract<512, 543>();
  hw_uint<32> in1_lane_17 = in1.extract<544, 575>();

	
  hw_uint<288 > in1_lane_8_pack;
  set_at<0, 288, 32>(in1_lane_8_pack, in1_lane_0);
  set_at<32, 288, 32>(in1_lane_8_pack, in1_lane_1);
  set_at<64, 288, 32>(in1_lane_8_pack, in1_lane_2);
  set_at<96, 288, 32>(in1_lane_8_pack, in1_lane_3);
  set_at<128, 288, 32>(in1_lane_8_pack, in1_lane_4);
  set_at<160, 288, 32>(in1_lane_8_pack, in1_lane_5);
  set_at<192, 288, 32>(in1_lane_8_pack, in1_lane_6);
  set_at<224, 288, 32>(in1_lane_8_pack, in1_lane_7);
  set_at<256, 288, 32>(in1_lane_8_pack, in1_lane_8);
  auto res_gp_in1_158_merged306_sm324_1474 = gp_in1_158_cu304(in1_lane_8_pack);

  hw_uint<288 > in1_lane_17_pack;
  set_at<0, 288, 32>(in1_lane_17_pack, in1_lane_9);
  set_at<32, 288, 32>(in1_lane_17_pack, in1_lane_10);
  set_at<64, 288, 32>(in1_lane_17_pack, in1_lane_11);
  set_at<96, 288, 32>(in1_lane_17_pack, in1_lane_12);
  set_at<128, 288, 32>(in1_lane_17_pack, in1_lane_13);
  set_at<160, 288, 32>(in1_lane_17_pack, in1_lane_14);
  set_at<192, 288, 32>(in1_lane_17_pack, in1_lane_15);
  set_at<224, 288, 32>(in1_lane_17_pack, in1_lane_16);
  set_at<256, 288, 32>(in1_lane_17_pack, in1_lane_17);
  auto res_gp_in1_158_merged306_sm324_0472 = gp_in1_158_cu304(in1_lane_17_pack);
  hw_uint<64 > return_value504;
  set_at<0, 64, 32>(return_value504, res_gp_in1_158_merged306_sm324_1474);
  set_at<32, 64, 32>(return_value504, res_gp_in1_158_merged306_sm324_0472);
  return return_value504;

}

hw_uint<64> us_gp_in1_2_buf6490_cu506(hw_uint<32*2>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<64> lp_in1_194_cu508(hw_uint<32*2>& gp_in1_1_buf56, hw_uint<32*2>& gp_in1_2_buf64_us88) {
  hw_uint<32> gp_in1_1_buf56_lane_0 = gp_in1_1_buf56.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_lane_1 = gp_in1_1_buf56.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_0 = gp_in1_2_buf64_us88.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_1 = gp_in1_2_buf64_us88.extract<32, 63>();

	
  hw_uint<32 > gp_in1_1_buf56_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_0_pack, gp_in1_1_buf56_lane_0);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_0_pack, gp_in1_2_buf64_us88_lane_0);
  auto res_diff95_sm330_1370 = llf_diff_float_32(gp_in1_1_buf56_lane_0_pack, gp_in1_2_buf64_us88_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_1_pack, gp_in1_1_buf56_lane_1);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_1_pack, gp_in1_2_buf64_us88_lane_1);
  auto res_diff95_sm330_0368 = llf_diff_float_32(gp_in1_1_buf56_lane_1_pack, gp_in1_2_buf64_us88_lane_1_pack);
  hw_uint<64 > return_value509;
  set_at<0, 64, 32>(return_value509, res_diff95_sm330_1370);
  set_at<32, 64, 32>(return_value509, res_diff95_sm330_0368);
  return return_value509;

}

hw_uint<128> us_gp_in1_1_buf5698_cu511(hw_uint<32*4>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<128> lp_in1_0102_cu513(hw_uint<32*4>& gp_in1_1_buf56_us96, hw_uint<32*4>& in1) {
  hw_uint<32> gp_in1_1_buf56_us96_lane_0 = gp_in1_1_buf56_us96.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_1 = gp_in1_1_buf56_us96.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_2 = gp_in1_1_buf56_us96.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_3 = gp_in1_1_buf56_us96.extract<96, 127>();
  hw_uint<32> in1_lane_0 = in1.extract<0, 31>();
  hw_uint<32> in1_lane_1 = in1.extract<32, 63>();
  hw_uint<32> in1_lane_2 = in1.extract<64, 95>();
  hw_uint<32> in1_lane_3 = in1.extract<96, 127>();

	
  hw_uint<32 > gp_in1_1_buf56_us96_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_0_pack, gp_in1_1_buf56_us96_lane_0);
  hw_uint<32 > in1_lane_0_pack;
  set_at<0, 32, 32>(in1_lane_0_pack, in1_lane_0);
  auto res_diff103_sm332_3386 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_0_pack, in1_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_1_pack, gp_in1_1_buf56_us96_lane_1);
  hw_uint<32 > in1_lane_1_pack;
  set_at<0, 32, 32>(in1_lane_1_pack, in1_lane_1);
  auto res_diff103_sm332_2384 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_1_pack, in1_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_2_pack, gp_in1_1_buf56_us96_lane_2);
  hw_uint<32 > in1_lane_2_pack;
  set_at<0, 32, 32>(in1_lane_2_pack, in1_lane_2);
  auto res_diff103_sm332_1382 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_2_pack, in1_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_3_pack, gp_in1_1_buf56_us96_lane_3);
  hw_uint<32 > in1_lane_3_pack;
  set_at<0, 32, 32>(in1_lane_3_pack, in1_lane_3);
  auto res_diff103_sm332_0380 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_3_pack, in1_lane_3_pack);
  hw_uint<128 > return_value514;
  set_at<0, 128, 32>(return_value514, res_diff103_sm332_3386);
  set_at<32, 128, 32>(return_value514, res_diff103_sm332_2384);
  set_at<64, 128, 32>(return_value514, res_diff103_sm332_1382);
  set_at<96, 128, 32>(return_value514, res_diff103_sm332_0380);
  return return_value514;

}

hw_uint<128> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu516(hw_uint<32*4>& lp_in0_0_buf52, hw_uint<32*4>& lp_in1_0_buf100) {
  hw_uint<32> lp_in0_0_buf52_lane_0 = lp_in0_0_buf52.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_lane_1 = lp_in0_0_buf52.extract<32, 63>();
  hw_uint<32> lp_in0_0_buf52_lane_2 = lp_in0_0_buf52.extract<64, 95>();
  hw_uint<32> lp_in0_0_buf52_lane_3 = lp_in0_0_buf52.extract<96, 127>();
  hw_uint<32> lp_in1_0_buf100_lane_0 = lp_in1_0_buf100.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_lane_1 = lp_in1_0_buf100.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_lane_2 = lp_in1_0_buf100.extract<64, 95>();
  hw_uint<32> lp_in1_0_buf100_lane_3 = lp_in1_0_buf100.extract<96, 127>();

	
  hw_uint<32 > lp_in0_0_buf52_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_0_pack, lp_in0_0_buf52_lane_0);
  hw_uint<32 > lp_in1_0_buf100_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_0_pack, lp_in1_0_buf100_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_3394 = llf_float_average(lp_in0_0_buf52_lane_0_pack, lp_in1_0_buf100_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_1_pack, lp_in0_0_buf52_lane_1);
  hw_uint<32 > lp_in1_0_buf100_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_1_pack, lp_in1_0_buf100_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_2392 = llf_float_average(lp_in0_0_buf52_lane_1_pack, lp_in1_0_buf100_lane_1_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_2_pack, lp_in0_0_buf52_lane_2);
  hw_uint<32 > lp_in1_0_buf100_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_2_pack, lp_in1_0_buf100_lane_2);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1390 = llf_float_average(lp_in0_0_buf52_lane_2_pack, lp_in1_0_buf100_lane_2_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_3_pack, lp_in0_0_buf52_lane_3);
  hw_uint<32 > lp_in1_0_buf100_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_3_pack, lp_in1_0_buf100_lane_3);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0388 = llf_float_average(lp_in0_0_buf52_lane_3_pack, lp_in1_0_buf100_lane_3_pack);
  hw_uint<128 > return_value517;
  set_at<0, 128, 32>(return_value517, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_3394);
  set_at<32, 128, 32>(return_value517, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_2392);
  set_at<64, 128, 32>(return_value517, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1390);
  set_at<96, 128, 32>(return_value517, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0388);
  return return_value517;

}

hw_uint<64> pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_cu519(hw_uint<32*2>& lp_in0_1_buf44, hw_uint<32*2>& lp_in1_1_buf92) {
  hw_uint<32> lp_in0_1_buf44_lane_0 = lp_in0_1_buf44.extract<0, 31>();
  hw_uint<32> lp_in0_1_buf44_lane_1 = lp_in0_1_buf44.extract<32, 63>();
  hw_uint<32> lp_in1_1_buf92_lane_0 = lp_in1_1_buf92.extract<0, 31>();
  hw_uint<32> lp_in1_1_buf92_lane_1 = lp_in1_1_buf92.extract<32, 63>();

	
  hw_uint<32 > lp_in0_1_buf44_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_0_pack, lp_in0_1_buf44_lane_0);
  hw_uint<32 > lp_in1_1_buf92_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_0_pack, lp_in1_1_buf92_lane_0);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_1398 = llf_float_average(lp_in0_1_buf44_lane_0_pack, lp_in1_1_buf92_lane_0_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_1_pack, lp_in0_1_buf44_lane_1);
  hw_uint<32 > lp_in1_1_buf92_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_1_pack, lp_in1_1_buf92_lane_1);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_0396 = llf_float_average(lp_in0_1_buf44_lane_1_pack, lp_in1_1_buf92_lane_1_pack);
  hw_uint<64 > return_value520;
  set_at<0, 64, 32>(return_value520, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_1398);
  set_at<32, 64, 32>(return_value520, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_0396);
  return return_value520;

}

hw_uint<64> us_merged_2_reconstruct_lp120_buf123135_cu522(hw_uint<32*2>& merged_2_reconstruct_lp120_buf123) {
  return merged_2_reconstruct_lp120_buf123;
}

hw_uint<64> merged_1_reconstruct_lp129131_cu524(hw_uint<32*2>& merged_1, hw_uint<32*2>& merged_2_reconstruct_lp120_buf123_us133) {
  hw_uint<32> merged_1_lane_0 = merged_1.extract<0, 31>();
  hw_uint<32> merged_1_lane_1 = merged_1.extract<32, 63>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_0 = merged_2_reconstruct_lp120_buf123_us133.extract<0, 31>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_1 = merged_2_reconstruct_lp120_buf123_us133.extract<32, 63>();

	
  hw_uint<32 > merged_1_lane_0_pack;
  set_at<0, 32, 32>(merged_1_lane_0_pack, merged_1_lane_0);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_0_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_lane_0);
  auto res_rc137_sm340_1414 = llf_add_float_32(merged_1_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_lane_0_pack);

  hw_uint<32 > merged_1_lane_1_pack;
  set_at<0, 32, 32>(merged_1_lane_1_pack, merged_1_lane_1);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_1_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_lane_1);
  auto res_rc137_sm340_0412 = llf_add_float_32(merged_1_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_lane_1_pack);
  hw_uint<64 > return_value525;
  set_at<0, 64, 32>(return_value525, res_rc137_sm340_1414);
  set_at<32, 64, 32>(return_value525, res_rc137_sm340_0412);
  return return_value525;

}

hw_uint<128> us_merged_1_reconstruct_lp129_buf132144_cu527(hw_uint<32*4>& merged_1_reconstruct_lp129_buf132) {
  return merged_1_reconstruct_lp129_buf132;
}

hw_uint<128> merged_0_reconstruct_lp138140_cu529(hw_uint<32*4>& merged_0, hw_uint<32*4>& merged_1_reconstruct_lp129_buf132_us142) {
  hw_uint<32> merged_0_lane_0 = merged_0.extract<0, 31>();
  hw_uint<32> merged_0_lane_1 = merged_0.extract<32, 63>();
  hw_uint<32> merged_0_lane_2 = merged_0.extract<64, 95>();
  hw_uint<32> merged_0_lane_3 = merged_0.extract<96, 127>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_0 = merged_1_reconstruct_lp129_buf132_us142.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_1 = merged_1_reconstruct_lp129_buf132_us142.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_2 = merged_1_reconstruct_lp129_buf132_us142.extract<64, 95>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_3 = merged_1_reconstruct_lp129_buf132_us142.extract<96, 127>();

	
  hw_uint<32 > merged_0_lane_0_pack;
  set_at<0, 32, 32>(merged_0_lane_0_pack, merged_0_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0);
  auto res_rc146_sm342_3430 = llf_add_float_32(merged_0_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0_pack);

  hw_uint<32 > merged_0_lane_1_pack;
  set_at<0, 32, 32>(merged_0_lane_1_pack, merged_0_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1);
  auto res_rc146_sm342_2428 = llf_add_float_32(merged_0_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1_pack);

  hw_uint<32 > merged_0_lane_2_pack;
  set_at<0, 32, 32>(merged_0_lane_2_pack, merged_0_lane_2);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_2_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_lane_2);
  auto res_rc146_sm342_1426 = llf_add_float_32(merged_0_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_lane_2_pack);

  hw_uint<32 > merged_0_lane_3_pack;
  set_at<0, 32, 32>(merged_0_lane_3_pack, merged_0_lane_3);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_3_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_lane_3);
  auto res_rc146_sm342_0424 = llf_add_float_32(merged_0_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_lane_3_pack);
  hw_uint<128 > return_value530;
  set_at<0, 128, 32>(return_value530, res_rc146_sm342_3430);
  set_at<32, 128, 32>(return_value530, res_rc146_sm342_2428);
  set_at<64, 128, 32>(return_value530, res_rc146_sm342_1426);
  set_at<96, 128, 32>(return_value530, res_rc146_sm342_0424);
  return return_value530;

}

hw_uint<128> pw_math_merged_0_reconstruct_lp138_buf141147149_cu532(hw_uint<32*4>& merged_0_reconstruct_lp138_buf141) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_0 = merged_0_reconstruct_lp138_buf141.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_1 = merged_0_reconstruct_lp138_buf141.extract<32, 63>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_2 = merged_0_reconstruct_lp138_buf141.extract<64, 95>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_3 = merged_0_reconstruct_lp138_buf141.extract<96, 127>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_0_pack, merged_0_reconstruct_lp138_buf141_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_3438 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_1_pack, merged_0_reconstruct_lp138_buf141_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_2436 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_1_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_2_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_2_pack, merged_0_reconstruct_lp138_buf141_lane_2);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1434 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_2_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_3_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_3_pack, merged_0_reconstruct_lp138_buf141_lane_3);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0432 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_3_pack);
  hw_uint<128 > return_value533;
  set_at<0, 128, 32>(return_value533, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_3438);
  set_at<32, 128, 32>(return_value533, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_2436);
  set_at<64, 128, 32>(return_value533, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1434);
  set_at<96, 128, 32>(return_value533, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0432);
  return return_value533;

}

