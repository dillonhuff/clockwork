#include "blur4_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> input_1_cu195(hw_uint<16*32>& input_arg) {
  hw_uint<16> input_arg_lane_0 = input_arg.extract<0, 15>();
  hw_uint<16> input_arg_lane_1 = input_arg.extract<16, 31>();
  hw_uint<16> input_arg_lane_2 = input_arg.extract<32, 47>();
  hw_uint<16> input_arg_lane_3 = input_arg.extract<48, 63>();
  hw_uint<16> input_arg_lane_4 = input_arg.extract<64, 79>();
  hw_uint<16> input_arg_lane_5 = input_arg.extract<80, 95>();
  hw_uint<16> input_arg_lane_6 = input_arg.extract<96, 111>();
  hw_uint<16> input_arg_lane_7 = input_arg.extract<112, 127>();
  hw_uint<16> input_arg_lane_8 = input_arg.extract<128, 143>();
  hw_uint<16> input_arg_lane_9 = input_arg.extract<144, 159>();
  hw_uint<16> input_arg_lane_10 = input_arg.extract<160, 175>();
  hw_uint<16> input_arg_lane_11 = input_arg.extract<176, 191>();
  hw_uint<16> input_arg_lane_12 = input_arg.extract<192, 207>();
  hw_uint<16> input_arg_lane_13 = input_arg.extract<208, 223>();
  hw_uint<16> input_arg_lane_14 = input_arg.extract<224, 239>();
  hw_uint<16> input_arg_lane_15 = input_arg.extract<240, 255>();
  hw_uint<16> input_arg_lane_16 = input_arg.extract<256, 271>();
  hw_uint<16> input_arg_lane_17 = input_arg.extract<272, 287>();
  hw_uint<16> input_arg_lane_18 = input_arg.extract<288, 303>();
  hw_uint<16> input_arg_lane_19 = input_arg.extract<304, 319>();
  hw_uint<16> input_arg_lane_20 = input_arg.extract<320, 335>();
  hw_uint<16> input_arg_lane_21 = input_arg.extract<336, 351>();
  hw_uint<16> input_arg_lane_22 = input_arg.extract<352, 367>();
  hw_uint<16> input_arg_lane_23 = input_arg.extract<368, 383>();
  hw_uint<16> input_arg_lane_24 = input_arg.extract<384, 399>();
  hw_uint<16> input_arg_lane_25 = input_arg.extract<400, 415>();
  hw_uint<16> input_arg_lane_26 = input_arg.extract<416, 431>();
  hw_uint<16> input_arg_lane_27 = input_arg.extract<432, 447>();
  hw_uint<16> input_arg_lane_28 = input_arg.extract<448, 463>();
  hw_uint<16> input_arg_lane_29 = input_arg.extract<464, 479>();
  hw_uint<16> input_arg_lane_30 = input_arg.extract<480, 495>();
  hw_uint<16> input_arg_lane_31 = input_arg.extract<496, 511>();

	
  hw_uint<16 > input_arg_lane_0_pack;
  set_at<0, 16, 16>(input_arg_lane_0_pack, input_arg_lane_0);
  auto res_input_update_0_sm0_3165 = input_generated_compute_unrolled_1(input_arg_lane_0_pack);

  hw_uint<16 > input_arg_lane_1_pack;
  set_at<0, 16, 16>(input_arg_lane_1_pack, input_arg_lane_1);
  auto res_input_update_0_sm0_3063 = input_generated_compute_unrolled_1(input_arg_lane_1_pack);

  hw_uint<16 > input_arg_lane_2_pack;
  set_at<0, 16, 16>(input_arg_lane_2_pack, input_arg_lane_2);
  auto res_input_update_0_sm0_2961 = input_generated_compute_unrolled_1(input_arg_lane_2_pack);

  hw_uint<16 > input_arg_lane_3_pack;
  set_at<0, 16, 16>(input_arg_lane_3_pack, input_arg_lane_3);
  auto res_input_update_0_sm0_2859 = input_generated_compute_unrolled_1(input_arg_lane_3_pack);

  hw_uint<16 > input_arg_lane_4_pack;
  set_at<0, 16, 16>(input_arg_lane_4_pack, input_arg_lane_4);
  auto res_input_update_0_sm0_2757 = input_generated_compute_unrolled_1(input_arg_lane_4_pack);

  hw_uint<16 > input_arg_lane_5_pack;
  set_at<0, 16, 16>(input_arg_lane_5_pack, input_arg_lane_5);
  auto res_input_update_0_sm0_2655 = input_generated_compute_unrolled_1(input_arg_lane_5_pack);

  hw_uint<16 > input_arg_lane_6_pack;
  set_at<0, 16, 16>(input_arg_lane_6_pack, input_arg_lane_6);
  auto res_input_update_0_sm0_2553 = input_generated_compute_unrolled_1(input_arg_lane_6_pack);

  hw_uint<16 > input_arg_lane_7_pack;
  set_at<0, 16, 16>(input_arg_lane_7_pack, input_arg_lane_7);
  auto res_input_update_0_sm0_2451 = input_generated_compute_unrolled_1(input_arg_lane_7_pack);

  hw_uint<16 > input_arg_lane_8_pack;
  set_at<0, 16, 16>(input_arg_lane_8_pack, input_arg_lane_8);
  auto res_input_update_0_sm0_2349 = input_generated_compute_unrolled_1(input_arg_lane_8_pack);

  hw_uint<16 > input_arg_lane_9_pack;
  set_at<0, 16, 16>(input_arg_lane_9_pack, input_arg_lane_9);
  auto res_input_update_0_sm0_2247 = input_generated_compute_unrolled_1(input_arg_lane_9_pack);

  hw_uint<16 > input_arg_lane_10_pack;
  set_at<0, 16, 16>(input_arg_lane_10_pack, input_arg_lane_10);
  auto res_input_update_0_sm0_2145 = input_generated_compute_unrolled_1(input_arg_lane_10_pack);

  hw_uint<16 > input_arg_lane_11_pack;
  set_at<0, 16, 16>(input_arg_lane_11_pack, input_arg_lane_11);
  auto res_input_update_0_sm0_2043 = input_generated_compute_unrolled_1(input_arg_lane_11_pack);

  hw_uint<16 > input_arg_lane_12_pack;
  set_at<0, 16, 16>(input_arg_lane_12_pack, input_arg_lane_12);
  auto res_input_update_0_sm0_1941 = input_generated_compute_unrolled_1(input_arg_lane_12_pack);

  hw_uint<16 > input_arg_lane_13_pack;
  set_at<0, 16, 16>(input_arg_lane_13_pack, input_arg_lane_13);
  auto res_input_update_0_sm0_1839 = input_generated_compute_unrolled_1(input_arg_lane_13_pack);

  hw_uint<16 > input_arg_lane_14_pack;
  set_at<0, 16, 16>(input_arg_lane_14_pack, input_arg_lane_14);
  auto res_input_update_0_sm0_1737 = input_generated_compute_unrolled_1(input_arg_lane_14_pack);

  hw_uint<16 > input_arg_lane_15_pack;
  set_at<0, 16, 16>(input_arg_lane_15_pack, input_arg_lane_15);
  auto res_input_update_0_sm0_1635 = input_generated_compute_unrolled_1(input_arg_lane_15_pack);

  hw_uint<16 > input_arg_lane_16_pack;
  set_at<0, 16, 16>(input_arg_lane_16_pack, input_arg_lane_16);
  auto res_input_update_0_sm0_1533 = input_generated_compute_unrolled_1(input_arg_lane_16_pack);

  hw_uint<16 > input_arg_lane_17_pack;
  set_at<0, 16, 16>(input_arg_lane_17_pack, input_arg_lane_17);
  auto res_input_update_0_sm0_1431 = input_generated_compute_unrolled_1(input_arg_lane_17_pack);

  hw_uint<16 > input_arg_lane_18_pack;
  set_at<0, 16, 16>(input_arg_lane_18_pack, input_arg_lane_18);
  auto res_input_update_0_sm0_1329 = input_generated_compute_unrolled_1(input_arg_lane_18_pack);

  hw_uint<16 > input_arg_lane_19_pack;
  set_at<0, 16, 16>(input_arg_lane_19_pack, input_arg_lane_19);
  auto res_input_update_0_sm0_1227 = input_generated_compute_unrolled_1(input_arg_lane_19_pack);

  hw_uint<16 > input_arg_lane_20_pack;
  set_at<0, 16, 16>(input_arg_lane_20_pack, input_arg_lane_20);
  auto res_input_update_0_sm0_1125 = input_generated_compute_unrolled_1(input_arg_lane_20_pack);

  hw_uint<16 > input_arg_lane_21_pack;
  set_at<0, 16, 16>(input_arg_lane_21_pack, input_arg_lane_21);
  auto res_input_update_0_sm0_1023 = input_generated_compute_unrolled_1(input_arg_lane_21_pack);

  hw_uint<16 > input_arg_lane_22_pack;
  set_at<0, 16, 16>(input_arg_lane_22_pack, input_arg_lane_22);
  auto res_input_update_0_sm0_921 = input_generated_compute_unrolled_1(input_arg_lane_22_pack);

  hw_uint<16 > input_arg_lane_23_pack;
  set_at<0, 16, 16>(input_arg_lane_23_pack, input_arg_lane_23);
  auto res_input_update_0_sm0_819 = input_generated_compute_unrolled_1(input_arg_lane_23_pack);

  hw_uint<16 > input_arg_lane_24_pack;
  set_at<0, 16, 16>(input_arg_lane_24_pack, input_arg_lane_24);
  auto res_input_update_0_sm0_717 = input_generated_compute_unrolled_1(input_arg_lane_24_pack);

  hw_uint<16 > input_arg_lane_25_pack;
  set_at<0, 16, 16>(input_arg_lane_25_pack, input_arg_lane_25);
  auto res_input_update_0_sm0_615 = input_generated_compute_unrolled_1(input_arg_lane_25_pack);

  hw_uint<16 > input_arg_lane_26_pack;
  set_at<0, 16, 16>(input_arg_lane_26_pack, input_arg_lane_26);
  auto res_input_update_0_sm0_513 = input_generated_compute_unrolled_1(input_arg_lane_26_pack);

  hw_uint<16 > input_arg_lane_27_pack;
  set_at<0, 16, 16>(input_arg_lane_27_pack, input_arg_lane_27);
  auto res_input_update_0_sm0_411 = input_generated_compute_unrolled_1(input_arg_lane_27_pack);

  hw_uint<16 > input_arg_lane_28_pack;
  set_at<0, 16, 16>(input_arg_lane_28_pack, input_arg_lane_28);
  auto res_input_update_0_sm0_39 = input_generated_compute_unrolled_1(input_arg_lane_28_pack);

  hw_uint<16 > input_arg_lane_29_pack;
  set_at<0, 16, 16>(input_arg_lane_29_pack, input_arg_lane_29);
  auto res_input_update_0_sm0_27 = input_generated_compute_unrolled_1(input_arg_lane_29_pack);

  hw_uint<16 > input_arg_lane_30_pack;
  set_at<0, 16, 16>(input_arg_lane_30_pack, input_arg_lane_30);
  auto res_input_update_0_sm0_15 = input_generated_compute_unrolled_1(input_arg_lane_30_pack);

  hw_uint<16 > input_arg_lane_31_pack;
  set_at<0, 16, 16>(input_arg_lane_31_pack, input_arg_lane_31);
  auto res_input_update_0_sm0_03 = input_generated_compute_unrolled_1(input_arg_lane_31_pack);
  hw_uint<512 > return_value196;
  set_at<0, 512, 16>(return_value196, res_input_update_0_sm0_3165);
  set_at<16, 512, 16>(return_value196, res_input_update_0_sm0_3063);
  set_at<32, 512, 16>(return_value196, res_input_update_0_sm0_2961);
  set_at<48, 512, 16>(return_value196, res_input_update_0_sm0_2859);
  set_at<64, 512, 16>(return_value196, res_input_update_0_sm0_2757);
  set_at<80, 512, 16>(return_value196, res_input_update_0_sm0_2655);
  set_at<96, 512, 16>(return_value196, res_input_update_0_sm0_2553);
  set_at<112, 512, 16>(return_value196, res_input_update_0_sm0_2451);
  set_at<128, 512, 16>(return_value196, res_input_update_0_sm0_2349);
  set_at<144, 512, 16>(return_value196, res_input_update_0_sm0_2247);
  set_at<160, 512, 16>(return_value196, res_input_update_0_sm0_2145);
  set_at<176, 512, 16>(return_value196, res_input_update_0_sm0_2043);
  set_at<192, 512, 16>(return_value196, res_input_update_0_sm0_1941);
  set_at<208, 512, 16>(return_value196, res_input_update_0_sm0_1839);
  set_at<224, 512, 16>(return_value196, res_input_update_0_sm0_1737);
  set_at<240, 512, 16>(return_value196, res_input_update_0_sm0_1635);
  set_at<256, 512, 16>(return_value196, res_input_update_0_sm0_1533);
  set_at<272, 512, 16>(return_value196, res_input_update_0_sm0_1431);
  set_at<288, 512, 16>(return_value196, res_input_update_0_sm0_1329);
  set_at<304, 512, 16>(return_value196, res_input_update_0_sm0_1227);
  set_at<320, 512, 16>(return_value196, res_input_update_0_sm0_1125);
  set_at<336, 512, 16>(return_value196, res_input_update_0_sm0_1023);
  set_at<352, 512, 16>(return_value196, res_input_update_0_sm0_921);
  set_at<368, 512, 16>(return_value196, res_input_update_0_sm0_819);
  set_at<384, 512, 16>(return_value196, res_input_update_0_sm0_717);
  set_at<400, 512, 16>(return_value196, res_input_update_0_sm0_615);
  set_at<416, 512, 16>(return_value196, res_input_update_0_sm0_513);
  set_at<432, 512, 16>(return_value196, res_input_update_0_sm0_411);
  set_at<448, 512, 16>(return_value196, res_input_update_0_sm0_39);
  set_at<464, 512, 16>(return_value196, res_input_update_0_sm0_27);
  set_at<480, 512, 16>(return_value196, res_input_update_0_sm0_15);
  set_at<496, 512, 16>(return_value196, res_input_update_0_sm0_03);
  return return_value196;

}

