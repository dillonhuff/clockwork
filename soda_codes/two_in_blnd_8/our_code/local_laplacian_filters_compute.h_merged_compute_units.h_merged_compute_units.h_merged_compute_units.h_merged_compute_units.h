#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> pw_math_in0_oc02_cu618(hw_uint<32*8>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();
  hw_uint<32> in0_oc_lane_2 = in0_oc.extract<64, 95>();
  hw_uint<32> in0_oc_lane_3 = in0_oc.extract<96, 127>();
  hw_uint<32> in0_oc_lane_4 = in0_oc.extract<128, 159>();
  hw_uint<32> in0_oc_lane_5 = in0_oc.extract<160, 191>();
  hw_uint<32> in0_oc_lane_6 = in0_oc.extract<192, 223>();
  hw_uint<32> in0_oc_lane_7 = in0_oc.extract<224, 255>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm313_7384 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm313_6382 = llf_int_to_float(in0_oc_lane_1_pack);

  hw_uint<32 > in0_oc_lane_2_pack;
  set_at<0, 32, 32>(in0_oc_lane_2_pack, in0_oc_lane_2);
  auto res_pw_math_in0_oc03_sm313_5380 = llf_int_to_float(in0_oc_lane_2_pack);

  hw_uint<32 > in0_oc_lane_3_pack;
  set_at<0, 32, 32>(in0_oc_lane_3_pack, in0_oc_lane_3);
  auto res_pw_math_in0_oc03_sm313_4378 = llf_int_to_float(in0_oc_lane_3_pack);

  hw_uint<32 > in0_oc_lane_4_pack;
  set_at<0, 32, 32>(in0_oc_lane_4_pack, in0_oc_lane_4);
  auto res_pw_math_in0_oc03_sm313_3376 = llf_int_to_float(in0_oc_lane_4_pack);

  hw_uint<32 > in0_oc_lane_5_pack;
  set_at<0, 32, 32>(in0_oc_lane_5_pack, in0_oc_lane_5);
  auto res_pw_math_in0_oc03_sm313_2374 = llf_int_to_float(in0_oc_lane_5_pack);

  hw_uint<32 > in0_oc_lane_6_pack;
  set_at<0, 32, 32>(in0_oc_lane_6_pack, in0_oc_lane_6);
  auto res_pw_math_in0_oc03_sm313_1372 = llf_int_to_float(in0_oc_lane_6_pack);

  hw_uint<32 > in0_oc_lane_7_pack;
  set_at<0, 32, 32>(in0_oc_lane_7_pack, in0_oc_lane_7);
  auto res_pw_math_in0_oc03_sm313_0370 = llf_int_to_float(in0_oc_lane_7_pack);
  hw_uint<256 > return_value619;
  set_at<0, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_7384);
  set_at<32, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_6382);
  set_at<64, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_5380);
  set_at<96, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_4378);
  set_at<128, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_3376);
  set_at<160, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_2374);
  set_at<192, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_1372);
  set_at<224, 256, 32>(return_value619, res_pw_math_in0_oc03_sm313_0370);
  return return_value619;

}

hw_uint<256> pw_math_in1_oc46_cu621(hw_uint<32*8>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();
  hw_uint<32> in1_oc_lane_2 = in1_oc.extract<64, 95>();
  hw_uint<32> in1_oc_lane_3 = in1_oc.extract<96, 127>();
  hw_uint<32> in1_oc_lane_4 = in1_oc.extract<128, 159>();
  hw_uint<32> in1_oc_lane_5 = in1_oc.extract<160, 191>();
  hw_uint<32> in1_oc_lane_6 = in1_oc.extract<192, 223>();
  hw_uint<32> in1_oc_lane_7 = in1_oc.extract<224, 255>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm314_7404 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm314_6402 = llf_int_to_float(in1_oc_lane_1_pack);

  hw_uint<32 > in1_oc_lane_2_pack;
  set_at<0, 32, 32>(in1_oc_lane_2_pack, in1_oc_lane_2);
  auto res_pw_math_in1_oc47_sm314_5400 = llf_int_to_float(in1_oc_lane_2_pack);

  hw_uint<32 > in1_oc_lane_3_pack;
  set_at<0, 32, 32>(in1_oc_lane_3_pack, in1_oc_lane_3);
  auto res_pw_math_in1_oc47_sm314_4398 = llf_int_to_float(in1_oc_lane_3_pack);

  hw_uint<32 > in1_oc_lane_4_pack;
  set_at<0, 32, 32>(in1_oc_lane_4_pack, in1_oc_lane_4);
  auto res_pw_math_in1_oc47_sm314_3396 = llf_int_to_float(in1_oc_lane_4_pack);

  hw_uint<32 > in1_oc_lane_5_pack;
  set_at<0, 32, 32>(in1_oc_lane_5_pack, in1_oc_lane_5);
  auto res_pw_math_in1_oc47_sm314_2394 = llf_int_to_float(in1_oc_lane_5_pack);

  hw_uint<32 > in1_oc_lane_6_pack;
  set_at<0, 32, 32>(in1_oc_lane_6_pack, in1_oc_lane_6);
  auto res_pw_math_in1_oc47_sm314_1392 = llf_int_to_float(in1_oc_lane_6_pack);

  hw_uint<32 > in1_oc_lane_7_pack;
  set_at<0, 32, 32>(in1_oc_lane_7_pack, in1_oc_lane_7);
  auto res_pw_math_in1_oc47_sm314_0390 = llf_int_to_float(in1_oc_lane_7_pack);
  hw_uint<256 > return_value622;
  set_at<0, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_7404);
  set_at<32, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_6402);
  set_at<64, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_5400);
  set_at<96, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_4398);
  set_at<128, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_3396);
  set_at<160, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_2394);
  set_at<192, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_1392);
  set_at<224, 256, 32>(return_value622, res_pw_math_in1_oc47_sm314_0390);
  return return_value622;

}

