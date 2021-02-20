#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> pw_math_in0_oc02_cu892(hw_uint<32*16>& in0_oc) {
  hw_uint<32> in0_oc_lane_0 = in0_oc.extract<0, 31>();
  hw_uint<32> in0_oc_lane_1 = in0_oc.extract<32, 63>();
  hw_uint<32> in0_oc_lane_2 = in0_oc.extract<64, 95>();
  hw_uint<32> in0_oc_lane_3 = in0_oc.extract<96, 127>();
  hw_uint<32> in0_oc_lane_4 = in0_oc.extract<128, 159>();
  hw_uint<32> in0_oc_lane_5 = in0_oc.extract<160, 191>();
  hw_uint<32> in0_oc_lane_6 = in0_oc.extract<192, 223>();
  hw_uint<32> in0_oc_lane_7 = in0_oc.extract<224, 255>();
  hw_uint<32> in0_oc_lane_8 = in0_oc.extract<256, 287>();
  hw_uint<32> in0_oc_lane_9 = in0_oc.extract<288, 319>();
  hw_uint<32> in0_oc_lane_10 = in0_oc.extract<320, 351>();
  hw_uint<32> in0_oc_lane_11 = in0_oc.extract<352, 383>();
  hw_uint<32> in0_oc_lane_12 = in0_oc.extract<384, 415>();
  hw_uint<32> in0_oc_lane_13 = in0_oc.extract<416, 447>();
  hw_uint<32> in0_oc_lane_14 = in0_oc.extract<448, 479>();
  hw_uint<32> in0_oc_lane_15 = in0_oc.extract<480, 511>();

	
  hw_uint<32 > in0_oc_lane_0_pack;
  set_at<0, 32, 32>(in0_oc_lane_0_pack, in0_oc_lane_0);
  auto res_pw_math_in0_oc03_sm313_15890 = llf_int_to_float(in0_oc_lane_0_pack);

  hw_uint<32 > in0_oc_lane_1_pack;
  set_at<0, 32, 32>(in0_oc_lane_1_pack, in0_oc_lane_1);
  auto res_pw_math_in0_oc03_sm313_14888 = llf_int_to_float(in0_oc_lane_1_pack);

  hw_uint<32 > in0_oc_lane_2_pack;
  set_at<0, 32, 32>(in0_oc_lane_2_pack, in0_oc_lane_2);
  auto res_pw_math_in0_oc03_sm313_13886 = llf_int_to_float(in0_oc_lane_2_pack);

  hw_uint<32 > in0_oc_lane_3_pack;
  set_at<0, 32, 32>(in0_oc_lane_3_pack, in0_oc_lane_3);
  auto res_pw_math_in0_oc03_sm313_12884 = llf_int_to_float(in0_oc_lane_3_pack);

  hw_uint<32 > in0_oc_lane_4_pack;
  set_at<0, 32, 32>(in0_oc_lane_4_pack, in0_oc_lane_4);
  auto res_pw_math_in0_oc03_sm313_11882 = llf_int_to_float(in0_oc_lane_4_pack);

  hw_uint<32 > in0_oc_lane_5_pack;
  set_at<0, 32, 32>(in0_oc_lane_5_pack, in0_oc_lane_5);
  auto res_pw_math_in0_oc03_sm313_10880 = llf_int_to_float(in0_oc_lane_5_pack);

  hw_uint<32 > in0_oc_lane_6_pack;
  set_at<0, 32, 32>(in0_oc_lane_6_pack, in0_oc_lane_6);
  auto res_pw_math_in0_oc03_sm313_9878 = llf_int_to_float(in0_oc_lane_6_pack);

  hw_uint<32 > in0_oc_lane_7_pack;
  set_at<0, 32, 32>(in0_oc_lane_7_pack, in0_oc_lane_7);
  auto res_pw_math_in0_oc03_sm313_8876 = llf_int_to_float(in0_oc_lane_7_pack);

  hw_uint<32 > in0_oc_lane_8_pack;
  set_at<0, 32, 32>(in0_oc_lane_8_pack, in0_oc_lane_8);
  auto res_pw_math_in0_oc03_sm313_7874 = llf_int_to_float(in0_oc_lane_8_pack);

  hw_uint<32 > in0_oc_lane_9_pack;
  set_at<0, 32, 32>(in0_oc_lane_9_pack, in0_oc_lane_9);
  auto res_pw_math_in0_oc03_sm313_6872 = llf_int_to_float(in0_oc_lane_9_pack);

  hw_uint<32 > in0_oc_lane_10_pack;
  set_at<0, 32, 32>(in0_oc_lane_10_pack, in0_oc_lane_10);
  auto res_pw_math_in0_oc03_sm313_5870 = llf_int_to_float(in0_oc_lane_10_pack);

  hw_uint<32 > in0_oc_lane_11_pack;
  set_at<0, 32, 32>(in0_oc_lane_11_pack, in0_oc_lane_11);
  auto res_pw_math_in0_oc03_sm313_4868 = llf_int_to_float(in0_oc_lane_11_pack);

  hw_uint<32 > in0_oc_lane_12_pack;
  set_at<0, 32, 32>(in0_oc_lane_12_pack, in0_oc_lane_12);
  auto res_pw_math_in0_oc03_sm313_3866 = llf_int_to_float(in0_oc_lane_12_pack);

  hw_uint<32 > in0_oc_lane_13_pack;
  set_at<0, 32, 32>(in0_oc_lane_13_pack, in0_oc_lane_13);
  auto res_pw_math_in0_oc03_sm313_2864 = llf_int_to_float(in0_oc_lane_13_pack);

  hw_uint<32 > in0_oc_lane_14_pack;
  set_at<0, 32, 32>(in0_oc_lane_14_pack, in0_oc_lane_14);
  auto res_pw_math_in0_oc03_sm313_1862 = llf_int_to_float(in0_oc_lane_14_pack);

  hw_uint<32 > in0_oc_lane_15_pack;
  set_at<0, 32, 32>(in0_oc_lane_15_pack, in0_oc_lane_15);
  auto res_pw_math_in0_oc03_sm313_0860 = llf_int_to_float(in0_oc_lane_15_pack);
  hw_uint<512 > return_value893;
  set_at<0, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_15890);
  set_at<32, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_14888);
  set_at<64, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_13886);
  set_at<96, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_12884);
  set_at<128, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_11882);
  set_at<160, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_10880);
  set_at<192, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_9878);
  set_at<224, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_8876);
  set_at<256, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_7874);
  set_at<288, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_6872);
  set_at<320, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_5870);
  set_at<352, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_4868);
  set_at<384, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_3866);
  set_at<416, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_2864);
  set_at<448, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_1862);
  set_at<480, 512, 32>(return_value893, res_pw_math_in0_oc03_sm313_0860);
  return return_value893;

}

hw_uint<512> pw_math_in1_oc46_cu895(hw_uint<32*16>& in1_oc) {
  hw_uint<32> in1_oc_lane_0 = in1_oc.extract<0, 31>();
  hw_uint<32> in1_oc_lane_1 = in1_oc.extract<32, 63>();
  hw_uint<32> in1_oc_lane_2 = in1_oc.extract<64, 95>();
  hw_uint<32> in1_oc_lane_3 = in1_oc.extract<96, 127>();
  hw_uint<32> in1_oc_lane_4 = in1_oc.extract<128, 159>();
  hw_uint<32> in1_oc_lane_5 = in1_oc.extract<160, 191>();
  hw_uint<32> in1_oc_lane_6 = in1_oc.extract<192, 223>();
  hw_uint<32> in1_oc_lane_7 = in1_oc.extract<224, 255>();
  hw_uint<32> in1_oc_lane_8 = in1_oc.extract<256, 287>();
  hw_uint<32> in1_oc_lane_9 = in1_oc.extract<288, 319>();
  hw_uint<32> in1_oc_lane_10 = in1_oc.extract<320, 351>();
  hw_uint<32> in1_oc_lane_11 = in1_oc.extract<352, 383>();
  hw_uint<32> in1_oc_lane_12 = in1_oc.extract<384, 415>();
  hw_uint<32> in1_oc_lane_13 = in1_oc.extract<416, 447>();
  hw_uint<32> in1_oc_lane_14 = in1_oc.extract<448, 479>();
  hw_uint<32> in1_oc_lane_15 = in1_oc.extract<480, 511>();

	
  hw_uint<32 > in1_oc_lane_0_pack;
  set_at<0, 32, 32>(in1_oc_lane_0_pack, in1_oc_lane_0);
  auto res_pw_math_in1_oc47_sm314_15530 = llf_int_to_float(in1_oc_lane_0_pack);

  hw_uint<32 > in1_oc_lane_1_pack;
  set_at<0, 32, 32>(in1_oc_lane_1_pack, in1_oc_lane_1);
  auto res_pw_math_in1_oc47_sm314_14528 = llf_int_to_float(in1_oc_lane_1_pack);

  hw_uint<32 > in1_oc_lane_2_pack;
  set_at<0, 32, 32>(in1_oc_lane_2_pack, in1_oc_lane_2);
  auto res_pw_math_in1_oc47_sm314_13526 = llf_int_to_float(in1_oc_lane_2_pack);

  hw_uint<32 > in1_oc_lane_3_pack;
  set_at<0, 32, 32>(in1_oc_lane_3_pack, in1_oc_lane_3);
  auto res_pw_math_in1_oc47_sm314_12524 = llf_int_to_float(in1_oc_lane_3_pack);

  hw_uint<32 > in1_oc_lane_4_pack;
  set_at<0, 32, 32>(in1_oc_lane_4_pack, in1_oc_lane_4);
  auto res_pw_math_in1_oc47_sm314_11522 = llf_int_to_float(in1_oc_lane_4_pack);

  hw_uint<32 > in1_oc_lane_5_pack;
  set_at<0, 32, 32>(in1_oc_lane_5_pack, in1_oc_lane_5);
  auto res_pw_math_in1_oc47_sm314_10520 = llf_int_to_float(in1_oc_lane_5_pack);

  hw_uint<32 > in1_oc_lane_6_pack;
  set_at<0, 32, 32>(in1_oc_lane_6_pack, in1_oc_lane_6);
  auto res_pw_math_in1_oc47_sm314_9518 = llf_int_to_float(in1_oc_lane_6_pack);

  hw_uint<32 > in1_oc_lane_7_pack;
  set_at<0, 32, 32>(in1_oc_lane_7_pack, in1_oc_lane_7);
  auto res_pw_math_in1_oc47_sm314_8516 = llf_int_to_float(in1_oc_lane_7_pack);

  hw_uint<32 > in1_oc_lane_8_pack;
  set_at<0, 32, 32>(in1_oc_lane_8_pack, in1_oc_lane_8);
  auto res_pw_math_in1_oc47_sm314_7514 = llf_int_to_float(in1_oc_lane_8_pack);

  hw_uint<32 > in1_oc_lane_9_pack;
  set_at<0, 32, 32>(in1_oc_lane_9_pack, in1_oc_lane_9);
  auto res_pw_math_in1_oc47_sm314_6512 = llf_int_to_float(in1_oc_lane_9_pack);

  hw_uint<32 > in1_oc_lane_10_pack;
  set_at<0, 32, 32>(in1_oc_lane_10_pack, in1_oc_lane_10);
  auto res_pw_math_in1_oc47_sm314_5510 = llf_int_to_float(in1_oc_lane_10_pack);

  hw_uint<32 > in1_oc_lane_11_pack;
  set_at<0, 32, 32>(in1_oc_lane_11_pack, in1_oc_lane_11);
  auto res_pw_math_in1_oc47_sm314_4508 = llf_int_to_float(in1_oc_lane_11_pack);

  hw_uint<32 > in1_oc_lane_12_pack;
  set_at<0, 32, 32>(in1_oc_lane_12_pack, in1_oc_lane_12);
  auto res_pw_math_in1_oc47_sm314_3506 = llf_int_to_float(in1_oc_lane_12_pack);

  hw_uint<32 > in1_oc_lane_13_pack;
  set_at<0, 32, 32>(in1_oc_lane_13_pack, in1_oc_lane_13);
  auto res_pw_math_in1_oc47_sm314_2504 = llf_int_to_float(in1_oc_lane_13_pack);

  hw_uint<32 > in1_oc_lane_14_pack;
  set_at<0, 32, 32>(in1_oc_lane_14_pack, in1_oc_lane_14);
  auto res_pw_math_in1_oc47_sm314_1502 = llf_int_to_float(in1_oc_lane_14_pack);

  hw_uint<32 > in1_oc_lane_15_pack;
  set_at<0, 32, 32>(in1_oc_lane_15_pack, in1_oc_lane_15);
  auto res_pw_math_in1_oc47_sm314_0500 = llf_int_to_float(in1_oc_lane_15_pack);
  hw_uint<512 > return_value896;
  set_at<0, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_15530);
  set_at<32, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_14528);
  set_at<64, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_13526);
  set_at<96, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_12524);
  set_at<128, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_11522);
  set_at<160, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_10520);
  set_at<192, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_9518);
  set_at<224, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_8516);
  set_at<256, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_7514);
  set_at<288, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_6512);
  set_at<320, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_5510);
  set_at<352, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_4508);
  set_at<384, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_3506);
  set_at<416, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_2504);
  set_at<448, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_1502);
  set_at<480, 512, 32>(return_value896, res_pw_math_in1_oc47_sm314_0500);
  return return_value896;

}