hw_uint<512> blurx_1_cu198(hw_uint<16*96>& input) {
  hw_uint<16> input_lane_0 = input.extract<0, 15>();
  hw_uint<16> input_lane_1 = input.extract<16, 31>();
  hw_uint<16> input_lane_2 = input.extract<32, 47>();
  hw_uint<16> input_lane_3 = input.extract<48, 63>();
  hw_uint<16> input_lane_4 = input.extract<64, 79>();
  hw_uint<16> input_lane_5 = input.extract<80, 95>();
  hw_uint<16> input_lane_6 = input.extract<96, 111>();
  hw_uint<16> input_lane_7 = input.extract<112, 127>();
  hw_uint<16> input_lane_8 = input.extract<128, 143>();
  hw_uint<16> input_lane_9 = input.extract<144, 159>();
  hw_uint<16> input_lane_10 = input.extract<160, 175>();
  hw_uint<16> input_lane_11 = input.extract<176, 191>();
  hw_uint<16> input_lane_12 = input.extract<192, 207>();
  hw_uint<16> input_lane_13 = input.extract<208, 223>();
  hw_uint<16> input_lane_14 = input.extract<224, 239>();
  hw_uint<16> input_lane_15 = input.extract<240, 255>();
  hw_uint<16> input_lane_16 = input.extract<256, 271>();
  hw_uint<16> input_lane_17 = input.extract<272, 287>();
  hw_uint<16> input_lane_18 = input.extract<288, 303>();
  hw_uint<16> input_lane_19 = input.extract<304, 319>();
  hw_uint<16> input_lane_20 = input.extract<320, 335>();
  hw_uint<16> input_lane_21 = input.extract<336, 351>();
  hw_uint<16> input_lane_22 = input.extract<352, 367>();
  hw_uint<16> input_lane_23 = input.extract<368, 383>();
  hw_uint<16> input_lane_24 = input.extract<384, 399>();
  hw_uint<16> input_lane_25 = input.extract<400, 415>();
  hw_uint<16> input_lane_26 = input.extract<416, 431>();
  hw_uint<16> input_lane_27 = input.extract<432, 447>();
  hw_uint<16> input_lane_28 = input.extract<448, 463>();
  hw_uint<16> input_lane_29 = input.extract<464, 479>();
  hw_uint<16> input_lane_30 = input.extract<480, 495>();
  hw_uint<16> input_lane_31 = input.extract<496, 511>();
  hw_uint<16> input_lane_32 = input.extract<512, 527>();
  hw_uint<16> input_lane_33 = input.extract<528, 543>();
  hw_uint<16> input_lane_34 = input.extract<544, 559>();
  hw_uint<16> input_lane_35 = input.extract<560, 575>();
  hw_uint<16> input_lane_36 = input.extract<576, 591>();
  hw_uint<16> input_lane_37 = input.extract<592, 607>();
  hw_uint<16> input_lane_38 = input.extract<608, 623>();
  hw_uint<16> input_lane_39 = input.extract<624, 639>();
  hw_uint<16> input_lane_40 = input.extract<640, 655>();
  hw_uint<16> input_lane_41 = input.extract<656, 671>();
  hw_uint<16> input_lane_42 = input.extract<672, 687>();
  hw_uint<16> input_lane_43 = input.extract<688, 703>();
  hw_uint<16> input_lane_44 = input.extract<704, 719>();
  hw_uint<16> input_lane_45 = input.extract<720, 735>();
  hw_uint<16> input_lane_46 = input.extract<736, 751>();
  hw_uint<16> input_lane_47 = input.extract<752, 767>();
  hw_uint<16> input_lane_48 = input.extract<768, 783>();
  hw_uint<16> input_lane_49 = input.extract<784, 799>();
  hw_uint<16> input_lane_50 = input.extract<800, 815>();
  hw_uint<16> input_lane_51 = input.extract<816, 831>();
  hw_uint<16> input_lane_52 = input.extract<832, 847>();
  hw_uint<16> input_lane_53 = input.extract<848, 863>();
  hw_uint<16> input_lane_54 = input.extract<864, 879>();
  hw_uint<16> input_lane_55 = input.extract<880, 895>();
  hw_uint<16> input_lane_56 = input.extract<896, 911>();
  hw_uint<16> input_lane_57 = input.extract<912, 927>();
  hw_uint<16> input_lane_58 = input.extract<928, 943>();
  hw_uint<16> input_lane_59 = input.extract<944, 959>();
  hw_uint<16> input_lane_60 = input.extract<960, 975>();
  hw_uint<16> input_lane_61 = input.extract<976, 991>();
  hw_uint<16> input_lane_62 = input.extract<992, 1007>();
  hw_uint<16> input_lane_63 = input.extract<1008, 1023>();
  hw_uint<16> input_lane_64 = input.extract<1024, 1039>();
  hw_uint<16> input_lane_65 = input.extract<1040, 1055>();
  hw_uint<16> input_lane_66 = input.extract<1056, 1071>();
  hw_uint<16> input_lane_67 = input.extract<1072, 1087>();
  hw_uint<16> input_lane_68 = input.extract<1088, 1103>();
  hw_uint<16> input_lane_69 = input.extract<1104, 1119>();
  hw_uint<16> input_lane_70 = input.extract<1120, 1135>();
  hw_uint<16> input_lane_71 = input.extract<1136, 1151>();
  hw_uint<16> input_lane_72 = input.extract<1152, 1167>();
  hw_uint<16> input_lane_73 = input.extract<1168, 1183>();
  hw_uint<16> input_lane_74 = input.extract<1184, 1199>();
  hw_uint<16> input_lane_75 = input.extract<1200, 1215>();
  hw_uint<16> input_lane_76 = input.extract<1216, 1231>();
  hw_uint<16> input_lane_77 = input.extract<1232, 1247>();
  hw_uint<16> input_lane_78 = input.extract<1248, 1263>();
  hw_uint<16> input_lane_79 = input.extract<1264, 1279>();
  hw_uint<16> input_lane_80 = input.extract<1280, 1295>();
  hw_uint<16> input_lane_81 = input.extract<1296, 1311>();
  hw_uint<16> input_lane_82 = input.extract<1312, 1327>();
  hw_uint<16> input_lane_83 = input.extract<1328, 1343>();
  hw_uint<16> input_lane_84 = input.extract<1344, 1359>();
  hw_uint<16> input_lane_85 = input.extract<1360, 1375>();
  hw_uint<16> input_lane_86 = input.extract<1376, 1391>();
  hw_uint<16> input_lane_87 = input.extract<1392, 1407>();
  hw_uint<16> input_lane_88 = input.extract<1408, 1423>();
  hw_uint<16> input_lane_89 = input.extract<1424, 1439>();
  hw_uint<16> input_lane_90 = input.extract<1440, 1455>();
  hw_uint<16> input_lane_91 = input.extract<1456, 1471>();
  hw_uint<16> input_lane_92 = input.extract<1472, 1487>();
  hw_uint<16> input_lane_93 = input.extract<1488, 1503>();
  hw_uint<16> input_lane_94 = input.extract<1504, 1519>();
  hw_uint<16> input_lane_95 = input.extract<1520, 1535>();

	
  hw_uint<48 > input_lane_2_pack;
  set_at<0, 48, 16>(input_lane_2_pack, input_lane_0);
  set_at<16, 48, 16>(input_lane_2_pack, input_lane_1);
  set_at<32, 48, 16>(input_lane_2_pack, input_lane_2);
  auto res_blurx_update_0_sm1_31129 = blurx_generated_compute_unrolled_1(input_lane_2_pack);

  hw_uint<48 > input_lane_5_pack;
  set_at<0, 48, 16>(input_lane_5_pack, input_lane_3);
  set_at<16, 48, 16>(input_lane_5_pack, input_lane_4);
  set_at<32, 48, 16>(input_lane_5_pack, input_lane_5);
  auto res_blurx_update_0_sm1_30127 = blurx_generated_compute_unrolled_1(input_lane_5_pack);

  hw_uint<48 > input_lane_8_pack;
  set_at<0, 48, 16>(input_lane_8_pack, input_lane_6);
  set_at<16, 48, 16>(input_lane_8_pack, input_lane_7);
  set_at<32, 48, 16>(input_lane_8_pack, input_lane_8);
  auto res_blurx_update_0_sm1_29125 = blurx_generated_compute_unrolled_1(input_lane_8_pack);

  hw_uint<48 > input_lane_11_pack;
  set_at<0, 48, 16>(input_lane_11_pack, input_lane_9);
  set_at<16, 48, 16>(input_lane_11_pack, input_lane_10);
  set_at<32, 48, 16>(input_lane_11_pack, input_lane_11);
  auto res_blurx_update_0_sm1_28123 = blurx_generated_compute_unrolled_1(input_lane_11_pack);

  hw_uint<48 > input_lane_14_pack;
  set_at<0, 48, 16>(input_lane_14_pack, input_lane_12);
  set_at<16, 48, 16>(input_lane_14_pack, input_lane_13);
  set_at<32, 48, 16>(input_lane_14_pack, input_lane_14);
  auto res_blurx_update_0_sm1_27121 = blurx_generated_compute_unrolled_1(input_lane_14_pack);

  hw_uint<48 > input_lane_17_pack;
  set_at<0, 48, 16>(input_lane_17_pack, input_lane_15);
  set_at<16, 48, 16>(input_lane_17_pack, input_lane_16);
  set_at<32, 48, 16>(input_lane_17_pack, input_lane_17);
  auto res_blurx_update_0_sm1_26119 = blurx_generated_compute_unrolled_1(input_lane_17_pack);

  hw_uint<48 > input_lane_20_pack;
  set_at<0, 48, 16>(input_lane_20_pack, input_lane_18);
  set_at<16, 48, 16>(input_lane_20_pack, input_lane_19);
  set_at<32, 48, 16>(input_lane_20_pack, input_lane_20);
  auto res_blurx_update_0_sm1_25117 = blurx_generated_compute_unrolled_1(input_lane_20_pack);

  hw_uint<48 > input_lane_23_pack;
  set_at<0, 48, 16>(input_lane_23_pack, input_lane_21);
  set_at<16, 48, 16>(input_lane_23_pack, input_lane_22);
  set_at<32, 48, 16>(input_lane_23_pack, input_lane_23);
  auto res_blurx_update_0_sm1_24115 = blurx_generated_compute_unrolled_1(input_lane_23_pack);

  hw_uint<48 > input_lane_26_pack;
  set_at<0, 48, 16>(input_lane_26_pack, input_lane_24);
  set_at<16, 48, 16>(input_lane_26_pack, input_lane_25);
  set_at<32, 48, 16>(input_lane_26_pack, input_lane_26);
  auto res_blurx_update_0_sm1_23113 = blurx_generated_compute_unrolled_1(input_lane_26_pack);

  hw_uint<48 > input_lane_29_pack;
  set_at<0, 48, 16>(input_lane_29_pack, input_lane_27);
  set_at<16, 48, 16>(input_lane_29_pack, input_lane_28);
  set_at<32, 48, 16>(input_lane_29_pack, input_lane_29);
  auto res_blurx_update_0_sm1_22111 = blurx_generated_compute_unrolled_1(input_lane_29_pack);

  hw_uint<48 > input_lane_32_pack;
  set_at<0, 48, 16>(input_lane_32_pack, input_lane_30);
  set_at<16, 48, 16>(input_lane_32_pack, input_lane_31);
  set_at<32, 48, 16>(input_lane_32_pack, input_lane_32);
  auto res_blurx_update_0_sm1_21109 = blurx_generated_compute_unrolled_1(input_lane_32_pack);

  hw_uint<48 > input_lane_35_pack;
  set_at<0, 48, 16>(input_lane_35_pack, input_lane_33);
  set_at<16, 48, 16>(input_lane_35_pack, input_lane_34);
  set_at<32, 48, 16>(input_lane_35_pack, input_lane_35);
  auto res_blurx_update_0_sm1_20107 = blurx_generated_compute_unrolled_1(input_lane_35_pack);

  hw_uint<48 > input_lane_38_pack;
  set_at<0, 48, 16>(input_lane_38_pack, input_lane_36);
  set_at<16, 48, 16>(input_lane_38_pack, input_lane_37);
  set_at<32, 48, 16>(input_lane_38_pack, input_lane_38);
  auto res_blurx_update_0_sm1_19105 = blurx_generated_compute_unrolled_1(input_lane_38_pack);

  hw_uint<48 > input_lane_41_pack;
  set_at<0, 48, 16>(input_lane_41_pack, input_lane_39);
  set_at<16, 48, 16>(input_lane_41_pack, input_lane_40);
  set_at<32, 48, 16>(input_lane_41_pack, input_lane_41);
  auto res_blurx_update_0_sm1_18103 = blurx_generated_compute_unrolled_1(input_lane_41_pack);

  hw_uint<48 > input_lane_44_pack;
  set_at<0, 48, 16>(input_lane_44_pack, input_lane_42);
  set_at<16, 48, 16>(input_lane_44_pack, input_lane_43);
  set_at<32, 48, 16>(input_lane_44_pack, input_lane_44);
  auto res_blurx_update_0_sm1_17101 = blurx_generated_compute_unrolled_1(input_lane_44_pack);

  hw_uint<48 > input_lane_47_pack;
  set_at<0, 48, 16>(input_lane_47_pack, input_lane_45);
  set_at<16, 48, 16>(input_lane_47_pack, input_lane_46);
  set_at<32, 48, 16>(input_lane_47_pack, input_lane_47);
  auto res_blurx_update_0_sm1_1699 = blurx_generated_compute_unrolled_1(input_lane_47_pack);

  hw_uint<48 > input_lane_50_pack;
  set_at<0, 48, 16>(input_lane_50_pack, input_lane_48);
  set_at<16, 48, 16>(input_lane_50_pack, input_lane_49);
  set_at<32, 48, 16>(input_lane_50_pack, input_lane_50);
  auto res_blurx_update_0_sm1_1597 = blurx_generated_compute_unrolled_1(input_lane_50_pack);

  hw_uint<48 > input_lane_53_pack;
  set_at<0, 48, 16>(input_lane_53_pack, input_lane_51);
  set_at<16, 48, 16>(input_lane_53_pack, input_lane_52);
  set_at<32, 48, 16>(input_lane_53_pack, input_lane_53);
  auto res_blurx_update_0_sm1_1495 = blurx_generated_compute_unrolled_1(input_lane_53_pack);

  hw_uint<48 > input_lane_56_pack;
  set_at<0, 48, 16>(input_lane_56_pack, input_lane_54);
  set_at<16, 48, 16>(input_lane_56_pack, input_lane_55);
  set_at<32, 48, 16>(input_lane_56_pack, input_lane_56);
  auto res_blurx_update_0_sm1_1393 = blurx_generated_compute_unrolled_1(input_lane_56_pack);

  hw_uint<48 > input_lane_59_pack;
  set_at<0, 48, 16>(input_lane_59_pack, input_lane_57);
  set_at<16, 48, 16>(input_lane_59_pack, input_lane_58);
  set_at<32, 48, 16>(input_lane_59_pack, input_lane_59);
  auto res_blurx_update_0_sm1_1291 = blurx_generated_compute_unrolled_1(input_lane_59_pack);

  hw_uint<48 > input_lane_62_pack;
  set_at<0, 48, 16>(input_lane_62_pack, input_lane_60);
  set_at<16, 48, 16>(input_lane_62_pack, input_lane_61);
  set_at<32, 48, 16>(input_lane_62_pack, input_lane_62);
  auto res_blurx_update_0_sm1_1189 = blurx_generated_compute_unrolled_1(input_lane_62_pack);

  hw_uint<48 > input_lane_65_pack;
  set_at<0, 48, 16>(input_lane_65_pack, input_lane_63);
  set_at<16, 48, 16>(input_lane_65_pack, input_lane_64);
  set_at<32, 48, 16>(input_lane_65_pack, input_lane_65);
  auto res_blurx_update_0_sm1_1087 = blurx_generated_compute_unrolled_1(input_lane_65_pack);

  hw_uint<48 > input_lane_68_pack;
  set_at<0, 48, 16>(input_lane_68_pack, input_lane_66);
  set_at<16, 48, 16>(input_lane_68_pack, input_lane_67);
  set_at<32, 48, 16>(input_lane_68_pack, input_lane_68);
  auto res_blurx_update_0_sm1_985 = blurx_generated_compute_unrolled_1(input_lane_68_pack);

  hw_uint<48 > input_lane_71_pack;
  set_at<0, 48, 16>(input_lane_71_pack, input_lane_69);
  set_at<16, 48, 16>(input_lane_71_pack, input_lane_70);
  set_at<32, 48, 16>(input_lane_71_pack, input_lane_71);
  auto res_blurx_update_0_sm1_883 = blurx_generated_compute_unrolled_1(input_lane_71_pack);

  hw_uint<48 > input_lane_74_pack;
  set_at<0, 48, 16>(input_lane_74_pack, input_lane_72);
  set_at<16, 48, 16>(input_lane_74_pack, input_lane_73);
  set_at<32, 48, 16>(input_lane_74_pack, input_lane_74);
  auto res_blurx_update_0_sm1_781 = blurx_generated_compute_unrolled_1(input_lane_74_pack);

  hw_uint<48 > input_lane_77_pack;
  set_at<0, 48, 16>(input_lane_77_pack, input_lane_75);
  set_at<16, 48, 16>(input_lane_77_pack, input_lane_76);
  set_at<32, 48, 16>(input_lane_77_pack, input_lane_77);
  auto res_blurx_update_0_sm1_679 = blurx_generated_compute_unrolled_1(input_lane_77_pack);

  hw_uint<48 > input_lane_80_pack;
  set_at<0, 48, 16>(input_lane_80_pack, input_lane_78);
  set_at<16, 48, 16>(input_lane_80_pack, input_lane_79);
  set_at<32, 48, 16>(input_lane_80_pack, input_lane_80);
  auto res_blurx_update_0_sm1_577 = blurx_generated_compute_unrolled_1(input_lane_80_pack);

  hw_uint<48 > input_lane_83_pack;
  set_at<0, 48, 16>(input_lane_83_pack, input_lane_81);
  set_at<16, 48, 16>(input_lane_83_pack, input_lane_82);
  set_at<32, 48, 16>(input_lane_83_pack, input_lane_83);
  auto res_blurx_update_0_sm1_475 = blurx_generated_compute_unrolled_1(input_lane_83_pack);

  hw_uint<48 > input_lane_86_pack;
  set_at<0, 48, 16>(input_lane_86_pack, input_lane_84);
  set_at<16, 48, 16>(input_lane_86_pack, input_lane_85);
  set_at<32, 48, 16>(input_lane_86_pack, input_lane_86);
  auto res_blurx_update_0_sm1_373 = blurx_generated_compute_unrolled_1(input_lane_86_pack);

  hw_uint<48 > input_lane_89_pack;
  set_at<0, 48, 16>(input_lane_89_pack, input_lane_87);
  set_at<16, 48, 16>(input_lane_89_pack, input_lane_88);
  set_at<32, 48, 16>(input_lane_89_pack, input_lane_89);
  auto res_blurx_update_0_sm1_271 = blurx_generated_compute_unrolled_1(input_lane_89_pack);

  hw_uint<48 > input_lane_92_pack;
  set_at<0, 48, 16>(input_lane_92_pack, input_lane_90);
  set_at<16, 48, 16>(input_lane_92_pack, input_lane_91);
  set_at<32, 48, 16>(input_lane_92_pack, input_lane_92);
  auto res_blurx_update_0_sm1_169 = blurx_generated_compute_unrolled_1(input_lane_92_pack);

  hw_uint<48 > input_lane_95_pack;
  set_at<0, 48, 16>(input_lane_95_pack, input_lane_93);
  set_at<16, 48, 16>(input_lane_95_pack, input_lane_94);
  set_at<32, 48, 16>(input_lane_95_pack, input_lane_95);
  auto res_blurx_update_0_sm1_067 = blurx_generated_compute_unrolled_1(input_lane_95_pack);
  hw_uint<512 > return_value199;
  set_at<0, 512, 16>(return_value199, res_blurx_update_0_sm1_31129);
  set_at<16, 512, 16>(return_value199, res_blurx_update_0_sm1_30127);
  set_at<32, 512, 16>(return_value199, res_blurx_update_0_sm1_29125);
  set_at<48, 512, 16>(return_value199, res_blurx_update_0_sm1_28123);
  set_at<64, 512, 16>(return_value199, res_blurx_update_0_sm1_27121);
  set_at<80, 512, 16>(return_value199, res_blurx_update_0_sm1_26119);
  set_at<96, 512, 16>(return_value199, res_blurx_update_0_sm1_25117);
  set_at<112, 512, 16>(return_value199, res_blurx_update_0_sm1_24115);
  set_at<128, 512, 16>(return_value199, res_blurx_update_0_sm1_23113);
  set_at<144, 512, 16>(return_value199, res_blurx_update_0_sm1_22111);
  set_at<160, 512, 16>(return_value199, res_blurx_update_0_sm1_21109);
  set_at<176, 512, 16>(return_value199, res_blurx_update_0_sm1_20107);
  set_at<192, 512, 16>(return_value199, res_blurx_update_0_sm1_19105);
  set_at<208, 512, 16>(return_value199, res_blurx_update_0_sm1_18103);
  set_at<224, 512, 16>(return_value199, res_blurx_update_0_sm1_17101);
  set_at<240, 512, 16>(return_value199, res_blurx_update_0_sm1_1699);
  set_at<256, 512, 16>(return_value199, res_blurx_update_0_sm1_1597);
  set_at<272, 512, 16>(return_value199, res_blurx_update_0_sm1_1495);
  set_at<288, 512, 16>(return_value199, res_blurx_update_0_sm1_1393);
  set_at<304, 512, 16>(return_value199, res_blurx_update_0_sm1_1291);
  set_at<320, 512, 16>(return_value199, res_blurx_update_0_sm1_1189);
  set_at<336, 512, 16>(return_value199, res_blurx_update_0_sm1_1087);
  set_at<352, 512, 16>(return_value199, res_blurx_update_0_sm1_985);
  set_at<368, 512, 16>(return_value199, res_blurx_update_0_sm1_883);
  set_at<384, 512, 16>(return_value199, res_blurx_update_0_sm1_781);
  set_at<400, 512, 16>(return_value199, res_blurx_update_0_sm1_679);
  set_at<416, 512, 16>(return_value199, res_blurx_update_0_sm1_577);
  set_at<432, 512, 16>(return_value199, res_blurx_update_0_sm1_475);
  set_at<448, 512, 16>(return_value199, res_blurx_update_0_sm1_373);
  set_at<464, 512, 16>(return_value199, res_blurx_update_0_sm1_271);
  set_at<480, 512, 16>(return_value199, res_blurx_update_0_sm1_169);
  set_at<496, 512, 16>(return_value199, res_blurx_update_0_sm1_067);
  return return_value199;

}