hw_uint<128> gp_in0_110_cu624(hw_uint<32*36>& in0) {
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
  hw_uint<32> in0_lane_18 = in0.extract<576, 607>();
  hw_uint<32> in0_lane_19 = in0.extract<608, 639>();
  hw_uint<32> in0_lane_20 = in0.extract<640, 671>();
  hw_uint<32> in0_lane_21 = in0.extract<672, 703>();
  hw_uint<32> in0_lane_22 = in0.extract<704, 735>();
  hw_uint<32> in0_lane_23 = in0.extract<736, 767>();
  hw_uint<32> in0_lane_24 = in0.extract<768, 799>();
  hw_uint<32> in0_lane_25 = in0.extract<800, 831>();
  hw_uint<32> in0_lane_26 = in0.extract<832, 863>();
  hw_uint<32> in0_lane_27 = in0.extract<864, 895>();
  hw_uint<32> in0_lane_28 = in0.extract<896, 927>();
  hw_uint<32> in0_lane_29 = in0.extract<928, 959>();
  hw_uint<32> in0_lane_30 = in0.extract<960, 991>();
  hw_uint<32> in0_lane_31 = in0.extract<992, 1023>();
  hw_uint<32> in0_lane_32 = in0.extract<1024, 1055>();
  hw_uint<32> in0_lane_33 = in0.extract<1056, 1087>();
  hw_uint<32> in0_lane_34 = in0.extract<1088, 1119>();
  hw_uint<32> in0_lane_35 = in0.extract<1120, 1151>();

	
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
  auto res_gp_in0_110_merged297_sm315_3366 = gp_in0_110_cu295(in0_lane_8_pack);

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
  auto res_gp_in0_110_merged297_sm315_2364 = gp_in0_110_cu295(in0_lane_17_pack);

  hw_uint<288 > in0_lane_26_pack;
  set_at<0, 288, 32>(in0_lane_26_pack, in0_lane_18);
  set_at<32, 288, 32>(in0_lane_26_pack, in0_lane_19);
  set_at<64, 288, 32>(in0_lane_26_pack, in0_lane_20);
  set_at<96, 288, 32>(in0_lane_26_pack, in0_lane_21);
  set_at<128, 288, 32>(in0_lane_26_pack, in0_lane_22);
  set_at<160, 288, 32>(in0_lane_26_pack, in0_lane_23);
  set_at<192, 288, 32>(in0_lane_26_pack, in0_lane_24);
  set_at<224, 288, 32>(in0_lane_26_pack, in0_lane_25);
  set_at<256, 288, 32>(in0_lane_26_pack, in0_lane_26);
  auto res_gp_in0_110_merged297_sm315_1362 = gp_in0_110_cu295(in0_lane_26_pack);

  hw_uint<288 > in0_lane_35_pack;
  set_at<0, 288, 32>(in0_lane_35_pack, in0_lane_27);
  set_at<32, 288, 32>(in0_lane_35_pack, in0_lane_28);
  set_at<64, 288, 32>(in0_lane_35_pack, in0_lane_29);
  set_at<96, 288, 32>(in0_lane_35_pack, in0_lane_30);
  set_at<128, 288, 32>(in0_lane_35_pack, in0_lane_31);
  set_at<160, 288, 32>(in0_lane_35_pack, in0_lane_32);
  set_at<192, 288, 32>(in0_lane_35_pack, in0_lane_33);
  set_at<224, 288, 32>(in0_lane_35_pack, in0_lane_34);
  set_at<256, 288, 32>(in0_lane_35_pack, in0_lane_35);
  auto res_gp_in0_110_merged297_sm315_0360 = gp_in0_110_cu295(in0_lane_35_pack);
  hw_uint<128 > return_value625;
  set_at<0, 128, 32>(return_value625, res_gp_in0_110_merged297_sm315_3366);
  set_at<32, 128, 32>(return_value625, res_gp_in0_110_merged297_sm315_2364);
  set_at<64, 128, 32>(return_value625, res_gp_in0_110_merged297_sm315_1362);
  set_at<96, 128, 32>(return_value625, res_gp_in0_110_merged297_sm315_0360);
  return return_value625;

}

hw_uint<64> gp_in0_218_cu627(hw_uint<32*18>& gp_in0_1_buf8) {
  hw_uint<32> gp_in0_1_buf8_lane_0 = gp_in0_1_buf8.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_lane_1 = gp_in0_1_buf8.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_lane_2 = gp_in0_1_buf8.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_lane_3 = gp_in0_1_buf8.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_lane_4 = gp_in0_1_buf8.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_lane_5 = gp_in0_1_buf8.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_lane_6 = gp_in0_1_buf8.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_lane_7 = gp_in0_1_buf8.extract<224, 255>();
  hw_uint<32> gp_in0_1_buf8_lane_8 = gp_in0_1_buf8.extract<256, 287>();
  hw_uint<32> gp_in0_1_buf8_lane_9 = gp_in0_1_buf8.extract<288, 319>();
  hw_uint<32> gp_in0_1_buf8_lane_10 = gp_in0_1_buf8.extract<320, 351>();
  hw_uint<32> gp_in0_1_buf8_lane_11 = gp_in0_1_buf8.extract<352, 383>();
  hw_uint<32> gp_in0_1_buf8_lane_12 = gp_in0_1_buf8.extract<384, 415>();
  hw_uint<32> gp_in0_1_buf8_lane_13 = gp_in0_1_buf8.extract<416, 447>();
  hw_uint<32> gp_in0_1_buf8_lane_14 = gp_in0_1_buf8.extract<448, 479>();
  hw_uint<32> gp_in0_1_buf8_lane_15 = gp_in0_1_buf8.extract<480, 511>();
  hw_uint<32> gp_in0_1_buf8_lane_16 = gp_in0_1_buf8.extract<512, 543>();
  hw_uint<32> gp_in0_1_buf8_lane_17 = gp_in0_1_buf8.extract<544, 575>();

	
  hw_uint<288 > gp_in0_1_buf8_lane_8_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_0);
  set_at<32, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_1);
  set_at<64, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_2);
  set_at<96, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_3);
  set_at<128, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_4);
  set_at<160, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_5);
  set_at<192, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_6);
  set_at<224, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_7);
  set_at<256, 288, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_8);
  auto res_gp_in0_218_merged300_sm316_1456 = gp_in0_218_cu298(gp_in0_1_buf8_lane_8_pack);

  hw_uint<288 > gp_in0_1_buf8_lane_17_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_9);
  set_at<32, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_10);
  set_at<64, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_11);
  set_at<96, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_12);
  set_at<128, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_13);
  set_at<160, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_14);
  set_at<192, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_15);
  set_at<224, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_16);
  set_at<256, 288, 32>(gp_in0_1_buf8_lane_17_pack, gp_in0_1_buf8_lane_17);
  auto res_gp_in0_218_merged300_sm316_0454 = gp_in0_218_cu298(gp_in0_1_buf8_lane_17_pack);
  hw_uint<64 > return_value628;
  set_at<0, 64, 32>(return_value628, res_gp_in0_218_merged300_sm316_1456);
  set_at<32, 64, 32>(return_value628, res_gp_in0_218_merged300_sm316_0454);
  return return_value628;

}

hw_uint<64> us_gp_in0_3_buf2434_cu630(hw_uint<32*2>& gp_in0_3_buf24) {
  return gp_in0_3_buf24;
}

hw_uint<64> lp_in0_238_cu632(hw_uint<32*2>& gp_in0_2_buf16, hw_uint<32*2>& gp_in0_3_buf24_us32) {
  hw_uint<32> gp_in0_2_buf16_lane_0 = gp_in0_2_buf16.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_lane_1 = gp_in0_2_buf16.extract<32, 63>();
  hw_uint<32> gp_in0_3_buf24_us32_lane_0 = gp_in0_3_buf24_us32.extract<0, 31>();
  hw_uint<32> gp_in0_3_buf24_us32_lane_1 = gp_in0_3_buf24_us32.extract<32, 63>();

	
  hw_uint<32 > gp_in0_2_buf16_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_0_pack, gp_in0_2_buf16_lane_0);
  hw_uint<32 > gp_in0_3_buf24_us32_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_lane_0_pack, gp_in0_3_buf24_us32_lane_0);
  auto res_diff39_sm319_1412 = llf_diff_float_32(gp_in0_2_buf16_lane_0_pack, gp_in0_3_buf24_us32_lane_0_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_1_pack, gp_in0_2_buf16_lane_1);
  hw_uint<32 > gp_in0_3_buf24_us32_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_lane_1_pack, gp_in0_3_buf24_us32_lane_1);
  auto res_diff39_sm319_0410 = llf_diff_float_32(gp_in0_2_buf16_lane_1_pack, gp_in0_3_buf24_us32_lane_1_pack);
  hw_uint<64 > return_value633;
  set_at<0, 64, 32>(return_value633, res_diff39_sm319_1412);
  set_at<32, 64, 32>(return_value633, res_diff39_sm319_0410);
  return return_value633;

}