hw_uint<256> gp_in0_110_cu898(hw_uint<32*72>& in0) {
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
  hw_uint<32> in0_lane_36 = in0.extract<1152, 1183>();
  hw_uint<32> in0_lane_37 = in0.extract<1184, 1215>();
  hw_uint<32> in0_lane_38 = in0.extract<1216, 1247>();
  hw_uint<32> in0_lane_39 = in0.extract<1248, 1279>();
  hw_uint<32> in0_lane_40 = in0.extract<1280, 1311>();
  hw_uint<32> in0_lane_41 = in0.extract<1312, 1343>();
  hw_uint<32> in0_lane_42 = in0.extract<1344, 1375>();
  hw_uint<32> in0_lane_43 = in0.extract<1376, 1407>();
  hw_uint<32> in0_lane_44 = in0.extract<1408, 1439>();
  hw_uint<32> in0_lane_45 = in0.extract<1440, 1471>();
  hw_uint<32> in0_lane_46 = in0.extract<1472, 1503>();
  hw_uint<32> in0_lane_47 = in0.extract<1504, 1535>();
  hw_uint<32> in0_lane_48 = in0.extract<1536, 1567>();
  hw_uint<32> in0_lane_49 = in0.extract<1568, 1599>();
  hw_uint<32> in0_lane_50 = in0.extract<1600, 1631>();
  hw_uint<32> in0_lane_51 = in0.extract<1632, 1663>();
  hw_uint<32> in0_lane_52 = in0.extract<1664, 1695>();
  hw_uint<32> in0_lane_53 = in0.extract<1696, 1727>();
  hw_uint<32> in0_lane_54 = in0.extract<1728, 1759>();
  hw_uint<32> in0_lane_55 = in0.extract<1760, 1791>();
  hw_uint<32> in0_lane_56 = in0.extract<1792, 1823>();
  hw_uint<32> in0_lane_57 = in0.extract<1824, 1855>();
  hw_uint<32> in0_lane_58 = in0.extract<1856, 1887>();
  hw_uint<32> in0_lane_59 = in0.extract<1888, 1919>();
  hw_uint<32> in0_lane_60 = in0.extract<1920, 1951>();
  hw_uint<32> in0_lane_61 = in0.extract<1952, 1983>();
  hw_uint<32> in0_lane_62 = in0.extract<1984, 2015>();
  hw_uint<32> in0_lane_63 = in0.extract<2016, 2047>();
  hw_uint<32> in0_lane_64 = in0.extract<2048, 2079>();
  hw_uint<32> in0_lane_65 = in0.extract<2080, 2111>();
  hw_uint<32> in0_lane_66 = in0.extract<2112, 2143>();
  hw_uint<32> in0_lane_67 = in0.extract<2144, 2175>();
  hw_uint<32> in0_lane_68 = in0.extract<2176, 2207>();
  hw_uint<32> in0_lane_69 = in0.extract<2208, 2239>();
  hw_uint<32> in0_lane_70 = in0.extract<2240, 2271>();
  hw_uint<32> in0_lane_71 = in0.extract<2272, 2303>();

	
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
  auto res_gp_in0_110_merged297_sm315_7490 = gp_in0_110_cu295(in0_lane_8_pack);

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
  auto res_gp_in0_110_merged297_sm315_6488 = gp_in0_110_cu295(in0_lane_17_pack);

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
  auto res_gp_in0_110_merged297_sm315_5486 = gp_in0_110_cu295(in0_lane_26_pack);

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
  auto res_gp_in0_110_merged297_sm315_4484 = gp_in0_110_cu295(in0_lane_35_pack);

  hw_uint<288 > in0_lane_44_pack;
  set_at<0, 288, 32>(in0_lane_44_pack, in0_lane_36);
  set_at<32, 288, 32>(in0_lane_44_pack, in0_lane_37);
  set_at<64, 288, 32>(in0_lane_44_pack, in0_lane_38);
  set_at<96, 288, 32>(in0_lane_44_pack, in0_lane_39);
  set_at<128, 288, 32>(in0_lane_44_pack, in0_lane_40);
  set_at<160, 288, 32>(in0_lane_44_pack, in0_lane_41);
  set_at<192, 288, 32>(in0_lane_44_pack, in0_lane_42);
  set_at<224, 288, 32>(in0_lane_44_pack, in0_lane_43);
  set_at<256, 288, 32>(in0_lane_44_pack, in0_lane_44);
  auto res_gp_in0_110_merged297_sm315_3482 = gp_in0_110_cu295(in0_lane_44_pack);

  hw_uint<288 > in0_lane_53_pack;
  set_at<0, 288, 32>(in0_lane_53_pack, in0_lane_45);
  set_at<32, 288, 32>(in0_lane_53_pack, in0_lane_46);
  set_at<64, 288, 32>(in0_lane_53_pack, in0_lane_47);
  set_at<96, 288, 32>(in0_lane_53_pack, in0_lane_48);
  set_at<128, 288, 32>(in0_lane_53_pack, in0_lane_49);
  set_at<160, 288, 32>(in0_lane_53_pack, in0_lane_50);
  set_at<192, 288, 32>(in0_lane_53_pack, in0_lane_51);
  set_at<224, 288, 32>(in0_lane_53_pack, in0_lane_52);
  set_at<256, 288, 32>(in0_lane_53_pack, in0_lane_53);
  auto res_gp_in0_110_merged297_sm315_2480 = gp_in0_110_cu295(in0_lane_53_pack);

  hw_uint<288 > in0_lane_62_pack;
  set_at<0, 288, 32>(in0_lane_62_pack, in0_lane_54);
  set_at<32, 288, 32>(in0_lane_62_pack, in0_lane_55);
  set_at<64, 288, 32>(in0_lane_62_pack, in0_lane_56);
  set_at<96, 288, 32>(in0_lane_62_pack, in0_lane_57);
  set_at<128, 288, 32>(in0_lane_62_pack, in0_lane_58);
  set_at<160, 288, 32>(in0_lane_62_pack, in0_lane_59);
  set_at<192, 288, 32>(in0_lane_62_pack, in0_lane_60);
  set_at<224, 288, 32>(in0_lane_62_pack, in0_lane_61);
  set_at<256, 288, 32>(in0_lane_62_pack, in0_lane_62);
  auto res_gp_in0_110_merged297_sm315_1478 = gp_in0_110_cu295(in0_lane_62_pack);

  hw_uint<288 > in0_lane_71_pack;
  set_at<0, 288, 32>(in0_lane_71_pack, in0_lane_63);
  set_at<32, 288, 32>(in0_lane_71_pack, in0_lane_64);
  set_at<64, 288, 32>(in0_lane_71_pack, in0_lane_65);
  set_at<96, 288, 32>(in0_lane_71_pack, in0_lane_66);
  set_at<128, 288, 32>(in0_lane_71_pack, in0_lane_67);
  set_at<160, 288, 32>(in0_lane_71_pack, in0_lane_68);
  set_at<192, 288, 32>(in0_lane_71_pack, in0_lane_69);
  set_at<224, 288, 32>(in0_lane_71_pack, in0_lane_70);
  set_at<256, 288, 32>(in0_lane_71_pack, in0_lane_71);
  auto res_gp_in0_110_merged297_sm315_0476 = gp_in0_110_cu295(in0_lane_71_pack);
  hw_uint<256 > return_value899;
  set_at<0, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_7490);
  set_at<32, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_6488);
  set_at<64, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_5486);
  set_at<96, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_4484);
  set_at<128, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_3482);
  set_at<160, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_2480);
  set_at<192, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_1478);
  set_at<224, 256, 32>(return_value899, res_gp_in0_110_merged297_sm315_0476);
  return return_value899;

}

hw_uint<128> gp_in0_218_cu901(hw_uint<32*36>& gp_in0_1_buf8) {
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
  hw_uint<32> gp_in0_1_buf8_lane_18 = gp_in0_1_buf8.extract<576, 607>();
  hw_uint<32> gp_in0_1_buf8_lane_19 = gp_in0_1_buf8.extract<608, 639>();
  hw_uint<32> gp_in0_1_buf8_lane_20 = gp_in0_1_buf8.extract<640, 671>();
  hw_uint<32> gp_in0_1_buf8_lane_21 = gp_in0_1_buf8.extract<672, 703>();
  hw_uint<32> gp_in0_1_buf8_lane_22 = gp_in0_1_buf8.extract<704, 735>();
  hw_uint<32> gp_in0_1_buf8_lane_23 = gp_in0_1_buf8.extract<736, 767>();
  hw_uint<32> gp_in0_1_buf8_lane_24 = gp_in0_1_buf8.extract<768, 799>();
  hw_uint<32> gp_in0_1_buf8_lane_25 = gp_in0_1_buf8.extract<800, 831>();
  hw_uint<32> gp_in0_1_buf8_lane_26 = gp_in0_1_buf8.extract<832, 863>();
  hw_uint<32> gp_in0_1_buf8_lane_27 = gp_in0_1_buf8.extract<864, 895>();
  hw_uint<32> gp_in0_1_buf8_lane_28 = gp_in0_1_buf8.extract<896, 927>();
  hw_uint<32> gp_in0_1_buf8_lane_29 = gp_in0_1_buf8.extract<928, 959>();
  hw_uint<32> gp_in0_1_buf8_lane_30 = gp_in0_1_buf8.extract<960, 991>();
  hw_uint<32> gp_in0_1_buf8_lane_31 = gp_in0_1_buf8.extract<992, 1023>();
  hw_uint<32> gp_in0_1_buf8_lane_32 = gp_in0_1_buf8.extract<1024, 1055>();
  hw_uint<32> gp_in0_1_buf8_lane_33 = gp_in0_1_buf8.extract<1056, 1087>();
  hw_uint<32> gp_in0_1_buf8_lane_34 = gp_in0_1_buf8.extract<1088, 1119>();
  hw_uint<32> gp_in0_1_buf8_lane_35 = gp_in0_1_buf8.extract<1120, 1151>();

	
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
  auto res_gp_in0_218_merged300_sm316_3498 = gp_in0_218_cu298(gp_in0_1_buf8_lane_8_pack);

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
  auto res_gp_in0_218_merged300_sm316_2496 = gp_in0_218_cu298(gp_in0_1_buf8_lane_17_pack);

  hw_uint<288 > gp_in0_1_buf8_lane_26_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_18);
  set_at<32, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_19);
  set_at<64, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_20);
  set_at<96, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_21);
  set_at<128, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_22);
  set_at<160, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_23);
  set_at<192, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_24);
  set_at<224, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_25);
  set_at<256, 288, 32>(gp_in0_1_buf8_lane_26_pack, gp_in0_1_buf8_lane_26);
  auto res_gp_in0_218_merged300_sm316_1494 = gp_in0_218_cu298(gp_in0_1_buf8_lane_26_pack);

  hw_uint<288 > gp_in0_1_buf8_lane_35_pack;
  set_at<0, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_27);
  set_at<32, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_28);
  set_at<64, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_29);
  set_at<96, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_30);
  set_at<128, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_31);
  set_at<160, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_32);
  set_at<192, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_33);
  set_at<224, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_34);
  set_at<256, 288, 32>(gp_in0_1_buf8_lane_35_pack, gp_in0_1_buf8_lane_35);
  auto res_gp_in0_218_merged300_sm316_0492 = gp_in0_218_cu298(gp_in0_1_buf8_lane_35_pack);
  hw_uint<128 > return_value902;
  set_at<0, 128, 32>(return_value902, res_gp_in0_218_merged300_sm316_3498);
  set_at<32, 128, 32>(return_value902, res_gp_in0_218_merged300_sm316_2496);
  set_at<64, 128, 32>(return_value902, res_gp_in0_218_merged300_sm316_1494);
  set_at<96, 128, 32>(return_value902, res_gp_in0_218_merged300_sm316_0492);
  return return_value902;

}

hw_uint<64> gp_in0_326_cu904(hw_uint<32*18>& gp_in0_2_buf16) {
  hw_uint<32> gp_in0_2_buf16_lane_0 = gp_in0_2_buf16.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_lane_1 = gp_in0_2_buf16.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_lane_2 = gp_in0_2_buf16.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_lane_3 = gp_in0_2_buf16.extract<96, 127>();
  hw_uint<32> gp_in0_2_buf16_lane_4 = gp_in0_2_buf16.extract<128, 159>();
  hw_uint<32> gp_in0_2_buf16_lane_5 = gp_in0_2_buf16.extract<160, 191>();
  hw_uint<32> gp_in0_2_buf16_lane_6 = gp_in0_2_buf16.extract<192, 223>();
  hw_uint<32> gp_in0_2_buf16_lane_7 = gp_in0_2_buf16.extract<224, 255>();
  hw_uint<32> gp_in0_2_buf16_lane_8 = gp_in0_2_buf16.extract<256, 287>();
  hw_uint<32> gp_in0_2_buf16_lane_9 = gp_in0_2_buf16.extract<288, 319>();
  hw_uint<32> gp_in0_2_buf16_lane_10 = gp_in0_2_buf16.extract<320, 351>();
  hw_uint<32> gp_in0_2_buf16_lane_11 = gp_in0_2_buf16.extract<352, 383>();
  hw_uint<32> gp_in0_2_buf16_lane_12 = gp_in0_2_buf16.extract<384, 415>();
  hw_uint<32> gp_in0_2_buf16_lane_13 = gp_in0_2_buf16.extract<416, 447>();
  hw_uint<32> gp_in0_2_buf16_lane_14 = gp_in0_2_buf16.extract<448, 479>();
  hw_uint<32> gp_in0_2_buf16_lane_15 = gp_in0_2_buf16.extract<480, 511>();
  hw_uint<32> gp_in0_2_buf16_lane_16 = gp_in0_2_buf16.extract<512, 543>();
  hw_uint<32> gp_in0_2_buf16_lane_17 = gp_in0_2_buf16.extract<544, 575>();

	
  hw_uint<288 > gp_in0_2_buf16_lane_8_pack;
  set_at<0, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_0);
  set_at<32, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_1);
  set_at<64, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_2);
  set_at<96, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_3);
  set_at<128, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_4);
  set_at<160, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_5);
  set_at<192, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_6);
  set_at<224, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_7);
  set_at<256, 288, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_8);
  auto res_gp_in0_326_merged303_sm317_1346 = gp_in0_326_cu301(gp_in0_2_buf16_lane_8_pack);

  hw_uint<288 > gp_in0_2_buf16_lane_17_pack;
  set_at<0, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_9);
  set_at<32, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_10);
  set_at<64, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_11);
  set_at<96, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_12);
  set_at<128, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_13);
  set_at<160, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_14);
  set_at<192, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_15);
  set_at<224, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_16);
  set_at<256, 288, 32>(gp_in0_2_buf16_lane_17_pack, gp_in0_2_buf16_lane_17);
  auto res_gp_in0_326_merged303_sm317_0344 = gp_in0_326_cu301(gp_in0_2_buf16_lane_17_pack);
  hw_uint<64 > return_value905;
  set_at<0, 64, 32>(return_value905, res_gp_in0_326_merged303_sm317_1346);
  set_at<32, 64, 32>(return_value905, res_gp_in0_326_merged303_sm317_0344);
  return return_value905;

}

hw_uint<128> us_gp_in0_3_buf2434_cu907(hw_uint<32*4>& gp_in0_3_buf24) {
  return gp_in0_3_buf24;
}

