#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> lp_level_table8_0_buf57_to_gp_321851_ld2476_cu6436(hw_uint<32*8>& lp_level_table8_0_buf57_to_gp_321851) {
  return lp_level_table8_0_buf57_to_gp_321851;
}

hw_uint<256> oc_load_gray_in_oc02_cu6438(hw_uint<32*8>& gray_in_oc) {
  return gray_in_oc;
}

hw_uint<256> pw_math_gray_int46_cu6440(hw_uint<32*8>& gray_int_FIFO_buf2311) {
  hw_uint<32> gray_int_FIFO_buf2311_lane_0 = gray_int_FIFO_buf2311.extract<0, 31>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_1 = gray_int_FIFO_buf2311.extract<32, 63>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_2 = gray_int_FIFO_buf2311.extract<64, 95>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_3 = gray_int_FIFO_buf2311.extract<96, 127>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_4 = gray_int_FIFO_buf2311.extract<128, 159>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_5 = gray_int_FIFO_buf2311.extract<160, 191>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_6 = gray_int_FIFO_buf2311.extract<192, 223>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_7 = gray_int_FIFO_buf2311.extract<224, 255>();

	
  hw_uint<32 > gray_int_FIFO_buf2311_lane_0_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_0_pack, gray_int_FIFO_buf2311_lane_0);
  auto res_pw_math_gray_int47_sm2489_73006 = llf_int_to_float(gray_int_FIFO_buf2311_lane_0_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_1_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_1_pack, gray_int_FIFO_buf2311_lane_1);
  auto res_pw_math_gray_int47_sm2489_63004 = llf_int_to_float(gray_int_FIFO_buf2311_lane_1_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_2_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_2_pack, gray_int_FIFO_buf2311_lane_2);
  auto res_pw_math_gray_int47_sm2489_53002 = llf_int_to_float(gray_int_FIFO_buf2311_lane_2_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_3_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_3_pack, gray_int_FIFO_buf2311_lane_3);
  auto res_pw_math_gray_int47_sm2489_43000 = llf_int_to_float(gray_int_FIFO_buf2311_lane_3_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_4_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_4_pack, gray_int_FIFO_buf2311_lane_4);
  auto res_pw_math_gray_int47_sm2489_32998 = llf_int_to_float(gray_int_FIFO_buf2311_lane_4_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_5_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_5_pack, gray_int_FIFO_buf2311_lane_5);
  auto res_pw_math_gray_int47_sm2489_22996 = llf_int_to_float(gray_int_FIFO_buf2311_lane_5_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_6_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_6_pack, gray_int_FIFO_buf2311_lane_6);
  auto res_pw_math_gray_int47_sm2489_12994 = llf_int_to_float(gray_int_FIFO_buf2311_lane_6_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_7_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_7_pack, gray_int_FIFO_buf2311_lane_7);
  auto res_pw_math_gray_int47_sm2489_02992 = llf_int_to_float(gray_int_FIFO_buf2311_lane_7_pack);
  hw_uint<256 > return_value6441;
  set_at<0, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_73006);
  set_at<32, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_63004);
  set_at<64, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_53002);
  set_at<96, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_43000);
  set_at<128, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_32998);
  set_at<160, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_22996);
  set_at<192, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_12994);
  set_at<224, 256, 32>(return_value6441, res_pw_math_gray_int47_sm2489_02992);
  return return_value6441;

}

hw_uint<256> pw_math_gray911_cu6443(hw_uint<32*8>& gray_FIFO_buf2307) {
  hw_uint<32> gray_FIFO_buf2307_lane_0 = gray_FIFO_buf2307.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2307_lane_1 = gray_FIFO_buf2307.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2307_lane_2 = gray_FIFO_buf2307.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2307_lane_3 = gray_FIFO_buf2307.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2307_lane_4 = gray_FIFO_buf2307.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2307_lane_5 = gray_FIFO_buf2307.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2307_lane_6 = gray_FIFO_buf2307.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2307_lane_7 = gray_FIFO_buf2307.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2307_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_0_pack, gray_FIFO_buf2307_lane_0);
  auto res_pw_math_gray912_sm2490_72918 = llf_level_entry_0(gray_FIFO_buf2307_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_1_pack, gray_FIFO_buf2307_lane_1);
  auto res_pw_math_gray912_sm2490_62916 = llf_level_entry_0(gray_FIFO_buf2307_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_2_pack, gray_FIFO_buf2307_lane_2);
  auto res_pw_math_gray912_sm2490_52914 = llf_level_entry_0(gray_FIFO_buf2307_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_3_pack, gray_FIFO_buf2307_lane_3);
  auto res_pw_math_gray912_sm2490_42912 = llf_level_entry_0(gray_FIFO_buf2307_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_4_pack, gray_FIFO_buf2307_lane_4);
  auto res_pw_math_gray912_sm2490_32910 = llf_level_entry_0(gray_FIFO_buf2307_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_5_pack, gray_FIFO_buf2307_lane_5);
  auto res_pw_math_gray912_sm2490_22908 = llf_level_entry_0(gray_FIFO_buf2307_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_6_pack, gray_FIFO_buf2307_lane_6);
  auto res_pw_math_gray912_sm2490_12906 = llf_level_entry_0(gray_FIFO_buf2307_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_7_pack, gray_FIFO_buf2307_lane_7);
  auto res_pw_math_gray912_sm2490_02904 = llf_level_entry_0(gray_FIFO_buf2307_lane_7_pack);
  hw_uint<256 > return_value6444;
  set_at<0, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_72918);
  set_at<32, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_62916);
  set_at<64, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_52914);
  set_at<96, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_42912);
  set_at<128, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_32910);
  set_at<160, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_22908);
  set_at<192, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_12906);
  set_at<224, 256, 32>(return_value6444, res_pw_math_gray912_sm2490_02904);
  return return_value6444;

}

hw_uint<128> gp_level_table8_115_cu6446(hw_uint<32*36>& level_table8_FIFO_buf2383) {
  hw_uint<32> level_table8_FIFO_buf2383_lane_0 = level_table8_FIFO_buf2383.extract<0, 31>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_1 = level_table8_FIFO_buf2383.extract<32, 63>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_2 = level_table8_FIFO_buf2383.extract<64, 95>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_3 = level_table8_FIFO_buf2383.extract<96, 127>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_4 = level_table8_FIFO_buf2383.extract<128, 159>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_5 = level_table8_FIFO_buf2383.extract<160, 191>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_6 = level_table8_FIFO_buf2383.extract<192, 223>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_7 = level_table8_FIFO_buf2383.extract<224, 255>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_8 = level_table8_FIFO_buf2383.extract<256, 287>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_9 = level_table8_FIFO_buf2383.extract<288, 319>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_10 = level_table8_FIFO_buf2383.extract<320, 351>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_11 = level_table8_FIFO_buf2383.extract<352, 383>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_12 = level_table8_FIFO_buf2383.extract<384, 415>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_13 = level_table8_FIFO_buf2383.extract<416, 447>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_14 = level_table8_FIFO_buf2383.extract<448, 479>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_15 = level_table8_FIFO_buf2383.extract<480, 511>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_16 = level_table8_FIFO_buf2383.extract<512, 543>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_17 = level_table8_FIFO_buf2383.extract<544, 575>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_18 = level_table8_FIFO_buf2383.extract<576, 607>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_19 = level_table8_FIFO_buf2383.extract<608, 639>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_20 = level_table8_FIFO_buf2383.extract<640, 671>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_21 = level_table8_FIFO_buf2383.extract<672, 703>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_22 = level_table8_FIFO_buf2383.extract<704, 735>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_23 = level_table8_FIFO_buf2383.extract<736, 767>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_24 = level_table8_FIFO_buf2383.extract<768, 799>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_25 = level_table8_FIFO_buf2383.extract<800, 831>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_26 = level_table8_FIFO_buf2383.extract<832, 863>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_27 = level_table8_FIFO_buf2383.extract<864, 895>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_28 = level_table8_FIFO_buf2383.extract<896, 927>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_29 = level_table8_FIFO_buf2383.extract<928, 959>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_30 = level_table8_FIFO_buf2383.extract<960, 991>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_31 = level_table8_FIFO_buf2383.extract<992, 1023>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_32 = level_table8_FIFO_buf2383.extract<1024, 1055>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_33 = level_table8_FIFO_buf2383.extract<1056, 1087>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_34 = level_table8_FIFO_buf2383.extract<1088, 1119>();
  hw_uint<32> level_table8_FIFO_buf2383_lane_35 = level_table8_FIFO_buf2383.extract<1120, 1151>();

	
  hw_uint<288 > level_table8_FIFO_buf2383_lane_8_pack;
  set_at<0, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_0);
  set_at<32, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_1);
  set_at<64, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_2);
  set_at<96, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_3);
  set_at<128, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_4);
  set_at<160, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_5);
  set_at<192, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_6);
  set_at<224, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_7);
  set_at<256, 288, 32>(level_table8_FIFO_buf2383_lane_8_pack, level_table8_FIFO_buf2383_lane_8);
  auto res_gp_level_table8_115_merged1160_sm2491_32988 = gp_level_table8_115_cu1158(level_table8_FIFO_buf2383_lane_8_pack);

  hw_uint<288 > level_table8_FIFO_buf2383_lane_17_pack;
  set_at<0, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_9);
  set_at<32, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_10);
  set_at<64, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_11);
  set_at<96, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_12);
  set_at<128, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_13);
  set_at<160, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_14);
  set_at<192, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_15);
  set_at<224, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_16);
  set_at<256, 288, 32>(level_table8_FIFO_buf2383_lane_17_pack, level_table8_FIFO_buf2383_lane_17);
  auto res_gp_level_table8_115_merged1160_sm2491_22986 = gp_level_table8_115_cu1158(level_table8_FIFO_buf2383_lane_17_pack);

  hw_uint<288 > level_table8_FIFO_buf2383_lane_26_pack;
  set_at<0, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_18);
  set_at<32, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_19);
  set_at<64, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_20);
  set_at<96, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_21);
  set_at<128, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_22);
  set_at<160, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_23);
  set_at<192, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_24);
  set_at<224, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_25);
  set_at<256, 288, 32>(level_table8_FIFO_buf2383_lane_26_pack, level_table8_FIFO_buf2383_lane_26);
  auto res_gp_level_table8_115_merged1160_sm2491_12984 = gp_level_table8_115_cu1158(level_table8_FIFO_buf2383_lane_26_pack);

  hw_uint<288 > level_table8_FIFO_buf2383_lane_35_pack;
  set_at<0, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_27);
  set_at<32, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_28);
  set_at<64, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_29);
  set_at<96, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_30);
  set_at<128, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_31);
  set_at<160, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_32);
  set_at<192, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_33);
  set_at<224, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_34);
  set_at<256, 288, 32>(level_table8_FIFO_buf2383_lane_35_pack, level_table8_FIFO_buf2383_lane_35);
  auto res_gp_level_table8_115_merged1160_sm2491_02982 = gp_level_table8_115_cu1158(level_table8_FIFO_buf2383_lane_35_pack);
  hw_uint<128 > return_value6447;
  set_at<0, 128, 32>(return_value6447, res_gp_level_table8_115_merged1160_sm2491_32988);
  set_at<32, 128, 32>(return_value6447, res_gp_level_table8_115_merged1160_sm2491_22986);
  set_at<64, 128, 32>(return_value6447, res_gp_level_table8_115_merged1160_sm2491_12984);
  set_at<96, 128, 32>(return_value6447, res_gp_level_table8_115_merged1160_sm2491_02982);
  return return_value6447;

}

hw_uint<64> gp_level_table8_223_cu6449(hw_uint<32*18>& gp_level_table8_1_buf13_FIFO_buf2223) {
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_0 = gp_level_table8_1_buf13_FIFO_buf2223.extract<0, 31>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_1 = gp_level_table8_1_buf13_FIFO_buf2223.extract<32, 63>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_2 = gp_level_table8_1_buf13_FIFO_buf2223.extract<64, 95>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_3 = gp_level_table8_1_buf13_FIFO_buf2223.extract<96, 127>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_4 = gp_level_table8_1_buf13_FIFO_buf2223.extract<128, 159>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_5 = gp_level_table8_1_buf13_FIFO_buf2223.extract<160, 191>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_6 = gp_level_table8_1_buf13_FIFO_buf2223.extract<192, 223>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_7 = gp_level_table8_1_buf13_FIFO_buf2223.extract<224, 255>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_8 = gp_level_table8_1_buf13_FIFO_buf2223.extract<256, 287>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_9 = gp_level_table8_1_buf13_FIFO_buf2223.extract<288, 319>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_10 = gp_level_table8_1_buf13_FIFO_buf2223.extract<320, 351>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_11 = gp_level_table8_1_buf13_FIFO_buf2223.extract<352, 383>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_12 = gp_level_table8_1_buf13_FIFO_buf2223.extract<384, 415>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_13 = gp_level_table8_1_buf13_FIFO_buf2223.extract<416, 447>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_14 = gp_level_table8_1_buf13_FIFO_buf2223.extract<448, 479>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_15 = gp_level_table8_1_buf13_FIFO_buf2223.extract<480, 511>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_16 = gp_level_table8_1_buf13_FIFO_buf2223.extract<512, 543>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2223_lane_17 = gp_level_table8_1_buf13_FIFO_buf2223.extract<544, 575>();

	
  hw_uint<288 > gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_0);
  set_at<32, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_1);
  set_at<64, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_2);
  set_at<96, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_3);
  set_at<128, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_4);
  set_at<160, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_5);
  set_at<192, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_6);
  set_at<224, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_7);
  set_at<256, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_8);
  auto res_gp_level_table8_223_merged1163_sm2492_12938 = gp_level_table8_223_cu1161(gp_level_table8_1_buf13_FIFO_buf2223_lane_8_pack);

  hw_uint<288 > gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_9);
  set_at<32, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_10);
  set_at<64, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_11);
  set_at<96, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_12);
  set_at<128, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_13);
  set_at<160, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_14);
  set_at<192, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_15);
  set_at<224, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_16);
  set_at<256, 288, 32>(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack, gp_level_table8_1_buf13_FIFO_buf2223_lane_17);
  auto res_gp_level_table8_223_merged1163_sm2492_02936 = gp_level_table8_223_cu1161(gp_level_table8_1_buf13_FIFO_buf2223_lane_17_pack);
  hw_uint<64 > return_value6450;
  set_at<0, 64, 32>(return_value6450, res_gp_level_table8_223_merged1163_sm2492_12938);
  set_at<32, 64, 32>(return_value6450, res_gp_level_table8_223_merged1163_sm2492_02936);
  return return_value6450;

}

hw_uint<64> us_gp_level_table8_3_buf2939_cu6452(hw_uint<32*2>& gp_level_table8_3_buf29_FIFO_buf2259) {
  return gp_level_table8_3_buf29_FIFO_buf2259;
}

hw_uint<64> lp_level_table8_243_cu6454(hw_uint<32*2>& gp_level_table8_2_buf21_FIFO_buf2243, hw_uint<32*2>& gp_level_table8_3_buf29_us37_FIFO_buf2263) {
  hw_uint<32> gp_level_table8_2_buf21_FIFO_buf2243_lane_0 = gp_level_table8_2_buf21_FIFO_buf2243.extract<0, 31>();
  hw_uint<32> gp_level_table8_2_buf21_FIFO_buf2243_lane_1 = gp_level_table8_2_buf21_FIFO_buf2243.extract<32, 63>();
  hw_uint<32> gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_0 = gp_level_table8_3_buf29_us37_FIFO_buf2263.extract<0, 31>();
  hw_uint<32> gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_1 = gp_level_table8_3_buf29_us37_FIFO_buf2263.extract<32, 63>();

	
  hw_uint<32 > gp_level_table8_2_buf21_FIFO_buf2243_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_FIFO_buf2243_lane_0_pack, gp_level_table8_2_buf21_FIFO_buf2243_lane_0);
  hw_uint<32 > gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_0_pack, gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_0);
  auto res_diff44_sm2495_12972 = llf_diff_float_32(gp_level_table8_2_buf21_FIFO_buf2243_lane_0_pack, gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_0_pack);

  hw_uint<32 > gp_level_table8_2_buf21_FIFO_buf2243_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_FIFO_buf2243_lane_1_pack, gp_level_table8_2_buf21_FIFO_buf2243_lane_1);
  hw_uint<32 > gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_1_pack, gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_1);
  auto res_diff44_sm2495_02970 = llf_diff_float_32(gp_level_table8_2_buf21_FIFO_buf2243_lane_1_pack, gp_level_table8_3_buf29_us37_FIFO_buf2263_lane_1_pack);
  hw_uint<64 > return_value6455;
  set_at<0, 64, 32>(return_value6455, res_diff44_sm2495_12972);
  set_at<32, 64, 32>(return_value6455, res_diff44_sm2495_02970);
  return return_value6455;

}

hw_uint<128> us_gp_level_table8_2_buf2147_cu6457(hw_uint<32*4>& gp_level_table8_2_buf21_FIFO_buf2247) {
  return gp_level_table8_2_buf21_FIFO_buf2247;
}

hw_uint<128> lp_level_table8_151_cu6459(hw_uint<32*4>& gp_level_table8_1_buf13_FIFO_buf2227, hw_uint<32*4>& gp_level_table8_2_buf21_us45_FIFO_buf2251) {
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2227_lane_0 = gp_level_table8_1_buf13_FIFO_buf2227.extract<0, 31>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2227_lane_1 = gp_level_table8_1_buf13_FIFO_buf2227.extract<32, 63>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2227_lane_2 = gp_level_table8_1_buf13_FIFO_buf2227.extract<64, 95>();
  hw_uint<32> gp_level_table8_1_buf13_FIFO_buf2227_lane_3 = gp_level_table8_1_buf13_FIFO_buf2227.extract<96, 127>();
  hw_uint<32> gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_0 = gp_level_table8_2_buf21_us45_FIFO_buf2251.extract<0, 31>();
  hw_uint<32> gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_1 = gp_level_table8_2_buf21_us45_FIFO_buf2251.extract<32, 63>();
  hw_uint<32> gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_2 = gp_level_table8_2_buf21_us45_FIFO_buf2251.extract<64, 95>();
  hw_uint<32> gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_3 = gp_level_table8_2_buf21_us45_FIFO_buf2251.extract<96, 127>();

	
  hw_uint<32 > gp_level_table8_1_buf13_FIFO_buf2227_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_FIFO_buf2227_lane_0_pack, gp_level_table8_1_buf13_FIFO_buf2227_lane_0);
  hw_uint<32 > gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_0_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_0);
  auto res_diff52_sm2497_32902 = llf_diff_float_32(gp_level_table8_1_buf13_FIFO_buf2227_lane_0_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_0_pack);

  hw_uint<32 > gp_level_table8_1_buf13_FIFO_buf2227_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_FIFO_buf2227_lane_1_pack, gp_level_table8_1_buf13_FIFO_buf2227_lane_1);
  hw_uint<32 > gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_1_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_1);
  auto res_diff52_sm2497_22900 = llf_diff_float_32(gp_level_table8_1_buf13_FIFO_buf2227_lane_1_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_1_pack);

  hw_uint<32 > gp_level_table8_1_buf13_FIFO_buf2227_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_FIFO_buf2227_lane_2_pack, gp_level_table8_1_buf13_FIFO_buf2227_lane_2);
  hw_uint<32 > gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_2_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_2);
  auto res_diff52_sm2497_12898 = llf_diff_float_32(gp_level_table8_1_buf13_FIFO_buf2227_lane_2_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_2_pack);

  hw_uint<32 > gp_level_table8_1_buf13_FIFO_buf2227_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_FIFO_buf2227_lane_3_pack, gp_level_table8_1_buf13_FIFO_buf2227_lane_3);
  hw_uint<32 > gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_3_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_3);
  auto res_diff52_sm2497_02896 = llf_diff_float_32(gp_level_table8_1_buf13_FIFO_buf2227_lane_3_pack, gp_level_table8_2_buf21_us45_FIFO_buf2251_lane_3_pack);
  hw_uint<128 > return_value6460;
  set_at<0, 128, 32>(return_value6460, res_diff52_sm2497_32902);
  set_at<32, 128, 32>(return_value6460, res_diff52_sm2497_22900);
  set_at<64, 128, 32>(return_value6460, res_diff52_sm2497_12898);
  set_at<96, 128, 32>(return_value6460, res_diff52_sm2497_02896);
  return return_value6460;

}

hw_uint<256> us_gp_level_table8_1_buf1355_cu6462(hw_uint<32*8>& gp_level_table8_1_buf13_FIFO_buf2231) {
  return gp_level_table8_1_buf13_FIFO_buf2231;
}

hw_uint<256> lp_level_table8_059_cu6464(hw_uint<32*8>& gp_level_table8_1_buf13_us53_FIFO_buf2235, hw_uint<32*8>& level_table8_FIFO_buf2387) {
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<0, 31>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<32, 63>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_2 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<64, 95>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_3 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<96, 127>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_4 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<128, 159>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_5 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<160, 191>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_6 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<192, 223>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_7 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<224, 255>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_0 = level_table8_FIFO_buf2387.extract<0, 31>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_1 = level_table8_FIFO_buf2387.extract<32, 63>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_2 = level_table8_FIFO_buf2387.extract<64, 95>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_3 = level_table8_FIFO_buf2387.extract<96, 127>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_4 = level_table8_FIFO_buf2387.extract<128, 159>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_5 = level_table8_FIFO_buf2387.extract<160, 191>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_6 = level_table8_FIFO_buf2387.extract<192, 223>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_7 = level_table8_FIFO_buf2387.extract<224, 255>();

	
  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_0_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_0_pack, level_table8_FIFO_buf2387_lane_0);
  auto res_diff60_sm2499_73424 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0_pack, level_table8_FIFO_buf2387_lane_0_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_1_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_1_pack, level_table8_FIFO_buf2387_lane_1);
  auto res_diff60_sm2499_63422 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1_pack, level_table8_FIFO_buf2387_lane_1_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_2_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_2);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_2_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_2_pack, level_table8_FIFO_buf2387_lane_2);
  auto res_diff60_sm2499_53420 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_2_pack, level_table8_FIFO_buf2387_lane_2_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_3_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_3);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_3_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_3_pack, level_table8_FIFO_buf2387_lane_3);
  auto res_diff60_sm2499_43418 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_3_pack, level_table8_FIFO_buf2387_lane_3_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_4_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_4);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_4_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_4_pack, level_table8_FIFO_buf2387_lane_4);
  auto res_diff60_sm2499_33416 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_4_pack, level_table8_FIFO_buf2387_lane_4_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_5_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_5);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_5_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_5_pack, level_table8_FIFO_buf2387_lane_5);
  auto res_diff60_sm2499_23414 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_5_pack, level_table8_FIFO_buf2387_lane_5_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_6_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_6);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_6_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_6_pack, level_table8_FIFO_buf2387_lane_6);
  auto res_diff60_sm2499_13412 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_6_pack, level_table8_FIFO_buf2387_lane_6_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_7_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_7);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_7_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_7_pack, level_table8_FIFO_buf2387_lane_7);
  auto res_diff60_sm2499_03410 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_7_pack, level_table8_FIFO_buf2387_lane_7_pack);
  hw_uint<256 > return_value6465;
  set_at<0, 256, 32>(return_value6465, res_diff60_sm2499_73424);
  set_at<32, 256, 32>(return_value6465, res_diff60_sm2499_63422);
  set_at<64, 256, 32>(return_value6465, res_diff60_sm2499_53420);
  set_at<96, 256, 32>(return_value6465, res_diff60_sm2499_43418);
  set_at<128, 256, 32>(return_value6465, res_diff60_sm2499_33416);
  set_at<160, 256, 32>(return_value6465, res_diff60_sm2499_23414);
  set_at<192, 256, 32>(return_value6465, res_diff60_sm2499_13412);
  set_at<224, 256, 32>(return_value6465, res_diff60_sm2499_03410);
  return return_value6465;

}

hw_uint<256> pw_math_gray6264_cu6467(hw_uint<32*8>& gray_FIFO_buf2303) {
  hw_uint<32> gray_FIFO_buf2303_lane_0 = gray_FIFO_buf2303.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2303_lane_1 = gray_FIFO_buf2303.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2303_lane_2 = gray_FIFO_buf2303.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2303_lane_3 = gray_FIFO_buf2303.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2303_lane_4 = gray_FIFO_buf2303.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2303_lane_5 = gray_FIFO_buf2303.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2303_lane_6 = gray_FIFO_buf2303.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2303_lane_7 = gray_FIFO_buf2303.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2303_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_0_pack, gray_FIFO_buf2303_lane_0);
  auto res_pw_math_gray6265_sm2500_73440 = llf_level_entry_1(gray_FIFO_buf2303_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_1_pack, gray_FIFO_buf2303_lane_1);
  auto res_pw_math_gray6265_sm2500_63438 = llf_level_entry_1(gray_FIFO_buf2303_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_2_pack, gray_FIFO_buf2303_lane_2);
  auto res_pw_math_gray6265_sm2500_53436 = llf_level_entry_1(gray_FIFO_buf2303_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_3_pack, gray_FIFO_buf2303_lane_3);
  auto res_pw_math_gray6265_sm2500_43434 = llf_level_entry_1(gray_FIFO_buf2303_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_4_pack, gray_FIFO_buf2303_lane_4);
  auto res_pw_math_gray6265_sm2500_33432 = llf_level_entry_1(gray_FIFO_buf2303_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_5_pack, gray_FIFO_buf2303_lane_5);
  auto res_pw_math_gray6265_sm2500_23430 = llf_level_entry_1(gray_FIFO_buf2303_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_6_pack, gray_FIFO_buf2303_lane_6);
  auto res_pw_math_gray6265_sm2500_13428 = llf_level_entry_1(gray_FIFO_buf2303_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_7_pack, gray_FIFO_buf2303_lane_7);
  auto res_pw_math_gray6265_sm2500_03426 = llf_level_entry_1(gray_FIFO_buf2303_lane_7_pack);
  hw_uint<256 > return_value6468;
  set_at<0, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_73440);
  set_at<32, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_63438);
  set_at<64, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_53436);
  set_at<96, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_43434);
  set_at<128, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_33432);
  set_at<160, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_23430);
  set_at<192, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_13428);
  set_at<224, 256, 32>(return_value6468, res_pw_math_gray6265_sm2500_03426);
  return return_value6468;

}

hw_uint<128> gp_level_table61_168_cu6470(hw_uint<32*36>& level_table61_FIFO_buf2375) {
  hw_uint<32> level_table61_FIFO_buf2375_lane_0 = level_table61_FIFO_buf2375.extract<0, 31>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_1 = level_table61_FIFO_buf2375.extract<32, 63>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_2 = level_table61_FIFO_buf2375.extract<64, 95>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_3 = level_table61_FIFO_buf2375.extract<96, 127>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_4 = level_table61_FIFO_buf2375.extract<128, 159>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_5 = level_table61_FIFO_buf2375.extract<160, 191>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_6 = level_table61_FIFO_buf2375.extract<192, 223>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_7 = level_table61_FIFO_buf2375.extract<224, 255>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_8 = level_table61_FIFO_buf2375.extract<256, 287>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_9 = level_table61_FIFO_buf2375.extract<288, 319>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_10 = level_table61_FIFO_buf2375.extract<320, 351>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_11 = level_table61_FIFO_buf2375.extract<352, 383>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_12 = level_table61_FIFO_buf2375.extract<384, 415>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_13 = level_table61_FIFO_buf2375.extract<416, 447>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_14 = level_table61_FIFO_buf2375.extract<448, 479>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_15 = level_table61_FIFO_buf2375.extract<480, 511>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_16 = level_table61_FIFO_buf2375.extract<512, 543>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_17 = level_table61_FIFO_buf2375.extract<544, 575>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_18 = level_table61_FIFO_buf2375.extract<576, 607>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_19 = level_table61_FIFO_buf2375.extract<608, 639>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_20 = level_table61_FIFO_buf2375.extract<640, 671>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_21 = level_table61_FIFO_buf2375.extract<672, 703>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_22 = level_table61_FIFO_buf2375.extract<704, 735>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_23 = level_table61_FIFO_buf2375.extract<736, 767>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_24 = level_table61_FIFO_buf2375.extract<768, 799>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_25 = level_table61_FIFO_buf2375.extract<800, 831>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_26 = level_table61_FIFO_buf2375.extract<832, 863>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_27 = level_table61_FIFO_buf2375.extract<864, 895>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_28 = level_table61_FIFO_buf2375.extract<896, 927>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_29 = level_table61_FIFO_buf2375.extract<928, 959>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_30 = level_table61_FIFO_buf2375.extract<960, 991>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_31 = level_table61_FIFO_buf2375.extract<992, 1023>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_32 = level_table61_FIFO_buf2375.extract<1024, 1055>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_33 = level_table61_FIFO_buf2375.extract<1056, 1087>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_34 = level_table61_FIFO_buf2375.extract<1088, 1119>();
  hw_uint<32> level_table61_FIFO_buf2375_lane_35 = level_table61_FIFO_buf2375.extract<1120, 1151>();

	
  hw_uint<288 > level_table61_FIFO_buf2375_lane_8_pack;
  set_at<0, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_0);
  set_at<32, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_1);
  set_at<64, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_2);
  set_at<96, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_3);
  set_at<128, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_4);
  set_at<160, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_5);
  set_at<192, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_6);
  set_at<224, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_7);
  set_at<256, 288, 32>(level_table61_FIFO_buf2375_lane_8_pack, level_table61_FIFO_buf2375_lane_8);
  auto res_gp_level_table61_168_merged1169_sm2501_33448 = gp_level_table61_168_cu1167(level_table61_FIFO_buf2375_lane_8_pack);

  hw_uint<288 > level_table61_FIFO_buf2375_lane_17_pack;
  set_at<0, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_9);
  set_at<32, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_10);
  set_at<64, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_11);
  set_at<96, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_12);
  set_at<128, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_13);
  set_at<160, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_14);
  set_at<192, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_15);
  set_at<224, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_16);
  set_at<256, 288, 32>(level_table61_FIFO_buf2375_lane_17_pack, level_table61_FIFO_buf2375_lane_17);
  auto res_gp_level_table61_168_merged1169_sm2501_23446 = gp_level_table61_168_cu1167(level_table61_FIFO_buf2375_lane_17_pack);

  hw_uint<288 > level_table61_FIFO_buf2375_lane_26_pack;
  set_at<0, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_18);
  set_at<32, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_19);
  set_at<64, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_20);
  set_at<96, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_21);
  set_at<128, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_22);
  set_at<160, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_23);
  set_at<192, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_24);
  set_at<224, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_25);
  set_at<256, 288, 32>(level_table61_FIFO_buf2375_lane_26_pack, level_table61_FIFO_buf2375_lane_26);
  auto res_gp_level_table61_168_merged1169_sm2501_13444 = gp_level_table61_168_cu1167(level_table61_FIFO_buf2375_lane_26_pack);

  hw_uint<288 > level_table61_FIFO_buf2375_lane_35_pack;
  set_at<0, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_27);
  set_at<32, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_28);
  set_at<64, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_29);
  set_at<96, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_30);
  set_at<128, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_31);
  set_at<160, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_32);
  set_at<192, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_33);
  set_at<224, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_34);
  set_at<256, 288, 32>(level_table61_FIFO_buf2375_lane_35_pack, level_table61_FIFO_buf2375_lane_35);
  auto res_gp_level_table61_168_merged1169_sm2501_03442 = gp_level_table61_168_cu1167(level_table61_FIFO_buf2375_lane_35_pack);
  hw_uint<128 > return_value6471;
  set_at<0, 128, 32>(return_value6471, res_gp_level_table61_168_merged1169_sm2501_33448);
  set_at<32, 128, 32>(return_value6471, res_gp_level_table61_168_merged1169_sm2501_23446);
  set_at<64, 128, 32>(return_value6471, res_gp_level_table61_168_merged1169_sm2501_13444);
  set_at<96, 128, 32>(return_value6471, res_gp_level_table61_168_merged1169_sm2501_03442);
  return return_value6471;

}

hw_uint<64> gp_level_table61_276_cu6473(hw_uint<32*18>& gp_level_table61_1_buf66_FIFO_buf2179) {
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_0 = gp_level_table61_1_buf66_FIFO_buf2179.extract<0, 31>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_1 = gp_level_table61_1_buf66_FIFO_buf2179.extract<32, 63>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_2 = gp_level_table61_1_buf66_FIFO_buf2179.extract<64, 95>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_3 = gp_level_table61_1_buf66_FIFO_buf2179.extract<96, 127>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_4 = gp_level_table61_1_buf66_FIFO_buf2179.extract<128, 159>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_5 = gp_level_table61_1_buf66_FIFO_buf2179.extract<160, 191>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_6 = gp_level_table61_1_buf66_FIFO_buf2179.extract<192, 223>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_7 = gp_level_table61_1_buf66_FIFO_buf2179.extract<224, 255>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_8 = gp_level_table61_1_buf66_FIFO_buf2179.extract<256, 287>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_9 = gp_level_table61_1_buf66_FIFO_buf2179.extract<288, 319>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_10 = gp_level_table61_1_buf66_FIFO_buf2179.extract<320, 351>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_11 = gp_level_table61_1_buf66_FIFO_buf2179.extract<352, 383>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_12 = gp_level_table61_1_buf66_FIFO_buf2179.extract<384, 415>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_13 = gp_level_table61_1_buf66_FIFO_buf2179.extract<416, 447>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_14 = gp_level_table61_1_buf66_FIFO_buf2179.extract<448, 479>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_15 = gp_level_table61_1_buf66_FIFO_buf2179.extract<480, 511>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_16 = gp_level_table61_1_buf66_FIFO_buf2179.extract<512, 543>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2179_lane_17 = gp_level_table61_1_buf66_FIFO_buf2179.extract<544, 575>();

	
  hw_uint<288 > gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_0);
  set_at<32, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_1);
  set_at<64, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_2);
  set_at<96, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_3);
  set_at<128, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_4);
  set_at<160, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_5);
  set_at<192, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_6);
  set_at<224, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_7);
  set_at<256, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_8);
  auto res_gp_level_table61_276_merged1172_sm2502_13452 = gp_level_table61_276_cu1170(gp_level_table61_1_buf66_FIFO_buf2179_lane_8_pack);

  hw_uint<288 > gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_9);
  set_at<32, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_10);
  set_at<64, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_11);
  set_at<96, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_12);
  set_at<128, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_13);
  set_at<160, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_14);
  set_at<192, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_15);
  set_at<224, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_16);
  set_at<256, 288, 32>(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack, gp_level_table61_1_buf66_FIFO_buf2179_lane_17);
  auto res_gp_level_table61_276_merged1172_sm2502_03450 = gp_level_table61_276_cu1170(gp_level_table61_1_buf66_FIFO_buf2179_lane_17_pack);
  hw_uint<64 > return_value6474;
  set_at<0, 64, 32>(return_value6474, res_gp_level_table61_276_merged1172_sm2502_13452);
  set_at<32, 64, 32>(return_value6474, res_gp_level_table61_276_merged1172_sm2502_03450);
  return return_value6474;

}