hw_uint<128> us_gp_in0_2_buf1642_cu635(hw_uint<32*4>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<128> lp_in0_146_cu637(hw_uint<32*4>& gp_in0_1_buf8, hw_uint<32*4>& gp_in0_2_buf16_us40) {
  hw_uint<32> gp_in0_1_buf8_lane_0 = gp_in0_1_buf8.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_lane_1 = gp_in0_1_buf8.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_lane_2 = gp_in0_1_buf8.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_lane_3 = gp_in0_1_buf8.extract<96, 127>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_0 = gp_in0_2_buf16_us40.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_1 = gp_in0_2_buf16_us40.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_2 = gp_in0_2_buf16_us40.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_3 = gp_in0_2_buf16_us40.extract<96, 127>();

	
  hw_uint<32 > gp_in0_1_buf8_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_0_pack, gp_in0_1_buf8_lane_0);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_0_pack, gp_in0_2_buf16_us40_lane_0);
  auto res_diff47_sm321_3358 = llf_diff_float_32(gp_in0_1_buf8_lane_0_pack, gp_in0_2_buf16_us40_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_1_pack, gp_in0_1_buf8_lane_1);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_1_pack, gp_in0_2_buf16_us40_lane_1);
  auto res_diff47_sm321_2356 = llf_diff_float_32(gp_in0_1_buf8_lane_1_pack, gp_in0_2_buf16_us40_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_2_pack, gp_in0_1_buf8_lane_2);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_2_pack, gp_in0_2_buf16_us40_lane_2);
  auto res_diff47_sm321_1354 = llf_diff_float_32(gp_in0_1_buf8_lane_2_pack, gp_in0_2_buf16_us40_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_3_pack, gp_in0_1_buf8_lane_3);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_3_pack, gp_in0_2_buf16_us40_lane_3);
  auto res_diff47_sm321_0352 = llf_diff_float_32(gp_in0_1_buf8_lane_3_pack, gp_in0_2_buf16_us40_lane_3_pack);
  hw_uint<128 > return_value638;
  set_at<0, 128, 32>(return_value638, res_diff47_sm321_3358);
  set_at<32, 128, 32>(return_value638, res_diff47_sm321_2356);
  set_at<64, 128, 32>(return_value638, res_diff47_sm321_1354);
  set_at<96, 128, 32>(return_value638, res_diff47_sm321_0352);
  return return_value638;

}

hw_uint<256> us_gp_in0_1_buf850_cu640(hw_uint<32*8>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<256> lp_in0_054_cu642(hw_uint<32*8>& gp_in0_1_buf8_us48, hw_uint<32*8>& in0) {
  hw_uint<32> gp_in0_1_buf8_us48_lane_0 = gp_in0_1_buf8_us48.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_1 = gp_in0_1_buf8_us48.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_2 = gp_in0_1_buf8_us48.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_3 = gp_in0_1_buf8_us48.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_4 = gp_in0_1_buf8_us48.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_5 = gp_in0_1_buf8_us48.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_6 = gp_in0_1_buf8_us48.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_7 = gp_in0_1_buf8_us48.extract<224, 255>();
  hw_uint<32> in0_lane_0 = in0.extract<0, 31>();
  hw_uint<32> in0_lane_1 = in0.extract<32, 63>();
  hw_uint<32> in0_lane_2 = in0.extract<64, 95>();
  hw_uint<32> in0_lane_3 = in0.extract<96, 127>();
  hw_uint<32> in0_lane_4 = in0.extract<128, 159>();
  hw_uint<32> in0_lane_5 = in0.extract<160, 191>();
  hw_uint<32> in0_lane_6 = in0.extract<192, 223>();
  hw_uint<32> in0_lane_7 = in0.extract<224, 255>();

	
  hw_uint<32 > gp_in0_1_buf8_us48_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_0_pack, gp_in0_1_buf8_us48_lane_0);
  hw_uint<32 > in0_lane_0_pack;
  set_at<0, 32, 32>(in0_lane_0_pack, in0_lane_0);
  auto res_diff55_sm323_7444 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_0_pack, in0_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_1_pack, gp_in0_1_buf8_us48_lane_1);
  hw_uint<32 > in0_lane_1_pack;
  set_at<0, 32, 32>(in0_lane_1_pack, in0_lane_1);
  auto res_diff55_sm323_6442 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_1_pack, in0_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_2_pack, gp_in0_1_buf8_us48_lane_2);
  hw_uint<32 > in0_lane_2_pack;
  set_at<0, 32, 32>(in0_lane_2_pack, in0_lane_2);
  auto res_diff55_sm323_5440 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_2_pack, in0_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_3_pack, gp_in0_1_buf8_us48_lane_3);
  hw_uint<32 > in0_lane_3_pack;
  set_at<0, 32, 32>(in0_lane_3_pack, in0_lane_3);
  auto res_diff55_sm323_4438 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_3_pack, in0_lane_3_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_4_pack, gp_in0_1_buf8_us48_lane_4);
  hw_uint<32 > in0_lane_4_pack;
  set_at<0, 32, 32>(in0_lane_4_pack, in0_lane_4);
  auto res_diff55_sm323_3436 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_4_pack, in0_lane_4_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_5_pack, gp_in0_1_buf8_us48_lane_5);
  hw_uint<32 > in0_lane_5_pack;
  set_at<0, 32, 32>(in0_lane_5_pack, in0_lane_5);
  auto res_diff55_sm323_2434 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_5_pack, in0_lane_5_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_6_pack, gp_in0_1_buf8_us48_lane_6);
  hw_uint<32 > in0_lane_6_pack;
  set_at<0, 32, 32>(in0_lane_6_pack, in0_lane_6);
  auto res_diff55_sm323_1432 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_6_pack, in0_lane_6_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_7_pack, gp_in0_1_buf8_us48_lane_7);
  hw_uint<32 > in0_lane_7_pack;
  set_at<0, 32, 32>(in0_lane_7_pack, in0_lane_7);
  auto res_diff55_sm323_0430 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_7_pack, in0_lane_7_pack);
  hw_uint<256 > return_value643;
  set_at<0, 256, 32>(return_value643, res_diff55_sm323_7444);
  set_at<32, 256, 32>(return_value643, res_diff55_sm323_6442);
  set_at<64, 256, 32>(return_value643, res_diff55_sm323_5440);
  set_at<96, 256, 32>(return_value643, res_diff55_sm323_4438);
  set_at<128, 256, 32>(return_value643, res_diff55_sm323_3436);
  set_at<160, 256, 32>(return_value643, res_diff55_sm323_2434);
  set_at<192, 256, 32>(return_value643, res_diff55_sm323_1432);
  set_at<224, 256, 32>(return_value643, res_diff55_sm323_0430);
  return return_value643;

}