hw_uint<128> lp_in0_238_cu909(hw_uint<32*4>& gp_in0_2_buf16, hw_uint<32*4>& gp_in0_3_buf24_us32) {
  hw_uint<32> gp_in0_2_buf16_lane_0 = gp_in0_2_buf16.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_lane_1 = gp_in0_2_buf16.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_lane_2 = gp_in0_2_buf16.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_lane_3 = gp_in0_2_buf16.extract<96, 127>();
  hw_uint<32> gp_in0_3_buf24_us32_lane_0 = gp_in0_3_buf24_us32.extract<0, 31>();
  hw_uint<32> gp_in0_3_buf24_us32_lane_1 = gp_in0_3_buf24_us32.extract<32, 63>();
  hw_uint<32> gp_in0_3_buf24_us32_lane_2 = gp_in0_3_buf24_us32.extract<64, 95>();
  hw_uint<32> gp_in0_3_buf24_us32_lane_3 = gp_in0_3_buf24_us32.extract<96, 127>();

	
  hw_uint<32 > gp_in0_2_buf16_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_0_pack, gp_in0_2_buf16_lane_0);
  hw_uint<32 > gp_in0_3_buf24_us32_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_lane_0_pack, gp_in0_3_buf24_us32_lane_0);
  auto res_diff39_sm319_3362 = llf_diff_float_32(gp_in0_2_buf16_lane_0_pack, gp_in0_3_buf24_us32_lane_0_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_1_pack, gp_in0_2_buf16_lane_1);
  hw_uint<32 > gp_in0_3_buf24_us32_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_lane_1_pack, gp_in0_3_buf24_us32_lane_1);
  auto res_diff39_sm319_2360 = llf_diff_float_32(gp_in0_2_buf16_lane_1_pack, gp_in0_3_buf24_us32_lane_1_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_2_pack, gp_in0_2_buf16_lane_2);
  hw_uint<32 > gp_in0_3_buf24_us32_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_lane_2_pack, gp_in0_3_buf24_us32_lane_2);
  auto res_diff39_sm319_1358 = llf_diff_float_32(gp_in0_2_buf16_lane_2_pack, gp_in0_3_buf24_us32_lane_2_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_3_pack, gp_in0_2_buf16_lane_3);
  hw_uint<32 > gp_in0_3_buf24_us32_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_us32_lane_3_pack, gp_in0_3_buf24_us32_lane_3);
  auto res_diff39_sm319_0356 = llf_diff_float_32(gp_in0_2_buf16_lane_3_pack, gp_in0_3_buf24_us32_lane_3_pack);
  hw_uint<128 > return_value910;
  set_at<0, 128, 32>(return_value910, res_diff39_sm319_3362);
  set_at<32, 128, 32>(return_value910, res_diff39_sm319_2360);
  set_at<64, 128, 32>(return_value910, res_diff39_sm319_1358);
  set_at<96, 128, 32>(return_value910, res_diff39_sm319_0356);
  return return_value910;

}

hw_uint<256> us_gp_in0_2_buf1642_cu912(hw_uint<32*8>& gp_in0_2_buf16) {
  return gp_in0_2_buf16;
}

hw_uint<256> lp_in0_146_cu914(hw_uint<32*8>& gp_in0_1_buf8, hw_uint<32*8>& gp_in0_2_buf16_us40) {
  hw_uint<32> gp_in0_1_buf8_lane_0 = gp_in0_1_buf8.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_lane_1 = gp_in0_1_buf8.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_lane_2 = gp_in0_1_buf8.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_lane_3 = gp_in0_1_buf8.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_lane_4 = gp_in0_1_buf8.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_lane_5 = gp_in0_1_buf8.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_lane_6 = gp_in0_1_buf8.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_lane_7 = gp_in0_1_buf8.extract<224, 255>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_0 = gp_in0_2_buf16_us40.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_1 = gp_in0_2_buf16_us40.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_2 = gp_in0_2_buf16_us40.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_3 = gp_in0_2_buf16_us40.extract<96, 127>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_4 = gp_in0_2_buf16_us40.extract<128, 159>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_5 = gp_in0_2_buf16_us40.extract<160, 191>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_6 = gp_in0_2_buf16_us40.extract<192, 223>();
  hw_uint<32> gp_in0_2_buf16_us40_lane_7 = gp_in0_2_buf16_us40.extract<224, 255>();

	
  hw_uint<32 > gp_in0_1_buf8_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_0_pack, gp_in0_1_buf8_lane_0);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_0_pack, gp_in0_2_buf16_us40_lane_0);
  auto res_diff47_sm321_7394 = llf_diff_float_32(gp_in0_1_buf8_lane_0_pack, gp_in0_2_buf16_us40_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_1_pack, gp_in0_1_buf8_lane_1);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_1_pack, gp_in0_2_buf16_us40_lane_1);
  auto res_diff47_sm321_6392 = llf_diff_float_32(gp_in0_1_buf8_lane_1_pack, gp_in0_2_buf16_us40_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_2_pack, gp_in0_1_buf8_lane_2);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_2_pack, gp_in0_2_buf16_us40_lane_2);
  auto res_diff47_sm321_5390 = llf_diff_float_32(gp_in0_1_buf8_lane_2_pack, gp_in0_2_buf16_us40_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_3_pack, gp_in0_1_buf8_lane_3);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_3_pack, gp_in0_2_buf16_us40_lane_3);
  auto res_diff47_sm321_4388 = llf_diff_float_32(gp_in0_1_buf8_lane_3_pack, gp_in0_2_buf16_us40_lane_3_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_4_pack, gp_in0_1_buf8_lane_4);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_4_pack, gp_in0_2_buf16_us40_lane_4);
  auto res_diff47_sm321_3386 = llf_diff_float_32(gp_in0_1_buf8_lane_4_pack, gp_in0_2_buf16_us40_lane_4_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_5_pack, gp_in0_1_buf8_lane_5);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_5_pack, gp_in0_2_buf16_us40_lane_5);
  auto res_diff47_sm321_2384 = llf_diff_float_32(gp_in0_1_buf8_lane_5_pack, gp_in0_2_buf16_us40_lane_5_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_6_pack, gp_in0_1_buf8_lane_6);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_6_pack, gp_in0_2_buf16_us40_lane_6);
  auto res_diff47_sm321_1382 = llf_diff_float_32(gp_in0_1_buf8_lane_6_pack, gp_in0_2_buf16_us40_lane_6_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_7_pack, gp_in0_1_buf8_lane_7);
  hw_uint<32 > gp_in0_2_buf16_us40_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_us40_lane_7_pack, gp_in0_2_buf16_us40_lane_7);
  auto res_diff47_sm321_0380 = llf_diff_float_32(gp_in0_1_buf8_lane_7_pack, gp_in0_2_buf16_us40_lane_7_pack);
  hw_uint<256 > return_value915;
  set_at<0, 256, 32>(return_value915, res_diff47_sm321_7394);
  set_at<32, 256, 32>(return_value915, res_diff47_sm321_6392);
  set_at<64, 256, 32>(return_value915, res_diff47_sm321_5390);
  set_at<96, 256, 32>(return_value915, res_diff47_sm321_4388);
  set_at<128, 256, 32>(return_value915, res_diff47_sm321_3386);
  set_at<160, 256, 32>(return_value915, res_diff47_sm321_2384);
  set_at<192, 256, 32>(return_value915, res_diff47_sm321_1382);
  set_at<224, 256, 32>(return_value915, res_diff47_sm321_0380);
  return return_value915;

}

hw_uint<512> us_gp_in0_1_buf850_cu917(hw_uint<32*16>& gp_in0_1_buf8) {
  return gp_in0_1_buf8;
}

hw_uint<512> lp_in0_054_cu919(hw_uint<32*16>& gp_in0_1_buf8_us48, hw_uint<32*16>& in0) {
  hw_uint<32> gp_in0_1_buf8_us48_lane_0 = gp_in0_1_buf8_us48.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_1 = gp_in0_1_buf8_us48.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_2 = gp_in0_1_buf8_us48.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_3 = gp_in0_1_buf8_us48.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_4 = gp_in0_1_buf8_us48.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_5 = gp_in0_1_buf8_us48.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_6 = gp_in0_1_buf8_us48.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_7 = gp_in0_1_buf8_us48.extract<224, 255>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_8 = gp_in0_1_buf8_us48.extract<256, 287>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_9 = gp_in0_1_buf8_us48.extract<288, 319>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_10 = gp_in0_1_buf8_us48.extract<320, 351>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_11 = gp_in0_1_buf8_us48.extract<352, 383>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_12 = gp_in0_1_buf8_us48.extract<384, 415>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_13 = gp_in0_1_buf8_us48.extract<416, 447>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_14 = gp_in0_1_buf8_us48.extract<448, 479>();
  hw_uint<32> gp_in0_1_buf8_us48_lane_15 = gp_in0_1_buf8_us48.extract<480, 511>();
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

	
  hw_uint<32 > gp_in0_1_buf8_us48_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_0_pack, gp_in0_1_buf8_us48_lane_0);
  hw_uint<32 > in0_lane_0_pack;
  set_at<0, 32, 32>(in0_lane_0_pack, in0_lane_0);
  auto res_diff55_sm323_15458 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_0_pack, in0_lane_0_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_1_pack, gp_in0_1_buf8_us48_lane_1);
  hw_uint<32 > in0_lane_1_pack;
  set_at<0, 32, 32>(in0_lane_1_pack, in0_lane_1);
  auto res_diff55_sm323_14456 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_1_pack, in0_lane_1_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_2_pack, gp_in0_1_buf8_us48_lane_2);
  hw_uint<32 > in0_lane_2_pack;
  set_at<0, 32, 32>(in0_lane_2_pack, in0_lane_2);
  auto res_diff55_sm323_13454 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_2_pack, in0_lane_2_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_3_pack, gp_in0_1_buf8_us48_lane_3);
  hw_uint<32 > in0_lane_3_pack;
  set_at<0, 32, 32>(in0_lane_3_pack, in0_lane_3);
  auto res_diff55_sm323_12452 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_3_pack, in0_lane_3_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_4_pack, gp_in0_1_buf8_us48_lane_4);
  hw_uint<32 > in0_lane_4_pack;
  set_at<0, 32, 32>(in0_lane_4_pack, in0_lane_4);
  auto res_diff55_sm323_11450 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_4_pack, in0_lane_4_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_5_pack, gp_in0_1_buf8_us48_lane_5);
  hw_uint<32 > in0_lane_5_pack;
  set_at<0, 32, 32>(in0_lane_5_pack, in0_lane_5);
  auto res_diff55_sm323_10448 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_5_pack, in0_lane_5_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_6_pack, gp_in0_1_buf8_us48_lane_6);
  hw_uint<32 > in0_lane_6_pack;
  set_at<0, 32, 32>(in0_lane_6_pack, in0_lane_6);
  auto res_diff55_sm323_9446 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_6_pack, in0_lane_6_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_7_pack, gp_in0_1_buf8_us48_lane_7);
  hw_uint<32 > in0_lane_7_pack;
  set_at<0, 32, 32>(in0_lane_7_pack, in0_lane_7);
  auto res_diff55_sm323_8444 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_7_pack, in0_lane_7_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_8_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_8_pack, gp_in0_1_buf8_us48_lane_8);
  hw_uint<32 > in0_lane_8_pack;
  set_at<0, 32, 32>(in0_lane_8_pack, in0_lane_8);
  auto res_diff55_sm323_7442 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_8_pack, in0_lane_8_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_9_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_9_pack, gp_in0_1_buf8_us48_lane_9);
  hw_uint<32 > in0_lane_9_pack;
  set_at<0, 32, 32>(in0_lane_9_pack, in0_lane_9);
  auto res_diff55_sm323_6440 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_9_pack, in0_lane_9_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_10_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_10_pack, gp_in0_1_buf8_us48_lane_10);
  hw_uint<32 > in0_lane_10_pack;
  set_at<0, 32, 32>(in0_lane_10_pack, in0_lane_10);
  auto res_diff55_sm323_5438 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_10_pack, in0_lane_10_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_11_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_11_pack, gp_in0_1_buf8_us48_lane_11);
  hw_uint<32 > in0_lane_11_pack;
  set_at<0, 32, 32>(in0_lane_11_pack, in0_lane_11);
  auto res_diff55_sm323_4436 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_11_pack, in0_lane_11_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_12_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_12_pack, gp_in0_1_buf8_us48_lane_12);
  hw_uint<32 > in0_lane_12_pack;
  set_at<0, 32, 32>(in0_lane_12_pack, in0_lane_12);
  auto res_diff55_sm323_3434 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_12_pack, in0_lane_12_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_13_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_13_pack, gp_in0_1_buf8_us48_lane_13);
  hw_uint<32 > in0_lane_13_pack;
  set_at<0, 32, 32>(in0_lane_13_pack, in0_lane_13);
  auto res_diff55_sm323_2432 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_13_pack, in0_lane_13_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_14_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_14_pack, gp_in0_1_buf8_us48_lane_14);
  hw_uint<32 > in0_lane_14_pack;
  set_at<0, 32, 32>(in0_lane_14_pack, in0_lane_14);
  auto res_diff55_sm323_1430 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_14_pack, in0_lane_14_pack);

  hw_uint<32 > gp_in0_1_buf8_us48_lane_15_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_us48_lane_15_pack, gp_in0_1_buf8_us48_lane_15);
  hw_uint<32 > in0_lane_15_pack;
  set_at<0, 32, 32>(in0_lane_15_pack, in0_lane_15);
  auto res_diff55_sm323_0428 = llf_diff_float_32(gp_in0_1_buf8_us48_lane_15_pack, in0_lane_15_pack);
  hw_uint<512 > return_value920;
  set_at<0, 512, 32>(return_value920, res_diff55_sm323_15458);
  set_at<32, 512, 32>(return_value920, res_diff55_sm323_14456);
  set_at<64, 512, 32>(return_value920, res_diff55_sm323_13454);
  set_at<96, 512, 32>(return_value920, res_diff55_sm323_12452);
  set_at<128, 512, 32>(return_value920, res_diff55_sm323_11450);
  set_at<160, 512, 32>(return_value920, res_diff55_sm323_10448);
  set_at<192, 512, 32>(return_value920, res_diff55_sm323_9446);
  set_at<224, 512, 32>(return_value920, res_diff55_sm323_8444);
  set_at<256, 512, 32>(return_value920, res_diff55_sm323_7442);
  set_at<288, 512, 32>(return_value920, res_diff55_sm323_6440);
  set_at<320, 512, 32>(return_value920, res_diff55_sm323_5438);
  set_at<352, 512, 32>(return_value920, res_diff55_sm323_4436);
  set_at<384, 512, 32>(return_value920, res_diff55_sm323_3434);
  set_at<416, 512, 32>(return_value920, res_diff55_sm323_2432);
  set_at<448, 512, 32>(return_value920, res_diff55_sm323_1430);
  set_at<480, 512, 32>(return_value920, res_diff55_sm323_0428);
  return return_value920;

}