hw_uint<256> pw_math_gray168170_cu6476(hw_uint<32*8>& gray_FIFO_buf2283) {
  hw_uint<32> gray_FIFO_buf2283_lane_0 = gray_FIFO_buf2283.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2283_lane_1 = gray_FIFO_buf2283.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2283_lane_2 = gray_FIFO_buf2283.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2283_lane_3 = gray_FIFO_buf2283.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2283_lane_4 = gray_FIFO_buf2283.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2283_lane_5 = gray_FIFO_buf2283.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2283_lane_6 = gray_FIFO_buf2283.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2283_lane_7 = gray_FIFO_buf2283.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2283_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_0_pack, gray_FIFO_buf2283_lane_0);
  auto res_pw_math_gray168171_sm2504_73470 = llf_level_entry_3(gray_FIFO_buf2283_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_1_pack, gray_FIFO_buf2283_lane_1);
  auto res_pw_math_gray168171_sm2504_63468 = llf_level_entry_3(gray_FIFO_buf2283_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_2_pack, gray_FIFO_buf2283_lane_2);
  auto res_pw_math_gray168171_sm2504_53466 = llf_level_entry_3(gray_FIFO_buf2283_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_3_pack, gray_FIFO_buf2283_lane_3);
  auto res_pw_math_gray168171_sm2504_43464 = llf_level_entry_3(gray_FIFO_buf2283_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_4_pack, gray_FIFO_buf2283_lane_4);
  auto res_pw_math_gray168171_sm2504_33462 = llf_level_entry_3(gray_FIFO_buf2283_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_5_pack, gray_FIFO_buf2283_lane_5);
  auto res_pw_math_gray168171_sm2504_23460 = llf_level_entry_3(gray_FIFO_buf2283_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_6_pack, gray_FIFO_buf2283_lane_6);
  auto res_pw_math_gray168171_sm2504_13458 = llf_level_entry_3(gray_FIFO_buf2283_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_7_pack, gray_FIFO_buf2283_lane_7);
  auto res_pw_math_gray168171_sm2504_03456 = llf_level_entry_3(gray_FIFO_buf2283_lane_7_pack);
  hw_uint<256 > return_value6477;
  set_at<0, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_73470);
  set_at<32, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_63468);
  set_at<64, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_53466);
  set_at<96, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_43464);
  set_at<128, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_33462);
  set_at<160, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_23460);
  set_at<192, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_13458);
  set_at<224, 256, 32>(return_value6477, res_pw_math_gray168171_sm2504_03456);
  return return_value6477;

}

hw_uint<64> us_gp_level_table61_3_buf8292_cu6479(hw_uint<32*2>& gp_level_table61_3_buf82_FIFO_buf2215) {
  return gp_level_table61_3_buf82_FIFO_buf2215;
}

hw_uint<64> lp_level_table61_296_cu6481(hw_uint<32*2>& gp_level_table61_2_buf74_FIFO_buf2199, hw_uint<32*2>& gp_level_table61_3_buf82_us90_FIFO_buf2219) {
  hw_uint<32> gp_level_table61_2_buf74_FIFO_buf2199_lane_0 = gp_level_table61_2_buf74_FIFO_buf2199.extract<0, 31>();
  hw_uint<32> gp_level_table61_2_buf74_FIFO_buf2199_lane_1 = gp_level_table61_2_buf74_FIFO_buf2199.extract<32, 63>();
  hw_uint<32> gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_0 = gp_level_table61_3_buf82_us90_FIFO_buf2219.extract<0, 31>();
  hw_uint<32> gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_1 = gp_level_table61_3_buf82_us90_FIFO_buf2219.extract<32, 63>();

	
  hw_uint<32 > gp_level_table61_2_buf74_FIFO_buf2199_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_FIFO_buf2199_lane_0_pack, gp_level_table61_2_buf74_FIFO_buf2199_lane_0);
  hw_uint<32 > gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_0_pack, gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_0);
  auto res_diff97_sm2506_13478 = llf_diff_float_32(gp_level_table61_2_buf74_FIFO_buf2199_lane_0_pack, gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_0_pack);

  hw_uint<32 > gp_level_table61_2_buf74_FIFO_buf2199_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_FIFO_buf2199_lane_1_pack, gp_level_table61_2_buf74_FIFO_buf2199_lane_1);
  hw_uint<32 > gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_1_pack, gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_1);
  auto res_diff97_sm2506_03476 = llf_diff_float_32(gp_level_table61_2_buf74_FIFO_buf2199_lane_1_pack, gp_level_table61_3_buf82_us90_FIFO_buf2219_lane_1_pack);
  hw_uint<64 > return_value6482;
  set_at<0, 64, 32>(return_value6482, res_diff97_sm2506_13478);
  set_at<32, 64, 32>(return_value6482, res_diff97_sm2506_03476);
  return return_value6482;

}

hw_uint<128> us_gp_level_table61_2_buf74100_cu6484(hw_uint<32*4>& gp_level_table61_2_buf74_FIFO_buf2203) {
  return gp_level_table61_2_buf74_FIFO_buf2203;
}

hw_uint<128> lp_level_table61_1104_cu6486(hw_uint<32*4>& gp_level_table61_1_buf66_FIFO_buf2183, hw_uint<32*4>& gp_level_table61_2_buf74_us98_FIFO_buf2207) {
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2183_lane_0 = gp_level_table61_1_buf66_FIFO_buf2183.extract<0, 31>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2183_lane_1 = gp_level_table61_1_buf66_FIFO_buf2183.extract<32, 63>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2183_lane_2 = gp_level_table61_1_buf66_FIFO_buf2183.extract<64, 95>();
  hw_uint<32> gp_level_table61_1_buf66_FIFO_buf2183_lane_3 = gp_level_table61_1_buf66_FIFO_buf2183.extract<96, 127>();
  hw_uint<32> gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_0 = gp_level_table61_2_buf74_us98_FIFO_buf2207.extract<0, 31>();
  hw_uint<32> gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_1 = gp_level_table61_2_buf74_us98_FIFO_buf2207.extract<32, 63>();
  hw_uint<32> gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_2 = gp_level_table61_2_buf74_us98_FIFO_buf2207.extract<64, 95>();
  hw_uint<32> gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_3 = gp_level_table61_2_buf74_us98_FIFO_buf2207.extract<96, 127>();

	
  hw_uint<32 > gp_level_table61_1_buf66_FIFO_buf2183_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_FIFO_buf2183_lane_0_pack, gp_level_table61_1_buf66_FIFO_buf2183_lane_0);
  hw_uint<32 > gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_0_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_0);
  auto res_diff105_sm2508_33494 = llf_diff_float_32(gp_level_table61_1_buf66_FIFO_buf2183_lane_0_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_0_pack);

  hw_uint<32 > gp_level_table61_1_buf66_FIFO_buf2183_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_FIFO_buf2183_lane_1_pack, gp_level_table61_1_buf66_FIFO_buf2183_lane_1);
  hw_uint<32 > gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_1_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_1);
  auto res_diff105_sm2508_23492 = llf_diff_float_32(gp_level_table61_1_buf66_FIFO_buf2183_lane_1_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_1_pack);

  hw_uint<32 > gp_level_table61_1_buf66_FIFO_buf2183_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_FIFO_buf2183_lane_2_pack, gp_level_table61_1_buf66_FIFO_buf2183_lane_2);
  hw_uint<32 > gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_2_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_2);
  auto res_diff105_sm2508_13490 = llf_diff_float_32(gp_level_table61_1_buf66_FIFO_buf2183_lane_2_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_2_pack);

  hw_uint<32 > gp_level_table61_1_buf66_FIFO_buf2183_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_FIFO_buf2183_lane_3_pack, gp_level_table61_1_buf66_FIFO_buf2183_lane_3);
  hw_uint<32 > gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_3_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_3);
  auto res_diff105_sm2508_03488 = llf_diff_float_32(gp_level_table61_1_buf66_FIFO_buf2183_lane_3_pack, gp_level_table61_2_buf74_us98_FIFO_buf2207_lane_3_pack);
  hw_uint<128 > return_value6487;
  set_at<0, 128, 32>(return_value6487, res_diff105_sm2508_33494);
  set_at<32, 128, 32>(return_value6487, res_diff105_sm2508_23492);
  set_at<64, 128, 32>(return_value6487, res_diff105_sm2508_13490);
  set_at<96, 128, 32>(return_value6487, res_diff105_sm2508_03488);
  return return_value6487;

}

hw_uint<256> us_gp_level_table61_1_buf66108_cu6489(hw_uint<32*8>& gp_level_table61_1_buf66_FIFO_buf2187) {
  return gp_level_table61_1_buf66_FIFO_buf2187;
}

hw_uint<256> lp_level_table61_0112_cu6491(hw_uint<32*8>& gp_level_table61_1_buf66_us106_FIFO_buf2191, hw_uint<32*8>& level_table61_FIFO_buf2379) {
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<0, 31>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<32, 63>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_2 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<64, 95>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_3 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<96, 127>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_4 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<128, 159>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_5 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<160, 191>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_6 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<192, 223>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_7 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<224, 255>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_0 = level_table61_FIFO_buf2379.extract<0, 31>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_1 = level_table61_FIFO_buf2379.extract<32, 63>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_2 = level_table61_FIFO_buf2379.extract<64, 95>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_3 = level_table61_FIFO_buf2379.extract<96, 127>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_4 = level_table61_FIFO_buf2379.extract<128, 159>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_5 = level_table61_FIFO_buf2379.extract<160, 191>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_6 = level_table61_FIFO_buf2379.extract<192, 223>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_7 = level_table61_FIFO_buf2379.extract<224, 255>();

	
  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_0_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_0_pack, level_table61_FIFO_buf2379_lane_0);
  auto res_diff113_sm2510_73526 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0_pack, level_table61_FIFO_buf2379_lane_0_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_1_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_1_pack, level_table61_FIFO_buf2379_lane_1);
  auto res_diff113_sm2510_63524 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1_pack, level_table61_FIFO_buf2379_lane_1_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_2_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_2);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_2_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_2_pack, level_table61_FIFO_buf2379_lane_2);
  auto res_diff113_sm2510_53522 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_2_pack, level_table61_FIFO_buf2379_lane_2_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_3_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_3);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_3_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_3_pack, level_table61_FIFO_buf2379_lane_3);
  auto res_diff113_sm2510_43520 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_3_pack, level_table61_FIFO_buf2379_lane_3_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_4_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_4);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_4_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_4_pack, level_table61_FIFO_buf2379_lane_4);
  auto res_diff113_sm2510_33518 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_4_pack, level_table61_FIFO_buf2379_lane_4_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_5_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_5);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_5_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_5_pack, level_table61_FIFO_buf2379_lane_5);
  auto res_diff113_sm2510_23516 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_5_pack, level_table61_FIFO_buf2379_lane_5_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_6_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_6);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_6_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_6_pack, level_table61_FIFO_buf2379_lane_6);
  auto res_diff113_sm2510_13514 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_6_pack, level_table61_FIFO_buf2379_lane_6_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_7_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_7);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_7_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_7_pack, level_table61_FIFO_buf2379_lane_7);
  auto res_diff113_sm2510_03512 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_7_pack, level_table61_FIFO_buf2379_lane_7_pack);
  hw_uint<256 > return_value6492;
  set_at<0, 256, 32>(return_value6492, res_diff113_sm2510_73526);
  set_at<32, 256, 32>(return_value6492, res_diff113_sm2510_63524);
  set_at<64, 256, 32>(return_value6492, res_diff113_sm2510_53522);
  set_at<96, 256, 32>(return_value6492, res_diff113_sm2510_43520);
  set_at<128, 256, 32>(return_value6492, res_diff113_sm2510_33518);
  set_at<160, 256, 32>(return_value6492, res_diff113_sm2510_23516);
  set_at<192, 256, 32>(return_value6492, res_diff113_sm2510_13514);
  set_at<224, 256, 32>(return_value6492, res_diff113_sm2510_03512);
  return return_value6492;

}

hw_uint<256> pw_math_gray115117_cu6494(hw_uint<32*8>& gray_FIFO_buf2279) {
  hw_uint<32> gray_FIFO_buf2279_lane_0 = gray_FIFO_buf2279.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2279_lane_1 = gray_FIFO_buf2279.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2279_lane_2 = gray_FIFO_buf2279.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2279_lane_3 = gray_FIFO_buf2279.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2279_lane_4 = gray_FIFO_buf2279.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2279_lane_5 = gray_FIFO_buf2279.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2279_lane_6 = gray_FIFO_buf2279.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2279_lane_7 = gray_FIFO_buf2279.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2279_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_0_pack, gray_FIFO_buf2279_lane_0);
  auto res_pw_math_gray115118_sm2511_73542 = llf_level_entry_2(gray_FIFO_buf2279_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_1_pack, gray_FIFO_buf2279_lane_1);
  auto res_pw_math_gray115118_sm2511_63540 = llf_level_entry_2(gray_FIFO_buf2279_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_2_pack, gray_FIFO_buf2279_lane_2);
  auto res_pw_math_gray115118_sm2511_53538 = llf_level_entry_2(gray_FIFO_buf2279_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_3_pack, gray_FIFO_buf2279_lane_3);
  auto res_pw_math_gray115118_sm2511_43536 = llf_level_entry_2(gray_FIFO_buf2279_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_4_pack, gray_FIFO_buf2279_lane_4);
  auto res_pw_math_gray115118_sm2511_33534 = llf_level_entry_2(gray_FIFO_buf2279_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_5_pack, gray_FIFO_buf2279_lane_5);
  auto res_pw_math_gray115118_sm2511_23532 = llf_level_entry_2(gray_FIFO_buf2279_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_6_pack, gray_FIFO_buf2279_lane_6);
  auto res_pw_math_gray115118_sm2511_13530 = llf_level_entry_2(gray_FIFO_buf2279_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_7_pack, gray_FIFO_buf2279_lane_7);
  auto res_pw_math_gray115118_sm2511_03528 = llf_level_entry_2(gray_FIFO_buf2279_lane_7_pack);
  hw_uint<256 > return_value6495;
  set_at<0, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_73542);
  set_at<32, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_63540);
  set_at<64, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_53538);
  set_at<96, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_43536);
  set_at<128, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_33534);
  set_at<160, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_23532);
  set_at<192, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_13530);
  set_at<224, 256, 32>(return_value6495, res_pw_math_gray115118_sm2511_03528);
  return return_value6495;

}

hw_uint<128> gp_level_table114_1121_cu6497(hw_uint<32*36>& level_table114_FIFO_buf2331) {
  hw_uint<32> level_table114_FIFO_buf2331_lane_0 = level_table114_FIFO_buf2331.extract<0, 31>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_1 = level_table114_FIFO_buf2331.extract<32, 63>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_2 = level_table114_FIFO_buf2331.extract<64, 95>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_3 = level_table114_FIFO_buf2331.extract<96, 127>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_4 = level_table114_FIFO_buf2331.extract<128, 159>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_5 = level_table114_FIFO_buf2331.extract<160, 191>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_6 = level_table114_FIFO_buf2331.extract<192, 223>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_7 = level_table114_FIFO_buf2331.extract<224, 255>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_8 = level_table114_FIFO_buf2331.extract<256, 287>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_9 = level_table114_FIFO_buf2331.extract<288, 319>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_10 = level_table114_FIFO_buf2331.extract<320, 351>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_11 = level_table114_FIFO_buf2331.extract<352, 383>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_12 = level_table114_FIFO_buf2331.extract<384, 415>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_13 = level_table114_FIFO_buf2331.extract<416, 447>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_14 = level_table114_FIFO_buf2331.extract<448, 479>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_15 = level_table114_FIFO_buf2331.extract<480, 511>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_16 = level_table114_FIFO_buf2331.extract<512, 543>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_17 = level_table114_FIFO_buf2331.extract<544, 575>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_18 = level_table114_FIFO_buf2331.extract<576, 607>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_19 = level_table114_FIFO_buf2331.extract<608, 639>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_20 = level_table114_FIFO_buf2331.extract<640, 671>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_21 = level_table114_FIFO_buf2331.extract<672, 703>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_22 = level_table114_FIFO_buf2331.extract<704, 735>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_23 = level_table114_FIFO_buf2331.extract<736, 767>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_24 = level_table114_FIFO_buf2331.extract<768, 799>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_25 = level_table114_FIFO_buf2331.extract<800, 831>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_26 = level_table114_FIFO_buf2331.extract<832, 863>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_27 = level_table114_FIFO_buf2331.extract<864, 895>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_28 = level_table114_FIFO_buf2331.extract<896, 927>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_29 = level_table114_FIFO_buf2331.extract<928, 959>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_30 = level_table114_FIFO_buf2331.extract<960, 991>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_31 = level_table114_FIFO_buf2331.extract<992, 1023>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_32 = level_table114_FIFO_buf2331.extract<1024, 1055>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_33 = level_table114_FIFO_buf2331.extract<1056, 1087>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_34 = level_table114_FIFO_buf2331.extract<1088, 1119>();
  hw_uint<32> level_table114_FIFO_buf2331_lane_35 = level_table114_FIFO_buf2331.extract<1120, 1151>();

	
  hw_uint<288 > level_table114_FIFO_buf2331_lane_8_pack;
  set_at<0, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_0);
  set_at<32, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_1);
  set_at<64, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_2);
  set_at<96, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_3);
  set_at<128, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_4);
  set_at<160, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_5);
  set_at<192, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_6);
  set_at<224, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_7);
  set_at<256, 288, 32>(level_table114_FIFO_buf2331_lane_8_pack, level_table114_FIFO_buf2331_lane_8);
  auto res_gp_level_table114_1121_merged1178_sm2512_33550 = gp_level_table114_1121_cu1176(level_table114_FIFO_buf2331_lane_8_pack);

  hw_uint<288 > level_table114_FIFO_buf2331_lane_17_pack;
  set_at<0, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_9);
  set_at<32, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_10);
  set_at<64, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_11);
  set_at<96, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_12);
  set_at<128, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_13);
  set_at<160, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_14);
  set_at<192, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_15);
  set_at<224, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_16);
  set_at<256, 288, 32>(level_table114_FIFO_buf2331_lane_17_pack, level_table114_FIFO_buf2331_lane_17);
  auto res_gp_level_table114_1121_merged1178_sm2512_23548 = gp_level_table114_1121_cu1176(level_table114_FIFO_buf2331_lane_17_pack);

  hw_uint<288 > level_table114_FIFO_buf2331_lane_26_pack;
  set_at<0, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_18);
  set_at<32, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_19);
  set_at<64, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_20);
  set_at<96, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_21);
  set_at<128, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_22);
  set_at<160, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_23);
  set_at<192, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_24);
  set_at<224, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_25);
  set_at<256, 288, 32>(level_table114_FIFO_buf2331_lane_26_pack, level_table114_FIFO_buf2331_lane_26);
  auto res_gp_level_table114_1121_merged1178_sm2512_13546 = gp_level_table114_1121_cu1176(level_table114_FIFO_buf2331_lane_26_pack);

  hw_uint<288 > level_table114_FIFO_buf2331_lane_35_pack;
  set_at<0, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_27);
  set_at<32, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_28);
  set_at<64, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_29);
  set_at<96, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_30);
  set_at<128, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_31);
  set_at<160, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_32);
  set_at<192, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_33);
  set_at<224, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_34);
  set_at<256, 288, 32>(level_table114_FIFO_buf2331_lane_35_pack, level_table114_FIFO_buf2331_lane_35);
  auto res_gp_level_table114_1121_merged1178_sm2512_03544 = gp_level_table114_1121_cu1176(level_table114_FIFO_buf2331_lane_35_pack);
  hw_uint<128 > return_value6498;
  set_at<0, 128, 32>(return_value6498, res_gp_level_table114_1121_merged1178_sm2512_33550);
  set_at<32, 128, 32>(return_value6498, res_gp_level_table114_1121_merged1178_sm2512_23548);
  set_at<64, 128, 32>(return_value6498, res_gp_level_table114_1121_merged1178_sm2512_13546);
  set_at<96, 128, 32>(return_value6498, res_gp_level_table114_1121_merged1178_sm2512_03544);
  return return_value6498;

}

hw_uint<64> gp_level_table114_2129_cu6500(hw_uint<32*18>& gp_level_table114_1_buf119_FIFO_buf1923) {
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_0 = gp_level_table114_1_buf119_FIFO_buf1923.extract<0, 31>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_1 = gp_level_table114_1_buf119_FIFO_buf1923.extract<32, 63>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_2 = gp_level_table114_1_buf119_FIFO_buf1923.extract<64, 95>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_3 = gp_level_table114_1_buf119_FIFO_buf1923.extract<96, 127>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_4 = gp_level_table114_1_buf119_FIFO_buf1923.extract<128, 159>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_5 = gp_level_table114_1_buf119_FIFO_buf1923.extract<160, 191>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_6 = gp_level_table114_1_buf119_FIFO_buf1923.extract<192, 223>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_7 = gp_level_table114_1_buf119_FIFO_buf1923.extract<224, 255>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_8 = gp_level_table114_1_buf119_FIFO_buf1923.extract<256, 287>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_9 = gp_level_table114_1_buf119_FIFO_buf1923.extract<288, 319>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_10 = gp_level_table114_1_buf119_FIFO_buf1923.extract<320, 351>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_11 = gp_level_table114_1_buf119_FIFO_buf1923.extract<352, 383>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_12 = gp_level_table114_1_buf119_FIFO_buf1923.extract<384, 415>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_13 = gp_level_table114_1_buf119_FIFO_buf1923.extract<416, 447>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_14 = gp_level_table114_1_buf119_FIFO_buf1923.extract<448, 479>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_15 = gp_level_table114_1_buf119_FIFO_buf1923.extract<480, 511>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_16 = gp_level_table114_1_buf119_FIFO_buf1923.extract<512, 543>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1923_lane_17 = gp_level_table114_1_buf119_FIFO_buf1923.extract<544, 575>();

	
  hw_uint<288 > gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_0);
  set_at<32, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_1);
  set_at<64, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_2);
  set_at<96, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_3);
  set_at<128, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_4);
  set_at<160, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_5);
  set_at<192, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_6);
  set_at<224, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_7);
  set_at<256, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_8);
  auto res_gp_level_table114_2129_merged1181_sm2513_13554 = gp_level_table114_2129_cu1179(gp_level_table114_1_buf119_FIFO_buf1923_lane_8_pack);

  hw_uint<288 > gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_9);
  set_at<32, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_10);
  set_at<64, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_11);
  set_at<96, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_12);
  set_at<128, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_13);
  set_at<160, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_14);
  set_at<192, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_15);
  set_at<224, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_16);
  set_at<256, 288, 32>(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack, gp_level_table114_1_buf119_FIFO_buf1923_lane_17);
  auto res_gp_level_table114_2129_merged1181_sm2513_03552 = gp_level_table114_2129_cu1179(gp_level_table114_1_buf119_FIFO_buf1923_lane_17_pack);
  hw_uint<64 > return_value6501;
  set_at<0, 64, 32>(return_value6501, res_gp_level_table114_2129_merged1181_sm2513_13554);
  set_at<32, 64, 32>(return_value6501, res_gp_level_table114_2129_merged1181_sm2513_03552);
  return return_value6501;

}

hw_uint<64> us_gp_level_table114_3_buf135145_cu6503(hw_uint<32*2>& gp_level_table114_3_buf135_FIFO_buf1951) {
  return gp_level_table114_3_buf135_FIFO_buf1951;
}

hw_uint<64> lp_level_table114_2149_cu6505(hw_uint<32*2>& gp_level_table114_2_buf127_FIFO_buf1935, hw_uint<32*2>& gp_level_table114_3_buf135_us143_FIFO_buf1955) {
  hw_uint<32> gp_level_table114_2_buf127_FIFO_buf1935_lane_0 = gp_level_table114_2_buf127_FIFO_buf1935.extract<0, 31>();
  hw_uint<32> gp_level_table114_2_buf127_FIFO_buf1935_lane_1 = gp_level_table114_2_buf127_FIFO_buf1935.extract<32, 63>();
  hw_uint<32> gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_0 = gp_level_table114_3_buf135_us143_FIFO_buf1955.extract<0, 31>();
  hw_uint<32> gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_1 = gp_level_table114_3_buf135_us143_FIFO_buf1955.extract<32, 63>();

	
  hw_uint<32 > gp_level_table114_2_buf127_FIFO_buf1935_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_FIFO_buf1935_lane_0_pack, gp_level_table114_2_buf127_FIFO_buf1935_lane_0);
  hw_uint<32 > gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_0_pack, gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_0);
  auto res_diff150_sm2516_13564 = llf_diff_float_32(gp_level_table114_2_buf127_FIFO_buf1935_lane_0_pack, gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_0_pack);

  hw_uint<32 > gp_level_table114_2_buf127_FIFO_buf1935_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_FIFO_buf1935_lane_1_pack, gp_level_table114_2_buf127_FIFO_buf1935_lane_1);
  hw_uint<32 > gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_1_pack, gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_1);
  auto res_diff150_sm2516_03562 = llf_diff_float_32(gp_level_table114_2_buf127_FIFO_buf1935_lane_1_pack, gp_level_table114_3_buf135_us143_FIFO_buf1955_lane_1_pack);
  hw_uint<64 > return_value6506;
  set_at<0, 64, 32>(return_value6506, res_diff150_sm2516_13564);
  set_at<32, 64, 32>(return_value6506, res_diff150_sm2516_03562);
  return return_value6506;

}

hw_uint<128> us_gp_level_table114_2_buf127153_cu6508(hw_uint<32*4>& gp_level_table114_2_buf127_FIFO_buf1939) {
  return gp_level_table114_2_buf127_FIFO_buf1939;
}

hw_uint<128> lp_level_table114_1157_cu6510(hw_uint<32*4>& gp_level_table114_1_buf119_FIFO_buf1915, hw_uint<32*4>& gp_level_table114_2_buf127_us151_FIFO_buf1943) {
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1915_lane_0 = gp_level_table114_1_buf119_FIFO_buf1915.extract<0, 31>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1915_lane_1 = gp_level_table114_1_buf119_FIFO_buf1915.extract<32, 63>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1915_lane_2 = gp_level_table114_1_buf119_FIFO_buf1915.extract<64, 95>();
  hw_uint<32> gp_level_table114_1_buf119_FIFO_buf1915_lane_3 = gp_level_table114_1_buf119_FIFO_buf1915.extract<96, 127>();
  hw_uint<32> gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_0 = gp_level_table114_2_buf127_us151_FIFO_buf1943.extract<0, 31>();
  hw_uint<32> gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_1 = gp_level_table114_2_buf127_us151_FIFO_buf1943.extract<32, 63>();
  hw_uint<32> gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_2 = gp_level_table114_2_buf127_us151_FIFO_buf1943.extract<64, 95>();
  hw_uint<32> gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_3 = gp_level_table114_2_buf127_us151_FIFO_buf1943.extract<96, 127>();

	
  hw_uint<32 > gp_level_table114_1_buf119_FIFO_buf1915_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_FIFO_buf1915_lane_0_pack, gp_level_table114_1_buf119_FIFO_buf1915_lane_0);
  hw_uint<32 > gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_0_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_0);
  auto res_diff158_sm2518_33140 = llf_diff_float_32(gp_level_table114_1_buf119_FIFO_buf1915_lane_0_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_0_pack);

  hw_uint<32 > gp_level_table114_1_buf119_FIFO_buf1915_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_FIFO_buf1915_lane_1_pack, gp_level_table114_1_buf119_FIFO_buf1915_lane_1);
  hw_uint<32 > gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_1_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_1);
  auto res_diff158_sm2518_23138 = llf_diff_float_32(gp_level_table114_1_buf119_FIFO_buf1915_lane_1_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_1_pack);

  hw_uint<32 > gp_level_table114_1_buf119_FIFO_buf1915_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_FIFO_buf1915_lane_2_pack, gp_level_table114_1_buf119_FIFO_buf1915_lane_2);
  hw_uint<32 > gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_2_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_2);
  auto res_diff158_sm2518_13136 = llf_diff_float_32(gp_level_table114_1_buf119_FIFO_buf1915_lane_2_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_2_pack);

  hw_uint<32 > gp_level_table114_1_buf119_FIFO_buf1915_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_FIFO_buf1915_lane_3_pack, gp_level_table114_1_buf119_FIFO_buf1915_lane_3);
  hw_uint<32 > gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_3_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_3);
  auto res_diff158_sm2518_03134 = llf_diff_float_32(gp_level_table114_1_buf119_FIFO_buf1915_lane_3_pack, gp_level_table114_2_buf127_us151_FIFO_buf1943_lane_3_pack);
  hw_uint<128 > return_value6511;
  set_at<0, 128, 32>(return_value6511, res_diff158_sm2518_33140);
  set_at<32, 128, 32>(return_value6511, res_diff158_sm2518_23138);
  set_at<64, 128, 32>(return_value6511, res_diff158_sm2518_13136);
  set_at<96, 128, 32>(return_value6511, res_diff158_sm2518_03134);
  return return_value6511;

}

hw_uint<256> us_gp_level_table114_1_buf119161_cu6513(hw_uint<32*8>& gp_level_table114_1_buf119_FIFO_buf1919) {
  return gp_level_table114_1_buf119_FIFO_buf1919;
}

hw_uint<256> lp_level_table114_0165_cu6515(hw_uint<32*8>& gp_level_table114_1_buf119_us159_FIFO_buf1927, hw_uint<32*8>& level_table114_FIFO_buf2327) {
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<0, 31>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<32, 63>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_2 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<64, 95>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_3 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<96, 127>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_4 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<128, 159>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_5 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<160, 191>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_6 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<192, 223>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_7 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<224, 255>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_0 = level_table114_FIFO_buf2327.extract<0, 31>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_1 = level_table114_FIFO_buf2327.extract<32, 63>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_2 = level_table114_FIFO_buf2327.extract<64, 95>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_3 = level_table114_FIFO_buf2327.extract<96, 127>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_4 = level_table114_FIFO_buf2327.extract<128, 159>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_5 = level_table114_FIFO_buf2327.extract<160, 191>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_6 = level_table114_FIFO_buf2327.extract<192, 223>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_7 = level_table114_FIFO_buf2327.extract<224, 255>();

	
  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_0_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_0_pack, level_table114_FIFO_buf2327_lane_0);
  auto res_diff166_sm2520_73172 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0_pack, level_table114_FIFO_buf2327_lane_0_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_1_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_1_pack, level_table114_FIFO_buf2327_lane_1);
  auto res_diff166_sm2520_63170 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1_pack, level_table114_FIFO_buf2327_lane_1_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_2_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_2);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_2_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_2_pack, level_table114_FIFO_buf2327_lane_2);
  auto res_diff166_sm2520_53168 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_2_pack, level_table114_FIFO_buf2327_lane_2_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_3_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_3);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_3_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_3_pack, level_table114_FIFO_buf2327_lane_3);
  auto res_diff166_sm2520_43166 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_3_pack, level_table114_FIFO_buf2327_lane_3_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_4_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_4);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_4_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_4_pack, level_table114_FIFO_buf2327_lane_4);
  auto res_diff166_sm2520_33164 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_4_pack, level_table114_FIFO_buf2327_lane_4_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_5_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_5);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_5_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_5_pack, level_table114_FIFO_buf2327_lane_5);
  auto res_diff166_sm2520_23162 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_5_pack, level_table114_FIFO_buf2327_lane_5_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_6_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_6);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_6_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_6_pack, level_table114_FIFO_buf2327_lane_6);
  auto res_diff166_sm2520_13160 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_6_pack, level_table114_FIFO_buf2327_lane_6_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_7_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_7);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_7_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_7_pack, level_table114_FIFO_buf2327_lane_7);
  auto res_diff166_sm2520_03158 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_7_pack, level_table114_FIFO_buf2327_lane_7_pack);
  hw_uint<256 > return_value6516;
  set_at<0, 256, 32>(return_value6516, res_diff166_sm2520_73172);
  set_at<32, 256, 32>(return_value6516, res_diff166_sm2520_63170);
  set_at<64, 256, 32>(return_value6516, res_diff166_sm2520_53168);
  set_at<96, 256, 32>(return_value6516, res_diff166_sm2520_43166);
  set_at<128, 256, 32>(return_value6516, res_diff166_sm2520_33164);
  set_at<160, 256, 32>(return_value6516, res_diff166_sm2520_23162);
  set_at<192, 256, 32>(return_value6516, res_diff166_sm2520_13160);
  set_at<224, 256, 32>(return_value6516, res_diff166_sm2520_03158);
  return return_value6516;

}

hw_uint<64> gp_level_table326_2341_cu6518(hw_uint<32*18>& gp_level_table326_1_buf331_FIFO_buf2091) {
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_0 = gp_level_table326_1_buf331_FIFO_buf2091.extract<0, 31>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_1 = gp_level_table326_1_buf331_FIFO_buf2091.extract<32, 63>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_2 = gp_level_table326_1_buf331_FIFO_buf2091.extract<64, 95>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_3 = gp_level_table326_1_buf331_FIFO_buf2091.extract<96, 127>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_4 = gp_level_table326_1_buf331_FIFO_buf2091.extract<128, 159>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_5 = gp_level_table326_1_buf331_FIFO_buf2091.extract<160, 191>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_6 = gp_level_table326_1_buf331_FIFO_buf2091.extract<192, 223>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_7 = gp_level_table326_1_buf331_FIFO_buf2091.extract<224, 255>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_8 = gp_level_table326_1_buf331_FIFO_buf2091.extract<256, 287>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_9 = gp_level_table326_1_buf331_FIFO_buf2091.extract<288, 319>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_10 = gp_level_table326_1_buf331_FIFO_buf2091.extract<320, 351>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_11 = gp_level_table326_1_buf331_FIFO_buf2091.extract<352, 383>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_12 = gp_level_table326_1_buf331_FIFO_buf2091.extract<384, 415>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_13 = gp_level_table326_1_buf331_FIFO_buf2091.extract<416, 447>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_14 = gp_level_table326_1_buf331_FIFO_buf2091.extract<448, 479>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_15 = gp_level_table326_1_buf331_FIFO_buf2091.extract<480, 511>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_16 = gp_level_table326_1_buf331_FIFO_buf2091.extract<512, 543>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2091_lane_17 = gp_level_table326_1_buf331_FIFO_buf2091.extract<544, 575>();

	
  hw_uint<288 > gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_0);
  set_at<32, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_1);
  set_at<64, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_2);
  set_at<96, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_3);
  set_at<128, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_4);
  set_at<160, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_5);
  set_at<192, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_6);
  set_at<224, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_7);
  set_at<256, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_8);
  auto res_gp_level_table326_2341_merged1187_sm2521_13176 = gp_level_table326_2341_cu1185(gp_level_table326_1_buf331_FIFO_buf2091_lane_8_pack);

  hw_uint<288 > gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_9);
  set_at<32, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_10);
  set_at<64, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_11);
  set_at<96, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_12);
  set_at<128, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_13);
  set_at<160, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_14);
  set_at<192, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_15);
  set_at<224, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_16);
  set_at<256, 288, 32>(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack, gp_level_table326_1_buf331_FIFO_buf2091_lane_17);
  auto res_gp_level_table326_2341_merged1187_sm2521_03174 = gp_level_table326_2341_cu1185(gp_level_table326_1_buf331_FIFO_buf2091_lane_17_pack);
  hw_uint<64 > return_value6519;
  set_at<0, 64, 32>(return_value6519, res_gp_level_table326_2341_merged1187_sm2521_13176);
  set_at<32, 64, 32>(return_value6519, res_gp_level_table326_2341_merged1187_sm2521_03174);
  return return_value6519;

}