hw_uint<128> gp_in1_158_cu645(hw_uint<32*36>& in1) {
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
  hw_uint<32> in1_lane_18 = in1.extract<576, 607>();
  hw_uint<32> in1_lane_19 = in1.extract<608, 639>();
  hw_uint<32> in1_lane_20 = in1.extract<640, 671>();
  hw_uint<32> in1_lane_21 = in1.extract<672, 703>();
  hw_uint<32> in1_lane_22 = in1.extract<704, 735>();
  hw_uint<32> in1_lane_23 = in1.extract<736, 767>();
  hw_uint<32> in1_lane_24 = in1.extract<768, 799>();
  hw_uint<32> in1_lane_25 = in1.extract<800, 831>();
  hw_uint<32> in1_lane_26 = in1.extract<832, 863>();
  hw_uint<32> in1_lane_27 = in1.extract<864, 895>();
  hw_uint<32> in1_lane_28 = in1.extract<896, 927>();
  hw_uint<32> in1_lane_29 = in1.extract<928, 959>();
  hw_uint<32> in1_lane_30 = in1.extract<960, 991>();
  hw_uint<32> in1_lane_31 = in1.extract<992, 1023>();
  hw_uint<32> in1_lane_32 = in1.extract<1024, 1055>();
  hw_uint<32> in1_lane_33 = in1.extract<1056, 1087>();
  hw_uint<32> in1_lane_34 = in1.extract<1088, 1119>();
  hw_uint<32> in1_lane_35 = in1.extract<1120, 1151>();

	
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
  auto res_gp_in1_158_merged306_sm324_3452 = gp_in1_158_cu304(in1_lane_8_pack);

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
  auto res_gp_in1_158_merged306_sm324_2450 = gp_in1_158_cu304(in1_lane_17_pack);

  hw_uint<288 > in1_lane_26_pack;
  set_at<0, 288, 32>(in1_lane_26_pack, in1_lane_18);
  set_at<32, 288, 32>(in1_lane_26_pack, in1_lane_19);
  set_at<64, 288, 32>(in1_lane_26_pack, in1_lane_20);
  set_at<96, 288, 32>(in1_lane_26_pack, in1_lane_21);
  set_at<128, 288, 32>(in1_lane_26_pack, in1_lane_22);
  set_at<160, 288, 32>(in1_lane_26_pack, in1_lane_23);
  set_at<192, 288, 32>(in1_lane_26_pack, in1_lane_24);
  set_at<224, 288, 32>(in1_lane_26_pack, in1_lane_25);
  set_at<256, 288, 32>(in1_lane_26_pack, in1_lane_26);
  auto res_gp_in1_158_merged306_sm324_1448 = gp_in1_158_cu304(in1_lane_26_pack);

  hw_uint<288 > in1_lane_35_pack;
  set_at<0, 288, 32>(in1_lane_35_pack, in1_lane_27);
  set_at<32, 288, 32>(in1_lane_35_pack, in1_lane_28);
  set_at<64, 288, 32>(in1_lane_35_pack, in1_lane_29);
  set_at<96, 288, 32>(in1_lane_35_pack, in1_lane_30);
  set_at<128, 288, 32>(in1_lane_35_pack, in1_lane_31);
  set_at<160, 288, 32>(in1_lane_35_pack, in1_lane_32);
  set_at<192, 288, 32>(in1_lane_35_pack, in1_lane_33);
  set_at<224, 288, 32>(in1_lane_35_pack, in1_lane_34);
  set_at<256, 288, 32>(in1_lane_35_pack, in1_lane_35);
  auto res_gp_in1_158_merged306_sm324_0446 = gp_in1_158_cu304(in1_lane_35_pack);
  hw_uint<128 > return_value646;
  set_at<0, 128, 32>(return_value646, res_gp_in1_158_merged306_sm324_3452);
  set_at<32, 128, 32>(return_value646, res_gp_in1_158_merged306_sm324_2450);
  set_at<64, 128, 32>(return_value646, res_gp_in1_158_merged306_sm324_1448);
  set_at<96, 128, 32>(return_value646, res_gp_in1_158_merged306_sm324_0446);
  return return_value646;

}

hw_uint<64> gp_in1_266_cu648(hw_uint<32*18>& gp_in1_1_buf56) {
  hw_uint<32> gp_in1_1_buf56_lane_0 = gp_in1_1_buf56.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_lane_1 = gp_in1_1_buf56.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_lane_2 = gp_in1_1_buf56.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_lane_3 = gp_in1_1_buf56.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_lane_4 = gp_in1_1_buf56.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_lane_5 = gp_in1_1_buf56.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_lane_6 = gp_in1_1_buf56.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_lane_7 = gp_in1_1_buf56.extract<224, 255>();
  hw_uint<32> gp_in1_1_buf56_lane_8 = gp_in1_1_buf56.extract<256, 287>();
  hw_uint<32> gp_in1_1_buf56_lane_9 = gp_in1_1_buf56.extract<288, 319>();
  hw_uint<32> gp_in1_1_buf56_lane_10 = gp_in1_1_buf56.extract<320, 351>();
  hw_uint<32> gp_in1_1_buf56_lane_11 = gp_in1_1_buf56.extract<352, 383>();
  hw_uint<32> gp_in1_1_buf56_lane_12 = gp_in1_1_buf56.extract<384, 415>();
  hw_uint<32> gp_in1_1_buf56_lane_13 = gp_in1_1_buf56.extract<416, 447>();
  hw_uint<32> gp_in1_1_buf56_lane_14 = gp_in1_1_buf56.extract<448, 479>();
  hw_uint<32> gp_in1_1_buf56_lane_15 = gp_in1_1_buf56.extract<480, 511>();
  hw_uint<32> gp_in1_1_buf56_lane_16 = gp_in1_1_buf56.extract<512, 543>();
  hw_uint<32> gp_in1_1_buf56_lane_17 = gp_in1_1_buf56.extract<544, 575>();

	
  hw_uint<288 > gp_in1_1_buf56_lane_8_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_0);
  set_at<32, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_1);
  set_at<64, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_2);
  set_at<96, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_3);
  set_at<128, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_4);
  set_at<160, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_5);
  set_at<192, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_6);
  set_at<224, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_7);
  set_at<256, 288, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_8);
  auto res_gp_in1_266_merged309_sm325_1388 = gp_in1_266_cu307(gp_in1_1_buf56_lane_8_pack);

  hw_uint<288 > gp_in1_1_buf56_lane_17_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_9);
  set_at<32, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_10);
  set_at<64, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_11);
  set_at<96, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_12);
  set_at<128, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_13);
  set_at<160, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_14);
  set_at<192, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_15);
  set_at<224, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_16);
  set_at<256, 288, 32>(gp_in1_1_buf56_lane_17_pack, gp_in1_1_buf56_lane_17);
  auto res_gp_in1_266_merged309_sm325_0386 = gp_in1_266_cu307(gp_in1_1_buf56_lane_17_pack);
  hw_uint<64 > return_value649;
  set_at<0, 64, 32>(return_value649, res_gp_in1_266_merged309_sm325_1388);
  set_at<32, 64, 32>(return_value649, res_gp_in1_266_merged309_sm325_0386);
  return return_value649;

}