hw_uint<256> gp_in1_158_cu922(hw_uint<32*72>& in1) {
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
  hw_uint<32> in1_lane_36 = in1.extract<1152, 1183>();
  hw_uint<32> in1_lane_37 = in1.extract<1184, 1215>();
  hw_uint<32> in1_lane_38 = in1.extract<1216, 1247>();
  hw_uint<32> in1_lane_39 = in1.extract<1248, 1279>();
  hw_uint<32> in1_lane_40 = in1.extract<1280, 1311>();
  hw_uint<32> in1_lane_41 = in1.extract<1312, 1343>();
  hw_uint<32> in1_lane_42 = in1.extract<1344, 1375>();
  hw_uint<32> in1_lane_43 = in1.extract<1376, 1407>();
  hw_uint<32> in1_lane_44 = in1.extract<1408, 1439>();
  hw_uint<32> in1_lane_45 = in1.extract<1440, 1471>();
  hw_uint<32> in1_lane_46 = in1.extract<1472, 1503>();
  hw_uint<32> in1_lane_47 = in1.extract<1504, 1535>();
  hw_uint<32> in1_lane_48 = in1.extract<1536, 1567>();
  hw_uint<32> in1_lane_49 = in1.extract<1568, 1599>();
  hw_uint<32> in1_lane_50 = in1.extract<1600, 1631>();
  hw_uint<32> in1_lane_51 = in1.extract<1632, 1663>();
  hw_uint<32> in1_lane_52 = in1.extract<1664, 1695>();
  hw_uint<32> in1_lane_53 = in1.extract<1696, 1727>();
  hw_uint<32> in1_lane_54 = in1.extract<1728, 1759>();
  hw_uint<32> in1_lane_55 = in1.extract<1760, 1791>();
  hw_uint<32> in1_lane_56 = in1.extract<1792, 1823>();
  hw_uint<32> in1_lane_57 = in1.extract<1824, 1855>();
  hw_uint<32> in1_lane_58 = in1.extract<1856, 1887>();
  hw_uint<32> in1_lane_59 = in1.extract<1888, 1919>();
  hw_uint<32> in1_lane_60 = in1.extract<1920, 1951>();
  hw_uint<32> in1_lane_61 = in1.extract<1952, 1983>();
  hw_uint<32> in1_lane_62 = in1.extract<1984, 2015>();
  hw_uint<32> in1_lane_63 = in1.extract<2016, 2047>();
  hw_uint<32> in1_lane_64 = in1.extract<2048, 2079>();
  hw_uint<32> in1_lane_65 = in1.extract<2080, 2111>();
  hw_uint<32> in1_lane_66 = in1.extract<2112, 2143>();
  hw_uint<32> in1_lane_67 = in1.extract<2144, 2175>();
  hw_uint<32> in1_lane_68 = in1.extract<2176, 2207>();
  hw_uint<32> in1_lane_69 = in1.extract<2208, 2239>();
  hw_uint<32> in1_lane_70 = in1.extract<2240, 2271>();
  hw_uint<32> in1_lane_71 = in1.extract<2272, 2303>();

	
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
  auto res_gp_in1_158_merged306_sm324_7474 = gp_in1_158_cu304(in1_lane_8_pack);

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
  auto res_gp_in1_158_merged306_sm324_6472 = gp_in1_158_cu304(in1_lane_17_pack);

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
  auto res_gp_in1_158_merged306_sm324_5470 = gp_in1_158_cu304(in1_lane_26_pack);

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
  auto res_gp_in1_158_merged306_sm324_4468 = gp_in1_158_cu304(in1_lane_35_pack);

  hw_uint<288 > in1_lane_44_pack;
  set_at<0, 288, 32>(in1_lane_44_pack, in1_lane_36);
  set_at<32, 288, 32>(in1_lane_44_pack, in1_lane_37);
  set_at<64, 288, 32>(in1_lane_44_pack, in1_lane_38);
  set_at<96, 288, 32>(in1_lane_44_pack, in1_lane_39);
  set_at<128, 288, 32>(in1_lane_44_pack, in1_lane_40);
  set_at<160, 288, 32>(in1_lane_44_pack, in1_lane_41);
  set_at<192, 288, 32>(in1_lane_44_pack, in1_lane_42);
  set_at<224, 288, 32>(in1_lane_44_pack, in1_lane_43);
  set_at<256, 288, 32>(in1_lane_44_pack, in1_lane_44);
  auto res_gp_in1_158_merged306_sm324_3466 = gp_in1_158_cu304(in1_lane_44_pack);

  hw_uint<288 > in1_lane_53_pack;
  set_at<0, 288, 32>(in1_lane_53_pack, in1_lane_45);
  set_at<32, 288, 32>(in1_lane_53_pack, in1_lane_46);
  set_at<64, 288, 32>(in1_lane_53_pack, in1_lane_47);
  set_at<96, 288, 32>(in1_lane_53_pack, in1_lane_48);
  set_at<128, 288, 32>(in1_lane_53_pack, in1_lane_49);
  set_at<160, 288, 32>(in1_lane_53_pack, in1_lane_50);
  set_at<192, 288, 32>(in1_lane_53_pack, in1_lane_51);
  set_at<224, 288, 32>(in1_lane_53_pack, in1_lane_52);
  set_at<256, 288, 32>(in1_lane_53_pack, in1_lane_53);
  auto res_gp_in1_158_merged306_sm324_2464 = gp_in1_158_cu304(in1_lane_53_pack);

  hw_uint<288 > in1_lane_62_pack;
  set_at<0, 288, 32>(in1_lane_62_pack, in1_lane_54);
  set_at<32, 288, 32>(in1_lane_62_pack, in1_lane_55);
  set_at<64, 288, 32>(in1_lane_62_pack, in1_lane_56);
  set_at<96, 288, 32>(in1_lane_62_pack, in1_lane_57);
  set_at<128, 288, 32>(in1_lane_62_pack, in1_lane_58);
  set_at<160, 288, 32>(in1_lane_62_pack, in1_lane_59);
  set_at<192, 288, 32>(in1_lane_62_pack, in1_lane_60);
  set_at<224, 288, 32>(in1_lane_62_pack, in1_lane_61);
  set_at<256, 288, 32>(in1_lane_62_pack, in1_lane_62);
  auto res_gp_in1_158_merged306_sm324_1462 = gp_in1_158_cu304(in1_lane_62_pack);

  hw_uint<288 > in1_lane_71_pack;
  set_at<0, 288, 32>(in1_lane_71_pack, in1_lane_63);
  set_at<32, 288, 32>(in1_lane_71_pack, in1_lane_64);
  set_at<64, 288, 32>(in1_lane_71_pack, in1_lane_65);
  set_at<96, 288, 32>(in1_lane_71_pack, in1_lane_66);
  set_at<128, 288, 32>(in1_lane_71_pack, in1_lane_67);
  set_at<160, 288, 32>(in1_lane_71_pack, in1_lane_68);
  set_at<192, 288, 32>(in1_lane_71_pack, in1_lane_69);
  set_at<224, 288, 32>(in1_lane_71_pack, in1_lane_70);
  set_at<256, 288, 32>(in1_lane_71_pack, in1_lane_71);
  auto res_gp_in1_158_merged306_sm324_0460 = gp_in1_158_cu304(in1_lane_71_pack);
  hw_uint<256 > return_value923;
  set_at<0, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_7474);
  set_at<32, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_6472);
  set_at<64, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_5470);
  set_at<96, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_4468);
  set_at<128, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_3466);
  set_at<160, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_2464);
  set_at<192, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_1462);
  set_at<224, 256, 32>(return_value923, res_gp_in1_158_merged306_sm324_0460);
  return return_value923;

}

hw_uint<128> gp_in1_266_cu925(hw_uint<32*36>& gp_in1_1_buf56) {
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
  hw_uint<32> gp_in1_1_buf56_lane_18 = gp_in1_1_buf56.extract<576, 607>();
  hw_uint<32> gp_in1_1_buf56_lane_19 = gp_in1_1_buf56.extract<608, 639>();
  hw_uint<32> gp_in1_1_buf56_lane_20 = gp_in1_1_buf56.extract<640, 671>();
  hw_uint<32> gp_in1_1_buf56_lane_21 = gp_in1_1_buf56.extract<672, 703>();
  hw_uint<32> gp_in1_1_buf56_lane_22 = gp_in1_1_buf56.extract<704, 735>();
  hw_uint<32> gp_in1_1_buf56_lane_23 = gp_in1_1_buf56.extract<736, 767>();
  hw_uint<32> gp_in1_1_buf56_lane_24 = gp_in1_1_buf56.extract<768, 799>();
  hw_uint<32> gp_in1_1_buf56_lane_25 = gp_in1_1_buf56.extract<800, 831>();
  hw_uint<32> gp_in1_1_buf56_lane_26 = gp_in1_1_buf56.extract<832, 863>();
  hw_uint<32> gp_in1_1_buf56_lane_27 = gp_in1_1_buf56.extract<864, 895>();
  hw_uint<32> gp_in1_1_buf56_lane_28 = gp_in1_1_buf56.extract<896, 927>();
  hw_uint<32> gp_in1_1_buf56_lane_29 = gp_in1_1_buf56.extract<928, 959>();
  hw_uint<32> gp_in1_1_buf56_lane_30 = gp_in1_1_buf56.extract<960, 991>();
  hw_uint<32> gp_in1_1_buf56_lane_31 = gp_in1_1_buf56.extract<992, 1023>();
  hw_uint<32> gp_in1_1_buf56_lane_32 = gp_in1_1_buf56.extract<1024, 1055>();
  hw_uint<32> gp_in1_1_buf56_lane_33 = gp_in1_1_buf56.extract<1056, 1087>();
  hw_uint<32> gp_in1_1_buf56_lane_34 = gp_in1_1_buf56.extract<1088, 1119>();
  hw_uint<32> gp_in1_1_buf56_lane_35 = gp_in1_1_buf56.extract<1120, 1151>();

	
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
  auto res_gp_in1_266_merged309_sm325_3538 = gp_in1_266_cu307(gp_in1_1_buf56_lane_8_pack);

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
  auto res_gp_in1_266_merged309_sm325_2536 = gp_in1_266_cu307(gp_in1_1_buf56_lane_17_pack);

  hw_uint<288 > gp_in1_1_buf56_lane_26_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_18);
  set_at<32, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_19);
  set_at<64, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_20);
  set_at<96, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_21);
  set_at<128, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_22);
  set_at<160, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_23);
  set_at<192, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_24);
  set_at<224, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_25);
  set_at<256, 288, 32>(gp_in1_1_buf56_lane_26_pack, gp_in1_1_buf56_lane_26);
  auto res_gp_in1_266_merged309_sm325_1534 = gp_in1_266_cu307(gp_in1_1_buf56_lane_26_pack);

  hw_uint<288 > gp_in1_1_buf56_lane_35_pack;
  set_at<0, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_27);
  set_at<32, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_28);
  set_at<64, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_29);
  set_at<96, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_30);
  set_at<128, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_31);
  set_at<160, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_32);
  set_at<192, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_33);
  set_at<224, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_34);
  set_at<256, 288, 32>(gp_in1_1_buf56_lane_35_pack, gp_in1_1_buf56_lane_35);
  auto res_gp_in1_266_merged309_sm325_0532 = gp_in1_266_cu307(gp_in1_1_buf56_lane_35_pack);
  hw_uint<128 > return_value926;
  set_at<0, 128, 32>(return_value926, res_gp_in1_266_merged309_sm325_3538);
  set_at<32, 128, 32>(return_value926, res_gp_in1_266_merged309_sm325_2536);
  set_at<64, 128, 32>(return_value926, res_gp_in1_266_merged309_sm325_1534);
  set_at<96, 128, 32>(return_value926, res_gp_in1_266_merged309_sm325_0532);
  return return_value926;

}

hw_uint<64> gp_in1_374_cu928(hw_uint<32*18>& gp_in1_2_buf64) {
  hw_uint<32> gp_in1_2_buf64_lane_0 = gp_in1_2_buf64.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_lane_1 = gp_in1_2_buf64.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_lane_2 = gp_in1_2_buf64.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_lane_3 = gp_in1_2_buf64.extract<96, 127>();
  hw_uint<32> gp_in1_2_buf64_lane_4 = gp_in1_2_buf64.extract<128, 159>();
  hw_uint<32> gp_in1_2_buf64_lane_5 = gp_in1_2_buf64.extract<160, 191>();
  hw_uint<32> gp_in1_2_buf64_lane_6 = gp_in1_2_buf64.extract<192, 223>();
  hw_uint<32> gp_in1_2_buf64_lane_7 = gp_in1_2_buf64.extract<224, 255>();
  hw_uint<32> gp_in1_2_buf64_lane_8 = gp_in1_2_buf64.extract<256, 287>();
  hw_uint<32> gp_in1_2_buf64_lane_9 = gp_in1_2_buf64.extract<288, 319>();
  hw_uint<32> gp_in1_2_buf64_lane_10 = gp_in1_2_buf64.extract<320, 351>();
  hw_uint<32> gp_in1_2_buf64_lane_11 = gp_in1_2_buf64.extract<352, 383>();
  hw_uint<32> gp_in1_2_buf64_lane_12 = gp_in1_2_buf64.extract<384, 415>();
  hw_uint<32> gp_in1_2_buf64_lane_13 = gp_in1_2_buf64.extract<416, 447>();
  hw_uint<32> gp_in1_2_buf64_lane_14 = gp_in1_2_buf64.extract<448, 479>();
  hw_uint<32> gp_in1_2_buf64_lane_15 = gp_in1_2_buf64.extract<480, 511>();
  hw_uint<32> gp_in1_2_buf64_lane_16 = gp_in1_2_buf64.extract<512, 543>();
  hw_uint<32> gp_in1_2_buf64_lane_17 = gp_in1_2_buf64.extract<544, 575>();

	
  hw_uint<288 > gp_in1_2_buf64_lane_8_pack;
  set_at<0, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_0);
  set_at<32, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_1);
  set_at<64, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_2);
  set_at<96, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_3);
  set_at<128, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_4);
  set_at<160, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_5);
  set_at<192, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_6);
  set_at<224, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_7);
  set_at<256, 288, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_8);
  auto res_gp_in1_374_merged312_sm326_1542 = gp_in1_374_cu310(gp_in1_2_buf64_lane_8_pack);

  hw_uint<288 > gp_in1_2_buf64_lane_17_pack;
  set_at<0, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_9);
  set_at<32, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_10);
  set_at<64, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_11);
  set_at<96, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_12);
  set_at<128, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_13);
  set_at<160, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_14);
  set_at<192, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_15);
  set_at<224, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_16);
  set_at<256, 288, 32>(gp_in1_2_buf64_lane_17_pack, gp_in1_2_buf64_lane_17);
  auto res_gp_in1_374_merged312_sm326_0540 = gp_in1_374_cu310(gp_in1_2_buf64_lane_17_pack);
  hw_uint<64 > return_value929;
  set_at<0, 64, 32>(return_value929, res_gp_in1_374_merged312_sm326_1542);
  set_at<32, 64, 32>(return_value929, res_gp_in1_374_merged312_sm326_0540);
  return return_value929;

}

hw_uint<128> us_gp_in1_3_buf7282_cu931(hw_uint<32*4>& gp_in1_3_buf72) {
  return gp_in1_3_buf72;
}