hw_uint<128> gp_level_table167_1174_cu6521(hw_uint<32*36>& level_table167_FIFO_buf2335) {
  hw_uint<32> level_table167_FIFO_buf2335_lane_0 = level_table167_FIFO_buf2335.extract<0, 31>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_1 = level_table167_FIFO_buf2335.extract<32, 63>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_2 = level_table167_FIFO_buf2335.extract<64, 95>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_3 = level_table167_FIFO_buf2335.extract<96, 127>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_4 = level_table167_FIFO_buf2335.extract<128, 159>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_5 = level_table167_FIFO_buf2335.extract<160, 191>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_6 = level_table167_FIFO_buf2335.extract<192, 223>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_7 = level_table167_FIFO_buf2335.extract<224, 255>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_8 = level_table167_FIFO_buf2335.extract<256, 287>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_9 = level_table167_FIFO_buf2335.extract<288, 319>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_10 = level_table167_FIFO_buf2335.extract<320, 351>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_11 = level_table167_FIFO_buf2335.extract<352, 383>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_12 = level_table167_FIFO_buf2335.extract<384, 415>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_13 = level_table167_FIFO_buf2335.extract<416, 447>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_14 = level_table167_FIFO_buf2335.extract<448, 479>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_15 = level_table167_FIFO_buf2335.extract<480, 511>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_16 = level_table167_FIFO_buf2335.extract<512, 543>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_17 = level_table167_FIFO_buf2335.extract<544, 575>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_18 = level_table167_FIFO_buf2335.extract<576, 607>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_19 = level_table167_FIFO_buf2335.extract<608, 639>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_20 = level_table167_FIFO_buf2335.extract<640, 671>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_21 = level_table167_FIFO_buf2335.extract<672, 703>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_22 = level_table167_FIFO_buf2335.extract<704, 735>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_23 = level_table167_FIFO_buf2335.extract<736, 767>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_24 = level_table167_FIFO_buf2335.extract<768, 799>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_25 = level_table167_FIFO_buf2335.extract<800, 831>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_26 = level_table167_FIFO_buf2335.extract<832, 863>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_27 = level_table167_FIFO_buf2335.extract<864, 895>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_28 = level_table167_FIFO_buf2335.extract<896, 927>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_29 = level_table167_FIFO_buf2335.extract<928, 959>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_30 = level_table167_FIFO_buf2335.extract<960, 991>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_31 = level_table167_FIFO_buf2335.extract<992, 1023>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_32 = level_table167_FIFO_buf2335.extract<1024, 1055>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_33 = level_table167_FIFO_buf2335.extract<1056, 1087>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_34 = level_table167_FIFO_buf2335.extract<1088, 1119>();
  hw_uint<32> level_table167_FIFO_buf2335_lane_35 = level_table167_FIFO_buf2335.extract<1120, 1151>();

	
  hw_uint<288 > level_table167_FIFO_buf2335_lane_8_pack;
  set_at<0, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_0);
  set_at<32, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_1);
  set_at<64, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_2);
  set_at<96, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_3);
  set_at<128, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_4);
  set_at<160, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_5);
  set_at<192, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_6);
  set_at<224, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_7);
  set_at<256, 288, 32>(level_table167_FIFO_buf2335_lane_8_pack, level_table167_FIFO_buf2335_lane_8);
  auto res_gp_level_table167_1174_merged1190_sm2522_33184 = gp_level_table167_1174_cu1188(level_table167_FIFO_buf2335_lane_8_pack);

  hw_uint<288 > level_table167_FIFO_buf2335_lane_17_pack;
  set_at<0, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_9);
  set_at<32, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_10);
  set_at<64, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_11);
  set_at<96, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_12);
  set_at<128, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_13);
  set_at<160, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_14);
  set_at<192, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_15);
  set_at<224, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_16);
  set_at<256, 288, 32>(level_table167_FIFO_buf2335_lane_17_pack, level_table167_FIFO_buf2335_lane_17);
  auto res_gp_level_table167_1174_merged1190_sm2522_23182 = gp_level_table167_1174_cu1188(level_table167_FIFO_buf2335_lane_17_pack);

  hw_uint<288 > level_table167_FIFO_buf2335_lane_26_pack;
  set_at<0, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_18);
  set_at<32, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_19);
  set_at<64, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_20);
  set_at<96, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_21);
  set_at<128, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_22);
  set_at<160, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_23);
  set_at<192, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_24);
  set_at<224, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_25);
  set_at<256, 288, 32>(level_table167_FIFO_buf2335_lane_26_pack, level_table167_FIFO_buf2335_lane_26);
  auto res_gp_level_table167_1174_merged1190_sm2522_13180 = gp_level_table167_1174_cu1188(level_table167_FIFO_buf2335_lane_26_pack);

  hw_uint<288 > level_table167_FIFO_buf2335_lane_35_pack;
  set_at<0, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_27);
  set_at<32, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_28);
  set_at<64, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_29);
  set_at<96, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_30);
  set_at<128, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_31);
  set_at<160, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_32);
  set_at<192, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_33);
  set_at<224, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_34);
  set_at<256, 288, 32>(level_table167_FIFO_buf2335_lane_35_pack, level_table167_FIFO_buf2335_lane_35);
  auto res_gp_level_table167_1174_merged1190_sm2522_03178 = gp_level_table167_1174_cu1188(level_table167_FIFO_buf2335_lane_35_pack);
  hw_uint<128 > return_value6522;
  set_at<0, 128, 32>(return_value6522, res_gp_level_table167_1174_merged1190_sm2522_33184);
  set_at<32, 128, 32>(return_value6522, res_gp_level_table167_1174_merged1190_sm2522_23182);
  set_at<64, 128, 32>(return_value6522, res_gp_level_table167_1174_merged1190_sm2522_13180);
  set_at<96, 128, 32>(return_value6522, res_gp_level_table167_1174_merged1190_sm2522_03178);
  return return_value6522;

}

hw_uint<64> gp_level_table167_2182_cu6524(hw_uint<32*18>& gp_level_table167_1_buf172_FIFO_buf1959) {
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_0 = gp_level_table167_1_buf172_FIFO_buf1959.extract<0, 31>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_1 = gp_level_table167_1_buf172_FIFO_buf1959.extract<32, 63>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_2 = gp_level_table167_1_buf172_FIFO_buf1959.extract<64, 95>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_3 = gp_level_table167_1_buf172_FIFO_buf1959.extract<96, 127>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_4 = gp_level_table167_1_buf172_FIFO_buf1959.extract<128, 159>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_5 = gp_level_table167_1_buf172_FIFO_buf1959.extract<160, 191>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_6 = gp_level_table167_1_buf172_FIFO_buf1959.extract<192, 223>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_7 = gp_level_table167_1_buf172_FIFO_buf1959.extract<224, 255>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_8 = gp_level_table167_1_buf172_FIFO_buf1959.extract<256, 287>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_9 = gp_level_table167_1_buf172_FIFO_buf1959.extract<288, 319>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_10 = gp_level_table167_1_buf172_FIFO_buf1959.extract<320, 351>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_11 = gp_level_table167_1_buf172_FIFO_buf1959.extract<352, 383>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_12 = gp_level_table167_1_buf172_FIFO_buf1959.extract<384, 415>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_13 = gp_level_table167_1_buf172_FIFO_buf1959.extract<416, 447>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_14 = gp_level_table167_1_buf172_FIFO_buf1959.extract<448, 479>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_15 = gp_level_table167_1_buf172_FIFO_buf1959.extract<480, 511>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_16 = gp_level_table167_1_buf172_FIFO_buf1959.extract<512, 543>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1959_lane_17 = gp_level_table167_1_buf172_FIFO_buf1959.extract<544, 575>();

	
  hw_uint<288 > gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_0);
  set_at<32, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_1);
  set_at<64, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_2);
  set_at<96, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_3);
  set_at<128, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_4);
  set_at<160, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_5);
  set_at<192, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_6);
  set_at<224, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_7);
  set_at<256, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_8);
  auto res_gp_level_table167_2182_merged1193_sm2523_13188 = gp_level_table167_2182_cu1191(gp_level_table167_1_buf172_FIFO_buf1959_lane_8_pack);

  hw_uint<288 > gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_9);
  set_at<32, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_10);
  set_at<64, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_11);
  set_at<96, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_12);
  set_at<128, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_13);
  set_at<160, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_14);
  set_at<192, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_15);
  set_at<224, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_16);
  set_at<256, 288, 32>(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack, gp_level_table167_1_buf172_FIFO_buf1959_lane_17);
  auto res_gp_level_table167_2182_merged1193_sm2523_03186 = gp_level_table167_2182_cu1191(gp_level_table167_1_buf172_FIFO_buf1959_lane_17_pack);
  hw_uint<64 > return_value6525;
  set_at<0, 64, 32>(return_value6525, res_gp_level_table167_2182_merged1193_sm2523_13188);
  set_at<32, 64, 32>(return_value6525, res_gp_level_table167_2182_merged1193_sm2523_03186);
  return return_value6525;

}

hw_uint<64> us_gp_level_table167_3_buf188198_cu6527(hw_uint<32*2>& gp_level_table167_3_buf188_FIFO_buf1995) {
  return gp_level_table167_3_buf188_FIFO_buf1995;
}

hw_uint<64> lp_level_table167_2202_cu6529(hw_uint<32*2>& gp_level_table167_2_buf180_FIFO_buf1979, hw_uint<32*2>& gp_level_table167_3_buf188_us196_FIFO_buf1999) {
  hw_uint<32> gp_level_table167_2_buf180_FIFO_buf1979_lane_0 = gp_level_table167_2_buf180_FIFO_buf1979.extract<0, 31>();
  hw_uint<32> gp_level_table167_2_buf180_FIFO_buf1979_lane_1 = gp_level_table167_2_buf180_FIFO_buf1979.extract<32, 63>();
  hw_uint<32> gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_0 = gp_level_table167_3_buf188_us196_FIFO_buf1999.extract<0, 31>();
  hw_uint<32> gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_1 = gp_level_table167_3_buf188_us196_FIFO_buf1999.extract<32, 63>();

	
  hw_uint<32 > gp_level_table167_2_buf180_FIFO_buf1979_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_FIFO_buf1979_lane_0_pack, gp_level_table167_2_buf180_FIFO_buf1979_lane_0);
  hw_uint<32 > gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_0_pack, gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_0);
  auto res_diff203_sm2526_16360 = llf_diff_float_32(gp_level_table167_2_buf180_FIFO_buf1979_lane_0_pack, gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_0_pack);

  hw_uint<32 > gp_level_table167_2_buf180_FIFO_buf1979_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_FIFO_buf1979_lane_1_pack, gp_level_table167_2_buf180_FIFO_buf1979_lane_1);
  hw_uint<32 > gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_1_pack, gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_1);
  auto res_diff203_sm2526_06358 = llf_diff_float_32(gp_level_table167_2_buf180_FIFO_buf1979_lane_1_pack, gp_level_table167_3_buf188_us196_FIFO_buf1999_lane_1_pack);
  hw_uint<64 > return_value6530;
  set_at<0, 64, 32>(return_value6530, res_diff203_sm2526_16360);
  set_at<32, 64, 32>(return_value6530, res_diff203_sm2526_06358);
  return return_value6530;

}

hw_uint<128> us_gp_level_table167_2_buf180206_cu6532(hw_uint<32*4>& gp_level_table167_2_buf180_FIFO_buf1983) {
  return gp_level_table167_2_buf180_FIFO_buf1983;
}

hw_uint<128> lp_level_table167_1210_cu6534(hw_uint<32*4>& gp_level_table167_1_buf172_FIFO_buf1963, hw_uint<32*4>& gp_level_table167_2_buf180_us204_FIFO_buf1987) {
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1963_lane_0 = gp_level_table167_1_buf172_FIFO_buf1963.extract<0, 31>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1963_lane_1 = gp_level_table167_1_buf172_FIFO_buf1963.extract<32, 63>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1963_lane_2 = gp_level_table167_1_buf172_FIFO_buf1963.extract<64, 95>();
  hw_uint<32> gp_level_table167_1_buf172_FIFO_buf1963_lane_3 = gp_level_table167_1_buf172_FIFO_buf1963.extract<96, 127>();
  hw_uint<32> gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_0 = gp_level_table167_2_buf180_us204_FIFO_buf1987.extract<0, 31>();
  hw_uint<32> gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_1 = gp_level_table167_2_buf180_us204_FIFO_buf1987.extract<32, 63>();
  hw_uint<32> gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_2 = gp_level_table167_2_buf180_us204_FIFO_buf1987.extract<64, 95>();
  hw_uint<32> gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_3 = gp_level_table167_2_buf180_us204_FIFO_buf1987.extract<96, 127>();

	
  hw_uint<32 > gp_level_table167_1_buf172_FIFO_buf1963_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_FIFO_buf1963_lane_0_pack, gp_level_table167_1_buf172_FIFO_buf1963_lane_0);
  hw_uint<32 > gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_0_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_0);
  auto res_diff211_sm2528_36376 = llf_diff_float_32(gp_level_table167_1_buf172_FIFO_buf1963_lane_0_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_0_pack);

  hw_uint<32 > gp_level_table167_1_buf172_FIFO_buf1963_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_FIFO_buf1963_lane_1_pack, gp_level_table167_1_buf172_FIFO_buf1963_lane_1);
  hw_uint<32 > gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_1_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_1);
  auto res_diff211_sm2528_26374 = llf_diff_float_32(gp_level_table167_1_buf172_FIFO_buf1963_lane_1_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_1_pack);

  hw_uint<32 > gp_level_table167_1_buf172_FIFO_buf1963_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_FIFO_buf1963_lane_2_pack, gp_level_table167_1_buf172_FIFO_buf1963_lane_2);
  hw_uint<32 > gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_2_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_2);
  auto res_diff211_sm2528_16372 = llf_diff_float_32(gp_level_table167_1_buf172_FIFO_buf1963_lane_2_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_2_pack);

  hw_uint<32 > gp_level_table167_1_buf172_FIFO_buf1963_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_FIFO_buf1963_lane_3_pack, gp_level_table167_1_buf172_FIFO_buf1963_lane_3);
  hw_uint<32 > gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_3_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_3);
  auto res_diff211_sm2528_06370 = llf_diff_float_32(gp_level_table167_1_buf172_FIFO_buf1963_lane_3_pack, gp_level_table167_2_buf180_us204_FIFO_buf1987_lane_3_pack);
  hw_uint<128 > return_value6535;
  set_at<0, 128, 32>(return_value6535, res_diff211_sm2528_36376);
  set_at<32, 128, 32>(return_value6535, res_diff211_sm2528_26374);
  set_at<64, 128, 32>(return_value6535, res_diff211_sm2528_16372);
  set_at<96, 128, 32>(return_value6535, res_diff211_sm2528_06370);
  return return_value6535;

}

hw_uint<256> us_gp_level_table167_1_buf172214_cu6537(hw_uint<32*8>& gp_level_table167_1_buf172_FIFO_buf1967) {
  return gp_level_table167_1_buf172_FIFO_buf1967;
}

hw_uint<256> lp_level_table167_0218_cu6539(hw_uint<32*8>& gp_level_table167_1_buf172_us212_FIFO_buf1971, hw_uint<32*8>& level_table167_FIFO_buf2339) {
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<0, 31>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<32, 63>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_2 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<64, 95>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_3 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<96, 127>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_4 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<128, 159>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_5 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<160, 191>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_6 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<192, 223>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_7 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<224, 255>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_0 = level_table167_FIFO_buf2339.extract<0, 31>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_1 = level_table167_FIFO_buf2339.extract<32, 63>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_2 = level_table167_FIFO_buf2339.extract<64, 95>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_3 = level_table167_FIFO_buf2339.extract<96, 127>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_4 = level_table167_FIFO_buf2339.extract<128, 159>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_5 = level_table167_FIFO_buf2339.extract<160, 191>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_6 = level_table167_FIFO_buf2339.extract<192, 223>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_7 = level_table167_FIFO_buf2339.extract<224, 255>();

	
  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_0_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_0_pack, level_table167_FIFO_buf2339_lane_0);
  auto res_diff219_sm2530_76408 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0_pack, level_table167_FIFO_buf2339_lane_0_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_1_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_1_pack, level_table167_FIFO_buf2339_lane_1);
  auto res_diff219_sm2530_66406 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1_pack, level_table167_FIFO_buf2339_lane_1_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_2_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_2);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_2_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_2_pack, level_table167_FIFO_buf2339_lane_2);
  auto res_diff219_sm2530_56404 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_2_pack, level_table167_FIFO_buf2339_lane_2_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_3_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_3);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_3_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_3_pack, level_table167_FIFO_buf2339_lane_3);
  auto res_diff219_sm2530_46402 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_3_pack, level_table167_FIFO_buf2339_lane_3_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_4_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_4);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_4_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_4_pack, level_table167_FIFO_buf2339_lane_4);
  auto res_diff219_sm2530_36400 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_4_pack, level_table167_FIFO_buf2339_lane_4_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_5_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_5);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_5_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_5_pack, level_table167_FIFO_buf2339_lane_5);
  auto res_diff219_sm2530_26398 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_5_pack, level_table167_FIFO_buf2339_lane_5_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_6_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_6);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_6_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_6_pack, level_table167_FIFO_buf2339_lane_6);
  auto res_diff219_sm2530_16396 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_6_pack, level_table167_FIFO_buf2339_lane_6_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_7_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_7);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_7_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_7_pack, level_table167_FIFO_buf2339_lane_7);
  auto res_diff219_sm2530_06394 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_7_pack, level_table167_FIFO_buf2339_lane_7_pack);
  hw_uint<256 > return_value6540;
  set_at<0, 256, 32>(return_value6540, res_diff219_sm2530_76408);
  set_at<32, 256, 32>(return_value6540, res_diff219_sm2530_66406);
  set_at<64, 256, 32>(return_value6540, res_diff219_sm2530_56404);
  set_at<96, 256, 32>(return_value6540, res_diff219_sm2530_46402);
  set_at<128, 256, 32>(return_value6540, res_diff219_sm2530_36400);
  set_at<160, 256, 32>(return_value6540, res_diff219_sm2530_26398);
  set_at<192, 256, 32>(return_value6540, res_diff219_sm2530_16396);
  set_at<224, 256, 32>(return_value6540, res_diff219_sm2530_06394);
  return return_value6540;

}

hw_uint<256> pw_math_gray221223_cu6542(hw_uint<32*8>& gray_FIFO_buf2287) {
  hw_uint<32> gray_FIFO_buf2287_lane_0 = gray_FIFO_buf2287.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2287_lane_1 = gray_FIFO_buf2287.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2287_lane_2 = gray_FIFO_buf2287.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2287_lane_3 = gray_FIFO_buf2287.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2287_lane_4 = gray_FIFO_buf2287.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2287_lane_5 = gray_FIFO_buf2287.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2287_lane_6 = gray_FIFO_buf2287.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2287_lane_7 = gray_FIFO_buf2287.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2287_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_0_pack, gray_FIFO_buf2287_lane_0);
  auto res_pw_math_gray221224_sm2531_76424 = llf_level_entry_4(gray_FIFO_buf2287_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_1_pack, gray_FIFO_buf2287_lane_1);
  auto res_pw_math_gray221224_sm2531_66422 = llf_level_entry_4(gray_FIFO_buf2287_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_2_pack, gray_FIFO_buf2287_lane_2);
  auto res_pw_math_gray221224_sm2531_56420 = llf_level_entry_4(gray_FIFO_buf2287_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_3_pack, gray_FIFO_buf2287_lane_3);
  auto res_pw_math_gray221224_sm2531_46418 = llf_level_entry_4(gray_FIFO_buf2287_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_4_pack, gray_FIFO_buf2287_lane_4);
  auto res_pw_math_gray221224_sm2531_36416 = llf_level_entry_4(gray_FIFO_buf2287_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_5_pack, gray_FIFO_buf2287_lane_5);
  auto res_pw_math_gray221224_sm2531_26414 = llf_level_entry_4(gray_FIFO_buf2287_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_6_pack, gray_FIFO_buf2287_lane_6);
  auto res_pw_math_gray221224_sm2531_16412 = llf_level_entry_4(gray_FIFO_buf2287_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_7_pack, gray_FIFO_buf2287_lane_7);
  auto res_pw_math_gray221224_sm2531_06410 = llf_level_entry_4(gray_FIFO_buf2287_lane_7_pack);
  hw_uint<256 > return_value6543;
  set_at<0, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_76424);
  set_at<32, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_66422);
  set_at<64, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_56420);
  set_at<96, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_46418);
  set_at<128, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_36416);
  set_at<160, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_26414);
  set_at<192, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_16412);
  set_at<224, 256, 32>(return_value6543, res_pw_math_gray221224_sm2531_06410);
  return return_value6543;

}

hw_uint<128> gp_level_table220_1227_cu6545(hw_uint<32*36>& level_table220_FIFO_buf2343) {
  hw_uint<32> level_table220_FIFO_buf2343_lane_0 = level_table220_FIFO_buf2343.extract<0, 31>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_1 = level_table220_FIFO_buf2343.extract<32, 63>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_2 = level_table220_FIFO_buf2343.extract<64, 95>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_3 = level_table220_FIFO_buf2343.extract<96, 127>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_4 = level_table220_FIFO_buf2343.extract<128, 159>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_5 = level_table220_FIFO_buf2343.extract<160, 191>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_6 = level_table220_FIFO_buf2343.extract<192, 223>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_7 = level_table220_FIFO_buf2343.extract<224, 255>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_8 = level_table220_FIFO_buf2343.extract<256, 287>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_9 = level_table220_FIFO_buf2343.extract<288, 319>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_10 = level_table220_FIFO_buf2343.extract<320, 351>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_11 = level_table220_FIFO_buf2343.extract<352, 383>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_12 = level_table220_FIFO_buf2343.extract<384, 415>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_13 = level_table220_FIFO_buf2343.extract<416, 447>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_14 = level_table220_FIFO_buf2343.extract<448, 479>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_15 = level_table220_FIFO_buf2343.extract<480, 511>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_16 = level_table220_FIFO_buf2343.extract<512, 543>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_17 = level_table220_FIFO_buf2343.extract<544, 575>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_18 = level_table220_FIFO_buf2343.extract<576, 607>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_19 = level_table220_FIFO_buf2343.extract<608, 639>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_20 = level_table220_FIFO_buf2343.extract<640, 671>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_21 = level_table220_FIFO_buf2343.extract<672, 703>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_22 = level_table220_FIFO_buf2343.extract<704, 735>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_23 = level_table220_FIFO_buf2343.extract<736, 767>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_24 = level_table220_FIFO_buf2343.extract<768, 799>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_25 = level_table220_FIFO_buf2343.extract<800, 831>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_26 = level_table220_FIFO_buf2343.extract<832, 863>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_27 = level_table220_FIFO_buf2343.extract<864, 895>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_28 = level_table220_FIFO_buf2343.extract<896, 927>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_29 = level_table220_FIFO_buf2343.extract<928, 959>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_30 = level_table220_FIFO_buf2343.extract<960, 991>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_31 = level_table220_FIFO_buf2343.extract<992, 1023>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_32 = level_table220_FIFO_buf2343.extract<1024, 1055>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_33 = level_table220_FIFO_buf2343.extract<1056, 1087>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_34 = level_table220_FIFO_buf2343.extract<1088, 1119>();
  hw_uint<32> level_table220_FIFO_buf2343_lane_35 = level_table220_FIFO_buf2343.extract<1120, 1151>();

	
  hw_uint<288 > level_table220_FIFO_buf2343_lane_8_pack;
  set_at<0, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_0);
  set_at<32, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_1);
  set_at<64, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_2);
  set_at<96, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_3);
  set_at<128, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_4);
  set_at<160, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_5);
  set_at<192, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_6);
  set_at<224, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_7);
  set_at<256, 288, 32>(level_table220_FIFO_buf2343_lane_8_pack, level_table220_FIFO_buf2343_lane_8);
  auto res_gp_level_table220_1227_merged1199_sm2532_32950 = gp_level_table220_1227_cu1197(level_table220_FIFO_buf2343_lane_8_pack);

  hw_uint<288 > level_table220_FIFO_buf2343_lane_17_pack;
  set_at<0, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_9);
  set_at<32, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_10);
  set_at<64, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_11);
  set_at<96, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_12);
  set_at<128, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_13);
  set_at<160, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_14);
  set_at<192, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_15);
  set_at<224, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_16);
  set_at<256, 288, 32>(level_table220_FIFO_buf2343_lane_17_pack, level_table220_FIFO_buf2343_lane_17);
  auto res_gp_level_table220_1227_merged1199_sm2532_22948 = gp_level_table220_1227_cu1197(level_table220_FIFO_buf2343_lane_17_pack);

  hw_uint<288 > level_table220_FIFO_buf2343_lane_26_pack;
  set_at<0, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_18);
  set_at<32, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_19);
  set_at<64, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_20);
  set_at<96, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_21);
  set_at<128, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_22);
  set_at<160, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_23);
  set_at<192, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_24);
  set_at<224, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_25);
  set_at<256, 288, 32>(level_table220_FIFO_buf2343_lane_26_pack, level_table220_FIFO_buf2343_lane_26);
  auto res_gp_level_table220_1227_merged1199_sm2532_12946 = gp_level_table220_1227_cu1197(level_table220_FIFO_buf2343_lane_26_pack);

  hw_uint<288 > level_table220_FIFO_buf2343_lane_35_pack;
  set_at<0, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_27);
  set_at<32, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_28);
  set_at<64, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_29);
  set_at<96, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_30);
  set_at<128, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_31);
  set_at<160, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_32);
  set_at<192, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_33);
  set_at<224, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_34);
  set_at<256, 288, 32>(level_table220_FIFO_buf2343_lane_35_pack, level_table220_FIFO_buf2343_lane_35);
  auto res_gp_level_table220_1227_merged1199_sm2532_02944 = gp_level_table220_1227_cu1197(level_table220_FIFO_buf2343_lane_35_pack);
  hw_uint<128 > return_value6546;
  set_at<0, 128, 32>(return_value6546, res_gp_level_table220_1227_merged1199_sm2532_32950);
  set_at<32, 128, 32>(return_value6546, res_gp_level_table220_1227_merged1199_sm2532_22948);
  set_at<64, 128, 32>(return_value6546, res_gp_level_table220_1227_merged1199_sm2532_12946);
  set_at<96, 128, 32>(return_value6546, res_gp_level_table220_1227_merged1199_sm2532_02944);
  return return_value6546;

}

hw_uint<64> gp_level_table220_2235_cu6548(hw_uint<32*18>& gp_level_table220_1_buf225_FIFO_buf2003) {
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_0 = gp_level_table220_1_buf225_FIFO_buf2003.extract<0, 31>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_1 = gp_level_table220_1_buf225_FIFO_buf2003.extract<32, 63>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_2 = gp_level_table220_1_buf225_FIFO_buf2003.extract<64, 95>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_3 = gp_level_table220_1_buf225_FIFO_buf2003.extract<96, 127>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_4 = gp_level_table220_1_buf225_FIFO_buf2003.extract<128, 159>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_5 = gp_level_table220_1_buf225_FIFO_buf2003.extract<160, 191>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_6 = gp_level_table220_1_buf225_FIFO_buf2003.extract<192, 223>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_7 = gp_level_table220_1_buf225_FIFO_buf2003.extract<224, 255>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_8 = gp_level_table220_1_buf225_FIFO_buf2003.extract<256, 287>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_9 = gp_level_table220_1_buf225_FIFO_buf2003.extract<288, 319>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_10 = gp_level_table220_1_buf225_FIFO_buf2003.extract<320, 351>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_11 = gp_level_table220_1_buf225_FIFO_buf2003.extract<352, 383>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_12 = gp_level_table220_1_buf225_FIFO_buf2003.extract<384, 415>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_13 = gp_level_table220_1_buf225_FIFO_buf2003.extract<416, 447>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_14 = gp_level_table220_1_buf225_FIFO_buf2003.extract<448, 479>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_15 = gp_level_table220_1_buf225_FIFO_buf2003.extract<480, 511>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_16 = gp_level_table220_1_buf225_FIFO_buf2003.extract<512, 543>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2003_lane_17 = gp_level_table220_1_buf225_FIFO_buf2003.extract<544, 575>();

	
  hw_uint<288 > gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_0);
  set_at<32, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_1);
  set_at<64, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_2);
  set_at<96, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_3);
  set_at<128, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_4);
  set_at<160, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_5);
  set_at<192, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_6);
  set_at<224, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_7);
  set_at<256, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_8);
  auto res_gp_level_table220_2235_merged1202_sm2533_12942 = gp_level_table220_2235_cu1200(gp_level_table220_1_buf225_FIFO_buf2003_lane_8_pack);

  hw_uint<288 > gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_9);
  set_at<32, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_10);
  set_at<64, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_11);
  set_at<96, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_12);
  set_at<128, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_13);
  set_at<160, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_14);
  set_at<192, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_15);
  set_at<224, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_16);
  set_at<256, 288, 32>(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack, gp_level_table220_1_buf225_FIFO_buf2003_lane_17);
  auto res_gp_level_table220_2235_merged1202_sm2533_02940 = gp_level_table220_2235_cu1200(gp_level_table220_1_buf225_FIFO_buf2003_lane_17_pack);
  hw_uint<64 > return_value6549;
  set_at<0, 64, 32>(return_value6549, res_gp_level_table220_2235_merged1202_sm2533_12942);
  set_at<32, 64, 32>(return_value6549, res_gp_level_table220_2235_merged1202_sm2533_02940);
  return return_value6549;

}

hw_uint<64> us_gp_level_table220_3_buf241251_cu6551(hw_uint<32*2>& gp_level_table220_3_buf241_FIFO_buf2039) {
  return gp_level_table220_3_buf241_FIFO_buf2039;
}

hw_uint<64> lp_level_table220_2255_cu6553(hw_uint<32*2>& gp_level_table220_2_buf233_FIFO_buf2023, hw_uint<32*2>& gp_level_table220_3_buf241_us249_FIFO_buf2043) {
  hw_uint<32> gp_level_table220_2_buf233_FIFO_buf2023_lane_0 = gp_level_table220_2_buf233_FIFO_buf2023.extract<0, 31>();
  hw_uint<32> gp_level_table220_2_buf233_FIFO_buf2023_lane_1 = gp_level_table220_2_buf233_FIFO_buf2023.extract<32, 63>();
  hw_uint<32> gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_0 = gp_level_table220_3_buf241_us249_FIFO_buf2043.extract<0, 31>();
  hw_uint<32> gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_1 = gp_level_table220_3_buf241_us249_FIFO_buf2043.extract<32, 63>();

	
  hw_uint<32 > gp_level_table220_2_buf233_FIFO_buf2023_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_FIFO_buf2023_lane_0_pack, gp_level_table220_2_buf233_FIFO_buf2023_lane_0);
  hw_uint<32 > gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_0_pack, gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_0);
  auto res_diff256_sm2536_12960 = llf_diff_float_32(gp_level_table220_2_buf233_FIFO_buf2023_lane_0_pack, gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_0_pack);

  hw_uint<32 > gp_level_table220_2_buf233_FIFO_buf2023_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_FIFO_buf2023_lane_1_pack, gp_level_table220_2_buf233_FIFO_buf2023_lane_1);
  hw_uint<32 > gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_1_pack, gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_1);
  auto res_diff256_sm2536_02958 = llf_diff_float_32(gp_level_table220_2_buf233_FIFO_buf2023_lane_1_pack, gp_level_table220_3_buf241_us249_FIFO_buf2043_lane_1_pack);
  hw_uint<64 > return_value6554;
  set_at<0, 64, 32>(return_value6554, res_diff256_sm2536_12960);
  set_at<32, 64, 32>(return_value6554, res_diff256_sm2536_02958);
  return return_value6554;

}

hw_uint<128> us_gp_level_table220_2_buf233259_cu6556(hw_uint<32*4>& gp_level_table220_2_buf233_FIFO_buf2027) {
  return gp_level_table220_2_buf233_FIFO_buf2027;
}

hw_uint<128> lp_level_table220_1263_cu6558(hw_uint<32*4>& gp_level_table220_1_buf225_FIFO_buf2007, hw_uint<32*4>& gp_level_table220_2_buf233_us257_FIFO_buf2031) {
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2007_lane_0 = gp_level_table220_1_buf225_FIFO_buf2007.extract<0, 31>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2007_lane_1 = gp_level_table220_1_buf225_FIFO_buf2007.extract<32, 63>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2007_lane_2 = gp_level_table220_1_buf225_FIFO_buf2007.extract<64, 95>();
  hw_uint<32> gp_level_table220_1_buf225_FIFO_buf2007_lane_3 = gp_level_table220_1_buf225_FIFO_buf2007.extract<96, 127>();
  hw_uint<32> gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_0 = gp_level_table220_2_buf233_us257_FIFO_buf2031.extract<0, 31>();
  hw_uint<32> gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_1 = gp_level_table220_2_buf233_us257_FIFO_buf2031.extract<32, 63>();
  hw_uint<32> gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_2 = gp_level_table220_2_buf233_us257_FIFO_buf2031.extract<64, 95>();
  hw_uint<32> gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_3 = gp_level_table220_2_buf233_us257_FIFO_buf2031.extract<96, 127>();

	
  hw_uint<32 > gp_level_table220_1_buf225_FIFO_buf2007_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_FIFO_buf2007_lane_0_pack, gp_level_table220_1_buf225_FIFO_buf2007_lane_0);
  hw_uint<32 > gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_0_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_0);
  auto res_diff264_sm2538_36228 = llf_diff_float_32(gp_level_table220_1_buf225_FIFO_buf2007_lane_0_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_0_pack);

  hw_uint<32 > gp_level_table220_1_buf225_FIFO_buf2007_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_FIFO_buf2007_lane_1_pack, gp_level_table220_1_buf225_FIFO_buf2007_lane_1);
  hw_uint<32 > gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_1_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_1);
  auto res_diff264_sm2538_26226 = llf_diff_float_32(gp_level_table220_1_buf225_FIFO_buf2007_lane_1_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_1_pack);

  hw_uint<32 > gp_level_table220_1_buf225_FIFO_buf2007_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_FIFO_buf2007_lane_2_pack, gp_level_table220_1_buf225_FIFO_buf2007_lane_2);
  hw_uint<32 > gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_2_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_2);
  auto res_diff264_sm2538_16224 = llf_diff_float_32(gp_level_table220_1_buf225_FIFO_buf2007_lane_2_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_2_pack);

  hw_uint<32 > gp_level_table220_1_buf225_FIFO_buf2007_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_FIFO_buf2007_lane_3_pack, gp_level_table220_1_buf225_FIFO_buf2007_lane_3);
  hw_uint<32 > gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_3_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_3);
  auto res_diff264_sm2538_06222 = llf_diff_float_32(gp_level_table220_1_buf225_FIFO_buf2007_lane_3_pack, gp_level_table220_2_buf233_us257_FIFO_buf2031_lane_3_pack);
  hw_uint<128 > return_value6559;
  set_at<0, 128, 32>(return_value6559, res_diff264_sm2538_36228);
  set_at<32, 128, 32>(return_value6559, res_diff264_sm2538_26226);
  set_at<64, 128, 32>(return_value6559, res_diff264_sm2538_16224);
  set_at<96, 128, 32>(return_value6559, res_diff264_sm2538_06222);
  return return_value6559;

}

hw_uint<256> us_gp_level_table220_1_buf225267_cu6561(hw_uint<32*8>& gp_level_table220_1_buf225_FIFO_buf2011) {
  return gp_level_table220_1_buf225_FIFO_buf2011;
}