hw_uint<512> blur4_32_1_cu201(hw_uint<16*96>& blurx) {
  hw_uint<16> blurx_lane_0 = blurx.extract<0, 15>();
  hw_uint<16> blurx_lane_1 = blurx.extract<16, 31>();
  hw_uint<16> blurx_lane_2 = blurx.extract<32, 47>();
  hw_uint<16> blurx_lane_3 = blurx.extract<48, 63>();
  hw_uint<16> blurx_lane_4 = blurx.extract<64, 79>();
  hw_uint<16> blurx_lane_5 = blurx.extract<80, 95>();
  hw_uint<16> blurx_lane_6 = blurx.extract<96, 111>();
  hw_uint<16> blurx_lane_7 = blurx.extract<112, 127>();
  hw_uint<16> blurx_lane_8 = blurx.extract<128, 143>();
  hw_uint<16> blurx_lane_9 = blurx.extract<144, 159>();
  hw_uint<16> blurx_lane_10 = blurx.extract<160, 175>();
  hw_uint<16> blurx_lane_11 = blurx.extract<176, 191>();
  hw_uint<16> blurx_lane_12 = blurx.extract<192, 207>();
  hw_uint<16> blurx_lane_13 = blurx.extract<208, 223>();
  hw_uint<16> blurx_lane_14 = blurx.extract<224, 239>();
  hw_uint<16> blurx_lane_15 = blurx.extract<240, 255>();
  hw_uint<16> blurx_lane_16 = blurx.extract<256, 271>();
  hw_uint<16> blurx_lane_17 = blurx.extract<272, 287>();
  hw_uint<16> blurx_lane_18 = blurx.extract<288, 303>();
  hw_uint<16> blurx_lane_19 = blurx.extract<304, 319>();
  hw_uint<16> blurx_lane_20 = blurx.extract<320, 335>();
  hw_uint<16> blurx_lane_21 = blurx.extract<336, 351>();
  hw_uint<16> blurx_lane_22 = blurx.extract<352, 367>();
  hw_uint<16> blurx_lane_23 = blurx.extract<368, 383>();
  hw_uint<16> blurx_lane_24 = blurx.extract<384, 399>();
  hw_uint<16> blurx_lane_25 = blurx.extract<400, 415>();
  hw_uint<16> blurx_lane_26 = blurx.extract<416, 431>();
  hw_uint<16> blurx_lane_27 = blurx.extract<432, 447>();
  hw_uint<16> blurx_lane_28 = blurx.extract<448, 463>();
  hw_uint<16> blurx_lane_29 = blurx.extract<464, 479>();
  hw_uint<16> blurx_lane_30 = blurx.extract<480, 495>();
  hw_uint<16> blurx_lane_31 = blurx.extract<496, 511>();
  hw_uint<16> blurx_lane_32 = blurx.extract<512, 527>();
  hw_uint<16> blurx_lane_33 = blurx.extract<528, 543>();
  hw_uint<16> blurx_lane_34 = blurx.extract<544, 559>();
  hw_uint<16> blurx_lane_35 = blurx.extract<560, 575>();
  hw_uint<16> blurx_lane_36 = blurx.extract<576, 591>();
  hw_uint<16> blurx_lane_37 = blurx.extract<592, 607>();
  hw_uint<16> blurx_lane_38 = blurx.extract<608, 623>();
  hw_uint<16> blurx_lane_39 = blurx.extract<624, 639>();
  hw_uint<16> blurx_lane_40 = blurx.extract<640, 655>();
  hw_uint<16> blurx_lane_41 = blurx.extract<656, 671>();
  hw_uint<16> blurx_lane_42 = blurx.extract<672, 687>();
  hw_uint<16> blurx_lane_43 = blurx.extract<688, 703>();
  hw_uint<16> blurx_lane_44 = blurx.extract<704, 719>();
  hw_uint<16> blurx_lane_45 = blurx.extract<720, 735>();
  hw_uint<16> blurx_lane_46 = blurx.extract<736, 751>();
  hw_uint<16> blurx_lane_47 = blurx.extract<752, 767>();
  hw_uint<16> blurx_lane_48 = blurx.extract<768, 783>();
  hw_uint<16> blurx_lane_49 = blurx.extract<784, 799>();
  hw_uint<16> blurx_lane_50 = blurx.extract<800, 815>();
  hw_uint<16> blurx_lane_51 = blurx.extract<816, 831>();
  hw_uint<16> blurx_lane_52 = blurx.extract<832, 847>();
  hw_uint<16> blurx_lane_53 = blurx.extract<848, 863>();
  hw_uint<16> blurx_lane_54 = blurx.extract<864, 879>();
  hw_uint<16> blurx_lane_55 = blurx.extract<880, 895>();
  hw_uint<16> blurx_lane_56 = blurx.extract<896, 911>();
  hw_uint<16> blurx_lane_57 = blurx.extract<912, 927>();
  hw_uint<16> blurx_lane_58 = blurx.extract<928, 943>();
  hw_uint<16> blurx_lane_59 = blurx.extract<944, 959>();
  hw_uint<16> blurx_lane_60 = blurx.extract<960, 975>();
  hw_uint<16> blurx_lane_61 = blurx.extract<976, 991>();
  hw_uint<16> blurx_lane_62 = blurx.extract<992, 1007>();
  hw_uint<16> blurx_lane_63 = blurx.extract<1008, 1023>();
  hw_uint<16> blurx_lane_64 = blurx.extract<1024, 1039>();
  hw_uint<16> blurx_lane_65 = blurx.extract<1040, 1055>();
  hw_uint<16> blurx_lane_66 = blurx.extract<1056, 1071>();
  hw_uint<16> blurx_lane_67 = blurx.extract<1072, 1087>();
  hw_uint<16> blurx_lane_68 = blurx.extract<1088, 1103>();
  hw_uint<16> blurx_lane_69 = blurx.extract<1104, 1119>();
  hw_uint<16> blurx_lane_70 = blurx.extract<1120, 1135>();
  hw_uint<16> blurx_lane_71 = blurx.extract<1136, 1151>();
  hw_uint<16> blurx_lane_72 = blurx.extract<1152, 1167>();
  hw_uint<16> blurx_lane_73 = blurx.extract<1168, 1183>();
  hw_uint<16> blurx_lane_74 = blurx.extract<1184, 1199>();
  hw_uint<16> blurx_lane_75 = blurx.extract<1200, 1215>();
  hw_uint<16> blurx_lane_76 = blurx.extract<1216, 1231>();
  hw_uint<16> blurx_lane_77 = blurx.extract<1232, 1247>();
  hw_uint<16> blurx_lane_78 = blurx.extract<1248, 1263>();
  hw_uint<16> blurx_lane_79 = blurx.extract<1264, 1279>();
  hw_uint<16> blurx_lane_80 = blurx.extract<1280, 1295>();
  hw_uint<16> blurx_lane_81 = blurx.extract<1296, 1311>();
  hw_uint<16> blurx_lane_82 = blurx.extract<1312, 1327>();
  hw_uint<16> blurx_lane_83 = blurx.extract<1328, 1343>();
  hw_uint<16> blurx_lane_84 = blurx.extract<1344, 1359>();
  hw_uint<16> blurx_lane_85 = blurx.extract<1360, 1375>();
  hw_uint<16> blurx_lane_86 = blurx.extract<1376, 1391>();
  hw_uint<16> blurx_lane_87 = blurx.extract<1392, 1407>();
  hw_uint<16> blurx_lane_88 = blurx.extract<1408, 1423>();
  hw_uint<16> blurx_lane_89 = blurx.extract<1424, 1439>();
  hw_uint<16> blurx_lane_90 = blurx.extract<1440, 1455>();
  hw_uint<16> blurx_lane_91 = blurx.extract<1456, 1471>();
  hw_uint<16> blurx_lane_92 = blurx.extract<1472, 1487>();
  hw_uint<16> blurx_lane_93 = blurx.extract<1488, 1503>();
  hw_uint<16> blurx_lane_94 = blurx.extract<1504, 1519>();
  hw_uint<16> blurx_lane_95 = blurx.extract<1520, 1535>();

	
  hw_uint<48 > blurx_lane_2_pack;
  set_at<0, 48, 16>(blurx_lane_2_pack, blurx_lane_0);
  set_at<16, 48, 16>(blurx_lane_2_pack, blurx_lane_1);
  set_at<32, 48, 16>(blurx_lane_2_pack, blurx_lane_2);
  auto res_blur4_32_update_0_sm2_31193 = blur4_32_generated_compute_unrolled_1(blurx_lane_2_pack);

  hw_uint<48 > blurx_lane_5_pack;
  set_at<0, 48, 16>(blurx_lane_5_pack, blurx_lane_3);
  set_at<16, 48, 16>(blurx_lane_5_pack, blurx_lane_4);
  set_at<32, 48, 16>(blurx_lane_5_pack, blurx_lane_5);
  auto res_blur4_32_update_0_sm2_30191 = blur4_32_generated_compute_unrolled_1(blurx_lane_5_pack);

  hw_uint<48 > blurx_lane_8_pack;
  set_at<0, 48, 16>(blurx_lane_8_pack, blurx_lane_6);
  set_at<16, 48, 16>(blurx_lane_8_pack, blurx_lane_7);
  set_at<32, 48, 16>(blurx_lane_8_pack, blurx_lane_8);
  auto res_blur4_32_update_0_sm2_29189 = blur4_32_generated_compute_unrolled_1(blurx_lane_8_pack);

  hw_uint<48 > blurx_lane_11_pack;
  set_at<0, 48, 16>(blurx_lane_11_pack, blurx_lane_9);
  set_at<16, 48, 16>(blurx_lane_11_pack, blurx_lane_10);
  set_at<32, 48, 16>(blurx_lane_11_pack, blurx_lane_11);
  auto res_blur4_32_update_0_sm2_28187 = blur4_32_generated_compute_unrolled_1(blurx_lane_11_pack);

  hw_uint<48 > blurx_lane_14_pack;
  set_at<0, 48, 16>(blurx_lane_14_pack, blurx_lane_12);
  set_at<16, 48, 16>(blurx_lane_14_pack, blurx_lane_13);
  set_at<32, 48, 16>(blurx_lane_14_pack, blurx_lane_14);
  auto res_blur4_32_update_0_sm2_27185 = blur4_32_generated_compute_unrolled_1(blurx_lane_14_pack);

  hw_uint<48 > blurx_lane_17_pack;
  set_at<0, 48, 16>(blurx_lane_17_pack, blurx_lane_15);
  set_at<16, 48, 16>(blurx_lane_17_pack, blurx_lane_16);
  set_at<32, 48, 16>(blurx_lane_17_pack, blurx_lane_17);
  auto res_blur4_32_update_0_sm2_26183 = blur4_32_generated_compute_unrolled_1(blurx_lane_17_pack);

  hw_uint<48 > blurx_lane_20_pack;
  set_at<0, 48, 16>(blurx_lane_20_pack, blurx_lane_18);
  set_at<16, 48, 16>(blurx_lane_20_pack, blurx_lane_19);
  set_at<32, 48, 16>(blurx_lane_20_pack, blurx_lane_20);
  auto res_blur4_32_update_0_sm2_25181 = blur4_32_generated_compute_unrolled_1(blurx_lane_20_pack);

  hw_uint<48 > blurx_lane_23_pack;
  set_at<0, 48, 16>(blurx_lane_23_pack, blurx_lane_21);
  set_at<16, 48, 16>(blurx_lane_23_pack, blurx_lane_22);
  set_at<32, 48, 16>(blurx_lane_23_pack, blurx_lane_23);
  auto res_blur4_32_update_0_sm2_24179 = blur4_32_generated_compute_unrolled_1(blurx_lane_23_pack);

  hw_uint<48 > blurx_lane_26_pack;
  set_at<0, 48, 16>(blurx_lane_26_pack, blurx_lane_24);
  set_at<16, 48, 16>(blurx_lane_26_pack, blurx_lane_25);
  set_at<32, 48, 16>(blurx_lane_26_pack, blurx_lane_26);
  auto res_blur4_32_update_0_sm2_23177 = blur4_32_generated_compute_unrolled_1(blurx_lane_26_pack);

  hw_uint<48 > blurx_lane_29_pack;
  set_at<0, 48, 16>(blurx_lane_29_pack, blurx_lane_27);
  set_at<16, 48, 16>(blurx_lane_29_pack, blurx_lane_28);
  set_at<32, 48, 16>(blurx_lane_29_pack, blurx_lane_29);
  auto res_blur4_32_update_0_sm2_22175 = blur4_32_generated_compute_unrolled_1(blurx_lane_29_pack);

  hw_uint<48 > blurx_lane_32_pack;
  set_at<0, 48, 16>(blurx_lane_32_pack, blurx_lane_30);
  set_at<16, 48, 16>(blurx_lane_32_pack, blurx_lane_31);
  set_at<32, 48, 16>(blurx_lane_32_pack, blurx_lane_32);
  auto res_blur4_32_update_0_sm2_21173 = blur4_32_generated_compute_unrolled_1(blurx_lane_32_pack);

  hw_uint<48 > blurx_lane_35_pack;
  set_at<0, 48, 16>(blurx_lane_35_pack, blurx_lane_33);
  set_at<16, 48, 16>(blurx_lane_35_pack, blurx_lane_34);
  set_at<32, 48, 16>(blurx_lane_35_pack, blurx_lane_35);
  auto res_blur4_32_update_0_sm2_20171 = blur4_32_generated_compute_unrolled_1(blurx_lane_35_pack);

  hw_uint<48 > blurx_lane_38_pack;
  set_at<0, 48, 16>(blurx_lane_38_pack, blurx_lane_36);
  set_at<16, 48, 16>(blurx_lane_38_pack, blurx_lane_37);
  set_at<32, 48, 16>(blurx_lane_38_pack, blurx_lane_38);
  auto res_blur4_32_update_0_sm2_19169 = blur4_32_generated_compute_unrolled_1(blurx_lane_38_pack);

  hw_uint<48 > blurx_lane_41_pack;
  set_at<0, 48, 16>(blurx_lane_41_pack, blurx_lane_39);
  set_at<16, 48, 16>(blurx_lane_41_pack, blurx_lane_40);
  set_at<32, 48, 16>(blurx_lane_41_pack, blurx_lane_41);
  auto res_blur4_32_update_0_sm2_18167 = blur4_32_generated_compute_unrolled_1(blurx_lane_41_pack);

  hw_uint<48 > blurx_lane_44_pack;
  set_at<0, 48, 16>(blurx_lane_44_pack, blurx_lane_42);
  set_at<16, 48, 16>(blurx_lane_44_pack, blurx_lane_43);
  set_at<32, 48, 16>(blurx_lane_44_pack, blurx_lane_44);
  auto res_blur4_32_update_0_sm2_17165 = blur4_32_generated_compute_unrolled_1(blurx_lane_44_pack);

  hw_uint<48 > blurx_lane_47_pack;
  set_at<0, 48, 16>(blurx_lane_47_pack, blurx_lane_45);
  set_at<16, 48, 16>(blurx_lane_47_pack, blurx_lane_46);
  set_at<32, 48, 16>(blurx_lane_47_pack, blurx_lane_47);
  auto res_blur4_32_update_0_sm2_16163 = blur4_32_generated_compute_unrolled_1(blurx_lane_47_pack);

  hw_uint<48 > blurx_lane_50_pack;
  set_at<0, 48, 16>(blurx_lane_50_pack, blurx_lane_48);
  set_at<16, 48, 16>(blurx_lane_50_pack, blurx_lane_49);
  set_at<32, 48, 16>(blurx_lane_50_pack, blurx_lane_50);
  auto res_blur4_32_update_0_sm2_15161 = blur4_32_generated_compute_unrolled_1(blurx_lane_50_pack);

  hw_uint<48 > blurx_lane_53_pack;
  set_at<0, 48, 16>(blurx_lane_53_pack, blurx_lane_51);
  set_at<16, 48, 16>(blurx_lane_53_pack, blurx_lane_52);
  set_at<32, 48, 16>(blurx_lane_53_pack, blurx_lane_53);
  auto res_blur4_32_update_0_sm2_14159 = blur4_32_generated_compute_unrolled_1(blurx_lane_53_pack);

  hw_uint<48 > blurx_lane_56_pack;
  set_at<0, 48, 16>(blurx_lane_56_pack, blurx_lane_54);
  set_at<16, 48, 16>(blurx_lane_56_pack, blurx_lane_55);
  set_at<32, 48, 16>(blurx_lane_56_pack, blurx_lane_56);
  auto res_blur4_32_update_0_sm2_13157 = blur4_32_generated_compute_unrolled_1(blurx_lane_56_pack);

  hw_uint<48 > blurx_lane_59_pack;
  set_at<0, 48, 16>(blurx_lane_59_pack, blurx_lane_57);
  set_at<16, 48, 16>(blurx_lane_59_pack, blurx_lane_58);
  set_at<32, 48, 16>(blurx_lane_59_pack, blurx_lane_59);
  auto res_blur4_32_update_0_sm2_12155 = blur4_32_generated_compute_unrolled_1(blurx_lane_59_pack);

  hw_uint<48 > blurx_lane_62_pack;
  set_at<0, 48, 16>(blurx_lane_62_pack, blurx_lane_60);
  set_at<16, 48, 16>(blurx_lane_62_pack, blurx_lane_61);
  set_at<32, 48, 16>(blurx_lane_62_pack, blurx_lane_62);
  auto res_blur4_32_update_0_sm2_11153 = blur4_32_generated_compute_unrolled_1(blurx_lane_62_pack);

  hw_uint<48 > blurx_lane_65_pack;
  set_at<0, 48, 16>(blurx_lane_65_pack, blurx_lane_63);
  set_at<16, 48, 16>(blurx_lane_65_pack, blurx_lane_64);
  set_at<32, 48, 16>(blurx_lane_65_pack, blurx_lane_65);
  auto res_blur4_32_update_0_sm2_10151 = blur4_32_generated_compute_unrolled_1(blurx_lane_65_pack);

  hw_uint<48 > blurx_lane_68_pack;
  set_at<0, 48, 16>(blurx_lane_68_pack, blurx_lane_66);
  set_at<16, 48, 16>(blurx_lane_68_pack, blurx_lane_67);
  set_at<32, 48, 16>(blurx_lane_68_pack, blurx_lane_68);
  auto res_blur4_32_update_0_sm2_9149 = blur4_32_generated_compute_unrolled_1(blurx_lane_68_pack);

  hw_uint<48 > blurx_lane_71_pack;
  set_at<0, 48, 16>(blurx_lane_71_pack, blurx_lane_69);
  set_at<16, 48, 16>(blurx_lane_71_pack, blurx_lane_70);
  set_at<32, 48, 16>(blurx_lane_71_pack, blurx_lane_71);
  auto res_blur4_32_update_0_sm2_8147 = blur4_32_generated_compute_unrolled_1(blurx_lane_71_pack);

  hw_uint<48 > blurx_lane_74_pack;
  set_at<0, 48, 16>(blurx_lane_74_pack, blurx_lane_72);
  set_at<16, 48, 16>(blurx_lane_74_pack, blurx_lane_73);
  set_at<32, 48, 16>(blurx_lane_74_pack, blurx_lane_74);
  auto res_blur4_32_update_0_sm2_7145 = blur4_32_generated_compute_unrolled_1(blurx_lane_74_pack);

  hw_uint<48 > blurx_lane_77_pack;
  set_at<0, 48, 16>(blurx_lane_77_pack, blurx_lane_75);
  set_at<16, 48, 16>(blurx_lane_77_pack, blurx_lane_76);
  set_at<32, 48, 16>(blurx_lane_77_pack, blurx_lane_77);
  auto res_blur4_32_update_0_sm2_6143 = blur4_32_generated_compute_unrolled_1(blurx_lane_77_pack);

  hw_uint<48 > blurx_lane_80_pack;
  set_at<0, 48, 16>(blurx_lane_80_pack, blurx_lane_78);
  set_at<16, 48, 16>(blurx_lane_80_pack, blurx_lane_79);
  set_at<32, 48, 16>(blurx_lane_80_pack, blurx_lane_80);
  auto res_blur4_32_update_0_sm2_5141 = blur4_32_generated_compute_unrolled_1(blurx_lane_80_pack);

  hw_uint<48 > blurx_lane_83_pack;
  set_at<0, 48, 16>(blurx_lane_83_pack, blurx_lane_81);
  set_at<16, 48, 16>(blurx_lane_83_pack, blurx_lane_82);
  set_at<32, 48, 16>(blurx_lane_83_pack, blurx_lane_83);
  auto res_blur4_32_update_0_sm2_4139 = blur4_32_generated_compute_unrolled_1(blurx_lane_83_pack);

  hw_uint<48 > blurx_lane_86_pack;
  set_at<0, 48, 16>(blurx_lane_86_pack, blurx_lane_84);
  set_at<16, 48, 16>(blurx_lane_86_pack, blurx_lane_85);
  set_at<32, 48, 16>(blurx_lane_86_pack, blurx_lane_86);
  auto res_blur4_32_update_0_sm2_3137 = blur4_32_generated_compute_unrolled_1(blurx_lane_86_pack);

  hw_uint<48 > blurx_lane_89_pack;
  set_at<0, 48, 16>(blurx_lane_89_pack, blurx_lane_87);
  set_at<16, 48, 16>(blurx_lane_89_pack, blurx_lane_88);
  set_at<32, 48, 16>(blurx_lane_89_pack, blurx_lane_89);
  auto res_blur4_32_update_0_sm2_2135 = blur4_32_generated_compute_unrolled_1(blurx_lane_89_pack);

  hw_uint<48 > blurx_lane_92_pack;
  set_at<0, 48, 16>(blurx_lane_92_pack, blurx_lane_90);
  set_at<16, 48, 16>(blurx_lane_92_pack, blurx_lane_91);
  set_at<32, 48, 16>(blurx_lane_92_pack, blurx_lane_92);
  auto res_blur4_32_update_0_sm2_1133 = blur4_32_generated_compute_unrolled_1(blurx_lane_92_pack);

  hw_uint<48 > blurx_lane_95_pack;
  set_at<0, 48, 16>(blurx_lane_95_pack, blurx_lane_93);
  set_at<16, 48, 16>(blurx_lane_95_pack, blurx_lane_94);
  set_at<32, 48, 16>(blurx_lane_95_pack, blurx_lane_95);
  auto res_blur4_32_update_0_sm2_0131 = blur4_32_generated_compute_unrolled_1(blurx_lane_95_pack);
  hw_uint<512 > return_value202;
  set_at<0, 512, 16>(return_value202, res_blur4_32_update_0_sm2_31193);
  set_at<16, 512, 16>(return_value202, res_blur4_32_update_0_sm2_30191);
  set_at<32, 512, 16>(return_value202, res_blur4_32_update_0_sm2_29189);
  set_at<48, 512, 16>(return_value202, res_blur4_32_update_0_sm2_28187);
  set_at<64, 512, 16>(return_value202, res_blur4_32_update_0_sm2_27185);
  set_at<80, 512, 16>(return_value202, res_blur4_32_update_0_sm2_26183);
  set_at<96, 512, 16>(return_value202, res_blur4_32_update_0_sm2_25181);
  set_at<112, 512, 16>(return_value202, res_blur4_32_update_0_sm2_24179);
  set_at<128, 512, 16>(return_value202, res_blur4_32_update_0_sm2_23177);
  set_at<144, 512, 16>(return_value202, res_blur4_32_update_0_sm2_22175);
  set_at<160, 512, 16>(return_value202, res_blur4_32_update_0_sm2_21173);
  set_at<176, 512, 16>(return_value202, res_blur4_32_update_0_sm2_20171);
  set_at<192, 512, 16>(return_value202, res_blur4_32_update_0_sm2_19169);
  set_at<208, 512, 16>(return_value202, res_blur4_32_update_0_sm2_18167);
  set_at<224, 512, 16>(return_value202, res_blur4_32_update_0_sm2_17165);
  set_at<240, 512, 16>(return_value202, res_blur4_32_update_0_sm2_16163);
  set_at<256, 512, 16>(return_value202, res_blur4_32_update_0_sm2_15161);
  set_at<272, 512, 16>(return_value202, res_blur4_32_update_0_sm2_14159);
  set_at<288, 512, 16>(return_value202, res_blur4_32_update_0_sm2_13157);
  set_at<304, 512, 16>(return_value202, res_blur4_32_update_0_sm2_12155);
  set_at<320, 512, 16>(return_value202, res_blur4_32_update_0_sm2_11153);
  set_at<336, 512, 16>(return_value202, res_blur4_32_update_0_sm2_10151);
  set_at<352, 512, 16>(return_value202, res_blur4_32_update_0_sm2_9149);
  set_at<368, 512, 16>(return_value202, res_blur4_32_update_0_sm2_8147);
  set_at<384, 512, 16>(return_value202, res_blur4_32_update_0_sm2_7145);
  set_at<400, 512, 16>(return_value202, res_blur4_32_update_0_sm2_6143);
  set_at<416, 512, 16>(return_value202, res_blur4_32_update_0_sm2_5141);
  set_at<432, 512, 16>(return_value202, res_blur4_32_update_0_sm2_4139);
  set_at<448, 512, 16>(return_value202, res_blur4_32_update_0_sm2_3137);
  set_at<464, 512, 16>(return_value202, res_blur4_32_update_0_sm2_2135);
  set_at<480, 512, 16>(return_value202, res_blur4_32_update_0_sm2_1133);
  set_at<496, 512, 16>(return_value202, res_blur4_32_update_0_sm2_0131);
  return return_value202;

}