hw_uint<128> lp_in1_286_cu933(hw_uint<32*4>& gp_in1_2_buf64, hw_uint<32*4>& gp_in1_3_buf72_us80) {
  hw_uint<32> gp_in1_2_buf64_lane_0 = gp_in1_2_buf64.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_lane_1 = gp_in1_2_buf64.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_lane_2 = gp_in1_2_buf64.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_lane_3 = gp_in1_2_buf64.extract<96, 127>();
  hw_uint<32> gp_in1_3_buf72_us80_lane_0 = gp_in1_3_buf72_us80.extract<0, 31>();
  hw_uint<32> gp_in1_3_buf72_us80_lane_1 = gp_in1_3_buf72_us80.extract<32, 63>();
  hw_uint<32> gp_in1_3_buf72_us80_lane_2 = gp_in1_3_buf72_us80.extract<64, 95>();
  hw_uint<32> gp_in1_3_buf72_us80_lane_3 = gp_in1_3_buf72_us80.extract<96, 127>();

	
  hw_uint<32 > gp_in1_2_buf64_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_0_pack, gp_in1_2_buf64_lane_0);
  hw_uint<32 > gp_in1_3_buf72_us80_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_lane_0_pack, gp_in1_3_buf72_us80_lane_0);
  auto res_diff87_sm328_3558 = llf_diff_float_32(gp_in1_2_buf64_lane_0_pack, gp_in1_3_buf72_us80_lane_0_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_1_pack, gp_in1_2_buf64_lane_1);
  hw_uint<32 > gp_in1_3_buf72_us80_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_lane_1_pack, gp_in1_3_buf72_us80_lane_1);
  auto res_diff87_sm328_2556 = llf_diff_float_32(gp_in1_2_buf64_lane_1_pack, gp_in1_3_buf72_us80_lane_1_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_2_pack, gp_in1_2_buf64_lane_2);
  hw_uint<32 > gp_in1_3_buf72_us80_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_lane_2_pack, gp_in1_3_buf72_us80_lane_2);
  auto res_diff87_sm328_1554 = llf_diff_float_32(gp_in1_2_buf64_lane_2_pack, gp_in1_3_buf72_us80_lane_2_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_3_pack, gp_in1_2_buf64_lane_3);
  hw_uint<32 > gp_in1_3_buf72_us80_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_us80_lane_3_pack, gp_in1_3_buf72_us80_lane_3);
  auto res_diff87_sm328_0552 = llf_diff_float_32(gp_in1_2_buf64_lane_3_pack, gp_in1_3_buf72_us80_lane_3_pack);
  hw_uint<128 > return_value934;
  set_at<0, 128, 32>(return_value934, res_diff87_sm328_3558);
  set_at<32, 128, 32>(return_value934, res_diff87_sm328_2556);
  set_at<64, 128, 32>(return_value934, res_diff87_sm328_1554);
  set_at<96, 128, 32>(return_value934, res_diff87_sm328_0552);
  return return_value934;

}

hw_uint<256> us_gp_in1_2_buf6490_cu936(hw_uint<32*8>& gp_in1_2_buf64) {
  return gp_in1_2_buf64;
}

hw_uint<256> lp_in1_194_cu938(hw_uint<32*8>& gp_in1_1_buf56, hw_uint<32*8>& gp_in1_2_buf64_us88) {
  hw_uint<32> gp_in1_1_buf56_lane_0 = gp_in1_1_buf56.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_lane_1 = gp_in1_1_buf56.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_lane_2 = gp_in1_1_buf56.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_lane_3 = gp_in1_1_buf56.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_lane_4 = gp_in1_1_buf56.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_lane_5 = gp_in1_1_buf56.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_lane_6 = gp_in1_1_buf56.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_lane_7 = gp_in1_1_buf56.extract<224, 255>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_0 = gp_in1_2_buf64_us88.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_1 = gp_in1_2_buf64_us88.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_2 = gp_in1_2_buf64_us88.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_3 = gp_in1_2_buf64_us88.extract<96, 127>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_4 = gp_in1_2_buf64_us88.extract<128, 159>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_5 = gp_in1_2_buf64_us88.extract<160, 191>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_6 = gp_in1_2_buf64_us88.extract<192, 223>();
  hw_uint<32> gp_in1_2_buf64_us88_lane_7 = gp_in1_2_buf64_us88.extract<224, 255>();

	
  hw_uint<32 > gp_in1_1_buf56_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_0_pack, gp_in1_1_buf56_lane_0);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_0_pack, gp_in1_2_buf64_us88_lane_0);
  auto res_diff95_sm330_7590 = llf_diff_float_32(gp_in1_1_buf56_lane_0_pack, gp_in1_2_buf64_us88_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_1_pack, gp_in1_1_buf56_lane_1);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_1_pack, gp_in1_2_buf64_us88_lane_1);
  auto res_diff95_sm330_6588 = llf_diff_float_32(gp_in1_1_buf56_lane_1_pack, gp_in1_2_buf64_us88_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_2_pack, gp_in1_1_buf56_lane_2);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_2_pack, gp_in1_2_buf64_us88_lane_2);
  auto res_diff95_sm330_5586 = llf_diff_float_32(gp_in1_1_buf56_lane_2_pack, gp_in1_2_buf64_us88_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_3_pack, gp_in1_1_buf56_lane_3);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_3_pack, gp_in1_2_buf64_us88_lane_3);
  auto res_diff95_sm330_4584 = llf_diff_float_32(gp_in1_1_buf56_lane_3_pack, gp_in1_2_buf64_us88_lane_3_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_4_pack, gp_in1_1_buf56_lane_4);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_4_pack, gp_in1_2_buf64_us88_lane_4);
  auto res_diff95_sm330_3582 = llf_diff_float_32(gp_in1_1_buf56_lane_4_pack, gp_in1_2_buf64_us88_lane_4_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_5_pack, gp_in1_1_buf56_lane_5);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_5_pack, gp_in1_2_buf64_us88_lane_5);
  auto res_diff95_sm330_2580 = llf_diff_float_32(gp_in1_1_buf56_lane_5_pack, gp_in1_2_buf64_us88_lane_5_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_6_pack, gp_in1_1_buf56_lane_6);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_6_pack, gp_in1_2_buf64_us88_lane_6);
  auto res_diff95_sm330_1578 = llf_diff_float_32(gp_in1_1_buf56_lane_6_pack, gp_in1_2_buf64_us88_lane_6_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_7_pack, gp_in1_1_buf56_lane_7);
  hw_uint<32 > gp_in1_2_buf64_us88_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_us88_lane_7_pack, gp_in1_2_buf64_us88_lane_7);
  auto res_diff95_sm330_0576 = llf_diff_float_32(gp_in1_1_buf56_lane_7_pack, gp_in1_2_buf64_us88_lane_7_pack);
  hw_uint<256 > return_value939;
  set_at<0, 256, 32>(return_value939, res_diff95_sm330_7590);
  set_at<32, 256, 32>(return_value939, res_diff95_sm330_6588);
  set_at<64, 256, 32>(return_value939, res_diff95_sm330_5586);
  set_at<96, 256, 32>(return_value939, res_diff95_sm330_4584);
  set_at<128, 256, 32>(return_value939, res_diff95_sm330_3582);
  set_at<160, 256, 32>(return_value939, res_diff95_sm330_2580);
  set_at<192, 256, 32>(return_value939, res_diff95_sm330_1578);
  set_at<224, 256, 32>(return_value939, res_diff95_sm330_0576);
  return return_value939;

}

hw_uint<512> us_gp_in1_1_buf5698_cu941(hw_uint<32*16>& gp_in1_1_buf56) {
  return gp_in1_1_buf56;
}

hw_uint<512> lp_in1_0102_cu943(hw_uint<32*16>& gp_in1_1_buf56_us96, hw_uint<32*16>& in1) {
  hw_uint<32> gp_in1_1_buf56_us96_lane_0 = gp_in1_1_buf56_us96.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_1 = gp_in1_1_buf56_us96.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_2 = gp_in1_1_buf56_us96.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_3 = gp_in1_1_buf56_us96.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_4 = gp_in1_1_buf56_us96.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_5 = gp_in1_1_buf56_us96.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_6 = gp_in1_1_buf56_us96.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_7 = gp_in1_1_buf56_us96.extract<224, 255>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_8 = gp_in1_1_buf56_us96.extract<256, 287>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_9 = gp_in1_1_buf56_us96.extract<288, 319>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_10 = gp_in1_1_buf56_us96.extract<320, 351>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_11 = gp_in1_1_buf56_us96.extract<352, 383>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_12 = gp_in1_1_buf56_us96.extract<384, 415>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_13 = gp_in1_1_buf56_us96.extract<416, 447>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_14 = gp_in1_1_buf56_us96.extract<448, 479>();
  hw_uint<32> gp_in1_1_buf56_us96_lane_15 = gp_in1_1_buf56_us96.extract<480, 511>();
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

	
  hw_uint<32 > gp_in1_1_buf56_us96_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_0_pack, gp_in1_1_buf56_us96_lane_0);
  hw_uint<32 > in1_lane_0_pack;
  set_at<0, 32, 32>(in1_lane_0_pack, in1_lane_0);
  auto res_diff103_sm332_15654 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_0_pack, in1_lane_0_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_1_pack, gp_in1_1_buf56_us96_lane_1);
  hw_uint<32 > in1_lane_1_pack;
  set_at<0, 32, 32>(in1_lane_1_pack, in1_lane_1);
  auto res_diff103_sm332_14652 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_1_pack, in1_lane_1_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_2_pack, gp_in1_1_buf56_us96_lane_2);
  hw_uint<32 > in1_lane_2_pack;
  set_at<0, 32, 32>(in1_lane_2_pack, in1_lane_2);
  auto res_diff103_sm332_13650 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_2_pack, in1_lane_2_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_3_pack, gp_in1_1_buf56_us96_lane_3);
  hw_uint<32 > in1_lane_3_pack;
  set_at<0, 32, 32>(in1_lane_3_pack, in1_lane_3);
  auto res_diff103_sm332_12648 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_3_pack, in1_lane_3_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_4_pack, gp_in1_1_buf56_us96_lane_4);
  hw_uint<32 > in1_lane_4_pack;
  set_at<0, 32, 32>(in1_lane_4_pack, in1_lane_4);
  auto res_diff103_sm332_11646 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_4_pack, in1_lane_4_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_5_pack, gp_in1_1_buf56_us96_lane_5);
  hw_uint<32 > in1_lane_5_pack;
  set_at<0, 32, 32>(in1_lane_5_pack, in1_lane_5);
  auto res_diff103_sm332_10644 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_5_pack, in1_lane_5_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_6_pack, gp_in1_1_buf56_us96_lane_6);
  hw_uint<32 > in1_lane_6_pack;
  set_at<0, 32, 32>(in1_lane_6_pack, in1_lane_6);
  auto res_diff103_sm332_9642 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_6_pack, in1_lane_6_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_7_pack, gp_in1_1_buf56_us96_lane_7);
  hw_uint<32 > in1_lane_7_pack;
  set_at<0, 32, 32>(in1_lane_7_pack, in1_lane_7);
  auto res_diff103_sm332_8640 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_7_pack, in1_lane_7_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_8_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_8_pack, gp_in1_1_buf56_us96_lane_8);
  hw_uint<32 > in1_lane_8_pack;
  set_at<0, 32, 32>(in1_lane_8_pack, in1_lane_8);
  auto res_diff103_sm332_7638 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_8_pack, in1_lane_8_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_9_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_9_pack, gp_in1_1_buf56_us96_lane_9);
  hw_uint<32 > in1_lane_9_pack;
  set_at<0, 32, 32>(in1_lane_9_pack, in1_lane_9);
  auto res_diff103_sm332_6636 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_9_pack, in1_lane_9_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_10_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_10_pack, gp_in1_1_buf56_us96_lane_10);
  hw_uint<32 > in1_lane_10_pack;
  set_at<0, 32, 32>(in1_lane_10_pack, in1_lane_10);
  auto res_diff103_sm332_5634 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_10_pack, in1_lane_10_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_11_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_11_pack, gp_in1_1_buf56_us96_lane_11);
  hw_uint<32 > in1_lane_11_pack;
  set_at<0, 32, 32>(in1_lane_11_pack, in1_lane_11);
  auto res_diff103_sm332_4632 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_11_pack, in1_lane_11_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_12_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_12_pack, gp_in1_1_buf56_us96_lane_12);
  hw_uint<32 > in1_lane_12_pack;
  set_at<0, 32, 32>(in1_lane_12_pack, in1_lane_12);
  auto res_diff103_sm332_3630 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_12_pack, in1_lane_12_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_13_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_13_pack, gp_in1_1_buf56_us96_lane_13);
  hw_uint<32 > in1_lane_13_pack;
  set_at<0, 32, 32>(in1_lane_13_pack, in1_lane_13);
  auto res_diff103_sm332_2628 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_13_pack, in1_lane_13_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_14_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_14_pack, gp_in1_1_buf56_us96_lane_14);
  hw_uint<32 > in1_lane_14_pack;
  set_at<0, 32, 32>(in1_lane_14_pack, in1_lane_14);
  auto res_diff103_sm332_1626 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_14_pack, in1_lane_14_pack);

  hw_uint<32 > gp_in1_1_buf56_us96_lane_15_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_us96_lane_15_pack, gp_in1_1_buf56_us96_lane_15);
  hw_uint<32 > in1_lane_15_pack;
  set_at<0, 32, 32>(in1_lane_15_pack, in1_lane_15);
  auto res_diff103_sm332_0624 = llf_diff_float_32(gp_in1_1_buf56_us96_lane_15_pack, in1_lane_15_pack);
  hw_uint<512 > return_value944;
  set_at<0, 512, 32>(return_value944, res_diff103_sm332_15654);
  set_at<32, 512, 32>(return_value944, res_diff103_sm332_14652);
  set_at<64, 512, 32>(return_value944, res_diff103_sm332_13650);
  set_at<96, 512, 32>(return_value944, res_diff103_sm332_12648);
  set_at<128, 512, 32>(return_value944, res_diff103_sm332_11646);
  set_at<160, 512, 32>(return_value944, res_diff103_sm332_10644);
  set_at<192, 512, 32>(return_value944, res_diff103_sm332_9642);
  set_at<224, 512, 32>(return_value944, res_diff103_sm332_8640);
  set_at<256, 512, 32>(return_value944, res_diff103_sm332_7638);
  set_at<288, 512, 32>(return_value944, res_diff103_sm332_6636);
  set_at<320, 512, 32>(return_value944, res_diff103_sm332_5634);
  set_at<352, 512, 32>(return_value944, res_diff103_sm332_4632);
  set_at<384, 512, 32>(return_value944, res_diff103_sm332_3630);
  set_at<416, 512, 32>(return_value944, res_diff103_sm332_2628);
  set_at<448, 512, 32>(return_value944, res_diff103_sm332_1626);
  set_at<480, 512, 32>(return_value944, res_diff103_sm332_0624);
  return return_value944;

}