hw_uint<256> lp_level_table220_0271_cu6563(hw_uint<32*8>& gp_level_table220_1_buf225_us265_FIFO_buf2015, hw_uint<32*8>& level_table220_FIFO_buf2347) {
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<0, 31>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<32, 63>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_2 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<64, 95>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_3 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<96, 127>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_4 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<128, 159>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_5 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<160, 191>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_6 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<192, 223>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_7 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<224, 255>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_0 = level_table220_FIFO_buf2347.extract<0, 31>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_1 = level_table220_FIFO_buf2347.extract<32, 63>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_2 = level_table220_FIFO_buf2347.extract<64, 95>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_3 = level_table220_FIFO_buf2347.extract<96, 127>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_4 = level_table220_FIFO_buf2347.extract<128, 159>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_5 = level_table220_FIFO_buf2347.extract<160, 191>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_6 = level_table220_FIFO_buf2347.extract<192, 223>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_7 = level_table220_FIFO_buf2347.extract<224, 255>();

	
  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_0_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_0_pack, level_table220_FIFO_buf2347_lane_0);
  auto res_diff272_sm2540_76260 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0_pack, level_table220_FIFO_buf2347_lane_0_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_1_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_1_pack, level_table220_FIFO_buf2347_lane_1);
  auto res_diff272_sm2540_66258 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1_pack, level_table220_FIFO_buf2347_lane_1_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_2_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_2);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_2_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_2_pack, level_table220_FIFO_buf2347_lane_2);
  auto res_diff272_sm2540_56256 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_2_pack, level_table220_FIFO_buf2347_lane_2_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_3_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_3);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_3_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_3_pack, level_table220_FIFO_buf2347_lane_3);
  auto res_diff272_sm2540_46254 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_3_pack, level_table220_FIFO_buf2347_lane_3_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_4_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_4);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_4_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_4_pack, level_table220_FIFO_buf2347_lane_4);
  auto res_diff272_sm2540_36252 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_4_pack, level_table220_FIFO_buf2347_lane_4_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_5_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_5);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_5_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_5_pack, level_table220_FIFO_buf2347_lane_5);
  auto res_diff272_sm2540_26250 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_5_pack, level_table220_FIFO_buf2347_lane_5_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_6_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_6);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_6_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_6_pack, level_table220_FIFO_buf2347_lane_6);
  auto res_diff272_sm2540_16248 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_6_pack, level_table220_FIFO_buf2347_lane_6_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_7_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_7);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_7_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_7_pack, level_table220_FIFO_buf2347_lane_7);
  auto res_diff272_sm2540_06246 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_7_pack, level_table220_FIFO_buf2347_lane_7_pack);
  hw_uint<256 > return_value6564;
  set_at<0, 256, 32>(return_value6564, res_diff272_sm2540_76260);
  set_at<32, 256, 32>(return_value6564, res_diff272_sm2540_66258);
  set_at<64, 256, 32>(return_value6564, res_diff272_sm2540_56256);
  set_at<96, 256, 32>(return_value6564, res_diff272_sm2540_46254);
  set_at<128, 256, 32>(return_value6564, res_diff272_sm2540_36252);
  set_at<160, 256, 32>(return_value6564, res_diff272_sm2540_26250);
  set_at<192, 256, 32>(return_value6564, res_diff272_sm2540_16248);
  set_at<224, 256, 32>(return_value6564, res_diff272_sm2540_06246);
  return return_value6564;

}

hw_uint<256> pw_math_gray274276_cu6566(hw_uint<32*8>& gray_FIFO_buf2291) {
  hw_uint<32> gray_FIFO_buf2291_lane_0 = gray_FIFO_buf2291.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2291_lane_1 = gray_FIFO_buf2291.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2291_lane_2 = gray_FIFO_buf2291.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2291_lane_3 = gray_FIFO_buf2291.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2291_lane_4 = gray_FIFO_buf2291.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2291_lane_5 = gray_FIFO_buf2291.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2291_lane_6 = gray_FIFO_buf2291.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2291_lane_7 = gray_FIFO_buf2291.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2291_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_0_pack, gray_FIFO_buf2291_lane_0);
  auto res_pw_math_gray274277_sm2541_76002 = llf_level_entry_5(gray_FIFO_buf2291_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_1_pack, gray_FIFO_buf2291_lane_1);
  auto res_pw_math_gray274277_sm2541_66000 = llf_level_entry_5(gray_FIFO_buf2291_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_2_pack, gray_FIFO_buf2291_lane_2);
  auto res_pw_math_gray274277_sm2541_55998 = llf_level_entry_5(gray_FIFO_buf2291_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_3_pack, gray_FIFO_buf2291_lane_3);
  auto res_pw_math_gray274277_sm2541_45996 = llf_level_entry_5(gray_FIFO_buf2291_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_4_pack, gray_FIFO_buf2291_lane_4);
  auto res_pw_math_gray274277_sm2541_35994 = llf_level_entry_5(gray_FIFO_buf2291_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_5_pack, gray_FIFO_buf2291_lane_5);
  auto res_pw_math_gray274277_sm2541_25992 = llf_level_entry_5(gray_FIFO_buf2291_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_6_pack, gray_FIFO_buf2291_lane_6);
  auto res_pw_math_gray274277_sm2541_15990 = llf_level_entry_5(gray_FIFO_buf2291_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_7_pack, gray_FIFO_buf2291_lane_7);
  auto res_pw_math_gray274277_sm2541_05988 = llf_level_entry_5(gray_FIFO_buf2291_lane_7_pack);
  hw_uint<256 > return_value6567;
  set_at<0, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_76002);
  set_at<32, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_66000);
  set_at<64, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_55998);
  set_at<96, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_45996);
  set_at<128, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_35994);
  set_at<160, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_25992);
  set_at<192, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_15990);
  set_at<224, 256, 32>(return_value6567, res_pw_math_gray274277_sm2541_05988);
  return return_value6567;

}

hw_uint<128> gp_level_table273_1280_cu6569(hw_uint<32*36>& level_table273_FIFO_buf2351) {
  hw_uint<32> level_table273_FIFO_buf2351_lane_0 = level_table273_FIFO_buf2351.extract<0, 31>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_1 = level_table273_FIFO_buf2351.extract<32, 63>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_2 = level_table273_FIFO_buf2351.extract<64, 95>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_3 = level_table273_FIFO_buf2351.extract<96, 127>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_4 = level_table273_FIFO_buf2351.extract<128, 159>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_5 = level_table273_FIFO_buf2351.extract<160, 191>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_6 = level_table273_FIFO_buf2351.extract<192, 223>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_7 = level_table273_FIFO_buf2351.extract<224, 255>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_8 = level_table273_FIFO_buf2351.extract<256, 287>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_9 = level_table273_FIFO_buf2351.extract<288, 319>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_10 = level_table273_FIFO_buf2351.extract<320, 351>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_11 = level_table273_FIFO_buf2351.extract<352, 383>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_12 = level_table273_FIFO_buf2351.extract<384, 415>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_13 = level_table273_FIFO_buf2351.extract<416, 447>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_14 = level_table273_FIFO_buf2351.extract<448, 479>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_15 = level_table273_FIFO_buf2351.extract<480, 511>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_16 = level_table273_FIFO_buf2351.extract<512, 543>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_17 = level_table273_FIFO_buf2351.extract<544, 575>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_18 = level_table273_FIFO_buf2351.extract<576, 607>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_19 = level_table273_FIFO_buf2351.extract<608, 639>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_20 = level_table273_FIFO_buf2351.extract<640, 671>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_21 = level_table273_FIFO_buf2351.extract<672, 703>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_22 = level_table273_FIFO_buf2351.extract<704, 735>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_23 = level_table273_FIFO_buf2351.extract<736, 767>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_24 = level_table273_FIFO_buf2351.extract<768, 799>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_25 = level_table273_FIFO_buf2351.extract<800, 831>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_26 = level_table273_FIFO_buf2351.extract<832, 863>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_27 = level_table273_FIFO_buf2351.extract<864, 895>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_28 = level_table273_FIFO_buf2351.extract<896, 927>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_29 = level_table273_FIFO_buf2351.extract<928, 959>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_30 = level_table273_FIFO_buf2351.extract<960, 991>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_31 = level_table273_FIFO_buf2351.extract<992, 1023>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_32 = level_table273_FIFO_buf2351.extract<1024, 1055>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_33 = level_table273_FIFO_buf2351.extract<1056, 1087>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_34 = level_table273_FIFO_buf2351.extract<1088, 1119>();
  hw_uint<32> level_table273_FIFO_buf2351_lane_35 = level_table273_FIFO_buf2351.extract<1120, 1151>();

	
  hw_uint<288 > level_table273_FIFO_buf2351_lane_8_pack;
  set_at<0, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_0);
  set_at<32, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_1);
  set_at<64, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_2);
  set_at<96, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_3);
  set_at<128, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_4);
  set_at<160, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_5);
  set_at<192, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_6);
  set_at<224, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_7);
  set_at<256, 288, 32>(level_table273_FIFO_buf2351_lane_8_pack, level_table273_FIFO_buf2351_lane_8);
  auto res_gp_level_table273_1280_merged1208_sm2542_36010 = gp_level_table273_1280_cu1206(level_table273_FIFO_buf2351_lane_8_pack);

  hw_uint<288 > level_table273_FIFO_buf2351_lane_17_pack;
  set_at<0, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_9);
  set_at<32, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_10);
  set_at<64, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_11);
  set_at<96, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_12);
  set_at<128, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_13);
  set_at<160, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_14);
  set_at<192, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_15);
  set_at<224, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_16);
  set_at<256, 288, 32>(level_table273_FIFO_buf2351_lane_17_pack, level_table273_FIFO_buf2351_lane_17);
  auto res_gp_level_table273_1280_merged1208_sm2542_26008 = gp_level_table273_1280_cu1206(level_table273_FIFO_buf2351_lane_17_pack);

  hw_uint<288 > level_table273_FIFO_buf2351_lane_26_pack;
  set_at<0, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_18);
  set_at<32, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_19);
  set_at<64, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_20);
  set_at<96, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_21);
  set_at<128, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_22);
  set_at<160, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_23);
  set_at<192, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_24);
  set_at<224, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_25);
  set_at<256, 288, 32>(level_table273_FIFO_buf2351_lane_26_pack, level_table273_FIFO_buf2351_lane_26);
  auto res_gp_level_table273_1280_merged1208_sm2542_16006 = gp_level_table273_1280_cu1206(level_table273_FIFO_buf2351_lane_26_pack);

  hw_uint<288 > level_table273_FIFO_buf2351_lane_35_pack;
  set_at<0, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_27);
  set_at<32, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_28);
  set_at<64, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_29);
  set_at<96, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_30);
  set_at<128, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_31);
  set_at<160, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_32);
  set_at<192, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_33);
  set_at<224, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_34);
  set_at<256, 288, 32>(level_table273_FIFO_buf2351_lane_35_pack, level_table273_FIFO_buf2351_lane_35);
  auto res_gp_level_table273_1280_merged1208_sm2542_06004 = gp_level_table273_1280_cu1206(level_table273_FIFO_buf2351_lane_35_pack);
  hw_uint<128 > return_value6570;
  set_at<0, 128, 32>(return_value6570, res_gp_level_table273_1280_merged1208_sm2542_36010);
  set_at<32, 128, 32>(return_value6570, res_gp_level_table273_1280_merged1208_sm2542_26008);
  set_at<64, 128, 32>(return_value6570, res_gp_level_table273_1280_merged1208_sm2542_16006);
  set_at<96, 128, 32>(return_value6570, res_gp_level_table273_1280_merged1208_sm2542_06004);
  return return_value6570;

}

hw_uint<64> gp_level_table273_2288_cu6572(hw_uint<32*18>& gp_level_table273_1_buf278_FIFO_buf2047) {
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_0 = gp_level_table273_1_buf278_FIFO_buf2047.extract<0, 31>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_1 = gp_level_table273_1_buf278_FIFO_buf2047.extract<32, 63>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_2 = gp_level_table273_1_buf278_FIFO_buf2047.extract<64, 95>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_3 = gp_level_table273_1_buf278_FIFO_buf2047.extract<96, 127>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_4 = gp_level_table273_1_buf278_FIFO_buf2047.extract<128, 159>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_5 = gp_level_table273_1_buf278_FIFO_buf2047.extract<160, 191>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_6 = gp_level_table273_1_buf278_FIFO_buf2047.extract<192, 223>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_7 = gp_level_table273_1_buf278_FIFO_buf2047.extract<224, 255>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_8 = gp_level_table273_1_buf278_FIFO_buf2047.extract<256, 287>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_9 = gp_level_table273_1_buf278_FIFO_buf2047.extract<288, 319>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_10 = gp_level_table273_1_buf278_FIFO_buf2047.extract<320, 351>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_11 = gp_level_table273_1_buf278_FIFO_buf2047.extract<352, 383>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_12 = gp_level_table273_1_buf278_FIFO_buf2047.extract<384, 415>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_13 = gp_level_table273_1_buf278_FIFO_buf2047.extract<416, 447>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_14 = gp_level_table273_1_buf278_FIFO_buf2047.extract<448, 479>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_15 = gp_level_table273_1_buf278_FIFO_buf2047.extract<480, 511>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_16 = gp_level_table273_1_buf278_FIFO_buf2047.extract<512, 543>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2047_lane_17 = gp_level_table273_1_buf278_FIFO_buf2047.extract<544, 575>();

	
  hw_uint<288 > gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_0);
  set_at<32, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_1);
  set_at<64, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_2);
  set_at<96, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_3);
  set_at<128, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_4);
  set_at<160, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_5);
  set_at<192, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_6);
  set_at<224, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_7);
  set_at<256, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_8);
  auto res_gp_level_table273_2288_merged1211_sm2543_16014 = gp_level_table273_2288_cu1209(gp_level_table273_1_buf278_FIFO_buf2047_lane_8_pack);

  hw_uint<288 > gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_9);
  set_at<32, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_10);
  set_at<64, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_11);
  set_at<96, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_12);
  set_at<128, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_13);
  set_at<160, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_14);
  set_at<192, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_15);
  set_at<224, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_16);
  set_at<256, 288, 32>(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack, gp_level_table273_1_buf278_FIFO_buf2047_lane_17);
  auto res_gp_level_table273_2288_merged1211_sm2543_06012 = gp_level_table273_2288_cu1209(gp_level_table273_1_buf278_FIFO_buf2047_lane_17_pack);
  hw_uint<64 > return_value6573;
  set_at<0, 64, 32>(return_value6573, res_gp_level_table273_2288_merged1211_sm2543_16014);
  set_at<32, 64, 32>(return_value6573, res_gp_level_table273_2288_merged1211_sm2543_06012);
  return return_value6573;

}

hw_uint<64> us_gp_level_table273_3_buf294304_cu6575(hw_uint<32*2>& gp_level_table273_3_buf294_FIFO_buf2083) {
  return gp_level_table273_3_buf294_FIFO_buf2083;
}

hw_uint<64> lp_level_table273_2308_cu6577(hw_uint<32*2>& gp_level_table273_2_buf286_FIFO_buf2067, hw_uint<32*2>& gp_level_table273_3_buf294_us302_FIFO_buf2087) {
  hw_uint<32> gp_level_table273_2_buf286_FIFO_buf2067_lane_0 = gp_level_table273_2_buf286_FIFO_buf2067.extract<0, 31>();
  hw_uint<32> gp_level_table273_2_buf286_FIFO_buf2067_lane_1 = gp_level_table273_2_buf286_FIFO_buf2067.extract<32, 63>();
  hw_uint<32> gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_0 = gp_level_table273_3_buf294_us302_FIFO_buf2087.extract<0, 31>();
  hw_uint<32> gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_1 = gp_level_table273_3_buf294_us302_FIFO_buf2087.extract<32, 63>();

	
  hw_uint<32 > gp_level_table273_2_buf286_FIFO_buf2067_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_FIFO_buf2067_lane_0_pack, gp_level_table273_2_buf286_FIFO_buf2067_lane_0);
  hw_uint<32 > gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_0_pack, gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_0);
  auto res_diff309_sm2546_16024 = llf_diff_float_32(gp_level_table273_2_buf286_FIFO_buf2067_lane_0_pack, gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_0_pack);

  hw_uint<32 > gp_level_table273_2_buf286_FIFO_buf2067_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_FIFO_buf2067_lane_1_pack, gp_level_table273_2_buf286_FIFO_buf2067_lane_1);
  hw_uint<32 > gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_1_pack, gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_1);
  auto res_diff309_sm2546_06022 = llf_diff_float_32(gp_level_table273_2_buf286_FIFO_buf2067_lane_1_pack, gp_level_table273_3_buf294_us302_FIFO_buf2087_lane_1_pack);
  hw_uint<64 > return_value6578;
  set_at<0, 64, 32>(return_value6578, res_diff309_sm2546_16024);
  set_at<32, 64, 32>(return_value6578, res_diff309_sm2546_06022);
  return return_value6578;

}

hw_uint<128> us_gp_level_table273_2_buf286312_cu6580(hw_uint<32*4>& gp_level_table273_2_buf286_FIFO_buf2071) {
  return gp_level_table273_2_buf286_FIFO_buf2071;
}

hw_uint<128> lp_level_table273_1316_cu6582(hw_uint<32*4>& gp_level_table273_1_buf278_FIFO_buf2051, hw_uint<32*4>& gp_level_table273_2_buf286_us310_FIFO_buf2075) {
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2051_lane_0 = gp_level_table273_1_buf278_FIFO_buf2051.extract<0, 31>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2051_lane_1 = gp_level_table273_1_buf278_FIFO_buf2051.extract<32, 63>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2051_lane_2 = gp_level_table273_1_buf278_FIFO_buf2051.extract<64, 95>();
  hw_uint<32> gp_level_table273_1_buf278_FIFO_buf2051_lane_3 = gp_level_table273_1_buf278_FIFO_buf2051.extract<96, 127>();
  hw_uint<32> gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_0 = gp_level_table273_2_buf286_us310_FIFO_buf2075.extract<0, 31>();
  hw_uint<32> gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_1 = gp_level_table273_2_buf286_us310_FIFO_buf2075.extract<32, 63>();
  hw_uint<32> gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_2 = gp_level_table273_2_buf286_us310_FIFO_buf2075.extract<64, 95>();
  hw_uint<32> gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_3 = gp_level_table273_2_buf286_us310_FIFO_buf2075.extract<96, 127>();

	
  hw_uint<32 > gp_level_table273_1_buf278_FIFO_buf2051_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_FIFO_buf2051_lane_0_pack, gp_level_table273_1_buf278_FIFO_buf2051_lane_0);
  hw_uint<32 > gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_0_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_0);
  auto res_diff317_sm2548_36040 = llf_diff_float_32(gp_level_table273_1_buf278_FIFO_buf2051_lane_0_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_0_pack);

  hw_uint<32 > gp_level_table273_1_buf278_FIFO_buf2051_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_FIFO_buf2051_lane_1_pack, gp_level_table273_1_buf278_FIFO_buf2051_lane_1);
  hw_uint<32 > gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_1_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_1);
  auto res_diff317_sm2548_26038 = llf_diff_float_32(gp_level_table273_1_buf278_FIFO_buf2051_lane_1_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_1_pack);

  hw_uint<32 > gp_level_table273_1_buf278_FIFO_buf2051_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_FIFO_buf2051_lane_2_pack, gp_level_table273_1_buf278_FIFO_buf2051_lane_2);
  hw_uint<32 > gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_2_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_2);
  auto res_diff317_sm2548_16036 = llf_diff_float_32(gp_level_table273_1_buf278_FIFO_buf2051_lane_2_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_2_pack);

  hw_uint<32 > gp_level_table273_1_buf278_FIFO_buf2051_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_FIFO_buf2051_lane_3_pack, gp_level_table273_1_buf278_FIFO_buf2051_lane_3);
  hw_uint<32 > gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_3_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_3);
  auto res_diff317_sm2548_06034 = llf_diff_float_32(gp_level_table273_1_buf278_FIFO_buf2051_lane_3_pack, gp_level_table273_2_buf286_us310_FIFO_buf2075_lane_3_pack);
  hw_uint<128 > return_value6583;
  set_at<0, 128, 32>(return_value6583, res_diff317_sm2548_36040);
  set_at<32, 128, 32>(return_value6583, res_diff317_sm2548_26038);
  set_at<64, 128, 32>(return_value6583, res_diff317_sm2548_16036);
  set_at<96, 128, 32>(return_value6583, res_diff317_sm2548_06034);
  return return_value6583;

}

hw_uint<256> us_gp_level_table273_1_buf278320_cu6585(hw_uint<32*8>& gp_level_table273_1_buf278_FIFO_buf2055) {
  return gp_level_table273_1_buf278_FIFO_buf2055;
}

hw_uint<256> lp_level_table273_0324_cu6587(hw_uint<32*8>& gp_level_table273_1_buf278_us318_FIFO_buf2059, hw_uint<32*8>& level_table273_FIFO_buf2355) {
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<0, 31>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<32, 63>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_2 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<64, 95>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_3 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<96, 127>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_4 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<128, 159>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_5 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<160, 191>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_6 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<192, 223>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_7 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<224, 255>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_0 = level_table273_FIFO_buf2355.extract<0, 31>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_1 = level_table273_FIFO_buf2355.extract<32, 63>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_2 = level_table273_FIFO_buf2355.extract<64, 95>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_3 = level_table273_FIFO_buf2355.extract<96, 127>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_4 = level_table273_FIFO_buf2355.extract<128, 159>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_5 = level_table273_FIFO_buf2355.extract<160, 191>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_6 = level_table273_FIFO_buf2355.extract<192, 223>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_7 = level_table273_FIFO_buf2355.extract<224, 255>();

	
  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_0_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_0_pack, level_table273_FIFO_buf2355_lane_0);
  auto res_diff325_sm2550_76072 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0_pack, level_table273_FIFO_buf2355_lane_0_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_1_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_1_pack, level_table273_FIFO_buf2355_lane_1);
  auto res_diff325_sm2550_66070 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1_pack, level_table273_FIFO_buf2355_lane_1_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_2_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_2);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_2_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_2_pack, level_table273_FIFO_buf2355_lane_2);
  auto res_diff325_sm2550_56068 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_2_pack, level_table273_FIFO_buf2355_lane_2_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_3_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_3);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_3_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_3_pack, level_table273_FIFO_buf2355_lane_3);
  auto res_diff325_sm2550_46066 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_3_pack, level_table273_FIFO_buf2355_lane_3_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_4_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_4);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_4_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_4_pack, level_table273_FIFO_buf2355_lane_4);
  auto res_diff325_sm2550_36064 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_4_pack, level_table273_FIFO_buf2355_lane_4_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_5_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_5);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_5_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_5_pack, level_table273_FIFO_buf2355_lane_5);
  auto res_diff325_sm2550_26062 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_5_pack, level_table273_FIFO_buf2355_lane_5_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_6_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_6);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_6_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_6_pack, level_table273_FIFO_buf2355_lane_6);
  auto res_diff325_sm2550_16060 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_6_pack, level_table273_FIFO_buf2355_lane_6_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_7_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_7);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_7_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_7_pack, level_table273_FIFO_buf2355_lane_7);
  auto res_diff325_sm2550_06058 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_7_pack, level_table273_FIFO_buf2355_lane_7_pack);
  hw_uint<256 > return_value6588;
  set_at<0, 256, 32>(return_value6588, res_diff325_sm2550_76072);
  set_at<32, 256, 32>(return_value6588, res_diff325_sm2550_66070);
  set_at<64, 256, 32>(return_value6588, res_diff325_sm2550_56068);
  set_at<96, 256, 32>(return_value6588, res_diff325_sm2550_46066);
  set_at<128, 256, 32>(return_value6588, res_diff325_sm2550_36064);
  set_at<160, 256, 32>(return_value6588, res_diff325_sm2550_26062);
  set_at<192, 256, 32>(return_value6588, res_diff325_sm2550_16060);
  set_at<224, 256, 32>(return_value6588, res_diff325_sm2550_06058);
  return return_value6588;

}

hw_uint<256> pw_math_gray327329_cu6590(hw_uint<32*8>& gray_FIFO_buf2295) {
  hw_uint<32> gray_FIFO_buf2295_lane_0 = gray_FIFO_buf2295.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2295_lane_1 = gray_FIFO_buf2295.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2295_lane_2 = gray_FIFO_buf2295.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2295_lane_3 = gray_FIFO_buf2295.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2295_lane_4 = gray_FIFO_buf2295.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2295_lane_5 = gray_FIFO_buf2295.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2295_lane_6 = gray_FIFO_buf2295.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2295_lane_7 = gray_FIFO_buf2295.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2295_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_0_pack, gray_FIFO_buf2295_lane_0);
  auto res_pw_math_gray327330_sm2551_76088 = llf_level_entry_6(gray_FIFO_buf2295_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_1_pack, gray_FIFO_buf2295_lane_1);
  auto res_pw_math_gray327330_sm2551_66086 = llf_level_entry_6(gray_FIFO_buf2295_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_2_pack, gray_FIFO_buf2295_lane_2);
  auto res_pw_math_gray327330_sm2551_56084 = llf_level_entry_6(gray_FIFO_buf2295_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_3_pack, gray_FIFO_buf2295_lane_3);
  auto res_pw_math_gray327330_sm2551_46082 = llf_level_entry_6(gray_FIFO_buf2295_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_4_pack, gray_FIFO_buf2295_lane_4);
  auto res_pw_math_gray327330_sm2551_36080 = llf_level_entry_6(gray_FIFO_buf2295_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_5_pack, gray_FIFO_buf2295_lane_5);
  auto res_pw_math_gray327330_sm2551_26078 = llf_level_entry_6(gray_FIFO_buf2295_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_6_pack, gray_FIFO_buf2295_lane_6);
  auto res_pw_math_gray327330_sm2551_16076 = llf_level_entry_6(gray_FIFO_buf2295_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_7_pack, gray_FIFO_buf2295_lane_7);
  auto res_pw_math_gray327330_sm2551_06074 = llf_level_entry_6(gray_FIFO_buf2295_lane_7_pack);
  hw_uint<256 > return_value6591;
  set_at<0, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_76088);
  set_at<32, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_66086);
  set_at<64, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_56084);
  set_at<96, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_46082);
  set_at<128, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_36080);
  set_at<160, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_26078);
  set_at<192, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_16076);
  set_at<224, 256, 32>(return_value6591, res_pw_math_gray327330_sm2551_06074);
  return return_value6591;

}

hw_uint<128> gp_level_table326_1333_cu6593(hw_uint<32*36>& level_table326_FIFO_buf2359) {
  hw_uint<32> level_table326_FIFO_buf2359_lane_0 = level_table326_FIFO_buf2359.extract<0, 31>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_1 = level_table326_FIFO_buf2359.extract<32, 63>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_2 = level_table326_FIFO_buf2359.extract<64, 95>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_3 = level_table326_FIFO_buf2359.extract<96, 127>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_4 = level_table326_FIFO_buf2359.extract<128, 159>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_5 = level_table326_FIFO_buf2359.extract<160, 191>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_6 = level_table326_FIFO_buf2359.extract<192, 223>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_7 = level_table326_FIFO_buf2359.extract<224, 255>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_8 = level_table326_FIFO_buf2359.extract<256, 287>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_9 = level_table326_FIFO_buf2359.extract<288, 319>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_10 = level_table326_FIFO_buf2359.extract<320, 351>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_11 = level_table326_FIFO_buf2359.extract<352, 383>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_12 = level_table326_FIFO_buf2359.extract<384, 415>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_13 = level_table326_FIFO_buf2359.extract<416, 447>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_14 = level_table326_FIFO_buf2359.extract<448, 479>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_15 = level_table326_FIFO_buf2359.extract<480, 511>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_16 = level_table326_FIFO_buf2359.extract<512, 543>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_17 = level_table326_FIFO_buf2359.extract<544, 575>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_18 = level_table326_FIFO_buf2359.extract<576, 607>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_19 = level_table326_FIFO_buf2359.extract<608, 639>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_20 = level_table326_FIFO_buf2359.extract<640, 671>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_21 = level_table326_FIFO_buf2359.extract<672, 703>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_22 = level_table326_FIFO_buf2359.extract<704, 735>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_23 = level_table326_FIFO_buf2359.extract<736, 767>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_24 = level_table326_FIFO_buf2359.extract<768, 799>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_25 = level_table326_FIFO_buf2359.extract<800, 831>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_26 = level_table326_FIFO_buf2359.extract<832, 863>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_27 = level_table326_FIFO_buf2359.extract<864, 895>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_28 = level_table326_FIFO_buf2359.extract<896, 927>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_29 = level_table326_FIFO_buf2359.extract<928, 959>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_30 = level_table326_FIFO_buf2359.extract<960, 991>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_31 = level_table326_FIFO_buf2359.extract<992, 1023>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_32 = level_table326_FIFO_buf2359.extract<1024, 1055>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_33 = level_table326_FIFO_buf2359.extract<1056, 1087>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_34 = level_table326_FIFO_buf2359.extract<1088, 1119>();
  hw_uint<32> level_table326_FIFO_buf2359_lane_35 = level_table326_FIFO_buf2359.extract<1120, 1151>();

	
  hw_uint<288 > level_table326_FIFO_buf2359_lane_8_pack;
  set_at<0, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_0);
  set_at<32, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_1);
  set_at<64, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_2);
  set_at<96, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_3);
  set_at<128, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_4);
  set_at<160, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_5);
  set_at<192, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_6);
  set_at<224, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_7);
  set_at<256, 288, 32>(level_table326_FIFO_buf2359_lane_8_pack, level_table326_FIFO_buf2359_lane_8);
  auto res_gp_level_table326_1333_merged1217_sm2552_36096 = gp_level_table326_1333_cu1215(level_table326_FIFO_buf2359_lane_8_pack);

  hw_uint<288 > level_table326_FIFO_buf2359_lane_17_pack;
  set_at<0, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_9);
  set_at<32, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_10);
  set_at<64, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_11);
  set_at<96, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_12);
  set_at<128, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_13);
  set_at<160, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_14);
  set_at<192, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_15);
  set_at<224, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_16);
  set_at<256, 288, 32>(level_table326_FIFO_buf2359_lane_17_pack, level_table326_FIFO_buf2359_lane_17);
  auto res_gp_level_table326_1333_merged1217_sm2552_26094 = gp_level_table326_1333_cu1215(level_table326_FIFO_buf2359_lane_17_pack);

  hw_uint<288 > level_table326_FIFO_buf2359_lane_26_pack;
  set_at<0, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_18);
  set_at<32, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_19);
  set_at<64, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_20);
  set_at<96, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_21);
  set_at<128, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_22);
  set_at<160, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_23);
  set_at<192, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_24);
  set_at<224, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_25);
  set_at<256, 288, 32>(level_table326_FIFO_buf2359_lane_26_pack, level_table326_FIFO_buf2359_lane_26);
  auto res_gp_level_table326_1333_merged1217_sm2552_16092 = gp_level_table326_1333_cu1215(level_table326_FIFO_buf2359_lane_26_pack);

  hw_uint<288 > level_table326_FIFO_buf2359_lane_35_pack;
  set_at<0, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_27);
  set_at<32, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_28);
  set_at<64, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_29);
  set_at<96, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_30);
  set_at<128, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_31);
  set_at<160, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_32);
  set_at<192, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_33);
  set_at<224, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_34);
  set_at<256, 288, 32>(level_table326_FIFO_buf2359_lane_35_pack, level_table326_FIFO_buf2359_lane_35);
  auto res_gp_level_table326_1333_merged1217_sm2552_06090 = gp_level_table326_1333_cu1215(level_table326_FIFO_buf2359_lane_35_pack);
  hw_uint<128 > return_value6594;
  set_at<0, 128, 32>(return_value6594, res_gp_level_table326_1333_merged1217_sm2552_36096);
  set_at<32, 128, 32>(return_value6594, res_gp_level_table326_1333_merged1217_sm2552_26094);
  set_at<64, 128, 32>(return_value6594, res_gp_level_table326_1333_merged1217_sm2552_16092);
  set_at<96, 128, 32>(return_value6594, res_gp_level_table326_1333_merged1217_sm2552_06090);
  return return_value6594;

}

hw_uint<64> us_gp_level_table326_3_buf347357_cu6596(hw_uint<32*2>& gp_level_table326_3_buf347_FIFO_buf2127) {
  return gp_level_table326_3_buf347_FIFO_buf2127;
}

hw_uint<64> lp_level_table326_2361_cu6598(hw_uint<32*2>& gp_level_table326_2_buf339_FIFO_buf2111, hw_uint<32*2>& gp_level_table326_3_buf347_us355_FIFO_buf2131) {
  hw_uint<32> gp_level_table326_2_buf339_FIFO_buf2111_lane_0 = gp_level_table326_2_buf339_FIFO_buf2111.extract<0, 31>();
  hw_uint<32> gp_level_table326_2_buf339_FIFO_buf2111_lane_1 = gp_level_table326_2_buf339_FIFO_buf2111.extract<32, 63>();
  hw_uint<32> gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_0 = gp_level_table326_3_buf347_us355_FIFO_buf2131.extract<0, 31>();
  hw_uint<32> gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_1 = gp_level_table326_3_buf347_us355_FIFO_buf2131.extract<32, 63>();

	
  hw_uint<32 > gp_level_table326_2_buf339_FIFO_buf2111_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_FIFO_buf2111_lane_0_pack, gp_level_table326_2_buf339_FIFO_buf2111_lane_0);
  hw_uint<32 > gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_0_pack, gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_0);
  auto res_diff362_sm2555_16106 = llf_diff_float_32(gp_level_table326_2_buf339_FIFO_buf2111_lane_0_pack, gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_0_pack);

  hw_uint<32 > gp_level_table326_2_buf339_FIFO_buf2111_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_FIFO_buf2111_lane_1_pack, gp_level_table326_2_buf339_FIFO_buf2111_lane_1);
  hw_uint<32 > gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_1_pack, gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_1);
  auto res_diff362_sm2555_06104 = llf_diff_float_32(gp_level_table326_2_buf339_FIFO_buf2111_lane_1_pack, gp_level_table326_3_buf347_us355_FIFO_buf2131_lane_1_pack);
  hw_uint<64 > return_value6599;
  set_at<0, 64, 32>(return_value6599, res_diff362_sm2555_16106);
  set_at<32, 64, 32>(return_value6599, res_diff362_sm2555_06104);
  return return_value6599;

}

hw_uint<128> us_gp_level_table326_2_buf339365_cu6601(hw_uint<32*4>& gp_level_table326_2_buf339_FIFO_buf2115) {
  return gp_level_table326_2_buf339_FIFO_buf2115;
}

