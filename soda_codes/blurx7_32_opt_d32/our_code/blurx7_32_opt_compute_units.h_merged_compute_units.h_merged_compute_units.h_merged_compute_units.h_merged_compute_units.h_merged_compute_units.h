#include "blurx7_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> blurx7_32_1_cu268(hw_uint<16*96>& input_FIFO_buf4) {
  hw_uint<16> input_FIFO_buf4_lane_0 = input_FIFO_buf4.extract<0, 15>();
  hw_uint<16> input_FIFO_buf4_lane_1 = input_FIFO_buf4.extract<16, 31>();
  hw_uint<16> input_FIFO_buf4_lane_2 = input_FIFO_buf4.extract<32, 47>();
  hw_uint<16> input_FIFO_buf4_lane_3 = input_FIFO_buf4.extract<48, 63>();
  hw_uint<16> input_FIFO_buf4_lane_4 = input_FIFO_buf4.extract<64, 79>();
  hw_uint<16> input_FIFO_buf4_lane_5 = input_FIFO_buf4.extract<80, 95>();
  hw_uint<16> input_FIFO_buf4_lane_6 = input_FIFO_buf4.extract<96, 111>();
  hw_uint<16> input_FIFO_buf4_lane_7 = input_FIFO_buf4.extract<112, 127>();
  hw_uint<16> input_FIFO_buf4_lane_8 = input_FIFO_buf4.extract<128, 143>();
  hw_uint<16> input_FIFO_buf4_lane_9 = input_FIFO_buf4.extract<144, 159>();
  hw_uint<16> input_FIFO_buf4_lane_10 = input_FIFO_buf4.extract<160, 175>();
  hw_uint<16> input_FIFO_buf4_lane_11 = input_FIFO_buf4.extract<176, 191>();
  hw_uint<16> input_FIFO_buf4_lane_12 = input_FIFO_buf4.extract<192, 207>();
  hw_uint<16> input_FIFO_buf4_lane_13 = input_FIFO_buf4.extract<208, 223>();
  hw_uint<16> input_FIFO_buf4_lane_14 = input_FIFO_buf4.extract<224, 239>();
  hw_uint<16> input_FIFO_buf4_lane_15 = input_FIFO_buf4.extract<240, 255>();
  hw_uint<16> input_FIFO_buf4_lane_16 = input_FIFO_buf4.extract<256, 271>();
  hw_uint<16> input_FIFO_buf4_lane_17 = input_FIFO_buf4.extract<272, 287>();
  hw_uint<16> input_FIFO_buf4_lane_18 = input_FIFO_buf4.extract<288, 303>();
  hw_uint<16> input_FIFO_buf4_lane_19 = input_FIFO_buf4.extract<304, 319>();
  hw_uint<16> input_FIFO_buf4_lane_20 = input_FIFO_buf4.extract<320, 335>();
  hw_uint<16> input_FIFO_buf4_lane_21 = input_FIFO_buf4.extract<336, 351>();
  hw_uint<16> input_FIFO_buf4_lane_22 = input_FIFO_buf4.extract<352, 367>();
  hw_uint<16> input_FIFO_buf4_lane_23 = input_FIFO_buf4.extract<368, 383>();
  hw_uint<16> input_FIFO_buf4_lane_24 = input_FIFO_buf4.extract<384, 399>();
  hw_uint<16> input_FIFO_buf4_lane_25 = input_FIFO_buf4.extract<400, 415>();
  hw_uint<16> input_FIFO_buf4_lane_26 = input_FIFO_buf4.extract<416, 431>();
  hw_uint<16> input_FIFO_buf4_lane_27 = input_FIFO_buf4.extract<432, 447>();
  hw_uint<16> input_FIFO_buf4_lane_28 = input_FIFO_buf4.extract<448, 463>();
  hw_uint<16> input_FIFO_buf4_lane_29 = input_FIFO_buf4.extract<464, 479>();
  hw_uint<16> input_FIFO_buf4_lane_30 = input_FIFO_buf4.extract<480, 495>();
  hw_uint<16> input_FIFO_buf4_lane_31 = input_FIFO_buf4.extract<496, 511>();
  hw_uint<16> input_FIFO_buf4_lane_32 = input_FIFO_buf4.extract<512, 527>();
  hw_uint<16> input_FIFO_buf4_lane_33 = input_FIFO_buf4.extract<528, 543>();
  hw_uint<16> input_FIFO_buf4_lane_34 = input_FIFO_buf4.extract<544, 559>();
  hw_uint<16> input_FIFO_buf4_lane_35 = input_FIFO_buf4.extract<560, 575>();
  hw_uint<16> input_FIFO_buf4_lane_36 = input_FIFO_buf4.extract<576, 591>();
  hw_uint<16> input_FIFO_buf4_lane_37 = input_FIFO_buf4.extract<592, 607>();
  hw_uint<16> input_FIFO_buf4_lane_38 = input_FIFO_buf4.extract<608, 623>();
  hw_uint<16> input_FIFO_buf4_lane_39 = input_FIFO_buf4.extract<624, 639>();
  hw_uint<16> input_FIFO_buf4_lane_40 = input_FIFO_buf4.extract<640, 655>();
  hw_uint<16> input_FIFO_buf4_lane_41 = input_FIFO_buf4.extract<656, 671>();
  hw_uint<16> input_FIFO_buf4_lane_42 = input_FIFO_buf4.extract<672, 687>();
  hw_uint<16> input_FIFO_buf4_lane_43 = input_FIFO_buf4.extract<688, 703>();
  hw_uint<16> input_FIFO_buf4_lane_44 = input_FIFO_buf4.extract<704, 719>();
  hw_uint<16> input_FIFO_buf4_lane_45 = input_FIFO_buf4.extract<720, 735>();
  hw_uint<16> input_FIFO_buf4_lane_46 = input_FIFO_buf4.extract<736, 751>();
  hw_uint<16> input_FIFO_buf4_lane_47 = input_FIFO_buf4.extract<752, 767>();
  hw_uint<16> input_FIFO_buf4_lane_48 = input_FIFO_buf4.extract<768, 783>();
  hw_uint<16> input_FIFO_buf4_lane_49 = input_FIFO_buf4.extract<784, 799>();
  hw_uint<16> input_FIFO_buf4_lane_50 = input_FIFO_buf4.extract<800, 815>();
  hw_uint<16> input_FIFO_buf4_lane_51 = input_FIFO_buf4.extract<816, 831>();
  hw_uint<16> input_FIFO_buf4_lane_52 = input_FIFO_buf4.extract<832, 847>();
  hw_uint<16> input_FIFO_buf4_lane_53 = input_FIFO_buf4.extract<848, 863>();
  hw_uint<16> input_FIFO_buf4_lane_54 = input_FIFO_buf4.extract<864, 879>();
  hw_uint<16> input_FIFO_buf4_lane_55 = input_FIFO_buf4.extract<880, 895>();
  hw_uint<16> input_FIFO_buf4_lane_56 = input_FIFO_buf4.extract<896, 911>();
  hw_uint<16> input_FIFO_buf4_lane_57 = input_FIFO_buf4.extract<912, 927>();
  hw_uint<16> input_FIFO_buf4_lane_58 = input_FIFO_buf4.extract<928, 943>();
  hw_uint<16> input_FIFO_buf4_lane_59 = input_FIFO_buf4.extract<944, 959>();
  hw_uint<16> input_FIFO_buf4_lane_60 = input_FIFO_buf4.extract<960, 975>();
  hw_uint<16> input_FIFO_buf4_lane_61 = input_FIFO_buf4.extract<976, 991>();
  hw_uint<16> input_FIFO_buf4_lane_62 = input_FIFO_buf4.extract<992, 1007>();
  hw_uint<16> input_FIFO_buf4_lane_63 = input_FIFO_buf4.extract<1008, 1023>();
  hw_uint<16> input_FIFO_buf4_lane_64 = input_FIFO_buf4.extract<1024, 1039>();
  hw_uint<16> input_FIFO_buf4_lane_65 = input_FIFO_buf4.extract<1040, 1055>();
  hw_uint<16> input_FIFO_buf4_lane_66 = input_FIFO_buf4.extract<1056, 1071>();
  hw_uint<16> input_FIFO_buf4_lane_67 = input_FIFO_buf4.extract<1072, 1087>();
  hw_uint<16> input_FIFO_buf4_lane_68 = input_FIFO_buf4.extract<1088, 1103>();
  hw_uint<16> input_FIFO_buf4_lane_69 = input_FIFO_buf4.extract<1104, 1119>();
  hw_uint<16> input_FIFO_buf4_lane_70 = input_FIFO_buf4.extract<1120, 1135>();
  hw_uint<16> input_FIFO_buf4_lane_71 = input_FIFO_buf4.extract<1136, 1151>();
  hw_uint<16> input_FIFO_buf4_lane_72 = input_FIFO_buf4.extract<1152, 1167>();
  hw_uint<16> input_FIFO_buf4_lane_73 = input_FIFO_buf4.extract<1168, 1183>();
  hw_uint<16> input_FIFO_buf4_lane_74 = input_FIFO_buf4.extract<1184, 1199>();
  hw_uint<16> input_FIFO_buf4_lane_75 = input_FIFO_buf4.extract<1200, 1215>();
  hw_uint<16> input_FIFO_buf4_lane_76 = input_FIFO_buf4.extract<1216, 1231>();
  hw_uint<16> input_FIFO_buf4_lane_77 = input_FIFO_buf4.extract<1232, 1247>();
  hw_uint<16> input_FIFO_buf4_lane_78 = input_FIFO_buf4.extract<1248, 1263>();
  hw_uint<16> input_FIFO_buf4_lane_79 = input_FIFO_buf4.extract<1264, 1279>();
  hw_uint<16> input_FIFO_buf4_lane_80 = input_FIFO_buf4.extract<1280, 1295>();
  hw_uint<16> input_FIFO_buf4_lane_81 = input_FIFO_buf4.extract<1296, 1311>();
  hw_uint<16> input_FIFO_buf4_lane_82 = input_FIFO_buf4.extract<1312, 1327>();
  hw_uint<16> input_FIFO_buf4_lane_83 = input_FIFO_buf4.extract<1328, 1343>();
  hw_uint<16> input_FIFO_buf4_lane_84 = input_FIFO_buf4.extract<1344, 1359>();
  hw_uint<16> input_FIFO_buf4_lane_85 = input_FIFO_buf4.extract<1360, 1375>();
  hw_uint<16> input_FIFO_buf4_lane_86 = input_FIFO_buf4.extract<1376, 1391>();
  hw_uint<16> input_FIFO_buf4_lane_87 = input_FIFO_buf4.extract<1392, 1407>();
  hw_uint<16> input_FIFO_buf4_lane_88 = input_FIFO_buf4.extract<1408, 1423>();
  hw_uint<16> input_FIFO_buf4_lane_89 = input_FIFO_buf4.extract<1424, 1439>();
  hw_uint<16> input_FIFO_buf4_lane_90 = input_FIFO_buf4.extract<1440, 1455>();
  hw_uint<16> input_FIFO_buf4_lane_91 = input_FIFO_buf4.extract<1456, 1471>();
  hw_uint<16> input_FIFO_buf4_lane_92 = input_FIFO_buf4.extract<1472, 1487>();
  hw_uint<16> input_FIFO_buf4_lane_93 = input_FIFO_buf4.extract<1488, 1503>();
  hw_uint<16> input_FIFO_buf4_lane_94 = input_FIFO_buf4.extract<1504, 1519>();
  hw_uint<16> input_FIFO_buf4_lane_95 = input_FIFO_buf4.extract<1520, 1535>();

	
  hw_uint<48 > input_FIFO_buf4_lane_2_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_2_pack, input_FIFO_buf4_lane_0);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_2_pack, input_FIFO_buf4_lane_1);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_2_pack, input_FIFO_buf4_lane_2);
  auto res_blurx7_32_update_0_sm8_012 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_2_pack);

  hw_uint<48 > input_FIFO_buf4_lane_5_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_5_pack, input_FIFO_buf4_lane_3);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_5_pack, input_FIFO_buf4_lane_4);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_5_pack, input_FIFO_buf4_lane_5);
  auto res_blurx7_32_update_0_sm8_114 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_5_pack);

  hw_uint<48 > input_FIFO_buf4_lane_8_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_8_pack, input_FIFO_buf4_lane_6);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_8_pack, input_FIFO_buf4_lane_7);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_8_pack, input_FIFO_buf4_lane_8);
  auto res_blurx7_32_update_0_sm8_216 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_8_pack);

  hw_uint<48 > input_FIFO_buf4_lane_11_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_11_pack, input_FIFO_buf4_lane_9);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_11_pack, input_FIFO_buf4_lane_10);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_11_pack, input_FIFO_buf4_lane_11);
  auto res_blurx7_32_update_0_sm8_318 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_11_pack);

  hw_uint<48 > input_FIFO_buf4_lane_14_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_14_pack, input_FIFO_buf4_lane_12);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_14_pack, input_FIFO_buf4_lane_13);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_14_pack, input_FIFO_buf4_lane_14);
  auto res_blurx7_32_update_0_sm8_420 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_14_pack);

  hw_uint<48 > input_FIFO_buf4_lane_17_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_17_pack, input_FIFO_buf4_lane_15);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_17_pack, input_FIFO_buf4_lane_16);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_17_pack, input_FIFO_buf4_lane_17);
  auto res_blurx7_32_update_0_sm8_522 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_17_pack);

  hw_uint<48 > input_FIFO_buf4_lane_20_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_20_pack, input_FIFO_buf4_lane_18);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_20_pack, input_FIFO_buf4_lane_19);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_20_pack, input_FIFO_buf4_lane_20);
  auto res_blurx7_32_update_0_sm8_624 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_20_pack);

  hw_uint<48 > input_FIFO_buf4_lane_23_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_23_pack, input_FIFO_buf4_lane_21);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_23_pack, input_FIFO_buf4_lane_22);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_23_pack, input_FIFO_buf4_lane_23);
  auto res_blurx7_32_update_0_sm8_726 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_23_pack);

  hw_uint<48 > input_FIFO_buf4_lane_26_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_26_pack, input_FIFO_buf4_lane_24);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_26_pack, input_FIFO_buf4_lane_25);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_26_pack, input_FIFO_buf4_lane_26);
  auto res_blurx7_32_update_0_sm8_828 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_26_pack);

  hw_uint<48 > input_FIFO_buf4_lane_29_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_29_pack, input_FIFO_buf4_lane_27);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_29_pack, input_FIFO_buf4_lane_28);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_29_pack, input_FIFO_buf4_lane_29);
  auto res_blurx7_32_update_0_sm8_930 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_29_pack);

  hw_uint<48 > input_FIFO_buf4_lane_32_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_32_pack, input_FIFO_buf4_lane_30);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_32_pack, input_FIFO_buf4_lane_31);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_32_pack, input_FIFO_buf4_lane_32);
  auto res_blurx7_32_update_0_sm8_1032 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_32_pack);

  hw_uint<48 > input_FIFO_buf4_lane_35_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_35_pack, input_FIFO_buf4_lane_33);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_35_pack, input_FIFO_buf4_lane_34);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_35_pack, input_FIFO_buf4_lane_35);
  auto res_blurx7_32_update_0_sm8_1134 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_35_pack);

  hw_uint<48 > input_FIFO_buf4_lane_38_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_38_pack, input_FIFO_buf4_lane_36);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_38_pack, input_FIFO_buf4_lane_37);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_38_pack, input_FIFO_buf4_lane_38);
  auto res_blurx7_32_update_0_sm8_1236 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_38_pack);

  hw_uint<48 > input_FIFO_buf4_lane_41_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_41_pack, input_FIFO_buf4_lane_39);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_41_pack, input_FIFO_buf4_lane_40);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_41_pack, input_FIFO_buf4_lane_41);
  auto res_blurx7_32_update_0_sm8_1338 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_41_pack);

  hw_uint<48 > input_FIFO_buf4_lane_44_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_44_pack, input_FIFO_buf4_lane_42);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_44_pack, input_FIFO_buf4_lane_43);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_44_pack, input_FIFO_buf4_lane_44);
  auto res_blurx7_32_update_0_sm8_1440 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_44_pack);

  hw_uint<48 > input_FIFO_buf4_lane_47_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_47_pack, input_FIFO_buf4_lane_45);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_47_pack, input_FIFO_buf4_lane_46);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_47_pack, input_FIFO_buf4_lane_47);
  auto res_blurx7_32_update_0_sm8_1542 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_47_pack);

  hw_uint<48 > input_FIFO_buf4_lane_50_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_50_pack, input_FIFO_buf4_lane_48);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_50_pack, input_FIFO_buf4_lane_49);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_50_pack, input_FIFO_buf4_lane_50);
  auto res_blurx7_32_update_0_sm8_1644 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_50_pack);

  hw_uint<48 > input_FIFO_buf4_lane_53_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_53_pack, input_FIFO_buf4_lane_51);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_53_pack, input_FIFO_buf4_lane_52);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_53_pack, input_FIFO_buf4_lane_53);
  auto res_blurx7_32_update_0_sm8_1746 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_53_pack);

  hw_uint<48 > input_FIFO_buf4_lane_56_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_56_pack, input_FIFO_buf4_lane_54);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_56_pack, input_FIFO_buf4_lane_55);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_56_pack, input_FIFO_buf4_lane_56);
  auto res_blurx7_32_update_0_sm8_1848 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_56_pack);

  hw_uint<48 > input_FIFO_buf4_lane_59_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_59_pack, input_FIFO_buf4_lane_57);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_59_pack, input_FIFO_buf4_lane_58);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_59_pack, input_FIFO_buf4_lane_59);
  auto res_blurx7_32_update_0_sm8_1950 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_59_pack);

  hw_uint<48 > input_FIFO_buf4_lane_62_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_62_pack, input_FIFO_buf4_lane_60);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_62_pack, input_FIFO_buf4_lane_61);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_62_pack, input_FIFO_buf4_lane_62);
  auto res_blurx7_32_update_0_sm8_2052 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_62_pack);

  hw_uint<48 > input_FIFO_buf4_lane_65_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_65_pack, input_FIFO_buf4_lane_63);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_65_pack, input_FIFO_buf4_lane_64);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_65_pack, input_FIFO_buf4_lane_65);
  auto res_blurx7_32_update_0_sm8_2154 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_65_pack);

  hw_uint<48 > input_FIFO_buf4_lane_68_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_68_pack, input_FIFO_buf4_lane_66);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_68_pack, input_FIFO_buf4_lane_67);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_68_pack, input_FIFO_buf4_lane_68);
  auto res_blurx7_32_update_0_sm8_2256 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_68_pack);

  hw_uint<48 > input_FIFO_buf4_lane_71_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_71_pack, input_FIFO_buf4_lane_69);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_71_pack, input_FIFO_buf4_lane_70);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_71_pack, input_FIFO_buf4_lane_71);
  auto res_blurx7_32_update_0_sm8_2358 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_71_pack);

  hw_uint<48 > input_FIFO_buf4_lane_74_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_74_pack, input_FIFO_buf4_lane_72);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_74_pack, input_FIFO_buf4_lane_73);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_74_pack, input_FIFO_buf4_lane_74);
  auto res_blurx7_32_update_0_sm8_2460 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_74_pack);

  hw_uint<48 > input_FIFO_buf4_lane_77_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_77_pack, input_FIFO_buf4_lane_75);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_77_pack, input_FIFO_buf4_lane_76);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_77_pack, input_FIFO_buf4_lane_77);
  auto res_blurx7_32_update_0_sm8_2562 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_77_pack);

  hw_uint<48 > input_FIFO_buf4_lane_80_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_80_pack, input_FIFO_buf4_lane_78);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_80_pack, input_FIFO_buf4_lane_79);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_80_pack, input_FIFO_buf4_lane_80);
  auto res_blurx7_32_update_0_sm8_2664 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_80_pack);

  hw_uint<48 > input_FIFO_buf4_lane_83_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_83_pack, input_FIFO_buf4_lane_81);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_83_pack, input_FIFO_buf4_lane_82);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_83_pack, input_FIFO_buf4_lane_83);
  auto res_blurx7_32_update_0_sm8_2766 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_83_pack);

  hw_uint<48 > input_FIFO_buf4_lane_86_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_86_pack, input_FIFO_buf4_lane_84);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_86_pack, input_FIFO_buf4_lane_85);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_86_pack, input_FIFO_buf4_lane_86);
  auto res_blurx7_32_update_0_sm8_2868 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_86_pack);

  hw_uint<48 > input_FIFO_buf4_lane_89_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_89_pack, input_FIFO_buf4_lane_87);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_89_pack, input_FIFO_buf4_lane_88);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_89_pack, input_FIFO_buf4_lane_89);
  auto res_blurx7_32_update_0_sm8_2970 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_89_pack);

  hw_uint<48 > input_FIFO_buf4_lane_92_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_92_pack, input_FIFO_buf4_lane_90);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_92_pack, input_FIFO_buf4_lane_91);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_92_pack, input_FIFO_buf4_lane_92);
  auto res_blurx7_32_update_0_sm8_3072 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_92_pack);

  hw_uint<48 > input_FIFO_buf4_lane_95_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_95_pack, input_FIFO_buf4_lane_93);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_95_pack, input_FIFO_buf4_lane_94);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_95_pack, input_FIFO_buf4_lane_95);
  auto res_blurx7_32_update_0_sm8_3174 = blurx7_32_generated_compute_unrolled_1(input_FIFO_buf4_lane_95_pack);
  hw_uint<512 > return_value269;
  set_at<0, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_012);
  set_at<16, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_114);
  set_at<32, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_216);
  set_at<48, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_318);
  set_at<64, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_420);
  set_at<80, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_522);
  set_at<96, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_624);
  set_at<112, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_726);
  set_at<128, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_828);
  set_at<144, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_930);
  set_at<160, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1032);
  set_at<176, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1134);
  set_at<192, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1236);
  set_at<208, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1338);
  set_at<224, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1440);
  set_at<240, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1542);
  set_at<256, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1644);
  set_at<272, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1746);
  set_at<288, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1848);
  set_at<304, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_1950);
  set_at<320, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2052);
  set_at<336, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2154);
  set_at<352, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2256);
  set_at<368, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2358);
  set_at<384, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2460);
  set_at<400, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2562);
  set_at<416, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2664);
  set_at<432, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2766);
  set_at<448, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2868);
  set_at<464, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_2970);
  set_at<480, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_3072);
  set_at<496, 512, 16>(return_value269, res_blurx7_32_update_0_sm8_3174);
  return return_value269;

}