hw_uint<64> us_gp_in1_3_buf7282_cu651(hw_uint<32*2>& gp_in1_3_buf72) {
  return gp_in1_3_buf72;
}

hw_uint<64> lp_in1_286_cu653(hw_uint<32*2>& gp_in1_2_buf64, hw_uint<32*2>& gp_in1_3_buf72_us80) {
  hw_uint<32> gp_in1_2_buf64_lane_0 = gp_in1_2_buf64.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_lane_1 = gp_in1_2_buf64.extract<32, 63>();
  hw_uint<32> gp_in1_3_buf72_us80_lane_0 = gp_in1_3_buf72_us80.extract<0, 31>();
  hw_uint<32> gp_in1_3_buf72_us80_lane_1 = gp_in1_3_buf72_us80.extract<32, 63>();

	
  hw_uint<32 > gp_in1_2_buf64_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_0_pack, gp_in1_2_buf64_lane_0);
  hw_uint<32 > gp_in1_3_buf72_us80_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_lane_0_pack, gp_in1_3_buf72_us80_lane_0);
  auto res_diff87_sm328_1464 = llf_diff_float_32(gp_in1_2_buf64_lane_0_pack, gp_in1_3_buf72_us80_lane_0_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_1_pack, gp_in1_2_buf64_lane_1);
  hw_uint<32 > gp_in1_3_buf72_us80_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_lane_1_pack, gp_in1_3_buf72_us80_lane_1);
  auto res_diff87_sm328_0462 = llf_diff_float_32(gp_in1_2_buf64_lane_1_pack, gp_in1_3_buf72_us80_lane_1_pack);
  hw_uint<64 > return_value654;
  set_at<0, 64, 32>(return_value654, res_diff87_sm328_1464);
  set_at<32, 64, 32>(return_value654, res_diff87_sm328_0462);
  return return_value654;

}

hw_uint<128> us_gp_in1_2_buf6490_cu656(hw_uint<32*4>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<128> lp_in1_194_cu658(hw_uint<32*4>& gp_in1_1_buf56, hw_uint<32*4>& gp_in1_2_buf64_us88) {
  hw_uint<32> gp_in1_1_buf56_lane_0 = gp_in1_1_buf56.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_lane_1 = gp_in1_1_buf56.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_lane_2 = gp_in1_1_buf56.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_lane_3 = gp_in1_1_buf56.extract<96, 127>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_0 = gp_in1_2_buf64_us88.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_1 = gp_in1_2_buf64_us88.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_2 = gp_in1_2_buf64_us88.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_3 = gp_in1_2_buf64_us88.extract<96, 127>();

	
  hw_uint<32 > gp_in1_1_buf56_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_0_pack, gp_in1_1_buf56_lane_0);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_0_pack, gp_in1_2_buf64_us88_lane_0);
  auto res_diff95_sm330_3480 = llf_diff_float_32(gp_in1_1_buf56_lane_0_pack, gp_in1_2_buf64_us88_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_1_pack, gp_in1_1_buf56_lane_1);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_1_pack, gp_in1_2_buf64_us88_lane_1);
  auto res_diff95_sm330_2478 = llf_diff_float_32(gp_in1_1_buf56_lane_1_pack, gp_in1_2_buf64_us88_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_2_pack, gp_in1_1_buf56_lane_2);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_2_pack, gp_in1_2_buf64_us88_lane_2);
  auto res_diff95_sm330_1476 = llf_diff_float_32(gp_in1_1_buf56_lane_2_pack, gp_in1_2_buf64_us88_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_3_pack, gp_in1_1_buf56_lane_3);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_3_pack, gp_in1_2_buf64_us88_lane_3);
  auto res_diff95_sm330_0474 = llf_diff_float_32(gp_in1_1_buf56_lane_3_pack, gp_in1_2_buf64_us88_lane_3_pack);
  hw_uint<128 > return_value659;
  set_at<0, 128, 32>(return_value659, res_diff95_sm330_3480);
  set_at<32, 128, 32>(return_value659, res_diff95_sm330_2478);
  set_at<64, 128, 32>(return_value659, res_diff95_sm330_1476);
  set_at<96, 128, 32>(return_value659, res_diff95_sm330_0474);
  return return_value659;

}

hw_uint<256> us_gp_in1_1_buf5698_cu661(hw_uint<32*8>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<256> lp_in1_0102_cu663(hw_uint<32*8>& gp_in1_1_buf56_us96, hw_uint<32*8>& in1) {
  hw_uint<32> gp_in1_1_buf56_us96_lane_0 = gp_in1_1_buf56_us96.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_1 = gp_in1_1_buf56_us96.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_2 = gp_in1_1_buf56_us96.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_3 = gp_in1_1_buf56_us96.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_4 = gp_in1_1_buf56_us96.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_5 = gp_in1_1_buf56_us96.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_6 = gp_in1_1_buf56_us96.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_7 = gp_in1_1_buf56_us96.extract<224, 255>();
  hw_uint<32> in1_lane_0 = in1.extract<0, 31>();
  hw_uint<32> in1_lane_1 = in1.extract<32, 63>();
  hw_uint<32> in1_lane_2 = in1.extract<64, 95>();
  hw_uint<32> in1_lane_3 = in1.extract<96, 127>();
  hw_uint<32> in1_lane_4 = in1.extract<128, 159>();
  hw_uint<32> in1_lane_5 = in1.extract<160, 191>();
  hw_uint<32> in1_lane_6 = in1.extract<192, 223>();
  hw_uint<32> in1_lane_7 = in1.extract<224, 255>();

	
  hw_uint<32 > gp_in1_1_buf56_us96_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_0_pack, gp_in1_1_buf56_us96_lane_0);
  hw_uint<32 > in1_lane_0_pack;
  set_at<0, 32, 32>(in1_lane_0_pack, in1_lane_0);
  auto res_diff103_sm332_7512 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_0_pack, in1_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_1_pack, gp_in1_1_buf56_us96_lane_1);
  hw_uint<32 > in1_lane_1_pack;
  set_at<0, 32, 32>(in1_lane_1_pack, in1_lane_1);
  auto res_diff103_sm332_6510 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_1_pack, in1_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_2_pack, gp_in1_1_buf56_us96_lane_2);
  hw_uint<32 > in1_lane_2_pack;
  set_at<0, 32, 32>(in1_lane_2_pack, in1_lane_2);
  auto res_diff103_sm332_5508 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_2_pack, in1_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_3_pack, gp_in1_1_buf56_us96_lane_3);
  hw_uint<32 > in1_lane_3_pack;
  set_at<0, 32, 32>(in1_lane_3_pack, in1_lane_3);
  auto res_diff103_sm332_4506 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_3_pack, in1_lane_3_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_4_pack, gp_in1_1_buf56_us96_lane_4);
  hw_uint<32 > in1_lane_4_pack;
  set_at<0, 32, 32>(in1_lane_4_pack, in1_lane_4);
  auto res_diff103_sm332_3504 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_4_pack, in1_lane_4_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_5_pack, gp_in1_1_buf56_us96_lane_5);
  hw_uint<32 > in1_lane_5_pack;
  set_at<0, 32, 32>(in1_lane_5_pack, in1_lane_5);
  auto res_diff103_sm332_2502 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_5_pack, in1_lane_5_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_6_pack, gp_in1_1_buf56_us96_lane_6);
  hw_uint<32 > in1_lane_6_pack;
  set_at<0, 32, 32>(in1_lane_6_pack, in1_lane_6);
  auto res_diff103_sm332_1500 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_6_pack, in1_lane_6_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_7_pack, gp_in1_1_buf56_us96_lane_7);
  hw_uint<32 > in1_lane_7_pack;
  set_at<0, 32, 32>(in1_lane_7_pack, in1_lane_7);
  auto res_diff103_sm332_0498 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_7_pack, in1_lane_7_pack);
  hw_uint<256 > return_value664;
  set_at<0, 256, 32>(return_value664, res_diff103_sm332_7512);
  set_at<32, 256, 32>(return_value664, res_diff103_sm332_6510);
  set_at<64, 256, 32>(return_value664, res_diff103_sm332_5508);
  set_at<96, 256, 32>(return_value664, res_diff103_sm332_4506);
  set_at<128, 256, 32>(return_value664, res_diff103_sm332_3504);
  set_at<160, 256, 32>(return_value664, res_diff103_sm332_2502);
  set_at<192, 256, 32>(return_value664, res_diff103_sm332_1500);
  set_at<224, 256, 32>(return_value664, res_diff103_sm332_0498);
  return return_value664;

}

