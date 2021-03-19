#include "jac9_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> stg8_to_gp_16112_ld117_cu3313(hw_uint<16*32>& stg8_to_gp_16112) {
  return stg8_to_gp_16112;
}

hw_uint<512> stg9_to_gp_3120_ld125_cu3315(hw_uint<16*32>& stg9_to_gp_3120) {
  return stg9_to_gp_3120;
}

hw_uint<512> stg9_ld121_cu3317(hw_uint<16*32>& stg9) {
  return stg9;
}

hw_uint<512> stg14_to_gp_156_ld61_cu3319(hw_uint<16*32>& stg14_to_gp_156) {
  return stg14_to_gp_156;
}

hw_uint<512> stg11_to_gp_532_ld37_cu3321(hw_uint<16*32>& stg11_to_gp_532) {
  return stg11_to_gp_532;
}

hw_uint<512> stg2_to_gp_1064_ld69_cu3323(hw_uint<16*32>& stg2_to_gp_1064) {
  return stg2_to_gp_1064;
}

hw_uint<512> stg0_ld9_cu3325(hw_uint<16*32>& stg0) {
  return stg0;
}

hw_uint<512> stg12_to_gp_640_ld45_cu3327(hw_uint<16*32>& stg12_to_gp_640) {
  return stg12_to_gp_640;
}

hw_uint<512> stg13_ld49_cu3329(hw_uint<16*32>& stg13) {
  return stg13;
}

hw_uint<512> stg6_1_cu3331(hw_uint<16*128>& stg5_FIFO_buf92) {
  hw_uint<16> stg5_FIFO_buf92_lane_0 = stg5_FIFO_buf92.extract<0, 15>();
  hw_uint<16> stg5_FIFO_buf92_lane_1 = stg5_FIFO_buf92.extract<16, 31>();
  hw_uint<16> stg5_FIFO_buf92_lane_2 = stg5_FIFO_buf92.extract<32, 47>();
  hw_uint<16> stg5_FIFO_buf92_lane_3 = stg5_FIFO_buf92.extract<48, 63>();
  hw_uint<16> stg5_FIFO_buf92_lane_4 = stg5_FIFO_buf92.extract<64, 79>();
  hw_uint<16> stg5_FIFO_buf92_lane_5 = stg5_FIFO_buf92.extract<80, 95>();
  hw_uint<16> stg5_FIFO_buf92_lane_6 = stg5_FIFO_buf92.extract<96, 111>();
  hw_uint<16> stg5_FIFO_buf92_lane_7 = stg5_FIFO_buf92.extract<112, 127>();
  hw_uint<16> stg5_FIFO_buf92_lane_8 = stg5_FIFO_buf92.extract<128, 143>();
  hw_uint<16> stg5_FIFO_buf92_lane_9 = stg5_FIFO_buf92.extract<144, 159>();
  hw_uint<16> stg5_FIFO_buf92_lane_10 = stg5_FIFO_buf92.extract<160, 175>();
  hw_uint<16> stg5_FIFO_buf92_lane_11 = stg5_FIFO_buf92.extract<176, 191>();
  hw_uint<16> stg5_FIFO_buf92_lane_12 = stg5_FIFO_buf92.extract<192, 207>();
  hw_uint<16> stg5_FIFO_buf92_lane_13 = stg5_FIFO_buf92.extract<208, 223>();
  hw_uint<16> stg5_FIFO_buf92_lane_14 = stg5_FIFO_buf92.extract<224, 239>();
  hw_uint<16> stg5_FIFO_buf92_lane_15 = stg5_FIFO_buf92.extract<240, 255>();
  hw_uint<16> stg5_FIFO_buf92_lane_16 = stg5_FIFO_buf92.extract<256, 271>();
  hw_uint<16> stg5_FIFO_buf92_lane_17 = stg5_FIFO_buf92.extract<272, 287>();
  hw_uint<16> stg5_FIFO_buf92_lane_18 = stg5_FIFO_buf92.extract<288, 303>();
  hw_uint<16> stg5_FIFO_buf92_lane_19 = stg5_FIFO_buf92.extract<304, 319>();
  hw_uint<16> stg5_FIFO_buf92_lane_20 = stg5_FIFO_buf92.extract<320, 335>();
  hw_uint<16> stg5_FIFO_buf92_lane_21 = stg5_FIFO_buf92.extract<336, 351>();
  hw_uint<16> stg5_FIFO_buf92_lane_22 = stg5_FIFO_buf92.extract<352, 367>();
  hw_uint<16> stg5_FIFO_buf92_lane_23 = stg5_FIFO_buf92.extract<368, 383>();
  hw_uint<16> stg5_FIFO_buf92_lane_24 = stg5_FIFO_buf92.extract<384, 399>();
  hw_uint<16> stg5_FIFO_buf92_lane_25 = stg5_FIFO_buf92.extract<400, 415>();
  hw_uint<16> stg5_FIFO_buf92_lane_26 = stg5_FIFO_buf92.extract<416, 431>();
  hw_uint<16> stg5_FIFO_buf92_lane_27 = stg5_FIFO_buf92.extract<432, 447>();
  hw_uint<16> stg5_FIFO_buf92_lane_28 = stg5_FIFO_buf92.extract<448, 463>();
  hw_uint<16> stg5_FIFO_buf92_lane_29 = stg5_FIFO_buf92.extract<464, 479>();
  hw_uint<16> stg5_FIFO_buf92_lane_30 = stg5_FIFO_buf92.extract<480, 495>();
  hw_uint<16> stg5_FIFO_buf92_lane_31 = stg5_FIFO_buf92.extract<496, 511>();
  hw_uint<16> stg5_FIFO_buf92_lane_32 = stg5_FIFO_buf92.extract<512, 527>();
  hw_uint<16> stg5_FIFO_buf92_lane_33 = stg5_FIFO_buf92.extract<528, 543>();
  hw_uint<16> stg5_FIFO_buf92_lane_34 = stg5_FIFO_buf92.extract<544, 559>();
  hw_uint<16> stg5_FIFO_buf92_lane_35 = stg5_FIFO_buf92.extract<560, 575>();
  hw_uint<16> stg5_FIFO_buf92_lane_36 = stg5_FIFO_buf92.extract<576, 591>();
  hw_uint<16> stg5_FIFO_buf92_lane_37 = stg5_FIFO_buf92.extract<592, 607>();
  hw_uint<16> stg5_FIFO_buf92_lane_38 = stg5_FIFO_buf92.extract<608, 623>();
  hw_uint<16> stg5_FIFO_buf92_lane_39 = stg5_FIFO_buf92.extract<624, 639>();
  hw_uint<16> stg5_FIFO_buf92_lane_40 = stg5_FIFO_buf92.extract<640, 655>();
  hw_uint<16> stg5_FIFO_buf92_lane_41 = stg5_FIFO_buf92.extract<656, 671>();
  hw_uint<16> stg5_FIFO_buf92_lane_42 = stg5_FIFO_buf92.extract<672, 687>();
  hw_uint<16> stg5_FIFO_buf92_lane_43 = stg5_FIFO_buf92.extract<688, 703>();
  hw_uint<16> stg5_FIFO_buf92_lane_44 = stg5_FIFO_buf92.extract<704, 719>();
  hw_uint<16> stg5_FIFO_buf92_lane_45 = stg5_FIFO_buf92.extract<720, 735>();
  hw_uint<16> stg5_FIFO_buf92_lane_46 = stg5_FIFO_buf92.extract<736, 751>();
  hw_uint<16> stg5_FIFO_buf92_lane_47 = stg5_FIFO_buf92.extract<752, 767>();
  hw_uint<16> stg5_FIFO_buf92_lane_48 = stg5_FIFO_buf92.extract<768, 783>();
  hw_uint<16> stg5_FIFO_buf92_lane_49 = stg5_FIFO_buf92.extract<784, 799>();
  hw_uint<16> stg5_FIFO_buf92_lane_50 = stg5_FIFO_buf92.extract<800, 815>();
  hw_uint<16> stg5_FIFO_buf92_lane_51 = stg5_FIFO_buf92.extract<816, 831>();
  hw_uint<16> stg5_FIFO_buf92_lane_52 = stg5_FIFO_buf92.extract<832, 847>();
  hw_uint<16> stg5_FIFO_buf92_lane_53 = stg5_FIFO_buf92.extract<848, 863>();
  hw_uint<16> stg5_FIFO_buf92_lane_54 = stg5_FIFO_buf92.extract<864, 879>();
  hw_uint<16> stg5_FIFO_buf92_lane_55 = stg5_FIFO_buf92.extract<880, 895>();
  hw_uint<16> stg5_FIFO_buf92_lane_56 = stg5_FIFO_buf92.extract<896, 911>();
  hw_uint<16> stg5_FIFO_buf92_lane_57 = stg5_FIFO_buf92.extract<912, 927>();
  hw_uint<16> stg5_FIFO_buf92_lane_58 = stg5_FIFO_buf92.extract<928, 943>();
  hw_uint<16> stg5_FIFO_buf92_lane_59 = stg5_FIFO_buf92.extract<944, 959>();
  hw_uint<16> stg5_FIFO_buf92_lane_60 = stg5_FIFO_buf92.extract<960, 975>();
  hw_uint<16> stg5_FIFO_buf92_lane_61 = stg5_FIFO_buf92.extract<976, 991>();
  hw_uint<16> stg5_FIFO_buf92_lane_62 = stg5_FIFO_buf92.extract<992, 1007>();
  hw_uint<16> stg5_FIFO_buf92_lane_63 = stg5_FIFO_buf92.extract<1008, 1023>();
  hw_uint<16> stg5_FIFO_buf92_lane_64 = stg5_FIFO_buf92.extract<1024, 1039>();
  hw_uint<16> stg5_FIFO_buf92_lane_65 = stg5_FIFO_buf92.extract<1040, 1055>();
  hw_uint<16> stg5_FIFO_buf92_lane_66 = stg5_FIFO_buf92.extract<1056, 1071>();
  hw_uint<16> stg5_FIFO_buf92_lane_67 = stg5_FIFO_buf92.extract<1072, 1087>();
  hw_uint<16> stg5_FIFO_buf92_lane_68 = stg5_FIFO_buf92.extract<1088, 1103>();
  hw_uint<16> stg5_FIFO_buf92_lane_69 = stg5_FIFO_buf92.extract<1104, 1119>();
  hw_uint<16> stg5_FIFO_buf92_lane_70 = stg5_FIFO_buf92.extract<1120, 1135>();
  hw_uint<16> stg5_FIFO_buf92_lane_71 = stg5_FIFO_buf92.extract<1136, 1151>();
  hw_uint<16> stg5_FIFO_buf92_lane_72 = stg5_FIFO_buf92.extract<1152, 1167>();
  hw_uint<16> stg5_FIFO_buf92_lane_73 = stg5_FIFO_buf92.extract<1168, 1183>();
  hw_uint<16> stg5_FIFO_buf92_lane_74 = stg5_FIFO_buf92.extract<1184, 1199>();
  hw_uint<16> stg5_FIFO_buf92_lane_75 = stg5_FIFO_buf92.extract<1200, 1215>();
  hw_uint<16> stg5_FIFO_buf92_lane_76 = stg5_FIFO_buf92.extract<1216, 1231>();
  hw_uint<16> stg5_FIFO_buf92_lane_77 = stg5_FIFO_buf92.extract<1232, 1247>();
  hw_uint<16> stg5_FIFO_buf92_lane_78 = stg5_FIFO_buf92.extract<1248, 1263>();
  hw_uint<16> stg5_FIFO_buf92_lane_79 = stg5_FIFO_buf92.extract<1264, 1279>();
  hw_uint<16> stg5_FIFO_buf92_lane_80 = stg5_FIFO_buf92.extract<1280, 1295>();
  hw_uint<16> stg5_FIFO_buf92_lane_81 = stg5_FIFO_buf92.extract<1296, 1311>();
  hw_uint<16> stg5_FIFO_buf92_lane_82 = stg5_FIFO_buf92.extract<1312, 1327>();
  hw_uint<16> stg5_FIFO_buf92_lane_83 = stg5_FIFO_buf92.extract<1328, 1343>();
  hw_uint<16> stg5_FIFO_buf92_lane_84 = stg5_FIFO_buf92.extract<1344, 1359>();
  hw_uint<16> stg5_FIFO_buf92_lane_85 = stg5_FIFO_buf92.extract<1360, 1375>();
  hw_uint<16> stg5_FIFO_buf92_lane_86 = stg5_FIFO_buf92.extract<1376, 1391>();
  hw_uint<16> stg5_FIFO_buf92_lane_87 = stg5_FIFO_buf92.extract<1392, 1407>();
  hw_uint<16> stg5_FIFO_buf92_lane_88 = stg5_FIFO_buf92.extract<1408, 1423>();
  hw_uint<16> stg5_FIFO_buf92_lane_89 = stg5_FIFO_buf92.extract<1424, 1439>();
  hw_uint<16> stg5_FIFO_buf92_lane_90 = stg5_FIFO_buf92.extract<1440, 1455>();
  hw_uint<16> stg5_FIFO_buf92_lane_91 = stg5_FIFO_buf92.extract<1456, 1471>();
  hw_uint<16> stg5_FIFO_buf92_lane_92 = stg5_FIFO_buf92.extract<1472, 1487>();
  hw_uint<16> stg5_FIFO_buf92_lane_93 = stg5_FIFO_buf92.extract<1488, 1503>();
  hw_uint<16> stg5_FIFO_buf92_lane_94 = stg5_FIFO_buf92.extract<1504, 1519>();
  hw_uint<16> stg5_FIFO_buf92_lane_95 = stg5_FIFO_buf92.extract<1520, 1535>();
  hw_uint<16> stg5_FIFO_buf92_lane_96 = stg5_FIFO_buf92.extract<1536, 1551>();
  hw_uint<16> stg5_FIFO_buf92_lane_97 = stg5_FIFO_buf92.extract<1552, 1567>();
  hw_uint<16> stg5_FIFO_buf92_lane_98 = stg5_FIFO_buf92.extract<1568, 1583>();
  hw_uint<16> stg5_FIFO_buf92_lane_99 = stg5_FIFO_buf92.extract<1584, 1599>();
  hw_uint<16> stg5_FIFO_buf92_lane_100 = stg5_FIFO_buf92.extract<1600, 1615>();
  hw_uint<16> stg5_FIFO_buf92_lane_101 = stg5_FIFO_buf92.extract<1616, 1631>();
  hw_uint<16> stg5_FIFO_buf92_lane_102 = stg5_FIFO_buf92.extract<1632, 1647>();
  hw_uint<16> stg5_FIFO_buf92_lane_103 = stg5_FIFO_buf92.extract<1648, 1663>();
  hw_uint<16> stg5_FIFO_buf92_lane_104 = stg5_FIFO_buf92.extract<1664, 1679>();
  hw_uint<16> stg5_FIFO_buf92_lane_105 = stg5_FIFO_buf92.extract<1680, 1695>();
  hw_uint<16> stg5_FIFO_buf92_lane_106 = stg5_FIFO_buf92.extract<1696, 1711>();
  hw_uint<16> stg5_FIFO_buf92_lane_107 = stg5_FIFO_buf92.extract<1712, 1727>();
  hw_uint<16> stg5_FIFO_buf92_lane_108 = stg5_FIFO_buf92.extract<1728, 1743>();
  hw_uint<16> stg5_FIFO_buf92_lane_109 = stg5_FIFO_buf92.extract<1744, 1759>();
  hw_uint<16> stg5_FIFO_buf92_lane_110 = stg5_FIFO_buf92.extract<1760, 1775>();
  hw_uint<16> stg5_FIFO_buf92_lane_111 = stg5_FIFO_buf92.extract<1776, 1791>();
  hw_uint<16> stg5_FIFO_buf92_lane_112 = stg5_FIFO_buf92.extract<1792, 1807>();
  hw_uint<16> stg5_FIFO_buf92_lane_113 = stg5_FIFO_buf92.extract<1808, 1823>();
  hw_uint<16> stg5_FIFO_buf92_lane_114 = stg5_FIFO_buf92.extract<1824, 1839>();
  hw_uint<16> stg5_FIFO_buf92_lane_115 = stg5_FIFO_buf92.extract<1840, 1855>();
  hw_uint<16> stg5_FIFO_buf92_lane_116 = stg5_FIFO_buf92.extract<1856, 1871>();
  hw_uint<16> stg5_FIFO_buf92_lane_117 = stg5_FIFO_buf92.extract<1872, 1887>();
  hw_uint<16> stg5_FIFO_buf92_lane_118 = stg5_FIFO_buf92.extract<1888, 1903>();
  hw_uint<16> stg5_FIFO_buf92_lane_119 = stg5_FIFO_buf92.extract<1904, 1919>();
  hw_uint<16> stg5_FIFO_buf92_lane_120 = stg5_FIFO_buf92.extract<1920, 1935>();
  hw_uint<16> stg5_FIFO_buf92_lane_121 = stg5_FIFO_buf92.extract<1936, 1951>();
  hw_uint<16> stg5_FIFO_buf92_lane_122 = stg5_FIFO_buf92.extract<1952, 1967>();
  hw_uint<16> stg5_FIFO_buf92_lane_123 = stg5_FIFO_buf92.extract<1968, 1983>();
  hw_uint<16> stg5_FIFO_buf92_lane_124 = stg5_FIFO_buf92.extract<1984, 1999>();
  hw_uint<16> stg5_FIFO_buf92_lane_125 = stg5_FIFO_buf92.extract<2000, 2015>();
  hw_uint<16> stg5_FIFO_buf92_lane_126 = stg5_FIFO_buf92.extract<2016, 2031>();
  hw_uint<16> stg5_FIFO_buf92_lane_127 = stg5_FIFO_buf92.extract<2032, 2047>();

	
  hw_uint<64 > stg5_FIFO_buf92_lane_3_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_0);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_1);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_2);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_3);
  auto res_stg6_update_0_sm137_0753 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_3_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_7_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_4);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_5);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_6);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_7);
  auto res_stg6_update_0_sm137_1755 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_7_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_11_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_8);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_9);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_10);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_11);
  auto res_stg6_update_0_sm137_2757 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_11_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_15_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_12);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_13);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_14);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_15);
  auto res_stg6_update_0_sm137_3759 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_15_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_19_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_16);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_17);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_18);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_19);
  auto res_stg6_update_0_sm137_4761 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_19_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_23_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_20);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_21);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_22);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_23);
  auto res_stg6_update_0_sm137_5763 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_23_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_27_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_24);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_25);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_26);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_27);
  auto res_stg6_update_0_sm137_6765 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_27_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_31_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_28);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_29);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_30);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_31);
  auto res_stg6_update_0_sm137_7767 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_31_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_35_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_32);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_33);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_34);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_35);
  auto res_stg6_update_0_sm137_8769 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_35_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_39_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_36);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_37);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_38);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_39);
  auto res_stg6_update_0_sm137_9771 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_39_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_43_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_40);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_41);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_42);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_43);
  auto res_stg6_update_0_sm137_10773 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_43_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_47_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_44);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_45);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_46);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_47);
  auto res_stg6_update_0_sm137_11775 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_47_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_51_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_48);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_49);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_50);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_51);
  auto res_stg6_update_0_sm137_12777 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_51_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_55_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_52);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_53);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_54);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_55);
  auto res_stg6_update_0_sm137_13779 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_55_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_59_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_56);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_57);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_58);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_59);
  auto res_stg6_update_0_sm137_14781 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_59_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_63_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_60);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_61);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_62);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_63);
  auto res_stg6_update_0_sm137_15783 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_63_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_67_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_64);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_65);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_66);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_67);
  auto res_stg6_update_0_sm137_16785 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_67_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_71_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_68);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_69);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_70);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_71);
  auto res_stg6_update_0_sm137_17787 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_71_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_75_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_72);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_73);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_74);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_75);
  auto res_stg6_update_0_sm137_18789 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_75_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_79_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_76);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_77);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_78);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_79);
  auto res_stg6_update_0_sm137_19791 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_79_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_83_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_80);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_81);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_82);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_83);
  auto res_stg6_update_0_sm137_20793 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_83_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_87_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_84);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_85);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_86);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_87);
  auto res_stg6_update_0_sm137_21795 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_87_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_91_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_88);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_89);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_90);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_91);
  auto res_stg6_update_0_sm137_22797 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_91_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_95_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_92);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_93);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_94);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_95);
  auto res_stg6_update_0_sm137_23799 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_95_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_99_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_96);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_97);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_98);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_99);
  auto res_stg6_update_0_sm137_24801 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_99_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_103_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_100);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_101);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_102);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_103);
  auto res_stg6_update_0_sm137_25803 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_103_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_107_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_104);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_105);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_106);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_107);
  auto res_stg6_update_0_sm137_26805 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_107_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_111_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_108);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_109);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_110);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_111);
  auto res_stg6_update_0_sm137_27807 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_111_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_115_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_112);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_113);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_114);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_115);
  auto res_stg6_update_0_sm137_28809 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_115_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_119_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_116);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_117);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_118);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_119);
  auto res_stg6_update_0_sm137_29811 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_119_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_123_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_120);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_121);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_122);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_123);
  auto res_stg6_update_0_sm137_30813 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_123_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_127_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_124);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_125);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_126);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_127);
  auto res_stg6_update_0_sm137_31815 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_127_pack);
  hw_uint<512 > return_value3332;
  set_at<0, 512, 16>(return_value3332, res_stg6_update_0_sm137_0753);
  set_at<16, 512, 16>(return_value3332, res_stg6_update_0_sm137_1755);
  set_at<32, 512, 16>(return_value3332, res_stg6_update_0_sm137_2757);
  set_at<48, 512, 16>(return_value3332, res_stg6_update_0_sm137_3759);
  set_at<64, 512, 16>(return_value3332, res_stg6_update_0_sm137_4761);
  set_at<80, 512, 16>(return_value3332, res_stg6_update_0_sm137_5763);
  set_at<96, 512, 16>(return_value3332, res_stg6_update_0_sm137_6765);
  set_at<112, 512, 16>(return_value3332, res_stg6_update_0_sm137_7767);
  set_at<128, 512, 16>(return_value3332, res_stg6_update_0_sm137_8769);
  set_at<144, 512, 16>(return_value3332, res_stg6_update_0_sm137_9771);
  set_at<160, 512, 16>(return_value3332, res_stg6_update_0_sm137_10773);
  set_at<176, 512, 16>(return_value3332, res_stg6_update_0_sm137_11775);
  set_at<192, 512, 16>(return_value3332, res_stg6_update_0_sm137_12777);
  set_at<208, 512, 16>(return_value3332, res_stg6_update_0_sm137_13779);
  set_at<224, 512, 16>(return_value3332, res_stg6_update_0_sm137_14781);
  set_at<240, 512, 16>(return_value3332, res_stg6_update_0_sm137_15783);
  set_at<256, 512, 16>(return_value3332, res_stg6_update_0_sm137_16785);
  set_at<272, 512, 16>(return_value3332, res_stg6_update_0_sm137_17787);
  set_at<288, 512, 16>(return_value3332, res_stg6_update_0_sm137_18789);
  set_at<304, 512, 16>(return_value3332, res_stg6_update_0_sm137_19791);
  set_at<320, 512, 16>(return_value3332, res_stg6_update_0_sm137_20793);
  set_at<336, 512, 16>(return_value3332, res_stg6_update_0_sm137_21795);
  set_at<352, 512, 16>(return_value3332, res_stg6_update_0_sm137_22797);
  set_at<368, 512, 16>(return_value3332, res_stg6_update_0_sm137_23799);
  set_at<384, 512, 16>(return_value3332, res_stg6_update_0_sm137_24801);
  set_at<400, 512, 16>(return_value3332, res_stg6_update_0_sm137_25803);
  set_at<416, 512, 16>(return_value3332, res_stg6_update_0_sm137_26805);
  set_at<432, 512, 16>(return_value3332, res_stg6_update_0_sm137_27807);
  set_at<448, 512, 16>(return_value3332, res_stg6_update_0_sm137_28809);
  set_at<464, 512, 16>(return_value3332, res_stg6_update_0_sm137_29811);
  set_at<480, 512, 16>(return_value3332, res_stg6_update_0_sm137_30813);
  set_at<496, 512, 16>(return_value3332, res_stg6_update_0_sm137_31815);
  return return_value3332;

}

hw_uint<512> stg12_ld41_cu3334(hw_uint<16*32>& stg12) {
  return stg12;
}

hw_uint<512> stg7_1_cu3336(hw_uint<16*128>& stg6_FIFO_buf100) {
  hw_uint<16> stg6_FIFO_buf100_lane_0 = stg6_FIFO_buf100.extract<0, 15>();
  hw_uint<16> stg6_FIFO_buf100_lane_1 = stg6_FIFO_buf100.extract<16, 31>();
  hw_uint<16> stg6_FIFO_buf100_lane_2 = stg6_FIFO_buf100.extract<32, 47>();
  hw_uint<16> stg6_FIFO_buf100_lane_3 = stg6_FIFO_buf100.extract<48, 63>();
  hw_uint<16> stg6_FIFO_buf100_lane_4 = stg6_FIFO_buf100.extract<64, 79>();
  hw_uint<16> stg6_FIFO_buf100_lane_5 = stg6_FIFO_buf100.extract<80, 95>();
  hw_uint<16> stg6_FIFO_buf100_lane_6 = stg6_FIFO_buf100.extract<96, 111>();
  hw_uint<16> stg6_FIFO_buf100_lane_7 = stg6_FIFO_buf100.extract<112, 127>();
  hw_uint<16> stg6_FIFO_buf100_lane_8 = stg6_FIFO_buf100.extract<128, 143>();
  hw_uint<16> stg6_FIFO_buf100_lane_9 = stg6_FIFO_buf100.extract<144, 159>();
  hw_uint<16> stg6_FIFO_buf100_lane_10 = stg6_FIFO_buf100.extract<160, 175>();
  hw_uint<16> stg6_FIFO_buf100_lane_11 = stg6_FIFO_buf100.extract<176, 191>();
  hw_uint<16> stg6_FIFO_buf100_lane_12 = stg6_FIFO_buf100.extract<192, 207>();
  hw_uint<16> stg6_FIFO_buf100_lane_13 = stg6_FIFO_buf100.extract<208, 223>();
  hw_uint<16> stg6_FIFO_buf100_lane_14 = stg6_FIFO_buf100.extract<224, 239>();
  hw_uint<16> stg6_FIFO_buf100_lane_15 = stg6_FIFO_buf100.extract<240, 255>();
  hw_uint<16> stg6_FIFO_buf100_lane_16 = stg6_FIFO_buf100.extract<256, 271>();
  hw_uint<16> stg6_FIFO_buf100_lane_17 = stg6_FIFO_buf100.extract<272, 287>();
  hw_uint<16> stg6_FIFO_buf100_lane_18 = stg6_FIFO_buf100.extract<288, 303>();
  hw_uint<16> stg6_FIFO_buf100_lane_19 = stg6_FIFO_buf100.extract<304, 319>();
  hw_uint<16> stg6_FIFO_buf100_lane_20 = stg6_FIFO_buf100.extract<320, 335>();
  hw_uint<16> stg6_FIFO_buf100_lane_21 = stg6_FIFO_buf100.extract<336, 351>();
  hw_uint<16> stg6_FIFO_buf100_lane_22 = stg6_FIFO_buf100.extract<352, 367>();
  hw_uint<16> stg6_FIFO_buf100_lane_23 = stg6_FIFO_buf100.extract<368, 383>();
  hw_uint<16> stg6_FIFO_buf100_lane_24 = stg6_FIFO_buf100.extract<384, 399>();
  hw_uint<16> stg6_FIFO_buf100_lane_25 = stg6_FIFO_buf100.extract<400, 415>();
  hw_uint<16> stg6_FIFO_buf100_lane_26 = stg6_FIFO_buf100.extract<416, 431>();
  hw_uint<16> stg6_FIFO_buf100_lane_27 = stg6_FIFO_buf100.extract<432, 447>();
  hw_uint<16> stg6_FIFO_buf100_lane_28 = stg6_FIFO_buf100.extract<448, 463>();
  hw_uint<16> stg6_FIFO_buf100_lane_29 = stg6_FIFO_buf100.extract<464, 479>();
  hw_uint<16> stg6_FIFO_buf100_lane_30 = stg6_FIFO_buf100.extract<480, 495>();
  hw_uint<16> stg6_FIFO_buf100_lane_31 = stg6_FIFO_buf100.extract<496, 511>();
  hw_uint<16> stg6_FIFO_buf100_lane_32 = stg6_FIFO_buf100.extract<512, 527>();
  hw_uint<16> stg6_FIFO_buf100_lane_33 = stg6_FIFO_buf100.extract<528, 543>();
  hw_uint<16> stg6_FIFO_buf100_lane_34 = stg6_FIFO_buf100.extract<544, 559>();
  hw_uint<16> stg6_FIFO_buf100_lane_35 = stg6_FIFO_buf100.extract<560, 575>();
  hw_uint<16> stg6_FIFO_buf100_lane_36 = stg6_FIFO_buf100.extract<576, 591>();
  hw_uint<16> stg6_FIFO_buf100_lane_37 = stg6_FIFO_buf100.extract<592, 607>();
  hw_uint<16> stg6_FIFO_buf100_lane_38 = stg6_FIFO_buf100.extract<608, 623>();
  hw_uint<16> stg6_FIFO_buf100_lane_39 = stg6_FIFO_buf100.extract<624, 639>();
  hw_uint<16> stg6_FIFO_buf100_lane_40 = stg6_FIFO_buf100.extract<640, 655>();
  hw_uint<16> stg6_FIFO_buf100_lane_41 = stg6_FIFO_buf100.extract<656, 671>();
  hw_uint<16> stg6_FIFO_buf100_lane_42 = stg6_FIFO_buf100.extract<672, 687>();
  hw_uint<16> stg6_FIFO_buf100_lane_43 = stg6_FIFO_buf100.extract<688, 703>();
  hw_uint<16> stg6_FIFO_buf100_lane_44 = stg6_FIFO_buf100.extract<704, 719>();
  hw_uint<16> stg6_FIFO_buf100_lane_45 = stg6_FIFO_buf100.extract<720, 735>();
  hw_uint<16> stg6_FIFO_buf100_lane_46 = stg6_FIFO_buf100.extract<736, 751>();
  hw_uint<16> stg6_FIFO_buf100_lane_47 = stg6_FIFO_buf100.extract<752, 767>();
  hw_uint<16> stg6_FIFO_buf100_lane_48 = stg6_FIFO_buf100.extract<768, 783>();
  hw_uint<16> stg6_FIFO_buf100_lane_49 = stg6_FIFO_buf100.extract<784, 799>();
  hw_uint<16> stg6_FIFO_buf100_lane_50 = stg6_FIFO_buf100.extract<800, 815>();
  hw_uint<16> stg6_FIFO_buf100_lane_51 = stg6_FIFO_buf100.extract<816, 831>();
  hw_uint<16> stg6_FIFO_buf100_lane_52 = stg6_FIFO_buf100.extract<832, 847>();
  hw_uint<16> stg6_FIFO_buf100_lane_53 = stg6_FIFO_buf100.extract<848, 863>();
  hw_uint<16> stg6_FIFO_buf100_lane_54 = stg6_FIFO_buf100.extract<864, 879>();
  hw_uint<16> stg6_FIFO_buf100_lane_55 = stg6_FIFO_buf100.extract<880, 895>();
  hw_uint<16> stg6_FIFO_buf100_lane_56 = stg6_FIFO_buf100.extract<896, 911>();
  hw_uint<16> stg6_FIFO_buf100_lane_57 = stg6_FIFO_buf100.extract<912, 927>();
  hw_uint<16> stg6_FIFO_buf100_lane_58 = stg6_FIFO_buf100.extract<928, 943>();
  hw_uint<16> stg6_FIFO_buf100_lane_59 = stg6_FIFO_buf100.extract<944, 959>();
  hw_uint<16> stg6_FIFO_buf100_lane_60 = stg6_FIFO_buf100.extract<960, 975>();
  hw_uint<16> stg6_FIFO_buf100_lane_61 = stg6_FIFO_buf100.extract<976, 991>();
  hw_uint<16> stg6_FIFO_buf100_lane_62 = stg6_FIFO_buf100.extract<992, 1007>();
  hw_uint<16> stg6_FIFO_buf100_lane_63 = stg6_FIFO_buf100.extract<1008, 1023>();
  hw_uint<16> stg6_FIFO_buf100_lane_64 = stg6_FIFO_buf100.extract<1024, 1039>();
  hw_uint<16> stg6_FIFO_buf100_lane_65 = stg6_FIFO_buf100.extract<1040, 1055>();
  hw_uint<16> stg6_FIFO_buf100_lane_66 = stg6_FIFO_buf100.extract<1056, 1071>();
  hw_uint<16> stg6_FIFO_buf100_lane_67 = stg6_FIFO_buf100.extract<1072, 1087>();
  hw_uint<16> stg6_FIFO_buf100_lane_68 = stg6_FIFO_buf100.extract<1088, 1103>();
  hw_uint<16> stg6_FIFO_buf100_lane_69 = stg6_FIFO_buf100.extract<1104, 1119>();
  hw_uint<16> stg6_FIFO_buf100_lane_70 = stg6_FIFO_buf100.extract<1120, 1135>();
  hw_uint<16> stg6_FIFO_buf100_lane_71 = stg6_FIFO_buf100.extract<1136, 1151>();
  hw_uint<16> stg6_FIFO_buf100_lane_72 = stg6_FIFO_buf100.extract<1152, 1167>();
  hw_uint<16> stg6_FIFO_buf100_lane_73 = stg6_FIFO_buf100.extract<1168, 1183>();
  hw_uint<16> stg6_FIFO_buf100_lane_74 = stg6_FIFO_buf100.extract<1184, 1199>();
  hw_uint<16> stg6_FIFO_buf100_lane_75 = stg6_FIFO_buf100.extract<1200, 1215>();
  hw_uint<16> stg6_FIFO_buf100_lane_76 = stg6_FIFO_buf100.extract<1216, 1231>();
  hw_uint<16> stg6_FIFO_buf100_lane_77 = stg6_FIFO_buf100.extract<1232, 1247>();
  hw_uint<16> stg6_FIFO_buf100_lane_78 = stg6_FIFO_buf100.extract<1248, 1263>();
  hw_uint<16> stg6_FIFO_buf100_lane_79 = stg6_FIFO_buf100.extract<1264, 1279>();
  hw_uint<16> stg6_FIFO_buf100_lane_80 = stg6_FIFO_buf100.extract<1280, 1295>();
  hw_uint<16> stg6_FIFO_buf100_lane_81 = stg6_FIFO_buf100.extract<1296, 1311>();
  hw_uint<16> stg6_FIFO_buf100_lane_82 = stg6_FIFO_buf100.extract<1312, 1327>();
  hw_uint<16> stg6_FIFO_buf100_lane_83 = stg6_FIFO_buf100.extract<1328, 1343>();
  hw_uint<16> stg6_FIFO_buf100_lane_84 = stg6_FIFO_buf100.extract<1344, 1359>();
  hw_uint<16> stg6_FIFO_buf100_lane_85 = stg6_FIFO_buf100.extract<1360, 1375>();
  hw_uint<16> stg6_FIFO_buf100_lane_86 = stg6_FIFO_buf100.extract<1376, 1391>();
  hw_uint<16> stg6_FIFO_buf100_lane_87 = stg6_FIFO_buf100.extract<1392, 1407>();
  hw_uint<16> stg6_FIFO_buf100_lane_88 = stg6_FIFO_buf100.extract<1408, 1423>();
  hw_uint<16> stg6_FIFO_buf100_lane_89 = stg6_FIFO_buf100.extract<1424, 1439>();
  hw_uint<16> stg6_FIFO_buf100_lane_90 = stg6_FIFO_buf100.extract<1440, 1455>();
  hw_uint<16> stg6_FIFO_buf100_lane_91 = stg6_FIFO_buf100.extract<1456, 1471>();
  hw_uint<16> stg6_FIFO_buf100_lane_92 = stg6_FIFO_buf100.extract<1472, 1487>();
  hw_uint<16> stg6_FIFO_buf100_lane_93 = stg6_FIFO_buf100.extract<1488, 1503>();
  hw_uint<16> stg6_FIFO_buf100_lane_94 = stg6_FIFO_buf100.extract<1504, 1519>();
  hw_uint<16> stg6_FIFO_buf100_lane_95 = stg6_FIFO_buf100.extract<1520, 1535>();
  hw_uint<16> stg6_FIFO_buf100_lane_96 = stg6_FIFO_buf100.extract<1536, 1551>();
  hw_uint<16> stg6_FIFO_buf100_lane_97 = stg6_FIFO_buf100.extract<1552, 1567>();
  hw_uint<16> stg6_FIFO_buf100_lane_98 = stg6_FIFO_buf100.extract<1568, 1583>();
  hw_uint<16> stg6_FIFO_buf100_lane_99 = stg6_FIFO_buf100.extract<1584, 1599>();
  hw_uint<16> stg6_FIFO_buf100_lane_100 = stg6_FIFO_buf100.extract<1600, 1615>();
  hw_uint<16> stg6_FIFO_buf100_lane_101 = stg6_FIFO_buf100.extract<1616, 1631>();
  hw_uint<16> stg6_FIFO_buf100_lane_102 = stg6_FIFO_buf100.extract<1632, 1647>();
  hw_uint<16> stg6_FIFO_buf100_lane_103 = stg6_FIFO_buf100.extract<1648, 1663>();
  hw_uint<16> stg6_FIFO_buf100_lane_104 = stg6_FIFO_buf100.extract<1664, 1679>();
  hw_uint<16> stg6_FIFO_buf100_lane_105 = stg6_FIFO_buf100.extract<1680, 1695>();
  hw_uint<16> stg6_FIFO_buf100_lane_106 = stg6_FIFO_buf100.extract<1696, 1711>();
  hw_uint<16> stg6_FIFO_buf100_lane_107 = stg6_FIFO_buf100.extract<1712, 1727>();
  hw_uint<16> stg6_FIFO_buf100_lane_108 = stg6_FIFO_buf100.extract<1728, 1743>();
  hw_uint<16> stg6_FIFO_buf100_lane_109 = stg6_FIFO_buf100.extract<1744, 1759>();
  hw_uint<16> stg6_FIFO_buf100_lane_110 = stg6_FIFO_buf100.extract<1760, 1775>();
  hw_uint<16> stg6_FIFO_buf100_lane_111 = stg6_FIFO_buf100.extract<1776, 1791>();
  hw_uint<16> stg6_FIFO_buf100_lane_112 = stg6_FIFO_buf100.extract<1792, 1807>();
  hw_uint<16> stg6_FIFO_buf100_lane_113 = stg6_FIFO_buf100.extract<1808, 1823>();
  hw_uint<16> stg6_FIFO_buf100_lane_114 = stg6_FIFO_buf100.extract<1824, 1839>();
  hw_uint<16> stg6_FIFO_buf100_lane_115 = stg6_FIFO_buf100.extract<1840, 1855>();
  hw_uint<16> stg6_FIFO_buf100_lane_116 = stg6_FIFO_buf100.extract<1856, 1871>();
  hw_uint<16> stg6_FIFO_buf100_lane_117 = stg6_FIFO_buf100.extract<1872, 1887>();
  hw_uint<16> stg6_FIFO_buf100_lane_118 = stg6_FIFO_buf100.extract<1888, 1903>();
  hw_uint<16> stg6_FIFO_buf100_lane_119 = stg6_FIFO_buf100.extract<1904, 1919>();
  hw_uint<16> stg6_FIFO_buf100_lane_120 = stg6_FIFO_buf100.extract<1920, 1935>();
  hw_uint<16> stg6_FIFO_buf100_lane_121 = stg6_FIFO_buf100.extract<1936, 1951>();
  hw_uint<16> stg6_FIFO_buf100_lane_122 = stg6_FIFO_buf100.extract<1952, 1967>();
  hw_uint<16> stg6_FIFO_buf100_lane_123 = stg6_FIFO_buf100.extract<1968, 1983>();
  hw_uint<16> stg6_FIFO_buf100_lane_124 = stg6_FIFO_buf100.extract<1984, 1999>();
  hw_uint<16> stg6_FIFO_buf100_lane_125 = stg6_FIFO_buf100.extract<2000, 2015>();
  hw_uint<16> stg6_FIFO_buf100_lane_126 = stg6_FIFO_buf100.extract<2016, 2031>();
  hw_uint<16> stg6_FIFO_buf100_lane_127 = stg6_FIFO_buf100.extract<2032, 2047>();

	
  hw_uint<64 > stg6_FIFO_buf100_lane_3_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_0);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_1);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_2);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_3);
  auto res_stg7_update_0_sm139_0881 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_3_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_7_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_4);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_5);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_6);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_7);
  auto res_stg7_update_0_sm139_1883 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_7_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_11_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_8);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_9);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_10);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_11);
  auto res_stg7_update_0_sm139_2885 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_11_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_15_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_12);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_13);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_14);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_15);
  auto res_stg7_update_0_sm139_3887 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_15_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_19_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_16);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_17);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_18);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_19);
  auto res_stg7_update_0_sm139_4889 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_19_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_23_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_20);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_21);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_22);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_23);
  auto res_stg7_update_0_sm139_5891 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_23_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_27_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_24);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_25);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_26);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_27);
  auto res_stg7_update_0_sm139_6893 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_27_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_31_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_28);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_29);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_30);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_31);
  auto res_stg7_update_0_sm139_7895 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_31_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_35_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_32);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_33);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_34);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_35);
  auto res_stg7_update_0_sm139_8897 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_35_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_39_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_36);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_37);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_38);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_39);
  auto res_stg7_update_0_sm139_9899 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_39_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_43_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_40);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_41);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_42);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_43);
  auto res_stg7_update_0_sm139_10901 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_43_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_47_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_44);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_45);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_46);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_47);
  auto res_stg7_update_0_sm139_11903 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_47_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_51_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_48);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_49);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_50);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_51);
  auto res_stg7_update_0_sm139_12905 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_51_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_55_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_52);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_53);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_54);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_55);
  auto res_stg7_update_0_sm139_13907 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_55_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_59_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_56);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_57);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_58);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_59);
  auto res_stg7_update_0_sm139_14909 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_59_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_63_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_60);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_61);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_62);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_63);
  auto res_stg7_update_0_sm139_15911 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_63_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_67_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_64);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_65);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_66);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_67);
  auto res_stg7_update_0_sm139_16913 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_67_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_71_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_68);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_69);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_70);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_71);
  auto res_stg7_update_0_sm139_17915 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_71_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_75_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_72);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_73);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_74);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_75);
  auto res_stg7_update_0_sm139_18917 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_75_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_79_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_76);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_77);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_78);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_79);
  auto res_stg7_update_0_sm139_19919 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_79_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_83_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_80);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_81);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_82);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_83);
  auto res_stg7_update_0_sm139_20921 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_83_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_87_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_84);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_85);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_86);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_87);
  auto res_stg7_update_0_sm139_21923 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_87_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_91_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_88);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_89);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_90);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_91);
  auto res_stg7_update_0_sm139_22925 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_91_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_95_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_92);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_93);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_94);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_95);
  auto res_stg7_update_0_sm139_23927 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_95_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_99_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_96);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_97);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_98);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_99);
  auto res_stg7_update_0_sm139_24929 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_99_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_103_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_100);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_101);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_102);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_103);
  auto res_stg7_update_0_sm139_25931 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_103_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_107_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_104);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_105);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_106);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_107);
  auto res_stg7_update_0_sm139_26933 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_107_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_111_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_108);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_109);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_110);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_111);
  auto res_stg7_update_0_sm139_27935 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_111_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_115_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_112);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_113);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_114);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_115);
  auto res_stg7_update_0_sm139_28937 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_115_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_119_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_116);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_117);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_118);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_119);
  auto res_stg7_update_0_sm139_29939 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_119_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_123_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_120);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_121);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_122);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_123);
  auto res_stg7_update_0_sm139_30941 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_123_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_127_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_124);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_125);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_126);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_127);
  auto res_stg7_update_0_sm139_31943 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_127_pack);
  hw_uint<512 > return_value3337;
  set_at<0, 512, 16>(return_value3337, res_stg7_update_0_sm139_0881);
  set_at<16, 512, 16>(return_value3337, res_stg7_update_0_sm139_1883);
  set_at<32, 512, 16>(return_value3337, res_stg7_update_0_sm139_2885);
  set_at<48, 512, 16>(return_value3337, res_stg7_update_0_sm139_3887);
  set_at<64, 512, 16>(return_value3337, res_stg7_update_0_sm139_4889);
  set_at<80, 512, 16>(return_value3337, res_stg7_update_0_sm139_5891);
  set_at<96, 512, 16>(return_value3337, res_stg7_update_0_sm139_6893);
  set_at<112, 512, 16>(return_value3337, res_stg7_update_0_sm139_7895);
  set_at<128, 512, 16>(return_value3337, res_stg7_update_0_sm139_8897);
  set_at<144, 512, 16>(return_value3337, res_stg7_update_0_sm139_9899);
  set_at<160, 512, 16>(return_value3337, res_stg7_update_0_sm139_10901);
  set_at<176, 512, 16>(return_value3337, res_stg7_update_0_sm139_11903);
  set_at<192, 512, 16>(return_value3337, res_stg7_update_0_sm139_12905);
  set_at<208, 512, 16>(return_value3337, res_stg7_update_0_sm139_13907);
  set_at<224, 512, 16>(return_value3337, res_stg7_update_0_sm139_14909);
  set_at<240, 512, 16>(return_value3337, res_stg7_update_0_sm139_15911);
  set_at<256, 512, 16>(return_value3337, res_stg7_update_0_sm139_16913);
  set_at<272, 512, 16>(return_value3337, res_stg7_update_0_sm139_17915);
  set_at<288, 512, 16>(return_value3337, res_stg7_update_0_sm139_18917);
  set_at<304, 512, 16>(return_value3337, res_stg7_update_0_sm139_19919);
  set_at<320, 512, 16>(return_value3337, res_stg7_update_0_sm139_20921);
  set_at<336, 512, 16>(return_value3337, res_stg7_update_0_sm139_21923);
  set_at<352, 512, 16>(return_value3337, res_stg7_update_0_sm139_22925);
  set_at<368, 512, 16>(return_value3337, res_stg7_update_0_sm139_23927);
  set_at<384, 512, 16>(return_value3337, res_stg7_update_0_sm139_24929);
  set_at<400, 512, 16>(return_value3337, res_stg7_update_0_sm139_25931);
  set_at<416, 512, 16>(return_value3337, res_stg7_update_0_sm139_26933);
  set_at<432, 512, 16>(return_value3337, res_stg7_update_0_sm139_27935);
  set_at<448, 512, 16>(return_value3337, res_stg7_update_0_sm139_28937);
  set_at<464, 512, 16>(return_value3337, res_stg7_update_0_sm139_29939);
  set_at<480, 512, 16>(return_value3337, res_stg7_update_0_sm139_30941);
  set_at<496, 512, 16>(return_value3337, res_stg7_update_0_sm139_31943);
  return return_value3337;

}

hw_uint<512> stg2_ld65_cu3339(hw_uint<16*32>& stg2) {
  return stg2;
}

hw_uint<512> stg13_to_gp_748_ld53_cu3341(hw_uint<16*32>& stg13_to_gp_748) {
  return stg13_to_gp_748;
}

hw_uint<512> in_to_gp_20_ld5_cu3343(hw_uint<16*32>& in_to_gp_20) {
  return in_to_gp_20;
}

hw_uint<512> in_ld1_cu3345(hw_uint<16*32>& in) {
  return in;
}

hw_uint<512> stg14_ld57_cu3347(hw_uint<16*32>& stg14) {
  return stg14;
}

hw_uint<512> stg4_to_gp_1280_ld85_cu3349(hw_uint<16*32>& stg4_to_gp_1280) {
  return stg4_to_gp_1280;
}

hw_uint<512> stg10_to_gp_424_ld29_cu3351(hw_uint<16*32>& stg10_to_gp_424) {
  return stg10_to_gp_424;
}

hw_uint<512> stg11_ld33_cu3353(hw_uint<16*32>& stg11) {
  return stg11;
}

hw_uint<512> stg10_ld25_cu3355(hw_uint<16*32>& stg10) {
  return stg10;
}

hw_uint<512> stg1_to_gp_916_ld21_cu3357(hw_uint<16*32>& stg1_to_gp_916) {
  return stg1_to_gp_916;
}

hw_uint<512> stg3_ld73_cu3359(hw_uint<16*32>& stg3) {
  return stg3;
}

hw_uint<512> jac9_32_1_cu3361(hw_uint<16*32>& stg14_FIFO_buf60) {
  hw_uint<16> stg14_FIFO_buf60_lane_0 = stg14_FIFO_buf60.extract<0, 15>();
  hw_uint<16> stg14_FIFO_buf60_lane_1 = stg14_FIFO_buf60.extract<16, 31>();
  hw_uint<16> stg14_FIFO_buf60_lane_2 = stg14_FIFO_buf60.extract<32, 47>();
  hw_uint<16> stg14_FIFO_buf60_lane_3 = stg14_FIFO_buf60.extract<48, 63>();
  hw_uint<16> stg14_FIFO_buf60_lane_4 = stg14_FIFO_buf60.extract<64, 79>();
  hw_uint<16> stg14_FIFO_buf60_lane_5 = stg14_FIFO_buf60.extract<80, 95>();
  hw_uint<16> stg14_FIFO_buf60_lane_6 = stg14_FIFO_buf60.extract<96, 111>();
  hw_uint<16> stg14_FIFO_buf60_lane_7 = stg14_FIFO_buf60.extract<112, 127>();
  hw_uint<16> stg14_FIFO_buf60_lane_8 = stg14_FIFO_buf60.extract<128, 143>();
  hw_uint<16> stg14_FIFO_buf60_lane_9 = stg14_FIFO_buf60.extract<144, 159>();
  hw_uint<16> stg14_FIFO_buf60_lane_10 = stg14_FIFO_buf60.extract<160, 175>();
  hw_uint<16> stg14_FIFO_buf60_lane_11 = stg14_FIFO_buf60.extract<176, 191>();
  hw_uint<16> stg14_FIFO_buf60_lane_12 = stg14_FIFO_buf60.extract<192, 207>();
  hw_uint<16> stg14_FIFO_buf60_lane_13 = stg14_FIFO_buf60.extract<208, 223>();
  hw_uint<16> stg14_FIFO_buf60_lane_14 = stg14_FIFO_buf60.extract<224, 239>();
  hw_uint<16> stg14_FIFO_buf60_lane_15 = stg14_FIFO_buf60.extract<240, 255>();
  hw_uint<16> stg14_FIFO_buf60_lane_16 = stg14_FIFO_buf60.extract<256, 271>();
  hw_uint<16> stg14_FIFO_buf60_lane_17 = stg14_FIFO_buf60.extract<272, 287>();
  hw_uint<16> stg14_FIFO_buf60_lane_18 = stg14_FIFO_buf60.extract<288, 303>();
  hw_uint<16> stg14_FIFO_buf60_lane_19 = stg14_FIFO_buf60.extract<304, 319>();
  hw_uint<16> stg14_FIFO_buf60_lane_20 = stg14_FIFO_buf60.extract<320, 335>();
  hw_uint<16> stg14_FIFO_buf60_lane_21 = stg14_FIFO_buf60.extract<336, 351>();
  hw_uint<16> stg14_FIFO_buf60_lane_22 = stg14_FIFO_buf60.extract<352, 367>();
  hw_uint<16> stg14_FIFO_buf60_lane_23 = stg14_FIFO_buf60.extract<368, 383>();
  hw_uint<16> stg14_FIFO_buf60_lane_24 = stg14_FIFO_buf60.extract<384, 399>();
  hw_uint<16> stg14_FIFO_buf60_lane_25 = stg14_FIFO_buf60.extract<400, 415>();
  hw_uint<16> stg14_FIFO_buf60_lane_26 = stg14_FIFO_buf60.extract<416, 431>();
  hw_uint<16> stg14_FIFO_buf60_lane_27 = stg14_FIFO_buf60.extract<432, 447>();
  hw_uint<16> stg14_FIFO_buf60_lane_28 = stg14_FIFO_buf60.extract<448, 463>();
  hw_uint<16> stg14_FIFO_buf60_lane_29 = stg14_FIFO_buf60.extract<464, 479>();
  hw_uint<16> stg14_FIFO_buf60_lane_30 = stg14_FIFO_buf60.extract<480, 495>();
  hw_uint<16> stg14_FIFO_buf60_lane_31 = stg14_FIFO_buf60.extract<496, 511>();

	
  hw_uint<16 > stg14_FIFO_buf60_lane_0_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_0_pack, stg14_FIFO_buf60_lane_0);
  auto res_jac9_32_update_0_sm151_01649 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_0_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_1_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_1_pack, stg14_FIFO_buf60_lane_1);
  auto res_jac9_32_update_0_sm151_11651 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_1_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_2_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_2_pack, stg14_FIFO_buf60_lane_2);
  auto res_jac9_32_update_0_sm151_21653 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_2_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_3_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_3_pack, stg14_FIFO_buf60_lane_3);
  auto res_jac9_32_update_0_sm151_31655 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_3_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_4_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_4_pack, stg14_FIFO_buf60_lane_4);
  auto res_jac9_32_update_0_sm151_41657 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_4_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_5_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_5_pack, stg14_FIFO_buf60_lane_5);
  auto res_jac9_32_update_0_sm151_51659 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_5_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_6_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_6_pack, stg14_FIFO_buf60_lane_6);
  auto res_jac9_32_update_0_sm151_61661 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_6_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_7_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_7_pack, stg14_FIFO_buf60_lane_7);
  auto res_jac9_32_update_0_sm151_71663 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_7_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_8_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_8_pack, stg14_FIFO_buf60_lane_8);
  auto res_jac9_32_update_0_sm151_81665 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_8_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_9_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_9_pack, stg14_FIFO_buf60_lane_9);
  auto res_jac9_32_update_0_sm151_91667 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_9_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_10_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_10_pack, stg14_FIFO_buf60_lane_10);
  auto res_jac9_32_update_0_sm151_101669 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_10_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_11_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_11_pack, stg14_FIFO_buf60_lane_11);
  auto res_jac9_32_update_0_sm151_111671 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_11_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_12_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_12_pack, stg14_FIFO_buf60_lane_12);
  auto res_jac9_32_update_0_sm151_121673 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_12_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_13_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_13_pack, stg14_FIFO_buf60_lane_13);
  auto res_jac9_32_update_0_sm151_131675 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_13_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_14_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_14_pack, stg14_FIFO_buf60_lane_14);
  auto res_jac9_32_update_0_sm151_141677 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_14_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_15_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_15_pack, stg14_FIFO_buf60_lane_15);
  auto res_jac9_32_update_0_sm151_151679 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_15_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_16_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_16_pack, stg14_FIFO_buf60_lane_16);
  auto res_jac9_32_update_0_sm151_161681 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_16_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_17_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_17_pack, stg14_FIFO_buf60_lane_17);
  auto res_jac9_32_update_0_sm151_171683 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_17_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_18_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_18_pack, stg14_FIFO_buf60_lane_18);
  auto res_jac9_32_update_0_sm151_181685 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_18_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_19_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_19_pack, stg14_FIFO_buf60_lane_19);
  auto res_jac9_32_update_0_sm151_191687 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_19_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_20_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_20_pack, stg14_FIFO_buf60_lane_20);
  auto res_jac9_32_update_0_sm151_201689 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_20_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_21_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_21_pack, stg14_FIFO_buf60_lane_21);
  auto res_jac9_32_update_0_sm151_211691 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_21_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_22_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_22_pack, stg14_FIFO_buf60_lane_22);
  auto res_jac9_32_update_0_sm151_221693 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_22_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_23_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_23_pack, stg14_FIFO_buf60_lane_23);
  auto res_jac9_32_update_0_sm151_231695 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_23_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_24_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_24_pack, stg14_FIFO_buf60_lane_24);
  auto res_jac9_32_update_0_sm151_241697 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_24_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_25_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_25_pack, stg14_FIFO_buf60_lane_25);
  auto res_jac9_32_update_0_sm151_251699 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_25_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_26_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_26_pack, stg14_FIFO_buf60_lane_26);
  auto res_jac9_32_update_0_sm151_261701 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_26_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_27_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_27_pack, stg14_FIFO_buf60_lane_27);
  auto res_jac9_32_update_0_sm151_271703 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_27_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_28_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_28_pack, stg14_FIFO_buf60_lane_28);
  auto res_jac9_32_update_0_sm151_281705 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_28_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_29_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_29_pack, stg14_FIFO_buf60_lane_29);
  auto res_jac9_32_update_0_sm151_291707 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_29_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_30_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_30_pack, stg14_FIFO_buf60_lane_30);
  auto res_jac9_32_update_0_sm151_301709 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_30_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_31_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_31_pack, stg14_FIFO_buf60_lane_31);
  auto res_jac9_32_update_0_sm151_311711 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_31_pack);
  hw_uint<512 > return_value3362;
  set_at<0, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_01649);
  set_at<16, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_11651);
  set_at<32, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_21653);
  set_at<48, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_31655);
  set_at<64, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_41657);
  set_at<80, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_51659);
  set_at<96, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_61661);
  set_at<112, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_71663);
  set_at<128, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_81665);
  set_at<144, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_91667);
  set_at<160, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_101669);
  set_at<176, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_111671);
  set_at<192, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_121673);
  set_at<208, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_131675);
  set_at<224, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_141677);
  set_at<240, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_151679);
  set_at<256, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_161681);
  set_at<272, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_171683);
  set_at<288, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_181685);
  set_at<304, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_191687);
  set_at<320, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_201689);
  set_at<336, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_211691);
  set_at<352, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_221693);
  set_at<368, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_231695);
  set_at<384, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_241697);
  set_at<400, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_251699);
  set_at<416, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_261701);
  set_at<432, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_271703);
  set_at<448, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_281705);
  set_at<464, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_291707);
  set_at<480, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_301709);
  set_at<496, 512, 16>(return_value3362, res_jac9_32_update_0_sm151_311711);
  return return_value3362;

}

hw_uint<512> stg13_1_cu3364(hw_uint<16*128>& stg12_FIFO_buf44) {
  hw_uint<16> stg12_FIFO_buf44_lane_0 = stg12_FIFO_buf44.extract<0, 15>();
  hw_uint<16> stg12_FIFO_buf44_lane_1 = stg12_FIFO_buf44.extract<16, 31>();
  hw_uint<16> stg12_FIFO_buf44_lane_2 = stg12_FIFO_buf44.extract<32, 47>();
  hw_uint<16> stg12_FIFO_buf44_lane_3 = stg12_FIFO_buf44.extract<48, 63>();
  hw_uint<16> stg12_FIFO_buf44_lane_4 = stg12_FIFO_buf44.extract<64, 79>();
  hw_uint<16> stg12_FIFO_buf44_lane_5 = stg12_FIFO_buf44.extract<80, 95>();
  hw_uint<16> stg12_FIFO_buf44_lane_6 = stg12_FIFO_buf44.extract<96, 111>();
  hw_uint<16> stg12_FIFO_buf44_lane_7 = stg12_FIFO_buf44.extract<112, 127>();
  hw_uint<16> stg12_FIFO_buf44_lane_8 = stg12_FIFO_buf44.extract<128, 143>();
  hw_uint<16> stg12_FIFO_buf44_lane_9 = stg12_FIFO_buf44.extract<144, 159>();
  hw_uint<16> stg12_FIFO_buf44_lane_10 = stg12_FIFO_buf44.extract<160, 175>();
  hw_uint<16> stg12_FIFO_buf44_lane_11 = stg12_FIFO_buf44.extract<176, 191>();
  hw_uint<16> stg12_FIFO_buf44_lane_12 = stg12_FIFO_buf44.extract<192, 207>();
  hw_uint<16> stg12_FIFO_buf44_lane_13 = stg12_FIFO_buf44.extract<208, 223>();
  hw_uint<16> stg12_FIFO_buf44_lane_14 = stg12_FIFO_buf44.extract<224, 239>();
  hw_uint<16> stg12_FIFO_buf44_lane_15 = stg12_FIFO_buf44.extract<240, 255>();
  hw_uint<16> stg12_FIFO_buf44_lane_16 = stg12_FIFO_buf44.extract<256, 271>();
  hw_uint<16> stg12_FIFO_buf44_lane_17 = stg12_FIFO_buf44.extract<272, 287>();
  hw_uint<16> stg12_FIFO_buf44_lane_18 = stg12_FIFO_buf44.extract<288, 303>();
  hw_uint<16> stg12_FIFO_buf44_lane_19 = stg12_FIFO_buf44.extract<304, 319>();
  hw_uint<16> stg12_FIFO_buf44_lane_20 = stg12_FIFO_buf44.extract<320, 335>();
  hw_uint<16> stg12_FIFO_buf44_lane_21 = stg12_FIFO_buf44.extract<336, 351>();
  hw_uint<16> stg12_FIFO_buf44_lane_22 = stg12_FIFO_buf44.extract<352, 367>();
  hw_uint<16> stg12_FIFO_buf44_lane_23 = stg12_FIFO_buf44.extract<368, 383>();
  hw_uint<16> stg12_FIFO_buf44_lane_24 = stg12_FIFO_buf44.extract<384, 399>();
  hw_uint<16> stg12_FIFO_buf44_lane_25 = stg12_FIFO_buf44.extract<400, 415>();
  hw_uint<16> stg12_FIFO_buf44_lane_26 = stg12_FIFO_buf44.extract<416, 431>();
  hw_uint<16> stg12_FIFO_buf44_lane_27 = stg12_FIFO_buf44.extract<432, 447>();
  hw_uint<16> stg12_FIFO_buf44_lane_28 = stg12_FIFO_buf44.extract<448, 463>();
  hw_uint<16> stg12_FIFO_buf44_lane_29 = stg12_FIFO_buf44.extract<464, 479>();
  hw_uint<16> stg12_FIFO_buf44_lane_30 = stg12_FIFO_buf44.extract<480, 495>();
  hw_uint<16> stg12_FIFO_buf44_lane_31 = stg12_FIFO_buf44.extract<496, 511>();
  hw_uint<16> stg12_FIFO_buf44_lane_32 = stg12_FIFO_buf44.extract<512, 527>();
  hw_uint<16> stg12_FIFO_buf44_lane_33 = stg12_FIFO_buf44.extract<528, 543>();
  hw_uint<16> stg12_FIFO_buf44_lane_34 = stg12_FIFO_buf44.extract<544, 559>();
  hw_uint<16> stg12_FIFO_buf44_lane_35 = stg12_FIFO_buf44.extract<560, 575>();
  hw_uint<16> stg12_FIFO_buf44_lane_36 = stg12_FIFO_buf44.extract<576, 591>();
  hw_uint<16> stg12_FIFO_buf44_lane_37 = stg12_FIFO_buf44.extract<592, 607>();
  hw_uint<16> stg12_FIFO_buf44_lane_38 = stg12_FIFO_buf44.extract<608, 623>();
  hw_uint<16> stg12_FIFO_buf44_lane_39 = stg12_FIFO_buf44.extract<624, 639>();
  hw_uint<16> stg12_FIFO_buf44_lane_40 = stg12_FIFO_buf44.extract<640, 655>();
  hw_uint<16> stg12_FIFO_buf44_lane_41 = stg12_FIFO_buf44.extract<656, 671>();
  hw_uint<16> stg12_FIFO_buf44_lane_42 = stg12_FIFO_buf44.extract<672, 687>();
  hw_uint<16> stg12_FIFO_buf44_lane_43 = stg12_FIFO_buf44.extract<688, 703>();
  hw_uint<16> stg12_FIFO_buf44_lane_44 = stg12_FIFO_buf44.extract<704, 719>();
  hw_uint<16> stg12_FIFO_buf44_lane_45 = stg12_FIFO_buf44.extract<720, 735>();
  hw_uint<16> stg12_FIFO_buf44_lane_46 = stg12_FIFO_buf44.extract<736, 751>();
  hw_uint<16> stg12_FIFO_buf44_lane_47 = stg12_FIFO_buf44.extract<752, 767>();
  hw_uint<16> stg12_FIFO_buf44_lane_48 = stg12_FIFO_buf44.extract<768, 783>();
  hw_uint<16> stg12_FIFO_buf44_lane_49 = stg12_FIFO_buf44.extract<784, 799>();
  hw_uint<16> stg12_FIFO_buf44_lane_50 = stg12_FIFO_buf44.extract<800, 815>();
  hw_uint<16> stg12_FIFO_buf44_lane_51 = stg12_FIFO_buf44.extract<816, 831>();
  hw_uint<16> stg12_FIFO_buf44_lane_52 = stg12_FIFO_buf44.extract<832, 847>();
  hw_uint<16> stg12_FIFO_buf44_lane_53 = stg12_FIFO_buf44.extract<848, 863>();
  hw_uint<16> stg12_FIFO_buf44_lane_54 = stg12_FIFO_buf44.extract<864, 879>();
  hw_uint<16> stg12_FIFO_buf44_lane_55 = stg12_FIFO_buf44.extract<880, 895>();
  hw_uint<16> stg12_FIFO_buf44_lane_56 = stg12_FIFO_buf44.extract<896, 911>();
  hw_uint<16> stg12_FIFO_buf44_lane_57 = stg12_FIFO_buf44.extract<912, 927>();
  hw_uint<16> stg12_FIFO_buf44_lane_58 = stg12_FIFO_buf44.extract<928, 943>();
  hw_uint<16> stg12_FIFO_buf44_lane_59 = stg12_FIFO_buf44.extract<944, 959>();
  hw_uint<16> stg12_FIFO_buf44_lane_60 = stg12_FIFO_buf44.extract<960, 975>();
  hw_uint<16> stg12_FIFO_buf44_lane_61 = stg12_FIFO_buf44.extract<976, 991>();
  hw_uint<16> stg12_FIFO_buf44_lane_62 = stg12_FIFO_buf44.extract<992, 1007>();
  hw_uint<16> stg12_FIFO_buf44_lane_63 = stg12_FIFO_buf44.extract<1008, 1023>();
  hw_uint<16> stg12_FIFO_buf44_lane_64 = stg12_FIFO_buf44.extract<1024, 1039>();
  hw_uint<16> stg12_FIFO_buf44_lane_65 = stg12_FIFO_buf44.extract<1040, 1055>();
  hw_uint<16> stg12_FIFO_buf44_lane_66 = stg12_FIFO_buf44.extract<1056, 1071>();
  hw_uint<16> stg12_FIFO_buf44_lane_67 = stg12_FIFO_buf44.extract<1072, 1087>();
  hw_uint<16> stg12_FIFO_buf44_lane_68 = stg12_FIFO_buf44.extract<1088, 1103>();
  hw_uint<16> stg12_FIFO_buf44_lane_69 = stg12_FIFO_buf44.extract<1104, 1119>();
  hw_uint<16> stg12_FIFO_buf44_lane_70 = stg12_FIFO_buf44.extract<1120, 1135>();
  hw_uint<16> stg12_FIFO_buf44_lane_71 = stg12_FIFO_buf44.extract<1136, 1151>();
  hw_uint<16> stg12_FIFO_buf44_lane_72 = stg12_FIFO_buf44.extract<1152, 1167>();
  hw_uint<16> stg12_FIFO_buf44_lane_73 = stg12_FIFO_buf44.extract<1168, 1183>();
  hw_uint<16> stg12_FIFO_buf44_lane_74 = stg12_FIFO_buf44.extract<1184, 1199>();
  hw_uint<16> stg12_FIFO_buf44_lane_75 = stg12_FIFO_buf44.extract<1200, 1215>();
  hw_uint<16> stg12_FIFO_buf44_lane_76 = stg12_FIFO_buf44.extract<1216, 1231>();
  hw_uint<16> stg12_FIFO_buf44_lane_77 = stg12_FIFO_buf44.extract<1232, 1247>();
  hw_uint<16> stg12_FIFO_buf44_lane_78 = stg12_FIFO_buf44.extract<1248, 1263>();
  hw_uint<16> stg12_FIFO_buf44_lane_79 = stg12_FIFO_buf44.extract<1264, 1279>();
  hw_uint<16> stg12_FIFO_buf44_lane_80 = stg12_FIFO_buf44.extract<1280, 1295>();
  hw_uint<16> stg12_FIFO_buf44_lane_81 = stg12_FIFO_buf44.extract<1296, 1311>();
  hw_uint<16> stg12_FIFO_buf44_lane_82 = stg12_FIFO_buf44.extract<1312, 1327>();
  hw_uint<16> stg12_FIFO_buf44_lane_83 = stg12_FIFO_buf44.extract<1328, 1343>();
  hw_uint<16> stg12_FIFO_buf44_lane_84 = stg12_FIFO_buf44.extract<1344, 1359>();
  hw_uint<16> stg12_FIFO_buf44_lane_85 = stg12_FIFO_buf44.extract<1360, 1375>();
  hw_uint<16> stg12_FIFO_buf44_lane_86 = stg12_FIFO_buf44.extract<1376, 1391>();
  hw_uint<16> stg12_FIFO_buf44_lane_87 = stg12_FIFO_buf44.extract<1392, 1407>();
  hw_uint<16> stg12_FIFO_buf44_lane_88 = stg12_FIFO_buf44.extract<1408, 1423>();
  hw_uint<16> stg12_FIFO_buf44_lane_89 = stg12_FIFO_buf44.extract<1424, 1439>();
  hw_uint<16> stg12_FIFO_buf44_lane_90 = stg12_FIFO_buf44.extract<1440, 1455>();
  hw_uint<16> stg12_FIFO_buf44_lane_91 = stg12_FIFO_buf44.extract<1456, 1471>();
  hw_uint<16> stg12_FIFO_buf44_lane_92 = stg12_FIFO_buf44.extract<1472, 1487>();
  hw_uint<16> stg12_FIFO_buf44_lane_93 = stg12_FIFO_buf44.extract<1488, 1503>();
  hw_uint<16> stg12_FIFO_buf44_lane_94 = stg12_FIFO_buf44.extract<1504, 1519>();
  hw_uint<16> stg12_FIFO_buf44_lane_95 = stg12_FIFO_buf44.extract<1520, 1535>();
  hw_uint<16> stg12_FIFO_buf44_lane_96 = stg12_FIFO_buf44.extract<1536, 1551>();
  hw_uint<16> stg12_FIFO_buf44_lane_97 = stg12_FIFO_buf44.extract<1552, 1567>();
  hw_uint<16> stg12_FIFO_buf44_lane_98 = stg12_FIFO_buf44.extract<1568, 1583>();
  hw_uint<16> stg12_FIFO_buf44_lane_99 = stg12_FIFO_buf44.extract<1584, 1599>();
  hw_uint<16> stg12_FIFO_buf44_lane_100 = stg12_FIFO_buf44.extract<1600, 1615>();
  hw_uint<16> stg12_FIFO_buf44_lane_101 = stg12_FIFO_buf44.extract<1616, 1631>();
  hw_uint<16> stg12_FIFO_buf44_lane_102 = stg12_FIFO_buf44.extract<1632, 1647>();
  hw_uint<16> stg12_FIFO_buf44_lane_103 = stg12_FIFO_buf44.extract<1648, 1663>();
  hw_uint<16> stg12_FIFO_buf44_lane_104 = stg12_FIFO_buf44.extract<1664, 1679>();
  hw_uint<16> stg12_FIFO_buf44_lane_105 = stg12_FIFO_buf44.extract<1680, 1695>();
  hw_uint<16> stg12_FIFO_buf44_lane_106 = stg12_FIFO_buf44.extract<1696, 1711>();
  hw_uint<16> stg12_FIFO_buf44_lane_107 = stg12_FIFO_buf44.extract<1712, 1727>();
  hw_uint<16> stg12_FIFO_buf44_lane_108 = stg12_FIFO_buf44.extract<1728, 1743>();
  hw_uint<16> stg12_FIFO_buf44_lane_109 = stg12_FIFO_buf44.extract<1744, 1759>();
  hw_uint<16> stg12_FIFO_buf44_lane_110 = stg12_FIFO_buf44.extract<1760, 1775>();
  hw_uint<16> stg12_FIFO_buf44_lane_111 = stg12_FIFO_buf44.extract<1776, 1791>();
  hw_uint<16> stg12_FIFO_buf44_lane_112 = stg12_FIFO_buf44.extract<1792, 1807>();
  hw_uint<16> stg12_FIFO_buf44_lane_113 = stg12_FIFO_buf44.extract<1808, 1823>();
  hw_uint<16> stg12_FIFO_buf44_lane_114 = stg12_FIFO_buf44.extract<1824, 1839>();
  hw_uint<16> stg12_FIFO_buf44_lane_115 = stg12_FIFO_buf44.extract<1840, 1855>();
  hw_uint<16> stg12_FIFO_buf44_lane_116 = stg12_FIFO_buf44.extract<1856, 1871>();
  hw_uint<16> stg12_FIFO_buf44_lane_117 = stg12_FIFO_buf44.extract<1872, 1887>();
  hw_uint<16> stg12_FIFO_buf44_lane_118 = stg12_FIFO_buf44.extract<1888, 1903>();
  hw_uint<16> stg12_FIFO_buf44_lane_119 = stg12_FIFO_buf44.extract<1904, 1919>();
  hw_uint<16> stg12_FIFO_buf44_lane_120 = stg12_FIFO_buf44.extract<1920, 1935>();
  hw_uint<16> stg12_FIFO_buf44_lane_121 = stg12_FIFO_buf44.extract<1936, 1951>();
  hw_uint<16> stg12_FIFO_buf44_lane_122 = stg12_FIFO_buf44.extract<1952, 1967>();
  hw_uint<16> stg12_FIFO_buf44_lane_123 = stg12_FIFO_buf44.extract<1968, 1983>();
  hw_uint<16> stg12_FIFO_buf44_lane_124 = stg12_FIFO_buf44.extract<1984, 1999>();
  hw_uint<16> stg12_FIFO_buf44_lane_125 = stg12_FIFO_buf44.extract<2000, 2015>();
  hw_uint<16> stg12_FIFO_buf44_lane_126 = stg12_FIFO_buf44.extract<2016, 2031>();
  hw_uint<16> stg12_FIFO_buf44_lane_127 = stg12_FIFO_buf44.extract<2032, 2047>();

	
  hw_uint<64 > stg12_FIFO_buf44_lane_3_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_0);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_1);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_2);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_3);
  auto res_stg13_update_0_sm152_01713 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_3_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_7_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_4);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_5);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_6);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_7);
  auto res_stg13_update_0_sm152_11715 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_7_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_11_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_8);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_9);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_10);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_11);
  auto res_stg13_update_0_sm152_21717 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_11_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_15_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_12);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_13);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_14);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_15);
  auto res_stg13_update_0_sm152_31719 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_15_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_19_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_16);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_17);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_18);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_19);
  auto res_stg13_update_0_sm152_41721 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_19_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_23_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_20);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_21);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_22);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_23);
  auto res_stg13_update_0_sm152_51723 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_23_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_27_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_24);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_25);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_26);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_27);
  auto res_stg13_update_0_sm152_61725 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_27_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_31_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_28);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_29);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_30);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_31);
  auto res_stg13_update_0_sm152_71727 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_31_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_35_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_32);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_33);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_34);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_35);
  auto res_stg13_update_0_sm152_81729 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_35_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_39_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_36);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_37);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_38);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_39);
  auto res_stg13_update_0_sm152_91731 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_39_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_43_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_40);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_41);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_42);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_43);
  auto res_stg13_update_0_sm152_101733 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_43_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_47_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_44);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_45);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_46);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_47);
  auto res_stg13_update_0_sm152_111735 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_47_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_51_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_48);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_49);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_50);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_51);
  auto res_stg13_update_0_sm152_121737 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_51_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_55_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_52);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_53);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_54);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_55);
  auto res_stg13_update_0_sm152_131739 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_55_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_59_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_56);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_57);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_58);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_59);
  auto res_stg13_update_0_sm152_141741 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_59_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_63_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_60);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_61);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_62);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_63);
  auto res_stg13_update_0_sm152_151743 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_63_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_67_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_64);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_65);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_66);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_67);
  auto res_stg13_update_0_sm152_161745 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_67_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_71_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_68);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_69);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_70);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_71);
  auto res_stg13_update_0_sm152_171747 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_71_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_75_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_72);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_73);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_74);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_75);
  auto res_stg13_update_0_sm152_181749 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_75_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_79_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_76);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_77);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_78);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_79);
  auto res_stg13_update_0_sm152_191751 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_79_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_83_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_80);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_81);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_82);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_83);
  auto res_stg13_update_0_sm152_201753 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_83_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_87_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_84);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_85);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_86);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_87);
  auto res_stg13_update_0_sm152_211755 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_87_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_91_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_88);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_89);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_90);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_91);
  auto res_stg13_update_0_sm152_221757 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_91_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_95_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_92);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_93);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_94);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_95);
  auto res_stg13_update_0_sm152_231759 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_95_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_99_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_96);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_97);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_98);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_99);
  auto res_stg13_update_0_sm152_241761 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_99_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_103_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_100);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_101);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_102);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_103);
  auto res_stg13_update_0_sm152_251763 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_103_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_107_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_104);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_105);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_106);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_107);
  auto res_stg13_update_0_sm152_261765 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_107_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_111_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_108);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_109);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_110);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_111);
  auto res_stg13_update_0_sm152_271767 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_111_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_115_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_112);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_113);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_114);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_115);
  auto res_stg13_update_0_sm152_281769 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_115_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_119_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_116);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_117);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_118);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_119);
  auto res_stg13_update_0_sm152_291771 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_119_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_123_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_120);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_121);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_122);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_123);
  auto res_stg13_update_0_sm152_301773 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_123_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_127_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_124);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_125);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_126);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_127);
  auto res_stg13_update_0_sm152_311775 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_127_pack);
  hw_uint<512 > return_value3365;
  set_at<0, 512, 16>(return_value3365, res_stg13_update_0_sm152_01713);
  set_at<16, 512, 16>(return_value3365, res_stg13_update_0_sm152_11715);
  set_at<32, 512, 16>(return_value3365, res_stg13_update_0_sm152_21717);
  set_at<48, 512, 16>(return_value3365, res_stg13_update_0_sm152_31719);
  set_at<64, 512, 16>(return_value3365, res_stg13_update_0_sm152_41721);
  set_at<80, 512, 16>(return_value3365, res_stg13_update_0_sm152_51723);
  set_at<96, 512, 16>(return_value3365, res_stg13_update_0_sm152_61725);
  set_at<112, 512, 16>(return_value3365, res_stg13_update_0_sm152_71727);
  set_at<128, 512, 16>(return_value3365, res_stg13_update_0_sm152_81729);
  set_at<144, 512, 16>(return_value3365, res_stg13_update_0_sm152_91731);
  set_at<160, 512, 16>(return_value3365, res_stg13_update_0_sm152_101733);
  set_at<176, 512, 16>(return_value3365, res_stg13_update_0_sm152_111735);
  set_at<192, 512, 16>(return_value3365, res_stg13_update_0_sm152_121737);
  set_at<208, 512, 16>(return_value3365, res_stg13_update_0_sm152_131739);
  set_at<224, 512, 16>(return_value3365, res_stg13_update_0_sm152_141741);
  set_at<240, 512, 16>(return_value3365, res_stg13_update_0_sm152_151743);
  set_at<256, 512, 16>(return_value3365, res_stg13_update_0_sm152_161745);
  set_at<272, 512, 16>(return_value3365, res_stg13_update_0_sm152_171747);
  set_at<288, 512, 16>(return_value3365, res_stg13_update_0_sm152_181749);
  set_at<304, 512, 16>(return_value3365, res_stg13_update_0_sm152_191751);
  set_at<320, 512, 16>(return_value3365, res_stg13_update_0_sm152_201753);
  set_at<336, 512, 16>(return_value3365, res_stg13_update_0_sm152_211755);
  set_at<352, 512, 16>(return_value3365, res_stg13_update_0_sm152_221757);
  set_at<368, 512, 16>(return_value3365, res_stg13_update_0_sm152_231759);
  set_at<384, 512, 16>(return_value3365, res_stg13_update_0_sm152_241761);
  set_at<400, 512, 16>(return_value3365, res_stg13_update_0_sm152_251763);
  set_at<416, 512, 16>(return_value3365, res_stg13_update_0_sm152_261765);
  set_at<432, 512, 16>(return_value3365, res_stg13_update_0_sm152_271767);
  set_at<448, 512, 16>(return_value3365, res_stg13_update_0_sm152_281769);
  set_at<464, 512, 16>(return_value3365, res_stg13_update_0_sm152_291771);
  set_at<480, 512, 16>(return_value3365, res_stg13_update_0_sm152_301773);
  set_at<496, 512, 16>(return_value3365, res_stg13_update_0_sm152_311775);
  return return_value3365;

}

hw_uint<512> stg14_1_cu3367(hw_uint<16*128>& stg13_FIFO_buf52) {
  hw_uint<16> stg13_FIFO_buf52_lane_0 = stg13_FIFO_buf52.extract<0, 15>();
  hw_uint<16> stg13_FIFO_buf52_lane_1 = stg13_FIFO_buf52.extract<16, 31>();
  hw_uint<16> stg13_FIFO_buf52_lane_2 = stg13_FIFO_buf52.extract<32, 47>();
  hw_uint<16> stg13_FIFO_buf52_lane_3 = stg13_FIFO_buf52.extract<48, 63>();
  hw_uint<16> stg13_FIFO_buf52_lane_4 = stg13_FIFO_buf52.extract<64, 79>();
  hw_uint<16> stg13_FIFO_buf52_lane_5 = stg13_FIFO_buf52.extract<80, 95>();
  hw_uint<16> stg13_FIFO_buf52_lane_6 = stg13_FIFO_buf52.extract<96, 111>();
  hw_uint<16> stg13_FIFO_buf52_lane_7 = stg13_FIFO_buf52.extract<112, 127>();
  hw_uint<16> stg13_FIFO_buf52_lane_8 = stg13_FIFO_buf52.extract<128, 143>();
  hw_uint<16> stg13_FIFO_buf52_lane_9 = stg13_FIFO_buf52.extract<144, 159>();
  hw_uint<16> stg13_FIFO_buf52_lane_10 = stg13_FIFO_buf52.extract<160, 175>();
  hw_uint<16> stg13_FIFO_buf52_lane_11 = stg13_FIFO_buf52.extract<176, 191>();
  hw_uint<16> stg13_FIFO_buf52_lane_12 = stg13_FIFO_buf52.extract<192, 207>();
  hw_uint<16> stg13_FIFO_buf52_lane_13 = stg13_FIFO_buf52.extract<208, 223>();
  hw_uint<16> stg13_FIFO_buf52_lane_14 = stg13_FIFO_buf52.extract<224, 239>();
  hw_uint<16> stg13_FIFO_buf52_lane_15 = stg13_FIFO_buf52.extract<240, 255>();
  hw_uint<16> stg13_FIFO_buf52_lane_16 = stg13_FIFO_buf52.extract<256, 271>();
  hw_uint<16> stg13_FIFO_buf52_lane_17 = stg13_FIFO_buf52.extract<272, 287>();
  hw_uint<16> stg13_FIFO_buf52_lane_18 = stg13_FIFO_buf52.extract<288, 303>();
  hw_uint<16> stg13_FIFO_buf52_lane_19 = stg13_FIFO_buf52.extract<304, 319>();
  hw_uint<16> stg13_FIFO_buf52_lane_20 = stg13_FIFO_buf52.extract<320, 335>();
  hw_uint<16> stg13_FIFO_buf52_lane_21 = stg13_FIFO_buf52.extract<336, 351>();
  hw_uint<16> stg13_FIFO_buf52_lane_22 = stg13_FIFO_buf52.extract<352, 367>();
  hw_uint<16> stg13_FIFO_buf52_lane_23 = stg13_FIFO_buf52.extract<368, 383>();
  hw_uint<16> stg13_FIFO_buf52_lane_24 = stg13_FIFO_buf52.extract<384, 399>();
  hw_uint<16> stg13_FIFO_buf52_lane_25 = stg13_FIFO_buf52.extract<400, 415>();
  hw_uint<16> stg13_FIFO_buf52_lane_26 = stg13_FIFO_buf52.extract<416, 431>();
  hw_uint<16> stg13_FIFO_buf52_lane_27 = stg13_FIFO_buf52.extract<432, 447>();
  hw_uint<16> stg13_FIFO_buf52_lane_28 = stg13_FIFO_buf52.extract<448, 463>();
  hw_uint<16> stg13_FIFO_buf52_lane_29 = stg13_FIFO_buf52.extract<464, 479>();
  hw_uint<16> stg13_FIFO_buf52_lane_30 = stg13_FIFO_buf52.extract<480, 495>();
  hw_uint<16> stg13_FIFO_buf52_lane_31 = stg13_FIFO_buf52.extract<496, 511>();
  hw_uint<16> stg13_FIFO_buf52_lane_32 = stg13_FIFO_buf52.extract<512, 527>();
  hw_uint<16> stg13_FIFO_buf52_lane_33 = stg13_FIFO_buf52.extract<528, 543>();
  hw_uint<16> stg13_FIFO_buf52_lane_34 = stg13_FIFO_buf52.extract<544, 559>();
  hw_uint<16> stg13_FIFO_buf52_lane_35 = stg13_FIFO_buf52.extract<560, 575>();
  hw_uint<16> stg13_FIFO_buf52_lane_36 = stg13_FIFO_buf52.extract<576, 591>();
  hw_uint<16> stg13_FIFO_buf52_lane_37 = stg13_FIFO_buf52.extract<592, 607>();
  hw_uint<16> stg13_FIFO_buf52_lane_38 = stg13_FIFO_buf52.extract<608, 623>();
  hw_uint<16> stg13_FIFO_buf52_lane_39 = stg13_FIFO_buf52.extract<624, 639>();
  hw_uint<16> stg13_FIFO_buf52_lane_40 = stg13_FIFO_buf52.extract<640, 655>();
  hw_uint<16> stg13_FIFO_buf52_lane_41 = stg13_FIFO_buf52.extract<656, 671>();
  hw_uint<16> stg13_FIFO_buf52_lane_42 = stg13_FIFO_buf52.extract<672, 687>();
  hw_uint<16> stg13_FIFO_buf52_lane_43 = stg13_FIFO_buf52.extract<688, 703>();
  hw_uint<16> stg13_FIFO_buf52_lane_44 = stg13_FIFO_buf52.extract<704, 719>();
  hw_uint<16> stg13_FIFO_buf52_lane_45 = stg13_FIFO_buf52.extract<720, 735>();
  hw_uint<16> stg13_FIFO_buf52_lane_46 = stg13_FIFO_buf52.extract<736, 751>();
  hw_uint<16> stg13_FIFO_buf52_lane_47 = stg13_FIFO_buf52.extract<752, 767>();
  hw_uint<16> stg13_FIFO_buf52_lane_48 = stg13_FIFO_buf52.extract<768, 783>();
  hw_uint<16> stg13_FIFO_buf52_lane_49 = stg13_FIFO_buf52.extract<784, 799>();
  hw_uint<16> stg13_FIFO_buf52_lane_50 = stg13_FIFO_buf52.extract<800, 815>();
  hw_uint<16> stg13_FIFO_buf52_lane_51 = stg13_FIFO_buf52.extract<816, 831>();
  hw_uint<16> stg13_FIFO_buf52_lane_52 = stg13_FIFO_buf52.extract<832, 847>();
  hw_uint<16> stg13_FIFO_buf52_lane_53 = stg13_FIFO_buf52.extract<848, 863>();
  hw_uint<16> stg13_FIFO_buf52_lane_54 = stg13_FIFO_buf52.extract<864, 879>();
  hw_uint<16> stg13_FIFO_buf52_lane_55 = stg13_FIFO_buf52.extract<880, 895>();
  hw_uint<16> stg13_FIFO_buf52_lane_56 = stg13_FIFO_buf52.extract<896, 911>();
  hw_uint<16> stg13_FIFO_buf52_lane_57 = stg13_FIFO_buf52.extract<912, 927>();
  hw_uint<16> stg13_FIFO_buf52_lane_58 = stg13_FIFO_buf52.extract<928, 943>();
  hw_uint<16> stg13_FIFO_buf52_lane_59 = stg13_FIFO_buf52.extract<944, 959>();
  hw_uint<16> stg13_FIFO_buf52_lane_60 = stg13_FIFO_buf52.extract<960, 975>();
  hw_uint<16> stg13_FIFO_buf52_lane_61 = stg13_FIFO_buf52.extract<976, 991>();
  hw_uint<16> stg13_FIFO_buf52_lane_62 = stg13_FIFO_buf52.extract<992, 1007>();
  hw_uint<16> stg13_FIFO_buf52_lane_63 = stg13_FIFO_buf52.extract<1008, 1023>();
  hw_uint<16> stg13_FIFO_buf52_lane_64 = stg13_FIFO_buf52.extract<1024, 1039>();
  hw_uint<16> stg13_FIFO_buf52_lane_65 = stg13_FIFO_buf52.extract<1040, 1055>();
  hw_uint<16> stg13_FIFO_buf52_lane_66 = stg13_FIFO_buf52.extract<1056, 1071>();
  hw_uint<16> stg13_FIFO_buf52_lane_67 = stg13_FIFO_buf52.extract<1072, 1087>();
  hw_uint<16> stg13_FIFO_buf52_lane_68 = stg13_FIFO_buf52.extract<1088, 1103>();
  hw_uint<16> stg13_FIFO_buf52_lane_69 = stg13_FIFO_buf52.extract<1104, 1119>();
  hw_uint<16> stg13_FIFO_buf52_lane_70 = stg13_FIFO_buf52.extract<1120, 1135>();
  hw_uint<16> stg13_FIFO_buf52_lane_71 = stg13_FIFO_buf52.extract<1136, 1151>();
  hw_uint<16> stg13_FIFO_buf52_lane_72 = stg13_FIFO_buf52.extract<1152, 1167>();
  hw_uint<16> stg13_FIFO_buf52_lane_73 = stg13_FIFO_buf52.extract<1168, 1183>();
  hw_uint<16> stg13_FIFO_buf52_lane_74 = stg13_FIFO_buf52.extract<1184, 1199>();
  hw_uint<16> stg13_FIFO_buf52_lane_75 = stg13_FIFO_buf52.extract<1200, 1215>();
  hw_uint<16> stg13_FIFO_buf52_lane_76 = stg13_FIFO_buf52.extract<1216, 1231>();
  hw_uint<16> stg13_FIFO_buf52_lane_77 = stg13_FIFO_buf52.extract<1232, 1247>();
  hw_uint<16> stg13_FIFO_buf52_lane_78 = stg13_FIFO_buf52.extract<1248, 1263>();
  hw_uint<16> stg13_FIFO_buf52_lane_79 = stg13_FIFO_buf52.extract<1264, 1279>();
  hw_uint<16> stg13_FIFO_buf52_lane_80 = stg13_FIFO_buf52.extract<1280, 1295>();
  hw_uint<16> stg13_FIFO_buf52_lane_81 = stg13_FIFO_buf52.extract<1296, 1311>();
  hw_uint<16> stg13_FIFO_buf52_lane_82 = stg13_FIFO_buf52.extract<1312, 1327>();
  hw_uint<16> stg13_FIFO_buf52_lane_83 = stg13_FIFO_buf52.extract<1328, 1343>();
  hw_uint<16> stg13_FIFO_buf52_lane_84 = stg13_FIFO_buf52.extract<1344, 1359>();
  hw_uint<16> stg13_FIFO_buf52_lane_85 = stg13_FIFO_buf52.extract<1360, 1375>();
  hw_uint<16> stg13_FIFO_buf52_lane_86 = stg13_FIFO_buf52.extract<1376, 1391>();
  hw_uint<16> stg13_FIFO_buf52_lane_87 = stg13_FIFO_buf52.extract<1392, 1407>();
  hw_uint<16> stg13_FIFO_buf52_lane_88 = stg13_FIFO_buf52.extract<1408, 1423>();
  hw_uint<16> stg13_FIFO_buf52_lane_89 = stg13_FIFO_buf52.extract<1424, 1439>();
  hw_uint<16> stg13_FIFO_buf52_lane_90 = stg13_FIFO_buf52.extract<1440, 1455>();
  hw_uint<16> stg13_FIFO_buf52_lane_91 = stg13_FIFO_buf52.extract<1456, 1471>();
  hw_uint<16> stg13_FIFO_buf52_lane_92 = stg13_FIFO_buf52.extract<1472, 1487>();
  hw_uint<16> stg13_FIFO_buf52_lane_93 = stg13_FIFO_buf52.extract<1488, 1503>();
  hw_uint<16> stg13_FIFO_buf52_lane_94 = stg13_FIFO_buf52.extract<1504, 1519>();
  hw_uint<16> stg13_FIFO_buf52_lane_95 = stg13_FIFO_buf52.extract<1520, 1535>();
  hw_uint<16> stg13_FIFO_buf52_lane_96 = stg13_FIFO_buf52.extract<1536, 1551>();
  hw_uint<16> stg13_FIFO_buf52_lane_97 = stg13_FIFO_buf52.extract<1552, 1567>();
  hw_uint<16> stg13_FIFO_buf52_lane_98 = stg13_FIFO_buf52.extract<1568, 1583>();
  hw_uint<16> stg13_FIFO_buf52_lane_99 = stg13_FIFO_buf52.extract<1584, 1599>();
  hw_uint<16> stg13_FIFO_buf52_lane_100 = stg13_FIFO_buf52.extract<1600, 1615>();
  hw_uint<16> stg13_FIFO_buf52_lane_101 = stg13_FIFO_buf52.extract<1616, 1631>();
  hw_uint<16> stg13_FIFO_buf52_lane_102 = stg13_FIFO_buf52.extract<1632, 1647>();
  hw_uint<16> stg13_FIFO_buf52_lane_103 = stg13_FIFO_buf52.extract<1648, 1663>();
  hw_uint<16> stg13_FIFO_buf52_lane_104 = stg13_FIFO_buf52.extract<1664, 1679>();
  hw_uint<16> stg13_FIFO_buf52_lane_105 = stg13_FIFO_buf52.extract<1680, 1695>();
  hw_uint<16> stg13_FIFO_buf52_lane_106 = stg13_FIFO_buf52.extract<1696, 1711>();
  hw_uint<16> stg13_FIFO_buf52_lane_107 = stg13_FIFO_buf52.extract<1712, 1727>();
  hw_uint<16> stg13_FIFO_buf52_lane_108 = stg13_FIFO_buf52.extract<1728, 1743>();
  hw_uint<16> stg13_FIFO_buf52_lane_109 = stg13_FIFO_buf52.extract<1744, 1759>();
  hw_uint<16> stg13_FIFO_buf52_lane_110 = stg13_FIFO_buf52.extract<1760, 1775>();
  hw_uint<16> stg13_FIFO_buf52_lane_111 = stg13_FIFO_buf52.extract<1776, 1791>();
  hw_uint<16> stg13_FIFO_buf52_lane_112 = stg13_FIFO_buf52.extract<1792, 1807>();
  hw_uint<16> stg13_FIFO_buf52_lane_113 = stg13_FIFO_buf52.extract<1808, 1823>();
  hw_uint<16> stg13_FIFO_buf52_lane_114 = stg13_FIFO_buf52.extract<1824, 1839>();
  hw_uint<16> stg13_FIFO_buf52_lane_115 = stg13_FIFO_buf52.extract<1840, 1855>();
  hw_uint<16> stg13_FIFO_buf52_lane_116 = stg13_FIFO_buf52.extract<1856, 1871>();
  hw_uint<16> stg13_FIFO_buf52_lane_117 = stg13_FIFO_buf52.extract<1872, 1887>();
  hw_uint<16> stg13_FIFO_buf52_lane_118 = stg13_FIFO_buf52.extract<1888, 1903>();
  hw_uint<16> stg13_FIFO_buf52_lane_119 = stg13_FIFO_buf52.extract<1904, 1919>();
  hw_uint<16> stg13_FIFO_buf52_lane_120 = stg13_FIFO_buf52.extract<1920, 1935>();
  hw_uint<16> stg13_FIFO_buf52_lane_121 = stg13_FIFO_buf52.extract<1936, 1951>();
  hw_uint<16> stg13_FIFO_buf52_lane_122 = stg13_FIFO_buf52.extract<1952, 1967>();
  hw_uint<16> stg13_FIFO_buf52_lane_123 = stg13_FIFO_buf52.extract<1968, 1983>();
  hw_uint<16> stg13_FIFO_buf52_lane_124 = stg13_FIFO_buf52.extract<1984, 1999>();
  hw_uint<16> stg13_FIFO_buf52_lane_125 = stg13_FIFO_buf52.extract<2000, 2015>();
  hw_uint<16> stg13_FIFO_buf52_lane_126 = stg13_FIFO_buf52.extract<2016, 2031>();
  hw_uint<16> stg13_FIFO_buf52_lane_127 = stg13_FIFO_buf52.extract<2032, 2047>();

	
  hw_uint<64 > stg13_FIFO_buf52_lane_3_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_0);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_1);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_2);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_3);
  auto res_stg14_update_0_sm153_03121 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_3_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_7_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_4);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_5);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_6);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_7);
  auto res_stg14_update_0_sm153_13123 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_7_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_11_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_8);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_9);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_10);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_11);
  auto res_stg14_update_0_sm153_23125 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_11_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_15_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_12);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_13);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_14);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_15);
  auto res_stg14_update_0_sm153_33127 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_15_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_19_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_16);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_17);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_18);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_19);
  auto res_stg14_update_0_sm153_43129 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_19_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_23_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_20);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_21);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_22);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_23);
  auto res_stg14_update_0_sm153_53131 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_23_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_27_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_24);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_25);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_26);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_27);
  auto res_stg14_update_0_sm153_63133 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_27_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_31_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_28);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_29);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_30);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_31);
  auto res_stg14_update_0_sm153_73135 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_31_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_35_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_32);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_33);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_34);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_35);
  auto res_stg14_update_0_sm153_83137 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_35_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_39_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_36);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_37);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_38);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_39);
  auto res_stg14_update_0_sm153_93139 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_39_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_43_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_40);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_41);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_42);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_43);
  auto res_stg14_update_0_sm153_103141 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_43_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_47_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_44);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_45);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_46);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_47);
  auto res_stg14_update_0_sm153_113143 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_47_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_51_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_48);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_49);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_50);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_51);
  auto res_stg14_update_0_sm153_123145 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_51_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_55_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_52);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_53);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_54);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_55);
  auto res_stg14_update_0_sm153_133147 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_55_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_59_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_56);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_57);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_58);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_59);
  auto res_stg14_update_0_sm153_143149 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_59_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_63_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_60);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_61);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_62);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_63);
  auto res_stg14_update_0_sm153_153151 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_63_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_67_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_64);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_65);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_66);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_67);
  auto res_stg14_update_0_sm153_163153 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_67_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_71_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_68);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_69);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_70);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_71);
  auto res_stg14_update_0_sm153_173155 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_71_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_75_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_72);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_73);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_74);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_75);
  auto res_stg14_update_0_sm153_183157 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_75_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_79_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_76);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_77);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_78);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_79);
  auto res_stg14_update_0_sm153_193159 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_79_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_83_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_80);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_81);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_82);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_83);
  auto res_stg14_update_0_sm153_203161 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_83_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_87_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_84);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_85);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_86);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_87);
  auto res_stg14_update_0_sm153_213163 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_87_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_91_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_88);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_89);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_90);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_91);
  auto res_stg14_update_0_sm153_223165 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_91_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_95_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_92);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_93);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_94);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_95);
  auto res_stg14_update_0_sm153_233167 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_95_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_99_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_96);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_97);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_98);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_99);
  auto res_stg14_update_0_sm153_243169 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_99_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_103_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_100);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_101);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_102);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_103);
  auto res_stg14_update_0_sm153_253171 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_103_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_107_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_104);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_105);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_106);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_107);
  auto res_stg14_update_0_sm153_263173 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_107_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_111_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_108);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_109);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_110);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_111);
  auto res_stg14_update_0_sm153_273175 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_111_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_115_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_112);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_113);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_114);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_115);
  auto res_stg14_update_0_sm153_283177 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_115_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_119_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_116);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_117);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_118);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_119);
  auto res_stg14_update_0_sm153_293179 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_119_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_123_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_120);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_121);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_122);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_123);
  auto res_stg14_update_0_sm153_303181 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_123_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_127_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_124);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_125);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_126);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_127);
  auto res_stg14_update_0_sm153_313183 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_127_pack);
  hw_uint<512 > return_value3368;
  set_at<0, 512, 16>(return_value3368, res_stg14_update_0_sm153_03121);
  set_at<16, 512, 16>(return_value3368, res_stg14_update_0_sm153_13123);
  set_at<32, 512, 16>(return_value3368, res_stg14_update_0_sm153_23125);
  set_at<48, 512, 16>(return_value3368, res_stg14_update_0_sm153_33127);
  set_at<64, 512, 16>(return_value3368, res_stg14_update_0_sm153_43129);
  set_at<80, 512, 16>(return_value3368, res_stg14_update_0_sm153_53131);
  set_at<96, 512, 16>(return_value3368, res_stg14_update_0_sm153_63133);
  set_at<112, 512, 16>(return_value3368, res_stg14_update_0_sm153_73135);
  set_at<128, 512, 16>(return_value3368, res_stg14_update_0_sm153_83137);
  set_at<144, 512, 16>(return_value3368, res_stg14_update_0_sm153_93139);
  set_at<160, 512, 16>(return_value3368, res_stg14_update_0_sm153_103141);
  set_at<176, 512, 16>(return_value3368, res_stg14_update_0_sm153_113143);
  set_at<192, 512, 16>(return_value3368, res_stg14_update_0_sm153_123145);
  set_at<208, 512, 16>(return_value3368, res_stg14_update_0_sm153_133147);
  set_at<224, 512, 16>(return_value3368, res_stg14_update_0_sm153_143149);
  set_at<240, 512, 16>(return_value3368, res_stg14_update_0_sm153_153151);
  set_at<256, 512, 16>(return_value3368, res_stg14_update_0_sm153_163153);
  set_at<272, 512, 16>(return_value3368, res_stg14_update_0_sm153_173155);
  set_at<288, 512, 16>(return_value3368, res_stg14_update_0_sm153_183157);
  set_at<304, 512, 16>(return_value3368, res_stg14_update_0_sm153_193159);
  set_at<320, 512, 16>(return_value3368, res_stg14_update_0_sm153_203161);
  set_at<336, 512, 16>(return_value3368, res_stg14_update_0_sm153_213163);
  set_at<352, 512, 16>(return_value3368, res_stg14_update_0_sm153_223165);
  set_at<368, 512, 16>(return_value3368, res_stg14_update_0_sm153_233167);
  set_at<384, 512, 16>(return_value3368, res_stg14_update_0_sm153_243169);
  set_at<400, 512, 16>(return_value3368, res_stg14_update_0_sm153_253171);
  set_at<416, 512, 16>(return_value3368, res_stg14_update_0_sm153_263173);
  set_at<432, 512, 16>(return_value3368, res_stg14_update_0_sm153_273175);
  set_at<448, 512, 16>(return_value3368, res_stg14_update_0_sm153_283177);
  set_at<464, 512, 16>(return_value3368, res_stg14_update_0_sm153_293179);
  set_at<480, 512, 16>(return_value3368, res_stg14_update_0_sm153_303181);
  set_at<496, 512, 16>(return_value3368, res_stg14_update_0_sm153_313183);
  return return_value3368;

}

hw_uint<512> stg5_ld89_cu3370(hw_uint<16*32>& stg5) {
  return stg5;
}

hw_uint<512> stg4_ld81_cu3372(hw_uint<16*32>& stg4) {
  return stg4;
}

hw_uint<512> stg3_to_gp_1172_ld77_cu3374(hw_uint<16*32>& stg3_to_gp_1172) {
  return stg3_to_gp_1172;
}

hw_uint<512> stg5_to_gp_1388_ld93_cu3376(hw_uint<16*32>& stg5_to_gp_1388) {
  return stg5_to_gp_1388;
}

hw_uint<512> stg8_ld113_cu3378(hw_uint<16*32>& stg8) {
  return stg8;
}

hw_uint<512> stg7_to_gp_15104_ld109_cu3380(hw_uint<16*32>& stg7_to_gp_15104) {
  return stg7_to_gp_15104;
}

hw_uint<512> in_1_cu3382(hw_uint<16*32>& in_off_chip) {
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
  auto res_in_update_0_sm160_02801 = in_generated_compute_unrolled_1(in_off_chip_lane_0_pack);

  hw_uint<16 > in_off_chip_lane_1_pack;
  set_at<0, 16, 16>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
  auto res_in_update_0_sm160_12803 = in_generated_compute_unrolled_1(in_off_chip_lane_1_pack);

  hw_uint<16 > in_off_chip_lane_2_pack;
  set_at<0, 16, 16>(in_off_chip_lane_2_pack, in_off_chip_lane_2);
  auto res_in_update_0_sm160_22805 = in_generated_compute_unrolled_1(in_off_chip_lane_2_pack);

  hw_uint<16 > in_off_chip_lane_3_pack;
  set_at<0, 16, 16>(in_off_chip_lane_3_pack, in_off_chip_lane_3);
  auto res_in_update_0_sm160_32807 = in_generated_compute_unrolled_1(in_off_chip_lane_3_pack);

  hw_uint<16 > in_off_chip_lane_4_pack;
  set_at<0, 16, 16>(in_off_chip_lane_4_pack, in_off_chip_lane_4);
  auto res_in_update_0_sm160_42809 = in_generated_compute_unrolled_1(in_off_chip_lane_4_pack);

  hw_uint<16 > in_off_chip_lane_5_pack;
  set_at<0, 16, 16>(in_off_chip_lane_5_pack, in_off_chip_lane_5);
  auto res_in_update_0_sm160_52811 = in_generated_compute_unrolled_1(in_off_chip_lane_5_pack);

  hw_uint<16 > in_off_chip_lane_6_pack;
  set_at<0, 16, 16>(in_off_chip_lane_6_pack, in_off_chip_lane_6);
  auto res_in_update_0_sm160_62813 = in_generated_compute_unrolled_1(in_off_chip_lane_6_pack);

  hw_uint<16 > in_off_chip_lane_7_pack;
  set_at<0, 16, 16>(in_off_chip_lane_7_pack, in_off_chip_lane_7);
  auto res_in_update_0_sm160_72815 = in_generated_compute_unrolled_1(in_off_chip_lane_7_pack);

  hw_uint<16 > in_off_chip_lane_8_pack;
  set_at<0, 16, 16>(in_off_chip_lane_8_pack, in_off_chip_lane_8);
  auto res_in_update_0_sm160_82817 = in_generated_compute_unrolled_1(in_off_chip_lane_8_pack);

  hw_uint<16 > in_off_chip_lane_9_pack;
  set_at<0, 16, 16>(in_off_chip_lane_9_pack, in_off_chip_lane_9);
  auto res_in_update_0_sm160_92819 = in_generated_compute_unrolled_1(in_off_chip_lane_9_pack);

  hw_uint<16 > in_off_chip_lane_10_pack;
  set_at<0, 16, 16>(in_off_chip_lane_10_pack, in_off_chip_lane_10);
  auto res_in_update_0_sm160_102821 = in_generated_compute_unrolled_1(in_off_chip_lane_10_pack);

  hw_uint<16 > in_off_chip_lane_11_pack;
  set_at<0, 16, 16>(in_off_chip_lane_11_pack, in_off_chip_lane_11);
  auto res_in_update_0_sm160_112823 = in_generated_compute_unrolled_1(in_off_chip_lane_11_pack);

  hw_uint<16 > in_off_chip_lane_12_pack;
  set_at<0, 16, 16>(in_off_chip_lane_12_pack, in_off_chip_lane_12);
  auto res_in_update_0_sm160_122825 = in_generated_compute_unrolled_1(in_off_chip_lane_12_pack);

  hw_uint<16 > in_off_chip_lane_13_pack;
  set_at<0, 16, 16>(in_off_chip_lane_13_pack, in_off_chip_lane_13);
  auto res_in_update_0_sm160_132827 = in_generated_compute_unrolled_1(in_off_chip_lane_13_pack);

  hw_uint<16 > in_off_chip_lane_14_pack;
  set_at<0, 16, 16>(in_off_chip_lane_14_pack, in_off_chip_lane_14);
  auto res_in_update_0_sm160_142829 = in_generated_compute_unrolled_1(in_off_chip_lane_14_pack);

  hw_uint<16 > in_off_chip_lane_15_pack;
  set_at<0, 16, 16>(in_off_chip_lane_15_pack, in_off_chip_lane_15);
  auto res_in_update_0_sm160_152831 = in_generated_compute_unrolled_1(in_off_chip_lane_15_pack);

  hw_uint<16 > in_off_chip_lane_16_pack;
  set_at<0, 16, 16>(in_off_chip_lane_16_pack, in_off_chip_lane_16);
  auto res_in_update_0_sm160_162833 = in_generated_compute_unrolled_1(in_off_chip_lane_16_pack);

  hw_uint<16 > in_off_chip_lane_17_pack;
  set_at<0, 16, 16>(in_off_chip_lane_17_pack, in_off_chip_lane_17);
  auto res_in_update_0_sm160_172835 = in_generated_compute_unrolled_1(in_off_chip_lane_17_pack);

  hw_uint<16 > in_off_chip_lane_18_pack;
  set_at<0, 16, 16>(in_off_chip_lane_18_pack, in_off_chip_lane_18);
  auto res_in_update_0_sm160_182837 = in_generated_compute_unrolled_1(in_off_chip_lane_18_pack);

  hw_uint<16 > in_off_chip_lane_19_pack;
  set_at<0, 16, 16>(in_off_chip_lane_19_pack, in_off_chip_lane_19);
  auto res_in_update_0_sm160_192839 = in_generated_compute_unrolled_1(in_off_chip_lane_19_pack);

  hw_uint<16 > in_off_chip_lane_20_pack;
  set_at<0, 16, 16>(in_off_chip_lane_20_pack, in_off_chip_lane_20);
  auto res_in_update_0_sm160_202841 = in_generated_compute_unrolled_1(in_off_chip_lane_20_pack);

  hw_uint<16 > in_off_chip_lane_21_pack;
  set_at<0, 16, 16>(in_off_chip_lane_21_pack, in_off_chip_lane_21);
  auto res_in_update_0_sm160_212843 = in_generated_compute_unrolled_1(in_off_chip_lane_21_pack);

  hw_uint<16 > in_off_chip_lane_22_pack;
  set_at<0, 16, 16>(in_off_chip_lane_22_pack, in_off_chip_lane_22);
  auto res_in_update_0_sm160_222845 = in_generated_compute_unrolled_1(in_off_chip_lane_22_pack);

  hw_uint<16 > in_off_chip_lane_23_pack;
  set_at<0, 16, 16>(in_off_chip_lane_23_pack, in_off_chip_lane_23);
  auto res_in_update_0_sm160_232847 = in_generated_compute_unrolled_1(in_off_chip_lane_23_pack);

  hw_uint<16 > in_off_chip_lane_24_pack;
  set_at<0, 16, 16>(in_off_chip_lane_24_pack, in_off_chip_lane_24);
  auto res_in_update_0_sm160_242849 = in_generated_compute_unrolled_1(in_off_chip_lane_24_pack);

  hw_uint<16 > in_off_chip_lane_25_pack;
  set_at<0, 16, 16>(in_off_chip_lane_25_pack, in_off_chip_lane_25);
  auto res_in_update_0_sm160_252851 = in_generated_compute_unrolled_1(in_off_chip_lane_25_pack);

  hw_uint<16 > in_off_chip_lane_26_pack;
  set_at<0, 16, 16>(in_off_chip_lane_26_pack, in_off_chip_lane_26);
  auto res_in_update_0_sm160_262853 = in_generated_compute_unrolled_1(in_off_chip_lane_26_pack);

  hw_uint<16 > in_off_chip_lane_27_pack;
  set_at<0, 16, 16>(in_off_chip_lane_27_pack, in_off_chip_lane_27);
  auto res_in_update_0_sm160_272855 = in_generated_compute_unrolled_1(in_off_chip_lane_27_pack);

  hw_uint<16 > in_off_chip_lane_28_pack;
  set_at<0, 16, 16>(in_off_chip_lane_28_pack, in_off_chip_lane_28);
  auto res_in_update_0_sm160_282857 = in_generated_compute_unrolled_1(in_off_chip_lane_28_pack);

  hw_uint<16 > in_off_chip_lane_29_pack;
  set_at<0, 16, 16>(in_off_chip_lane_29_pack, in_off_chip_lane_29);
  auto res_in_update_0_sm160_292859 = in_generated_compute_unrolled_1(in_off_chip_lane_29_pack);

  hw_uint<16 > in_off_chip_lane_30_pack;
  set_at<0, 16, 16>(in_off_chip_lane_30_pack, in_off_chip_lane_30);
  auto res_in_update_0_sm160_302861 = in_generated_compute_unrolled_1(in_off_chip_lane_30_pack);

  hw_uint<16 > in_off_chip_lane_31_pack;
  set_at<0, 16, 16>(in_off_chip_lane_31_pack, in_off_chip_lane_31);
  auto res_in_update_0_sm160_312863 = in_generated_compute_unrolled_1(in_off_chip_lane_31_pack);
  hw_uint<512 > return_value3383;
  set_at<0, 512, 16>(return_value3383, res_in_update_0_sm160_02801);
  set_at<16, 512, 16>(return_value3383, res_in_update_0_sm160_12803);
  set_at<32, 512, 16>(return_value3383, res_in_update_0_sm160_22805);
  set_at<48, 512, 16>(return_value3383, res_in_update_0_sm160_32807);
  set_at<64, 512, 16>(return_value3383, res_in_update_0_sm160_42809);
  set_at<80, 512, 16>(return_value3383, res_in_update_0_sm160_52811);
  set_at<96, 512, 16>(return_value3383, res_in_update_0_sm160_62813);
  set_at<112, 512, 16>(return_value3383, res_in_update_0_sm160_72815);
  set_at<128, 512, 16>(return_value3383, res_in_update_0_sm160_82817);
  set_at<144, 512, 16>(return_value3383, res_in_update_0_sm160_92819);
  set_at<160, 512, 16>(return_value3383, res_in_update_0_sm160_102821);
  set_at<176, 512, 16>(return_value3383, res_in_update_0_sm160_112823);
  set_at<192, 512, 16>(return_value3383, res_in_update_0_sm160_122825);
  set_at<208, 512, 16>(return_value3383, res_in_update_0_sm160_132827);
  set_at<224, 512, 16>(return_value3383, res_in_update_0_sm160_142829);
  set_at<240, 512, 16>(return_value3383, res_in_update_0_sm160_152831);
  set_at<256, 512, 16>(return_value3383, res_in_update_0_sm160_162833);
  set_at<272, 512, 16>(return_value3383, res_in_update_0_sm160_172835);
  set_at<288, 512, 16>(return_value3383, res_in_update_0_sm160_182837);
  set_at<304, 512, 16>(return_value3383, res_in_update_0_sm160_192839);
  set_at<320, 512, 16>(return_value3383, res_in_update_0_sm160_202841);
  set_at<336, 512, 16>(return_value3383, res_in_update_0_sm160_212843);
  set_at<352, 512, 16>(return_value3383, res_in_update_0_sm160_222845);
  set_at<368, 512, 16>(return_value3383, res_in_update_0_sm160_232847);
  set_at<384, 512, 16>(return_value3383, res_in_update_0_sm160_242849);
  set_at<400, 512, 16>(return_value3383, res_in_update_0_sm160_252851);
  set_at<416, 512, 16>(return_value3383, res_in_update_0_sm160_262853);
  set_at<432, 512, 16>(return_value3383, res_in_update_0_sm160_272855);
  set_at<448, 512, 16>(return_value3383, res_in_update_0_sm160_282857);
  set_at<464, 512, 16>(return_value3383, res_in_update_0_sm160_292859);
  set_at<480, 512, 16>(return_value3383, res_in_update_0_sm160_302861);
  set_at<496, 512, 16>(return_value3383, res_in_update_0_sm160_312863);
  return return_value3383;

}

hw_uint<512> stg5_1_cu3385(hw_uint<16*128>& stg4_FIFO_buf84) {
  hw_uint<16> stg4_FIFO_buf84_lane_0 = stg4_FIFO_buf84.extract<0, 15>();
  hw_uint<16> stg4_FIFO_buf84_lane_1 = stg4_FIFO_buf84.extract<16, 31>();
  hw_uint<16> stg4_FIFO_buf84_lane_2 = stg4_FIFO_buf84.extract<32, 47>();
  hw_uint<16> stg4_FIFO_buf84_lane_3 = stg4_FIFO_buf84.extract<48, 63>();
  hw_uint<16> stg4_FIFO_buf84_lane_4 = stg4_FIFO_buf84.extract<64, 79>();
  hw_uint<16> stg4_FIFO_buf84_lane_5 = stg4_FIFO_buf84.extract<80, 95>();
  hw_uint<16> stg4_FIFO_buf84_lane_6 = stg4_FIFO_buf84.extract<96, 111>();
  hw_uint<16> stg4_FIFO_buf84_lane_7 = stg4_FIFO_buf84.extract<112, 127>();
  hw_uint<16> stg4_FIFO_buf84_lane_8 = stg4_FIFO_buf84.extract<128, 143>();
  hw_uint<16> stg4_FIFO_buf84_lane_9 = stg4_FIFO_buf84.extract<144, 159>();
  hw_uint<16> stg4_FIFO_buf84_lane_10 = stg4_FIFO_buf84.extract<160, 175>();
  hw_uint<16> stg4_FIFO_buf84_lane_11 = stg4_FIFO_buf84.extract<176, 191>();
  hw_uint<16> stg4_FIFO_buf84_lane_12 = stg4_FIFO_buf84.extract<192, 207>();
  hw_uint<16> stg4_FIFO_buf84_lane_13 = stg4_FIFO_buf84.extract<208, 223>();
  hw_uint<16> stg4_FIFO_buf84_lane_14 = stg4_FIFO_buf84.extract<224, 239>();
  hw_uint<16> stg4_FIFO_buf84_lane_15 = stg4_FIFO_buf84.extract<240, 255>();
  hw_uint<16> stg4_FIFO_buf84_lane_16 = stg4_FIFO_buf84.extract<256, 271>();
  hw_uint<16> stg4_FIFO_buf84_lane_17 = stg4_FIFO_buf84.extract<272, 287>();
  hw_uint<16> stg4_FIFO_buf84_lane_18 = stg4_FIFO_buf84.extract<288, 303>();
  hw_uint<16> stg4_FIFO_buf84_lane_19 = stg4_FIFO_buf84.extract<304, 319>();
  hw_uint<16> stg4_FIFO_buf84_lane_20 = stg4_FIFO_buf84.extract<320, 335>();
  hw_uint<16> stg4_FIFO_buf84_lane_21 = stg4_FIFO_buf84.extract<336, 351>();
  hw_uint<16> stg4_FIFO_buf84_lane_22 = stg4_FIFO_buf84.extract<352, 367>();
  hw_uint<16> stg4_FIFO_buf84_lane_23 = stg4_FIFO_buf84.extract<368, 383>();
  hw_uint<16> stg4_FIFO_buf84_lane_24 = stg4_FIFO_buf84.extract<384, 399>();
  hw_uint<16> stg4_FIFO_buf84_lane_25 = stg4_FIFO_buf84.extract<400, 415>();
  hw_uint<16> stg4_FIFO_buf84_lane_26 = stg4_FIFO_buf84.extract<416, 431>();
  hw_uint<16> stg4_FIFO_buf84_lane_27 = stg4_FIFO_buf84.extract<432, 447>();
  hw_uint<16> stg4_FIFO_buf84_lane_28 = stg4_FIFO_buf84.extract<448, 463>();
  hw_uint<16> stg4_FIFO_buf84_lane_29 = stg4_FIFO_buf84.extract<464, 479>();
  hw_uint<16> stg4_FIFO_buf84_lane_30 = stg4_FIFO_buf84.extract<480, 495>();
  hw_uint<16> stg4_FIFO_buf84_lane_31 = stg4_FIFO_buf84.extract<496, 511>();
  hw_uint<16> stg4_FIFO_buf84_lane_32 = stg4_FIFO_buf84.extract<512, 527>();
  hw_uint<16> stg4_FIFO_buf84_lane_33 = stg4_FIFO_buf84.extract<528, 543>();
  hw_uint<16> stg4_FIFO_buf84_lane_34 = stg4_FIFO_buf84.extract<544, 559>();
  hw_uint<16> stg4_FIFO_buf84_lane_35 = stg4_FIFO_buf84.extract<560, 575>();
  hw_uint<16> stg4_FIFO_buf84_lane_36 = stg4_FIFO_buf84.extract<576, 591>();
  hw_uint<16> stg4_FIFO_buf84_lane_37 = stg4_FIFO_buf84.extract<592, 607>();
  hw_uint<16> stg4_FIFO_buf84_lane_38 = stg4_FIFO_buf84.extract<608, 623>();
  hw_uint<16> stg4_FIFO_buf84_lane_39 = stg4_FIFO_buf84.extract<624, 639>();
  hw_uint<16> stg4_FIFO_buf84_lane_40 = stg4_FIFO_buf84.extract<640, 655>();
  hw_uint<16> stg4_FIFO_buf84_lane_41 = stg4_FIFO_buf84.extract<656, 671>();
  hw_uint<16> stg4_FIFO_buf84_lane_42 = stg4_FIFO_buf84.extract<672, 687>();
  hw_uint<16> stg4_FIFO_buf84_lane_43 = stg4_FIFO_buf84.extract<688, 703>();
  hw_uint<16> stg4_FIFO_buf84_lane_44 = stg4_FIFO_buf84.extract<704, 719>();
  hw_uint<16> stg4_FIFO_buf84_lane_45 = stg4_FIFO_buf84.extract<720, 735>();
  hw_uint<16> stg4_FIFO_buf84_lane_46 = stg4_FIFO_buf84.extract<736, 751>();
  hw_uint<16> stg4_FIFO_buf84_lane_47 = stg4_FIFO_buf84.extract<752, 767>();
  hw_uint<16> stg4_FIFO_buf84_lane_48 = stg4_FIFO_buf84.extract<768, 783>();
  hw_uint<16> stg4_FIFO_buf84_lane_49 = stg4_FIFO_buf84.extract<784, 799>();
  hw_uint<16> stg4_FIFO_buf84_lane_50 = stg4_FIFO_buf84.extract<800, 815>();
  hw_uint<16> stg4_FIFO_buf84_lane_51 = stg4_FIFO_buf84.extract<816, 831>();
  hw_uint<16> stg4_FIFO_buf84_lane_52 = stg4_FIFO_buf84.extract<832, 847>();
  hw_uint<16> stg4_FIFO_buf84_lane_53 = stg4_FIFO_buf84.extract<848, 863>();
  hw_uint<16> stg4_FIFO_buf84_lane_54 = stg4_FIFO_buf84.extract<864, 879>();
  hw_uint<16> stg4_FIFO_buf84_lane_55 = stg4_FIFO_buf84.extract<880, 895>();
  hw_uint<16> stg4_FIFO_buf84_lane_56 = stg4_FIFO_buf84.extract<896, 911>();
  hw_uint<16> stg4_FIFO_buf84_lane_57 = stg4_FIFO_buf84.extract<912, 927>();
  hw_uint<16> stg4_FIFO_buf84_lane_58 = stg4_FIFO_buf84.extract<928, 943>();
  hw_uint<16> stg4_FIFO_buf84_lane_59 = stg4_FIFO_buf84.extract<944, 959>();
  hw_uint<16> stg4_FIFO_buf84_lane_60 = stg4_FIFO_buf84.extract<960, 975>();
  hw_uint<16> stg4_FIFO_buf84_lane_61 = stg4_FIFO_buf84.extract<976, 991>();
  hw_uint<16> stg4_FIFO_buf84_lane_62 = stg4_FIFO_buf84.extract<992, 1007>();
  hw_uint<16> stg4_FIFO_buf84_lane_63 = stg4_FIFO_buf84.extract<1008, 1023>();
  hw_uint<16> stg4_FIFO_buf84_lane_64 = stg4_FIFO_buf84.extract<1024, 1039>();
  hw_uint<16> stg4_FIFO_buf84_lane_65 = stg4_FIFO_buf84.extract<1040, 1055>();
  hw_uint<16> stg4_FIFO_buf84_lane_66 = stg4_FIFO_buf84.extract<1056, 1071>();
  hw_uint<16> stg4_FIFO_buf84_lane_67 = stg4_FIFO_buf84.extract<1072, 1087>();
  hw_uint<16> stg4_FIFO_buf84_lane_68 = stg4_FIFO_buf84.extract<1088, 1103>();
  hw_uint<16> stg4_FIFO_buf84_lane_69 = stg4_FIFO_buf84.extract<1104, 1119>();
  hw_uint<16> stg4_FIFO_buf84_lane_70 = stg4_FIFO_buf84.extract<1120, 1135>();
  hw_uint<16> stg4_FIFO_buf84_lane_71 = stg4_FIFO_buf84.extract<1136, 1151>();
  hw_uint<16> stg4_FIFO_buf84_lane_72 = stg4_FIFO_buf84.extract<1152, 1167>();
  hw_uint<16> stg4_FIFO_buf84_lane_73 = stg4_FIFO_buf84.extract<1168, 1183>();
  hw_uint<16> stg4_FIFO_buf84_lane_74 = stg4_FIFO_buf84.extract<1184, 1199>();
  hw_uint<16> stg4_FIFO_buf84_lane_75 = stg4_FIFO_buf84.extract<1200, 1215>();
  hw_uint<16> stg4_FIFO_buf84_lane_76 = stg4_FIFO_buf84.extract<1216, 1231>();
  hw_uint<16> stg4_FIFO_buf84_lane_77 = stg4_FIFO_buf84.extract<1232, 1247>();
  hw_uint<16> stg4_FIFO_buf84_lane_78 = stg4_FIFO_buf84.extract<1248, 1263>();
  hw_uint<16> stg4_FIFO_buf84_lane_79 = stg4_FIFO_buf84.extract<1264, 1279>();
  hw_uint<16> stg4_FIFO_buf84_lane_80 = stg4_FIFO_buf84.extract<1280, 1295>();
  hw_uint<16> stg4_FIFO_buf84_lane_81 = stg4_FIFO_buf84.extract<1296, 1311>();
  hw_uint<16> stg4_FIFO_buf84_lane_82 = stg4_FIFO_buf84.extract<1312, 1327>();
  hw_uint<16> stg4_FIFO_buf84_lane_83 = stg4_FIFO_buf84.extract<1328, 1343>();
  hw_uint<16> stg4_FIFO_buf84_lane_84 = stg4_FIFO_buf84.extract<1344, 1359>();
  hw_uint<16> stg4_FIFO_buf84_lane_85 = stg4_FIFO_buf84.extract<1360, 1375>();
  hw_uint<16> stg4_FIFO_buf84_lane_86 = stg4_FIFO_buf84.extract<1376, 1391>();
  hw_uint<16> stg4_FIFO_buf84_lane_87 = stg4_FIFO_buf84.extract<1392, 1407>();
  hw_uint<16> stg4_FIFO_buf84_lane_88 = stg4_FIFO_buf84.extract<1408, 1423>();
  hw_uint<16> stg4_FIFO_buf84_lane_89 = stg4_FIFO_buf84.extract<1424, 1439>();
  hw_uint<16> stg4_FIFO_buf84_lane_90 = stg4_FIFO_buf84.extract<1440, 1455>();
  hw_uint<16> stg4_FIFO_buf84_lane_91 = stg4_FIFO_buf84.extract<1456, 1471>();
  hw_uint<16> stg4_FIFO_buf84_lane_92 = stg4_FIFO_buf84.extract<1472, 1487>();
  hw_uint<16> stg4_FIFO_buf84_lane_93 = stg4_FIFO_buf84.extract<1488, 1503>();
  hw_uint<16> stg4_FIFO_buf84_lane_94 = stg4_FIFO_buf84.extract<1504, 1519>();
  hw_uint<16> stg4_FIFO_buf84_lane_95 = stg4_FIFO_buf84.extract<1520, 1535>();
  hw_uint<16> stg4_FIFO_buf84_lane_96 = stg4_FIFO_buf84.extract<1536, 1551>();
  hw_uint<16> stg4_FIFO_buf84_lane_97 = stg4_FIFO_buf84.extract<1552, 1567>();
  hw_uint<16> stg4_FIFO_buf84_lane_98 = stg4_FIFO_buf84.extract<1568, 1583>();
  hw_uint<16> stg4_FIFO_buf84_lane_99 = stg4_FIFO_buf84.extract<1584, 1599>();
  hw_uint<16> stg4_FIFO_buf84_lane_100 = stg4_FIFO_buf84.extract<1600, 1615>();
  hw_uint<16> stg4_FIFO_buf84_lane_101 = stg4_FIFO_buf84.extract<1616, 1631>();
  hw_uint<16> stg4_FIFO_buf84_lane_102 = stg4_FIFO_buf84.extract<1632, 1647>();
  hw_uint<16> stg4_FIFO_buf84_lane_103 = stg4_FIFO_buf84.extract<1648, 1663>();
  hw_uint<16> stg4_FIFO_buf84_lane_104 = stg4_FIFO_buf84.extract<1664, 1679>();
  hw_uint<16> stg4_FIFO_buf84_lane_105 = stg4_FIFO_buf84.extract<1680, 1695>();
  hw_uint<16> stg4_FIFO_buf84_lane_106 = stg4_FIFO_buf84.extract<1696, 1711>();
  hw_uint<16> stg4_FIFO_buf84_lane_107 = stg4_FIFO_buf84.extract<1712, 1727>();
  hw_uint<16> stg4_FIFO_buf84_lane_108 = stg4_FIFO_buf84.extract<1728, 1743>();
  hw_uint<16> stg4_FIFO_buf84_lane_109 = stg4_FIFO_buf84.extract<1744, 1759>();
  hw_uint<16> stg4_FIFO_buf84_lane_110 = stg4_FIFO_buf84.extract<1760, 1775>();
  hw_uint<16> stg4_FIFO_buf84_lane_111 = stg4_FIFO_buf84.extract<1776, 1791>();
  hw_uint<16> stg4_FIFO_buf84_lane_112 = stg4_FIFO_buf84.extract<1792, 1807>();
  hw_uint<16> stg4_FIFO_buf84_lane_113 = stg4_FIFO_buf84.extract<1808, 1823>();
  hw_uint<16> stg4_FIFO_buf84_lane_114 = stg4_FIFO_buf84.extract<1824, 1839>();
  hw_uint<16> stg4_FIFO_buf84_lane_115 = stg4_FIFO_buf84.extract<1840, 1855>();
  hw_uint<16> stg4_FIFO_buf84_lane_116 = stg4_FIFO_buf84.extract<1856, 1871>();
  hw_uint<16> stg4_FIFO_buf84_lane_117 = stg4_FIFO_buf84.extract<1872, 1887>();
  hw_uint<16> stg4_FIFO_buf84_lane_118 = stg4_FIFO_buf84.extract<1888, 1903>();
  hw_uint<16> stg4_FIFO_buf84_lane_119 = stg4_FIFO_buf84.extract<1904, 1919>();
  hw_uint<16> stg4_FIFO_buf84_lane_120 = stg4_FIFO_buf84.extract<1920, 1935>();
  hw_uint<16> stg4_FIFO_buf84_lane_121 = stg4_FIFO_buf84.extract<1936, 1951>();
  hw_uint<16> stg4_FIFO_buf84_lane_122 = stg4_FIFO_buf84.extract<1952, 1967>();
  hw_uint<16> stg4_FIFO_buf84_lane_123 = stg4_FIFO_buf84.extract<1968, 1983>();
  hw_uint<16> stg4_FIFO_buf84_lane_124 = stg4_FIFO_buf84.extract<1984, 1999>();
  hw_uint<16> stg4_FIFO_buf84_lane_125 = stg4_FIFO_buf84.extract<2000, 2015>();
  hw_uint<16> stg4_FIFO_buf84_lane_126 = stg4_FIFO_buf84.extract<2016, 2031>();
  hw_uint<16> stg4_FIFO_buf84_lane_127 = stg4_FIFO_buf84.extract<2032, 2047>();

	
  hw_uint<64 > stg4_FIFO_buf84_lane_3_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_0);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_1);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_2);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_3);
  auto res_stg5_update_0_sm161_02865 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_3_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_7_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_4);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_5);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_6);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_7);
  auto res_stg5_update_0_sm161_12867 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_7_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_11_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_8);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_9);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_10);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_11);
  auto res_stg5_update_0_sm161_22869 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_11_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_15_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_12);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_13);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_14);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_15);
  auto res_stg5_update_0_sm161_32871 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_15_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_19_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_16);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_17);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_18);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_19);
  auto res_stg5_update_0_sm161_42873 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_19_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_23_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_20);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_21);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_22);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_23);
  auto res_stg5_update_0_sm161_52875 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_23_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_27_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_24);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_25);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_26);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_27);
  auto res_stg5_update_0_sm161_62877 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_27_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_31_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_28);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_29);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_30);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_31);
  auto res_stg5_update_0_sm161_72879 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_31_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_35_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_32);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_33);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_34);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_35);
  auto res_stg5_update_0_sm161_82881 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_35_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_39_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_36);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_37);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_38);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_39);
  auto res_stg5_update_0_sm161_92883 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_39_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_43_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_40);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_41);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_42);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_43);
  auto res_stg5_update_0_sm161_102885 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_43_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_47_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_44);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_45);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_46);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_47);
  auto res_stg5_update_0_sm161_112887 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_47_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_51_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_48);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_49);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_50);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_51);
  auto res_stg5_update_0_sm161_122889 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_51_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_55_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_52);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_53);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_54);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_55);
  auto res_stg5_update_0_sm161_132891 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_55_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_59_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_56);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_57);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_58);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_59);
  auto res_stg5_update_0_sm161_142893 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_59_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_63_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_60);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_61);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_62);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_63);
  auto res_stg5_update_0_sm161_152895 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_63_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_67_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_64);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_65);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_66);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_67);
  auto res_stg5_update_0_sm161_162897 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_67_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_71_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_68);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_69);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_70);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_71);
  auto res_stg5_update_0_sm161_172899 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_71_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_75_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_72);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_73);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_74);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_75);
  auto res_stg5_update_0_sm161_182901 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_75_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_79_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_76);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_77);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_78);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_79);
  auto res_stg5_update_0_sm161_192903 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_79_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_83_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_80);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_81);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_82);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_83);
  auto res_stg5_update_0_sm161_202905 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_83_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_87_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_84);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_85);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_86);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_87);
  auto res_stg5_update_0_sm161_212907 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_87_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_91_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_88);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_89);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_90);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_91);
  auto res_stg5_update_0_sm161_222909 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_91_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_95_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_92);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_93);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_94);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_95);
  auto res_stg5_update_0_sm161_232911 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_95_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_99_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_96);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_97);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_98);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_99);
  auto res_stg5_update_0_sm161_242913 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_99_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_103_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_100);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_101);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_102);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_103);
  auto res_stg5_update_0_sm161_252915 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_103_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_107_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_104);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_105);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_106);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_107);
  auto res_stg5_update_0_sm161_262917 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_107_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_111_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_108);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_109);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_110);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_111);
  auto res_stg5_update_0_sm161_272919 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_111_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_115_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_112);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_113);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_114);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_115);
  auto res_stg5_update_0_sm161_282921 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_115_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_119_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_116);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_117);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_118);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_119);
  auto res_stg5_update_0_sm161_292923 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_119_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_123_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_120);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_121);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_122);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_123);
  auto res_stg5_update_0_sm161_302925 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_123_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_127_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_124);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_125);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_126);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_127);
  auto res_stg5_update_0_sm161_312927 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_127_pack);
  hw_uint<512 > return_value3386;
  set_at<0, 512, 16>(return_value3386, res_stg5_update_0_sm161_02865);
  set_at<16, 512, 16>(return_value3386, res_stg5_update_0_sm161_12867);
  set_at<32, 512, 16>(return_value3386, res_stg5_update_0_sm161_22869);
  set_at<48, 512, 16>(return_value3386, res_stg5_update_0_sm161_32871);
  set_at<64, 512, 16>(return_value3386, res_stg5_update_0_sm161_42873);
  set_at<80, 512, 16>(return_value3386, res_stg5_update_0_sm161_52875);
  set_at<96, 512, 16>(return_value3386, res_stg5_update_0_sm161_62877);
  set_at<112, 512, 16>(return_value3386, res_stg5_update_0_sm161_72879);
  set_at<128, 512, 16>(return_value3386, res_stg5_update_0_sm161_82881);
  set_at<144, 512, 16>(return_value3386, res_stg5_update_0_sm161_92883);
  set_at<160, 512, 16>(return_value3386, res_stg5_update_0_sm161_102885);
  set_at<176, 512, 16>(return_value3386, res_stg5_update_0_sm161_112887);
  set_at<192, 512, 16>(return_value3386, res_stg5_update_0_sm161_122889);
  set_at<208, 512, 16>(return_value3386, res_stg5_update_0_sm161_132891);
  set_at<224, 512, 16>(return_value3386, res_stg5_update_0_sm161_142893);
  set_at<240, 512, 16>(return_value3386, res_stg5_update_0_sm161_152895);
  set_at<256, 512, 16>(return_value3386, res_stg5_update_0_sm161_162897);
  set_at<272, 512, 16>(return_value3386, res_stg5_update_0_sm161_172899);
  set_at<288, 512, 16>(return_value3386, res_stg5_update_0_sm161_182901);
  set_at<304, 512, 16>(return_value3386, res_stg5_update_0_sm161_192903);
  set_at<320, 512, 16>(return_value3386, res_stg5_update_0_sm161_202905);
  set_at<336, 512, 16>(return_value3386, res_stg5_update_0_sm161_212907);
  set_at<352, 512, 16>(return_value3386, res_stg5_update_0_sm161_222909);
  set_at<368, 512, 16>(return_value3386, res_stg5_update_0_sm161_232911);
  set_at<384, 512, 16>(return_value3386, res_stg5_update_0_sm161_242913);
  set_at<400, 512, 16>(return_value3386, res_stg5_update_0_sm161_252915);
  set_at<416, 512, 16>(return_value3386, res_stg5_update_0_sm161_262917);
  set_at<432, 512, 16>(return_value3386, res_stg5_update_0_sm161_272919);
  set_at<448, 512, 16>(return_value3386, res_stg5_update_0_sm161_282921);
  set_at<464, 512, 16>(return_value3386, res_stg5_update_0_sm161_292923);
  set_at<480, 512, 16>(return_value3386, res_stg5_update_0_sm161_302925);
  set_at<496, 512, 16>(return_value3386, res_stg5_update_0_sm161_312927);
  return return_value3386;

}

hw_uint<512> stg0_1_cu3388(hw_uint<16*128>& in_FIFO_buf4) {
  hw_uint<16> in_FIFO_buf4_lane_0 = in_FIFO_buf4.extract<0, 15>();
  hw_uint<16> in_FIFO_buf4_lane_1 = in_FIFO_buf4.extract<16, 31>();
  hw_uint<16> in_FIFO_buf4_lane_2 = in_FIFO_buf4.extract<32, 47>();
  hw_uint<16> in_FIFO_buf4_lane_3 = in_FIFO_buf4.extract<48, 63>();
  hw_uint<16> in_FIFO_buf4_lane_4 = in_FIFO_buf4.extract<64, 79>();
  hw_uint<16> in_FIFO_buf4_lane_5 = in_FIFO_buf4.extract<80, 95>();
  hw_uint<16> in_FIFO_buf4_lane_6 = in_FIFO_buf4.extract<96, 111>();
  hw_uint<16> in_FIFO_buf4_lane_7 = in_FIFO_buf4.extract<112, 127>();
  hw_uint<16> in_FIFO_buf4_lane_8 = in_FIFO_buf4.extract<128, 143>();
  hw_uint<16> in_FIFO_buf4_lane_9 = in_FIFO_buf4.extract<144, 159>();
  hw_uint<16> in_FIFO_buf4_lane_10 = in_FIFO_buf4.extract<160, 175>();
  hw_uint<16> in_FIFO_buf4_lane_11 = in_FIFO_buf4.extract<176, 191>();
  hw_uint<16> in_FIFO_buf4_lane_12 = in_FIFO_buf4.extract<192, 207>();
  hw_uint<16> in_FIFO_buf4_lane_13 = in_FIFO_buf4.extract<208, 223>();
  hw_uint<16> in_FIFO_buf4_lane_14 = in_FIFO_buf4.extract<224, 239>();
  hw_uint<16> in_FIFO_buf4_lane_15 = in_FIFO_buf4.extract<240, 255>();
  hw_uint<16> in_FIFO_buf4_lane_16 = in_FIFO_buf4.extract<256, 271>();
  hw_uint<16> in_FIFO_buf4_lane_17 = in_FIFO_buf4.extract<272, 287>();
  hw_uint<16> in_FIFO_buf4_lane_18 = in_FIFO_buf4.extract<288, 303>();
  hw_uint<16> in_FIFO_buf4_lane_19 = in_FIFO_buf4.extract<304, 319>();
  hw_uint<16> in_FIFO_buf4_lane_20 = in_FIFO_buf4.extract<320, 335>();
  hw_uint<16> in_FIFO_buf4_lane_21 = in_FIFO_buf4.extract<336, 351>();
  hw_uint<16> in_FIFO_buf4_lane_22 = in_FIFO_buf4.extract<352, 367>();
  hw_uint<16> in_FIFO_buf4_lane_23 = in_FIFO_buf4.extract<368, 383>();
  hw_uint<16> in_FIFO_buf4_lane_24 = in_FIFO_buf4.extract<384, 399>();
  hw_uint<16> in_FIFO_buf4_lane_25 = in_FIFO_buf4.extract<400, 415>();
  hw_uint<16> in_FIFO_buf4_lane_26 = in_FIFO_buf4.extract<416, 431>();
  hw_uint<16> in_FIFO_buf4_lane_27 = in_FIFO_buf4.extract<432, 447>();
  hw_uint<16> in_FIFO_buf4_lane_28 = in_FIFO_buf4.extract<448, 463>();
  hw_uint<16> in_FIFO_buf4_lane_29 = in_FIFO_buf4.extract<464, 479>();
  hw_uint<16> in_FIFO_buf4_lane_30 = in_FIFO_buf4.extract<480, 495>();
  hw_uint<16> in_FIFO_buf4_lane_31 = in_FIFO_buf4.extract<496, 511>();
  hw_uint<16> in_FIFO_buf4_lane_32 = in_FIFO_buf4.extract<512, 527>();
  hw_uint<16> in_FIFO_buf4_lane_33 = in_FIFO_buf4.extract<528, 543>();
  hw_uint<16> in_FIFO_buf4_lane_34 = in_FIFO_buf4.extract<544, 559>();
  hw_uint<16> in_FIFO_buf4_lane_35 = in_FIFO_buf4.extract<560, 575>();
  hw_uint<16> in_FIFO_buf4_lane_36 = in_FIFO_buf4.extract<576, 591>();
  hw_uint<16> in_FIFO_buf4_lane_37 = in_FIFO_buf4.extract<592, 607>();
  hw_uint<16> in_FIFO_buf4_lane_38 = in_FIFO_buf4.extract<608, 623>();
  hw_uint<16> in_FIFO_buf4_lane_39 = in_FIFO_buf4.extract<624, 639>();
  hw_uint<16> in_FIFO_buf4_lane_40 = in_FIFO_buf4.extract<640, 655>();
  hw_uint<16> in_FIFO_buf4_lane_41 = in_FIFO_buf4.extract<656, 671>();
  hw_uint<16> in_FIFO_buf4_lane_42 = in_FIFO_buf4.extract<672, 687>();
  hw_uint<16> in_FIFO_buf4_lane_43 = in_FIFO_buf4.extract<688, 703>();
  hw_uint<16> in_FIFO_buf4_lane_44 = in_FIFO_buf4.extract<704, 719>();
  hw_uint<16> in_FIFO_buf4_lane_45 = in_FIFO_buf4.extract<720, 735>();
  hw_uint<16> in_FIFO_buf4_lane_46 = in_FIFO_buf4.extract<736, 751>();
  hw_uint<16> in_FIFO_buf4_lane_47 = in_FIFO_buf4.extract<752, 767>();
  hw_uint<16> in_FIFO_buf4_lane_48 = in_FIFO_buf4.extract<768, 783>();
  hw_uint<16> in_FIFO_buf4_lane_49 = in_FIFO_buf4.extract<784, 799>();
  hw_uint<16> in_FIFO_buf4_lane_50 = in_FIFO_buf4.extract<800, 815>();
  hw_uint<16> in_FIFO_buf4_lane_51 = in_FIFO_buf4.extract<816, 831>();
  hw_uint<16> in_FIFO_buf4_lane_52 = in_FIFO_buf4.extract<832, 847>();
  hw_uint<16> in_FIFO_buf4_lane_53 = in_FIFO_buf4.extract<848, 863>();
  hw_uint<16> in_FIFO_buf4_lane_54 = in_FIFO_buf4.extract<864, 879>();
  hw_uint<16> in_FIFO_buf4_lane_55 = in_FIFO_buf4.extract<880, 895>();
  hw_uint<16> in_FIFO_buf4_lane_56 = in_FIFO_buf4.extract<896, 911>();
  hw_uint<16> in_FIFO_buf4_lane_57 = in_FIFO_buf4.extract<912, 927>();
  hw_uint<16> in_FIFO_buf4_lane_58 = in_FIFO_buf4.extract<928, 943>();
  hw_uint<16> in_FIFO_buf4_lane_59 = in_FIFO_buf4.extract<944, 959>();
  hw_uint<16> in_FIFO_buf4_lane_60 = in_FIFO_buf4.extract<960, 975>();
  hw_uint<16> in_FIFO_buf4_lane_61 = in_FIFO_buf4.extract<976, 991>();
  hw_uint<16> in_FIFO_buf4_lane_62 = in_FIFO_buf4.extract<992, 1007>();
  hw_uint<16> in_FIFO_buf4_lane_63 = in_FIFO_buf4.extract<1008, 1023>();
  hw_uint<16> in_FIFO_buf4_lane_64 = in_FIFO_buf4.extract<1024, 1039>();
  hw_uint<16> in_FIFO_buf4_lane_65 = in_FIFO_buf4.extract<1040, 1055>();
  hw_uint<16> in_FIFO_buf4_lane_66 = in_FIFO_buf4.extract<1056, 1071>();
  hw_uint<16> in_FIFO_buf4_lane_67 = in_FIFO_buf4.extract<1072, 1087>();
  hw_uint<16> in_FIFO_buf4_lane_68 = in_FIFO_buf4.extract<1088, 1103>();
  hw_uint<16> in_FIFO_buf4_lane_69 = in_FIFO_buf4.extract<1104, 1119>();
  hw_uint<16> in_FIFO_buf4_lane_70 = in_FIFO_buf4.extract<1120, 1135>();
  hw_uint<16> in_FIFO_buf4_lane_71 = in_FIFO_buf4.extract<1136, 1151>();
  hw_uint<16> in_FIFO_buf4_lane_72 = in_FIFO_buf4.extract<1152, 1167>();
  hw_uint<16> in_FIFO_buf4_lane_73 = in_FIFO_buf4.extract<1168, 1183>();
  hw_uint<16> in_FIFO_buf4_lane_74 = in_FIFO_buf4.extract<1184, 1199>();
  hw_uint<16> in_FIFO_buf4_lane_75 = in_FIFO_buf4.extract<1200, 1215>();
  hw_uint<16> in_FIFO_buf4_lane_76 = in_FIFO_buf4.extract<1216, 1231>();
  hw_uint<16> in_FIFO_buf4_lane_77 = in_FIFO_buf4.extract<1232, 1247>();
  hw_uint<16> in_FIFO_buf4_lane_78 = in_FIFO_buf4.extract<1248, 1263>();
  hw_uint<16> in_FIFO_buf4_lane_79 = in_FIFO_buf4.extract<1264, 1279>();
  hw_uint<16> in_FIFO_buf4_lane_80 = in_FIFO_buf4.extract<1280, 1295>();
  hw_uint<16> in_FIFO_buf4_lane_81 = in_FIFO_buf4.extract<1296, 1311>();
  hw_uint<16> in_FIFO_buf4_lane_82 = in_FIFO_buf4.extract<1312, 1327>();
  hw_uint<16> in_FIFO_buf4_lane_83 = in_FIFO_buf4.extract<1328, 1343>();
  hw_uint<16> in_FIFO_buf4_lane_84 = in_FIFO_buf4.extract<1344, 1359>();
  hw_uint<16> in_FIFO_buf4_lane_85 = in_FIFO_buf4.extract<1360, 1375>();
  hw_uint<16> in_FIFO_buf4_lane_86 = in_FIFO_buf4.extract<1376, 1391>();
  hw_uint<16> in_FIFO_buf4_lane_87 = in_FIFO_buf4.extract<1392, 1407>();
  hw_uint<16> in_FIFO_buf4_lane_88 = in_FIFO_buf4.extract<1408, 1423>();
  hw_uint<16> in_FIFO_buf4_lane_89 = in_FIFO_buf4.extract<1424, 1439>();
  hw_uint<16> in_FIFO_buf4_lane_90 = in_FIFO_buf4.extract<1440, 1455>();
  hw_uint<16> in_FIFO_buf4_lane_91 = in_FIFO_buf4.extract<1456, 1471>();
  hw_uint<16> in_FIFO_buf4_lane_92 = in_FIFO_buf4.extract<1472, 1487>();
  hw_uint<16> in_FIFO_buf4_lane_93 = in_FIFO_buf4.extract<1488, 1503>();
  hw_uint<16> in_FIFO_buf4_lane_94 = in_FIFO_buf4.extract<1504, 1519>();
  hw_uint<16> in_FIFO_buf4_lane_95 = in_FIFO_buf4.extract<1520, 1535>();
  hw_uint<16> in_FIFO_buf4_lane_96 = in_FIFO_buf4.extract<1536, 1551>();
  hw_uint<16> in_FIFO_buf4_lane_97 = in_FIFO_buf4.extract<1552, 1567>();
  hw_uint<16> in_FIFO_buf4_lane_98 = in_FIFO_buf4.extract<1568, 1583>();
  hw_uint<16> in_FIFO_buf4_lane_99 = in_FIFO_buf4.extract<1584, 1599>();
  hw_uint<16> in_FIFO_buf4_lane_100 = in_FIFO_buf4.extract<1600, 1615>();
  hw_uint<16> in_FIFO_buf4_lane_101 = in_FIFO_buf4.extract<1616, 1631>();
  hw_uint<16> in_FIFO_buf4_lane_102 = in_FIFO_buf4.extract<1632, 1647>();
  hw_uint<16> in_FIFO_buf4_lane_103 = in_FIFO_buf4.extract<1648, 1663>();
  hw_uint<16> in_FIFO_buf4_lane_104 = in_FIFO_buf4.extract<1664, 1679>();
  hw_uint<16> in_FIFO_buf4_lane_105 = in_FIFO_buf4.extract<1680, 1695>();
  hw_uint<16> in_FIFO_buf4_lane_106 = in_FIFO_buf4.extract<1696, 1711>();
  hw_uint<16> in_FIFO_buf4_lane_107 = in_FIFO_buf4.extract<1712, 1727>();
  hw_uint<16> in_FIFO_buf4_lane_108 = in_FIFO_buf4.extract<1728, 1743>();
  hw_uint<16> in_FIFO_buf4_lane_109 = in_FIFO_buf4.extract<1744, 1759>();
  hw_uint<16> in_FIFO_buf4_lane_110 = in_FIFO_buf4.extract<1760, 1775>();
  hw_uint<16> in_FIFO_buf4_lane_111 = in_FIFO_buf4.extract<1776, 1791>();
  hw_uint<16> in_FIFO_buf4_lane_112 = in_FIFO_buf4.extract<1792, 1807>();
  hw_uint<16> in_FIFO_buf4_lane_113 = in_FIFO_buf4.extract<1808, 1823>();
  hw_uint<16> in_FIFO_buf4_lane_114 = in_FIFO_buf4.extract<1824, 1839>();
  hw_uint<16> in_FIFO_buf4_lane_115 = in_FIFO_buf4.extract<1840, 1855>();
  hw_uint<16> in_FIFO_buf4_lane_116 = in_FIFO_buf4.extract<1856, 1871>();
  hw_uint<16> in_FIFO_buf4_lane_117 = in_FIFO_buf4.extract<1872, 1887>();
  hw_uint<16> in_FIFO_buf4_lane_118 = in_FIFO_buf4.extract<1888, 1903>();
  hw_uint<16> in_FIFO_buf4_lane_119 = in_FIFO_buf4.extract<1904, 1919>();
  hw_uint<16> in_FIFO_buf4_lane_120 = in_FIFO_buf4.extract<1920, 1935>();
  hw_uint<16> in_FIFO_buf4_lane_121 = in_FIFO_buf4.extract<1936, 1951>();
  hw_uint<16> in_FIFO_buf4_lane_122 = in_FIFO_buf4.extract<1952, 1967>();
  hw_uint<16> in_FIFO_buf4_lane_123 = in_FIFO_buf4.extract<1968, 1983>();
  hw_uint<16> in_FIFO_buf4_lane_124 = in_FIFO_buf4.extract<1984, 1999>();
  hw_uint<16> in_FIFO_buf4_lane_125 = in_FIFO_buf4.extract<2000, 2015>();
  hw_uint<16> in_FIFO_buf4_lane_126 = in_FIFO_buf4.extract<2016, 2031>();
  hw_uint<16> in_FIFO_buf4_lane_127 = in_FIFO_buf4.extract<2032, 2047>();

	
  hw_uint<64 > in_FIFO_buf4_lane_3_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_0);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_1);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_2);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_3);
  auto res_stg0_update_0_sm162_03185 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_3_pack);

  hw_uint<64 > in_FIFO_buf4_lane_7_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_4);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_5);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_6);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_7);
  auto res_stg0_update_0_sm162_13187 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_7_pack);

  hw_uint<64 > in_FIFO_buf4_lane_11_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_8);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_9);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_10);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_11);
  auto res_stg0_update_0_sm162_23189 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_11_pack);

  hw_uint<64 > in_FIFO_buf4_lane_15_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_12);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_13);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_14);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_15);
  auto res_stg0_update_0_sm162_33191 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_15_pack);

  hw_uint<64 > in_FIFO_buf4_lane_19_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_16);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_17);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_18);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_19);
  auto res_stg0_update_0_sm162_43193 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_19_pack);

  hw_uint<64 > in_FIFO_buf4_lane_23_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_20);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_21);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_22);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_23);
  auto res_stg0_update_0_sm162_53195 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_23_pack);

  hw_uint<64 > in_FIFO_buf4_lane_27_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_24);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_25);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_26);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_27);
  auto res_stg0_update_0_sm162_63197 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_27_pack);

  hw_uint<64 > in_FIFO_buf4_lane_31_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_28);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_29);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_30);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_31);
  auto res_stg0_update_0_sm162_73199 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_31_pack);

  hw_uint<64 > in_FIFO_buf4_lane_35_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_32);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_33);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_34);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_35);
  auto res_stg0_update_0_sm162_83201 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_35_pack);

  hw_uint<64 > in_FIFO_buf4_lane_39_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_36);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_37);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_38);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_39);
  auto res_stg0_update_0_sm162_93203 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_39_pack);

  hw_uint<64 > in_FIFO_buf4_lane_43_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_40);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_41);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_42);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_43);
  auto res_stg0_update_0_sm162_103205 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_43_pack);

  hw_uint<64 > in_FIFO_buf4_lane_47_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_44);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_45);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_46);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_47);
  auto res_stg0_update_0_sm162_113207 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_47_pack);

  hw_uint<64 > in_FIFO_buf4_lane_51_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_48);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_49);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_50);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_51);
  auto res_stg0_update_0_sm162_123209 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_51_pack);

  hw_uint<64 > in_FIFO_buf4_lane_55_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_52);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_53);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_54);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_55);
  auto res_stg0_update_0_sm162_133211 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_55_pack);

  hw_uint<64 > in_FIFO_buf4_lane_59_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_56);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_57);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_58);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_59);
  auto res_stg0_update_0_sm162_143213 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_59_pack);

  hw_uint<64 > in_FIFO_buf4_lane_63_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_60);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_61);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_62);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_63);
  auto res_stg0_update_0_sm162_153215 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_63_pack);

  hw_uint<64 > in_FIFO_buf4_lane_67_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_64);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_65);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_66);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_67);
  auto res_stg0_update_0_sm162_163217 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_67_pack);

  hw_uint<64 > in_FIFO_buf4_lane_71_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_68);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_69);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_70);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_71);
  auto res_stg0_update_0_sm162_173219 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_71_pack);

  hw_uint<64 > in_FIFO_buf4_lane_75_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_72);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_73);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_74);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_75);
  auto res_stg0_update_0_sm162_183221 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_75_pack);

  hw_uint<64 > in_FIFO_buf4_lane_79_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_76);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_77);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_78);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_79);
  auto res_stg0_update_0_sm162_193223 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_79_pack);

  hw_uint<64 > in_FIFO_buf4_lane_83_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_80);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_81);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_82);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_83);
  auto res_stg0_update_0_sm162_203225 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_83_pack);

  hw_uint<64 > in_FIFO_buf4_lane_87_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_84);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_85);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_86);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_87);
  auto res_stg0_update_0_sm162_213227 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_87_pack);

  hw_uint<64 > in_FIFO_buf4_lane_91_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_88);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_89);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_90);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_91);
  auto res_stg0_update_0_sm162_223229 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_91_pack);

  hw_uint<64 > in_FIFO_buf4_lane_95_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_92);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_93);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_94);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_95);
  auto res_stg0_update_0_sm162_233231 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_95_pack);

  hw_uint<64 > in_FIFO_buf4_lane_99_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_96);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_97);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_98);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_99);
  auto res_stg0_update_0_sm162_243233 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_99_pack);

  hw_uint<64 > in_FIFO_buf4_lane_103_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_100);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_101);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_102);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_103);
  auto res_stg0_update_0_sm162_253235 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_103_pack);

  hw_uint<64 > in_FIFO_buf4_lane_107_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_104);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_105);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_106);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_107);
  auto res_stg0_update_0_sm162_263237 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_107_pack);

  hw_uint<64 > in_FIFO_buf4_lane_111_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_108);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_109);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_110);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_111);
  auto res_stg0_update_0_sm162_273239 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_111_pack);

  hw_uint<64 > in_FIFO_buf4_lane_115_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_112);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_113);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_114);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_115);
  auto res_stg0_update_0_sm162_283241 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_115_pack);

  hw_uint<64 > in_FIFO_buf4_lane_119_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_116);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_117);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_118);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_119);
  auto res_stg0_update_0_sm162_293243 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_119_pack);

  hw_uint<64 > in_FIFO_buf4_lane_123_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_120);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_121);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_122);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_123);
  auto res_stg0_update_0_sm162_303245 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_123_pack);

  hw_uint<64 > in_FIFO_buf4_lane_127_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_124);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_125);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_126);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_127);
  auto res_stg0_update_0_sm162_313247 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_127_pack);
  hw_uint<512 > return_value3389;
  set_at<0, 512, 16>(return_value3389, res_stg0_update_0_sm162_03185);
  set_at<16, 512, 16>(return_value3389, res_stg0_update_0_sm162_13187);
  set_at<32, 512, 16>(return_value3389, res_stg0_update_0_sm162_23189);
  set_at<48, 512, 16>(return_value3389, res_stg0_update_0_sm162_33191);
  set_at<64, 512, 16>(return_value3389, res_stg0_update_0_sm162_43193);
  set_at<80, 512, 16>(return_value3389, res_stg0_update_0_sm162_53195);
  set_at<96, 512, 16>(return_value3389, res_stg0_update_0_sm162_63197);
  set_at<112, 512, 16>(return_value3389, res_stg0_update_0_sm162_73199);
  set_at<128, 512, 16>(return_value3389, res_stg0_update_0_sm162_83201);
  set_at<144, 512, 16>(return_value3389, res_stg0_update_0_sm162_93203);
  set_at<160, 512, 16>(return_value3389, res_stg0_update_0_sm162_103205);
  set_at<176, 512, 16>(return_value3389, res_stg0_update_0_sm162_113207);
  set_at<192, 512, 16>(return_value3389, res_stg0_update_0_sm162_123209);
  set_at<208, 512, 16>(return_value3389, res_stg0_update_0_sm162_133211);
  set_at<224, 512, 16>(return_value3389, res_stg0_update_0_sm162_143213);
  set_at<240, 512, 16>(return_value3389, res_stg0_update_0_sm162_153215);
  set_at<256, 512, 16>(return_value3389, res_stg0_update_0_sm162_163217);
  set_at<272, 512, 16>(return_value3389, res_stg0_update_0_sm162_173219);
  set_at<288, 512, 16>(return_value3389, res_stg0_update_0_sm162_183221);
  set_at<304, 512, 16>(return_value3389, res_stg0_update_0_sm162_193223);
  set_at<320, 512, 16>(return_value3389, res_stg0_update_0_sm162_203225);
  set_at<336, 512, 16>(return_value3389, res_stg0_update_0_sm162_213227);
  set_at<352, 512, 16>(return_value3389, res_stg0_update_0_sm162_223229);
  set_at<368, 512, 16>(return_value3389, res_stg0_update_0_sm162_233231);
  set_at<384, 512, 16>(return_value3389, res_stg0_update_0_sm162_243233);
  set_at<400, 512, 16>(return_value3389, res_stg0_update_0_sm162_253235);
  set_at<416, 512, 16>(return_value3389, res_stg0_update_0_sm162_263237);
  set_at<432, 512, 16>(return_value3389, res_stg0_update_0_sm162_273239);
  set_at<448, 512, 16>(return_value3389, res_stg0_update_0_sm162_283241);
  set_at<464, 512, 16>(return_value3389, res_stg0_update_0_sm162_293243);
  set_at<480, 512, 16>(return_value3389, res_stg0_update_0_sm162_303245);
  set_at<496, 512, 16>(return_value3389, res_stg0_update_0_sm162_313247);
  return return_value3389;

}

hw_uint<512> stg12_1_cu3391(hw_uint<16*128>& stg11_FIFO_buf36) {
  hw_uint<16> stg11_FIFO_buf36_lane_0 = stg11_FIFO_buf36.extract<0, 15>();
  hw_uint<16> stg11_FIFO_buf36_lane_1 = stg11_FIFO_buf36.extract<16, 31>();
  hw_uint<16> stg11_FIFO_buf36_lane_2 = stg11_FIFO_buf36.extract<32, 47>();
  hw_uint<16> stg11_FIFO_buf36_lane_3 = stg11_FIFO_buf36.extract<48, 63>();
  hw_uint<16> stg11_FIFO_buf36_lane_4 = stg11_FIFO_buf36.extract<64, 79>();
  hw_uint<16> stg11_FIFO_buf36_lane_5 = stg11_FIFO_buf36.extract<80, 95>();
  hw_uint<16> stg11_FIFO_buf36_lane_6 = stg11_FIFO_buf36.extract<96, 111>();
  hw_uint<16> stg11_FIFO_buf36_lane_7 = stg11_FIFO_buf36.extract<112, 127>();
  hw_uint<16> stg11_FIFO_buf36_lane_8 = stg11_FIFO_buf36.extract<128, 143>();
  hw_uint<16> stg11_FIFO_buf36_lane_9 = stg11_FIFO_buf36.extract<144, 159>();
  hw_uint<16> stg11_FIFO_buf36_lane_10 = stg11_FIFO_buf36.extract<160, 175>();
  hw_uint<16> stg11_FIFO_buf36_lane_11 = stg11_FIFO_buf36.extract<176, 191>();
  hw_uint<16> stg11_FIFO_buf36_lane_12 = stg11_FIFO_buf36.extract<192, 207>();
  hw_uint<16> stg11_FIFO_buf36_lane_13 = stg11_FIFO_buf36.extract<208, 223>();
  hw_uint<16> stg11_FIFO_buf36_lane_14 = stg11_FIFO_buf36.extract<224, 239>();
  hw_uint<16> stg11_FIFO_buf36_lane_15 = stg11_FIFO_buf36.extract<240, 255>();
  hw_uint<16> stg11_FIFO_buf36_lane_16 = stg11_FIFO_buf36.extract<256, 271>();
  hw_uint<16> stg11_FIFO_buf36_lane_17 = stg11_FIFO_buf36.extract<272, 287>();
  hw_uint<16> stg11_FIFO_buf36_lane_18 = stg11_FIFO_buf36.extract<288, 303>();
  hw_uint<16> stg11_FIFO_buf36_lane_19 = stg11_FIFO_buf36.extract<304, 319>();
  hw_uint<16> stg11_FIFO_buf36_lane_20 = stg11_FIFO_buf36.extract<320, 335>();
  hw_uint<16> stg11_FIFO_buf36_lane_21 = stg11_FIFO_buf36.extract<336, 351>();
  hw_uint<16> stg11_FIFO_buf36_lane_22 = stg11_FIFO_buf36.extract<352, 367>();
  hw_uint<16> stg11_FIFO_buf36_lane_23 = stg11_FIFO_buf36.extract<368, 383>();
  hw_uint<16> stg11_FIFO_buf36_lane_24 = stg11_FIFO_buf36.extract<384, 399>();
  hw_uint<16> stg11_FIFO_buf36_lane_25 = stg11_FIFO_buf36.extract<400, 415>();
  hw_uint<16> stg11_FIFO_buf36_lane_26 = stg11_FIFO_buf36.extract<416, 431>();
  hw_uint<16> stg11_FIFO_buf36_lane_27 = stg11_FIFO_buf36.extract<432, 447>();
  hw_uint<16> stg11_FIFO_buf36_lane_28 = stg11_FIFO_buf36.extract<448, 463>();
  hw_uint<16> stg11_FIFO_buf36_lane_29 = stg11_FIFO_buf36.extract<464, 479>();
  hw_uint<16> stg11_FIFO_buf36_lane_30 = stg11_FIFO_buf36.extract<480, 495>();
  hw_uint<16> stg11_FIFO_buf36_lane_31 = stg11_FIFO_buf36.extract<496, 511>();
  hw_uint<16> stg11_FIFO_buf36_lane_32 = stg11_FIFO_buf36.extract<512, 527>();
  hw_uint<16> stg11_FIFO_buf36_lane_33 = stg11_FIFO_buf36.extract<528, 543>();
  hw_uint<16> stg11_FIFO_buf36_lane_34 = stg11_FIFO_buf36.extract<544, 559>();
  hw_uint<16> stg11_FIFO_buf36_lane_35 = stg11_FIFO_buf36.extract<560, 575>();
  hw_uint<16> stg11_FIFO_buf36_lane_36 = stg11_FIFO_buf36.extract<576, 591>();
  hw_uint<16> stg11_FIFO_buf36_lane_37 = stg11_FIFO_buf36.extract<592, 607>();
  hw_uint<16> stg11_FIFO_buf36_lane_38 = stg11_FIFO_buf36.extract<608, 623>();
  hw_uint<16> stg11_FIFO_buf36_lane_39 = stg11_FIFO_buf36.extract<624, 639>();
  hw_uint<16> stg11_FIFO_buf36_lane_40 = stg11_FIFO_buf36.extract<640, 655>();
  hw_uint<16> stg11_FIFO_buf36_lane_41 = stg11_FIFO_buf36.extract<656, 671>();
  hw_uint<16> stg11_FIFO_buf36_lane_42 = stg11_FIFO_buf36.extract<672, 687>();
  hw_uint<16> stg11_FIFO_buf36_lane_43 = stg11_FIFO_buf36.extract<688, 703>();
  hw_uint<16> stg11_FIFO_buf36_lane_44 = stg11_FIFO_buf36.extract<704, 719>();
  hw_uint<16> stg11_FIFO_buf36_lane_45 = stg11_FIFO_buf36.extract<720, 735>();
  hw_uint<16> stg11_FIFO_buf36_lane_46 = stg11_FIFO_buf36.extract<736, 751>();
  hw_uint<16> stg11_FIFO_buf36_lane_47 = stg11_FIFO_buf36.extract<752, 767>();
  hw_uint<16> stg11_FIFO_buf36_lane_48 = stg11_FIFO_buf36.extract<768, 783>();
  hw_uint<16> stg11_FIFO_buf36_lane_49 = stg11_FIFO_buf36.extract<784, 799>();
  hw_uint<16> stg11_FIFO_buf36_lane_50 = stg11_FIFO_buf36.extract<800, 815>();
  hw_uint<16> stg11_FIFO_buf36_lane_51 = stg11_FIFO_buf36.extract<816, 831>();
  hw_uint<16> stg11_FIFO_buf36_lane_52 = stg11_FIFO_buf36.extract<832, 847>();
  hw_uint<16> stg11_FIFO_buf36_lane_53 = stg11_FIFO_buf36.extract<848, 863>();
  hw_uint<16> stg11_FIFO_buf36_lane_54 = stg11_FIFO_buf36.extract<864, 879>();
  hw_uint<16> stg11_FIFO_buf36_lane_55 = stg11_FIFO_buf36.extract<880, 895>();
  hw_uint<16> stg11_FIFO_buf36_lane_56 = stg11_FIFO_buf36.extract<896, 911>();
  hw_uint<16> stg11_FIFO_buf36_lane_57 = stg11_FIFO_buf36.extract<912, 927>();
  hw_uint<16> stg11_FIFO_buf36_lane_58 = stg11_FIFO_buf36.extract<928, 943>();
  hw_uint<16> stg11_FIFO_buf36_lane_59 = stg11_FIFO_buf36.extract<944, 959>();
  hw_uint<16> stg11_FIFO_buf36_lane_60 = stg11_FIFO_buf36.extract<960, 975>();
  hw_uint<16> stg11_FIFO_buf36_lane_61 = stg11_FIFO_buf36.extract<976, 991>();
  hw_uint<16> stg11_FIFO_buf36_lane_62 = stg11_FIFO_buf36.extract<992, 1007>();
  hw_uint<16> stg11_FIFO_buf36_lane_63 = stg11_FIFO_buf36.extract<1008, 1023>();
  hw_uint<16> stg11_FIFO_buf36_lane_64 = stg11_FIFO_buf36.extract<1024, 1039>();
  hw_uint<16> stg11_FIFO_buf36_lane_65 = stg11_FIFO_buf36.extract<1040, 1055>();
  hw_uint<16> stg11_FIFO_buf36_lane_66 = stg11_FIFO_buf36.extract<1056, 1071>();
  hw_uint<16> stg11_FIFO_buf36_lane_67 = stg11_FIFO_buf36.extract<1072, 1087>();
  hw_uint<16> stg11_FIFO_buf36_lane_68 = stg11_FIFO_buf36.extract<1088, 1103>();
  hw_uint<16> stg11_FIFO_buf36_lane_69 = stg11_FIFO_buf36.extract<1104, 1119>();
  hw_uint<16> stg11_FIFO_buf36_lane_70 = stg11_FIFO_buf36.extract<1120, 1135>();
  hw_uint<16> stg11_FIFO_buf36_lane_71 = stg11_FIFO_buf36.extract<1136, 1151>();
  hw_uint<16> stg11_FIFO_buf36_lane_72 = stg11_FIFO_buf36.extract<1152, 1167>();
  hw_uint<16> stg11_FIFO_buf36_lane_73 = stg11_FIFO_buf36.extract<1168, 1183>();
  hw_uint<16> stg11_FIFO_buf36_lane_74 = stg11_FIFO_buf36.extract<1184, 1199>();
  hw_uint<16> stg11_FIFO_buf36_lane_75 = stg11_FIFO_buf36.extract<1200, 1215>();
  hw_uint<16> stg11_FIFO_buf36_lane_76 = stg11_FIFO_buf36.extract<1216, 1231>();
  hw_uint<16> stg11_FIFO_buf36_lane_77 = stg11_FIFO_buf36.extract<1232, 1247>();
  hw_uint<16> stg11_FIFO_buf36_lane_78 = stg11_FIFO_buf36.extract<1248, 1263>();
  hw_uint<16> stg11_FIFO_buf36_lane_79 = stg11_FIFO_buf36.extract<1264, 1279>();
  hw_uint<16> stg11_FIFO_buf36_lane_80 = stg11_FIFO_buf36.extract<1280, 1295>();
  hw_uint<16> stg11_FIFO_buf36_lane_81 = stg11_FIFO_buf36.extract<1296, 1311>();
  hw_uint<16> stg11_FIFO_buf36_lane_82 = stg11_FIFO_buf36.extract<1312, 1327>();
  hw_uint<16> stg11_FIFO_buf36_lane_83 = stg11_FIFO_buf36.extract<1328, 1343>();
  hw_uint<16> stg11_FIFO_buf36_lane_84 = stg11_FIFO_buf36.extract<1344, 1359>();
  hw_uint<16> stg11_FIFO_buf36_lane_85 = stg11_FIFO_buf36.extract<1360, 1375>();
  hw_uint<16> stg11_FIFO_buf36_lane_86 = stg11_FIFO_buf36.extract<1376, 1391>();
  hw_uint<16> stg11_FIFO_buf36_lane_87 = stg11_FIFO_buf36.extract<1392, 1407>();
  hw_uint<16> stg11_FIFO_buf36_lane_88 = stg11_FIFO_buf36.extract<1408, 1423>();
  hw_uint<16> stg11_FIFO_buf36_lane_89 = stg11_FIFO_buf36.extract<1424, 1439>();
  hw_uint<16> stg11_FIFO_buf36_lane_90 = stg11_FIFO_buf36.extract<1440, 1455>();
  hw_uint<16> stg11_FIFO_buf36_lane_91 = stg11_FIFO_buf36.extract<1456, 1471>();
  hw_uint<16> stg11_FIFO_buf36_lane_92 = stg11_FIFO_buf36.extract<1472, 1487>();
  hw_uint<16> stg11_FIFO_buf36_lane_93 = stg11_FIFO_buf36.extract<1488, 1503>();
  hw_uint<16> stg11_FIFO_buf36_lane_94 = stg11_FIFO_buf36.extract<1504, 1519>();
  hw_uint<16> stg11_FIFO_buf36_lane_95 = stg11_FIFO_buf36.extract<1520, 1535>();
  hw_uint<16> stg11_FIFO_buf36_lane_96 = stg11_FIFO_buf36.extract<1536, 1551>();
  hw_uint<16> stg11_FIFO_buf36_lane_97 = stg11_FIFO_buf36.extract<1552, 1567>();
  hw_uint<16> stg11_FIFO_buf36_lane_98 = stg11_FIFO_buf36.extract<1568, 1583>();
  hw_uint<16> stg11_FIFO_buf36_lane_99 = stg11_FIFO_buf36.extract<1584, 1599>();
  hw_uint<16> stg11_FIFO_buf36_lane_100 = stg11_FIFO_buf36.extract<1600, 1615>();
  hw_uint<16> stg11_FIFO_buf36_lane_101 = stg11_FIFO_buf36.extract<1616, 1631>();
  hw_uint<16> stg11_FIFO_buf36_lane_102 = stg11_FIFO_buf36.extract<1632, 1647>();
  hw_uint<16> stg11_FIFO_buf36_lane_103 = stg11_FIFO_buf36.extract<1648, 1663>();
  hw_uint<16> stg11_FIFO_buf36_lane_104 = stg11_FIFO_buf36.extract<1664, 1679>();
  hw_uint<16> stg11_FIFO_buf36_lane_105 = stg11_FIFO_buf36.extract<1680, 1695>();
  hw_uint<16> stg11_FIFO_buf36_lane_106 = stg11_FIFO_buf36.extract<1696, 1711>();
  hw_uint<16> stg11_FIFO_buf36_lane_107 = stg11_FIFO_buf36.extract<1712, 1727>();
  hw_uint<16> stg11_FIFO_buf36_lane_108 = stg11_FIFO_buf36.extract<1728, 1743>();
  hw_uint<16> stg11_FIFO_buf36_lane_109 = stg11_FIFO_buf36.extract<1744, 1759>();
  hw_uint<16> stg11_FIFO_buf36_lane_110 = stg11_FIFO_buf36.extract<1760, 1775>();
  hw_uint<16> stg11_FIFO_buf36_lane_111 = stg11_FIFO_buf36.extract<1776, 1791>();
  hw_uint<16> stg11_FIFO_buf36_lane_112 = stg11_FIFO_buf36.extract<1792, 1807>();
  hw_uint<16> stg11_FIFO_buf36_lane_113 = stg11_FIFO_buf36.extract<1808, 1823>();
  hw_uint<16> stg11_FIFO_buf36_lane_114 = stg11_FIFO_buf36.extract<1824, 1839>();
  hw_uint<16> stg11_FIFO_buf36_lane_115 = stg11_FIFO_buf36.extract<1840, 1855>();
  hw_uint<16> stg11_FIFO_buf36_lane_116 = stg11_FIFO_buf36.extract<1856, 1871>();
  hw_uint<16> stg11_FIFO_buf36_lane_117 = stg11_FIFO_buf36.extract<1872, 1887>();
  hw_uint<16> stg11_FIFO_buf36_lane_118 = stg11_FIFO_buf36.extract<1888, 1903>();
  hw_uint<16> stg11_FIFO_buf36_lane_119 = stg11_FIFO_buf36.extract<1904, 1919>();
  hw_uint<16> stg11_FIFO_buf36_lane_120 = stg11_FIFO_buf36.extract<1920, 1935>();
  hw_uint<16> stg11_FIFO_buf36_lane_121 = stg11_FIFO_buf36.extract<1936, 1951>();
  hw_uint<16> stg11_FIFO_buf36_lane_122 = stg11_FIFO_buf36.extract<1952, 1967>();
  hw_uint<16> stg11_FIFO_buf36_lane_123 = stg11_FIFO_buf36.extract<1968, 1983>();
  hw_uint<16> stg11_FIFO_buf36_lane_124 = stg11_FIFO_buf36.extract<1984, 1999>();
  hw_uint<16> stg11_FIFO_buf36_lane_125 = stg11_FIFO_buf36.extract<2000, 2015>();
  hw_uint<16> stg11_FIFO_buf36_lane_126 = stg11_FIFO_buf36.extract<2016, 2031>();
  hw_uint<16> stg11_FIFO_buf36_lane_127 = stg11_FIFO_buf36.extract<2032, 2047>();

	
  hw_uint<64 > stg11_FIFO_buf36_lane_3_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_0);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_1);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_2);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_3);
  auto res_stg12_update_0_sm163_03249 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_3_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_7_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_4);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_5);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_6);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_7);
  auto res_stg12_update_0_sm163_13251 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_7_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_11_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_8);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_9);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_10);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_11);
  auto res_stg12_update_0_sm163_23253 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_11_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_15_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_12);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_13);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_14);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_15);
  auto res_stg12_update_0_sm163_33255 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_15_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_19_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_16);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_17);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_18);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_19);
  auto res_stg12_update_0_sm163_43257 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_19_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_23_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_20);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_21);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_22);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_23);
  auto res_stg12_update_0_sm163_53259 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_23_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_27_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_24);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_25);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_26);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_27);
  auto res_stg12_update_0_sm163_63261 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_27_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_31_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_28);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_29);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_30);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_31);
  auto res_stg12_update_0_sm163_73263 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_31_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_35_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_32);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_33);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_34);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_35);
  auto res_stg12_update_0_sm163_83265 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_35_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_39_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_36);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_37);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_38);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_39);
  auto res_stg12_update_0_sm163_93267 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_39_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_43_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_40);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_41);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_42);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_43);
  auto res_stg12_update_0_sm163_103269 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_43_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_47_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_44);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_45);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_46);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_47);
  auto res_stg12_update_0_sm163_113271 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_47_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_51_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_48);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_49);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_50);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_51);
  auto res_stg12_update_0_sm163_123273 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_51_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_55_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_52);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_53);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_54);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_55);
  auto res_stg12_update_0_sm163_133275 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_55_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_59_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_56);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_57);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_58);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_59);
  auto res_stg12_update_0_sm163_143277 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_59_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_63_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_60);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_61);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_62);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_63);
  auto res_stg12_update_0_sm163_153279 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_63_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_67_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_64);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_65);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_66);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_67);
  auto res_stg12_update_0_sm163_163281 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_67_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_71_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_68);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_69);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_70);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_71);
  auto res_stg12_update_0_sm163_173283 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_71_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_75_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_72);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_73);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_74);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_75);
  auto res_stg12_update_0_sm163_183285 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_75_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_79_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_76);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_77);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_78);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_79);
  auto res_stg12_update_0_sm163_193287 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_79_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_83_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_80);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_81);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_82);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_83);
  auto res_stg12_update_0_sm163_203289 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_83_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_87_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_84);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_85);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_86);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_87);
  auto res_stg12_update_0_sm163_213291 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_87_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_91_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_88);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_89);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_90);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_91);
  auto res_stg12_update_0_sm163_223293 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_91_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_95_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_92);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_93);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_94);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_95);
  auto res_stg12_update_0_sm163_233295 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_95_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_99_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_96);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_97);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_98);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_99);
  auto res_stg12_update_0_sm163_243297 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_99_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_103_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_100);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_101);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_102);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_103);
  auto res_stg12_update_0_sm163_253299 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_103_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_107_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_104);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_105);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_106);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_107);
  auto res_stg12_update_0_sm163_263301 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_107_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_111_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_108);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_109);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_110);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_111);
  auto res_stg12_update_0_sm163_273303 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_111_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_115_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_112);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_113);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_114);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_115);
  auto res_stg12_update_0_sm163_283305 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_115_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_119_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_116);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_117);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_118);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_119);
  auto res_stg12_update_0_sm163_293307 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_119_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_123_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_120);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_121);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_122);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_123);
  auto res_stg12_update_0_sm163_303309 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_123_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_127_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_124);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_125);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_126);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_127);
  auto res_stg12_update_0_sm163_313311 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_127_pack);
  hw_uint<512 > return_value3392;
  set_at<0, 512, 16>(return_value3392, res_stg12_update_0_sm163_03249);
  set_at<16, 512, 16>(return_value3392, res_stg12_update_0_sm163_13251);
  set_at<32, 512, 16>(return_value3392, res_stg12_update_0_sm163_23253);
  set_at<48, 512, 16>(return_value3392, res_stg12_update_0_sm163_33255);
  set_at<64, 512, 16>(return_value3392, res_stg12_update_0_sm163_43257);
  set_at<80, 512, 16>(return_value3392, res_stg12_update_0_sm163_53259);
  set_at<96, 512, 16>(return_value3392, res_stg12_update_0_sm163_63261);
  set_at<112, 512, 16>(return_value3392, res_stg12_update_0_sm163_73263);
  set_at<128, 512, 16>(return_value3392, res_stg12_update_0_sm163_83265);
  set_at<144, 512, 16>(return_value3392, res_stg12_update_0_sm163_93267);
  set_at<160, 512, 16>(return_value3392, res_stg12_update_0_sm163_103269);
  set_at<176, 512, 16>(return_value3392, res_stg12_update_0_sm163_113271);
  set_at<192, 512, 16>(return_value3392, res_stg12_update_0_sm163_123273);
  set_at<208, 512, 16>(return_value3392, res_stg12_update_0_sm163_133275);
  set_at<224, 512, 16>(return_value3392, res_stg12_update_0_sm163_143277);
  set_at<240, 512, 16>(return_value3392, res_stg12_update_0_sm163_153279);
  set_at<256, 512, 16>(return_value3392, res_stg12_update_0_sm163_163281);
  set_at<272, 512, 16>(return_value3392, res_stg12_update_0_sm163_173283);
  set_at<288, 512, 16>(return_value3392, res_stg12_update_0_sm163_183285);
  set_at<304, 512, 16>(return_value3392, res_stg12_update_0_sm163_193287);
  set_at<320, 512, 16>(return_value3392, res_stg12_update_0_sm163_203289);
  set_at<336, 512, 16>(return_value3392, res_stg12_update_0_sm163_213291);
  set_at<352, 512, 16>(return_value3392, res_stg12_update_0_sm163_223293);
  set_at<368, 512, 16>(return_value3392, res_stg12_update_0_sm163_233295);
  set_at<384, 512, 16>(return_value3392, res_stg12_update_0_sm163_243297);
  set_at<400, 512, 16>(return_value3392, res_stg12_update_0_sm163_253299);
  set_at<416, 512, 16>(return_value3392, res_stg12_update_0_sm163_263301);
  set_at<432, 512, 16>(return_value3392, res_stg12_update_0_sm163_273303);
  set_at<448, 512, 16>(return_value3392, res_stg12_update_0_sm163_283305);
  set_at<464, 512, 16>(return_value3392, res_stg12_update_0_sm163_293307);
  set_at<480, 512, 16>(return_value3392, res_stg12_update_0_sm163_303309);
  set_at<496, 512, 16>(return_value3392, res_stg12_update_0_sm163_313311);
  return return_value3392;

}

hw_uint<512> stg11_1_cu3394(hw_uint<16*128>& stg10_FIFO_buf28) {
  hw_uint<16> stg10_FIFO_buf28_lane_0 = stg10_FIFO_buf28.extract<0, 15>();
  hw_uint<16> stg10_FIFO_buf28_lane_1 = stg10_FIFO_buf28.extract<16, 31>();
  hw_uint<16> stg10_FIFO_buf28_lane_2 = stg10_FIFO_buf28.extract<32, 47>();
  hw_uint<16> stg10_FIFO_buf28_lane_3 = stg10_FIFO_buf28.extract<48, 63>();
  hw_uint<16> stg10_FIFO_buf28_lane_4 = stg10_FIFO_buf28.extract<64, 79>();
  hw_uint<16> stg10_FIFO_buf28_lane_5 = stg10_FIFO_buf28.extract<80, 95>();
  hw_uint<16> stg10_FIFO_buf28_lane_6 = stg10_FIFO_buf28.extract<96, 111>();
  hw_uint<16> stg10_FIFO_buf28_lane_7 = stg10_FIFO_buf28.extract<112, 127>();
  hw_uint<16> stg10_FIFO_buf28_lane_8 = stg10_FIFO_buf28.extract<128, 143>();
  hw_uint<16> stg10_FIFO_buf28_lane_9 = stg10_FIFO_buf28.extract<144, 159>();
  hw_uint<16> stg10_FIFO_buf28_lane_10 = stg10_FIFO_buf28.extract<160, 175>();
  hw_uint<16> stg10_FIFO_buf28_lane_11 = stg10_FIFO_buf28.extract<176, 191>();
  hw_uint<16> stg10_FIFO_buf28_lane_12 = stg10_FIFO_buf28.extract<192, 207>();
  hw_uint<16> stg10_FIFO_buf28_lane_13 = stg10_FIFO_buf28.extract<208, 223>();
  hw_uint<16> stg10_FIFO_buf28_lane_14 = stg10_FIFO_buf28.extract<224, 239>();
  hw_uint<16> stg10_FIFO_buf28_lane_15 = stg10_FIFO_buf28.extract<240, 255>();
  hw_uint<16> stg10_FIFO_buf28_lane_16 = stg10_FIFO_buf28.extract<256, 271>();
  hw_uint<16> stg10_FIFO_buf28_lane_17 = stg10_FIFO_buf28.extract<272, 287>();
  hw_uint<16> stg10_FIFO_buf28_lane_18 = stg10_FIFO_buf28.extract<288, 303>();
  hw_uint<16> stg10_FIFO_buf28_lane_19 = stg10_FIFO_buf28.extract<304, 319>();
  hw_uint<16> stg10_FIFO_buf28_lane_20 = stg10_FIFO_buf28.extract<320, 335>();
  hw_uint<16> stg10_FIFO_buf28_lane_21 = stg10_FIFO_buf28.extract<336, 351>();
  hw_uint<16> stg10_FIFO_buf28_lane_22 = stg10_FIFO_buf28.extract<352, 367>();
  hw_uint<16> stg10_FIFO_buf28_lane_23 = stg10_FIFO_buf28.extract<368, 383>();
  hw_uint<16> stg10_FIFO_buf28_lane_24 = stg10_FIFO_buf28.extract<384, 399>();
  hw_uint<16> stg10_FIFO_buf28_lane_25 = stg10_FIFO_buf28.extract<400, 415>();
  hw_uint<16> stg10_FIFO_buf28_lane_26 = stg10_FIFO_buf28.extract<416, 431>();
  hw_uint<16> stg10_FIFO_buf28_lane_27 = stg10_FIFO_buf28.extract<432, 447>();
  hw_uint<16> stg10_FIFO_buf28_lane_28 = stg10_FIFO_buf28.extract<448, 463>();
  hw_uint<16> stg10_FIFO_buf28_lane_29 = stg10_FIFO_buf28.extract<464, 479>();
  hw_uint<16> stg10_FIFO_buf28_lane_30 = stg10_FIFO_buf28.extract<480, 495>();
  hw_uint<16> stg10_FIFO_buf28_lane_31 = stg10_FIFO_buf28.extract<496, 511>();
  hw_uint<16> stg10_FIFO_buf28_lane_32 = stg10_FIFO_buf28.extract<512, 527>();
  hw_uint<16> stg10_FIFO_buf28_lane_33 = stg10_FIFO_buf28.extract<528, 543>();
  hw_uint<16> stg10_FIFO_buf28_lane_34 = stg10_FIFO_buf28.extract<544, 559>();
  hw_uint<16> stg10_FIFO_buf28_lane_35 = stg10_FIFO_buf28.extract<560, 575>();
  hw_uint<16> stg10_FIFO_buf28_lane_36 = stg10_FIFO_buf28.extract<576, 591>();
  hw_uint<16> stg10_FIFO_buf28_lane_37 = stg10_FIFO_buf28.extract<592, 607>();
  hw_uint<16> stg10_FIFO_buf28_lane_38 = stg10_FIFO_buf28.extract<608, 623>();
  hw_uint<16> stg10_FIFO_buf28_lane_39 = stg10_FIFO_buf28.extract<624, 639>();
  hw_uint<16> stg10_FIFO_buf28_lane_40 = stg10_FIFO_buf28.extract<640, 655>();
  hw_uint<16> stg10_FIFO_buf28_lane_41 = stg10_FIFO_buf28.extract<656, 671>();
  hw_uint<16> stg10_FIFO_buf28_lane_42 = stg10_FIFO_buf28.extract<672, 687>();
  hw_uint<16> stg10_FIFO_buf28_lane_43 = stg10_FIFO_buf28.extract<688, 703>();
  hw_uint<16> stg10_FIFO_buf28_lane_44 = stg10_FIFO_buf28.extract<704, 719>();
  hw_uint<16> stg10_FIFO_buf28_lane_45 = stg10_FIFO_buf28.extract<720, 735>();
  hw_uint<16> stg10_FIFO_buf28_lane_46 = stg10_FIFO_buf28.extract<736, 751>();
  hw_uint<16> stg10_FIFO_buf28_lane_47 = stg10_FIFO_buf28.extract<752, 767>();
  hw_uint<16> stg10_FIFO_buf28_lane_48 = stg10_FIFO_buf28.extract<768, 783>();
  hw_uint<16> stg10_FIFO_buf28_lane_49 = stg10_FIFO_buf28.extract<784, 799>();
  hw_uint<16> stg10_FIFO_buf28_lane_50 = stg10_FIFO_buf28.extract<800, 815>();
  hw_uint<16> stg10_FIFO_buf28_lane_51 = stg10_FIFO_buf28.extract<816, 831>();
  hw_uint<16> stg10_FIFO_buf28_lane_52 = stg10_FIFO_buf28.extract<832, 847>();
  hw_uint<16> stg10_FIFO_buf28_lane_53 = stg10_FIFO_buf28.extract<848, 863>();
  hw_uint<16> stg10_FIFO_buf28_lane_54 = stg10_FIFO_buf28.extract<864, 879>();
  hw_uint<16> stg10_FIFO_buf28_lane_55 = stg10_FIFO_buf28.extract<880, 895>();
  hw_uint<16> stg10_FIFO_buf28_lane_56 = stg10_FIFO_buf28.extract<896, 911>();
  hw_uint<16> stg10_FIFO_buf28_lane_57 = stg10_FIFO_buf28.extract<912, 927>();
  hw_uint<16> stg10_FIFO_buf28_lane_58 = stg10_FIFO_buf28.extract<928, 943>();
  hw_uint<16> stg10_FIFO_buf28_lane_59 = stg10_FIFO_buf28.extract<944, 959>();
  hw_uint<16> stg10_FIFO_buf28_lane_60 = stg10_FIFO_buf28.extract<960, 975>();
  hw_uint<16> stg10_FIFO_buf28_lane_61 = stg10_FIFO_buf28.extract<976, 991>();
  hw_uint<16> stg10_FIFO_buf28_lane_62 = stg10_FIFO_buf28.extract<992, 1007>();
  hw_uint<16> stg10_FIFO_buf28_lane_63 = stg10_FIFO_buf28.extract<1008, 1023>();
  hw_uint<16> stg10_FIFO_buf28_lane_64 = stg10_FIFO_buf28.extract<1024, 1039>();
  hw_uint<16> stg10_FIFO_buf28_lane_65 = stg10_FIFO_buf28.extract<1040, 1055>();
  hw_uint<16> stg10_FIFO_buf28_lane_66 = stg10_FIFO_buf28.extract<1056, 1071>();
  hw_uint<16> stg10_FIFO_buf28_lane_67 = stg10_FIFO_buf28.extract<1072, 1087>();
  hw_uint<16> stg10_FIFO_buf28_lane_68 = stg10_FIFO_buf28.extract<1088, 1103>();
  hw_uint<16> stg10_FIFO_buf28_lane_69 = stg10_FIFO_buf28.extract<1104, 1119>();
  hw_uint<16> stg10_FIFO_buf28_lane_70 = stg10_FIFO_buf28.extract<1120, 1135>();
  hw_uint<16> stg10_FIFO_buf28_lane_71 = stg10_FIFO_buf28.extract<1136, 1151>();
  hw_uint<16> stg10_FIFO_buf28_lane_72 = stg10_FIFO_buf28.extract<1152, 1167>();
  hw_uint<16> stg10_FIFO_buf28_lane_73 = stg10_FIFO_buf28.extract<1168, 1183>();
  hw_uint<16> stg10_FIFO_buf28_lane_74 = stg10_FIFO_buf28.extract<1184, 1199>();
  hw_uint<16> stg10_FIFO_buf28_lane_75 = stg10_FIFO_buf28.extract<1200, 1215>();
  hw_uint<16> stg10_FIFO_buf28_lane_76 = stg10_FIFO_buf28.extract<1216, 1231>();
  hw_uint<16> stg10_FIFO_buf28_lane_77 = stg10_FIFO_buf28.extract<1232, 1247>();
  hw_uint<16> stg10_FIFO_buf28_lane_78 = stg10_FIFO_buf28.extract<1248, 1263>();
  hw_uint<16> stg10_FIFO_buf28_lane_79 = stg10_FIFO_buf28.extract<1264, 1279>();
  hw_uint<16> stg10_FIFO_buf28_lane_80 = stg10_FIFO_buf28.extract<1280, 1295>();
  hw_uint<16> stg10_FIFO_buf28_lane_81 = stg10_FIFO_buf28.extract<1296, 1311>();
  hw_uint<16> stg10_FIFO_buf28_lane_82 = stg10_FIFO_buf28.extract<1312, 1327>();
  hw_uint<16> stg10_FIFO_buf28_lane_83 = stg10_FIFO_buf28.extract<1328, 1343>();
  hw_uint<16> stg10_FIFO_buf28_lane_84 = stg10_FIFO_buf28.extract<1344, 1359>();
  hw_uint<16> stg10_FIFO_buf28_lane_85 = stg10_FIFO_buf28.extract<1360, 1375>();
  hw_uint<16> stg10_FIFO_buf28_lane_86 = stg10_FIFO_buf28.extract<1376, 1391>();
  hw_uint<16> stg10_FIFO_buf28_lane_87 = stg10_FIFO_buf28.extract<1392, 1407>();
  hw_uint<16> stg10_FIFO_buf28_lane_88 = stg10_FIFO_buf28.extract<1408, 1423>();
  hw_uint<16> stg10_FIFO_buf28_lane_89 = stg10_FIFO_buf28.extract<1424, 1439>();
  hw_uint<16> stg10_FIFO_buf28_lane_90 = stg10_FIFO_buf28.extract<1440, 1455>();
  hw_uint<16> stg10_FIFO_buf28_lane_91 = stg10_FIFO_buf28.extract<1456, 1471>();
  hw_uint<16> stg10_FIFO_buf28_lane_92 = stg10_FIFO_buf28.extract<1472, 1487>();
  hw_uint<16> stg10_FIFO_buf28_lane_93 = stg10_FIFO_buf28.extract<1488, 1503>();
  hw_uint<16> stg10_FIFO_buf28_lane_94 = stg10_FIFO_buf28.extract<1504, 1519>();
  hw_uint<16> stg10_FIFO_buf28_lane_95 = stg10_FIFO_buf28.extract<1520, 1535>();
  hw_uint<16> stg10_FIFO_buf28_lane_96 = stg10_FIFO_buf28.extract<1536, 1551>();
  hw_uint<16> stg10_FIFO_buf28_lane_97 = stg10_FIFO_buf28.extract<1552, 1567>();
  hw_uint<16> stg10_FIFO_buf28_lane_98 = stg10_FIFO_buf28.extract<1568, 1583>();
  hw_uint<16> stg10_FIFO_buf28_lane_99 = stg10_FIFO_buf28.extract<1584, 1599>();
  hw_uint<16> stg10_FIFO_buf28_lane_100 = stg10_FIFO_buf28.extract<1600, 1615>();
  hw_uint<16> stg10_FIFO_buf28_lane_101 = stg10_FIFO_buf28.extract<1616, 1631>();
  hw_uint<16> stg10_FIFO_buf28_lane_102 = stg10_FIFO_buf28.extract<1632, 1647>();
  hw_uint<16> stg10_FIFO_buf28_lane_103 = stg10_FIFO_buf28.extract<1648, 1663>();
  hw_uint<16> stg10_FIFO_buf28_lane_104 = stg10_FIFO_buf28.extract<1664, 1679>();
  hw_uint<16> stg10_FIFO_buf28_lane_105 = stg10_FIFO_buf28.extract<1680, 1695>();
  hw_uint<16> stg10_FIFO_buf28_lane_106 = stg10_FIFO_buf28.extract<1696, 1711>();
  hw_uint<16> stg10_FIFO_buf28_lane_107 = stg10_FIFO_buf28.extract<1712, 1727>();
  hw_uint<16> stg10_FIFO_buf28_lane_108 = stg10_FIFO_buf28.extract<1728, 1743>();
  hw_uint<16> stg10_FIFO_buf28_lane_109 = stg10_FIFO_buf28.extract<1744, 1759>();
  hw_uint<16> stg10_FIFO_buf28_lane_110 = stg10_FIFO_buf28.extract<1760, 1775>();
  hw_uint<16> stg10_FIFO_buf28_lane_111 = stg10_FIFO_buf28.extract<1776, 1791>();
  hw_uint<16> stg10_FIFO_buf28_lane_112 = stg10_FIFO_buf28.extract<1792, 1807>();
  hw_uint<16> stg10_FIFO_buf28_lane_113 = stg10_FIFO_buf28.extract<1808, 1823>();
  hw_uint<16> stg10_FIFO_buf28_lane_114 = stg10_FIFO_buf28.extract<1824, 1839>();
  hw_uint<16> stg10_FIFO_buf28_lane_115 = stg10_FIFO_buf28.extract<1840, 1855>();
  hw_uint<16> stg10_FIFO_buf28_lane_116 = stg10_FIFO_buf28.extract<1856, 1871>();
  hw_uint<16> stg10_FIFO_buf28_lane_117 = stg10_FIFO_buf28.extract<1872, 1887>();
  hw_uint<16> stg10_FIFO_buf28_lane_118 = stg10_FIFO_buf28.extract<1888, 1903>();
  hw_uint<16> stg10_FIFO_buf28_lane_119 = stg10_FIFO_buf28.extract<1904, 1919>();
  hw_uint<16> stg10_FIFO_buf28_lane_120 = stg10_FIFO_buf28.extract<1920, 1935>();
  hw_uint<16> stg10_FIFO_buf28_lane_121 = stg10_FIFO_buf28.extract<1936, 1951>();
  hw_uint<16> stg10_FIFO_buf28_lane_122 = stg10_FIFO_buf28.extract<1952, 1967>();
  hw_uint<16> stg10_FIFO_buf28_lane_123 = stg10_FIFO_buf28.extract<1968, 1983>();
  hw_uint<16> stg10_FIFO_buf28_lane_124 = stg10_FIFO_buf28.extract<1984, 1999>();
  hw_uint<16> stg10_FIFO_buf28_lane_125 = stg10_FIFO_buf28.extract<2000, 2015>();
  hw_uint<16> stg10_FIFO_buf28_lane_126 = stg10_FIFO_buf28.extract<2016, 2031>();
  hw_uint<16> stg10_FIFO_buf28_lane_127 = stg10_FIFO_buf28.extract<2032, 2047>();

	
  hw_uint<64 > stg10_FIFO_buf28_lane_3_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_0);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_1);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_2);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_3);
  auto res_stg11_update_0_sm164_01777 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_3_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_7_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_4);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_5);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_6);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_7);
  auto res_stg11_update_0_sm164_11779 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_7_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_11_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_8);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_9);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_10);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_11);
  auto res_stg11_update_0_sm164_21781 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_11_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_15_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_12);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_13);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_14);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_15);
  auto res_stg11_update_0_sm164_31783 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_15_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_19_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_16);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_17);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_18);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_19);
  auto res_stg11_update_0_sm164_41785 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_19_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_23_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_20);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_21);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_22);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_23);
  auto res_stg11_update_0_sm164_51787 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_23_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_27_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_24);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_25);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_26);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_27);
  auto res_stg11_update_0_sm164_61789 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_27_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_31_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_28);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_29);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_30);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_31);
  auto res_stg11_update_0_sm164_71791 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_31_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_35_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_32);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_33);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_34);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_35);
  auto res_stg11_update_0_sm164_81793 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_35_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_39_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_36);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_37);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_38);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_39);
  auto res_stg11_update_0_sm164_91795 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_39_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_43_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_40);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_41);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_42);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_43);
  auto res_stg11_update_0_sm164_101797 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_43_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_47_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_44);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_45);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_46);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_47);
  auto res_stg11_update_0_sm164_111799 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_47_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_51_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_48);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_49);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_50);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_51);
  auto res_stg11_update_0_sm164_121801 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_51_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_55_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_52);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_53);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_54);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_55);
  auto res_stg11_update_0_sm164_131803 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_55_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_59_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_56);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_57);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_58);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_59);
  auto res_stg11_update_0_sm164_141805 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_59_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_63_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_60);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_61);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_62);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_63);
  auto res_stg11_update_0_sm164_151807 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_63_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_67_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_64);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_65);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_66);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_67);
  auto res_stg11_update_0_sm164_161809 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_67_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_71_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_68);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_69);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_70);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_71);
  auto res_stg11_update_0_sm164_171811 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_71_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_75_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_72);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_73);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_74);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_75);
  auto res_stg11_update_0_sm164_181813 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_75_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_79_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_76);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_77);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_78);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_79);
  auto res_stg11_update_0_sm164_191815 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_79_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_83_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_80);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_81);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_82);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_83);
  auto res_stg11_update_0_sm164_201817 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_83_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_87_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_84);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_85);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_86);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_87);
  auto res_stg11_update_0_sm164_211819 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_87_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_91_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_88);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_89);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_90);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_91);
  auto res_stg11_update_0_sm164_221821 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_91_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_95_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_92);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_93);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_94);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_95);
  auto res_stg11_update_0_sm164_231823 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_95_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_99_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_96);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_97);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_98);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_99);
  auto res_stg11_update_0_sm164_241825 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_99_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_103_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_100);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_101);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_102);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_103);
  auto res_stg11_update_0_sm164_251827 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_103_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_107_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_104);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_105);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_106);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_107);
  auto res_stg11_update_0_sm164_261829 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_107_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_111_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_108);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_109);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_110);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_111);
  auto res_stg11_update_0_sm164_271831 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_111_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_115_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_112);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_113);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_114);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_115);
  auto res_stg11_update_0_sm164_281833 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_115_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_119_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_116);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_117);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_118);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_119);
  auto res_stg11_update_0_sm164_291835 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_119_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_123_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_120);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_121);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_122);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_123);
  auto res_stg11_update_0_sm164_301837 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_123_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_127_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_124);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_125);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_126);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_127);
  auto res_stg11_update_0_sm164_311839 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_127_pack);
  hw_uint<512 > return_value3395;
  set_at<0, 512, 16>(return_value3395, res_stg11_update_0_sm164_01777);
  set_at<16, 512, 16>(return_value3395, res_stg11_update_0_sm164_11779);
  set_at<32, 512, 16>(return_value3395, res_stg11_update_0_sm164_21781);
  set_at<48, 512, 16>(return_value3395, res_stg11_update_0_sm164_31783);
  set_at<64, 512, 16>(return_value3395, res_stg11_update_0_sm164_41785);
  set_at<80, 512, 16>(return_value3395, res_stg11_update_0_sm164_51787);
  set_at<96, 512, 16>(return_value3395, res_stg11_update_0_sm164_61789);
  set_at<112, 512, 16>(return_value3395, res_stg11_update_0_sm164_71791);
  set_at<128, 512, 16>(return_value3395, res_stg11_update_0_sm164_81793);
  set_at<144, 512, 16>(return_value3395, res_stg11_update_0_sm164_91795);
  set_at<160, 512, 16>(return_value3395, res_stg11_update_0_sm164_101797);
  set_at<176, 512, 16>(return_value3395, res_stg11_update_0_sm164_111799);
  set_at<192, 512, 16>(return_value3395, res_stg11_update_0_sm164_121801);
  set_at<208, 512, 16>(return_value3395, res_stg11_update_0_sm164_131803);
  set_at<224, 512, 16>(return_value3395, res_stg11_update_0_sm164_141805);
  set_at<240, 512, 16>(return_value3395, res_stg11_update_0_sm164_151807);
  set_at<256, 512, 16>(return_value3395, res_stg11_update_0_sm164_161809);
  set_at<272, 512, 16>(return_value3395, res_stg11_update_0_sm164_171811);
  set_at<288, 512, 16>(return_value3395, res_stg11_update_0_sm164_181813);
  set_at<304, 512, 16>(return_value3395, res_stg11_update_0_sm164_191815);
  set_at<320, 512, 16>(return_value3395, res_stg11_update_0_sm164_201817);
  set_at<336, 512, 16>(return_value3395, res_stg11_update_0_sm164_211819);
  set_at<352, 512, 16>(return_value3395, res_stg11_update_0_sm164_221821);
  set_at<368, 512, 16>(return_value3395, res_stg11_update_0_sm164_231823);
  set_at<384, 512, 16>(return_value3395, res_stg11_update_0_sm164_241825);
  set_at<400, 512, 16>(return_value3395, res_stg11_update_0_sm164_251827);
  set_at<416, 512, 16>(return_value3395, res_stg11_update_0_sm164_261829);
  set_at<432, 512, 16>(return_value3395, res_stg11_update_0_sm164_271831);
  set_at<448, 512, 16>(return_value3395, res_stg11_update_0_sm164_281833);
  set_at<464, 512, 16>(return_value3395, res_stg11_update_0_sm164_291835);
  set_at<480, 512, 16>(return_value3395, res_stg11_update_0_sm164_301837);
  set_at<496, 512, 16>(return_value3395, res_stg11_update_0_sm164_311839);
  return return_value3395;

}

hw_uint<512> stg10_1_cu3397(hw_uint<16*128>& stg9_FIFO_buf124) {
  hw_uint<16> stg9_FIFO_buf124_lane_0 = stg9_FIFO_buf124.extract<0, 15>();
  hw_uint<16> stg9_FIFO_buf124_lane_1 = stg9_FIFO_buf124.extract<16, 31>();
  hw_uint<16> stg9_FIFO_buf124_lane_2 = stg9_FIFO_buf124.extract<32, 47>();
  hw_uint<16> stg9_FIFO_buf124_lane_3 = stg9_FIFO_buf124.extract<48, 63>();
  hw_uint<16> stg9_FIFO_buf124_lane_4 = stg9_FIFO_buf124.extract<64, 79>();
  hw_uint<16> stg9_FIFO_buf124_lane_5 = stg9_FIFO_buf124.extract<80, 95>();
  hw_uint<16> stg9_FIFO_buf124_lane_6 = stg9_FIFO_buf124.extract<96, 111>();
  hw_uint<16> stg9_FIFO_buf124_lane_7 = stg9_FIFO_buf124.extract<112, 127>();
  hw_uint<16> stg9_FIFO_buf124_lane_8 = stg9_FIFO_buf124.extract<128, 143>();
  hw_uint<16> stg9_FIFO_buf124_lane_9 = stg9_FIFO_buf124.extract<144, 159>();
  hw_uint<16> stg9_FIFO_buf124_lane_10 = stg9_FIFO_buf124.extract<160, 175>();
  hw_uint<16> stg9_FIFO_buf124_lane_11 = stg9_FIFO_buf124.extract<176, 191>();
  hw_uint<16> stg9_FIFO_buf124_lane_12 = stg9_FIFO_buf124.extract<192, 207>();
  hw_uint<16> stg9_FIFO_buf124_lane_13 = stg9_FIFO_buf124.extract<208, 223>();
  hw_uint<16> stg9_FIFO_buf124_lane_14 = stg9_FIFO_buf124.extract<224, 239>();
  hw_uint<16> stg9_FIFO_buf124_lane_15 = stg9_FIFO_buf124.extract<240, 255>();
  hw_uint<16> stg9_FIFO_buf124_lane_16 = stg9_FIFO_buf124.extract<256, 271>();
  hw_uint<16> stg9_FIFO_buf124_lane_17 = stg9_FIFO_buf124.extract<272, 287>();
  hw_uint<16> stg9_FIFO_buf124_lane_18 = stg9_FIFO_buf124.extract<288, 303>();
  hw_uint<16> stg9_FIFO_buf124_lane_19 = stg9_FIFO_buf124.extract<304, 319>();
  hw_uint<16> stg9_FIFO_buf124_lane_20 = stg9_FIFO_buf124.extract<320, 335>();
  hw_uint<16> stg9_FIFO_buf124_lane_21 = stg9_FIFO_buf124.extract<336, 351>();
  hw_uint<16> stg9_FIFO_buf124_lane_22 = stg9_FIFO_buf124.extract<352, 367>();
  hw_uint<16> stg9_FIFO_buf124_lane_23 = stg9_FIFO_buf124.extract<368, 383>();
  hw_uint<16> stg9_FIFO_buf124_lane_24 = stg9_FIFO_buf124.extract<384, 399>();
  hw_uint<16> stg9_FIFO_buf124_lane_25 = stg9_FIFO_buf124.extract<400, 415>();
  hw_uint<16> stg9_FIFO_buf124_lane_26 = stg9_FIFO_buf124.extract<416, 431>();
  hw_uint<16> stg9_FIFO_buf124_lane_27 = stg9_FIFO_buf124.extract<432, 447>();
  hw_uint<16> stg9_FIFO_buf124_lane_28 = stg9_FIFO_buf124.extract<448, 463>();
  hw_uint<16> stg9_FIFO_buf124_lane_29 = stg9_FIFO_buf124.extract<464, 479>();
  hw_uint<16> stg9_FIFO_buf124_lane_30 = stg9_FIFO_buf124.extract<480, 495>();
  hw_uint<16> stg9_FIFO_buf124_lane_31 = stg9_FIFO_buf124.extract<496, 511>();
  hw_uint<16> stg9_FIFO_buf124_lane_32 = stg9_FIFO_buf124.extract<512, 527>();
  hw_uint<16> stg9_FIFO_buf124_lane_33 = stg9_FIFO_buf124.extract<528, 543>();
  hw_uint<16> stg9_FIFO_buf124_lane_34 = stg9_FIFO_buf124.extract<544, 559>();
  hw_uint<16> stg9_FIFO_buf124_lane_35 = stg9_FIFO_buf124.extract<560, 575>();
  hw_uint<16> stg9_FIFO_buf124_lane_36 = stg9_FIFO_buf124.extract<576, 591>();
  hw_uint<16> stg9_FIFO_buf124_lane_37 = stg9_FIFO_buf124.extract<592, 607>();
  hw_uint<16> stg9_FIFO_buf124_lane_38 = stg9_FIFO_buf124.extract<608, 623>();
  hw_uint<16> stg9_FIFO_buf124_lane_39 = stg9_FIFO_buf124.extract<624, 639>();
  hw_uint<16> stg9_FIFO_buf124_lane_40 = stg9_FIFO_buf124.extract<640, 655>();
  hw_uint<16> stg9_FIFO_buf124_lane_41 = stg9_FIFO_buf124.extract<656, 671>();
  hw_uint<16> stg9_FIFO_buf124_lane_42 = stg9_FIFO_buf124.extract<672, 687>();
  hw_uint<16> stg9_FIFO_buf124_lane_43 = stg9_FIFO_buf124.extract<688, 703>();
  hw_uint<16> stg9_FIFO_buf124_lane_44 = stg9_FIFO_buf124.extract<704, 719>();
  hw_uint<16> stg9_FIFO_buf124_lane_45 = stg9_FIFO_buf124.extract<720, 735>();
  hw_uint<16> stg9_FIFO_buf124_lane_46 = stg9_FIFO_buf124.extract<736, 751>();
  hw_uint<16> stg9_FIFO_buf124_lane_47 = stg9_FIFO_buf124.extract<752, 767>();
  hw_uint<16> stg9_FIFO_buf124_lane_48 = stg9_FIFO_buf124.extract<768, 783>();
  hw_uint<16> stg9_FIFO_buf124_lane_49 = stg9_FIFO_buf124.extract<784, 799>();
  hw_uint<16> stg9_FIFO_buf124_lane_50 = stg9_FIFO_buf124.extract<800, 815>();
  hw_uint<16> stg9_FIFO_buf124_lane_51 = stg9_FIFO_buf124.extract<816, 831>();
  hw_uint<16> stg9_FIFO_buf124_lane_52 = stg9_FIFO_buf124.extract<832, 847>();
  hw_uint<16> stg9_FIFO_buf124_lane_53 = stg9_FIFO_buf124.extract<848, 863>();
  hw_uint<16> stg9_FIFO_buf124_lane_54 = stg9_FIFO_buf124.extract<864, 879>();
  hw_uint<16> stg9_FIFO_buf124_lane_55 = stg9_FIFO_buf124.extract<880, 895>();
  hw_uint<16> stg9_FIFO_buf124_lane_56 = stg9_FIFO_buf124.extract<896, 911>();
  hw_uint<16> stg9_FIFO_buf124_lane_57 = stg9_FIFO_buf124.extract<912, 927>();
  hw_uint<16> stg9_FIFO_buf124_lane_58 = stg9_FIFO_buf124.extract<928, 943>();
  hw_uint<16> stg9_FIFO_buf124_lane_59 = stg9_FIFO_buf124.extract<944, 959>();
  hw_uint<16> stg9_FIFO_buf124_lane_60 = stg9_FIFO_buf124.extract<960, 975>();
  hw_uint<16> stg9_FIFO_buf124_lane_61 = stg9_FIFO_buf124.extract<976, 991>();
  hw_uint<16> stg9_FIFO_buf124_lane_62 = stg9_FIFO_buf124.extract<992, 1007>();
  hw_uint<16> stg9_FIFO_buf124_lane_63 = stg9_FIFO_buf124.extract<1008, 1023>();
  hw_uint<16> stg9_FIFO_buf124_lane_64 = stg9_FIFO_buf124.extract<1024, 1039>();
  hw_uint<16> stg9_FIFO_buf124_lane_65 = stg9_FIFO_buf124.extract<1040, 1055>();
  hw_uint<16> stg9_FIFO_buf124_lane_66 = stg9_FIFO_buf124.extract<1056, 1071>();
  hw_uint<16> stg9_FIFO_buf124_lane_67 = stg9_FIFO_buf124.extract<1072, 1087>();
  hw_uint<16> stg9_FIFO_buf124_lane_68 = stg9_FIFO_buf124.extract<1088, 1103>();
  hw_uint<16> stg9_FIFO_buf124_lane_69 = stg9_FIFO_buf124.extract<1104, 1119>();
  hw_uint<16> stg9_FIFO_buf124_lane_70 = stg9_FIFO_buf124.extract<1120, 1135>();
  hw_uint<16> stg9_FIFO_buf124_lane_71 = stg9_FIFO_buf124.extract<1136, 1151>();
  hw_uint<16> stg9_FIFO_buf124_lane_72 = stg9_FIFO_buf124.extract<1152, 1167>();
  hw_uint<16> stg9_FIFO_buf124_lane_73 = stg9_FIFO_buf124.extract<1168, 1183>();
  hw_uint<16> stg9_FIFO_buf124_lane_74 = stg9_FIFO_buf124.extract<1184, 1199>();
  hw_uint<16> stg9_FIFO_buf124_lane_75 = stg9_FIFO_buf124.extract<1200, 1215>();
  hw_uint<16> stg9_FIFO_buf124_lane_76 = stg9_FIFO_buf124.extract<1216, 1231>();
  hw_uint<16> stg9_FIFO_buf124_lane_77 = stg9_FIFO_buf124.extract<1232, 1247>();
  hw_uint<16> stg9_FIFO_buf124_lane_78 = stg9_FIFO_buf124.extract<1248, 1263>();
  hw_uint<16> stg9_FIFO_buf124_lane_79 = stg9_FIFO_buf124.extract<1264, 1279>();
  hw_uint<16> stg9_FIFO_buf124_lane_80 = stg9_FIFO_buf124.extract<1280, 1295>();
  hw_uint<16> stg9_FIFO_buf124_lane_81 = stg9_FIFO_buf124.extract<1296, 1311>();
  hw_uint<16> stg9_FIFO_buf124_lane_82 = stg9_FIFO_buf124.extract<1312, 1327>();
  hw_uint<16> stg9_FIFO_buf124_lane_83 = stg9_FIFO_buf124.extract<1328, 1343>();
  hw_uint<16> stg9_FIFO_buf124_lane_84 = stg9_FIFO_buf124.extract<1344, 1359>();
  hw_uint<16> stg9_FIFO_buf124_lane_85 = stg9_FIFO_buf124.extract<1360, 1375>();
  hw_uint<16> stg9_FIFO_buf124_lane_86 = stg9_FIFO_buf124.extract<1376, 1391>();
  hw_uint<16> stg9_FIFO_buf124_lane_87 = stg9_FIFO_buf124.extract<1392, 1407>();
  hw_uint<16> stg9_FIFO_buf124_lane_88 = stg9_FIFO_buf124.extract<1408, 1423>();
  hw_uint<16> stg9_FIFO_buf124_lane_89 = stg9_FIFO_buf124.extract<1424, 1439>();
  hw_uint<16> stg9_FIFO_buf124_lane_90 = stg9_FIFO_buf124.extract<1440, 1455>();
  hw_uint<16> stg9_FIFO_buf124_lane_91 = stg9_FIFO_buf124.extract<1456, 1471>();
  hw_uint<16> stg9_FIFO_buf124_lane_92 = stg9_FIFO_buf124.extract<1472, 1487>();
  hw_uint<16> stg9_FIFO_buf124_lane_93 = stg9_FIFO_buf124.extract<1488, 1503>();
  hw_uint<16> stg9_FIFO_buf124_lane_94 = stg9_FIFO_buf124.extract<1504, 1519>();
  hw_uint<16> stg9_FIFO_buf124_lane_95 = stg9_FIFO_buf124.extract<1520, 1535>();
  hw_uint<16> stg9_FIFO_buf124_lane_96 = stg9_FIFO_buf124.extract<1536, 1551>();
  hw_uint<16> stg9_FIFO_buf124_lane_97 = stg9_FIFO_buf124.extract<1552, 1567>();
  hw_uint<16> stg9_FIFO_buf124_lane_98 = stg9_FIFO_buf124.extract<1568, 1583>();
  hw_uint<16> stg9_FIFO_buf124_lane_99 = stg9_FIFO_buf124.extract<1584, 1599>();
  hw_uint<16> stg9_FIFO_buf124_lane_100 = stg9_FIFO_buf124.extract<1600, 1615>();
  hw_uint<16> stg9_FIFO_buf124_lane_101 = stg9_FIFO_buf124.extract<1616, 1631>();
  hw_uint<16> stg9_FIFO_buf124_lane_102 = stg9_FIFO_buf124.extract<1632, 1647>();
  hw_uint<16> stg9_FIFO_buf124_lane_103 = stg9_FIFO_buf124.extract<1648, 1663>();
  hw_uint<16> stg9_FIFO_buf124_lane_104 = stg9_FIFO_buf124.extract<1664, 1679>();
  hw_uint<16> stg9_FIFO_buf124_lane_105 = stg9_FIFO_buf124.extract<1680, 1695>();
  hw_uint<16> stg9_FIFO_buf124_lane_106 = stg9_FIFO_buf124.extract<1696, 1711>();
  hw_uint<16> stg9_FIFO_buf124_lane_107 = stg9_FIFO_buf124.extract<1712, 1727>();
  hw_uint<16> stg9_FIFO_buf124_lane_108 = stg9_FIFO_buf124.extract<1728, 1743>();
  hw_uint<16> stg9_FIFO_buf124_lane_109 = stg9_FIFO_buf124.extract<1744, 1759>();
  hw_uint<16> stg9_FIFO_buf124_lane_110 = stg9_FIFO_buf124.extract<1760, 1775>();
  hw_uint<16> stg9_FIFO_buf124_lane_111 = stg9_FIFO_buf124.extract<1776, 1791>();
  hw_uint<16> stg9_FIFO_buf124_lane_112 = stg9_FIFO_buf124.extract<1792, 1807>();
  hw_uint<16> stg9_FIFO_buf124_lane_113 = stg9_FIFO_buf124.extract<1808, 1823>();
  hw_uint<16> stg9_FIFO_buf124_lane_114 = stg9_FIFO_buf124.extract<1824, 1839>();
  hw_uint<16> stg9_FIFO_buf124_lane_115 = stg9_FIFO_buf124.extract<1840, 1855>();
  hw_uint<16> stg9_FIFO_buf124_lane_116 = stg9_FIFO_buf124.extract<1856, 1871>();
  hw_uint<16> stg9_FIFO_buf124_lane_117 = stg9_FIFO_buf124.extract<1872, 1887>();
  hw_uint<16> stg9_FIFO_buf124_lane_118 = stg9_FIFO_buf124.extract<1888, 1903>();
  hw_uint<16> stg9_FIFO_buf124_lane_119 = stg9_FIFO_buf124.extract<1904, 1919>();
  hw_uint<16> stg9_FIFO_buf124_lane_120 = stg9_FIFO_buf124.extract<1920, 1935>();
  hw_uint<16> stg9_FIFO_buf124_lane_121 = stg9_FIFO_buf124.extract<1936, 1951>();
  hw_uint<16> stg9_FIFO_buf124_lane_122 = stg9_FIFO_buf124.extract<1952, 1967>();
  hw_uint<16> stg9_FIFO_buf124_lane_123 = stg9_FIFO_buf124.extract<1968, 1983>();
  hw_uint<16> stg9_FIFO_buf124_lane_124 = stg9_FIFO_buf124.extract<1984, 1999>();
  hw_uint<16> stg9_FIFO_buf124_lane_125 = stg9_FIFO_buf124.extract<2000, 2015>();
  hw_uint<16> stg9_FIFO_buf124_lane_126 = stg9_FIFO_buf124.extract<2016, 2031>();
  hw_uint<16> stg9_FIFO_buf124_lane_127 = stg9_FIFO_buf124.extract<2032, 2047>();

	
  hw_uint<64 > stg9_FIFO_buf124_lane_3_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_0);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_1);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_2);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_3);
  auto res_stg10_update_0_sm165_01841 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_3_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_7_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_4);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_5);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_6);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_7);
  auto res_stg10_update_0_sm165_11843 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_7_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_11_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_8);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_9);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_10);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_11);
  auto res_stg10_update_0_sm165_21845 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_11_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_15_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_12);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_13);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_14);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_15);
  auto res_stg10_update_0_sm165_31847 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_15_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_19_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_16);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_17);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_18);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_19);
  auto res_stg10_update_0_sm165_41849 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_19_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_23_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_20);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_21);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_22);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_23);
  auto res_stg10_update_0_sm165_51851 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_23_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_27_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_24);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_25);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_26);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_27);
  auto res_stg10_update_0_sm165_61853 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_27_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_31_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_28);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_29);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_30);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_31);
  auto res_stg10_update_0_sm165_71855 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_31_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_35_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_32);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_33);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_34);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_35);
  auto res_stg10_update_0_sm165_81857 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_35_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_39_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_36);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_37);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_38);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_39);
  auto res_stg10_update_0_sm165_91859 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_39_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_43_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_40);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_41);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_42);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_43);
  auto res_stg10_update_0_sm165_101861 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_43_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_47_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_44);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_45);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_46);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_47);
  auto res_stg10_update_0_sm165_111863 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_47_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_51_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_48);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_49);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_50);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_51);
  auto res_stg10_update_0_sm165_121865 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_51_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_55_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_52);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_53);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_54);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_55);
  auto res_stg10_update_0_sm165_131867 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_55_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_59_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_56);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_57);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_58);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_59);
  auto res_stg10_update_0_sm165_141869 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_59_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_63_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_60);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_61);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_62);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_63);
  auto res_stg10_update_0_sm165_151871 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_63_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_67_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_64);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_65);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_66);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_67);
  auto res_stg10_update_0_sm165_161873 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_67_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_71_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_68);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_69);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_70);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_71);
  auto res_stg10_update_0_sm165_171875 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_71_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_75_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_72);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_73);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_74);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_75);
  auto res_stg10_update_0_sm165_181877 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_75_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_79_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_76);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_77);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_78);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_79);
  auto res_stg10_update_0_sm165_191879 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_79_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_83_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_80);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_81);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_82);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_83);
  auto res_stg10_update_0_sm165_201881 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_83_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_87_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_84);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_85);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_86);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_87);
  auto res_stg10_update_0_sm165_211883 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_87_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_91_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_88);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_89);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_90);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_91);
  auto res_stg10_update_0_sm165_221885 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_91_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_95_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_92);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_93);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_94);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_95);
  auto res_stg10_update_0_sm165_231887 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_95_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_99_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_96);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_97);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_98);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_99);
  auto res_stg10_update_0_sm165_241889 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_99_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_103_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_100);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_101);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_102);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_103);
  auto res_stg10_update_0_sm165_251891 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_103_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_107_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_104);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_105);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_106);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_107);
  auto res_stg10_update_0_sm165_261893 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_107_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_111_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_108);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_109);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_110);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_111);
  auto res_stg10_update_0_sm165_271895 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_111_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_115_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_112);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_113);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_114);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_115);
  auto res_stg10_update_0_sm165_281897 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_115_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_119_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_116);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_117);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_118);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_119);
  auto res_stg10_update_0_sm165_291899 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_119_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_123_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_120);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_121);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_122);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_123);
  auto res_stg10_update_0_sm165_301901 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_123_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_127_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_124);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_125);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_126);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_127);
  auto res_stg10_update_0_sm165_311903 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_127_pack);
  hw_uint<512 > return_value3398;
  set_at<0, 512, 16>(return_value3398, res_stg10_update_0_sm165_01841);
  set_at<16, 512, 16>(return_value3398, res_stg10_update_0_sm165_11843);
  set_at<32, 512, 16>(return_value3398, res_stg10_update_0_sm165_21845);
  set_at<48, 512, 16>(return_value3398, res_stg10_update_0_sm165_31847);
  set_at<64, 512, 16>(return_value3398, res_stg10_update_0_sm165_41849);
  set_at<80, 512, 16>(return_value3398, res_stg10_update_0_sm165_51851);
  set_at<96, 512, 16>(return_value3398, res_stg10_update_0_sm165_61853);
  set_at<112, 512, 16>(return_value3398, res_stg10_update_0_sm165_71855);
  set_at<128, 512, 16>(return_value3398, res_stg10_update_0_sm165_81857);
  set_at<144, 512, 16>(return_value3398, res_stg10_update_0_sm165_91859);
  set_at<160, 512, 16>(return_value3398, res_stg10_update_0_sm165_101861);
  set_at<176, 512, 16>(return_value3398, res_stg10_update_0_sm165_111863);
  set_at<192, 512, 16>(return_value3398, res_stg10_update_0_sm165_121865);
  set_at<208, 512, 16>(return_value3398, res_stg10_update_0_sm165_131867);
  set_at<224, 512, 16>(return_value3398, res_stg10_update_0_sm165_141869);
  set_at<240, 512, 16>(return_value3398, res_stg10_update_0_sm165_151871);
  set_at<256, 512, 16>(return_value3398, res_stg10_update_0_sm165_161873);
  set_at<272, 512, 16>(return_value3398, res_stg10_update_0_sm165_171875);
  set_at<288, 512, 16>(return_value3398, res_stg10_update_0_sm165_181877);
  set_at<304, 512, 16>(return_value3398, res_stg10_update_0_sm165_191879);
  set_at<320, 512, 16>(return_value3398, res_stg10_update_0_sm165_201881);
  set_at<336, 512, 16>(return_value3398, res_stg10_update_0_sm165_211883);
  set_at<352, 512, 16>(return_value3398, res_stg10_update_0_sm165_221885);
  set_at<368, 512, 16>(return_value3398, res_stg10_update_0_sm165_231887);
  set_at<384, 512, 16>(return_value3398, res_stg10_update_0_sm165_241889);
  set_at<400, 512, 16>(return_value3398, res_stg10_update_0_sm165_251891);
  set_at<416, 512, 16>(return_value3398, res_stg10_update_0_sm165_261893);
  set_at<432, 512, 16>(return_value3398, res_stg10_update_0_sm165_271895);
  set_at<448, 512, 16>(return_value3398, res_stg10_update_0_sm165_281897);
  set_at<464, 512, 16>(return_value3398, res_stg10_update_0_sm165_291899);
  set_at<480, 512, 16>(return_value3398, res_stg10_update_0_sm165_301901);
  set_at<496, 512, 16>(return_value3398, res_stg10_update_0_sm165_311903);
  return return_value3398;

}

hw_uint<512> stg9_1_cu3400(hw_uint<16*128>& stg8_FIFO_buf116) {
  hw_uint<16> stg8_FIFO_buf116_lane_0 = stg8_FIFO_buf116.extract<0, 15>();
  hw_uint<16> stg8_FIFO_buf116_lane_1 = stg8_FIFO_buf116.extract<16, 31>();
  hw_uint<16> stg8_FIFO_buf116_lane_2 = stg8_FIFO_buf116.extract<32, 47>();
  hw_uint<16> stg8_FIFO_buf116_lane_3 = stg8_FIFO_buf116.extract<48, 63>();
  hw_uint<16> stg8_FIFO_buf116_lane_4 = stg8_FIFO_buf116.extract<64, 79>();
  hw_uint<16> stg8_FIFO_buf116_lane_5 = stg8_FIFO_buf116.extract<80, 95>();
  hw_uint<16> stg8_FIFO_buf116_lane_6 = stg8_FIFO_buf116.extract<96, 111>();
  hw_uint<16> stg8_FIFO_buf116_lane_7 = stg8_FIFO_buf116.extract<112, 127>();
  hw_uint<16> stg8_FIFO_buf116_lane_8 = stg8_FIFO_buf116.extract<128, 143>();
  hw_uint<16> stg8_FIFO_buf116_lane_9 = stg8_FIFO_buf116.extract<144, 159>();
  hw_uint<16> stg8_FIFO_buf116_lane_10 = stg8_FIFO_buf116.extract<160, 175>();
  hw_uint<16> stg8_FIFO_buf116_lane_11 = stg8_FIFO_buf116.extract<176, 191>();
  hw_uint<16> stg8_FIFO_buf116_lane_12 = stg8_FIFO_buf116.extract<192, 207>();
  hw_uint<16> stg8_FIFO_buf116_lane_13 = stg8_FIFO_buf116.extract<208, 223>();
  hw_uint<16> stg8_FIFO_buf116_lane_14 = stg8_FIFO_buf116.extract<224, 239>();
  hw_uint<16> stg8_FIFO_buf116_lane_15 = stg8_FIFO_buf116.extract<240, 255>();
  hw_uint<16> stg8_FIFO_buf116_lane_16 = stg8_FIFO_buf116.extract<256, 271>();
  hw_uint<16> stg8_FIFO_buf116_lane_17 = stg8_FIFO_buf116.extract<272, 287>();
  hw_uint<16> stg8_FIFO_buf116_lane_18 = stg8_FIFO_buf116.extract<288, 303>();
  hw_uint<16> stg8_FIFO_buf116_lane_19 = stg8_FIFO_buf116.extract<304, 319>();
  hw_uint<16> stg8_FIFO_buf116_lane_20 = stg8_FIFO_buf116.extract<320, 335>();
  hw_uint<16> stg8_FIFO_buf116_lane_21 = stg8_FIFO_buf116.extract<336, 351>();
  hw_uint<16> stg8_FIFO_buf116_lane_22 = stg8_FIFO_buf116.extract<352, 367>();
  hw_uint<16> stg8_FIFO_buf116_lane_23 = stg8_FIFO_buf116.extract<368, 383>();
  hw_uint<16> stg8_FIFO_buf116_lane_24 = stg8_FIFO_buf116.extract<384, 399>();
  hw_uint<16> stg8_FIFO_buf116_lane_25 = stg8_FIFO_buf116.extract<400, 415>();
  hw_uint<16> stg8_FIFO_buf116_lane_26 = stg8_FIFO_buf116.extract<416, 431>();
  hw_uint<16> stg8_FIFO_buf116_lane_27 = stg8_FIFO_buf116.extract<432, 447>();
  hw_uint<16> stg8_FIFO_buf116_lane_28 = stg8_FIFO_buf116.extract<448, 463>();
  hw_uint<16> stg8_FIFO_buf116_lane_29 = stg8_FIFO_buf116.extract<464, 479>();
  hw_uint<16> stg8_FIFO_buf116_lane_30 = stg8_FIFO_buf116.extract<480, 495>();
  hw_uint<16> stg8_FIFO_buf116_lane_31 = stg8_FIFO_buf116.extract<496, 511>();
  hw_uint<16> stg8_FIFO_buf116_lane_32 = stg8_FIFO_buf116.extract<512, 527>();
  hw_uint<16> stg8_FIFO_buf116_lane_33 = stg8_FIFO_buf116.extract<528, 543>();
  hw_uint<16> stg8_FIFO_buf116_lane_34 = stg8_FIFO_buf116.extract<544, 559>();
  hw_uint<16> stg8_FIFO_buf116_lane_35 = stg8_FIFO_buf116.extract<560, 575>();
  hw_uint<16> stg8_FIFO_buf116_lane_36 = stg8_FIFO_buf116.extract<576, 591>();
  hw_uint<16> stg8_FIFO_buf116_lane_37 = stg8_FIFO_buf116.extract<592, 607>();
  hw_uint<16> stg8_FIFO_buf116_lane_38 = stg8_FIFO_buf116.extract<608, 623>();
  hw_uint<16> stg8_FIFO_buf116_lane_39 = stg8_FIFO_buf116.extract<624, 639>();
  hw_uint<16> stg8_FIFO_buf116_lane_40 = stg8_FIFO_buf116.extract<640, 655>();
  hw_uint<16> stg8_FIFO_buf116_lane_41 = stg8_FIFO_buf116.extract<656, 671>();
  hw_uint<16> stg8_FIFO_buf116_lane_42 = stg8_FIFO_buf116.extract<672, 687>();
  hw_uint<16> stg8_FIFO_buf116_lane_43 = stg8_FIFO_buf116.extract<688, 703>();
  hw_uint<16> stg8_FIFO_buf116_lane_44 = stg8_FIFO_buf116.extract<704, 719>();
  hw_uint<16> stg8_FIFO_buf116_lane_45 = stg8_FIFO_buf116.extract<720, 735>();
  hw_uint<16> stg8_FIFO_buf116_lane_46 = stg8_FIFO_buf116.extract<736, 751>();
  hw_uint<16> stg8_FIFO_buf116_lane_47 = stg8_FIFO_buf116.extract<752, 767>();
  hw_uint<16> stg8_FIFO_buf116_lane_48 = stg8_FIFO_buf116.extract<768, 783>();
  hw_uint<16> stg8_FIFO_buf116_lane_49 = stg8_FIFO_buf116.extract<784, 799>();
  hw_uint<16> stg8_FIFO_buf116_lane_50 = stg8_FIFO_buf116.extract<800, 815>();
  hw_uint<16> stg8_FIFO_buf116_lane_51 = stg8_FIFO_buf116.extract<816, 831>();
  hw_uint<16> stg8_FIFO_buf116_lane_52 = stg8_FIFO_buf116.extract<832, 847>();
  hw_uint<16> stg8_FIFO_buf116_lane_53 = stg8_FIFO_buf116.extract<848, 863>();
  hw_uint<16> stg8_FIFO_buf116_lane_54 = stg8_FIFO_buf116.extract<864, 879>();
  hw_uint<16> stg8_FIFO_buf116_lane_55 = stg8_FIFO_buf116.extract<880, 895>();
  hw_uint<16> stg8_FIFO_buf116_lane_56 = stg8_FIFO_buf116.extract<896, 911>();
  hw_uint<16> stg8_FIFO_buf116_lane_57 = stg8_FIFO_buf116.extract<912, 927>();
  hw_uint<16> stg8_FIFO_buf116_lane_58 = stg8_FIFO_buf116.extract<928, 943>();
  hw_uint<16> stg8_FIFO_buf116_lane_59 = stg8_FIFO_buf116.extract<944, 959>();
  hw_uint<16> stg8_FIFO_buf116_lane_60 = stg8_FIFO_buf116.extract<960, 975>();
  hw_uint<16> stg8_FIFO_buf116_lane_61 = stg8_FIFO_buf116.extract<976, 991>();
  hw_uint<16> stg8_FIFO_buf116_lane_62 = stg8_FIFO_buf116.extract<992, 1007>();
  hw_uint<16> stg8_FIFO_buf116_lane_63 = stg8_FIFO_buf116.extract<1008, 1023>();
  hw_uint<16> stg8_FIFO_buf116_lane_64 = stg8_FIFO_buf116.extract<1024, 1039>();
  hw_uint<16> stg8_FIFO_buf116_lane_65 = stg8_FIFO_buf116.extract<1040, 1055>();
  hw_uint<16> stg8_FIFO_buf116_lane_66 = stg8_FIFO_buf116.extract<1056, 1071>();
  hw_uint<16> stg8_FIFO_buf116_lane_67 = stg8_FIFO_buf116.extract<1072, 1087>();
  hw_uint<16> stg8_FIFO_buf116_lane_68 = stg8_FIFO_buf116.extract<1088, 1103>();
  hw_uint<16> stg8_FIFO_buf116_lane_69 = stg8_FIFO_buf116.extract<1104, 1119>();
  hw_uint<16> stg8_FIFO_buf116_lane_70 = stg8_FIFO_buf116.extract<1120, 1135>();
  hw_uint<16> stg8_FIFO_buf116_lane_71 = stg8_FIFO_buf116.extract<1136, 1151>();
  hw_uint<16> stg8_FIFO_buf116_lane_72 = stg8_FIFO_buf116.extract<1152, 1167>();
  hw_uint<16> stg8_FIFO_buf116_lane_73 = stg8_FIFO_buf116.extract<1168, 1183>();
  hw_uint<16> stg8_FIFO_buf116_lane_74 = stg8_FIFO_buf116.extract<1184, 1199>();
  hw_uint<16> stg8_FIFO_buf116_lane_75 = stg8_FIFO_buf116.extract<1200, 1215>();
  hw_uint<16> stg8_FIFO_buf116_lane_76 = stg8_FIFO_buf116.extract<1216, 1231>();
  hw_uint<16> stg8_FIFO_buf116_lane_77 = stg8_FIFO_buf116.extract<1232, 1247>();
  hw_uint<16> stg8_FIFO_buf116_lane_78 = stg8_FIFO_buf116.extract<1248, 1263>();
  hw_uint<16> stg8_FIFO_buf116_lane_79 = stg8_FIFO_buf116.extract<1264, 1279>();
  hw_uint<16> stg8_FIFO_buf116_lane_80 = stg8_FIFO_buf116.extract<1280, 1295>();
  hw_uint<16> stg8_FIFO_buf116_lane_81 = stg8_FIFO_buf116.extract<1296, 1311>();
  hw_uint<16> stg8_FIFO_buf116_lane_82 = stg8_FIFO_buf116.extract<1312, 1327>();
  hw_uint<16> stg8_FIFO_buf116_lane_83 = stg8_FIFO_buf116.extract<1328, 1343>();
  hw_uint<16> stg8_FIFO_buf116_lane_84 = stg8_FIFO_buf116.extract<1344, 1359>();
  hw_uint<16> stg8_FIFO_buf116_lane_85 = stg8_FIFO_buf116.extract<1360, 1375>();
  hw_uint<16> stg8_FIFO_buf116_lane_86 = stg8_FIFO_buf116.extract<1376, 1391>();
  hw_uint<16> stg8_FIFO_buf116_lane_87 = stg8_FIFO_buf116.extract<1392, 1407>();
  hw_uint<16> stg8_FIFO_buf116_lane_88 = stg8_FIFO_buf116.extract<1408, 1423>();
  hw_uint<16> stg8_FIFO_buf116_lane_89 = stg8_FIFO_buf116.extract<1424, 1439>();
  hw_uint<16> stg8_FIFO_buf116_lane_90 = stg8_FIFO_buf116.extract<1440, 1455>();
  hw_uint<16> stg8_FIFO_buf116_lane_91 = stg8_FIFO_buf116.extract<1456, 1471>();
  hw_uint<16> stg8_FIFO_buf116_lane_92 = stg8_FIFO_buf116.extract<1472, 1487>();
  hw_uint<16> stg8_FIFO_buf116_lane_93 = stg8_FIFO_buf116.extract<1488, 1503>();
  hw_uint<16> stg8_FIFO_buf116_lane_94 = stg8_FIFO_buf116.extract<1504, 1519>();
  hw_uint<16> stg8_FIFO_buf116_lane_95 = stg8_FIFO_buf116.extract<1520, 1535>();
  hw_uint<16> stg8_FIFO_buf116_lane_96 = stg8_FIFO_buf116.extract<1536, 1551>();
  hw_uint<16> stg8_FIFO_buf116_lane_97 = stg8_FIFO_buf116.extract<1552, 1567>();
  hw_uint<16> stg8_FIFO_buf116_lane_98 = stg8_FIFO_buf116.extract<1568, 1583>();
  hw_uint<16> stg8_FIFO_buf116_lane_99 = stg8_FIFO_buf116.extract<1584, 1599>();
  hw_uint<16> stg8_FIFO_buf116_lane_100 = stg8_FIFO_buf116.extract<1600, 1615>();
  hw_uint<16> stg8_FIFO_buf116_lane_101 = stg8_FIFO_buf116.extract<1616, 1631>();
  hw_uint<16> stg8_FIFO_buf116_lane_102 = stg8_FIFO_buf116.extract<1632, 1647>();
  hw_uint<16> stg8_FIFO_buf116_lane_103 = stg8_FIFO_buf116.extract<1648, 1663>();
  hw_uint<16> stg8_FIFO_buf116_lane_104 = stg8_FIFO_buf116.extract<1664, 1679>();
  hw_uint<16> stg8_FIFO_buf116_lane_105 = stg8_FIFO_buf116.extract<1680, 1695>();
  hw_uint<16> stg8_FIFO_buf116_lane_106 = stg8_FIFO_buf116.extract<1696, 1711>();
  hw_uint<16> stg8_FIFO_buf116_lane_107 = stg8_FIFO_buf116.extract<1712, 1727>();
  hw_uint<16> stg8_FIFO_buf116_lane_108 = stg8_FIFO_buf116.extract<1728, 1743>();
  hw_uint<16> stg8_FIFO_buf116_lane_109 = stg8_FIFO_buf116.extract<1744, 1759>();
  hw_uint<16> stg8_FIFO_buf116_lane_110 = stg8_FIFO_buf116.extract<1760, 1775>();
  hw_uint<16> stg8_FIFO_buf116_lane_111 = stg8_FIFO_buf116.extract<1776, 1791>();
  hw_uint<16> stg8_FIFO_buf116_lane_112 = stg8_FIFO_buf116.extract<1792, 1807>();
  hw_uint<16> stg8_FIFO_buf116_lane_113 = stg8_FIFO_buf116.extract<1808, 1823>();
  hw_uint<16> stg8_FIFO_buf116_lane_114 = stg8_FIFO_buf116.extract<1824, 1839>();
  hw_uint<16> stg8_FIFO_buf116_lane_115 = stg8_FIFO_buf116.extract<1840, 1855>();
  hw_uint<16> stg8_FIFO_buf116_lane_116 = stg8_FIFO_buf116.extract<1856, 1871>();
  hw_uint<16> stg8_FIFO_buf116_lane_117 = stg8_FIFO_buf116.extract<1872, 1887>();
  hw_uint<16> stg8_FIFO_buf116_lane_118 = stg8_FIFO_buf116.extract<1888, 1903>();
  hw_uint<16> stg8_FIFO_buf116_lane_119 = stg8_FIFO_buf116.extract<1904, 1919>();
  hw_uint<16> stg8_FIFO_buf116_lane_120 = stg8_FIFO_buf116.extract<1920, 1935>();
  hw_uint<16> stg8_FIFO_buf116_lane_121 = stg8_FIFO_buf116.extract<1936, 1951>();
  hw_uint<16> stg8_FIFO_buf116_lane_122 = stg8_FIFO_buf116.extract<1952, 1967>();
  hw_uint<16> stg8_FIFO_buf116_lane_123 = stg8_FIFO_buf116.extract<1968, 1983>();
  hw_uint<16> stg8_FIFO_buf116_lane_124 = stg8_FIFO_buf116.extract<1984, 1999>();
  hw_uint<16> stg8_FIFO_buf116_lane_125 = stg8_FIFO_buf116.extract<2000, 2015>();
  hw_uint<16> stg8_FIFO_buf116_lane_126 = stg8_FIFO_buf116.extract<2016, 2031>();
  hw_uint<16> stg8_FIFO_buf116_lane_127 = stg8_FIFO_buf116.extract<2032, 2047>();

	
  hw_uint<64 > stg8_FIFO_buf116_lane_3_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_0);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_1);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_2);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_3);
  auto res_stg9_update_0_sm166_01905 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_3_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_7_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_4);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_5);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_6);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_7);
  auto res_stg9_update_0_sm166_11907 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_7_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_11_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_8);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_9);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_10);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_11);
  auto res_stg9_update_0_sm166_21909 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_11_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_15_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_12);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_13);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_14);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_15);
  auto res_stg9_update_0_sm166_31911 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_15_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_19_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_16);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_17);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_18);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_19);
  auto res_stg9_update_0_sm166_41913 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_19_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_23_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_20);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_21);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_22);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_23);
  auto res_stg9_update_0_sm166_51915 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_23_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_27_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_24);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_25);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_26);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_27);
  auto res_stg9_update_0_sm166_61917 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_27_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_31_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_28);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_29);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_30);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_31);
  auto res_stg9_update_0_sm166_71919 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_31_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_35_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_32);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_33);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_34);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_35);
  auto res_stg9_update_0_sm166_81921 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_35_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_39_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_36);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_37);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_38);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_39);
  auto res_stg9_update_0_sm166_91923 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_39_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_43_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_40);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_41);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_42);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_43);
  auto res_stg9_update_0_sm166_101925 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_43_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_47_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_44);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_45);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_46);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_47);
  auto res_stg9_update_0_sm166_111927 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_47_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_51_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_48);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_49);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_50);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_51);
  auto res_stg9_update_0_sm166_121929 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_51_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_55_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_52);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_53);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_54);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_55);
  auto res_stg9_update_0_sm166_131931 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_55_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_59_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_56);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_57);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_58);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_59);
  auto res_stg9_update_0_sm166_141933 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_59_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_63_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_60);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_61);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_62);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_63);
  auto res_stg9_update_0_sm166_151935 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_63_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_67_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_64);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_65);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_66);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_67);
  auto res_stg9_update_0_sm166_161937 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_67_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_71_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_68);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_69);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_70);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_71);
  auto res_stg9_update_0_sm166_171939 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_71_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_75_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_72);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_73);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_74);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_75);
  auto res_stg9_update_0_sm166_181941 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_75_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_79_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_76);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_77);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_78);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_79);
  auto res_stg9_update_0_sm166_191943 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_79_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_83_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_80);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_81);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_82);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_83);
  auto res_stg9_update_0_sm166_201945 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_83_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_87_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_84);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_85);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_86);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_87);
  auto res_stg9_update_0_sm166_211947 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_87_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_91_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_88);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_89);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_90);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_91);
  auto res_stg9_update_0_sm166_221949 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_91_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_95_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_92);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_93);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_94);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_95);
  auto res_stg9_update_0_sm166_231951 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_95_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_99_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_96);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_97);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_98);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_99);
  auto res_stg9_update_0_sm166_241953 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_99_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_103_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_100);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_101);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_102);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_103);
  auto res_stg9_update_0_sm166_251955 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_103_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_107_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_104);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_105);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_106);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_107);
  auto res_stg9_update_0_sm166_261957 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_107_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_111_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_108);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_109);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_110);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_111);
  auto res_stg9_update_0_sm166_271959 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_111_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_115_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_112);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_113);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_114);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_115);
  auto res_stg9_update_0_sm166_281961 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_115_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_119_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_116);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_117);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_118);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_119);
  auto res_stg9_update_0_sm166_291963 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_119_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_123_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_120);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_121);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_122);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_123);
  auto res_stg9_update_0_sm166_301965 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_123_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_127_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_124);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_125);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_126);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_127);
  auto res_stg9_update_0_sm166_311967 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_127_pack);
  hw_uint<512 > return_value3401;
  set_at<0, 512, 16>(return_value3401, res_stg9_update_0_sm166_01905);
  set_at<16, 512, 16>(return_value3401, res_stg9_update_0_sm166_11907);
  set_at<32, 512, 16>(return_value3401, res_stg9_update_0_sm166_21909);
  set_at<48, 512, 16>(return_value3401, res_stg9_update_0_sm166_31911);
  set_at<64, 512, 16>(return_value3401, res_stg9_update_0_sm166_41913);
  set_at<80, 512, 16>(return_value3401, res_stg9_update_0_sm166_51915);
  set_at<96, 512, 16>(return_value3401, res_stg9_update_0_sm166_61917);
  set_at<112, 512, 16>(return_value3401, res_stg9_update_0_sm166_71919);
  set_at<128, 512, 16>(return_value3401, res_stg9_update_0_sm166_81921);
  set_at<144, 512, 16>(return_value3401, res_stg9_update_0_sm166_91923);
  set_at<160, 512, 16>(return_value3401, res_stg9_update_0_sm166_101925);
  set_at<176, 512, 16>(return_value3401, res_stg9_update_0_sm166_111927);
  set_at<192, 512, 16>(return_value3401, res_stg9_update_0_sm166_121929);
  set_at<208, 512, 16>(return_value3401, res_stg9_update_0_sm166_131931);
  set_at<224, 512, 16>(return_value3401, res_stg9_update_0_sm166_141933);
  set_at<240, 512, 16>(return_value3401, res_stg9_update_0_sm166_151935);
  set_at<256, 512, 16>(return_value3401, res_stg9_update_0_sm166_161937);
  set_at<272, 512, 16>(return_value3401, res_stg9_update_0_sm166_171939);
  set_at<288, 512, 16>(return_value3401, res_stg9_update_0_sm166_181941);
  set_at<304, 512, 16>(return_value3401, res_stg9_update_0_sm166_191943);
  set_at<320, 512, 16>(return_value3401, res_stg9_update_0_sm166_201945);
  set_at<336, 512, 16>(return_value3401, res_stg9_update_0_sm166_211947);
  set_at<352, 512, 16>(return_value3401, res_stg9_update_0_sm166_221949);
  set_at<368, 512, 16>(return_value3401, res_stg9_update_0_sm166_231951);
  set_at<384, 512, 16>(return_value3401, res_stg9_update_0_sm166_241953);
  set_at<400, 512, 16>(return_value3401, res_stg9_update_0_sm166_251955);
  set_at<416, 512, 16>(return_value3401, res_stg9_update_0_sm166_261957);
  set_at<432, 512, 16>(return_value3401, res_stg9_update_0_sm166_271959);
  set_at<448, 512, 16>(return_value3401, res_stg9_update_0_sm166_281961);
  set_at<464, 512, 16>(return_value3401, res_stg9_update_0_sm166_291963);
  set_at<480, 512, 16>(return_value3401, res_stg9_update_0_sm166_301965);
  set_at<496, 512, 16>(return_value3401, res_stg9_update_0_sm166_311967);
  return return_value3401;

}

hw_uint<512> stg8_1_cu3403(hw_uint<16*128>& stg7_FIFO_buf108) {
  hw_uint<16> stg7_FIFO_buf108_lane_0 = stg7_FIFO_buf108.extract<0, 15>();
  hw_uint<16> stg7_FIFO_buf108_lane_1 = stg7_FIFO_buf108.extract<16, 31>();
  hw_uint<16> stg7_FIFO_buf108_lane_2 = stg7_FIFO_buf108.extract<32, 47>();
  hw_uint<16> stg7_FIFO_buf108_lane_3 = stg7_FIFO_buf108.extract<48, 63>();
  hw_uint<16> stg7_FIFO_buf108_lane_4 = stg7_FIFO_buf108.extract<64, 79>();
  hw_uint<16> stg7_FIFO_buf108_lane_5 = stg7_FIFO_buf108.extract<80, 95>();
  hw_uint<16> stg7_FIFO_buf108_lane_6 = stg7_FIFO_buf108.extract<96, 111>();
  hw_uint<16> stg7_FIFO_buf108_lane_7 = stg7_FIFO_buf108.extract<112, 127>();
  hw_uint<16> stg7_FIFO_buf108_lane_8 = stg7_FIFO_buf108.extract<128, 143>();
  hw_uint<16> stg7_FIFO_buf108_lane_9 = stg7_FIFO_buf108.extract<144, 159>();
  hw_uint<16> stg7_FIFO_buf108_lane_10 = stg7_FIFO_buf108.extract<160, 175>();
  hw_uint<16> stg7_FIFO_buf108_lane_11 = stg7_FIFO_buf108.extract<176, 191>();
  hw_uint<16> stg7_FIFO_buf108_lane_12 = stg7_FIFO_buf108.extract<192, 207>();
  hw_uint<16> stg7_FIFO_buf108_lane_13 = stg7_FIFO_buf108.extract<208, 223>();
  hw_uint<16> stg7_FIFO_buf108_lane_14 = stg7_FIFO_buf108.extract<224, 239>();
  hw_uint<16> stg7_FIFO_buf108_lane_15 = stg7_FIFO_buf108.extract<240, 255>();
  hw_uint<16> stg7_FIFO_buf108_lane_16 = stg7_FIFO_buf108.extract<256, 271>();
  hw_uint<16> stg7_FIFO_buf108_lane_17 = stg7_FIFO_buf108.extract<272, 287>();
  hw_uint<16> stg7_FIFO_buf108_lane_18 = stg7_FIFO_buf108.extract<288, 303>();
  hw_uint<16> stg7_FIFO_buf108_lane_19 = stg7_FIFO_buf108.extract<304, 319>();
  hw_uint<16> stg7_FIFO_buf108_lane_20 = stg7_FIFO_buf108.extract<320, 335>();
  hw_uint<16> stg7_FIFO_buf108_lane_21 = stg7_FIFO_buf108.extract<336, 351>();
  hw_uint<16> stg7_FIFO_buf108_lane_22 = stg7_FIFO_buf108.extract<352, 367>();
  hw_uint<16> stg7_FIFO_buf108_lane_23 = stg7_FIFO_buf108.extract<368, 383>();
  hw_uint<16> stg7_FIFO_buf108_lane_24 = stg7_FIFO_buf108.extract<384, 399>();
  hw_uint<16> stg7_FIFO_buf108_lane_25 = stg7_FIFO_buf108.extract<400, 415>();
  hw_uint<16> stg7_FIFO_buf108_lane_26 = stg7_FIFO_buf108.extract<416, 431>();
  hw_uint<16> stg7_FIFO_buf108_lane_27 = stg7_FIFO_buf108.extract<432, 447>();
  hw_uint<16> stg7_FIFO_buf108_lane_28 = stg7_FIFO_buf108.extract<448, 463>();
  hw_uint<16> stg7_FIFO_buf108_lane_29 = stg7_FIFO_buf108.extract<464, 479>();
  hw_uint<16> stg7_FIFO_buf108_lane_30 = stg7_FIFO_buf108.extract<480, 495>();
  hw_uint<16> stg7_FIFO_buf108_lane_31 = stg7_FIFO_buf108.extract<496, 511>();
  hw_uint<16> stg7_FIFO_buf108_lane_32 = stg7_FIFO_buf108.extract<512, 527>();
  hw_uint<16> stg7_FIFO_buf108_lane_33 = stg7_FIFO_buf108.extract<528, 543>();
  hw_uint<16> stg7_FIFO_buf108_lane_34 = stg7_FIFO_buf108.extract<544, 559>();
  hw_uint<16> stg7_FIFO_buf108_lane_35 = stg7_FIFO_buf108.extract<560, 575>();
  hw_uint<16> stg7_FIFO_buf108_lane_36 = stg7_FIFO_buf108.extract<576, 591>();
  hw_uint<16> stg7_FIFO_buf108_lane_37 = stg7_FIFO_buf108.extract<592, 607>();
  hw_uint<16> stg7_FIFO_buf108_lane_38 = stg7_FIFO_buf108.extract<608, 623>();
  hw_uint<16> stg7_FIFO_buf108_lane_39 = stg7_FIFO_buf108.extract<624, 639>();
  hw_uint<16> stg7_FIFO_buf108_lane_40 = stg7_FIFO_buf108.extract<640, 655>();
  hw_uint<16> stg7_FIFO_buf108_lane_41 = stg7_FIFO_buf108.extract<656, 671>();
  hw_uint<16> stg7_FIFO_buf108_lane_42 = stg7_FIFO_buf108.extract<672, 687>();
  hw_uint<16> stg7_FIFO_buf108_lane_43 = stg7_FIFO_buf108.extract<688, 703>();
  hw_uint<16> stg7_FIFO_buf108_lane_44 = stg7_FIFO_buf108.extract<704, 719>();
  hw_uint<16> stg7_FIFO_buf108_lane_45 = stg7_FIFO_buf108.extract<720, 735>();
  hw_uint<16> stg7_FIFO_buf108_lane_46 = stg7_FIFO_buf108.extract<736, 751>();
  hw_uint<16> stg7_FIFO_buf108_lane_47 = stg7_FIFO_buf108.extract<752, 767>();
  hw_uint<16> stg7_FIFO_buf108_lane_48 = stg7_FIFO_buf108.extract<768, 783>();
  hw_uint<16> stg7_FIFO_buf108_lane_49 = stg7_FIFO_buf108.extract<784, 799>();
  hw_uint<16> stg7_FIFO_buf108_lane_50 = stg7_FIFO_buf108.extract<800, 815>();
  hw_uint<16> stg7_FIFO_buf108_lane_51 = stg7_FIFO_buf108.extract<816, 831>();
  hw_uint<16> stg7_FIFO_buf108_lane_52 = stg7_FIFO_buf108.extract<832, 847>();
  hw_uint<16> stg7_FIFO_buf108_lane_53 = stg7_FIFO_buf108.extract<848, 863>();
  hw_uint<16> stg7_FIFO_buf108_lane_54 = stg7_FIFO_buf108.extract<864, 879>();
  hw_uint<16> stg7_FIFO_buf108_lane_55 = stg7_FIFO_buf108.extract<880, 895>();
  hw_uint<16> stg7_FIFO_buf108_lane_56 = stg7_FIFO_buf108.extract<896, 911>();
  hw_uint<16> stg7_FIFO_buf108_lane_57 = stg7_FIFO_buf108.extract<912, 927>();
  hw_uint<16> stg7_FIFO_buf108_lane_58 = stg7_FIFO_buf108.extract<928, 943>();
  hw_uint<16> stg7_FIFO_buf108_lane_59 = stg7_FIFO_buf108.extract<944, 959>();
  hw_uint<16> stg7_FIFO_buf108_lane_60 = stg7_FIFO_buf108.extract<960, 975>();
  hw_uint<16> stg7_FIFO_buf108_lane_61 = stg7_FIFO_buf108.extract<976, 991>();
  hw_uint<16> stg7_FIFO_buf108_lane_62 = stg7_FIFO_buf108.extract<992, 1007>();
  hw_uint<16> stg7_FIFO_buf108_lane_63 = stg7_FIFO_buf108.extract<1008, 1023>();
  hw_uint<16> stg7_FIFO_buf108_lane_64 = stg7_FIFO_buf108.extract<1024, 1039>();
  hw_uint<16> stg7_FIFO_buf108_lane_65 = stg7_FIFO_buf108.extract<1040, 1055>();
  hw_uint<16> stg7_FIFO_buf108_lane_66 = stg7_FIFO_buf108.extract<1056, 1071>();
  hw_uint<16> stg7_FIFO_buf108_lane_67 = stg7_FIFO_buf108.extract<1072, 1087>();
  hw_uint<16> stg7_FIFO_buf108_lane_68 = stg7_FIFO_buf108.extract<1088, 1103>();
  hw_uint<16> stg7_FIFO_buf108_lane_69 = stg7_FIFO_buf108.extract<1104, 1119>();
  hw_uint<16> stg7_FIFO_buf108_lane_70 = stg7_FIFO_buf108.extract<1120, 1135>();
  hw_uint<16> stg7_FIFO_buf108_lane_71 = stg7_FIFO_buf108.extract<1136, 1151>();
  hw_uint<16> stg7_FIFO_buf108_lane_72 = stg7_FIFO_buf108.extract<1152, 1167>();
  hw_uint<16> stg7_FIFO_buf108_lane_73 = stg7_FIFO_buf108.extract<1168, 1183>();
  hw_uint<16> stg7_FIFO_buf108_lane_74 = stg7_FIFO_buf108.extract<1184, 1199>();
  hw_uint<16> stg7_FIFO_buf108_lane_75 = stg7_FIFO_buf108.extract<1200, 1215>();
  hw_uint<16> stg7_FIFO_buf108_lane_76 = stg7_FIFO_buf108.extract<1216, 1231>();
  hw_uint<16> stg7_FIFO_buf108_lane_77 = stg7_FIFO_buf108.extract<1232, 1247>();
  hw_uint<16> stg7_FIFO_buf108_lane_78 = stg7_FIFO_buf108.extract<1248, 1263>();
  hw_uint<16> stg7_FIFO_buf108_lane_79 = stg7_FIFO_buf108.extract<1264, 1279>();
  hw_uint<16> stg7_FIFO_buf108_lane_80 = stg7_FIFO_buf108.extract<1280, 1295>();
  hw_uint<16> stg7_FIFO_buf108_lane_81 = stg7_FIFO_buf108.extract<1296, 1311>();
  hw_uint<16> stg7_FIFO_buf108_lane_82 = stg7_FIFO_buf108.extract<1312, 1327>();
  hw_uint<16> stg7_FIFO_buf108_lane_83 = stg7_FIFO_buf108.extract<1328, 1343>();
  hw_uint<16> stg7_FIFO_buf108_lane_84 = stg7_FIFO_buf108.extract<1344, 1359>();
  hw_uint<16> stg7_FIFO_buf108_lane_85 = stg7_FIFO_buf108.extract<1360, 1375>();
  hw_uint<16> stg7_FIFO_buf108_lane_86 = stg7_FIFO_buf108.extract<1376, 1391>();
  hw_uint<16> stg7_FIFO_buf108_lane_87 = stg7_FIFO_buf108.extract<1392, 1407>();
  hw_uint<16> stg7_FIFO_buf108_lane_88 = stg7_FIFO_buf108.extract<1408, 1423>();
  hw_uint<16> stg7_FIFO_buf108_lane_89 = stg7_FIFO_buf108.extract<1424, 1439>();
  hw_uint<16> stg7_FIFO_buf108_lane_90 = stg7_FIFO_buf108.extract<1440, 1455>();
  hw_uint<16> stg7_FIFO_buf108_lane_91 = stg7_FIFO_buf108.extract<1456, 1471>();
  hw_uint<16> stg7_FIFO_buf108_lane_92 = stg7_FIFO_buf108.extract<1472, 1487>();
  hw_uint<16> stg7_FIFO_buf108_lane_93 = stg7_FIFO_buf108.extract<1488, 1503>();
  hw_uint<16> stg7_FIFO_buf108_lane_94 = stg7_FIFO_buf108.extract<1504, 1519>();
  hw_uint<16> stg7_FIFO_buf108_lane_95 = stg7_FIFO_buf108.extract<1520, 1535>();
  hw_uint<16> stg7_FIFO_buf108_lane_96 = stg7_FIFO_buf108.extract<1536, 1551>();
  hw_uint<16> stg7_FIFO_buf108_lane_97 = stg7_FIFO_buf108.extract<1552, 1567>();
  hw_uint<16> stg7_FIFO_buf108_lane_98 = stg7_FIFO_buf108.extract<1568, 1583>();
  hw_uint<16> stg7_FIFO_buf108_lane_99 = stg7_FIFO_buf108.extract<1584, 1599>();
  hw_uint<16> stg7_FIFO_buf108_lane_100 = stg7_FIFO_buf108.extract<1600, 1615>();
  hw_uint<16> stg7_FIFO_buf108_lane_101 = stg7_FIFO_buf108.extract<1616, 1631>();
  hw_uint<16> stg7_FIFO_buf108_lane_102 = stg7_FIFO_buf108.extract<1632, 1647>();
  hw_uint<16> stg7_FIFO_buf108_lane_103 = stg7_FIFO_buf108.extract<1648, 1663>();
  hw_uint<16> stg7_FIFO_buf108_lane_104 = stg7_FIFO_buf108.extract<1664, 1679>();
  hw_uint<16> stg7_FIFO_buf108_lane_105 = stg7_FIFO_buf108.extract<1680, 1695>();
  hw_uint<16> stg7_FIFO_buf108_lane_106 = stg7_FIFO_buf108.extract<1696, 1711>();
  hw_uint<16> stg7_FIFO_buf108_lane_107 = stg7_FIFO_buf108.extract<1712, 1727>();
  hw_uint<16> stg7_FIFO_buf108_lane_108 = stg7_FIFO_buf108.extract<1728, 1743>();
  hw_uint<16> stg7_FIFO_buf108_lane_109 = stg7_FIFO_buf108.extract<1744, 1759>();
  hw_uint<16> stg7_FIFO_buf108_lane_110 = stg7_FIFO_buf108.extract<1760, 1775>();
  hw_uint<16> stg7_FIFO_buf108_lane_111 = stg7_FIFO_buf108.extract<1776, 1791>();
  hw_uint<16> stg7_FIFO_buf108_lane_112 = stg7_FIFO_buf108.extract<1792, 1807>();
  hw_uint<16> stg7_FIFO_buf108_lane_113 = stg7_FIFO_buf108.extract<1808, 1823>();
  hw_uint<16> stg7_FIFO_buf108_lane_114 = stg7_FIFO_buf108.extract<1824, 1839>();
  hw_uint<16> stg7_FIFO_buf108_lane_115 = stg7_FIFO_buf108.extract<1840, 1855>();
  hw_uint<16> stg7_FIFO_buf108_lane_116 = stg7_FIFO_buf108.extract<1856, 1871>();
  hw_uint<16> stg7_FIFO_buf108_lane_117 = stg7_FIFO_buf108.extract<1872, 1887>();
  hw_uint<16> stg7_FIFO_buf108_lane_118 = stg7_FIFO_buf108.extract<1888, 1903>();
  hw_uint<16> stg7_FIFO_buf108_lane_119 = stg7_FIFO_buf108.extract<1904, 1919>();
  hw_uint<16> stg7_FIFO_buf108_lane_120 = stg7_FIFO_buf108.extract<1920, 1935>();
  hw_uint<16> stg7_FIFO_buf108_lane_121 = stg7_FIFO_buf108.extract<1936, 1951>();
  hw_uint<16> stg7_FIFO_buf108_lane_122 = stg7_FIFO_buf108.extract<1952, 1967>();
  hw_uint<16> stg7_FIFO_buf108_lane_123 = stg7_FIFO_buf108.extract<1968, 1983>();
  hw_uint<16> stg7_FIFO_buf108_lane_124 = stg7_FIFO_buf108.extract<1984, 1999>();
  hw_uint<16> stg7_FIFO_buf108_lane_125 = stg7_FIFO_buf108.extract<2000, 2015>();
  hw_uint<16> stg7_FIFO_buf108_lane_126 = stg7_FIFO_buf108.extract<2016, 2031>();
  hw_uint<16> stg7_FIFO_buf108_lane_127 = stg7_FIFO_buf108.extract<2032, 2047>();

	
  hw_uint<64 > stg7_FIFO_buf108_lane_3_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_0);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_1);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_2);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_3);
  auto res_stg8_update_0_sm167_01969 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_3_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_7_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_4);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_5);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_6);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_7);
  auto res_stg8_update_0_sm167_11971 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_7_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_11_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_8);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_9);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_10);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_11);
  auto res_stg8_update_0_sm167_21973 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_11_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_15_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_12);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_13);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_14);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_15);
  auto res_stg8_update_0_sm167_31975 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_15_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_19_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_16);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_17);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_18);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_19);
  auto res_stg8_update_0_sm167_41977 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_19_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_23_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_20);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_21);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_22);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_23);
  auto res_stg8_update_0_sm167_51979 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_23_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_27_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_24);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_25);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_26);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_27);
  auto res_stg8_update_0_sm167_61981 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_27_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_31_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_28);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_29);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_30);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_31);
  auto res_stg8_update_0_sm167_71983 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_31_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_35_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_32);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_33);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_34);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_35);
  auto res_stg8_update_0_sm167_81985 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_35_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_39_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_36);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_37);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_38);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_39);
  auto res_stg8_update_0_sm167_91987 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_39_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_43_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_40);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_41);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_42);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_43);
  auto res_stg8_update_0_sm167_101989 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_43_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_47_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_44);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_45);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_46);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_47);
  auto res_stg8_update_0_sm167_111991 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_47_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_51_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_48);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_49);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_50);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_51);
  auto res_stg8_update_0_sm167_121993 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_51_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_55_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_52);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_53);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_54);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_55);
  auto res_stg8_update_0_sm167_131995 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_55_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_59_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_56);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_57);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_58);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_59);
  auto res_stg8_update_0_sm167_141997 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_59_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_63_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_60);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_61);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_62);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_63);
  auto res_stg8_update_0_sm167_151999 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_63_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_67_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_64);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_65);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_66);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_67);
  auto res_stg8_update_0_sm167_162001 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_67_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_71_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_68);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_69);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_70);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_71);
  auto res_stg8_update_0_sm167_172003 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_71_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_75_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_72);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_73);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_74);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_75);
  auto res_stg8_update_0_sm167_182005 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_75_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_79_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_76);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_77);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_78);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_79);
  auto res_stg8_update_0_sm167_192007 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_79_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_83_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_80);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_81);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_82);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_83);
  auto res_stg8_update_0_sm167_202009 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_83_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_87_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_84);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_85);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_86);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_87);
  auto res_stg8_update_0_sm167_212011 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_87_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_91_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_88);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_89);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_90);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_91);
  auto res_stg8_update_0_sm167_222013 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_91_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_95_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_92);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_93);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_94);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_95);
  auto res_stg8_update_0_sm167_232015 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_95_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_99_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_96);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_97);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_98);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_99);
  auto res_stg8_update_0_sm167_242017 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_99_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_103_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_100);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_101);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_102);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_103);
  auto res_stg8_update_0_sm167_252019 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_103_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_107_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_104);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_105);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_106);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_107);
  auto res_stg8_update_0_sm167_262021 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_107_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_111_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_108);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_109);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_110);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_111);
  auto res_stg8_update_0_sm167_272023 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_111_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_115_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_112);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_113);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_114);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_115);
  auto res_stg8_update_0_sm167_282025 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_115_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_119_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_116);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_117);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_118);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_119);
  auto res_stg8_update_0_sm167_292027 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_119_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_123_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_120);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_121);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_122);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_123);
  auto res_stg8_update_0_sm167_302029 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_123_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_127_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_124);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_125);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_126);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_127);
  auto res_stg8_update_0_sm167_312031 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_127_pack);
  hw_uint<512 > return_value3404;
  set_at<0, 512, 16>(return_value3404, res_stg8_update_0_sm167_01969);
  set_at<16, 512, 16>(return_value3404, res_stg8_update_0_sm167_11971);
  set_at<32, 512, 16>(return_value3404, res_stg8_update_0_sm167_21973);
  set_at<48, 512, 16>(return_value3404, res_stg8_update_0_sm167_31975);
  set_at<64, 512, 16>(return_value3404, res_stg8_update_0_sm167_41977);
  set_at<80, 512, 16>(return_value3404, res_stg8_update_0_sm167_51979);
  set_at<96, 512, 16>(return_value3404, res_stg8_update_0_sm167_61981);
  set_at<112, 512, 16>(return_value3404, res_stg8_update_0_sm167_71983);
  set_at<128, 512, 16>(return_value3404, res_stg8_update_0_sm167_81985);
  set_at<144, 512, 16>(return_value3404, res_stg8_update_0_sm167_91987);
  set_at<160, 512, 16>(return_value3404, res_stg8_update_0_sm167_101989);
  set_at<176, 512, 16>(return_value3404, res_stg8_update_0_sm167_111991);
  set_at<192, 512, 16>(return_value3404, res_stg8_update_0_sm167_121993);
  set_at<208, 512, 16>(return_value3404, res_stg8_update_0_sm167_131995);
  set_at<224, 512, 16>(return_value3404, res_stg8_update_0_sm167_141997);
  set_at<240, 512, 16>(return_value3404, res_stg8_update_0_sm167_151999);
  set_at<256, 512, 16>(return_value3404, res_stg8_update_0_sm167_162001);
  set_at<272, 512, 16>(return_value3404, res_stg8_update_0_sm167_172003);
  set_at<288, 512, 16>(return_value3404, res_stg8_update_0_sm167_182005);
  set_at<304, 512, 16>(return_value3404, res_stg8_update_0_sm167_192007);
  set_at<320, 512, 16>(return_value3404, res_stg8_update_0_sm167_202009);
  set_at<336, 512, 16>(return_value3404, res_stg8_update_0_sm167_212011);
  set_at<352, 512, 16>(return_value3404, res_stg8_update_0_sm167_222013);
  set_at<368, 512, 16>(return_value3404, res_stg8_update_0_sm167_232015);
  set_at<384, 512, 16>(return_value3404, res_stg8_update_0_sm167_242017);
  set_at<400, 512, 16>(return_value3404, res_stg8_update_0_sm167_252019);
  set_at<416, 512, 16>(return_value3404, res_stg8_update_0_sm167_262021);
  set_at<432, 512, 16>(return_value3404, res_stg8_update_0_sm167_272023);
  set_at<448, 512, 16>(return_value3404, res_stg8_update_0_sm167_282025);
  set_at<464, 512, 16>(return_value3404, res_stg8_update_0_sm167_292027);
  set_at<480, 512, 16>(return_value3404, res_stg8_update_0_sm167_302029);
  set_at<496, 512, 16>(return_value3404, res_stg8_update_0_sm167_312031);
  return return_value3404;

}

hw_uint<512> stg0_to_gp_88_ld13_cu3406(hw_uint<16*32>& stg0_to_gp_88) {
  return stg0_to_gp_88;
}

hw_uint<512> stg4_1_cu3408(hw_uint<16*128>& stg3_FIFO_buf76) {
  hw_uint<16> stg3_FIFO_buf76_lane_0 = stg3_FIFO_buf76.extract<0, 15>();
  hw_uint<16> stg3_FIFO_buf76_lane_1 = stg3_FIFO_buf76.extract<16, 31>();
  hw_uint<16> stg3_FIFO_buf76_lane_2 = stg3_FIFO_buf76.extract<32, 47>();
  hw_uint<16> stg3_FIFO_buf76_lane_3 = stg3_FIFO_buf76.extract<48, 63>();
  hw_uint<16> stg3_FIFO_buf76_lane_4 = stg3_FIFO_buf76.extract<64, 79>();
  hw_uint<16> stg3_FIFO_buf76_lane_5 = stg3_FIFO_buf76.extract<80, 95>();
  hw_uint<16> stg3_FIFO_buf76_lane_6 = stg3_FIFO_buf76.extract<96, 111>();
  hw_uint<16> stg3_FIFO_buf76_lane_7 = stg3_FIFO_buf76.extract<112, 127>();
  hw_uint<16> stg3_FIFO_buf76_lane_8 = stg3_FIFO_buf76.extract<128, 143>();
  hw_uint<16> stg3_FIFO_buf76_lane_9 = stg3_FIFO_buf76.extract<144, 159>();
  hw_uint<16> stg3_FIFO_buf76_lane_10 = stg3_FIFO_buf76.extract<160, 175>();
  hw_uint<16> stg3_FIFO_buf76_lane_11 = stg3_FIFO_buf76.extract<176, 191>();
  hw_uint<16> stg3_FIFO_buf76_lane_12 = stg3_FIFO_buf76.extract<192, 207>();
  hw_uint<16> stg3_FIFO_buf76_lane_13 = stg3_FIFO_buf76.extract<208, 223>();
  hw_uint<16> stg3_FIFO_buf76_lane_14 = stg3_FIFO_buf76.extract<224, 239>();
  hw_uint<16> stg3_FIFO_buf76_lane_15 = stg3_FIFO_buf76.extract<240, 255>();
  hw_uint<16> stg3_FIFO_buf76_lane_16 = stg3_FIFO_buf76.extract<256, 271>();
  hw_uint<16> stg3_FIFO_buf76_lane_17 = stg3_FIFO_buf76.extract<272, 287>();
  hw_uint<16> stg3_FIFO_buf76_lane_18 = stg3_FIFO_buf76.extract<288, 303>();
  hw_uint<16> stg3_FIFO_buf76_lane_19 = stg3_FIFO_buf76.extract<304, 319>();
  hw_uint<16> stg3_FIFO_buf76_lane_20 = stg3_FIFO_buf76.extract<320, 335>();
  hw_uint<16> stg3_FIFO_buf76_lane_21 = stg3_FIFO_buf76.extract<336, 351>();
  hw_uint<16> stg3_FIFO_buf76_lane_22 = stg3_FIFO_buf76.extract<352, 367>();
  hw_uint<16> stg3_FIFO_buf76_lane_23 = stg3_FIFO_buf76.extract<368, 383>();
  hw_uint<16> stg3_FIFO_buf76_lane_24 = stg3_FIFO_buf76.extract<384, 399>();
  hw_uint<16> stg3_FIFO_buf76_lane_25 = stg3_FIFO_buf76.extract<400, 415>();
  hw_uint<16> stg3_FIFO_buf76_lane_26 = stg3_FIFO_buf76.extract<416, 431>();
  hw_uint<16> stg3_FIFO_buf76_lane_27 = stg3_FIFO_buf76.extract<432, 447>();
  hw_uint<16> stg3_FIFO_buf76_lane_28 = stg3_FIFO_buf76.extract<448, 463>();
  hw_uint<16> stg3_FIFO_buf76_lane_29 = stg3_FIFO_buf76.extract<464, 479>();
  hw_uint<16> stg3_FIFO_buf76_lane_30 = stg3_FIFO_buf76.extract<480, 495>();
  hw_uint<16> stg3_FIFO_buf76_lane_31 = stg3_FIFO_buf76.extract<496, 511>();
  hw_uint<16> stg3_FIFO_buf76_lane_32 = stg3_FIFO_buf76.extract<512, 527>();
  hw_uint<16> stg3_FIFO_buf76_lane_33 = stg3_FIFO_buf76.extract<528, 543>();
  hw_uint<16> stg3_FIFO_buf76_lane_34 = stg3_FIFO_buf76.extract<544, 559>();
  hw_uint<16> stg3_FIFO_buf76_lane_35 = stg3_FIFO_buf76.extract<560, 575>();
  hw_uint<16> stg3_FIFO_buf76_lane_36 = stg3_FIFO_buf76.extract<576, 591>();
  hw_uint<16> stg3_FIFO_buf76_lane_37 = stg3_FIFO_buf76.extract<592, 607>();
  hw_uint<16> stg3_FIFO_buf76_lane_38 = stg3_FIFO_buf76.extract<608, 623>();
  hw_uint<16> stg3_FIFO_buf76_lane_39 = stg3_FIFO_buf76.extract<624, 639>();
  hw_uint<16> stg3_FIFO_buf76_lane_40 = stg3_FIFO_buf76.extract<640, 655>();
  hw_uint<16> stg3_FIFO_buf76_lane_41 = stg3_FIFO_buf76.extract<656, 671>();
  hw_uint<16> stg3_FIFO_buf76_lane_42 = stg3_FIFO_buf76.extract<672, 687>();
  hw_uint<16> stg3_FIFO_buf76_lane_43 = stg3_FIFO_buf76.extract<688, 703>();
  hw_uint<16> stg3_FIFO_buf76_lane_44 = stg3_FIFO_buf76.extract<704, 719>();
  hw_uint<16> stg3_FIFO_buf76_lane_45 = stg3_FIFO_buf76.extract<720, 735>();
  hw_uint<16> stg3_FIFO_buf76_lane_46 = stg3_FIFO_buf76.extract<736, 751>();
  hw_uint<16> stg3_FIFO_buf76_lane_47 = stg3_FIFO_buf76.extract<752, 767>();
  hw_uint<16> stg3_FIFO_buf76_lane_48 = stg3_FIFO_buf76.extract<768, 783>();
  hw_uint<16> stg3_FIFO_buf76_lane_49 = stg3_FIFO_buf76.extract<784, 799>();
  hw_uint<16> stg3_FIFO_buf76_lane_50 = stg3_FIFO_buf76.extract<800, 815>();
  hw_uint<16> stg3_FIFO_buf76_lane_51 = stg3_FIFO_buf76.extract<816, 831>();
  hw_uint<16> stg3_FIFO_buf76_lane_52 = stg3_FIFO_buf76.extract<832, 847>();
  hw_uint<16> stg3_FIFO_buf76_lane_53 = stg3_FIFO_buf76.extract<848, 863>();
  hw_uint<16> stg3_FIFO_buf76_lane_54 = stg3_FIFO_buf76.extract<864, 879>();
  hw_uint<16> stg3_FIFO_buf76_lane_55 = stg3_FIFO_buf76.extract<880, 895>();
  hw_uint<16> stg3_FIFO_buf76_lane_56 = stg3_FIFO_buf76.extract<896, 911>();
  hw_uint<16> stg3_FIFO_buf76_lane_57 = stg3_FIFO_buf76.extract<912, 927>();
  hw_uint<16> stg3_FIFO_buf76_lane_58 = stg3_FIFO_buf76.extract<928, 943>();
  hw_uint<16> stg3_FIFO_buf76_lane_59 = stg3_FIFO_buf76.extract<944, 959>();
  hw_uint<16> stg3_FIFO_buf76_lane_60 = stg3_FIFO_buf76.extract<960, 975>();
  hw_uint<16> stg3_FIFO_buf76_lane_61 = stg3_FIFO_buf76.extract<976, 991>();
  hw_uint<16> stg3_FIFO_buf76_lane_62 = stg3_FIFO_buf76.extract<992, 1007>();
  hw_uint<16> stg3_FIFO_buf76_lane_63 = stg3_FIFO_buf76.extract<1008, 1023>();
  hw_uint<16> stg3_FIFO_buf76_lane_64 = stg3_FIFO_buf76.extract<1024, 1039>();
  hw_uint<16> stg3_FIFO_buf76_lane_65 = stg3_FIFO_buf76.extract<1040, 1055>();
  hw_uint<16> stg3_FIFO_buf76_lane_66 = stg3_FIFO_buf76.extract<1056, 1071>();
  hw_uint<16> stg3_FIFO_buf76_lane_67 = stg3_FIFO_buf76.extract<1072, 1087>();
  hw_uint<16> stg3_FIFO_buf76_lane_68 = stg3_FIFO_buf76.extract<1088, 1103>();
  hw_uint<16> stg3_FIFO_buf76_lane_69 = stg3_FIFO_buf76.extract<1104, 1119>();
  hw_uint<16> stg3_FIFO_buf76_lane_70 = stg3_FIFO_buf76.extract<1120, 1135>();
  hw_uint<16> stg3_FIFO_buf76_lane_71 = stg3_FIFO_buf76.extract<1136, 1151>();
  hw_uint<16> stg3_FIFO_buf76_lane_72 = stg3_FIFO_buf76.extract<1152, 1167>();
  hw_uint<16> stg3_FIFO_buf76_lane_73 = stg3_FIFO_buf76.extract<1168, 1183>();
  hw_uint<16> stg3_FIFO_buf76_lane_74 = stg3_FIFO_buf76.extract<1184, 1199>();
  hw_uint<16> stg3_FIFO_buf76_lane_75 = stg3_FIFO_buf76.extract<1200, 1215>();
  hw_uint<16> stg3_FIFO_buf76_lane_76 = stg3_FIFO_buf76.extract<1216, 1231>();
  hw_uint<16> stg3_FIFO_buf76_lane_77 = stg3_FIFO_buf76.extract<1232, 1247>();
  hw_uint<16> stg3_FIFO_buf76_lane_78 = stg3_FIFO_buf76.extract<1248, 1263>();
  hw_uint<16> stg3_FIFO_buf76_lane_79 = stg3_FIFO_buf76.extract<1264, 1279>();
  hw_uint<16> stg3_FIFO_buf76_lane_80 = stg3_FIFO_buf76.extract<1280, 1295>();
  hw_uint<16> stg3_FIFO_buf76_lane_81 = stg3_FIFO_buf76.extract<1296, 1311>();
  hw_uint<16> stg3_FIFO_buf76_lane_82 = stg3_FIFO_buf76.extract<1312, 1327>();
  hw_uint<16> stg3_FIFO_buf76_lane_83 = stg3_FIFO_buf76.extract<1328, 1343>();
  hw_uint<16> stg3_FIFO_buf76_lane_84 = stg3_FIFO_buf76.extract<1344, 1359>();
  hw_uint<16> stg3_FIFO_buf76_lane_85 = stg3_FIFO_buf76.extract<1360, 1375>();
  hw_uint<16> stg3_FIFO_buf76_lane_86 = stg3_FIFO_buf76.extract<1376, 1391>();
  hw_uint<16> stg3_FIFO_buf76_lane_87 = stg3_FIFO_buf76.extract<1392, 1407>();
  hw_uint<16> stg3_FIFO_buf76_lane_88 = stg3_FIFO_buf76.extract<1408, 1423>();
  hw_uint<16> stg3_FIFO_buf76_lane_89 = stg3_FIFO_buf76.extract<1424, 1439>();
  hw_uint<16> stg3_FIFO_buf76_lane_90 = stg3_FIFO_buf76.extract<1440, 1455>();
  hw_uint<16> stg3_FIFO_buf76_lane_91 = stg3_FIFO_buf76.extract<1456, 1471>();
  hw_uint<16> stg3_FIFO_buf76_lane_92 = stg3_FIFO_buf76.extract<1472, 1487>();
  hw_uint<16> stg3_FIFO_buf76_lane_93 = stg3_FIFO_buf76.extract<1488, 1503>();
  hw_uint<16> stg3_FIFO_buf76_lane_94 = stg3_FIFO_buf76.extract<1504, 1519>();
  hw_uint<16> stg3_FIFO_buf76_lane_95 = stg3_FIFO_buf76.extract<1520, 1535>();
  hw_uint<16> stg3_FIFO_buf76_lane_96 = stg3_FIFO_buf76.extract<1536, 1551>();
  hw_uint<16> stg3_FIFO_buf76_lane_97 = stg3_FIFO_buf76.extract<1552, 1567>();
  hw_uint<16> stg3_FIFO_buf76_lane_98 = stg3_FIFO_buf76.extract<1568, 1583>();
  hw_uint<16> stg3_FIFO_buf76_lane_99 = stg3_FIFO_buf76.extract<1584, 1599>();
  hw_uint<16> stg3_FIFO_buf76_lane_100 = stg3_FIFO_buf76.extract<1600, 1615>();
  hw_uint<16> stg3_FIFO_buf76_lane_101 = stg3_FIFO_buf76.extract<1616, 1631>();
  hw_uint<16> stg3_FIFO_buf76_lane_102 = stg3_FIFO_buf76.extract<1632, 1647>();
  hw_uint<16> stg3_FIFO_buf76_lane_103 = stg3_FIFO_buf76.extract<1648, 1663>();
  hw_uint<16> stg3_FIFO_buf76_lane_104 = stg3_FIFO_buf76.extract<1664, 1679>();
  hw_uint<16> stg3_FIFO_buf76_lane_105 = stg3_FIFO_buf76.extract<1680, 1695>();
  hw_uint<16> stg3_FIFO_buf76_lane_106 = stg3_FIFO_buf76.extract<1696, 1711>();
  hw_uint<16> stg3_FIFO_buf76_lane_107 = stg3_FIFO_buf76.extract<1712, 1727>();
  hw_uint<16> stg3_FIFO_buf76_lane_108 = stg3_FIFO_buf76.extract<1728, 1743>();
  hw_uint<16> stg3_FIFO_buf76_lane_109 = stg3_FIFO_buf76.extract<1744, 1759>();
  hw_uint<16> stg3_FIFO_buf76_lane_110 = stg3_FIFO_buf76.extract<1760, 1775>();
  hw_uint<16> stg3_FIFO_buf76_lane_111 = stg3_FIFO_buf76.extract<1776, 1791>();
  hw_uint<16> stg3_FIFO_buf76_lane_112 = stg3_FIFO_buf76.extract<1792, 1807>();
  hw_uint<16> stg3_FIFO_buf76_lane_113 = stg3_FIFO_buf76.extract<1808, 1823>();
  hw_uint<16> stg3_FIFO_buf76_lane_114 = stg3_FIFO_buf76.extract<1824, 1839>();
  hw_uint<16> stg3_FIFO_buf76_lane_115 = stg3_FIFO_buf76.extract<1840, 1855>();
  hw_uint<16> stg3_FIFO_buf76_lane_116 = stg3_FIFO_buf76.extract<1856, 1871>();
  hw_uint<16> stg3_FIFO_buf76_lane_117 = stg3_FIFO_buf76.extract<1872, 1887>();
  hw_uint<16> stg3_FIFO_buf76_lane_118 = stg3_FIFO_buf76.extract<1888, 1903>();
  hw_uint<16> stg3_FIFO_buf76_lane_119 = stg3_FIFO_buf76.extract<1904, 1919>();
  hw_uint<16> stg3_FIFO_buf76_lane_120 = stg3_FIFO_buf76.extract<1920, 1935>();
  hw_uint<16> stg3_FIFO_buf76_lane_121 = stg3_FIFO_buf76.extract<1936, 1951>();
  hw_uint<16> stg3_FIFO_buf76_lane_122 = stg3_FIFO_buf76.extract<1952, 1967>();
  hw_uint<16> stg3_FIFO_buf76_lane_123 = stg3_FIFO_buf76.extract<1968, 1983>();
  hw_uint<16> stg3_FIFO_buf76_lane_124 = stg3_FIFO_buf76.extract<1984, 1999>();
  hw_uint<16> stg3_FIFO_buf76_lane_125 = stg3_FIFO_buf76.extract<2000, 2015>();
  hw_uint<16> stg3_FIFO_buf76_lane_126 = stg3_FIFO_buf76.extract<2016, 2031>();
  hw_uint<16> stg3_FIFO_buf76_lane_127 = stg3_FIFO_buf76.extract<2032, 2047>();

	
  hw_uint<64 > stg3_FIFO_buf76_lane_3_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_0);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_1);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_2);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_3);
  auto res_stg4_update_0_sm169_02097 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_3_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_7_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_4);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_5);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_6);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_7);
  auto res_stg4_update_0_sm169_12099 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_7_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_11_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_8);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_9);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_10);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_11);
  auto res_stg4_update_0_sm169_22101 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_11_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_15_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_12);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_13);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_14);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_15);
  auto res_stg4_update_0_sm169_32103 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_15_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_19_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_16);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_17);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_18);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_19);
  auto res_stg4_update_0_sm169_42105 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_19_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_23_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_20);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_21);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_22);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_23);
  auto res_stg4_update_0_sm169_52107 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_23_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_27_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_24);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_25);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_26);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_27);
  auto res_stg4_update_0_sm169_62109 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_27_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_31_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_28);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_29);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_30);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_31);
  auto res_stg4_update_0_sm169_72111 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_31_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_35_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_32);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_33);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_34);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_35);
  auto res_stg4_update_0_sm169_82113 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_35_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_39_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_36);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_37);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_38);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_39);
  auto res_stg4_update_0_sm169_92115 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_39_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_43_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_40);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_41);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_42);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_43);
  auto res_stg4_update_0_sm169_102117 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_43_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_47_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_44);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_45);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_46);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_47);
  auto res_stg4_update_0_sm169_112119 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_47_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_51_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_48);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_49);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_50);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_51);
  auto res_stg4_update_0_sm169_122121 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_51_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_55_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_52);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_53);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_54);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_55);
  auto res_stg4_update_0_sm169_132123 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_55_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_59_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_56);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_57);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_58);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_59);
  auto res_stg4_update_0_sm169_142125 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_59_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_63_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_60);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_61);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_62);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_63);
  auto res_stg4_update_0_sm169_152127 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_63_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_67_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_64);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_65);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_66);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_67);
  auto res_stg4_update_0_sm169_162129 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_67_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_71_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_68);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_69);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_70);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_71);
  auto res_stg4_update_0_sm169_172131 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_71_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_75_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_72);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_73);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_74);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_75);
  auto res_stg4_update_0_sm169_182133 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_75_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_79_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_76);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_77);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_78);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_79);
  auto res_stg4_update_0_sm169_192135 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_79_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_83_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_80);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_81);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_82);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_83);
  auto res_stg4_update_0_sm169_202137 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_83_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_87_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_84);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_85);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_86);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_87);
  auto res_stg4_update_0_sm169_212139 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_87_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_91_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_88);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_89);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_90);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_91);
  auto res_stg4_update_0_sm169_222141 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_91_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_95_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_92);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_93);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_94);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_95);
  auto res_stg4_update_0_sm169_232143 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_95_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_99_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_96);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_97);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_98);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_99);
  auto res_stg4_update_0_sm169_242145 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_99_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_103_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_100);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_101);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_102);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_103);
  auto res_stg4_update_0_sm169_252147 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_103_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_107_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_104);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_105);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_106);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_107);
  auto res_stg4_update_0_sm169_262149 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_107_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_111_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_108);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_109);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_110);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_111);
  auto res_stg4_update_0_sm169_272151 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_111_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_115_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_112);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_113);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_114);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_115);
  auto res_stg4_update_0_sm169_282153 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_115_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_119_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_116);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_117);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_118);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_119);
  auto res_stg4_update_0_sm169_292155 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_119_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_123_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_120);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_121);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_122);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_123);
  auto res_stg4_update_0_sm169_302157 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_123_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_127_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_124);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_125);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_126);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_127);
  auto res_stg4_update_0_sm169_312159 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_127_pack);
  hw_uint<512 > return_value3409;
  set_at<0, 512, 16>(return_value3409, res_stg4_update_0_sm169_02097);
  set_at<16, 512, 16>(return_value3409, res_stg4_update_0_sm169_12099);
  set_at<32, 512, 16>(return_value3409, res_stg4_update_0_sm169_22101);
  set_at<48, 512, 16>(return_value3409, res_stg4_update_0_sm169_32103);
  set_at<64, 512, 16>(return_value3409, res_stg4_update_0_sm169_42105);
  set_at<80, 512, 16>(return_value3409, res_stg4_update_0_sm169_52107);
  set_at<96, 512, 16>(return_value3409, res_stg4_update_0_sm169_62109);
  set_at<112, 512, 16>(return_value3409, res_stg4_update_0_sm169_72111);
  set_at<128, 512, 16>(return_value3409, res_stg4_update_0_sm169_82113);
  set_at<144, 512, 16>(return_value3409, res_stg4_update_0_sm169_92115);
  set_at<160, 512, 16>(return_value3409, res_stg4_update_0_sm169_102117);
  set_at<176, 512, 16>(return_value3409, res_stg4_update_0_sm169_112119);
  set_at<192, 512, 16>(return_value3409, res_stg4_update_0_sm169_122121);
  set_at<208, 512, 16>(return_value3409, res_stg4_update_0_sm169_132123);
  set_at<224, 512, 16>(return_value3409, res_stg4_update_0_sm169_142125);
  set_at<240, 512, 16>(return_value3409, res_stg4_update_0_sm169_152127);
  set_at<256, 512, 16>(return_value3409, res_stg4_update_0_sm169_162129);
  set_at<272, 512, 16>(return_value3409, res_stg4_update_0_sm169_172131);
  set_at<288, 512, 16>(return_value3409, res_stg4_update_0_sm169_182133);
  set_at<304, 512, 16>(return_value3409, res_stg4_update_0_sm169_192135);
  set_at<320, 512, 16>(return_value3409, res_stg4_update_0_sm169_202137);
  set_at<336, 512, 16>(return_value3409, res_stg4_update_0_sm169_212139);
  set_at<352, 512, 16>(return_value3409, res_stg4_update_0_sm169_222141);
  set_at<368, 512, 16>(return_value3409, res_stg4_update_0_sm169_232143);
  set_at<384, 512, 16>(return_value3409, res_stg4_update_0_sm169_242145);
  set_at<400, 512, 16>(return_value3409, res_stg4_update_0_sm169_252147);
  set_at<416, 512, 16>(return_value3409, res_stg4_update_0_sm169_262149);
  set_at<432, 512, 16>(return_value3409, res_stg4_update_0_sm169_272151);
  set_at<448, 512, 16>(return_value3409, res_stg4_update_0_sm169_282153);
  set_at<464, 512, 16>(return_value3409, res_stg4_update_0_sm169_292155);
  set_at<480, 512, 16>(return_value3409, res_stg4_update_0_sm169_302157);
  set_at<496, 512, 16>(return_value3409, res_stg4_update_0_sm169_312159);
  return return_value3409;

}

hw_uint<512> stg3_1_cu3411(hw_uint<16*128>& stg2_FIFO_buf68) {
  hw_uint<16> stg2_FIFO_buf68_lane_0 = stg2_FIFO_buf68.extract<0, 15>();
  hw_uint<16> stg2_FIFO_buf68_lane_1 = stg2_FIFO_buf68.extract<16, 31>();
  hw_uint<16> stg2_FIFO_buf68_lane_2 = stg2_FIFO_buf68.extract<32, 47>();
  hw_uint<16> stg2_FIFO_buf68_lane_3 = stg2_FIFO_buf68.extract<48, 63>();
  hw_uint<16> stg2_FIFO_buf68_lane_4 = stg2_FIFO_buf68.extract<64, 79>();
  hw_uint<16> stg2_FIFO_buf68_lane_5 = stg2_FIFO_buf68.extract<80, 95>();
  hw_uint<16> stg2_FIFO_buf68_lane_6 = stg2_FIFO_buf68.extract<96, 111>();
  hw_uint<16> stg2_FIFO_buf68_lane_7 = stg2_FIFO_buf68.extract<112, 127>();
  hw_uint<16> stg2_FIFO_buf68_lane_8 = stg2_FIFO_buf68.extract<128, 143>();
  hw_uint<16> stg2_FIFO_buf68_lane_9 = stg2_FIFO_buf68.extract<144, 159>();
  hw_uint<16> stg2_FIFO_buf68_lane_10 = stg2_FIFO_buf68.extract<160, 175>();
  hw_uint<16> stg2_FIFO_buf68_lane_11 = stg2_FIFO_buf68.extract<176, 191>();
  hw_uint<16> stg2_FIFO_buf68_lane_12 = stg2_FIFO_buf68.extract<192, 207>();
  hw_uint<16> stg2_FIFO_buf68_lane_13 = stg2_FIFO_buf68.extract<208, 223>();
  hw_uint<16> stg2_FIFO_buf68_lane_14 = stg2_FIFO_buf68.extract<224, 239>();
  hw_uint<16> stg2_FIFO_buf68_lane_15 = stg2_FIFO_buf68.extract<240, 255>();
  hw_uint<16> stg2_FIFO_buf68_lane_16 = stg2_FIFO_buf68.extract<256, 271>();
  hw_uint<16> stg2_FIFO_buf68_lane_17 = stg2_FIFO_buf68.extract<272, 287>();
  hw_uint<16> stg2_FIFO_buf68_lane_18 = stg2_FIFO_buf68.extract<288, 303>();
  hw_uint<16> stg2_FIFO_buf68_lane_19 = stg2_FIFO_buf68.extract<304, 319>();
  hw_uint<16> stg2_FIFO_buf68_lane_20 = stg2_FIFO_buf68.extract<320, 335>();
  hw_uint<16> stg2_FIFO_buf68_lane_21 = stg2_FIFO_buf68.extract<336, 351>();
  hw_uint<16> stg2_FIFO_buf68_lane_22 = stg2_FIFO_buf68.extract<352, 367>();
  hw_uint<16> stg2_FIFO_buf68_lane_23 = stg2_FIFO_buf68.extract<368, 383>();
  hw_uint<16> stg2_FIFO_buf68_lane_24 = stg2_FIFO_buf68.extract<384, 399>();
  hw_uint<16> stg2_FIFO_buf68_lane_25 = stg2_FIFO_buf68.extract<400, 415>();
  hw_uint<16> stg2_FIFO_buf68_lane_26 = stg2_FIFO_buf68.extract<416, 431>();
  hw_uint<16> stg2_FIFO_buf68_lane_27 = stg2_FIFO_buf68.extract<432, 447>();
  hw_uint<16> stg2_FIFO_buf68_lane_28 = stg2_FIFO_buf68.extract<448, 463>();
  hw_uint<16> stg2_FIFO_buf68_lane_29 = stg2_FIFO_buf68.extract<464, 479>();
  hw_uint<16> stg2_FIFO_buf68_lane_30 = stg2_FIFO_buf68.extract<480, 495>();
  hw_uint<16> stg2_FIFO_buf68_lane_31 = stg2_FIFO_buf68.extract<496, 511>();
  hw_uint<16> stg2_FIFO_buf68_lane_32 = stg2_FIFO_buf68.extract<512, 527>();
  hw_uint<16> stg2_FIFO_buf68_lane_33 = stg2_FIFO_buf68.extract<528, 543>();
  hw_uint<16> stg2_FIFO_buf68_lane_34 = stg2_FIFO_buf68.extract<544, 559>();
  hw_uint<16> stg2_FIFO_buf68_lane_35 = stg2_FIFO_buf68.extract<560, 575>();
  hw_uint<16> stg2_FIFO_buf68_lane_36 = stg2_FIFO_buf68.extract<576, 591>();
  hw_uint<16> stg2_FIFO_buf68_lane_37 = stg2_FIFO_buf68.extract<592, 607>();
  hw_uint<16> stg2_FIFO_buf68_lane_38 = stg2_FIFO_buf68.extract<608, 623>();
  hw_uint<16> stg2_FIFO_buf68_lane_39 = stg2_FIFO_buf68.extract<624, 639>();
  hw_uint<16> stg2_FIFO_buf68_lane_40 = stg2_FIFO_buf68.extract<640, 655>();
  hw_uint<16> stg2_FIFO_buf68_lane_41 = stg2_FIFO_buf68.extract<656, 671>();
  hw_uint<16> stg2_FIFO_buf68_lane_42 = stg2_FIFO_buf68.extract<672, 687>();
  hw_uint<16> stg2_FIFO_buf68_lane_43 = stg2_FIFO_buf68.extract<688, 703>();
  hw_uint<16> stg2_FIFO_buf68_lane_44 = stg2_FIFO_buf68.extract<704, 719>();
  hw_uint<16> stg2_FIFO_buf68_lane_45 = stg2_FIFO_buf68.extract<720, 735>();
  hw_uint<16> stg2_FIFO_buf68_lane_46 = stg2_FIFO_buf68.extract<736, 751>();
  hw_uint<16> stg2_FIFO_buf68_lane_47 = stg2_FIFO_buf68.extract<752, 767>();
  hw_uint<16> stg2_FIFO_buf68_lane_48 = stg2_FIFO_buf68.extract<768, 783>();
  hw_uint<16> stg2_FIFO_buf68_lane_49 = stg2_FIFO_buf68.extract<784, 799>();
  hw_uint<16> stg2_FIFO_buf68_lane_50 = stg2_FIFO_buf68.extract<800, 815>();
  hw_uint<16> stg2_FIFO_buf68_lane_51 = stg2_FIFO_buf68.extract<816, 831>();
  hw_uint<16> stg2_FIFO_buf68_lane_52 = stg2_FIFO_buf68.extract<832, 847>();
  hw_uint<16> stg2_FIFO_buf68_lane_53 = stg2_FIFO_buf68.extract<848, 863>();
  hw_uint<16> stg2_FIFO_buf68_lane_54 = stg2_FIFO_buf68.extract<864, 879>();
  hw_uint<16> stg2_FIFO_buf68_lane_55 = stg2_FIFO_buf68.extract<880, 895>();
  hw_uint<16> stg2_FIFO_buf68_lane_56 = stg2_FIFO_buf68.extract<896, 911>();
  hw_uint<16> stg2_FIFO_buf68_lane_57 = stg2_FIFO_buf68.extract<912, 927>();
  hw_uint<16> stg2_FIFO_buf68_lane_58 = stg2_FIFO_buf68.extract<928, 943>();
  hw_uint<16> stg2_FIFO_buf68_lane_59 = stg2_FIFO_buf68.extract<944, 959>();
  hw_uint<16> stg2_FIFO_buf68_lane_60 = stg2_FIFO_buf68.extract<960, 975>();
  hw_uint<16> stg2_FIFO_buf68_lane_61 = stg2_FIFO_buf68.extract<976, 991>();
  hw_uint<16> stg2_FIFO_buf68_lane_62 = stg2_FIFO_buf68.extract<992, 1007>();
  hw_uint<16> stg2_FIFO_buf68_lane_63 = stg2_FIFO_buf68.extract<1008, 1023>();
  hw_uint<16> stg2_FIFO_buf68_lane_64 = stg2_FIFO_buf68.extract<1024, 1039>();
  hw_uint<16> stg2_FIFO_buf68_lane_65 = stg2_FIFO_buf68.extract<1040, 1055>();
  hw_uint<16> stg2_FIFO_buf68_lane_66 = stg2_FIFO_buf68.extract<1056, 1071>();
  hw_uint<16> stg2_FIFO_buf68_lane_67 = stg2_FIFO_buf68.extract<1072, 1087>();
  hw_uint<16> stg2_FIFO_buf68_lane_68 = stg2_FIFO_buf68.extract<1088, 1103>();
  hw_uint<16> stg2_FIFO_buf68_lane_69 = stg2_FIFO_buf68.extract<1104, 1119>();
  hw_uint<16> stg2_FIFO_buf68_lane_70 = stg2_FIFO_buf68.extract<1120, 1135>();
  hw_uint<16> stg2_FIFO_buf68_lane_71 = stg2_FIFO_buf68.extract<1136, 1151>();
  hw_uint<16> stg2_FIFO_buf68_lane_72 = stg2_FIFO_buf68.extract<1152, 1167>();
  hw_uint<16> stg2_FIFO_buf68_lane_73 = stg2_FIFO_buf68.extract<1168, 1183>();
  hw_uint<16> stg2_FIFO_buf68_lane_74 = stg2_FIFO_buf68.extract<1184, 1199>();
  hw_uint<16> stg2_FIFO_buf68_lane_75 = stg2_FIFO_buf68.extract<1200, 1215>();
  hw_uint<16> stg2_FIFO_buf68_lane_76 = stg2_FIFO_buf68.extract<1216, 1231>();
  hw_uint<16> stg2_FIFO_buf68_lane_77 = stg2_FIFO_buf68.extract<1232, 1247>();
  hw_uint<16> stg2_FIFO_buf68_lane_78 = stg2_FIFO_buf68.extract<1248, 1263>();
  hw_uint<16> stg2_FIFO_buf68_lane_79 = stg2_FIFO_buf68.extract<1264, 1279>();
  hw_uint<16> stg2_FIFO_buf68_lane_80 = stg2_FIFO_buf68.extract<1280, 1295>();
  hw_uint<16> stg2_FIFO_buf68_lane_81 = stg2_FIFO_buf68.extract<1296, 1311>();
  hw_uint<16> stg2_FIFO_buf68_lane_82 = stg2_FIFO_buf68.extract<1312, 1327>();
  hw_uint<16> stg2_FIFO_buf68_lane_83 = stg2_FIFO_buf68.extract<1328, 1343>();
  hw_uint<16> stg2_FIFO_buf68_lane_84 = stg2_FIFO_buf68.extract<1344, 1359>();
  hw_uint<16> stg2_FIFO_buf68_lane_85 = stg2_FIFO_buf68.extract<1360, 1375>();
  hw_uint<16> stg2_FIFO_buf68_lane_86 = stg2_FIFO_buf68.extract<1376, 1391>();
  hw_uint<16> stg2_FIFO_buf68_lane_87 = stg2_FIFO_buf68.extract<1392, 1407>();
  hw_uint<16> stg2_FIFO_buf68_lane_88 = stg2_FIFO_buf68.extract<1408, 1423>();
  hw_uint<16> stg2_FIFO_buf68_lane_89 = stg2_FIFO_buf68.extract<1424, 1439>();
  hw_uint<16> stg2_FIFO_buf68_lane_90 = stg2_FIFO_buf68.extract<1440, 1455>();
  hw_uint<16> stg2_FIFO_buf68_lane_91 = stg2_FIFO_buf68.extract<1456, 1471>();
  hw_uint<16> stg2_FIFO_buf68_lane_92 = stg2_FIFO_buf68.extract<1472, 1487>();
  hw_uint<16> stg2_FIFO_buf68_lane_93 = stg2_FIFO_buf68.extract<1488, 1503>();
  hw_uint<16> stg2_FIFO_buf68_lane_94 = stg2_FIFO_buf68.extract<1504, 1519>();
  hw_uint<16> stg2_FIFO_buf68_lane_95 = stg2_FIFO_buf68.extract<1520, 1535>();
  hw_uint<16> stg2_FIFO_buf68_lane_96 = stg2_FIFO_buf68.extract<1536, 1551>();
  hw_uint<16> stg2_FIFO_buf68_lane_97 = stg2_FIFO_buf68.extract<1552, 1567>();
  hw_uint<16> stg2_FIFO_buf68_lane_98 = stg2_FIFO_buf68.extract<1568, 1583>();
  hw_uint<16> stg2_FIFO_buf68_lane_99 = stg2_FIFO_buf68.extract<1584, 1599>();
  hw_uint<16> stg2_FIFO_buf68_lane_100 = stg2_FIFO_buf68.extract<1600, 1615>();
  hw_uint<16> stg2_FIFO_buf68_lane_101 = stg2_FIFO_buf68.extract<1616, 1631>();
  hw_uint<16> stg2_FIFO_buf68_lane_102 = stg2_FIFO_buf68.extract<1632, 1647>();
  hw_uint<16> stg2_FIFO_buf68_lane_103 = stg2_FIFO_buf68.extract<1648, 1663>();
  hw_uint<16> stg2_FIFO_buf68_lane_104 = stg2_FIFO_buf68.extract<1664, 1679>();
  hw_uint<16> stg2_FIFO_buf68_lane_105 = stg2_FIFO_buf68.extract<1680, 1695>();
  hw_uint<16> stg2_FIFO_buf68_lane_106 = stg2_FIFO_buf68.extract<1696, 1711>();
  hw_uint<16> stg2_FIFO_buf68_lane_107 = stg2_FIFO_buf68.extract<1712, 1727>();
  hw_uint<16> stg2_FIFO_buf68_lane_108 = stg2_FIFO_buf68.extract<1728, 1743>();
  hw_uint<16> stg2_FIFO_buf68_lane_109 = stg2_FIFO_buf68.extract<1744, 1759>();
  hw_uint<16> stg2_FIFO_buf68_lane_110 = stg2_FIFO_buf68.extract<1760, 1775>();
  hw_uint<16> stg2_FIFO_buf68_lane_111 = stg2_FIFO_buf68.extract<1776, 1791>();
  hw_uint<16> stg2_FIFO_buf68_lane_112 = stg2_FIFO_buf68.extract<1792, 1807>();
  hw_uint<16> stg2_FIFO_buf68_lane_113 = stg2_FIFO_buf68.extract<1808, 1823>();
  hw_uint<16> stg2_FIFO_buf68_lane_114 = stg2_FIFO_buf68.extract<1824, 1839>();
  hw_uint<16> stg2_FIFO_buf68_lane_115 = stg2_FIFO_buf68.extract<1840, 1855>();
  hw_uint<16> stg2_FIFO_buf68_lane_116 = stg2_FIFO_buf68.extract<1856, 1871>();
  hw_uint<16> stg2_FIFO_buf68_lane_117 = stg2_FIFO_buf68.extract<1872, 1887>();
  hw_uint<16> stg2_FIFO_buf68_lane_118 = stg2_FIFO_buf68.extract<1888, 1903>();
  hw_uint<16> stg2_FIFO_buf68_lane_119 = stg2_FIFO_buf68.extract<1904, 1919>();
  hw_uint<16> stg2_FIFO_buf68_lane_120 = stg2_FIFO_buf68.extract<1920, 1935>();
  hw_uint<16> stg2_FIFO_buf68_lane_121 = stg2_FIFO_buf68.extract<1936, 1951>();
  hw_uint<16> stg2_FIFO_buf68_lane_122 = stg2_FIFO_buf68.extract<1952, 1967>();
  hw_uint<16> stg2_FIFO_buf68_lane_123 = stg2_FIFO_buf68.extract<1968, 1983>();
  hw_uint<16> stg2_FIFO_buf68_lane_124 = stg2_FIFO_buf68.extract<1984, 1999>();
  hw_uint<16> stg2_FIFO_buf68_lane_125 = stg2_FIFO_buf68.extract<2000, 2015>();
  hw_uint<16> stg2_FIFO_buf68_lane_126 = stg2_FIFO_buf68.extract<2016, 2031>();
  hw_uint<16> stg2_FIFO_buf68_lane_127 = stg2_FIFO_buf68.extract<2032, 2047>();

	
  hw_uint<64 > stg2_FIFO_buf68_lane_3_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_0);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_1);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_2);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_3);
  auto res_stg3_update_0_sm170_02289 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_3_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_7_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_4);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_5);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_6);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_7);
  auto res_stg3_update_0_sm170_12291 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_7_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_11_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_8);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_9);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_10);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_11);
  auto res_stg3_update_0_sm170_22293 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_11_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_15_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_12);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_13);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_14);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_15);
  auto res_stg3_update_0_sm170_32295 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_15_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_19_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_16);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_17);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_18);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_19);
  auto res_stg3_update_0_sm170_42297 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_19_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_23_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_20);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_21);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_22);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_23);
  auto res_stg3_update_0_sm170_52299 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_23_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_27_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_24);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_25);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_26);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_27);
  auto res_stg3_update_0_sm170_62301 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_27_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_31_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_28);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_29);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_30);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_31);
  auto res_stg3_update_0_sm170_72303 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_31_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_35_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_32);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_33);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_34);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_35);
  auto res_stg3_update_0_sm170_82305 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_35_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_39_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_36);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_37);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_38);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_39);
  auto res_stg3_update_0_sm170_92307 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_39_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_43_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_40);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_41);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_42);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_43);
  auto res_stg3_update_0_sm170_102309 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_43_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_47_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_44);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_45);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_46);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_47);
  auto res_stg3_update_0_sm170_112311 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_47_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_51_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_48);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_49);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_50);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_51);
  auto res_stg3_update_0_sm170_122313 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_51_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_55_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_52);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_53);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_54);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_55);
  auto res_stg3_update_0_sm170_132315 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_55_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_59_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_56);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_57);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_58);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_59);
  auto res_stg3_update_0_sm170_142317 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_59_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_63_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_60);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_61);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_62);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_63);
  auto res_stg3_update_0_sm170_152319 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_63_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_67_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_64);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_65);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_66);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_67);
  auto res_stg3_update_0_sm170_162321 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_67_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_71_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_68);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_69);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_70);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_71);
  auto res_stg3_update_0_sm170_172323 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_71_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_75_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_72);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_73);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_74);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_75);
  auto res_stg3_update_0_sm170_182325 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_75_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_79_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_76);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_77);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_78);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_79);
  auto res_stg3_update_0_sm170_192327 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_79_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_83_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_80);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_81);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_82);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_83);
  auto res_stg3_update_0_sm170_202329 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_83_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_87_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_84);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_85);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_86);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_87);
  auto res_stg3_update_0_sm170_212331 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_87_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_91_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_88);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_89);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_90);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_91);
  auto res_stg3_update_0_sm170_222333 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_91_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_95_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_92);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_93);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_94);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_95);
  auto res_stg3_update_0_sm170_232335 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_95_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_99_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_96);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_97);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_98);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_99);
  auto res_stg3_update_0_sm170_242337 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_99_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_103_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_100);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_101);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_102);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_103);
  auto res_stg3_update_0_sm170_252339 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_103_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_107_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_104);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_105);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_106);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_107);
  auto res_stg3_update_0_sm170_262341 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_107_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_111_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_108);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_109);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_110);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_111);
  auto res_stg3_update_0_sm170_272343 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_111_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_115_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_112);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_113);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_114);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_115);
  auto res_stg3_update_0_sm170_282345 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_115_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_119_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_116);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_117);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_118);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_119);
  auto res_stg3_update_0_sm170_292347 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_119_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_123_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_120);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_121);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_122);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_123);
  auto res_stg3_update_0_sm170_302349 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_123_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_127_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_124);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_125);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_126);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_127);
  auto res_stg3_update_0_sm170_312351 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_127_pack);
  hw_uint<512 > return_value3412;
  set_at<0, 512, 16>(return_value3412, res_stg3_update_0_sm170_02289);
  set_at<16, 512, 16>(return_value3412, res_stg3_update_0_sm170_12291);
  set_at<32, 512, 16>(return_value3412, res_stg3_update_0_sm170_22293);
  set_at<48, 512, 16>(return_value3412, res_stg3_update_0_sm170_32295);
  set_at<64, 512, 16>(return_value3412, res_stg3_update_0_sm170_42297);
  set_at<80, 512, 16>(return_value3412, res_stg3_update_0_sm170_52299);
  set_at<96, 512, 16>(return_value3412, res_stg3_update_0_sm170_62301);
  set_at<112, 512, 16>(return_value3412, res_stg3_update_0_sm170_72303);
  set_at<128, 512, 16>(return_value3412, res_stg3_update_0_sm170_82305);
  set_at<144, 512, 16>(return_value3412, res_stg3_update_0_sm170_92307);
  set_at<160, 512, 16>(return_value3412, res_stg3_update_0_sm170_102309);
  set_at<176, 512, 16>(return_value3412, res_stg3_update_0_sm170_112311);
  set_at<192, 512, 16>(return_value3412, res_stg3_update_0_sm170_122313);
  set_at<208, 512, 16>(return_value3412, res_stg3_update_0_sm170_132315);
  set_at<224, 512, 16>(return_value3412, res_stg3_update_0_sm170_142317);
  set_at<240, 512, 16>(return_value3412, res_stg3_update_0_sm170_152319);
  set_at<256, 512, 16>(return_value3412, res_stg3_update_0_sm170_162321);
  set_at<272, 512, 16>(return_value3412, res_stg3_update_0_sm170_172323);
  set_at<288, 512, 16>(return_value3412, res_stg3_update_0_sm170_182325);
  set_at<304, 512, 16>(return_value3412, res_stg3_update_0_sm170_192327);
  set_at<320, 512, 16>(return_value3412, res_stg3_update_0_sm170_202329);
  set_at<336, 512, 16>(return_value3412, res_stg3_update_0_sm170_212331);
  set_at<352, 512, 16>(return_value3412, res_stg3_update_0_sm170_222333);
  set_at<368, 512, 16>(return_value3412, res_stg3_update_0_sm170_232335);
  set_at<384, 512, 16>(return_value3412, res_stg3_update_0_sm170_242337);
  set_at<400, 512, 16>(return_value3412, res_stg3_update_0_sm170_252339);
  set_at<416, 512, 16>(return_value3412, res_stg3_update_0_sm170_262341);
  set_at<432, 512, 16>(return_value3412, res_stg3_update_0_sm170_272343);
  set_at<448, 512, 16>(return_value3412, res_stg3_update_0_sm170_282345);
  set_at<464, 512, 16>(return_value3412, res_stg3_update_0_sm170_292347);
  set_at<480, 512, 16>(return_value3412, res_stg3_update_0_sm170_302349);
  set_at<496, 512, 16>(return_value3412, res_stg3_update_0_sm170_312351);
  return return_value3412;

}

hw_uint<512> stg2_1_cu3414(hw_uint<16*128>& stg1_FIFO_buf20) {
  hw_uint<16> stg1_FIFO_buf20_lane_0 = stg1_FIFO_buf20.extract<0, 15>();
  hw_uint<16> stg1_FIFO_buf20_lane_1 = stg1_FIFO_buf20.extract<16, 31>();
  hw_uint<16> stg1_FIFO_buf20_lane_2 = stg1_FIFO_buf20.extract<32, 47>();
  hw_uint<16> stg1_FIFO_buf20_lane_3 = stg1_FIFO_buf20.extract<48, 63>();
  hw_uint<16> stg1_FIFO_buf20_lane_4 = stg1_FIFO_buf20.extract<64, 79>();
  hw_uint<16> stg1_FIFO_buf20_lane_5 = stg1_FIFO_buf20.extract<80, 95>();
  hw_uint<16> stg1_FIFO_buf20_lane_6 = stg1_FIFO_buf20.extract<96, 111>();
  hw_uint<16> stg1_FIFO_buf20_lane_7 = stg1_FIFO_buf20.extract<112, 127>();
  hw_uint<16> stg1_FIFO_buf20_lane_8 = stg1_FIFO_buf20.extract<128, 143>();
  hw_uint<16> stg1_FIFO_buf20_lane_9 = stg1_FIFO_buf20.extract<144, 159>();
  hw_uint<16> stg1_FIFO_buf20_lane_10 = stg1_FIFO_buf20.extract<160, 175>();
  hw_uint<16> stg1_FIFO_buf20_lane_11 = stg1_FIFO_buf20.extract<176, 191>();
  hw_uint<16> stg1_FIFO_buf20_lane_12 = stg1_FIFO_buf20.extract<192, 207>();
  hw_uint<16> stg1_FIFO_buf20_lane_13 = stg1_FIFO_buf20.extract<208, 223>();
  hw_uint<16> stg1_FIFO_buf20_lane_14 = stg1_FIFO_buf20.extract<224, 239>();
  hw_uint<16> stg1_FIFO_buf20_lane_15 = stg1_FIFO_buf20.extract<240, 255>();
  hw_uint<16> stg1_FIFO_buf20_lane_16 = stg1_FIFO_buf20.extract<256, 271>();
  hw_uint<16> stg1_FIFO_buf20_lane_17 = stg1_FIFO_buf20.extract<272, 287>();
  hw_uint<16> stg1_FIFO_buf20_lane_18 = stg1_FIFO_buf20.extract<288, 303>();
  hw_uint<16> stg1_FIFO_buf20_lane_19 = stg1_FIFO_buf20.extract<304, 319>();
  hw_uint<16> stg1_FIFO_buf20_lane_20 = stg1_FIFO_buf20.extract<320, 335>();
  hw_uint<16> stg1_FIFO_buf20_lane_21 = stg1_FIFO_buf20.extract<336, 351>();
  hw_uint<16> stg1_FIFO_buf20_lane_22 = stg1_FIFO_buf20.extract<352, 367>();
  hw_uint<16> stg1_FIFO_buf20_lane_23 = stg1_FIFO_buf20.extract<368, 383>();
  hw_uint<16> stg1_FIFO_buf20_lane_24 = stg1_FIFO_buf20.extract<384, 399>();
  hw_uint<16> stg1_FIFO_buf20_lane_25 = stg1_FIFO_buf20.extract<400, 415>();
  hw_uint<16> stg1_FIFO_buf20_lane_26 = stg1_FIFO_buf20.extract<416, 431>();
  hw_uint<16> stg1_FIFO_buf20_lane_27 = stg1_FIFO_buf20.extract<432, 447>();
  hw_uint<16> stg1_FIFO_buf20_lane_28 = stg1_FIFO_buf20.extract<448, 463>();
  hw_uint<16> stg1_FIFO_buf20_lane_29 = stg1_FIFO_buf20.extract<464, 479>();
  hw_uint<16> stg1_FIFO_buf20_lane_30 = stg1_FIFO_buf20.extract<480, 495>();
  hw_uint<16> stg1_FIFO_buf20_lane_31 = stg1_FIFO_buf20.extract<496, 511>();
  hw_uint<16> stg1_FIFO_buf20_lane_32 = stg1_FIFO_buf20.extract<512, 527>();
  hw_uint<16> stg1_FIFO_buf20_lane_33 = stg1_FIFO_buf20.extract<528, 543>();
  hw_uint<16> stg1_FIFO_buf20_lane_34 = stg1_FIFO_buf20.extract<544, 559>();
  hw_uint<16> stg1_FIFO_buf20_lane_35 = stg1_FIFO_buf20.extract<560, 575>();
  hw_uint<16> stg1_FIFO_buf20_lane_36 = stg1_FIFO_buf20.extract<576, 591>();
  hw_uint<16> stg1_FIFO_buf20_lane_37 = stg1_FIFO_buf20.extract<592, 607>();
  hw_uint<16> stg1_FIFO_buf20_lane_38 = stg1_FIFO_buf20.extract<608, 623>();
  hw_uint<16> stg1_FIFO_buf20_lane_39 = stg1_FIFO_buf20.extract<624, 639>();
  hw_uint<16> stg1_FIFO_buf20_lane_40 = stg1_FIFO_buf20.extract<640, 655>();
  hw_uint<16> stg1_FIFO_buf20_lane_41 = stg1_FIFO_buf20.extract<656, 671>();
  hw_uint<16> stg1_FIFO_buf20_lane_42 = stg1_FIFO_buf20.extract<672, 687>();
  hw_uint<16> stg1_FIFO_buf20_lane_43 = stg1_FIFO_buf20.extract<688, 703>();
  hw_uint<16> stg1_FIFO_buf20_lane_44 = stg1_FIFO_buf20.extract<704, 719>();
  hw_uint<16> stg1_FIFO_buf20_lane_45 = stg1_FIFO_buf20.extract<720, 735>();
  hw_uint<16> stg1_FIFO_buf20_lane_46 = stg1_FIFO_buf20.extract<736, 751>();
  hw_uint<16> stg1_FIFO_buf20_lane_47 = stg1_FIFO_buf20.extract<752, 767>();
  hw_uint<16> stg1_FIFO_buf20_lane_48 = stg1_FIFO_buf20.extract<768, 783>();
  hw_uint<16> stg1_FIFO_buf20_lane_49 = stg1_FIFO_buf20.extract<784, 799>();
  hw_uint<16> stg1_FIFO_buf20_lane_50 = stg1_FIFO_buf20.extract<800, 815>();
  hw_uint<16> stg1_FIFO_buf20_lane_51 = stg1_FIFO_buf20.extract<816, 831>();
  hw_uint<16> stg1_FIFO_buf20_lane_52 = stg1_FIFO_buf20.extract<832, 847>();
  hw_uint<16> stg1_FIFO_buf20_lane_53 = stg1_FIFO_buf20.extract<848, 863>();
  hw_uint<16> stg1_FIFO_buf20_lane_54 = stg1_FIFO_buf20.extract<864, 879>();
  hw_uint<16> stg1_FIFO_buf20_lane_55 = stg1_FIFO_buf20.extract<880, 895>();
  hw_uint<16> stg1_FIFO_buf20_lane_56 = stg1_FIFO_buf20.extract<896, 911>();
  hw_uint<16> stg1_FIFO_buf20_lane_57 = stg1_FIFO_buf20.extract<912, 927>();
  hw_uint<16> stg1_FIFO_buf20_lane_58 = stg1_FIFO_buf20.extract<928, 943>();
  hw_uint<16> stg1_FIFO_buf20_lane_59 = stg1_FIFO_buf20.extract<944, 959>();
  hw_uint<16> stg1_FIFO_buf20_lane_60 = stg1_FIFO_buf20.extract<960, 975>();
  hw_uint<16> stg1_FIFO_buf20_lane_61 = stg1_FIFO_buf20.extract<976, 991>();
  hw_uint<16> stg1_FIFO_buf20_lane_62 = stg1_FIFO_buf20.extract<992, 1007>();
  hw_uint<16> stg1_FIFO_buf20_lane_63 = stg1_FIFO_buf20.extract<1008, 1023>();
  hw_uint<16> stg1_FIFO_buf20_lane_64 = stg1_FIFO_buf20.extract<1024, 1039>();
  hw_uint<16> stg1_FIFO_buf20_lane_65 = stg1_FIFO_buf20.extract<1040, 1055>();
  hw_uint<16> stg1_FIFO_buf20_lane_66 = stg1_FIFO_buf20.extract<1056, 1071>();
  hw_uint<16> stg1_FIFO_buf20_lane_67 = stg1_FIFO_buf20.extract<1072, 1087>();
  hw_uint<16> stg1_FIFO_buf20_lane_68 = stg1_FIFO_buf20.extract<1088, 1103>();
  hw_uint<16> stg1_FIFO_buf20_lane_69 = stg1_FIFO_buf20.extract<1104, 1119>();
  hw_uint<16> stg1_FIFO_buf20_lane_70 = stg1_FIFO_buf20.extract<1120, 1135>();
  hw_uint<16> stg1_FIFO_buf20_lane_71 = stg1_FIFO_buf20.extract<1136, 1151>();
  hw_uint<16> stg1_FIFO_buf20_lane_72 = stg1_FIFO_buf20.extract<1152, 1167>();
  hw_uint<16> stg1_FIFO_buf20_lane_73 = stg1_FIFO_buf20.extract<1168, 1183>();
  hw_uint<16> stg1_FIFO_buf20_lane_74 = stg1_FIFO_buf20.extract<1184, 1199>();
  hw_uint<16> stg1_FIFO_buf20_lane_75 = stg1_FIFO_buf20.extract<1200, 1215>();
  hw_uint<16> stg1_FIFO_buf20_lane_76 = stg1_FIFO_buf20.extract<1216, 1231>();
  hw_uint<16> stg1_FIFO_buf20_lane_77 = stg1_FIFO_buf20.extract<1232, 1247>();
  hw_uint<16> stg1_FIFO_buf20_lane_78 = stg1_FIFO_buf20.extract<1248, 1263>();
  hw_uint<16> stg1_FIFO_buf20_lane_79 = stg1_FIFO_buf20.extract<1264, 1279>();
  hw_uint<16> stg1_FIFO_buf20_lane_80 = stg1_FIFO_buf20.extract<1280, 1295>();
  hw_uint<16> stg1_FIFO_buf20_lane_81 = stg1_FIFO_buf20.extract<1296, 1311>();
  hw_uint<16> stg1_FIFO_buf20_lane_82 = stg1_FIFO_buf20.extract<1312, 1327>();
  hw_uint<16> stg1_FIFO_buf20_lane_83 = stg1_FIFO_buf20.extract<1328, 1343>();
  hw_uint<16> stg1_FIFO_buf20_lane_84 = stg1_FIFO_buf20.extract<1344, 1359>();
  hw_uint<16> stg1_FIFO_buf20_lane_85 = stg1_FIFO_buf20.extract<1360, 1375>();
  hw_uint<16> stg1_FIFO_buf20_lane_86 = stg1_FIFO_buf20.extract<1376, 1391>();
  hw_uint<16> stg1_FIFO_buf20_lane_87 = stg1_FIFO_buf20.extract<1392, 1407>();
  hw_uint<16> stg1_FIFO_buf20_lane_88 = stg1_FIFO_buf20.extract<1408, 1423>();
  hw_uint<16> stg1_FIFO_buf20_lane_89 = stg1_FIFO_buf20.extract<1424, 1439>();
  hw_uint<16> stg1_FIFO_buf20_lane_90 = stg1_FIFO_buf20.extract<1440, 1455>();
  hw_uint<16> stg1_FIFO_buf20_lane_91 = stg1_FIFO_buf20.extract<1456, 1471>();
  hw_uint<16> stg1_FIFO_buf20_lane_92 = stg1_FIFO_buf20.extract<1472, 1487>();
  hw_uint<16> stg1_FIFO_buf20_lane_93 = stg1_FIFO_buf20.extract<1488, 1503>();
  hw_uint<16> stg1_FIFO_buf20_lane_94 = stg1_FIFO_buf20.extract<1504, 1519>();
  hw_uint<16> stg1_FIFO_buf20_lane_95 = stg1_FIFO_buf20.extract<1520, 1535>();
  hw_uint<16> stg1_FIFO_buf20_lane_96 = stg1_FIFO_buf20.extract<1536, 1551>();
  hw_uint<16> stg1_FIFO_buf20_lane_97 = stg1_FIFO_buf20.extract<1552, 1567>();
  hw_uint<16> stg1_FIFO_buf20_lane_98 = stg1_FIFO_buf20.extract<1568, 1583>();
  hw_uint<16> stg1_FIFO_buf20_lane_99 = stg1_FIFO_buf20.extract<1584, 1599>();
  hw_uint<16> stg1_FIFO_buf20_lane_100 = stg1_FIFO_buf20.extract<1600, 1615>();
  hw_uint<16> stg1_FIFO_buf20_lane_101 = stg1_FIFO_buf20.extract<1616, 1631>();
  hw_uint<16> stg1_FIFO_buf20_lane_102 = stg1_FIFO_buf20.extract<1632, 1647>();
  hw_uint<16> stg1_FIFO_buf20_lane_103 = stg1_FIFO_buf20.extract<1648, 1663>();
  hw_uint<16> stg1_FIFO_buf20_lane_104 = stg1_FIFO_buf20.extract<1664, 1679>();
  hw_uint<16> stg1_FIFO_buf20_lane_105 = stg1_FIFO_buf20.extract<1680, 1695>();
  hw_uint<16> stg1_FIFO_buf20_lane_106 = stg1_FIFO_buf20.extract<1696, 1711>();
  hw_uint<16> stg1_FIFO_buf20_lane_107 = stg1_FIFO_buf20.extract<1712, 1727>();
  hw_uint<16> stg1_FIFO_buf20_lane_108 = stg1_FIFO_buf20.extract<1728, 1743>();
  hw_uint<16> stg1_FIFO_buf20_lane_109 = stg1_FIFO_buf20.extract<1744, 1759>();
  hw_uint<16> stg1_FIFO_buf20_lane_110 = stg1_FIFO_buf20.extract<1760, 1775>();
  hw_uint<16> stg1_FIFO_buf20_lane_111 = stg1_FIFO_buf20.extract<1776, 1791>();
  hw_uint<16> stg1_FIFO_buf20_lane_112 = stg1_FIFO_buf20.extract<1792, 1807>();
  hw_uint<16> stg1_FIFO_buf20_lane_113 = stg1_FIFO_buf20.extract<1808, 1823>();
  hw_uint<16> stg1_FIFO_buf20_lane_114 = stg1_FIFO_buf20.extract<1824, 1839>();
  hw_uint<16> stg1_FIFO_buf20_lane_115 = stg1_FIFO_buf20.extract<1840, 1855>();
  hw_uint<16> stg1_FIFO_buf20_lane_116 = stg1_FIFO_buf20.extract<1856, 1871>();
  hw_uint<16> stg1_FIFO_buf20_lane_117 = stg1_FIFO_buf20.extract<1872, 1887>();
  hw_uint<16> stg1_FIFO_buf20_lane_118 = stg1_FIFO_buf20.extract<1888, 1903>();
  hw_uint<16> stg1_FIFO_buf20_lane_119 = stg1_FIFO_buf20.extract<1904, 1919>();
  hw_uint<16> stg1_FIFO_buf20_lane_120 = stg1_FIFO_buf20.extract<1920, 1935>();
  hw_uint<16> stg1_FIFO_buf20_lane_121 = stg1_FIFO_buf20.extract<1936, 1951>();
  hw_uint<16> stg1_FIFO_buf20_lane_122 = stg1_FIFO_buf20.extract<1952, 1967>();
  hw_uint<16> stg1_FIFO_buf20_lane_123 = stg1_FIFO_buf20.extract<1968, 1983>();
  hw_uint<16> stg1_FIFO_buf20_lane_124 = stg1_FIFO_buf20.extract<1984, 1999>();
  hw_uint<16> stg1_FIFO_buf20_lane_125 = stg1_FIFO_buf20.extract<2000, 2015>();
  hw_uint<16> stg1_FIFO_buf20_lane_126 = stg1_FIFO_buf20.extract<2016, 2031>();
  hw_uint<16> stg1_FIFO_buf20_lane_127 = stg1_FIFO_buf20.extract<2032, 2047>();

	
  hw_uint<64 > stg1_FIFO_buf20_lane_3_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_0);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_1);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_2);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_3);
  auto res_stg2_update_0_sm171_02353 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_3_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_7_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_4);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_5);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_6);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_7);
  auto res_stg2_update_0_sm171_12355 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_7_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_11_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_8);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_9);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_10);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_11);
  auto res_stg2_update_0_sm171_22357 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_11_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_15_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_12);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_13);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_14);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_15);
  auto res_stg2_update_0_sm171_32359 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_15_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_19_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_16);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_17);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_18);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_19);
  auto res_stg2_update_0_sm171_42361 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_19_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_23_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_20);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_21);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_22);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_23);
  auto res_stg2_update_0_sm171_52363 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_23_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_27_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_24);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_25);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_26);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_27);
  auto res_stg2_update_0_sm171_62365 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_27_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_31_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_28);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_29);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_30);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_31);
  auto res_stg2_update_0_sm171_72367 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_31_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_35_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_32);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_33);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_34);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_35);
  auto res_stg2_update_0_sm171_82369 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_35_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_39_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_36);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_37);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_38);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_39);
  auto res_stg2_update_0_sm171_92371 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_39_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_43_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_40);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_41);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_42);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_43);
  auto res_stg2_update_0_sm171_102373 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_43_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_47_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_44);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_45);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_46);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_47);
  auto res_stg2_update_0_sm171_112375 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_47_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_51_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_48);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_49);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_50);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_51);
  auto res_stg2_update_0_sm171_122377 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_51_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_55_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_52);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_53);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_54);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_55);
  auto res_stg2_update_0_sm171_132379 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_55_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_59_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_56);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_57);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_58);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_59);
  auto res_stg2_update_0_sm171_142381 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_59_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_63_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_60);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_61);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_62);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_63);
  auto res_stg2_update_0_sm171_152383 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_63_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_67_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_64);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_65);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_66);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_67);
  auto res_stg2_update_0_sm171_162385 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_67_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_71_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_68);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_69);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_70);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_71);
  auto res_stg2_update_0_sm171_172387 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_71_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_75_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_72);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_73);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_74);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_75);
  auto res_stg2_update_0_sm171_182389 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_75_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_79_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_76);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_77);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_78);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_79);
  auto res_stg2_update_0_sm171_192391 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_79_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_83_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_80);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_81);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_82);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_83);
  auto res_stg2_update_0_sm171_202393 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_83_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_87_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_84);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_85);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_86);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_87);
  auto res_stg2_update_0_sm171_212395 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_87_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_91_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_88);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_89);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_90);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_91);
  auto res_stg2_update_0_sm171_222397 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_91_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_95_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_92);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_93);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_94);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_95);
  auto res_stg2_update_0_sm171_232399 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_95_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_99_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_96);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_97);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_98);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_99);
  auto res_stg2_update_0_sm171_242401 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_99_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_103_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_100);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_101);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_102);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_103);
  auto res_stg2_update_0_sm171_252403 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_103_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_107_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_104);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_105);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_106);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_107);
  auto res_stg2_update_0_sm171_262405 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_107_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_111_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_108);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_109);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_110);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_111);
  auto res_stg2_update_0_sm171_272407 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_111_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_115_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_112);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_113);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_114);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_115);
  auto res_stg2_update_0_sm171_282409 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_115_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_119_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_116);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_117);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_118);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_119);
  auto res_stg2_update_0_sm171_292411 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_119_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_123_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_120);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_121);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_122);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_123);
  auto res_stg2_update_0_sm171_302413 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_123_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_127_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_124);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_125);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_126);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_127);
  auto res_stg2_update_0_sm171_312415 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_127_pack);
  hw_uint<512 > return_value3415;
  set_at<0, 512, 16>(return_value3415, res_stg2_update_0_sm171_02353);
  set_at<16, 512, 16>(return_value3415, res_stg2_update_0_sm171_12355);
  set_at<32, 512, 16>(return_value3415, res_stg2_update_0_sm171_22357);
  set_at<48, 512, 16>(return_value3415, res_stg2_update_0_sm171_32359);
  set_at<64, 512, 16>(return_value3415, res_stg2_update_0_sm171_42361);
  set_at<80, 512, 16>(return_value3415, res_stg2_update_0_sm171_52363);
  set_at<96, 512, 16>(return_value3415, res_stg2_update_0_sm171_62365);
  set_at<112, 512, 16>(return_value3415, res_stg2_update_0_sm171_72367);
  set_at<128, 512, 16>(return_value3415, res_stg2_update_0_sm171_82369);
  set_at<144, 512, 16>(return_value3415, res_stg2_update_0_sm171_92371);
  set_at<160, 512, 16>(return_value3415, res_stg2_update_0_sm171_102373);
  set_at<176, 512, 16>(return_value3415, res_stg2_update_0_sm171_112375);
  set_at<192, 512, 16>(return_value3415, res_stg2_update_0_sm171_122377);
  set_at<208, 512, 16>(return_value3415, res_stg2_update_0_sm171_132379);
  set_at<224, 512, 16>(return_value3415, res_stg2_update_0_sm171_142381);
  set_at<240, 512, 16>(return_value3415, res_stg2_update_0_sm171_152383);
  set_at<256, 512, 16>(return_value3415, res_stg2_update_0_sm171_162385);
  set_at<272, 512, 16>(return_value3415, res_stg2_update_0_sm171_172387);
  set_at<288, 512, 16>(return_value3415, res_stg2_update_0_sm171_182389);
  set_at<304, 512, 16>(return_value3415, res_stg2_update_0_sm171_192391);
  set_at<320, 512, 16>(return_value3415, res_stg2_update_0_sm171_202393);
  set_at<336, 512, 16>(return_value3415, res_stg2_update_0_sm171_212395);
  set_at<352, 512, 16>(return_value3415, res_stg2_update_0_sm171_222397);
  set_at<368, 512, 16>(return_value3415, res_stg2_update_0_sm171_232399);
  set_at<384, 512, 16>(return_value3415, res_stg2_update_0_sm171_242401);
  set_at<400, 512, 16>(return_value3415, res_stg2_update_0_sm171_252403);
  set_at<416, 512, 16>(return_value3415, res_stg2_update_0_sm171_262405);
  set_at<432, 512, 16>(return_value3415, res_stg2_update_0_sm171_272407);
  set_at<448, 512, 16>(return_value3415, res_stg2_update_0_sm171_282409);
  set_at<464, 512, 16>(return_value3415, res_stg2_update_0_sm171_292411);
  set_at<480, 512, 16>(return_value3415, res_stg2_update_0_sm171_302413);
  set_at<496, 512, 16>(return_value3415, res_stg2_update_0_sm171_312415);
  return return_value3415;

}

hw_uint<512> stg1_1_cu3417(hw_uint<16*128>& stg0_FIFO_buf12) {
  hw_uint<16> stg0_FIFO_buf12_lane_0 = stg0_FIFO_buf12.extract<0, 15>();
  hw_uint<16> stg0_FIFO_buf12_lane_1 = stg0_FIFO_buf12.extract<16, 31>();
  hw_uint<16> stg0_FIFO_buf12_lane_2 = stg0_FIFO_buf12.extract<32, 47>();
  hw_uint<16> stg0_FIFO_buf12_lane_3 = stg0_FIFO_buf12.extract<48, 63>();
  hw_uint<16> stg0_FIFO_buf12_lane_4 = stg0_FIFO_buf12.extract<64, 79>();
  hw_uint<16> stg0_FIFO_buf12_lane_5 = stg0_FIFO_buf12.extract<80, 95>();
  hw_uint<16> stg0_FIFO_buf12_lane_6 = stg0_FIFO_buf12.extract<96, 111>();
  hw_uint<16> stg0_FIFO_buf12_lane_7 = stg0_FIFO_buf12.extract<112, 127>();
  hw_uint<16> stg0_FIFO_buf12_lane_8 = stg0_FIFO_buf12.extract<128, 143>();
  hw_uint<16> stg0_FIFO_buf12_lane_9 = stg0_FIFO_buf12.extract<144, 159>();
  hw_uint<16> stg0_FIFO_buf12_lane_10 = stg0_FIFO_buf12.extract<160, 175>();
  hw_uint<16> stg0_FIFO_buf12_lane_11 = stg0_FIFO_buf12.extract<176, 191>();
  hw_uint<16> stg0_FIFO_buf12_lane_12 = stg0_FIFO_buf12.extract<192, 207>();
  hw_uint<16> stg0_FIFO_buf12_lane_13 = stg0_FIFO_buf12.extract<208, 223>();
  hw_uint<16> stg0_FIFO_buf12_lane_14 = stg0_FIFO_buf12.extract<224, 239>();
  hw_uint<16> stg0_FIFO_buf12_lane_15 = stg0_FIFO_buf12.extract<240, 255>();
  hw_uint<16> stg0_FIFO_buf12_lane_16 = stg0_FIFO_buf12.extract<256, 271>();
  hw_uint<16> stg0_FIFO_buf12_lane_17 = stg0_FIFO_buf12.extract<272, 287>();
  hw_uint<16> stg0_FIFO_buf12_lane_18 = stg0_FIFO_buf12.extract<288, 303>();
  hw_uint<16> stg0_FIFO_buf12_lane_19 = stg0_FIFO_buf12.extract<304, 319>();
  hw_uint<16> stg0_FIFO_buf12_lane_20 = stg0_FIFO_buf12.extract<320, 335>();
  hw_uint<16> stg0_FIFO_buf12_lane_21 = stg0_FIFO_buf12.extract<336, 351>();
  hw_uint<16> stg0_FIFO_buf12_lane_22 = stg0_FIFO_buf12.extract<352, 367>();
  hw_uint<16> stg0_FIFO_buf12_lane_23 = stg0_FIFO_buf12.extract<368, 383>();
  hw_uint<16> stg0_FIFO_buf12_lane_24 = stg0_FIFO_buf12.extract<384, 399>();
  hw_uint<16> stg0_FIFO_buf12_lane_25 = stg0_FIFO_buf12.extract<400, 415>();
  hw_uint<16> stg0_FIFO_buf12_lane_26 = stg0_FIFO_buf12.extract<416, 431>();
  hw_uint<16> stg0_FIFO_buf12_lane_27 = stg0_FIFO_buf12.extract<432, 447>();
  hw_uint<16> stg0_FIFO_buf12_lane_28 = stg0_FIFO_buf12.extract<448, 463>();
  hw_uint<16> stg0_FIFO_buf12_lane_29 = stg0_FIFO_buf12.extract<464, 479>();
  hw_uint<16> stg0_FIFO_buf12_lane_30 = stg0_FIFO_buf12.extract<480, 495>();
  hw_uint<16> stg0_FIFO_buf12_lane_31 = stg0_FIFO_buf12.extract<496, 511>();
  hw_uint<16> stg0_FIFO_buf12_lane_32 = stg0_FIFO_buf12.extract<512, 527>();
  hw_uint<16> stg0_FIFO_buf12_lane_33 = stg0_FIFO_buf12.extract<528, 543>();
  hw_uint<16> stg0_FIFO_buf12_lane_34 = stg0_FIFO_buf12.extract<544, 559>();
  hw_uint<16> stg0_FIFO_buf12_lane_35 = stg0_FIFO_buf12.extract<560, 575>();
  hw_uint<16> stg0_FIFO_buf12_lane_36 = stg0_FIFO_buf12.extract<576, 591>();
  hw_uint<16> stg0_FIFO_buf12_lane_37 = stg0_FIFO_buf12.extract<592, 607>();
  hw_uint<16> stg0_FIFO_buf12_lane_38 = stg0_FIFO_buf12.extract<608, 623>();
  hw_uint<16> stg0_FIFO_buf12_lane_39 = stg0_FIFO_buf12.extract<624, 639>();
  hw_uint<16> stg0_FIFO_buf12_lane_40 = stg0_FIFO_buf12.extract<640, 655>();
  hw_uint<16> stg0_FIFO_buf12_lane_41 = stg0_FIFO_buf12.extract<656, 671>();
  hw_uint<16> stg0_FIFO_buf12_lane_42 = stg0_FIFO_buf12.extract<672, 687>();
  hw_uint<16> stg0_FIFO_buf12_lane_43 = stg0_FIFO_buf12.extract<688, 703>();
  hw_uint<16> stg0_FIFO_buf12_lane_44 = stg0_FIFO_buf12.extract<704, 719>();
  hw_uint<16> stg0_FIFO_buf12_lane_45 = stg0_FIFO_buf12.extract<720, 735>();
  hw_uint<16> stg0_FIFO_buf12_lane_46 = stg0_FIFO_buf12.extract<736, 751>();
  hw_uint<16> stg0_FIFO_buf12_lane_47 = stg0_FIFO_buf12.extract<752, 767>();
  hw_uint<16> stg0_FIFO_buf12_lane_48 = stg0_FIFO_buf12.extract<768, 783>();
  hw_uint<16> stg0_FIFO_buf12_lane_49 = stg0_FIFO_buf12.extract<784, 799>();
  hw_uint<16> stg0_FIFO_buf12_lane_50 = stg0_FIFO_buf12.extract<800, 815>();
  hw_uint<16> stg0_FIFO_buf12_lane_51 = stg0_FIFO_buf12.extract<816, 831>();
  hw_uint<16> stg0_FIFO_buf12_lane_52 = stg0_FIFO_buf12.extract<832, 847>();
  hw_uint<16> stg0_FIFO_buf12_lane_53 = stg0_FIFO_buf12.extract<848, 863>();
  hw_uint<16> stg0_FIFO_buf12_lane_54 = stg0_FIFO_buf12.extract<864, 879>();
  hw_uint<16> stg0_FIFO_buf12_lane_55 = stg0_FIFO_buf12.extract<880, 895>();
  hw_uint<16> stg0_FIFO_buf12_lane_56 = stg0_FIFO_buf12.extract<896, 911>();
  hw_uint<16> stg0_FIFO_buf12_lane_57 = stg0_FIFO_buf12.extract<912, 927>();
  hw_uint<16> stg0_FIFO_buf12_lane_58 = stg0_FIFO_buf12.extract<928, 943>();
  hw_uint<16> stg0_FIFO_buf12_lane_59 = stg0_FIFO_buf12.extract<944, 959>();
  hw_uint<16> stg0_FIFO_buf12_lane_60 = stg0_FIFO_buf12.extract<960, 975>();
  hw_uint<16> stg0_FIFO_buf12_lane_61 = stg0_FIFO_buf12.extract<976, 991>();
  hw_uint<16> stg0_FIFO_buf12_lane_62 = stg0_FIFO_buf12.extract<992, 1007>();
  hw_uint<16> stg0_FIFO_buf12_lane_63 = stg0_FIFO_buf12.extract<1008, 1023>();
  hw_uint<16> stg0_FIFO_buf12_lane_64 = stg0_FIFO_buf12.extract<1024, 1039>();
  hw_uint<16> stg0_FIFO_buf12_lane_65 = stg0_FIFO_buf12.extract<1040, 1055>();
  hw_uint<16> stg0_FIFO_buf12_lane_66 = stg0_FIFO_buf12.extract<1056, 1071>();
  hw_uint<16> stg0_FIFO_buf12_lane_67 = stg0_FIFO_buf12.extract<1072, 1087>();
  hw_uint<16> stg0_FIFO_buf12_lane_68 = stg0_FIFO_buf12.extract<1088, 1103>();
  hw_uint<16> stg0_FIFO_buf12_lane_69 = stg0_FIFO_buf12.extract<1104, 1119>();
  hw_uint<16> stg0_FIFO_buf12_lane_70 = stg0_FIFO_buf12.extract<1120, 1135>();
  hw_uint<16> stg0_FIFO_buf12_lane_71 = stg0_FIFO_buf12.extract<1136, 1151>();
  hw_uint<16> stg0_FIFO_buf12_lane_72 = stg0_FIFO_buf12.extract<1152, 1167>();
  hw_uint<16> stg0_FIFO_buf12_lane_73 = stg0_FIFO_buf12.extract<1168, 1183>();
  hw_uint<16> stg0_FIFO_buf12_lane_74 = stg0_FIFO_buf12.extract<1184, 1199>();
  hw_uint<16> stg0_FIFO_buf12_lane_75 = stg0_FIFO_buf12.extract<1200, 1215>();
  hw_uint<16> stg0_FIFO_buf12_lane_76 = stg0_FIFO_buf12.extract<1216, 1231>();
  hw_uint<16> stg0_FIFO_buf12_lane_77 = stg0_FIFO_buf12.extract<1232, 1247>();
  hw_uint<16> stg0_FIFO_buf12_lane_78 = stg0_FIFO_buf12.extract<1248, 1263>();
  hw_uint<16> stg0_FIFO_buf12_lane_79 = stg0_FIFO_buf12.extract<1264, 1279>();
  hw_uint<16> stg0_FIFO_buf12_lane_80 = stg0_FIFO_buf12.extract<1280, 1295>();
  hw_uint<16> stg0_FIFO_buf12_lane_81 = stg0_FIFO_buf12.extract<1296, 1311>();
  hw_uint<16> stg0_FIFO_buf12_lane_82 = stg0_FIFO_buf12.extract<1312, 1327>();
  hw_uint<16> stg0_FIFO_buf12_lane_83 = stg0_FIFO_buf12.extract<1328, 1343>();
  hw_uint<16> stg0_FIFO_buf12_lane_84 = stg0_FIFO_buf12.extract<1344, 1359>();
  hw_uint<16> stg0_FIFO_buf12_lane_85 = stg0_FIFO_buf12.extract<1360, 1375>();
  hw_uint<16> stg0_FIFO_buf12_lane_86 = stg0_FIFO_buf12.extract<1376, 1391>();
  hw_uint<16> stg0_FIFO_buf12_lane_87 = stg0_FIFO_buf12.extract<1392, 1407>();
  hw_uint<16> stg0_FIFO_buf12_lane_88 = stg0_FIFO_buf12.extract<1408, 1423>();
  hw_uint<16> stg0_FIFO_buf12_lane_89 = stg0_FIFO_buf12.extract<1424, 1439>();
  hw_uint<16> stg0_FIFO_buf12_lane_90 = stg0_FIFO_buf12.extract<1440, 1455>();
  hw_uint<16> stg0_FIFO_buf12_lane_91 = stg0_FIFO_buf12.extract<1456, 1471>();
  hw_uint<16> stg0_FIFO_buf12_lane_92 = stg0_FIFO_buf12.extract<1472, 1487>();
  hw_uint<16> stg0_FIFO_buf12_lane_93 = stg0_FIFO_buf12.extract<1488, 1503>();
  hw_uint<16> stg0_FIFO_buf12_lane_94 = stg0_FIFO_buf12.extract<1504, 1519>();
  hw_uint<16> stg0_FIFO_buf12_lane_95 = stg0_FIFO_buf12.extract<1520, 1535>();
  hw_uint<16> stg0_FIFO_buf12_lane_96 = stg0_FIFO_buf12.extract<1536, 1551>();
  hw_uint<16> stg0_FIFO_buf12_lane_97 = stg0_FIFO_buf12.extract<1552, 1567>();
  hw_uint<16> stg0_FIFO_buf12_lane_98 = stg0_FIFO_buf12.extract<1568, 1583>();
  hw_uint<16> stg0_FIFO_buf12_lane_99 = stg0_FIFO_buf12.extract<1584, 1599>();
  hw_uint<16> stg0_FIFO_buf12_lane_100 = stg0_FIFO_buf12.extract<1600, 1615>();
  hw_uint<16> stg0_FIFO_buf12_lane_101 = stg0_FIFO_buf12.extract<1616, 1631>();
  hw_uint<16> stg0_FIFO_buf12_lane_102 = stg0_FIFO_buf12.extract<1632, 1647>();
  hw_uint<16> stg0_FIFO_buf12_lane_103 = stg0_FIFO_buf12.extract<1648, 1663>();
  hw_uint<16> stg0_FIFO_buf12_lane_104 = stg0_FIFO_buf12.extract<1664, 1679>();
  hw_uint<16> stg0_FIFO_buf12_lane_105 = stg0_FIFO_buf12.extract<1680, 1695>();
  hw_uint<16> stg0_FIFO_buf12_lane_106 = stg0_FIFO_buf12.extract<1696, 1711>();
  hw_uint<16> stg0_FIFO_buf12_lane_107 = stg0_FIFO_buf12.extract<1712, 1727>();
  hw_uint<16> stg0_FIFO_buf12_lane_108 = stg0_FIFO_buf12.extract<1728, 1743>();
  hw_uint<16> stg0_FIFO_buf12_lane_109 = stg0_FIFO_buf12.extract<1744, 1759>();
  hw_uint<16> stg0_FIFO_buf12_lane_110 = stg0_FIFO_buf12.extract<1760, 1775>();
  hw_uint<16> stg0_FIFO_buf12_lane_111 = stg0_FIFO_buf12.extract<1776, 1791>();
  hw_uint<16> stg0_FIFO_buf12_lane_112 = stg0_FIFO_buf12.extract<1792, 1807>();
  hw_uint<16> stg0_FIFO_buf12_lane_113 = stg0_FIFO_buf12.extract<1808, 1823>();
  hw_uint<16> stg0_FIFO_buf12_lane_114 = stg0_FIFO_buf12.extract<1824, 1839>();
  hw_uint<16> stg0_FIFO_buf12_lane_115 = stg0_FIFO_buf12.extract<1840, 1855>();
  hw_uint<16> stg0_FIFO_buf12_lane_116 = stg0_FIFO_buf12.extract<1856, 1871>();
  hw_uint<16> stg0_FIFO_buf12_lane_117 = stg0_FIFO_buf12.extract<1872, 1887>();
  hw_uint<16> stg0_FIFO_buf12_lane_118 = stg0_FIFO_buf12.extract<1888, 1903>();
  hw_uint<16> stg0_FIFO_buf12_lane_119 = stg0_FIFO_buf12.extract<1904, 1919>();
  hw_uint<16> stg0_FIFO_buf12_lane_120 = stg0_FIFO_buf12.extract<1920, 1935>();
  hw_uint<16> stg0_FIFO_buf12_lane_121 = stg0_FIFO_buf12.extract<1936, 1951>();
  hw_uint<16> stg0_FIFO_buf12_lane_122 = stg0_FIFO_buf12.extract<1952, 1967>();
  hw_uint<16> stg0_FIFO_buf12_lane_123 = stg0_FIFO_buf12.extract<1968, 1983>();
  hw_uint<16> stg0_FIFO_buf12_lane_124 = stg0_FIFO_buf12.extract<1984, 1999>();
  hw_uint<16> stg0_FIFO_buf12_lane_125 = stg0_FIFO_buf12.extract<2000, 2015>();
  hw_uint<16> stg0_FIFO_buf12_lane_126 = stg0_FIFO_buf12.extract<2016, 2031>();
  hw_uint<16> stg0_FIFO_buf12_lane_127 = stg0_FIFO_buf12.extract<2032, 2047>();

	
  hw_uint<64 > stg0_FIFO_buf12_lane_3_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_0);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_1);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_2);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_3);
  auto res_stg1_update_0_sm172_02417 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_3_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_7_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_4);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_5);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_6);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_7);
  auto res_stg1_update_0_sm172_12419 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_7_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_11_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_8);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_9);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_10);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_11);
  auto res_stg1_update_0_sm172_22421 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_11_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_15_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_12);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_13);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_14);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_15);
  auto res_stg1_update_0_sm172_32423 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_15_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_19_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_16);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_17);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_18);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_19);
  auto res_stg1_update_0_sm172_42425 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_19_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_23_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_20);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_21);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_22);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_23);
  auto res_stg1_update_0_sm172_52427 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_23_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_27_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_24);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_25);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_26);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_27);
  auto res_stg1_update_0_sm172_62429 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_27_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_31_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_28);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_29);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_30);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_31);
  auto res_stg1_update_0_sm172_72431 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_31_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_35_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_32);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_33);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_34);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_35);
  auto res_stg1_update_0_sm172_82433 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_35_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_39_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_36);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_37);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_38);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_39);
  auto res_stg1_update_0_sm172_92435 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_39_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_43_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_40);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_41);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_42);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_43);
  auto res_stg1_update_0_sm172_102437 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_43_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_47_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_44);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_45);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_46);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_47);
  auto res_stg1_update_0_sm172_112439 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_47_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_51_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_48);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_49);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_50);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_51);
  auto res_stg1_update_0_sm172_122441 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_51_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_55_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_52);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_53);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_54);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_55);
  auto res_stg1_update_0_sm172_132443 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_55_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_59_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_56);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_57);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_58);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_59);
  auto res_stg1_update_0_sm172_142445 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_59_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_63_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_60);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_61);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_62);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_63);
  auto res_stg1_update_0_sm172_152447 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_63_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_67_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_64);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_65);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_66);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_67);
  auto res_stg1_update_0_sm172_162449 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_67_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_71_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_68);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_69);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_70);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_71);
  auto res_stg1_update_0_sm172_172451 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_71_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_75_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_72);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_73);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_74);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_75);
  auto res_stg1_update_0_sm172_182453 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_75_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_79_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_76);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_77);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_78);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_79);
  auto res_stg1_update_0_sm172_192455 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_79_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_83_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_80);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_81);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_82);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_83);
  auto res_stg1_update_0_sm172_202457 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_83_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_87_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_84);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_85);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_86);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_87);
  auto res_stg1_update_0_sm172_212459 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_87_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_91_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_88);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_89);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_90);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_91);
  auto res_stg1_update_0_sm172_222461 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_91_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_95_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_92);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_93);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_94);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_95);
  auto res_stg1_update_0_sm172_232463 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_95_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_99_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_96);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_97);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_98);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_99);
  auto res_stg1_update_0_sm172_242465 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_99_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_103_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_100);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_101);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_102);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_103);
  auto res_stg1_update_0_sm172_252467 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_103_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_107_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_104);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_105);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_106);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_107);
  auto res_stg1_update_0_sm172_262469 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_107_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_111_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_108);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_109);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_110);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_111);
  auto res_stg1_update_0_sm172_272471 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_111_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_115_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_112);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_113);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_114);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_115);
  auto res_stg1_update_0_sm172_282473 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_115_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_119_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_116);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_117);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_118);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_119);
  auto res_stg1_update_0_sm172_292475 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_119_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_123_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_120);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_121);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_122);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_123);
  auto res_stg1_update_0_sm172_302477 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_123_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_127_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_124);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_125);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_126);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_127);
  auto res_stg1_update_0_sm172_312479 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_127_pack);
  hw_uint<512 > return_value3418;
  set_at<0, 512, 16>(return_value3418, res_stg1_update_0_sm172_02417);
  set_at<16, 512, 16>(return_value3418, res_stg1_update_0_sm172_12419);
  set_at<32, 512, 16>(return_value3418, res_stg1_update_0_sm172_22421);
  set_at<48, 512, 16>(return_value3418, res_stg1_update_0_sm172_32423);
  set_at<64, 512, 16>(return_value3418, res_stg1_update_0_sm172_42425);
  set_at<80, 512, 16>(return_value3418, res_stg1_update_0_sm172_52427);
  set_at<96, 512, 16>(return_value3418, res_stg1_update_0_sm172_62429);
  set_at<112, 512, 16>(return_value3418, res_stg1_update_0_sm172_72431);
  set_at<128, 512, 16>(return_value3418, res_stg1_update_0_sm172_82433);
  set_at<144, 512, 16>(return_value3418, res_stg1_update_0_sm172_92435);
  set_at<160, 512, 16>(return_value3418, res_stg1_update_0_sm172_102437);
  set_at<176, 512, 16>(return_value3418, res_stg1_update_0_sm172_112439);
  set_at<192, 512, 16>(return_value3418, res_stg1_update_0_sm172_122441);
  set_at<208, 512, 16>(return_value3418, res_stg1_update_0_sm172_132443);
  set_at<224, 512, 16>(return_value3418, res_stg1_update_0_sm172_142445);
  set_at<240, 512, 16>(return_value3418, res_stg1_update_0_sm172_152447);
  set_at<256, 512, 16>(return_value3418, res_stg1_update_0_sm172_162449);
  set_at<272, 512, 16>(return_value3418, res_stg1_update_0_sm172_172451);
  set_at<288, 512, 16>(return_value3418, res_stg1_update_0_sm172_182453);
  set_at<304, 512, 16>(return_value3418, res_stg1_update_0_sm172_192455);
  set_at<320, 512, 16>(return_value3418, res_stg1_update_0_sm172_202457);
  set_at<336, 512, 16>(return_value3418, res_stg1_update_0_sm172_212459);
  set_at<352, 512, 16>(return_value3418, res_stg1_update_0_sm172_222461);
  set_at<368, 512, 16>(return_value3418, res_stg1_update_0_sm172_232463);
  set_at<384, 512, 16>(return_value3418, res_stg1_update_0_sm172_242465);
  set_at<400, 512, 16>(return_value3418, res_stg1_update_0_sm172_252467);
  set_at<416, 512, 16>(return_value3418, res_stg1_update_0_sm172_262469);
  set_at<432, 512, 16>(return_value3418, res_stg1_update_0_sm172_272471);
  set_at<448, 512, 16>(return_value3418, res_stg1_update_0_sm172_282473);
  set_at<464, 512, 16>(return_value3418, res_stg1_update_0_sm172_292475);
  set_at<480, 512, 16>(return_value3418, res_stg1_update_0_sm172_302477);
  set_at<496, 512, 16>(return_value3418, res_stg1_update_0_sm172_312479);
  return return_value3418;

}

hw_uint<512> stg1_ld17_cu3420(hw_uint<16*32>& stg1) {
  return stg1;
}

hw_uint<512> stg7_ld105_cu3422(hw_uint<16*32>& stg7) {
  return stg7;
}

hw_uint<512> stg6_to_gp_1496_ld101_cu3424(hw_uint<16*32>& stg6_to_gp_1496) {
  return stg6_to_gp_1496;
}

hw_uint<512> stg6_ld97_cu3426(hw_uint<16*32>& stg6) {
  return stg6;
}