hw_uint<128> lp_level_table326_1369_cu6603(hw_uint<32*4>& gp_level_table326_1_buf331_FIFO_buf2095, hw_uint<32*4>& gp_level_table326_2_buf339_us363_FIFO_buf2119) {
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2095_lane_0 = gp_level_table326_1_buf331_FIFO_buf2095.extract<0, 31>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2095_lane_1 = gp_level_table326_1_buf331_FIFO_buf2095.extract<32, 63>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2095_lane_2 = gp_level_table326_1_buf331_FIFO_buf2095.extract<64, 95>();
  hw_uint<32> gp_level_table326_1_buf331_FIFO_buf2095_lane_3 = gp_level_table326_1_buf331_FIFO_buf2095.extract<96, 127>();
  hw_uint<32> gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_0 = gp_level_table326_2_buf339_us363_FIFO_buf2119.extract<0, 31>();
  hw_uint<32> gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_1 = gp_level_table326_2_buf339_us363_FIFO_buf2119.extract<32, 63>();
  hw_uint<32> gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_2 = gp_level_table326_2_buf339_us363_FIFO_buf2119.extract<64, 95>();
  hw_uint<32> gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_3 = gp_level_table326_2_buf339_us363_FIFO_buf2119.extract<96, 127>();

	
  hw_uint<32 > gp_level_table326_1_buf331_FIFO_buf2095_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_FIFO_buf2095_lane_0_pack, gp_level_table326_1_buf331_FIFO_buf2095_lane_0);
  hw_uint<32 > gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_0_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_0);
  auto res_diff370_sm2557_36122 = llf_diff_float_32(gp_level_table326_1_buf331_FIFO_buf2095_lane_0_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_0_pack);

  hw_uint<32 > gp_level_table326_1_buf331_FIFO_buf2095_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_FIFO_buf2095_lane_1_pack, gp_level_table326_1_buf331_FIFO_buf2095_lane_1);
  hw_uint<32 > gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_1_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_1);
  auto res_diff370_sm2557_26120 = llf_diff_float_32(gp_level_table326_1_buf331_FIFO_buf2095_lane_1_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_1_pack);

  hw_uint<32 > gp_level_table326_1_buf331_FIFO_buf2095_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_FIFO_buf2095_lane_2_pack, gp_level_table326_1_buf331_FIFO_buf2095_lane_2);
  hw_uint<32 > gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_2_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_2);
  auto res_diff370_sm2557_16118 = llf_diff_float_32(gp_level_table326_1_buf331_FIFO_buf2095_lane_2_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_2_pack);

  hw_uint<32 > gp_level_table326_1_buf331_FIFO_buf2095_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_FIFO_buf2095_lane_3_pack, gp_level_table326_1_buf331_FIFO_buf2095_lane_3);
  hw_uint<32 > gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_3_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_3);
  auto res_diff370_sm2557_06116 = llf_diff_float_32(gp_level_table326_1_buf331_FIFO_buf2095_lane_3_pack, gp_level_table326_2_buf339_us363_FIFO_buf2119_lane_3_pack);
  hw_uint<128 > return_value6604;
  set_at<0, 128, 32>(return_value6604, res_diff370_sm2557_36122);
  set_at<32, 128, 32>(return_value6604, res_diff370_sm2557_26120);
  set_at<64, 128, 32>(return_value6604, res_diff370_sm2557_16118);
  set_at<96, 128, 32>(return_value6604, res_diff370_sm2557_06116);
  return return_value6604;

}

hw_uint<256> us_gp_level_table326_1_buf331373_cu6606(hw_uint<32*8>& gp_level_table326_1_buf331_FIFO_buf2099) {
  return gp_level_table326_1_buf331_FIFO_buf2099;
}

hw_uint<256> lp_level_table326_0377_cu6608(hw_uint<32*8>& gp_level_table326_1_buf331_us371_FIFO_buf2103, hw_uint<32*8>& level_table326_FIFO_buf2363) {
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<0, 31>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<32, 63>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_2 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<64, 95>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_3 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<96, 127>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_4 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<128, 159>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_5 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<160, 191>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_6 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<192, 223>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_7 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<224, 255>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_0 = level_table326_FIFO_buf2363.extract<0, 31>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_1 = level_table326_FIFO_buf2363.extract<32, 63>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_2 = level_table326_FIFO_buf2363.extract<64, 95>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_3 = level_table326_FIFO_buf2363.extract<96, 127>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_4 = level_table326_FIFO_buf2363.extract<128, 159>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_5 = level_table326_FIFO_buf2363.extract<160, 191>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_6 = level_table326_FIFO_buf2363.extract<192, 223>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_7 = level_table326_FIFO_buf2363.extract<224, 255>();

	
  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_0_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_0_pack, level_table326_FIFO_buf2363_lane_0);
  auto res_diff378_sm2559_76154 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0_pack, level_table326_FIFO_buf2363_lane_0_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_1_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_1_pack, level_table326_FIFO_buf2363_lane_1);
  auto res_diff378_sm2559_66152 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1_pack, level_table326_FIFO_buf2363_lane_1_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_2_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_2);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_2_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_2_pack, level_table326_FIFO_buf2363_lane_2);
  auto res_diff378_sm2559_56150 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_2_pack, level_table326_FIFO_buf2363_lane_2_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_3_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_3);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_3_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_3_pack, level_table326_FIFO_buf2363_lane_3);
  auto res_diff378_sm2559_46148 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_3_pack, level_table326_FIFO_buf2363_lane_3_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_4_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_4);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_4_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_4_pack, level_table326_FIFO_buf2363_lane_4);
  auto res_diff378_sm2559_36146 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_4_pack, level_table326_FIFO_buf2363_lane_4_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_5_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_5);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_5_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_5_pack, level_table326_FIFO_buf2363_lane_5);
  auto res_diff378_sm2559_26144 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_5_pack, level_table326_FIFO_buf2363_lane_5_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_6_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_6);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_6_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_6_pack, level_table326_FIFO_buf2363_lane_6);
  auto res_diff378_sm2559_16142 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_6_pack, level_table326_FIFO_buf2363_lane_6_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_7_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_7);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_7_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_7_pack, level_table326_FIFO_buf2363_lane_7);
  auto res_diff378_sm2559_06140 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_7_pack, level_table326_FIFO_buf2363_lane_7_pack);
  hw_uint<256 > return_value6609;
  set_at<0, 256, 32>(return_value6609, res_diff378_sm2559_76154);
  set_at<32, 256, 32>(return_value6609, res_diff378_sm2559_66152);
  set_at<64, 256, 32>(return_value6609, res_diff378_sm2559_56150);
  set_at<96, 256, 32>(return_value6609, res_diff378_sm2559_46148);
  set_at<128, 256, 32>(return_value6609, res_diff378_sm2559_36146);
  set_at<160, 256, 32>(return_value6609, res_diff378_sm2559_26144);
  set_at<192, 256, 32>(return_value6609, res_diff378_sm2559_16142);
  set_at<224, 256, 32>(return_value6609, res_diff378_sm2559_06140);
  return return_value6609;

}

hw_uint<256> pw_math_gray380382_cu6611(hw_uint<32*8>& gray_FIFO_buf2299) {
  hw_uint<32> gray_FIFO_buf2299_lane_0 = gray_FIFO_buf2299.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2299_lane_1 = gray_FIFO_buf2299.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2299_lane_2 = gray_FIFO_buf2299.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2299_lane_3 = gray_FIFO_buf2299.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2299_lane_4 = gray_FIFO_buf2299.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2299_lane_5 = gray_FIFO_buf2299.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2299_lane_6 = gray_FIFO_buf2299.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2299_lane_7 = gray_FIFO_buf2299.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2299_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_0_pack, gray_FIFO_buf2299_lane_0);
  auto res_pw_math_gray380383_sm2560_76170 = llf_level_entry_7(gray_FIFO_buf2299_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_1_pack, gray_FIFO_buf2299_lane_1);
  auto res_pw_math_gray380383_sm2560_66168 = llf_level_entry_7(gray_FIFO_buf2299_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_2_pack, gray_FIFO_buf2299_lane_2);
  auto res_pw_math_gray380383_sm2560_56166 = llf_level_entry_7(gray_FIFO_buf2299_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_3_pack, gray_FIFO_buf2299_lane_3);
  auto res_pw_math_gray380383_sm2560_46164 = llf_level_entry_7(gray_FIFO_buf2299_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_4_pack, gray_FIFO_buf2299_lane_4);
  auto res_pw_math_gray380383_sm2560_36162 = llf_level_entry_7(gray_FIFO_buf2299_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_5_pack, gray_FIFO_buf2299_lane_5);
  auto res_pw_math_gray380383_sm2560_26160 = llf_level_entry_7(gray_FIFO_buf2299_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_6_pack, gray_FIFO_buf2299_lane_6);
  auto res_pw_math_gray380383_sm2560_16158 = llf_level_entry_7(gray_FIFO_buf2299_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_7_pack, gray_FIFO_buf2299_lane_7);
  auto res_pw_math_gray380383_sm2560_06156 = llf_level_entry_7(gray_FIFO_buf2299_lane_7_pack);
  hw_uint<256 > return_value6612;
  set_at<0, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_76170);
  set_at<32, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_66168);
  set_at<64, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_56166);
  set_at<96, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_46164);
  set_at<128, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_36162);
  set_at<160, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_26160);
  set_at<192, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_16158);
  set_at<224, 256, 32>(return_value6612, res_pw_math_gray380383_sm2560_06156);
  return return_value6612;

}

hw_uint<128> gp_level_table379_1386_cu6614(hw_uint<32*36>& level_table379_FIFO_buf2367) {
  hw_uint<32> level_table379_FIFO_buf2367_lane_0 = level_table379_FIFO_buf2367.extract<0, 31>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_1 = level_table379_FIFO_buf2367.extract<32, 63>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_2 = level_table379_FIFO_buf2367.extract<64, 95>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_3 = level_table379_FIFO_buf2367.extract<96, 127>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_4 = level_table379_FIFO_buf2367.extract<128, 159>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_5 = level_table379_FIFO_buf2367.extract<160, 191>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_6 = level_table379_FIFO_buf2367.extract<192, 223>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_7 = level_table379_FIFO_buf2367.extract<224, 255>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_8 = level_table379_FIFO_buf2367.extract<256, 287>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_9 = level_table379_FIFO_buf2367.extract<288, 319>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_10 = level_table379_FIFO_buf2367.extract<320, 351>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_11 = level_table379_FIFO_buf2367.extract<352, 383>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_12 = level_table379_FIFO_buf2367.extract<384, 415>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_13 = level_table379_FIFO_buf2367.extract<416, 447>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_14 = level_table379_FIFO_buf2367.extract<448, 479>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_15 = level_table379_FIFO_buf2367.extract<480, 511>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_16 = level_table379_FIFO_buf2367.extract<512, 543>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_17 = level_table379_FIFO_buf2367.extract<544, 575>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_18 = level_table379_FIFO_buf2367.extract<576, 607>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_19 = level_table379_FIFO_buf2367.extract<608, 639>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_20 = level_table379_FIFO_buf2367.extract<640, 671>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_21 = level_table379_FIFO_buf2367.extract<672, 703>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_22 = level_table379_FIFO_buf2367.extract<704, 735>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_23 = level_table379_FIFO_buf2367.extract<736, 767>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_24 = level_table379_FIFO_buf2367.extract<768, 799>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_25 = level_table379_FIFO_buf2367.extract<800, 831>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_26 = level_table379_FIFO_buf2367.extract<832, 863>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_27 = level_table379_FIFO_buf2367.extract<864, 895>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_28 = level_table379_FIFO_buf2367.extract<896, 927>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_29 = level_table379_FIFO_buf2367.extract<928, 959>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_30 = level_table379_FIFO_buf2367.extract<960, 991>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_31 = level_table379_FIFO_buf2367.extract<992, 1023>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_32 = level_table379_FIFO_buf2367.extract<1024, 1055>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_33 = level_table379_FIFO_buf2367.extract<1056, 1087>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_34 = level_table379_FIFO_buf2367.extract<1088, 1119>();
  hw_uint<32> level_table379_FIFO_buf2367_lane_35 = level_table379_FIFO_buf2367.extract<1120, 1151>();

	
  hw_uint<288 > level_table379_FIFO_buf2367_lane_8_pack;
  set_at<0, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_0);
  set_at<32, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_1);
  set_at<64, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_2);
  set_at<96, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_3);
  set_at<128, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_4);
  set_at<160, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_5);
  set_at<192, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_6);
  set_at<224, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_7);
  set_at<256, 288, 32>(level_table379_FIFO_buf2367_lane_8_pack, level_table379_FIFO_buf2367_lane_8);
  auto res_gp_level_table379_1386_merged1223_sm2561_36178 = gp_level_table379_1386_cu1221(level_table379_FIFO_buf2367_lane_8_pack);

  hw_uint<288 > level_table379_FIFO_buf2367_lane_17_pack;
  set_at<0, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_9);
  set_at<32, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_10);
  set_at<64, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_11);
  set_at<96, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_12);
  set_at<128, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_13);
  set_at<160, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_14);
  set_at<192, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_15);
  set_at<224, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_16);
  set_at<256, 288, 32>(level_table379_FIFO_buf2367_lane_17_pack, level_table379_FIFO_buf2367_lane_17);
  auto res_gp_level_table379_1386_merged1223_sm2561_26176 = gp_level_table379_1386_cu1221(level_table379_FIFO_buf2367_lane_17_pack);

  hw_uint<288 > level_table379_FIFO_buf2367_lane_26_pack;
  set_at<0, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_18);
  set_at<32, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_19);
  set_at<64, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_20);
  set_at<96, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_21);
  set_at<128, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_22);
  set_at<160, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_23);
  set_at<192, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_24);
  set_at<224, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_25);
  set_at<256, 288, 32>(level_table379_FIFO_buf2367_lane_26_pack, level_table379_FIFO_buf2367_lane_26);
  auto res_gp_level_table379_1386_merged1223_sm2561_16174 = gp_level_table379_1386_cu1221(level_table379_FIFO_buf2367_lane_26_pack);

  hw_uint<288 > level_table379_FIFO_buf2367_lane_35_pack;
  set_at<0, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_27);
  set_at<32, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_28);
  set_at<64, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_29);
  set_at<96, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_30);
  set_at<128, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_31);
  set_at<160, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_32);
  set_at<192, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_33);
  set_at<224, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_34);
  set_at<256, 288, 32>(level_table379_FIFO_buf2367_lane_35_pack, level_table379_FIFO_buf2367_lane_35);
  auto res_gp_level_table379_1386_merged1223_sm2561_06172 = gp_level_table379_1386_cu1221(level_table379_FIFO_buf2367_lane_35_pack);
  hw_uint<128 > return_value6615;
  set_at<0, 128, 32>(return_value6615, res_gp_level_table379_1386_merged1223_sm2561_36178);
  set_at<32, 128, 32>(return_value6615, res_gp_level_table379_1386_merged1223_sm2561_26176);
  set_at<64, 128, 32>(return_value6615, res_gp_level_table379_1386_merged1223_sm2561_16174);
  set_at<96, 128, 32>(return_value6615, res_gp_level_table379_1386_merged1223_sm2561_06172);
  return return_value6615;

}

hw_uint<64> gp_level_table379_2394_cu6617(hw_uint<32*18>& gp_level_table379_1_buf384_FIFO_buf2135) {
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_0 = gp_level_table379_1_buf384_FIFO_buf2135.extract<0, 31>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_1 = gp_level_table379_1_buf384_FIFO_buf2135.extract<32, 63>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_2 = gp_level_table379_1_buf384_FIFO_buf2135.extract<64, 95>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_3 = gp_level_table379_1_buf384_FIFO_buf2135.extract<96, 127>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_4 = gp_level_table379_1_buf384_FIFO_buf2135.extract<128, 159>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_5 = gp_level_table379_1_buf384_FIFO_buf2135.extract<160, 191>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_6 = gp_level_table379_1_buf384_FIFO_buf2135.extract<192, 223>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_7 = gp_level_table379_1_buf384_FIFO_buf2135.extract<224, 255>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_8 = gp_level_table379_1_buf384_FIFO_buf2135.extract<256, 287>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_9 = gp_level_table379_1_buf384_FIFO_buf2135.extract<288, 319>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_10 = gp_level_table379_1_buf384_FIFO_buf2135.extract<320, 351>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_11 = gp_level_table379_1_buf384_FIFO_buf2135.extract<352, 383>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_12 = gp_level_table379_1_buf384_FIFO_buf2135.extract<384, 415>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_13 = gp_level_table379_1_buf384_FIFO_buf2135.extract<416, 447>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_14 = gp_level_table379_1_buf384_FIFO_buf2135.extract<448, 479>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_15 = gp_level_table379_1_buf384_FIFO_buf2135.extract<480, 511>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_16 = gp_level_table379_1_buf384_FIFO_buf2135.extract<512, 543>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2135_lane_17 = gp_level_table379_1_buf384_FIFO_buf2135.extract<544, 575>();

	
  hw_uint<288 > gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack;
  set_at<0, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_0);
  set_at<32, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_1);
  set_at<64, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_2);
  set_at<96, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_3);
  set_at<128, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_4);
  set_at<160, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_5);
  set_at<192, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_6);
  set_at<224, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_7);
  set_at<256, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_8);
  auto res_gp_level_table379_2394_merged1226_sm2562_16264 = gp_level_table379_2394_cu1224(gp_level_table379_1_buf384_FIFO_buf2135_lane_8_pack);

  hw_uint<288 > gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack;
  set_at<0, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_9);
  set_at<32, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_10);
  set_at<64, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_11);
  set_at<96, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_12);
  set_at<128, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_13);
  set_at<160, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_14);
  set_at<192, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_15);
  set_at<224, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_16);
  set_at<256, 288, 32>(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack, gp_level_table379_1_buf384_FIFO_buf2135_lane_17);
  auto res_gp_level_table379_2394_merged1226_sm2562_06262 = gp_level_table379_2394_cu1224(gp_level_table379_1_buf384_FIFO_buf2135_lane_17_pack);
  hw_uint<64 > return_value6618;
  set_at<0, 64, 32>(return_value6618, res_gp_level_table379_2394_merged1226_sm2562_16264);
  set_at<32, 64, 32>(return_value6618, res_gp_level_table379_2394_merged1226_sm2562_06262);
  return return_value6618;

}

hw_uint<64> us_gp_level_table379_3_buf400410_cu6620(hw_uint<32*2>& gp_level_table379_3_buf400_FIFO_buf2171) {
  return gp_level_table379_3_buf400_FIFO_buf2171;
}

hw_uint<64> lp_level_table379_2414_cu6622(hw_uint<32*2>& gp_level_table379_2_buf392_FIFO_buf2155, hw_uint<32*2>& gp_level_table379_3_buf400_us408_FIFO_buf2175) {
  hw_uint<32> gp_level_table379_2_buf392_FIFO_buf2155_lane_0 = gp_level_table379_2_buf392_FIFO_buf2155.extract<0, 31>();
  hw_uint<32> gp_level_table379_2_buf392_FIFO_buf2155_lane_1 = gp_level_table379_2_buf392_FIFO_buf2155.extract<32, 63>();
  hw_uint<32> gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_0 = gp_level_table379_3_buf400_us408_FIFO_buf2175.extract<0, 31>();
  hw_uint<32> gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_1 = gp_level_table379_3_buf400_us408_FIFO_buf2175.extract<32, 63>();

	
  hw_uint<32 > gp_level_table379_2_buf392_FIFO_buf2155_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_FIFO_buf2155_lane_0_pack, gp_level_table379_2_buf392_FIFO_buf2155_lane_0);
  hw_uint<32 > gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_0_pack, gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_0);
  auto res_diff415_sm2565_16272 = llf_diff_float_32(gp_level_table379_2_buf392_FIFO_buf2155_lane_0_pack, gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_0_pack);

  hw_uint<32 > gp_level_table379_2_buf392_FIFO_buf2155_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_FIFO_buf2155_lane_1_pack, gp_level_table379_2_buf392_FIFO_buf2155_lane_1);
  hw_uint<32 > gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_1_pack, gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_1);
  auto res_diff415_sm2565_06270 = llf_diff_float_32(gp_level_table379_2_buf392_FIFO_buf2155_lane_1_pack, gp_level_table379_3_buf400_us408_FIFO_buf2175_lane_1_pack);
  hw_uint<64 > return_value6623;
  set_at<0, 64, 32>(return_value6623, res_diff415_sm2565_16272);
  set_at<32, 64, 32>(return_value6623, res_diff415_sm2565_06270);
  return return_value6623;

}

hw_uint<128> us_gp_level_table379_2_buf392418_cu6625(hw_uint<32*4>& gp_level_table379_2_buf392_FIFO_buf2159) {
  return gp_level_table379_2_buf392_FIFO_buf2159;
}

hw_uint<128> lp_level_table379_1422_cu6627(hw_uint<32*4>& gp_level_table379_1_buf384_FIFO_buf2139, hw_uint<32*4>& gp_level_table379_2_buf392_us416_FIFO_buf2163) {
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2139_lane_0 = gp_level_table379_1_buf384_FIFO_buf2139.extract<0, 31>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2139_lane_1 = gp_level_table379_1_buf384_FIFO_buf2139.extract<32, 63>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2139_lane_2 = gp_level_table379_1_buf384_FIFO_buf2139.extract<64, 95>();
  hw_uint<32> gp_level_table379_1_buf384_FIFO_buf2139_lane_3 = gp_level_table379_1_buf384_FIFO_buf2139.extract<96, 127>();
  hw_uint<32> gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_0 = gp_level_table379_2_buf392_us416_FIFO_buf2163.extract<0, 31>();
  hw_uint<32> gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_1 = gp_level_table379_2_buf392_us416_FIFO_buf2163.extract<32, 63>();
  hw_uint<32> gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_2 = gp_level_table379_2_buf392_us416_FIFO_buf2163.extract<64, 95>();
  hw_uint<32> gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_3 = gp_level_table379_2_buf392_us416_FIFO_buf2163.extract<96, 127>();

	
  hw_uint<32 > gp_level_table379_1_buf384_FIFO_buf2139_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_FIFO_buf2139_lane_0_pack, gp_level_table379_1_buf384_FIFO_buf2139_lane_0);
  hw_uint<32 > gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_0_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_0);
  auto res_diff423_sm2567_36280 = llf_diff_float_32(gp_level_table379_1_buf384_FIFO_buf2139_lane_0_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_0_pack);

  hw_uint<32 > gp_level_table379_1_buf384_FIFO_buf2139_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_FIFO_buf2139_lane_1_pack, gp_level_table379_1_buf384_FIFO_buf2139_lane_1);
  hw_uint<32 > gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_1_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_1);
  auto res_diff423_sm2567_26278 = llf_diff_float_32(gp_level_table379_1_buf384_FIFO_buf2139_lane_1_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_1_pack);

  hw_uint<32 > gp_level_table379_1_buf384_FIFO_buf2139_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_FIFO_buf2139_lane_2_pack, gp_level_table379_1_buf384_FIFO_buf2139_lane_2);
  hw_uint<32 > gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_2_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_2);
  auto res_diff423_sm2567_16276 = llf_diff_float_32(gp_level_table379_1_buf384_FIFO_buf2139_lane_2_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_2_pack);

  hw_uint<32 > gp_level_table379_1_buf384_FIFO_buf2139_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_FIFO_buf2139_lane_3_pack, gp_level_table379_1_buf384_FIFO_buf2139_lane_3);
  hw_uint<32 > gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_3_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_3);
  auto res_diff423_sm2567_06274 = llf_diff_float_32(gp_level_table379_1_buf384_FIFO_buf2139_lane_3_pack, gp_level_table379_2_buf392_us416_FIFO_buf2163_lane_3_pack);
  hw_uint<128 > return_value6628;
  set_at<0, 128, 32>(return_value6628, res_diff423_sm2567_36280);
  set_at<32, 128, 32>(return_value6628, res_diff423_sm2567_26278);
  set_at<64, 128, 32>(return_value6628, res_diff423_sm2567_16276);
  set_at<96, 128, 32>(return_value6628, res_diff423_sm2567_06274);
  return return_value6628;

}

hw_uint<256> us_gp_level_table379_1_buf384426_cu6630(hw_uint<32*8>& gp_level_table379_1_buf384_FIFO_buf2143) {
  return gp_level_table379_1_buf384_FIFO_buf2143;
}

hw_uint<256> lp_level_table379_0430_cu6632(hw_uint<32*8>& gp_level_table379_1_buf384_us424_FIFO_buf2147, hw_uint<32*8>& level_table379_FIFO_buf2371) {
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<0, 31>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<32, 63>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_2 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<64, 95>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_3 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<96, 127>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_4 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<128, 159>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_5 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<160, 191>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_6 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<192, 223>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_7 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<224, 255>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_0 = level_table379_FIFO_buf2371.extract<0, 31>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_1 = level_table379_FIFO_buf2371.extract<32, 63>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_2 = level_table379_FIFO_buf2371.extract<64, 95>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_3 = level_table379_FIFO_buf2371.extract<96, 127>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_4 = level_table379_FIFO_buf2371.extract<128, 159>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_5 = level_table379_FIFO_buf2371.extract<160, 191>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_6 = level_table379_FIFO_buf2371.extract<192, 223>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_7 = level_table379_FIFO_buf2371.extract<224, 255>();

	
  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_0_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_0_pack, level_table379_FIFO_buf2371_lane_0);
  auto res_diff431_sm2569_76312 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0_pack, level_table379_FIFO_buf2371_lane_0_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_1_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_1_pack, level_table379_FIFO_buf2371_lane_1);
  auto res_diff431_sm2569_66310 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1_pack, level_table379_FIFO_buf2371_lane_1_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_2_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_2);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_2_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_2_pack, level_table379_FIFO_buf2371_lane_2);
  auto res_diff431_sm2569_56308 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_2_pack, level_table379_FIFO_buf2371_lane_2_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_3_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_3);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_3_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_3_pack, level_table379_FIFO_buf2371_lane_3);
  auto res_diff431_sm2569_46306 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_3_pack, level_table379_FIFO_buf2371_lane_3_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_4_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_4);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_4_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_4_pack, level_table379_FIFO_buf2371_lane_4);
  auto res_diff431_sm2569_36304 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_4_pack, level_table379_FIFO_buf2371_lane_4_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_5_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_5);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_5_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_5_pack, level_table379_FIFO_buf2371_lane_5);
  auto res_diff431_sm2569_26302 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_5_pack, level_table379_FIFO_buf2371_lane_5_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_6_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_6);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_6_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_6_pack, level_table379_FIFO_buf2371_lane_6);
  auto res_diff431_sm2569_16300 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_6_pack, level_table379_FIFO_buf2371_lane_6_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_7_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_7);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_7_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_7_pack, level_table379_FIFO_buf2371_lane_7);
  auto res_diff431_sm2569_06298 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_7_pack, level_table379_FIFO_buf2371_lane_7_pack);
  hw_uint<256 > return_value6633;
  set_at<0, 256, 32>(return_value6633, res_diff431_sm2569_76312);
  set_at<32, 256, 32>(return_value6633, res_diff431_sm2569_66310);
  set_at<64, 256, 32>(return_value6633, res_diff431_sm2569_56308);
  set_at<96, 256, 32>(return_value6633, res_diff431_sm2569_46306);
  set_at<128, 256, 32>(return_value6633, res_diff431_sm2569_36304);
  set_at<160, 256, 32>(return_value6633, res_diff431_sm2569_26302);
  set_at<192, 256, 32>(return_value6633, res_diff431_sm2569_16300);
  set_at<224, 256, 32>(return_value6633, res_diff431_sm2569_06298);
  return return_value6633;

}

hw_uint<128> gp_gray_1434_cu6635(hw_uint<32*36>& gray_FIFO_buf2267) {
  hw_uint<32> gray_FIFO_buf2267_lane_0 = gray_FIFO_buf2267.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2267_lane_1 = gray_FIFO_buf2267.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2267_lane_2 = gray_FIFO_buf2267.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2267_lane_3 = gray_FIFO_buf2267.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2267_lane_4 = gray_FIFO_buf2267.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2267_lane_5 = gray_FIFO_buf2267.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2267_lane_6 = gray_FIFO_buf2267.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2267_lane_7 = gray_FIFO_buf2267.extract<224, 255>();
  hw_uint<32> gray_FIFO_buf2267_lane_8 = gray_FIFO_buf2267.extract<256, 287>();
  hw_uint<32> gray_FIFO_buf2267_lane_9 = gray_FIFO_buf2267.extract<288, 319>();
  hw_uint<32> gray_FIFO_buf2267_lane_10 = gray_FIFO_buf2267.extract<320, 351>();
  hw_uint<32> gray_FIFO_buf2267_lane_11 = gray_FIFO_buf2267.extract<352, 383>();
  hw_uint<32> gray_FIFO_buf2267_lane_12 = gray_FIFO_buf2267.extract<384, 415>();
  hw_uint<32> gray_FIFO_buf2267_lane_13 = gray_FIFO_buf2267.extract<416, 447>();
  hw_uint<32> gray_FIFO_buf2267_lane_14 = gray_FIFO_buf2267.extract<448, 479>();
  hw_uint<32> gray_FIFO_buf2267_lane_15 = gray_FIFO_buf2267.extract<480, 511>();
  hw_uint<32> gray_FIFO_buf2267_lane_16 = gray_FIFO_buf2267.extract<512, 543>();
  hw_uint<32> gray_FIFO_buf2267_lane_17 = gray_FIFO_buf2267.extract<544, 575>();
  hw_uint<32> gray_FIFO_buf2267_lane_18 = gray_FIFO_buf2267.extract<576, 607>();
  hw_uint<32> gray_FIFO_buf2267_lane_19 = gray_FIFO_buf2267.extract<608, 639>();
  hw_uint<32> gray_FIFO_buf2267_lane_20 = gray_FIFO_buf2267.extract<640, 671>();
  hw_uint<32> gray_FIFO_buf2267_lane_21 = gray_FIFO_buf2267.extract<672, 703>();
  hw_uint<32> gray_FIFO_buf2267_lane_22 = gray_FIFO_buf2267.extract<704, 735>();
  hw_uint<32> gray_FIFO_buf2267_lane_23 = gray_FIFO_buf2267.extract<736, 767>();
  hw_uint<32> gray_FIFO_buf2267_lane_24 = gray_FIFO_buf2267.extract<768, 799>();
  hw_uint<32> gray_FIFO_buf2267_lane_25 = gray_FIFO_buf2267.extract<800, 831>();
  hw_uint<32> gray_FIFO_buf2267_lane_26 = gray_FIFO_buf2267.extract<832, 863>();
  hw_uint<32> gray_FIFO_buf2267_lane_27 = gray_FIFO_buf2267.extract<864, 895>();
  hw_uint<32> gray_FIFO_buf2267_lane_28 = gray_FIFO_buf2267.extract<896, 927>();
  hw_uint<32> gray_FIFO_buf2267_lane_29 = gray_FIFO_buf2267.extract<928, 959>();
  hw_uint<32> gray_FIFO_buf2267_lane_30 = gray_FIFO_buf2267.extract<960, 991>();
  hw_uint<32> gray_FIFO_buf2267_lane_31 = gray_FIFO_buf2267.extract<992, 1023>();
  hw_uint<32> gray_FIFO_buf2267_lane_32 = gray_FIFO_buf2267.extract<1024, 1055>();
  hw_uint<32> gray_FIFO_buf2267_lane_33 = gray_FIFO_buf2267.extract<1056, 1087>();
  hw_uint<32> gray_FIFO_buf2267_lane_34 = gray_FIFO_buf2267.extract<1088, 1119>();
  hw_uint<32> gray_FIFO_buf2267_lane_35 = gray_FIFO_buf2267.extract<1120, 1151>();

	
  hw_uint<288 > gray_FIFO_buf2267_lane_8_pack;
  set_at<0, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_0);
  set_at<32, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_1);
  set_at<64, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_2);
  set_at<96, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_3);
  set_at<128, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_4);
  set_at<160, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_5);
  set_at<192, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_6);
  set_at<224, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_7);
  set_at<256, 288, 32>(gray_FIFO_buf2267_lane_8_pack, gray_FIFO_buf2267_lane_8);
  auto res_gp_gray_1434_merged1232_sm2570_36320 = gp_gray_1434_cu1230(gray_FIFO_buf2267_lane_8_pack);

  hw_uint<288 > gray_FIFO_buf2267_lane_17_pack;
  set_at<0, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_9);
  set_at<32, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_10);
  set_at<64, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_11);
  set_at<96, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_12);
  set_at<128, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_13);
  set_at<160, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_14);
  set_at<192, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_15);
  set_at<224, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_16);
  set_at<256, 288, 32>(gray_FIFO_buf2267_lane_17_pack, gray_FIFO_buf2267_lane_17);
  auto res_gp_gray_1434_merged1232_sm2570_26318 = gp_gray_1434_cu1230(gray_FIFO_buf2267_lane_17_pack);

  hw_uint<288 > gray_FIFO_buf2267_lane_26_pack;
  set_at<0, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_18);
  set_at<32, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_19);
  set_at<64, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_20);
  set_at<96, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_21);
  set_at<128, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_22);
  set_at<160, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_23);
  set_at<192, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_24);
  set_at<224, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_25);
  set_at<256, 288, 32>(gray_FIFO_buf2267_lane_26_pack, gray_FIFO_buf2267_lane_26);
  auto res_gp_gray_1434_merged1232_sm2570_16316 = gp_gray_1434_cu1230(gray_FIFO_buf2267_lane_26_pack);

  hw_uint<288 > gray_FIFO_buf2267_lane_35_pack;
  set_at<0, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_27);
  set_at<32, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_28);
  set_at<64, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_29);
  set_at<96, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_30);
  set_at<128, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_31);
  set_at<160, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_32);
  set_at<192, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_33);
  set_at<224, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_34);
  set_at<256, 288, 32>(gray_FIFO_buf2267_lane_35_pack, gray_FIFO_buf2267_lane_35);
  auto res_gp_gray_1434_merged1232_sm2570_06314 = gp_gray_1434_cu1230(gray_FIFO_buf2267_lane_35_pack);
  hw_uint<128 > return_value6636;
  set_at<0, 128, 32>(return_value6636, res_gp_gray_1434_merged1232_sm2570_36320);
  set_at<32, 128, 32>(return_value6636, res_gp_gray_1434_merged1232_sm2570_26318);
  set_at<64, 128, 32>(return_value6636, res_gp_gray_1434_merged1232_sm2570_16316);
  set_at<96, 128, 32>(return_value6636, res_gp_gray_1434_merged1232_sm2570_06314);
  return return_value6636;

}