hw_uint<512> input_ld1_cu271(hw_uint<16*32>& input) {
  return input;
}

hw_uint<512> input_1_cu273(hw_uint<16*32>& input_arg) {
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
  auto res_input_update_0_sm10_0140 = input_generated_compute_unrolled_1(input_arg_lane_0_pack);

  hw_uint<16 > input_arg_lane_1_pack;
  set_at<0, 16, 16>(input_arg_lane_1_pack, input_arg_lane_1);
  auto res_input_update_0_sm10_1142 = input_generated_compute_unrolled_1(input_arg_lane_1_pack);

  hw_uint<16 > input_arg_lane_2_pack;
  set_at<0, 16, 16>(input_arg_lane_2_pack, input_arg_lane_2);
  auto res_input_update_0_sm10_2144 = input_generated_compute_unrolled_1(input_arg_lane_2_pack);

  hw_uint<16 > input_arg_lane_3_pack;
  set_at<0, 16, 16>(input_arg_lane_3_pack, input_arg_lane_3);
  auto res_input_update_0_sm10_3146 = input_generated_compute_unrolled_1(input_arg_lane_3_pack);

  hw_uint<16 > input_arg_lane_4_pack;
  set_at<0, 16, 16>(input_arg_lane_4_pack, input_arg_lane_4);
  auto res_input_update_0_sm10_4148 = input_generated_compute_unrolled_1(input_arg_lane_4_pack);

  hw_uint<16 > input_arg_lane_5_pack;
  set_at<0, 16, 16>(input_arg_lane_5_pack, input_arg_lane_5);
  auto res_input_update_0_sm10_5150 = input_generated_compute_unrolled_1(input_arg_lane_5_pack);

  hw_uint<16 > input_arg_lane_6_pack;
  set_at<0, 16, 16>(input_arg_lane_6_pack, input_arg_lane_6);
  auto res_input_update_0_sm10_6152 = input_generated_compute_unrolled_1(input_arg_lane_6_pack);

  hw_uint<16 > input_arg_lane_7_pack;
  set_at<0, 16, 16>(input_arg_lane_7_pack, input_arg_lane_7);
  auto res_input_update_0_sm10_7154 = input_generated_compute_unrolled_1(input_arg_lane_7_pack);

  hw_uint<16 > input_arg_lane_8_pack;
  set_at<0, 16, 16>(input_arg_lane_8_pack, input_arg_lane_8);
  auto res_input_update_0_sm10_8156 = input_generated_compute_unrolled_1(input_arg_lane_8_pack);

  hw_uint<16 > input_arg_lane_9_pack;
  set_at<0, 16, 16>(input_arg_lane_9_pack, input_arg_lane_9);
  auto res_input_update_0_sm10_9158 = input_generated_compute_unrolled_1(input_arg_lane_9_pack);

  hw_uint<16 > input_arg_lane_10_pack;
  set_at<0, 16, 16>(input_arg_lane_10_pack, input_arg_lane_10);
  auto res_input_update_0_sm10_10160 = input_generated_compute_unrolled_1(input_arg_lane_10_pack);

  hw_uint<16 > input_arg_lane_11_pack;
  set_at<0, 16, 16>(input_arg_lane_11_pack, input_arg_lane_11);
  auto res_input_update_0_sm10_11162 = input_generated_compute_unrolled_1(input_arg_lane_11_pack);

  hw_uint<16 > input_arg_lane_12_pack;
  set_at<0, 16, 16>(input_arg_lane_12_pack, input_arg_lane_12);
  auto res_input_update_0_sm10_12164 = input_generated_compute_unrolled_1(input_arg_lane_12_pack);

  hw_uint<16 > input_arg_lane_13_pack;
  set_at<0, 16, 16>(input_arg_lane_13_pack, input_arg_lane_13);
  auto res_input_update_0_sm10_13166 = input_generated_compute_unrolled_1(input_arg_lane_13_pack);

  hw_uint<16 > input_arg_lane_14_pack;
  set_at<0, 16, 16>(input_arg_lane_14_pack, input_arg_lane_14);
  auto res_input_update_0_sm10_14168 = input_generated_compute_unrolled_1(input_arg_lane_14_pack);

  hw_uint<16 > input_arg_lane_15_pack;
  set_at<0, 16, 16>(input_arg_lane_15_pack, input_arg_lane_15);
  auto res_input_update_0_sm10_15170 = input_generated_compute_unrolled_1(input_arg_lane_15_pack);

  hw_uint<16 > input_arg_lane_16_pack;
  set_at<0, 16, 16>(input_arg_lane_16_pack, input_arg_lane_16);
  auto res_input_update_0_sm10_16172 = input_generated_compute_unrolled_1(input_arg_lane_16_pack);

  hw_uint<16 > input_arg_lane_17_pack;
  set_at<0, 16, 16>(input_arg_lane_17_pack, input_arg_lane_17);
  auto res_input_update_0_sm10_17174 = input_generated_compute_unrolled_1(input_arg_lane_17_pack);

  hw_uint<16 > input_arg_lane_18_pack;
  set_at<0, 16, 16>(input_arg_lane_18_pack, input_arg_lane_18);
  auto res_input_update_0_sm10_18176 = input_generated_compute_unrolled_1(input_arg_lane_18_pack);

  hw_uint<16 > input_arg_lane_19_pack;
  set_at<0, 16, 16>(input_arg_lane_19_pack, input_arg_lane_19);
  auto res_input_update_0_sm10_19178 = input_generated_compute_unrolled_1(input_arg_lane_19_pack);

  hw_uint<16 > input_arg_lane_20_pack;
  set_at<0, 16, 16>(input_arg_lane_20_pack, input_arg_lane_20);
  auto res_input_update_0_sm10_20180 = input_generated_compute_unrolled_1(input_arg_lane_20_pack);

  hw_uint<16 > input_arg_lane_21_pack;
  set_at<0, 16, 16>(input_arg_lane_21_pack, input_arg_lane_21);
  auto res_input_update_0_sm10_21182 = input_generated_compute_unrolled_1(input_arg_lane_21_pack);

  hw_uint<16 > input_arg_lane_22_pack;
  set_at<0, 16, 16>(input_arg_lane_22_pack, input_arg_lane_22);
  auto res_input_update_0_sm10_22184 = input_generated_compute_unrolled_1(input_arg_lane_22_pack);

  hw_uint<16 > input_arg_lane_23_pack;
  set_at<0, 16, 16>(input_arg_lane_23_pack, input_arg_lane_23);
  auto res_input_update_0_sm10_23186 = input_generated_compute_unrolled_1(input_arg_lane_23_pack);

  hw_uint<16 > input_arg_lane_24_pack;
  set_at<0, 16, 16>(input_arg_lane_24_pack, input_arg_lane_24);
  auto res_input_update_0_sm10_24188 = input_generated_compute_unrolled_1(input_arg_lane_24_pack);

  hw_uint<16 > input_arg_lane_25_pack;
  set_at<0, 16, 16>(input_arg_lane_25_pack, input_arg_lane_25);
  auto res_input_update_0_sm10_25190 = input_generated_compute_unrolled_1(input_arg_lane_25_pack);

  hw_uint<16 > input_arg_lane_26_pack;
  set_at<0, 16, 16>(input_arg_lane_26_pack, input_arg_lane_26);
  auto res_input_update_0_sm10_26192 = input_generated_compute_unrolled_1(input_arg_lane_26_pack);

  hw_uint<16 > input_arg_lane_27_pack;
  set_at<0, 16, 16>(input_arg_lane_27_pack, input_arg_lane_27);
  auto res_input_update_0_sm10_27194 = input_generated_compute_unrolled_1(input_arg_lane_27_pack);

  hw_uint<16 > input_arg_lane_28_pack;
  set_at<0, 16, 16>(input_arg_lane_28_pack, input_arg_lane_28);
  auto res_input_update_0_sm10_28196 = input_generated_compute_unrolled_1(input_arg_lane_28_pack);

  hw_uint<16 > input_arg_lane_29_pack;
  set_at<0, 16, 16>(input_arg_lane_29_pack, input_arg_lane_29);
  auto res_input_update_0_sm10_29198 = input_generated_compute_unrolled_1(input_arg_lane_29_pack);

  hw_uint<16 > input_arg_lane_30_pack;
  set_at<0, 16, 16>(input_arg_lane_30_pack, input_arg_lane_30);
  auto res_input_update_0_sm10_30200 = input_generated_compute_unrolled_1(input_arg_lane_30_pack);

  hw_uint<16 > input_arg_lane_31_pack;
  set_at<0, 16, 16>(input_arg_lane_31_pack, input_arg_lane_31);
  auto res_input_update_0_sm10_31202 = input_generated_compute_unrolled_1(input_arg_lane_31_pack);
  hw_uint<512 > return_value274;
  set_at<0, 512, 16>(return_value274, res_input_update_0_sm10_0140);
  set_at<16, 512, 16>(return_value274, res_input_update_0_sm10_1142);
  set_at<32, 512, 16>(return_value274, res_input_update_0_sm10_2144);
  set_at<48, 512, 16>(return_value274, res_input_update_0_sm10_3146);
  set_at<64, 512, 16>(return_value274, res_input_update_0_sm10_4148);
  set_at<80, 512, 16>(return_value274, res_input_update_0_sm10_5150);
  set_at<96, 512, 16>(return_value274, res_input_update_0_sm10_6152);
  set_at<112, 512, 16>(return_value274, res_input_update_0_sm10_7154);
  set_at<128, 512, 16>(return_value274, res_input_update_0_sm10_8156);
  set_at<144, 512, 16>(return_value274, res_input_update_0_sm10_9158);
  set_at<160, 512, 16>(return_value274, res_input_update_0_sm10_10160);
  set_at<176, 512, 16>(return_value274, res_input_update_0_sm10_11162);
  set_at<192, 512, 16>(return_value274, res_input_update_0_sm10_12164);
  set_at<208, 512, 16>(return_value274, res_input_update_0_sm10_13166);
  set_at<224, 512, 16>(return_value274, res_input_update_0_sm10_14168);
  set_at<240, 512, 16>(return_value274, res_input_update_0_sm10_15170);
  set_at<256, 512, 16>(return_value274, res_input_update_0_sm10_16172);
  set_at<272, 512, 16>(return_value274, res_input_update_0_sm10_17174);
  set_at<288, 512, 16>(return_value274, res_input_update_0_sm10_18176);
  set_at<304, 512, 16>(return_value274, res_input_update_0_sm10_19178);
  set_at<320, 512, 16>(return_value274, res_input_update_0_sm10_20180);
  set_at<336, 512, 16>(return_value274, res_input_update_0_sm10_21182);
  set_at<352, 512, 16>(return_value274, res_input_update_0_sm10_22184);
  set_at<368, 512, 16>(return_value274, res_input_update_0_sm10_23186);
  set_at<384, 512, 16>(return_value274, res_input_update_0_sm10_24188);
  set_at<400, 512, 16>(return_value274, res_input_update_0_sm10_25190);
  set_at<416, 512, 16>(return_value274, res_input_update_0_sm10_26192);
  set_at<432, 512, 16>(return_value274, res_input_update_0_sm10_27194);
  set_at<448, 512, 16>(return_value274, res_input_update_0_sm10_28196);
  set_at<464, 512, 16>(return_value274, res_input_update_0_sm10_29198);
  set_at<480, 512, 16>(return_value274, res_input_update_0_sm10_30200);
  set_at<496, 512, 16>(return_value274, res_input_update_0_sm10_31202);
  return return_value274;

}

hw_uint<512> input_to_gp_00_ld5_cu276(hw_uint<16*32>& input_to_gp_00) {
  return input_to_gp_00;
}