hw_uint<512> pw_math_lp_in0_0_buf52_lp_in1_0_buf100104106_cu946(hw_uint<32*16>& lp_in0_0_buf52, hw_uint<32*16>& lp_in1_0_buf100) {
  hw_uint<32> lp_in0_0_buf52_lane_0 = lp_in0_0_buf52.extract<0, 31>();
  hw_uint<32> lp_in0_0_buf52_lane_1 = lp_in0_0_buf52.extract<32, 63>();
  hw_uint<32> lp_in0_0_buf52_lane_2 = lp_in0_0_buf52.extract<64, 95>();
  hw_uint<32> lp_in0_0_buf52_lane_3 = lp_in0_0_buf52.extract<96, 127>();
  hw_uint<32> lp_in0_0_buf52_lane_4 = lp_in0_0_buf52.extract<128, 159>();
  hw_uint<32> lp_in0_0_buf52_lane_5 = lp_in0_0_buf52.extract<160, 191>();
  hw_uint<32> lp_in0_0_buf52_lane_6 = lp_in0_0_buf52.extract<192, 223>();
  hw_uint<32> lp_in0_0_buf52_lane_7 = lp_in0_0_buf52.extract<224, 255>();
  hw_uint<32> lp_in0_0_buf52_lane_8 = lp_in0_0_buf52.extract<256, 287>();
  hw_uint<32> lp_in0_0_buf52_lane_9 = lp_in0_0_buf52.extract<288, 319>();
  hw_uint<32> lp_in0_0_buf52_lane_10 = lp_in0_0_buf52.extract<320, 351>();
  hw_uint<32> lp_in0_0_buf52_lane_11 = lp_in0_0_buf52.extract<352, 383>();
  hw_uint<32> lp_in0_0_buf52_lane_12 = lp_in0_0_buf52.extract<384, 415>();
  hw_uint<32> lp_in0_0_buf52_lane_13 = lp_in0_0_buf52.extract<416, 447>();
  hw_uint<32> lp_in0_0_buf52_lane_14 = lp_in0_0_buf52.extract<448, 479>();
  hw_uint<32> lp_in0_0_buf52_lane_15 = lp_in0_0_buf52.extract<480, 511>();
  hw_uint<32> lp_in1_0_buf100_lane_0 = lp_in1_0_buf100.extract<0, 31>();
  hw_uint<32> lp_in1_0_buf100_lane_1 = lp_in1_0_buf100.extract<32, 63>();
  hw_uint<32> lp_in1_0_buf100_lane_2 = lp_in1_0_buf100.extract<64, 95>();
  hw_uint<32> lp_in1_0_buf100_lane_3 = lp_in1_0_buf100.extract<96, 127>();
  hw_uint<32> lp_in1_0_buf100_lane_4 = lp_in1_0_buf100.extract<128, 159>();
  hw_uint<32> lp_in1_0_buf100_lane_5 = lp_in1_0_buf100.extract<160, 191>();
  hw_uint<32> lp_in1_0_buf100_lane_6 = lp_in1_0_buf100.extract<192, 223>();
  hw_uint<32> lp_in1_0_buf100_lane_7 = lp_in1_0_buf100.extract<224, 255>();
  hw_uint<32> lp_in1_0_buf100_lane_8 = lp_in1_0_buf100.extract<256, 287>();
  hw_uint<32> lp_in1_0_buf100_lane_9 = lp_in1_0_buf100.extract<288, 319>();
  hw_uint<32> lp_in1_0_buf100_lane_10 = lp_in1_0_buf100.extract<320, 351>();
  hw_uint<32> lp_in1_0_buf100_lane_11 = lp_in1_0_buf100.extract<352, 383>();
  hw_uint<32> lp_in1_0_buf100_lane_12 = lp_in1_0_buf100.extract<384, 415>();
  hw_uint<32> lp_in1_0_buf100_lane_13 = lp_in1_0_buf100.extract<416, 447>();
  hw_uint<32> lp_in1_0_buf100_lane_14 = lp_in1_0_buf100.extract<448, 479>();
  hw_uint<32> lp_in1_0_buf100_lane_15 = lp_in1_0_buf100.extract<480, 511>();

	
  hw_uint<32 > lp_in0_0_buf52_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_0_pack, lp_in0_0_buf52_lane_0);
  hw_uint<32 > lp_in1_0_buf100_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_0_pack, lp_in1_0_buf100_lane_0);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_15686 = llf_float_average(lp_in0_0_buf52_lane_0_pack, lp_in1_0_buf100_lane_0_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_1_pack, lp_in0_0_buf52_lane_1);
  hw_uint<32 > lp_in1_0_buf100_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_1_pack, lp_in1_0_buf100_lane_1);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_14684 = llf_float_average(lp_in0_0_buf52_lane_1_pack, lp_in1_0_buf100_lane_1_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_2_pack, lp_in0_0_buf52_lane_2);
  hw_uint<32 > lp_in1_0_buf100_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_2_pack, lp_in1_0_buf100_lane_2);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_13682 = llf_float_average(lp_in0_0_buf52_lane_2_pack, lp_in1_0_buf100_lane_2_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_3_pack, lp_in0_0_buf52_lane_3);
  hw_uint<32 > lp_in1_0_buf100_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_3_pack, lp_in1_0_buf100_lane_3);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_12680 = llf_float_average(lp_in0_0_buf52_lane_3_pack, lp_in1_0_buf100_lane_3_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_4_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_4_pack, lp_in0_0_buf52_lane_4);
  hw_uint<32 > lp_in1_0_buf100_lane_4_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_4_pack, lp_in1_0_buf100_lane_4);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_11678 = llf_float_average(lp_in0_0_buf52_lane_4_pack, lp_in1_0_buf100_lane_4_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_5_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_5_pack, lp_in0_0_buf52_lane_5);
  hw_uint<32 > lp_in1_0_buf100_lane_5_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_5_pack, lp_in1_0_buf100_lane_5);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_10676 = llf_float_average(lp_in0_0_buf52_lane_5_pack, lp_in1_0_buf100_lane_5_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_6_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_6_pack, lp_in0_0_buf52_lane_6);
  hw_uint<32 > lp_in1_0_buf100_lane_6_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_6_pack, lp_in1_0_buf100_lane_6);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_9674 = llf_float_average(lp_in0_0_buf52_lane_6_pack, lp_in1_0_buf100_lane_6_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_7_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_7_pack, lp_in0_0_buf52_lane_7);
  hw_uint<32 > lp_in1_0_buf100_lane_7_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_7_pack, lp_in1_0_buf100_lane_7);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_8672 = llf_float_average(lp_in0_0_buf52_lane_7_pack, lp_in1_0_buf100_lane_7_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_8_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_8_pack, lp_in0_0_buf52_lane_8);
  hw_uint<32 > lp_in1_0_buf100_lane_8_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_8_pack, lp_in1_0_buf100_lane_8);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_7670 = llf_float_average(lp_in0_0_buf52_lane_8_pack, lp_in1_0_buf100_lane_8_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_9_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_9_pack, lp_in0_0_buf52_lane_9);
  hw_uint<32 > lp_in1_0_buf100_lane_9_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_9_pack, lp_in1_0_buf100_lane_9);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_6668 = llf_float_average(lp_in0_0_buf52_lane_9_pack, lp_in1_0_buf100_lane_9_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_10_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_10_pack, lp_in0_0_buf52_lane_10);
  hw_uint<32 > lp_in1_0_buf100_lane_10_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_10_pack, lp_in1_0_buf100_lane_10);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_5666 = llf_float_average(lp_in0_0_buf52_lane_10_pack, lp_in1_0_buf100_lane_10_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_11_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_11_pack, lp_in0_0_buf52_lane_11);
  hw_uint<32 > lp_in1_0_buf100_lane_11_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_11_pack, lp_in1_0_buf100_lane_11);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_4664 = llf_float_average(lp_in0_0_buf52_lane_11_pack, lp_in1_0_buf100_lane_11_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_12_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_12_pack, lp_in0_0_buf52_lane_12);
  hw_uint<32 > lp_in1_0_buf100_lane_12_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_12_pack, lp_in1_0_buf100_lane_12);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_3662 = llf_float_average(lp_in0_0_buf52_lane_12_pack, lp_in1_0_buf100_lane_12_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_13_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_13_pack, lp_in0_0_buf52_lane_13);
  hw_uint<32 > lp_in1_0_buf100_lane_13_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_13_pack, lp_in1_0_buf100_lane_13);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_2660 = llf_float_average(lp_in0_0_buf52_lane_13_pack, lp_in1_0_buf100_lane_13_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_14_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_14_pack, lp_in0_0_buf52_lane_14);
  hw_uint<32 > lp_in1_0_buf100_lane_14_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_14_pack, lp_in1_0_buf100_lane_14);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1658 = llf_float_average(lp_in0_0_buf52_lane_14_pack, lp_in1_0_buf100_lane_14_pack);

  hw_uint<32 > lp_in0_0_buf52_lane_15_pack;
  set_at<0, 32, 32>(lp_in0_0_buf52_lane_15_pack, lp_in0_0_buf52_lane_15);
  hw_uint<32 > lp_in1_0_buf100_lane_15_pack;
  set_at<0, 32, 32>(lp_in1_0_buf100_lane_15_pack, lp_in1_0_buf100_lane_15);
  auto res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0656 = llf_float_average(lp_in0_0_buf52_lane_15_pack, lp_in1_0_buf100_lane_15_pack);
  hw_uint<512 > return_value947;
  set_at<0, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_15686);
  set_at<32, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_14684);
  set_at<64, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_13682);
  set_at<96, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_12680);
  set_at<128, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_11678);
  set_at<160, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_10676);
  set_at<192, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_9674);
  set_at<224, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_8672);
  set_at<256, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_7670);
  set_at<288, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_6668);
  set_at<320, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_5666);
  set_at<352, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_4664);
  set_at<384, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_3662);
  set_at<416, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_2660);
  set_at<448, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_1658);
  set_at<480, 512, 32>(return_value947, res_pw_math_lp_in0_0_buf52_lp_in1_0_buf100104107_sm333_0656);
  return return_value947;

}

hw_uint<256> pw_math_lp_in0_1_buf44_lp_in1_1_buf92108110_cu949(hw_uint<32*8>& lp_in0_1_buf44, hw_uint<32*8>& lp_in1_1_buf92) {
  hw_uint<32> lp_in0_1_buf44_lane_0 = lp_in0_1_buf44.extract<0, 31>();
  hw_uint<32> lp_in0_1_buf44_lane_1 = lp_in0_1_buf44.extract<32, 63>();
  hw_uint<32> lp_in0_1_buf44_lane_2 = lp_in0_1_buf44.extract<64, 95>();
  hw_uint<32> lp_in0_1_buf44_lane_3 = lp_in0_1_buf44.extract<96, 127>();
  hw_uint<32> lp_in0_1_buf44_lane_4 = lp_in0_1_buf44.extract<128, 159>();
  hw_uint<32> lp_in0_1_buf44_lane_5 = lp_in0_1_buf44.extract<160, 191>();
  hw_uint<32> lp_in0_1_buf44_lane_6 = lp_in0_1_buf44.extract<192, 223>();
  hw_uint<32> lp_in0_1_buf44_lane_7 = lp_in0_1_buf44.extract<224, 255>();
  hw_uint<32> lp_in1_1_buf92_lane_0 = lp_in1_1_buf92.extract<0, 31>();
  hw_uint<32> lp_in1_1_buf92_lane_1 = lp_in1_1_buf92.extract<32, 63>();
  hw_uint<32> lp_in1_1_buf92_lane_2 = lp_in1_1_buf92.extract<64, 95>();
  hw_uint<32> lp_in1_1_buf92_lane_3 = lp_in1_1_buf92.extract<96, 127>();
  hw_uint<32> lp_in1_1_buf92_lane_4 = lp_in1_1_buf92.extract<128, 159>();
  hw_uint<32> lp_in1_1_buf92_lane_5 = lp_in1_1_buf92.extract<160, 191>();
  hw_uint<32> lp_in1_1_buf92_lane_6 = lp_in1_1_buf92.extract<192, 223>();
  hw_uint<32> lp_in1_1_buf92_lane_7 = lp_in1_1_buf92.extract<224, 255>();

	
  hw_uint<32 > lp_in0_1_buf44_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_0_pack, lp_in0_1_buf44_lane_0);
  hw_uint<32 > lp_in1_1_buf92_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_0_pack, lp_in1_1_buf92_lane_0);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_7702 = llf_float_average(lp_in0_1_buf44_lane_0_pack, lp_in1_1_buf92_lane_0_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_1_pack, lp_in0_1_buf44_lane_1);
  hw_uint<32 > lp_in1_1_buf92_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_1_pack, lp_in1_1_buf92_lane_1);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_6700 = llf_float_average(lp_in0_1_buf44_lane_1_pack, lp_in1_1_buf92_lane_1_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_2_pack, lp_in0_1_buf44_lane_2);
  hw_uint<32 > lp_in1_1_buf92_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_2_pack, lp_in1_1_buf92_lane_2);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_5698 = llf_float_average(lp_in0_1_buf44_lane_2_pack, lp_in1_1_buf92_lane_2_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_3_pack, lp_in0_1_buf44_lane_3);
  hw_uint<32 > lp_in1_1_buf92_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_3_pack, lp_in1_1_buf92_lane_3);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_4696 = llf_float_average(lp_in0_1_buf44_lane_3_pack, lp_in1_1_buf92_lane_3_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_4_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_4_pack, lp_in0_1_buf44_lane_4);
  hw_uint<32 > lp_in1_1_buf92_lane_4_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_4_pack, lp_in1_1_buf92_lane_4);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_3694 = llf_float_average(lp_in0_1_buf44_lane_4_pack, lp_in1_1_buf92_lane_4_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_5_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_5_pack, lp_in0_1_buf44_lane_5);
  hw_uint<32 > lp_in1_1_buf92_lane_5_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_5_pack, lp_in1_1_buf92_lane_5);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_2692 = llf_float_average(lp_in0_1_buf44_lane_5_pack, lp_in1_1_buf92_lane_5_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_6_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_6_pack, lp_in0_1_buf44_lane_6);
  hw_uint<32 > lp_in1_1_buf92_lane_6_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_6_pack, lp_in1_1_buf92_lane_6);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_1690 = llf_float_average(lp_in0_1_buf44_lane_6_pack, lp_in1_1_buf92_lane_6_pack);

  hw_uint<32 > lp_in0_1_buf44_lane_7_pack;
  set_at<0, 32, 32>(lp_in0_1_buf44_lane_7_pack, lp_in0_1_buf44_lane_7);
  hw_uint<32 > lp_in1_1_buf92_lane_7_pack;
  set_at<0, 32, 32>(lp_in1_1_buf92_lane_7_pack, lp_in1_1_buf92_lane_7);
  auto res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_0688 = llf_float_average(lp_in0_1_buf44_lane_7_pack, lp_in1_1_buf92_lane_7_pack);
  hw_uint<256 > return_value950;
  set_at<0, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_7702);
  set_at<32, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_6700);
  set_at<64, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_5698);
  set_at<96, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_4696);
  set_at<128, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_3694);
  set_at<160, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_2692);
  set_at<192, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_1690);
  set_at<224, 256, 32>(return_value950, res_pw_math_lp_in0_1_buf44_lp_in1_1_buf92108111_sm334_0688);
  return return_value950;

}