hw_uint<64> gp_gray_2442_cu6638(hw_uint<32*18>& gp_gray_1_buf432_FIFO_buf1867) {
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_0 = gp_gray_1_buf432_FIFO_buf1867.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_1 = gp_gray_1_buf432_FIFO_buf1867.extract<32, 63>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_2 = gp_gray_1_buf432_FIFO_buf1867.extract<64, 95>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_3 = gp_gray_1_buf432_FIFO_buf1867.extract<96, 127>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_4 = gp_gray_1_buf432_FIFO_buf1867.extract<128, 159>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_5 = gp_gray_1_buf432_FIFO_buf1867.extract<160, 191>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_6 = gp_gray_1_buf432_FIFO_buf1867.extract<192, 223>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_7 = gp_gray_1_buf432_FIFO_buf1867.extract<224, 255>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_8 = gp_gray_1_buf432_FIFO_buf1867.extract<256, 287>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_9 = gp_gray_1_buf432_FIFO_buf1867.extract<288, 319>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_10 = gp_gray_1_buf432_FIFO_buf1867.extract<320, 351>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_11 = gp_gray_1_buf432_FIFO_buf1867.extract<352, 383>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_12 = gp_gray_1_buf432_FIFO_buf1867.extract<384, 415>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_13 = gp_gray_1_buf432_FIFO_buf1867.extract<416, 447>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_14 = gp_gray_1_buf432_FIFO_buf1867.extract<448, 479>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_15 = gp_gray_1_buf432_FIFO_buf1867.extract<480, 511>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_16 = gp_gray_1_buf432_FIFO_buf1867.extract<512, 543>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1867_lane_17 = gp_gray_1_buf432_FIFO_buf1867.extract<544, 575>();

	
  hw_uint<288 > gp_gray_1_buf432_FIFO_buf1867_lane_8_pack;
  set_at<0, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_0);
  set_at<32, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_1);
  set_at<64, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_2);
  set_at<96, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_3);
  set_at<128, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_4);
  set_at<160, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_5);
  set_at<192, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_6);
  set_at<224, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_7);
  set_at<256, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack, gp_gray_1_buf432_FIFO_buf1867_lane_8);
  auto res_gp_gray_2442_merged1235_sm2571_16324 = gp_gray_2442_cu1233(gp_gray_1_buf432_FIFO_buf1867_lane_8_pack);

  hw_uint<288 > gp_gray_1_buf432_FIFO_buf1867_lane_17_pack;
  set_at<0, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_9);
  set_at<32, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_10);
  set_at<64, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_11);
  set_at<96, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_12);
  set_at<128, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_13);
  set_at<160, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_14);
  set_at<192, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_15);
  set_at<224, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_16);
  set_at<256, 288, 32>(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack, gp_gray_1_buf432_FIFO_buf1867_lane_17);
  auto res_gp_gray_2442_merged1235_sm2571_06322 = gp_gray_2442_cu1233(gp_gray_1_buf432_FIFO_buf1867_lane_17_pack);
  hw_uint<64 > return_value6639;
  set_at<0, 64, 32>(return_value6639, res_gp_gray_2442_merged1235_sm2571_16324);
  set_at<32, 64, 32>(return_value6639, res_gp_gray_2442_merged1235_sm2571_06322);
  return return_value6639;

}

hw_uint<256> gray_interpolate_lp457459_cu6641(hw_uint<32*8>& gray_FIFO_buf2271, hw_uint<32*8>& lp_level_table114_0_buf163_FIFO_buf2391, hw_uint<32*8>& lp_level_table167_0_buf216_FIFO_buf2403, hw_uint<32*8>& lp_level_table220_0_buf269_FIFO_buf2415, hw_uint<32*8>& lp_level_table273_0_buf322_FIFO_buf2427, hw_uint<32*8>& lp_level_table326_0_buf375_FIFO_buf2439, hw_uint<32*8>& lp_level_table379_0_buf428_FIFO_buf2451, hw_uint<32*8>& lp_level_table61_0_buf110_FIFO_buf2463, hw_uint<32*8>& lp_level_table8_0_buf57_FIFO_buf2475) {
  hw_uint<32> gray_FIFO_buf2271_lane_0 = gray_FIFO_buf2271.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2271_lane_1 = gray_FIFO_buf2271.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2271_lane_2 = gray_FIFO_buf2271.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2271_lane_3 = gray_FIFO_buf2271.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2271_lane_4 = gray_FIFO_buf2271.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2271_lane_5 = gray_FIFO_buf2271.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2271_lane_6 = gray_FIFO_buf2271.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2271_lane_7 = gray_FIFO_buf2271.extract<224, 255>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_0 = lp_level_table114_0_buf163_FIFO_buf2391.extract<0, 31>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_1 = lp_level_table114_0_buf163_FIFO_buf2391.extract<32, 63>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_2 = lp_level_table114_0_buf163_FIFO_buf2391.extract<64, 95>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_3 = lp_level_table114_0_buf163_FIFO_buf2391.extract<96, 127>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_4 = lp_level_table114_0_buf163_FIFO_buf2391.extract<128, 159>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_5 = lp_level_table114_0_buf163_FIFO_buf2391.extract<160, 191>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_6 = lp_level_table114_0_buf163_FIFO_buf2391.extract<192, 223>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_7 = lp_level_table114_0_buf163_FIFO_buf2391.extract<224, 255>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_0 = lp_level_table167_0_buf216_FIFO_buf2403.extract<0, 31>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_1 = lp_level_table167_0_buf216_FIFO_buf2403.extract<32, 63>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_2 = lp_level_table167_0_buf216_FIFO_buf2403.extract<64, 95>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_3 = lp_level_table167_0_buf216_FIFO_buf2403.extract<96, 127>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_4 = lp_level_table167_0_buf216_FIFO_buf2403.extract<128, 159>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_5 = lp_level_table167_0_buf216_FIFO_buf2403.extract<160, 191>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_6 = lp_level_table167_0_buf216_FIFO_buf2403.extract<192, 223>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_7 = lp_level_table167_0_buf216_FIFO_buf2403.extract<224, 255>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_0 = lp_level_table220_0_buf269_FIFO_buf2415.extract<0, 31>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_1 = lp_level_table220_0_buf269_FIFO_buf2415.extract<32, 63>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_2 = lp_level_table220_0_buf269_FIFO_buf2415.extract<64, 95>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_3 = lp_level_table220_0_buf269_FIFO_buf2415.extract<96, 127>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_4 = lp_level_table220_0_buf269_FIFO_buf2415.extract<128, 159>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_5 = lp_level_table220_0_buf269_FIFO_buf2415.extract<160, 191>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_6 = lp_level_table220_0_buf269_FIFO_buf2415.extract<192, 223>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_7 = lp_level_table220_0_buf269_FIFO_buf2415.extract<224, 255>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_0 = lp_level_table273_0_buf322_FIFO_buf2427.extract<0, 31>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_1 = lp_level_table273_0_buf322_FIFO_buf2427.extract<32, 63>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_2 = lp_level_table273_0_buf322_FIFO_buf2427.extract<64, 95>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_3 = lp_level_table273_0_buf322_FIFO_buf2427.extract<96, 127>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_4 = lp_level_table273_0_buf322_FIFO_buf2427.extract<128, 159>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_5 = lp_level_table273_0_buf322_FIFO_buf2427.extract<160, 191>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_6 = lp_level_table273_0_buf322_FIFO_buf2427.extract<192, 223>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_7 = lp_level_table273_0_buf322_FIFO_buf2427.extract<224, 255>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_0 = lp_level_table326_0_buf375_FIFO_buf2439.extract<0, 31>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_1 = lp_level_table326_0_buf375_FIFO_buf2439.extract<32, 63>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_2 = lp_level_table326_0_buf375_FIFO_buf2439.extract<64, 95>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_3 = lp_level_table326_0_buf375_FIFO_buf2439.extract<96, 127>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_4 = lp_level_table326_0_buf375_FIFO_buf2439.extract<128, 159>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_5 = lp_level_table326_0_buf375_FIFO_buf2439.extract<160, 191>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_6 = lp_level_table326_0_buf375_FIFO_buf2439.extract<192, 223>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_7 = lp_level_table326_0_buf375_FIFO_buf2439.extract<224, 255>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_0 = lp_level_table379_0_buf428_FIFO_buf2451.extract<0, 31>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_1 = lp_level_table379_0_buf428_FIFO_buf2451.extract<32, 63>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_2 = lp_level_table379_0_buf428_FIFO_buf2451.extract<64, 95>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_3 = lp_level_table379_0_buf428_FIFO_buf2451.extract<96, 127>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_4 = lp_level_table379_0_buf428_FIFO_buf2451.extract<128, 159>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_5 = lp_level_table379_0_buf428_FIFO_buf2451.extract<160, 191>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_6 = lp_level_table379_0_buf428_FIFO_buf2451.extract<192, 223>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_7 = lp_level_table379_0_buf428_FIFO_buf2451.extract<224, 255>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_0 = lp_level_table61_0_buf110_FIFO_buf2463.extract<0, 31>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_1 = lp_level_table61_0_buf110_FIFO_buf2463.extract<32, 63>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_2 = lp_level_table61_0_buf110_FIFO_buf2463.extract<64, 95>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_3 = lp_level_table61_0_buf110_FIFO_buf2463.extract<96, 127>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_4 = lp_level_table61_0_buf110_FIFO_buf2463.extract<128, 159>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_5 = lp_level_table61_0_buf110_FIFO_buf2463.extract<160, 191>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_6 = lp_level_table61_0_buf110_FIFO_buf2463.extract<192, 223>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_7 = lp_level_table61_0_buf110_FIFO_buf2463.extract<224, 255>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_0 = lp_level_table8_0_buf57_FIFO_buf2475.extract<0, 31>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_1 = lp_level_table8_0_buf57_FIFO_buf2475.extract<32, 63>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_2 = lp_level_table8_0_buf57_FIFO_buf2475.extract<64, 95>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_3 = lp_level_table8_0_buf57_FIFO_buf2475.extract<96, 127>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_4 = lp_level_table8_0_buf57_FIFO_buf2475.extract<128, 159>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_5 = lp_level_table8_0_buf57_FIFO_buf2475.extract<160, 191>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_6 = lp_level_table8_0_buf57_FIFO_buf2475.extract<192, 223>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_7 = lp_level_table8_0_buf57_FIFO_buf2475.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2271_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_0_pack, gray_FIFO_buf2271_lane_0);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_0_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_0);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_0_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_0);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_0_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_0);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_0_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_0);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_0_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_0);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_0_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_0);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_0_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_0);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_0_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_0);
  auto res_interp460_sm2573_76342 = llf_interpolate_float(gray_FIFO_buf2271_lane_0_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_0_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_0_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_0_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_0_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_0_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_0_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_0_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_1_pack, gray_FIFO_buf2271_lane_1);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_1_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_1);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_1_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_1);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_1_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_1);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_1_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_1);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_1_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_1);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_1_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_1);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_1_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_1);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_1_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_1);
  auto res_interp460_sm2573_66340 = llf_interpolate_float(gray_FIFO_buf2271_lane_1_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_1_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_1_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_1_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_1_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_1_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_1_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_1_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_2_pack, gray_FIFO_buf2271_lane_2);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_2_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_2);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_2_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_2);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_2_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_2);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_2_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_2);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_2_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_2);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_2_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_2);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_2_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_2);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_2_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_2);
  auto res_interp460_sm2573_56338 = llf_interpolate_float(gray_FIFO_buf2271_lane_2_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_2_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_2_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_2_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_2_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_2_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_2_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_2_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_3_pack, gray_FIFO_buf2271_lane_3);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_3_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_3);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_3_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_3);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_3_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_3);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_3_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_3);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_3_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_3);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_3_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_3);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_3_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_3);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_3_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_3);
  auto res_interp460_sm2573_46336 = llf_interpolate_float(gray_FIFO_buf2271_lane_3_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_3_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_3_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_3_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_3_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_3_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_3_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_3_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_4_pack, gray_FIFO_buf2271_lane_4);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_4_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_4);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_4_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_4);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_4_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_4);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_4_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_4);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_4_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_4);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_4_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_4);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_4_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_4);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_4_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_4_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_4);
  auto res_interp460_sm2573_36334 = llf_interpolate_float(gray_FIFO_buf2271_lane_4_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_4_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_4_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_4_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_4_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_4_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_4_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_4_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_5_pack, gray_FIFO_buf2271_lane_5);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_5_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_5);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_5_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_5);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_5_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_5);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_5_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_5);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_5_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_5);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_5_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_5);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_5_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_5);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_5_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_5_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_5);
  auto res_interp460_sm2573_26332 = llf_interpolate_float(gray_FIFO_buf2271_lane_5_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_5_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_5_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_5_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_5_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_5_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_5_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_5_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_6_pack, gray_FIFO_buf2271_lane_6);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_6_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_6);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_6_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_6);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_6_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_6);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_6_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_6);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_6_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_6);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_6_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_6);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_6_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_6);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_6_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_6_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_6);
  auto res_interp460_sm2573_16330 = llf_interpolate_float(gray_FIFO_buf2271_lane_6_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_6_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_6_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_6_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_6_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_6_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_6_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_6_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_7_pack, gray_FIFO_buf2271_lane_7);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_7_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_7);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_7_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_7);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_7_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_7);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_7_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_7);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_7_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_7);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_7_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_7);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_7_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_7);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_7_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_7_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_7);
  auto res_interp460_sm2573_06328 = llf_interpolate_float(gray_FIFO_buf2271_lane_7_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_7_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_7_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_7_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_7_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_7_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_7_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_7_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_7_pack);
  hw_uint<256 > return_value6642;
  set_at<0, 256, 32>(return_value6642, res_interp460_sm2573_76342);
  set_at<32, 256, 32>(return_value6642, res_interp460_sm2573_66340);
  set_at<64, 256, 32>(return_value6642, res_interp460_sm2573_56338);
  set_at<96, 256, 32>(return_value6642, res_interp460_sm2573_46336);
  set_at<128, 256, 32>(return_value6642, res_interp460_sm2573_36334);
  set_at<160, 256, 32>(return_value6642, res_interp460_sm2573_26332);
  set_at<192, 256, 32>(return_value6642, res_interp460_sm2573_16330);
  set_at<224, 256, 32>(return_value6642, res_interp460_sm2573_06328);
  return return_value6642;

}

hw_uint<128> gp_gray_1_buf432_interpolate_lp462464_cu6644(hw_uint<32*4>& gp_gray_1_buf432_FIFO_buf1863, hw_uint<32*4>& lp_level_table114_1_buf155_FIFO_buf2395, hw_uint<32*4>& lp_level_table167_1_buf208_FIFO_buf2407, hw_uint<32*4>& lp_level_table220_1_buf261_FIFO_buf2419, hw_uint<32*4>& lp_level_table273_1_buf314_FIFO_buf2431, hw_uint<32*4>& lp_level_table326_1_buf367_FIFO_buf2443, hw_uint<32*4>& lp_level_table379_1_buf420_FIFO_buf2455, hw_uint<32*4>& lp_level_table61_1_buf102_FIFO_buf2467, hw_uint<32*4>& lp_level_table8_1_buf49_FIFO_buf2479) {
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1863_lane_0 = gp_gray_1_buf432_FIFO_buf1863.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1863_lane_1 = gp_gray_1_buf432_FIFO_buf1863.extract<32, 63>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1863_lane_2 = gp_gray_1_buf432_FIFO_buf1863.extract<64, 95>();
  hw_uint<32> gp_gray_1_buf432_FIFO_buf1863_lane_3 = gp_gray_1_buf432_FIFO_buf1863.extract<96, 127>();
  hw_uint<32> lp_level_table114_1_buf155_FIFO_buf2395_lane_0 = lp_level_table114_1_buf155_FIFO_buf2395.extract<0, 31>();
  hw_uint<32> lp_level_table114_1_buf155_FIFO_buf2395_lane_1 = lp_level_table114_1_buf155_FIFO_buf2395.extract<32, 63>();
  hw_uint<32> lp_level_table114_1_buf155_FIFO_buf2395_lane_2 = lp_level_table114_1_buf155_FIFO_buf2395.extract<64, 95>();
  hw_uint<32> lp_level_table114_1_buf155_FIFO_buf2395_lane_3 = lp_level_table114_1_buf155_FIFO_buf2395.extract<96, 127>();
  hw_uint<32> lp_level_table167_1_buf208_FIFO_buf2407_lane_0 = lp_level_table167_1_buf208_FIFO_buf2407.extract<0, 31>();
  hw_uint<32> lp_level_table167_1_buf208_FIFO_buf2407_lane_1 = lp_level_table167_1_buf208_FIFO_buf2407.extract<32, 63>();
  hw_uint<32> lp_level_table167_1_buf208_FIFO_buf2407_lane_2 = lp_level_table167_1_buf208_FIFO_buf2407.extract<64, 95>();
  hw_uint<32> lp_level_table167_1_buf208_FIFO_buf2407_lane_3 = lp_level_table167_1_buf208_FIFO_buf2407.extract<96, 127>();
  hw_uint<32> lp_level_table220_1_buf261_FIFO_buf2419_lane_0 = lp_level_table220_1_buf261_FIFO_buf2419.extract<0, 31>();
  hw_uint<32> lp_level_table220_1_buf261_FIFO_buf2419_lane_1 = lp_level_table220_1_buf261_FIFO_buf2419.extract<32, 63>();
  hw_uint<32> lp_level_table220_1_buf261_FIFO_buf2419_lane_2 = lp_level_table220_1_buf261_FIFO_buf2419.extract<64, 95>();
  hw_uint<32> lp_level_table220_1_buf261_FIFO_buf2419_lane_3 = lp_level_table220_1_buf261_FIFO_buf2419.extract<96, 127>();
  hw_uint<32> lp_level_table273_1_buf314_FIFO_buf2431_lane_0 = lp_level_table273_1_buf314_FIFO_buf2431.extract<0, 31>();
  hw_uint<32> lp_level_table273_1_buf314_FIFO_buf2431_lane_1 = lp_level_table273_1_buf314_FIFO_buf2431.extract<32, 63>();
  hw_uint<32> lp_level_table273_1_buf314_FIFO_buf2431_lane_2 = lp_level_table273_1_buf314_FIFO_buf2431.extract<64, 95>();
  hw_uint<32> lp_level_table273_1_buf314_FIFO_buf2431_lane_3 = lp_level_table273_1_buf314_FIFO_buf2431.extract<96, 127>();
  hw_uint<32> lp_level_table326_1_buf367_FIFO_buf2443_lane_0 = lp_level_table326_1_buf367_FIFO_buf2443.extract<0, 31>();
  hw_uint<32> lp_level_table326_1_buf367_FIFO_buf2443_lane_1 = lp_level_table326_1_buf367_FIFO_buf2443.extract<32, 63>();
  hw_uint<32> lp_level_table326_1_buf367_FIFO_buf2443_lane_2 = lp_level_table326_1_buf367_FIFO_buf2443.extract<64, 95>();
  hw_uint<32> lp_level_table326_1_buf367_FIFO_buf2443_lane_3 = lp_level_table326_1_buf367_FIFO_buf2443.extract<96, 127>();
  hw_uint<32> lp_level_table379_1_buf420_FIFO_buf2455_lane_0 = lp_level_table379_1_buf420_FIFO_buf2455.extract<0, 31>();
  hw_uint<32> lp_level_table379_1_buf420_FIFO_buf2455_lane_1 = lp_level_table379_1_buf420_FIFO_buf2455.extract<32, 63>();
  hw_uint<32> lp_level_table379_1_buf420_FIFO_buf2455_lane_2 = lp_level_table379_1_buf420_FIFO_buf2455.extract<64, 95>();
  hw_uint<32> lp_level_table379_1_buf420_FIFO_buf2455_lane_3 = lp_level_table379_1_buf420_FIFO_buf2455.extract<96, 127>();
  hw_uint<32> lp_level_table61_1_buf102_FIFO_buf2467_lane_0 = lp_level_table61_1_buf102_FIFO_buf2467.extract<0, 31>();
  hw_uint<32> lp_level_table61_1_buf102_FIFO_buf2467_lane_1 = lp_level_table61_1_buf102_FIFO_buf2467.extract<32, 63>();
  hw_uint<32> lp_level_table61_1_buf102_FIFO_buf2467_lane_2 = lp_level_table61_1_buf102_FIFO_buf2467.extract<64, 95>();
  hw_uint<32> lp_level_table61_1_buf102_FIFO_buf2467_lane_3 = lp_level_table61_1_buf102_FIFO_buf2467.extract<96, 127>();
  hw_uint<32> lp_level_table8_1_buf49_FIFO_buf2479_lane_0 = lp_level_table8_1_buf49_FIFO_buf2479.extract<0, 31>();
  hw_uint<32> lp_level_table8_1_buf49_FIFO_buf2479_lane_1 = lp_level_table8_1_buf49_FIFO_buf2479.extract<32, 63>();
  hw_uint<32> lp_level_table8_1_buf49_FIFO_buf2479_lane_2 = lp_level_table8_1_buf49_FIFO_buf2479.extract<64, 95>();
  hw_uint<32> lp_level_table8_1_buf49_FIFO_buf2479_lane_3 = lp_level_table8_1_buf49_FIFO_buf2479.extract<96, 127>();

	
  hw_uint<32 > gp_gray_1_buf432_FIFO_buf1863_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_FIFO_buf1863_lane_0_pack, gp_gray_1_buf432_FIFO_buf1863_lane_0);
  hw_uint<32 > lp_level_table114_1_buf155_FIFO_buf2395_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table114_1_buf155_FIFO_buf2395_lane_0_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_0);
  hw_uint<32 > lp_level_table167_1_buf208_FIFO_buf2407_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table167_1_buf208_FIFO_buf2407_lane_0_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_0);
  hw_uint<32 > lp_level_table220_1_buf261_FIFO_buf2419_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table220_1_buf261_FIFO_buf2419_lane_0_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_0);
  hw_uint<32 > lp_level_table273_1_buf314_FIFO_buf2431_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table273_1_buf314_FIFO_buf2431_lane_0_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_0);
  hw_uint<32 > lp_level_table326_1_buf367_FIFO_buf2443_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table326_1_buf367_FIFO_buf2443_lane_0_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_0);
  hw_uint<32 > lp_level_table379_1_buf420_FIFO_buf2455_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table379_1_buf420_FIFO_buf2455_lane_0_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_0);
  hw_uint<32 > lp_level_table61_1_buf102_FIFO_buf2467_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table61_1_buf102_FIFO_buf2467_lane_0_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_0);
  hw_uint<32 > lp_level_table8_1_buf49_FIFO_buf2479_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table8_1_buf49_FIFO_buf2479_lane_0_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_0);
  auto res_interp465_sm2574_36350 = llf_interpolate_float(gp_gray_1_buf432_FIFO_buf1863_lane_0_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_0_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_0_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_0_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_0_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_0_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_0_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_0_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_0_pack);

  hw_uint<32 > gp_gray_1_buf432_FIFO_buf1863_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_FIFO_buf1863_lane_1_pack, gp_gray_1_buf432_FIFO_buf1863_lane_1);
  hw_uint<32 > lp_level_table114_1_buf155_FIFO_buf2395_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table114_1_buf155_FIFO_buf2395_lane_1_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_1);
  hw_uint<32 > lp_level_table167_1_buf208_FIFO_buf2407_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table167_1_buf208_FIFO_buf2407_lane_1_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_1);
  hw_uint<32 > lp_level_table220_1_buf261_FIFO_buf2419_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table220_1_buf261_FIFO_buf2419_lane_1_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_1);
  hw_uint<32 > lp_level_table273_1_buf314_FIFO_buf2431_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table273_1_buf314_FIFO_buf2431_lane_1_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_1);
  hw_uint<32 > lp_level_table326_1_buf367_FIFO_buf2443_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table326_1_buf367_FIFO_buf2443_lane_1_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_1);
  hw_uint<32 > lp_level_table379_1_buf420_FIFO_buf2455_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table379_1_buf420_FIFO_buf2455_lane_1_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_1);
  hw_uint<32 > lp_level_table61_1_buf102_FIFO_buf2467_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table61_1_buf102_FIFO_buf2467_lane_1_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_1);
  hw_uint<32 > lp_level_table8_1_buf49_FIFO_buf2479_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table8_1_buf49_FIFO_buf2479_lane_1_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_1);
  auto res_interp465_sm2574_26348 = llf_interpolate_float(gp_gray_1_buf432_FIFO_buf1863_lane_1_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_1_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_1_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_1_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_1_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_1_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_1_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_1_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_1_pack);

  hw_uint<32 > gp_gray_1_buf432_FIFO_buf1863_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_FIFO_buf1863_lane_2_pack, gp_gray_1_buf432_FIFO_buf1863_lane_2);
  hw_uint<32 > lp_level_table114_1_buf155_FIFO_buf2395_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table114_1_buf155_FIFO_buf2395_lane_2_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_2);
  hw_uint<32 > lp_level_table167_1_buf208_FIFO_buf2407_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table167_1_buf208_FIFO_buf2407_lane_2_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_2);
  hw_uint<32 > lp_level_table220_1_buf261_FIFO_buf2419_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table220_1_buf261_FIFO_buf2419_lane_2_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_2);
  hw_uint<32 > lp_level_table273_1_buf314_FIFO_buf2431_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table273_1_buf314_FIFO_buf2431_lane_2_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_2);
  hw_uint<32 > lp_level_table326_1_buf367_FIFO_buf2443_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table326_1_buf367_FIFO_buf2443_lane_2_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_2);
  hw_uint<32 > lp_level_table379_1_buf420_FIFO_buf2455_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table379_1_buf420_FIFO_buf2455_lane_2_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_2);
  hw_uint<32 > lp_level_table61_1_buf102_FIFO_buf2467_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table61_1_buf102_FIFO_buf2467_lane_2_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_2);
  hw_uint<32 > lp_level_table8_1_buf49_FIFO_buf2479_lane_2_pack;
  set_at<0, 32, 32>(lp_level_table8_1_buf49_FIFO_buf2479_lane_2_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_2);
  auto res_interp465_sm2574_16346 = llf_interpolate_float(gp_gray_1_buf432_FIFO_buf1863_lane_2_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_2_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_2_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_2_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_2_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_2_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_2_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_2_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_2_pack);

  hw_uint<32 > gp_gray_1_buf432_FIFO_buf1863_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_FIFO_buf1863_lane_3_pack, gp_gray_1_buf432_FIFO_buf1863_lane_3);
  hw_uint<32 > lp_level_table114_1_buf155_FIFO_buf2395_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table114_1_buf155_FIFO_buf2395_lane_3_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_3);
  hw_uint<32 > lp_level_table167_1_buf208_FIFO_buf2407_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table167_1_buf208_FIFO_buf2407_lane_3_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_3);
  hw_uint<32 > lp_level_table220_1_buf261_FIFO_buf2419_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table220_1_buf261_FIFO_buf2419_lane_3_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_3);
  hw_uint<32 > lp_level_table273_1_buf314_FIFO_buf2431_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table273_1_buf314_FIFO_buf2431_lane_3_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_3);
  hw_uint<32 > lp_level_table326_1_buf367_FIFO_buf2443_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table326_1_buf367_FIFO_buf2443_lane_3_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_3);
  hw_uint<32 > lp_level_table379_1_buf420_FIFO_buf2455_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table379_1_buf420_FIFO_buf2455_lane_3_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_3);
  hw_uint<32 > lp_level_table61_1_buf102_FIFO_buf2467_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table61_1_buf102_FIFO_buf2467_lane_3_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_3);
  hw_uint<32 > lp_level_table8_1_buf49_FIFO_buf2479_lane_3_pack;
  set_at<0, 32, 32>(lp_level_table8_1_buf49_FIFO_buf2479_lane_3_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_3);
  auto res_interp465_sm2574_06344 = llf_interpolate_float(gp_gray_1_buf432_FIFO_buf1863_lane_3_pack, lp_level_table114_1_buf155_FIFO_buf2395_lane_3_pack, lp_level_table167_1_buf208_FIFO_buf2407_lane_3_pack, lp_level_table220_1_buf261_FIFO_buf2419_lane_3_pack, lp_level_table273_1_buf314_FIFO_buf2431_lane_3_pack, lp_level_table326_1_buf367_FIFO_buf2443_lane_3_pack, lp_level_table379_1_buf420_FIFO_buf2455_lane_3_pack, lp_level_table61_1_buf102_FIFO_buf2467_lane_3_pack, lp_level_table8_1_buf49_FIFO_buf2479_lane_3_pack);
  hw_uint<128 > return_value6645;
  set_at<0, 128, 32>(return_value6645, res_interp465_sm2574_36350);
  set_at<32, 128, 32>(return_value6645, res_interp465_sm2574_26348);
  set_at<64, 128, 32>(return_value6645, res_interp465_sm2574_16346);
  set_at<96, 128, 32>(return_value6645, res_interp465_sm2574_06344);
  return return_value6645;

}

hw_uint<64> gp_gray_2_buf440_interpolate_lp467469_cu6647(hw_uint<32*2>& gp_gray_2_buf440_FIFO_buf1883, hw_uint<32*2>& lp_level_table114_2_buf147_FIFO_buf2399, hw_uint<32*2>& lp_level_table167_2_buf200_FIFO_buf2411, hw_uint<32*2>& lp_level_table220_2_buf253_FIFO_buf2423, hw_uint<32*2>& lp_level_table273_2_buf306_FIFO_buf2435, hw_uint<32*2>& lp_level_table326_2_buf359_FIFO_buf2447, hw_uint<32*2>& lp_level_table379_2_buf412_FIFO_buf2459, hw_uint<32*2>& lp_level_table61_2_buf94_FIFO_buf2471, hw_uint<32*2>& lp_level_table8_2_buf41_FIFO_buf2483) {
  hw_uint<32> gp_gray_2_buf440_FIFO_buf1883_lane_0 = gp_gray_2_buf440_FIFO_buf1883.extract<0, 31>();
  hw_uint<32> gp_gray_2_buf440_FIFO_buf1883_lane_1 = gp_gray_2_buf440_FIFO_buf1883.extract<32, 63>();
  hw_uint<32> lp_level_table114_2_buf147_FIFO_buf2399_lane_0 = lp_level_table114_2_buf147_FIFO_buf2399.extract<0, 31>();
  hw_uint<32> lp_level_table114_2_buf147_FIFO_buf2399_lane_1 = lp_level_table114_2_buf147_FIFO_buf2399.extract<32, 63>();
  hw_uint<32> lp_level_table167_2_buf200_FIFO_buf2411_lane_0 = lp_level_table167_2_buf200_FIFO_buf2411.extract<0, 31>();
  hw_uint<32> lp_level_table167_2_buf200_FIFO_buf2411_lane_1 = lp_level_table167_2_buf200_FIFO_buf2411.extract<32, 63>();
  hw_uint<32> lp_level_table220_2_buf253_FIFO_buf2423_lane_0 = lp_level_table220_2_buf253_FIFO_buf2423.extract<0, 31>();
  hw_uint<32> lp_level_table220_2_buf253_FIFO_buf2423_lane_1 = lp_level_table220_2_buf253_FIFO_buf2423.extract<32, 63>();
  hw_uint<32> lp_level_table273_2_buf306_FIFO_buf2435_lane_0 = lp_level_table273_2_buf306_FIFO_buf2435.extract<0, 31>();
  hw_uint<32> lp_level_table273_2_buf306_FIFO_buf2435_lane_1 = lp_level_table273_2_buf306_FIFO_buf2435.extract<32, 63>();
  hw_uint<32> lp_level_table326_2_buf359_FIFO_buf2447_lane_0 = lp_level_table326_2_buf359_FIFO_buf2447.extract<0, 31>();
  hw_uint<32> lp_level_table326_2_buf359_FIFO_buf2447_lane_1 = lp_level_table326_2_buf359_FIFO_buf2447.extract<32, 63>();
  hw_uint<32> lp_level_table379_2_buf412_FIFO_buf2459_lane_0 = lp_level_table379_2_buf412_FIFO_buf2459.extract<0, 31>();
  hw_uint<32> lp_level_table379_2_buf412_FIFO_buf2459_lane_1 = lp_level_table379_2_buf412_FIFO_buf2459.extract<32, 63>();
  hw_uint<32> lp_level_table61_2_buf94_FIFO_buf2471_lane_0 = lp_level_table61_2_buf94_FIFO_buf2471.extract<0, 31>();
  hw_uint<32> lp_level_table61_2_buf94_FIFO_buf2471_lane_1 = lp_level_table61_2_buf94_FIFO_buf2471.extract<32, 63>();
  hw_uint<32> lp_level_table8_2_buf41_FIFO_buf2483_lane_0 = lp_level_table8_2_buf41_FIFO_buf2483.extract<0, 31>();
  hw_uint<32> lp_level_table8_2_buf41_FIFO_buf2483_lane_1 = lp_level_table8_2_buf41_FIFO_buf2483.extract<32, 63>();

	
  hw_uint<32 > gp_gray_2_buf440_FIFO_buf1883_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_FIFO_buf1883_lane_0_pack, gp_gray_2_buf440_FIFO_buf1883_lane_0);
  hw_uint<32 > lp_level_table114_2_buf147_FIFO_buf2399_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table114_2_buf147_FIFO_buf2399_lane_0_pack, lp_level_table114_2_buf147_FIFO_buf2399_lane_0);
  hw_uint<32 > lp_level_table167_2_buf200_FIFO_buf2411_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table167_2_buf200_FIFO_buf2411_lane_0_pack, lp_level_table167_2_buf200_FIFO_buf2411_lane_0);
  hw_uint<32 > lp_level_table220_2_buf253_FIFO_buf2423_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table220_2_buf253_FIFO_buf2423_lane_0_pack, lp_level_table220_2_buf253_FIFO_buf2423_lane_0);
  hw_uint<32 > lp_level_table273_2_buf306_FIFO_buf2435_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table273_2_buf306_FIFO_buf2435_lane_0_pack, lp_level_table273_2_buf306_FIFO_buf2435_lane_0);
  hw_uint<32 > lp_level_table326_2_buf359_FIFO_buf2447_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table326_2_buf359_FIFO_buf2447_lane_0_pack, lp_level_table326_2_buf359_FIFO_buf2447_lane_0);
  hw_uint<32 > lp_level_table379_2_buf412_FIFO_buf2459_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table379_2_buf412_FIFO_buf2459_lane_0_pack, lp_level_table379_2_buf412_FIFO_buf2459_lane_0);
  hw_uint<32 > lp_level_table61_2_buf94_FIFO_buf2471_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table61_2_buf94_FIFO_buf2471_lane_0_pack, lp_level_table61_2_buf94_FIFO_buf2471_lane_0);
  hw_uint<32 > lp_level_table8_2_buf41_FIFO_buf2483_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table8_2_buf41_FIFO_buf2483_lane_0_pack, lp_level_table8_2_buf41_FIFO_buf2483_lane_0);
  auto res_interp470_sm2575_16432 = llf_interpolate_float(gp_gray_2_buf440_FIFO_buf1883_lane_0_pack, lp_level_table114_2_buf147_FIFO_buf2399_lane_0_pack, lp_level_table167_2_buf200_FIFO_buf2411_lane_0_pack, lp_level_table220_2_buf253_FIFO_buf2423_lane_0_pack, lp_level_table273_2_buf306_FIFO_buf2435_lane_0_pack, lp_level_table326_2_buf359_FIFO_buf2447_lane_0_pack, lp_level_table379_2_buf412_FIFO_buf2459_lane_0_pack, lp_level_table61_2_buf94_FIFO_buf2471_lane_0_pack, lp_level_table8_2_buf41_FIFO_buf2483_lane_0_pack);

  hw_uint<32 > gp_gray_2_buf440_FIFO_buf1883_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_FIFO_buf1883_lane_1_pack, gp_gray_2_buf440_FIFO_buf1883_lane_1);
  hw_uint<32 > lp_level_table114_2_buf147_FIFO_buf2399_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table114_2_buf147_FIFO_buf2399_lane_1_pack, lp_level_table114_2_buf147_FIFO_buf2399_lane_1);
  hw_uint<32 > lp_level_table167_2_buf200_FIFO_buf2411_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table167_2_buf200_FIFO_buf2411_lane_1_pack, lp_level_table167_2_buf200_FIFO_buf2411_lane_1);
  hw_uint<32 > lp_level_table220_2_buf253_FIFO_buf2423_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table220_2_buf253_FIFO_buf2423_lane_1_pack, lp_level_table220_2_buf253_FIFO_buf2423_lane_1);
  hw_uint<32 > lp_level_table273_2_buf306_FIFO_buf2435_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table273_2_buf306_FIFO_buf2435_lane_1_pack, lp_level_table273_2_buf306_FIFO_buf2435_lane_1);
  hw_uint<32 > lp_level_table326_2_buf359_FIFO_buf2447_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table326_2_buf359_FIFO_buf2447_lane_1_pack, lp_level_table326_2_buf359_FIFO_buf2447_lane_1);
  hw_uint<32 > lp_level_table379_2_buf412_FIFO_buf2459_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table379_2_buf412_FIFO_buf2459_lane_1_pack, lp_level_table379_2_buf412_FIFO_buf2459_lane_1);
  hw_uint<32 > lp_level_table61_2_buf94_FIFO_buf2471_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table61_2_buf94_FIFO_buf2471_lane_1_pack, lp_level_table61_2_buf94_FIFO_buf2471_lane_1);
  hw_uint<32 > lp_level_table8_2_buf41_FIFO_buf2483_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table8_2_buf41_FIFO_buf2483_lane_1_pack, lp_level_table8_2_buf41_FIFO_buf2483_lane_1);
  auto res_interp470_sm2575_06430 = llf_interpolate_float(gp_gray_2_buf440_FIFO_buf1883_lane_1_pack, lp_level_table114_2_buf147_FIFO_buf2399_lane_1_pack, lp_level_table167_2_buf200_FIFO_buf2411_lane_1_pack, lp_level_table220_2_buf253_FIFO_buf2423_lane_1_pack, lp_level_table273_2_buf306_FIFO_buf2435_lane_1_pack, lp_level_table326_2_buf359_FIFO_buf2447_lane_1_pack, lp_level_table379_2_buf412_FIFO_buf2459_lane_1_pack, lp_level_table61_2_buf94_FIFO_buf2471_lane_1_pack, lp_level_table8_2_buf41_FIFO_buf2483_lane_1_pack);
  hw_uint<64 > return_value6648;
  set_at<0, 64, 32>(return_value6648, res_interp470_sm2575_16432);
  set_at<32, 64, 32>(return_value6648, res_interp470_sm2575_06430);
  return return_value6648;

}