hw_uint<256> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu666(hw_uint<32*8>& lp_in0_0_buf52, hw_uint<32*8>& lp_in1_0_buf100) {
  hw_uint<32> lp_in0_0_buf52_lane_0 = lp_in0_0_buf52.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_lane_1 = lp_in0_0_buf52.extract<32, 63>();
  hw_uint<32> lp_in0_0_buf52_lane_2 = lp_in0_0_buf52.extract<64, 95>();
  hw_uint<32> lp_in0_0_buf52_lane_3 = lp_in0_0_buf52.extract<96, 127>();
  hw_uint<32> lp_in0_0_buf52_lane_4 = lp_in0_0_buf52.extract<128, 159>();
  hw_uint<32> lp_in0_0_buf52_lane_5 = lp_in0_0_buf52.extract<160, 191>();
  hw_uint<32> lp_in0_0_buf52_lane_6 = lp_in0_0_buf52.extract<192, 223>();
  hw_uint<32> lp_in0_0_buf52_lane_7 = lp_in0_0_buf52.extract<224, 255>();
  hw_uint<32> lp_in1_0_buf100_lane_0 = lp_in1_0_buf100.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_lane_1 = lp_in1_0_buf100.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_lane_2 = lp_in1_0_buf100.extract<64, 95>();
  hw_uint<32> lp_in1_0_buf100_lane_3 = lp_in1_0_buf100.extract<96, 127>();
  hw_uint<32> lp_in1_0_buf100_lane_4 = lp_in1_0_buf100.extract<128, 159>();
  hw_uint<32> lp_in1_0_buf100_lane_5 = lp_in1_0_buf100.extract<160, 191>();
  hw_uint<32> lp_in1_0_buf100_lane_6 = lp_in1_0_buf100.extract<192, 223>();
  hw_uint<32> lp_in1_0_buf100_lane_7 = lp_in1_0_buf100.extract<224, 255>();

	
  hw_uint<32 > lp_in0_0_buf52_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_0_pack, lp_in0_0_buf52_lane_0);
  hw_uint<32 > lp_in1_0_buf100_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_0_pack, lp_in1_0_buf100_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_7528 = llf_float_average(lp_in0_0_buf52_lane_0_pack, lp_in1_0_buf100_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_1_pack, lp_in0_0_buf52_lane_1);
  hw_uint<32 > lp_in1_0_buf100_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_1_pack, lp_in1_0_buf100_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_6526 = llf_float_average(lp_in0_0_buf52_lane_1_pack, lp_in1_0_buf100_lane_1_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_2_pack, lp_in0_0_buf52_lane_2);
  hw_uint<32 > lp_in1_0_buf100_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_2_pack, lp_in1_0_buf100_lane_2);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_5524 = llf_float_average(lp_in0_0_buf52_lane_2_pack, lp_in1_0_buf100_lane_2_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_3_pack, lp_in0_0_buf52_lane_3);
  hw_uint<32 > lp_in1_0_buf100_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_3_pack, lp_in1_0_buf100_lane_3);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_4522 = llf_float_average(lp_in0_0_buf52_lane_3_pack, lp_in1_0_buf100_lane_3_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_4_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_4_pack, lp_in0_0_buf52_lane_4);
  hw_uint<32 > lp_in1_0_buf100_lane_4_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_4_pack, lp_in1_0_buf100_lane_4);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_3520 = llf_float_average(lp_in0_0_buf52_lane_4_pack, lp_in1_0_buf100_lane_4_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_5_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_5_pack, lp_in0_0_buf52_lane_5);
  hw_uint<32 > lp_in1_0_buf100_lane_5_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_5_pack, lp_in1_0_buf100_lane_5);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_2518 = llf_float_average(lp_in0_0_buf52_lane_5_pack, lp_in1_0_buf100_lane_5_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_6_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_6_pack, lp_in0_0_buf52_lane_6);
  hw_uint<32 > lp_in1_0_buf100_lane_6_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_6_pack, lp_in1_0_buf100_lane_6);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1516 = llf_float_average(lp_in0_0_buf52_lane_6_pack, lp_in1_0_buf100_lane_6_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_7_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_7_pack, lp_in0_0_buf52_lane_7);
  hw_uint<32 > lp_in1_0_buf100_lane_7_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_7_pack, lp_in1_0_buf100_lane_7);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0514 = llf_float_average(lp_in0_0_buf52_lane_7_pack, lp_in1_0_buf100_lane_7_pack);
  hw_uint<256 > return_value667;
  set_at<0, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_7528);
  set_at<32, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_6526);
  set_at<64, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_5524);
  set_at<96, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_4522);
  set_at<128, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_3520);
  set_at<160, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_2518);
  set_at<192, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1516);
  set_at<224, 256, 32>(return_value667, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0514);
  return return_value667;

}

