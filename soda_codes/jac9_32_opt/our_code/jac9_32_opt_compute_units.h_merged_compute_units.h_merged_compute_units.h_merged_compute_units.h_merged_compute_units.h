#include "jac9_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> in_1_cu1105(hw_uint<16*32>& in_off_chip) {
  hw_uint<16> in_off_chip_lane_0 = in_off_chip.extract<0, 15>();
  hw_uint<16> in_off_chip_lane_1 = in_off_chip.extract<16, 31>();
  hw_uint<16> in_off_chip_lane_2 = in_off_chip.extract<32, 47>();
  hw_uint<16> in_off_chip_lane_3 = in_off_chip.extract<48, 63>();
  hw_uint<16> in_off_chip_lane_4 = in_off_chip.extract<64, 79>();
  hw_uint<16> in_off_chip_lane_5 = in_off_chip.extract<80, 95>();
  hw_uint<16> in_off_chip_lane_6 = in_off_chip.extract<96, 111>();
  hw_uint<16> in_off_chip_lane_7 = in_off_chip.extract<112, 127>();
  hw_uint<16> in_off_chip_lane_8 = in_off_chip.extract<128, 143>();
  hw_uint<16> in_off_chip_lane_9 = in_off_chip.extract<144, 159>();
  hw_uint<16> in_off_chip_lane_10 = in_off_chip.extract<160, 175>();
  hw_uint<16> in_off_chip_lane_11 = in_off_chip.extract<176, 191>();
  hw_uint<16> in_off_chip_lane_12 = in_off_chip.extract<192, 207>();
  hw_uint<16> in_off_chip_lane_13 = in_off_chip.extract<208, 223>();
  hw_uint<16> in_off_chip_lane_14 = in_off_chip.extract<224, 239>();
  hw_uint<16> in_off_chip_lane_15 = in_off_chip.extract<240, 255>();
  hw_uint<16> in_off_chip_lane_16 = in_off_chip.extract<256, 271>();
  hw_uint<16> in_off_chip_lane_17 = in_off_chip.extract<272, 287>();
  hw_uint<16> in_off_chip_lane_18 = in_off_chip.extract<288, 303>();
  hw_uint<16> in_off_chip_lane_19 = in_off_chip.extract<304, 319>();
  hw_uint<16> in_off_chip_lane_20 = in_off_chip.extract<320, 335>();
  hw_uint<16> in_off_chip_lane_21 = in_off_chip.extract<336, 351>();
  hw_uint<16> in_off_chip_lane_22 = in_off_chip.extract<352, 367>();
  hw_uint<16> in_off_chip_lane_23 = in_off_chip.extract<368, 383>();
  hw_uint<16> in_off_chip_lane_24 = in_off_chip.extract<384, 399>();
  hw_uint<16> in_off_chip_lane_25 = in_off_chip.extract<400, 415>();
  hw_uint<16> in_off_chip_lane_26 = in_off_chip.extract<416, 431>();
  hw_uint<16> in_off_chip_lane_27 = in_off_chip.extract<432, 447>();
  hw_uint<16> in_off_chip_lane_28 = in_off_chip.extract<448, 463>();
  hw_uint<16> in_off_chip_lane_29 = in_off_chip.extract<464, 479>();
  hw_uint<16> in_off_chip_lane_30 = in_off_chip.extract<480, 495>();
  hw_uint<16> in_off_chip_lane_31 = in_off_chip.extract<496, 511>();

	
  hw_uint<16 > in_off_chip_lane_0_pack;
  set_at<0, 16, 16>(in_off_chip_lane_0_pack, in_off_chip_lane_0);
  auto res_in_update_0_sm0_017 = in_generated_compute_unrolled_1(in_off_chip_lane_0_pack);

  hw_uint<16 > in_off_chip_lane_1_pack;
  set_at<0, 16, 16>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
  auto res_in_update_0_sm0_119 = in_generated_compute_unrolled_1(in_off_chip_lane_1_pack);

  hw_uint<16 > in_off_chip_lane_2_pack;
  set_at<0, 16, 16>(in_off_chip_lane_2_pack, in_off_chip_lane_2);
  auto res_in_update_0_sm0_221 = in_generated_compute_unrolled_1(in_off_chip_lane_2_pack);

  hw_uint<16 > in_off_chip_lane_3_pack;
  set_at<0, 16, 16>(in_off_chip_lane_3_pack, in_off_chip_lane_3);
  auto res_in_update_0_sm0_323 = in_generated_compute_unrolled_1(in_off_chip_lane_3_pack);

  hw_uint<16 > in_off_chip_lane_4_pack;
  set_at<0, 16, 16>(in_off_chip_lane_4_pack, in_off_chip_lane_4);
  auto res_in_update_0_sm0_425 = in_generated_compute_unrolled_1(in_off_chip_lane_4_pack);

  hw_uint<16 > in_off_chip_lane_5_pack;
  set_at<0, 16, 16>(in_off_chip_lane_5_pack, in_off_chip_lane_5);
  auto res_in_update_0_sm0_527 = in_generated_compute_unrolled_1(in_off_chip_lane_5_pack);

  hw_uint<16 > in_off_chip_lane_6_pack;
  set_at<0, 16, 16>(in_off_chip_lane_6_pack, in_off_chip_lane_6);
  auto res_in_update_0_sm0_629 = in_generated_compute_unrolled_1(in_off_chip_lane_6_pack);

  hw_uint<16 > in_off_chip_lane_7_pack;
  set_at<0, 16, 16>(in_off_chip_lane_7_pack, in_off_chip_lane_7);
  auto res_in_update_0_sm0_731 = in_generated_compute_unrolled_1(in_off_chip_lane_7_pack);

  hw_uint<16 > in_off_chip_lane_8_pack;
  set_at<0, 16, 16>(in_off_chip_lane_8_pack, in_off_chip_lane_8);
  auto res_in_update_0_sm0_833 = in_generated_compute_unrolled_1(in_off_chip_lane_8_pack);

  hw_uint<16 > in_off_chip_lane_9_pack;
  set_at<0, 16, 16>(in_off_chip_lane_9_pack, in_off_chip_lane_9);
  auto res_in_update_0_sm0_935 = in_generated_compute_unrolled_1(in_off_chip_lane_9_pack);

  hw_uint<16 > in_off_chip_lane_10_pack;
  set_at<0, 16, 16>(in_off_chip_lane_10_pack, in_off_chip_lane_10);
  auto res_in_update_0_sm0_1037 = in_generated_compute_unrolled_1(in_off_chip_lane_10_pack);

  hw_uint<16 > in_off_chip_lane_11_pack;
  set_at<0, 16, 16>(in_off_chip_lane_11_pack, in_off_chip_lane_11);
  auto res_in_update_0_sm0_1139 = in_generated_compute_unrolled_1(in_off_chip_lane_11_pack);

  hw_uint<16 > in_off_chip_lane_12_pack;
  set_at<0, 16, 16>(in_off_chip_lane_12_pack, in_off_chip_lane_12);
  auto res_in_update_0_sm0_1241 = in_generated_compute_unrolled_1(in_off_chip_lane_12_pack);

  hw_uint<16 > in_off_chip_lane_13_pack;
  set_at<0, 16, 16>(in_off_chip_lane_13_pack, in_off_chip_lane_13);
  auto res_in_update_0_sm0_1343 = in_generated_compute_unrolled_1(in_off_chip_lane_13_pack);

  hw_uint<16 > in_off_chip_lane_14_pack;
  set_at<0, 16, 16>(in_off_chip_lane_14_pack, in_off_chip_lane_14);
  auto res_in_update_0_sm0_1445 = in_generated_compute_unrolled_1(in_off_chip_lane_14_pack);

  hw_uint<16 > in_off_chip_lane_15_pack;
  set_at<0, 16, 16>(in_off_chip_lane_15_pack, in_off_chip_lane_15);
  auto res_in_update_0_sm0_1547 = in_generated_compute_unrolled_1(in_off_chip_lane_15_pack);

  hw_uint<16 > in_off_chip_lane_16_pack;
  set_at<0, 16, 16>(in_off_chip_lane_16_pack, in_off_chip_lane_16);
  auto res_in_update_0_sm0_1649 = in_generated_compute_unrolled_1(in_off_chip_lane_16_pack);

  hw_uint<16 > in_off_chip_lane_17_pack;
  set_at<0, 16, 16>(in_off_chip_lane_17_pack, in_off_chip_lane_17);
  auto res_in_update_0_sm0_1751 = in_generated_compute_unrolled_1(in_off_chip_lane_17_pack);

  hw_uint<16 > in_off_chip_lane_18_pack;
  set_at<0, 16, 16>(in_off_chip_lane_18_pack, in_off_chip_lane_18);
  auto res_in_update_0_sm0_1853 = in_generated_compute_unrolled_1(in_off_chip_lane_18_pack);

  hw_uint<16 > in_off_chip_lane_19_pack;
  set_at<0, 16, 16>(in_off_chip_lane_19_pack, in_off_chip_lane_19);
  auto res_in_update_0_sm0_1955 = in_generated_compute_unrolled_1(in_off_chip_lane_19_pack);

  hw_uint<16 > in_off_chip_lane_20_pack;
  set_at<0, 16, 16>(in_off_chip_lane_20_pack, in_off_chip_lane_20);
  auto res_in_update_0_sm0_2057 = in_generated_compute_unrolled_1(in_off_chip_lane_20_pack);

  hw_uint<16 > in_off_chip_lane_21_pack;
  set_at<0, 16, 16>(in_off_chip_lane_21_pack, in_off_chip_lane_21);
  auto res_in_update_0_sm0_2159 = in_generated_compute_unrolled_1(in_off_chip_lane_21_pack);

  hw_uint<16 > in_off_chip_lane_22_pack;
  set_at<0, 16, 16>(in_off_chip_lane_22_pack, in_off_chip_lane_22);
  auto res_in_update_0_sm0_2261 = in_generated_compute_unrolled_1(in_off_chip_lane_22_pack);

  hw_uint<16 > in_off_chip_lane_23_pack;
  set_at<0, 16, 16>(in_off_chip_lane_23_pack, in_off_chip_lane_23);
  auto res_in_update_0_sm0_2363 = in_generated_compute_unrolled_1(in_off_chip_lane_23_pack);

  hw_uint<16 > in_off_chip_lane_24_pack;
  set_at<0, 16, 16>(in_off_chip_lane_24_pack, in_off_chip_lane_24);
  auto res_in_update_0_sm0_2465 = in_generated_compute_unrolled_1(in_off_chip_lane_24_pack);

  hw_uint<16 > in_off_chip_lane_25_pack;
  set_at<0, 16, 16>(in_off_chip_lane_25_pack, in_off_chip_lane_25);
  auto res_in_update_0_sm0_2567 = in_generated_compute_unrolled_1(in_off_chip_lane_25_pack);

  hw_uint<16 > in_off_chip_lane_26_pack;
  set_at<0, 16, 16>(in_off_chip_lane_26_pack, in_off_chip_lane_26);
  auto res_in_update_0_sm0_2669 = in_generated_compute_unrolled_1(in_off_chip_lane_26_pack);

  hw_uint<16 > in_off_chip_lane_27_pack;
  set_at<0, 16, 16>(in_off_chip_lane_27_pack, in_off_chip_lane_27);
  auto res_in_update_0_sm0_2771 = in_generated_compute_unrolled_1(in_off_chip_lane_27_pack);

  hw_uint<16 > in_off_chip_lane_28_pack;
  set_at<0, 16, 16>(in_off_chip_lane_28_pack, in_off_chip_lane_28);
  auto res_in_update_0_sm0_2873 = in_generated_compute_unrolled_1(in_off_chip_lane_28_pack);

  hw_uint<16 > in_off_chip_lane_29_pack;
  set_at<0, 16, 16>(in_off_chip_lane_29_pack, in_off_chip_lane_29);
  auto res_in_update_0_sm0_2975 = in_generated_compute_unrolled_1(in_off_chip_lane_29_pack);

  hw_uint<16 > in_off_chip_lane_30_pack;
  set_at<0, 16, 16>(in_off_chip_lane_30_pack, in_off_chip_lane_30);
  auto res_in_update_0_sm0_3077 = in_generated_compute_unrolled_1(in_off_chip_lane_30_pack);

  hw_uint<16 > in_off_chip_lane_31_pack;
  set_at<0, 16, 16>(in_off_chip_lane_31_pack, in_off_chip_lane_31);
  auto res_in_update_0_sm0_3179 = in_generated_compute_unrolled_1(in_off_chip_lane_31_pack);
  hw_uint<512 > return_value1106;
  set_at<0, 512, 16>(return_value1106, res_in_update_0_sm0_017);
  set_at<16, 512, 16>(return_value1106, res_in_update_0_sm0_119);
  set_at<32, 512, 16>(return_value1106, res_in_update_0_sm0_221);
  set_at<48, 512, 16>(return_value1106, res_in_update_0_sm0_323);
  set_at<64, 512, 16>(return_value1106, res_in_update_0_sm0_425);
  set_at<80, 512, 16>(return_value1106, res_in_update_0_sm0_527);
  set_at<96, 512, 16>(return_value1106, res_in_update_0_sm0_629);
  set_at<112, 512, 16>(return_value1106, res_in_update_0_sm0_731);
  set_at<128, 512, 16>(return_value1106, res_in_update_0_sm0_833);
  set_at<144, 512, 16>(return_value1106, res_in_update_0_sm0_935);
  set_at<160, 512, 16>(return_value1106, res_in_update_0_sm0_1037);
  set_at<176, 512, 16>(return_value1106, res_in_update_0_sm0_1139);
  set_at<192, 512, 16>(return_value1106, res_in_update_0_sm0_1241);
  set_at<208, 512, 16>(return_value1106, res_in_update_0_sm0_1343);
  set_at<224, 512, 16>(return_value1106, res_in_update_0_sm0_1445);
  set_at<240, 512, 16>(return_value1106, res_in_update_0_sm0_1547);
  set_at<256, 512, 16>(return_value1106, res_in_update_0_sm0_1649);
  set_at<272, 512, 16>(return_value1106, res_in_update_0_sm0_1751);
  set_at<288, 512, 16>(return_value1106, res_in_update_0_sm0_1853);
  set_at<304, 512, 16>(return_value1106, res_in_update_0_sm0_1955);
  set_at<320, 512, 16>(return_value1106, res_in_update_0_sm0_2057);
  set_at<336, 512, 16>(return_value1106, res_in_update_0_sm0_2159);
  set_at<352, 512, 16>(return_value1106, res_in_update_0_sm0_2261);
  set_at<368, 512, 16>(return_value1106, res_in_update_0_sm0_2363);
  set_at<384, 512, 16>(return_value1106, res_in_update_0_sm0_2465);
  set_at<400, 512, 16>(return_value1106, res_in_update_0_sm0_2567);
  set_at<416, 512, 16>(return_value1106, res_in_update_0_sm0_2669);
  set_at<432, 512, 16>(return_value1106, res_in_update_0_sm0_2771);
  set_at<448, 512, 16>(return_value1106, res_in_update_0_sm0_2873);
  set_at<464, 512, 16>(return_value1106, res_in_update_0_sm0_2975);
  set_at<480, 512, 16>(return_value1106, res_in_update_0_sm0_3077);
  set_at<496, 512, 16>(return_value1106, res_in_update_0_sm0_3179);
  return return_value1106;

}

hw_uint<512> stg0_1_cu1108(hw_uint<16*128>& in) {
  hw_uint<16> in_lane_0 = in.extract<0, 15>();
  hw_uint<16> in_lane_1 = in.extract<16, 31>();
  hw_uint<16> in_lane_2 = in.extract<32, 47>();
  hw_uint<16> in_lane_3 = in.extract<48, 63>();
  hw_uint<16> in_lane_4 = in.extract<64, 79>();
  hw_uint<16> in_lane_5 = in.extract<80, 95>();
  hw_uint<16> in_lane_6 = in.extract<96, 111>();
  hw_uint<16> in_lane_7 = in.extract<112, 127>();
  hw_uint<16> in_lane_8 = in.extract<128, 143>();
  hw_uint<16> in_lane_9 = in.extract<144, 159>();
  hw_uint<16> in_lane_10 = in.extract<160, 175>();
  hw_uint<16> in_lane_11 = in.extract<176, 191>();
  hw_uint<16> in_lane_12 = in.extract<192, 207>();
  hw_uint<16> in_lane_13 = in.extract<208, 223>();
  hw_uint<16> in_lane_14 = in.extract<224, 239>();
  hw_uint<16> in_lane_15 = in.extract<240, 255>();
  hw_uint<16> in_lane_16 = in.extract<256, 271>();
  hw_uint<16> in_lane_17 = in.extract<272, 287>();
  hw_uint<16> in_lane_18 = in.extract<288, 303>();
  hw_uint<16> in_lane_19 = in.extract<304, 319>();
  hw_uint<16> in_lane_20 = in.extract<320, 335>();
  hw_uint<16> in_lane_21 = in.extract<336, 351>();
  hw_uint<16> in_lane_22 = in.extract<352, 367>();
  hw_uint<16> in_lane_23 = in.extract<368, 383>();
  hw_uint<16> in_lane_24 = in.extract<384, 399>();
  hw_uint<16> in_lane_25 = in.extract<400, 415>();
  hw_uint<16> in_lane_26 = in.extract<416, 431>();
  hw_uint<16> in_lane_27 = in.extract<432, 447>();
  hw_uint<16> in_lane_28 = in.extract<448, 463>();
  hw_uint<16> in_lane_29 = in.extract<464, 479>();
  hw_uint<16> in_lane_30 = in.extract<480, 495>();
  hw_uint<16> in_lane_31 = in.extract<496, 511>();
  hw_uint<16> in_lane_32 = in.extract<512, 527>();
  hw_uint<16> in_lane_33 = in.extract<528, 543>();
  hw_uint<16> in_lane_34 = in.extract<544, 559>();
  hw_uint<16> in_lane_35 = in.extract<560, 575>();
  hw_uint<16> in_lane_36 = in.extract<576, 591>();
  hw_uint<16> in_lane_37 = in.extract<592, 607>();
  hw_uint<16> in_lane_38 = in.extract<608, 623>();
  hw_uint<16> in_lane_39 = in.extract<624, 639>();
  hw_uint<16> in_lane_40 = in.extract<640, 655>();
  hw_uint<16> in_lane_41 = in.extract<656, 671>();
  hw_uint<16> in_lane_42 = in.extract<672, 687>();
  hw_uint<16> in_lane_43 = in.extract<688, 703>();
  hw_uint<16> in_lane_44 = in.extract<704, 719>();
  hw_uint<16> in_lane_45 = in.extract<720, 735>();
  hw_uint<16> in_lane_46 = in.extract<736, 751>();
  hw_uint<16> in_lane_47 = in.extract<752, 767>();
  hw_uint<16> in_lane_48 = in.extract<768, 783>();
  hw_uint<16> in_lane_49 = in.extract<784, 799>();
  hw_uint<16> in_lane_50 = in.extract<800, 815>();
  hw_uint<16> in_lane_51 = in.extract<816, 831>();
  hw_uint<16> in_lane_52 = in.extract<832, 847>();
  hw_uint<16> in_lane_53 = in.extract<848, 863>();
  hw_uint<16> in_lane_54 = in.extract<864, 879>();
  hw_uint<16> in_lane_55 = in.extract<880, 895>();
  hw_uint<16> in_lane_56 = in.extract<896, 911>();
  hw_uint<16> in_lane_57 = in.extract<912, 927>();
  hw_uint<16> in_lane_58 = in.extract<928, 943>();
  hw_uint<16> in_lane_59 = in.extract<944, 959>();
  hw_uint<16> in_lane_60 = in.extract<960, 975>();
  hw_uint<16> in_lane_61 = in.extract<976, 991>();
  hw_uint<16> in_lane_62 = in.extract<992, 1007>();
  hw_uint<16> in_lane_63 = in.extract<1008, 1023>();
  hw_uint<16> in_lane_64 = in.extract<1024, 1039>();
  hw_uint<16> in_lane_65 = in.extract<1040, 1055>();
  hw_uint<16> in_lane_66 = in.extract<1056, 1071>();
  hw_uint<16> in_lane_67 = in.extract<1072, 1087>();
  hw_uint<16> in_lane_68 = in.extract<1088, 1103>();
  hw_uint<16> in_lane_69 = in.extract<1104, 1119>();
  hw_uint<16> in_lane_70 = in.extract<1120, 1135>();
  hw_uint<16> in_lane_71 = in.extract<1136, 1151>();
  hw_uint<16> in_lane_72 = in.extract<1152, 1167>();
  hw_uint<16> in_lane_73 = in.extract<1168, 1183>();
  hw_uint<16> in_lane_74 = in.extract<1184, 1199>();
  hw_uint<16> in_lane_75 = in.extract<1200, 1215>();
  hw_uint<16> in_lane_76 = in.extract<1216, 1231>();
  hw_uint<16> in_lane_77 = in.extract<1232, 1247>();
  hw_uint<16> in_lane_78 = in.extract<1248, 1263>();
  hw_uint<16> in_lane_79 = in.extract<1264, 1279>();
  hw_uint<16> in_lane_80 = in.extract<1280, 1295>();
  hw_uint<16> in_lane_81 = in.extract<1296, 1311>();
  hw_uint<16> in_lane_82 = in.extract<1312, 1327>();
  hw_uint<16> in_lane_83 = in.extract<1328, 1343>();
  hw_uint<16> in_lane_84 = in.extract<1344, 1359>();
  hw_uint<16> in_lane_85 = in.extract<1360, 1375>();
  hw_uint<16> in_lane_86 = in.extract<1376, 1391>();
  hw_uint<16> in_lane_87 = in.extract<1392, 1407>();
  hw_uint<16> in_lane_88 = in.extract<1408, 1423>();
  hw_uint<16> in_lane_89 = in.extract<1424, 1439>();
  hw_uint<16> in_lane_90 = in.extract<1440, 1455>();
  hw_uint<16> in_lane_91 = in.extract<1456, 1471>();
  hw_uint<16> in_lane_92 = in.extract<1472, 1487>();
  hw_uint<16> in_lane_93 = in.extract<1488, 1503>();
  hw_uint<16> in_lane_94 = in.extract<1504, 1519>();
  hw_uint<16> in_lane_95 = in.extract<1520, 1535>();
  hw_uint<16> in_lane_96 = in.extract<1536, 1551>();
  hw_uint<16> in_lane_97 = in.extract<1552, 1567>();
  hw_uint<16> in_lane_98 = in.extract<1568, 1583>();
  hw_uint<16> in_lane_99 = in.extract<1584, 1599>();
  hw_uint<16> in_lane_100 = in.extract<1600, 1615>();
  hw_uint<16> in_lane_101 = in.extract<1616, 1631>();
  hw_uint<16> in_lane_102 = in.extract<1632, 1647>();
  hw_uint<16> in_lane_103 = in.extract<1648, 1663>();
  hw_uint<16> in_lane_104 = in.extract<1664, 1679>();
  hw_uint<16> in_lane_105 = in.extract<1680, 1695>();
  hw_uint<16> in_lane_106 = in.extract<1696, 1711>();
  hw_uint<16> in_lane_107 = in.extract<1712, 1727>();
  hw_uint<16> in_lane_108 = in.extract<1728, 1743>();
  hw_uint<16> in_lane_109 = in.extract<1744, 1759>();
  hw_uint<16> in_lane_110 = in.extract<1760, 1775>();
  hw_uint<16> in_lane_111 = in.extract<1776, 1791>();
  hw_uint<16> in_lane_112 = in.extract<1792, 1807>();
  hw_uint<16> in_lane_113 = in.extract<1808, 1823>();
  hw_uint<16> in_lane_114 = in.extract<1824, 1839>();
  hw_uint<16> in_lane_115 = in.extract<1840, 1855>();
  hw_uint<16> in_lane_116 = in.extract<1856, 1871>();
  hw_uint<16> in_lane_117 = in.extract<1872, 1887>();
  hw_uint<16> in_lane_118 = in.extract<1888, 1903>();
  hw_uint<16> in_lane_119 = in.extract<1904, 1919>();
  hw_uint<16> in_lane_120 = in.extract<1920, 1935>();
  hw_uint<16> in_lane_121 = in.extract<1936, 1951>();
  hw_uint<16> in_lane_122 = in.extract<1952, 1967>();
  hw_uint<16> in_lane_123 = in.extract<1968, 1983>();
  hw_uint<16> in_lane_124 = in.extract<1984, 1999>();
  hw_uint<16> in_lane_125 = in.extract<2000, 2015>();
  hw_uint<16> in_lane_126 = in.extract<2016, 2031>();
  hw_uint<16> in_lane_127 = in.extract<2032, 2047>();

	
  hw_uint<64 > in_lane_3_pack;
  set_at<0, 64, 16>(in_lane_3_pack, in_lane_0);
  set_at<16, 64, 16>(in_lane_3_pack, in_lane_1);
  set_at<32, 64, 16>(in_lane_3_pack, in_lane_2);
  set_at<48, 64, 16>(in_lane_3_pack, in_lane_3);
  auto res_stg0_update_0_sm1_081 = stg0_generated_compute_unrolled_1(in_lane_3_pack);

  hw_uint<64 > in_lane_7_pack;
  set_at<0, 64, 16>(in_lane_7_pack, in_lane_4);
  set_at<16, 64, 16>(in_lane_7_pack, in_lane_5);
  set_at<32, 64, 16>(in_lane_7_pack, in_lane_6);
  set_at<48, 64, 16>(in_lane_7_pack, in_lane_7);
  auto res_stg0_update_0_sm1_183 = stg0_generated_compute_unrolled_1(in_lane_7_pack);

  hw_uint<64 > in_lane_11_pack;
  set_at<0, 64, 16>(in_lane_11_pack, in_lane_8);
  set_at<16, 64, 16>(in_lane_11_pack, in_lane_9);
  set_at<32, 64, 16>(in_lane_11_pack, in_lane_10);
  set_at<48, 64, 16>(in_lane_11_pack, in_lane_11);
  auto res_stg0_update_0_sm1_285 = stg0_generated_compute_unrolled_1(in_lane_11_pack);

  hw_uint<64 > in_lane_15_pack;
  set_at<0, 64, 16>(in_lane_15_pack, in_lane_12);
  set_at<16, 64, 16>(in_lane_15_pack, in_lane_13);
  set_at<32, 64, 16>(in_lane_15_pack, in_lane_14);
  set_at<48, 64, 16>(in_lane_15_pack, in_lane_15);
  auto res_stg0_update_0_sm1_387 = stg0_generated_compute_unrolled_1(in_lane_15_pack);

  hw_uint<64 > in_lane_19_pack;
  set_at<0, 64, 16>(in_lane_19_pack, in_lane_16);
  set_at<16, 64, 16>(in_lane_19_pack, in_lane_17);
  set_at<32, 64, 16>(in_lane_19_pack, in_lane_18);
  set_at<48, 64, 16>(in_lane_19_pack, in_lane_19);
  auto res_stg0_update_0_sm1_489 = stg0_generated_compute_unrolled_1(in_lane_19_pack);

  hw_uint<64 > in_lane_23_pack;
  set_at<0, 64, 16>(in_lane_23_pack, in_lane_20);
  set_at<16, 64, 16>(in_lane_23_pack, in_lane_21);
  set_at<32, 64, 16>(in_lane_23_pack, in_lane_22);
  set_at<48, 64, 16>(in_lane_23_pack, in_lane_23);
  auto res_stg0_update_0_sm1_591 = stg0_generated_compute_unrolled_1(in_lane_23_pack);

  hw_uint<64 > in_lane_27_pack;
  set_at<0, 64, 16>(in_lane_27_pack, in_lane_24);
  set_at<16, 64, 16>(in_lane_27_pack, in_lane_25);
  set_at<32, 64, 16>(in_lane_27_pack, in_lane_26);
  set_at<48, 64, 16>(in_lane_27_pack, in_lane_27);
  auto res_stg0_update_0_sm1_693 = stg0_generated_compute_unrolled_1(in_lane_27_pack);

  hw_uint<64 > in_lane_31_pack;
  set_at<0, 64, 16>(in_lane_31_pack, in_lane_28);
  set_at<16, 64, 16>(in_lane_31_pack, in_lane_29);
  set_at<32, 64, 16>(in_lane_31_pack, in_lane_30);
  set_at<48, 64, 16>(in_lane_31_pack, in_lane_31);
  auto res_stg0_update_0_sm1_795 = stg0_generated_compute_unrolled_1(in_lane_31_pack);

  hw_uint<64 > in_lane_35_pack;
  set_at<0, 64, 16>(in_lane_35_pack, in_lane_32);
  set_at<16, 64, 16>(in_lane_35_pack, in_lane_33);
  set_at<32, 64, 16>(in_lane_35_pack, in_lane_34);
  set_at<48, 64, 16>(in_lane_35_pack, in_lane_35);
  auto res_stg0_update_0_sm1_897 = stg0_generated_compute_unrolled_1(in_lane_35_pack);

  hw_uint<64 > in_lane_39_pack;
  set_at<0, 64, 16>(in_lane_39_pack, in_lane_36);
  set_at<16, 64, 16>(in_lane_39_pack, in_lane_37);
  set_at<32, 64, 16>(in_lane_39_pack, in_lane_38);
  set_at<48, 64, 16>(in_lane_39_pack, in_lane_39);
  auto res_stg0_update_0_sm1_999 = stg0_generated_compute_unrolled_1(in_lane_39_pack);

  hw_uint<64 > in_lane_43_pack;
  set_at<0, 64, 16>(in_lane_43_pack, in_lane_40);
  set_at<16, 64, 16>(in_lane_43_pack, in_lane_41);
  set_at<32, 64, 16>(in_lane_43_pack, in_lane_42);
  set_at<48, 64, 16>(in_lane_43_pack, in_lane_43);
  auto res_stg0_update_0_sm1_10101 = stg0_generated_compute_unrolled_1(in_lane_43_pack);

  hw_uint<64 > in_lane_47_pack;
  set_at<0, 64, 16>(in_lane_47_pack, in_lane_44);
  set_at<16, 64, 16>(in_lane_47_pack, in_lane_45);
  set_at<32, 64, 16>(in_lane_47_pack, in_lane_46);
  set_at<48, 64, 16>(in_lane_47_pack, in_lane_47);
  auto res_stg0_update_0_sm1_11103 = stg0_generated_compute_unrolled_1(in_lane_47_pack);

  hw_uint<64 > in_lane_51_pack;
  set_at<0, 64, 16>(in_lane_51_pack, in_lane_48);
  set_at<16, 64, 16>(in_lane_51_pack, in_lane_49);
  set_at<32, 64, 16>(in_lane_51_pack, in_lane_50);
  set_at<48, 64, 16>(in_lane_51_pack, in_lane_51);
  auto res_stg0_update_0_sm1_12105 = stg0_generated_compute_unrolled_1(in_lane_51_pack);

  hw_uint<64 > in_lane_55_pack;
  set_at<0, 64, 16>(in_lane_55_pack, in_lane_52);
  set_at<16, 64, 16>(in_lane_55_pack, in_lane_53);
  set_at<32, 64, 16>(in_lane_55_pack, in_lane_54);
  set_at<48, 64, 16>(in_lane_55_pack, in_lane_55);
  auto res_stg0_update_0_sm1_13107 = stg0_generated_compute_unrolled_1(in_lane_55_pack);

  hw_uint<64 > in_lane_59_pack;
  set_at<0, 64, 16>(in_lane_59_pack, in_lane_56);
  set_at<16, 64, 16>(in_lane_59_pack, in_lane_57);
  set_at<32, 64, 16>(in_lane_59_pack, in_lane_58);
  set_at<48, 64, 16>(in_lane_59_pack, in_lane_59);
  auto res_stg0_update_0_sm1_14109 = stg0_generated_compute_unrolled_1(in_lane_59_pack);

  hw_uint<64 > in_lane_63_pack;
  set_at<0, 64, 16>(in_lane_63_pack, in_lane_60);
  set_at<16, 64, 16>(in_lane_63_pack, in_lane_61);
  set_at<32, 64, 16>(in_lane_63_pack, in_lane_62);
  set_at<48, 64, 16>(in_lane_63_pack, in_lane_63);
  auto res_stg0_update_0_sm1_15111 = stg0_generated_compute_unrolled_1(in_lane_63_pack);

  hw_uint<64 > in_lane_67_pack;
  set_at<0, 64, 16>(in_lane_67_pack, in_lane_64);
  set_at<16, 64, 16>(in_lane_67_pack, in_lane_65);
  set_at<32, 64, 16>(in_lane_67_pack, in_lane_66);
  set_at<48, 64, 16>(in_lane_67_pack, in_lane_67);
  auto res_stg0_update_0_sm1_16113 = stg0_generated_compute_unrolled_1(in_lane_67_pack);

  hw_uint<64 > in_lane_71_pack;
  set_at<0, 64, 16>(in_lane_71_pack, in_lane_68);
  set_at<16, 64, 16>(in_lane_71_pack, in_lane_69);
  set_at<32, 64, 16>(in_lane_71_pack, in_lane_70);
  set_at<48, 64, 16>(in_lane_71_pack, in_lane_71);
  auto res_stg0_update_0_sm1_17115 = stg0_generated_compute_unrolled_1(in_lane_71_pack);

  hw_uint<64 > in_lane_75_pack;
  set_at<0, 64, 16>(in_lane_75_pack, in_lane_72);
  set_at<16, 64, 16>(in_lane_75_pack, in_lane_73);
  set_at<32, 64, 16>(in_lane_75_pack, in_lane_74);
  set_at<48, 64, 16>(in_lane_75_pack, in_lane_75);
  auto res_stg0_update_0_sm1_18117 = stg0_generated_compute_unrolled_1(in_lane_75_pack);

  hw_uint<64 > in_lane_79_pack;
  set_at<0, 64, 16>(in_lane_79_pack, in_lane_76);
  set_at<16, 64, 16>(in_lane_79_pack, in_lane_77);
  set_at<32, 64, 16>(in_lane_79_pack, in_lane_78);
  set_at<48, 64, 16>(in_lane_79_pack, in_lane_79);
  auto res_stg0_update_0_sm1_19119 = stg0_generated_compute_unrolled_1(in_lane_79_pack);

  hw_uint<64 > in_lane_83_pack;
  set_at<0, 64, 16>(in_lane_83_pack, in_lane_80);
  set_at<16, 64, 16>(in_lane_83_pack, in_lane_81);
  set_at<32, 64, 16>(in_lane_83_pack, in_lane_82);
  set_at<48, 64, 16>(in_lane_83_pack, in_lane_83);
  auto res_stg0_update_0_sm1_20121 = stg0_generated_compute_unrolled_1(in_lane_83_pack);

  hw_uint<64 > in_lane_87_pack;
  set_at<0, 64, 16>(in_lane_87_pack, in_lane_84);
  set_at<16, 64, 16>(in_lane_87_pack, in_lane_85);
  set_at<32, 64, 16>(in_lane_87_pack, in_lane_86);
  set_at<48, 64, 16>(in_lane_87_pack, in_lane_87);
  auto res_stg0_update_0_sm1_21123 = stg0_generated_compute_unrolled_1(in_lane_87_pack);

  hw_uint<64 > in_lane_91_pack;
  set_at<0, 64, 16>(in_lane_91_pack, in_lane_88);
  set_at<16, 64, 16>(in_lane_91_pack, in_lane_89);
  set_at<32, 64, 16>(in_lane_91_pack, in_lane_90);
  set_at<48, 64, 16>(in_lane_91_pack, in_lane_91);
  auto res_stg0_update_0_sm1_22125 = stg0_generated_compute_unrolled_1(in_lane_91_pack);

  hw_uint<64 > in_lane_95_pack;
  set_at<0, 64, 16>(in_lane_95_pack, in_lane_92);
  set_at<16, 64, 16>(in_lane_95_pack, in_lane_93);
  set_at<32, 64, 16>(in_lane_95_pack, in_lane_94);
  set_at<48, 64, 16>(in_lane_95_pack, in_lane_95);
  auto res_stg0_update_0_sm1_23127 = stg0_generated_compute_unrolled_1(in_lane_95_pack);

  hw_uint<64 > in_lane_99_pack;
  set_at<0, 64, 16>(in_lane_99_pack, in_lane_96);
  set_at<16, 64, 16>(in_lane_99_pack, in_lane_97);
  set_at<32, 64, 16>(in_lane_99_pack, in_lane_98);
  set_at<48, 64, 16>(in_lane_99_pack, in_lane_99);
  auto res_stg0_update_0_sm1_24129 = stg0_generated_compute_unrolled_1(in_lane_99_pack);

  hw_uint<64 > in_lane_103_pack;
  set_at<0, 64, 16>(in_lane_103_pack, in_lane_100);
  set_at<16, 64, 16>(in_lane_103_pack, in_lane_101);
  set_at<32, 64, 16>(in_lane_103_pack, in_lane_102);
  set_at<48, 64, 16>(in_lane_103_pack, in_lane_103);
  auto res_stg0_update_0_sm1_25131 = stg0_generated_compute_unrolled_1(in_lane_103_pack);

  hw_uint<64 > in_lane_107_pack;
  set_at<0, 64, 16>(in_lane_107_pack, in_lane_104);
  set_at<16, 64, 16>(in_lane_107_pack, in_lane_105);
  set_at<32, 64, 16>(in_lane_107_pack, in_lane_106);
  set_at<48, 64, 16>(in_lane_107_pack, in_lane_107);
  auto res_stg0_update_0_sm1_26133 = stg0_generated_compute_unrolled_1(in_lane_107_pack);

  hw_uint<64 > in_lane_111_pack;
  set_at<0, 64, 16>(in_lane_111_pack, in_lane_108);
  set_at<16, 64, 16>(in_lane_111_pack, in_lane_109);
  set_at<32, 64, 16>(in_lane_111_pack, in_lane_110);
  set_at<48, 64, 16>(in_lane_111_pack, in_lane_111);
  auto res_stg0_update_0_sm1_27135 = stg0_generated_compute_unrolled_1(in_lane_111_pack);

  hw_uint<64 > in_lane_115_pack;
  set_at<0, 64, 16>(in_lane_115_pack, in_lane_112);
  set_at<16, 64, 16>(in_lane_115_pack, in_lane_113);
  set_at<32, 64, 16>(in_lane_115_pack, in_lane_114);
  set_at<48, 64, 16>(in_lane_115_pack, in_lane_115);
  auto res_stg0_update_0_sm1_28137 = stg0_generated_compute_unrolled_1(in_lane_115_pack);

  hw_uint<64 > in_lane_119_pack;
  set_at<0, 64, 16>(in_lane_119_pack, in_lane_116);
  set_at<16, 64, 16>(in_lane_119_pack, in_lane_117);
  set_at<32, 64, 16>(in_lane_119_pack, in_lane_118);
  set_at<48, 64, 16>(in_lane_119_pack, in_lane_119);
  auto res_stg0_update_0_sm1_29139 = stg0_generated_compute_unrolled_1(in_lane_119_pack);

  hw_uint<64 > in_lane_123_pack;
  set_at<0, 64, 16>(in_lane_123_pack, in_lane_120);
  set_at<16, 64, 16>(in_lane_123_pack, in_lane_121);
  set_at<32, 64, 16>(in_lane_123_pack, in_lane_122);
  set_at<48, 64, 16>(in_lane_123_pack, in_lane_123);
  auto res_stg0_update_0_sm1_30141 = stg0_generated_compute_unrolled_1(in_lane_123_pack);

  hw_uint<64 > in_lane_127_pack;
  set_at<0, 64, 16>(in_lane_127_pack, in_lane_124);
  set_at<16, 64, 16>(in_lane_127_pack, in_lane_125);
  set_at<32, 64, 16>(in_lane_127_pack, in_lane_126);
  set_at<48, 64, 16>(in_lane_127_pack, in_lane_127);
  auto res_stg0_update_0_sm1_31143 = stg0_generated_compute_unrolled_1(in_lane_127_pack);
  hw_uint<512 > return_value1109;
  set_at<0, 512, 16>(return_value1109, res_stg0_update_0_sm1_081);
  set_at<16, 512, 16>(return_value1109, res_stg0_update_0_sm1_183);
  set_at<32, 512, 16>(return_value1109, res_stg0_update_0_sm1_285);
  set_at<48, 512, 16>(return_value1109, res_stg0_update_0_sm1_387);
  set_at<64, 512, 16>(return_value1109, res_stg0_update_0_sm1_489);
  set_at<80, 512, 16>(return_value1109, res_stg0_update_0_sm1_591);
  set_at<96, 512, 16>(return_value1109, res_stg0_update_0_sm1_693);
  set_at<112, 512, 16>(return_value1109, res_stg0_update_0_sm1_795);
  set_at<128, 512, 16>(return_value1109, res_stg0_update_0_sm1_897);
  set_at<144, 512, 16>(return_value1109, res_stg0_update_0_sm1_999);
  set_at<160, 512, 16>(return_value1109, res_stg0_update_0_sm1_10101);
  set_at<176, 512, 16>(return_value1109, res_stg0_update_0_sm1_11103);
  set_at<192, 512, 16>(return_value1109, res_stg0_update_0_sm1_12105);
  set_at<208, 512, 16>(return_value1109, res_stg0_update_0_sm1_13107);
  set_at<224, 512, 16>(return_value1109, res_stg0_update_0_sm1_14109);
  set_at<240, 512, 16>(return_value1109, res_stg0_update_0_sm1_15111);
  set_at<256, 512, 16>(return_value1109, res_stg0_update_0_sm1_16113);
  set_at<272, 512, 16>(return_value1109, res_stg0_update_0_sm1_17115);
  set_at<288, 512, 16>(return_value1109, res_stg0_update_0_sm1_18117);
  set_at<304, 512, 16>(return_value1109, res_stg0_update_0_sm1_19119);
  set_at<320, 512, 16>(return_value1109, res_stg0_update_0_sm1_20121);
  set_at<336, 512, 16>(return_value1109, res_stg0_update_0_sm1_21123);
  set_at<352, 512, 16>(return_value1109, res_stg0_update_0_sm1_22125);
  set_at<368, 512, 16>(return_value1109, res_stg0_update_0_sm1_23127);
  set_at<384, 512, 16>(return_value1109, res_stg0_update_0_sm1_24129);
  set_at<400, 512, 16>(return_value1109, res_stg0_update_0_sm1_25131);
  set_at<416, 512, 16>(return_value1109, res_stg0_update_0_sm1_26133);
  set_at<432, 512, 16>(return_value1109, res_stg0_update_0_sm1_27135);
  set_at<448, 512, 16>(return_value1109, res_stg0_update_0_sm1_28137);
  set_at<464, 512, 16>(return_value1109, res_stg0_update_0_sm1_29139);
  set_at<480, 512, 16>(return_value1109, res_stg0_update_0_sm1_30141);
  set_at<496, 512, 16>(return_value1109, res_stg0_update_0_sm1_31143);
  return return_value1109;

}

hw_uint<512> stg1_1_cu1111(hw_uint<16*128>& stg0) {
  hw_uint<16> stg0_lane_0 = stg0.extract<0, 15>();
  hw_uint<16> stg0_lane_1 = stg0.extract<16, 31>();
  hw_uint<16> stg0_lane_2 = stg0.extract<32, 47>();
  hw_uint<16> stg0_lane_3 = stg0.extract<48, 63>();
  hw_uint<16> stg0_lane_4 = stg0.extract<64, 79>();
  hw_uint<16> stg0_lane_5 = stg0.extract<80, 95>();
  hw_uint<16> stg0_lane_6 = stg0.extract<96, 111>();
  hw_uint<16> stg0_lane_7 = stg0.extract<112, 127>();
  hw_uint<16> stg0_lane_8 = stg0.extract<128, 143>();
  hw_uint<16> stg0_lane_9 = stg0.extract<144, 159>();
  hw_uint<16> stg0_lane_10 = stg0.extract<160, 175>();
  hw_uint<16> stg0_lane_11 = stg0.extract<176, 191>();
  hw_uint<16> stg0_lane_12 = stg0.extract<192, 207>();
  hw_uint<16> stg0_lane_13 = stg0.extract<208, 223>();
  hw_uint<16> stg0_lane_14 = stg0.extract<224, 239>();
  hw_uint<16> stg0_lane_15 = stg0.extract<240, 255>();
  hw_uint<16> stg0_lane_16 = stg0.extract<256, 271>();
  hw_uint<16> stg0_lane_17 = stg0.extract<272, 287>();
  hw_uint<16> stg0_lane_18 = stg0.extract<288, 303>();
  hw_uint<16> stg0_lane_19 = stg0.extract<304, 319>();
  hw_uint<16> stg0_lane_20 = stg0.extract<320, 335>();
  hw_uint<16> stg0_lane_21 = stg0.extract<336, 351>();
  hw_uint<16> stg0_lane_22 = stg0.extract<352, 367>();
  hw_uint<16> stg0_lane_23 = stg0.extract<368, 383>();
  hw_uint<16> stg0_lane_24 = stg0.extract<384, 399>();
  hw_uint<16> stg0_lane_25 = stg0.extract<400, 415>();
  hw_uint<16> stg0_lane_26 = stg0.extract<416, 431>();
  hw_uint<16> stg0_lane_27 = stg0.extract<432, 447>();
  hw_uint<16> stg0_lane_28 = stg0.extract<448, 463>();
  hw_uint<16> stg0_lane_29 = stg0.extract<464, 479>();
  hw_uint<16> stg0_lane_30 = stg0.extract<480, 495>();
  hw_uint<16> stg0_lane_31 = stg0.extract<496, 511>();
  hw_uint<16> stg0_lane_32 = stg0.extract<512, 527>();
  hw_uint<16> stg0_lane_33 = stg0.extract<528, 543>();
  hw_uint<16> stg0_lane_34 = stg0.extract<544, 559>();
  hw_uint<16> stg0_lane_35 = stg0.extract<560, 575>();
  hw_uint<16> stg0_lane_36 = stg0.extract<576, 591>();
  hw_uint<16> stg0_lane_37 = stg0.extract<592, 607>();
  hw_uint<16> stg0_lane_38 = stg0.extract<608, 623>();
  hw_uint<16> stg0_lane_39 = stg0.extract<624, 639>();
  hw_uint<16> stg0_lane_40 = stg0.extract<640, 655>();
  hw_uint<16> stg0_lane_41 = stg0.extract<656, 671>();
  hw_uint<16> stg0_lane_42 = stg0.extract<672, 687>();
  hw_uint<16> stg0_lane_43 = stg0.extract<688, 703>();
  hw_uint<16> stg0_lane_44 = stg0.extract<704, 719>();
  hw_uint<16> stg0_lane_45 = stg0.extract<720, 735>();
  hw_uint<16> stg0_lane_46 = stg0.extract<736, 751>();
  hw_uint<16> stg0_lane_47 = stg0.extract<752, 767>();
  hw_uint<16> stg0_lane_48 = stg0.extract<768, 783>();
  hw_uint<16> stg0_lane_49 = stg0.extract<784, 799>();
  hw_uint<16> stg0_lane_50 = stg0.extract<800, 815>();
  hw_uint<16> stg0_lane_51 = stg0.extract<816, 831>();
  hw_uint<16> stg0_lane_52 = stg0.extract<832, 847>();
  hw_uint<16> stg0_lane_53 = stg0.extract<848, 863>();
  hw_uint<16> stg0_lane_54 = stg0.extract<864, 879>();
  hw_uint<16> stg0_lane_55 = stg0.extract<880, 895>();
  hw_uint<16> stg0_lane_56 = stg0.extract<896, 911>();
  hw_uint<16> stg0_lane_57 = stg0.extract<912, 927>();
  hw_uint<16> stg0_lane_58 = stg0.extract<928, 943>();
  hw_uint<16> stg0_lane_59 = stg0.extract<944, 959>();
  hw_uint<16> stg0_lane_60 = stg0.extract<960, 975>();
  hw_uint<16> stg0_lane_61 = stg0.extract<976, 991>();
  hw_uint<16> stg0_lane_62 = stg0.extract<992, 1007>();
  hw_uint<16> stg0_lane_63 = stg0.extract<1008, 1023>();
  hw_uint<16> stg0_lane_64 = stg0.extract<1024, 1039>();
  hw_uint<16> stg0_lane_65 = stg0.extract<1040, 1055>();
  hw_uint<16> stg0_lane_66 = stg0.extract<1056, 1071>();
  hw_uint<16> stg0_lane_67 = stg0.extract<1072, 1087>();
  hw_uint<16> stg0_lane_68 = stg0.extract<1088, 1103>();
  hw_uint<16> stg0_lane_69 = stg0.extract<1104, 1119>();
  hw_uint<16> stg0_lane_70 = stg0.extract<1120, 1135>();
  hw_uint<16> stg0_lane_71 = stg0.extract<1136, 1151>();
  hw_uint<16> stg0_lane_72 = stg0.extract<1152, 1167>();
  hw_uint<16> stg0_lane_73 = stg0.extract<1168, 1183>();
  hw_uint<16> stg0_lane_74 = stg0.extract<1184, 1199>();
  hw_uint<16> stg0_lane_75 = stg0.extract<1200, 1215>();
  hw_uint<16> stg0_lane_76 = stg0.extract<1216, 1231>();
  hw_uint<16> stg0_lane_77 = stg0.extract<1232, 1247>();
  hw_uint<16> stg0_lane_78 = stg0.extract<1248, 1263>();
  hw_uint<16> stg0_lane_79 = stg0.extract<1264, 1279>();
  hw_uint<16> stg0_lane_80 = stg0.extract<1280, 1295>();
  hw_uint<16> stg0_lane_81 = stg0.extract<1296, 1311>();
  hw_uint<16> stg0_lane_82 = stg0.extract<1312, 1327>();
  hw_uint<16> stg0_lane_83 = stg0.extract<1328, 1343>();
  hw_uint<16> stg0_lane_84 = stg0.extract<1344, 1359>();
  hw_uint<16> stg0_lane_85 = stg0.extract<1360, 1375>();
  hw_uint<16> stg0_lane_86 = stg0.extract<1376, 1391>();
  hw_uint<16> stg0_lane_87 = stg0.extract<1392, 1407>();
  hw_uint<16> stg0_lane_88 = stg0.extract<1408, 1423>();
  hw_uint<16> stg0_lane_89 = stg0.extract<1424, 1439>();
  hw_uint<16> stg0_lane_90 = stg0.extract<1440, 1455>();
  hw_uint<16> stg0_lane_91 = stg0.extract<1456, 1471>();
  hw_uint<16> stg0_lane_92 = stg0.extract<1472, 1487>();
  hw_uint<16> stg0_lane_93 = stg0.extract<1488, 1503>();
  hw_uint<16> stg0_lane_94 = stg0.extract<1504, 1519>();
  hw_uint<16> stg0_lane_95 = stg0.extract<1520, 1535>();
  hw_uint<16> stg0_lane_96 = stg0.extract<1536, 1551>();
  hw_uint<16> stg0_lane_97 = stg0.extract<1552, 1567>();
  hw_uint<16> stg0_lane_98 = stg0.extract<1568, 1583>();
  hw_uint<16> stg0_lane_99 = stg0.extract<1584, 1599>();
  hw_uint<16> stg0_lane_100 = stg0.extract<1600, 1615>();
  hw_uint<16> stg0_lane_101 = stg0.extract<1616, 1631>();
  hw_uint<16> stg0_lane_102 = stg0.extract<1632, 1647>();
  hw_uint<16> stg0_lane_103 = stg0.extract<1648, 1663>();
  hw_uint<16> stg0_lane_104 = stg0.extract<1664, 1679>();
  hw_uint<16> stg0_lane_105 = stg0.extract<1680, 1695>();
  hw_uint<16> stg0_lane_106 = stg0.extract<1696, 1711>();
  hw_uint<16> stg0_lane_107 = stg0.extract<1712, 1727>();
  hw_uint<16> stg0_lane_108 = stg0.extract<1728, 1743>();
  hw_uint<16> stg0_lane_109 = stg0.extract<1744, 1759>();
  hw_uint<16> stg0_lane_110 = stg0.extract<1760, 1775>();
  hw_uint<16> stg0_lane_111 = stg0.extract<1776, 1791>();
  hw_uint<16> stg0_lane_112 = stg0.extract<1792, 1807>();
  hw_uint<16> stg0_lane_113 = stg0.extract<1808, 1823>();
  hw_uint<16> stg0_lane_114 = stg0.extract<1824, 1839>();
  hw_uint<16> stg0_lane_115 = stg0.extract<1840, 1855>();
  hw_uint<16> stg0_lane_116 = stg0.extract<1856, 1871>();
  hw_uint<16> stg0_lane_117 = stg0.extract<1872, 1887>();
  hw_uint<16> stg0_lane_118 = stg0.extract<1888, 1903>();
  hw_uint<16> stg0_lane_119 = stg0.extract<1904, 1919>();
  hw_uint<16> stg0_lane_120 = stg0.extract<1920, 1935>();
  hw_uint<16> stg0_lane_121 = stg0.extract<1936, 1951>();
  hw_uint<16> stg0_lane_122 = stg0.extract<1952, 1967>();
  hw_uint<16> stg0_lane_123 = stg0.extract<1968, 1983>();
  hw_uint<16> stg0_lane_124 = stg0.extract<1984, 1999>();
  hw_uint<16> stg0_lane_125 = stg0.extract<2000, 2015>();
  hw_uint<16> stg0_lane_126 = stg0.extract<2016, 2031>();
  hw_uint<16> stg0_lane_127 = stg0.extract<2032, 2047>();

	
  hw_uint<64 > stg0_lane_3_pack;
  set_at<0, 64, 16>(stg0_lane_3_pack, stg0_lane_0);
  set_at<16, 64, 16>(stg0_lane_3_pack, stg0_lane_1);
  set_at<32, 64, 16>(stg0_lane_3_pack, stg0_lane_2);
  set_at<48, 64, 16>(stg0_lane_3_pack, stg0_lane_3);
  auto res_stg1_update_0_sm2_0145 = stg1_generated_compute_unrolled_1(stg0_lane_3_pack);

  hw_uint<64 > stg0_lane_7_pack;
  set_at<0, 64, 16>(stg0_lane_7_pack, stg0_lane_4);
  set_at<16, 64, 16>(stg0_lane_7_pack, stg0_lane_5);
  set_at<32, 64, 16>(stg0_lane_7_pack, stg0_lane_6);
  set_at<48, 64, 16>(stg0_lane_7_pack, stg0_lane_7);
  auto res_stg1_update_0_sm2_1147 = stg1_generated_compute_unrolled_1(stg0_lane_7_pack);

  hw_uint<64 > stg0_lane_11_pack;
  set_at<0, 64, 16>(stg0_lane_11_pack, stg0_lane_8);
  set_at<16, 64, 16>(stg0_lane_11_pack, stg0_lane_9);
  set_at<32, 64, 16>(stg0_lane_11_pack, stg0_lane_10);
  set_at<48, 64, 16>(stg0_lane_11_pack, stg0_lane_11);
  auto res_stg1_update_0_sm2_2149 = stg1_generated_compute_unrolled_1(stg0_lane_11_pack);

  hw_uint<64 > stg0_lane_15_pack;
  set_at<0, 64, 16>(stg0_lane_15_pack, stg0_lane_12);
  set_at<16, 64, 16>(stg0_lane_15_pack, stg0_lane_13);
  set_at<32, 64, 16>(stg0_lane_15_pack, stg0_lane_14);
  set_at<48, 64, 16>(stg0_lane_15_pack, stg0_lane_15);
  auto res_stg1_update_0_sm2_3151 = stg1_generated_compute_unrolled_1(stg0_lane_15_pack);

  hw_uint<64 > stg0_lane_19_pack;
  set_at<0, 64, 16>(stg0_lane_19_pack, stg0_lane_16);
  set_at<16, 64, 16>(stg0_lane_19_pack, stg0_lane_17);
  set_at<32, 64, 16>(stg0_lane_19_pack, stg0_lane_18);
  set_at<48, 64, 16>(stg0_lane_19_pack, stg0_lane_19);
  auto res_stg1_update_0_sm2_4153 = stg1_generated_compute_unrolled_1(stg0_lane_19_pack);

  hw_uint<64 > stg0_lane_23_pack;
  set_at<0, 64, 16>(stg0_lane_23_pack, stg0_lane_20);
  set_at<16, 64, 16>(stg0_lane_23_pack, stg0_lane_21);
  set_at<32, 64, 16>(stg0_lane_23_pack, stg0_lane_22);
  set_at<48, 64, 16>(stg0_lane_23_pack, stg0_lane_23);
  auto res_stg1_update_0_sm2_5155 = stg1_generated_compute_unrolled_1(stg0_lane_23_pack);

  hw_uint<64 > stg0_lane_27_pack;
  set_at<0, 64, 16>(stg0_lane_27_pack, stg0_lane_24);
  set_at<16, 64, 16>(stg0_lane_27_pack, stg0_lane_25);
  set_at<32, 64, 16>(stg0_lane_27_pack, stg0_lane_26);
  set_at<48, 64, 16>(stg0_lane_27_pack, stg0_lane_27);
  auto res_stg1_update_0_sm2_6157 = stg1_generated_compute_unrolled_1(stg0_lane_27_pack);

  hw_uint<64 > stg0_lane_31_pack;
  set_at<0, 64, 16>(stg0_lane_31_pack, stg0_lane_28);
  set_at<16, 64, 16>(stg0_lane_31_pack, stg0_lane_29);
  set_at<32, 64, 16>(stg0_lane_31_pack, stg0_lane_30);
  set_at<48, 64, 16>(stg0_lane_31_pack, stg0_lane_31);
  auto res_stg1_update_0_sm2_7159 = stg1_generated_compute_unrolled_1(stg0_lane_31_pack);

  hw_uint<64 > stg0_lane_35_pack;
  set_at<0, 64, 16>(stg0_lane_35_pack, stg0_lane_32);
  set_at<16, 64, 16>(stg0_lane_35_pack, stg0_lane_33);
  set_at<32, 64, 16>(stg0_lane_35_pack, stg0_lane_34);
  set_at<48, 64, 16>(stg0_lane_35_pack, stg0_lane_35);
  auto res_stg1_update_0_sm2_8161 = stg1_generated_compute_unrolled_1(stg0_lane_35_pack);

  hw_uint<64 > stg0_lane_39_pack;
  set_at<0, 64, 16>(stg0_lane_39_pack, stg0_lane_36);
  set_at<16, 64, 16>(stg0_lane_39_pack, stg0_lane_37);
  set_at<32, 64, 16>(stg0_lane_39_pack, stg0_lane_38);
  set_at<48, 64, 16>(stg0_lane_39_pack, stg0_lane_39);
  auto res_stg1_update_0_sm2_9163 = stg1_generated_compute_unrolled_1(stg0_lane_39_pack);

  hw_uint<64 > stg0_lane_43_pack;
  set_at<0, 64, 16>(stg0_lane_43_pack, stg0_lane_40);
  set_at<16, 64, 16>(stg0_lane_43_pack, stg0_lane_41);
  set_at<32, 64, 16>(stg0_lane_43_pack, stg0_lane_42);
  set_at<48, 64, 16>(stg0_lane_43_pack, stg0_lane_43);
  auto res_stg1_update_0_sm2_10165 = stg1_generated_compute_unrolled_1(stg0_lane_43_pack);

  hw_uint<64 > stg0_lane_47_pack;
  set_at<0, 64, 16>(stg0_lane_47_pack, stg0_lane_44);
  set_at<16, 64, 16>(stg0_lane_47_pack, stg0_lane_45);
  set_at<32, 64, 16>(stg0_lane_47_pack, stg0_lane_46);
  set_at<48, 64, 16>(stg0_lane_47_pack, stg0_lane_47);
  auto res_stg1_update_0_sm2_11167 = stg1_generated_compute_unrolled_1(stg0_lane_47_pack);

  hw_uint<64 > stg0_lane_51_pack;
  set_at<0, 64, 16>(stg0_lane_51_pack, stg0_lane_48);
  set_at<16, 64, 16>(stg0_lane_51_pack, stg0_lane_49);
  set_at<32, 64, 16>(stg0_lane_51_pack, stg0_lane_50);
  set_at<48, 64, 16>(stg0_lane_51_pack, stg0_lane_51);
  auto res_stg1_update_0_sm2_12169 = stg1_generated_compute_unrolled_1(stg0_lane_51_pack);

  hw_uint<64 > stg0_lane_55_pack;
  set_at<0, 64, 16>(stg0_lane_55_pack, stg0_lane_52);
  set_at<16, 64, 16>(stg0_lane_55_pack, stg0_lane_53);
  set_at<32, 64, 16>(stg0_lane_55_pack, stg0_lane_54);
  set_at<48, 64, 16>(stg0_lane_55_pack, stg0_lane_55);
  auto res_stg1_update_0_sm2_13171 = stg1_generated_compute_unrolled_1(stg0_lane_55_pack);

  hw_uint<64 > stg0_lane_59_pack;
  set_at<0, 64, 16>(stg0_lane_59_pack, stg0_lane_56);
  set_at<16, 64, 16>(stg0_lane_59_pack, stg0_lane_57);
  set_at<32, 64, 16>(stg0_lane_59_pack, stg0_lane_58);
  set_at<48, 64, 16>(stg0_lane_59_pack, stg0_lane_59);
  auto res_stg1_update_0_sm2_14173 = stg1_generated_compute_unrolled_1(stg0_lane_59_pack);

  hw_uint<64 > stg0_lane_63_pack;
  set_at<0, 64, 16>(stg0_lane_63_pack, stg0_lane_60);
  set_at<16, 64, 16>(stg0_lane_63_pack, stg0_lane_61);
  set_at<32, 64, 16>(stg0_lane_63_pack, stg0_lane_62);
  set_at<48, 64, 16>(stg0_lane_63_pack, stg0_lane_63);
  auto res_stg1_update_0_sm2_15175 = stg1_generated_compute_unrolled_1(stg0_lane_63_pack);

  hw_uint<64 > stg0_lane_67_pack;
  set_at<0, 64, 16>(stg0_lane_67_pack, stg0_lane_64);
  set_at<16, 64, 16>(stg0_lane_67_pack, stg0_lane_65);
  set_at<32, 64, 16>(stg0_lane_67_pack, stg0_lane_66);
  set_at<48, 64, 16>(stg0_lane_67_pack, stg0_lane_67);
  auto res_stg1_update_0_sm2_16177 = stg1_generated_compute_unrolled_1(stg0_lane_67_pack);

  hw_uint<64 > stg0_lane_71_pack;
  set_at<0, 64, 16>(stg0_lane_71_pack, stg0_lane_68);
  set_at<16, 64, 16>(stg0_lane_71_pack, stg0_lane_69);
  set_at<32, 64, 16>(stg0_lane_71_pack, stg0_lane_70);
  set_at<48, 64, 16>(stg0_lane_71_pack, stg0_lane_71);
  auto res_stg1_update_0_sm2_17179 = stg1_generated_compute_unrolled_1(stg0_lane_71_pack);

  hw_uint<64 > stg0_lane_75_pack;
  set_at<0, 64, 16>(stg0_lane_75_pack, stg0_lane_72);
  set_at<16, 64, 16>(stg0_lane_75_pack, stg0_lane_73);
  set_at<32, 64, 16>(stg0_lane_75_pack, stg0_lane_74);
  set_at<48, 64, 16>(stg0_lane_75_pack, stg0_lane_75);
  auto res_stg1_update_0_sm2_18181 = stg1_generated_compute_unrolled_1(stg0_lane_75_pack);

  hw_uint<64 > stg0_lane_79_pack;
  set_at<0, 64, 16>(stg0_lane_79_pack, stg0_lane_76);
  set_at<16, 64, 16>(stg0_lane_79_pack, stg0_lane_77);
  set_at<32, 64, 16>(stg0_lane_79_pack, stg0_lane_78);
  set_at<48, 64, 16>(stg0_lane_79_pack, stg0_lane_79);
  auto res_stg1_update_0_sm2_19183 = stg1_generated_compute_unrolled_1(stg0_lane_79_pack);

  hw_uint<64 > stg0_lane_83_pack;
  set_at<0, 64, 16>(stg0_lane_83_pack, stg0_lane_80);
  set_at<16, 64, 16>(stg0_lane_83_pack, stg0_lane_81);
  set_at<32, 64, 16>(stg0_lane_83_pack, stg0_lane_82);
  set_at<48, 64, 16>(stg0_lane_83_pack, stg0_lane_83);
  auto res_stg1_update_0_sm2_20185 = stg1_generated_compute_unrolled_1(stg0_lane_83_pack);

  hw_uint<64 > stg0_lane_87_pack;
  set_at<0, 64, 16>(stg0_lane_87_pack, stg0_lane_84);
  set_at<16, 64, 16>(stg0_lane_87_pack, stg0_lane_85);
  set_at<32, 64, 16>(stg0_lane_87_pack, stg0_lane_86);
  set_at<48, 64, 16>(stg0_lane_87_pack, stg0_lane_87);
  auto res_stg1_update_0_sm2_21187 = stg1_generated_compute_unrolled_1(stg0_lane_87_pack);

  hw_uint<64 > stg0_lane_91_pack;
  set_at<0, 64, 16>(stg0_lane_91_pack, stg0_lane_88);
  set_at<16, 64, 16>(stg0_lane_91_pack, stg0_lane_89);
  set_at<32, 64, 16>(stg0_lane_91_pack, stg0_lane_90);
  set_at<48, 64, 16>(stg0_lane_91_pack, stg0_lane_91);
  auto res_stg1_update_0_sm2_22189 = stg1_generated_compute_unrolled_1(stg0_lane_91_pack);

  hw_uint<64 > stg0_lane_95_pack;
  set_at<0, 64, 16>(stg0_lane_95_pack, stg0_lane_92);
  set_at<16, 64, 16>(stg0_lane_95_pack, stg0_lane_93);
  set_at<32, 64, 16>(stg0_lane_95_pack, stg0_lane_94);
  set_at<48, 64, 16>(stg0_lane_95_pack, stg0_lane_95);
  auto res_stg1_update_0_sm2_23191 = stg1_generated_compute_unrolled_1(stg0_lane_95_pack);

  hw_uint<64 > stg0_lane_99_pack;
  set_at<0, 64, 16>(stg0_lane_99_pack, stg0_lane_96);
  set_at<16, 64, 16>(stg0_lane_99_pack, stg0_lane_97);
  set_at<32, 64, 16>(stg0_lane_99_pack, stg0_lane_98);
  set_at<48, 64, 16>(stg0_lane_99_pack, stg0_lane_99);
  auto res_stg1_update_0_sm2_24193 = stg1_generated_compute_unrolled_1(stg0_lane_99_pack);

  hw_uint<64 > stg0_lane_103_pack;
  set_at<0, 64, 16>(stg0_lane_103_pack, stg0_lane_100);
  set_at<16, 64, 16>(stg0_lane_103_pack, stg0_lane_101);
  set_at<32, 64, 16>(stg0_lane_103_pack, stg0_lane_102);
  set_at<48, 64, 16>(stg0_lane_103_pack, stg0_lane_103);
  auto res_stg1_update_0_sm2_25195 = stg1_generated_compute_unrolled_1(stg0_lane_103_pack);

  hw_uint<64 > stg0_lane_107_pack;
  set_at<0, 64, 16>(stg0_lane_107_pack, stg0_lane_104);
  set_at<16, 64, 16>(stg0_lane_107_pack, stg0_lane_105);
  set_at<32, 64, 16>(stg0_lane_107_pack, stg0_lane_106);
  set_at<48, 64, 16>(stg0_lane_107_pack, stg0_lane_107);
  auto res_stg1_update_0_sm2_26197 = stg1_generated_compute_unrolled_1(stg0_lane_107_pack);

  hw_uint<64 > stg0_lane_111_pack;
  set_at<0, 64, 16>(stg0_lane_111_pack, stg0_lane_108);
  set_at<16, 64, 16>(stg0_lane_111_pack, stg0_lane_109);
  set_at<32, 64, 16>(stg0_lane_111_pack, stg0_lane_110);
  set_at<48, 64, 16>(stg0_lane_111_pack, stg0_lane_111);
  auto res_stg1_update_0_sm2_27199 = stg1_generated_compute_unrolled_1(stg0_lane_111_pack);

  hw_uint<64 > stg0_lane_115_pack;
  set_at<0, 64, 16>(stg0_lane_115_pack, stg0_lane_112);
  set_at<16, 64, 16>(stg0_lane_115_pack, stg0_lane_113);
  set_at<32, 64, 16>(stg0_lane_115_pack, stg0_lane_114);
  set_at<48, 64, 16>(stg0_lane_115_pack, stg0_lane_115);
  auto res_stg1_update_0_sm2_28201 = stg1_generated_compute_unrolled_1(stg0_lane_115_pack);

  hw_uint<64 > stg0_lane_119_pack;
  set_at<0, 64, 16>(stg0_lane_119_pack, stg0_lane_116);
  set_at<16, 64, 16>(stg0_lane_119_pack, stg0_lane_117);
  set_at<32, 64, 16>(stg0_lane_119_pack, stg0_lane_118);
  set_at<48, 64, 16>(stg0_lane_119_pack, stg0_lane_119);
  auto res_stg1_update_0_sm2_29203 = stg1_generated_compute_unrolled_1(stg0_lane_119_pack);

  hw_uint<64 > stg0_lane_123_pack;
  set_at<0, 64, 16>(stg0_lane_123_pack, stg0_lane_120);
  set_at<16, 64, 16>(stg0_lane_123_pack, stg0_lane_121);
  set_at<32, 64, 16>(stg0_lane_123_pack, stg0_lane_122);
  set_at<48, 64, 16>(stg0_lane_123_pack, stg0_lane_123);
  auto res_stg1_update_0_sm2_30205 = stg1_generated_compute_unrolled_1(stg0_lane_123_pack);

  hw_uint<64 > stg0_lane_127_pack;
  set_at<0, 64, 16>(stg0_lane_127_pack, stg0_lane_124);
  set_at<16, 64, 16>(stg0_lane_127_pack, stg0_lane_125);
  set_at<32, 64, 16>(stg0_lane_127_pack, stg0_lane_126);
  set_at<48, 64, 16>(stg0_lane_127_pack, stg0_lane_127);
  auto res_stg1_update_0_sm2_31207 = stg1_generated_compute_unrolled_1(stg0_lane_127_pack);
  hw_uint<512 > return_value1112;
  set_at<0, 512, 16>(return_value1112, res_stg1_update_0_sm2_0145);
  set_at<16, 512, 16>(return_value1112, res_stg1_update_0_sm2_1147);
  set_at<32, 512, 16>(return_value1112, res_stg1_update_0_sm2_2149);
  set_at<48, 512, 16>(return_value1112, res_stg1_update_0_sm2_3151);
  set_at<64, 512, 16>(return_value1112, res_stg1_update_0_sm2_4153);
  set_at<80, 512, 16>(return_value1112, res_stg1_update_0_sm2_5155);
  set_at<96, 512, 16>(return_value1112, res_stg1_update_0_sm2_6157);
  set_at<112, 512, 16>(return_value1112, res_stg1_update_0_sm2_7159);
  set_at<128, 512, 16>(return_value1112, res_stg1_update_0_sm2_8161);
  set_at<144, 512, 16>(return_value1112, res_stg1_update_0_sm2_9163);
  set_at<160, 512, 16>(return_value1112, res_stg1_update_0_sm2_10165);
  set_at<176, 512, 16>(return_value1112, res_stg1_update_0_sm2_11167);
  set_at<192, 512, 16>(return_value1112, res_stg1_update_0_sm2_12169);
  set_at<208, 512, 16>(return_value1112, res_stg1_update_0_sm2_13171);
  set_at<224, 512, 16>(return_value1112, res_stg1_update_0_sm2_14173);
  set_at<240, 512, 16>(return_value1112, res_stg1_update_0_sm2_15175);
  set_at<256, 512, 16>(return_value1112, res_stg1_update_0_sm2_16177);
  set_at<272, 512, 16>(return_value1112, res_stg1_update_0_sm2_17179);
  set_at<288, 512, 16>(return_value1112, res_stg1_update_0_sm2_18181);
  set_at<304, 512, 16>(return_value1112, res_stg1_update_0_sm2_19183);
  set_at<320, 512, 16>(return_value1112, res_stg1_update_0_sm2_20185);
  set_at<336, 512, 16>(return_value1112, res_stg1_update_0_sm2_21187);
  set_at<352, 512, 16>(return_value1112, res_stg1_update_0_sm2_22189);
  set_at<368, 512, 16>(return_value1112, res_stg1_update_0_sm2_23191);
  set_at<384, 512, 16>(return_value1112, res_stg1_update_0_sm2_24193);
  set_at<400, 512, 16>(return_value1112, res_stg1_update_0_sm2_25195);
  set_at<416, 512, 16>(return_value1112, res_stg1_update_0_sm2_26197);
  set_at<432, 512, 16>(return_value1112, res_stg1_update_0_sm2_27199);
  set_at<448, 512, 16>(return_value1112, res_stg1_update_0_sm2_28201);
  set_at<464, 512, 16>(return_value1112, res_stg1_update_0_sm2_29203);
  set_at<480, 512, 16>(return_value1112, res_stg1_update_0_sm2_30205);
  set_at<496, 512, 16>(return_value1112, res_stg1_update_0_sm2_31207);
  return return_value1112;

}

hw_uint<512> stg2_1_cu1114(hw_uint<16*128>& stg1) {
  hw_uint<16> stg1_lane_0 = stg1.extract<0, 15>();
  hw_uint<16> stg1_lane_1 = stg1.extract<16, 31>();
  hw_uint<16> stg1_lane_2 = stg1.extract<32, 47>();
  hw_uint<16> stg1_lane_3 = stg1.extract<48, 63>();
  hw_uint<16> stg1_lane_4 = stg1.extract<64, 79>();
  hw_uint<16> stg1_lane_5 = stg1.extract<80, 95>();
  hw_uint<16> stg1_lane_6 = stg1.extract<96, 111>();
  hw_uint<16> stg1_lane_7 = stg1.extract<112, 127>();
  hw_uint<16> stg1_lane_8 = stg1.extract<128, 143>();
  hw_uint<16> stg1_lane_9 = stg1.extract<144, 159>();
  hw_uint<16> stg1_lane_10 = stg1.extract<160, 175>();
  hw_uint<16> stg1_lane_11 = stg1.extract<176, 191>();
  hw_uint<16> stg1_lane_12 = stg1.extract<192, 207>();
  hw_uint<16> stg1_lane_13 = stg1.extract<208, 223>();
  hw_uint<16> stg1_lane_14 = stg1.extract<224, 239>();
  hw_uint<16> stg1_lane_15 = stg1.extract<240, 255>();
  hw_uint<16> stg1_lane_16 = stg1.extract<256, 271>();
  hw_uint<16> stg1_lane_17 = stg1.extract<272, 287>();
  hw_uint<16> stg1_lane_18 = stg1.extract<288, 303>();
  hw_uint<16> stg1_lane_19 = stg1.extract<304, 319>();
  hw_uint<16> stg1_lane_20 = stg1.extract<320, 335>();
  hw_uint<16> stg1_lane_21 = stg1.extract<336, 351>();
  hw_uint<16> stg1_lane_22 = stg1.extract<352, 367>();
  hw_uint<16> stg1_lane_23 = stg1.extract<368, 383>();
  hw_uint<16> stg1_lane_24 = stg1.extract<384, 399>();
  hw_uint<16> stg1_lane_25 = stg1.extract<400, 415>();
  hw_uint<16> stg1_lane_26 = stg1.extract<416, 431>();
  hw_uint<16> stg1_lane_27 = stg1.extract<432, 447>();
  hw_uint<16> stg1_lane_28 = stg1.extract<448, 463>();
  hw_uint<16> stg1_lane_29 = stg1.extract<464, 479>();
  hw_uint<16> stg1_lane_30 = stg1.extract<480, 495>();
  hw_uint<16> stg1_lane_31 = stg1.extract<496, 511>();
  hw_uint<16> stg1_lane_32 = stg1.extract<512, 527>();
  hw_uint<16> stg1_lane_33 = stg1.extract<528, 543>();
  hw_uint<16> stg1_lane_34 = stg1.extract<544, 559>();
  hw_uint<16> stg1_lane_35 = stg1.extract<560, 575>();
  hw_uint<16> stg1_lane_36 = stg1.extract<576, 591>();
  hw_uint<16> stg1_lane_37 = stg1.extract<592, 607>();
  hw_uint<16> stg1_lane_38 = stg1.extract<608, 623>();
  hw_uint<16> stg1_lane_39 = stg1.extract<624, 639>();
  hw_uint<16> stg1_lane_40 = stg1.extract<640, 655>();
  hw_uint<16> stg1_lane_41 = stg1.extract<656, 671>();
  hw_uint<16> stg1_lane_42 = stg1.extract<672, 687>();
  hw_uint<16> stg1_lane_43 = stg1.extract<688, 703>();
  hw_uint<16> stg1_lane_44 = stg1.extract<704, 719>();
  hw_uint<16> stg1_lane_45 = stg1.extract<720, 735>();
  hw_uint<16> stg1_lane_46 = stg1.extract<736, 751>();
  hw_uint<16> stg1_lane_47 = stg1.extract<752, 767>();
  hw_uint<16> stg1_lane_48 = stg1.extract<768, 783>();
  hw_uint<16> stg1_lane_49 = stg1.extract<784, 799>();
  hw_uint<16> stg1_lane_50 = stg1.extract<800, 815>();
  hw_uint<16> stg1_lane_51 = stg1.extract<816, 831>();
  hw_uint<16> stg1_lane_52 = stg1.extract<832, 847>();
  hw_uint<16> stg1_lane_53 = stg1.extract<848, 863>();
  hw_uint<16> stg1_lane_54 = stg1.extract<864, 879>();
  hw_uint<16> stg1_lane_55 = stg1.extract<880, 895>();
  hw_uint<16> stg1_lane_56 = stg1.extract<896, 911>();
  hw_uint<16> stg1_lane_57 = stg1.extract<912, 927>();
  hw_uint<16> stg1_lane_58 = stg1.extract<928, 943>();
  hw_uint<16> stg1_lane_59 = stg1.extract<944, 959>();
  hw_uint<16> stg1_lane_60 = stg1.extract<960, 975>();
  hw_uint<16> stg1_lane_61 = stg1.extract<976, 991>();
  hw_uint<16> stg1_lane_62 = stg1.extract<992, 1007>();
  hw_uint<16> stg1_lane_63 = stg1.extract<1008, 1023>();
  hw_uint<16> stg1_lane_64 = stg1.extract<1024, 1039>();
  hw_uint<16> stg1_lane_65 = stg1.extract<1040, 1055>();
  hw_uint<16> stg1_lane_66 = stg1.extract<1056, 1071>();
  hw_uint<16> stg1_lane_67 = stg1.extract<1072, 1087>();
  hw_uint<16> stg1_lane_68 = stg1.extract<1088, 1103>();
  hw_uint<16> stg1_lane_69 = stg1.extract<1104, 1119>();
  hw_uint<16> stg1_lane_70 = stg1.extract<1120, 1135>();
  hw_uint<16> stg1_lane_71 = stg1.extract<1136, 1151>();
  hw_uint<16> stg1_lane_72 = stg1.extract<1152, 1167>();
  hw_uint<16> stg1_lane_73 = stg1.extract<1168, 1183>();
  hw_uint<16> stg1_lane_74 = stg1.extract<1184, 1199>();
  hw_uint<16> stg1_lane_75 = stg1.extract<1200, 1215>();
  hw_uint<16> stg1_lane_76 = stg1.extract<1216, 1231>();
  hw_uint<16> stg1_lane_77 = stg1.extract<1232, 1247>();
  hw_uint<16> stg1_lane_78 = stg1.extract<1248, 1263>();
  hw_uint<16> stg1_lane_79 = stg1.extract<1264, 1279>();
  hw_uint<16> stg1_lane_80 = stg1.extract<1280, 1295>();
  hw_uint<16> stg1_lane_81 = stg1.extract<1296, 1311>();
  hw_uint<16> stg1_lane_82 = stg1.extract<1312, 1327>();
  hw_uint<16> stg1_lane_83 = stg1.extract<1328, 1343>();
  hw_uint<16> stg1_lane_84 = stg1.extract<1344, 1359>();
  hw_uint<16> stg1_lane_85 = stg1.extract<1360, 1375>();
  hw_uint<16> stg1_lane_86 = stg1.extract<1376, 1391>();
  hw_uint<16> stg1_lane_87 = stg1.extract<1392, 1407>();
  hw_uint<16> stg1_lane_88 = stg1.extract<1408, 1423>();
  hw_uint<16> stg1_lane_89 = stg1.extract<1424, 1439>();
  hw_uint<16> stg1_lane_90 = stg1.extract<1440, 1455>();
  hw_uint<16> stg1_lane_91 = stg1.extract<1456, 1471>();
  hw_uint<16> stg1_lane_92 = stg1.extract<1472, 1487>();
  hw_uint<16> stg1_lane_93 = stg1.extract<1488, 1503>();
  hw_uint<16> stg1_lane_94 = stg1.extract<1504, 1519>();
  hw_uint<16> stg1_lane_95 = stg1.extract<1520, 1535>();
  hw_uint<16> stg1_lane_96 = stg1.extract<1536, 1551>();
  hw_uint<16> stg1_lane_97 = stg1.extract<1552, 1567>();
  hw_uint<16> stg1_lane_98 = stg1.extract<1568, 1583>();
  hw_uint<16> stg1_lane_99 = stg1.extract<1584, 1599>();
  hw_uint<16> stg1_lane_100 = stg1.extract<1600, 1615>();
  hw_uint<16> stg1_lane_101 = stg1.extract<1616, 1631>();
  hw_uint<16> stg1_lane_102 = stg1.extract<1632, 1647>();
  hw_uint<16> stg1_lane_103 = stg1.extract<1648, 1663>();
  hw_uint<16> stg1_lane_104 = stg1.extract<1664, 1679>();
  hw_uint<16> stg1_lane_105 = stg1.extract<1680, 1695>();
  hw_uint<16> stg1_lane_106 = stg1.extract<1696, 1711>();
  hw_uint<16> stg1_lane_107 = stg1.extract<1712, 1727>();
  hw_uint<16> stg1_lane_108 = stg1.extract<1728, 1743>();
  hw_uint<16> stg1_lane_109 = stg1.extract<1744, 1759>();
  hw_uint<16> stg1_lane_110 = stg1.extract<1760, 1775>();
  hw_uint<16> stg1_lane_111 = stg1.extract<1776, 1791>();
  hw_uint<16> stg1_lane_112 = stg1.extract<1792, 1807>();
  hw_uint<16> stg1_lane_113 = stg1.extract<1808, 1823>();
  hw_uint<16> stg1_lane_114 = stg1.extract<1824, 1839>();
  hw_uint<16> stg1_lane_115 = stg1.extract<1840, 1855>();
  hw_uint<16> stg1_lane_116 = stg1.extract<1856, 1871>();
  hw_uint<16> stg1_lane_117 = stg1.extract<1872, 1887>();
  hw_uint<16> stg1_lane_118 = stg1.extract<1888, 1903>();
  hw_uint<16> stg1_lane_119 = stg1.extract<1904, 1919>();
  hw_uint<16> stg1_lane_120 = stg1.extract<1920, 1935>();
  hw_uint<16> stg1_lane_121 = stg1.extract<1936, 1951>();
  hw_uint<16> stg1_lane_122 = stg1.extract<1952, 1967>();
  hw_uint<16> stg1_lane_123 = stg1.extract<1968, 1983>();
  hw_uint<16> stg1_lane_124 = stg1.extract<1984, 1999>();
  hw_uint<16> stg1_lane_125 = stg1.extract<2000, 2015>();
  hw_uint<16> stg1_lane_126 = stg1.extract<2016, 2031>();
  hw_uint<16> stg1_lane_127 = stg1.extract<2032, 2047>();

	
  hw_uint<64 > stg1_lane_3_pack;
  set_at<0, 64, 16>(stg1_lane_3_pack, stg1_lane_0);
  set_at<16, 64, 16>(stg1_lane_3_pack, stg1_lane_1);
  set_at<32, 64, 16>(stg1_lane_3_pack, stg1_lane_2);
  set_at<48, 64, 16>(stg1_lane_3_pack, stg1_lane_3);
  auto res_stg2_update_0_sm3_0209 = stg2_generated_compute_unrolled_1(stg1_lane_3_pack);

  hw_uint<64 > stg1_lane_7_pack;
  set_at<0, 64, 16>(stg1_lane_7_pack, stg1_lane_4);
  set_at<16, 64, 16>(stg1_lane_7_pack, stg1_lane_5);
  set_at<32, 64, 16>(stg1_lane_7_pack, stg1_lane_6);
  set_at<48, 64, 16>(stg1_lane_7_pack, stg1_lane_7);
  auto res_stg2_update_0_sm3_1211 = stg2_generated_compute_unrolled_1(stg1_lane_7_pack);

  hw_uint<64 > stg1_lane_11_pack;
  set_at<0, 64, 16>(stg1_lane_11_pack, stg1_lane_8);
  set_at<16, 64, 16>(stg1_lane_11_pack, stg1_lane_9);
  set_at<32, 64, 16>(stg1_lane_11_pack, stg1_lane_10);
  set_at<48, 64, 16>(stg1_lane_11_pack, stg1_lane_11);
  auto res_stg2_update_0_sm3_2213 = stg2_generated_compute_unrolled_1(stg1_lane_11_pack);

  hw_uint<64 > stg1_lane_15_pack;
  set_at<0, 64, 16>(stg1_lane_15_pack, stg1_lane_12);
  set_at<16, 64, 16>(stg1_lane_15_pack, stg1_lane_13);
  set_at<32, 64, 16>(stg1_lane_15_pack, stg1_lane_14);
  set_at<48, 64, 16>(stg1_lane_15_pack, stg1_lane_15);
  auto res_stg2_update_0_sm3_3215 = stg2_generated_compute_unrolled_1(stg1_lane_15_pack);

  hw_uint<64 > stg1_lane_19_pack;
  set_at<0, 64, 16>(stg1_lane_19_pack, stg1_lane_16);
  set_at<16, 64, 16>(stg1_lane_19_pack, stg1_lane_17);
  set_at<32, 64, 16>(stg1_lane_19_pack, stg1_lane_18);
  set_at<48, 64, 16>(stg1_lane_19_pack, stg1_lane_19);
  auto res_stg2_update_0_sm3_4217 = stg2_generated_compute_unrolled_1(stg1_lane_19_pack);

  hw_uint<64 > stg1_lane_23_pack;
  set_at<0, 64, 16>(stg1_lane_23_pack, stg1_lane_20);
  set_at<16, 64, 16>(stg1_lane_23_pack, stg1_lane_21);
  set_at<32, 64, 16>(stg1_lane_23_pack, stg1_lane_22);
  set_at<48, 64, 16>(stg1_lane_23_pack, stg1_lane_23);
  auto res_stg2_update_0_sm3_5219 = stg2_generated_compute_unrolled_1(stg1_lane_23_pack);

  hw_uint<64 > stg1_lane_27_pack;
  set_at<0, 64, 16>(stg1_lane_27_pack, stg1_lane_24);
  set_at<16, 64, 16>(stg1_lane_27_pack, stg1_lane_25);
  set_at<32, 64, 16>(stg1_lane_27_pack, stg1_lane_26);
  set_at<48, 64, 16>(stg1_lane_27_pack, stg1_lane_27);
  auto res_stg2_update_0_sm3_6221 = stg2_generated_compute_unrolled_1(stg1_lane_27_pack);

  hw_uint<64 > stg1_lane_31_pack;
  set_at<0, 64, 16>(stg1_lane_31_pack, stg1_lane_28);
  set_at<16, 64, 16>(stg1_lane_31_pack, stg1_lane_29);
  set_at<32, 64, 16>(stg1_lane_31_pack, stg1_lane_30);
  set_at<48, 64, 16>(stg1_lane_31_pack, stg1_lane_31);
  auto res_stg2_update_0_sm3_7223 = stg2_generated_compute_unrolled_1(stg1_lane_31_pack);

  hw_uint<64 > stg1_lane_35_pack;
  set_at<0, 64, 16>(stg1_lane_35_pack, stg1_lane_32);
  set_at<16, 64, 16>(stg1_lane_35_pack, stg1_lane_33);
  set_at<32, 64, 16>(stg1_lane_35_pack, stg1_lane_34);
  set_at<48, 64, 16>(stg1_lane_35_pack, stg1_lane_35);
  auto res_stg2_update_0_sm3_8225 = stg2_generated_compute_unrolled_1(stg1_lane_35_pack);

  hw_uint<64 > stg1_lane_39_pack;
  set_at<0, 64, 16>(stg1_lane_39_pack, stg1_lane_36);
  set_at<16, 64, 16>(stg1_lane_39_pack, stg1_lane_37);
  set_at<32, 64, 16>(stg1_lane_39_pack, stg1_lane_38);
  set_at<48, 64, 16>(stg1_lane_39_pack, stg1_lane_39);
  auto res_stg2_update_0_sm3_9227 = stg2_generated_compute_unrolled_1(stg1_lane_39_pack);

  hw_uint<64 > stg1_lane_43_pack;
  set_at<0, 64, 16>(stg1_lane_43_pack, stg1_lane_40);
  set_at<16, 64, 16>(stg1_lane_43_pack, stg1_lane_41);
  set_at<32, 64, 16>(stg1_lane_43_pack, stg1_lane_42);
  set_at<48, 64, 16>(stg1_lane_43_pack, stg1_lane_43);
  auto res_stg2_update_0_sm3_10229 = stg2_generated_compute_unrolled_1(stg1_lane_43_pack);

  hw_uint<64 > stg1_lane_47_pack;
  set_at<0, 64, 16>(stg1_lane_47_pack, stg1_lane_44);
  set_at<16, 64, 16>(stg1_lane_47_pack, stg1_lane_45);
  set_at<32, 64, 16>(stg1_lane_47_pack, stg1_lane_46);
  set_at<48, 64, 16>(stg1_lane_47_pack, stg1_lane_47);
  auto res_stg2_update_0_sm3_11231 = stg2_generated_compute_unrolled_1(stg1_lane_47_pack);

  hw_uint<64 > stg1_lane_51_pack;
  set_at<0, 64, 16>(stg1_lane_51_pack, stg1_lane_48);
  set_at<16, 64, 16>(stg1_lane_51_pack, stg1_lane_49);
  set_at<32, 64, 16>(stg1_lane_51_pack, stg1_lane_50);
  set_at<48, 64, 16>(stg1_lane_51_pack, stg1_lane_51);
  auto res_stg2_update_0_sm3_12233 = stg2_generated_compute_unrolled_1(stg1_lane_51_pack);

  hw_uint<64 > stg1_lane_55_pack;
  set_at<0, 64, 16>(stg1_lane_55_pack, stg1_lane_52);
  set_at<16, 64, 16>(stg1_lane_55_pack, stg1_lane_53);
  set_at<32, 64, 16>(stg1_lane_55_pack, stg1_lane_54);
  set_at<48, 64, 16>(stg1_lane_55_pack, stg1_lane_55);
  auto res_stg2_update_0_sm3_13235 = stg2_generated_compute_unrolled_1(stg1_lane_55_pack);

  hw_uint<64 > stg1_lane_59_pack;
  set_at<0, 64, 16>(stg1_lane_59_pack, stg1_lane_56);
  set_at<16, 64, 16>(stg1_lane_59_pack, stg1_lane_57);
  set_at<32, 64, 16>(stg1_lane_59_pack, stg1_lane_58);
  set_at<48, 64, 16>(stg1_lane_59_pack, stg1_lane_59);
  auto res_stg2_update_0_sm3_14237 = stg2_generated_compute_unrolled_1(stg1_lane_59_pack);

  hw_uint<64 > stg1_lane_63_pack;
  set_at<0, 64, 16>(stg1_lane_63_pack, stg1_lane_60);
  set_at<16, 64, 16>(stg1_lane_63_pack, stg1_lane_61);
  set_at<32, 64, 16>(stg1_lane_63_pack, stg1_lane_62);
  set_at<48, 64, 16>(stg1_lane_63_pack, stg1_lane_63);
  auto res_stg2_update_0_sm3_15239 = stg2_generated_compute_unrolled_1(stg1_lane_63_pack);

  hw_uint<64 > stg1_lane_67_pack;
  set_at<0, 64, 16>(stg1_lane_67_pack, stg1_lane_64);
  set_at<16, 64, 16>(stg1_lane_67_pack, stg1_lane_65);
  set_at<32, 64, 16>(stg1_lane_67_pack, stg1_lane_66);
  set_at<48, 64, 16>(stg1_lane_67_pack, stg1_lane_67);
  auto res_stg2_update_0_sm3_16241 = stg2_generated_compute_unrolled_1(stg1_lane_67_pack);

  hw_uint<64 > stg1_lane_71_pack;
  set_at<0, 64, 16>(stg1_lane_71_pack, stg1_lane_68);
  set_at<16, 64, 16>(stg1_lane_71_pack, stg1_lane_69);
  set_at<32, 64, 16>(stg1_lane_71_pack, stg1_lane_70);
  set_at<48, 64, 16>(stg1_lane_71_pack, stg1_lane_71);
  auto res_stg2_update_0_sm3_17243 = stg2_generated_compute_unrolled_1(stg1_lane_71_pack);

  hw_uint<64 > stg1_lane_75_pack;
  set_at<0, 64, 16>(stg1_lane_75_pack, stg1_lane_72);
  set_at<16, 64, 16>(stg1_lane_75_pack, stg1_lane_73);
  set_at<32, 64, 16>(stg1_lane_75_pack, stg1_lane_74);
  set_at<48, 64, 16>(stg1_lane_75_pack, stg1_lane_75);
  auto res_stg2_update_0_sm3_18245 = stg2_generated_compute_unrolled_1(stg1_lane_75_pack);

  hw_uint<64 > stg1_lane_79_pack;
  set_at<0, 64, 16>(stg1_lane_79_pack, stg1_lane_76);
  set_at<16, 64, 16>(stg1_lane_79_pack, stg1_lane_77);
  set_at<32, 64, 16>(stg1_lane_79_pack, stg1_lane_78);
  set_at<48, 64, 16>(stg1_lane_79_pack, stg1_lane_79);
  auto res_stg2_update_0_sm3_19247 = stg2_generated_compute_unrolled_1(stg1_lane_79_pack);

  hw_uint<64 > stg1_lane_83_pack;
  set_at<0, 64, 16>(stg1_lane_83_pack, stg1_lane_80);
  set_at<16, 64, 16>(stg1_lane_83_pack, stg1_lane_81);
  set_at<32, 64, 16>(stg1_lane_83_pack, stg1_lane_82);
  set_at<48, 64, 16>(stg1_lane_83_pack, stg1_lane_83);
  auto res_stg2_update_0_sm3_20249 = stg2_generated_compute_unrolled_1(stg1_lane_83_pack);

  hw_uint<64 > stg1_lane_87_pack;
  set_at<0, 64, 16>(stg1_lane_87_pack, stg1_lane_84);
  set_at<16, 64, 16>(stg1_lane_87_pack, stg1_lane_85);
  set_at<32, 64, 16>(stg1_lane_87_pack, stg1_lane_86);
  set_at<48, 64, 16>(stg1_lane_87_pack, stg1_lane_87);
  auto res_stg2_update_0_sm3_21251 = stg2_generated_compute_unrolled_1(stg1_lane_87_pack);

  hw_uint<64 > stg1_lane_91_pack;
  set_at<0, 64, 16>(stg1_lane_91_pack, stg1_lane_88);
  set_at<16, 64, 16>(stg1_lane_91_pack, stg1_lane_89);
  set_at<32, 64, 16>(stg1_lane_91_pack, stg1_lane_90);
  set_at<48, 64, 16>(stg1_lane_91_pack, stg1_lane_91);
  auto res_stg2_update_0_sm3_22253 = stg2_generated_compute_unrolled_1(stg1_lane_91_pack);

  hw_uint<64 > stg1_lane_95_pack;
  set_at<0, 64, 16>(stg1_lane_95_pack, stg1_lane_92);
  set_at<16, 64, 16>(stg1_lane_95_pack, stg1_lane_93);
  set_at<32, 64, 16>(stg1_lane_95_pack, stg1_lane_94);
  set_at<48, 64, 16>(stg1_lane_95_pack, stg1_lane_95);
  auto res_stg2_update_0_sm3_23255 = stg2_generated_compute_unrolled_1(stg1_lane_95_pack);

  hw_uint<64 > stg1_lane_99_pack;
  set_at<0, 64, 16>(stg1_lane_99_pack, stg1_lane_96);
  set_at<16, 64, 16>(stg1_lane_99_pack, stg1_lane_97);
  set_at<32, 64, 16>(stg1_lane_99_pack, stg1_lane_98);
  set_at<48, 64, 16>(stg1_lane_99_pack, stg1_lane_99);
  auto res_stg2_update_0_sm3_24257 = stg2_generated_compute_unrolled_1(stg1_lane_99_pack);

  hw_uint<64 > stg1_lane_103_pack;
  set_at<0, 64, 16>(stg1_lane_103_pack, stg1_lane_100);
  set_at<16, 64, 16>(stg1_lane_103_pack, stg1_lane_101);
  set_at<32, 64, 16>(stg1_lane_103_pack, stg1_lane_102);
  set_at<48, 64, 16>(stg1_lane_103_pack, stg1_lane_103);
  auto res_stg2_update_0_sm3_25259 = stg2_generated_compute_unrolled_1(stg1_lane_103_pack);

  hw_uint<64 > stg1_lane_107_pack;
  set_at<0, 64, 16>(stg1_lane_107_pack, stg1_lane_104);
  set_at<16, 64, 16>(stg1_lane_107_pack, stg1_lane_105);
  set_at<32, 64, 16>(stg1_lane_107_pack, stg1_lane_106);
  set_at<48, 64, 16>(stg1_lane_107_pack, stg1_lane_107);
  auto res_stg2_update_0_sm3_26261 = stg2_generated_compute_unrolled_1(stg1_lane_107_pack);

  hw_uint<64 > stg1_lane_111_pack;
  set_at<0, 64, 16>(stg1_lane_111_pack, stg1_lane_108);
  set_at<16, 64, 16>(stg1_lane_111_pack, stg1_lane_109);
  set_at<32, 64, 16>(stg1_lane_111_pack, stg1_lane_110);
  set_at<48, 64, 16>(stg1_lane_111_pack, stg1_lane_111);
  auto res_stg2_update_0_sm3_27263 = stg2_generated_compute_unrolled_1(stg1_lane_111_pack);

  hw_uint<64 > stg1_lane_115_pack;
  set_at<0, 64, 16>(stg1_lane_115_pack, stg1_lane_112);
  set_at<16, 64, 16>(stg1_lane_115_pack, stg1_lane_113);
  set_at<32, 64, 16>(stg1_lane_115_pack, stg1_lane_114);
  set_at<48, 64, 16>(stg1_lane_115_pack, stg1_lane_115);
  auto res_stg2_update_0_sm3_28265 = stg2_generated_compute_unrolled_1(stg1_lane_115_pack);

  hw_uint<64 > stg1_lane_119_pack;
  set_at<0, 64, 16>(stg1_lane_119_pack, stg1_lane_116);
  set_at<16, 64, 16>(stg1_lane_119_pack, stg1_lane_117);
  set_at<32, 64, 16>(stg1_lane_119_pack, stg1_lane_118);
  set_at<48, 64, 16>(stg1_lane_119_pack, stg1_lane_119);
  auto res_stg2_update_0_sm3_29267 = stg2_generated_compute_unrolled_1(stg1_lane_119_pack);

  hw_uint<64 > stg1_lane_123_pack;
  set_at<0, 64, 16>(stg1_lane_123_pack, stg1_lane_120);
  set_at<16, 64, 16>(stg1_lane_123_pack, stg1_lane_121);
  set_at<32, 64, 16>(stg1_lane_123_pack, stg1_lane_122);
  set_at<48, 64, 16>(stg1_lane_123_pack, stg1_lane_123);
  auto res_stg2_update_0_sm3_30269 = stg2_generated_compute_unrolled_1(stg1_lane_123_pack);

  hw_uint<64 > stg1_lane_127_pack;
  set_at<0, 64, 16>(stg1_lane_127_pack, stg1_lane_124);
  set_at<16, 64, 16>(stg1_lane_127_pack, stg1_lane_125);
  set_at<32, 64, 16>(stg1_lane_127_pack, stg1_lane_126);
  set_at<48, 64, 16>(stg1_lane_127_pack, stg1_lane_127);
  auto res_stg2_update_0_sm3_31271 = stg2_generated_compute_unrolled_1(stg1_lane_127_pack);
  hw_uint<512 > return_value1115;
  set_at<0, 512, 16>(return_value1115, res_stg2_update_0_sm3_0209);
  set_at<16, 512, 16>(return_value1115, res_stg2_update_0_sm3_1211);
  set_at<32, 512, 16>(return_value1115, res_stg2_update_0_sm3_2213);
  set_at<48, 512, 16>(return_value1115, res_stg2_update_0_sm3_3215);
  set_at<64, 512, 16>(return_value1115, res_stg2_update_0_sm3_4217);
  set_at<80, 512, 16>(return_value1115, res_stg2_update_0_sm3_5219);
  set_at<96, 512, 16>(return_value1115, res_stg2_update_0_sm3_6221);
  set_at<112, 512, 16>(return_value1115, res_stg2_update_0_sm3_7223);
  set_at<128, 512, 16>(return_value1115, res_stg2_update_0_sm3_8225);
  set_at<144, 512, 16>(return_value1115, res_stg2_update_0_sm3_9227);
  set_at<160, 512, 16>(return_value1115, res_stg2_update_0_sm3_10229);
  set_at<176, 512, 16>(return_value1115, res_stg2_update_0_sm3_11231);
  set_at<192, 512, 16>(return_value1115, res_stg2_update_0_sm3_12233);
  set_at<208, 512, 16>(return_value1115, res_stg2_update_0_sm3_13235);
  set_at<224, 512, 16>(return_value1115, res_stg2_update_0_sm3_14237);
  set_at<240, 512, 16>(return_value1115, res_stg2_update_0_sm3_15239);
  set_at<256, 512, 16>(return_value1115, res_stg2_update_0_sm3_16241);
  set_at<272, 512, 16>(return_value1115, res_stg2_update_0_sm3_17243);
  set_at<288, 512, 16>(return_value1115, res_stg2_update_0_sm3_18245);
  set_at<304, 512, 16>(return_value1115, res_stg2_update_0_sm3_19247);
  set_at<320, 512, 16>(return_value1115, res_stg2_update_0_sm3_20249);
  set_at<336, 512, 16>(return_value1115, res_stg2_update_0_sm3_21251);
  set_at<352, 512, 16>(return_value1115, res_stg2_update_0_sm3_22253);
  set_at<368, 512, 16>(return_value1115, res_stg2_update_0_sm3_23255);
  set_at<384, 512, 16>(return_value1115, res_stg2_update_0_sm3_24257);
  set_at<400, 512, 16>(return_value1115, res_stg2_update_0_sm3_25259);
  set_at<416, 512, 16>(return_value1115, res_stg2_update_0_sm3_26261);
  set_at<432, 512, 16>(return_value1115, res_stg2_update_0_sm3_27263);
  set_at<448, 512, 16>(return_value1115, res_stg2_update_0_sm3_28265);
  set_at<464, 512, 16>(return_value1115, res_stg2_update_0_sm3_29267);
  set_at<480, 512, 16>(return_value1115, res_stg2_update_0_sm3_30269);
  set_at<496, 512, 16>(return_value1115, res_stg2_update_0_sm3_31271);
  return return_value1115;

}

hw_uint<512> stg3_1_cu1117(hw_uint<16*128>& stg2) {
  hw_uint<16> stg2_lane_0 = stg2.extract<0, 15>();
  hw_uint<16> stg2_lane_1 = stg2.extract<16, 31>();
  hw_uint<16> stg2_lane_2 = stg2.extract<32, 47>();
  hw_uint<16> stg2_lane_3 = stg2.extract<48, 63>();
  hw_uint<16> stg2_lane_4 = stg2.extract<64, 79>();
  hw_uint<16> stg2_lane_5 = stg2.extract<80, 95>();
  hw_uint<16> stg2_lane_6 = stg2.extract<96, 111>();
  hw_uint<16> stg2_lane_7 = stg2.extract<112, 127>();
  hw_uint<16> stg2_lane_8 = stg2.extract<128, 143>();
  hw_uint<16> stg2_lane_9 = stg2.extract<144, 159>();
  hw_uint<16> stg2_lane_10 = stg2.extract<160, 175>();
  hw_uint<16> stg2_lane_11 = stg2.extract<176, 191>();
  hw_uint<16> stg2_lane_12 = stg2.extract<192, 207>();
  hw_uint<16> stg2_lane_13 = stg2.extract<208, 223>();
  hw_uint<16> stg2_lane_14 = stg2.extract<224, 239>();
  hw_uint<16> stg2_lane_15 = stg2.extract<240, 255>();
  hw_uint<16> stg2_lane_16 = stg2.extract<256, 271>();
  hw_uint<16> stg2_lane_17 = stg2.extract<272, 287>();
  hw_uint<16> stg2_lane_18 = stg2.extract<288, 303>();
  hw_uint<16> stg2_lane_19 = stg2.extract<304, 319>();
  hw_uint<16> stg2_lane_20 = stg2.extract<320, 335>();
  hw_uint<16> stg2_lane_21 = stg2.extract<336, 351>();
  hw_uint<16> stg2_lane_22 = stg2.extract<352, 367>();
  hw_uint<16> stg2_lane_23 = stg2.extract<368, 383>();
  hw_uint<16> stg2_lane_24 = stg2.extract<384, 399>();
  hw_uint<16> stg2_lane_25 = stg2.extract<400, 415>();
  hw_uint<16> stg2_lane_26 = stg2.extract<416, 431>();
  hw_uint<16> stg2_lane_27 = stg2.extract<432, 447>();
  hw_uint<16> stg2_lane_28 = stg2.extract<448, 463>();
  hw_uint<16> stg2_lane_29 = stg2.extract<464, 479>();
  hw_uint<16> stg2_lane_30 = stg2.extract<480, 495>();
  hw_uint<16> stg2_lane_31 = stg2.extract<496, 511>();
  hw_uint<16> stg2_lane_32 = stg2.extract<512, 527>();
  hw_uint<16> stg2_lane_33 = stg2.extract<528, 543>();
  hw_uint<16> stg2_lane_34 = stg2.extract<544, 559>();
  hw_uint<16> stg2_lane_35 = stg2.extract<560, 575>();
  hw_uint<16> stg2_lane_36 = stg2.extract<576, 591>();
  hw_uint<16> stg2_lane_37 = stg2.extract<592, 607>();
  hw_uint<16> stg2_lane_38 = stg2.extract<608, 623>();
  hw_uint<16> stg2_lane_39 = stg2.extract<624, 639>();
  hw_uint<16> stg2_lane_40 = stg2.extract<640, 655>();
  hw_uint<16> stg2_lane_41 = stg2.extract<656, 671>();
  hw_uint<16> stg2_lane_42 = stg2.extract<672, 687>();
  hw_uint<16> stg2_lane_43 = stg2.extract<688, 703>();
  hw_uint<16> stg2_lane_44 = stg2.extract<704, 719>();
  hw_uint<16> stg2_lane_45 = stg2.extract<720, 735>();
  hw_uint<16> stg2_lane_46 = stg2.extract<736, 751>();
  hw_uint<16> stg2_lane_47 = stg2.extract<752, 767>();
  hw_uint<16> stg2_lane_48 = stg2.extract<768, 783>();
  hw_uint<16> stg2_lane_49 = stg2.extract<784, 799>();
  hw_uint<16> stg2_lane_50 = stg2.extract<800, 815>();
  hw_uint<16> stg2_lane_51 = stg2.extract<816, 831>();
  hw_uint<16> stg2_lane_52 = stg2.extract<832, 847>();
  hw_uint<16> stg2_lane_53 = stg2.extract<848, 863>();
  hw_uint<16> stg2_lane_54 = stg2.extract<864, 879>();
  hw_uint<16> stg2_lane_55 = stg2.extract<880, 895>();
  hw_uint<16> stg2_lane_56 = stg2.extract<896, 911>();
  hw_uint<16> stg2_lane_57 = stg2.extract<912, 927>();
  hw_uint<16> stg2_lane_58 = stg2.extract<928, 943>();
  hw_uint<16> stg2_lane_59 = stg2.extract<944, 959>();
  hw_uint<16> stg2_lane_60 = stg2.extract<960, 975>();
  hw_uint<16> stg2_lane_61 = stg2.extract<976, 991>();
  hw_uint<16> stg2_lane_62 = stg2.extract<992, 1007>();
  hw_uint<16> stg2_lane_63 = stg2.extract<1008, 1023>();
  hw_uint<16> stg2_lane_64 = stg2.extract<1024, 1039>();
  hw_uint<16> stg2_lane_65 = stg2.extract<1040, 1055>();
  hw_uint<16> stg2_lane_66 = stg2.extract<1056, 1071>();
  hw_uint<16> stg2_lane_67 = stg2.extract<1072, 1087>();
  hw_uint<16> stg2_lane_68 = stg2.extract<1088, 1103>();
  hw_uint<16> stg2_lane_69 = stg2.extract<1104, 1119>();
  hw_uint<16> stg2_lane_70 = stg2.extract<1120, 1135>();
  hw_uint<16> stg2_lane_71 = stg2.extract<1136, 1151>();
  hw_uint<16> stg2_lane_72 = stg2.extract<1152, 1167>();
  hw_uint<16> stg2_lane_73 = stg2.extract<1168, 1183>();
  hw_uint<16> stg2_lane_74 = stg2.extract<1184, 1199>();
  hw_uint<16> stg2_lane_75 = stg2.extract<1200, 1215>();
  hw_uint<16> stg2_lane_76 = stg2.extract<1216, 1231>();
  hw_uint<16> stg2_lane_77 = stg2.extract<1232, 1247>();
  hw_uint<16> stg2_lane_78 = stg2.extract<1248, 1263>();
  hw_uint<16> stg2_lane_79 = stg2.extract<1264, 1279>();
  hw_uint<16> stg2_lane_80 = stg2.extract<1280, 1295>();
  hw_uint<16> stg2_lane_81 = stg2.extract<1296, 1311>();
  hw_uint<16> stg2_lane_82 = stg2.extract<1312, 1327>();
  hw_uint<16> stg2_lane_83 = stg2.extract<1328, 1343>();
  hw_uint<16> stg2_lane_84 = stg2.extract<1344, 1359>();
  hw_uint<16> stg2_lane_85 = stg2.extract<1360, 1375>();
  hw_uint<16> stg2_lane_86 = stg2.extract<1376, 1391>();
  hw_uint<16> stg2_lane_87 = stg2.extract<1392, 1407>();
  hw_uint<16> stg2_lane_88 = stg2.extract<1408, 1423>();
  hw_uint<16> stg2_lane_89 = stg2.extract<1424, 1439>();
  hw_uint<16> stg2_lane_90 = stg2.extract<1440, 1455>();
  hw_uint<16> stg2_lane_91 = stg2.extract<1456, 1471>();
  hw_uint<16> stg2_lane_92 = stg2.extract<1472, 1487>();
  hw_uint<16> stg2_lane_93 = stg2.extract<1488, 1503>();
  hw_uint<16> stg2_lane_94 = stg2.extract<1504, 1519>();
  hw_uint<16> stg2_lane_95 = stg2.extract<1520, 1535>();
  hw_uint<16> stg2_lane_96 = stg2.extract<1536, 1551>();
  hw_uint<16> stg2_lane_97 = stg2.extract<1552, 1567>();
  hw_uint<16> stg2_lane_98 = stg2.extract<1568, 1583>();
  hw_uint<16> stg2_lane_99 = stg2.extract<1584, 1599>();
  hw_uint<16> stg2_lane_100 = stg2.extract<1600, 1615>();
  hw_uint<16> stg2_lane_101 = stg2.extract<1616, 1631>();
  hw_uint<16> stg2_lane_102 = stg2.extract<1632, 1647>();
  hw_uint<16> stg2_lane_103 = stg2.extract<1648, 1663>();
  hw_uint<16> stg2_lane_104 = stg2.extract<1664, 1679>();
  hw_uint<16> stg2_lane_105 = stg2.extract<1680, 1695>();
  hw_uint<16> stg2_lane_106 = stg2.extract<1696, 1711>();
  hw_uint<16> stg2_lane_107 = stg2.extract<1712, 1727>();
  hw_uint<16> stg2_lane_108 = stg2.extract<1728, 1743>();
  hw_uint<16> stg2_lane_109 = stg2.extract<1744, 1759>();
  hw_uint<16> stg2_lane_110 = stg2.extract<1760, 1775>();
  hw_uint<16> stg2_lane_111 = stg2.extract<1776, 1791>();
  hw_uint<16> stg2_lane_112 = stg2.extract<1792, 1807>();
  hw_uint<16> stg2_lane_113 = stg2.extract<1808, 1823>();
  hw_uint<16> stg2_lane_114 = stg2.extract<1824, 1839>();
  hw_uint<16> stg2_lane_115 = stg2.extract<1840, 1855>();
  hw_uint<16> stg2_lane_116 = stg2.extract<1856, 1871>();
  hw_uint<16> stg2_lane_117 = stg2.extract<1872, 1887>();
  hw_uint<16> stg2_lane_118 = stg2.extract<1888, 1903>();
  hw_uint<16> stg2_lane_119 = stg2.extract<1904, 1919>();
  hw_uint<16> stg2_lane_120 = stg2.extract<1920, 1935>();
  hw_uint<16> stg2_lane_121 = stg2.extract<1936, 1951>();
  hw_uint<16> stg2_lane_122 = stg2.extract<1952, 1967>();
  hw_uint<16> stg2_lane_123 = stg2.extract<1968, 1983>();
  hw_uint<16> stg2_lane_124 = stg2.extract<1984, 1999>();
  hw_uint<16> stg2_lane_125 = stg2.extract<2000, 2015>();
  hw_uint<16> stg2_lane_126 = stg2.extract<2016, 2031>();
  hw_uint<16> stg2_lane_127 = stg2.extract<2032, 2047>();

	
  hw_uint<64 > stg2_lane_3_pack;
  set_at<0, 64, 16>(stg2_lane_3_pack, stg2_lane_0);
  set_at<16, 64, 16>(stg2_lane_3_pack, stg2_lane_1);
  set_at<32, 64, 16>(stg2_lane_3_pack, stg2_lane_2);
  set_at<48, 64, 16>(stg2_lane_3_pack, stg2_lane_3);
  auto res_stg3_update_0_sm4_0273 = stg3_generated_compute_unrolled_1(stg2_lane_3_pack);

  hw_uint<64 > stg2_lane_7_pack;
  set_at<0, 64, 16>(stg2_lane_7_pack, stg2_lane_4);
  set_at<16, 64, 16>(stg2_lane_7_pack, stg2_lane_5);
  set_at<32, 64, 16>(stg2_lane_7_pack, stg2_lane_6);
  set_at<48, 64, 16>(stg2_lane_7_pack, stg2_lane_7);
  auto res_stg3_update_0_sm4_1275 = stg3_generated_compute_unrolled_1(stg2_lane_7_pack);

  hw_uint<64 > stg2_lane_11_pack;
  set_at<0, 64, 16>(stg2_lane_11_pack, stg2_lane_8);
  set_at<16, 64, 16>(stg2_lane_11_pack, stg2_lane_9);
  set_at<32, 64, 16>(stg2_lane_11_pack, stg2_lane_10);
  set_at<48, 64, 16>(stg2_lane_11_pack, stg2_lane_11);
  auto res_stg3_update_0_sm4_2277 = stg3_generated_compute_unrolled_1(stg2_lane_11_pack);

  hw_uint<64 > stg2_lane_15_pack;
  set_at<0, 64, 16>(stg2_lane_15_pack, stg2_lane_12);
  set_at<16, 64, 16>(stg2_lane_15_pack, stg2_lane_13);
  set_at<32, 64, 16>(stg2_lane_15_pack, stg2_lane_14);
  set_at<48, 64, 16>(stg2_lane_15_pack, stg2_lane_15);
  auto res_stg3_update_0_sm4_3279 = stg3_generated_compute_unrolled_1(stg2_lane_15_pack);

  hw_uint<64 > stg2_lane_19_pack;
  set_at<0, 64, 16>(stg2_lane_19_pack, stg2_lane_16);
  set_at<16, 64, 16>(stg2_lane_19_pack, stg2_lane_17);
  set_at<32, 64, 16>(stg2_lane_19_pack, stg2_lane_18);
  set_at<48, 64, 16>(stg2_lane_19_pack, stg2_lane_19);
  auto res_stg3_update_0_sm4_4281 = stg3_generated_compute_unrolled_1(stg2_lane_19_pack);

  hw_uint<64 > stg2_lane_23_pack;
  set_at<0, 64, 16>(stg2_lane_23_pack, stg2_lane_20);
  set_at<16, 64, 16>(stg2_lane_23_pack, stg2_lane_21);
  set_at<32, 64, 16>(stg2_lane_23_pack, stg2_lane_22);
  set_at<48, 64, 16>(stg2_lane_23_pack, stg2_lane_23);
  auto res_stg3_update_0_sm4_5283 = stg3_generated_compute_unrolled_1(stg2_lane_23_pack);

  hw_uint<64 > stg2_lane_27_pack;
  set_at<0, 64, 16>(stg2_lane_27_pack, stg2_lane_24);
  set_at<16, 64, 16>(stg2_lane_27_pack, stg2_lane_25);
  set_at<32, 64, 16>(stg2_lane_27_pack, stg2_lane_26);
  set_at<48, 64, 16>(stg2_lane_27_pack, stg2_lane_27);
  auto res_stg3_update_0_sm4_6285 = stg3_generated_compute_unrolled_1(stg2_lane_27_pack);

  hw_uint<64 > stg2_lane_31_pack;
  set_at<0, 64, 16>(stg2_lane_31_pack, stg2_lane_28);
  set_at<16, 64, 16>(stg2_lane_31_pack, stg2_lane_29);
  set_at<32, 64, 16>(stg2_lane_31_pack, stg2_lane_30);
  set_at<48, 64, 16>(stg2_lane_31_pack, stg2_lane_31);
  auto res_stg3_update_0_sm4_7287 = stg3_generated_compute_unrolled_1(stg2_lane_31_pack);

  hw_uint<64 > stg2_lane_35_pack;
  set_at<0, 64, 16>(stg2_lane_35_pack, stg2_lane_32);
  set_at<16, 64, 16>(stg2_lane_35_pack, stg2_lane_33);
  set_at<32, 64, 16>(stg2_lane_35_pack, stg2_lane_34);
  set_at<48, 64, 16>(stg2_lane_35_pack, stg2_lane_35);
  auto res_stg3_update_0_sm4_8289 = stg3_generated_compute_unrolled_1(stg2_lane_35_pack);

  hw_uint<64 > stg2_lane_39_pack;
  set_at<0, 64, 16>(stg2_lane_39_pack, stg2_lane_36);
  set_at<16, 64, 16>(stg2_lane_39_pack, stg2_lane_37);
  set_at<32, 64, 16>(stg2_lane_39_pack, stg2_lane_38);
  set_at<48, 64, 16>(stg2_lane_39_pack, stg2_lane_39);
  auto res_stg3_update_0_sm4_9291 = stg3_generated_compute_unrolled_1(stg2_lane_39_pack);

  hw_uint<64 > stg2_lane_43_pack;
  set_at<0, 64, 16>(stg2_lane_43_pack, stg2_lane_40);
  set_at<16, 64, 16>(stg2_lane_43_pack, stg2_lane_41);
  set_at<32, 64, 16>(stg2_lane_43_pack, stg2_lane_42);
  set_at<48, 64, 16>(stg2_lane_43_pack, stg2_lane_43);
  auto res_stg3_update_0_sm4_10293 = stg3_generated_compute_unrolled_1(stg2_lane_43_pack);

  hw_uint<64 > stg2_lane_47_pack;
  set_at<0, 64, 16>(stg2_lane_47_pack, stg2_lane_44);
  set_at<16, 64, 16>(stg2_lane_47_pack, stg2_lane_45);
  set_at<32, 64, 16>(stg2_lane_47_pack, stg2_lane_46);
  set_at<48, 64, 16>(stg2_lane_47_pack, stg2_lane_47);
  auto res_stg3_update_0_sm4_11295 = stg3_generated_compute_unrolled_1(stg2_lane_47_pack);

  hw_uint<64 > stg2_lane_51_pack;
  set_at<0, 64, 16>(stg2_lane_51_pack, stg2_lane_48);
  set_at<16, 64, 16>(stg2_lane_51_pack, stg2_lane_49);
  set_at<32, 64, 16>(stg2_lane_51_pack, stg2_lane_50);
  set_at<48, 64, 16>(stg2_lane_51_pack, stg2_lane_51);
  auto res_stg3_update_0_sm4_12297 = stg3_generated_compute_unrolled_1(stg2_lane_51_pack);

  hw_uint<64 > stg2_lane_55_pack;
  set_at<0, 64, 16>(stg2_lane_55_pack, stg2_lane_52);
  set_at<16, 64, 16>(stg2_lane_55_pack, stg2_lane_53);
  set_at<32, 64, 16>(stg2_lane_55_pack, stg2_lane_54);
  set_at<48, 64, 16>(stg2_lane_55_pack, stg2_lane_55);
  auto res_stg3_update_0_sm4_13299 = stg3_generated_compute_unrolled_1(stg2_lane_55_pack);

  hw_uint<64 > stg2_lane_59_pack;
  set_at<0, 64, 16>(stg2_lane_59_pack, stg2_lane_56);
  set_at<16, 64, 16>(stg2_lane_59_pack, stg2_lane_57);
  set_at<32, 64, 16>(stg2_lane_59_pack, stg2_lane_58);
  set_at<48, 64, 16>(stg2_lane_59_pack, stg2_lane_59);
  auto res_stg3_update_0_sm4_14301 = stg3_generated_compute_unrolled_1(stg2_lane_59_pack);

  hw_uint<64 > stg2_lane_63_pack;
  set_at<0, 64, 16>(stg2_lane_63_pack, stg2_lane_60);
  set_at<16, 64, 16>(stg2_lane_63_pack, stg2_lane_61);
  set_at<32, 64, 16>(stg2_lane_63_pack, stg2_lane_62);
  set_at<48, 64, 16>(stg2_lane_63_pack, stg2_lane_63);
  auto res_stg3_update_0_sm4_15303 = stg3_generated_compute_unrolled_1(stg2_lane_63_pack);

  hw_uint<64 > stg2_lane_67_pack;
  set_at<0, 64, 16>(stg2_lane_67_pack, stg2_lane_64);
  set_at<16, 64, 16>(stg2_lane_67_pack, stg2_lane_65);
  set_at<32, 64, 16>(stg2_lane_67_pack, stg2_lane_66);
  set_at<48, 64, 16>(stg2_lane_67_pack, stg2_lane_67);
  auto res_stg3_update_0_sm4_16305 = stg3_generated_compute_unrolled_1(stg2_lane_67_pack);

  hw_uint<64 > stg2_lane_71_pack;
  set_at<0, 64, 16>(stg2_lane_71_pack, stg2_lane_68);
  set_at<16, 64, 16>(stg2_lane_71_pack, stg2_lane_69);
  set_at<32, 64, 16>(stg2_lane_71_pack, stg2_lane_70);
  set_at<48, 64, 16>(stg2_lane_71_pack, stg2_lane_71);
  auto res_stg3_update_0_sm4_17307 = stg3_generated_compute_unrolled_1(stg2_lane_71_pack);

  hw_uint<64 > stg2_lane_75_pack;
  set_at<0, 64, 16>(stg2_lane_75_pack, stg2_lane_72);
  set_at<16, 64, 16>(stg2_lane_75_pack, stg2_lane_73);
  set_at<32, 64, 16>(stg2_lane_75_pack, stg2_lane_74);
  set_at<48, 64, 16>(stg2_lane_75_pack, stg2_lane_75);
  auto res_stg3_update_0_sm4_18309 = stg3_generated_compute_unrolled_1(stg2_lane_75_pack);

  hw_uint<64 > stg2_lane_79_pack;
  set_at<0, 64, 16>(stg2_lane_79_pack, stg2_lane_76);
  set_at<16, 64, 16>(stg2_lane_79_pack, stg2_lane_77);
  set_at<32, 64, 16>(stg2_lane_79_pack, stg2_lane_78);
  set_at<48, 64, 16>(stg2_lane_79_pack, stg2_lane_79);
  auto res_stg3_update_0_sm4_19311 = stg3_generated_compute_unrolled_1(stg2_lane_79_pack);

  hw_uint<64 > stg2_lane_83_pack;
  set_at<0, 64, 16>(stg2_lane_83_pack, stg2_lane_80);
  set_at<16, 64, 16>(stg2_lane_83_pack, stg2_lane_81);
  set_at<32, 64, 16>(stg2_lane_83_pack, stg2_lane_82);
  set_at<48, 64, 16>(stg2_lane_83_pack, stg2_lane_83);
  auto res_stg3_update_0_sm4_20313 = stg3_generated_compute_unrolled_1(stg2_lane_83_pack);

  hw_uint<64 > stg2_lane_87_pack;
  set_at<0, 64, 16>(stg2_lane_87_pack, stg2_lane_84);
  set_at<16, 64, 16>(stg2_lane_87_pack, stg2_lane_85);
  set_at<32, 64, 16>(stg2_lane_87_pack, stg2_lane_86);
  set_at<48, 64, 16>(stg2_lane_87_pack, stg2_lane_87);
  auto res_stg3_update_0_sm4_21315 = stg3_generated_compute_unrolled_1(stg2_lane_87_pack);

  hw_uint<64 > stg2_lane_91_pack;
  set_at<0, 64, 16>(stg2_lane_91_pack, stg2_lane_88);
  set_at<16, 64, 16>(stg2_lane_91_pack, stg2_lane_89);
  set_at<32, 64, 16>(stg2_lane_91_pack, stg2_lane_90);
  set_at<48, 64, 16>(stg2_lane_91_pack, stg2_lane_91);
  auto res_stg3_update_0_sm4_22317 = stg3_generated_compute_unrolled_1(stg2_lane_91_pack);

  hw_uint<64 > stg2_lane_95_pack;
  set_at<0, 64, 16>(stg2_lane_95_pack, stg2_lane_92);
  set_at<16, 64, 16>(stg2_lane_95_pack, stg2_lane_93);
  set_at<32, 64, 16>(stg2_lane_95_pack, stg2_lane_94);
  set_at<48, 64, 16>(stg2_lane_95_pack, stg2_lane_95);
  auto res_stg3_update_0_sm4_23319 = stg3_generated_compute_unrolled_1(stg2_lane_95_pack);

  hw_uint<64 > stg2_lane_99_pack;
  set_at<0, 64, 16>(stg2_lane_99_pack, stg2_lane_96);
  set_at<16, 64, 16>(stg2_lane_99_pack, stg2_lane_97);
  set_at<32, 64, 16>(stg2_lane_99_pack, stg2_lane_98);
  set_at<48, 64, 16>(stg2_lane_99_pack, stg2_lane_99);
  auto res_stg3_update_0_sm4_24321 = stg3_generated_compute_unrolled_1(stg2_lane_99_pack);

  hw_uint<64 > stg2_lane_103_pack;
  set_at<0, 64, 16>(stg2_lane_103_pack, stg2_lane_100);
  set_at<16, 64, 16>(stg2_lane_103_pack, stg2_lane_101);
  set_at<32, 64, 16>(stg2_lane_103_pack, stg2_lane_102);
  set_at<48, 64, 16>(stg2_lane_103_pack, stg2_lane_103);
  auto res_stg3_update_0_sm4_25323 = stg3_generated_compute_unrolled_1(stg2_lane_103_pack);

  hw_uint<64 > stg2_lane_107_pack;
  set_at<0, 64, 16>(stg2_lane_107_pack, stg2_lane_104);
  set_at<16, 64, 16>(stg2_lane_107_pack, stg2_lane_105);
  set_at<32, 64, 16>(stg2_lane_107_pack, stg2_lane_106);
  set_at<48, 64, 16>(stg2_lane_107_pack, stg2_lane_107);
  auto res_stg3_update_0_sm4_26325 = stg3_generated_compute_unrolled_1(stg2_lane_107_pack);

  hw_uint<64 > stg2_lane_111_pack;
  set_at<0, 64, 16>(stg2_lane_111_pack, stg2_lane_108);
  set_at<16, 64, 16>(stg2_lane_111_pack, stg2_lane_109);
  set_at<32, 64, 16>(stg2_lane_111_pack, stg2_lane_110);
  set_at<48, 64, 16>(stg2_lane_111_pack, stg2_lane_111);
  auto res_stg3_update_0_sm4_27327 = stg3_generated_compute_unrolled_1(stg2_lane_111_pack);

  hw_uint<64 > stg2_lane_115_pack;
  set_at<0, 64, 16>(stg2_lane_115_pack, stg2_lane_112);
  set_at<16, 64, 16>(stg2_lane_115_pack, stg2_lane_113);
  set_at<32, 64, 16>(stg2_lane_115_pack, stg2_lane_114);
  set_at<48, 64, 16>(stg2_lane_115_pack, stg2_lane_115);
  auto res_stg3_update_0_sm4_28329 = stg3_generated_compute_unrolled_1(stg2_lane_115_pack);

  hw_uint<64 > stg2_lane_119_pack;
  set_at<0, 64, 16>(stg2_lane_119_pack, stg2_lane_116);
  set_at<16, 64, 16>(stg2_lane_119_pack, stg2_lane_117);
  set_at<32, 64, 16>(stg2_lane_119_pack, stg2_lane_118);
  set_at<48, 64, 16>(stg2_lane_119_pack, stg2_lane_119);
  auto res_stg3_update_0_sm4_29331 = stg3_generated_compute_unrolled_1(stg2_lane_119_pack);

  hw_uint<64 > stg2_lane_123_pack;
  set_at<0, 64, 16>(stg2_lane_123_pack, stg2_lane_120);
  set_at<16, 64, 16>(stg2_lane_123_pack, stg2_lane_121);
  set_at<32, 64, 16>(stg2_lane_123_pack, stg2_lane_122);
  set_at<48, 64, 16>(stg2_lane_123_pack, stg2_lane_123);
  auto res_stg3_update_0_sm4_30333 = stg3_generated_compute_unrolled_1(stg2_lane_123_pack);

  hw_uint<64 > stg2_lane_127_pack;
  set_at<0, 64, 16>(stg2_lane_127_pack, stg2_lane_124);
  set_at<16, 64, 16>(stg2_lane_127_pack, stg2_lane_125);
  set_at<32, 64, 16>(stg2_lane_127_pack, stg2_lane_126);
  set_at<48, 64, 16>(stg2_lane_127_pack, stg2_lane_127);
  auto res_stg3_update_0_sm4_31335 = stg3_generated_compute_unrolled_1(stg2_lane_127_pack);
  hw_uint<512 > return_value1118;
  set_at<0, 512, 16>(return_value1118, res_stg3_update_0_sm4_0273);
  set_at<16, 512, 16>(return_value1118, res_stg3_update_0_sm4_1275);
  set_at<32, 512, 16>(return_value1118, res_stg3_update_0_sm4_2277);
  set_at<48, 512, 16>(return_value1118, res_stg3_update_0_sm4_3279);
  set_at<64, 512, 16>(return_value1118, res_stg3_update_0_sm4_4281);
  set_at<80, 512, 16>(return_value1118, res_stg3_update_0_sm4_5283);
  set_at<96, 512, 16>(return_value1118, res_stg3_update_0_sm4_6285);
  set_at<112, 512, 16>(return_value1118, res_stg3_update_0_sm4_7287);
  set_at<128, 512, 16>(return_value1118, res_stg3_update_0_sm4_8289);
  set_at<144, 512, 16>(return_value1118, res_stg3_update_0_sm4_9291);
  set_at<160, 512, 16>(return_value1118, res_stg3_update_0_sm4_10293);
  set_at<176, 512, 16>(return_value1118, res_stg3_update_0_sm4_11295);
  set_at<192, 512, 16>(return_value1118, res_stg3_update_0_sm4_12297);
  set_at<208, 512, 16>(return_value1118, res_stg3_update_0_sm4_13299);
  set_at<224, 512, 16>(return_value1118, res_stg3_update_0_sm4_14301);
  set_at<240, 512, 16>(return_value1118, res_stg3_update_0_sm4_15303);
  set_at<256, 512, 16>(return_value1118, res_stg3_update_0_sm4_16305);
  set_at<272, 512, 16>(return_value1118, res_stg3_update_0_sm4_17307);
  set_at<288, 512, 16>(return_value1118, res_stg3_update_0_sm4_18309);
  set_at<304, 512, 16>(return_value1118, res_stg3_update_0_sm4_19311);
  set_at<320, 512, 16>(return_value1118, res_stg3_update_0_sm4_20313);
  set_at<336, 512, 16>(return_value1118, res_stg3_update_0_sm4_21315);
  set_at<352, 512, 16>(return_value1118, res_stg3_update_0_sm4_22317);
  set_at<368, 512, 16>(return_value1118, res_stg3_update_0_sm4_23319);
  set_at<384, 512, 16>(return_value1118, res_stg3_update_0_sm4_24321);
  set_at<400, 512, 16>(return_value1118, res_stg3_update_0_sm4_25323);
  set_at<416, 512, 16>(return_value1118, res_stg3_update_0_sm4_26325);
  set_at<432, 512, 16>(return_value1118, res_stg3_update_0_sm4_27327);
  set_at<448, 512, 16>(return_value1118, res_stg3_update_0_sm4_28329);
  set_at<464, 512, 16>(return_value1118, res_stg3_update_0_sm4_29331);
  set_at<480, 512, 16>(return_value1118, res_stg3_update_0_sm4_30333);
  set_at<496, 512, 16>(return_value1118, res_stg3_update_0_sm4_31335);
  return return_value1118;

}

hw_uint<512> stg4_1_cu1120(hw_uint<16*128>& stg3) {
  hw_uint<16> stg3_lane_0 = stg3.extract<0, 15>();
  hw_uint<16> stg3_lane_1 = stg3.extract<16, 31>();
  hw_uint<16> stg3_lane_2 = stg3.extract<32, 47>();
  hw_uint<16> stg3_lane_3 = stg3.extract<48, 63>();
  hw_uint<16> stg3_lane_4 = stg3.extract<64, 79>();
  hw_uint<16> stg3_lane_5 = stg3.extract<80, 95>();
  hw_uint<16> stg3_lane_6 = stg3.extract<96, 111>();
  hw_uint<16> stg3_lane_7 = stg3.extract<112, 127>();
  hw_uint<16> stg3_lane_8 = stg3.extract<128, 143>();
  hw_uint<16> stg3_lane_9 = stg3.extract<144, 159>();
  hw_uint<16> stg3_lane_10 = stg3.extract<160, 175>();
  hw_uint<16> stg3_lane_11 = stg3.extract<176, 191>();
  hw_uint<16> stg3_lane_12 = stg3.extract<192, 207>();
  hw_uint<16> stg3_lane_13 = stg3.extract<208, 223>();
  hw_uint<16> stg3_lane_14 = stg3.extract<224, 239>();
  hw_uint<16> stg3_lane_15 = stg3.extract<240, 255>();
  hw_uint<16> stg3_lane_16 = stg3.extract<256, 271>();
  hw_uint<16> stg3_lane_17 = stg3.extract<272, 287>();
  hw_uint<16> stg3_lane_18 = stg3.extract<288, 303>();
  hw_uint<16> stg3_lane_19 = stg3.extract<304, 319>();
  hw_uint<16> stg3_lane_20 = stg3.extract<320, 335>();
  hw_uint<16> stg3_lane_21 = stg3.extract<336, 351>();
  hw_uint<16> stg3_lane_22 = stg3.extract<352, 367>();
  hw_uint<16> stg3_lane_23 = stg3.extract<368, 383>();
  hw_uint<16> stg3_lane_24 = stg3.extract<384, 399>();
  hw_uint<16> stg3_lane_25 = stg3.extract<400, 415>();
  hw_uint<16> stg3_lane_26 = stg3.extract<416, 431>();
  hw_uint<16> stg3_lane_27 = stg3.extract<432, 447>();
  hw_uint<16> stg3_lane_28 = stg3.extract<448, 463>();
  hw_uint<16> stg3_lane_29 = stg3.extract<464, 479>();
  hw_uint<16> stg3_lane_30 = stg3.extract<480, 495>();
  hw_uint<16> stg3_lane_31 = stg3.extract<496, 511>();
  hw_uint<16> stg3_lane_32 = stg3.extract<512, 527>();
  hw_uint<16> stg3_lane_33 = stg3.extract<528, 543>();
  hw_uint<16> stg3_lane_34 = stg3.extract<544, 559>();
  hw_uint<16> stg3_lane_35 = stg3.extract<560, 575>();
  hw_uint<16> stg3_lane_36 = stg3.extract<576, 591>();
  hw_uint<16> stg3_lane_37 = stg3.extract<592, 607>();
  hw_uint<16> stg3_lane_38 = stg3.extract<608, 623>();
  hw_uint<16> stg3_lane_39 = stg3.extract<624, 639>();
  hw_uint<16> stg3_lane_40 = stg3.extract<640, 655>();
  hw_uint<16> stg3_lane_41 = stg3.extract<656, 671>();
  hw_uint<16> stg3_lane_42 = stg3.extract<672, 687>();
  hw_uint<16> stg3_lane_43 = stg3.extract<688, 703>();
  hw_uint<16> stg3_lane_44 = stg3.extract<704, 719>();
  hw_uint<16> stg3_lane_45 = stg3.extract<720, 735>();
  hw_uint<16> stg3_lane_46 = stg3.extract<736, 751>();
  hw_uint<16> stg3_lane_47 = stg3.extract<752, 767>();
  hw_uint<16> stg3_lane_48 = stg3.extract<768, 783>();
  hw_uint<16> stg3_lane_49 = stg3.extract<784, 799>();
  hw_uint<16> stg3_lane_50 = stg3.extract<800, 815>();
  hw_uint<16> stg3_lane_51 = stg3.extract<816, 831>();
  hw_uint<16> stg3_lane_52 = stg3.extract<832, 847>();
  hw_uint<16> stg3_lane_53 = stg3.extract<848, 863>();
  hw_uint<16> stg3_lane_54 = stg3.extract<864, 879>();
  hw_uint<16> stg3_lane_55 = stg3.extract<880, 895>();
  hw_uint<16> stg3_lane_56 = stg3.extract<896, 911>();
  hw_uint<16> stg3_lane_57 = stg3.extract<912, 927>();
  hw_uint<16> stg3_lane_58 = stg3.extract<928, 943>();
  hw_uint<16> stg3_lane_59 = stg3.extract<944, 959>();
  hw_uint<16> stg3_lane_60 = stg3.extract<960, 975>();
  hw_uint<16> stg3_lane_61 = stg3.extract<976, 991>();
  hw_uint<16> stg3_lane_62 = stg3.extract<992, 1007>();
  hw_uint<16> stg3_lane_63 = stg3.extract<1008, 1023>();
  hw_uint<16> stg3_lane_64 = stg3.extract<1024, 1039>();
  hw_uint<16> stg3_lane_65 = stg3.extract<1040, 1055>();
  hw_uint<16> stg3_lane_66 = stg3.extract<1056, 1071>();
  hw_uint<16> stg3_lane_67 = stg3.extract<1072, 1087>();
  hw_uint<16> stg3_lane_68 = stg3.extract<1088, 1103>();
  hw_uint<16> stg3_lane_69 = stg3.extract<1104, 1119>();
  hw_uint<16> stg3_lane_70 = stg3.extract<1120, 1135>();
  hw_uint<16> stg3_lane_71 = stg3.extract<1136, 1151>();
  hw_uint<16> stg3_lane_72 = stg3.extract<1152, 1167>();
  hw_uint<16> stg3_lane_73 = stg3.extract<1168, 1183>();
  hw_uint<16> stg3_lane_74 = stg3.extract<1184, 1199>();
  hw_uint<16> stg3_lane_75 = stg3.extract<1200, 1215>();
  hw_uint<16> stg3_lane_76 = stg3.extract<1216, 1231>();
  hw_uint<16> stg3_lane_77 = stg3.extract<1232, 1247>();
  hw_uint<16> stg3_lane_78 = stg3.extract<1248, 1263>();
  hw_uint<16> stg3_lane_79 = stg3.extract<1264, 1279>();
  hw_uint<16> stg3_lane_80 = stg3.extract<1280, 1295>();
  hw_uint<16> stg3_lane_81 = stg3.extract<1296, 1311>();
  hw_uint<16> stg3_lane_82 = stg3.extract<1312, 1327>();
  hw_uint<16> stg3_lane_83 = stg3.extract<1328, 1343>();
  hw_uint<16> stg3_lane_84 = stg3.extract<1344, 1359>();
  hw_uint<16> stg3_lane_85 = stg3.extract<1360, 1375>();
  hw_uint<16> stg3_lane_86 = stg3.extract<1376, 1391>();
  hw_uint<16> stg3_lane_87 = stg3.extract<1392, 1407>();
  hw_uint<16> stg3_lane_88 = stg3.extract<1408, 1423>();
  hw_uint<16> stg3_lane_89 = stg3.extract<1424, 1439>();
  hw_uint<16> stg3_lane_90 = stg3.extract<1440, 1455>();
  hw_uint<16> stg3_lane_91 = stg3.extract<1456, 1471>();
  hw_uint<16> stg3_lane_92 = stg3.extract<1472, 1487>();
  hw_uint<16> stg3_lane_93 = stg3.extract<1488, 1503>();
  hw_uint<16> stg3_lane_94 = stg3.extract<1504, 1519>();
  hw_uint<16> stg3_lane_95 = stg3.extract<1520, 1535>();
  hw_uint<16> stg3_lane_96 = stg3.extract<1536, 1551>();
  hw_uint<16> stg3_lane_97 = stg3.extract<1552, 1567>();
  hw_uint<16> stg3_lane_98 = stg3.extract<1568, 1583>();
  hw_uint<16> stg3_lane_99 = stg3.extract<1584, 1599>();
  hw_uint<16> stg3_lane_100 = stg3.extract<1600, 1615>();
  hw_uint<16> stg3_lane_101 = stg3.extract<1616, 1631>();
  hw_uint<16> stg3_lane_102 = stg3.extract<1632, 1647>();
  hw_uint<16> stg3_lane_103 = stg3.extract<1648, 1663>();
  hw_uint<16> stg3_lane_104 = stg3.extract<1664, 1679>();
  hw_uint<16> stg3_lane_105 = stg3.extract<1680, 1695>();
  hw_uint<16> stg3_lane_106 = stg3.extract<1696, 1711>();
  hw_uint<16> stg3_lane_107 = stg3.extract<1712, 1727>();
  hw_uint<16> stg3_lane_108 = stg3.extract<1728, 1743>();
  hw_uint<16> stg3_lane_109 = stg3.extract<1744, 1759>();
  hw_uint<16> stg3_lane_110 = stg3.extract<1760, 1775>();
  hw_uint<16> stg3_lane_111 = stg3.extract<1776, 1791>();
  hw_uint<16> stg3_lane_112 = stg3.extract<1792, 1807>();
  hw_uint<16> stg3_lane_113 = stg3.extract<1808, 1823>();
  hw_uint<16> stg3_lane_114 = stg3.extract<1824, 1839>();
  hw_uint<16> stg3_lane_115 = stg3.extract<1840, 1855>();
  hw_uint<16> stg3_lane_116 = stg3.extract<1856, 1871>();
  hw_uint<16> stg3_lane_117 = stg3.extract<1872, 1887>();
  hw_uint<16> stg3_lane_118 = stg3.extract<1888, 1903>();
  hw_uint<16> stg3_lane_119 = stg3.extract<1904, 1919>();
  hw_uint<16> stg3_lane_120 = stg3.extract<1920, 1935>();
  hw_uint<16> stg3_lane_121 = stg3.extract<1936, 1951>();
  hw_uint<16> stg3_lane_122 = stg3.extract<1952, 1967>();
  hw_uint<16> stg3_lane_123 = stg3.extract<1968, 1983>();
  hw_uint<16> stg3_lane_124 = stg3.extract<1984, 1999>();
  hw_uint<16> stg3_lane_125 = stg3.extract<2000, 2015>();
  hw_uint<16> stg3_lane_126 = stg3.extract<2016, 2031>();
  hw_uint<16> stg3_lane_127 = stg3.extract<2032, 2047>();

	
  hw_uint<64 > stg3_lane_3_pack;
  set_at<0, 64, 16>(stg3_lane_3_pack, stg3_lane_0);
  set_at<16, 64, 16>(stg3_lane_3_pack, stg3_lane_1);
  set_at<32, 64, 16>(stg3_lane_3_pack, stg3_lane_2);
  set_at<48, 64, 16>(stg3_lane_3_pack, stg3_lane_3);
  auto res_stg4_update_0_sm5_0337 = stg4_generated_compute_unrolled_1(stg3_lane_3_pack);

  hw_uint<64 > stg3_lane_7_pack;
  set_at<0, 64, 16>(stg3_lane_7_pack, stg3_lane_4);
  set_at<16, 64, 16>(stg3_lane_7_pack, stg3_lane_5);
  set_at<32, 64, 16>(stg3_lane_7_pack, stg3_lane_6);
  set_at<48, 64, 16>(stg3_lane_7_pack, stg3_lane_7);
  auto res_stg4_update_0_sm5_1339 = stg4_generated_compute_unrolled_1(stg3_lane_7_pack);

  hw_uint<64 > stg3_lane_11_pack;
  set_at<0, 64, 16>(stg3_lane_11_pack, stg3_lane_8);
  set_at<16, 64, 16>(stg3_lane_11_pack, stg3_lane_9);
  set_at<32, 64, 16>(stg3_lane_11_pack, stg3_lane_10);
  set_at<48, 64, 16>(stg3_lane_11_pack, stg3_lane_11);
  auto res_stg4_update_0_sm5_2341 = stg4_generated_compute_unrolled_1(stg3_lane_11_pack);

  hw_uint<64 > stg3_lane_15_pack;
  set_at<0, 64, 16>(stg3_lane_15_pack, stg3_lane_12);
  set_at<16, 64, 16>(stg3_lane_15_pack, stg3_lane_13);
  set_at<32, 64, 16>(stg3_lane_15_pack, stg3_lane_14);
  set_at<48, 64, 16>(stg3_lane_15_pack, stg3_lane_15);
  auto res_stg4_update_0_sm5_3343 = stg4_generated_compute_unrolled_1(stg3_lane_15_pack);

  hw_uint<64 > stg3_lane_19_pack;
  set_at<0, 64, 16>(stg3_lane_19_pack, stg3_lane_16);
  set_at<16, 64, 16>(stg3_lane_19_pack, stg3_lane_17);
  set_at<32, 64, 16>(stg3_lane_19_pack, stg3_lane_18);
  set_at<48, 64, 16>(stg3_lane_19_pack, stg3_lane_19);
  auto res_stg4_update_0_sm5_4345 = stg4_generated_compute_unrolled_1(stg3_lane_19_pack);

  hw_uint<64 > stg3_lane_23_pack;
  set_at<0, 64, 16>(stg3_lane_23_pack, stg3_lane_20);
  set_at<16, 64, 16>(stg3_lane_23_pack, stg3_lane_21);
  set_at<32, 64, 16>(stg3_lane_23_pack, stg3_lane_22);
  set_at<48, 64, 16>(stg3_lane_23_pack, stg3_lane_23);
  auto res_stg4_update_0_sm5_5347 = stg4_generated_compute_unrolled_1(stg3_lane_23_pack);

  hw_uint<64 > stg3_lane_27_pack;
  set_at<0, 64, 16>(stg3_lane_27_pack, stg3_lane_24);
  set_at<16, 64, 16>(stg3_lane_27_pack, stg3_lane_25);
  set_at<32, 64, 16>(stg3_lane_27_pack, stg3_lane_26);
  set_at<48, 64, 16>(stg3_lane_27_pack, stg3_lane_27);
  auto res_stg4_update_0_sm5_6349 = stg4_generated_compute_unrolled_1(stg3_lane_27_pack);

  hw_uint<64 > stg3_lane_31_pack;
  set_at<0, 64, 16>(stg3_lane_31_pack, stg3_lane_28);
  set_at<16, 64, 16>(stg3_lane_31_pack, stg3_lane_29);
  set_at<32, 64, 16>(stg3_lane_31_pack, stg3_lane_30);
  set_at<48, 64, 16>(stg3_lane_31_pack, stg3_lane_31);
  auto res_stg4_update_0_sm5_7351 = stg4_generated_compute_unrolled_1(stg3_lane_31_pack);

  hw_uint<64 > stg3_lane_35_pack;
  set_at<0, 64, 16>(stg3_lane_35_pack, stg3_lane_32);
  set_at<16, 64, 16>(stg3_lane_35_pack, stg3_lane_33);
  set_at<32, 64, 16>(stg3_lane_35_pack, stg3_lane_34);
  set_at<48, 64, 16>(stg3_lane_35_pack, stg3_lane_35);
  auto res_stg4_update_0_sm5_8353 = stg4_generated_compute_unrolled_1(stg3_lane_35_pack);

  hw_uint<64 > stg3_lane_39_pack;
  set_at<0, 64, 16>(stg3_lane_39_pack, stg3_lane_36);
  set_at<16, 64, 16>(stg3_lane_39_pack, stg3_lane_37);
  set_at<32, 64, 16>(stg3_lane_39_pack, stg3_lane_38);
  set_at<48, 64, 16>(stg3_lane_39_pack, stg3_lane_39);
  auto res_stg4_update_0_sm5_9355 = stg4_generated_compute_unrolled_1(stg3_lane_39_pack);

  hw_uint<64 > stg3_lane_43_pack;
  set_at<0, 64, 16>(stg3_lane_43_pack, stg3_lane_40);
  set_at<16, 64, 16>(stg3_lane_43_pack, stg3_lane_41);
  set_at<32, 64, 16>(stg3_lane_43_pack, stg3_lane_42);
  set_at<48, 64, 16>(stg3_lane_43_pack, stg3_lane_43);
  auto res_stg4_update_0_sm5_10357 = stg4_generated_compute_unrolled_1(stg3_lane_43_pack);

  hw_uint<64 > stg3_lane_47_pack;
  set_at<0, 64, 16>(stg3_lane_47_pack, stg3_lane_44);
  set_at<16, 64, 16>(stg3_lane_47_pack, stg3_lane_45);
  set_at<32, 64, 16>(stg3_lane_47_pack, stg3_lane_46);
  set_at<48, 64, 16>(stg3_lane_47_pack, stg3_lane_47);
  auto res_stg4_update_0_sm5_11359 = stg4_generated_compute_unrolled_1(stg3_lane_47_pack);

  hw_uint<64 > stg3_lane_51_pack;
  set_at<0, 64, 16>(stg3_lane_51_pack, stg3_lane_48);
  set_at<16, 64, 16>(stg3_lane_51_pack, stg3_lane_49);
  set_at<32, 64, 16>(stg3_lane_51_pack, stg3_lane_50);
  set_at<48, 64, 16>(stg3_lane_51_pack, stg3_lane_51);
  auto res_stg4_update_0_sm5_12361 = stg4_generated_compute_unrolled_1(stg3_lane_51_pack);

  hw_uint<64 > stg3_lane_55_pack;
  set_at<0, 64, 16>(stg3_lane_55_pack, stg3_lane_52);
  set_at<16, 64, 16>(stg3_lane_55_pack, stg3_lane_53);
  set_at<32, 64, 16>(stg3_lane_55_pack, stg3_lane_54);
  set_at<48, 64, 16>(stg3_lane_55_pack, stg3_lane_55);
  auto res_stg4_update_0_sm5_13363 = stg4_generated_compute_unrolled_1(stg3_lane_55_pack);

  hw_uint<64 > stg3_lane_59_pack;
  set_at<0, 64, 16>(stg3_lane_59_pack, stg3_lane_56);
  set_at<16, 64, 16>(stg3_lane_59_pack, stg3_lane_57);
  set_at<32, 64, 16>(stg3_lane_59_pack, stg3_lane_58);
  set_at<48, 64, 16>(stg3_lane_59_pack, stg3_lane_59);
  auto res_stg4_update_0_sm5_14365 = stg4_generated_compute_unrolled_1(stg3_lane_59_pack);

  hw_uint<64 > stg3_lane_63_pack;
  set_at<0, 64, 16>(stg3_lane_63_pack, stg3_lane_60);
  set_at<16, 64, 16>(stg3_lane_63_pack, stg3_lane_61);
  set_at<32, 64, 16>(stg3_lane_63_pack, stg3_lane_62);
  set_at<48, 64, 16>(stg3_lane_63_pack, stg3_lane_63);
  auto res_stg4_update_0_sm5_15367 = stg4_generated_compute_unrolled_1(stg3_lane_63_pack);

  hw_uint<64 > stg3_lane_67_pack;
  set_at<0, 64, 16>(stg3_lane_67_pack, stg3_lane_64);
  set_at<16, 64, 16>(stg3_lane_67_pack, stg3_lane_65);
  set_at<32, 64, 16>(stg3_lane_67_pack, stg3_lane_66);
  set_at<48, 64, 16>(stg3_lane_67_pack, stg3_lane_67);
  auto res_stg4_update_0_sm5_16369 = stg4_generated_compute_unrolled_1(stg3_lane_67_pack);

  hw_uint<64 > stg3_lane_71_pack;
  set_at<0, 64, 16>(stg3_lane_71_pack, stg3_lane_68);
  set_at<16, 64, 16>(stg3_lane_71_pack, stg3_lane_69);
  set_at<32, 64, 16>(stg3_lane_71_pack, stg3_lane_70);
  set_at<48, 64, 16>(stg3_lane_71_pack, stg3_lane_71);
  auto res_stg4_update_0_sm5_17371 = stg4_generated_compute_unrolled_1(stg3_lane_71_pack);

  hw_uint<64 > stg3_lane_75_pack;
  set_at<0, 64, 16>(stg3_lane_75_pack, stg3_lane_72);
  set_at<16, 64, 16>(stg3_lane_75_pack, stg3_lane_73);
  set_at<32, 64, 16>(stg3_lane_75_pack, stg3_lane_74);
  set_at<48, 64, 16>(stg3_lane_75_pack, stg3_lane_75);
  auto res_stg4_update_0_sm5_18373 = stg4_generated_compute_unrolled_1(stg3_lane_75_pack);

  hw_uint<64 > stg3_lane_79_pack;
  set_at<0, 64, 16>(stg3_lane_79_pack, stg3_lane_76);
  set_at<16, 64, 16>(stg3_lane_79_pack, stg3_lane_77);
  set_at<32, 64, 16>(stg3_lane_79_pack, stg3_lane_78);
  set_at<48, 64, 16>(stg3_lane_79_pack, stg3_lane_79);
  auto res_stg4_update_0_sm5_19375 = stg4_generated_compute_unrolled_1(stg3_lane_79_pack);

  hw_uint<64 > stg3_lane_83_pack;
  set_at<0, 64, 16>(stg3_lane_83_pack, stg3_lane_80);
  set_at<16, 64, 16>(stg3_lane_83_pack, stg3_lane_81);
  set_at<32, 64, 16>(stg3_lane_83_pack, stg3_lane_82);
  set_at<48, 64, 16>(stg3_lane_83_pack, stg3_lane_83);
  auto res_stg4_update_0_sm5_20377 = stg4_generated_compute_unrolled_1(stg3_lane_83_pack);

  hw_uint<64 > stg3_lane_87_pack;
  set_at<0, 64, 16>(stg3_lane_87_pack, stg3_lane_84);
  set_at<16, 64, 16>(stg3_lane_87_pack, stg3_lane_85);
  set_at<32, 64, 16>(stg3_lane_87_pack, stg3_lane_86);
  set_at<48, 64, 16>(stg3_lane_87_pack, stg3_lane_87);
  auto res_stg4_update_0_sm5_21379 = stg4_generated_compute_unrolled_1(stg3_lane_87_pack);

  hw_uint<64 > stg3_lane_91_pack;
  set_at<0, 64, 16>(stg3_lane_91_pack, stg3_lane_88);
  set_at<16, 64, 16>(stg3_lane_91_pack, stg3_lane_89);
  set_at<32, 64, 16>(stg3_lane_91_pack, stg3_lane_90);
  set_at<48, 64, 16>(stg3_lane_91_pack, stg3_lane_91);
  auto res_stg4_update_0_sm5_22381 = stg4_generated_compute_unrolled_1(stg3_lane_91_pack);

  hw_uint<64 > stg3_lane_95_pack;
  set_at<0, 64, 16>(stg3_lane_95_pack, stg3_lane_92);
  set_at<16, 64, 16>(stg3_lane_95_pack, stg3_lane_93);
  set_at<32, 64, 16>(stg3_lane_95_pack, stg3_lane_94);
  set_at<48, 64, 16>(stg3_lane_95_pack, stg3_lane_95);
  auto res_stg4_update_0_sm5_23383 = stg4_generated_compute_unrolled_1(stg3_lane_95_pack);

  hw_uint<64 > stg3_lane_99_pack;
  set_at<0, 64, 16>(stg3_lane_99_pack, stg3_lane_96);
  set_at<16, 64, 16>(stg3_lane_99_pack, stg3_lane_97);
  set_at<32, 64, 16>(stg3_lane_99_pack, stg3_lane_98);
  set_at<48, 64, 16>(stg3_lane_99_pack, stg3_lane_99);
  auto res_stg4_update_0_sm5_24385 = stg4_generated_compute_unrolled_1(stg3_lane_99_pack);

  hw_uint<64 > stg3_lane_103_pack;
  set_at<0, 64, 16>(stg3_lane_103_pack, stg3_lane_100);
  set_at<16, 64, 16>(stg3_lane_103_pack, stg3_lane_101);
  set_at<32, 64, 16>(stg3_lane_103_pack, stg3_lane_102);
  set_at<48, 64, 16>(stg3_lane_103_pack, stg3_lane_103);
  auto res_stg4_update_0_sm5_25387 = stg4_generated_compute_unrolled_1(stg3_lane_103_pack);

  hw_uint<64 > stg3_lane_107_pack;
  set_at<0, 64, 16>(stg3_lane_107_pack, stg3_lane_104);
  set_at<16, 64, 16>(stg3_lane_107_pack, stg3_lane_105);
  set_at<32, 64, 16>(stg3_lane_107_pack, stg3_lane_106);
  set_at<48, 64, 16>(stg3_lane_107_pack, stg3_lane_107);
  auto res_stg4_update_0_sm5_26389 = stg4_generated_compute_unrolled_1(stg3_lane_107_pack);

  hw_uint<64 > stg3_lane_111_pack;
  set_at<0, 64, 16>(stg3_lane_111_pack, stg3_lane_108);
  set_at<16, 64, 16>(stg3_lane_111_pack, stg3_lane_109);
  set_at<32, 64, 16>(stg3_lane_111_pack, stg3_lane_110);
  set_at<48, 64, 16>(stg3_lane_111_pack, stg3_lane_111);
  auto res_stg4_update_0_sm5_27391 = stg4_generated_compute_unrolled_1(stg3_lane_111_pack);

  hw_uint<64 > stg3_lane_115_pack;
  set_at<0, 64, 16>(stg3_lane_115_pack, stg3_lane_112);
  set_at<16, 64, 16>(stg3_lane_115_pack, stg3_lane_113);
  set_at<32, 64, 16>(stg3_lane_115_pack, stg3_lane_114);
  set_at<48, 64, 16>(stg3_lane_115_pack, stg3_lane_115);
  auto res_stg4_update_0_sm5_28393 = stg4_generated_compute_unrolled_1(stg3_lane_115_pack);

  hw_uint<64 > stg3_lane_119_pack;
  set_at<0, 64, 16>(stg3_lane_119_pack, stg3_lane_116);
  set_at<16, 64, 16>(stg3_lane_119_pack, stg3_lane_117);
  set_at<32, 64, 16>(stg3_lane_119_pack, stg3_lane_118);
  set_at<48, 64, 16>(stg3_lane_119_pack, stg3_lane_119);
  auto res_stg4_update_0_sm5_29395 = stg4_generated_compute_unrolled_1(stg3_lane_119_pack);

  hw_uint<64 > stg3_lane_123_pack;
  set_at<0, 64, 16>(stg3_lane_123_pack, stg3_lane_120);
  set_at<16, 64, 16>(stg3_lane_123_pack, stg3_lane_121);
  set_at<32, 64, 16>(stg3_lane_123_pack, stg3_lane_122);
  set_at<48, 64, 16>(stg3_lane_123_pack, stg3_lane_123);
  auto res_stg4_update_0_sm5_30397 = stg4_generated_compute_unrolled_1(stg3_lane_123_pack);

  hw_uint<64 > stg3_lane_127_pack;
  set_at<0, 64, 16>(stg3_lane_127_pack, stg3_lane_124);
  set_at<16, 64, 16>(stg3_lane_127_pack, stg3_lane_125);
  set_at<32, 64, 16>(stg3_lane_127_pack, stg3_lane_126);
  set_at<48, 64, 16>(stg3_lane_127_pack, stg3_lane_127);
  auto res_stg4_update_0_sm5_31399 = stg4_generated_compute_unrolled_1(stg3_lane_127_pack);
  hw_uint<512 > return_value1121;
  set_at<0, 512, 16>(return_value1121, res_stg4_update_0_sm5_0337);
  set_at<16, 512, 16>(return_value1121, res_stg4_update_0_sm5_1339);
  set_at<32, 512, 16>(return_value1121, res_stg4_update_0_sm5_2341);
  set_at<48, 512, 16>(return_value1121, res_stg4_update_0_sm5_3343);
  set_at<64, 512, 16>(return_value1121, res_stg4_update_0_sm5_4345);
  set_at<80, 512, 16>(return_value1121, res_stg4_update_0_sm5_5347);
  set_at<96, 512, 16>(return_value1121, res_stg4_update_0_sm5_6349);
  set_at<112, 512, 16>(return_value1121, res_stg4_update_0_sm5_7351);
  set_at<128, 512, 16>(return_value1121, res_stg4_update_0_sm5_8353);
  set_at<144, 512, 16>(return_value1121, res_stg4_update_0_sm5_9355);
  set_at<160, 512, 16>(return_value1121, res_stg4_update_0_sm5_10357);
  set_at<176, 512, 16>(return_value1121, res_stg4_update_0_sm5_11359);
  set_at<192, 512, 16>(return_value1121, res_stg4_update_0_sm5_12361);
  set_at<208, 512, 16>(return_value1121, res_stg4_update_0_sm5_13363);
  set_at<224, 512, 16>(return_value1121, res_stg4_update_0_sm5_14365);
  set_at<240, 512, 16>(return_value1121, res_stg4_update_0_sm5_15367);
  set_at<256, 512, 16>(return_value1121, res_stg4_update_0_sm5_16369);
  set_at<272, 512, 16>(return_value1121, res_stg4_update_0_sm5_17371);
  set_at<288, 512, 16>(return_value1121, res_stg4_update_0_sm5_18373);
  set_at<304, 512, 16>(return_value1121, res_stg4_update_0_sm5_19375);
  set_at<320, 512, 16>(return_value1121, res_stg4_update_0_sm5_20377);
  set_at<336, 512, 16>(return_value1121, res_stg4_update_0_sm5_21379);
  set_at<352, 512, 16>(return_value1121, res_stg4_update_0_sm5_22381);
  set_at<368, 512, 16>(return_value1121, res_stg4_update_0_sm5_23383);
  set_at<384, 512, 16>(return_value1121, res_stg4_update_0_sm5_24385);
  set_at<400, 512, 16>(return_value1121, res_stg4_update_0_sm5_25387);
  set_at<416, 512, 16>(return_value1121, res_stg4_update_0_sm5_26389);
  set_at<432, 512, 16>(return_value1121, res_stg4_update_0_sm5_27391);
  set_at<448, 512, 16>(return_value1121, res_stg4_update_0_sm5_28393);
  set_at<464, 512, 16>(return_value1121, res_stg4_update_0_sm5_29395);
  set_at<480, 512, 16>(return_value1121, res_stg4_update_0_sm5_30397);
  set_at<496, 512, 16>(return_value1121, res_stg4_update_0_sm5_31399);
  return return_value1121;

}

hw_uint<512> stg5_1_cu1123(hw_uint<16*128>& stg4) {
  hw_uint<16> stg4_lane_0 = stg4.extract<0, 15>();
  hw_uint<16> stg4_lane_1 = stg4.extract<16, 31>();
  hw_uint<16> stg4_lane_2 = stg4.extract<32, 47>();
  hw_uint<16> stg4_lane_3 = stg4.extract<48, 63>();
  hw_uint<16> stg4_lane_4 = stg4.extract<64, 79>();
  hw_uint<16> stg4_lane_5 = stg4.extract<80, 95>();
  hw_uint<16> stg4_lane_6 = stg4.extract<96, 111>();
  hw_uint<16> stg4_lane_7 = stg4.extract<112, 127>();
  hw_uint<16> stg4_lane_8 = stg4.extract<128, 143>();
  hw_uint<16> stg4_lane_9 = stg4.extract<144, 159>();
  hw_uint<16> stg4_lane_10 = stg4.extract<160, 175>();
  hw_uint<16> stg4_lane_11 = stg4.extract<176, 191>();
  hw_uint<16> stg4_lane_12 = stg4.extract<192, 207>();
  hw_uint<16> stg4_lane_13 = stg4.extract<208, 223>();
  hw_uint<16> stg4_lane_14 = stg4.extract<224, 239>();
  hw_uint<16> stg4_lane_15 = stg4.extract<240, 255>();
  hw_uint<16> stg4_lane_16 = stg4.extract<256, 271>();
  hw_uint<16> stg4_lane_17 = stg4.extract<272, 287>();
  hw_uint<16> stg4_lane_18 = stg4.extract<288, 303>();
  hw_uint<16> stg4_lane_19 = stg4.extract<304, 319>();
  hw_uint<16> stg4_lane_20 = stg4.extract<320, 335>();
  hw_uint<16> stg4_lane_21 = stg4.extract<336, 351>();
  hw_uint<16> stg4_lane_22 = stg4.extract<352, 367>();
  hw_uint<16> stg4_lane_23 = stg4.extract<368, 383>();
  hw_uint<16> stg4_lane_24 = stg4.extract<384, 399>();
  hw_uint<16> stg4_lane_25 = stg4.extract<400, 415>();
  hw_uint<16> stg4_lane_26 = stg4.extract<416, 431>();
  hw_uint<16> stg4_lane_27 = stg4.extract<432, 447>();
  hw_uint<16> stg4_lane_28 = stg4.extract<448, 463>();
  hw_uint<16> stg4_lane_29 = stg4.extract<464, 479>();
  hw_uint<16> stg4_lane_30 = stg4.extract<480, 495>();
  hw_uint<16> stg4_lane_31 = stg4.extract<496, 511>();
  hw_uint<16> stg4_lane_32 = stg4.extract<512, 527>();
  hw_uint<16> stg4_lane_33 = stg4.extract<528, 543>();
  hw_uint<16> stg4_lane_34 = stg4.extract<544, 559>();
  hw_uint<16> stg4_lane_35 = stg4.extract<560, 575>();
  hw_uint<16> stg4_lane_36 = stg4.extract<576, 591>();
  hw_uint<16> stg4_lane_37 = stg4.extract<592, 607>();
  hw_uint<16> stg4_lane_38 = stg4.extract<608, 623>();
  hw_uint<16> stg4_lane_39 = stg4.extract<624, 639>();
  hw_uint<16> stg4_lane_40 = stg4.extract<640, 655>();
  hw_uint<16> stg4_lane_41 = stg4.extract<656, 671>();
  hw_uint<16> stg4_lane_42 = stg4.extract<672, 687>();
  hw_uint<16> stg4_lane_43 = stg4.extract<688, 703>();
  hw_uint<16> stg4_lane_44 = stg4.extract<704, 719>();
  hw_uint<16> stg4_lane_45 = stg4.extract<720, 735>();
  hw_uint<16> stg4_lane_46 = stg4.extract<736, 751>();
  hw_uint<16> stg4_lane_47 = stg4.extract<752, 767>();
  hw_uint<16> stg4_lane_48 = stg4.extract<768, 783>();
  hw_uint<16> stg4_lane_49 = stg4.extract<784, 799>();
  hw_uint<16> stg4_lane_50 = stg4.extract<800, 815>();
  hw_uint<16> stg4_lane_51 = stg4.extract<816, 831>();
  hw_uint<16> stg4_lane_52 = stg4.extract<832, 847>();
  hw_uint<16> stg4_lane_53 = stg4.extract<848, 863>();
  hw_uint<16> stg4_lane_54 = stg4.extract<864, 879>();
  hw_uint<16> stg4_lane_55 = stg4.extract<880, 895>();
  hw_uint<16> stg4_lane_56 = stg4.extract<896, 911>();
  hw_uint<16> stg4_lane_57 = stg4.extract<912, 927>();
  hw_uint<16> stg4_lane_58 = stg4.extract<928, 943>();
  hw_uint<16> stg4_lane_59 = stg4.extract<944, 959>();
  hw_uint<16> stg4_lane_60 = stg4.extract<960, 975>();
  hw_uint<16> stg4_lane_61 = stg4.extract<976, 991>();
  hw_uint<16> stg4_lane_62 = stg4.extract<992, 1007>();
  hw_uint<16> stg4_lane_63 = stg4.extract<1008, 1023>();
  hw_uint<16> stg4_lane_64 = stg4.extract<1024, 1039>();
  hw_uint<16> stg4_lane_65 = stg4.extract<1040, 1055>();
  hw_uint<16> stg4_lane_66 = stg4.extract<1056, 1071>();
  hw_uint<16> stg4_lane_67 = stg4.extract<1072, 1087>();
  hw_uint<16> stg4_lane_68 = stg4.extract<1088, 1103>();
  hw_uint<16> stg4_lane_69 = stg4.extract<1104, 1119>();
  hw_uint<16> stg4_lane_70 = stg4.extract<1120, 1135>();
  hw_uint<16> stg4_lane_71 = stg4.extract<1136, 1151>();
  hw_uint<16> stg4_lane_72 = stg4.extract<1152, 1167>();
  hw_uint<16> stg4_lane_73 = stg4.extract<1168, 1183>();
  hw_uint<16> stg4_lane_74 = stg4.extract<1184, 1199>();
  hw_uint<16> stg4_lane_75 = stg4.extract<1200, 1215>();
  hw_uint<16> stg4_lane_76 = stg4.extract<1216, 1231>();
  hw_uint<16> stg4_lane_77 = stg4.extract<1232, 1247>();
  hw_uint<16> stg4_lane_78 = stg4.extract<1248, 1263>();
  hw_uint<16> stg4_lane_79 = stg4.extract<1264, 1279>();
  hw_uint<16> stg4_lane_80 = stg4.extract<1280, 1295>();
  hw_uint<16> stg4_lane_81 = stg4.extract<1296, 1311>();
  hw_uint<16> stg4_lane_82 = stg4.extract<1312, 1327>();
  hw_uint<16> stg4_lane_83 = stg4.extract<1328, 1343>();
  hw_uint<16> stg4_lane_84 = stg4.extract<1344, 1359>();
  hw_uint<16> stg4_lane_85 = stg4.extract<1360, 1375>();
  hw_uint<16> stg4_lane_86 = stg4.extract<1376, 1391>();
  hw_uint<16> stg4_lane_87 = stg4.extract<1392, 1407>();
  hw_uint<16> stg4_lane_88 = stg4.extract<1408, 1423>();
  hw_uint<16> stg4_lane_89 = stg4.extract<1424, 1439>();
  hw_uint<16> stg4_lane_90 = stg4.extract<1440, 1455>();
  hw_uint<16> stg4_lane_91 = stg4.extract<1456, 1471>();
  hw_uint<16> stg4_lane_92 = stg4.extract<1472, 1487>();
  hw_uint<16> stg4_lane_93 = stg4.extract<1488, 1503>();
  hw_uint<16> stg4_lane_94 = stg4.extract<1504, 1519>();
  hw_uint<16> stg4_lane_95 = stg4.extract<1520, 1535>();
  hw_uint<16> stg4_lane_96 = stg4.extract<1536, 1551>();
  hw_uint<16> stg4_lane_97 = stg4.extract<1552, 1567>();
  hw_uint<16> stg4_lane_98 = stg4.extract<1568, 1583>();
  hw_uint<16> stg4_lane_99 = stg4.extract<1584, 1599>();
  hw_uint<16> stg4_lane_100 = stg4.extract<1600, 1615>();
  hw_uint<16> stg4_lane_101 = stg4.extract<1616, 1631>();
  hw_uint<16> stg4_lane_102 = stg4.extract<1632, 1647>();
  hw_uint<16> stg4_lane_103 = stg4.extract<1648, 1663>();
  hw_uint<16> stg4_lane_104 = stg4.extract<1664, 1679>();
  hw_uint<16> stg4_lane_105 = stg4.extract<1680, 1695>();
  hw_uint<16> stg4_lane_106 = stg4.extract<1696, 1711>();
  hw_uint<16> stg4_lane_107 = stg4.extract<1712, 1727>();
  hw_uint<16> stg4_lane_108 = stg4.extract<1728, 1743>();
  hw_uint<16> stg4_lane_109 = stg4.extract<1744, 1759>();
  hw_uint<16> stg4_lane_110 = stg4.extract<1760, 1775>();
  hw_uint<16> stg4_lane_111 = stg4.extract<1776, 1791>();
  hw_uint<16> stg4_lane_112 = stg4.extract<1792, 1807>();
  hw_uint<16> stg4_lane_113 = stg4.extract<1808, 1823>();
  hw_uint<16> stg4_lane_114 = stg4.extract<1824, 1839>();
  hw_uint<16> stg4_lane_115 = stg4.extract<1840, 1855>();
  hw_uint<16> stg4_lane_116 = stg4.extract<1856, 1871>();
  hw_uint<16> stg4_lane_117 = stg4.extract<1872, 1887>();
  hw_uint<16> stg4_lane_118 = stg4.extract<1888, 1903>();
  hw_uint<16> stg4_lane_119 = stg4.extract<1904, 1919>();
  hw_uint<16> stg4_lane_120 = stg4.extract<1920, 1935>();
  hw_uint<16> stg4_lane_121 = stg4.extract<1936, 1951>();
  hw_uint<16> stg4_lane_122 = stg4.extract<1952, 1967>();
  hw_uint<16> stg4_lane_123 = stg4.extract<1968, 1983>();
  hw_uint<16> stg4_lane_124 = stg4.extract<1984, 1999>();
  hw_uint<16> stg4_lane_125 = stg4.extract<2000, 2015>();
  hw_uint<16> stg4_lane_126 = stg4.extract<2016, 2031>();
  hw_uint<16> stg4_lane_127 = stg4.extract<2032, 2047>();

	
  hw_uint<64 > stg4_lane_3_pack;
  set_at<0, 64, 16>(stg4_lane_3_pack, stg4_lane_0);
  set_at<16, 64, 16>(stg4_lane_3_pack, stg4_lane_1);
  set_at<32, 64, 16>(stg4_lane_3_pack, stg4_lane_2);
  set_at<48, 64, 16>(stg4_lane_3_pack, stg4_lane_3);
  auto res_stg5_update_0_sm6_0401 = stg5_generated_compute_unrolled_1(stg4_lane_3_pack);

  hw_uint<64 > stg4_lane_7_pack;
  set_at<0, 64, 16>(stg4_lane_7_pack, stg4_lane_4);
  set_at<16, 64, 16>(stg4_lane_7_pack, stg4_lane_5);
  set_at<32, 64, 16>(stg4_lane_7_pack, stg4_lane_6);
  set_at<48, 64, 16>(stg4_lane_7_pack, stg4_lane_7);
  auto res_stg5_update_0_sm6_1403 = stg5_generated_compute_unrolled_1(stg4_lane_7_pack);

  hw_uint<64 > stg4_lane_11_pack;
  set_at<0, 64, 16>(stg4_lane_11_pack, stg4_lane_8);
  set_at<16, 64, 16>(stg4_lane_11_pack, stg4_lane_9);
  set_at<32, 64, 16>(stg4_lane_11_pack, stg4_lane_10);
  set_at<48, 64, 16>(stg4_lane_11_pack, stg4_lane_11);
  auto res_stg5_update_0_sm6_2405 = stg5_generated_compute_unrolled_1(stg4_lane_11_pack);

  hw_uint<64 > stg4_lane_15_pack;
  set_at<0, 64, 16>(stg4_lane_15_pack, stg4_lane_12);
  set_at<16, 64, 16>(stg4_lane_15_pack, stg4_lane_13);
  set_at<32, 64, 16>(stg4_lane_15_pack, stg4_lane_14);
  set_at<48, 64, 16>(stg4_lane_15_pack, stg4_lane_15);
  auto res_stg5_update_0_sm6_3407 = stg5_generated_compute_unrolled_1(stg4_lane_15_pack);

  hw_uint<64 > stg4_lane_19_pack;
  set_at<0, 64, 16>(stg4_lane_19_pack, stg4_lane_16);
  set_at<16, 64, 16>(stg4_lane_19_pack, stg4_lane_17);
  set_at<32, 64, 16>(stg4_lane_19_pack, stg4_lane_18);
  set_at<48, 64, 16>(stg4_lane_19_pack, stg4_lane_19);
  auto res_stg5_update_0_sm6_4409 = stg5_generated_compute_unrolled_1(stg4_lane_19_pack);

  hw_uint<64 > stg4_lane_23_pack;
  set_at<0, 64, 16>(stg4_lane_23_pack, stg4_lane_20);
  set_at<16, 64, 16>(stg4_lane_23_pack, stg4_lane_21);
  set_at<32, 64, 16>(stg4_lane_23_pack, stg4_lane_22);
  set_at<48, 64, 16>(stg4_lane_23_pack, stg4_lane_23);
  auto res_stg5_update_0_sm6_5411 = stg5_generated_compute_unrolled_1(stg4_lane_23_pack);

  hw_uint<64 > stg4_lane_27_pack;
  set_at<0, 64, 16>(stg4_lane_27_pack, stg4_lane_24);
  set_at<16, 64, 16>(stg4_lane_27_pack, stg4_lane_25);
  set_at<32, 64, 16>(stg4_lane_27_pack, stg4_lane_26);
  set_at<48, 64, 16>(stg4_lane_27_pack, stg4_lane_27);
  auto res_stg5_update_0_sm6_6413 = stg5_generated_compute_unrolled_1(stg4_lane_27_pack);

  hw_uint<64 > stg4_lane_31_pack;
  set_at<0, 64, 16>(stg4_lane_31_pack, stg4_lane_28);
  set_at<16, 64, 16>(stg4_lane_31_pack, stg4_lane_29);
  set_at<32, 64, 16>(stg4_lane_31_pack, stg4_lane_30);
  set_at<48, 64, 16>(stg4_lane_31_pack, stg4_lane_31);
  auto res_stg5_update_0_sm6_7415 = stg5_generated_compute_unrolled_1(stg4_lane_31_pack);

  hw_uint<64 > stg4_lane_35_pack;
  set_at<0, 64, 16>(stg4_lane_35_pack, stg4_lane_32);
  set_at<16, 64, 16>(stg4_lane_35_pack, stg4_lane_33);
  set_at<32, 64, 16>(stg4_lane_35_pack, stg4_lane_34);
  set_at<48, 64, 16>(stg4_lane_35_pack, stg4_lane_35);
  auto res_stg5_update_0_sm6_8417 = stg5_generated_compute_unrolled_1(stg4_lane_35_pack);

  hw_uint<64 > stg4_lane_39_pack;
  set_at<0, 64, 16>(stg4_lane_39_pack, stg4_lane_36);
  set_at<16, 64, 16>(stg4_lane_39_pack, stg4_lane_37);
  set_at<32, 64, 16>(stg4_lane_39_pack, stg4_lane_38);
  set_at<48, 64, 16>(stg4_lane_39_pack, stg4_lane_39);
  auto res_stg5_update_0_sm6_9419 = stg5_generated_compute_unrolled_1(stg4_lane_39_pack);

  hw_uint<64 > stg4_lane_43_pack;
  set_at<0, 64, 16>(stg4_lane_43_pack, stg4_lane_40);
  set_at<16, 64, 16>(stg4_lane_43_pack, stg4_lane_41);
  set_at<32, 64, 16>(stg4_lane_43_pack, stg4_lane_42);
  set_at<48, 64, 16>(stg4_lane_43_pack, stg4_lane_43);
  auto res_stg5_update_0_sm6_10421 = stg5_generated_compute_unrolled_1(stg4_lane_43_pack);

  hw_uint<64 > stg4_lane_47_pack;
  set_at<0, 64, 16>(stg4_lane_47_pack, stg4_lane_44);
  set_at<16, 64, 16>(stg4_lane_47_pack, stg4_lane_45);
  set_at<32, 64, 16>(stg4_lane_47_pack, stg4_lane_46);
  set_at<48, 64, 16>(stg4_lane_47_pack, stg4_lane_47);
  auto res_stg5_update_0_sm6_11423 = stg5_generated_compute_unrolled_1(stg4_lane_47_pack);

  hw_uint<64 > stg4_lane_51_pack;
  set_at<0, 64, 16>(stg4_lane_51_pack, stg4_lane_48);
  set_at<16, 64, 16>(stg4_lane_51_pack, stg4_lane_49);
  set_at<32, 64, 16>(stg4_lane_51_pack, stg4_lane_50);
  set_at<48, 64, 16>(stg4_lane_51_pack, stg4_lane_51);
  auto res_stg5_update_0_sm6_12425 = stg5_generated_compute_unrolled_1(stg4_lane_51_pack);

  hw_uint<64 > stg4_lane_55_pack;
  set_at<0, 64, 16>(stg4_lane_55_pack, stg4_lane_52);
  set_at<16, 64, 16>(stg4_lane_55_pack, stg4_lane_53);
  set_at<32, 64, 16>(stg4_lane_55_pack, stg4_lane_54);
  set_at<48, 64, 16>(stg4_lane_55_pack, stg4_lane_55);
  auto res_stg5_update_0_sm6_13427 = stg5_generated_compute_unrolled_1(stg4_lane_55_pack);

  hw_uint<64 > stg4_lane_59_pack;
  set_at<0, 64, 16>(stg4_lane_59_pack, stg4_lane_56);
  set_at<16, 64, 16>(stg4_lane_59_pack, stg4_lane_57);
  set_at<32, 64, 16>(stg4_lane_59_pack, stg4_lane_58);
  set_at<48, 64, 16>(stg4_lane_59_pack, stg4_lane_59);
  auto res_stg5_update_0_sm6_14429 = stg5_generated_compute_unrolled_1(stg4_lane_59_pack);

  hw_uint<64 > stg4_lane_63_pack;
  set_at<0, 64, 16>(stg4_lane_63_pack, stg4_lane_60);
  set_at<16, 64, 16>(stg4_lane_63_pack, stg4_lane_61);
  set_at<32, 64, 16>(stg4_lane_63_pack, stg4_lane_62);
  set_at<48, 64, 16>(stg4_lane_63_pack, stg4_lane_63);
  auto res_stg5_update_0_sm6_15431 = stg5_generated_compute_unrolled_1(stg4_lane_63_pack);

  hw_uint<64 > stg4_lane_67_pack;
  set_at<0, 64, 16>(stg4_lane_67_pack, stg4_lane_64);
  set_at<16, 64, 16>(stg4_lane_67_pack, stg4_lane_65);
  set_at<32, 64, 16>(stg4_lane_67_pack, stg4_lane_66);
  set_at<48, 64, 16>(stg4_lane_67_pack, stg4_lane_67);
  auto res_stg5_update_0_sm6_16433 = stg5_generated_compute_unrolled_1(stg4_lane_67_pack);

  hw_uint<64 > stg4_lane_71_pack;
  set_at<0, 64, 16>(stg4_lane_71_pack, stg4_lane_68);
  set_at<16, 64, 16>(stg4_lane_71_pack, stg4_lane_69);
  set_at<32, 64, 16>(stg4_lane_71_pack, stg4_lane_70);
  set_at<48, 64, 16>(stg4_lane_71_pack, stg4_lane_71);
  auto res_stg5_update_0_sm6_17435 = stg5_generated_compute_unrolled_1(stg4_lane_71_pack);

  hw_uint<64 > stg4_lane_75_pack;
  set_at<0, 64, 16>(stg4_lane_75_pack, stg4_lane_72);
  set_at<16, 64, 16>(stg4_lane_75_pack, stg4_lane_73);
  set_at<32, 64, 16>(stg4_lane_75_pack, stg4_lane_74);
  set_at<48, 64, 16>(stg4_lane_75_pack, stg4_lane_75);
  auto res_stg5_update_0_sm6_18437 = stg5_generated_compute_unrolled_1(stg4_lane_75_pack);

  hw_uint<64 > stg4_lane_79_pack;
  set_at<0, 64, 16>(stg4_lane_79_pack, stg4_lane_76);
  set_at<16, 64, 16>(stg4_lane_79_pack, stg4_lane_77);
  set_at<32, 64, 16>(stg4_lane_79_pack, stg4_lane_78);
  set_at<48, 64, 16>(stg4_lane_79_pack, stg4_lane_79);
  auto res_stg5_update_0_sm6_19439 = stg5_generated_compute_unrolled_1(stg4_lane_79_pack);

  hw_uint<64 > stg4_lane_83_pack;
  set_at<0, 64, 16>(stg4_lane_83_pack, stg4_lane_80);
  set_at<16, 64, 16>(stg4_lane_83_pack, stg4_lane_81);
  set_at<32, 64, 16>(stg4_lane_83_pack, stg4_lane_82);
  set_at<48, 64, 16>(stg4_lane_83_pack, stg4_lane_83);
  auto res_stg5_update_0_sm6_20441 = stg5_generated_compute_unrolled_1(stg4_lane_83_pack);

  hw_uint<64 > stg4_lane_87_pack;
  set_at<0, 64, 16>(stg4_lane_87_pack, stg4_lane_84);
  set_at<16, 64, 16>(stg4_lane_87_pack, stg4_lane_85);
  set_at<32, 64, 16>(stg4_lane_87_pack, stg4_lane_86);
  set_at<48, 64, 16>(stg4_lane_87_pack, stg4_lane_87);
  auto res_stg5_update_0_sm6_21443 = stg5_generated_compute_unrolled_1(stg4_lane_87_pack);

  hw_uint<64 > stg4_lane_91_pack;
  set_at<0, 64, 16>(stg4_lane_91_pack, stg4_lane_88);
  set_at<16, 64, 16>(stg4_lane_91_pack, stg4_lane_89);
  set_at<32, 64, 16>(stg4_lane_91_pack, stg4_lane_90);
  set_at<48, 64, 16>(stg4_lane_91_pack, stg4_lane_91);
  auto res_stg5_update_0_sm6_22445 = stg5_generated_compute_unrolled_1(stg4_lane_91_pack);

  hw_uint<64 > stg4_lane_95_pack;
  set_at<0, 64, 16>(stg4_lane_95_pack, stg4_lane_92);
  set_at<16, 64, 16>(stg4_lane_95_pack, stg4_lane_93);
  set_at<32, 64, 16>(stg4_lane_95_pack, stg4_lane_94);
  set_at<48, 64, 16>(stg4_lane_95_pack, stg4_lane_95);
  auto res_stg5_update_0_sm6_23447 = stg5_generated_compute_unrolled_1(stg4_lane_95_pack);

  hw_uint<64 > stg4_lane_99_pack;
  set_at<0, 64, 16>(stg4_lane_99_pack, stg4_lane_96);
  set_at<16, 64, 16>(stg4_lane_99_pack, stg4_lane_97);
  set_at<32, 64, 16>(stg4_lane_99_pack, stg4_lane_98);
  set_at<48, 64, 16>(stg4_lane_99_pack, stg4_lane_99);
  auto res_stg5_update_0_sm6_24449 = stg5_generated_compute_unrolled_1(stg4_lane_99_pack);

  hw_uint<64 > stg4_lane_103_pack;
  set_at<0, 64, 16>(stg4_lane_103_pack, stg4_lane_100);
  set_at<16, 64, 16>(stg4_lane_103_pack, stg4_lane_101);
  set_at<32, 64, 16>(stg4_lane_103_pack, stg4_lane_102);
  set_at<48, 64, 16>(stg4_lane_103_pack, stg4_lane_103);
  auto res_stg5_update_0_sm6_25451 = stg5_generated_compute_unrolled_1(stg4_lane_103_pack);

  hw_uint<64 > stg4_lane_107_pack;
  set_at<0, 64, 16>(stg4_lane_107_pack, stg4_lane_104);
  set_at<16, 64, 16>(stg4_lane_107_pack, stg4_lane_105);
  set_at<32, 64, 16>(stg4_lane_107_pack, stg4_lane_106);
  set_at<48, 64, 16>(stg4_lane_107_pack, stg4_lane_107);
  auto res_stg5_update_0_sm6_26453 = stg5_generated_compute_unrolled_1(stg4_lane_107_pack);

  hw_uint<64 > stg4_lane_111_pack;
  set_at<0, 64, 16>(stg4_lane_111_pack, stg4_lane_108);
  set_at<16, 64, 16>(stg4_lane_111_pack, stg4_lane_109);
  set_at<32, 64, 16>(stg4_lane_111_pack, stg4_lane_110);
  set_at<48, 64, 16>(stg4_lane_111_pack, stg4_lane_111);
  auto res_stg5_update_0_sm6_27455 = stg5_generated_compute_unrolled_1(stg4_lane_111_pack);

  hw_uint<64 > stg4_lane_115_pack;
  set_at<0, 64, 16>(stg4_lane_115_pack, stg4_lane_112);
  set_at<16, 64, 16>(stg4_lane_115_pack, stg4_lane_113);
  set_at<32, 64, 16>(stg4_lane_115_pack, stg4_lane_114);
  set_at<48, 64, 16>(stg4_lane_115_pack, stg4_lane_115);
  auto res_stg5_update_0_sm6_28457 = stg5_generated_compute_unrolled_1(stg4_lane_115_pack);

  hw_uint<64 > stg4_lane_119_pack;
  set_at<0, 64, 16>(stg4_lane_119_pack, stg4_lane_116);
  set_at<16, 64, 16>(stg4_lane_119_pack, stg4_lane_117);
  set_at<32, 64, 16>(stg4_lane_119_pack, stg4_lane_118);
  set_at<48, 64, 16>(stg4_lane_119_pack, stg4_lane_119);
  auto res_stg5_update_0_sm6_29459 = stg5_generated_compute_unrolled_1(stg4_lane_119_pack);

  hw_uint<64 > stg4_lane_123_pack;
  set_at<0, 64, 16>(stg4_lane_123_pack, stg4_lane_120);
  set_at<16, 64, 16>(stg4_lane_123_pack, stg4_lane_121);
  set_at<32, 64, 16>(stg4_lane_123_pack, stg4_lane_122);
  set_at<48, 64, 16>(stg4_lane_123_pack, stg4_lane_123);
  auto res_stg5_update_0_sm6_30461 = stg5_generated_compute_unrolled_1(stg4_lane_123_pack);

  hw_uint<64 > stg4_lane_127_pack;
  set_at<0, 64, 16>(stg4_lane_127_pack, stg4_lane_124);
  set_at<16, 64, 16>(stg4_lane_127_pack, stg4_lane_125);
  set_at<32, 64, 16>(stg4_lane_127_pack, stg4_lane_126);
  set_at<48, 64, 16>(stg4_lane_127_pack, stg4_lane_127);
  auto res_stg5_update_0_sm6_31463 = stg5_generated_compute_unrolled_1(stg4_lane_127_pack);
  hw_uint<512 > return_value1124;
  set_at<0, 512, 16>(return_value1124, res_stg5_update_0_sm6_0401);
  set_at<16, 512, 16>(return_value1124, res_stg5_update_0_sm6_1403);
  set_at<32, 512, 16>(return_value1124, res_stg5_update_0_sm6_2405);
  set_at<48, 512, 16>(return_value1124, res_stg5_update_0_sm6_3407);
  set_at<64, 512, 16>(return_value1124, res_stg5_update_0_sm6_4409);
  set_at<80, 512, 16>(return_value1124, res_stg5_update_0_sm6_5411);
  set_at<96, 512, 16>(return_value1124, res_stg5_update_0_sm6_6413);
  set_at<112, 512, 16>(return_value1124, res_stg5_update_0_sm6_7415);
  set_at<128, 512, 16>(return_value1124, res_stg5_update_0_sm6_8417);
  set_at<144, 512, 16>(return_value1124, res_stg5_update_0_sm6_9419);
  set_at<160, 512, 16>(return_value1124, res_stg5_update_0_sm6_10421);
  set_at<176, 512, 16>(return_value1124, res_stg5_update_0_sm6_11423);
  set_at<192, 512, 16>(return_value1124, res_stg5_update_0_sm6_12425);
  set_at<208, 512, 16>(return_value1124, res_stg5_update_0_sm6_13427);
  set_at<224, 512, 16>(return_value1124, res_stg5_update_0_sm6_14429);
  set_at<240, 512, 16>(return_value1124, res_stg5_update_0_sm6_15431);
  set_at<256, 512, 16>(return_value1124, res_stg5_update_0_sm6_16433);
  set_at<272, 512, 16>(return_value1124, res_stg5_update_0_sm6_17435);
  set_at<288, 512, 16>(return_value1124, res_stg5_update_0_sm6_18437);
  set_at<304, 512, 16>(return_value1124, res_stg5_update_0_sm6_19439);
  set_at<320, 512, 16>(return_value1124, res_stg5_update_0_sm6_20441);
  set_at<336, 512, 16>(return_value1124, res_stg5_update_0_sm6_21443);
  set_at<352, 512, 16>(return_value1124, res_stg5_update_0_sm6_22445);
  set_at<368, 512, 16>(return_value1124, res_stg5_update_0_sm6_23447);
  set_at<384, 512, 16>(return_value1124, res_stg5_update_0_sm6_24449);
  set_at<400, 512, 16>(return_value1124, res_stg5_update_0_sm6_25451);
  set_at<416, 512, 16>(return_value1124, res_stg5_update_0_sm6_26453);
  set_at<432, 512, 16>(return_value1124, res_stg5_update_0_sm6_27455);
  set_at<448, 512, 16>(return_value1124, res_stg5_update_0_sm6_28457);
  set_at<464, 512, 16>(return_value1124, res_stg5_update_0_sm6_29459);
  set_at<480, 512, 16>(return_value1124, res_stg5_update_0_sm6_30461);
  set_at<496, 512, 16>(return_value1124, res_stg5_update_0_sm6_31463);
  return return_value1124;

}

hw_uint<512> stg6_1_cu1126(hw_uint<16*128>& stg5) {
  hw_uint<16> stg5_lane_0 = stg5.extract<0, 15>();
  hw_uint<16> stg5_lane_1 = stg5.extract<16, 31>();
  hw_uint<16> stg5_lane_2 = stg5.extract<32, 47>();
  hw_uint<16> stg5_lane_3 = stg5.extract<48, 63>();
  hw_uint<16> stg5_lane_4 = stg5.extract<64, 79>();
  hw_uint<16> stg5_lane_5 = stg5.extract<80, 95>();
  hw_uint<16> stg5_lane_6 = stg5.extract<96, 111>();
  hw_uint<16> stg5_lane_7 = stg5.extract<112, 127>();
  hw_uint<16> stg5_lane_8 = stg5.extract<128, 143>();
  hw_uint<16> stg5_lane_9 = stg5.extract<144, 159>();
  hw_uint<16> stg5_lane_10 = stg5.extract<160, 175>();
  hw_uint<16> stg5_lane_11 = stg5.extract<176, 191>();
  hw_uint<16> stg5_lane_12 = stg5.extract<192, 207>();
  hw_uint<16> stg5_lane_13 = stg5.extract<208, 223>();
  hw_uint<16> stg5_lane_14 = stg5.extract<224, 239>();
  hw_uint<16> stg5_lane_15 = stg5.extract<240, 255>();
  hw_uint<16> stg5_lane_16 = stg5.extract<256, 271>();
  hw_uint<16> stg5_lane_17 = stg5.extract<272, 287>();
  hw_uint<16> stg5_lane_18 = stg5.extract<288, 303>();
  hw_uint<16> stg5_lane_19 = stg5.extract<304, 319>();
  hw_uint<16> stg5_lane_20 = stg5.extract<320, 335>();
  hw_uint<16> stg5_lane_21 = stg5.extract<336, 351>();
  hw_uint<16> stg5_lane_22 = stg5.extract<352, 367>();
  hw_uint<16> stg5_lane_23 = stg5.extract<368, 383>();
  hw_uint<16> stg5_lane_24 = stg5.extract<384, 399>();
  hw_uint<16> stg5_lane_25 = stg5.extract<400, 415>();
  hw_uint<16> stg5_lane_26 = stg5.extract<416, 431>();
  hw_uint<16> stg5_lane_27 = stg5.extract<432, 447>();
  hw_uint<16> stg5_lane_28 = stg5.extract<448, 463>();
  hw_uint<16> stg5_lane_29 = stg5.extract<464, 479>();
  hw_uint<16> stg5_lane_30 = stg5.extract<480, 495>();
  hw_uint<16> stg5_lane_31 = stg5.extract<496, 511>();
  hw_uint<16> stg5_lane_32 = stg5.extract<512, 527>();
  hw_uint<16> stg5_lane_33 = stg5.extract<528, 543>();
  hw_uint<16> stg5_lane_34 = stg5.extract<544, 559>();
  hw_uint<16> stg5_lane_35 = stg5.extract<560, 575>();
  hw_uint<16> stg5_lane_36 = stg5.extract<576, 591>();
  hw_uint<16> stg5_lane_37 = stg5.extract<592, 607>();
  hw_uint<16> stg5_lane_38 = stg5.extract<608, 623>();
  hw_uint<16> stg5_lane_39 = stg5.extract<624, 639>();
  hw_uint<16> stg5_lane_40 = stg5.extract<640, 655>();
  hw_uint<16> stg5_lane_41 = stg5.extract<656, 671>();
  hw_uint<16> stg5_lane_42 = stg5.extract<672, 687>();
  hw_uint<16> stg5_lane_43 = stg5.extract<688, 703>();
  hw_uint<16> stg5_lane_44 = stg5.extract<704, 719>();
  hw_uint<16> stg5_lane_45 = stg5.extract<720, 735>();
  hw_uint<16> stg5_lane_46 = stg5.extract<736, 751>();
  hw_uint<16> stg5_lane_47 = stg5.extract<752, 767>();
  hw_uint<16> stg5_lane_48 = stg5.extract<768, 783>();
  hw_uint<16> stg5_lane_49 = stg5.extract<784, 799>();
  hw_uint<16> stg5_lane_50 = stg5.extract<800, 815>();
  hw_uint<16> stg5_lane_51 = stg5.extract<816, 831>();
  hw_uint<16> stg5_lane_52 = stg5.extract<832, 847>();
  hw_uint<16> stg5_lane_53 = stg5.extract<848, 863>();
  hw_uint<16> stg5_lane_54 = stg5.extract<864, 879>();
  hw_uint<16> stg5_lane_55 = stg5.extract<880, 895>();
  hw_uint<16> stg5_lane_56 = stg5.extract<896, 911>();
  hw_uint<16> stg5_lane_57 = stg5.extract<912, 927>();
  hw_uint<16> stg5_lane_58 = stg5.extract<928, 943>();
  hw_uint<16> stg5_lane_59 = stg5.extract<944, 959>();
  hw_uint<16> stg5_lane_60 = stg5.extract<960, 975>();
  hw_uint<16> stg5_lane_61 = stg5.extract<976, 991>();
  hw_uint<16> stg5_lane_62 = stg5.extract<992, 1007>();
  hw_uint<16> stg5_lane_63 = stg5.extract<1008, 1023>();
  hw_uint<16> stg5_lane_64 = stg5.extract<1024, 1039>();
  hw_uint<16> stg5_lane_65 = stg5.extract<1040, 1055>();
  hw_uint<16> stg5_lane_66 = stg5.extract<1056, 1071>();
  hw_uint<16> stg5_lane_67 = stg5.extract<1072, 1087>();
  hw_uint<16> stg5_lane_68 = stg5.extract<1088, 1103>();
  hw_uint<16> stg5_lane_69 = stg5.extract<1104, 1119>();
  hw_uint<16> stg5_lane_70 = stg5.extract<1120, 1135>();
  hw_uint<16> stg5_lane_71 = stg5.extract<1136, 1151>();
  hw_uint<16> stg5_lane_72 = stg5.extract<1152, 1167>();
  hw_uint<16> stg5_lane_73 = stg5.extract<1168, 1183>();
  hw_uint<16> stg5_lane_74 = stg5.extract<1184, 1199>();
  hw_uint<16> stg5_lane_75 = stg5.extract<1200, 1215>();
  hw_uint<16> stg5_lane_76 = stg5.extract<1216, 1231>();
  hw_uint<16> stg5_lane_77 = stg5.extract<1232, 1247>();
  hw_uint<16> stg5_lane_78 = stg5.extract<1248, 1263>();
  hw_uint<16> stg5_lane_79 = stg5.extract<1264, 1279>();
  hw_uint<16> stg5_lane_80 = stg5.extract<1280, 1295>();
  hw_uint<16> stg5_lane_81 = stg5.extract<1296, 1311>();
  hw_uint<16> stg5_lane_82 = stg5.extract<1312, 1327>();
  hw_uint<16> stg5_lane_83 = stg5.extract<1328, 1343>();
  hw_uint<16> stg5_lane_84 = stg5.extract<1344, 1359>();
  hw_uint<16> stg5_lane_85 = stg5.extract<1360, 1375>();
  hw_uint<16> stg5_lane_86 = stg5.extract<1376, 1391>();
  hw_uint<16> stg5_lane_87 = stg5.extract<1392, 1407>();
  hw_uint<16> stg5_lane_88 = stg5.extract<1408, 1423>();
  hw_uint<16> stg5_lane_89 = stg5.extract<1424, 1439>();
  hw_uint<16> stg5_lane_90 = stg5.extract<1440, 1455>();
  hw_uint<16> stg5_lane_91 = stg5.extract<1456, 1471>();
  hw_uint<16> stg5_lane_92 = stg5.extract<1472, 1487>();
  hw_uint<16> stg5_lane_93 = stg5.extract<1488, 1503>();
  hw_uint<16> stg5_lane_94 = stg5.extract<1504, 1519>();
  hw_uint<16> stg5_lane_95 = stg5.extract<1520, 1535>();
  hw_uint<16> stg5_lane_96 = stg5.extract<1536, 1551>();
  hw_uint<16> stg5_lane_97 = stg5.extract<1552, 1567>();
  hw_uint<16> stg5_lane_98 = stg5.extract<1568, 1583>();
  hw_uint<16> stg5_lane_99 = stg5.extract<1584, 1599>();
  hw_uint<16> stg5_lane_100 = stg5.extract<1600, 1615>();
  hw_uint<16> stg5_lane_101 = stg5.extract<1616, 1631>();
  hw_uint<16> stg5_lane_102 = stg5.extract<1632, 1647>();
  hw_uint<16> stg5_lane_103 = stg5.extract<1648, 1663>();
  hw_uint<16> stg5_lane_104 = stg5.extract<1664, 1679>();
  hw_uint<16> stg5_lane_105 = stg5.extract<1680, 1695>();
  hw_uint<16> stg5_lane_106 = stg5.extract<1696, 1711>();
  hw_uint<16> stg5_lane_107 = stg5.extract<1712, 1727>();
  hw_uint<16> stg5_lane_108 = stg5.extract<1728, 1743>();
  hw_uint<16> stg5_lane_109 = stg5.extract<1744, 1759>();
  hw_uint<16> stg5_lane_110 = stg5.extract<1760, 1775>();
  hw_uint<16> stg5_lane_111 = stg5.extract<1776, 1791>();
  hw_uint<16> stg5_lane_112 = stg5.extract<1792, 1807>();
  hw_uint<16> stg5_lane_113 = stg5.extract<1808, 1823>();
  hw_uint<16> stg5_lane_114 = stg5.extract<1824, 1839>();
  hw_uint<16> stg5_lane_115 = stg5.extract<1840, 1855>();
  hw_uint<16> stg5_lane_116 = stg5.extract<1856, 1871>();
  hw_uint<16> stg5_lane_117 = stg5.extract<1872, 1887>();
  hw_uint<16> stg5_lane_118 = stg5.extract<1888, 1903>();
  hw_uint<16> stg5_lane_119 = stg5.extract<1904, 1919>();
  hw_uint<16> stg5_lane_120 = stg5.extract<1920, 1935>();
  hw_uint<16> stg5_lane_121 = stg5.extract<1936, 1951>();
  hw_uint<16> stg5_lane_122 = stg5.extract<1952, 1967>();
  hw_uint<16> stg5_lane_123 = stg5.extract<1968, 1983>();
  hw_uint<16> stg5_lane_124 = stg5.extract<1984, 1999>();
  hw_uint<16> stg5_lane_125 = stg5.extract<2000, 2015>();
  hw_uint<16> stg5_lane_126 = stg5.extract<2016, 2031>();
  hw_uint<16> stg5_lane_127 = stg5.extract<2032, 2047>();

	
  hw_uint<64 > stg5_lane_3_pack;
  set_at<0, 64, 16>(stg5_lane_3_pack, stg5_lane_0);
  set_at<16, 64, 16>(stg5_lane_3_pack, stg5_lane_1);
  set_at<32, 64, 16>(stg5_lane_3_pack, stg5_lane_2);
  set_at<48, 64, 16>(stg5_lane_3_pack, stg5_lane_3);
  auto res_stg6_update_0_sm7_0465 = stg6_generated_compute_unrolled_1(stg5_lane_3_pack);

  hw_uint<64 > stg5_lane_7_pack;
  set_at<0, 64, 16>(stg5_lane_7_pack, stg5_lane_4);
  set_at<16, 64, 16>(stg5_lane_7_pack, stg5_lane_5);
  set_at<32, 64, 16>(stg5_lane_7_pack, stg5_lane_6);
  set_at<48, 64, 16>(stg5_lane_7_pack, stg5_lane_7);
  auto res_stg6_update_0_sm7_1467 = stg6_generated_compute_unrolled_1(stg5_lane_7_pack);

  hw_uint<64 > stg5_lane_11_pack;
  set_at<0, 64, 16>(stg5_lane_11_pack, stg5_lane_8);
  set_at<16, 64, 16>(stg5_lane_11_pack, stg5_lane_9);
  set_at<32, 64, 16>(stg5_lane_11_pack, stg5_lane_10);
  set_at<48, 64, 16>(stg5_lane_11_pack, stg5_lane_11);
  auto res_stg6_update_0_sm7_2469 = stg6_generated_compute_unrolled_1(stg5_lane_11_pack);

  hw_uint<64 > stg5_lane_15_pack;
  set_at<0, 64, 16>(stg5_lane_15_pack, stg5_lane_12);
  set_at<16, 64, 16>(stg5_lane_15_pack, stg5_lane_13);
  set_at<32, 64, 16>(stg5_lane_15_pack, stg5_lane_14);
  set_at<48, 64, 16>(stg5_lane_15_pack, stg5_lane_15);
  auto res_stg6_update_0_sm7_3471 = stg6_generated_compute_unrolled_1(stg5_lane_15_pack);

  hw_uint<64 > stg5_lane_19_pack;
  set_at<0, 64, 16>(stg5_lane_19_pack, stg5_lane_16);
  set_at<16, 64, 16>(stg5_lane_19_pack, stg5_lane_17);
  set_at<32, 64, 16>(stg5_lane_19_pack, stg5_lane_18);
  set_at<48, 64, 16>(stg5_lane_19_pack, stg5_lane_19);
  auto res_stg6_update_0_sm7_4473 = stg6_generated_compute_unrolled_1(stg5_lane_19_pack);

  hw_uint<64 > stg5_lane_23_pack;
  set_at<0, 64, 16>(stg5_lane_23_pack, stg5_lane_20);
  set_at<16, 64, 16>(stg5_lane_23_pack, stg5_lane_21);
  set_at<32, 64, 16>(stg5_lane_23_pack, stg5_lane_22);
  set_at<48, 64, 16>(stg5_lane_23_pack, stg5_lane_23);
  auto res_stg6_update_0_sm7_5475 = stg6_generated_compute_unrolled_1(stg5_lane_23_pack);

  hw_uint<64 > stg5_lane_27_pack;
  set_at<0, 64, 16>(stg5_lane_27_pack, stg5_lane_24);
  set_at<16, 64, 16>(stg5_lane_27_pack, stg5_lane_25);
  set_at<32, 64, 16>(stg5_lane_27_pack, stg5_lane_26);
  set_at<48, 64, 16>(stg5_lane_27_pack, stg5_lane_27);
  auto res_stg6_update_0_sm7_6477 = stg6_generated_compute_unrolled_1(stg5_lane_27_pack);

  hw_uint<64 > stg5_lane_31_pack;
  set_at<0, 64, 16>(stg5_lane_31_pack, stg5_lane_28);
  set_at<16, 64, 16>(stg5_lane_31_pack, stg5_lane_29);
  set_at<32, 64, 16>(stg5_lane_31_pack, stg5_lane_30);
  set_at<48, 64, 16>(stg5_lane_31_pack, stg5_lane_31);
  auto res_stg6_update_0_sm7_7479 = stg6_generated_compute_unrolled_1(stg5_lane_31_pack);

  hw_uint<64 > stg5_lane_35_pack;
  set_at<0, 64, 16>(stg5_lane_35_pack, stg5_lane_32);
  set_at<16, 64, 16>(stg5_lane_35_pack, stg5_lane_33);
  set_at<32, 64, 16>(stg5_lane_35_pack, stg5_lane_34);
  set_at<48, 64, 16>(stg5_lane_35_pack, stg5_lane_35);
  auto res_stg6_update_0_sm7_8481 = stg6_generated_compute_unrolled_1(stg5_lane_35_pack);

  hw_uint<64 > stg5_lane_39_pack;
  set_at<0, 64, 16>(stg5_lane_39_pack, stg5_lane_36);
  set_at<16, 64, 16>(stg5_lane_39_pack, stg5_lane_37);
  set_at<32, 64, 16>(stg5_lane_39_pack, stg5_lane_38);
  set_at<48, 64, 16>(stg5_lane_39_pack, stg5_lane_39);
  auto res_stg6_update_0_sm7_9483 = stg6_generated_compute_unrolled_1(stg5_lane_39_pack);

  hw_uint<64 > stg5_lane_43_pack;
  set_at<0, 64, 16>(stg5_lane_43_pack, stg5_lane_40);
  set_at<16, 64, 16>(stg5_lane_43_pack, stg5_lane_41);
  set_at<32, 64, 16>(stg5_lane_43_pack, stg5_lane_42);
  set_at<48, 64, 16>(stg5_lane_43_pack, stg5_lane_43);
  auto res_stg6_update_0_sm7_10485 = stg6_generated_compute_unrolled_1(stg5_lane_43_pack);

  hw_uint<64 > stg5_lane_47_pack;
  set_at<0, 64, 16>(stg5_lane_47_pack, stg5_lane_44);
  set_at<16, 64, 16>(stg5_lane_47_pack, stg5_lane_45);
  set_at<32, 64, 16>(stg5_lane_47_pack, stg5_lane_46);
  set_at<48, 64, 16>(stg5_lane_47_pack, stg5_lane_47);
  auto res_stg6_update_0_sm7_11487 = stg6_generated_compute_unrolled_1(stg5_lane_47_pack);

  hw_uint<64 > stg5_lane_51_pack;
  set_at<0, 64, 16>(stg5_lane_51_pack, stg5_lane_48);
  set_at<16, 64, 16>(stg5_lane_51_pack, stg5_lane_49);
  set_at<32, 64, 16>(stg5_lane_51_pack, stg5_lane_50);
  set_at<48, 64, 16>(stg5_lane_51_pack, stg5_lane_51);
  auto res_stg6_update_0_sm7_12489 = stg6_generated_compute_unrolled_1(stg5_lane_51_pack);

  hw_uint<64 > stg5_lane_55_pack;
  set_at<0, 64, 16>(stg5_lane_55_pack, stg5_lane_52);
  set_at<16, 64, 16>(stg5_lane_55_pack, stg5_lane_53);
  set_at<32, 64, 16>(stg5_lane_55_pack, stg5_lane_54);
  set_at<48, 64, 16>(stg5_lane_55_pack, stg5_lane_55);
  auto res_stg6_update_0_sm7_13491 = stg6_generated_compute_unrolled_1(stg5_lane_55_pack);

  hw_uint<64 > stg5_lane_59_pack;
  set_at<0, 64, 16>(stg5_lane_59_pack, stg5_lane_56);
  set_at<16, 64, 16>(stg5_lane_59_pack, stg5_lane_57);
  set_at<32, 64, 16>(stg5_lane_59_pack, stg5_lane_58);
  set_at<48, 64, 16>(stg5_lane_59_pack, stg5_lane_59);
  auto res_stg6_update_0_sm7_14493 = stg6_generated_compute_unrolled_1(stg5_lane_59_pack);

  hw_uint<64 > stg5_lane_63_pack;
  set_at<0, 64, 16>(stg5_lane_63_pack, stg5_lane_60);
  set_at<16, 64, 16>(stg5_lane_63_pack, stg5_lane_61);
  set_at<32, 64, 16>(stg5_lane_63_pack, stg5_lane_62);
  set_at<48, 64, 16>(stg5_lane_63_pack, stg5_lane_63);
  auto res_stg6_update_0_sm7_15495 = stg6_generated_compute_unrolled_1(stg5_lane_63_pack);

  hw_uint<64 > stg5_lane_67_pack;
  set_at<0, 64, 16>(stg5_lane_67_pack, stg5_lane_64);
  set_at<16, 64, 16>(stg5_lane_67_pack, stg5_lane_65);
  set_at<32, 64, 16>(stg5_lane_67_pack, stg5_lane_66);
  set_at<48, 64, 16>(stg5_lane_67_pack, stg5_lane_67);
  auto res_stg6_update_0_sm7_16497 = stg6_generated_compute_unrolled_1(stg5_lane_67_pack);

  hw_uint<64 > stg5_lane_71_pack;
  set_at<0, 64, 16>(stg5_lane_71_pack, stg5_lane_68);
  set_at<16, 64, 16>(stg5_lane_71_pack, stg5_lane_69);
  set_at<32, 64, 16>(stg5_lane_71_pack, stg5_lane_70);
  set_at<48, 64, 16>(stg5_lane_71_pack, stg5_lane_71);
  auto res_stg6_update_0_sm7_17499 = stg6_generated_compute_unrolled_1(stg5_lane_71_pack);

  hw_uint<64 > stg5_lane_75_pack;
  set_at<0, 64, 16>(stg5_lane_75_pack, stg5_lane_72);
  set_at<16, 64, 16>(stg5_lane_75_pack, stg5_lane_73);
  set_at<32, 64, 16>(stg5_lane_75_pack, stg5_lane_74);
  set_at<48, 64, 16>(stg5_lane_75_pack, stg5_lane_75);
  auto res_stg6_update_0_sm7_18501 = stg6_generated_compute_unrolled_1(stg5_lane_75_pack);

  hw_uint<64 > stg5_lane_79_pack;
  set_at<0, 64, 16>(stg5_lane_79_pack, stg5_lane_76);
  set_at<16, 64, 16>(stg5_lane_79_pack, stg5_lane_77);
  set_at<32, 64, 16>(stg5_lane_79_pack, stg5_lane_78);
  set_at<48, 64, 16>(stg5_lane_79_pack, stg5_lane_79);
  auto res_stg6_update_0_sm7_19503 = stg6_generated_compute_unrolled_1(stg5_lane_79_pack);

  hw_uint<64 > stg5_lane_83_pack;
  set_at<0, 64, 16>(stg5_lane_83_pack, stg5_lane_80);
  set_at<16, 64, 16>(stg5_lane_83_pack, stg5_lane_81);
  set_at<32, 64, 16>(stg5_lane_83_pack, stg5_lane_82);
  set_at<48, 64, 16>(stg5_lane_83_pack, stg5_lane_83);
  auto res_stg6_update_0_sm7_20505 = stg6_generated_compute_unrolled_1(stg5_lane_83_pack);

  hw_uint<64 > stg5_lane_87_pack;
  set_at<0, 64, 16>(stg5_lane_87_pack, stg5_lane_84);
  set_at<16, 64, 16>(stg5_lane_87_pack, stg5_lane_85);
  set_at<32, 64, 16>(stg5_lane_87_pack, stg5_lane_86);
  set_at<48, 64, 16>(stg5_lane_87_pack, stg5_lane_87);
  auto res_stg6_update_0_sm7_21507 = stg6_generated_compute_unrolled_1(stg5_lane_87_pack);

  hw_uint<64 > stg5_lane_91_pack;
  set_at<0, 64, 16>(stg5_lane_91_pack, stg5_lane_88);
  set_at<16, 64, 16>(stg5_lane_91_pack, stg5_lane_89);
  set_at<32, 64, 16>(stg5_lane_91_pack, stg5_lane_90);
  set_at<48, 64, 16>(stg5_lane_91_pack, stg5_lane_91);
  auto res_stg6_update_0_sm7_22509 = stg6_generated_compute_unrolled_1(stg5_lane_91_pack);

  hw_uint<64 > stg5_lane_95_pack;
  set_at<0, 64, 16>(stg5_lane_95_pack, stg5_lane_92);
  set_at<16, 64, 16>(stg5_lane_95_pack, stg5_lane_93);
  set_at<32, 64, 16>(stg5_lane_95_pack, stg5_lane_94);
  set_at<48, 64, 16>(stg5_lane_95_pack, stg5_lane_95);
  auto res_stg6_update_0_sm7_23511 = stg6_generated_compute_unrolled_1(stg5_lane_95_pack);

  hw_uint<64 > stg5_lane_99_pack;
  set_at<0, 64, 16>(stg5_lane_99_pack, stg5_lane_96);
  set_at<16, 64, 16>(stg5_lane_99_pack, stg5_lane_97);
  set_at<32, 64, 16>(stg5_lane_99_pack, stg5_lane_98);
  set_at<48, 64, 16>(stg5_lane_99_pack, stg5_lane_99);
  auto res_stg6_update_0_sm7_24513 = stg6_generated_compute_unrolled_1(stg5_lane_99_pack);

  hw_uint<64 > stg5_lane_103_pack;
  set_at<0, 64, 16>(stg5_lane_103_pack, stg5_lane_100);
  set_at<16, 64, 16>(stg5_lane_103_pack, stg5_lane_101);
  set_at<32, 64, 16>(stg5_lane_103_pack, stg5_lane_102);
  set_at<48, 64, 16>(stg5_lane_103_pack, stg5_lane_103);
  auto res_stg6_update_0_sm7_25515 = stg6_generated_compute_unrolled_1(stg5_lane_103_pack);

  hw_uint<64 > stg5_lane_107_pack;
  set_at<0, 64, 16>(stg5_lane_107_pack, stg5_lane_104);
  set_at<16, 64, 16>(stg5_lane_107_pack, stg5_lane_105);
  set_at<32, 64, 16>(stg5_lane_107_pack, stg5_lane_106);
  set_at<48, 64, 16>(stg5_lane_107_pack, stg5_lane_107);
  auto res_stg6_update_0_sm7_26517 = stg6_generated_compute_unrolled_1(stg5_lane_107_pack);

  hw_uint<64 > stg5_lane_111_pack;
  set_at<0, 64, 16>(stg5_lane_111_pack, stg5_lane_108);
  set_at<16, 64, 16>(stg5_lane_111_pack, stg5_lane_109);
  set_at<32, 64, 16>(stg5_lane_111_pack, stg5_lane_110);
  set_at<48, 64, 16>(stg5_lane_111_pack, stg5_lane_111);
  auto res_stg6_update_0_sm7_27519 = stg6_generated_compute_unrolled_1(stg5_lane_111_pack);

  hw_uint<64 > stg5_lane_115_pack;
  set_at<0, 64, 16>(stg5_lane_115_pack, stg5_lane_112);
  set_at<16, 64, 16>(stg5_lane_115_pack, stg5_lane_113);
  set_at<32, 64, 16>(stg5_lane_115_pack, stg5_lane_114);
  set_at<48, 64, 16>(stg5_lane_115_pack, stg5_lane_115);
  auto res_stg6_update_0_sm7_28521 = stg6_generated_compute_unrolled_1(stg5_lane_115_pack);

  hw_uint<64 > stg5_lane_119_pack;
  set_at<0, 64, 16>(stg5_lane_119_pack, stg5_lane_116);
  set_at<16, 64, 16>(stg5_lane_119_pack, stg5_lane_117);
  set_at<32, 64, 16>(stg5_lane_119_pack, stg5_lane_118);
  set_at<48, 64, 16>(stg5_lane_119_pack, stg5_lane_119);
  auto res_stg6_update_0_sm7_29523 = stg6_generated_compute_unrolled_1(stg5_lane_119_pack);

  hw_uint<64 > stg5_lane_123_pack;
  set_at<0, 64, 16>(stg5_lane_123_pack, stg5_lane_120);
  set_at<16, 64, 16>(stg5_lane_123_pack, stg5_lane_121);
  set_at<32, 64, 16>(stg5_lane_123_pack, stg5_lane_122);
  set_at<48, 64, 16>(stg5_lane_123_pack, stg5_lane_123);
  auto res_stg6_update_0_sm7_30525 = stg6_generated_compute_unrolled_1(stg5_lane_123_pack);

  hw_uint<64 > stg5_lane_127_pack;
  set_at<0, 64, 16>(stg5_lane_127_pack, stg5_lane_124);
  set_at<16, 64, 16>(stg5_lane_127_pack, stg5_lane_125);
  set_at<32, 64, 16>(stg5_lane_127_pack, stg5_lane_126);
  set_at<48, 64, 16>(stg5_lane_127_pack, stg5_lane_127);
  auto res_stg6_update_0_sm7_31527 = stg6_generated_compute_unrolled_1(stg5_lane_127_pack);
  hw_uint<512 > return_value1127;
  set_at<0, 512, 16>(return_value1127, res_stg6_update_0_sm7_0465);
  set_at<16, 512, 16>(return_value1127, res_stg6_update_0_sm7_1467);
  set_at<32, 512, 16>(return_value1127, res_stg6_update_0_sm7_2469);
  set_at<48, 512, 16>(return_value1127, res_stg6_update_0_sm7_3471);
  set_at<64, 512, 16>(return_value1127, res_stg6_update_0_sm7_4473);
  set_at<80, 512, 16>(return_value1127, res_stg6_update_0_sm7_5475);
  set_at<96, 512, 16>(return_value1127, res_stg6_update_0_sm7_6477);
  set_at<112, 512, 16>(return_value1127, res_stg6_update_0_sm7_7479);
  set_at<128, 512, 16>(return_value1127, res_stg6_update_0_sm7_8481);
  set_at<144, 512, 16>(return_value1127, res_stg6_update_0_sm7_9483);
  set_at<160, 512, 16>(return_value1127, res_stg6_update_0_sm7_10485);
  set_at<176, 512, 16>(return_value1127, res_stg6_update_0_sm7_11487);
  set_at<192, 512, 16>(return_value1127, res_stg6_update_0_sm7_12489);
  set_at<208, 512, 16>(return_value1127, res_stg6_update_0_sm7_13491);
  set_at<224, 512, 16>(return_value1127, res_stg6_update_0_sm7_14493);
  set_at<240, 512, 16>(return_value1127, res_stg6_update_0_sm7_15495);
  set_at<256, 512, 16>(return_value1127, res_stg6_update_0_sm7_16497);
  set_at<272, 512, 16>(return_value1127, res_stg6_update_0_sm7_17499);
  set_at<288, 512, 16>(return_value1127, res_stg6_update_0_sm7_18501);
  set_at<304, 512, 16>(return_value1127, res_stg6_update_0_sm7_19503);
  set_at<320, 512, 16>(return_value1127, res_stg6_update_0_sm7_20505);
  set_at<336, 512, 16>(return_value1127, res_stg6_update_0_sm7_21507);
  set_at<352, 512, 16>(return_value1127, res_stg6_update_0_sm7_22509);
  set_at<368, 512, 16>(return_value1127, res_stg6_update_0_sm7_23511);
  set_at<384, 512, 16>(return_value1127, res_stg6_update_0_sm7_24513);
  set_at<400, 512, 16>(return_value1127, res_stg6_update_0_sm7_25515);
  set_at<416, 512, 16>(return_value1127, res_stg6_update_0_sm7_26517);
  set_at<432, 512, 16>(return_value1127, res_stg6_update_0_sm7_27519);
  set_at<448, 512, 16>(return_value1127, res_stg6_update_0_sm7_28521);
  set_at<464, 512, 16>(return_value1127, res_stg6_update_0_sm7_29523);
  set_at<480, 512, 16>(return_value1127, res_stg6_update_0_sm7_30525);
  set_at<496, 512, 16>(return_value1127, res_stg6_update_0_sm7_31527);
  return return_value1127;

}

hw_uint<512> stg7_1_cu1129(hw_uint<16*128>& stg6) {
  hw_uint<16> stg6_lane_0 = stg6.extract<0, 15>();
  hw_uint<16> stg6_lane_1 = stg6.extract<16, 31>();
  hw_uint<16> stg6_lane_2 = stg6.extract<32, 47>();
  hw_uint<16> stg6_lane_3 = stg6.extract<48, 63>();
  hw_uint<16> stg6_lane_4 = stg6.extract<64, 79>();
  hw_uint<16> stg6_lane_5 = stg6.extract<80, 95>();
  hw_uint<16> stg6_lane_6 = stg6.extract<96, 111>();
  hw_uint<16> stg6_lane_7 = stg6.extract<112, 127>();
  hw_uint<16> stg6_lane_8 = stg6.extract<128, 143>();
  hw_uint<16> stg6_lane_9 = stg6.extract<144, 159>();
  hw_uint<16> stg6_lane_10 = stg6.extract<160, 175>();
  hw_uint<16> stg6_lane_11 = stg6.extract<176, 191>();
  hw_uint<16> stg6_lane_12 = stg6.extract<192, 207>();
  hw_uint<16> stg6_lane_13 = stg6.extract<208, 223>();
  hw_uint<16> stg6_lane_14 = stg6.extract<224, 239>();
  hw_uint<16> stg6_lane_15 = stg6.extract<240, 255>();
  hw_uint<16> stg6_lane_16 = stg6.extract<256, 271>();
  hw_uint<16> stg6_lane_17 = stg6.extract<272, 287>();
  hw_uint<16> stg6_lane_18 = stg6.extract<288, 303>();
  hw_uint<16> stg6_lane_19 = stg6.extract<304, 319>();
  hw_uint<16> stg6_lane_20 = stg6.extract<320, 335>();
  hw_uint<16> stg6_lane_21 = stg6.extract<336, 351>();
  hw_uint<16> stg6_lane_22 = stg6.extract<352, 367>();
  hw_uint<16> stg6_lane_23 = stg6.extract<368, 383>();
  hw_uint<16> stg6_lane_24 = stg6.extract<384, 399>();
  hw_uint<16> stg6_lane_25 = stg6.extract<400, 415>();
  hw_uint<16> stg6_lane_26 = stg6.extract<416, 431>();
  hw_uint<16> stg6_lane_27 = stg6.extract<432, 447>();
  hw_uint<16> stg6_lane_28 = stg6.extract<448, 463>();
  hw_uint<16> stg6_lane_29 = stg6.extract<464, 479>();
  hw_uint<16> stg6_lane_30 = stg6.extract<480, 495>();
  hw_uint<16> stg6_lane_31 = stg6.extract<496, 511>();
  hw_uint<16> stg6_lane_32 = stg6.extract<512, 527>();
  hw_uint<16> stg6_lane_33 = stg6.extract<528, 543>();
  hw_uint<16> stg6_lane_34 = stg6.extract<544, 559>();
  hw_uint<16> stg6_lane_35 = stg6.extract<560, 575>();
  hw_uint<16> stg6_lane_36 = stg6.extract<576, 591>();
  hw_uint<16> stg6_lane_37 = stg6.extract<592, 607>();
  hw_uint<16> stg6_lane_38 = stg6.extract<608, 623>();
  hw_uint<16> stg6_lane_39 = stg6.extract<624, 639>();
  hw_uint<16> stg6_lane_40 = stg6.extract<640, 655>();
  hw_uint<16> stg6_lane_41 = stg6.extract<656, 671>();
  hw_uint<16> stg6_lane_42 = stg6.extract<672, 687>();
  hw_uint<16> stg6_lane_43 = stg6.extract<688, 703>();
  hw_uint<16> stg6_lane_44 = stg6.extract<704, 719>();
  hw_uint<16> stg6_lane_45 = stg6.extract<720, 735>();
  hw_uint<16> stg6_lane_46 = stg6.extract<736, 751>();
  hw_uint<16> stg6_lane_47 = stg6.extract<752, 767>();
  hw_uint<16> stg6_lane_48 = stg6.extract<768, 783>();
  hw_uint<16> stg6_lane_49 = stg6.extract<784, 799>();
  hw_uint<16> stg6_lane_50 = stg6.extract<800, 815>();
  hw_uint<16> stg6_lane_51 = stg6.extract<816, 831>();
  hw_uint<16> stg6_lane_52 = stg6.extract<832, 847>();
  hw_uint<16> stg6_lane_53 = stg6.extract<848, 863>();
  hw_uint<16> stg6_lane_54 = stg6.extract<864, 879>();
  hw_uint<16> stg6_lane_55 = stg6.extract<880, 895>();
  hw_uint<16> stg6_lane_56 = stg6.extract<896, 911>();
  hw_uint<16> stg6_lane_57 = stg6.extract<912, 927>();
  hw_uint<16> stg6_lane_58 = stg6.extract<928, 943>();
  hw_uint<16> stg6_lane_59 = stg6.extract<944, 959>();
  hw_uint<16> stg6_lane_60 = stg6.extract<960, 975>();
  hw_uint<16> stg6_lane_61 = stg6.extract<976, 991>();
  hw_uint<16> stg6_lane_62 = stg6.extract<992, 1007>();
  hw_uint<16> stg6_lane_63 = stg6.extract<1008, 1023>();
  hw_uint<16> stg6_lane_64 = stg6.extract<1024, 1039>();
  hw_uint<16> stg6_lane_65 = stg6.extract<1040, 1055>();
  hw_uint<16> stg6_lane_66 = stg6.extract<1056, 1071>();
  hw_uint<16> stg6_lane_67 = stg6.extract<1072, 1087>();
  hw_uint<16> stg6_lane_68 = stg6.extract<1088, 1103>();
  hw_uint<16> stg6_lane_69 = stg6.extract<1104, 1119>();
  hw_uint<16> stg6_lane_70 = stg6.extract<1120, 1135>();
  hw_uint<16> stg6_lane_71 = stg6.extract<1136, 1151>();
  hw_uint<16> stg6_lane_72 = stg6.extract<1152, 1167>();
  hw_uint<16> stg6_lane_73 = stg6.extract<1168, 1183>();
  hw_uint<16> stg6_lane_74 = stg6.extract<1184, 1199>();
  hw_uint<16> stg6_lane_75 = stg6.extract<1200, 1215>();
  hw_uint<16> stg6_lane_76 = stg6.extract<1216, 1231>();
  hw_uint<16> stg6_lane_77 = stg6.extract<1232, 1247>();
  hw_uint<16> stg6_lane_78 = stg6.extract<1248, 1263>();
  hw_uint<16> stg6_lane_79 = stg6.extract<1264, 1279>();
  hw_uint<16> stg6_lane_80 = stg6.extract<1280, 1295>();
  hw_uint<16> stg6_lane_81 = stg6.extract<1296, 1311>();
  hw_uint<16> stg6_lane_82 = stg6.extract<1312, 1327>();
  hw_uint<16> stg6_lane_83 = stg6.extract<1328, 1343>();
  hw_uint<16> stg6_lane_84 = stg6.extract<1344, 1359>();
  hw_uint<16> stg6_lane_85 = stg6.extract<1360, 1375>();
  hw_uint<16> stg6_lane_86 = stg6.extract<1376, 1391>();
  hw_uint<16> stg6_lane_87 = stg6.extract<1392, 1407>();
  hw_uint<16> stg6_lane_88 = stg6.extract<1408, 1423>();
  hw_uint<16> stg6_lane_89 = stg6.extract<1424, 1439>();
  hw_uint<16> stg6_lane_90 = stg6.extract<1440, 1455>();
  hw_uint<16> stg6_lane_91 = stg6.extract<1456, 1471>();
  hw_uint<16> stg6_lane_92 = stg6.extract<1472, 1487>();
  hw_uint<16> stg6_lane_93 = stg6.extract<1488, 1503>();
  hw_uint<16> stg6_lane_94 = stg6.extract<1504, 1519>();
  hw_uint<16> stg6_lane_95 = stg6.extract<1520, 1535>();
  hw_uint<16> stg6_lane_96 = stg6.extract<1536, 1551>();
  hw_uint<16> stg6_lane_97 = stg6.extract<1552, 1567>();
  hw_uint<16> stg6_lane_98 = stg6.extract<1568, 1583>();
  hw_uint<16> stg6_lane_99 = stg6.extract<1584, 1599>();
  hw_uint<16> stg6_lane_100 = stg6.extract<1600, 1615>();
  hw_uint<16> stg6_lane_101 = stg6.extract<1616, 1631>();
  hw_uint<16> stg6_lane_102 = stg6.extract<1632, 1647>();
  hw_uint<16> stg6_lane_103 = stg6.extract<1648, 1663>();
  hw_uint<16> stg6_lane_104 = stg6.extract<1664, 1679>();
  hw_uint<16> stg6_lane_105 = stg6.extract<1680, 1695>();
  hw_uint<16> stg6_lane_106 = stg6.extract<1696, 1711>();
  hw_uint<16> stg6_lane_107 = stg6.extract<1712, 1727>();
  hw_uint<16> stg6_lane_108 = stg6.extract<1728, 1743>();
  hw_uint<16> stg6_lane_109 = stg6.extract<1744, 1759>();
  hw_uint<16> stg6_lane_110 = stg6.extract<1760, 1775>();
  hw_uint<16> stg6_lane_111 = stg6.extract<1776, 1791>();
  hw_uint<16> stg6_lane_112 = stg6.extract<1792, 1807>();
  hw_uint<16> stg6_lane_113 = stg6.extract<1808, 1823>();
  hw_uint<16> stg6_lane_114 = stg6.extract<1824, 1839>();
  hw_uint<16> stg6_lane_115 = stg6.extract<1840, 1855>();
  hw_uint<16> stg6_lane_116 = stg6.extract<1856, 1871>();
  hw_uint<16> stg6_lane_117 = stg6.extract<1872, 1887>();
  hw_uint<16> stg6_lane_118 = stg6.extract<1888, 1903>();
  hw_uint<16> stg6_lane_119 = stg6.extract<1904, 1919>();
  hw_uint<16> stg6_lane_120 = stg6.extract<1920, 1935>();
  hw_uint<16> stg6_lane_121 = stg6.extract<1936, 1951>();
  hw_uint<16> stg6_lane_122 = stg6.extract<1952, 1967>();
  hw_uint<16> stg6_lane_123 = stg6.extract<1968, 1983>();
  hw_uint<16> stg6_lane_124 = stg6.extract<1984, 1999>();
  hw_uint<16> stg6_lane_125 = stg6.extract<2000, 2015>();
  hw_uint<16> stg6_lane_126 = stg6.extract<2016, 2031>();
  hw_uint<16> stg6_lane_127 = stg6.extract<2032, 2047>();

	
  hw_uint<64 > stg6_lane_3_pack;
  set_at<0, 64, 16>(stg6_lane_3_pack, stg6_lane_0);
  set_at<16, 64, 16>(stg6_lane_3_pack, stg6_lane_1);
  set_at<32, 64, 16>(stg6_lane_3_pack, stg6_lane_2);
  set_at<48, 64, 16>(stg6_lane_3_pack, stg6_lane_3);
  auto res_stg7_update_0_sm8_0529 = stg7_generated_compute_unrolled_1(stg6_lane_3_pack);

  hw_uint<64 > stg6_lane_7_pack;
  set_at<0, 64, 16>(stg6_lane_7_pack, stg6_lane_4);
  set_at<16, 64, 16>(stg6_lane_7_pack, stg6_lane_5);
  set_at<32, 64, 16>(stg6_lane_7_pack, stg6_lane_6);
  set_at<48, 64, 16>(stg6_lane_7_pack, stg6_lane_7);
  auto res_stg7_update_0_sm8_1531 = stg7_generated_compute_unrolled_1(stg6_lane_7_pack);

  hw_uint<64 > stg6_lane_11_pack;
  set_at<0, 64, 16>(stg6_lane_11_pack, stg6_lane_8);
  set_at<16, 64, 16>(stg6_lane_11_pack, stg6_lane_9);
  set_at<32, 64, 16>(stg6_lane_11_pack, stg6_lane_10);
  set_at<48, 64, 16>(stg6_lane_11_pack, stg6_lane_11);
  auto res_stg7_update_0_sm8_2533 = stg7_generated_compute_unrolled_1(stg6_lane_11_pack);

  hw_uint<64 > stg6_lane_15_pack;
  set_at<0, 64, 16>(stg6_lane_15_pack, stg6_lane_12);
  set_at<16, 64, 16>(stg6_lane_15_pack, stg6_lane_13);
  set_at<32, 64, 16>(stg6_lane_15_pack, stg6_lane_14);
  set_at<48, 64, 16>(stg6_lane_15_pack, stg6_lane_15);
  auto res_stg7_update_0_sm8_3535 = stg7_generated_compute_unrolled_1(stg6_lane_15_pack);

  hw_uint<64 > stg6_lane_19_pack;
  set_at<0, 64, 16>(stg6_lane_19_pack, stg6_lane_16);
  set_at<16, 64, 16>(stg6_lane_19_pack, stg6_lane_17);
  set_at<32, 64, 16>(stg6_lane_19_pack, stg6_lane_18);
  set_at<48, 64, 16>(stg6_lane_19_pack, stg6_lane_19);
  auto res_stg7_update_0_sm8_4537 = stg7_generated_compute_unrolled_1(stg6_lane_19_pack);

  hw_uint<64 > stg6_lane_23_pack;
  set_at<0, 64, 16>(stg6_lane_23_pack, stg6_lane_20);
  set_at<16, 64, 16>(stg6_lane_23_pack, stg6_lane_21);
  set_at<32, 64, 16>(stg6_lane_23_pack, stg6_lane_22);
  set_at<48, 64, 16>(stg6_lane_23_pack, stg6_lane_23);
  auto res_stg7_update_0_sm8_5539 = stg7_generated_compute_unrolled_1(stg6_lane_23_pack);

  hw_uint<64 > stg6_lane_27_pack;
  set_at<0, 64, 16>(stg6_lane_27_pack, stg6_lane_24);
  set_at<16, 64, 16>(stg6_lane_27_pack, stg6_lane_25);
  set_at<32, 64, 16>(stg6_lane_27_pack, stg6_lane_26);
  set_at<48, 64, 16>(stg6_lane_27_pack, stg6_lane_27);
  auto res_stg7_update_0_sm8_6541 = stg7_generated_compute_unrolled_1(stg6_lane_27_pack);

  hw_uint<64 > stg6_lane_31_pack;
  set_at<0, 64, 16>(stg6_lane_31_pack, stg6_lane_28);
  set_at<16, 64, 16>(stg6_lane_31_pack, stg6_lane_29);
  set_at<32, 64, 16>(stg6_lane_31_pack, stg6_lane_30);
  set_at<48, 64, 16>(stg6_lane_31_pack, stg6_lane_31);
  auto res_stg7_update_0_sm8_7543 = stg7_generated_compute_unrolled_1(stg6_lane_31_pack);

  hw_uint<64 > stg6_lane_35_pack;
  set_at<0, 64, 16>(stg6_lane_35_pack, stg6_lane_32);
  set_at<16, 64, 16>(stg6_lane_35_pack, stg6_lane_33);
  set_at<32, 64, 16>(stg6_lane_35_pack, stg6_lane_34);
  set_at<48, 64, 16>(stg6_lane_35_pack, stg6_lane_35);
  auto res_stg7_update_0_sm8_8545 = stg7_generated_compute_unrolled_1(stg6_lane_35_pack);

  hw_uint<64 > stg6_lane_39_pack;
  set_at<0, 64, 16>(stg6_lane_39_pack, stg6_lane_36);
  set_at<16, 64, 16>(stg6_lane_39_pack, stg6_lane_37);
  set_at<32, 64, 16>(stg6_lane_39_pack, stg6_lane_38);
  set_at<48, 64, 16>(stg6_lane_39_pack, stg6_lane_39);
  auto res_stg7_update_0_sm8_9547 = stg7_generated_compute_unrolled_1(stg6_lane_39_pack);

  hw_uint<64 > stg6_lane_43_pack;
  set_at<0, 64, 16>(stg6_lane_43_pack, stg6_lane_40);
  set_at<16, 64, 16>(stg6_lane_43_pack, stg6_lane_41);
  set_at<32, 64, 16>(stg6_lane_43_pack, stg6_lane_42);
  set_at<48, 64, 16>(stg6_lane_43_pack, stg6_lane_43);
  auto res_stg7_update_0_sm8_10549 = stg7_generated_compute_unrolled_1(stg6_lane_43_pack);

  hw_uint<64 > stg6_lane_47_pack;
  set_at<0, 64, 16>(stg6_lane_47_pack, stg6_lane_44);
  set_at<16, 64, 16>(stg6_lane_47_pack, stg6_lane_45);
  set_at<32, 64, 16>(stg6_lane_47_pack, stg6_lane_46);
  set_at<48, 64, 16>(stg6_lane_47_pack, stg6_lane_47);
  auto res_stg7_update_0_sm8_11551 = stg7_generated_compute_unrolled_1(stg6_lane_47_pack);

  hw_uint<64 > stg6_lane_51_pack;
  set_at<0, 64, 16>(stg6_lane_51_pack, stg6_lane_48);
  set_at<16, 64, 16>(stg6_lane_51_pack, stg6_lane_49);
  set_at<32, 64, 16>(stg6_lane_51_pack, stg6_lane_50);
  set_at<48, 64, 16>(stg6_lane_51_pack, stg6_lane_51);
  auto res_stg7_update_0_sm8_12553 = stg7_generated_compute_unrolled_1(stg6_lane_51_pack);

  hw_uint<64 > stg6_lane_55_pack;
  set_at<0, 64, 16>(stg6_lane_55_pack, stg6_lane_52);
  set_at<16, 64, 16>(stg6_lane_55_pack, stg6_lane_53);
  set_at<32, 64, 16>(stg6_lane_55_pack, stg6_lane_54);
  set_at<48, 64, 16>(stg6_lane_55_pack, stg6_lane_55);
  auto res_stg7_update_0_sm8_13555 = stg7_generated_compute_unrolled_1(stg6_lane_55_pack);

  hw_uint<64 > stg6_lane_59_pack;
  set_at<0, 64, 16>(stg6_lane_59_pack, stg6_lane_56);
  set_at<16, 64, 16>(stg6_lane_59_pack, stg6_lane_57);
  set_at<32, 64, 16>(stg6_lane_59_pack, stg6_lane_58);
  set_at<48, 64, 16>(stg6_lane_59_pack, stg6_lane_59);
  auto res_stg7_update_0_sm8_14557 = stg7_generated_compute_unrolled_1(stg6_lane_59_pack);

  hw_uint<64 > stg6_lane_63_pack;
  set_at<0, 64, 16>(stg6_lane_63_pack, stg6_lane_60);
  set_at<16, 64, 16>(stg6_lane_63_pack, stg6_lane_61);
  set_at<32, 64, 16>(stg6_lane_63_pack, stg6_lane_62);
  set_at<48, 64, 16>(stg6_lane_63_pack, stg6_lane_63);
  auto res_stg7_update_0_sm8_15559 = stg7_generated_compute_unrolled_1(stg6_lane_63_pack);

  hw_uint<64 > stg6_lane_67_pack;
  set_at<0, 64, 16>(stg6_lane_67_pack, stg6_lane_64);
  set_at<16, 64, 16>(stg6_lane_67_pack, stg6_lane_65);
  set_at<32, 64, 16>(stg6_lane_67_pack, stg6_lane_66);
  set_at<48, 64, 16>(stg6_lane_67_pack, stg6_lane_67);
  auto res_stg7_update_0_sm8_16561 = stg7_generated_compute_unrolled_1(stg6_lane_67_pack);

  hw_uint<64 > stg6_lane_71_pack;
  set_at<0, 64, 16>(stg6_lane_71_pack, stg6_lane_68);
  set_at<16, 64, 16>(stg6_lane_71_pack, stg6_lane_69);
  set_at<32, 64, 16>(stg6_lane_71_pack, stg6_lane_70);
  set_at<48, 64, 16>(stg6_lane_71_pack, stg6_lane_71);
  auto res_stg7_update_0_sm8_17563 = stg7_generated_compute_unrolled_1(stg6_lane_71_pack);

  hw_uint<64 > stg6_lane_75_pack;
  set_at<0, 64, 16>(stg6_lane_75_pack, stg6_lane_72);
  set_at<16, 64, 16>(stg6_lane_75_pack, stg6_lane_73);
  set_at<32, 64, 16>(stg6_lane_75_pack, stg6_lane_74);
  set_at<48, 64, 16>(stg6_lane_75_pack, stg6_lane_75);
  auto res_stg7_update_0_sm8_18565 = stg7_generated_compute_unrolled_1(stg6_lane_75_pack);

  hw_uint<64 > stg6_lane_79_pack;
  set_at<0, 64, 16>(stg6_lane_79_pack, stg6_lane_76);
  set_at<16, 64, 16>(stg6_lane_79_pack, stg6_lane_77);
  set_at<32, 64, 16>(stg6_lane_79_pack, stg6_lane_78);
  set_at<48, 64, 16>(stg6_lane_79_pack, stg6_lane_79);
  auto res_stg7_update_0_sm8_19567 = stg7_generated_compute_unrolled_1(stg6_lane_79_pack);

  hw_uint<64 > stg6_lane_83_pack;
  set_at<0, 64, 16>(stg6_lane_83_pack, stg6_lane_80);
  set_at<16, 64, 16>(stg6_lane_83_pack, stg6_lane_81);
  set_at<32, 64, 16>(stg6_lane_83_pack, stg6_lane_82);
  set_at<48, 64, 16>(stg6_lane_83_pack, stg6_lane_83);
  auto res_stg7_update_0_sm8_20569 = stg7_generated_compute_unrolled_1(stg6_lane_83_pack);

  hw_uint<64 > stg6_lane_87_pack;
  set_at<0, 64, 16>(stg6_lane_87_pack, stg6_lane_84);
  set_at<16, 64, 16>(stg6_lane_87_pack, stg6_lane_85);
  set_at<32, 64, 16>(stg6_lane_87_pack, stg6_lane_86);
  set_at<48, 64, 16>(stg6_lane_87_pack, stg6_lane_87);
  auto res_stg7_update_0_sm8_21571 = stg7_generated_compute_unrolled_1(stg6_lane_87_pack);

  hw_uint<64 > stg6_lane_91_pack;
  set_at<0, 64, 16>(stg6_lane_91_pack, stg6_lane_88);
  set_at<16, 64, 16>(stg6_lane_91_pack, stg6_lane_89);
  set_at<32, 64, 16>(stg6_lane_91_pack, stg6_lane_90);
  set_at<48, 64, 16>(stg6_lane_91_pack, stg6_lane_91);
  auto res_stg7_update_0_sm8_22573 = stg7_generated_compute_unrolled_1(stg6_lane_91_pack);

  hw_uint<64 > stg6_lane_95_pack;
  set_at<0, 64, 16>(stg6_lane_95_pack, stg6_lane_92);
  set_at<16, 64, 16>(stg6_lane_95_pack, stg6_lane_93);
  set_at<32, 64, 16>(stg6_lane_95_pack, stg6_lane_94);
  set_at<48, 64, 16>(stg6_lane_95_pack, stg6_lane_95);
  auto res_stg7_update_0_sm8_23575 = stg7_generated_compute_unrolled_1(stg6_lane_95_pack);

  hw_uint<64 > stg6_lane_99_pack;
  set_at<0, 64, 16>(stg6_lane_99_pack, stg6_lane_96);
  set_at<16, 64, 16>(stg6_lane_99_pack, stg6_lane_97);
  set_at<32, 64, 16>(stg6_lane_99_pack, stg6_lane_98);
  set_at<48, 64, 16>(stg6_lane_99_pack, stg6_lane_99);
  auto res_stg7_update_0_sm8_24577 = stg7_generated_compute_unrolled_1(stg6_lane_99_pack);

  hw_uint<64 > stg6_lane_103_pack;
  set_at<0, 64, 16>(stg6_lane_103_pack, stg6_lane_100);
  set_at<16, 64, 16>(stg6_lane_103_pack, stg6_lane_101);
  set_at<32, 64, 16>(stg6_lane_103_pack, stg6_lane_102);
  set_at<48, 64, 16>(stg6_lane_103_pack, stg6_lane_103);
  auto res_stg7_update_0_sm8_25579 = stg7_generated_compute_unrolled_1(stg6_lane_103_pack);

  hw_uint<64 > stg6_lane_107_pack;
  set_at<0, 64, 16>(stg6_lane_107_pack, stg6_lane_104);
  set_at<16, 64, 16>(stg6_lane_107_pack, stg6_lane_105);
  set_at<32, 64, 16>(stg6_lane_107_pack, stg6_lane_106);
  set_at<48, 64, 16>(stg6_lane_107_pack, stg6_lane_107);
  auto res_stg7_update_0_sm8_26581 = stg7_generated_compute_unrolled_1(stg6_lane_107_pack);

  hw_uint<64 > stg6_lane_111_pack;
  set_at<0, 64, 16>(stg6_lane_111_pack, stg6_lane_108);
  set_at<16, 64, 16>(stg6_lane_111_pack, stg6_lane_109);
  set_at<32, 64, 16>(stg6_lane_111_pack, stg6_lane_110);
  set_at<48, 64, 16>(stg6_lane_111_pack, stg6_lane_111);
  auto res_stg7_update_0_sm8_27583 = stg7_generated_compute_unrolled_1(stg6_lane_111_pack);

  hw_uint<64 > stg6_lane_115_pack;
  set_at<0, 64, 16>(stg6_lane_115_pack, stg6_lane_112);
  set_at<16, 64, 16>(stg6_lane_115_pack, stg6_lane_113);
  set_at<32, 64, 16>(stg6_lane_115_pack, stg6_lane_114);
  set_at<48, 64, 16>(stg6_lane_115_pack, stg6_lane_115);
  auto res_stg7_update_0_sm8_28585 = stg7_generated_compute_unrolled_1(stg6_lane_115_pack);

  hw_uint<64 > stg6_lane_119_pack;
  set_at<0, 64, 16>(stg6_lane_119_pack, stg6_lane_116);
  set_at<16, 64, 16>(stg6_lane_119_pack, stg6_lane_117);
  set_at<32, 64, 16>(stg6_lane_119_pack, stg6_lane_118);
  set_at<48, 64, 16>(stg6_lane_119_pack, stg6_lane_119);
  auto res_stg7_update_0_sm8_29587 = stg7_generated_compute_unrolled_1(stg6_lane_119_pack);

  hw_uint<64 > stg6_lane_123_pack;
  set_at<0, 64, 16>(stg6_lane_123_pack, stg6_lane_120);
  set_at<16, 64, 16>(stg6_lane_123_pack, stg6_lane_121);
  set_at<32, 64, 16>(stg6_lane_123_pack, stg6_lane_122);
  set_at<48, 64, 16>(stg6_lane_123_pack, stg6_lane_123);
  auto res_stg7_update_0_sm8_30589 = stg7_generated_compute_unrolled_1(stg6_lane_123_pack);

  hw_uint<64 > stg6_lane_127_pack;
  set_at<0, 64, 16>(stg6_lane_127_pack, stg6_lane_124);
  set_at<16, 64, 16>(stg6_lane_127_pack, stg6_lane_125);
  set_at<32, 64, 16>(stg6_lane_127_pack, stg6_lane_126);
  set_at<48, 64, 16>(stg6_lane_127_pack, stg6_lane_127);
  auto res_stg7_update_0_sm8_31591 = stg7_generated_compute_unrolled_1(stg6_lane_127_pack);
  hw_uint<512 > return_value1130;
  set_at<0, 512, 16>(return_value1130, res_stg7_update_0_sm8_0529);
  set_at<16, 512, 16>(return_value1130, res_stg7_update_0_sm8_1531);
  set_at<32, 512, 16>(return_value1130, res_stg7_update_0_sm8_2533);
  set_at<48, 512, 16>(return_value1130, res_stg7_update_0_sm8_3535);
  set_at<64, 512, 16>(return_value1130, res_stg7_update_0_sm8_4537);
  set_at<80, 512, 16>(return_value1130, res_stg7_update_0_sm8_5539);
  set_at<96, 512, 16>(return_value1130, res_stg7_update_0_sm8_6541);
  set_at<112, 512, 16>(return_value1130, res_stg7_update_0_sm8_7543);
  set_at<128, 512, 16>(return_value1130, res_stg7_update_0_sm8_8545);
  set_at<144, 512, 16>(return_value1130, res_stg7_update_0_sm8_9547);
  set_at<160, 512, 16>(return_value1130, res_stg7_update_0_sm8_10549);
  set_at<176, 512, 16>(return_value1130, res_stg7_update_0_sm8_11551);
  set_at<192, 512, 16>(return_value1130, res_stg7_update_0_sm8_12553);
  set_at<208, 512, 16>(return_value1130, res_stg7_update_0_sm8_13555);
  set_at<224, 512, 16>(return_value1130, res_stg7_update_0_sm8_14557);
  set_at<240, 512, 16>(return_value1130, res_stg7_update_0_sm8_15559);
  set_at<256, 512, 16>(return_value1130, res_stg7_update_0_sm8_16561);
  set_at<272, 512, 16>(return_value1130, res_stg7_update_0_sm8_17563);
  set_at<288, 512, 16>(return_value1130, res_stg7_update_0_sm8_18565);
  set_at<304, 512, 16>(return_value1130, res_stg7_update_0_sm8_19567);
  set_at<320, 512, 16>(return_value1130, res_stg7_update_0_sm8_20569);
  set_at<336, 512, 16>(return_value1130, res_stg7_update_0_sm8_21571);
  set_at<352, 512, 16>(return_value1130, res_stg7_update_0_sm8_22573);
  set_at<368, 512, 16>(return_value1130, res_stg7_update_0_sm8_23575);
  set_at<384, 512, 16>(return_value1130, res_stg7_update_0_sm8_24577);
  set_at<400, 512, 16>(return_value1130, res_stg7_update_0_sm8_25579);
  set_at<416, 512, 16>(return_value1130, res_stg7_update_0_sm8_26581);
  set_at<432, 512, 16>(return_value1130, res_stg7_update_0_sm8_27583);
  set_at<448, 512, 16>(return_value1130, res_stg7_update_0_sm8_28585);
  set_at<464, 512, 16>(return_value1130, res_stg7_update_0_sm8_29587);
  set_at<480, 512, 16>(return_value1130, res_stg7_update_0_sm8_30589);
  set_at<496, 512, 16>(return_value1130, res_stg7_update_0_sm8_31591);
  return return_value1130;

}

hw_uint<512> stg8_1_cu1132(hw_uint<16*128>& stg7) {
  hw_uint<16> stg7_lane_0 = stg7.extract<0, 15>();
  hw_uint<16> stg7_lane_1 = stg7.extract<16, 31>();
  hw_uint<16> stg7_lane_2 = stg7.extract<32, 47>();
  hw_uint<16> stg7_lane_3 = stg7.extract<48, 63>();
  hw_uint<16> stg7_lane_4 = stg7.extract<64, 79>();
  hw_uint<16> stg7_lane_5 = stg7.extract<80, 95>();
  hw_uint<16> stg7_lane_6 = stg7.extract<96, 111>();
  hw_uint<16> stg7_lane_7 = stg7.extract<112, 127>();
  hw_uint<16> stg7_lane_8 = stg7.extract<128, 143>();
  hw_uint<16> stg7_lane_9 = stg7.extract<144, 159>();
  hw_uint<16> stg7_lane_10 = stg7.extract<160, 175>();
  hw_uint<16> stg7_lane_11 = stg7.extract<176, 191>();
  hw_uint<16> stg7_lane_12 = stg7.extract<192, 207>();
  hw_uint<16> stg7_lane_13 = stg7.extract<208, 223>();
  hw_uint<16> stg7_lane_14 = stg7.extract<224, 239>();
  hw_uint<16> stg7_lane_15 = stg7.extract<240, 255>();
  hw_uint<16> stg7_lane_16 = stg7.extract<256, 271>();
  hw_uint<16> stg7_lane_17 = stg7.extract<272, 287>();
  hw_uint<16> stg7_lane_18 = stg7.extract<288, 303>();
  hw_uint<16> stg7_lane_19 = stg7.extract<304, 319>();
  hw_uint<16> stg7_lane_20 = stg7.extract<320, 335>();
  hw_uint<16> stg7_lane_21 = stg7.extract<336, 351>();
  hw_uint<16> stg7_lane_22 = stg7.extract<352, 367>();
  hw_uint<16> stg7_lane_23 = stg7.extract<368, 383>();
  hw_uint<16> stg7_lane_24 = stg7.extract<384, 399>();
  hw_uint<16> stg7_lane_25 = stg7.extract<400, 415>();
  hw_uint<16> stg7_lane_26 = stg7.extract<416, 431>();
  hw_uint<16> stg7_lane_27 = stg7.extract<432, 447>();
  hw_uint<16> stg7_lane_28 = stg7.extract<448, 463>();
  hw_uint<16> stg7_lane_29 = stg7.extract<464, 479>();
  hw_uint<16> stg7_lane_30 = stg7.extract<480, 495>();
  hw_uint<16> stg7_lane_31 = stg7.extract<496, 511>();
  hw_uint<16> stg7_lane_32 = stg7.extract<512, 527>();
  hw_uint<16> stg7_lane_33 = stg7.extract<528, 543>();
  hw_uint<16> stg7_lane_34 = stg7.extract<544, 559>();
  hw_uint<16> stg7_lane_35 = stg7.extract<560, 575>();
  hw_uint<16> stg7_lane_36 = stg7.extract<576, 591>();
  hw_uint<16> stg7_lane_37 = stg7.extract<592, 607>();
  hw_uint<16> stg7_lane_38 = stg7.extract<608, 623>();
  hw_uint<16> stg7_lane_39 = stg7.extract<624, 639>();
  hw_uint<16> stg7_lane_40 = stg7.extract<640, 655>();
  hw_uint<16> stg7_lane_41 = stg7.extract<656, 671>();
  hw_uint<16> stg7_lane_42 = stg7.extract<672, 687>();
  hw_uint<16> stg7_lane_43 = stg7.extract<688, 703>();
  hw_uint<16> stg7_lane_44 = stg7.extract<704, 719>();
  hw_uint<16> stg7_lane_45 = stg7.extract<720, 735>();
  hw_uint<16> stg7_lane_46 = stg7.extract<736, 751>();
  hw_uint<16> stg7_lane_47 = stg7.extract<752, 767>();
  hw_uint<16> stg7_lane_48 = stg7.extract<768, 783>();
  hw_uint<16> stg7_lane_49 = stg7.extract<784, 799>();
  hw_uint<16> stg7_lane_50 = stg7.extract<800, 815>();
  hw_uint<16> stg7_lane_51 = stg7.extract<816, 831>();
  hw_uint<16> stg7_lane_52 = stg7.extract<832, 847>();
  hw_uint<16> stg7_lane_53 = stg7.extract<848, 863>();
  hw_uint<16> stg7_lane_54 = stg7.extract<864, 879>();
  hw_uint<16> stg7_lane_55 = stg7.extract<880, 895>();
  hw_uint<16> stg7_lane_56 = stg7.extract<896, 911>();
  hw_uint<16> stg7_lane_57 = stg7.extract<912, 927>();
  hw_uint<16> stg7_lane_58 = stg7.extract<928, 943>();
  hw_uint<16> stg7_lane_59 = stg7.extract<944, 959>();
  hw_uint<16> stg7_lane_60 = stg7.extract<960, 975>();
  hw_uint<16> stg7_lane_61 = stg7.extract<976, 991>();
  hw_uint<16> stg7_lane_62 = stg7.extract<992, 1007>();
  hw_uint<16> stg7_lane_63 = stg7.extract<1008, 1023>();
  hw_uint<16> stg7_lane_64 = stg7.extract<1024, 1039>();
  hw_uint<16> stg7_lane_65 = stg7.extract<1040, 1055>();
  hw_uint<16> stg7_lane_66 = stg7.extract<1056, 1071>();
  hw_uint<16> stg7_lane_67 = stg7.extract<1072, 1087>();
  hw_uint<16> stg7_lane_68 = stg7.extract<1088, 1103>();
  hw_uint<16> stg7_lane_69 = stg7.extract<1104, 1119>();
  hw_uint<16> stg7_lane_70 = stg7.extract<1120, 1135>();
  hw_uint<16> stg7_lane_71 = stg7.extract<1136, 1151>();
  hw_uint<16> stg7_lane_72 = stg7.extract<1152, 1167>();
  hw_uint<16> stg7_lane_73 = stg7.extract<1168, 1183>();
  hw_uint<16> stg7_lane_74 = stg7.extract<1184, 1199>();
  hw_uint<16> stg7_lane_75 = stg7.extract<1200, 1215>();
  hw_uint<16> stg7_lane_76 = stg7.extract<1216, 1231>();
  hw_uint<16> stg7_lane_77 = stg7.extract<1232, 1247>();
  hw_uint<16> stg7_lane_78 = stg7.extract<1248, 1263>();
  hw_uint<16> stg7_lane_79 = stg7.extract<1264, 1279>();
  hw_uint<16> stg7_lane_80 = stg7.extract<1280, 1295>();
  hw_uint<16> stg7_lane_81 = stg7.extract<1296, 1311>();
  hw_uint<16> stg7_lane_82 = stg7.extract<1312, 1327>();
  hw_uint<16> stg7_lane_83 = stg7.extract<1328, 1343>();
  hw_uint<16> stg7_lane_84 = stg7.extract<1344, 1359>();
  hw_uint<16> stg7_lane_85 = stg7.extract<1360, 1375>();
  hw_uint<16> stg7_lane_86 = stg7.extract<1376, 1391>();
  hw_uint<16> stg7_lane_87 = stg7.extract<1392, 1407>();
  hw_uint<16> stg7_lane_88 = stg7.extract<1408, 1423>();
  hw_uint<16> stg7_lane_89 = stg7.extract<1424, 1439>();
  hw_uint<16> stg7_lane_90 = stg7.extract<1440, 1455>();
  hw_uint<16> stg7_lane_91 = stg7.extract<1456, 1471>();
  hw_uint<16> stg7_lane_92 = stg7.extract<1472, 1487>();
  hw_uint<16> stg7_lane_93 = stg7.extract<1488, 1503>();
  hw_uint<16> stg7_lane_94 = stg7.extract<1504, 1519>();
  hw_uint<16> stg7_lane_95 = stg7.extract<1520, 1535>();
  hw_uint<16> stg7_lane_96 = stg7.extract<1536, 1551>();
  hw_uint<16> stg7_lane_97 = stg7.extract<1552, 1567>();
  hw_uint<16> stg7_lane_98 = stg7.extract<1568, 1583>();
  hw_uint<16> stg7_lane_99 = stg7.extract<1584, 1599>();
  hw_uint<16> stg7_lane_100 = stg7.extract<1600, 1615>();
  hw_uint<16> stg7_lane_101 = stg7.extract<1616, 1631>();
  hw_uint<16> stg7_lane_102 = stg7.extract<1632, 1647>();
  hw_uint<16> stg7_lane_103 = stg7.extract<1648, 1663>();
  hw_uint<16> stg7_lane_104 = stg7.extract<1664, 1679>();
  hw_uint<16> stg7_lane_105 = stg7.extract<1680, 1695>();
  hw_uint<16> stg7_lane_106 = stg7.extract<1696, 1711>();
  hw_uint<16> stg7_lane_107 = stg7.extract<1712, 1727>();
  hw_uint<16> stg7_lane_108 = stg7.extract<1728, 1743>();
  hw_uint<16> stg7_lane_109 = stg7.extract<1744, 1759>();
  hw_uint<16> stg7_lane_110 = stg7.extract<1760, 1775>();
  hw_uint<16> stg7_lane_111 = stg7.extract<1776, 1791>();
  hw_uint<16> stg7_lane_112 = stg7.extract<1792, 1807>();
  hw_uint<16> stg7_lane_113 = stg7.extract<1808, 1823>();
  hw_uint<16> stg7_lane_114 = stg7.extract<1824, 1839>();
  hw_uint<16> stg7_lane_115 = stg7.extract<1840, 1855>();
  hw_uint<16> stg7_lane_116 = stg7.extract<1856, 1871>();
  hw_uint<16> stg7_lane_117 = stg7.extract<1872, 1887>();
  hw_uint<16> stg7_lane_118 = stg7.extract<1888, 1903>();
  hw_uint<16> stg7_lane_119 = stg7.extract<1904, 1919>();
  hw_uint<16> stg7_lane_120 = stg7.extract<1920, 1935>();
  hw_uint<16> stg7_lane_121 = stg7.extract<1936, 1951>();
  hw_uint<16> stg7_lane_122 = stg7.extract<1952, 1967>();
  hw_uint<16> stg7_lane_123 = stg7.extract<1968, 1983>();
  hw_uint<16> stg7_lane_124 = stg7.extract<1984, 1999>();
  hw_uint<16> stg7_lane_125 = stg7.extract<2000, 2015>();
  hw_uint<16> stg7_lane_126 = stg7.extract<2016, 2031>();
  hw_uint<16> stg7_lane_127 = stg7.extract<2032, 2047>();

	
  hw_uint<64 > stg7_lane_3_pack;
  set_at<0, 64, 16>(stg7_lane_3_pack, stg7_lane_0);
  set_at<16, 64, 16>(stg7_lane_3_pack, stg7_lane_1);
  set_at<32, 64, 16>(stg7_lane_3_pack, stg7_lane_2);
  set_at<48, 64, 16>(stg7_lane_3_pack, stg7_lane_3);
  auto res_stg8_update_0_sm9_0593 = stg8_generated_compute_unrolled_1(stg7_lane_3_pack);

  hw_uint<64 > stg7_lane_7_pack;
  set_at<0, 64, 16>(stg7_lane_7_pack, stg7_lane_4);
  set_at<16, 64, 16>(stg7_lane_7_pack, stg7_lane_5);
  set_at<32, 64, 16>(stg7_lane_7_pack, stg7_lane_6);
  set_at<48, 64, 16>(stg7_lane_7_pack, stg7_lane_7);
  auto res_stg8_update_0_sm9_1595 = stg8_generated_compute_unrolled_1(stg7_lane_7_pack);

  hw_uint<64 > stg7_lane_11_pack;
  set_at<0, 64, 16>(stg7_lane_11_pack, stg7_lane_8);
  set_at<16, 64, 16>(stg7_lane_11_pack, stg7_lane_9);
  set_at<32, 64, 16>(stg7_lane_11_pack, stg7_lane_10);
  set_at<48, 64, 16>(stg7_lane_11_pack, stg7_lane_11);
  auto res_stg8_update_0_sm9_2597 = stg8_generated_compute_unrolled_1(stg7_lane_11_pack);

  hw_uint<64 > stg7_lane_15_pack;
  set_at<0, 64, 16>(stg7_lane_15_pack, stg7_lane_12);
  set_at<16, 64, 16>(stg7_lane_15_pack, stg7_lane_13);
  set_at<32, 64, 16>(stg7_lane_15_pack, stg7_lane_14);
  set_at<48, 64, 16>(stg7_lane_15_pack, stg7_lane_15);
  auto res_stg8_update_0_sm9_3599 = stg8_generated_compute_unrolled_1(stg7_lane_15_pack);

  hw_uint<64 > stg7_lane_19_pack;
  set_at<0, 64, 16>(stg7_lane_19_pack, stg7_lane_16);
  set_at<16, 64, 16>(stg7_lane_19_pack, stg7_lane_17);
  set_at<32, 64, 16>(stg7_lane_19_pack, stg7_lane_18);
  set_at<48, 64, 16>(stg7_lane_19_pack, stg7_lane_19);
  auto res_stg8_update_0_sm9_4601 = stg8_generated_compute_unrolled_1(stg7_lane_19_pack);

  hw_uint<64 > stg7_lane_23_pack;
  set_at<0, 64, 16>(stg7_lane_23_pack, stg7_lane_20);
  set_at<16, 64, 16>(stg7_lane_23_pack, stg7_lane_21);
  set_at<32, 64, 16>(stg7_lane_23_pack, stg7_lane_22);
  set_at<48, 64, 16>(stg7_lane_23_pack, stg7_lane_23);
  auto res_stg8_update_0_sm9_5603 = stg8_generated_compute_unrolled_1(stg7_lane_23_pack);

  hw_uint<64 > stg7_lane_27_pack;
  set_at<0, 64, 16>(stg7_lane_27_pack, stg7_lane_24);
  set_at<16, 64, 16>(stg7_lane_27_pack, stg7_lane_25);
  set_at<32, 64, 16>(stg7_lane_27_pack, stg7_lane_26);
  set_at<48, 64, 16>(stg7_lane_27_pack, stg7_lane_27);
  auto res_stg8_update_0_sm9_6605 = stg8_generated_compute_unrolled_1(stg7_lane_27_pack);

  hw_uint<64 > stg7_lane_31_pack;
  set_at<0, 64, 16>(stg7_lane_31_pack, stg7_lane_28);
  set_at<16, 64, 16>(stg7_lane_31_pack, stg7_lane_29);
  set_at<32, 64, 16>(stg7_lane_31_pack, stg7_lane_30);
  set_at<48, 64, 16>(stg7_lane_31_pack, stg7_lane_31);
  auto res_stg8_update_0_sm9_7607 = stg8_generated_compute_unrolled_1(stg7_lane_31_pack);

  hw_uint<64 > stg7_lane_35_pack;
  set_at<0, 64, 16>(stg7_lane_35_pack, stg7_lane_32);
  set_at<16, 64, 16>(stg7_lane_35_pack, stg7_lane_33);
  set_at<32, 64, 16>(stg7_lane_35_pack, stg7_lane_34);
  set_at<48, 64, 16>(stg7_lane_35_pack, stg7_lane_35);
  auto res_stg8_update_0_sm9_8609 = stg8_generated_compute_unrolled_1(stg7_lane_35_pack);

  hw_uint<64 > stg7_lane_39_pack;
  set_at<0, 64, 16>(stg7_lane_39_pack, stg7_lane_36);
  set_at<16, 64, 16>(stg7_lane_39_pack, stg7_lane_37);
  set_at<32, 64, 16>(stg7_lane_39_pack, stg7_lane_38);
  set_at<48, 64, 16>(stg7_lane_39_pack, stg7_lane_39);
  auto res_stg8_update_0_sm9_9611 = stg8_generated_compute_unrolled_1(stg7_lane_39_pack);

  hw_uint<64 > stg7_lane_43_pack;
  set_at<0, 64, 16>(stg7_lane_43_pack, stg7_lane_40);
  set_at<16, 64, 16>(stg7_lane_43_pack, stg7_lane_41);
  set_at<32, 64, 16>(stg7_lane_43_pack, stg7_lane_42);
  set_at<48, 64, 16>(stg7_lane_43_pack, stg7_lane_43);
  auto res_stg8_update_0_sm9_10613 = stg8_generated_compute_unrolled_1(stg7_lane_43_pack);

  hw_uint<64 > stg7_lane_47_pack;
  set_at<0, 64, 16>(stg7_lane_47_pack, stg7_lane_44);
  set_at<16, 64, 16>(stg7_lane_47_pack, stg7_lane_45);
  set_at<32, 64, 16>(stg7_lane_47_pack, stg7_lane_46);
  set_at<48, 64, 16>(stg7_lane_47_pack, stg7_lane_47);
  auto res_stg8_update_0_sm9_11615 = stg8_generated_compute_unrolled_1(stg7_lane_47_pack);

  hw_uint<64 > stg7_lane_51_pack;
  set_at<0, 64, 16>(stg7_lane_51_pack, stg7_lane_48);
  set_at<16, 64, 16>(stg7_lane_51_pack, stg7_lane_49);
  set_at<32, 64, 16>(stg7_lane_51_pack, stg7_lane_50);
  set_at<48, 64, 16>(stg7_lane_51_pack, stg7_lane_51);
  auto res_stg8_update_0_sm9_12617 = stg8_generated_compute_unrolled_1(stg7_lane_51_pack);

  hw_uint<64 > stg7_lane_55_pack;
  set_at<0, 64, 16>(stg7_lane_55_pack, stg7_lane_52);
  set_at<16, 64, 16>(stg7_lane_55_pack, stg7_lane_53);
  set_at<32, 64, 16>(stg7_lane_55_pack, stg7_lane_54);
  set_at<48, 64, 16>(stg7_lane_55_pack, stg7_lane_55);
  auto res_stg8_update_0_sm9_13619 = stg8_generated_compute_unrolled_1(stg7_lane_55_pack);

  hw_uint<64 > stg7_lane_59_pack;
  set_at<0, 64, 16>(stg7_lane_59_pack, stg7_lane_56);
  set_at<16, 64, 16>(stg7_lane_59_pack, stg7_lane_57);
  set_at<32, 64, 16>(stg7_lane_59_pack, stg7_lane_58);
  set_at<48, 64, 16>(stg7_lane_59_pack, stg7_lane_59);
  auto res_stg8_update_0_sm9_14621 = stg8_generated_compute_unrolled_1(stg7_lane_59_pack);

  hw_uint<64 > stg7_lane_63_pack;
  set_at<0, 64, 16>(stg7_lane_63_pack, stg7_lane_60);
  set_at<16, 64, 16>(stg7_lane_63_pack, stg7_lane_61);
  set_at<32, 64, 16>(stg7_lane_63_pack, stg7_lane_62);
  set_at<48, 64, 16>(stg7_lane_63_pack, stg7_lane_63);
  auto res_stg8_update_0_sm9_15623 = stg8_generated_compute_unrolled_1(stg7_lane_63_pack);

  hw_uint<64 > stg7_lane_67_pack;
  set_at<0, 64, 16>(stg7_lane_67_pack, stg7_lane_64);
  set_at<16, 64, 16>(stg7_lane_67_pack, stg7_lane_65);
  set_at<32, 64, 16>(stg7_lane_67_pack, stg7_lane_66);
  set_at<48, 64, 16>(stg7_lane_67_pack, stg7_lane_67);
  auto res_stg8_update_0_sm9_16625 = stg8_generated_compute_unrolled_1(stg7_lane_67_pack);

  hw_uint<64 > stg7_lane_71_pack;
  set_at<0, 64, 16>(stg7_lane_71_pack, stg7_lane_68);
  set_at<16, 64, 16>(stg7_lane_71_pack, stg7_lane_69);
  set_at<32, 64, 16>(stg7_lane_71_pack, stg7_lane_70);
  set_at<48, 64, 16>(stg7_lane_71_pack, stg7_lane_71);
  auto res_stg8_update_0_sm9_17627 = stg8_generated_compute_unrolled_1(stg7_lane_71_pack);

  hw_uint<64 > stg7_lane_75_pack;
  set_at<0, 64, 16>(stg7_lane_75_pack, stg7_lane_72);
  set_at<16, 64, 16>(stg7_lane_75_pack, stg7_lane_73);
  set_at<32, 64, 16>(stg7_lane_75_pack, stg7_lane_74);
  set_at<48, 64, 16>(stg7_lane_75_pack, stg7_lane_75);
  auto res_stg8_update_0_sm9_18629 = stg8_generated_compute_unrolled_1(stg7_lane_75_pack);

  hw_uint<64 > stg7_lane_79_pack;
  set_at<0, 64, 16>(stg7_lane_79_pack, stg7_lane_76);
  set_at<16, 64, 16>(stg7_lane_79_pack, stg7_lane_77);
  set_at<32, 64, 16>(stg7_lane_79_pack, stg7_lane_78);
  set_at<48, 64, 16>(stg7_lane_79_pack, stg7_lane_79);
  auto res_stg8_update_0_sm9_19631 = stg8_generated_compute_unrolled_1(stg7_lane_79_pack);

  hw_uint<64 > stg7_lane_83_pack;
  set_at<0, 64, 16>(stg7_lane_83_pack, stg7_lane_80);
  set_at<16, 64, 16>(stg7_lane_83_pack, stg7_lane_81);
  set_at<32, 64, 16>(stg7_lane_83_pack, stg7_lane_82);
  set_at<48, 64, 16>(stg7_lane_83_pack, stg7_lane_83);
  auto res_stg8_update_0_sm9_20633 = stg8_generated_compute_unrolled_1(stg7_lane_83_pack);

  hw_uint<64 > stg7_lane_87_pack;
  set_at<0, 64, 16>(stg7_lane_87_pack, stg7_lane_84);
  set_at<16, 64, 16>(stg7_lane_87_pack, stg7_lane_85);
  set_at<32, 64, 16>(stg7_lane_87_pack, stg7_lane_86);
  set_at<48, 64, 16>(stg7_lane_87_pack, stg7_lane_87);
  auto res_stg8_update_0_sm9_21635 = stg8_generated_compute_unrolled_1(stg7_lane_87_pack);

  hw_uint<64 > stg7_lane_91_pack;
  set_at<0, 64, 16>(stg7_lane_91_pack, stg7_lane_88);
  set_at<16, 64, 16>(stg7_lane_91_pack, stg7_lane_89);
  set_at<32, 64, 16>(stg7_lane_91_pack, stg7_lane_90);
  set_at<48, 64, 16>(stg7_lane_91_pack, stg7_lane_91);
  auto res_stg8_update_0_sm9_22637 = stg8_generated_compute_unrolled_1(stg7_lane_91_pack);

  hw_uint<64 > stg7_lane_95_pack;
  set_at<0, 64, 16>(stg7_lane_95_pack, stg7_lane_92);
  set_at<16, 64, 16>(stg7_lane_95_pack, stg7_lane_93);
  set_at<32, 64, 16>(stg7_lane_95_pack, stg7_lane_94);
  set_at<48, 64, 16>(stg7_lane_95_pack, stg7_lane_95);
  auto res_stg8_update_0_sm9_23639 = stg8_generated_compute_unrolled_1(stg7_lane_95_pack);

  hw_uint<64 > stg7_lane_99_pack;
  set_at<0, 64, 16>(stg7_lane_99_pack, stg7_lane_96);
  set_at<16, 64, 16>(stg7_lane_99_pack, stg7_lane_97);
  set_at<32, 64, 16>(stg7_lane_99_pack, stg7_lane_98);
  set_at<48, 64, 16>(stg7_lane_99_pack, stg7_lane_99);
  auto res_stg8_update_0_sm9_24641 = stg8_generated_compute_unrolled_1(stg7_lane_99_pack);

  hw_uint<64 > stg7_lane_103_pack;
  set_at<0, 64, 16>(stg7_lane_103_pack, stg7_lane_100);
  set_at<16, 64, 16>(stg7_lane_103_pack, stg7_lane_101);
  set_at<32, 64, 16>(stg7_lane_103_pack, stg7_lane_102);
  set_at<48, 64, 16>(stg7_lane_103_pack, stg7_lane_103);
  auto res_stg8_update_0_sm9_25643 = stg8_generated_compute_unrolled_1(stg7_lane_103_pack);

  hw_uint<64 > stg7_lane_107_pack;
  set_at<0, 64, 16>(stg7_lane_107_pack, stg7_lane_104);
  set_at<16, 64, 16>(stg7_lane_107_pack, stg7_lane_105);
  set_at<32, 64, 16>(stg7_lane_107_pack, stg7_lane_106);
  set_at<48, 64, 16>(stg7_lane_107_pack, stg7_lane_107);
  auto res_stg8_update_0_sm9_26645 = stg8_generated_compute_unrolled_1(stg7_lane_107_pack);

  hw_uint<64 > stg7_lane_111_pack;
  set_at<0, 64, 16>(stg7_lane_111_pack, stg7_lane_108);
  set_at<16, 64, 16>(stg7_lane_111_pack, stg7_lane_109);
  set_at<32, 64, 16>(stg7_lane_111_pack, stg7_lane_110);
  set_at<48, 64, 16>(stg7_lane_111_pack, stg7_lane_111);
  auto res_stg8_update_0_sm9_27647 = stg8_generated_compute_unrolled_1(stg7_lane_111_pack);

  hw_uint<64 > stg7_lane_115_pack;
  set_at<0, 64, 16>(stg7_lane_115_pack, stg7_lane_112);
  set_at<16, 64, 16>(stg7_lane_115_pack, stg7_lane_113);
  set_at<32, 64, 16>(stg7_lane_115_pack, stg7_lane_114);
  set_at<48, 64, 16>(stg7_lane_115_pack, stg7_lane_115);
  auto res_stg8_update_0_sm9_28649 = stg8_generated_compute_unrolled_1(stg7_lane_115_pack);

  hw_uint<64 > stg7_lane_119_pack;
  set_at<0, 64, 16>(stg7_lane_119_pack, stg7_lane_116);
  set_at<16, 64, 16>(stg7_lane_119_pack, stg7_lane_117);
  set_at<32, 64, 16>(stg7_lane_119_pack, stg7_lane_118);
  set_at<48, 64, 16>(stg7_lane_119_pack, stg7_lane_119);
  auto res_stg8_update_0_sm9_29651 = stg8_generated_compute_unrolled_1(stg7_lane_119_pack);

  hw_uint<64 > stg7_lane_123_pack;
  set_at<0, 64, 16>(stg7_lane_123_pack, stg7_lane_120);
  set_at<16, 64, 16>(stg7_lane_123_pack, stg7_lane_121);
  set_at<32, 64, 16>(stg7_lane_123_pack, stg7_lane_122);
  set_at<48, 64, 16>(stg7_lane_123_pack, stg7_lane_123);
  auto res_stg8_update_0_sm9_30653 = stg8_generated_compute_unrolled_1(stg7_lane_123_pack);

  hw_uint<64 > stg7_lane_127_pack;
  set_at<0, 64, 16>(stg7_lane_127_pack, stg7_lane_124);
  set_at<16, 64, 16>(stg7_lane_127_pack, stg7_lane_125);
  set_at<32, 64, 16>(stg7_lane_127_pack, stg7_lane_126);
  set_at<48, 64, 16>(stg7_lane_127_pack, stg7_lane_127);
  auto res_stg8_update_0_sm9_31655 = stg8_generated_compute_unrolled_1(stg7_lane_127_pack);
  hw_uint<512 > return_value1133;
  set_at<0, 512, 16>(return_value1133, res_stg8_update_0_sm9_0593);
  set_at<16, 512, 16>(return_value1133, res_stg8_update_0_sm9_1595);
  set_at<32, 512, 16>(return_value1133, res_stg8_update_0_sm9_2597);
  set_at<48, 512, 16>(return_value1133, res_stg8_update_0_sm9_3599);
  set_at<64, 512, 16>(return_value1133, res_stg8_update_0_sm9_4601);
  set_at<80, 512, 16>(return_value1133, res_stg8_update_0_sm9_5603);
  set_at<96, 512, 16>(return_value1133, res_stg8_update_0_sm9_6605);
  set_at<112, 512, 16>(return_value1133, res_stg8_update_0_sm9_7607);
  set_at<128, 512, 16>(return_value1133, res_stg8_update_0_sm9_8609);
  set_at<144, 512, 16>(return_value1133, res_stg8_update_0_sm9_9611);
  set_at<160, 512, 16>(return_value1133, res_stg8_update_0_sm9_10613);
  set_at<176, 512, 16>(return_value1133, res_stg8_update_0_sm9_11615);
  set_at<192, 512, 16>(return_value1133, res_stg8_update_0_sm9_12617);
  set_at<208, 512, 16>(return_value1133, res_stg8_update_0_sm9_13619);
  set_at<224, 512, 16>(return_value1133, res_stg8_update_0_sm9_14621);
  set_at<240, 512, 16>(return_value1133, res_stg8_update_0_sm9_15623);
  set_at<256, 512, 16>(return_value1133, res_stg8_update_0_sm9_16625);
  set_at<272, 512, 16>(return_value1133, res_stg8_update_0_sm9_17627);
  set_at<288, 512, 16>(return_value1133, res_stg8_update_0_sm9_18629);
  set_at<304, 512, 16>(return_value1133, res_stg8_update_0_sm9_19631);
  set_at<320, 512, 16>(return_value1133, res_stg8_update_0_sm9_20633);
  set_at<336, 512, 16>(return_value1133, res_stg8_update_0_sm9_21635);
  set_at<352, 512, 16>(return_value1133, res_stg8_update_0_sm9_22637);
  set_at<368, 512, 16>(return_value1133, res_stg8_update_0_sm9_23639);
  set_at<384, 512, 16>(return_value1133, res_stg8_update_0_sm9_24641);
  set_at<400, 512, 16>(return_value1133, res_stg8_update_0_sm9_25643);
  set_at<416, 512, 16>(return_value1133, res_stg8_update_0_sm9_26645);
  set_at<432, 512, 16>(return_value1133, res_stg8_update_0_sm9_27647);
  set_at<448, 512, 16>(return_value1133, res_stg8_update_0_sm9_28649);
  set_at<464, 512, 16>(return_value1133, res_stg8_update_0_sm9_29651);
  set_at<480, 512, 16>(return_value1133, res_stg8_update_0_sm9_30653);
  set_at<496, 512, 16>(return_value1133, res_stg8_update_0_sm9_31655);
  return return_value1133;

}

hw_uint<512> stg9_1_cu1135(hw_uint<16*128>& stg8) {
  hw_uint<16> stg8_lane_0 = stg8.extract<0, 15>();
  hw_uint<16> stg8_lane_1 = stg8.extract<16, 31>();
  hw_uint<16> stg8_lane_2 = stg8.extract<32, 47>();
  hw_uint<16> stg8_lane_3 = stg8.extract<48, 63>();
  hw_uint<16> stg8_lane_4 = stg8.extract<64, 79>();
  hw_uint<16> stg8_lane_5 = stg8.extract<80, 95>();
  hw_uint<16> stg8_lane_6 = stg8.extract<96, 111>();
  hw_uint<16> stg8_lane_7 = stg8.extract<112, 127>();
  hw_uint<16> stg8_lane_8 = stg8.extract<128, 143>();
  hw_uint<16> stg8_lane_9 = stg8.extract<144, 159>();
  hw_uint<16> stg8_lane_10 = stg8.extract<160, 175>();
  hw_uint<16> stg8_lane_11 = stg8.extract<176, 191>();
  hw_uint<16> stg8_lane_12 = stg8.extract<192, 207>();
  hw_uint<16> stg8_lane_13 = stg8.extract<208, 223>();
  hw_uint<16> stg8_lane_14 = stg8.extract<224, 239>();
  hw_uint<16> stg8_lane_15 = stg8.extract<240, 255>();
  hw_uint<16> stg8_lane_16 = stg8.extract<256, 271>();
  hw_uint<16> stg8_lane_17 = stg8.extract<272, 287>();
  hw_uint<16> stg8_lane_18 = stg8.extract<288, 303>();
  hw_uint<16> stg8_lane_19 = stg8.extract<304, 319>();
  hw_uint<16> stg8_lane_20 = stg8.extract<320, 335>();
  hw_uint<16> stg8_lane_21 = stg8.extract<336, 351>();
  hw_uint<16> stg8_lane_22 = stg8.extract<352, 367>();
  hw_uint<16> stg8_lane_23 = stg8.extract<368, 383>();
  hw_uint<16> stg8_lane_24 = stg8.extract<384, 399>();
  hw_uint<16> stg8_lane_25 = stg8.extract<400, 415>();
  hw_uint<16> stg8_lane_26 = stg8.extract<416, 431>();
  hw_uint<16> stg8_lane_27 = stg8.extract<432, 447>();
  hw_uint<16> stg8_lane_28 = stg8.extract<448, 463>();
  hw_uint<16> stg8_lane_29 = stg8.extract<464, 479>();
  hw_uint<16> stg8_lane_30 = stg8.extract<480, 495>();
  hw_uint<16> stg8_lane_31 = stg8.extract<496, 511>();
  hw_uint<16> stg8_lane_32 = stg8.extract<512, 527>();
  hw_uint<16> stg8_lane_33 = stg8.extract<528, 543>();
  hw_uint<16> stg8_lane_34 = stg8.extract<544, 559>();
  hw_uint<16> stg8_lane_35 = stg8.extract<560, 575>();
  hw_uint<16> stg8_lane_36 = stg8.extract<576, 591>();
  hw_uint<16> stg8_lane_37 = stg8.extract<592, 607>();
  hw_uint<16> stg8_lane_38 = stg8.extract<608, 623>();
  hw_uint<16> stg8_lane_39 = stg8.extract<624, 639>();
  hw_uint<16> stg8_lane_40 = stg8.extract<640, 655>();
  hw_uint<16> stg8_lane_41 = stg8.extract<656, 671>();
  hw_uint<16> stg8_lane_42 = stg8.extract<672, 687>();
  hw_uint<16> stg8_lane_43 = stg8.extract<688, 703>();
  hw_uint<16> stg8_lane_44 = stg8.extract<704, 719>();
  hw_uint<16> stg8_lane_45 = stg8.extract<720, 735>();
  hw_uint<16> stg8_lane_46 = stg8.extract<736, 751>();
  hw_uint<16> stg8_lane_47 = stg8.extract<752, 767>();
  hw_uint<16> stg8_lane_48 = stg8.extract<768, 783>();
  hw_uint<16> stg8_lane_49 = stg8.extract<784, 799>();
  hw_uint<16> stg8_lane_50 = stg8.extract<800, 815>();
  hw_uint<16> stg8_lane_51 = stg8.extract<816, 831>();
  hw_uint<16> stg8_lane_52 = stg8.extract<832, 847>();
  hw_uint<16> stg8_lane_53 = stg8.extract<848, 863>();
  hw_uint<16> stg8_lane_54 = stg8.extract<864, 879>();
  hw_uint<16> stg8_lane_55 = stg8.extract<880, 895>();
  hw_uint<16> stg8_lane_56 = stg8.extract<896, 911>();
  hw_uint<16> stg8_lane_57 = stg8.extract<912, 927>();
  hw_uint<16> stg8_lane_58 = stg8.extract<928, 943>();
  hw_uint<16> stg8_lane_59 = stg8.extract<944, 959>();
  hw_uint<16> stg8_lane_60 = stg8.extract<960, 975>();
  hw_uint<16> stg8_lane_61 = stg8.extract<976, 991>();
  hw_uint<16> stg8_lane_62 = stg8.extract<992, 1007>();
  hw_uint<16> stg8_lane_63 = stg8.extract<1008, 1023>();
  hw_uint<16> stg8_lane_64 = stg8.extract<1024, 1039>();
  hw_uint<16> stg8_lane_65 = stg8.extract<1040, 1055>();
  hw_uint<16> stg8_lane_66 = stg8.extract<1056, 1071>();
  hw_uint<16> stg8_lane_67 = stg8.extract<1072, 1087>();
  hw_uint<16> stg8_lane_68 = stg8.extract<1088, 1103>();
  hw_uint<16> stg8_lane_69 = stg8.extract<1104, 1119>();
  hw_uint<16> stg8_lane_70 = stg8.extract<1120, 1135>();
  hw_uint<16> stg8_lane_71 = stg8.extract<1136, 1151>();
  hw_uint<16> stg8_lane_72 = stg8.extract<1152, 1167>();
  hw_uint<16> stg8_lane_73 = stg8.extract<1168, 1183>();
  hw_uint<16> stg8_lane_74 = stg8.extract<1184, 1199>();
  hw_uint<16> stg8_lane_75 = stg8.extract<1200, 1215>();
  hw_uint<16> stg8_lane_76 = stg8.extract<1216, 1231>();
  hw_uint<16> stg8_lane_77 = stg8.extract<1232, 1247>();
  hw_uint<16> stg8_lane_78 = stg8.extract<1248, 1263>();
  hw_uint<16> stg8_lane_79 = stg8.extract<1264, 1279>();
  hw_uint<16> stg8_lane_80 = stg8.extract<1280, 1295>();
  hw_uint<16> stg8_lane_81 = stg8.extract<1296, 1311>();
  hw_uint<16> stg8_lane_82 = stg8.extract<1312, 1327>();
  hw_uint<16> stg8_lane_83 = stg8.extract<1328, 1343>();
  hw_uint<16> stg8_lane_84 = stg8.extract<1344, 1359>();
  hw_uint<16> stg8_lane_85 = stg8.extract<1360, 1375>();
  hw_uint<16> stg8_lane_86 = stg8.extract<1376, 1391>();
  hw_uint<16> stg8_lane_87 = stg8.extract<1392, 1407>();
  hw_uint<16> stg8_lane_88 = stg8.extract<1408, 1423>();
  hw_uint<16> stg8_lane_89 = stg8.extract<1424, 1439>();
  hw_uint<16> stg8_lane_90 = stg8.extract<1440, 1455>();
  hw_uint<16> stg8_lane_91 = stg8.extract<1456, 1471>();
  hw_uint<16> stg8_lane_92 = stg8.extract<1472, 1487>();
  hw_uint<16> stg8_lane_93 = stg8.extract<1488, 1503>();
  hw_uint<16> stg8_lane_94 = stg8.extract<1504, 1519>();
  hw_uint<16> stg8_lane_95 = stg8.extract<1520, 1535>();
  hw_uint<16> stg8_lane_96 = stg8.extract<1536, 1551>();
  hw_uint<16> stg8_lane_97 = stg8.extract<1552, 1567>();
  hw_uint<16> stg8_lane_98 = stg8.extract<1568, 1583>();
  hw_uint<16> stg8_lane_99 = stg8.extract<1584, 1599>();
  hw_uint<16> stg8_lane_100 = stg8.extract<1600, 1615>();
  hw_uint<16> stg8_lane_101 = stg8.extract<1616, 1631>();
  hw_uint<16> stg8_lane_102 = stg8.extract<1632, 1647>();
  hw_uint<16> stg8_lane_103 = stg8.extract<1648, 1663>();
  hw_uint<16> stg8_lane_104 = stg8.extract<1664, 1679>();
  hw_uint<16> stg8_lane_105 = stg8.extract<1680, 1695>();
  hw_uint<16> stg8_lane_106 = stg8.extract<1696, 1711>();
  hw_uint<16> stg8_lane_107 = stg8.extract<1712, 1727>();
  hw_uint<16> stg8_lane_108 = stg8.extract<1728, 1743>();
  hw_uint<16> stg8_lane_109 = stg8.extract<1744, 1759>();
  hw_uint<16> stg8_lane_110 = stg8.extract<1760, 1775>();
  hw_uint<16> stg8_lane_111 = stg8.extract<1776, 1791>();
  hw_uint<16> stg8_lane_112 = stg8.extract<1792, 1807>();
  hw_uint<16> stg8_lane_113 = stg8.extract<1808, 1823>();
  hw_uint<16> stg8_lane_114 = stg8.extract<1824, 1839>();
  hw_uint<16> stg8_lane_115 = stg8.extract<1840, 1855>();
  hw_uint<16> stg8_lane_116 = stg8.extract<1856, 1871>();
  hw_uint<16> stg8_lane_117 = stg8.extract<1872, 1887>();
  hw_uint<16> stg8_lane_118 = stg8.extract<1888, 1903>();
  hw_uint<16> stg8_lane_119 = stg8.extract<1904, 1919>();
  hw_uint<16> stg8_lane_120 = stg8.extract<1920, 1935>();
  hw_uint<16> stg8_lane_121 = stg8.extract<1936, 1951>();
  hw_uint<16> stg8_lane_122 = stg8.extract<1952, 1967>();
  hw_uint<16> stg8_lane_123 = stg8.extract<1968, 1983>();
  hw_uint<16> stg8_lane_124 = stg8.extract<1984, 1999>();
  hw_uint<16> stg8_lane_125 = stg8.extract<2000, 2015>();
  hw_uint<16> stg8_lane_126 = stg8.extract<2016, 2031>();
  hw_uint<16> stg8_lane_127 = stg8.extract<2032, 2047>();

	
  hw_uint<64 > stg8_lane_3_pack;
  set_at<0, 64, 16>(stg8_lane_3_pack, stg8_lane_0);
  set_at<16, 64, 16>(stg8_lane_3_pack, stg8_lane_1);
  set_at<32, 64, 16>(stg8_lane_3_pack, stg8_lane_2);
  set_at<48, 64, 16>(stg8_lane_3_pack, stg8_lane_3);
  auto res_stg9_update_0_sm10_0657 = stg9_generated_compute_unrolled_1(stg8_lane_3_pack);

  hw_uint<64 > stg8_lane_7_pack;
  set_at<0, 64, 16>(stg8_lane_7_pack, stg8_lane_4);
  set_at<16, 64, 16>(stg8_lane_7_pack, stg8_lane_5);
  set_at<32, 64, 16>(stg8_lane_7_pack, stg8_lane_6);
  set_at<48, 64, 16>(stg8_lane_7_pack, stg8_lane_7);
  auto res_stg9_update_0_sm10_1659 = stg9_generated_compute_unrolled_1(stg8_lane_7_pack);

  hw_uint<64 > stg8_lane_11_pack;
  set_at<0, 64, 16>(stg8_lane_11_pack, stg8_lane_8);
  set_at<16, 64, 16>(stg8_lane_11_pack, stg8_lane_9);
  set_at<32, 64, 16>(stg8_lane_11_pack, stg8_lane_10);
  set_at<48, 64, 16>(stg8_lane_11_pack, stg8_lane_11);
  auto res_stg9_update_0_sm10_2661 = stg9_generated_compute_unrolled_1(stg8_lane_11_pack);

  hw_uint<64 > stg8_lane_15_pack;
  set_at<0, 64, 16>(stg8_lane_15_pack, stg8_lane_12);
  set_at<16, 64, 16>(stg8_lane_15_pack, stg8_lane_13);
  set_at<32, 64, 16>(stg8_lane_15_pack, stg8_lane_14);
  set_at<48, 64, 16>(stg8_lane_15_pack, stg8_lane_15);
  auto res_stg9_update_0_sm10_3663 = stg9_generated_compute_unrolled_1(stg8_lane_15_pack);

  hw_uint<64 > stg8_lane_19_pack;
  set_at<0, 64, 16>(stg8_lane_19_pack, stg8_lane_16);
  set_at<16, 64, 16>(stg8_lane_19_pack, stg8_lane_17);
  set_at<32, 64, 16>(stg8_lane_19_pack, stg8_lane_18);
  set_at<48, 64, 16>(stg8_lane_19_pack, stg8_lane_19);
  auto res_stg9_update_0_sm10_4665 = stg9_generated_compute_unrolled_1(stg8_lane_19_pack);

  hw_uint<64 > stg8_lane_23_pack;
  set_at<0, 64, 16>(stg8_lane_23_pack, stg8_lane_20);
  set_at<16, 64, 16>(stg8_lane_23_pack, stg8_lane_21);
  set_at<32, 64, 16>(stg8_lane_23_pack, stg8_lane_22);
  set_at<48, 64, 16>(stg8_lane_23_pack, stg8_lane_23);
  auto res_stg9_update_0_sm10_5667 = stg9_generated_compute_unrolled_1(stg8_lane_23_pack);

  hw_uint<64 > stg8_lane_27_pack;
  set_at<0, 64, 16>(stg8_lane_27_pack, stg8_lane_24);
  set_at<16, 64, 16>(stg8_lane_27_pack, stg8_lane_25);
  set_at<32, 64, 16>(stg8_lane_27_pack, stg8_lane_26);
  set_at<48, 64, 16>(stg8_lane_27_pack, stg8_lane_27);
  auto res_stg9_update_0_sm10_6669 = stg9_generated_compute_unrolled_1(stg8_lane_27_pack);

  hw_uint<64 > stg8_lane_31_pack;
  set_at<0, 64, 16>(stg8_lane_31_pack, stg8_lane_28);
  set_at<16, 64, 16>(stg8_lane_31_pack, stg8_lane_29);
  set_at<32, 64, 16>(stg8_lane_31_pack, stg8_lane_30);
  set_at<48, 64, 16>(stg8_lane_31_pack, stg8_lane_31);
  auto res_stg9_update_0_sm10_7671 = stg9_generated_compute_unrolled_1(stg8_lane_31_pack);

  hw_uint<64 > stg8_lane_35_pack;
  set_at<0, 64, 16>(stg8_lane_35_pack, stg8_lane_32);
  set_at<16, 64, 16>(stg8_lane_35_pack, stg8_lane_33);
  set_at<32, 64, 16>(stg8_lane_35_pack, stg8_lane_34);
  set_at<48, 64, 16>(stg8_lane_35_pack, stg8_lane_35);
  auto res_stg9_update_0_sm10_8673 = stg9_generated_compute_unrolled_1(stg8_lane_35_pack);

  hw_uint<64 > stg8_lane_39_pack;
  set_at<0, 64, 16>(stg8_lane_39_pack, stg8_lane_36);
  set_at<16, 64, 16>(stg8_lane_39_pack, stg8_lane_37);
  set_at<32, 64, 16>(stg8_lane_39_pack, stg8_lane_38);
  set_at<48, 64, 16>(stg8_lane_39_pack, stg8_lane_39);
  auto res_stg9_update_0_sm10_9675 = stg9_generated_compute_unrolled_1(stg8_lane_39_pack);

  hw_uint<64 > stg8_lane_43_pack;
  set_at<0, 64, 16>(stg8_lane_43_pack, stg8_lane_40);
  set_at<16, 64, 16>(stg8_lane_43_pack, stg8_lane_41);
  set_at<32, 64, 16>(stg8_lane_43_pack, stg8_lane_42);
  set_at<48, 64, 16>(stg8_lane_43_pack, stg8_lane_43);
  auto res_stg9_update_0_sm10_10677 = stg9_generated_compute_unrolled_1(stg8_lane_43_pack);

  hw_uint<64 > stg8_lane_47_pack;
  set_at<0, 64, 16>(stg8_lane_47_pack, stg8_lane_44);
  set_at<16, 64, 16>(stg8_lane_47_pack, stg8_lane_45);
  set_at<32, 64, 16>(stg8_lane_47_pack, stg8_lane_46);
  set_at<48, 64, 16>(stg8_lane_47_pack, stg8_lane_47);
  auto res_stg9_update_0_sm10_11679 = stg9_generated_compute_unrolled_1(stg8_lane_47_pack);

  hw_uint<64 > stg8_lane_51_pack;
  set_at<0, 64, 16>(stg8_lane_51_pack, stg8_lane_48);
  set_at<16, 64, 16>(stg8_lane_51_pack, stg8_lane_49);
  set_at<32, 64, 16>(stg8_lane_51_pack, stg8_lane_50);
  set_at<48, 64, 16>(stg8_lane_51_pack, stg8_lane_51);
  auto res_stg9_update_0_sm10_12681 = stg9_generated_compute_unrolled_1(stg8_lane_51_pack);

  hw_uint<64 > stg8_lane_55_pack;
  set_at<0, 64, 16>(stg8_lane_55_pack, stg8_lane_52);
  set_at<16, 64, 16>(stg8_lane_55_pack, stg8_lane_53);
  set_at<32, 64, 16>(stg8_lane_55_pack, stg8_lane_54);
  set_at<48, 64, 16>(stg8_lane_55_pack, stg8_lane_55);
  auto res_stg9_update_0_sm10_13683 = stg9_generated_compute_unrolled_1(stg8_lane_55_pack);

  hw_uint<64 > stg8_lane_59_pack;
  set_at<0, 64, 16>(stg8_lane_59_pack, stg8_lane_56);
  set_at<16, 64, 16>(stg8_lane_59_pack, stg8_lane_57);
  set_at<32, 64, 16>(stg8_lane_59_pack, stg8_lane_58);
  set_at<48, 64, 16>(stg8_lane_59_pack, stg8_lane_59);
  auto res_stg9_update_0_sm10_14685 = stg9_generated_compute_unrolled_1(stg8_lane_59_pack);

  hw_uint<64 > stg8_lane_63_pack;
  set_at<0, 64, 16>(stg8_lane_63_pack, stg8_lane_60);
  set_at<16, 64, 16>(stg8_lane_63_pack, stg8_lane_61);
  set_at<32, 64, 16>(stg8_lane_63_pack, stg8_lane_62);
  set_at<48, 64, 16>(stg8_lane_63_pack, stg8_lane_63);
  auto res_stg9_update_0_sm10_15687 = stg9_generated_compute_unrolled_1(stg8_lane_63_pack);

  hw_uint<64 > stg8_lane_67_pack;
  set_at<0, 64, 16>(stg8_lane_67_pack, stg8_lane_64);
  set_at<16, 64, 16>(stg8_lane_67_pack, stg8_lane_65);
  set_at<32, 64, 16>(stg8_lane_67_pack, stg8_lane_66);
  set_at<48, 64, 16>(stg8_lane_67_pack, stg8_lane_67);
  auto res_stg9_update_0_sm10_16689 = stg9_generated_compute_unrolled_1(stg8_lane_67_pack);

  hw_uint<64 > stg8_lane_71_pack;
  set_at<0, 64, 16>(stg8_lane_71_pack, stg8_lane_68);
  set_at<16, 64, 16>(stg8_lane_71_pack, stg8_lane_69);
  set_at<32, 64, 16>(stg8_lane_71_pack, stg8_lane_70);
  set_at<48, 64, 16>(stg8_lane_71_pack, stg8_lane_71);
  auto res_stg9_update_0_sm10_17691 = stg9_generated_compute_unrolled_1(stg8_lane_71_pack);

  hw_uint<64 > stg8_lane_75_pack;
  set_at<0, 64, 16>(stg8_lane_75_pack, stg8_lane_72);
  set_at<16, 64, 16>(stg8_lane_75_pack, stg8_lane_73);
  set_at<32, 64, 16>(stg8_lane_75_pack, stg8_lane_74);
  set_at<48, 64, 16>(stg8_lane_75_pack, stg8_lane_75);
  auto res_stg9_update_0_sm10_18693 = stg9_generated_compute_unrolled_1(stg8_lane_75_pack);

  hw_uint<64 > stg8_lane_79_pack;
  set_at<0, 64, 16>(stg8_lane_79_pack, stg8_lane_76);
  set_at<16, 64, 16>(stg8_lane_79_pack, stg8_lane_77);
  set_at<32, 64, 16>(stg8_lane_79_pack, stg8_lane_78);
  set_at<48, 64, 16>(stg8_lane_79_pack, stg8_lane_79);
  auto res_stg9_update_0_sm10_19695 = stg9_generated_compute_unrolled_1(stg8_lane_79_pack);

  hw_uint<64 > stg8_lane_83_pack;
  set_at<0, 64, 16>(stg8_lane_83_pack, stg8_lane_80);
  set_at<16, 64, 16>(stg8_lane_83_pack, stg8_lane_81);
  set_at<32, 64, 16>(stg8_lane_83_pack, stg8_lane_82);
  set_at<48, 64, 16>(stg8_lane_83_pack, stg8_lane_83);
  auto res_stg9_update_0_sm10_20697 = stg9_generated_compute_unrolled_1(stg8_lane_83_pack);

  hw_uint<64 > stg8_lane_87_pack;
  set_at<0, 64, 16>(stg8_lane_87_pack, stg8_lane_84);
  set_at<16, 64, 16>(stg8_lane_87_pack, stg8_lane_85);
  set_at<32, 64, 16>(stg8_lane_87_pack, stg8_lane_86);
  set_at<48, 64, 16>(stg8_lane_87_pack, stg8_lane_87);
  auto res_stg9_update_0_sm10_21699 = stg9_generated_compute_unrolled_1(stg8_lane_87_pack);

  hw_uint<64 > stg8_lane_91_pack;
  set_at<0, 64, 16>(stg8_lane_91_pack, stg8_lane_88);
  set_at<16, 64, 16>(stg8_lane_91_pack, stg8_lane_89);
  set_at<32, 64, 16>(stg8_lane_91_pack, stg8_lane_90);
  set_at<48, 64, 16>(stg8_lane_91_pack, stg8_lane_91);
  auto res_stg9_update_0_sm10_22701 = stg9_generated_compute_unrolled_1(stg8_lane_91_pack);

  hw_uint<64 > stg8_lane_95_pack;
  set_at<0, 64, 16>(stg8_lane_95_pack, stg8_lane_92);
  set_at<16, 64, 16>(stg8_lane_95_pack, stg8_lane_93);
  set_at<32, 64, 16>(stg8_lane_95_pack, stg8_lane_94);
  set_at<48, 64, 16>(stg8_lane_95_pack, stg8_lane_95);
  auto res_stg9_update_0_sm10_23703 = stg9_generated_compute_unrolled_1(stg8_lane_95_pack);

  hw_uint<64 > stg8_lane_99_pack;
  set_at<0, 64, 16>(stg8_lane_99_pack, stg8_lane_96);
  set_at<16, 64, 16>(stg8_lane_99_pack, stg8_lane_97);
  set_at<32, 64, 16>(stg8_lane_99_pack, stg8_lane_98);
  set_at<48, 64, 16>(stg8_lane_99_pack, stg8_lane_99);
  auto res_stg9_update_0_sm10_24705 = stg9_generated_compute_unrolled_1(stg8_lane_99_pack);

  hw_uint<64 > stg8_lane_103_pack;
  set_at<0, 64, 16>(stg8_lane_103_pack, stg8_lane_100);
  set_at<16, 64, 16>(stg8_lane_103_pack, stg8_lane_101);
  set_at<32, 64, 16>(stg8_lane_103_pack, stg8_lane_102);
  set_at<48, 64, 16>(stg8_lane_103_pack, stg8_lane_103);
  auto res_stg9_update_0_sm10_25707 = stg9_generated_compute_unrolled_1(stg8_lane_103_pack);

  hw_uint<64 > stg8_lane_107_pack;
  set_at<0, 64, 16>(stg8_lane_107_pack, stg8_lane_104);
  set_at<16, 64, 16>(stg8_lane_107_pack, stg8_lane_105);
  set_at<32, 64, 16>(stg8_lane_107_pack, stg8_lane_106);
  set_at<48, 64, 16>(stg8_lane_107_pack, stg8_lane_107);
  auto res_stg9_update_0_sm10_26709 = stg9_generated_compute_unrolled_1(stg8_lane_107_pack);

  hw_uint<64 > stg8_lane_111_pack;
  set_at<0, 64, 16>(stg8_lane_111_pack, stg8_lane_108);
  set_at<16, 64, 16>(stg8_lane_111_pack, stg8_lane_109);
  set_at<32, 64, 16>(stg8_lane_111_pack, stg8_lane_110);
  set_at<48, 64, 16>(stg8_lane_111_pack, stg8_lane_111);
  auto res_stg9_update_0_sm10_27711 = stg9_generated_compute_unrolled_1(stg8_lane_111_pack);

  hw_uint<64 > stg8_lane_115_pack;
  set_at<0, 64, 16>(stg8_lane_115_pack, stg8_lane_112);
  set_at<16, 64, 16>(stg8_lane_115_pack, stg8_lane_113);
  set_at<32, 64, 16>(stg8_lane_115_pack, stg8_lane_114);
  set_at<48, 64, 16>(stg8_lane_115_pack, stg8_lane_115);
  auto res_stg9_update_0_sm10_28713 = stg9_generated_compute_unrolled_1(stg8_lane_115_pack);

  hw_uint<64 > stg8_lane_119_pack;
  set_at<0, 64, 16>(stg8_lane_119_pack, stg8_lane_116);
  set_at<16, 64, 16>(stg8_lane_119_pack, stg8_lane_117);
  set_at<32, 64, 16>(stg8_lane_119_pack, stg8_lane_118);
  set_at<48, 64, 16>(stg8_lane_119_pack, stg8_lane_119);
  auto res_stg9_update_0_sm10_29715 = stg9_generated_compute_unrolled_1(stg8_lane_119_pack);

  hw_uint<64 > stg8_lane_123_pack;
  set_at<0, 64, 16>(stg8_lane_123_pack, stg8_lane_120);
  set_at<16, 64, 16>(stg8_lane_123_pack, stg8_lane_121);
  set_at<32, 64, 16>(stg8_lane_123_pack, stg8_lane_122);
  set_at<48, 64, 16>(stg8_lane_123_pack, stg8_lane_123);
  auto res_stg9_update_0_sm10_30717 = stg9_generated_compute_unrolled_1(stg8_lane_123_pack);

  hw_uint<64 > stg8_lane_127_pack;
  set_at<0, 64, 16>(stg8_lane_127_pack, stg8_lane_124);
  set_at<16, 64, 16>(stg8_lane_127_pack, stg8_lane_125);
  set_at<32, 64, 16>(stg8_lane_127_pack, stg8_lane_126);
  set_at<48, 64, 16>(stg8_lane_127_pack, stg8_lane_127);
  auto res_stg9_update_0_sm10_31719 = stg9_generated_compute_unrolled_1(stg8_lane_127_pack);
  hw_uint<512 > return_value1136;
  set_at<0, 512, 16>(return_value1136, res_stg9_update_0_sm10_0657);
  set_at<16, 512, 16>(return_value1136, res_stg9_update_0_sm10_1659);
  set_at<32, 512, 16>(return_value1136, res_stg9_update_0_sm10_2661);
  set_at<48, 512, 16>(return_value1136, res_stg9_update_0_sm10_3663);
  set_at<64, 512, 16>(return_value1136, res_stg9_update_0_sm10_4665);
  set_at<80, 512, 16>(return_value1136, res_stg9_update_0_sm10_5667);
  set_at<96, 512, 16>(return_value1136, res_stg9_update_0_sm10_6669);
  set_at<112, 512, 16>(return_value1136, res_stg9_update_0_sm10_7671);
  set_at<128, 512, 16>(return_value1136, res_stg9_update_0_sm10_8673);
  set_at<144, 512, 16>(return_value1136, res_stg9_update_0_sm10_9675);
  set_at<160, 512, 16>(return_value1136, res_stg9_update_0_sm10_10677);
  set_at<176, 512, 16>(return_value1136, res_stg9_update_0_sm10_11679);
  set_at<192, 512, 16>(return_value1136, res_stg9_update_0_sm10_12681);
  set_at<208, 512, 16>(return_value1136, res_stg9_update_0_sm10_13683);
  set_at<224, 512, 16>(return_value1136, res_stg9_update_0_sm10_14685);
  set_at<240, 512, 16>(return_value1136, res_stg9_update_0_sm10_15687);
  set_at<256, 512, 16>(return_value1136, res_stg9_update_0_sm10_16689);
  set_at<272, 512, 16>(return_value1136, res_stg9_update_0_sm10_17691);
  set_at<288, 512, 16>(return_value1136, res_stg9_update_0_sm10_18693);
  set_at<304, 512, 16>(return_value1136, res_stg9_update_0_sm10_19695);
  set_at<320, 512, 16>(return_value1136, res_stg9_update_0_sm10_20697);
  set_at<336, 512, 16>(return_value1136, res_stg9_update_0_sm10_21699);
  set_at<352, 512, 16>(return_value1136, res_stg9_update_0_sm10_22701);
  set_at<368, 512, 16>(return_value1136, res_stg9_update_0_sm10_23703);
  set_at<384, 512, 16>(return_value1136, res_stg9_update_0_sm10_24705);
  set_at<400, 512, 16>(return_value1136, res_stg9_update_0_sm10_25707);
  set_at<416, 512, 16>(return_value1136, res_stg9_update_0_sm10_26709);
  set_at<432, 512, 16>(return_value1136, res_stg9_update_0_sm10_27711);
  set_at<448, 512, 16>(return_value1136, res_stg9_update_0_sm10_28713);
  set_at<464, 512, 16>(return_value1136, res_stg9_update_0_sm10_29715);
  set_at<480, 512, 16>(return_value1136, res_stg9_update_0_sm10_30717);
  set_at<496, 512, 16>(return_value1136, res_stg9_update_0_sm10_31719);
  return return_value1136;

}

hw_uint<512> stg10_1_cu1138(hw_uint<16*128>& stg9) {
  hw_uint<16> stg9_lane_0 = stg9.extract<0, 15>();
  hw_uint<16> stg9_lane_1 = stg9.extract<16, 31>();
  hw_uint<16> stg9_lane_2 = stg9.extract<32, 47>();
  hw_uint<16> stg9_lane_3 = stg9.extract<48, 63>();
  hw_uint<16> stg9_lane_4 = stg9.extract<64, 79>();
  hw_uint<16> stg9_lane_5 = stg9.extract<80, 95>();
  hw_uint<16> stg9_lane_6 = stg9.extract<96, 111>();
  hw_uint<16> stg9_lane_7 = stg9.extract<112, 127>();
  hw_uint<16> stg9_lane_8 = stg9.extract<128, 143>();
  hw_uint<16> stg9_lane_9 = stg9.extract<144, 159>();
  hw_uint<16> stg9_lane_10 = stg9.extract<160, 175>();
  hw_uint<16> stg9_lane_11 = stg9.extract<176, 191>();
  hw_uint<16> stg9_lane_12 = stg9.extract<192, 207>();
  hw_uint<16> stg9_lane_13 = stg9.extract<208, 223>();
  hw_uint<16> stg9_lane_14 = stg9.extract<224, 239>();
  hw_uint<16> stg9_lane_15 = stg9.extract<240, 255>();
  hw_uint<16> stg9_lane_16 = stg9.extract<256, 271>();
  hw_uint<16> stg9_lane_17 = stg9.extract<272, 287>();
  hw_uint<16> stg9_lane_18 = stg9.extract<288, 303>();
  hw_uint<16> stg9_lane_19 = stg9.extract<304, 319>();
  hw_uint<16> stg9_lane_20 = stg9.extract<320, 335>();
  hw_uint<16> stg9_lane_21 = stg9.extract<336, 351>();
  hw_uint<16> stg9_lane_22 = stg9.extract<352, 367>();
  hw_uint<16> stg9_lane_23 = stg9.extract<368, 383>();
  hw_uint<16> stg9_lane_24 = stg9.extract<384, 399>();
  hw_uint<16> stg9_lane_25 = stg9.extract<400, 415>();
  hw_uint<16> stg9_lane_26 = stg9.extract<416, 431>();
  hw_uint<16> stg9_lane_27 = stg9.extract<432, 447>();
  hw_uint<16> stg9_lane_28 = stg9.extract<448, 463>();
  hw_uint<16> stg9_lane_29 = stg9.extract<464, 479>();
  hw_uint<16> stg9_lane_30 = stg9.extract<480, 495>();
  hw_uint<16> stg9_lane_31 = stg9.extract<496, 511>();
  hw_uint<16> stg9_lane_32 = stg9.extract<512, 527>();
  hw_uint<16> stg9_lane_33 = stg9.extract<528, 543>();
  hw_uint<16> stg9_lane_34 = stg9.extract<544, 559>();
  hw_uint<16> stg9_lane_35 = stg9.extract<560, 575>();
  hw_uint<16> stg9_lane_36 = stg9.extract<576, 591>();
  hw_uint<16> stg9_lane_37 = stg9.extract<592, 607>();
  hw_uint<16> stg9_lane_38 = stg9.extract<608, 623>();
  hw_uint<16> stg9_lane_39 = stg9.extract<624, 639>();
  hw_uint<16> stg9_lane_40 = stg9.extract<640, 655>();
  hw_uint<16> stg9_lane_41 = stg9.extract<656, 671>();
  hw_uint<16> stg9_lane_42 = stg9.extract<672, 687>();
  hw_uint<16> stg9_lane_43 = stg9.extract<688, 703>();
  hw_uint<16> stg9_lane_44 = stg9.extract<704, 719>();
  hw_uint<16> stg9_lane_45 = stg9.extract<720, 735>();
  hw_uint<16> stg9_lane_46 = stg9.extract<736, 751>();
  hw_uint<16> stg9_lane_47 = stg9.extract<752, 767>();
  hw_uint<16> stg9_lane_48 = stg9.extract<768, 783>();
  hw_uint<16> stg9_lane_49 = stg9.extract<784, 799>();
  hw_uint<16> stg9_lane_50 = stg9.extract<800, 815>();
  hw_uint<16> stg9_lane_51 = stg9.extract<816, 831>();
  hw_uint<16> stg9_lane_52 = stg9.extract<832, 847>();
  hw_uint<16> stg9_lane_53 = stg9.extract<848, 863>();
  hw_uint<16> stg9_lane_54 = stg9.extract<864, 879>();
  hw_uint<16> stg9_lane_55 = stg9.extract<880, 895>();
  hw_uint<16> stg9_lane_56 = stg9.extract<896, 911>();
  hw_uint<16> stg9_lane_57 = stg9.extract<912, 927>();
  hw_uint<16> stg9_lane_58 = stg9.extract<928, 943>();
  hw_uint<16> stg9_lane_59 = stg9.extract<944, 959>();
  hw_uint<16> stg9_lane_60 = stg9.extract<960, 975>();
  hw_uint<16> stg9_lane_61 = stg9.extract<976, 991>();
  hw_uint<16> stg9_lane_62 = stg9.extract<992, 1007>();
  hw_uint<16> stg9_lane_63 = stg9.extract<1008, 1023>();
  hw_uint<16> stg9_lane_64 = stg9.extract<1024, 1039>();
  hw_uint<16> stg9_lane_65 = stg9.extract<1040, 1055>();
  hw_uint<16> stg9_lane_66 = stg9.extract<1056, 1071>();
  hw_uint<16> stg9_lane_67 = stg9.extract<1072, 1087>();
  hw_uint<16> stg9_lane_68 = stg9.extract<1088, 1103>();
  hw_uint<16> stg9_lane_69 = stg9.extract<1104, 1119>();
  hw_uint<16> stg9_lane_70 = stg9.extract<1120, 1135>();
  hw_uint<16> stg9_lane_71 = stg9.extract<1136, 1151>();
  hw_uint<16> stg9_lane_72 = stg9.extract<1152, 1167>();
  hw_uint<16> stg9_lane_73 = stg9.extract<1168, 1183>();
  hw_uint<16> stg9_lane_74 = stg9.extract<1184, 1199>();
  hw_uint<16> stg9_lane_75 = stg9.extract<1200, 1215>();
  hw_uint<16> stg9_lane_76 = stg9.extract<1216, 1231>();
  hw_uint<16> stg9_lane_77 = stg9.extract<1232, 1247>();
  hw_uint<16> stg9_lane_78 = stg9.extract<1248, 1263>();
  hw_uint<16> stg9_lane_79 = stg9.extract<1264, 1279>();
  hw_uint<16> stg9_lane_80 = stg9.extract<1280, 1295>();
  hw_uint<16> stg9_lane_81 = stg9.extract<1296, 1311>();
  hw_uint<16> stg9_lane_82 = stg9.extract<1312, 1327>();
  hw_uint<16> stg9_lane_83 = stg9.extract<1328, 1343>();
  hw_uint<16> stg9_lane_84 = stg9.extract<1344, 1359>();
  hw_uint<16> stg9_lane_85 = stg9.extract<1360, 1375>();
  hw_uint<16> stg9_lane_86 = stg9.extract<1376, 1391>();
  hw_uint<16> stg9_lane_87 = stg9.extract<1392, 1407>();
  hw_uint<16> stg9_lane_88 = stg9.extract<1408, 1423>();
  hw_uint<16> stg9_lane_89 = stg9.extract<1424, 1439>();
  hw_uint<16> stg9_lane_90 = stg9.extract<1440, 1455>();
  hw_uint<16> stg9_lane_91 = stg9.extract<1456, 1471>();
  hw_uint<16> stg9_lane_92 = stg9.extract<1472, 1487>();
  hw_uint<16> stg9_lane_93 = stg9.extract<1488, 1503>();
  hw_uint<16> stg9_lane_94 = stg9.extract<1504, 1519>();
  hw_uint<16> stg9_lane_95 = stg9.extract<1520, 1535>();
  hw_uint<16> stg9_lane_96 = stg9.extract<1536, 1551>();
  hw_uint<16> stg9_lane_97 = stg9.extract<1552, 1567>();
  hw_uint<16> stg9_lane_98 = stg9.extract<1568, 1583>();
  hw_uint<16> stg9_lane_99 = stg9.extract<1584, 1599>();
  hw_uint<16> stg9_lane_100 = stg9.extract<1600, 1615>();
  hw_uint<16> stg9_lane_101 = stg9.extract<1616, 1631>();
  hw_uint<16> stg9_lane_102 = stg9.extract<1632, 1647>();
  hw_uint<16> stg9_lane_103 = stg9.extract<1648, 1663>();
  hw_uint<16> stg9_lane_104 = stg9.extract<1664, 1679>();
  hw_uint<16> stg9_lane_105 = stg9.extract<1680, 1695>();
  hw_uint<16> stg9_lane_106 = stg9.extract<1696, 1711>();
  hw_uint<16> stg9_lane_107 = stg9.extract<1712, 1727>();
  hw_uint<16> stg9_lane_108 = stg9.extract<1728, 1743>();
  hw_uint<16> stg9_lane_109 = stg9.extract<1744, 1759>();
  hw_uint<16> stg9_lane_110 = stg9.extract<1760, 1775>();
  hw_uint<16> stg9_lane_111 = stg9.extract<1776, 1791>();
  hw_uint<16> stg9_lane_112 = stg9.extract<1792, 1807>();
  hw_uint<16> stg9_lane_113 = stg9.extract<1808, 1823>();
  hw_uint<16> stg9_lane_114 = stg9.extract<1824, 1839>();
  hw_uint<16> stg9_lane_115 = stg9.extract<1840, 1855>();
  hw_uint<16> stg9_lane_116 = stg9.extract<1856, 1871>();
  hw_uint<16> stg9_lane_117 = stg9.extract<1872, 1887>();
  hw_uint<16> stg9_lane_118 = stg9.extract<1888, 1903>();
  hw_uint<16> stg9_lane_119 = stg9.extract<1904, 1919>();
  hw_uint<16> stg9_lane_120 = stg9.extract<1920, 1935>();
  hw_uint<16> stg9_lane_121 = stg9.extract<1936, 1951>();
  hw_uint<16> stg9_lane_122 = stg9.extract<1952, 1967>();
  hw_uint<16> stg9_lane_123 = stg9.extract<1968, 1983>();
  hw_uint<16> stg9_lane_124 = stg9.extract<1984, 1999>();
  hw_uint<16> stg9_lane_125 = stg9.extract<2000, 2015>();
  hw_uint<16> stg9_lane_126 = stg9.extract<2016, 2031>();
  hw_uint<16> stg9_lane_127 = stg9.extract<2032, 2047>();

	
  hw_uint<64 > stg9_lane_3_pack;
  set_at<0, 64, 16>(stg9_lane_3_pack, stg9_lane_0);
  set_at<16, 64, 16>(stg9_lane_3_pack, stg9_lane_1);
  set_at<32, 64, 16>(stg9_lane_3_pack, stg9_lane_2);
  set_at<48, 64, 16>(stg9_lane_3_pack, stg9_lane_3);
  auto res_stg10_update_0_sm11_0721 = stg10_generated_compute_unrolled_1(stg9_lane_3_pack);

  hw_uint<64 > stg9_lane_7_pack;
  set_at<0, 64, 16>(stg9_lane_7_pack, stg9_lane_4);
  set_at<16, 64, 16>(stg9_lane_7_pack, stg9_lane_5);
  set_at<32, 64, 16>(stg9_lane_7_pack, stg9_lane_6);
  set_at<48, 64, 16>(stg9_lane_7_pack, stg9_lane_7);
  auto res_stg10_update_0_sm11_1723 = stg10_generated_compute_unrolled_1(stg9_lane_7_pack);

  hw_uint<64 > stg9_lane_11_pack;
  set_at<0, 64, 16>(stg9_lane_11_pack, stg9_lane_8);
  set_at<16, 64, 16>(stg9_lane_11_pack, stg9_lane_9);
  set_at<32, 64, 16>(stg9_lane_11_pack, stg9_lane_10);
  set_at<48, 64, 16>(stg9_lane_11_pack, stg9_lane_11);
  auto res_stg10_update_0_sm11_2725 = stg10_generated_compute_unrolled_1(stg9_lane_11_pack);

  hw_uint<64 > stg9_lane_15_pack;
  set_at<0, 64, 16>(stg9_lane_15_pack, stg9_lane_12);
  set_at<16, 64, 16>(stg9_lane_15_pack, stg9_lane_13);
  set_at<32, 64, 16>(stg9_lane_15_pack, stg9_lane_14);
  set_at<48, 64, 16>(stg9_lane_15_pack, stg9_lane_15);
  auto res_stg10_update_0_sm11_3727 = stg10_generated_compute_unrolled_1(stg9_lane_15_pack);

  hw_uint<64 > stg9_lane_19_pack;
  set_at<0, 64, 16>(stg9_lane_19_pack, stg9_lane_16);
  set_at<16, 64, 16>(stg9_lane_19_pack, stg9_lane_17);
  set_at<32, 64, 16>(stg9_lane_19_pack, stg9_lane_18);
  set_at<48, 64, 16>(stg9_lane_19_pack, stg9_lane_19);
  auto res_stg10_update_0_sm11_4729 = stg10_generated_compute_unrolled_1(stg9_lane_19_pack);

  hw_uint<64 > stg9_lane_23_pack;
  set_at<0, 64, 16>(stg9_lane_23_pack, stg9_lane_20);
  set_at<16, 64, 16>(stg9_lane_23_pack, stg9_lane_21);
  set_at<32, 64, 16>(stg9_lane_23_pack, stg9_lane_22);
  set_at<48, 64, 16>(stg9_lane_23_pack, stg9_lane_23);
  auto res_stg10_update_0_sm11_5731 = stg10_generated_compute_unrolled_1(stg9_lane_23_pack);

  hw_uint<64 > stg9_lane_27_pack;
  set_at<0, 64, 16>(stg9_lane_27_pack, stg9_lane_24);
  set_at<16, 64, 16>(stg9_lane_27_pack, stg9_lane_25);
  set_at<32, 64, 16>(stg9_lane_27_pack, stg9_lane_26);
  set_at<48, 64, 16>(stg9_lane_27_pack, stg9_lane_27);
  auto res_stg10_update_0_sm11_6733 = stg10_generated_compute_unrolled_1(stg9_lane_27_pack);

  hw_uint<64 > stg9_lane_31_pack;
  set_at<0, 64, 16>(stg9_lane_31_pack, stg9_lane_28);
  set_at<16, 64, 16>(stg9_lane_31_pack, stg9_lane_29);
  set_at<32, 64, 16>(stg9_lane_31_pack, stg9_lane_30);
  set_at<48, 64, 16>(stg9_lane_31_pack, stg9_lane_31);
  auto res_stg10_update_0_sm11_7735 = stg10_generated_compute_unrolled_1(stg9_lane_31_pack);

  hw_uint<64 > stg9_lane_35_pack;
  set_at<0, 64, 16>(stg9_lane_35_pack, stg9_lane_32);
  set_at<16, 64, 16>(stg9_lane_35_pack, stg9_lane_33);
  set_at<32, 64, 16>(stg9_lane_35_pack, stg9_lane_34);
  set_at<48, 64, 16>(stg9_lane_35_pack, stg9_lane_35);
  auto res_stg10_update_0_sm11_8737 = stg10_generated_compute_unrolled_1(stg9_lane_35_pack);

  hw_uint<64 > stg9_lane_39_pack;
  set_at<0, 64, 16>(stg9_lane_39_pack, stg9_lane_36);
  set_at<16, 64, 16>(stg9_lane_39_pack, stg9_lane_37);
  set_at<32, 64, 16>(stg9_lane_39_pack, stg9_lane_38);
  set_at<48, 64, 16>(stg9_lane_39_pack, stg9_lane_39);
  auto res_stg10_update_0_sm11_9739 = stg10_generated_compute_unrolled_1(stg9_lane_39_pack);

  hw_uint<64 > stg9_lane_43_pack;
  set_at<0, 64, 16>(stg9_lane_43_pack, stg9_lane_40);
  set_at<16, 64, 16>(stg9_lane_43_pack, stg9_lane_41);
  set_at<32, 64, 16>(stg9_lane_43_pack, stg9_lane_42);
  set_at<48, 64, 16>(stg9_lane_43_pack, stg9_lane_43);
  auto res_stg10_update_0_sm11_10741 = stg10_generated_compute_unrolled_1(stg9_lane_43_pack);

  hw_uint<64 > stg9_lane_47_pack;
  set_at<0, 64, 16>(stg9_lane_47_pack, stg9_lane_44);
  set_at<16, 64, 16>(stg9_lane_47_pack, stg9_lane_45);
  set_at<32, 64, 16>(stg9_lane_47_pack, stg9_lane_46);
  set_at<48, 64, 16>(stg9_lane_47_pack, stg9_lane_47);
  auto res_stg10_update_0_sm11_11743 = stg10_generated_compute_unrolled_1(stg9_lane_47_pack);

  hw_uint<64 > stg9_lane_51_pack;
  set_at<0, 64, 16>(stg9_lane_51_pack, stg9_lane_48);
  set_at<16, 64, 16>(stg9_lane_51_pack, stg9_lane_49);
  set_at<32, 64, 16>(stg9_lane_51_pack, stg9_lane_50);
  set_at<48, 64, 16>(stg9_lane_51_pack, stg9_lane_51);
  auto res_stg10_update_0_sm11_12745 = stg10_generated_compute_unrolled_1(stg9_lane_51_pack);

  hw_uint<64 > stg9_lane_55_pack;
  set_at<0, 64, 16>(stg9_lane_55_pack, stg9_lane_52);
  set_at<16, 64, 16>(stg9_lane_55_pack, stg9_lane_53);
  set_at<32, 64, 16>(stg9_lane_55_pack, stg9_lane_54);
  set_at<48, 64, 16>(stg9_lane_55_pack, stg9_lane_55);
  auto res_stg10_update_0_sm11_13747 = stg10_generated_compute_unrolled_1(stg9_lane_55_pack);

  hw_uint<64 > stg9_lane_59_pack;
  set_at<0, 64, 16>(stg9_lane_59_pack, stg9_lane_56);
  set_at<16, 64, 16>(stg9_lane_59_pack, stg9_lane_57);
  set_at<32, 64, 16>(stg9_lane_59_pack, stg9_lane_58);
  set_at<48, 64, 16>(stg9_lane_59_pack, stg9_lane_59);
  auto res_stg10_update_0_sm11_14749 = stg10_generated_compute_unrolled_1(stg9_lane_59_pack);

  hw_uint<64 > stg9_lane_63_pack;
  set_at<0, 64, 16>(stg9_lane_63_pack, stg9_lane_60);
  set_at<16, 64, 16>(stg9_lane_63_pack, stg9_lane_61);
  set_at<32, 64, 16>(stg9_lane_63_pack, stg9_lane_62);
  set_at<48, 64, 16>(stg9_lane_63_pack, stg9_lane_63);
  auto res_stg10_update_0_sm11_15751 = stg10_generated_compute_unrolled_1(stg9_lane_63_pack);

  hw_uint<64 > stg9_lane_67_pack;
  set_at<0, 64, 16>(stg9_lane_67_pack, stg9_lane_64);
  set_at<16, 64, 16>(stg9_lane_67_pack, stg9_lane_65);
  set_at<32, 64, 16>(stg9_lane_67_pack, stg9_lane_66);
  set_at<48, 64, 16>(stg9_lane_67_pack, stg9_lane_67);
  auto res_stg10_update_0_sm11_16753 = stg10_generated_compute_unrolled_1(stg9_lane_67_pack);

  hw_uint<64 > stg9_lane_71_pack;
  set_at<0, 64, 16>(stg9_lane_71_pack, stg9_lane_68);
  set_at<16, 64, 16>(stg9_lane_71_pack, stg9_lane_69);
  set_at<32, 64, 16>(stg9_lane_71_pack, stg9_lane_70);
  set_at<48, 64, 16>(stg9_lane_71_pack, stg9_lane_71);
  auto res_stg10_update_0_sm11_17755 = stg10_generated_compute_unrolled_1(stg9_lane_71_pack);

  hw_uint<64 > stg9_lane_75_pack;
  set_at<0, 64, 16>(stg9_lane_75_pack, stg9_lane_72);
  set_at<16, 64, 16>(stg9_lane_75_pack, stg9_lane_73);
  set_at<32, 64, 16>(stg9_lane_75_pack, stg9_lane_74);
  set_at<48, 64, 16>(stg9_lane_75_pack, stg9_lane_75);
  auto res_stg10_update_0_sm11_18757 = stg10_generated_compute_unrolled_1(stg9_lane_75_pack);

  hw_uint<64 > stg9_lane_79_pack;
  set_at<0, 64, 16>(stg9_lane_79_pack, stg9_lane_76);
  set_at<16, 64, 16>(stg9_lane_79_pack, stg9_lane_77);
  set_at<32, 64, 16>(stg9_lane_79_pack, stg9_lane_78);
  set_at<48, 64, 16>(stg9_lane_79_pack, stg9_lane_79);
  auto res_stg10_update_0_sm11_19759 = stg10_generated_compute_unrolled_1(stg9_lane_79_pack);

  hw_uint<64 > stg9_lane_83_pack;
  set_at<0, 64, 16>(stg9_lane_83_pack, stg9_lane_80);
  set_at<16, 64, 16>(stg9_lane_83_pack, stg9_lane_81);
  set_at<32, 64, 16>(stg9_lane_83_pack, stg9_lane_82);
  set_at<48, 64, 16>(stg9_lane_83_pack, stg9_lane_83);
  auto res_stg10_update_0_sm11_20761 = stg10_generated_compute_unrolled_1(stg9_lane_83_pack);

  hw_uint<64 > stg9_lane_87_pack;
  set_at<0, 64, 16>(stg9_lane_87_pack, stg9_lane_84);
  set_at<16, 64, 16>(stg9_lane_87_pack, stg9_lane_85);
  set_at<32, 64, 16>(stg9_lane_87_pack, stg9_lane_86);
  set_at<48, 64, 16>(stg9_lane_87_pack, stg9_lane_87);
  auto res_stg10_update_0_sm11_21763 = stg10_generated_compute_unrolled_1(stg9_lane_87_pack);

  hw_uint<64 > stg9_lane_91_pack;
  set_at<0, 64, 16>(stg9_lane_91_pack, stg9_lane_88);
  set_at<16, 64, 16>(stg9_lane_91_pack, stg9_lane_89);
  set_at<32, 64, 16>(stg9_lane_91_pack, stg9_lane_90);
  set_at<48, 64, 16>(stg9_lane_91_pack, stg9_lane_91);
  auto res_stg10_update_0_sm11_22765 = stg10_generated_compute_unrolled_1(stg9_lane_91_pack);

  hw_uint<64 > stg9_lane_95_pack;
  set_at<0, 64, 16>(stg9_lane_95_pack, stg9_lane_92);
  set_at<16, 64, 16>(stg9_lane_95_pack, stg9_lane_93);
  set_at<32, 64, 16>(stg9_lane_95_pack, stg9_lane_94);
  set_at<48, 64, 16>(stg9_lane_95_pack, stg9_lane_95);
  auto res_stg10_update_0_sm11_23767 = stg10_generated_compute_unrolled_1(stg9_lane_95_pack);

  hw_uint<64 > stg9_lane_99_pack;
  set_at<0, 64, 16>(stg9_lane_99_pack, stg9_lane_96);
  set_at<16, 64, 16>(stg9_lane_99_pack, stg9_lane_97);
  set_at<32, 64, 16>(stg9_lane_99_pack, stg9_lane_98);
  set_at<48, 64, 16>(stg9_lane_99_pack, stg9_lane_99);
  auto res_stg10_update_0_sm11_24769 = stg10_generated_compute_unrolled_1(stg9_lane_99_pack);

  hw_uint<64 > stg9_lane_103_pack;
  set_at<0, 64, 16>(stg9_lane_103_pack, stg9_lane_100);
  set_at<16, 64, 16>(stg9_lane_103_pack, stg9_lane_101);
  set_at<32, 64, 16>(stg9_lane_103_pack, stg9_lane_102);
  set_at<48, 64, 16>(stg9_lane_103_pack, stg9_lane_103);
  auto res_stg10_update_0_sm11_25771 = stg10_generated_compute_unrolled_1(stg9_lane_103_pack);

  hw_uint<64 > stg9_lane_107_pack;
  set_at<0, 64, 16>(stg9_lane_107_pack, stg9_lane_104);
  set_at<16, 64, 16>(stg9_lane_107_pack, stg9_lane_105);
  set_at<32, 64, 16>(stg9_lane_107_pack, stg9_lane_106);
  set_at<48, 64, 16>(stg9_lane_107_pack, stg9_lane_107);
  auto res_stg10_update_0_sm11_26773 = stg10_generated_compute_unrolled_1(stg9_lane_107_pack);

  hw_uint<64 > stg9_lane_111_pack;
  set_at<0, 64, 16>(stg9_lane_111_pack, stg9_lane_108);
  set_at<16, 64, 16>(stg9_lane_111_pack, stg9_lane_109);
  set_at<32, 64, 16>(stg9_lane_111_pack, stg9_lane_110);
  set_at<48, 64, 16>(stg9_lane_111_pack, stg9_lane_111);
  auto res_stg10_update_0_sm11_27775 = stg10_generated_compute_unrolled_1(stg9_lane_111_pack);

  hw_uint<64 > stg9_lane_115_pack;
  set_at<0, 64, 16>(stg9_lane_115_pack, stg9_lane_112);
  set_at<16, 64, 16>(stg9_lane_115_pack, stg9_lane_113);
  set_at<32, 64, 16>(stg9_lane_115_pack, stg9_lane_114);
  set_at<48, 64, 16>(stg9_lane_115_pack, stg9_lane_115);
  auto res_stg10_update_0_sm11_28777 = stg10_generated_compute_unrolled_1(stg9_lane_115_pack);

  hw_uint<64 > stg9_lane_119_pack;
  set_at<0, 64, 16>(stg9_lane_119_pack, stg9_lane_116);
  set_at<16, 64, 16>(stg9_lane_119_pack, stg9_lane_117);
  set_at<32, 64, 16>(stg9_lane_119_pack, stg9_lane_118);
  set_at<48, 64, 16>(stg9_lane_119_pack, stg9_lane_119);
  auto res_stg10_update_0_sm11_29779 = stg10_generated_compute_unrolled_1(stg9_lane_119_pack);

  hw_uint<64 > stg9_lane_123_pack;
  set_at<0, 64, 16>(stg9_lane_123_pack, stg9_lane_120);
  set_at<16, 64, 16>(stg9_lane_123_pack, stg9_lane_121);
  set_at<32, 64, 16>(stg9_lane_123_pack, stg9_lane_122);
  set_at<48, 64, 16>(stg9_lane_123_pack, stg9_lane_123);
  auto res_stg10_update_0_sm11_30781 = stg10_generated_compute_unrolled_1(stg9_lane_123_pack);

  hw_uint<64 > stg9_lane_127_pack;
  set_at<0, 64, 16>(stg9_lane_127_pack, stg9_lane_124);
  set_at<16, 64, 16>(stg9_lane_127_pack, stg9_lane_125);
  set_at<32, 64, 16>(stg9_lane_127_pack, stg9_lane_126);
  set_at<48, 64, 16>(stg9_lane_127_pack, stg9_lane_127);
  auto res_stg10_update_0_sm11_31783 = stg10_generated_compute_unrolled_1(stg9_lane_127_pack);
  hw_uint<512 > return_value1139;
  set_at<0, 512, 16>(return_value1139, res_stg10_update_0_sm11_0721);
  set_at<16, 512, 16>(return_value1139, res_stg10_update_0_sm11_1723);
  set_at<32, 512, 16>(return_value1139, res_stg10_update_0_sm11_2725);
  set_at<48, 512, 16>(return_value1139, res_stg10_update_0_sm11_3727);
  set_at<64, 512, 16>(return_value1139, res_stg10_update_0_sm11_4729);
  set_at<80, 512, 16>(return_value1139, res_stg10_update_0_sm11_5731);
  set_at<96, 512, 16>(return_value1139, res_stg10_update_0_sm11_6733);
  set_at<112, 512, 16>(return_value1139, res_stg10_update_0_sm11_7735);
  set_at<128, 512, 16>(return_value1139, res_stg10_update_0_sm11_8737);
  set_at<144, 512, 16>(return_value1139, res_stg10_update_0_sm11_9739);
  set_at<160, 512, 16>(return_value1139, res_stg10_update_0_sm11_10741);
  set_at<176, 512, 16>(return_value1139, res_stg10_update_0_sm11_11743);
  set_at<192, 512, 16>(return_value1139, res_stg10_update_0_sm11_12745);
  set_at<208, 512, 16>(return_value1139, res_stg10_update_0_sm11_13747);
  set_at<224, 512, 16>(return_value1139, res_stg10_update_0_sm11_14749);
  set_at<240, 512, 16>(return_value1139, res_stg10_update_0_sm11_15751);
  set_at<256, 512, 16>(return_value1139, res_stg10_update_0_sm11_16753);
  set_at<272, 512, 16>(return_value1139, res_stg10_update_0_sm11_17755);
  set_at<288, 512, 16>(return_value1139, res_stg10_update_0_sm11_18757);
  set_at<304, 512, 16>(return_value1139, res_stg10_update_0_sm11_19759);
  set_at<320, 512, 16>(return_value1139, res_stg10_update_0_sm11_20761);
  set_at<336, 512, 16>(return_value1139, res_stg10_update_0_sm11_21763);
  set_at<352, 512, 16>(return_value1139, res_stg10_update_0_sm11_22765);
  set_at<368, 512, 16>(return_value1139, res_stg10_update_0_sm11_23767);
  set_at<384, 512, 16>(return_value1139, res_stg10_update_0_sm11_24769);
  set_at<400, 512, 16>(return_value1139, res_stg10_update_0_sm11_25771);
  set_at<416, 512, 16>(return_value1139, res_stg10_update_0_sm11_26773);
  set_at<432, 512, 16>(return_value1139, res_stg10_update_0_sm11_27775);
  set_at<448, 512, 16>(return_value1139, res_stg10_update_0_sm11_28777);
  set_at<464, 512, 16>(return_value1139, res_stg10_update_0_sm11_29779);
  set_at<480, 512, 16>(return_value1139, res_stg10_update_0_sm11_30781);
  set_at<496, 512, 16>(return_value1139, res_stg10_update_0_sm11_31783);
  return return_value1139;

}

hw_uint<512> stg11_1_cu1141(hw_uint<16*128>& stg10) {
  hw_uint<16> stg10_lane_0 = stg10.extract<0, 15>();
  hw_uint<16> stg10_lane_1 = stg10.extract<16, 31>();
  hw_uint<16> stg10_lane_2 = stg10.extract<32, 47>();
  hw_uint<16> stg10_lane_3 = stg10.extract<48, 63>();
  hw_uint<16> stg10_lane_4 = stg10.extract<64, 79>();
  hw_uint<16> stg10_lane_5 = stg10.extract<80, 95>();
  hw_uint<16> stg10_lane_6 = stg10.extract<96, 111>();
  hw_uint<16> stg10_lane_7 = stg10.extract<112, 127>();
  hw_uint<16> stg10_lane_8 = stg10.extract<128, 143>();
  hw_uint<16> stg10_lane_9 = stg10.extract<144, 159>();
  hw_uint<16> stg10_lane_10 = stg10.extract<160, 175>();
  hw_uint<16> stg10_lane_11 = stg10.extract<176, 191>();
  hw_uint<16> stg10_lane_12 = stg10.extract<192, 207>();
  hw_uint<16> stg10_lane_13 = stg10.extract<208, 223>();
  hw_uint<16> stg10_lane_14 = stg10.extract<224, 239>();
  hw_uint<16> stg10_lane_15 = stg10.extract<240, 255>();
  hw_uint<16> stg10_lane_16 = stg10.extract<256, 271>();
  hw_uint<16> stg10_lane_17 = stg10.extract<272, 287>();
  hw_uint<16> stg10_lane_18 = stg10.extract<288, 303>();
  hw_uint<16> stg10_lane_19 = stg10.extract<304, 319>();
  hw_uint<16> stg10_lane_20 = stg10.extract<320, 335>();
  hw_uint<16> stg10_lane_21 = stg10.extract<336, 351>();
  hw_uint<16> stg10_lane_22 = stg10.extract<352, 367>();
  hw_uint<16> stg10_lane_23 = stg10.extract<368, 383>();
  hw_uint<16> stg10_lane_24 = stg10.extract<384, 399>();
  hw_uint<16> stg10_lane_25 = stg10.extract<400, 415>();
  hw_uint<16> stg10_lane_26 = stg10.extract<416, 431>();
  hw_uint<16> stg10_lane_27 = stg10.extract<432, 447>();
  hw_uint<16> stg10_lane_28 = stg10.extract<448, 463>();
  hw_uint<16> stg10_lane_29 = stg10.extract<464, 479>();
  hw_uint<16> stg10_lane_30 = stg10.extract<480, 495>();
  hw_uint<16> stg10_lane_31 = stg10.extract<496, 511>();
  hw_uint<16> stg10_lane_32 = stg10.extract<512, 527>();
  hw_uint<16> stg10_lane_33 = stg10.extract<528, 543>();
  hw_uint<16> stg10_lane_34 = stg10.extract<544, 559>();
  hw_uint<16> stg10_lane_35 = stg10.extract<560, 575>();
  hw_uint<16> stg10_lane_36 = stg10.extract<576, 591>();
  hw_uint<16> stg10_lane_37 = stg10.extract<592, 607>();
  hw_uint<16> stg10_lane_38 = stg10.extract<608, 623>();
  hw_uint<16> stg10_lane_39 = stg10.extract<624, 639>();
  hw_uint<16> stg10_lane_40 = stg10.extract<640, 655>();
  hw_uint<16> stg10_lane_41 = stg10.extract<656, 671>();
  hw_uint<16> stg10_lane_42 = stg10.extract<672, 687>();
  hw_uint<16> stg10_lane_43 = stg10.extract<688, 703>();
  hw_uint<16> stg10_lane_44 = stg10.extract<704, 719>();
  hw_uint<16> stg10_lane_45 = stg10.extract<720, 735>();
  hw_uint<16> stg10_lane_46 = stg10.extract<736, 751>();
  hw_uint<16> stg10_lane_47 = stg10.extract<752, 767>();
  hw_uint<16> stg10_lane_48 = stg10.extract<768, 783>();
  hw_uint<16> stg10_lane_49 = stg10.extract<784, 799>();
  hw_uint<16> stg10_lane_50 = stg10.extract<800, 815>();
  hw_uint<16> stg10_lane_51 = stg10.extract<816, 831>();
  hw_uint<16> stg10_lane_52 = stg10.extract<832, 847>();
  hw_uint<16> stg10_lane_53 = stg10.extract<848, 863>();
  hw_uint<16> stg10_lane_54 = stg10.extract<864, 879>();
  hw_uint<16> stg10_lane_55 = stg10.extract<880, 895>();
  hw_uint<16> stg10_lane_56 = stg10.extract<896, 911>();
  hw_uint<16> stg10_lane_57 = stg10.extract<912, 927>();
  hw_uint<16> stg10_lane_58 = stg10.extract<928, 943>();
  hw_uint<16> stg10_lane_59 = stg10.extract<944, 959>();
  hw_uint<16> stg10_lane_60 = stg10.extract<960, 975>();
  hw_uint<16> stg10_lane_61 = stg10.extract<976, 991>();
  hw_uint<16> stg10_lane_62 = stg10.extract<992, 1007>();
  hw_uint<16> stg10_lane_63 = stg10.extract<1008, 1023>();
  hw_uint<16> stg10_lane_64 = stg10.extract<1024, 1039>();
  hw_uint<16> stg10_lane_65 = stg10.extract<1040, 1055>();
  hw_uint<16> stg10_lane_66 = stg10.extract<1056, 1071>();
  hw_uint<16> stg10_lane_67 = stg10.extract<1072, 1087>();
  hw_uint<16> stg10_lane_68 = stg10.extract<1088, 1103>();
  hw_uint<16> stg10_lane_69 = stg10.extract<1104, 1119>();
  hw_uint<16> stg10_lane_70 = stg10.extract<1120, 1135>();
  hw_uint<16> stg10_lane_71 = stg10.extract<1136, 1151>();
  hw_uint<16> stg10_lane_72 = stg10.extract<1152, 1167>();
  hw_uint<16> stg10_lane_73 = stg10.extract<1168, 1183>();
  hw_uint<16> stg10_lane_74 = stg10.extract<1184, 1199>();
  hw_uint<16> stg10_lane_75 = stg10.extract<1200, 1215>();
  hw_uint<16> stg10_lane_76 = stg10.extract<1216, 1231>();
  hw_uint<16> stg10_lane_77 = stg10.extract<1232, 1247>();
  hw_uint<16> stg10_lane_78 = stg10.extract<1248, 1263>();
  hw_uint<16> stg10_lane_79 = stg10.extract<1264, 1279>();
  hw_uint<16> stg10_lane_80 = stg10.extract<1280, 1295>();
  hw_uint<16> stg10_lane_81 = stg10.extract<1296, 1311>();
  hw_uint<16> stg10_lane_82 = stg10.extract<1312, 1327>();
  hw_uint<16> stg10_lane_83 = stg10.extract<1328, 1343>();
  hw_uint<16> stg10_lane_84 = stg10.extract<1344, 1359>();
  hw_uint<16> stg10_lane_85 = stg10.extract<1360, 1375>();
  hw_uint<16> stg10_lane_86 = stg10.extract<1376, 1391>();
  hw_uint<16> stg10_lane_87 = stg10.extract<1392, 1407>();
  hw_uint<16> stg10_lane_88 = stg10.extract<1408, 1423>();
  hw_uint<16> stg10_lane_89 = stg10.extract<1424, 1439>();
  hw_uint<16> stg10_lane_90 = stg10.extract<1440, 1455>();
  hw_uint<16> stg10_lane_91 = stg10.extract<1456, 1471>();
  hw_uint<16> stg10_lane_92 = stg10.extract<1472, 1487>();
  hw_uint<16> stg10_lane_93 = stg10.extract<1488, 1503>();
  hw_uint<16> stg10_lane_94 = stg10.extract<1504, 1519>();
  hw_uint<16> stg10_lane_95 = stg10.extract<1520, 1535>();
  hw_uint<16> stg10_lane_96 = stg10.extract<1536, 1551>();
  hw_uint<16> stg10_lane_97 = stg10.extract<1552, 1567>();
  hw_uint<16> stg10_lane_98 = stg10.extract<1568, 1583>();
  hw_uint<16> stg10_lane_99 = stg10.extract<1584, 1599>();
  hw_uint<16> stg10_lane_100 = stg10.extract<1600, 1615>();
  hw_uint<16> stg10_lane_101 = stg10.extract<1616, 1631>();
  hw_uint<16> stg10_lane_102 = stg10.extract<1632, 1647>();
  hw_uint<16> stg10_lane_103 = stg10.extract<1648, 1663>();
  hw_uint<16> stg10_lane_104 = stg10.extract<1664, 1679>();
  hw_uint<16> stg10_lane_105 = stg10.extract<1680, 1695>();
  hw_uint<16> stg10_lane_106 = stg10.extract<1696, 1711>();
  hw_uint<16> stg10_lane_107 = stg10.extract<1712, 1727>();
  hw_uint<16> stg10_lane_108 = stg10.extract<1728, 1743>();
  hw_uint<16> stg10_lane_109 = stg10.extract<1744, 1759>();
  hw_uint<16> stg10_lane_110 = stg10.extract<1760, 1775>();
  hw_uint<16> stg10_lane_111 = stg10.extract<1776, 1791>();
  hw_uint<16> stg10_lane_112 = stg10.extract<1792, 1807>();
  hw_uint<16> stg10_lane_113 = stg10.extract<1808, 1823>();
  hw_uint<16> stg10_lane_114 = stg10.extract<1824, 1839>();
  hw_uint<16> stg10_lane_115 = stg10.extract<1840, 1855>();
  hw_uint<16> stg10_lane_116 = stg10.extract<1856, 1871>();
  hw_uint<16> stg10_lane_117 = stg10.extract<1872, 1887>();
  hw_uint<16> stg10_lane_118 = stg10.extract<1888, 1903>();
  hw_uint<16> stg10_lane_119 = stg10.extract<1904, 1919>();
  hw_uint<16> stg10_lane_120 = stg10.extract<1920, 1935>();
  hw_uint<16> stg10_lane_121 = stg10.extract<1936, 1951>();
  hw_uint<16> stg10_lane_122 = stg10.extract<1952, 1967>();
  hw_uint<16> stg10_lane_123 = stg10.extract<1968, 1983>();
  hw_uint<16> stg10_lane_124 = stg10.extract<1984, 1999>();
  hw_uint<16> stg10_lane_125 = stg10.extract<2000, 2015>();
  hw_uint<16> stg10_lane_126 = stg10.extract<2016, 2031>();
  hw_uint<16> stg10_lane_127 = stg10.extract<2032, 2047>();

	
  hw_uint<64 > stg10_lane_3_pack;
  set_at<0, 64, 16>(stg10_lane_3_pack, stg10_lane_0);
  set_at<16, 64, 16>(stg10_lane_3_pack, stg10_lane_1);
  set_at<32, 64, 16>(stg10_lane_3_pack, stg10_lane_2);
  set_at<48, 64, 16>(stg10_lane_3_pack, stg10_lane_3);
  auto res_stg11_update_0_sm12_0785 = stg11_generated_compute_unrolled_1(stg10_lane_3_pack);

  hw_uint<64 > stg10_lane_7_pack;
  set_at<0, 64, 16>(stg10_lane_7_pack, stg10_lane_4);
  set_at<16, 64, 16>(stg10_lane_7_pack, stg10_lane_5);
  set_at<32, 64, 16>(stg10_lane_7_pack, stg10_lane_6);
  set_at<48, 64, 16>(stg10_lane_7_pack, stg10_lane_7);
  auto res_stg11_update_0_sm12_1787 = stg11_generated_compute_unrolled_1(stg10_lane_7_pack);

  hw_uint<64 > stg10_lane_11_pack;
  set_at<0, 64, 16>(stg10_lane_11_pack, stg10_lane_8);
  set_at<16, 64, 16>(stg10_lane_11_pack, stg10_lane_9);
  set_at<32, 64, 16>(stg10_lane_11_pack, stg10_lane_10);
  set_at<48, 64, 16>(stg10_lane_11_pack, stg10_lane_11);
  auto res_stg11_update_0_sm12_2789 = stg11_generated_compute_unrolled_1(stg10_lane_11_pack);

  hw_uint<64 > stg10_lane_15_pack;
  set_at<0, 64, 16>(stg10_lane_15_pack, stg10_lane_12);
  set_at<16, 64, 16>(stg10_lane_15_pack, stg10_lane_13);
  set_at<32, 64, 16>(stg10_lane_15_pack, stg10_lane_14);
  set_at<48, 64, 16>(stg10_lane_15_pack, stg10_lane_15);
  auto res_stg11_update_0_sm12_3791 = stg11_generated_compute_unrolled_1(stg10_lane_15_pack);

  hw_uint<64 > stg10_lane_19_pack;
  set_at<0, 64, 16>(stg10_lane_19_pack, stg10_lane_16);
  set_at<16, 64, 16>(stg10_lane_19_pack, stg10_lane_17);
  set_at<32, 64, 16>(stg10_lane_19_pack, stg10_lane_18);
  set_at<48, 64, 16>(stg10_lane_19_pack, stg10_lane_19);
  auto res_stg11_update_0_sm12_4793 = stg11_generated_compute_unrolled_1(stg10_lane_19_pack);

  hw_uint<64 > stg10_lane_23_pack;
  set_at<0, 64, 16>(stg10_lane_23_pack, stg10_lane_20);
  set_at<16, 64, 16>(stg10_lane_23_pack, stg10_lane_21);
  set_at<32, 64, 16>(stg10_lane_23_pack, stg10_lane_22);
  set_at<48, 64, 16>(stg10_lane_23_pack, stg10_lane_23);
  auto res_stg11_update_0_sm12_5795 = stg11_generated_compute_unrolled_1(stg10_lane_23_pack);

  hw_uint<64 > stg10_lane_27_pack;
  set_at<0, 64, 16>(stg10_lane_27_pack, stg10_lane_24);
  set_at<16, 64, 16>(stg10_lane_27_pack, stg10_lane_25);
  set_at<32, 64, 16>(stg10_lane_27_pack, stg10_lane_26);
  set_at<48, 64, 16>(stg10_lane_27_pack, stg10_lane_27);
  auto res_stg11_update_0_sm12_6797 = stg11_generated_compute_unrolled_1(stg10_lane_27_pack);

  hw_uint<64 > stg10_lane_31_pack;
  set_at<0, 64, 16>(stg10_lane_31_pack, stg10_lane_28);
  set_at<16, 64, 16>(stg10_lane_31_pack, stg10_lane_29);
  set_at<32, 64, 16>(stg10_lane_31_pack, stg10_lane_30);
  set_at<48, 64, 16>(stg10_lane_31_pack, stg10_lane_31);
  auto res_stg11_update_0_sm12_7799 = stg11_generated_compute_unrolled_1(stg10_lane_31_pack);

  hw_uint<64 > stg10_lane_35_pack;
  set_at<0, 64, 16>(stg10_lane_35_pack, stg10_lane_32);
  set_at<16, 64, 16>(stg10_lane_35_pack, stg10_lane_33);
  set_at<32, 64, 16>(stg10_lane_35_pack, stg10_lane_34);
  set_at<48, 64, 16>(stg10_lane_35_pack, stg10_lane_35);
  auto res_stg11_update_0_sm12_8801 = stg11_generated_compute_unrolled_1(stg10_lane_35_pack);

  hw_uint<64 > stg10_lane_39_pack;
  set_at<0, 64, 16>(stg10_lane_39_pack, stg10_lane_36);
  set_at<16, 64, 16>(stg10_lane_39_pack, stg10_lane_37);
  set_at<32, 64, 16>(stg10_lane_39_pack, stg10_lane_38);
  set_at<48, 64, 16>(stg10_lane_39_pack, stg10_lane_39);
  auto res_stg11_update_0_sm12_9803 = stg11_generated_compute_unrolled_1(stg10_lane_39_pack);

  hw_uint<64 > stg10_lane_43_pack;
  set_at<0, 64, 16>(stg10_lane_43_pack, stg10_lane_40);
  set_at<16, 64, 16>(stg10_lane_43_pack, stg10_lane_41);
  set_at<32, 64, 16>(stg10_lane_43_pack, stg10_lane_42);
  set_at<48, 64, 16>(stg10_lane_43_pack, stg10_lane_43);
  auto res_stg11_update_0_sm12_10805 = stg11_generated_compute_unrolled_1(stg10_lane_43_pack);

  hw_uint<64 > stg10_lane_47_pack;
  set_at<0, 64, 16>(stg10_lane_47_pack, stg10_lane_44);
  set_at<16, 64, 16>(stg10_lane_47_pack, stg10_lane_45);
  set_at<32, 64, 16>(stg10_lane_47_pack, stg10_lane_46);
  set_at<48, 64, 16>(stg10_lane_47_pack, stg10_lane_47);
  auto res_stg11_update_0_sm12_11807 = stg11_generated_compute_unrolled_1(stg10_lane_47_pack);

  hw_uint<64 > stg10_lane_51_pack;
  set_at<0, 64, 16>(stg10_lane_51_pack, stg10_lane_48);
  set_at<16, 64, 16>(stg10_lane_51_pack, stg10_lane_49);
  set_at<32, 64, 16>(stg10_lane_51_pack, stg10_lane_50);
  set_at<48, 64, 16>(stg10_lane_51_pack, stg10_lane_51);
  auto res_stg11_update_0_sm12_12809 = stg11_generated_compute_unrolled_1(stg10_lane_51_pack);

  hw_uint<64 > stg10_lane_55_pack;
  set_at<0, 64, 16>(stg10_lane_55_pack, stg10_lane_52);
  set_at<16, 64, 16>(stg10_lane_55_pack, stg10_lane_53);
  set_at<32, 64, 16>(stg10_lane_55_pack, stg10_lane_54);
  set_at<48, 64, 16>(stg10_lane_55_pack, stg10_lane_55);
  auto res_stg11_update_0_sm12_13811 = stg11_generated_compute_unrolled_1(stg10_lane_55_pack);

  hw_uint<64 > stg10_lane_59_pack;
  set_at<0, 64, 16>(stg10_lane_59_pack, stg10_lane_56);
  set_at<16, 64, 16>(stg10_lane_59_pack, stg10_lane_57);
  set_at<32, 64, 16>(stg10_lane_59_pack, stg10_lane_58);
  set_at<48, 64, 16>(stg10_lane_59_pack, stg10_lane_59);
  auto res_stg11_update_0_sm12_14813 = stg11_generated_compute_unrolled_1(stg10_lane_59_pack);

  hw_uint<64 > stg10_lane_63_pack;
  set_at<0, 64, 16>(stg10_lane_63_pack, stg10_lane_60);
  set_at<16, 64, 16>(stg10_lane_63_pack, stg10_lane_61);
  set_at<32, 64, 16>(stg10_lane_63_pack, stg10_lane_62);
  set_at<48, 64, 16>(stg10_lane_63_pack, stg10_lane_63);
  auto res_stg11_update_0_sm12_15815 = stg11_generated_compute_unrolled_1(stg10_lane_63_pack);

  hw_uint<64 > stg10_lane_67_pack;
  set_at<0, 64, 16>(stg10_lane_67_pack, stg10_lane_64);
  set_at<16, 64, 16>(stg10_lane_67_pack, stg10_lane_65);
  set_at<32, 64, 16>(stg10_lane_67_pack, stg10_lane_66);
  set_at<48, 64, 16>(stg10_lane_67_pack, stg10_lane_67);
  auto res_stg11_update_0_sm12_16817 = stg11_generated_compute_unrolled_1(stg10_lane_67_pack);

  hw_uint<64 > stg10_lane_71_pack;
  set_at<0, 64, 16>(stg10_lane_71_pack, stg10_lane_68);
  set_at<16, 64, 16>(stg10_lane_71_pack, stg10_lane_69);
  set_at<32, 64, 16>(stg10_lane_71_pack, stg10_lane_70);
  set_at<48, 64, 16>(stg10_lane_71_pack, stg10_lane_71);
  auto res_stg11_update_0_sm12_17819 = stg11_generated_compute_unrolled_1(stg10_lane_71_pack);

  hw_uint<64 > stg10_lane_75_pack;
  set_at<0, 64, 16>(stg10_lane_75_pack, stg10_lane_72);
  set_at<16, 64, 16>(stg10_lane_75_pack, stg10_lane_73);
  set_at<32, 64, 16>(stg10_lane_75_pack, stg10_lane_74);
  set_at<48, 64, 16>(stg10_lane_75_pack, stg10_lane_75);
  auto res_stg11_update_0_sm12_18821 = stg11_generated_compute_unrolled_1(stg10_lane_75_pack);

  hw_uint<64 > stg10_lane_79_pack;
  set_at<0, 64, 16>(stg10_lane_79_pack, stg10_lane_76);
  set_at<16, 64, 16>(stg10_lane_79_pack, stg10_lane_77);
  set_at<32, 64, 16>(stg10_lane_79_pack, stg10_lane_78);
  set_at<48, 64, 16>(stg10_lane_79_pack, stg10_lane_79);
  auto res_stg11_update_0_sm12_19823 = stg11_generated_compute_unrolled_1(stg10_lane_79_pack);

  hw_uint<64 > stg10_lane_83_pack;
  set_at<0, 64, 16>(stg10_lane_83_pack, stg10_lane_80);
  set_at<16, 64, 16>(stg10_lane_83_pack, stg10_lane_81);
  set_at<32, 64, 16>(stg10_lane_83_pack, stg10_lane_82);
  set_at<48, 64, 16>(stg10_lane_83_pack, stg10_lane_83);
  auto res_stg11_update_0_sm12_20825 = stg11_generated_compute_unrolled_1(stg10_lane_83_pack);

  hw_uint<64 > stg10_lane_87_pack;
  set_at<0, 64, 16>(stg10_lane_87_pack, stg10_lane_84);
  set_at<16, 64, 16>(stg10_lane_87_pack, stg10_lane_85);
  set_at<32, 64, 16>(stg10_lane_87_pack, stg10_lane_86);
  set_at<48, 64, 16>(stg10_lane_87_pack, stg10_lane_87);
  auto res_stg11_update_0_sm12_21827 = stg11_generated_compute_unrolled_1(stg10_lane_87_pack);

  hw_uint<64 > stg10_lane_91_pack;
  set_at<0, 64, 16>(stg10_lane_91_pack, stg10_lane_88);
  set_at<16, 64, 16>(stg10_lane_91_pack, stg10_lane_89);
  set_at<32, 64, 16>(stg10_lane_91_pack, stg10_lane_90);
  set_at<48, 64, 16>(stg10_lane_91_pack, stg10_lane_91);
  auto res_stg11_update_0_sm12_22829 = stg11_generated_compute_unrolled_1(stg10_lane_91_pack);

  hw_uint<64 > stg10_lane_95_pack;
  set_at<0, 64, 16>(stg10_lane_95_pack, stg10_lane_92);
  set_at<16, 64, 16>(stg10_lane_95_pack, stg10_lane_93);
  set_at<32, 64, 16>(stg10_lane_95_pack, stg10_lane_94);
  set_at<48, 64, 16>(stg10_lane_95_pack, stg10_lane_95);
  auto res_stg11_update_0_sm12_23831 = stg11_generated_compute_unrolled_1(stg10_lane_95_pack);

  hw_uint<64 > stg10_lane_99_pack;
  set_at<0, 64, 16>(stg10_lane_99_pack, stg10_lane_96);
  set_at<16, 64, 16>(stg10_lane_99_pack, stg10_lane_97);
  set_at<32, 64, 16>(stg10_lane_99_pack, stg10_lane_98);
  set_at<48, 64, 16>(stg10_lane_99_pack, stg10_lane_99);
  auto res_stg11_update_0_sm12_24833 = stg11_generated_compute_unrolled_1(stg10_lane_99_pack);

  hw_uint<64 > stg10_lane_103_pack;
  set_at<0, 64, 16>(stg10_lane_103_pack, stg10_lane_100);
  set_at<16, 64, 16>(stg10_lane_103_pack, stg10_lane_101);
  set_at<32, 64, 16>(stg10_lane_103_pack, stg10_lane_102);
  set_at<48, 64, 16>(stg10_lane_103_pack, stg10_lane_103);
  auto res_stg11_update_0_sm12_25835 = stg11_generated_compute_unrolled_1(stg10_lane_103_pack);

  hw_uint<64 > stg10_lane_107_pack;
  set_at<0, 64, 16>(stg10_lane_107_pack, stg10_lane_104);
  set_at<16, 64, 16>(stg10_lane_107_pack, stg10_lane_105);
  set_at<32, 64, 16>(stg10_lane_107_pack, stg10_lane_106);
  set_at<48, 64, 16>(stg10_lane_107_pack, stg10_lane_107);
  auto res_stg11_update_0_sm12_26837 = stg11_generated_compute_unrolled_1(stg10_lane_107_pack);

  hw_uint<64 > stg10_lane_111_pack;
  set_at<0, 64, 16>(stg10_lane_111_pack, stg10_lane_108);
  set_at<16, 64, 16>(stg10_lane_111_pack, stg10_lane_109);
  set_at<32, 64, 16>(stg10_lane_111_pack, stg10_lane_110);
  set_at<48, 64, 16>(stg10_lane_111_pack, stg10_lane_111);
  auto res_stg11_update_0_sm12_27839 = stg11_generated_compute_unrolled_1(stg10_lane_111_pack);

  hw_uint<64 > stg10_lane_115_pack;
  set_at<0, 64, 16>(stg10_lane_115_pack, stg10_lane_112);
  set_at<16, 64, 16>(stg10_lane_115_pack, stg10_lane_113);
  set_at<32, 64, 16>(stg10_lane_115_pack, stg10_lane_114);
  set_at<48, 64, 16>(stg10_lane_115_pack, stg10_lane_115);
  auto res_stg11_update_0_sm12_28841 = stg11_generated_compute_unrolled_1(stg10_lane_115_pack);

  hw_uint<64 > stg10_lane_119_pack;
  set_at<0, 64, 16>(stg10_lane_119_pack, stg10_lane_116);
  set_at<16, 64, 16>(stg10_lane_119_pack, stg10_lane_117);
  set_at<32, 64, 16>(stg10_lane_119_pack, stg10_lane_118);
  set_at<48, 64, 16>(stg10_lane_119_pack, stg10_lane_119);
  auto res_stg11_update_0_sm12_29843 = stg11_generated_compute_unrolled_1(stg10_lane_119_pack);

  hw_uint<64 > stg10_lane_123_pack;
  set_at<0, 64, 16>(stg10_lane_123_pack, stg10_lane_120);
  set_at<16, 64, 16>(stg10_lane_123_pack, stg10_lane_121);
  set_at<32, 64, 16>(stg10_lane_123_pack, stg10_lane_122);
  set_at<48, 64, 16>(stg10_lane_123_pack, stg10_lane_123);
  auto res_stg11_update_0_sm12_30845 = stg11_generated_compute_unrolled_1(stg10_lane_123_pack);

  hw_uint<64 > stg10_lane_127_pack;
  set_at<0, 64, 16>(stg10_lane_127_pack, stg10_lane_124);
  set_at<16, 64, 16>(stg10_lane_127_pack, stg10_lane_125);
  set_at<32, 64, 16>(stg10_lane_127_pack, stg10_lane_126);
  set_at<48, 64, 16>(stg10_lane_127_pack, stg10_lane_127);
  auto res_stg11_update_0_sm12_31847 = stg11_generated_compute_unrolled_1(stg10_lane_127_pack);
  hw_uint<512 > return_value1142;
  set_at<0, 512, 16>(return_value1142, res_stg11_update_0_sm12_0785);
  set_at<16, 512, 16>(return_value1142, res_stg11_update_0_sm12_1787);
  set_at<32, 512, 16>(return_value1142, res_stg11_update_0_sm12_2789);
  set_at<48, 512, 16>(return_value1142, res_stg11_update_0_sm12_3791);
  set_at<64, 512, 16>(return_value1142, res_stg11_update_0_sm12_4793);
  set_at<80, 512, 16>(return_value1142, res_stg11_update_0_sm12_5795);
  set_at<96, 512, 16>(return_value1142, res_stg11_update_0_sm12_6797);
  set_at<112, 512, 16>(return_value1142, res_stg11_update_0_sm12_7799);
  set_at<128, 512, 16>(return_value1142, res_stg11_update_0_sm12_8801);
  set_at<144, 512, 16>(return_value1142, res_stg11_update_0_sm12_9803);
  set_at<160, 512, 16>(return_value1142, res_stg11_update_0_sm12_10805);
  set_at<176, 512, 16>(return_value1142, res_stg11_update_0_sm12_11807);
  set_at<192, 512, 16>(return_value1142, res_stg11_update_0_sm12_12809);
  set_at<208, 512, 16>(return_value1142, res_stg11_update_0_sm12_13811);
  set_at<224, 512, 16>(return_value1142, res_stg11_update_0_sm12_14813);
  set_at<240, 512, 16>(return_value1142, res_stg11_update_0_sm12_15815);
  set_at<256, 512, 16>(return_value1142, res_stg11_update_0_sm12_16817);
  set_at<272, 512, 16>(return_value1142, res_stg11_update_0_sm12_17819);
  set_at<288, 512, 16>(return_value1142, res_stg11_update_0_sm12_18821);
  set_at<304, 512, 16>(return_value1142, res_stg11_update_0_sm12_19823);
  set_at<320, 512, 16>(return_value1142, res_stg11_update_0_sm12_20825);
  set_at<336, 512, 16>(return_value1142, res_stg11_update_0_sm12_21827);
  set_at<352, 512, 16>(return_value1142, res_stg11_update_0_sm12_22829);
  set_at<368, 512, 16>(return_value1142, res_stg11_update_0_sm12_23831);
  set_at<384, 512, 16>(return_value1142, res_stg11_update_0_sm12_24833);
  set_at<400, 512, 16>(return_value1142, res_stg11_update_0_sm12_25835);
  set_at<416, 512, 16>(return_value1142, res_stg11_update_0_sm12_26837);
  set_at<432, 512, 16>(return_value1142, res_stg11_update_0_sm12_27839);
  set_at<448, 512, 16>(return_value1142, res_stg11_update_0_sm12_28841);
  set_at<464, 512, 16>(return_value1142, res_stg11_update_0_sm12_29843);
  set_at<480, 512, 16>(return_value1142, res_stg11_update_0_sm12_30845);
  set_at<496, 512, 16>(return_value1142, res_stg11_update_0_sm12_31847);
  return return_value1142;

}

hw_uint<512> stg12_1_cu1144(hw_uint<16*128>& stg11) {
  hw_uint<16> stg11_lane_0 = stg11.extract<0, 15>();
  hw_uint<16> stg11_lane_1 = stg11.extract<16, 31>();
  hw_uint<16> stg11_lane_2 = stg11.extract<32, 47>();
  hw_uint<16> stg11_lane_3 = stg11.extract<48, 63>();
  hw_uint<16> stg11_lane_4 = stg11.extract<64, 79>();
  hw_uint<16> stg11_lane_5 = stg11.extract<80, 95>();
  hw_uint<16> stg11_lane_6 = stg11.extract<96, 111>();
  hw_uint<16> stg11_lane_7 = stg11.extract<112, 127>();
  hw_uint<16> stg11_lane_8 = stg11.extract<128, 143>();
  hw_uint<16> stg11_lane_9 = stg11.extract<144, 159>();
  hw_uint<16> stg11_lane_10 = stg11.extract<160, 175>();
  hw_uint<16> stg11_lane_11 = stg11.extract<176, 191>();
  hw_uint<16> stg11_lane_12 = stg11.extract<192, 207>();
  hw_uint<16> stg11_lane_13 = stg11.extract<208, 223>();
  hw_uint<16> stg11_lane_14 = stg11.extract<224, 239>();
  hw_uint<16> stg11_lane_15 = stg11.extract<240, 255>();
  hw_uint<16> stg11_lane_16 = stg11.extract<256, 271>();
  hw_uint<16> stg11_lane_17 = stg11.extract<272, 287>();
  hw_uint<16> stg11_lane_18 = stg11.extract<288, 303>();
  hw_uint<16> stg11_lane_19 = stg11.extract<304, 319>();
  hw_uint<16> stg11_lane_20 = stg11.extract<320, 335>();
  hw_uint<16> stg11_lane_21 = stg11.extract<336, 351>();
  hw_uint<16> stg11_lane_22 = stg11.extract<352, 367>();
  hw_uint<16> stg11_lane_23 = stg11.extract<368, 383>();
  hw_uint<16> stg11_lane_24 = stg11.extract<384, 399>();
  hw_uint<16> stg11_lane_25 = stg11.extract<400, 415>();
  hw_uint<16> stg11_lane_26 = stg11.extract<416, 431>();
  hw_uint<16> stg11_lane_27 = stg11.extract<432, 447>();
  hw_uint<16> stg11_lane_28 = stg11.extract<448, 463>();
  hw_uint<16> stg11_lane_29 = stg11.extract<464, 479>();
  hw_uint<16> stg11_lane_30 = stg11.extract<480, 495>();
  hw_uint<16> stg11_lane_31 = stg11.extract<496, 511>();
  hw_uint<16> stg11_lane_32 = stg11.extract<512, 527>();
  hw_uint<16> stg11_lane_33 = stg11.extract<528, 543>();
  hw_uint<16> stg11_lane_34 = stg11.extract<544, 559>();
  hw_uint<16> stg11_lane_35 = stg11.extract<560, 575>();
  hw_uint<16> stg11_lane_36 = stg11.extract<576, 591>();
  hw_uint<16> stg11_lane_37 = stg11.extract<592, 607>();
  hw_uint<16> stg11_lane_38 = stg11.extract<608, 623>();
  hw_uint<16> stg11_lane_39 = stg11.extract<624, 639>();
  hw_uint<16> stg11_lane_40 = stg11.extract<640, 655>();
  hw_uint<16> stg11_lane_41 = stg11.extract<656, 671>();
  hw_uint<16> stg11_lane_42 = stg11.extract<672, 687>();
  hw_uint<16> stg11_lane_43 = stg11.extract<688, 703>();
  hw_uint<16> stg11_lane_44 = stg11.extract<704, 719>();
  hw_uint<16> stg11_lane_45 = stg11.extract<720, 735>();
  hw_uint<16> stg11_lane_46 = stg11.extract<736, 751>();
  hw_uint<16> stg11_lane_47 = stg11.extract<752, 767>();
  hw_uint<16> stg11_lane_48 = stg11.extract<768, 783>();
  hw_uint<16> stg11_lane_49 = stg11.extract<784, 799>();
  hw_uint<16> stg11_lane_50 = stg11.extract<800, 815>();
  hw_uint<16> stg11_lane_51 = stg11.extract<816, 831>();
  hw_uint<16> stg11_lane_52 = stg11.extract<832, 847>();
  hw_uint<16> stg11_lane_53 = stg11.extract<848, 863>();
  hw_uint<16> stg11_lane_54 = stg11.extract<864, 879>();
  hw_uint<16> stg11_lane_55 = stg11.extract<880, 895>();
  hw_uint<16> stg11_lane_56 = stg11.extract<896, 911>();
  hw_uint<16> stg11_lane_57 = stg11.extract<912, 927>();
  hw_uint<16> stg11_lane_58 = stg11.extract<928, 943>();
  hw_uint<16> stg11_lane_59 = stg11.extract<944, 959>();
  hw_uint<16> stg11_lane_60 = stg11.extract<960, 975>();
  hw_uint<16> stg11_lane_61 = stg11.extract<976, 991>();
  hw_uint<16> stg11_lane_62 = stg11.extract<992, 1007>();
  hw_uint<16> stg11_lane_63 = stg11.extract<1008, 1023>();
  hw_uint<16> stg11_lane_64 = stg11.extract<1024, 1039>();
  hw_uint<16> stg11_lane_65 = stg11.extract<1040, 1055>();
  hw_uint<16> stg11_lane_66 = stg11.extract<1056, 1071>();
  hw_uint<16> stg11_lane_67 = stg11.extract<1072, 1087>();
  hw_uint<16> stg11_lane_68 = stg11.extract<1088, 1103>();
  hw_uint<16> stg11_lane_69 = stg11.extract<1104, 1119>();
  hw_uint<16> stg11_lane_70 = stg11.extract<1120, 1135>();
  hw_uint<16> stg11_lane_71 = stg11.extract<1136, 1151>();
  hw_uint<16> stg11_lane_72 = stg11.extract<1152, 1167>();
  hw_uint<16> stg11_lane_73 = stg11.extract<1168, 1183>();
  hw_uint<16> stg11_lane_74 = stg11.extract<1184, 1199>();
  hw_uint<16> stg11_lane_75 = stg11.extract<1200, 1215>();
  hw_uint<16> stg11_lane_76 = stg11.extract<1216, 1231>();
  hw_uint<16> stg11_lane_77 = stg11.extract<1232, 1247>();
  hw_uint<16> stg11_lane_78 = stg11.extract<1248, 1263>();
  hw_uint<16> stg11_lane_79 = stg11.extract<1264, 1279>();
  hw_uint<16> stg11_lane_80 = stg11.extract<1280, 1295>();
  hw_uint<16> stg11_lane_81 = stg11.extract<1296, 1311>();
  hw_uint<16> stg11_lane_82 = stg11.extract<1312, 1327>();
  hw_uint<16> stg11_lane_83 = stg11.extract<1328, 1343>();
  hw_uint<16> stg11_lane_84 = stg11.extract<1344, 1359>();
  hw_uint<16> stg11_lane_85 = stg11.extract<1360, 1375>();
  hw_uint<16> stg11_lane_86 = stg11.extract<1376, 1391>();
  hw_uint<16> stg11_lane_87 = stg11.extract<1392, 1407>();
  hw_uint<16> stg11_lane_88 = stg11.extract<1408, 1423>();
  hw_uint<16> stg11_lane_89 = stg11.extract<1424, 1439>();
  hw_uint<16> stg11_lane_90 = stg11.extract<1440, 1455>();
  hw_uint<16> stg11_lane_91 = stg11.extract<1456, 1471>();
  hw_uint<16> stg11_lane_92 = stg11.extract<1472, 1487>();
  hw_uint<16> stg11_lane_93 = stg11.extract<1488, 1503>();
  hw_uint<16> stg11_lane_94 = stg11.extract<1504, 1519>();
  hw_uint<16> stg11_lane_95 = stg11.extract<1520, 1535>();
  hw_uint<16> stg11_lane_96 = stg11.extract<1536, 1551>();
  hw_uint<16> stg11_lane_97 = stg11.extract<1552, 1567>();
  hw_uint<16> stg11_lane_98 = stg11.extract<1568, 1583>();
  hw_uint<16> stg11_lane_99 = stg11.extract<1584, 1599>();
  hw_uint<16> stg11_lane_100 = stg11.extract<1600, 1615>();
  hw_uint<16> stg11_lane_101 = stg11.extract<1616, 1631>();
  hw_uint<16> stg11_lane_102 = stg11.extract<1632, 1647>();
  hw_uint<16> stg11_lane_103 = stg11.extract<1648, 1663>();
  hw_uint<16> stg11_lane_104 = stg11.extract<1664, 1679>();
  hw_uint<16> stg11_lane_105 = stg11.extract<1680, 1695>();
  hw_uint<16> stg11_lane_106 = stg11.extract<1696, 1711>();
  hw_uint<16> stg11_lane_107 = stg11.extract<1712, 1727>();
  hw_uint<16> stg11_lane_108 = stg11.extract<1728, 1743>();
  hw_uint<16> stg11_lane_109 = stg11.extract<1744, 1759>();
  hw_uint<16> stg11_lane_110 = stg11.extract<1760, 1775>();
  hw_uint<16> stg11_lane_111 = stg11.extract<1776, 1791>();
  hw_uint<16> stg11_lane_112 = stg11.extract<1792, 1807>();
  hw_uint<16> stg11_lane_113 = stg11.extract<1808, 1823>();
  hw_uint<16> stg11_lane_114 = stg11.extract<1824, 1839>();
  hw_uint<16> stg11_lane_115 = stg11.extract<1840, 1855>();
  hw_uint<16> stg11_lane_116 = stg11.extract<1856, 1871>();
  hw_uint<16> stg11_lane_117 = stg11.extract<1872, 1887>();
  hw_uint<16> stg11_lane_118 = stg11.extract<1888, 1903>();
  hw_uint<16> stg11_lane_119 = stg11.extract<1904, 1919>();
  hw_uint<16> stg11_lane_120 = stg11.extract<1920, 1935>();
  hw_uint<16> stg11_lane_121 = stg11.extract<1936, 1951>();
  hw_uint<16> stg11_lane_122 = stg11.extract<1952, 1967>();
  hw_uint<16> stg11_lane_123 = stg11.extract<1968, 1983>();
  hw_uint<16> stg11_lane_124 = stg11.extract<1984, 1999>();
  hw_uint<16> stg11_lane_125 = stg11.extract<2000, 2015>();
  hw_uint<16> stg11_lane_126 = stg11.extract<2016, 2031>();
  hw_uint<16> stg11_lane_127 = stg11.extract<2032, 2047>();

	
  hw_uint<64 > stg11_lane_3_pack;
  set_at<0, 64, 16>(stg11_lane_3_pack, stg11_lane_0);
  set_at<16, 64, 16>(stg11_lane_3_pack, stg11_lane_1);
  set_at<32, 64, 16>(stg11_lane_3_pack, stg11_lane_2);
  set_at<48, 64, 16>(stg11_lane_3_pack, stg11_lane_3);
  auto res_stg12_update_0_sm13_0849 = stg12_generated_compute_unrolled_1(stg11_lane_3_pack);

  hw_uint<64 > stg11_lane_7_pack;
  set_at<0, 64, 16>(stg11_lane_7_pack, stg11_lane_4);
  set_at<16, 64, 16>(stg11_lane_7_pack, stg11_lane_5);
  set_at<32, 64, 16>(stg11_lane_7_pack, stg11_lane_6);
  set_at<48, 64, 16>(stg11_lane_7_pack, stg11_lane_7);
  auto res_stg12_update_0_sm13_1851 = stg12_generated_compute_unrolled_1(stg11_lane_7_pack);

  hw_uint<64 > stg11_lane_11_pack;
  set_at<0, 64, 16>(stg11_lane_11_pack, stg11_lane_8);
  set_at<16, 64, 16>(stg11_lane_11_pack, stg11_lane_9);
  set_at<32, 64, 16>(stg11_lane_11_pack, stg11_lane_10);
  set_at<48, 64, 16>(stg11_lane_11_pack, stg11_lane_11);
  auto res_stg12_update_0_sm13_2853 = stg12_generated_compute_unrolled_1(stg11_lane_11_pack);

  hw_uint<64 > stg11_lane_15_pack;
  set_at<0, 64, 16>(stg11_lane_15_pack, stg11_lane_12);
  set_at<16, 64, 16>(stg11_lane_15_pack, stg11_lane_13);
  set_at<32, 64, 16>(stg11_lane_15_pack, stg11_lane_14);
  set_at<48, 64, 16>(stg11_lane_15_pack, stg11_lane_15);
  auto res_stg12_update_0_sm13_3855 = stg12_generated_compute_unrolled_1(stg11_lane_15_pack);

  hw_uint<64 > stg11_lane_19_pack;
  set_at<0, 64, 16>(stg11_lane_19_pack, stg11_lane_16);
  set_at<16, 64, 16>(stg11_lane_19_pack, stg11_lane_17);
  set_at<32, 64, 16>(stg11_lane_19_pack, stg11_lane_18);
  set_at<48, 64, 16>(stg11_lane_19_pack, stg11_lane_19);
  auto res_stg12_update_0_sm13_4857 = stg12_generated_compute_unrolled_1(stg11_lane_19_pack);

  hw_uint<64 > stg11_lane_23_pack;
  set_at<0, 64, 16>(stg11_lane_23_pack, stg11_lane_20);
  set_at<16, 64, 16>(stg11_lane_23_pack, stg11_lane_21);
  set_at<32, 64, 16>(stg11_lane_23_pack, stg11_lane_22);
  set_at<48, 64, 16>(stg11_lane_23_pack, stg11_lane_23);
  auto res_stg12_update_0_sm13_5859 = stg12_generated_compute_unrolled_1(stg11_lane_23_pack);

  hw_uint<64 > stg11_lane_27_pack;
  set_at<0, 64, 16>(stg11_lane_27_pack, stg11_lane_24);
  set_at<16, 64, 16>(stg11_lane_27_pack, stg11_lane_25);
  set_at<32, 64, 16>(stg11_lane_27_pack, stg11_lane_26);
  set_at<48, 64, 16>(stg11_lane_27_pack, stg11_lane_27);
  auto res_stg12_update_0_sm13_6861 = stg12_generated_compute_unrolled_1(stg11_lane_27_pack);

  hw_uint<64 > stg11_lane_31_pack;
  set_at<0, 64, 16>(stg11_lane_31_pack, stg11_lane_28);
  set_at<16, 64, 16>(stg11_lane_31_pack, stg11_lane_29);
  set_at<32, 64, 16>(stg11_lane_31_pack, stg11_lane_30);
  set_at<48, 64, 16>(stg11_lane_31_pack, stg11_lane_31);
  auto res_stg12_update_0_sm13_7863 = stg12_generated_compute_unrolled_1(stg11_lane_31_pack);

  hw_uint<64 > stg11_lane_35_pack;
  set_at<0, 64, 16>(stg11_lane_35_pack, stg11_lane_32);
  set_at<16, 64, 16>(stg11_lane_35_pack, stg11_lane_33);
  set_at<32, 64, 16>(stg11_lane_35_pack, stg11_lane_34);
  set_at<48, 64, 16>(stg11_lane_35_pack, stg11_lane_35);
  auto res_stg12_update_0_sm13_8865 = stg12_generated_compute_unrolled_1(stg11_lane_35_pack);

  hw_uint<64 > stg11_lane_39_pack;
  set_at<0, 64, 16>(stg11_lane_39_pack, stg11_lane_36);
  set_at<16, 64, 16>(stg11_lane_39_pack, stg11_lane_37);
  set_at<32, 64, 16>(stg11_lane_39_pack, stg11_lane_38);
  set_at<48, 64, 16>(stg11_lane_39_pack, stg11_lane_39);
  auto res_stg12_update_0_sm13_9867 = stg12_generated_compute_unrolled_1(stg11_lane_39_pack);

  hw_uint<64 > stg11_lane_43_pack;
  set_at<0, 64, 16>(stg11_lane_43_pack, stg11_lane_40);
  set_at<16, 64, 16>(stg11_lane_43_pack, stg11_lane_41);
  set_at<32, 64, 16>(stg11_lane_43_pack, stg11_lane_42);
  set_at<48, 64, 16>(stg11_lane_43_pack, stg11_lane_43);
  auto res_stg12_update_0_sm13_10869 = stg12_generated_compute_unrolled_1(stg11_lane_43_pack);

  hw_uint<64 > stg11_lane_47_pack;
  set_at<0, 64, 16>(stg11_lane_47_pack, stg11_lane_44);
  set_at<16, 64, 16>(stg11_lane_47_pack, stg11_lane_45);
  set_at<32, 64, 16>(stg11_lane_47_pack, stg11_lane_46);
  set_at<48, 64, 16>(stg11_lane_47_pack, stg11_lane_47);
  auto res_stg12_update_0_sm13_11871 = stg12_generated_compute_unrolled_1(stg11_lane_47_pack);

  hw_uint<64 > stg11_lane_51_pack;
  set_at<0, 64, 16>(stg11_lane_51_pack, stg11_lane_48);
  set_at<16, 64, 16>(stg11_lane_51_pack, stg11_lane_49);
  set_at<32, 64, 16>(stg11_lane_51_pack, stg11_lane_50);
  set_at<48, 64, 16>(stg11_lane_51_pack, stg11_lane_51);
  auto res_stg12_update_0_sm13_12873 = stg12_generated_compute_unrolled_1(stg11_lane_51_pack);

  hw_uint<64 > stg11_lane_55_pack;
  set_at<0, 64, 16>(stg11_lane_55_pack, stg11_lane_52);
  set_at<16, 64, 16>(stg11_lane_55_pack, stg11_lane_53);
  set_at<32, 64, 16>(stg11_lane_55_pack, stg11_lane_54);
  set_at<48, 64, 16>(stg11_lane_55_pack, stg11_lane_55);
  auto res_stg12_update_0_sm13_13875 = stg12_generated_compute_unrolled_1(stg11_lane_55_pack);

  hw_uint<64 > stg11_lane_59_pack;
  set_at<0, 64, 16>(stg11_lane_59_pack, stg11_lane_56);
  set_at<16, 64, 16>(stg11_lane_59_pack, stg11_lane_57);
  set_at<32, 64, 16>(stg11_lane_59_pack, stg11_lane_58);
  set_at<48, 64, 16>(stg11_lane_59_pack, stg11_lane_59);
  auto res_stg12_update_0_sm13_14877 = stg12_generated_compute_unrolled_1(stg11_lane_59_pack);

  hw_uint<64 > stg11_lane_63_pack;
  set_at<0, 64, 16>(stg11_lane_63_pack, stg11_lane_60);
  set_at<16, 64, 16>(stg11_lane_63_pack, stg11_lane_61);
  set_at<32, 64, 16>(stg11_lane_63_pack, stg11_lane_62);
  set_at<48, 64, 16>(stg11_lane_63_pack, stg11_lane_63);
  auto res_stg12_update_0_sm13_15879 = stg12_generated_compute_unrolled_1(stg11_lane_63_pack);

  hw_uint<64 > stg11_lane_67_pack;
  set_at<0, 64, 16>(stg11_lane_67_pack, stg11_lane_64);
  set_at<16, 64, 16>(stg11_lane_67_pack, stg11_lane_65);
  set_at<32, 64, 16>(stg11_lane_67_pack, stg11_lane_66);
  set_at<48, 64, 16>(stg11_lane_67_pack, stg11_lane_67);
  auto res_stg12_update_0_sm13_16881 = stg12_generated_compute_unrolled_1(stg11_lane_67_pack);

  hw_uint<64 > stg11_lane_71_pack;
  set_at<0, 64, 16>(stg11_lane_71_pack, stg11_lane_68);
  set_at<16, 64, 16>(stg11_lane_71_pack, stg11_lane_69);
  set_at<32, 64, 16>(stg11_lane_71_pack, stg11_lane_70);
  set_at<48, 64, 16>(stg11_lane_71_pack, stg11_lane_71);
  auto res_stg12_update_0_sm13_17883 = stg12_generated_compute_unrolled_1(stg11_lane_71_pack);

  hw_uint<64 > stg11_lane_75_pack;
  set_at<0, 64, 16>(stg11_lane_75_pack, stg11_lane_72);
  set_at<16, 64, 16>(stg11_lane_75_pack, stg11_lane_73);
  set_at<32, 64, 16>(stg11_lane_75_pack, stg11_lane_74);
  set_at<48, 64, 16>(stg11_lane_75_pack, stg11_lane_75);
  auto res_stg12_update_0_sm13_18885 = stg12_generated_compute_unrolled_1(stg11_lane_75_pack);

  hw_uint<64 > stg11_lane_79_pack;
  set_at<0, 64, 16>(stg11_lane_79_pack, stg11_lane_76);
  set_at<16, 64, 16>(stg11_lane_79_pack, stg11_lane_77);
  set_at<32, 64, 16>(stg11_lane_79_pack, stg11_lane_78);
  set_at<48, 64, 16>(stg11_lane_79_pack, stg11_lane_79);
  auto res_stg12_update_0_sm13_19887 = stg12_generated_compute_unrolled_1(stg11_lane_79_pack);

  hw_uint<64 > stg11_lane_83_pack;
  set_at<0, 64, 16>(stg11_lane_83_pack, stg11_lane_80);
  set_at<16, 64, 16>(stg11_lane_83_pack, stg11_lane_81);
  set_at<32, 64, 16>(stg11_lane_83_pack, stg11_lane_82);
  set_at<48, 64, 16>(stg11_lane_83_pack, stg11_lane_83);
  auto res_stg12_update_0_sm13_20889 = stg12_generated_compute_unrolled_1(stg11_lane_83_pack);

  hw_uint<64 > stg11_lane_87_pack;
  set_at<0, 64, 16>(stg11_lane_87_pack, stg11_lane_84);
  set_at<16, 64, 16>(stg11_lane_87_pack, stg11_lane_85);
  set_at<32, 64, 16>(stg11_lane_87_pack, stg11_lane_86);
  set_at<48, 64, 16>(stg11_lane_87_pack, stg11_lane_87);
  auto res_stg12_update_0_sm13_21891 = stg12_generated_compute_unrolled_1(stg11_lane_87_pack);

  hw_uint<64 > stg11_lane_91_pack;
  set_at<0, 64, 16>(stg11_lane_91_pack, stg11_lane_88);
  set_at<16, 64, 16>(stg11_lane_91_pack, stg11_lane_89);
  set_at<32, 64, 16>(stg11_lane_91_pack, stg11_lane_90);
  set_at<48, 64, 16>(stg11_lane_91_pack, stg11_lane_91);
  auto res_stg12_update_0_sm13_22893 = stg12_generated_compute_unrolled_1(stg11_lane_91_pack);

  hw_uint<64 > stg11_lane_95_pack;
  set_at<0, 64, 16>(stg11_lane_95_pack, stg11_lane_92);
  set_at<16, 64, 16>(stg11_lane_95_pack, stg11_lane_93);
  set_at<32, 64, 16>(stg11_lane_95_pack, stg11_lane_94);
  set_at<48, 64, 16>(stg11_lane_95_pack, stg11_lane_95);
  auto res_stg12_update_0_sm13_23895 = stg12_generated_compute_unrolled_1(stg11_lane_95_pack);

  hw_uint<64 > stg11_lane_99_pack;
  set_at<0, 64, 16>(stg11_lane_99_pack, stg11_lane_96);
  set_at<16, 64, 16>(stg11_lane_99_pack, stg11_lane_97);
  set_at<32, 64, 16>(stg11_lane_99_pack, stg11_lane_98);
  set_at<48, 64, 16>(stg11_lane_99_pack, stg11_lane_99);
  auto res_stg12_update_0_sm13_24897 = stg12_generated_compute_unrolled_1(stg11_lane_99_pack);

  hw_uint<64 > stg11_lane_103_pack;
  set_at<0, 64, 16>(stg11_lane_103_pack, stg11_lane_100);
  set_at<16, 64, 16>(stg11_lane_103_pack, stg11_lane_101);
  set_at<32, 64, 16>(stg11_lane_103_pack, stg11_lane_102);
  set_at<48, 64, 16>(stg11_lane_103_pack, stg11_lane_103);
  auto res_stg12_update_0_sm13_25899 = stg12_generated_compute_unrolled_1(stg11_lane_103_pack);

  hw_uint<64 > stg11_lane_107_pack;
  set_at<0, 64, 16>(stg11_lane_107_pack, stg11_lane_104);
  set_at<16, 64, 16>(stg11_lane_107_pack, stg11_lane_105);
  set_at<32, 64, 16>(stg11_lane_107_pack, stg11_lane_106);
  set_at<48, 64, 16>(stg11_lane_107_pack, stg11_lane_107);
  auto res_stg12_update_0_sm13_26901 = stg12_generated_compute_unrolled_1(stg11_lane_107_pack);

  hw_uint<64 > stg11_lane_111_pack;
  set_at<0, 64, 16>(stg11_lane_111_pack, stg11_lane_108);
  set_at<16, 64, 16>(stg11_lane_111_pack, stg11_lane_109);
  set_at<32, 64, 16>(stg11_lane_111_pack, stg11_lane_110);
  set_at<48, 64, 16>(stg11_lane_111_pack, stg11_lane_111);
  auto res_stg12_update_0_sm13_27903 = stg12_generated_compute_unrolled_1(stg11_lane_111_pack);

  hw_uint<64 > stg11_lane_115_pack;
  set_at<0, 64, 16>(stg11_lane_115_pack, stg11_lane_112);
  set_at<16, 64, 16>(stg11_lane_115_pack, stg11_lane_113);
  set_at<32, 64, 16>(stg11_lane_115_pack, stg11_lane_114);
  set_at<48, 64, 16>(stg11_lane_115_pack, stg11_lane_115);
  auto res_stg12_update_0_sm13_28905 = stg12_generated_compute_unrolled_1(stg11_lane_115_pack);

  hw_uint<64 > stg11_lane_119_pack;
  set_at<0, 64, 16>(stg11_lane_119_pack, stg11_lane_116);
  set_at<16, 64, 16>(stg11_lane_119_pack, stg11_lane_117);
  set_at<32, 64, 16>(stg11_lane_119_pack, stg11_lane_118);
  set_at<48, 64, 16>(stg11_lane_119_pack, stg11_lane_119);
  auto res_stg12_update_0_sm13_29907 = stg12_generated_compute_unrolled_1(stg11_lane_119_pack);

  hw_uint<64 > stg11_lane_123_pack;
  set_at<0, 64, 16>(stg11_lane_123_pack, stg11_lane_120);
  set_at<16, 64, 16>(stg11_lane_123_pack, stg11_lane_121);
  set_at<32, 64, 16>(stg11_lane_123_pack, stg11_lane_122);
  set_at<48, 64, 16>(stg11_lane_123_pack, stg11_lane_123);
  auto res_stg12_update_0_sm13_30909 = stg12_generated_compute_unrolled_1(stg11_lane_123_pack);

  hw_uint<64 > stg11_lane_127_pack;
  set_at<0, 64, 16>(stg11_lane_127_pack, stg11_lane_124);
  set_at<16, 64, 16>(stg11_lane_127_pack, stg11_lane_125);
  set_at<32, 64, 16>(stg11_lane_127_pack, stg11_lane_126);
  set_at<48, 64, 16>(stg11_lane_127_pack, stg11_lane_127);
  auto res_stg12_update_0_sm13_31911 = stg12_generated_compute_unrolled_1(stg11_lane_127_pack);
  hw_uint<512 > return_value1145;
  set_at<0, 512, 16>(return_value1145, res_stg12_update_0_sm13_0849);
  set_at<16, 512, 16>(return_value1145, res_stg12_update_0_sm13_1851);
  set_at<32, 512, 16>(return_value1145, res_stg12_update_0_sm13_2853);
  set_at<48, 512, 16>(return_value1145, res_stg12_update_0_sm13_3855);
  set_at<64, 512, 16>(return_value1145, res_stg12_update_0_sm13_4857);
  set_at<80, 512, 16>(return_value1145, res_stg12_update_0_sm13_5859);
  set_at<96, 512, 16>(return_value1145, res_stg12_update_0_sm13_6861);
  set_at<112, 512, 16>(return_value1145, res_stg12_update_0_sm13_7863);
  set_at<128, 512, 16>(return_value1145, res_stg12_update_0_sm13_8865);
  set_at<144, 512, 16>(return_value1145, res_stg12_update_0_sm13_9867);
  set_at<160, 512, 16>(return_value1145, res_stg12_update_0_sm13_10869);
  set_at<176, 512, 16>(return_value1145, res_stg12_update_0_sm13_11871);
  set_at<192, 512, 16>(return_value1145, res_stg12_update_0_sm13_12873);
  set_at<208, 512, 16>(return_value1145, res_stg12_update_0_sm13_13875);
  set_at<224, 512, 16>(return_value1145, res_stg12_update_0_sm13_14877);
  set_at<240, 512, 16>(return_value1145, res_stg12_update_0_sm13_15879);
  set_at<256, 512, 16>(return_value1145, res_stg12_update_0_sm13_16881);
  set_at<272, 512, 16>(return_value1145, res_stg12_update_0_sm13_17883);
  set_at<288, 512, 16>(return_value1145, res_stg12_update_0_sm13_18885);
  set_at<304, 512, 16>(return_value1145, res_stg12_update_0_sm13_19887);
  set_at<320, 512, 16>(return_value1145, res_stg12_update_0_sm13_20889);
  set_at<336, 512, 16>(return_value1145, res_stg12_update_0_sm13_21891);
  set_at<352, 512, 16>(return_value1145, res_stg12_update_0_sm13_22893);
  set_at<368, 512, 16>(return_value1145, res_stg12_update_0_sm13_23895);
  set_at<384, 512, 16>(return_value1145, res_stg12_update_0_sm13_24897);
  set_at<400, 512, 16>(return_value1145, res_stg12_update_0_sm13_25899);
  set_at<416, 512, 16>(return_value1145, res_stg12_update_0_sm13_26901);
  set_at<432, 512, 16>(return_value1145, res_stg12_update_0_sm13_27903);
  set_at<448, 512, 16>(return_value1145, res_stg12_update_0_sm13_28905);
  set_at<464, 512, 16>(return_value1145, res_stg12_update_0_sm13_29907);
  set_at<480, 512, 16>(return_value1145, res_stg12_update_0_sm13_30909);
  set_at<496, 512, 16>(return_value1145, res_stg12_update_0_sm13_31911);
  return return_value1145;

}

hw_uint<512> stg13_1_cu1147(hw_uint<16*128>& stg12) {
  hw_uint<16> stg12_lane_0 = stg12.extract<0, 15>();
  hw_uint<16> stg12_lane_1 = stg12.extract<16, 31>();
  hw_uint<16> stg12_lane_2 = stg12.extract<32, 47>();
  hw_uint<16> stg12_lane_3 = stg12.extract<48, 63>();
  hw_uint<16> stg12_lane_4 = stg12.extract<64, 79>();
  hw_uint<16> stg12_lane_5 = stg12.extract<80, 95>();
  hw_uint<16> stg12_lane_6 = stg12.extract<96, 111>();
  hw_uint<16> stg12_lane_7 = stg12.extract<112, 127>();
  hw_uint<16> stg12_lane_8 = stg12.extract<128, 143>();
  hw_uint<16> stg12_lane_9 = stg12.extract<144, 159>();
  hw_uint<16> stg12_lane_10 = stg12.extract<160, 175>();
  hw_uint<16> stg12_lane_11 = stg12.extract<176, 191>();
  hw_uint<16> stg12_lane_12 = stg12.extract<192, 207>();
  hw_uint<16> stg12_lane_13 = stg12.extract<208, 223>();
  hw_uint<16> stg12_lane_14 = stg12.extract<224, 239>();
  hw_uint<16> stg12_lane_15 = stg12.extract<240, 255>();
  hw_uint<16> stg12_lane_16 = stg12.extract<256, 271>();
  hw_uint<16> stg12_lane_17 = stg12.extract<272, 287>();
  hw_uint<16> stg12_lane_18 = stg12.extract<288, 303>();
  hw_uint<16> stg12_lane_19 = stg12.extract<304, 319>();
  hw_uint<16> stg12_lane_20 = stg12.extract<320, 335>();
  hw_uint<16> stg12_lane_21 = stg12.extract<336, 351>();
  hw_uint<16> stg12_lane_22 = stg12.extract<352, 367>();
  hw_uint<16> stg12_lane_23 = stg12.extract<368, 383>();
  hw_uint<16> stg12_lane_24 = stg12.extract<384, 399>();
  hw_uint<16> stg12_lane_25 = stg12.extract<400, 415>();
  hw_uint<16> stg12_lane_26 = stg12.extract<416, 431>();
  hw_uint<16> stg12_lane_27 = stg12.extract<432, 447>();
  hw_uint<16> stg12_lane_28 = stg12.extract<448, 463>();
  hw_uint<16> stg12_lane_29 = stg12.extract<464, 479>();
  hw_uint<16> stg12_lane_30 = stg12.extract<480, 495>();
  hw_uint<16> stg12_lane_31 = stg12.extract<496, 511>();
  hw_uint<16> stg12_lane_32 = stg12.extract<512, 527>();
  hw_uint<16> stg12_lane_33 = stg12.extract<528, 543>();
  hw_uint<16> stg12_lane_34 = stg12.extract<544, 559>();
  hw_uint<16> stg12_lane_35 = stg12.extract<560, 575>();
  hw_uint<16> stg12_lane_36 = stg12.extract<576, 591>();
  hw_uint<16> stg12_lane_37 = stg12.extract<592, 607>();
  hw_uint<16> stg12_lane_38 = stg12.extract<608, 623>();
  hw_uint<16> stg12_lane_39 = stg12.extract<624, 639>();
  hw_uint<16> stg12_lane_40 = stg12.extract<640, 655>();
  hw_uint<16> stg12_lane_41 = stg12.extract<656, 671>();
  hw_uint<16> stg12_lane_42 = stg12.extract<672, 687>();
  hw_uint<16> stg12_lane_43 = stg12.extract<688, 703>();
  hw_uint<16> stg12_lane_44 = stg12.extract<704, 719>();
  hw_uint<16> stg12_lane_45 = stg12.extract<720, 735>();
  hw_uint<16> stg12_lane_46 = stg12.extract<736, 751>();
  hw_uint<16> stg12_lane_47 = stg12.extract<752, 767>();
  hw_uint<16> stg12_lane_48 = stg12.extract<768, 783>();
  hw_uint<16> stg12_lane_49 = stg12.extract<784, 799>();
  hw_uint<16> stg12_lane_50 = stg12.extract<800, 815>();
  hw_uint<16> stg12_lane_51 = stg12.extract<816, 831>();
  hw_uint<16> stg12_lane_52 = stg12.extract<832, 847>();
  hw_uint<16> stg12_lane_53 = stg12.extract<848, 863>();
  hw_uint<16> stg12_lane_54 = stg12.extract<864, 879>();
  hw_uint<16> stg12_lane_55 = stg12.extract<880, 895>();
  hw_uint<16> stg12_lane_56 = stg12.extract<896, 911>();
  hw_uint<16> stg12_lane_57 = stg12.extract<912, 927>();
  hw_uint<16> stg12_lane_58 = stg12.extract<928, 943>();
  hw_uint<16> stg12_lane_59 = stg12.extract<944, 959>();
  hw_uint<16> stg12_lane_60 = stg12.extract<960, 975>();
  hw_uint<16> stg12_lane_61 = stg12.extract<976, 991>();
  hw_uint<16> stg12_lane_62 = stg12.extract<992, 1007>();
  hw_uint<16> stg12_lane_63 = stg12.extract<1008, 1023>();
  hw_uint<16> stg12_lane_64 = stg12.extract<1024, 1039>();
  hw_uint<16> stg12_lane_65 = stg12.extract<1040, 1055>();
  hw_uint<16> stg12_lane_66 = stg12.extract<1056, 1071>();
  hw_uint<16> stg12_lane_67 = stg12.extract<1072, 1087>();
  hw_uint<16> stg12_lane_68 = stg12.extract<1088, 1103>();
  hw_uint<16> stg12_lane_69 = stg12.extract<1104, 1119>();
  hw_uint<16> stg12_lane_70 = stg12.extract<1120, 1135>();
  hw_uint<16> stg12_lane_71 = stg12.extract<1136, 1151>();
  hw_uint<16> stg12_lane_72 = stg12.extract<1152, 1167>();
  hw_uint<16> stg12_lane_73 = stg12.extract<1168, 1183>();
  hw_uint<16> stg12_lane_74 = stg12.extract<1184, 1199>();
  hw_uint<16> stg12_lane_75 = stg12.extract<1200, 1215>();
  hw_uint<16> stg12_lane_76 = stg12.extract<1216, 1231>();
  hw_uint<16> stg12_lane_77 = stg12.extract<1232, 1247>();
  hw_uint<16> stg12_lane_78 = stg12.extract<1248, 1263>();
  hw_uint<16> stg12_lane_79 = stg12.extract<1264, 1279>();
  hw_uint<16> stg12_lane_80 = stg12.extract<1280, 1295>();
  hw_uint<16> stg12_lane_81 = stg12.extract<1296, 1311>();
  hw_uint<16> stg12_lane_82 = stg12.extract<1312, 1327>();
  hw_uint<16> stg12_lane_83 = stg12.extract<1328, 1343>();
  hw_uint<16> stg12_lane_84 = stg12.extract<1344, 1359>();
  hw_uint<16> stg12_lane_85 = stg12.extract<1360, 1375>();
  hw_uint<16> stg12_lane_86 = stg12.extract<1376, 1391>();
  hw_uint<16> stg12_lane_87 = stg12.extract<1392, 1407>();
  hw_uint<16> stg12_lane_88 = stg12.extract<1408, 1423>();
  hw_uint<16> stg12_lane_89 = stg12.extract<1424, 1439>();
  hw_uint<16> stg12_lane_90 = stg12.extract<1440, 1455>();
  hw_uint<16> stg12_lane_91 = stg12.extract<1456, 1471>();
  hw_uint<16> stg12_lane_92 = stg12.extract<1472, 1487>();
  hw_uint<16> stg12_lane_93 = stg12.extract<1488, 1503>();
  hw_uint<16> stg12_lane_94 = stg12.extract<1504, 1519>();
  hw_uint<16> stg12_lane_95 = stg12.extract<1520, 1535>();
  hw_uint<16> stg12_lane_96 = stg12.extract<1536, 1551>();
  hw_uint<16> stg12_lane_97 = stg12.extract<1552, 1567>();
  hw_uint<16> stg12_lane_98 = stg12.extract<1568, 1583>();
  hw_uint<16> stg12_lane_99 = stg12.extract<1584, 1599>();
  hw_uint<16> stg12_lane_100 = stg12.extract<1600, 1615>();
  hw_uint<16> stg12_lane_101 = stg12.extract<1616, 1631>();
  hw_uint<16> stg12_lane_102 = stg12.extract<1632, 1647>();
  hw_uint<16> stg12_lane_103 = stg12.extract<1648, 1663>();
  hw_uint<16> stg12_lane_104 = stg12.extract<1664, 1679>();
  hw_uint<16> stg12_lane_105 = stg12.extract<1680, 1695>();
  hw_uint<16> stg12_lane_106 = stg12.extract<1696, 1711>();
  hw_uint<16> stg12_lane_107 = stg12.extract<1712, 1727>();
  hw_uint<16> stg12_lane_108 = stg12.extract<1728, 1743>();
  hw_uint<16> stg12_lane_109 = stg12.extract<1744, 1759>();
  hw_uint<16> stg12_lane_110 = stg12.extract<1760, 1775>();
  hw_uint<16> stg12_lane_111 = stg12.extract<1776, 1791>();
  hw_uint<16> stg12_lane_112 = stg12.extract<1792, 1807>();
  hw_uint<16> stg12_lane_113 = stg12.extract<1808, 1823>();
  hw_uint<16> stg12_lane_114 = stg12.extract<1824, 1839>();
  hw_uint<16> stg12_lane_115 = stg12.extract<1840, 1855>();
  hw_uint<16> stg12_lane_116 = stg12.extract<1856, 1871>();
  hw_uint<16> stg12_lane_117 = stg12.extract<1872, 1887>();
  hw_uint<16> stg12_lane_118 = stg12.extract<1888, 1903>();
  hw_uint<16> stg12_lane_119 = stg12.extract<1904, 1919>();
  hw_uint<16> stg12_lane_120 = stg12.extract<1920, 1935>();
  hw_uint<16> stg12_lane_121 = stg12.extract<1936, 1951>();
  hw_uint<16> stg12_lane_122 = stg12.extract<1952, 1967>();
  hw_uint<16> stg12_lane_123 = stg12.extract<1968, 1983>();
  hw_uint<16> stg12_lane_124 = stg12.extract<1984, 1999>();
  hw_uint<16> stg12_lane_125 = stg12.extract<2000, 2015>();
  hw_uint<16> stg12_lane_126 = stg12.extract<2016, 2031>();
  hw_uint<16> stg12_lane_127 = stg12.extract<2032, 2047>();

	
  hw_uint<64 > stg12_lane_3_pack;
  set_at<0, 64, 16>(stg12_lane_3_pack, stg12_lane_0);
  set_at<16, 64, 16>(stg12_lane_3_pack, stg12_lane_1);
  set_at<32, 64, 16>(stg12_lane_3_pack, stg12_lane_2);
  set_at<48, 64, 16>(stg12_lane_3_pack, stg12_lane_3);
  auto res_stg13_update_0_sm14_0913 = stg13_generated_compute_unrolled_1(stg12_lane_3_pack);

  hw_uint<64 > stg12_lane_7_pack;
  set_at<0, 64, 16>(stg12_lane_7_pack, stg12_lane_4);
  set_at<16, 64, 16>(stg12_lane_7_pack, stg12_lane_5);
  set_at<32, 64, 16>(stg12_lane_7_pack, stg12_lane_6);
  set_at<48, 64, 16>(stg12_lane_7_pack, stg12_lane_7);
  auto res_stg13_update_0_sm14_1915 = stg13_generated_compute_unrolled_1(stg12_lane_7_pack);

  hw_uint<64 > stg12_lane_11_pack;
  set_at<0, 64, 16>(stg12_lane_11_pack, stg12_lane_8);
  set_at<16, 64, 16>(stg12_lane_11_pack, stg12_lane_9);
  set_at<32, 64, 16>(stg12_lane_11_pack, stg12_lane_10);
  set_at<48, 64, 16>(stg12_lane_11_pack, stg12_lane_11);
  auto res_stg13_update_0_sm14_2917 = stg13_generated_compute_unrolled_1(stg12_lane_11_pack);

  hw_uint<64 > stg12_lane_15_pack;
  set_at<0, 64, 16>(stg12_lane_15_pack, stg12_lane_12);
  set_at<16, 64, 16>(stg12_lane_15_pack, stg12_lane_13);
  set_at<32, 64, 16>(stg12_lane_15_pack, stg12_lane_14);
  set_at<48, 64, 16>(stg12_lane_15_pack, stg12_lane_15);
  auto res_stg13_update_0_sm14_3919 = stg13_generated_compute_unrolled_1(stg12_lane_15_pack);

  hw_uint<64 > stg12_lane_19_pack;
  set_at<0, 64, 16>(stg12_lane_19_pack, stg12_lane_16);
  set_at<16, 64, 16>(stg12_lane_19_pack, stg12_lane_17);
  set_at<32, 64, 16>(stg12_lane_19_pack, stg12_lane_18);
  set_at<48, 64, 16>(stg12_lane_19_pack, stg12_lane_19);
  auto res_stg13_update_0_sm14_4921 = stg13_generated_compute_unrolled_1(stg12_lane_19_pack);

  hw_uint<64 > stg12_lane_23_pack;
  set_at<0, 64, 16>(stg12_lane_23_pack, stg12_lane_20);
  set_at<16, 64, 16>(stg12_lane_23_pack, stg12_lane_21);
  set_at<32, 64, 16>(stg12_lane_23_pack, stg12_lane_22);
  set_at<48, 64, 16>(stg12_lane_23_pack, stg12_lane_23);
  auto res_stg13_update_0_sm14_5923 = stg13_generated_compute_unrolled_1(stg12_lane_23_pack);

  hw_uint<64 > stg12_lane_27_pack;
  set_at<0, 64, 16>(stg12_lane_27_pack, stg12_lane_24);
  set_at<16, 64, 16>(stg12_lane_27_pack, stg12_lane_25);
  set_at<32, 64, 16>(stg12_lane_27_pack, stg12_lane_26);
  set_at<48, 64, 16>(stg12_lane_27_pack, stg12_lane_27);
  auto res_stg13_update_0_sm14_6925 = stg13_generated_compute_unrolled_1(stg12_lane_27_pack);

  hw_uint<64 > stg12_lane_31_pack;
  set_at<0, 64, 16>(stg12_lane_31_pack, stg12_lane_28);
  set_at<16, 64, 16>(stg12_lane_31_pack, stg12_lane_29);
  set_at<32, 64, 16>(stg12_lane_31_pack, stg12_lane_30);
  set_at<48, 64, 16>(stg12_lane_31_pack, stg12_lane_31);
  auto res_stg13_update_0_sm14_7927 = stg13_generated_compute_unrolled_1(stg12_lane_31_pack);

  hw_uint<64 > stg12_lane_35_pack;
  set_at<0, 64, 16>(stg12_lane_35_pack, stg12_lane_32);
  set_at<16, 64, 16>(stg12_lane_35_pack, stg12_lane_33);
  set_at<32, 64, 16>(stg12_lane_35_pack, stg12_lane_34);
  set_at<48, 64, 16>(stg12_lane_35_pack, stg12_lane_35);
  auto res_stg13_update_0_sm14_8929 = stg13_generated_compute_unrolled_1(stg12_lane_35_pack);

  hw_uint<64 > stg12_lane_39_pack;
  set_at<0, 64, 16>(stg12_lane_39_pack, stg12_lane_36);
  set_at<16, 64, 16>(stg12_lane_39_pack, stg12_lane_37);
  set_at<32, 64, 16>(stg12_lane_39_pack, stg12_lane_38);
  set_at<48, 64, 16>(stg12_lane_39_pack, stg12_lane_39);
  auto res_stg13_update_0_sm14_9931 = stg13_generated_compute_unrolled_1(stg12_lane_39_pack);

  hw_uint<64 > stg12_lane_43_pack;
  set_at<0, 64, 16>(stg12_lane_43_pack, stg12_lane_40);
  set_at<16, 64, 16>(stg12_lane_43_pack, stg12_lane_41);
  set_at<32, 64, 16>(stg12_lane_43_pack, stg12_lane_42);
  set_at<48, 64, 16>(stg12_lane_43_pack, stg12_lane_43);
  auto res_stg13_update_0_sm14_10933 = stg13_generated_compute_unrolled_1(stg12_lane_43_pack);

  hw_uint<64 > stg12_lane_47_pack;
  set_at<0, 64, 16>(stg12_lane_47_pack, stg12_lane_44);
  set_at<16, 64, 16>(stg12_lane_47_pack, stg12_lane_45);
  set_at<32, 64, 16>(stg12_lane_47_pack, stg12_lane_46);
  set_at<48, 64, 16>(stg12_lane_47_pack, stg12_lane_47);
  auto res_stg13_update_0_sm14_11935 = stg13_generated_compute_unrolled_1(stg12_lane_47_pack);

  hw_uint<64 > stg12_lane_51_pack;
  set_at<0, 64, 16>(stg12_lane_51_pack, stg12_lane_48);
  set_at<16, 64, 16>(stg12_lane_51_pack, stg12_lane_49);
  set_at<32, 64, 16>(stg12_lane_51_pack, stg12_lane_50);
  set_at<48, 64, 16>(stg12_lane_51_pack, stg12_lane_51);
  auto res_stg13_update_0_sm14_12937 = stg13_generated_compute_unrolled_1(stg12_lane_51_pack);

  hw_uint<64 > stg12_lane_55_pack;
  set_at<0, 64, 16>(stg12_lane_55_pack, stg12_lane_52);
  set_at<16, 64, 16>(stg12_lane_55_pack, stg12_lane_53);
  set_at<32, 64, 16>(stg12_lane_55_pack, stg12_lane_54);
  set_at<48, 64, 16>(stg12_lane_55_pack, stg12_lane_55);
  auto res_stg13_update_0_sm14_13939 = stg13_generated_compute_unrolled_1(stg12_lane_55_pack);

  hw_uint<64 > stg12_lane_59_pack;
  set_at<0, 64, 16>(stg12_lane_59_pack, stg12_lane_56);
  set_at<16, 64, 16>(stg12_lane_59_pack, stg12_lane_57);
  set_at<32, 64, 16>(stg12_lane_59_pack, stg12_lane_58);
  set_at<48, 64, 16>(stg12_lane_59_pack, stg12_lane_59);
  auto res_stg13_update_0_sm14_14941 = stg13_generated_compute_unrolled_1(stg12_lane_59_pack);

  hw_uint<64 > stg12_lane_63_pack;
  set_at<0, 64, 16>(stg12_lane_63_pack, stg12_lane_60);
  set_at<16, 64, 16>(stg12_lane_63_pack, stg12_lane_61);
  set_at<32, 64, 16>(stg12_lane_63_pack, stg12_lane_62);
  set_at<48, 64, 16>(stg12_lane_63_pack, stg12_lane_63);
  auto res_stg13_update_0_sm14_15943 = stg13_generated_compute_unrolled_1(stg12_lane_63_pack);

  hw_uint<64 > stg12_lane_67_pack;
  set_at<0, 64, 16>(stg12_lane_67_pack, stg12_lane_64);
  set_at<16, 64, 16>(stg12_lane_67_pack, stg12_lane_65);
  set_at<32, 64, 16>(stg12_lane_67_pack, stg12_lane_66);
  set_at<48, 64, 16>(stg12_lane_67_pack, stg12_lane_67);
  auto res_stg13_update_0_sm14_16945 = stg13_generated_compute_unrolled_1(stg12_lane_67_pack);

  hw_uint<64 > stg12_lane_71_pack;
  set_at<0, 64, 16>(stg12_lane_71_pack, stg12_lane_68);
  set_at<16, 64, 16>(stg12_lane_71_pack, stg12_lane_69);
  set_at<32, 64, 16>(stg12_lane_71_pack, stg12_lane_70);
  set_at<48, 64, 16>(stg12_lane_71_pack, stg12_lane_71);
  auto res_stg13_update_0_sm14_17947 = stg13_generated_compute_unrolled_1(stg12_lane_71_pack);

  hw_uint<64 > stg12_lane_75_pack;
  set_at<0, 64, 16>(stg12_lane_75_pack, stg12_lane_72);
  set_at<16, 64, 16>(stg12_lane_75_pack, stg12_lane_73);
  set_at<32, 64, 16>(stg12_lane_75_pack, stg12_lane_74);
  set_at<48, 64, 16>(stg12_lane_75_pack, stg12_lane_75);
  auto res_stg13_update_0_sm14_18949 = stg13_generated_compute_unrolled_1(stg12_lane_75_pack);

  hw_uint<64 > stg12_lane_79_pack;
  set_at<0, 64, 16>(stg12_lane_79_pack, stg12_lane_76);
  set_at<16, 64, 16>(stg12_lane_79_pack, stg12_lane_77);
  set_at<32, 64, 16>(stg12_lane_79_pack, stg12_lane_78);
  set_at<48, 64, 16>(stg12_lane_79_pack, stg12_lane_79);
  auto res_stg13_update_0_sm14_19951 = stg13_generated_compute_unrolled_1(stg12_lane_79_pack);

  hw_uint<64 > stg12_lane_83_pack;
  set_at<0, 64, 16>(stg12_lane_83_pack, stg12_lane_80);
  set_at<16, 64, 16>(stg12_lane_83_pack, stg12_lane_81);
  set_at<32, 64, 16>(stg12_lane_83_pack, stg12_lane_82);
  set_at<48, 64, 16>(stg12_lane_83_pack, stg12_lane_83);
  auto res_stg13_update_0_sm14_20953 = stg13_generated_compute_unrolled_1(stg12_lane_83_pack);

  hw_uint<64 > stg12_lane_87_pack;
  set_at<0, 64, 16>(stg12_lane_87_pack, stg12_lane_84);
  set_at<16, 64, 16>(stg12_lane_87_pack, stg12_lane_85);
  set_at<32, 64, 16>(stg12_lane_87_pack, stg12_lane_86);
  set_at<48, 64, 16>(stg12_lane_87_pack, stg12_lane_87);
  auto res_stg13_update_0_sm14_21955 = stg13_generated_compute_unrolled_1(stg12_lane_87_pack);

  hw_uint<64 > stg12_lane_91_pack;
  set_at<0, 64, 16>(stg12_lane_91_pack, stg12_lane_88);
  set_at<16, 64, 16>(stg12_lane_91_pack, stg12_lane_89);
  set_at<32, 64, 16>(stg12_lane_91_pack, stg12_lane_90);
  set_at<48, 64, 16>(stg12_lane_91_pack, stg12_lane_91);
  auto res_stg13_update_0_sm14_22957 = stg13_generated_compute_unrolled_1(stg12_lane_91_pack);

  hw_uint<64 > stg12_lane_95_pack;
  set_at<0, 64, 16>(stg12_lane_95_pack, stg12_lane_92);
  set_at<16, 64, 16>(stg12_lane_95_pack, stg12_lane_93);
  set_at<32, 64, 16>(stg12_lane_95_pack, stg12_lane_94);
  set_at<48, 64, 16>(stg12_lane_95_pack, stg12_lane_95);
  auto res_stg13_update_0_sm14_23959 = stg13_generated_compute_unrolled_1(stg12_lane_95_pack);

  hw_uint<64 > stg12_lane_99_pack;
  set_at<0, 64, 16>(stg12_lane_99_pack, stg12_lane_96);
  set_at<16, 64, 16>(stg12_lane_99_pack, stg12_lane_97);
  set_at<32, 64, 16>(stg12_lane_99_pack, stg12_lane_98);
  set_at<48, 64, 16>(stg12_lane_99_pack, stg12_lane_99);
  auto res_stg13_update_0_sm14_24961 = stg13_generated_compute_unrolled_1(stg12_lane_99_pack);

  hw_uint<64 > stg12_lane_103_pack;
  set_at<0, 64, 16>(stg12_lane_103_pack, stg12_lane_100);
  set_at<16, 64, 16>(stg12_lane_103_pack, stg12_lane_101);
  set_at<32, 64, 16>(stg12_lane_103_pack, stg12_lane_102);
  set_at<48, 64, 16>(stg12_lane_103_pack, stg12_lane_103);
  auto res_stg13_update_0_sm14_25963 = stg13_generated_compute_unrolled_1(stg12_lane_103_pack);

  hw_uint<64 > stg12_lane_107_pack;
  set_at<0, 64, 16>(stg12_lane_107_pack, stg12_lane_104);
  set_at<16, 64, 16>(stg12_lane_107_pack, stg12_lane_105);
  set_at<32, 64, 16>(stg12_lane_107_pack, stg12_lane_106);
  set_at<48, 64, 16>(stg12_lane_107_pack, stg12_lane_107);
  auto res_stg13_update_0_sm14_26965 = stg13_generated_compute_unrolled_1(stg12_lane_107_pack);

  hw_uint<64 > stg12_lane_111_pack;
  set_at<0, 64, 16>(stg12_lane_111_pack, stg12_lane_108);
  set_at<16, 64, 16>(stg12_lane_111_pack, stg12_lane_109);
  set_at<32, 64, 16>(stg12_lane_111_pack, stg12_lane_110);
  set_at<48, 64, 16>(stg12_lane_111_pack, stg12_lane_111);
  auto res_stg13_update_0_sm14_27967 = stg13_generated_compute_unrolled_1(stg12_lane_111_pack);

  hw_uint<64 > stg12_lane_115_pack;
  set_at<0, 64, 16>(stg12_lane_115_pack, stg12_lane_112);
  set_at<16, 64, 16>(stg12_lane_115_pack, stg12_lane_113);
  set_at<32, 64, 16>(stg12_lane_115_pack, stg12_lane_114);
  set_at<48, 64, 16>(stg12_lane_115_pack, stg12_lane_115);
  auto res_stg13_update_0_sm14_28969 = stg13_generated_compute_unrolled_1(stg12_lane_115_pack);

  hw_uint<64 > stg12_lane_119_pack;
  set_at<0, 64, 16>(stg12_lane_119_pack, stg12_lane_116);
  set_at<16, 64, 16>(stg12_lane_119_pack, stg12_lane_117);
  set_at<32, 64, 16>(stg12_lane_119_pack, stg12_lane_118);
  set_at<48, 64, 16>(stg12_lane_119_pack, stg12_lane_119);
  auto res_stg13_update_0_sm14_29971 = stg13_generated_compute_unrolled_1(stg12_lane_119_pack);

  hw_uint<64 > stg12_lane_123_pack;
  set_at<0, 64, 16>(stg12_lane_123_pack, stg12_lane_120);
  set_at<16, 64, 16>(stg12_lane_123_pack, stg12_lane_121);
  set_at<32, 64, 16>(stg12_lane_123_pack, stg12_lane_122);
  set_at<48, 64, 16>(stg12_lane_123_pack, stg12_lane_123);
  auto res_stg13_update_0_sm14_30973 = stg13_generated_compute_unrolled_1(stg12_lane_123_pack);

  hw_uint<64 > stg12_lane_127_pack;
  set_at<0, 64, 16>(stg12_lane_127_pack, stg12_lane_124);
  set_at<16, 64, 16>(stg12_lane_127_pack, stg12_lane_125);
  set_at<32, 64, 16>(stg12_lane_127_pack, stg12_lane_126);
  set_at<48, 64, 16>(stg12_lane_127_pack, stg12_lane_127);
  auto res_stg13_update_0_sm14_31975 = stg13_generated_compute_unrolled_1(stg12_lane_127_pack);
  hw_uint<512 > return_value1148;
  set_at<0, 512, 16>(return_value1148, res_stg13_update_0_sm14_0913);
  set_at<16, 512, 16>(return_value1148, res_stg13_update_0_sm14_1915);
  set_at<32, 512, 16>(return_value1148, res_stg13_update_0_sm14_2917);
  set_at<48, 512, 16>(return_value1148, res_stg13_update_0_sm14_3919);
  set_at<64, 512, 16>(return_value1148, res_stg13_update_0_sm14_4921);
  set_at<80, 512, 16>(return_value1148, res_stg13_update_0_sm14_5923);
  set_at<96, 512, 16>(return_value1148, res_stg13_update_0_sm14_6925);
  set_at<112, 512, 16>(return_value1148, res_stg13_update_0_sm14_7927);
  set_at<128, 512, 16>(return_value1148, res_stg13_update_0_sm14_8929);
  set_at<144, 512, 16>(return_value1148, res_stg13_update_0_sm14_9931);
  set_at<160, 512, 16>(return_value1148, res_stg13_update_0_sm14_10933);
  set_at<176, 512, 16>(return_value1148, res_stg13_update_0_sm14_11935);
  set_at<192, 512, 16>(return_value1148, res_stg13_update_0_sm14_12937);
  set_at<208, 512, 16>(return_value1148, res_stg13_update_0_sm14_13939);
  set_at<224, 512, 16>(return_value1148, res_stg13_update_0_sm14_14941);
  set_at<240, 512, 16>(return_value1148, res_stg13_update_0_sm14_15943);
  set_at<256, 512, 16>(return_value1148, res_stg13_update_0_sm14_16945);
  set_at<272, 512, 16>(return_value1148, res_stg13_update_0_sm14_17947);
  set_at<288, 512, 16>(return_value1148, res_stg13_update_0_sm14_18949);
  set_at<304, 512, 16>(return_value1148, res_stg13_update_0_sm14_19951);
  set_at<320, 512, 16>(return_value1148, res_stg13_update_0_sm14_20953);
  set_at<336, 512, 16>(return_value1148, res_stg13_update_0_sm14_21955);
  set_at<352, 512, 16>(return_value1148, res_stg13_update_0_sm14_22957);
  set_at<368, 512, 16>(return_value1148, res_stg13_update_0_sm14_23959);
  set_at<384, 512, 16>(return_value1148, res_stg13_update_0_sm14_24961);
  set_at<400, 512, 16>(return_value1148, res_stg13_update_0_sm14_25963);
  set_at<416, 512, 16>(return_value1148, res_stg13_update_0_sm14_26965);
  set_at<432, 512, 16>(return_value1148, res_stg13_update_0_sm14_27967);
  set_at<448, 512, 16>(return_value1148, res_stg13_update_0_sm14_28969);
  set_at<464, 512, 16>(return_value1148, res_stg13_update_0_sm14_29971);
  set_at<480, 512, 16>(return_value1148, res_stg13_update_0_sm14_30973);
  set_at<496, 512, 16>(return_value1148, res_stg13_update_0_sm14_31975);
  return return_value1148;

}

hw_uint<512> stg14_1_cu1150(hw_uint<16*128>& stg13) {
  hw_uint<16> stg13_lane_0 = stg13.extract<0, 15>();
  hw_uint<16> stg13_lane_1 = stg13.extract<16, 31>();
  hw_uint<16> stg13_lane_2 = stg13.extract<32, 47>();
  hw_uint<16> stg13_lane_3 = stg13.extract<48, 63>();
  hw_uint<16> stg13_lane_4 = stg13.extract<64, 79>();
  hw_uint<16> stg13_lane_5 = stg13.extract<80, 95>();
  hw_uint<16> stg13_lane_6 = stg13.extract<96, 111>();
  hw_uint<16> stg13_lane_7 = stg13.extract<112, 127>();
  hw_uint<16> stg13_lane_8 = stg13.extract<128, 143>();
  hw_uint<16> stg13_lane_9 = stg13.extract<144, 159>();
  hw_uint<16> stg13_lane_10 = stg13.extract<160, 175>();
  hw_uint<16> stg13_lane_11 = stg13.extract<176, 191>();
  hw_uint<16> stg13_lane_12 = stg13.extract<192, 207>();
  hw_uint<16> stg13_lane_13 = stg13.extract<208, 223>();
  hw_uint<16> stg13_lane_14 = stg13.extract<224, 239>();
  hw_uint<16> stg13_lane_15 = stg13.extract<240, 255>();
  hw_uint<16> stg13_lane_16 = stg13.extract<256, 271>();
  hw_uint<16> stg13_lane_17 = stg13.extract<272, 287>();
  hw_uint<16> stg13_lane_18 = stg13.extract<288, 303>();
  hw_uint<16> stg13_lane_19 = stg13.extract<304, 319>();
  hw_uint<16> stg13_lane_20 = stg13.extract<320, 335>();
  hw_uint<16> stg13_lane_21 = stg13.extract<336, 351>();
  hw_uint<16> stg13_lane_22 = stg13.extract<352, 367>();
  hw_uint<16> stg13_lane_23 = stg13.extract<368, 383>();
  hw_uint<16> stg13_lane_24 = stg13.extract<384, 399>();
  hw_uint<16> stg13_lane_25 = stg13.extract<400, 415>();
  hw_uint<16> stg13_lane_26 = stg13.extract<416, 431>();
  hw_uint<16> stg13_lane_27 = stg13.extract<432, 447>();
  hw_uint<16> stg13_lane_28 = stg13.extract<448, 463>();
  hw_uint<16> stg13_lane_29 = stg13.extract<464, 479>();
  hw_uint<16> stg13_lane_30 = stg13.extract<480, 495>();
  hw_uint<16> stg13_lane_31 = stg13.extract<496, 511>();
  hw_uint<16> stg13_lane_32 = stg13.extract<512, 527>();
  hw_uint<16> stg13_lane_33 = stg13.extract<528, 543>();
  hw_uint<16> stg13_lane_34 = stg13.extract<544, 559>();
  hw_uint<16> stg13_lane_35 = stg13.extract<560, 575>();
  hw_uint<16> stg13_lane_36 = stg13.extract<576, 591>();
  hw_uint<16> stg13_lane_37 = stg13.extract<592, 607>();
  hw_uint<16> stg13_lane_38 = stg13.extract<608, 623>();
  hw_uint<16> stg13_lane_39 = stg13.extract<624, 639>();
  hw_uint<16> stg13_lane_40 = stg13.extract<640, 655>();
  hw_uint<16> stg13_lane_41 = stg13.extract<656, 671>();
  hw_uint<16> stg13_lane_42 = stg13.extract<672, 687>();
  hw_uint<16> stg13_lane_43 = stg13.extract<688, 703>();
  hw_uint<16> stg13_lane_44 = stg13.extract<704, 719>();
  hw_uint<16> stg13_lane_45 = stg13.extract<720, 735>();
  hw_uint<16> stg13_lane_46 = stg13.extract<736, 751>();
  hw_uint<16> stg13_lane_47 = stg13.extract<752, 767>();
  hw_uint<16> stg13_lane_48 = stg13.extract<768, 783>();
  hw_uint<16> stg13_lane_49 = stg13.extract<784, 799>();
  hw_uint<16> stg13_lane_50 = stg13.extract<800, 815>();
  hw_uint<16> stg13_lane_51 = stg13.extract<816, 831>();
  hw_uint<16> stg13_lane_52 = stg13.extract<832, 847>();
  hw_uint<16> stg13_lane_53 = stg13.extract<848, 863>();
  hw_uint<16> stg13_lane_54 = stg13.extract<864, 879>();
  hw_uint<16> stg13_lane_55 = stg13.extract<880, 895>();
  hw_uint<16> stg13_lane_56 = stg13.extract<896, 911>();
  hw_uint<16> stg13_lane_57 = stg13.extract<912, 927>();
  hw_uint<16> stg13_lane_58 = stg13.extract<928, 943>();
  hw_uint<16> stg13_lane_59 = stg13.extract<944, 959>();
  hw_uint<16> stg13_lane_60 = stg13.extract<960, 975>();
  hw_uint<16> stg13_lane_61 = stg13.extract<976, 991>();
  hw_uint<16> stg13_lane_62 = stg13.extract<992, 1007>();
  hw_uint<16> stg13_lane_63 = stg13.extract<1008, 1023>();
  hw_uint<16> stg13_lane_64 = stg13.extract<1024, 1039>();
  hw_uint<16> stg13_lane_65 = stg13.extract<1040, 1055>();
  hw_uint<16> stg13_lane_66 = stg13.extract<1056, 1071>();
  hw_uint<16> stg13_lane_67 = stg13.extract<1072, 1087>();
  hw_uint<16> stg13_lane_68 = stg13.extract<1088, 1103>();
  hw_uint<16> stg13_lane_69 = stg13.extract<1104, 1119>();
  hw_uint<16> stg13_lane_70 = stg13.extract<1120, 1135>();
  hw_uint<16> stg13_lane_71 = stg13.extract<1136, 1151>();
  hw_uint<16> stg13_lane_72 = stg13.extract<1152, 1167>();
  hw_uint<16> stg13_lane_73 = stg13.extract<1168, 1183>();
  hw_uint<16> stg13_lane_74 = stg13.extract<1184, 1199>();
  hw_uint<16> stg13_lane_75 = stg13.extract<1200, 1215>();
  hw_uint<16> stg13_lane_76 = stg13.extract<1216, 1231>();
  hw_uint<16> stg13_lane_77 = stg13.extract<1232, 1247>();
  hw_uint<16> stg13_lane_78 = stg13.extract<1248, 1263>();
  hw_uint<16> stg13_lane_79 = stg13.extract<1264, 1279>();
  hw_uint<16> stg13_lane_80 = stg13.extract<1280, 1295>();
  hw_uint<16> stg13_lane_81 = stg13.extract<1296, 1311>();
  hw_uint<16> stg13_lane_82 = stg13.extract<1312, 1327>();
  hw_uint<16> stg13_lane_83 = stg13.extract<1328, 1343>();
  hw_uint<16> stg13_lane_84 = stg13.extract<1344, 1359>();
  hw_uint<16> stg13_lane_85 = stg13.extract<1360, 1375>();
  hw_uint<16> stg13_lane_86 = stg13.extract<1376, 1391>();
  hw_uint<16> stg13_lane_87 = stg13.extract<1392, 1407>();
  hw_uint<16> stg13_lane_88 = stg13.extract<1408, 1423>();
  hw_uint<16> stg13_lane_89 = stg13.extract<1424, 1439>();
  hw_uint<16> stg13_lane_90 = stg13.extract<1440, 1455>();
  hw_uint<16> stg13_lane_91 = stg13.extract<1456, 1471>();
  hw_uint<16> stg13_lane_92 = stg13.extract<1472, 1487>();
  hw_uint<16> stg13_lane_93 = stg13.extract<1488, 1503>();
  hw_uint<16> stg13_lane_94 = stg13.extract<1504, 1519>();
  hw_uint<16> stg13_lane_95 = stg13.extract<1520, 1535>();
  hw_uint<16> stg13_lane_96 = stg13.extract<1536, 1551>();
  hw_uint<16> stg13_lane_97 = stg13.extract<1552, 1567>();
  hw_uint<16> stg13_lane_98 = stg13.extract<1568, 1583>();
  hw_uint<16> stg13_lane_99 = stg13.extract<1584, 1599>();
  hw_uint<16> stg13_lane_100 = stg13.extract<1600, 1615>();
  hw_uint<16> stg13_lane_101 = stg13.extract<1616, 1631>();
  hw_uint<16> stg13_lane_102 = stg13.extract<1632, 1647>();
  hw_uint<16> stg13_lane_103 = stg13.extract<1648, 1663>();
  hw_uint<16> stg13_lane_104 = stg13.extract<1664, 1679>();
  hw_uint<16> stg13_lane_105 = stg13.extract<1680, 1695>();
  hw_uint<16> stg13_lane_106 = stg13.extract<1696, 1711>();
  hw_uint<16> stg13_lane_107 = stg13.extract<1712, 1727>();
  hw_uint<16> stg13_lane_108 = stg13.extract<1728, 1743>();
  hw_uint<16> stg13_lane_109 = stg13.extract<1744, 1759>();
  hw_uint<16> stg13_lane_110 = stg13.extract<1760, 1775>();
  hw_uint<16> stg13_lane_111 = stg13.extract<1776, 1791>();
  hw_uint<16> stg13_lane_112 = stg13.extract<1792, 1807>();
  hw_uint<16> stg13_lane_113 = stg13.extract<1808, 1823>();
  hw_uint<16> stg13_lane_114 = stg13.extract<1824, 1839>();
  hw_uint<16> stg13_lane_115 = stg13.extract<1840, 1855>();
  hw_uint<16> stg13_lane_116 = stg13.extract<1856, 1871>();
  hw_uint<16> stg13_lane_117 = stg13.extract<1872, 1887>();
  hw_uint<16> stg13_lane_118 = stg13.extract<1888, 1903>();
  hw_uint<16> stg13_lane_119 = stg13.extract<1904, 1919>();
  hw_uint<16> stg13_lane_120 = stg13.extract<1920, 1935>();
  hw_uint<16> stg13_lane_121 = stg13.extract<1936, 1951>();
  hw_uint<16> stg13_lane_122 = stg13.extract<1952, 1967>();
  hw_uint<16> stg13_lane_123 = stg13.extract<1968, 1983>();
  hw_uint<16> stg13_lane_124 = stg13.extract<1984, 1999>();
  hw_uint<16> stg13_lane_125 = stg13.extract<2000, 2015>();
  hw_uint<16> stg13_lane_126 = stg13.extract<2016, 2031>();
  hw_uint<16> stg13_lane_127 = stg13.extract<2032, 2047>();

	
  hw_uint<64 > stg13_lane_3_pack;
  set_at<0, 64, 16>(stg13_lane_3_pack, stg13_lane_0);
  set_at<16, 64, 16>(stg13_lane_3_pack, stg13_lane_1);
  set_at<32, 64, 16>(stg13_lane_3_pack, stg13_lane_2);
  set_at<48, 64, 16>(stg13_lane_3_pack, stg13_lane_3);
  auto res_stg14_update_0_sm15_0977 = stg14_generated_compute_unrolled_1(stg13_lane_3_pack);

  hw_uint<64 > stg13_lane_7_pack;
  set_at<0, 64, 16>(stg13_lane_7_pack, stg13_lane_4);
  set_at<16, 64, 16>(stg13_lane_7_pack, stg13_lane_5);
  set_at<32, 64, 16>(stg13_lane_7_pack, stg13_lane_6);
  set_at<48, 64, 16>(stg13_lane_7_pack, stg13_lane_7);
  auto res_stg14_update_0_sm15_1979 = stg14_generated_compute_unrolled_1(stg13_lane_7_pack);

  hw_uint<64 > stg13_lane_11_pack;
  set_at<0, 64, 16>(stg13_lane_11_pack, stg13_lane_8);
  set_at<16, 64, 16>(stg13_lane_11_pack, stg13_lane_9);
  set_at<32, 64, 16>(stg13_lane_11_pack, stg13_lane_10);
  set_at<48, 64, 16>(stg13_lane_11_pack, stg13_lane_11);
  auto res_stg14_update_0_sm15_2981 = stg14_generated_compute_unrolled_1(stg13_lane_11_pack);

  hw_uint<64 > stg13_lane_15_pack;
  set_at<0, 64, 16>(stg13_lane_15_pack, stg13_lane_12);
  set_at<16, 64, 16>(stg13_lane_15_pack, stg13_lane_13);
  set_at<32, 64, 16>(stg13_lane_15_pack, stg13_lane_14);
  set_at<48, 64, 16>(stg13_lane_15_pack, stg13_lane_15);
  auto res_stg14_update_0_sm15_3983 = stg14_generated_compute_unrolled_1(stg13_lane_15_pack);

  hw_uint<64 > stg13_lane_19_pack;
  set_at<0, 64, 16>(stg13_lane_19_pack, stg13_lane_16);
  set_at<16, 64, 16>(stg13_lane_19_pack, stg13_lane_17);
  set_at<32, 64, 16>(stg13_lane_19_pack, stg13_lane_18);
  set_at<48, 64, 16>(stg13_lane_19_pack, stg13_lane_19);
  auto res_stg14_update_0_sm15_4985 = stg14_generated_compute_unrolled_1(stg13_lane_19_pack);

  hw_uint<64 > stg13_lane_23_pack;
  set_at<0, 64, 16>(stg13_lane_23_pack, stg13_lane_20);
  set_at<16, 64, 16>(stg13_lane_23_pack, stg13_lane_21);
  set_at<32, 64, 16>(stg13_lane_23_pack, stg13_lane_22);
  set_at<48, 64, 16>(stg13_lane_23_pack, stg13_lane_23);
  auto res_stg14_update_0_sm15_5987 = stg14_generated_compute_unrolled_1(stg13_lane_23_pack);

  hw_uint<64 > stg13_lane_27_pack;
  set_at<0, 64, 16>(stg13_lane_27_pack, stg13_lane_24);
  set_at<16, 64, 16>(stg13_lane_27_pack, stg13_lane_25);
  set_at<32, 64, 16>(stg13_lane_27_pack, stg13_lane_26);
  set_at<48, 64, 16>(stg13_lane_27_pack, stg13_lane_27);
  auto res_stg14_update_0_sm15_6989 = stg14_generated_compute_unrolled_1(stg13_lane_27_pack);

  hw_uint<64 > stg13_lane_31_pack;
  set_at<0, 64, 16>(stg13_lane_31_pack, stg13_lane_28);
  set_at<16, 64, 16>(stg13_lane_31_pack, stg13_lane_29);
  set_at<32, 64, 16>(stg13_lane_31_pack, stg13_lane_30);
  set_at<48, 64, 16>(stg13_lane_31_pack, stg13_lane_31);
  auto res_stg14_update_0_sm15_7991 = stg14_generated_compute_unrolled_1(stg13_lane_31_pack);

  hw_uint<64 > stg13_lane_35_pack;
  set_at<0, 64, 16>(stg13_lane_35_pack, stg13_lane_32);
  set_at<16, 64, 16>(stg13_lane_35_pack, stg13_lane_33);
  set_at<32, 64, 16>(stg13_lane_35_pack, stg13_lane_34);
  set_at<48, 64, 16>(stg13_lane_35_pack, stg13_lane_35);
  auto res_stg14_update_0_sm15_8993 = stg14_generated_compute_unrolled_1(stg13_lane_35_pack);

  hw_uint<64 > stg13_lane_39_pack;
  set_at<0, 64, 16>(stg13_lane_39_pack, stg13_lane_36);
  set_at<16, 64, 16>(stg13_lane_39_pack, stg13_lane_37);
  set_at<32, 64, 16>(stg13_lane_39_pack, stg13_lane_38);
  set_at<48, 64, 16>(stg13_lane_39_pack, stg13_lane_39);
  auto res_stg14_update_0_sm15_9995 = stg14_generated_compute_unrolled_1(stg13_lane_39_pack);

  hw_uint<64 > stg13_lane_43_pack;
  set_at<0, 64, 16>(stg13_lane_43_pack, stg13_lane_40);
  set_at<16, 64, 16>(stg13_lane_43_pack, stg13_lane_41);
  set_at<32, 64, 16>(stg13_lane_43_pack, stg13_lane_42);
  set_at<48, 64, 16>(stg13_lane_43_pack, stg13_lane_43);
  auto res_stg14_update_0_sm15_10997 = stg14_generated_compute_unrolled_1(stg13_lane_43_pack);

  hw_uint<64 > stg13_lane_47_pack;
  set_at<0, 64, 16>(stg13_lane_47_pack, stg13_lane_44);
  set_at<16, 64, 16>(stg13_lane_47_pack, stg13_lane_45);
  set_at<32, 64, 16>(stg13_lane_47_pack, stg13_lane_46);
  set_at<48, 64, 16>(stg13_lane_47_pack, stg13_lane_47);
  auto res_stg14_update_0_sm15_11999 = stg14_generated_compute_unrolled_1(stg13_lane_47_pack);

  hw_uint<64 > stg13_lane_51_pack;
  set_at<0, 64, 16>(stg13_lane_51_pack, stg13_lane_48);
  set_at<16, 64, 16>(stg13_lane_51_pack, stg13_lane_49);
  set_at<32, 64, 16>(stg13_lane_51_pack, stg13_lane_50);
  set_at<48, 64, 16>(stg13_lane_51_pack, stg13_lane_51);
  auto res_stg14_update_0_sm15_121001 = stg14_generated_compute_unrolled_1(stg13_lane_51_pack);

  hw_uint<64 > stg13_lane_55_pack;
  set_at<0, 64, 16>(stg13_lane_55_pack, stg13_lane_52);
  set_at<16, 64, 16>(stg13_lane_55_pack, stg13_lane_53);
  set_at<32, 64, 16>(stg13_lane_55_pack, stg13_lane_54);
  set_at<48, 64, 16>(stg13_lane_55_pack, stg13_lane_55);
  auto res_stg14_update_0_sm15_131003 = stg14_generated_compute_unrolled_1(stg13_lane_55_pack);

  hw_uint<64 > stg13_lane_59_pack;
  set_at<0, 64, 16>(stg13_lane_59_pack, stg13_lane_56);
  set_at<16, 64, 16>(stg13_lane_59_pack, stg13_lane_57);
  set_at<32, 64, 16>(stg13_lane_59_pack, stg13_lane_58);
  set_at<48, 64, 16>(stg13_lane_59_pack, stg13_lane_59);
  auto res_stg14_update_0_sm15_141005 = stg14_generated_compute_unrolled_1(stg13_lane_59_pack);

  hw_uint<64 > stg13_lane_63_pack;
  set_at<0, 64, 16>(stg13_lane_63_pack, stg13_lane_60);
  set_at<16, 64, 16>(stg13_lane_63_pack, stg13_lane_61);
  set_at<32, 64, 16>(stg13_lane_63_pack, stg13_lane_62);
  set_at<48, 64, 16>(stg13_lane_63_pack, stg13_lane_63);
  auto res_stg14_update_0_sm15_151007 = stg14_generated_compute_unrolled_1(stg13_lane_63_pack);

  hw_uint<64 > stg13_lane_67_pack;
  set_at<0, 64, 16>(stg13_lane_67_pack, stg13_lane_64);
  set_at<16, 64, 16>(stg13_lane_67_pack, stg13_lane_65);
  set_at<32, 64, 16>(stg13_lane_67_pack, stg13_lane_66);
  set_at<48, 64, 16>(stg13_lane_67_pack, stg13_lane_67);
  auto res_stg14_update_0_sm15_161009 = stg14_generated_compute_unrolled_1(stg13_lane_67_pack);

  hw_uint<64 > stg13_lane_71_pack;
  set_at<0, 64, 16>(stg13_lane_71_pack, stg13_lane_68);
  set_at<16, 64, 16>(stg13_lane_71_pack, stg13_lane_69);
  set_at<32, 64, 16>(stg13_lane_71_pack, stg13_lane_70);
  set_at<48, 64, 16>(stg13_lane_71_pack, stg13_lane_71);
  auto res_stg14_update_0_sm15_171011 = stg14_generated_compute_unrolled_1(stg13_lane_71_pack);

  hw_uint<64 > stg13_lane_75_pack;
  set_at<0, 64, 16>(stg13_lane_75_pack, stg13_lane_72);
  set_at<16, 64, 16>(stg13_lane_75_pack, stg13_lane_73);
  set_at<32, 64, 16>(stg13_lane_75_pack, stg13_lane_74);
  set_at<48, 64, 16>(stg13_lane_75_pack, stg13_lane_75);
  auto res_stg14_update_0_sm15_181013 = stg14_generated_compute_unrolled_1(stg13_lane_75_pack);

  hw_uint<64 > stg13_lane_79_pack;
  set_at<0, 64, 16>(stg13_lane_79_pack, stg13_lane_76);
  set_at<16, 64, 16>(stg13_lane_79_pack, stg13_lane_77);
  set_at<32, 64, 16>(stg13_lane_79_pack, stg13_lane_78);
  set_at<48, 64, 16>(stg13_lane_79_pack, stg13_lane_79);
  auto res_stg14_update_0_sm15_191015 = stg14_generated_compute_unrolled_1(stg13_lane_79_pack);

  hw_uint<64 > stg13_lane_83_pack;
  set_at<0, 64, 16>(stg13_lane_83_pack, stg13_lane_80);
  set_at<16, 64, 16>(stg13_lane_83_pack, stg13_lane_81);
  set_at<32, 64, 16>(stg13_lane_83_pack, stg13_lane_82);
  set_at<48, 64, 16>(stg13_lane_83_pack, stg13_lane_83);
  auto res_stg14_update_0_sm15_201017 = stg14_generated_compute_unrolled_1(stg13_lane_83_pack);

  hw_uint<64 > stg13_lane_87_pack;
  set_at<0, 64, 16>(stg13_lane_87_pack, stg13_lane_84);
  set_at<16, 64, 16>(stg13_lane_87_pack, stg13_lane_85);
  set_at<32, 64, 16>(stg13_lane_87_pack, stg13_lane_86);
  set_at<48, 64, 16>(stg13_lane_87_pack, stg13_lane_87);
  auto res_stg14_update_0_sm15_211019 = stg14_generated_compute_unrolled_1(stg13_lane_87_pack);

  hw_uint<64 > stg13_lane_91_pack;
  set_at<0, 64, 16>(stg13_lane_91_pack, stg13_lane_88);
  set_at<16, 64, 16>(stg13_lane_91_pack, stg13_lane_89);
  set_at<32, 64, 16>(stg13_lane_91_pack, stg13_lane_90);
  set_at<48, 64, 16>(stg13_lane_91_pack, stg13_lane_91);
  auto res_stg14_update_0_sm15_221021 = stg14_generated_compute_unrolled_1(stg13_lane_91_pack);

  hw_uint<64 > stg13_lane_95_pack;
  set_at<0, 64, 16>(stg13_lane_95_pack, stg13_lane_92);
  set_at<16, 64, 16>(stg13_lane_95_pack, stg13_lane_93);
  set_at<32, 64, 16>(stg13_lane_95_pack, stg13_lane_94);
  set_at<48, 64, 16>(stg13_lane_95_pack, stg13_lane_95);
  auto res_stg14_update_0_sm15_231023 = stg14_generated_compute_unrolled_1(stg13_lane_95_pack);

  hw_uint<64 > stg13_lane_99_pack;
  set_at<0, 64, 16>(stg13_lane_99_pack, stg13_lane_96);
  set_at<16, 64, 16>(stg13_lane_99_pack, stg13_lane_97);
  set_at<32, 64, 16>(stg13_lane_99_pack, stg13_lane_98);
  set_at<48, 64, 16>(stg13_lane_99_pack, stg13_lane_99);
  auto res_stg14_update_0_sm15_241025 = stg14_generated_compute_unrolled_1(stg13_lane_99_pack);

  hw_uint<64 > stg13_lane_103_pack;
  set_at<0, 64, 16>(stg13_lane_103_pack, stg13_lane_100);
  set_at<16, 64, 16>(stg13_lane_103_pack, stg13_lane_101);
  set_at<32, 64, 16>(stg13_lane_103_pack, stg13_lane_102);
  set_at<48, 64, 16>(stg13_lane_103_pack, stg13_lane_103);
  auto res_stg14_update_0_sm15_251027 = stg14_generated_compute_unrolled_1(stg13_lane_103_pack);

  hw_uint<64 > stg13_lane_107_pack;
  set_at<0, 64, 16>(stg13_lane_107_pack, stg13_lane_104);
  set_at<16, 64, 16>(stg13_lane_107_pack, stg13_lane_105);
  set_at<32, 64, 16>(stg13_lane_107_pack, stg13_lane_106);
  set_at<48, 64, 16>(stg13_lane_107_pack, stg13_lane_107);
  auto res_stg14_update_0_sm15_261029 = stg14_generated_compute_unrolled_1(stg13_lane_107_pack);

  hw_uint<64 > stg13_lane_111_pack;
  set_at<0, 64, 16>(stg13_lane_111_pack, stg13_lane_108);
  set_at<16, 64, 16>(stg13_lane_111_pack, stg13_lane_109);
  set_at<32, 64, 16>(stg13_lane_111_pack, stg13_lane_110);
  set_at<48, 64, 16>(stg13_lane_111_pack, stg13_lane_111);
  auto res_stg14_update_0_sm15_271031 = stg14_generated_compute_unrolled_1(stg13_lane_111_pack);

  hw_uint<64 > stg13_lane_115_pack;
  set_at<0, 64, 16>(stg13_lane_115_pack, stg13_lane_112);
  set_at<16, 64, 16>(stg13_lane_115_pack, stg13_lane_113);
  set_at<32, 64, 16>(stg13_lane_115_pack, stg13_lane_114);
  set_at<48, 64, 16>(stg13_lane_115_pack, stg13_lane_115);
  auto res_stg14_update_0_sm15_281033 = stg14_generated_compute_unrolled_1(stg13_lane_115_pack);

  hw_uint<64 > stg13_lane_119_pack;
  set_at<0, 64, 16>(stg13_lane_119_pack, stg13_lane_116);
  set_at<16, 64, 16>(stg13_lane_119_pack, stg13_lane_117);
  set_at<32, 64, 16>(stg13_lane_119_pack, stg13_lane_118);
  set_at<48, 64, 16>(stg13_lane_119_pack, stg13_lane_119);
  auto res_stg14_update_0_sm15_291035 = stg14_generated_compute_unrolled_1(stg13_lane_119_pack);

  hw_uint<64 > stg13_lane_123_pack;
  set_at<0, 64, 16>(stg13_lane_123_pack, stg13_lane_120);
  set_at<16, 64, 16>(stg13_lane_123_pack, stg13_lane_121);
  set_at<32, 64, 16>(stg13_lane_123_pack, stg13_lane_122);
  set_at<48, 64, 16>(stg13_lane_123_pack, stg13_lane_123);
  auto res_stg14_update_0_sm15_301037 = stg14_generated_compute_unrolled_1(stg13_lane_123_pack);

  hw_uint<64 > stg13_lane_127_pack;
  set_at<0, 64, 16>(stg13_lane_127_pack, stg13_lane_124);
  set_at<16, 64, 16>(stg13_lane_127_pack, stg13_lane_125);
  set_at<32, 64, 16>(stg13_lane_127_pack, stg13_lane_126);
  set_at<48, 64, 16>(stg13_lane_127_pack, stg13_lane_127);
  auto res_stg14_update_0_sm15_311039 = stg14_generated_compute_unrolled_1(stg13_lane_127_pack);
  hw_uint<512 > return_value1151;
  set_at<0, 512, 16>(return_value1151, res_stg14_update_0_sm15_0977);
  set_at<16, 512, 16>(return_value1151, res_stg14_update_0_sm15_1979);
  set_at<32, 512, 16>(return_value1151, res_stg14_update_0_sm15_2981);
  set_at<48, 512, 16>(return_value1151, res_stg14_update_0_sm15_3983);
  set_at<64, 512, 16>(return_value1151, res_stg14_update_0_sm15_4985);
  set_at<80, 512, 16>(return_value1151, res_stg14_update_0_sm15_5987);
  set_at<96, 512, 16>(return_value1151, res_stg14_update_0_sm15_6989);
  set_at<112, 512, 16>(return_value1151, res_stg14_update_0_sm15_7991);
  set_at<128, 512, 16>(return_value1151, res_stg14_update_0_sm15_8993);
  set_at<144, 512, 16>(return_value1151, res_stg14_update_0_sm15_9995);
  set_at<160, 512, 16>(return_value1151, res_stg14_update_0_sm15_10997);
  set_at<176, 512, 16>(return_value1151, res_stg14_update_0_sm15_11999);
  set_at<192, 512, 16>(return_value1151, res_stg14_update_0_sm15_121001);
  set_at<208, 512, 16>(return_value1151, res_stg14_update_0_sm15_131003);
  set_at<224, 512, 16>(return_value1151, res_stg14_update_0_sm15_141005);
  set_at<240, 512, 16>(return_value1151, res_stg14_update_0_sm15_151007);
  set_at<256, 512, 16>(return_value1151, res_stg14_update_0_sm15_161009);
  set_at<272, 512, 16>(return_value1151, res_stg14_update_0_sm15_171011);
  set_at<288, 512, 16>(return_value1151, res_stg14_update_0_sm15_181013);
  set_at<304, 512, 16>(return_value1151, res_stg14_update_0_sm15_191015);
  set_at<320, 512, 16>(return_value1151, res_stg14_update_0_sm15_201017);
  set_at<336, 512, 16>(return_value1151, res_stg14_update_0_sm15_211019);
  set_at<352, 512, 16>(return_value1151, res_stg14_update_0_sm15_221021);
  set_at<368, 512, 16>(return_value1151, res_stg14_update_0_sm15_231023);
  set_at<384, 512, 16>(return_value1151, res_stg14_update_0_sm15_241025);
  set_at<400, 512, 16>(return_value1151, res_stg14_update_0_sm15_251027);
  set_at<416, 512, 16>(return_value1151, res_stg14_update_0_sm15_261029);
  set_at<432, 512, 16>(return_value1151, res_stg14_update_0_sm15_271031);
  set_at<448, 512, 16>(return_value1151, res_stg14_update_0_sm15_281033);
  set_at<464, 512, 16>(return_value1151, res_stg14_update_0_sm15_291035);
  set_at<480, 512, 16>(return_value1151, res_stg14_update_0_sm15_301037);
  set_at<496, 512, 16>(return_value1151, res_stg14_update_0_sm15_311039);
  return return_value1151;

}

hw_uint<512> jac9_32_1_cu1153(hw_uint<16*32>& stg14) {
  hw_uint<16> stg14_lane_0 = stg14.extract<0, 15>();
  hw_uint<16> stg14_lane_1 = stg14.extract<16, 31>();
  hw_uint<16> stg14_lane_2 = stg14.extract<32, 47>();
  hw_uint<16> stg14_lane_3 = stg14.extract<48, 63>();
  hw_uint<16> stg14_lane_4 = stg14.extract<64, 79>();
  hw_uint<16> stg14_lane_5 = stg14.extract<80, 95>();
  hw_uint<16> stg14_lane_6 = stg14.extract<96, 111>();
  hw_uint<16> stg14_lane_7 = stg14.extract<112, 127>();
  hw_uint<16> stg14_lane_8 = stg14.extract<128, 143>();
  hw_uint<16> stg14_lane_9 = stg14.extract<144, 159>();
  hw_uint<16> stg14_lane_10 = stg14.extract<160, 175>();
  hw_uint<16> stg14_lane_11 = stg14.extract<176, 191>();
  hw_uint<16> stg14_lane_12 = stg14.extract<192, 207>();
  hw_uint<16> stg14_lane_13 = stg14.extract<208, 223>();
  hw_uint<16> stg14_lane_14 = stg14.extract<224, 239>();
  hw_uint<16> stg14_lane_15 = stg14.extract<240, 255>();
  hw_uint<16> stg14_lane_16 = stg14.extract<256, 271>();
  hw_uint<16> stg14_lane_17 = stg14.extract<272, 287>();
  hw_uint<16> stg14_lane_18 = stg14.extract<288, 303>();
  hw_uint<16> stg14_lane_19 = stg14.extract<304, 319>();
  hw_uint<16> stg14_lane_20 = stg14.extract<320, 335>();
  hw_uint<16> stg14_lane_21 = stg14.extract<336, 351>();
  hw_uint<16> stg14_lane_22 = stg14.extract<352, 367>();
  hw_uint<16> stg14_lane_23 = stg14.extract<368, 383>();
  hw_uint<16> stg14_lane_24 = stg14.extract<384, 399>();
  hw_uint<16> stg14_lane_25 = stg14.extract<400, 415>();
  hw_uint<16> stg14_lane_26 = stg14.extract<416, 431>();
  hw_uint<16> stg14_lane_27 = stg14.extract<432, 447>();
  hw_uint<16> stg14_lane_28 = stg14.extract<448, 463>();
  hw_uint<16> stg14_lane_29 = stg14.extract<464, 479>();
  hw_uint<16> stg14_lane_30 = stg14.extract<480, 495>();
  hw_uint<16> stg14_lane_31 = stg14.extract<496, 511>();

	
  hw_uint<16 > stg14_lane_0_pack;
  set_at<0, 16, 16>(stg14_lane_0_pack, stg14_lane_0);
  auto res_jac9_32_update_0_sm16_01041 = jac9_32_generated_compute_unrolled_1(stg14_lane_0_pack);

  hw_uint<16 > stg14_lane_1_pack;
  set_at<0, 16, 16>(stg14_lane_1_pack, stg14_lane_1);
  auto res_jac9_32_update_0_sm16_11043 = jac9_32_generated_compute_unrolled_1(stg14_lane_1_pack);

  hw_uint<16 > stg14_lane_2_pack;
  set_at<0, 16, 16>(stg14_lane_2_pack, stg14_lane_2);
  auto res_jac9_32_update_0_sm16_21045 = jac9_32_generated_compute_unrolled_1(stg14_lane_2_pack);

  hw_uint<16 > stg14_lane_3_pack;
  set_at<0, 16, 16>(stg14_lane_3_pack, stg14_lane_3);
  auto res_jac9_32_update_0_sm16_31047 = jac9_32_generated_compute_unrolled_1(stg14_lane_3_pack);

  hw_uint<16 > stg14_lane_4_pack;
  set_at<0, 16, 16>(stg14_lane_4_pack, stg14_lane_4);
  auto res_jac9_32_update_0_sm16_41049 = jac9_32_generated_compute_unrolled_1(stg14_lane_4_pack);

  hw_uint<16 > stg14_lane_5_pack;
  set_at<0, 16, 16>(stg14_lane_5_pack, stg14_lane_5);
  auto res_jac9_32_update_0_sm16_51051 = jac9_32_generated_compute_unrolled_1(stg14_lane_5_pack);

  hw_uint<16 > stg14_lane_6_pack;
  set_at<0, 16, 16>(stg14_lane_6_pack, stg14_lane_6);
  auto res_jac9_32_update_0_sm16_61053 = jac9_32_generated_compute_unrolled_1(stg14_lane_6_pack);

  hw_uint<16 > stg14_lane_7_pack;
  set_at<0, 16, 16>(stg14_lane_7_pack, stg14_lane_7);
  auto res_jac9_32_update_0_sm16_71055 = jac9_32_generated_compute_unrolled_1(stg14_lane_7_pack);

  hw_uint<16 > stg14_lane_8_pack;
  set_at<0, 16, 16>(stg14_lane_8_pack, stg14_lane_8);
  auto res_jac9_32_update_0_sm16_81057 = jac9_32_generated_compute_unrolled_1(stg14_lane_8_pack);

  hw_uint<16 > stg14_lane_9_pack;
  set_at<0, 16, 16>(stg14_lane_9_pack, stg14_lane_9);
  auto res_jac9_32_update_0_sm16_91059 = jac9_32_generated_compute_unrolled_1(stg14_lane_9_pack);

  hw_uint<16 > stg14_lane_10_pack;
  set_at<0, 16, 16>(stg14_lane_10_pack, stg14_lane_10);
  auto res_jac9_32_update_0_sm16_101061 = jac9_32_generated_compute_unrolled_1(stg14_lane_10_pack);

  hw_uint<16 > stg14_lane_11_pack;
  set_at<0, 16, 16>(stg14_lane_11_pack, stg14_lane_11);
  auto res_jac9_32_update_0_sm16_111063 = jac9_32_generated_compute_unrolled_1(stg14_lane_11_pack);

  hw_uint<16 > stg14_lane_12_pack;
  set_at<0, 16, 16>(stg14_lane_12_pack, stg14_lane_12);
  auto res_jac9_32_update_0_sm16_121065 = jac9_32_generated_compute_unrolled_1(stg14_lane_12_pack);

  hw_uint<16 > stg14_lane_13_pack;
  set_at<0, 16, 16>(stg14_lane_13_pack, stg14_lane_13);
  auto res_jac9_32_update_0_sm16_131067 = jac9_32_generated_compute_unrolled_1(stg14_lane_13_pack);

  hw_uint<16 > stg14_lane_14_pack;
  set_at<0, 16, 16>(stg14_lane_14_pack, stg14_lane_14);
  auto res_jac9_32_update_0_sm16_141069 = jac9_32_generated_compute_unrolled_1(stg14_lane_14_pack);

  hw_uint<16 > stg14_lane_15_pack;
  set_at<0, 16, 16>(stg14_lane_15_pack, stg14_lane_15);
  auto res_jac9_32_update_0_sm16_151071 = jac9_32_generated_compute_unrolled_1(stg14_lane_15_pack);

  hw_uint<16 > stg14_lane_16_pack;
  set_at<0, 16, 16>(stg14_lane_16_pack, stg14_lane_16);
  auto res_jac9_32_update_0_sm16_161073 = jac9_32_generated_compute_unrolled_1(stg14_lane_16_pack);

  hw_uint<16 > stg14_lane_17_pack;
  set_at<0, 16, 16>(stg14_lane_17_pack, stg14_lane_17);
  auto res_jac9_32_update_0_sm16_171075 = jac9_32_generated_compute_unrolled_1(stg14_lane_17_pack);

  hw_uint<16 > stg14_lane_18_pack;
  set_at<0, 16, 16>(stg14_lane_18_pack, stg14_lane_18);
  auto res_jac9_32_update_0_sm16_181077 = jac9_32_generated_compute_unrolled_1(stg14_lane_18_pack);

  hw_uint<16 > stg14_lane_19_pack;
  set_at<0, 16, 16>(stg14_lane_19_pack, stg14_lane_19);
  auto res_jac9_32_update_0_sm16_191079 = jac9_32_generated_compute_unrolled_1(stg14_lane_19_pack);

  hw_uint<16 > stg14_lane_20_pack;
  set_at<0, 16, 16>(stg14_lane_20_pack, stg14_lane_20);
  auto res_jac9_32_update_0_sm16_201081 = jac9_32_generated_compute_unrolled_1(stg14_lane_20_pack);

  hw_uint<16 > stg14_lane_21_pack;
  set_at<0, 16, 16>(stg14_lane_21_pack, stg14_lane_21);
  auto res_jac9_32_update_0_sm16_211083 = jac9_32_generated_compute_unrolled_1(stg14_lane_21_pack);

  hw_uint<16 > stg14_lane_22_pack;
  set_at<0, 16, 16>(stg14_lane_22_pack, stg14_lane_22);
  auto res_jac9_32_update_0_sm16_221085 = jac9_32_generated_compute_unrolled_1(stg14_lane_22_pack);

  hw_uint<16 > stg14_lane_23_pack;
  set_at<0, 16, 16>(stg14_lane_23_pack, stg14_lane_23);
  auto res_jac9_32_update_0_sm16_231087 = jac9_32_generated_compute_unrolled_1(stg14_lane_23_pack);

  hw_uint<16 > stg14_lane_24_pack;
  set_at<0, 16, 16>(stg14_lane_24_pack, stg14_lane_24);
  auto res_jac9_32_update_0_sm16_241089 = jac9_32_generated_compute_unrolled_1(stg14_lane_24_pack);

  hw_uint<16 > stg14_lane_25_pack;
  set_at<0, 16, 16>(stg14_lane_25_pack, stg14_lane_25);
  auto res_jac9_32_update_0_sm16_251091 = jac9_32_generated_compute_unrolled_1(stg14_lane_25_pack);

  hw_uint<16 > stg14_lane_26_pack;
  set_at<0, 16, 16>(stg14_lane_26_pack, stg14_lane_26);
  auto res_jac9_32_update_0_sm16_261093 = jac9_32_generated_compute_unrolled_1(stg14_lane_26_pack);

  hw_uint<16 > stg14_lane_27_pack;
  set_at<0, 16, 16>(stg14_lane_27_pack, stg14_lane_27);
  auto res_jac9_32_update_0_sm16_271095 = jac9_32_generated_compute_unrolled_1(stg14_lane_27_pack);

  hw_uint<16 > stg14_lane_28_pack;
  set_at<0, 16, 16>(stg14_lane_28_pack, stg14_lane_28);
  auto res_jac9_32_update_0_sm16_281097 = jac9_32_generated_compute_unrolled_1(stg14_lane_28_pack);

  hw_uint<16 > stg14_lane_29_pack;
  set_at<0, 16, 16>(stg14_lane_29_pack, stg14_lane_29);
  auto res_jac9_32_update_0_sm16_291099 = jac9_32_generated_compute_unrolled_1(stg14_lane_29_pack);

  hw_uint<16 > stg14_lane_30_pack;
  set_at<0, 16, 16>(stg14_lane_30_pack, stg14_lane_30);
  auto res_jac9_32_update_0_sm16_301101 = jac9_32_generated_compute_unrolled_1(stg14_lane_30_pack);

  hw_uint<16 > stg14_lane_31_pack;
  set_at<0, 16, 16>(stg14_lane_31_pack, stg14_lane_31);
  auto res_jac9_32_update_0_sm16_311103 = jac9_32_generated_compute_unrolled_1(stg14_lane_31_pack);
  hw_uint<512 > return_value1154;
  set_at<0, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_01041);
  set_at<16, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_11043);
  set_at<32, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_21045);
  set_at<48, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_31047);
  set_at<64, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_41049);
  set_at<80, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_51051);
  set_at<96, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_61053);
  set_at<112, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_71055);
  set_at<128, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_81057);
  set_at<144, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_91059);
  set_at<160, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_101061);
  set_at<176, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_111063);
  set_at<192, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_121065);
  set_at<208, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_131067);
  set_at<224, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_141069);
  set_at<240, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_151071);
  set_at<256, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_161073);
  set_at<272, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_171075);
  set_at<288, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_181077);
  set_at<304, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_191079);
  set_at<320, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_201081);
  set_at<336, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_211083);
  set_at<352, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_221085);
  set_at<368, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_231087);
  set_at<384, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_241089);
  set_at<400, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_251091);
  set_at<416, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_261093);
  set_at<432, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_271095);
  set_at<448, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_281097);
  set_at<464, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_291099);
  set_at<480, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_301101);
  set_at<496, 512, 16>(return_value1154, res_jac9_32_update_0_sm16_311103);
  return return_value1154;

}