hw_uint<64> us_gp_gray_3_buf448_interpolated471482_cu6650(hw_uint<32*2>& gp_gray_3_buf448_interpolated471_FIFO_buf1907) {
  return gp_gray_3_buf448_interpolated471_FIFO_buf1907;
}

hw_uint<64> gp_gray_2_buf440_interpolated466_reconstruct_lp476478_cu6652(hw_uint<32*2>& gp_gray_2_buf440_interpolated466_FIFO_buf1891, hw_uint<32*2>& gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911) {
  hw_uint<32> gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_0 = gp_gray_2_buf440_interpolated466_FIFO_buf1891.extract<0, 31>();
  hw_uint<32> gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_1 = gp_gray_2_buf440_interpolated466_FIFO_buf1891.extract<32, 63>();
  hw_uint<32> gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_0 = gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911.extract<0, 31>();
  hw_uint<32> gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_1 = gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911.extract<32, 63>();

	
  hw_uint<32 > gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_0_pack, gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_0);
  hw_uint<32 > gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_0_pack, gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_0);
  auto res_rc484_sm2578_13192 = llf_add_float_32(gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_0_pack, gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_0_pack);

  hw_uint<32 > gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_1_pack, gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_1);
  hw_uint<32 > gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_1_pack, gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_1);
  auto res_rc484_sm2578_03190 = llf_add_float_32(gp_gray_2_buf440_interpolated466_FIFO_buf1891_lane_1_pack, gp_gray_3_buf448_interpolated471_us480_FIFO_buf1911_lane_1_pack);
  hw_uint<64 > return_value6653;
  set_at<0, 64, 32>(return_value6653, res_rc484_sm2578_13192);
  set_at<32, 64, 32>(return_value6653, res_rc484_sm2578_03190);
  return return_value6653;

}

hw_uint<128> us_gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479491_cu6655(hw_uint<32*4>& gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_FIFO_buf1895) {
  return gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_FIFO_buf1895;
}

hw_uint<128> gp_gray_1_buf432_interpolated461_reconstruct_lp485487_cu6657(hw_uint<32*4>& gp_gray_1_buf432_interpolated461_FIFO_buf1871, hw_uint<32*4>& gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899) {
  hw_uint<32> gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_0 = gp_gray_1_buf432_interpolated461_FIFO_buf1871.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_1 = gp_gray_1_buf432_interpolated461_FIFO_buf1871.extract<32, 63>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_2 = gp_gray_1_buf432_interpolated461_FIFO_buf1871.extract<64, 95>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_3 = gp_gray_1_buf432_interpolated461_FIFO_buf1871.extract<96, 127>();
  hw_uint<32> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_0 = gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899.extract<0, 31>();
  hw_uint<32> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_1 = gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899.extract<32, 63>();
  hw_uint<32> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_2 = gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899.extract<64, 95>();
  hw_uint<32> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_3 = gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899.extract<96, 127>();

	
  hw_uint<32 > gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_0_pack, gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_0);
  hw_uint<32 > gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_0_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_0);
  auto res_rc493_sm2580_33208 = llf_add_float_32(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_0_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_0_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_1_pack, gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_1);
  hw_uint<32 > gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_1_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_1);
  auto res_rc493_sm2580_23206 = llf_add_float_32(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_1_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_1_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_2_pack, gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_2);
  hw_uint<32 > gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_2_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_2);
  auto res_rc493_sm2580_13204 = llf_add_float_32(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_2_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_2_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_3_pack, gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_3);
  hw_uint<32 > gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_3_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_3);
  auto res_rc493_sm2580_03202 = llf_add_float_32(gp_gray_1_buf432_interpolated461_FIFO_buf1871_lane_3_pack, gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_FIFO_buf1899_lane_3_pack);
  hw_uint<128 > return_value6658;
  set_at<0, 128, 32>(return_value6658, res_rc493_sm2580_33208);
  set_at<32, 128, 32>(return_value6658, res_rc493_sm2580_23206);
  set_at<64, 128, 32>(return_value6658, res_rc493_sm2580_13204);
  set_at<96, 128, 32>(return_value6658, res_rc493_sm2580_03202);
  return return_value6658;

}

hw_uint<256> us_gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488500_cu6660(hw_uint<32*8>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_FIFO_buf1875) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_FIFO_buf1875;
}

hw_uint<256> gray_interpolated456_reconstruct_lp494496_cu6662(hw_uint<32*8>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879, hw_uint<32*8>& gray_interpolated456_FIFO_buf2315) {
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<32, 63>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_2 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<64, 95>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_3 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<96, 127>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_4 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<128, 159>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_5 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<160, 191>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_6 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<192, 223>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_7 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<224, 255>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_0 = gray_interpolated456_FIFO_buf2315.extract<0, 31>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_1 = gray_interpolated456_FIFO_buf2315.extract<32, 63>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_2 = gray_interpolated456_FIFO_buf2315.extract<64, 95>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_3 = gray_interpolated456_FIFO_buf2315.extract<96, 127>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_4 = gray_interpolated456_FIFO_buf2315.extract<128, 159>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_5 = gray_interpolated456_FIFO_buf2315.extract<160, 191>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_6 = gray_interpolated456_FIFO_buf2315.extract<192, 223>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_7 = gray_interpolated456_FIFO_buf2315.extract<224, 255>();

	
  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_0_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_0_pack, gray_interpolated456_FIFO_buf2315_lane_0);
  auto res_rc502_sm2582_73240 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0_pack, gray_interpolated456_FIFO_buf2315_lane_0_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_1_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_1_pack, gray_interpolated456_FIFO_buf2315_lane_1);
  auto res_rc502_sm2582_63238 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1_pack, gray_interpolated456_FIFO_buf2315_lane_1_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_2_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_2);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_2_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_2_pack, gray_interpolated456_FIFO_buf2315_lane_2);
  auto res_rc502_sm2582_53236 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_2_pack, gray_interpolated456_FIFO_buf2315_lane_2_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_3_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_3);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_3_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_3_pack, gray_interpolated456_FIFO_buf2315_lane_3);
  auto res_rc502_sm2582_43234 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_3_pack, gray_interpolated456_FIFO_buf2315_lane_3_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_4_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_4);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_4_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_4_pack, gray_interpolated456_FIFO_buf2315_lane_4);
  auto res_rc502_sm2582_33232 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_4_pack, gray_interpolated456_FIFO_buf2315_lane_4_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_5_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_5);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_5_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_5_pack, gray_interpolated456_FIFO_buf2315_lane_5);
  auto res_rc502_sm2582_23230 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_5_pack, gray_interpolated456_FIFO_buf2315_lane_5_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_6_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_6);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_6_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_6_pack, gray_interpolated456_FIFO_buf2315_lane_6);
  auto res_rc502_sm2582_13228 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_6_pack, gray_interpolated456_FIFO_buf2315_lane_6_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_7_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_7);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_7_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_7_pack, gray_interpolated456_FIFO_buf2315_lane_7);
  auto res_rc502_sm2582_03226 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_7_pack, gray_interpolated456_FIFO_buf2315_lane_7_pack);
  hw_uint<256 > return_value6663;
  set_at<0, 256, 32>(return_value6663, res_rc502_sm2582_73240);
  set_at<32, 256, 32>(return_value6663, res_rc502_sm2582_63238);
  set_at<64, 256, 32>(return_value6663, res_rc502_sm2582_53236);
  set_at<96, 256, 32>(return_value6663, res_rc502_sm2582_43234);
  set_at<128, 256, 32>(return_value6663, res_rc502_sm2582_33232);
  set_at<160, 256, 32>(return_value6663, res_rc502_sm2582_23230);
  set_at<192, 256, 32>(return_value6663, res_rc502_sm2582_13228);
  set_at<224, 256, 32>(return_value6663, res_rc502_sm2582_03226);
  return return_value6663;

}

hw_uint<256> gray_out_float_rescale_gray504_cu6665(hw_uint<32*8>& gray_FIFO_buf2275, hw_uint<32*8>& gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319) {
  hw_uint<32> gray_FIFO_buf2275_lane_0 = gray_FIFO_buf2275.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2275_lane_1 = gray_FIFO_buf2275.extract<32, 63>();
  hw_uint<32> gray_FIFO_buf2275_lane_2 = gray_FIFO_buf2275.extract<64, 95>();
  hw_uint<32> gray_FIFO_buf2275_lane_3 = gray_FIFO_buf2275.extract<96, 127>();
  hw_uint<32> gray_FIFO_buf2275_lane_4 = gray_FIFO_buf2275.extract<128, 159>();
  hw_uint<32> gray_FIFO_buf2275_lane_5 = gray_FIFO_buf2275.extract<160, 191>();
  hw_uint<32> gray_FIFO_buf2275_lane_6 = gray_FIFO_buf2275.extract<192, 223>();
  hw_uint<32> gray_FIFO_buf2275_lane_7 = gray_FIFO_buf2275.extract<224, 255>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<0, 31>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<32, 63>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_2 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<64, 95>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_3 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<96, 127>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_4 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<128, 159>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_5 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<160, 191>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_6 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<192, 223>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_7 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<224, 255>();

	
  hw_uint<32 > gray_FIFO_buf2275_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_0_pack, gray_FIFO_buf2275_lane_0);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0);
  auto res_cc505_sm2583_73256 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_0_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_1_pack, gray_FIFO_buf2275_lane_1);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1);
  auto res_cc505_sm2583_63254 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_1_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_2_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_2_pack, gray_FIFO_buf2275_lane_2);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_2_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_2_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_2);
  auto res_cc505_sm2583_53252 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_2_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_2_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_3_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_3_pack, gray_FIFO_buf2275_lane_3);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_3_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_3_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_3);
  auto res_cc505_sm2583_43250 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_3_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_3_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_4_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_4_pack, gray_FIFO_buf2275_lane_4);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_4_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_4_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_4);
  auto res_cc505_sm2583_33248 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_4_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_4_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_5_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_5_pack, gray_FIFO_buf2275_lane_5);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_5_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_5_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_5);
  auto res_cc505_sm2583_23246 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_5_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_5_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_6_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_6_pack, gray_FIFO_buf2275_lane_6);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_6_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_6_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_6);
  auto res_cc505_sm2583_13244 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_6_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_6_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_7_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_7_pack, gray_FIFO_buf2275_lane_7);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_7_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_7_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_7);
  auto res_cc505_sm2583_03242 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_7_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_7_pack);
  hw_uint<256 > return_value6666;
  set_at<0, 256, 32>(return_value6666, res_cc505_sm2583_73256);
  set_at<32, 256, 32>(return_value6666, res_cc505_sm2583_63254);
  set_at<64, 256, 32>(return_value6666, res_cc505_sm2583_53252);
  set_at<96, 256, 32>(return_value6666, res_cc505_sm2583_43250);
  set_at<128, 256, 32>(return_value6666, res_cc505_sm2583_33248);
  set_at<160, 256, 32>(return_value6666, res_cc505_sm2583_23246);
  set_at<192, 256, 32>(return_value6666, res_cc505_sm2583_13244);
  set_at<224, 256, 32>(return_value6666, res_cc505_sm2583_03242);
  return return_value6666;

}

hw_uint<256> pw_math_gray_out_float506508_cu6668(hw_uint<32*8>& gray_out_float_FIFO_buf2323) {
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_0 = gray_out_float_FIFO_buf2323.extract<0, 31>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_1 = gray_out_float_FIFO_buf2323.extract<32, 63>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_2 = gray_out_float_FIFO_buf2323.extract<64, 95>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_3 = gray_out_float_FIFO_buf2323.extract<96, 127>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_4 = gray_out_float_FIFO_buf2323.extract<128, 159>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_5 = gray_out_float_FIFO_buf2323.extract<160, 191>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_6 = gray_out_float_FIFO_buf2323.extract<192, 223>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_7 = gray_out_float_FIFO_buf2323.extract<224, 255>();

	
  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_0_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_0_pack, gray_out_float_FIFO_buf2323_lane_0);
  auto res_pw_math_gray_out_float506509_sm2584_73272 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_0_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_1_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_1_pack, gray_out_float_FIFO_buf2323_lane_1);
  auto res_pw_math_gray_out_float506509_sm2584_63270 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_1_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_2_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_2_pack, gray_out_float_FIFO_buf2323_lane_2);
  auto res_pw_math_gray_out_float506509_sm2584_53268 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_2_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_3_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_3_pack, gray_out_float_FIFO_buf2323_lane_3);
  auto res_pw_math_gray_out_float506509_sm2584_43266 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_3_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_4_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_4_pack, gray_out_float_FIFO_buf2323_lane_4);
  auto res_pw_math_gray_out_float506509_sm2584_33264 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_4_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_5_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_5_pack, gray_out_float_FIFO_buf2323_lane_5);
  auto res_pw_math_gray_out_float506509_sm2584_23262 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_5_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_6_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_6_pack, gray_out_float_FIFO_buf2323_lane_6);
  auto res_pw_math_gray_out_float506509_sm2584_13260 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_6_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_7_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_7_pack, gray_out_float_FIFO_buf2323_lane_7);
  auto res_pw_math_gray_out_float506509_sm2584_03258 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_7_pack);
  hw_uint<256 > return_value6669;
  set_at<0, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_73272);
  set_at<32, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_63270);
  set_at<64, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_53268);
  set_at<96, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_43266);
  set_at<128, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_33264);
  set_at<160, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_23262);
  set_at<192, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_13260);
  set_at<224, 256, 32>(return_value6669, res_pw_math_gray_out_float506509_sm2584_03258);
  return return_value6669;

}

hw_uint<256> gray_to_gp_671683_ld2308_cu6671(hw_uint<32*8>& gray_to_gp_671683) {
  return gray_to_gp_671683;
}

hw_uint<256> gp_level_table326_1_buf331_us371_ld1480_cu6673(hw_uint<32*8>& gp_level_table326_1_buf331_us371) {
  return gp_level_table326_1_buf331_us371;
}

hw_uint<256> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_ld1256_cu6675(hw_uint<32*8>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498;
}

hw_uint<128> gp_level_table114_1_buf119_ld1296_cu6677(hw_uint<32*4>& gp_level_table114_1_buf119) {
  return gp_level_table114_1_buf119;
}

hw_uint<256> gp_level_table114_1_buf119_us159_ld1304_cu6679(hw_uint<32*8>& gp_level_table114_1_buf119_us159) {
  return gp_level_table114_1_buf119_us159;
}

hw_uint<128> gp_level_table114_1_buf119_ld1292_cu6681(hw_uint<32*4>& gp_level_table114_1_buf119) {
  return gp_level_table114_1_buf119;
}

hw_uint<128> gp_level_table114_1_buf119_ld1300_cu6683(hw_uint<32*4>& gp_level_table114_1_buf119) {
  return gp_level_table114_1_buf119;
}

hw_uint<64> gp_level_table114_2_buf127_ld1312_cu6685(hw_uint<32*2>& gp_level_table114_2_buf127) {
  return gp_level_table114_2_buf127;
}

hw_uint<64> gp_level_table114_2_buf127_ld1316_cu6687(hw_uint<32*2>& gp_level_table114_2_buf127) {
  return gp_level_table114_2_buf127;
}

hw_uint<128> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_ld1276_cu6689(hw_uint<32*4>& gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489) {
  return gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489;
}

hw_uint<256> gp_level_table61_1_buf66_us106_ld1568_cu6691(hw_uint<32*8>& gp_level_table61_1_buf66_us106) {
  return gp_level_table61_1_buf66_us106;
}

hw_uint<64> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_ld1272_cu6693(hw_uint<32*2>& gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479) {
  return gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479;
}

hw_uint<128> gp_gray_1_buf432_ld1240_cu6695(hw_uint<32*4>& gp_gray_1_buf432) {
  return gp_gray_1_buf432;
}

hw_uint<128> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_ld1252_cu6697(hw_uint<32*4>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488;
}

hw_uint<64> gp_gray_2_buf440_ld1260_cu6699(hw_uint<32*2>& gp_gray_2_buf440) {
  return gp_gray_2_buf440;
}

hw_uint<128> gp_gray_1_buf432_ld1244_cu6701(hw_uint<32*4>& gp_gray_1_buf432) {
  return gp_gray_1_buf432;
}

hw_uint<256> gp_level_table273_1_buf278_us318_ld1436_cu6703(hw_uint<32*8>& gp_level_table273_1_buf278_us318) {
  return gp_level_table273_1_buf278_us318;
}

hw_uint<128> gp_level_table220_1_buf225_ld1388_cu6705(hw_uint<32*4>& gp_level_table220_1_buf225) {
  return gp_level_table220_1_buf225;
}

hw_uint<256> gp_level_table379_1_buf384_us424_ld1524_cu6707(hw_uint<32*8>& gp_level_table379_1_buf384_us424) {
  return gp_level_table379_1_buf384_us424;
}

hw_uint<128> gp_gray_1_buf432_interpolated461_ld1248_cu6709(hw_uint<32*4>& gp_gray_1_buf432_interpolated461) {
  return gp_gray_1_buf432_interpolated461;
}

hw_uint<64> gp_level_table114_2_buf127_ld1308_cu6711(hw_uint<32*2>& gp_level_table114_2_buf127) {
  return gp_level_table114_2_buf127;
}

hw_uint<64> gp_gray_2_buf440_interpolated466_ld1268_cu6713(hw_uint<32*2>& gp_gray_2_buf440_interpolated466) {
  return gp_gray_2_buf440_interpolated466;
}

hw_uint<128> gp_level_table167_1_buf172_ld1340_cu6715(hw_uint<32*4>& gp_level_table167_1_buf172) {
  return gp_level_table167_1_buf172;
}

hw_uint<128> gp_level_table167_2_buf180_us204_ld1364_cu6717(hw_uint<32*4>& gp_level_table167_2_buf180_us204) {
  return gp_level_table167_2_buf180_us204;
}

hw_uint<256> gp_level_table220_1_buf225_us265_ld1392_cu6719(hw_uint<32*8>& gp_level_table220_1_buf225_us265) {
  return gp_level_table220_1_buf225_us265;
}

hw_uint<64> gp_gray_2_buf440_ld1264_cu6721(hw_uint<32*2>& gp_gray_2_buf440) {
  return gp_gray_2_buf440;
}

hw_uint<64> gp_gray_3_buf448_interpolated471_us480_ld1288_cu6723(hw_uint<32*2>& gp_gray_3_buf448_interpolated471_us480) {
  return gp_gray_3_buf448_interpolated471_us480;
}

hw_uint<64> gp_level_table114_3_buf135_us143_ld1332_cu6725(hw_uint<32*2>& gp_level_table114_3_buf135_us143) {
  return gp_level_table114_3_buf135_us143;
}

hw_uint<128> gp_level_table167_1_buf172_ld1336_cu6727(hw_uint<32*4>& gp_level_table167_1_buf172) {
  return gp_level_table167_1_buf172;
}

hw_uint<64> gp_level_table167_2_buf180_ld1352_cu6729(hw_uint<32*2>& gp_level_table167_2_buf180) {
  return gp_level_table167_2_buf180;
}

hw_uint<128> gp_level_table220_1_buf225_ld1384_cu6731(hw_uint<32*4>& gp_level_table220_1_buf225) {
  return gp_level_table220_1_buf225;
}

hw_uint<128> gp_level_table220_2_buf233_us257_ld1408_cu6733(hw_uint<32*4>& gp_level_table220_2_buf233_us257) {
  return gp_level_table220_2_buf233_us257;
}

hw_uint<64> gp_level_table220_2_buf233_ld1396_cu6735(hw_uint<32*2>& gp_level_table220_2_buf233) {
  return gp_level_table220_2_buf233;
}

hw_uint<128> gp_level_table167_1_buf172_ld1344_cu6737(hw_uint<32*4>& gp_level_table167_1_buf172) {
  return gp_level_table167_1_buf172;
}

hw_uint<64> gp_level_table220_2_buf233_ld1404_cu6739(hw_uint<32*2>& gp_level_table220_2_buf233) {
  return gp_level_table220_2_buf233;
}

hw_uint<128> gp_level_table114_2_buf127_us151_ld1320_cu6741(hw_uint<32*4>& gp_level_table114_2_buf127_us151) {
  return gp_level_table114_2_buf127_us151;
}

hw_uint<64> gp_level_table220_3_buf241_us249_ld1420_cu6743(hw_uint<32*2>& gp_level_table220_3_buf241_us249) {
  return gp_level_table220_3_buf241_us249;
}

hw_uint<64> gp_level_table273_2_buf286_ld1440_cu6745(hw_uint<32*2>& gp_level_table273_2_buf286) {
  return gp_level_table273_2_buf286;
}

hw_uint<64> gp_level_table273_2_buf286_ld1444_cu6747(hw_uint<32*2>& gp_level_table273_2_buf286) {
  return gp_level_table273_2_buf286;
}

hw_uint<64> gp_level_table273_2_buf286_ld1448_cu6749(hw_uint<32*2>& gp_level_table273_2_buf286) {
  return gp_level_table273_2_buf286;
}

hw_uint<128> gp_level_table326_1_buf331_ld1472_cu6751(hw_uint<32*4>& gp_level_table326_1_buf331) {
  return gp_level_table326_1_buf331;
}

hw_uint<128> gp_level_table326_1_buf331_ld1476_cu6753(hw_uint<32*4>& gp_level_table326_1_buf331) {
  return gp_level_table326_1_buf331;
}

hw_uint<64> gp_level_table326_2_buf339_ld1484_cu6755(hw_uint<32*2>& gp_level_table326_2_buf339) {
  return gp_level_table326_2_buf339;
}

hw_uint<64> gp_level_table167_2_buf180_ld1356_cu6757(hw_uint<32*2>& gp_level_table167_2_buf180) {
  return gp_level_table167_2_buf180;
}

hw_uint<256> gp_level_table167_1_buf172_us212_ld1348_cu6759(hw_uint<32*8>& gp_level_table167_1_buf172_us212) {
  return gp_level_table167_1_buf172_us212;
}

hw_uint<64> gp_level_table167_2_buf180_ld1360_cu6761(hw_uint<32*2>& gp_level_table167_2_buf180) {
  return gp_level_table167_2_buf180;
}

hw_uint<64> gp_level_table167_3_buf188_us196_ld1376_cu6763(hw_uint<32*2>& gp_level_table167_3_buf188_us196) {
  return gp_level_table167_3_buf188_us196;
}

hw_uint<64> gp_level_table379_2_buf392_ld1536_cu6765(hw_uint<32*2>& gp_level_table379_2_buf392) {
  return gp_level_table379_2_buf392;
}

hw_uint<256> lp_level_table220_0_buf269_ld1792_cu6767(hw_uint<32*8>& lp_level_table220_0_buf269) {
  return lp_level_table220_0_buf269;
}

hw_uint<64> lp_level_table220_2_buf253_ld1800_cu6769(hw_uint<32*2>& lp_level_table220_2_buf253) {
  return lp_level_table220_2_buf253;
}

hw_uint<128> gp_level_table61_1_buf66_to_gp_541559_ld2184_cu6771(hw_uint<32*4>& gp_level_table61_1_buf66_to_gp_541559) {
  return gp_level_table61_1_buf66_to_gp_541559;
}

hw_uint<128> gp_level_table220_1_buf225_ld1380_cu6773(hw_uint<32*4>& gp_level_table220_1_buf225) {
  return gp_level_table220_1_buf225;
}

hw_uint<64> gp_level_table220_2_buf233_ld1400_cu6775(hw_uint<32*2>& gp_level_table220_2_buf233) {
  return gp_level_table220_2_buf233;
}

hw_uint<64> gp_level_table326_3_buf347_us355_ld1508_cu6777(hw_uint<32*2>& gp_level_table326_3_buf347_us355) {
  return gp_level_table326_3_buf347_us355;
}

hw_uint<128> gp_level_table61_1_buf66_ld1556_cu6779(hw_uint<32*4>& gp_level_table61_1_buf66) {
  return gp_level_table61_1_buf66;
}

hw_uint<128> gp_level_table273_1_buf278_ld1424_cu6781(hw_uint<32*4>& gp_level_table273_1_buf278) {
  return gp_level_table273_1_buf278;
}

hw_uint<128> gp_level_table273_1_buf278_ld1428_cu6783(hw_uint<32*4>& gp_level_table273_1_buf278) {
  return gp_level_table273_1_buf278;
}

hw_uint<128> gp_level_table273_2_buf286_us310_ld1452_cu6785(hw_uint<32*4>& gp_level_table273_2_buf286_us310) {
  return gp_level_table273_2_buf286_us310;
}

hw_uint<128> gp_level_table273_1_buf278_ld1432_cu6787(hw_uint<32*4>& gp_level_table273_1_buf278) {
  return gp_level_table273_1_buf278;
}

hw_uint<64> gp_level_table273_3_buf294_us302_ld1464_cu6789(hw_uint<32*2>& gp_level_table273_3_buf294_us302) {
  return gp_level_table273_3_buf294_us302;
}

hw_uint<128> gp_level_table326_1_buf331_ld1468_cu6791(hw_uint<32*4>& gp_level_table326_1_buf331) {
  return gp_level_table326_1_buf331;
}

hw_uint<64> gp_level_table326_2_buf339_ld1488_cu6793(hw_uint<32*2>& gp_level_table326_2_buf339) {
  return gp_level_table326_2_buf339;
}

hw_uint<64> gp_level_table326_2_buf339_ld1492_cu6795(hw_uint<32*2>& gp_level_table326_2_buf339) {
  return gp_level_table326_2_buf339;
}

hw_uint<128> gp_level_table379_1_buf384_ld1520_cu6797(hw_uint<32*4>& gp_level_table379_1_buf384) {
  return gp_level_table379_1_buf384;
}

hw_uint<64> gp_level_table61_2_buf74_ld1580_cu6799(hw_uint<32*2>& gp_level_table61_2_buf74) {
  return gp_level_table61_2_buf74;
}

hw_uint<128> gp_level_table326_2_buf339_us363_ld1496_cu6801(hw_uint<32*4>& gp_level_table326_2_buf339_us363) {
  return gp_level_table326_2_buf339_us363;
}

hw_uint<64> gp_level_table379_2_buf392_ld1528_cu6803(hw_uint<32*2>& gp_level_table379_2_buf392) {
  return gp_level_table379_2_buf392;
}

hw_uint<128> gp_level_table379_2_buf392_us416_ld1540_cu6805(hw_uint<32*4>& gp_level_table379_2_buf392_us416) {
  return gp_level_table379_2_buf392_us416;
}

hw_uint<64> gp_level_table61_2_buf74_ld1572_cu6807(hw_uint<32*2>& gp_level_table61_2_buf74) {
  return gp_level_table61_2_buf74;
}

hw_uint<128> gp_level_table61_1_buf66_ld1564_cu6809(hw_uint<32*4>& gp_level_table61_1_buf66) {
  return gp_level_table61_1_buf66;
}

hw_uint<64> gp_level_table61_3_buf82_us90_ld1596_cu6811(hw_uint<32*2>& gp_level_table61_3_buf82_us90) {
  return gp_level_table61_3_buf82_us90;
}

hw_uint<64> gp_level_table8_2_buf21_ld1616_cu6813(hw_uint<32*2>& gp_level_table8_2_buf21) {
  return gp_level_table8_2_buf21;
}

hw_uint<64> gp_level_table8_2_buf21_ld1620_cu6815(hw_uint<32*2>& gp_level_table8_2_buf21) {
  return gp_level_table8_2_buf21;
}

hw_uint<128> gp_level_table379_1_buf384_ld1512_cu6817(hw_uint<32*4>& gp_level_table379_1_buf384) {
  return gp_level_table379_1_buf384;
}

hw_uint<128> gp_level_table379_1_buf384_ld1516_cu6819(hw_uint<32*4>& gp_level_table379_1_buf384) {
  return gp_level_table379_1_buf384;
}

hw_uint<128> gp_level_table61_1_buf66_ld1560_cu6821(hw_uint<32*4>& gp_level_table61_1_buf66) {
  return gp_level_table61_1_buf66;
}