hw_uint<128> pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_cu669(hw_uint<32*4>& lp_in0_1_buf44, hw_uint<32*4>& lp_in1_1_buf92) {
  hw_uint<32> lp_in0_1_buf44_lane_0 = lp_in0_1_buf44.extract<0, 31>();
  hw_uint<32> lp_in0_1_buf44_lane_1 = lp_in0_1_buf44.extract<32, 63>();
  hw_uint<32> lp_in0_1_buf44_lane_2 = lp_in0_1_buf44.extract<64, 95>();
  hw_uint<32> lp_in0_1_buf44_lane_3 = lp_in0_1_buf44.extract<96, 127>();
  hw_uint<32> lp_in1_1_buf92_lane_0 = lp_in1_1_buf92.extract<0, 31>();
  hw_uint<32> lp_in1_1_buf92_lane_1 = lp_in1_1_buf92.extract<32, 63>();
  hw_uint<32> lp_in1_1_buf92_lane_2 = lp_in1_1_buf92.extract<64, 95>();
  hw_uint<32> lp_in1_1_buf92_lane_3 = lp_in1_1_buf92.extract<96, 127>();

	
  hw_uint<32 > lp_in0_1_buf44_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_0_pack, lp_in0_1_buf44_lane_0);
  hw_uint<32 > lp_in1_1_buf92_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_0_pack, lp_in1_1_buf92_lane_0);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_3536 = llf_float_average(lp_in0_1_buf44_lane_0_pack, lp_in1_1_buf92_lane_0_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_1_pack, lp_in0_1_buf44_lane_1);
  hw_uint<32 > lp_in1_1_buf92_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_1_pack, lp_in1_1_buf92_lane_1);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_2534 = llf_float_average(lp_in0_1_buf44_lane_1_pack, lp_in1_1_buf92_lane_1_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_2_pack, lp_in0_1_buf44_lane_2);
  hw_uint<32 > lp_in1_1_buf92_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_2_pack, lp_in1_1_buf92_lane_2);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_1532 = llf_float_average(lp_in0_1_buf44_lane_2_pack, lp_in1_1_buf92_lane_2_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_3_pack, lp_in0_1_buf44_lane_3);
  hw_uint<32 > lp_in1_1_buf92_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_3_pack, lp_in1_1_buf92_lane_3);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_0530 = llf_float_average(lp_in0_1_buf44_lane_3_pack, lp_in1_1_buf92_lane_3_pack);
  hw_uint<128 > return_value670;
  set_at<0, 128, 32>(return_value670, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_3536);
  set_at<32, 128, 32>(return_value670, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_2534);
  set_at<64, 128, 32>(return_value670, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_1532);
  set_at<96, 128, 32>(return_value670, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_0530);
  return return_value670;

}

hw_uint<64> pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_cu672(hw_uint<32*2>& lp_in0_2_buf36, hw_uint<32*2>& lp_in1_2_buf84) {
  hw_uint<32> lp_in0_2_buf36_lane_0 = lp_in0_2_buf36.extract<0, 31>();
  hw_uint<32> lp_in0_2_buf36_lane_1 = lp_in0_2_buf36.extract<32, 63>();
  hw_uint<32> lp_in1_2_buf84_lane_0 = lp_in1_2_buf84.extract<0, 31>();
  hw_uint<32> lp_in1_2_buf84_lane_1 = lp_in1_2_buf84.extract<32, 63>();

	
  hw_uint<32 > lp_in0_2_buf36_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_lane_0_pack, lp_in0_2_buf36_lane_0);
  hw_uint<32 > lp_in1_2_buf84_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_lane_0_pack, lp_in1_2_buf84_lane_0);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_1542 = llf_float_average(lp_in0_2_buf36_lane_0_pack, lp_in1_2_buf84_lane_0_pack);

  hw_uint<32 > lp_in0_2_buf36_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_lane_1_pack, lp_in0_2_buf36_lane_1);
  hw_uint<32 > lp_in1_2_buf84_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_lane_1_pack, lp_in1_2_buf84_lane_1);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0540 = llf_float_average(lp_in0_2_buf36_lane_1_pack, lp_in1_2_buf84_lane_1_pack);
  hw_uint<64 > return_value673;
  set_at<0, 64, 32>(return_value673, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_1542);
  set_at<32, 64, 32>(return_value673, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0540);
  return return_value673;

}

hw_uint<64> us_merged_3126_cu675(hw_uint<32*2>& merged_3) {
  return merged_3;
}

hw_uint<64> merged_2_reconstruct_lp120122_cu677(hw_uint<32*2>& merged_2, hw_uint<32*2>& merged_3_us124) {
  hw_uint<32> merged_2_lane_0 = merged_2.extract<0, 31>();
  hw_uint<32> merged_2_lane_1 = merged_2.extract<32, 63>();
  hw_uint<32> merged_3_us124_lane_0 = merged_3_us124.extract<0, 31>();
  hw_uint<32> merged_3_us124_lane_1 = merged_3_us124.extract<32, 63>();

	
  hw_uint<32 > merged_2_lane_0_pack;
  set_at<0, 32, 32>(merged_2_lane_0_pack, merged_2_lane_0);
  hw_uint<32 > merged_3_us124_lane_0_pack;
  set_at<0, 32, 32>(merged_3_us124_lane_0_pack, merged_3_us124_lane_0);
  auto res_rc128_sm338_1552 = llf_add_float_32(merged_2_lane_0_pack, merged_3_us124_lane_0_pack);

  hw_uint<32 > merged_2_lane_1_pack;
  set_at<0, 32, 32>(merged_2_lane_1_pack, merged_2_lane_1);
  hw_uint<32 > merged_3_us124_lane_1_pack;
  set_at<0, 32, 32>(merged_3_us124_lane_1_pack, merged_3_us124_lane_1);
  auto res_rc128_sm338_0550 = llf_add_float_32(merged_2_lane_1_pack, merged_3_us124_lane_1_pack);
  hw_uint<64 > return_value678;
  set_at<0, 64, 32>(return_value678, res_rc128_sm338_1552);
  set_at<32, 64, 32>(return_value678, res_rc128_sm338_0550);
  return return_value678;

}

hw_uint<128> us_merged_2_reconstruct_lp120_buf123135_cu680(hw_uint<32*4>& merged_2_reconstruct_lp120_buf123) {
  return merged_2_reconstruct_lp120_buf123;
}

hw_uint<128> merged_1_reconstruct_lp129131_cu682(hw_uint<32*4>& merged_1, hw_uint<32*4>& merged_2_reconstruct_lp120_buf123_us133) {
  hw_uint<32> merged_1_lane_0 = merged_1.extract<0, 31>();
  hw_uint<32> merged_1_lane_1 = merged_1.extract<32, 63>();
  hw_uint<32> merged_1_lane_2 = merged_1.extract<64, 95>();
  hw_uint<32> merged_1_lane_3 = merged_1.extract<96, 127>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_0 = merged_2_reconstruct_lp120_buf123_us133.extract<0, 31>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_1 = merged_2_reconstruct_lp120_buf123_us133.extract<32, 63>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_2 = merged_2_reconstruct_lp120_buf123_us133.extract<64, 95>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_3 = merged_2_reconstruct_lp120_buf123_us133.extract<96, 127>();

	
  hw_uint<32 > merged_1_lane_0_pack;
  set_at<0, 32, 32>(merged_1_lane_0_pack, merged_1_lane_0);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_0_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_lane_0);
  auto res_rc137_sm340_3568 = llf_add_float_32(merged_1_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_lane_0_pack);

  hw_uint<32 > merged_1_lane_1_pack;
  set_at<0, 32, 32>(merged_1_lane_1_pack, merged_1_lane_1);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_1_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_lane_1);
  auto res_rc137_sm340_2566 = llf_add_float_32(merged_1_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_lane_1_pack);

  hw_uint<32 > merged_1_lane_2_pack;
  set_at<0, 32, 32>(merged_1_lane_2_pack, merged_1_lane_2);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_2_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_lane_2);
  auto res_rc137_sm340_1564 = llf_add_float_32(merged_1_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_lane_2_pack);

  hw_uint<32 > merged_1_lane_3_pack;
  set_at<0, 32, 32>(merged_1_lane_3_pack, merged_1_lane_3);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_3_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_lane_3);
  auto res_rc137_sm340_0562 = llf_add_float_32(merged_1_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_lane_3_pack);
  hw_uint<128 > return_value683;
  set_at<0, 128, 32>(return_value683, res_rc137_sm340_3568);
  set_at<32, 128, 32>(return_value683, res_rc137_sm340_2566);
  set_at<64, 128, 32>(return_value683, res_rc137_sm340_1564);
  set_at<96, 128, 32>(return_value683, res_rc137_sm340_0562);
  return return_value683;

}