hw_uint<128> pw_math_lp_in0_2_buf36_lp_in1_2_buf84112114_cu952(hw_uint<32*4>& lp_in0_2_buf36, hw_uint<32*4>& lp_in1_2_buf84) {
  hw_uint<32> lp_in0_2_buf36_lane_0 = lp_in0_2_buf36.extract<0, 31>();
  hw_uint<32> lp_in0_2_buf36_lane_1 = lp_in0_2_buf36.extract<32, 63>();
  hw_uint<32> lp_in0_2_buf36_lane_2 = lp_in0_2_buf36.extract<64, 95>();
  hw_uint<32> lp_in0_2_buf36_lane_3 = lp_in0_2_buf36.extract<96, 127>();
  hw_uint<32> lp_in1_2_buf84_lane_0 = lp_in1_2_buf84.extract<0, 31>();
  hw_uint<32> lp_in1_2_buf84_lane_1 = lp_in1_2_buf84.extract<32, 63>();
  hw_uint<32> lp_in1_2_buf84_lane_2 = lp_in1_2_buf84.extract<64, 95>();
  hw_uint<32> lp_in1_2_buf84_lane_3 = lp_in1_2_buf84.extract<96, 127>();

	
  hw_uint<32 > lp_in0_2_buf36_lane_0_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_lane_0_pack, lp_in0_2_buf36_lane_0);
  hw_uint<32 > lp_in1_2_buf84_lane_0_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_lane_0_pack, lp_in1_2_buf84_lane_0);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_3710 = llf_float_average(lp_in0_2_buf36_lane_0_pack, lp_in1_2_buf84_lane_0_pack);

  hw_uint<32 > lp_in0_2_buf36_lane_1_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_lane_1_pack, lp_in0_2_buf36_lane_1);
  hw_uint<32 > lp_in1_2_buf84_lane_1_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_lane_1_pack, lp_in1_2_buf84_lane_1);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_2708 = llf_float_average(lp_in0_2_buf36_lane_1_pack, lp_in1_2_buf84_lane_1_pack);

  hw_uint<32 > lp_in0_2_buf36_lane_2_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_lane_2_pack, lp_in0_2_buf36_lane_2);
  hw_uint<32 > lp_in1_2_buf84_lane_2_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_lane_2_pack, lp_in1_2_buf84_lane_2);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_1706 = llf_float_average(lp_in0_2_buf36_lane_2_pack, lp_in1_2_buf84_lane_2_pack);

  hw_uint<32 > lp_in0_2_buf36_lane_3_pack;
  set_at<0, 32, 32>(lp_in0_2_buf36_lane_3_pack, lp_in0_2_buf36_lane_3);
  hw_uint<32 > lp_in1_2_buf84_lane_3_pack;
  set_at<0, 32, 32>(lp_in1_2_buf84_lane_3_pack, lp_in1_2_buf84_lane_3);
  auto res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0704 = llf_float_average(lp_in0_2_buf36_lane_3_pack, lp_in1_2_buf84_lane_3_pack);
  hw_uint<128 > return_value953;
  set_at<0, 128, 32>(return_value953, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_3710);
  set_at<32, 128, 32>(return_value953, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_2708);
  set_at<64, 128, 32>(return_value953, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_1706);
  set_at<96, 128, 32>(return_value953, res_pw_math_lp_in0_2_buf36_lp_in1_2_buf84112115_sm335_0704);
  return return_value953;

}

hw_uint<64> pw_math_gp_in0_3_buf24_gp_in1_3_buf72116118_cu955(hw_uint<32*2>& gp_in0_3_buf24, hw_uint<32*2>& gp_in1_3_buf72) {
  hw_uint<32> gp_in0_3_buf24_lane_0 = gp_in0_3_buf24.extract<0, 31>();
  hw_uint<32> gp_in0_3_buf24_lane_1 = gp_in0_3_buf24.extract<32, 63>();
  hw_uint<32> gp_in1_3_buf72_lane_0 = gp_in1_3_buf72.extract<0, 31>();
  hw_uint<32> gp_in1_3_buf72_lane_1 = gp_in1_3_buf72.extract<32, 63>();

	
  hw_uint<32 > gp_in0_3_buf24_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_lane_0_pack, gp_in0_3_buf24_lane_0);
  hw_uint<32 > gp_in1_3_buf72_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_lane_0_pack, gp_in1_3_buf72_lane_0);
  auto res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_1714 = llf_float_average(gp_in0_3_buf24_lane_0_pack, gp_in1_3_buf72_lane_0_pack);

  hw_uint<32 > gp_in0_3_buf24_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_3_buf24_lane_1_pack, gp_in0_3_buf24_lane_1);
  hw_uint<32 > gp_in1_3_buf72_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_3_buf72_lane_1_pack, gp_in1_3_buf72_lane_1);
  auto res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0712 = llf_float_average(gp_in0_3_buf24_lane_1_pack, gp_in1_3_buf72_lane_1_pack);
  hw_uint<64 > return_value956;
  set_at<0, 64, 32>(return_value956, res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_1714);
  set_at<32, 64, 32>(return_value956, res_pw_math_gp_in0_3_buf24_gp_in1_3_buf72116119_sm336_0712);
  return return_value956;

}

hw_uint<128> us_merged_3126_cu958(hw_uint<32*4>& merged_3) {
  return merged_3;
}

hw_uint<128> merged_2_reconstruct_lp120122_cu960(hw_uint<32*4>& merged_2, hw_uint<32*4>& merged_3_us124) {
  hw_uint<32> merged_2_lane_0 = merged_2.extract<0, 31>();
  hw_uint<32> merged_2_lane_1 = merged_2.extract<32, 63>();
  hw_uint<32> merged_2_lane_2 = merged_2.extract<64, 95>();
  hw_uint<32> merged_2_lane_3 = merged_2.extract<96, 127>();
  hw_uint<32> merged_3_us124_lane_0 = merged_3_us124.extract<0, 31>();
  hw_uint<32> merged_3_us124_lane_1 = merged_3_us124.extract<32, 63>();
  hw_uint<32> merged_3_us124_lane_2 = merged_3_us124.extract<64, 95>();
  hw_uint<32> merged_3_us124_lane_3 = merged_3_us124.extract<96, 127>();

	
  hw_uint<32 > merged_2_lane_0_pack;
  set_at<0, 32, 32>(merged_2_lane_0_pack, merged_2_lane_0);
  hw_uint<32 > merged_3_us124_lane_0_pack;
  set_at<0, 32, 32>(merged_3_us124_lane_0_pack, merged_3_us124_lane_0);
  auto res_rc128_sm338_3730 = llf_add_float_32(merged_2_lane_0_pack, merged_3_us124_lane_0_pack);

  hw_uint<32 > merged_2_lane_1_pack;
  set_at<0, 32, 32>(merged_2_lane_1_pack, merged_2_lane_1);
  hw_uint<32 > merged_3_us124_lane_1_pack;
  set_at<0, 32, 32>(merged_3_us124_lane_1_pack, merged_3_us124_lane_1);
  auto res_rc128_sm338_2728 = llf_add_float_32(merged_2_lane_1_pack, merged_3_us124_lane_1_pack);

  hw_uint<32 > merged_2_lane_2_pack;
  set_at<0, 32, 32>(merged_2_lane_2_pack, merged_2_lane_2);
  hw_uint<32 > merged_3_us124_lane_2_pack;
  set_at<0, 32, 32>(merged_3_us124_lane_2_pack, merged_3_us124_lane_2);
  auto res_rc128_sm338_1726 = llf_add_float_32(merged_2_lane_2_pack, merged_3_us124_lane_2_pack);

  hw_uint<32 > merged_2_lane_3_pack;
  set_at<0, 32, 32>(merged_2_lane_3_pack, merged_2_lane_3);
  hw_uint<32 > merged_3_us124_lane_3_pack;
  set_at<0, 32, 32>(merged_3_us124_lane_3_pack, merged_3_us124_lane_3);
  auto res_rc128_sm338_0724 = llf_add_float_32(merged_2_lane_3_pack, merged_3_us124_lane_3_pack);
  hw_uint<128 > return_value961;
  set_at<0, 128, 32>(return_value961, res_rc128_sm338_3730);
  set_at<32, 128, 32>(return_value961, res_rc128_sm338_2728);
  set_at<64, 128, 32>(return_value961, res_rc128_sm338_1726);
  set_at<96, 128, 32>(return_value961, res_rc128_sm338_0724);
  return return_value961;

}

hw_uint<256> us_merged_2_reconstruct_lp120_buf123135_cu963(hw_uint<32*8>& merged_2_reconstruct_lp120_buf123) {
  return merged_2_reconstruct_lp120_buf123;
}

hw_uint<256> merged_1_reconstruct_lp129131_cu965(hw_uint<32*8>& merged_1, hw_uint<32*8>& merged_2_reconstruct_lp120_buf123_us133) {
  hw_uint<32> merged_1_lane_0 = merged_1.extract<0, 31>();
  hw_uint<32> merged_1_lane_1 = merged_1.extract<32, 63>();
  hw_uint<32> merged_1_lane_2 = merged_1.extract<64, 95>();
  hw_uint<32> merged_1_lane_3 = merged_1.extract<96, 127>();
  hw_uint<32> merged_1_lane_4 = merged_1.extract<128, 159>();
  hw_uint<32> merged_1_lane_5 = merged_1.extract<160, 191>();
  hw_uint<32> merged_1_lane_6 = merged_1.extract<192, 223>();
  hw_uint<32> merged_1_lane_7 = merged_1.extract<224, 255>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_0 = merged_2_reconstruct_lp120_buf123_us133.extract<0, 31>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_1 = merged_2_reconstruct_lp120_buf123_us133.extract<32, 63>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_2 = merged_2_reconstruct_lp120_buf123_us133.extract<64, 95>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_3 = merged_2_reconstruct_lp120_buf123_us133.extract<96, 127>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_4 = merged_2_reconstruct_lp120_buf123_us133.extract<128, 159>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_5 = merged_2_reconstruct_lp120_buf123_us133.extract<160, 191>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_6 = merged_2_reconstruct_lp120_buf123_us133.extract<192, 223>();
  hw_uint<32> merged_2_reconstruct_lp120_buf123_us133_lane_7 = merged_2_reconstruct_lp120_buf123_us133.extract<224, 255>();

	
  hw_uint<32 > merged_1_lane_0_pack;
  set_at<0, 32, 32>(merged_1_lane_0_pack, merged_1_lane_0);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_0_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_lane_0);
  auto res_rc137_sm340_7762 = llf_add_float_32(merged_1_lane_0_pack, merged_2_reconstruct_lp120_buf123_us133_lane_0_pack);

  hw_uint<32 > merged_1_lane_1_pack;
  set_at<0, 32, 32>(merged_1_lane_1_pack, merged_1_lane_1);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_1_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_lane_1);
  auto res_rc137_sm340_6760 = llf_add_float_32(merged_1_lane_1_pack, merged_2_reconstruct_lp120_buf123_us133_lane_1_pack);

  hw_uint<32 > merged_1_lane_2_pack;
  set_at<0, 32, 32>(merged_1_lane_2_pack, merged_1_lane_2);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_2_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_lane_2);
  auto res_rc137_sm340_5758 = llf_add_float_32(merged_1_lane_2_pack, merged_2_reconstruct_lp120_buf123_us133_lane_2_pack);

  hw_uint<32 > merged_1_lane_3_pack;
  set_at<0, 32, 32>(merged_1_lane_3_pack, merged_1_lane_3);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_3_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_lane_3);
  auto res_rc137_sm340_4756 = llf_add_float_32(merged_1_lane_3_pack, merged_2_reconstruct_lp120_buf123_us133_lane_3_pack);

  hw_uint<32 > merged_1_lane_4_pack;
  set_at<0, 32, 32>(merged_1_lane_4_pack, merged_1_lane_4);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_4_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_4_pack, merged_2_reconstruct_lp120_buf123_us133_lane_4);
  auto res_rc137_sm340_3754 = llf_add_float_32(merged_1_lane_4_pack, merged_2_reconstruct_lp120_buf123_us133_lane_4_pack);

  hw_uint<32 > merged_1_lane_5_pack;
  set_at<0, 32, 32>(merged_1_lane_5_pack, merged_1_lane_5);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_5_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_5_pack, merged_2_reconstruct_lp120_buf123_us133_lane_5);
  auto res_rc137_sm340_2752 = llf_add_float_32(merged_1_lane_5_pack, merged_2_reconstruct_lp120_buf123_us133_lane_5_pack);

  hw_uint<32 > merged_1_lane_6_pack;
  set_at<0, 32, 32>(merged_1_lane_6_pack, merged_1_lane_6);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_6_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_6_pack, merged_2_reconstruct_lp120_buf123_us133_lane_6);
  auto res_rc137_sm340_1750 = llf_add_float_32(merged_1_lane_6_pack, merged_2_reconstruct_lp120_buf123_us133_lane_6_pack);

  hw_uint<32 > merged_1_lane_7_pack;
  set_at<0, 32, 32>(merged_1_lane_7_pack, merged_1_lane_7);
  hw_uint<32 > merged_2_reconstruct_lp120_buf123_us133_lane_7_pack;
  set_at<0, 32, 32>(merged_2_reconstruct_lp120_buf123_us133_lane_7_pack, merged_2_reconstruct_lp120_buf123_us133_lane_7);
  auto res_rc137_sm340_0748 = llf_add_float_32(merged_1_lane_7_pack, merged_2_reconstruct_lp120_buf123_us133_lane_7_pack);
  hw_uint<256 > return_value966;
  set_at<0, 256, 32>(return_value966, res_rc137_sm340_7762);
  set_at<32, 256, 32>(return_value966, res_rc137_sm340_6760);
  set_at<64, 256, 32>(return_value966, res_rc137_sm340_5758);
  set_at<96, 256, 32>(return_value966, res_rc137_sm340_4756);
  set_at<128, 256, 32>(return_value966, res_rc137_sm340_3754);
  set_at<160, 256, 32>(return_value966, res_rc137_sm340_2752);
  set_at<192, 256, 32>(return_value966, res_rc137_sm340_1750);
  set_at<224, 256, 32>(return_value966, res_rc137_sm340_0748);
  return return_value966;

}

hw_uint<512> us_merged_1_reconstruct_lp129_buf132144_cu968(hw_uint<32*16>& merged_1_reconstruct_lp129_buf132) {
  return merged_1_reconstruct_lp129_buf132;
}