hw_uint<256> gray_ld1668_cu6823(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> level_table114_ld1708_cu6825(hw_uint<32*8>& level_table114) {
  return level_table114;
}

hw_uint<64> gp_level_table379_3_buf400_us408_ld1552_cu6827(hw_uint<32*2>& gp_level_table379_3_buf400_us408) {
  return gp_level_table379_3_buf400_us408;
}

hw_uint<64> gp_level_table379_2_buf392_ld1532_cu6829(hw_uint<32*2>& gp_level_table379_2_buf392) {
  return gp_level_table379_2_buf392;
}

hw_uint<128> gp_level_table8_1_buf13_ld1604_cu6831(hw_uint<32*4>& gp_level_table8_1_buf13) {
  return gp_level_table8_1_buf13;
}

hw_uint<128> gp_level_table8_1_buf13_ld1608_cu6833(hw_uint<32*4>& gp_level_table8_1_buf13) {
  return gp_level_table8_1_buf13;
}

hw_uint<128> gp_level_table61_2_buf74_us98_ld1584_cu6835(hw_uint<32*4>& gp_level_table61_2_buf74_us98) {
  return gp_level_table61_2_buf74_us98;
}

hw_uint<64> gp_level_table61_2_buf74_ld1576_cu6837(hw_uint<32*2>& gp_level_table61_2_buf74) {
  return gp_level_table61_2_buf74;
}

hw_uint<64> gp_level_table8_3_buf29_us37_ld1640_cu6839(hw_uint<32*2>& gp_level_table8_3_buf29_us37) {
  return gp_level_table8_3_buf29_us37;
}

hw_uint<256> gray_ld1652_cu6841(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<128> gp_level_table8_1_buf13_ld1600_cu6843(hw_uint<32*4>& gp_level_table8_1_buf13) {
  return gp_level_table8_1_buf13;
}

hw_uint<64> gp_level_table8_2_buf21_ld1624_cu6845(hw_uint<32*2>& gp_level_table8_2_buf21) {
  return gp_level_table8_2_buf21;
}

hw_uint<128> gp_level_table8_2_buf21_us45_ld1628_cu6847(hw_uint<32*4>& gp_level_table8_2_buf21_us45) {
  return gp_level_table8_2_buf21_us45;
}

hw_uint<256> gray_out_float_ld1700_cu6849(hw_uint<32*8>& gray_out_float) {
  return gray_out_float;
}

hw_uint<256> level_table167_ld1716_cu6851(hw_uint<32*8>& level_table167) {
  return level_table167;
}

hw_uint<256> level_table8_ld1760_cu6853(hw_uint<32*8>& level_table8) {
  return level_table8;
}

hw_uint<256> gp_level_table167_1_buf172_us212_to_gp_381347_ld1972_cu6855(hw_uint<32*8>& gp_level_table167_1_buf172_us212_to_gp_381347) {
  return gp_level_table167_1_buf172_us212_to_gp_381347;
}

hw_uint<256> lp_level_table114_0_buf163_ld1768_cu6857(hw_uint<32*8>& lp_level_table114_0_buf163) {
  return lp_level_table114_0_buf163;
}

hw_uint<64> lp_level_table326_2_buf359_ld1824_cu6859(hw_uint<32*2>& lp_level_table326_2_buf359) {
  return lp_level_table326_2_buf359;
}

hw_uint<256> level_table61_ld1756_cu6861(hw_uint<32*8>& level_table61) {
  return level_table61;
}

hw_uint<128> gp_level_table167_1_buf172_to_gp_391339_ld1964_cu6863(hw_uint<32*4>& gp_level_table167_1_buf172_to_gp_391339) {
  return gp_level_table167_1_buf172_to_gp_391339;
}

hw_uint<64> lp_level_table114_2_buf147_ld1776_cu6865(hw_uint<32*2>& lp_level_table114_2_buf147) {
  return lp_level_table114_2_buf147;
}

hw_uint<128> lp_level_table167_1_buf208_ld1784_cu6867(hw_uint<32*4>& lp_level_table167_1_buf208) {
  return lp_level_table167_1_buf208;
}

hw_uint<128> gp_level_table114_1_buf119_to_gp_731295_ld1920_cu6869(hw_uint<32*4>& gp_level_table114_1_buf119_to_gp_731295) {
  return gp_level_table114_1_buf119_to_gp_731295;
}

hw_uint<256> gray_ld1648_cu6871(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> level_table220_ld1720_cu6873(hw_uint<32*8>& level_table220) {
  return level_table220;
}

hw_uint<256> level_table326_ld1740_cu6875(hw_uint<32*8>& level_table326) {
  return level_table326;
}

hw_uint<256> gray_ld1664_cu6877(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> gray_ld1676_cu6879(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> gray_ld1660_cu6881(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> gp_level_table8_1_buf13_us53_ld1612_cu6883(hw_uint<32*8>& gp_level_table8_1_buf13_us53) {
  return gp_level_table8_1_buf13_us53;
}

hw_uint<256> gray_ld1672_cu6885(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> gray_ld1680_cu6887(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> gray_ld1644_cu6889(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> gray_ld1656_cu6891(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> gray_int_ld1688_cu6893(hw_uint<32*8>& gray_int) {
  return gray_int;
}

hw_uint<256> gray_interpolated456_ld1692_cu6895(hw_uint<32*8>& gray_interpolated456) {
  return gray_interpolated456;
}

hw_uint<256> gray_ld1684_cu6897(hw_uint<32*8>& gray) {
  return gray;
}

hw_uint<256> level_table114_ld1704_cu6899(hw_uint<32*8>& level_table114) {
  return level_table114;
}

hw_uint<256> gray_interpolated456_reconstruct_lp494_buf497_ld1696_cu6901(hw_uint<32*8>& gray_interpolated456_reconstruct_lp494_buf497) {
  return gray_interpolated456_reconstruct_lp494_buf497;
}

hw_uint<256> level_table167_ld1712_cu6903(hw_uint<32*8>& level_table167) {
  return level_table167;
}

hw_uint<256> level_table220_ld1724_cu6905(hw_uint<32*8>& level_table220) {
  return level_table220;
}

hw_uint<256> level_table273_ld1728_cu6907(hw_uint<32*8>& level_table273) {
  return level_table273;
}

hw_uint<256> level_table273_ld1732_cu6909(hw_uint<32*8>& level_table273) {
  return level_table273;
}

hw_uint<256> level_table326_ld1736_cu6911(hw_uint<32*8>& level_table326) {
  return level_table326;
}

hw_uint<256> level_table379_ld1748_cu6913(hw_uint<32*8>& level_table379) {
  return level_table379;
}

hw_uint<256> level_table61_ld1752_cu6915(hw_uint<32*8>& level_table61) {
  return level_table61;
}

hw_uint<256> level_table8_ld1764_cu6917(hw_uint<32*8>& level_table8) {
  return level_table8;
}

hw_uint<128> lp_level_table114_1_buf155_ld1772_cu6919(hw_uint<32*4>& lp_level_table114_1_buf155) {
  return lp_level_table114_1_buf155;
}

hw_uint<128> lp_level_table61_1_buf102_ld1844_cu6921(hw_uint<32*4>& lp_level_table61_1_buf102) {
  return lp_level_table61_1_buf102;
}

hw_uint<256> lp_level_table379_0_buf428_ld1828_cu6923(hw_uint<32*8>& lp_level_table379_0_buf428) {
  return lp_level_table379_0_buf428;
}

hw_uint<128> lp_level_table8_1_buf49_ld1856_cu6925(hw_uint<32*4>& lp_level_table8_1_buf49) {
  return lp_level_table8_1_buf49;
}

hw_uint<64> lp_level_table167_2_buf200_ld1788_cu6927(hw_uint<32*2>& lp_level_table167_2_buf200) {
  return lp_level_table167_2_buf200;
}

hw_uint<256> lp_level_table273_0_buf322_ld1804_cu6929(hw_uint<32*8>& lp_level_table273_0_buf322) {
  return lp_level_table273_0_buf322;
}

hw_uint<128> gp_gray_1_buf432_to_gp_31243_ld1868_cu6931(hw_uint<32*4>& gp_gray_1_buf432_to_gp_31243) {
  return gp_gray_1_buf432_to_gp_31243;
}

hw_uint<128> lp_level_table220_1_buf261_ld1796_cu6933(hw_uint<32*4>& lp_level_table220_1_buf261) {
  return lp_level_table220_1_buf261;
}

hw_uint<256> level_table379_ld1744_cu6935(hw_uint<32*8>& level_table379) {
  return level_table379;
}

hw_uint<128> lp_level_table326_1_buf367_ld1820_cu6937(hw_uint<32*4>& lp_level_table326_1_buf367) {
  return lp_level_table326_1_buf367;
}

hw_uint<256> lp_level_table167_0_buf216_ld1780_cu6939(hw_uint<32*8>& lp_level_table167_0_buf216) {
  return lp_level_table167_0_buf216;
}

hw_uint<128> lp_level_table273_1_buf314_ld1808_cu6941(hw_uint<32*4>& lp_level_table273_1_buf314) {
  return lp_level_table273_1_buf314;
}

hw_uint<64> lp_level_table273_2_buf306_ld1812_cu6943(hw_uint<32*2>& lp_level_table273_2_buf306) {
  return lp_level_table273_2_buf306;
}

hw_uint<64> lp_level_table61_2_buf94_ld1848_cu6945(hw_uint<32*2>& lp_level_table61_2_buf94) {
  return lp_level_table61_2_buf94;
}

hw_uint<64> lp_level_table379_2_buf412_ld1836_cu6947(hw_uint<32*2>& lp_level_table379_2_buf412) {
  return lp_level_table379_2_buf412;
}

hw_uint<128> gp_gray_1_buf432_to_gp_11239_ld1864_cu6949(hw_uint<32*4>& gp_gray_1_buf432_to_gp_11239) {
  return gp_gray_1_buf432_to_gp_11239;
}

hw_uint<64> gp_gray_2_buf440_to_gp_41259_ld1884_cu6951(hw_uint<32*2>& gp_gray_2_buf440_to_gp_41259) {
  return gp_gray_2_buf440_to_gp_41259;
}

hw_uint<256> lp_level_table61_0_buf110_ld1840_cu6953(hw_uint<32*8>& lp_level_table61_0_buf110) {
  return lp_level_table61_0_buf110;
}

hw_uint<128> lp_level_table379_1_buf420_ld1832_cu6955(hw_uint<32*4>& lp_level_table379_1_buf420) {
  return lp_level_table379_1_buf420;
}

hw_uint<128> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_to_gp_701251_ld1876_cu6957(hw_uint<32*4>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_to_gp_701251) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_to_gp_701251;
}

hw_uint<64> gp_gray_2_buf440_interpolated466_to_gp_51267_ld1892_cu6959(hw_uint<32*2>& gp_gray_2_buf440_interpolated466_to_gp_51267) {
  return gp_gray_2_buf440_interpolated466_to_gp_51267;
}

hw_uint<128> gp_level_table167_2_buf180_us204_to_gp_391363_ld1988_cu6961(hw_uint<32*4>& gp_level_table167_2_buf180_us204_to_gp_391363) {
  return gp_level_table167_2_buf180_us204_to_gp_391363;
}

hw_uint<256> lp_level_table326_0_buf375_ld1816_cu6963(hw_uint<32*8>& lp_level_table326_0_buf375) {
  return lp_level_table326_0_buf375;
}

hw_uint<128> gp_level_table114_1_buf119_to_gp_361291_ld1916_cu6965(hw_uint<32*4>& gp_level_table114_1_buf119_to_gp_361291) {
  return gp_level_table114_1_buf119_to_gp_361291;
}

hw_uint<256> lp_level_table8_0_buf57_ld1852_cu6967(hw_uint<32*8>& lp_level_table8_0_buf57) {
  return lp_level_table8_0_buf57;
}

hw_uint<256> gp_level_table114_1_buf119_us159_to_gp_351303_ld1928_cu6969(hw_uint<32*8>& gp_level_table114_1_buf119_us159_to_gp_351303) {
  return gp_level_table114_1_buf119_us159_to_gp_351303;
}

hw_uint<128> gp_gray_1_buf432_interpolated461_to_gp_21247_ld1872_cu6971(hw_uint<32*4>& gp_gray_1_buf432_interpolated461_to_gp_21247) {
  return gp_gray_1_buf432_interpolated461_to_gp_21247;
}

hw_uint<128> gp_level_table114_1_buf119_to_gp_91299_ld1924_cu6973(hw_uint<32*4>& gp_level_table114_1_buf119_to_gp_91299) {
  return gp_level_table114_1_buf119_to_gp_91299;
}

hw_uint<128> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_to_gp_21275_ld1900_cu6975(hw_uint<32*4>& gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_to_gp_21275) {
  return gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_us489_to_gp_21275;
}

hw_uint<64> gp_level_table167_2_buf180_to_gp_131351_ld1976_cu6977(hw_uint<32*2>& gp_level_table167_2_buf180_to_gp_131351) {
  return gp_level_table167_2_buf180_to_gp_131351;
}

hw_uint<64> lp_level_table8_2_buf41_ld1860_cu6979(hw_uint<32*2>& lp_level_table8_2_buf41) {
  return lp_level_table8_2_buf41;
}

hw_uint<256> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_to_gp_331255_ld1880_cu6981(hw_uint<32*8>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_to_gp_331255) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_to_gp_331255;
}

hw_uint<64> gp_gray_2_buf440_to_gp_61263_ld1888_cu6983(hw_uint<32*2>& gp_gray_2_buf440_to_gp_61263) {
  return gp_gray_2_buf440_to_gp_61263;
}

hw_uint<128> gp_level_table220_1_buf225_to_gp_791387_ld2012_cu6985(hw_uint<32*4>& gp_level_table220_1_buf225_to_gp_791387) {
  return gp_level_table220_1_buf225_to_gp_791387;
}

hw_uint<64> gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_to_gp_711271_ld1896_cu6987(hw_uint<32*2>& gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_to_gp_711271) {
  return gp_gray_2_buf440_interpolated466_reconstruct_lp476_buf479_to_gp_711271;
}

hw_uint<64> gp_gray_3_buf448_interpolated471_us480_to_gp_51287_ld1912_cu6989(hw_uint<32*2>& gp_gray_3_buf448_interpolated471_us480_to_gp_51287) {
  return gp_gray_3_buf448_interpolated471_us480_to_gp_51287;
}

hw_uint<64> gp_level_table114_2_buf127_to_gp_101307_ld1932_cu6991(hw_uint<32*2>& gp_level_table114_2_buf127_to_gp_101307) {
  return gp_level_table114_2_buf127_to_gp_101307;
}

hw_uint<64> gp_level_table167_2_buf180_to_gp_771359_ld1984_cu6993(hw_uint<32*2>& gp_level_table167_2_buf180_to_gp_771359) {
  return gp_level_table167_2_buf180_to_gp_771359;
}

hw_uint<64> gp_level_table114_2_buf127_to_gp_371311_ld1936_cu6995(hw_uint<32*2>& gp_level_table114_2_buf127_to_gp_371311) {
  return gp_level_table114_2_buf127_to_gp_371311;
}

hw_uint<128> gp_level_table114_2_buf127_us151_to_gp_361319_ld1944_cu6997(hw_uint<32*4>& gp_level_table114_2_buf127_us151_to_gp_361319) {
  return gp_level_table114_2_buf127_us151_to_gp_361319;
}

hw_uint<64> gp_level_table114_2_buf127_to_gp_741315_ld1940_cu6999(hw_uint<32*2>& gp_level_table114_2_buf127_to_gp_741315) {
  return gp_level_table114_2_buf127_to_gp_741315;
}

hw_uint<64> gp_level_table114_3_buf135_us143_to_gp_371331_ld1956_cu7001(hw_uint<32*2>& gp_level_table114_3_buf135_us143_to_gp_371331) {
  return gp_level_table114_3_buf135_us143_to_gp_371331;
}

hw_uint<128> gp_level_table167_1_buf172_to_gp_761343_ld1968_cu7003(hw_uint<32*4>& gp_level_table167_1_buf172_to_gp_761343) {
  return gp_level_table167_1_buf172_to_gp_761343;
}

hw_uint<128> gp_level_table220_1_buf225_to_gp_421383_ld2008_cu7005(hw_uint<32*4>& gp_level_table220_1_buf225_to_gp_421383) {
  return gp_level_table220_1_buf225_to_gp_421383;
}

hw_uint<64> gp_level_table220_3_buf241_us249_to_gp_431419_ld2044_cu7007(hw_uint<32*2>& gp_level_table220_3_buf241_us249_to_gp_431419) {
  return gp_level_table220_3_buf241_us249_to_gp_431419;
}

hw_uint<64> gp_level_table379_2_buf392_to_gp_891535_ld2160_cu7009(hw_uint<32*2>& gp_level_table379_2_buf392_to_gp_891535) {
  return gp_level_table379_2_buf392_to_gp_891535;
}

hw_uint<64> gp_level_table379_3_buf400_us408_to_gp_521551_ld2176_cu7011(hw_uint<32*2>& gp_level_table379_3_buf400_us408_to_gp_521551) {
  return gp_level_table379_3_buf400_us408_to_gp_521551;
}

hw_uint<64> gp_level_table220_2_buf233_to_gp_801403_ld2028_cu7013(hw_uint<32*2>& gp_level_table220_2_buf233_to_gp_801403) {
  return gp_level_table220_2_buf233_to_gp_801403;
}

hw_uint<64> gp_level_table220_2_buf233_to_gp_161395_ld2020_cu7015(hw_uint<32*2>& gp_level_table220_2_buf233_to_gp_161395) {
  return gp_level_table220_2_buf233_to_gp_161395;
}

hw_uint<128> gp_level_table167_1_buf172_to_gp_121335_ld1960_cu7017(hw_uint<32*4>& gp_level_table167_1_buf172_to_gp_121335) {
  return gp_level_table167_1_buf172_to_gp_121335;
}

hw_uint<128> gp_level_table220_2_buf233_us257_to_gp_421407_ld2032_cu7019(hw_uint<32*4>& gp_level_table220_2_buf233_us257_to_gp_421407) {
  return gp_level_table220_2_buf233_us257_to_gp_421407;
}

hw_uint<128> gp_level_table273_1_buf278_to_gp_451427_ld2052_cu7021(hw_uint<32*4>& gp_level_table273_1_buf278_to_gp_451427) {
  return gp_level_table273_1_buf278_to_gp_451427;
}

hw_uint<64> gp_level_table273_2_buf286_to_gp_461443_ld2068_cu7023(hw_uint<32*2>& gp_level_table273_2_buf286_to_gp_461443) {
  return gp_level_table273_2_buf286_to_gp_461443;
}

hw_uint<64> gp_level_table167_3_buf188_us196_to_gp_401375_ld2000_cu7025(hw_uint<32*2>& gp_level_table167_3_buf188_us196_to_gp_401375) {
  return gp_level_table167_3_buf188_us196_to_gp_401375;
}

hw_uint<256> gp_level_table273_1_buf278_us318_to_gp_441435_ld2060_cu7027(hw_uint<32*8>& gp_level_table273_1_buf278_us318_to_gp_441435) {
  return gp_level_table273_1_buf278_us318_to_gp_441435;
}

hw_uint<64> gp_level_table167_2_buf180_to_gp_401355_ld1980_cu7029(hw_uint<32*2>& gp_level_table167_2_buf180_to_gp_401355) {
  return gp_level_table167_2_buf180_to_gp_401355;
}

hw_uint<128> gp_level_table220_1_buf225_to_gp_151379_ld2004_cu7031(hw_uint<32*4>& gp_level_table220_1_buf225_to_gp_151379) {
  return gp_level_table220_1_buf225_to_gp_151379;
}

hw_uint<256> gp_level_table220_1_buf225_us265_to_gp_411391_ld2016_cu7033(hw_uint<32*8>& gp_level_table220_1_buf225_us265_to_gp_411391) {
  return gp_level_table220_1_buf225_us265_to_gp_411391;
}

hw_uint<64> gp_level_table326_2_buf339_to_gp_491487_ld2112_cu7035(hw_uint<32*2>& gp_level_table326_2_buf339_to_gp_491487) {
  return gp_level_table326_2_buf339_to_gp_491487;
}

hw_uint<64> gp_level_table273_2_buf286_to_gp_191439_ld2064_cu7037(hw_uint<32*2>& gp_level_table273_2_buf286_to_gp_191439) {
  return gp_level_table273_2_buf286_to_gp_191439;
}

hw_uint<128> gp_level_table326_1_buf331_to_gp_211467_ld2092_cu7039(hw_uint<32*4>& gp_level_table326_1_buf331_to_gp_211467) {
  return gp_level_table326_1_buf331_to_gp_211467;
}

hw_uint<64> gp_level_table326_2_buf339_to_gp_221483_ld2108_cu7041(hw_uint<32*2>& gp_level_table326_2_buf339_to_gp_221483) {
  return gp_level_table326_2_buf339_to_gp_221483;
}

hw_uint<64> gp_level_table379_2_buf392_to_gp_521531_ld2156_cu7043(hw_uint<32*2>& gp_level_table379_2_buf392_to_gp_521531) {
  return gp_level_table379_2_buf392_to_gp_521531;
}

hw_uint<64> gp_level_table379_2_buf392_to_gp_251527_ld2152_cu7045(hw_uint<32*2>& gp_level_table379_2_buf392_to_gp_251527) {
  return gp_level_table379_2_buf392_to_gp_251527;
}

hw_uint<64> gp_level_table220_2_buf233_to_gp_431399_ld2024_cu7047(hw_uint<32*2>& gp_level_table220_2_buf233_to_gp_431399) {
  return gp_level_table220_2_buf233_to_gp_431399;
}

hw_uint<128> gp_level_table273_1_buf278_to_gp_821431_ld2056_cu7049(hw_uint<32*4>& gp_level_table273_1_buf278_to_gp_821431) {
  return gp_level_table273_1_buf278_to_gp_821431;
}

hw_uint<64> gp_level_table273_2_buf286_to_gp_831447_ld2072_cu7051(hw_uint<32*2>& gp_level_table273_2_buf286_to_gp_831447) {
  return gp_level_table273_2_buf286_to_gp_831447;
}

hw_uint<128> gp_level_table326_1_buf331_to_gp_851475_ld2100_cu7053(hw_uint<32*4>& gp_level_table326_1_buf331_to_gp_851475) {
  return gp_level_table326_1_buf331_to_gp_851475;
}

hw_uint<128> gp_level_table273_1_buf278_to_gp_181423_ld2048_cu7055(hw_uint<32*4>& gp_level_table273_1_buf278_to_gp_181423) {
  return gp_level_table273_1_buf278_to_gp_181423;
}

hw_uint<128> gp_level_table61_1_buf66_to_gp_271555_ld2180_cu7057(hw_uint<32*4>& gp_level_table61_1_buf66_to_gp_271555) {
  return gp_level_table61_1_buf66_to_gp_271555;
}

hw_uint<64> gp_level_table326_2_buf339_to_gp_861491_ld2116_cu7059(hw_uint<32*2>& gp_level_table326_2_buf339_to_gp_861491) {
  return gp_level_table326_2_buf339_to_gp_861491;
}

hw_uint<128> gp_level_table273_2_buf286_us310_to_gp_451451_ld2076_cu7061(hw_uint<32*4>& gp_level_table273_2_buf286_us310_to_gp_451451) {
  return gp_level_table273_2_buf286_us310_to_gp_451451;
}

hw_uint<256> gp_level_table326_1_buf331_us371_to_gp_471479_ld2104_cu7063(hw_uint<32*8>& gp_level_table326_1_buf331_us371_to_gp_471479) {
  return gp_level_table326_1_buf331_us371_to_gp_471479;
}

hw_uint<128> gp_level_table326_1_buf331_to_gp_481471_ld2096_cu7065(hw_uint<32*4>& gp_level_table326_1_buf331_to_gp_481471) {
  return gp_level_table326_1_buf331_to_gp_481471;
}

hw_uint<128> gp_level_table379_1_buf384_to_gp_241511_ld2136_cu7067(hw_uint<32*4>& gp_level_table379_1_buf384_to_gp_241511) {
  return gp_level_table379_1_buf384_to_gp_241511;
}

hw_uint<128> gp_level_table379_1_buf384_to_gp_511515_ld2140_cu7069(hw_uint<32*4>& gp_level_table379_1_buf384_to_gp_511515) {
  return gp_level_table379_1_buf384_to_gp_511515;
}

hw_uint<256> gp_level_table379_1_buf384_us424_to_gp_501523_ld2148_cu7071(hw_uint<32*8>& gp_level_table379_1_buf384_us424_to_gp_501523) {
  return gp_level_table379_1_buf384_us424_to_gp_501523;
}

hw_uint<64> gp_level_table273_3_buf294_us302_to_gp_461463_ld2088_cu7073(hw_uint<32*2>& gp_level_table273_3_buf294_us302_to_gp_461463) {
  return gp_level_table273_3_buf294_us302_to_gp_461463;
}

hw_uint<128> gp_level_table379_2_buf392_us416_to_gp_511539_ld2164_cu7075(hw_uint<32*4>& gp_level_table379_2_buf392_us416_to_gp_511539) {
  return gp_level_table379_2_buf392_us416_to_gp_511539;
}

hw_uint<64> gp_level_table61_2_buf74_to_gp_551575_ld2200_cu7077(hw_uint<32*2>& gp_level_table61_2_buf74_to_gp_551575) {
  return gp_level_table61_2_buf74_to_gp_551575;
}

hw_uint<64> gp_level_table326_3_buf347_us355_to_gp_491507_ld2132_cu7079(hw_uint<32*2>& gp_level_table326_3_buf347_us355_to_gp_491507) {
  return gp_level_table326_3_buf347_us355_to_gp_491507;
}

hw_uint<128> gp_level_table61_2_buf74_us98_to_gp_541583_ld2208_cu7081(hw_uint<32*4>& gp_level_table61_2_buf74_us98_to_gp_541583) {
  return gp_level_table61_2_buf74_us98_to_gp_541583;
}

hw_uint<128> gp_level_table326_2_buf339_us363_to_gp_481495_ld2120_cu7083(hw_uint<32*4>& gp_level_table326_2_buf339_us363_to_gp_481495) {
  return gp_level_table326_2_buf339_us363_to_gp_481495;
}

hw_uint<128> gp_level_table8_1_buf13_to_gp_301599_ld2224_cu7085(hw_uint<32*4>& gp_level_table8_1_buf13_to_gp_301599) {
  return gp_level_table8_1_buf13_to_gp_301599;
}

hw_uint<256> gray_to_gp_601655_ld2280_cu7087(hw_uint<32*8>& gray_to_gp_601655) {
  return gray_to_gp_601655;
}

hw_uint<64> gp_level_table8_3_buf29_us37_to_gp_581639_ld2264_cu7089(hw_uint<32*2>& gp_level_table8_3_buf29_us37_to_gp_581639) {
  return gp_level_table8_3_buf29_us37_to_gp_581639;
}

hw_uint<64> gp_level_table8_2_buf21_to_gp_581619_ld2244_cu7091(hw_uint<32*2>& gp_level_table8_2_buf21_to_gp_581619) {
  return gp_level_table8_2_buf21_to_gp_581619;
}

hw_uint<128> gp_level_table379_1_buf384_to_gp_881519_ld2144_cu7093(hw_uint<32*4>& gp_level_table379_1_buf384_to_gp_881519) {
  return gp_level_table379_1_buf384_to_gp_881519;
}

hw_uint<128> gp_level_table61_1_buf66_to_gp_911563_ld2188_cu7095(hw_uint<32*4>& gp_level_table61_1_buf66_to_gp_911563) {
  return gp_level_table61_1_buf66_to_gp_911563;
}

hw_uint<64> gp_level_table8_2_buf21_to_gp_311615_ld2240_cu7097(hw_uint<32*2>& gp_level_table8_2_buf21_to_gp_311615) {
  return gp_level_table8_2_buf21_to_gp_311615;
}

hw_uint<64> gp_level_table61_2_buf74_to_gp_281571_ld2196_cu7099(hw_uint<32*2>& gp_level_table61_2_buf74_to_gp_281571) {
  return gp_level_table61_2_buf74_to_gp_281571;
}

hw_uint<256> gp_level_table61_1_buf66_us106_to_gp_531567_ld2192_cu7101(hw_uint<32*8>& gp_level_table61_1_buf66_us106_to_gp_531567) {
  return gp_level_table61_1_buf66_us106_to_gp_531567;
}

hw_uint<64> gp_level_table61_2_buf74_to_gp_921579_ld2204_cu7103(hw_uint<32*2>& gp_level_table61_2_buf74_to_gp_921579) {
  return gp_level_table61_2_buf74_to_gp_921579;
}

hw_uint<64> gp_level_table61_3_buf82_us90_to_gp_551595_ld2220_cu7105(hw_uint<32*2>& gp_level_table61_3_buf82_us90_to_gp_551595) {
  return gp_level_table61_3_buf82_us90_to_gp_551595;
}

hw_uint<256> gray_to_gp_341651_ld2276_cu7107(hw_uint<32*8>& gray_to_gp_341651) {
  return gray_to_gp_341651;
}

hw_uint<128> gp_level_table8_2_buf21_us45_to_gp_571627_ld2252_cu7109(hw_uint<32*4>& gp_level_table8_2_buf21_us45_to_gp_571627) {
  return gp_level_table8_2_buf21_us45_to_gp_571627;
}

hw_uint<256> gray_to_gp_321647_ld2272_cu7111(hw_uint<32*8>& gray_to_gp_321647) {
  return gray_to_gp_321647;
}

hw_uint<256> gray_to_gp_661679_ld2304_cu7113(hw_uint<32*8>& gray_to_gp_661679) {
  return gray_to_gp_661679;
}

hw_uint<256> gray_to_gp_641671_ld2296_cu7115(hw_uint<32*8>& gray_to_gp_641671) {
  return gray_to_gp_641671;
}

hw_uint<256> gray_to_gp_611659_ld2284_cu7117(hw_uint<32*8>& gray_to_gp_611659) {
  return gray_to_gp_611659;
}

hw_uint<256> gray_to_gp_631667_ld2292_cu7119(hw_uint<32*8>& gray_to_gp_631667) {
  return gray_to_gp_631667;
}

hw_uint<256> gray_to_gp_01643_ld2268_cu7121(hw_uint<32*8>& gray_to_gp_01643) {
  return gray_to_gp_01643;
}

hw_uint<256> gray_out_float_to_gp_691699_ld2324_cu7123(hw_uint<32*8>& gray_out_float_to_gp_691699) {
  return gray_out_float_to_gp_691699;
}

hw_uint<256> level_table273_to_gp_171727_ld2352_cu7125(hw_uint<32*8>& level_table273_to_gp_171727) {
  return level_table273_to_gp_171727;
}

hw_uint<256> level_table114_to_gp_351703_ld2328_cu7127(hw_uint<32*8>& level_table114_to_gp_351703) {
  return level_table114_to_gp_351703;
}

hw_uint<256> level_table379_to_gp_501747_ld2372_cu7129(hw_uint<32*8>& level_table379_to_gp_501747) {
  return level_table379_to_gp_501747;
}

hw_uint<256> level_table8_to_gp_561763_ld2388_cu7131(hw_uint<32*8>& level_table8_to_gp_561763) {
  return level_table8_to_gp_561763;
}

hw_uint<256> level_table61_to_gp_531755_ld2380_cu7133(hw_uint<32*8>& level_table61_to_gp_531755) {
  return level_table61_to_gp_531755;
}

hw_uint<128> gp_level_table8_1_buf13_to_gp_941607_ld2232_cu7135(hw_uint<32*4>& gp_level_table8_1_buf13_to_gp_941607) {
  return gp_level_table8_1_buf13_to_gp_941607;
}

hw_uint<256> gp_level_table8_1_buf13_us53_to_gp_561611_ld2236_cu7137(hw_uint<32*8>& gp_level_table8_1_buf13_us53_to_gp_561611) {
  return gp_level_table8_1_buf13_us53_to_gp_561611;
}

hw_uint<128> gp_level_table8_1_buf13_to_gp_571603_ld2228_cu7139(hw_uint<32*4>& gp_level_table8_1_buf13_to_gp_571603) {
  return gp_level_table8_1_buf13_to_gp_571603;
}

hw_uint<64> lp_level_table167_2_buf200_to_gp_41787_ld2412_cu7141(hw_uint<32*2>& lp_level_table167_2_buf200_to_gp_41787) {
  return lp_level_table167_2_buf200_to_gp_41787;
}

hw_uint<256> lp_level_table167_0_buf216_to_gp_321779_ld2404_cu7143(hw_uint<32*8>& lp_level_table167_0_buf216_to_gp_321779) {
  return lp_level_table167_0_buf216_to_gp_321779;
}

hw_uint<256> gray_to_gp_651675_ld2300_cu7145(hw_uint<32*8>& gray_to_gp_651675) {
  return gray_to_gp_651675;
}

hw_uint<64> gp_level_table8_2_buf21_to_gp_951623_ld2248_cu7147(hw_uint<32*2>& gp_level_table8_2_buf21_to_gp_951623) {
  return gp_level_table8_2_buf21_to_gp_951623;
}

hw_uint<256> gray_to_gp_621663_ld2288_cu7149(hw_uint<32*8>& gray_to_gp_621663) {
  return gray_to_gp_621663;
}

hw_uint<256> level_table114_to_gp_81707_ld2332_cu7151(hw_uint<32*8>& level_table114_to_gp_81707) {
  return level_table114_to_gp_81707;
}

hw_uint<256> level_table167_to_gp_111711_ld2336_cu7153(hw_uint<32*8>& level_table167_to_gp_111711) {
  return level_table167_to_gp_111711;
}

hw_uint<256> gray_interpolated456_to_gp_331691_ld2316_cu7155(hw_uint<32*8>& gray_interpolated456_to_gp_331691) {
  return gray_interpolated456_to_gp_331691;
}

hw_uint<256> gray_interpolated456_reconstruct_lp494_buf497_to_gp_341695_ld2320_cu7157(hw_uint<32*8>& gray_interpolated456_reconstruct_lp494_buf497_to_gp_341695) {
  return gray_interpolated456_reconstruct_lp494_buf497_to_gp_341695;
}

hw_uint<256> level_table220_to_gp_141719_ld2344_cu7159(hw_uint<32*8>& level_table220_to_gp_141719) {
  return level_table220_to_gp_141719;
}

hw_uint<256> lp_level_table273_0_buf322_to_gp_321803_ld2428_cu7161(hw_uint<32*8>& lp_level_table273_0_buf322_to_gp_321803) {
  return lp_level_table273_0_buf322_to_gp_321803;
}

hw_uint<256> level_table326_to_gp_471739_ld2364_cu7163(hw_uint<32*8>& level_table326_to_gp_471739) {
  return level_table326_to_gp_471739;
}

hw_uint<64> lp_level_table61_2_buf94_to_gp_41847_ld2472_cu7165(hw_uint<32*2>& lp_level_table61_2_buf94_to_gp_41847) {
  return lp_level_table61_2_buf94_to_gp_41847;
}

hw_uint<256> level_table61_to_gp_261751_ld2376_cu7167(hw_uint<32*8>& level_table61_to_gp_261751) {
  return level_table61_to_gp_261751;
}

hw_uint<256> level_table8_to_gp_291759_ld2384_cu7169(hw_uint<32*8>& level_table8_to_gp_291759) {
  return level_table8_to_gp_291759;
}

hw_uint<256> gray_int_to_gp_681687_ld2312_cu7171(hw_uint<32*8>& gray_int_to_gp_681687) {
  return gray_int_to_gp_681687;
}

hw_uint<256> level_table167_to_gp_381715_ld2340_cu7173(hw_uint<32*8>& level_table167_to_gp_381715) {
  return level_table167_to_gp_381715;
}

hw_uint<128> lp_level_table8_1_buf49_to_gp_11855_ld2480_cu7175(hw_uint<32*4>& lp_level_table8_1_buf49_to_gp_11855) {
  return lp_level_table8_1_buf49_to_gp_11855;
}

hw_uint<256> level_table220_to_gp_411723_ld2348_cu7177(hw_uint<32*8>& level_table220_to_gp_411723) {
  return level_table220_to_gp_411723;
}

hw_uint<128> lp_level_table61_1_buf102_to_gp_11843_ld2468_cu7179(hw_uint<32*4>& lp_level_table61_1_buf102_to_gp_11843) {
  return lp_level_table61_1_buf102_to_gp_11843;
}

hw_uint<64> lp_level_table326_2_buf359_to_gp_41823_ld2448_cu7181(hw_uint<32*2>& lp_level_table326_2_buf359_to_gp_41823) {
  return lp_level_table326_2_buf359_to_gp_41823;
}

hw_uint<256> lp_level_table114_0_buf163_to_gp_321767_ld2392_cu7183(hw_uint<32*8>& lp_level_table114_0_buf163_to_gp_321767) {
  return lp_level_table114_0_buf163_to_gp_321767;
}

hw_uint<64> lp_level_table114_2_buf147_to_gp_41775_ld2400_cu7185(hw_uint<32*2>& lp_level_table114_2_buf147_to_gp_41775) {
  return lp_level_table114_2_buf147_to_gp_41775;
}

hw_uint<64> lp_level_table379_2_buf412_to_gp_41835_ld2460_cu7187(hw_uint<32*2>& lp_level_table379_2_buf412_to_gp_41835) {
  return lp_level_table379_2_buf412_to_gp_41835;
}

hw_uint<128> lp_level_table114_1_buf155_to_gp_11771_ld2396_cu7189(hw_uint<32*4>& lp_level_table114_1_buf155_to_gp_11771) {
  return lp_level_table114_1_buf155_to_gp_11771;
}

hw_uint<128> lp_level_table273_1_buf314_to_gp_11807_ld2432_cu7191(hw_uint<32*4>& lp_level_table273_1_buf314_to_gp_11807) {
  return lp_level_table273_1_buf314_to_gp_11807;
}

hw_uint<256> lp_level_table61_0_buf110_to_gp_321839_ld2464_cu7193(hw_uint<32*8>& lp_level_table61_0_buf110_to_gp_321839) {
  return lp_level_table61_0_buf110_to_gp_321839;
}

hw_uint<128> lp_level_table167_1_buf208_to_gp_11783_ld2408_cu7195(hw_uint<32*4>& lp_level_table167_1_buf208_to_gp_11783) {
  return lp_level_table167_1_buf208_to_gp_11783;
}

hw_uint<256> level_table273_to_gp_441731_ld2356_cu7197(hw_uint<32*8>& level_table273_to_gp_441731) {
  return level_table273_to_gp_441731;
}

hw_uint<256> level_table326_to_gp_201735_ld2360_cu7199(hw_uint<32*8>& level_table326_to_gp_201735) {
  return level_table326_to_gp_201735;
}

hw_uint<256> level_table379_to_gp_231743_ld2368_cu7201(hw_uint<32*8>& level_table379_to_gp_231743) {
  return level_table379_to_gp_231743;
}

hw_uint<256> lp_level_table326_0_buf375_to_gp_321815_ld2440_cu7203(hw_uint<32*8>& lp_level_table326_0_buf375_to_gp_321815) {
  return lp_level_table326_0_buf375_to_gp_321815;
}

hw_uint<64> lp_level_table220_2_buf253_to_gp_41799_ld2424_cu7205(hw_uint<32*2>& lp_level_table220_2_buf253_to_gp_41799) {
  return lp_level_table220_2_buf253_to_gp_41799;
}

hw_uint<64> lp_level_table273_2_buf306_to_gp_41811_ld2436_cu7207(hw_uint<32*2>& lp_level_table273_2_buf306_to_gp_41811) {
  return lp_level_table273_2_buf306_to_gp_41811;
}

hw_uint<256> lp_level_table220_0_buf269_to_gp_321791_ld2416_cu7209(hw_uint<32*8>& lp_level_table220_0_buf269_to_gp_321791) {
  return lp_level_table220_0_buf269_to_gp_321791;
}

hw_uint<128> lp_level_table326_1_buf367_to_gp_11819_ld2444_cu7211(hw_uint<32*4>& lp_level_table326_1_buf367_to_gp_11819) {
  return lp_level_table326_1_buf367_to_gp_11819;
}

hw_uint<128> lp_level_table220_1_buf261_to_gp_11795_ld2420_cu7213(hw_uint<32*4>& lp_level_table220_1_buf261_to_gp_11795) {
  return lp_level_table220_1_buf261_to_gp_11795;
}

hw_uint<256> lp_level_table379_0_buf428_to_gp_321827_ld2452_cu7215(hw_uint<32*8>& lp_level_table379_0_buf428_to_gp_321827) {
  return lp_level_table379_0_buf428_to_gp_321827;
}

hw_uint<128> lp_level_table379_1_buf420_to_gp_11831_ld2456_cu7217(hw_uint<32*4>& lp_level_table379_1_buf420_to_gp_11831) {
  return lp_level_table379_1_buf420_to_gp_11831;
}

hw_uint<64> lp_level_table8_2_buf41_to_gp_41859_ld2484_cu7219(hw_uint<32*2>& lp_level_table8_2_buf41_to_gp_41859) {
  return lp_level_table8_2_buf41_to_gp_41859;
}