hw_uint<256> us_merged_1_reconstruct_lp129_buf132144_cu685(hw_uint<32*8>& merged_1_reconstruct_lp129_buf132) {
  return merged_1_reconstruct_lp129_buf132;
}

hw_uint<256> merged_0_reconstruct_lp138140_cu687(hw_uint<32*8>& merged_0, hw_uint<32*8>& merged_1_reconstruct_lp129_buf132_us142) {
  hw_uint<32> merged_0_lane_0 = merged_0.extract<0, 31>();
  hw_uint<32> merged_0_lane_1 = merged_0.extract<32, 63>();
  hw_uint<32> merged_0_lane_2 = merged_0.extract<64, 95>();
  hw_uint<32> merged_0_lane_3 = merged_0.extract<96, 127>();
  hw_uint<32> merged_0_lane_4 = merged_0.extract<128, 159>();
  hw_uint<32> merged_0_lane_5 = merged_0.extract<160, 191>();
  hw_uint<32> merged_0_lane_6 = merged_0.extract<192, 223>();
  hw_uint<32> merged_0_lane_7 = merged_0.extract<224, 255>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_0 = merged_1_reconstruct_lp129_buf132_us142.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_1 = merged_1_reconstruct_lp129_buf132_us142.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_2 = merged_1_reconstruct_lp129_buf132_us142.extract<64, 95>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_3 = merged_1_reconstruct_lp129_buf132_us142.extract<96, 127>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_4 = merged_1_reconstruct_lp129_buf132_us142.extract<128, 159>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_5 = merged_1_reconstruct_lp129_buf132_us142.extract<160, 191>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_6 = merged_1_reconstruct_lp129_buf132_us142.extract<192, 223>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_7 = merged_1_reconstruct_lp129_buf132_us142.extract<224, 255>();

	
  hw_uint<32 > merged_0_lane_0_pack;
  set_at<0, 32, 32>(merged_0_lane_0_pack, merged_0_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0);
  auto res_rc146_sm342_7600 = llf_add_float_32(merged_0_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0_pack);

  hw_uint<32 > merged_0_lane_1_pack;
  set_at<0, 32, 32>(merged_0_lane_1_pack, merged_0_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1);
  auto res_rc146_sm342_6598 = llf_add_float_32(merged_0_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1_pack);

  hw_uint<32 > merged_0_lane_2_pack;
  set_at<0, 32, 32>(merged_0_lane_2_pack, merged_0_lane_2);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_2_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_lane_2);
  auto res_rc146_sm342_5596 = llf_add_float_32(merged_0_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_lane_2_pack);

  hw_uint<32 > merged_0_lane_3_pack;
  set_at<0, 32, 32>(merged_0_lane_3_pack, merged_0_lane_3);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_3_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_lane_3);
  auto res_rc146_sm342_4594 = llf_add_float_32(merged_0_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_lane_3_pack);

  hw_uint<32 > merged_0_lane_4_pack;
  set_at<0, 32, 32>(merged_0_lane_4_pack, merged_0_lane_4);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_4_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_lane_4);
  auto res_rc146_sm342_3592 = llf_add_float_32(merged_0_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_lane_4_pack);

  hw_uint<32 > merged_0_lane_5_pack;
  set_at<0, 32, 32>(merged_0_lane_5_pack, merged_0_lane_5);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_5_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_lane_5);
  auto res_rc146_sm342_2590 = llf_add_float_32(merged_0_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_lane_5_pack);

  hw_uint<32 > merged_0_lane_6_pack;
  set_at<0, 32, 32>(merged_0_lane_6_pack, merged_0_lane_6);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_6_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_lane_6);
  auto res_rc146_sm342_1588 = llf_add_float_32(merged_0_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_lane_6_pack);

  hw_uint<32 > merged_0_lane_7_pack;
  set_at<0, 32, 32>(merged_0_lane_7_pack, merged_0_lane_7);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_7_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_lane_7);
  auto res_rc146_sm342_0586 = llf_add_float_32(merged_0_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_lane_7_pack);
  hw_uint<256 > return_value688;
  set_at<0, 256, 32>(return_value688, res_rc146_sm342_7600);
  set_at<32, 256, 32>(return_value688, res_rc146_sm342_6598);
  set_at<64, 256, 32>(return_value688, res_rc146_sm342_5596);
  set_at<96, 256, 32>(return_value688, res_rc146_sm342_4594);
  set_at<128, 256, 32>(return_value688, res_rc146_sm342_3592);
  set_at<160, 256, 32>(return_value688, res_rc146_sm342_2590);
  set_at<192, 256, 32>(return_value688, res_rc146_sm342_1588);
  set_at<224, 256, 32>(return_value688, res_rc146_sm342_0586);
  return return_value688;

}

hw_uint<256> pw_math_merged_0_reconstruct_lp138_buf141147149_cu690(hw_uint<32*8>& merged_0_reconstruct_lp138_buf141) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_0 = merged_0_reconstruct_lp138_buf141.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_1 = merged_0_reconstruct_lp138_buf141.extract<32, 63>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_2 = merged_0_reconstruct_lp138_buf141.extract<64, 95>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_3 = merged_0_reconstruct_lp138_buf141.extract<96, 127>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_4 = merged_0_reconstruct_lp138_buf141.extract<128, 159>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_5 = merged_0_reconstruct_lp138_buf141.extract<160, 191>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_6 = merged_0_reconstruct_lp138_buf141.extract<192, 223>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_7 = merged_0_reconstruct_lp138_buf141.extract<224, 255>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_0_pack, merged_0_reconstruct_lp138_buf141_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_7616 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_1_pack, merged_0_reconstruct_lp138_buf141_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_6614 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_1_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_2_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_2_pack, merged_0_reconstruct_lp138_buf141_lane_2);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_5612 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_2_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_3_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_3_pack, merged_0_reconstruct_lp138_buf141_lane_3);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_4610 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_3_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_4_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_4_pack, merged_0_reconstruct_lp138_buf141_lane_4);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_3608 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_4_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_5_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_5_pack, merged_0_reconstruct_lp138_buf141_lane_5);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_2606 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_5_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_6_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_6_pack, merged_0_reconstruct_lp138_buf141_lane_6);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1604 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_6_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_7_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_7_pack, merged_0_reconstruct_lp138_buf141_lane_7);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0602 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_7_pack);
  hw_uint<256 > return_value691;
  set_at<0, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_7616);
  set_at<32, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_6614);
  set_at<64, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_5612);
  set_at<96, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_4610);
  set_at<128, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_3608);
  set_at<160, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_2606);
  set_at<192, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1604);
  set_at<224, 256, 32>(return_value691, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0602);
  return return_value691;

}