hw_uint<512> merged_0_reconstruct_lp138140_cu970(hw_uint<32*16>& merged_0, hw_uint<32*16>& merged_1_reconstruct_lp129_buf132_us142) {
  hw_uint<32> merged_0_lane_0 = merged_0.extract<0, 31>();
  hw_uint<32> merged_0_lane_1 = merged_0.extract<32, 63>();
  hw_uint<32> merged_0_lane_2 = merged_0.extract<64, 95>();
  hw_uint<32> merged_0_lane_3 = merged_0.extract<96, 127>();
  hw_uint<32> merged_0_lane_4 = merged_0.extract<128, 159>();
  hw_uint<32> merged_0_lane_5 = merged_0.extract<160, 191>();
  hw_uint<32> merged_0_lane_6 = merged_0.extract<192, 223>();
  hw_uint<32> merged_0_lane_7 = merged_0.extract<224, 255>();
  hw_uint<32> merged_0_lane_8 = merged_0.extract<256, 287>();
  hw_uint<32> merged_0_lane_9 = merged_0.extract<288, 319>();
  hw_uint<32> merged_0_lane_10 = merged_0.extract<320, 351>();
  hw_uint<32> merged_0_lane_11 = merged_0.extract<352, 383>();
  hw_uint<32> merged_0_lane_12 = merged_0.extract<384, 415>();
  hw_uint<32> merged_0_lane_13 = merged_0.extract<416, 447>();
  hw_uint<32> merged_0_lane_14 = merged_0.extract<448, 479>();
  hw_uint<32> merged_0_lane_15 = merged_0.extract<480, 511>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_0 = merged_1_reconstruct_lp129_buf132_us142.extract<0, 31>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_1 = merged_1_reconstruct_lp129_buf132_us142.extract<32, 63>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_2 = merged_1_reconstruct_lp129_buf132_us142.extract<64, 95>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_3 = merged_1_reconstruct_lp129_buf132_us142.extract<96, 127>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_4 = merged_1_reconstruct_lp129_buf132_us142.extract<128, 159>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_5 = merged_1_reconstruct_lp129_buf132_us142.extract<160, 191>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_6 = merged_1_reconstruct_lp129_buf132_us142.extract<192, 223>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_7 = merged_1_reconstruct_lp129_buf132_us142.extract<224, 255>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_8 = merged_1_reconstruct_lp129_buf132_us142.extract<256, 287>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_9 = merged_1_reconstruct_lp129_buf132_us142.extract<288, 319>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_10 = merged_1_reconstruct_lp129_buf132_us142.extract<320, 351>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_11 = merged_1_reconstruct_lp129_buf132_us142.extract<352, 383>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_12 = merged_1_reconstruct_lp129_buf132_us142.extract<384, 415>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_13 = merged_1_reconstruct_lp129_buf132_us142.extract<416, 447>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_14 = merged_1_reconstruct_lp129_buf132_us142.extract<448, 479>();
  hw_uint<32> merged_1_reconstruct_lp129_buf132_us142_lane_15 = merged_1_reconstruct_lp129_buf132_us142.extract<480, 511>();

	
  hw_uint<32 > merged_0_lane_0_pack;
  set_at<0, 32, 32>(merged_0_lane_0_pack, merged_0_lane_0);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_0_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0);
  auto res_rc146_sm342_15826 = llf_add_float_32(merged_0_lane_0_pack, merged_1_reconstruct_lp129_buf132_us142_lane_0_pack);

  hw_uint<32 > merged_0_lane_1_pack;
  set_at<0, 32, 32>(merged_0_lane_1_pack, merged_0_lane_1);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_1_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1);
  auto res_rc146_sm342_14824 = llf_add_float_32(merged_0_lane_1_pack, merged_1_reconstruct_lp129_buf132_us142_lane_1_pack);

  hw_uint<32 > merged_0_lane_2_pack;
  set_at<0, 32, 32>(merged_0_lane_2_pack, merged_0_lane_2);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_2_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_lane_2);
  auto res_rc146_sm342_13822 = llf_add_float_32(merged_0_lane_2_pack, merged_1_reconstruct_lp129_buf132_us142_lane_2_pack);

  hw_uint<32 > merged_0_lane_3_pack;
  set_at<0, 32, 32>(merged_0_lane_3_pack, merged_0_lane_3);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_3_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_lane_3);
  auto res_rc146_sm342_12820 = llf_add_float_32(merged_0_lane_3_pack, merged_1_reconstruct_lp129_buf132_us142_lane_3_pack);

  hw_uint<32 > merged_0_lane_4_pack;
  set_at<0, 32, 32>(merged_0_lane_4_pack, merged_0_lane_4);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_4_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_lane_4);
  auto res_rc146_sm342_11818 = llf_add_float_32(merged_0_lane_4_pack, merged_1_reconstruct_lp129_buf132_us142_lane_4_pack);

  hw_uint<32 > merged_0_lane_5_pack;
  set_at<0, 32, 32>(merged_0_lane_5_pack, merged_0_lane_5);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_5_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_lane_5);
  auto res_rc146_sm342_10816 = llf_add_float_32(merged_0_lane_5_pack, merged_1_reconstruct_lp129_buf132_us142_lane_5_pack);

  hw_uint<32 > merged_0_lane_6_pack;
  set_at<0, 32, 32>(merged_0_lane_6_pack, merged_0_lane_6);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_6_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_lane_6);
  auto res_rc146_sm342_9814 = llf_add_float_32(merged_0_lane_6_pack, merged_1_reconstruct_lp129_buf132_us142_lane_6_pack);

  hw_uint<32 > merged_0_lane_7_pack;
  set_at<0, 32, 32>(merged_0_lane_7_pack, merged_0_lane_7);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_7_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_lane_7);
  auto res_rc146_sm342_8812 = llf_add_float_32(merged_0_lane_7_pack, merged_1_reconstruct_lp129_buf132_us142_lane_7_pack);

  hw_uint<32 > merged_0_lane_8_pack;
  set_at<0, 32, 32>(merged_0_lane_8_pack, merged_0_lane_8);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_8_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_8_pack, merged_1_reconstruct_lp129_buf132_us142_lane_8);
  auto res_rc146_sm342_7810 = llf_add_float_32(merged_0_lane_8_pack, merged_1_reconstruct_lp129_buf132_us142_lane_8_pack);

  hw_uint<32 > merged_0_lane_9_pack;
  set_at<0, 32, 32>(merged_0_lane_9_pack, merged_0_lane_9);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_9_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_9_pack, merged_1_reconstruct_lp129_buf132_us142_lane_9);
  auto res_rc146_sm342_6808 = llf_add_float_32(merged_0_lane_9_pack, merged_1_reconstruct_lp129_buf132_us142_lane_9_pack);

  hw_uint<32 > merged_0_lane_10_pack;
  set_at<0, 32, 32>(merged_0_lane_10_pack, merged_0_lane_10);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_10_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_10_pack, merged_1_reconstruct_lp129_buf132_us142_lane_10);
  auto res_rc146_sm342_5806 = llf_add_float_32(merged_0_lane_10_pack, merged_1_reconstruct_lp129_buf132_us142_lane_10_pack);

  hw_uint<32 > merged_0_lane_11_pack;
  set_at<0, 32, 32>(merged_0_lane_11_pack, merged_0_lane_11);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_11_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_11_pack, merged_1_reconstruct_lp129_buf132_us142_lane_11);
  auto res_rc146_sm342_4804 = llf_add_float_32(merged_0_lane_11_pack, merged_1_reconstruct_lp129_buf132_us142_lane_11_pack);

  hw_uint<32 > merged_0_lane_12_pack;
  set_at<0, 32, 32>(merged_0_lane_12_pack, merged_0_lane_12);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_12_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_12_pack, merged_1_reconstruct_lp129_buf132_us142_lane_12);
  auto res_rc146_sm342_3802 = llf_add_float_32(merged_0_lane_12_pack, merged_1_reconstruct_lp129_buf132_us142_lane_12_pack);

  hw_uint<32 > merged_0_lane_13_pack;
  set_at<0, 32, 32>(merged_0_lane_13_pack, merged_0_lane_13);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_13_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_13_pack, merged_1_reconstruct_lp129_buf132_us142_lane_13);
  auto res_rc146_sm342_2800 = llf_add_float_32(merged_0_lane_13_pack, merged_1_reconstruct_lp129_buf132_us142_lane_13_pack);

  hw_uint<32 > merged_0_lane_14_pack;
  set_at<0, 32, 32>(merged_0_lane_14_pack, merged_0_lane_14);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_14_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_14_pack, merged_1_reconstruct_lp129_buf132_us142_lane_14);
  auto res_rc146_sm342_1798 = llf_add_float_32(merged_0_lane_14_pack, merged_1_reconstruct_lp129_buf132_us142_lane_14_pack);

  hw_uint<32 > merged_0_lane_15_pack;
  set_at<0, 32, 32>(merged_0_lane_15_pack, merged_0_lane_15);
  hw_uint<32 > merged_1_reconstruct_lp129_buf132_us142_lane_15_pack;
  set_at<0, 32, 32>(merged_1_reconstruct_lp129_buf132_us142_lane_15_pack, merged_1_reconstruct_lp129_buf132_us142_lane_15);
  auto res_rc146_sm342_0796 = llf_add_float_32(merged_0_lane_15_pack, merged_1_reconstruct_lp129_buf132_us142_lane_15_pack);
  hw_uint<512 > return_value971;
  set_at<0, 512, 32>(return_value971, res_rc146_sm342_15826);
  set_at<32, 512, 32>(return_value971, res_rc146_sm342_14824);
  set_at<64, 512, 32>(return_value971, res_rc146_sm342_13822);
  set_at<96, 512, 32>(return_value971, res_rc146_sm342_12820);
  set_at<128, 512, 32>(return_value971, res_rc146_sm342_11818);
  set_at<160, 512, 32>(return_value971, res_rc146_sm342_10816);
  set_at<192, 512, 32>(return_value971, res_rc146_sm342_9814);
  set_at<224, 512, 32>(return_value971, res_rc146_sm342_8812);
  set_at<256, 512, 32>(return_value971, res_rc146_sm342_7810);
  set_at<288, 512, 32>(return_value971, res_rc146_sm342_6808);
  set_at<320, 512, 32>(return_value971, res_rc146_sm342_5806);
  set_at<352, 512, 32>(return_value971, res_rc146_sm342_4804);
  set_at<384, 512, 32>(return_value971, res_rc146_sm342_3802);
  set_at<416, 512, 32>(return_value971, res_rc146_sm342_2800);
  set_at<448, 512, 32>(return_value971, res_rc146_sm342_1798);
  set_at<480, 512, 32>(return_value971, res_rc146_sm342_0796);
  return return_value971;

}

hw_uint<512> pw_math_merged_0_reconstruct_lp138_buf141147149_cu973(hw_uint<32*16>& merged_0_reconstruct_lp138_buf141) {
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_0 = merged_0_reconstruct_lp138_buf141.extract<0, 31>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_1 = merged_0_reconstruct_lp138_buf141.extract<32, 63>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_2 = merged_0_reconstruct_lp138_buf141.extract<64, 95>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_3 = merged_0_reconstruct_lp138_buf141.extract<96, 127>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_4 = merged_0_reconstruct_lp138_buf141.extract<128, 159>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_5 = merged_0_reconstruct_lp138_buf141.extract<160, 191>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_6 = merged_0_reconstruct_lp138_buf141.extract<192, 223>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_7 = merged_0_reconstruct_lp138_buf141.extract<224, 255>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_8 = merged_0_reconstruct_lp138_buf141.extract<256, 287>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_9 = merged_0_reconstruct_lp138_buf141.extract<288, 319>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_10 = merged_0_reconstruct_lp138_buf141.extract<320, 351>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_11 = merged_0_reconstruct_lp138_buf141.extract<352, 383>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_12 = merged_0_reconstruct_lp138_buf141.extract<384, 415>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_13 = merged_0_reconstruct_lp138_buf141.extract<416, 447>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_14 = merged_0_reconstruct_lp138_buf141.extract<448, 479>();
  hw_uint<32> merged_0_reconstruct_lp138_buf141_lane_15 = merged_0_reconstruct_lp138_buf141.extract<480, 511>();

	
  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_0_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_0_pack, merged_0_reconstruct_lp138_buf141_lane_0);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_15858 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_0_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_1_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_1_pack, merged_0_reconstruct_lp138_buf141_lane_1);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_14856 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_1_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_2_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_2_pack, merged_0_reconstruct_lp138_buf141_lane_2);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_13854 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_2_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_3_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_3_pack, merged_0_reconstruct_lp138_buf141_lane_3);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_12852 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_3_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_4_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_4_pack, merged_0_reconstruct_lp138_buf141_lane_4);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_11850 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_4_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_5_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_5_pack, merged_0_reconstruct_lp138_buf141_lane_5);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_10848 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_5_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_6_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_6_pack, merged_0_reconstruct_lp138_buf141_lane_6);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_9846 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_6_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_7_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_7_pack, merged_0_reconstruct_lp138_buf141_lane_7);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_8844 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_7_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_8_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_8_pack, merged_0_reconstruct_lp138_buf141_lane_8);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_7842 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_8_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_9_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_9_pack, merged_0_reconstruct_lp138_buf141_lane_9);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_6840 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_9_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_10_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_10_pack, merged_0_reconstruct_lp138_buf141_lane_10);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_5838 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_10_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_11_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_11_pack, merged_0_reconstruct_lp138_buf141_lane_11);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_4836 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_11_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_12_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_12_pack, merged_0_reconstruct_lp138_buf141_lane_12);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_3834 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_12_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_13_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_13_pack, merged_0_reconstruct_lp138_buf141_lane_13);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_2832 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_13_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_14_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_14_pack, merged_0_reconstruct_lp138_buf141_lane_14);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1830 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_14_pack);

  hw_uint<32 > merged_0_reconstruct_lp138_buf141_lane_15_pack;
  set_at<0, 32, 32>(merged_0_reconstruct_lp138_buf141_lane_15_pack, merged_0_reconstruct_lp138_buf141_lane_15);
  auto res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0828 = llf_float_to_int(merged_0_reconstruct_lp138_buf141_lane_15_pack);
  hw_uint<512 > return_value974;
  set_at<0, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_15858);
  set_at<32, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_14856);
  set_at<64, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_13854);
  set_at<96, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_12852);
  set_at<128, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_11850);
  set_at<160, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_10848);
  set_at<192, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_9846);
  set_at<224, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_8844);
  set_at<256, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_7842);
  set_at<288, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_6840);
  set_at<320, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_5838);
  set_at<352, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_4836);
  set_at<384, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_3834);
  set_at<416, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_2832);
  set_at<448, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_1830);
  set_at<480, 512, 32>(return_value974, res_pw_math_merged_0_reconstruct_lp138_buf141147150_sm343_0828);
  return return_value974;

}

