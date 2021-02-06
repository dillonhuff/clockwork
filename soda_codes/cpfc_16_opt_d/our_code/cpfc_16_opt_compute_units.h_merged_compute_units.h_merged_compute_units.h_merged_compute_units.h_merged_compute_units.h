#include "cpfc_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> demosaicb_ld29_cu1177(hw_uint<16*16>& demosaicb) {
  return demosaicb;
}

hw_uint<256> demosaic_bxb_ld13_cu1179(hw_uint<16*16>& demosaic_bxb) {
  return demosaic_bxb;
}

hw_uint<256> demosaic_diff_ld25_cu1181(hw_uint<16*16>& demosaic_diff) {
  return demosaic_diff;
}

hw_uint<256> raw_1_cu1183(hw_uint<16*16>& raw_oc) {
  hw_uint<16> raw_oc_lane_0 = raw_oc.extract<0, 15>();
  hw_uint<16> raw_oc_lane_1 = raw_oc.extract<16, 31>();
  hw_uint<16> raw_oc_lane_2 = raw_oc.extract<32, 47>();
  hw_uint<16> raw_oc_lane_3 = raw_oc.extract<48, 63>();
  hw_uint<16> raw_oc_lane_4 = raw_oc.extract<64, 79>();
  hw_uint<16> raw_oc_lane_5 = raw_oc.extract<80, 95>();
  hw_uint<16> raw_oc_lane_6 = raw_oc.extract<96, 111>();
  hw_uint<16> raw_oc_lane_7 = raw_oc.extract<112, 127>();
  hw_uint<16> raw_oc_lane_8 = raw_oc.extract<128, 143>();
  hw_uint<16> raw_oc_lane_9 = raw_oc.extract<144, 159>();
  hw_uint<16> raw_oc_lane_10 = raw_oc.extract<160, 175>();
  hw_uint<16> raw_oc_lane_11 = raw_oc.extract<176, 191>();
  hw_uint<16> raw_oc_lane_12 = raw_oc.extract<192, 207>();
  hw_uint<16> raw_oc_lane_13 = raw_oc.extract<208, 223>();
  hw_uint<16> raw_oc_lane_14 = raw_oc.extract<224, 239>();
  hw_uint<16> raw_oc_lane_15 = raw_oc.extract<240, 255>();

	
  hw_uint<16 > raw_oc_lane_0_pack;
  set_at<0, 16, 16>(raw_oc_lane_0_pack, raw_oc_lane_0);
  auto res_raw_update_0_sm91_15247 = raw_generated_compute_unrolled_1(raw_oc_lane_0_pack);

  hw_uint<16 > raw_oc_lane_1_pack;
  set_at<0, 16, 16>(raw_oc_lane_1_pack, raw_oc_lane_1);
  auto res_raw_update_0_sm91_14245 = raw_generated_compute_unrolled_1(raw_oc_lane_1_pack);

  hw_uint<16 > raw_oc_lane_2_pack;
  set_at<0, 16, 16>(raw_oc_lane_2_pack, raw_oc_lane_2);
  auto res_raw_update_0_sm91_13243 = raw_generated_compute_unrolled_1(raw_oc_lane_2_pack);

  hw_uint<16 > raw_oc_lane_3_pack;
  set_at<0, 16, 16>(raw_oc_lane_3_pack, raw_oc_lane_3);
  auto res_raw_update_0_sm91_12241 = raw_generated_compute_unrolled_1(raw_oc_lane_3_pack);

  hw_uint<16 > raw_oc_lane_4_pack;
  set_at<0, 16, 16>(raw_oc_lane_4_pack, raw_oc_lane_4);
  auto res_raw_update_0_sm91_11239 = raw_generated_compute_unrolled_1(raw_oc_lane_4_pack);

  hw_uint<16 > raw_oc_lane_5_pack;
  set_at<0, 16, 16>(raw_oc_lane_5_pack, raw_oc_lane_5);
  auto res_raw_update_0_sm91_10237 = raw_generated_compute_unrolled_1(raw_oc_lane_5_pack);

  hw_uint<16 > raw_oc_lane_6_pack;
  set_at<0, 16, 16>(raw_oc_lane_6_pack, raw_oc_lane_6);
  auto res_raw_update_0_sm91_9235 = raw_generated_compute_unrolled_1(raw_oc_lane_6_pack);

  hw_uint<16 > raw_oc_lane_7_pack;
  set_at<0, 16, 16>(raw_oc_lane_7_pack, raw_oc_lane_7);
  auto res_raw_update_0_sm91_8233 = raw_generated_compute_unrolled_1(raw_oc_lane_7_pack);

  hw_uint<16 > raw_oc_lane_8_pack;
  set_at<0, 16, 16>(raw_oc_lane_8_pack, raw_oc_lane_8);
  auto res_raw_update_0_sm91_7231 = raw_generated_compute_unrolled_1(raw_oc_lane_8_pack);

  hw_uint<16 > raw_oc_lane_9_pack;
  set_at<0, 16, 16>(raw_oc_lane_9_pack, raw_oc_lane_9);
  auto res_raw_update_0_sm91_6229 = raw_generated_compute_unrolled_1(raw_oc_lane_9_pack);

  hw_uint<16 > raw_oc_lane_10_pack;
  set_at<0, 16, 16>(raw_oc_lane_10_pack, raw_oc_lane_10);
  auto res_raw_update_0_sm91_5227 = raw_generated_compute_unrolled_1(raw_oc_lane_10_pack);

  hw_uint<16 > raw_oc_lane_11_pack;
  set_at<0, 16, 16>(raw_oc_lane_11_pack, raw_oc_lane_11);
  auto res_raw_update_0_sm91_4225 = raw_generated_compute_unrolled_1(raw_oc_lane_11_pack);

  hw_uint<16 > raw_oc_lane_12_pack;
  set_at<0, 16, 16>(raw_oc_lane_12_pack, raw_oc_lane_12);
  auto res_raw_update_0_sm91_3223 = raw_generated_compute_unrolled_1(raw_oc_lane_12_pack);

  hw_uint<16 > raw_oc_lane_13_pack;
  set_at<0, 16, 16>(raw_oc_lane_13_pack, raw_oc_lane_13);
  auto res_raw_update_0_sm91_2221 = raw_generated_compute_unrolled_1(raw_oc_lane_13_pack);

  hw_uint<16 > raw_oc_lane_14_pack;
  set_at<0, 16, 16>(raw_oc_lane_14_pack, raw_oc_lane_14);
  auto res_raw_update_0_sm91_1219 = raw_generated_compute_unrolled_1(raw_oc_lane_14_pack);

  hw_uint<16 > raw_oc_lane_15_pack;
  set_at<0, 16, 16>(raw_oc_lane_15_pack, raw_oc_lane_15);
  auto res_raw_update_0_sm91_0217 = raw_generated_compute_unrolled_1(raw_oc_lane_15_pack);
  hw_uint<256 > return_value1184;
  set_at<0, 256, 16>(return_value1184, res_raw_update_0_sm91_15247);
  set_at<16, 256, 16>(return_value1184, res_raw_update_0_sm91_14245);
  set_at<32, 256, 16>(return_value1184, res_raw_update_0_sm91_13243);
  set_at<48, 256, 16>(return_value1184, res_raw_update_0_sm91_12241);
  set_at<64, 256, 16>(return_value1184, res_raw_update_0_sm91_11239);
  set_at<80, 256, 16>(return_value1184, res_raw_update_0_sm91_10237);
  set_at<96, 256, 16>(return_value1184, res_raw_update_0_sm91_9235);
  set_at<112, 256, 16>(return_value1184, res_raw_update_0_sm91_8233);
  set_at<128, 256, 16>(return_value1184, res_raw_update_0_sm91_7231);
  set_at<144, 256, 16>(return_value1184, res_raw_update_0_sm91_6229);
  set_at<160, 256, 16>(return_value1184, res_raw_update_0_sm91_5227);
  set_at<176, 256, 16>(return_value1184, res_raw_update_0_sm91_4225);
  set_at<192, 256, 16>(return_value1184, res_raw_update_0_sm91_3223);
  set_at<208, 256, 16>(return_value1184, res_raw_update_0_sm91_2221);
  set_at<224, 256, 16>(return_value1184, res_raw_update_0_sm91_1219);
  set_at<240, 256, 16>(return_value1184, res_raw_update_0_sm91_0217);
  return return_value1184;

}

hw_uint<256> denoiseb_1_cu1186(hw_uint<16*400>& raw_FIFO_buf84) {
  hw_uint<16> raw_FIFO_buf84_lane_0 = raw_FIFO_buf84.extract<0, 15>();
  hw_uint<16> raw_FIFO_buf84_lane_1 = raw_FIFO_buf84.extract<16, 31>();
  hw_uint<16> raw_FIFO_buf84_lane_2 = raw_FIFO_buf84.extract<32, 47>();
  hw_uint<16> raw_FIFO_buf84_lane_3 = raw_FIFO_buf84.extract<48, 63>();
  hw_uint<16> raw_FIFO_buf84_lane_4 = raw_FIFO_buf84.extract<64, 79>();
  hw_uint<16> raw_FIFO_buf84_lane_5 = raw_FIFO_buf84.extract<80, 95>();
  hw_uint<16> raw_FIFO_buf84_lane_6 = raw_FIFO_buf84.extract<96, 111>();
  hw_uint<16> raw_FIFO_buf84_lane_7 = raw_FIFO_buf84.extract<112, 127>();
  hw_uint<16> raw_FIFO_buf84_lane_8 = raw_FIFO_buf84.extract<128, 143>();
  hw_uint<16> raw_FIFO_buf84_lane_9 = raw_FIFO_buf84.extract<144, 159>();
  hw_uint<16> raw_FIFO_buf84_lane_10 = raw_FIFO_buf84.extract<160, 175>();
  hw_uint<16> raw_FIFO_buf84_lane_11 = raw_FIFO_buf84.extract<176, 191>();
  hw_uint<16> raw_FIFO_buf84_lane_12 = raw_FIFO_buf84.extract<192, 207>();
  hw_uint<16> raw_FIFO_buf84_lane_13 = raw_FIFO_buf84.extract<208, 223>();
  hw_uint<16> raw_FIFO_buf84_lane_14 = raw_FIFO_buf84.extract<224, 239>();
  hw_uint<16> raw_FIFO_buf84_lane_15 = raw_FIFO_buf84.extract<240, 255>();
  hw_uint<16> raw_FIFO_buf84_lane_16 = raw_FIFO_buf84.extract<256, 271>();
  hw_uint<16> raw_FIFO_buf84_lane_17 = raw_FIFO_buf84.extract<272, 287>();
  hw_uint<16> raw_FIFO_buf84_lane_18 = raw_FIFO_buf84.extract<288, 303>();
  hw_uint<16> raw_FIFO_buf84_lane_19 = raw_FIFO_buf84.extract<304, 319>();
  hw_uint<16> raw_FIFO_buf84_lane_20 = raw_FIFO_buf84.extract<320, 335>();
  hw_uint<16> raw_FIFO_buf84_lane_21 = raw_FIFO_buf84.extract<336, 351>();
  hw_uint<16> raw_FIFO_buf84_lane_22 = raw_FIFO_buf84.extract<352, 367>();
  hw_uint<16> raw_FIFO_buf84_lane_23 = raw_FIFO_buf84.extract<368, 383>();
  hw_uint<16> raw_FIFO_buf84_lane_24 = raw_FIFO_buf84.extract<384, 399>();
  hw_uint<16> raw_FIFO_buf84_lane_25 = raw_FIFO_buf84.extract<400, 415>();
  hw_uint<16> raw_FIFO_buf84_lane_26 = raw_FIFO_buf84.extract<416, 431>();
  hw_uint<16> raw_FIFO_buf84_lane_27 = raw_FIFO_buf84.extract<432, 447>();
  hw_uint<16> raw_FIFO_buf84_lane_28 = raw_FIFO_buf84.extract<448, 463>();
  hw_uint<16> raw_FIFO_buf84_lane_29 = raw_FIFO_buf84.extract<464, 479>();
  hw_uint<16> raw_FIFO_buf84_lane_30 = raw_FIFO_buf84.extract<480, 495>();
  hw_uint<16> raw_FIFO_buf84_lane_31 = raw_FIFO_buf84.extract<496, 511>();
  hw_uint<16> raw_FIFO_buf84_lane_32 = raw_FIFO_buf84.extract<512, 527>();
  hw_uint<16> raw_FIFO_buf84_lane_33 = raw_FIFO_buf84.extract<528, 543>();
  hw_uint<16> raw_FIFO_buf84_lane_34 = raw_FIFO_buf84.extract<544, 559>();
  hw_uint<16> raw_FIFO_buf84_lane_35 = raw_FIFO_buf84.extract<560, 575>();
  hw_uint<16> raw_FIFO_buf84_lane_36 = raw_FIFO_buf84.extract<576, 591>();
  hw_uint<16> raw_FIFO_buf84_lane_37 = raw_FIFO_buf84.extract<592, 607>();
  hw_uint<16> raw_FIFO_buf84_lane_38 = raw_FIFO_buf84.extract<608, 623>();
  hw_uint<16> raw_FIFO_buf84_lane_39 = raw_FIFO_buf84.extract<624, 639>();
  hw_uint<16> raw_FIFO_buf84_lane_40 = raw_FIFO_buf84.extract<640, 655>();
  hw_uint<16> raw_FIFO_buf84_lane_41 = raw_FIFO_buf84.extract<656, 671>();
  hw_uint<16> raw_FIFO_buf84_lane_42 = raw_FIFO_buf84.extract<672, 687>();
  hw_uint<16> raw_FIFO_buf84_lane_43 = raw_FIFO_buf84.extract<688, 703>();
  hw_uint<16> raw_FIFO_buf84_lane_44 = raw_FIFO_buf84.extract<704, 719>();
  hw_uint<16> raw_FIFO_buf84_lane_45 = raw_FIFO_buf84.extract<720, 735>();
  hw_uint<16> raw_FIFO_buf84_lane_46 = raw_FIFO_buf84.extract<736, 751>();
  hw_uint<16> raw_FIFO_buf84_lane_47 = raw_FIFO_buf84.extract<752, 767>();
  hw_uint<16> raw_FIFO_buf84_lane_48 = raw_FIFO_buf84.extract<768, 783>();
  hw_uint<16> raw_FIFO_buf84_lane_49 = raw_FIFO_buf84.extract<784, 799>();
  hw_uint<16> raw_FIFO_buf84_lane_50 = raw_FIFO_buf84.extract<800, 815>();
  hw_uint<16> raw_FIFO_buf84_lane_51 = raw_FIFO_buf84.extract<816, 831>();
  hw_uint<16> raw_FIFO_buf84_lane_52 = raw_FIFO_buf84.extract<832, 847>();
  hw_uint<16> raw_FIFO_buf84_lane_53 = raw_FIFO_buf84.extract<848, 863>();
  hw_uint<16> raw_FIFO_buf84_lane_54 = raw_FIFO_buf84.extract<864, 879>();
  hw_uint<16> raw_FIFO_buf84_lane_55 = raw_FIFO_buf84.extract<880, 895>();
  hw_uint<16> raw_FIFO_buf84_lane_56 = raw_FIFO_buf84.extract<896, 911>();
  hw_uint<16> raw_FIFO_buf84_lane_57 = raw_FIFO_buf84.extract<912, 927>();
  hw_uint<16> raw_FIFO_buf84_lane_58 = raw_FIFO_buf84.extract<928, 943>();
  hw_uint<16> raw_FIFO_buf84_lane_59 = raw_FIFO_buf84.extract<944, 959>();
  hw_uint<16> raw_FIFO_buf84_lane_60 = raw_FIFO_buf84.extract<960, 975>();
  hw_uint<16> raw_FIFO_buf84_lane_61 = raw_FIFO_buf84.extract<976, 991>();
  hw_uint<16> raw_FIFO_buf84_lane_62 = raw_FIFO_buf84.extract<992, 1007>();
  hw_uint<16> raw_FIFO_buf84_lane_63 = raw_FIFO_buf84.extract<1008, 1023>();
  hw_uint<16> raw_FIFO_buf84_lane_64 = raw_FIFO_buf84.extract<1024, 1039>();
  hw_uint<16> raw_FIFO_buf84_lane_65 = raw_FIFO_buf84.extract<1040, 1055>();
  hw_uint<16> raw_FIFO_buf84_lane_66 = raw_FIFO_buf84.extract<1056, 1071>();
  hw_uint<16> raw_FIFO_buf84_lane_67 = raw_FIFO_buf84.extract<1072, 1087>();
  hw_uint<16> raw_FIFO_buf84_lane_68 = raw_FIFO_buf84.extract<1088, 1103>();
  hw_uint<16> raw_FIFO_buf84_lane_69 = raw_FIFO_buf84.extract<1104, 1119>();
  hw_uint<16> raw_FIFO_buf84_lane_70 = raw_FIFO_buf84.extract<1120, 1135>();
  hw_uint<16> raw_FIFO_buf84_lane_71 = raw_FIFO_buf84.extract<1136, 1151>();
  hw_uint<16> raw_FIFO_buf84_lane_72 = raw_FIFO_buf84.extract<1152, 1167>();
  hw_uint<16> raw_FIFO_buf84_lane_73 = raw_FIFO_buf84.extract<1168, 1183>();
  hw_uint<16> raw_FIFO_buf84_lane_74 = raw_FIFO_buf84.extract<1184, 1199>();
  hw_uint<16> raw_FIFO_buf84_lane_75 = raw_FIFO_buf84.extract<1200, 1215>();
  hw_uint<16> raw_FIFO_buf84_lane_76 = raw_FIFO_buf84.extract<1216, 1231>();
  hw_uint<16> raw_FIFO_buf84_lane_77 = raw_FIFO_buf84.extract<1232, 1247>();
  hw_uint<16> raw_FIFO_buf84_lane_78 = raw_FIFO_buf84.extract<1248, 1263>();
  hw_uint<16> raw_FIFO_buf84_lane_79 = raw_FIFO_buf84.extract<1264, 1279>();
  hw_uint<16> raw_FIFO_buf84_lane_80 = raw_FIFO_buf84.extract<1280, 1295>();
  hw_uint<16> raw_FIFO_buf84_lane_81 = raw_FIFO_buf84.extract<1296, 1311>();
  hw_uint<16> raw_FIFO_buf84_lane_82 = raw_FIFO_buf84.extract<1312, 1327>();
  hw_uint<16> raw_FIFO_buf84_lane_83 = raw_FIFO_buf84.extract<1328, 1343>();
  hw_uint<16> raw_FIFO_buf84_lane_84 = raw_FIFO_buf84.extract<1344, 1359>();
  hw_uint<16> raw_FIFO_buf84_lane_85 = raw_FIFO_buf84.extract<1360, 1375>();
  hw_uint<16> raw_FIFO_buf84_lane_86 = raw_FIFO_buf84.extract<1376, 1391>();
  hw_uint<16> raw_FIFO_buf84_lane_87 = raw_FIFO_buf84.extract<1392, 1407>();
  hw_uint<16> raw_FIFO_buf84_lane_88 = raw_FIFO_buf84.extract<1408, 1423>();
  hw_uint<16> raw_FIFO_buf84_lane_89 = raw_FIFO_buf84.extract<1424, 1439>();
  hw_uint<16> raw_FIFO_buf84_lane_90 = raw_FIFO_buf84.extract<1440, 1455>();
  hw_uint<16> raw_FIFO_buf84_lane_91 = raw_FIFO_buf84.extract<1456, 1471>();
  hw_uint<16> raw_FIFO_buf84_lane_92 = raw_FIFO_buf84.extract<1472, 1487>();
  hw_uint<16> raw_FIFO_buf84_lane_93 = raw_FIFO_buf84.extract<1488, 1503>();
  hw_uint<16> raw_FIFO_buf84_lane_94 = raw_FIFO_buf84.extract<1504, 1519>();
  hw_uint<16> raw_FIFO_buf84_lane_95 = raw_FIFO_buf84.extract<1520, 1535>();
  hw_uint<16> raw_FIFO_buf84_lane_96 = raw_FIFO_buf84.extract<1536, 1551>();
  hw_uint<16> raw_FIFO_buf84_lane_97 = raw_FIFO_buf84.extract<1552, 1567>();
  hw_uint<16> raw_FIFO_buf84_lane_98 = raw_FIFO_buf84.extract<1568, 1583>();
  hw_uint<16> raw_FIFO_buf84_lane_99 = raw_FIFO_buf84.extract<1584, 1599>();
  hw_uint<16> raw_FIFO_buf84_lane_100 = raw_FIFO_buf84.extract<1600, 1615>();
  hw_uint<16> raw_FIFO_buf84_lane_101 = raw_FIFO_buf84.extract<1616, 1631>();
  hw_uint<16> raw_FIFO_buf84_lane_102 = raw_FIFO_buf84.extract<1632, 1647>();
  hw_uint<16> raw_FIFO_buf84_lane_103 = raw_FIFO_buf84.extract<1648, 1663>();
  hw_uint<16> raw_FIFO_buf84_lane_104 = raw_FIFO_buf84.extract<1664, 1679>();
  hw_uint<16> raw_FIFO_buf84_lane_105 = raw_FIFO_buf84.extract<1680, 1695>();
  hw_uint<16> raw_FIFO_buf84_lane_106 = raw_FIFO_buf84.extract<1696, 1711>();
  hw_uint<16> raw_FIFO_buf84_lane_107 = raw_FIFO_buf84.extract<1712, 1727>();
  hw_uint<16> raw_FIFO_buf84_lane_108 = raw_FIFO_buf84.extract<1728, 1743>();
  hw_uint<16> raw_FIFO_buf84_lane_109 = raw_FIFO_buf84.extract<1744, 1759>();
  hw_uint<16> raw_FIFO_buf84_lane_110 = raw_FIFO_buf84.extract<1760, 1775>();
  hw_uint<16> raw_FIFO_buf84_lane_111 = raw_FIFO_buf84.extract<1776, 1791>();
  hw_uint<16> raw_FIFO_buf84_lane_112 = raw_FIFO_buf84.extract<1792, 1807>();
  hw_uint<16> raw_FIFO_buf84_lane_113 = raw_FIFO_buf84.extract<1808, 1823>();
  hw_uint<16> raw_FIFO_buf84_lane_114 = raw_FIFO_buf84.extract<1824, 1839>();
  hw_uint<16> raw_FIFO_buf84_lane_115 = raw_FIFO_buf84.extract<1840, 1855>();
  hw_uint<16> raw_FIFO_buf84_lane_116 = raw_FIFO_buf84.extract<1856, 1871>();
  hw_uint<16> raw_FIFO_buf84_lane_117 = raw_FIFO_buf84.extract<1872, 1887>();
  hw_uint<16> raw_FIFO_buf84_lane_118 = raw_FIFO_buf84.extract<1888, 1903>();
  hw_uint<16> raw_FIFO_buf84_lane_119 = raw_FIFO_buf84.extract<1904, 1919>();
  hw_uint<16> raw_FIFO_buf84_lane_120 = raw_FIFO_buf84.extract<1920, 1935>();
  hw_uint<16> raw_FIFO_buf84_lane_121 = raw_FIFO_buf84.extract<1936, 1951>();
  hw_uint<16> raw_FIFO_buf84_lane_122 = raw_FIFO_buf84.extract<1952, 1967>();
  hw_uint<16> raw_FIFO_buf84_lane_123 = raw_FIFO_buf84.extract<1968, 1983>();
  hw_uint<16> raw_FIFO_buf84_lane_124 = raw_FIFO_buf84.extract<1984, 1999>();
  hw_uint<16> raw_FIFO_buf84_lane_125 = raw_FIFO_buf84.extract<2000, 2015>();
  hw_uint<16> raw_FIFO_buf84_lane_126 = raw_FIFO_buf84.extract<2016, 2031>();
  hw_uint<16> raw_FIFO_buf84_lane_127 = raw_FIFO_buf84.extract<2032, 2047>();
  hw_uint<16> raw_FIFO_buf84_lane_128 = raw_FIFO_buf84.extract<2048, 2063>();
  hw_uint<16> raw_FIFO_buf84_lane_129 = raw_FIFO_buf84.extract<2064, 2079>();
  hw_uint<16> raw_FIFO_buf84_lane_130 = raw_FIFO_buf84.extract<2080, 2095>();
  hw_uint<16> raw_FIFO_buf84_lane_131 = raw_FIFO_buf84.extract<2096, 2111>();
  hw_uint<16> raw_FIFO_buf84_lane_132 = raw_FIFO_buf84.extract<2112, 2127>();
  hw_uint<16> raw_FIFO_buf84_lane_133 = raw_FIFO_buf84.extract<2128, 2143>();
  hw_uint<16> raw_FIFO_buf84_lane_134 = raw_FIFO_buf84.extract<2144, 2159>();
  hw_uint<16> raw_FIFO_buf84_lane_135 = raw_FIFO_buf84.extract<2160, 2175>();
  hw_uint<16> raw_FIFO_buf84_lane_136 = raw_FIFO_buf84.extract<2176, 2191>();
  hw_uint<16> raw_FIFO_buf84_lane_137 = raw_FIFO_buf84.extract<2192, 2207>();
  hw_uint<16> raw_FIFO_buf84_lane_138 = raw_FIFO_buf84.extract<2208, 2223>();
  hw_uint<16> raw_FIFO_buf84_lane_139 = raw_FIFO_buf84.extract<2224, 2239>();
  hw_uint<16> raw_FIFO_buf84_lane_140 = raw_FIFO_buf84.extract<2240, 2255>();
  hw_uint<16> raw_FIFO_buf84_lane_141 = raw_FIFO_buf84.extract<2256, 2271>();
  hw_uint<16> raw_FIFO_buf84_lane_142 = raw_FIFO_buf84.extract<2272, 2287>();
  hw_uint<16> raw_FIFO_buf84_lane_143 = raw_FIFO_buf84.extract<2288, 2303>();
  hw_uint<16> raw_FIFO_buf84_lane_144 = raw_FIFO_buf84.extract<2304, 2319>();
  hw_uint<16> raw_FIFO_buf84_lane_145 = raw_FIFO_buf84.extract<2320, 2335>();
  hw_uint<16> raw_FIFO_buf84_lane_146 = raw_FIFO_buf84.extract<2336, 2351>();
  hw_uint<16> raw_FIFO_buf84_lane_147 = raw_FIFO_buf84.extract<2352, 2367>();
  hw_uint<16> raw_FIFO_buf84_lane_148 = raw_FIFO_buf84.extract<2368, 2383>();
  hw_uint<16> raw_FIFO_buf84_lane_149 = raw_FIFO_buf84.extract<2384, 2399>();
  hw_uint<16> raw_FIFO_buf84_lane_150 = raw_FIFO_buf84.extract<2400, 2415>();
  hw_uint<16> raw_FIFO_buf84_lane_151 = raw_FIFO_buf84.extract<2416, 2431>();
  hw_uint<16> raw_FIFO_buf84_lane_152 = raw_FIFO_buf84.extract<2432, 2447>();
  hw_uint<16> raw_FIFO_buf84_lane_153 = raw_FIFO_buf84.extract<2448, 2463>();
  hw_uint<16> raw_FIFO_buf84_lane_154 = raw_FIFO_buf84.extract<2464, 2479>();
  hw_uint<16> raw_FIFO_buf84_lane_155 = raw_FIFO_buf84.extract<2480, 2495>();
  hw_uint<16> raw_FIFO_buf84_lane_156 = raw_FIFO_buf84.extract<2496, 2511>();
  hw_uint<16> raw_FIFO_buf84_lane_157 = raw_FIFO_buf84.extract<2512, 2527>();
  hw_uint<16> raw_FIFO_buf84_lane_158 = raw_FIFO_buf84.extract<2528, 2543>();
  hw_uint<16> raw_FIFO_buf84_lane_159 = raw_FIFO_buf84.extract<2544, 2559>();
  hw_uint<16> raw_FIFO_buf84_lane_160 = raw_FIFO_buf84.extract<2560, 2575>();
  hw_uint<16> raw_FIFO_buf84_lane_161 = raw_FIFO_buf84.extract<2576, 2591>();
  hw_uint<16> raw_FIFO_buf84_lane_162 = raw_FIFO_buf84.extract<2592, 2607>();
  hw_uint<16> raw_FIFO_buf84_lane_163 = raw_FIFO_buf84.extract<2608, 2623>();
  hw_uint<16> raw_FIFO_buf84_lane_164 = raw_FIFO_buf84.extract<2624, 2639>();
  hw_uint<16> raw_FIFO_buf84_lane_165 = raw_FIFO_buf84.extract<2640, 2655>();
  hw_uint<16> raw_FIFO_buf84_lane_166 = raw_FIFO_buf84.extract<2656, 2671>();
  hw_uint<16> raw_FIFO_buf84_lane_167 = raw_FIFO_buf84.extract<2672, 2687>();
  hw_uint<16> raw_FIFO_buf84_lane_168 = raw_FIFO_buf84.extract<2688, 2703>();
  hw_uint<16> raw_FIFO_buf84_lane_169 = raw_FIFO_buf84.extract<2704, 2719>();
  hw_uint<16> raw_FIFO_buf84_lane_170 = raw_FIFO_buf84.extract<2720, 2735>();
  hw_uint<16> raw_FIFO_buf84_lane_171 = raw_FIFO_buf84.extract<2736, 2751>();
  hw_uint<16> raw_FIFO_buf84_lane_172 = raw_FIFO_buf84.extract<2752, 2767>();
  hw_uint<16> raw_FIFO_buf84_lane_173 = raw_FIFO_buf84.extract<2768, 2783>();
  hw_uint<16> raw_FIFO_buf84_lane_174 = raw_FIFO_buf84.extract<2784, 2799>();
  hw_uint<16> raw_FIFO_buf84_lane_175 = raw_FIFO_buf84.extract<2800, 2815>();
  hw_uint<16> raw_FIFO_buf84_lane_176 = raw_FIFO_buf84.extract<2816, 2831>();
  hw_uint<16> raw_FIFO_buf84_lane_177 = raw_FIFO_buf84.extract<2832, 2847>();
  hw_uint<16> raw_FIFO_buf84_lane_178 = raw_FIFO_buf84.extract<2848, 2863>();
  hw_uint<16> raw_FIFO_buf84_lane_179 = raw_FIFO_buf84.extract<2864, 2879>();
  hw_uint<16> raw_FIFO_buf84_lane_180 = raw_FIFO_buf84.extract<2880, 2895>();
  hw_uint<16> raw_FIFO_buf84_lane_181 = raw_FIFO_buf84.extract<2896, 2911>();
  hw_uint<16> raw_FIFO_buf84_lane_182 = raw_FIFO_buf84.extract<2912, 2927>();
  hw_uint<16> raw_FIFO_buf84_lane_183 = raw_FIFO_buf84.extract<2928, 2943>();
  hw_uint<16> raw_FIFO_buf84_lane_184 = raw_FIFO_buf84.extract<2944, 2959>();
  hw_uint<16> raw_FIFO_buf84_lane_185 = raw_FIFO_buf84.extract<2960, 2975>();
  hw_uint<16> raw_FIFO_buf84_lane_186 = raw_FIFO_buf84.extract<2976, 2991>();
  hw_uint<16> raw_FIFO_buf84_lane_187 = raw_FIFO_buf84.extract<2992, 3007>();
  hw_uint<16> raw_FIFO_buf84_lane_188 = raw_FIFO_buf84.extract<3008, 3023>();
  hw_uint<16> raw_FIFO_buf84_lane_189 = raw_FIFO_buf84.extract<3024, 3039>();
  hw_uint<16> raw_FIFO_buf84_lane_190 = raw_FIFO_buf84.extract<3040, 3055>();
  hw_uint<16> raw_FIFO_buf84_lane_191 = raw_FIFO_buf84.extract<3056, 3071>();
  hw_uint<16> raw_FIFO_buf84_lane_192 = raw_FIFO_buf84.extract<3072, 3087>();
  hw_uint<16> raw_FIFO_buf84_lane_193 = raw_FIFO_buf84.extract<3088, 3103>();
  hw_uint<16> raw_FIFO_buf84_lane_194 = raw_FIFO_buf84.extract<3104, 3119>();
  hw_uint<16> raw_FIFO_buf84_lane_195 = raw_FIFO_buf84.extract<3120, 3135>();
  hw_uint<16> raw_FIFO_buf84_lane_196 = raw_FIFO_buf84.extract<3136, 3151>();
  hw_uint<16> raw_FIFO_buf84_lane_197 = raw_FIFO_buf84.extract<3152, 3167>();
  hw_uint<16> raw_FIFO_buf84_lane_198 = raw_FIFO_buf84.extract<3168, 3183>();
  hw_uint<16> raw_FIFO_buf84_lane_199 = raw_FIFO_buf84.extract<3184, 3199>();
  hw_uint<16> raw_FIFO_buf84_lane_200 = raw_FIFO_buf84.extract<3200, 3215>();
  hw_uint<16> raw_FIFO_buf84_lane_201 = raw_FIFO_buf84.extract<3216, 3231>();
  hw_uint<16> raw_FIFO_buf84_lane_202 = raw_FIFO_buf84.extract<3232, 3247>();
  hw_uint<16> raw_FIFO_buf84_lane_203 = raw_FIFO_buf84.extract<3248, 3263>();
  hw_uint<16> raw_FIFO_buf84_lane_204 = raw_FIFO_buf84.extract<3264, 3279>();
  hw_uint<16> raw_FIFO_buf84_lane_205 = raw_FIFO_buf84.extract<3280, 3295>();
  hw_uint<16> raw_FIFO_buf84_lane_206 = raw_FIFO_buf84.extract<3296, 3311>();
  hw_uint<16> raw_FIFO_buf84_lane_207 = raw_FIFO_buf84.extract<3312, 3327>();
  hw_uint<16> raw_FIFO_buf84_lane_208 = raw_FIFO_buf84.extract<3328, 3343>();
  hw_uint<16> raw_FIFO_buf84_lane_209 = raw_FIFO_buf84.extract<3344, 3359>();
  hw_uint<16> raw_FIFO_buf84_lane_210 = raw_FIFO_buf84.extract<3360, 3375>();
  hw_uint<16> raw_FIFO_buf84_lane_211 = raw_FIFO_buf84.extract<3376, 3391>();
  hw_uint<16> raw_FIFO_buf84_lane_212 = raw_FIFO_buf84.extract<3392, 3407>();
  hw_uint<16> raw_FIFO_buf84_lane_213 = raw_FIFO_buf84.extract<3408, 3423>();
  hw_uint<16> raw_FIFO_buf84_lane_214 = raw_FIFO_buf84.extract<3424, 3439>();
  hw_uint<16> raw_FIFO_buf84_lane_215 = raw_FIFO_buf84.extract<3440, 3455>();
  hw_uint<16> raw_FIFO_buf84_lane_216 = raw_FIFO_buf84.extract<3456, 3471>();
  hw_uint<16> raw_FIFO_buf84_lane_217 = raw_FIFO_buf84.extract<3472, 3487>();
  hw_uint<16> raw_FIFO_buf84_lane_218 = raw_FIFO_buf84.extract<3488, 3503>();
  hw_uint<16> raw_FIFO_buf84_lane_219 = raw_FIFO_buf84.extract<3504, 3519>();
  hw_uint<16> raw_FIFO_buf84_lane_220 = raw_FIFO_buf84.extract<3520, 3535>();
  hw_uint<16> raw_FIFO_buf84_lane_221 = raw_FIFO_buf84.extract<3536, 3551>();
  hw_uint<16> raw_FIFO_buf84_lane_222 = raw_FIFO_buf84.extract<3552, 3567>();
  hw_uint<16> raw_FIFO_buf84_lane_223 = raw_FIFO_buf84.extract<3568, 3583>();
  hw_uint<16> raw_FIFO_buf84_lane_224 = raw_FIFO_buf84.extract<3584, 3599>();
  hw_uint<16> raw_FIFO_buf84_lane_225 = raw_FIFO_buf84.extract<3600, 3615>();
  hw_uint<16> raw_FIFO_buf84_lane_226 = raw_FIFO_buf84.extract<3616, 3631>();
  hw_uint<16> raw_FIFO_buf84_lane_227 = raw_FIFO_buf84.extract<3632, 3647>();
  hw_uint<16> raw_FIFO_buf84_lane_228 = raw_FIFO_buf84.extract<3648, 3663>();
  hw_uint<16> raw_FIFO_buf84_lane_229 = raw_FIFO_buf84.extract<3664, 3679>();
  hw_uint<16> raw_FIFO_buf84_lane_230 = raw_FIFO_buf84.extract<3680, 3695>();
  hw_uint<16> raw_FIFO_buf84_lane_231 = raw_FIFO_buf84.extract<3696, 3711>();
  hw_uint<16> raw_FIFO_buf84_lane_232 = raw_FIFO_buf84.extract<3712, 3727>();
  hw_uint<16> raw_FIFO_buf84_lane_233 = raw_FIFO_buf84.extract<3728, 3743>();
  hw_uint<16> raw_FIFO_buf84_lane_234 = raw_FIFO_buf84.extract<3744, 3759>();
  hw_uint<16> raw_FIFO_buf84_lane_235 = raw_FIFO_buf84.extract<3760, 3775>();
  hw_uint<16> raw_FIFO_buf84_lane_236 = raw_FIFO_buf84.extract<3776, 3791>();
  hw_uint<16> raw_FIFO_buf84_lane_237 = raw_FIFO_buf84.extract<3792, 3807>();
  hw_uint<16> raw_FIFO_buf84_lane_238 = raw_FIFO_buf84.extract<3808, 3823>();
  hw_uint<16> raw_FIFO_buf84_lane_239 = raw_FIFO_buf84.extract<3824, 3839>();
  hw_uint<16> raw_FIFO_buf84_lane_240 = raw_FIFO_buf84.extract<3840, 3855>();
  hw_uint<16> raw_FIFO_buf84_lane_241 = raw_FIFO_buf84.extract<3856, 3871>();
  hw_uint<16> raw_FIFO_buf84_lane_242 = raw_FIFO_buf84.extract<3872, 3887>();
  hw_uint<16> raw_FIFO_buf84_lane_243 = raw_FIFO_buf84.extract<3888, 3903>();
  hw_uint<16> raw_FIFO_buf84_lane_244 = raw_FIFO_buf84.extract<3904, 3919>();
  hw_uint<16> raw_FIFO_buf84_lane_245 = raw_FIFO_buf84.extract<3920, 3935>();
  hw_uint<16> raw_FIFO_buf84_lane_246 = raw_FIFO_buf84.extract<3936, 3951>();
  hw_uint<16> raw_FIFO_buf84_lane_247 = raw_FIFO_buf84.extract<3952, 3967>();
  hw_uint<16> raw_FIFO_buf84_lane_248 = raw_FIFO_buf84.extract<3968, 3983>();
  hw_uint<16> raw_FIFO_buf84_lane_249 = raw_FIFO_buf84.extract<3984, 3999>();
  hw_uint<16> raw_FIFO_buf84_lane_250 = raw_FIFO_buf84.extract<4000, 4015>();
  hw_uint<16> raw_FIFO_buf84_lane_251 = raw_FIFO_buf84.extract<4016, 4031>();
  hw_uint<16> raw_FIFO_buf84_lane_252 = raw_FIFO_buf84.extract<4032, 4047>();
  hw_uint<16> raw_FIFO_buf84_lane_253 = raw_FIFO_buf84.extract<4048, 4063>();
  hw_uint<16> raw_FIFO_buf84_lane_254 = raw_FIFO_buf84.extract<4064, 4079>();
  hw_uint<16> raw_FIFO_buf84_lane_255 = raw_FIFO_buf84.extract<4080, 4095>();
  hw_uint<16> raw_FIFO_buf84_lane_256 = raw_FIFO_buf84.extract<4096, 4111>();
  hw_uint<16> raw_FIFO_buf84_lane_257 = raw_FIFO_buf84.extract<4112, 4127>();
  hw_uint<16> raw_FIFO_buf84_lane_258 = raw_FIFO_buf84.extract<4128, 4143>();
  hw_uint<16> raw_FIFO_buf84_lane_259 = raw_FIFO_buf84.extract<4144, 4159>();
  hw_uint<16> raw_FIFO_buf84_lane_260 = raw_FIFO_buf84.extract<4160, 4175>();
  hw_uint<16> raw_FIFO_buf84_lane_261 = raw_FIFO_buf84.extract<4176, 4191>();
  hw_uint<16> raw_FIFO_buf84_lane_262 = raw_FIFO_buf84.extract<4192, 4207>();
  hw_uint<16> raw_FIFO_buf84_lane_263 = raw_FIFO_buf84.extract<4208, 4223>();
  hw_uint<16> raw_FIFO_buf84_lane_264 = raw_FIFO_buf84.extract<4224, 4239>();
  hw_uint<16> raw_FIFO_buf84_lane_265 = raw_FIFO_buf84.extract<4240, 4255>();
  hw_uint<16> raw_FIFO_buf84_lane_266 = raw_FIFO_buf84.extract<4256, 4271>();
  hw_uint<16> raw_FIFO_buf84_lane_267 = raw_FIFO_buf84.extract<4272, 4287>();
  hw_uint<16> raw_FIFO_buf84_lane_268 = raw_FIFO_buf84.extract<4288, 4303>();
  hw_uint<16> raw_FIFO_buf84_lane_269 = raw_FIFO_buf84.extract<4304, 4319>();
  hw_uint<16> raw_FIFO_buf84_lane_270 = raw_FIFO_buf84.extract<4320, 4335>();
  hw_uint<16> raw_FIFO_buf84_lane_271 = raw_FIFO_buf84.extract<4336, 4351>();
  hw_uint<16> raw_FIFO_buf84_lane_272 = raw_FIFO_buf84.extract<4352, 4367>();
  hw_uint<16> raw_FIFO_buf84_lane_273 = raw_FIFO_buf84.extract<4368, 4383>();
  hw_uint<16> raw_FIFO_buf84_lane_274 = raw_FIFO_buf84.extract<4384, 4399>();
  hw_uint<16> raw_FIFO_buf84_lane_275 = raw_FIFO_buf84.extract<4400, 4415>();
  hw_uint<16> raw_FIFO_buf84_lane_276 = raw_FIFO_buf84.extract<4416, 4431>();
  hw_uint<16> raw_FIFO_buf84_lane_277 = raw_FIFO_buf84.extract<4432, 4447>();
  hw_uint<16> raw_FIFO_buf84_lane_278 = raw_FIFO_buf84.extract<4448, 4463>();
  hw_uint<16> raw_FIFO_buf84_lane_279 = raw_FIFO_buf84.extract<4464, 4479>();
  hw_uint<16> raw_FIFO_buf84_lane_280 = raw_FIFO_buf84.extract<4480, 4495>();
  hw_uint<16> raw_FIFO_buf84_lane_281 = raw_FIFO_buf84.extract<4496, 4511>();
  hw_uint<16> raw_FIFO_buf84_lane_282 = raw_FIFO_buf84.extract<4512, 4527>();
  hw_uint<16> raw_FIFO_buf84_lane_283 = raw_FIFO_buf84.extract<4528, 4543>();
  hw_uint<16> raw_FIFO_buf84_lane_284 = raw_FIFO_buf84.extract<4544, 4559>();
  hw_uint<16> raw_FIFO_buf84_lane_285 = raw_FIFO_buf84.extract<4560, 4575>();
  hw_uint<16> raw_FIFO_buf84_lane_286 = raw_FIFO_buf84.extract<4576, 4591>();
  hw_uint<16> raw_FIFO_buf84_lane_287 = raw_FIFO_buf84.extract<4592, 4607>();
  hw_uint<16> raw_FIFO_buf84_lane_288 = raw_FIFO_buf84.extract<4608, 4623>();
  hw_uint<16> raw_FIFO_buf84_lane_289 = raw_FIFO_buf84.extract<4624, 4639>();
  hw_uint<16> raw_FIFO_buf84_lane_290 = raw_FIFO_buf84.extract<4640, 4655>();
  hw_uint<16> raw_FIFO_buf84_lane_291 = raw_FIFO_buf84.extract<4656, 4671>();
  hw_uint<16> raw_FIFO_buf84_lane_292 = raw_FIFO_buf84.extract<4672, 4687>();
  hw_uint<16> raw_FIFO_buf84_lane_293 = raw_FIFO_buf84.extract<4688, 4703>();
  hw_uint<16> raw_FIFO_buf84_lane_294 = raw_FIFO_buf84.extract<4704, 4719>();
  hw_uint<16> raw_FIFO_buf84_lane_295 = raw_FIFO_buf84.extract<4720, 4735>();
  hw_uint<16> raw_FIFO_buf84_lane_296 = raw_FIFO_buf84.extract<4736, 4751>();
  hw_uint<16> raw_FIFO_buf84_lane_297 = raw_FIFO_buf84.extract<4752, 4767>();
  hw_uint<16> raw_FIFO_buf84_lane_298 = raw_FIFO_buf84.extract<4768, 4783>();
  hw_uint<16> raw_FIFO_buf84_lane_299 = raw_FIFO_buf84.extract<4784, 4799>();
  hw_uint<16> raw_FIFO_buf84_lane_300 = raw_FIFO_buf84.extract<4800, 4815>();
  hw_uint<16> raw_FIFO_buf84_lane_301 = raw_FIFO_buf84.extract<4816, 4831>();
  hw_uint<16> raw_FIFO_buf84_lane_302 = raw_FIFO_buf84.extract<4832, 4847>();
  hw_uint<16> raw_FIFO_buf84_lane_303 = raw_FIFO_buf84.extract<4848, 4863>();
  hw_uint<16> raw_FIFO_buf84_lane_304 = raw_FIFO_buf84.extract<4864, 4879>();
  hw_uint<16> raw_FIFO_buf84_lane_305 = raw_FIFO_buf84.extract<4880, 4895>();
  hw_uint<16> raw_FIFO_buf84_lane_306 = raw_FIFO_buf84.extract<4896, 4911>();
  hw_uint<16> raw_FIFO_buf84_lane_307 = raw_FIFO_buf84.extract<4912, 4927>();
  hw_uint<16> raw_FIFO_buf84_lane_308 = raw_FIFO_buf84.extract<4928, 4943>();
  hw_uint<16> raw_FIFO_buf84_lane_309 = raw_FIFO_buf84.extract<4944, 4959>();
  hw_uint<16> raw_FIFO_buf84_lane_310 = raw_FIFO_buf84.extract<4960, 4975>();
  hw_uint<16> raw_FIFO_buf84_lane_311 = raw_FIFO_buf84.extract<4976, 4991>();
  hw_uint<16> raw_FIFO_buf84_lane_312 = raw_FIFO_buf84.extract<4992, 5007>();
  hw_uint<16> raw_FIFO_buf84_lane_313 = raw_FIFO_buf84.extract<5008, 5023>();
  hw_uint<16> raw_FIFO_buf84_lane_314 = raw_FIFO_buf84.extract<5024, 5039>();
  hw_uint<16> raw_FIFO_buf84_lane_315 = raw_FIFO_buf84.extract<5040, 5055>();
  hw_uint<16> raw_FIFO_buf84_lane_316 = raw_FIFO_buf84.extract<5056, 5071>();
  hw_uint<16> raw_FIFO_buf84_lane_317 = raw_FIFO_buf84.extract<5072, 5087>();
  hw_uint<16> raw_FIFO_buf84_lane_318 = raw_FIFO_buf84.extract<5088, 5103>();
  hw_uint<16> raw_FIFO_buf84_lane_319 = raw_FIFO_buf84.extract<5104, 5119>();
  hw_uint<16> raw_FIFO_buf84_lane_320 = raw_FIFO_buf84.extract<5120, 5135>();
  hw_uint<16> raw_FIFO_buf84_lane_321 = raw_FIFO_buf84.extract<5136, 5151>();
  hw_uint<16> raw_FIFO_buf84_lane_322 = raw_FIFO_buf84.extract<5152, 5167>();
  hw_uint<16> raw_FIFO_buf84_lane_323 = raw_FIFO_buf84.extract<5168, 5183>();
  hw_uint<16> raw_FIFO_buf84_lane_324 = raw_FIFO_buf84.extract<5184, 5199>();
  hw_uint<16> raw_FIFO_buf84_lane_325 = raw_FIFO_buf84.extract<5200, 5215>();
  hw_uint<16> raw_FIFO_buf84_lane_326 = raw_FIFO_buf84.extract<5216, 5231>();
  hw_uint<16> raw_FIFO_buf84_lane_327 = raw_FIFO_buf84.extract<5232, 5247>();
  hw_uint<16> raw_FIFO_buf84_lane_328 = raw_FIFO_buf84.extract<5248, 5263>();
  hw_uint<16> raw_FIFO_buf84_lane_329 = raw_FIFO_buf84.extract<5264, 5279>();
  hw_uint<16> raw_FIFO_buf84_lane_330 = raw_FIFO_buf84.extract<5280, 5295>();
  hw_uint<16> raw_FIFO_buf84_lane_331 = raw_FIFO_buf84.extract<5296, 5311>();
  hw_uint<16> raw_FIFO_buf84_lane_332 = raw_FIFO_buf84.extract<5312, 5327>();
  hw_uint<16> raw_FIFO_buf84_lane_333 = raw_FIFO_buf84.extract<5328, 5343>();
  hw_uint<16> raw_FIFO_buf84_lane_334 = raw_FIFO_buf84.extract<5344, 5359>();
  hw_uint<16> raw_FIFO_buf84_lane_335 = raw_FIFO_buf84.extract<5360, 5375>();
  hw_uint<16> raw_FIFO_buf84_lane_336 = raw_FIFO_buf84.extract<5376, 5391>();
  hw_uint<16> raw_FIFO_buf84_lane_337 = raw_FIFO_buf84.extract<5392, 5407>();
  hw_uint<16> raw_FIFO_buf84_lane_338 = raw_FIFO_buf84.extract<5408, 5423>();
  hw_uint<16> raw_FIFO_buf84_lane_339 = raw_FIFO_buf84.extract<5424, 5439>();
  hw_uint<16> raw_FIFO_buf84_lane_340 = raw_FIFO_buf84.extract<5440, 5455>();
  hw_uint<16> raw_FIFO_buf84_lane_341 = raw_FIFO_buf84.extract<5456, 5471>();
  hw_uint<16> raw_FIFO_buf84_lane_342 = raw_FIFO_buf84.extract<5472, 5487>();
  hw_uint<16> raw_FIFO_buf84_lane_343 = raw_FIFO_buf84.extract<5488, 5503>();
  hw_uint<16> raw_FIFO_buf84_lane_344 = raw_FIFO_buf84.extract<5504, 5519>();
  hw_uint<16> raw_FIFO_buf84_lane_345 = raw_FIFO_buf84.extract<5520, 5535>();
  hw_uint<16> raw_FIFO_buf84_lane_346 = raw_FIFO_buf84.extract<5536, 5551>();
  hw_uint<16> raw_FIFO_buf84_lane_347 = raw_FIFO_buf84.extract<5552, 5567>();
  hw_uint<16> raw_FIFO_buf84_lane_348 = raw_FIFO_buf84.extract<5568, 5583>();
  hw_uint<16> raw_FIFO_buf84_lane_349 = raw_FIFO_buf84.extract<5584, 5599>();
  hw_uint<16> raw_FIFO_buf84_lane_350 = raw_FIFO_buf84.extract<5600, 5615>();
  hw_uint<16> raw_FIFO_buf84_lane_351 = raw_FIFO_buf84.extract<5616, 5631>();
  hw_uint<16> raw_FIFO_buf84_lane_352 = raw_FIFO_buf84.extract<5632, 5647>();
  hw_uint<16> raw_FIFO_buf84_lane_353 = raw_FIFO_buf84.extract<5648, 5663>();
  hw_uint<16> raw_FIFO_buf84_lane_354 = raw_FIFO_buf84.extract<5664, 5679>();
  hw_uint<16> raw_FIFO_buf84_lane_355 = raw_FIFO_buf84.extract<5680, 5695>();
  hw_uint<16> raw_FIFO_buf84_lane_356 = raw_FIFO_buf84.extract<5696, 5711>();
  hw_uint<16> raw_FIFO_buf84_lane_357 = raw_FIFO_buf84.extract<5712, 5727>();
  hw_uint<16> raw_FIFO_buf84_lane_358 = raw_FIFO_buf84.extract<5728, 5743>();
  hw_uint<16> raw_FIFO_buf84_lane_359 = raw_FIFO_buf84.extract<5744, 5759>();
  hw_uint<16> raw_FIFO_buf84_lane_360 = raw_FIFO_buf84.extract<5760, 5775>();
  hw_uint<16> raw_FIFO_buf84_lane_361 = raw_FIFO_buf84.extract<5776, 5791>();
  hw_uint<16> raw_FIFO_buf84_lane_362 = raw_FIFO_buf84.extract<5792, 5807>();
  hw_uint<16> raw_FIFO_buf84_lane_363 = raw_FIFO_buf84.extract<5808, 5823>();
  hw_uint<16> raw_FIFO_buf84_lane_364 = raw_FIFO_buf84.extract<5824, 5839>();
  hw_uint<16> raw_FIFO_buf84_lane_365 = raw_FIFO_buf84.extract<5840, 5855>();
  hw_uint<16> raw_FIFO_buf84_lane_366 = raw_FIFO_buf84.extract<5856, 5871>();
  hw_uint<16> raw_FIFO_buf84_lane_367 = raw_FIFO_buf84.extract<5872, 5887>();
  hw_uint<16> raw_FIFO_buf84_lane_368 = raw_FIFO_buf84.extract<5888, 5903>();
  hw_uint<16> raw_FIFO_buf84_lane_369 = raw_FIFO_buf84.extract<5904, 5919>();
  hw_uint<16> raw_FIFO_buf84_lane_370 = raw_FIFO_buf84.extract<5920, 5935>();
  hw_uint<16> raw_FIFO_buf84_lane_371 = raw_FIFO_buf84.extract<5936, 5951>();
  hw_uint<16> raw_FIFO_buf84_lane_372 = raw_FIFO_buf84.extract<5952, 5967>();
  hw_uint<16> raw_FIFO_buf84_lane_373 = raw_FIFO_buf84.extract<5968, 5983>();
  hw_uint<16> raw_FIFO_buf84_lane_374 = raw_FIFO_buf84.extract<5984, 5999>();
  hw_uint<16> raw_FIFO_buf84_lane_375 = raw_FIFO_buf84.extract<6000, 6015>();
  hw_uint<16> raw_FIFO_buf84_lane_376 = raw_FIFO_buf84.extract<6016, 6031>();
  hw_uint<16> raw_FIFO_buf84_lane_377 = raw_FIFO_buf84.extract<6032, 6047>();
  hw_uint<16> raw_FIFO_buf84_lane_378 = raw_FIFO_buf84.extract<6048, 6063>();
  hw_uint<16> raw_FIFO_buf84_lane_379 = raw_FIFO_buf84.extract<6064, 6079>();
  hw_uint<16> raw_FIFO_buf84_lane_380 = raw_FIFO_buf84.extract<6080, 6095>();
  hw_uint<16> raw_FIFO_buf84_lane_381 = raw_FIFO_buf84.extract<6096, 6111>();
  hw_uint<16> raw_FIFO_buf84_lane_382 = raw_FIFO_buf84.extract<6112, 6127>();
  hw_uint<16> raw_FIFO_buf84_lane_383 = raw_FIFO_buf84.extract<6128, 6143>();
  hw_uint<16> raw_FIFO_buf84_lane_384 = raw_FIFO_buf84.extract<6144, 6159>();
  hw_uint<16> raw_FIFO_buf84_lane_385 = raw_FIFO_buf84.extract<6160, 6175>();
  hw_uint<16> raw_FIFO_buf84_lane_386 = raw_FIFO_buf84.extract<6176, 6191>();
  hw_uint<16> raw_FIFO_buf84_lane_387 = raw_FIFO_buf84.extract<6192, 6207>();
  hw_uint<16> raw_FIFO_buf84_lane_388 = raw_FIFO_buf84.extract<6208, 6223>();
  hw_uint<16> raw_FIFO_buf84_lane_389 = raw_FIFO_buf84.extract<6224, 6239>();
  hw_uint<16> raw_FIFO_buf84_lane_390 = raw_FIFO_buf84.extract<6240, 6255>();
  hw_uint<16> raw_FIFO_buf84_lane_391 = raw_FIFO_buf84.extract<6256, 6271>();
  hw_uint<16> raw_FIFO_buf84_lane_392 = raw_FIFO_buf84.extract<6272, 6287>();
  hw_uint<16> raw_FIFO_buf84_lane_393 = raw_FIFO_buf84.extract<6288, 6303>();
  hw_uint<16> raw_FIFO_buf84_lane_394 = raw_FIFO_buf84.extract<6304, 6319>();
  hw_uint<16> raw_FIFO_buf84_lane_395 = raw_FIFO_buf84.extract<6320, 6335>();
  hw_uint<16> raw_FIFO_buf84_lane_396 = raw_FIFO_buf84.extract<6336, 6351>();
  hw_uint<16> raw_FIFO_buf84_lane_397 = raw_FIFO_buf84.extract<6352, 6367>();
  hw_uint<16> raw_FIFO_buf84_lane_398 = raw_FIFO_buf84.extract<6368, 6383>();
  hw_uint<16> raw_FIFO_buf84_lane_399 = raw_FIFO_buf84.extract<6384, 6399>();

	
  hw_uint<400 > raw_FIFO_buf84_lane_24_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_0);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_1);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_2);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_3);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_4);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_5);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_6);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_7);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_8);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_9);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_10);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_11);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_12);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_13);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_14);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_15);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_16);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_17);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_18);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_19);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_20);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_21);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_22);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_23);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_24_pack, raw_FIFO_buf84_lane_24);
  auto res_denoiseb_update_0_sm92_15279 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_24_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_49_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_25);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_26);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_27);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_28);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_29);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_30);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_31);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_32);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_33);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_34);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_35);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_36);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_37);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_38);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_39);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_40);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_41);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_42);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_43);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_44);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_45);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_46);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_47);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_48);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_49_pack, raw_FIFO_buf84_lane_49);
  auto res_denoiseb_update_0_sm92_14277 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_49_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_74_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_50);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_51);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_52);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_53);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_54);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_55);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_56);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_57);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_58);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_59);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_60);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_61);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_62);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_63);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_64);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_65);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_66);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_67);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_68);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_69);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_70);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_71);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_72);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_73);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_74_pack, raw_FIFO_buf84_lane_74);
  auto res_denoiseb_update_0_sm92_13275 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_74_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_99_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_75);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_76);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_77);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_78);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_79);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_80);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_81);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_82);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_83);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_84);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_85);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_86);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_87);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_88);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_89);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_90);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_91);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_92);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_93);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_94);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_95);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_96);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_97);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_98);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_99_pack, raw_FIFO_buf84_lane_99);
  auto res_denoiseb_update_0_sm92_12273 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_99_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_124_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_100);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_101);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_102);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_103);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_104);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_105);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_106);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_107);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_108);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_109);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_110);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_111);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_112);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_113);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_114);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_115);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_116);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_117);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_118);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_119);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_120);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_121);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_122);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_123);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_124_pack, raw_FIFO_buf84_lane_124);
  auto res_denoiseb_update_0_sm92_11271 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_124_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_149_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_125);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_126);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_127);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_128);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_129);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_130);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_131);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_132);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_133);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_134);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_135);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_136);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_137);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_138);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_139);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_140);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_141);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_142);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_143);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_144);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_145);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_146);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_147);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_148);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_149_pack, raw_FIFO_buf84_lane_149);
  auto res_denoiseb_update_0_sm92_10269 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_149_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_174_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_150);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_151);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_152);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_153);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_154);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_155);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_156);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_157);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_158);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_159);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_160);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_161);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_162);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_163);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_164);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_165);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_166);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_167);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_168);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_169);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_170);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_171);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_172);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_173);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_174_pack, raw_FIFO_buf84_lane_174);
  auto res_denoiseb_update_0_sm92_9267 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_174_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_199_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_175);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_176);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_177);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_178);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_179);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_180);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_181);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_182);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_183);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_184);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_185);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_186);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_187);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_188);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_189);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_190);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_191);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_192);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_193);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_194);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_195);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_196);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_197);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_198);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_199_pack, raw_FIFO_buf84_lane_199);
  auto res_denoiseb_update_0_sm92_8265 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_199_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_224_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_200);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_201);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_202);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_203);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_204);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_205);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_206);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_207);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_208);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_209);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_210);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_211);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_212);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_213);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_214);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_215);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_216);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_217);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_218);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_219);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_220);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_221);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_222);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_223);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_224_pack, raw_FIFO_buf84_lane_224);
  auto res_denoiseb_update_0_sm92_7263 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_224_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_249_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_225);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_226);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_227);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_228);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_229);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_230);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_231);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_232);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_233);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_234);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_235);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_236);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_237);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_238);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_239);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_240);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_241);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_242);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_243);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_244);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_245);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_246);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_247);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_248);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_249_pack, raw_FIFO_buf84_lane_249);
  auto res_denoiseb_update_0_sm92_6261 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_249_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_274_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_250);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_251);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_252);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_253);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_254);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_255);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_256);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_257);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_258);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_259);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_260);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_261);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_262);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_263);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_264);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_265);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_266);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_267);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_268);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_269);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_270);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_271);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_272);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_273);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_274_pack, raw_FIFO_buf84_lane_274);
  auto res_denoiseb_update_0_sm92_5259 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_274_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_299_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_275);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_276);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_277);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_278);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_279);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_280);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_281);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_282);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_283);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_284);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_285);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_286);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_287);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_288);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_289);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_290);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_291);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_292);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_293);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_294);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_295);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_296);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_297);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_298);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_299_pack, raw_FIFO_buf84_lane_299);
  auto res_denoiseb_update_0_sm92_4257 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_299_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_324_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_300);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_301);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_302);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_303);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_304);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_305);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_306);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_307);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_308);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_309);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_310);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_311);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_312);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_313);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_314);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_315);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_316);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_317);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_318);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_319);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_320);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_321);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_322);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_323);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_324_pack, raw_FIFO_buf84_lane_324);
  auto res_denoiseb_update_0_sm92_3255 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_324_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_349_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_325);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_326);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_327);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_328);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_329);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_330);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_331);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_332);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_333);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_334);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_335);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_336);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_337);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_338);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_339);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_340);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_341);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_342);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_343);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_344);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_345);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_346);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_347);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_348);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_349_pack, raw_FIFO_buf84_lane_349);
  auto res_denoiseb_update_0_sm92_2253 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_349_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_374_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_350);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_351);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_352);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_353);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_354);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_355);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_356);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_357);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_358);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_359);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_360);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_361);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_362);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_363);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_364);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_365);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_366);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_367);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_368);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_369);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_370);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_371);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_372);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_373);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_374_pack, raw_FIFO_buf84_lane_374);
  auto res_denoiseb_update_0_sm92_1251 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_374_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_399_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_375);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_376);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_377);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_378);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_379);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_380);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_381);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_382);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_383);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_384);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_385);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_386);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_387);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_388);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_389);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_390);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_391);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_392);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_393);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_394);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_395);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_396);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_397);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_398);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_399_pack, raw_FIFO_buf84_lane_399);
  auto res_denoiseb_update_0_sm92_0249 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_399_pack);
  hw_uint<256 > return_value1187;
  set_at<0, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_15279);
  set_at<16, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_14277);
  set_at<32, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_13275);
  set_at<48, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_12273);
  set_at<64, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_11271);
  set_at<80, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_10269);
  set_at<96, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_9267);
  set_at<112, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_8265);
  set_at<128, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_7263);
  set_at<144, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_6261);
  set_at<160, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_5259);
  set_at<176, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_4257);
  set_at<192, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_3255);
  set_at<208, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_2253);
  set_at<224, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_1251);
  set_at<240, 256, 16>(return_value1187, res_denoiseb_update_0_sm92_0249);
  return return_value1187;

}

hw_uint<256> denoise_1_cu1189(hw_uint<16*16>& denoiseb_FIFO_buf80) {
  hw_uint<16> denoiseb_FIFO_buf80_lane_0 = denoiseb_FIFO_buf80.extract<0, 15>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_1 = denoiseb_FIFO_buf80.extract<16, 31>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_2 = denoiseb_FIFO_buf80.extract<32, 47>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_3 = denoiseb_FIFO_buf80.extract<48, 63>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_4 = denoiseb_FIFO_buf80.extract<64, 79>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_5 = denoiseb_FIFO_buf80.extract<80, 95>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_6 = denoiseb_FIFO_buf80.extract<96, 111>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_7 = denoiseb_FIFO_buf80.extract<112, 127>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_8 = denoiseb_FIFO_buf80.extract<128, 143>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_9 = denoiseb_FIFO_buf80.extract<144, 159>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_10 = denoiseb_FIFO_buf80.extract<160, 175>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_11 = denoiseb_FIFO_buf80.extract<176, 191>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_12 = denoiseb_FIFO_buf80.extract<192, 207>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_13 = denoiseb_FIFO_buf80.extract<208, 223>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_14 = denoiseb_FIFO_buf80.extract<224, 239>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_15 = denoiseb_FIFO_buf80.extract<240, 255>();

	
  hw_uint<16 > denoiseb_FIFO_buf80_lane_0_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_0_pack, denoiseb_FIFO_buf80_lane_0);
  auto res_denoise_update_0_sm93_15311 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_0_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_1_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_1_pack, denoiseb_FIFO_buf80_lane_1);
  auto res_denoise_update_0_sm93_14309 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_1_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_2_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_2_pack, denoiseb_FIFO_buf80_lane_2);
  auto res_denoise_update_0_sm93_13307 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_2_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_3_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_3_pack, denoiseb_FIFO_buf80_lane_3);
  auto res_denoise_update_0_sm93_12305 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_3_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_4_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_4_pack, denoiseb_FIFO_buf80_lane_4);
  auto res_denoise_update_0_sm93_11303 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_4_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_5_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_5_pack, denoiseb_FIFO_buf80_lane_5);
  auto res_denoise_update_0_sm93_10301 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_5_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_6_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_6_pack, denoiseb_FIFO_buf80_lane_6);
  auto res_denoise_update_0_sm93_9299 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_6_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_7_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_7_pack, denoiseb_FIFO_buf80_lane_7);
  auto res_denoise_update_0_sm93_8297 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_7_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_8_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_8_pack, denoiseb_FIFO_buf80_lane_8);
  auto res_denoise_update_0_sm93_7295 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_8_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_9_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_9_pack, denoiseb_FIFO_buf80_lane_9);
  auto res_denoise_update_0_sm93_6293 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_9_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_10_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_10_pack, denoiseb_FIFO_buf80_lane_10);
  auto res_denoise_update_0_sm93_5291 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_10_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_11_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_11_pack, denoiseb_FIFO_buf80_lane_11);
  auto res_denoise_update_0_sm93_4289 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_11_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_12_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_12_pack, denoiseb_FIFO_buf80_lane_12);
  auto res_denoise_update_0_sm93_3287 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_12_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_13_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_13_pack, denoiseb_FIFO_buf80_lane_13);
  auto res_denoise_update_0_sm93_2285 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_13_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_14_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_14_pack, denoiseb_FIFO_buf80_lane_14);
  auto res_denoise_update_0_sm93_1283 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_14_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_15_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_15_pack, denoiseb_FIFO_buf80_lane_15);
  auto res_denoise_update_0_sm93_0281 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_15_pack);
  hw_uint<256 > return_value1190;
  set_at<0, 256, 16>(return_value1190, res_denoise_update_0_sm93_15311);
  set_at<16, 256, 16>(return_value1190, res_denoise_update_0_sm93_14309);
  set_at<32, 256, 16>(return_value1190, res_denoise_update_0_sm93_13307);
  set_at<48, 256, 16>(return_value1190, res_denoise_update_0_sm93_12305);
  set_at<64, 256, 16>(return_value1190, res_denoise_update_0_sm93_11303);
  set_at<80, 256, 16>(return_value1190, res_denoise_update_0_sm93_10301);
  set_at<96, 256, 16>(return_value1190, res_denoise_update_0_sm93_9299);
  set_at<112, 256, 16>(return_value1190, res_denoise_update_0_sm93_8297);
  set_at<128, 256, 16>(return_value1190, res_denoise_update_0_sm93_7295);
  set_at<144, 256, 16>(return_value1190, res_denoise_update_0_sm93_6293);
  set_at<160, 256, 16>(return_value1190, res_denoise_update_0_sm93_5291);
  set_at<176, 256, 16>(return_value1190, res_denoise_update_0_sm93_4289);
  set_at<192, 256, 16>(return_value1190, res_denoise_update_0_sm93_3287);
  set_at<208, 256, 16>(return_value1190, res_denoise_update_0_sm93_2285);
  set_at<224, 256, 16>(return_value1190, res_denoise_update_0_sm93_1283);
  set_at<240, 256, 16>(return_value1190, res_denoise_update_0_sm93_0281);
  return return_value1190;

}

hw_uint<256> demosaicb_1_cu1192(hw_uint<16*144>& denoise_FIFO_buf76) {
  hw_uint<16> denoise_FIFO_buf76_lane_0 = denoise_FIFO_buf76.extract<0, 15>();
  hw_uint<16> denoise_FIFO_buf76_lane_1 = denoise_FIFO_buf76.extract<16, 31>();
  hw_uint<16> denoise_FIFO_buf76_lane_2 = denoise_FIFO_buf76.extract<32, 47>();
  hw_uint<16> denoise_FIFO_buf76_lane_3 = denoise_FIFO_buf76.extract<48, 63>();
  hw_uint<16> denoise_FIFO_buf76_lane_4 = denoise_FIFO_buf76.extract<64, 79>();
  hw_uint<16> denoise_FIFO_buf76_lane_5 = denoise_FIFO_buf76.extract<80, 95>();
  hw_uint<16> denoise_FIFO_buf76_lane_6 = denoise_FIFO_buf76.extract<96, 111>();
  hw_uint<16> denoise_FIFO_buf76_lane_7 = denoise_FIFO_buf76.extract<112, 127>();
  hw_uint<16> denoise_FIFO_buf76_lane_8 = denoise_FIFO_buf76.extract<128, 143>();
  hw_uint<16> denoise_FIFO_buf76_lane_9 = denoise_FIFO_buf76.extract<144, 159>();
  hw_uint<16> denoise_FIFO_buf76_lane_10 = denoise_FIFO_buf76.extract<160, 175>();
  hw_uint<16> denoise_FIFO_buf76_lane_11 = denoise_FIFO_buf76.extract<176, 191>();
  hw_uint<16> denoise_FIFO_buf76_lane_12 = denoise_FIFO_buf76.extract<192, 207>();
  hw_uint<16> denoise_FIFO_buf76_lane_13 = denoise_FIFO_buf76.extract<208, 223>();
  hw_uint<16> denoise_FIFO_buf76_lane_14 = denoise_FIFO_buf76.extract<224, 239>();
  hw_uint<16> denoise_FIFO_buf76_lane_15 = denoise_FIFO_buf76.extract<240, 255>();
  hw_uint<16> denoise_FIFO_buf76_lane_16 = denoise_FIFO_buf76.extract<256, 271>();
  hw_uint<16> denoise_FIFO_buf76_lane_17 = denoise_FIFO_buf76.extract<272, 287>();
  hw_uint<16> denoise_FIFO_buf76_lane_18 = denoise_FIFO_buf76.extract<288, 303>();
  hw_uint<16> denoise_FIFO_buf76_lane_19 = denoise_FIFO_buf76.extract<304, 319>();
  hw_uint<16> denoise_FIFO_buf76_lane_20 = denoise_FIFO_buf76.extract<320, 335>();
  hw_uint<16> denoise_FIFO_buf76_lane_21 = denoise_FIFO_buf76.extract<336, 351>();
  hw_uint<16> denoise_FIFO_buf76_lane_22 = denoise_FIFO_buf76.extract<352, 367>();
  hw_uint<16> denoise_FIFO_buf76_lane_23 = denoise_FIFO_buf76.extract<368, 383>();
  hw_uint<16> denoise_FIFO_buf76_lane_24 = denoise_FIFO_buf76.extract<384, 399>();
  hw_uint<16> denoise_FIFO_buf76_lane_25 = denoise_FIFO_buf76.extract<400, 415>();
  hw_uint<16> denoise_FIFO_buf76_lane_26 = denoise_FIFO_buf76.extract<416, 431>();
  hw_uint<16> denoise_FIFO_buf76_lane_27 = denoise_FIFO_buf76.extract<432, 447>();
  hw_uint<16> denoise_FIFO_buf76_lane_28 = denoise_FIFO_buf76.extract<448, 463>();
  hw_uint<16> denoise_FIFO_buf76_lane_29 = denoise_FIFO_buf76.extract<464, 479>();
  hw_uint<16> denoise_FIFO_buf76_lane_30 = denoise_FIFO_buf76.extract<480, 495>();
  hw_uint<16> denoise_FIFO_buf76_lane_31 = denoise_FIFO_buf76.extract<496, 511>();
  hw_uint<16> denoise_FIFO_buf76_lane_32 = denoise_FIFO_buf76.extract<512, 527>();
  hw_uint<16> denoise_FIFO_buf76_lane_33 = denoise_FIFO_buf76.extract<528, 543>();
  hw_uint<16> denoise_FIFO_buf76_lane_34 = denoise_FIFO_buf76.extract<544, 559>();
  hw_uint<16> denoise_FIFO_buf76_lane_35 = denoise_FIFO_buf76.extract<560, 575>();
  hw_uint<16> denoise_FIFO_buf76_lane_36 = denoise_FIFO_buf76.extract<576, 591>();
  hw_uint<16> denoise_FIFO_buf76_lane_37 = denoise_FIFO_buf76.extract<592, 607>();
  hw_uint<16> denoise_FIFO_buf76_lane_38 = denoise_FIFO_buf76.extract<608, 623>();
  hw_uint<16> denoise_FIFO_buf76_lane_39 = denoise_FIFO_buf76.extract<624, 639>();
  hw_uint<16> denoise_FIFO_buf76_lane_40 = denoise_FIFO_buf76.extract<640, 655>();
  hw_uint<16> denoise_FIFO_buf76_lane_41 = denoise_FIFO_buf76.extract<656, 671>();
  hw_uint<16> denoise_FIFO_buf76_lane_42 = denoise_FIFO_buf76.extract<672, 687>();
  hw_uint<16> denoise_FIFO_buf76_lane_43 = denoise_FIFO_buf76.extract<688, 703>();
  hw_uint<16> denoise_FIFO_buf76_lane_44 = denoise_FIFO_buf76.extract<704, 719>();
  hw_uint<16> denoise_FIFO_buf76_lane_45 = denoise_FIFO_buf76.extract<720, 735>();
  hw_uint<16> denoise_FIFO_buf76_lane_46 = denoise_FIFO_buf76.extract<736, 751>();
  hw_uint<16> denoise_FIFO_buf76_lane_47 = denoise_FIFO_buf76.extract<752, 767>();
  hw_uint<16> denoise_FIFO_buf76_lane_48 = denoise_FIFO_buf76.extract<768, 783>();
  hw_uint<16> denoise_FIFO_buf76_lane_49 = denoise_FIFO_buf76.extract<784, 799>();
  hw_uint<16> denoise_FIFO_buf76_lane_50 = denoise_FIFO_buf76.extract<800, 815>();
  hw_uint<16> denoise_FIFO_buf76_lane_51 = denoise_FIFO_buf76.extract<816, 831>();
  hw_uint<16> denoise_FIFO_buf76_lane_52 = denoise_FIFO_buf76.extract<832, 847>();
  hw_uint<16> denoise_FIFO_buf76_lane_53 = denoise_FIFO_buf76.extract<848, 863>();
  hw_uint<16> denoise_FIFO_buf76_lane_54 = denoise_FIFO_buf76.extract<864, 879>();
  hw_uint<16> denoise_FIFO_buf76_lane_55 = denoise_FIFO_buf76.extract<880, 895>();
  hw_uint<16> denoise_FIFO_buf76_lane_56 = denoise_FIFO_buf76.extract<896, 911>();
  hw_uint<16> denoise_FIFO_buf76_lane_57 = denoise_FIFO_buf76.extract<912, 927>();
  hw_uint<16> denoise_FIFO_buf76_lane_58 = denoise_FIFO_buf76.extract<928, 943>();
  hw_uint<16> denoise_FIFO_buf76_lane_59 = denoise_FIFO_buf76.extract<944, 959>();
  hw_uint<16> denoise_FIFO_buf76_lane_60 = denoise_FIFO_buf76.extract<960, 975>();
  hw_uint<16> denoise_FIFO_buf76_lane_61 = denoise_FIFO_buf76.extract<976, 991>();
  hw_uint<16> denoise_FIFO_buf76_lane_62 = denoise_FIFO_buf76.extract<992, 1007>();
  hw_uint<16> denoise_FIFO_buf76_lane_63 = denoise_FIFO_buf76.extract<1008, 1023>();
  hw_uint<16> denoise_FIFO_buf76_lane_64 = denoise_FIFO_buf76.extract<1024, 1039>();
  hw_uint<16> denoise_FIFO_buf76_lane_65 = denoise_FIFO_buf76.extract<1040, 1055>();
  hw_uint<16> denoise_FIFO_buf76_lane_66 = denoise_FIFO_buf76.extract<1056, 1071>();
  hw_uint<16> denoise_FIFO_buf76_lane_67 = denoise_FIFO_buf76.extract<1072, 1087>();
  hw_uint<16> denoise_FIFO_buf76_lane_68 = denoise_FIFO_buf76.extract<1088, 1103>();
  hw_uint<16> denoise_FIFO_buf76_lane_69 = denoise_FIFO_buf76.extract<1104, 1119>();
  hw_uint<16> denoise_FIFO_buf76_lane_70 = denoise_FIFO_buf76.extract<1120, 1135>();
  hw_uint<16> denoise_FIFO_buf76_lane_71 = denoise_FIFO_buf76.extract<1136, 1151>();
  hw_uint<16> denoise_FIFO_buf76_lane_72 = denoise_FIFO_buf76.extract<1152, 1167>();
  hw_uint<16> denoise_FIFO_buf76_lane_73 = denoise_FIFO_buf76.extract<1168, 1183>();
  hw_uint<16> denoise_FIFO_buf76_lane_74 = denoise_FIFO_buf76.extract<1184, 1199>();
  hw_uint<16> denoise_FIFO_buf76_lane_75 = denoise_FIFO_buf76.extract<1200, 1215>();
  hw_uint<16> denoise_FIFO_buf76_lane_76 = denoise_FIFO_buf76.extract<1216, 1231>();
  hw_uint<16> denoise_FIFO_buf76_lane_77 = denoise_FIFO_buf76.extract<1232, 1247>();
  hw_uint<16> denoise_FIFO_buf76_lane_78 = denoise_FIFO_buf76.extract<1248, 1263>();
  hw_uint<16> denoise_FIFO_buf76_lane_79 = denoise_FIFO_buf76.extract<1264, 1279>();
  hw_uint<16> denoise_FIFO_buf76_lane_80 = denoise_FIFO_buf76.extract<1280, 1295>();
  hw_uint<16> denoise_FIFO_buf76_lane_81 = denoise_FIFO_buf76.extract<1296, 1311>();
  hw_uint<16> denoise_FIFO_buf76_lane_82 = denoise_FIFO_buf76.extract<1312, 1327>();
  hw_uint<16> denoise_FIFO_buf76_lane_83 = denoise_FIFO_buf76.extract<1328, 1343>();
  hw_uint<16> denoise_FIFO_buf76_lane_84 = denoise_FIFO_buf76.extract<1344, 1359>();
  hw_uint<16> denoise_FIFO_buf76_lane_85 = denoise_FIFO_buf76.extract<1360, 1375>();
  hw_uint<16> denoise_FIFO_buf76_lane_86 = denoise_FIFO_buf76.extract<1376, 1391>();
  hw_uint<16> denoise_FIFO_buf76_lane_87 = denoise_FIFO_buf76.extract<1392, 1407>();
  hw_uint<16> denoise_FIFO_buf76_lane_88 = denoise_FIFO_buf76.extract<1408, 1423>();
  hw_uint<16> denoise_FIFO_buf76_lane_89 = denoise_FIFO_buf76.extract<1424, 1439>();
  hw_uint<16> denoise_FIFO_buf76_lane_90 = denoise_FIFO_buf76.extract<1440, 1455>();
  hw_uint<16> denoise_FIFO_buf76_lane_91 = denoise_FIFO_buf76.extract<1456, 1471>();
  hw_uint<16> denoise_FIFO_buf76_lane_92 = denoise_FIFO_buf76.extract<1472, 1487>();
  hw_uint<16> denoise_FIFO_buf76_lane_93 = denoise_FIFO_buf76.extract<1488, 1503>();
  hw_uint<16> denoise_FIFO_buf76_lane_94 = denoise_FIFO_buf76.extract<1504, 1519>();
  hw_uint<16> denoise_FIFO_buf76_lane_95 = denoise_FIFO_buf76.extract<1520, 1535>();
  hw_uint<16> denoise_FIFO_buf76_lane_96 = denoise_FIFO_buf76.extract<1536, 1551>();
  hw_uint<16> denoise_FIFO_buf76_lane_97 = denoise_FIFO_buf76.extract<1552, 1567>();
  hw_uint<16> denoise_FIFO_buf76_lane_98 = denoise_FIFO_buf76.extract<1568, 1583>();
  hw_uint<16> denoise_FIFO_buf76_lane_99 = denoise_FIFO_buf76.extract<1584, 1599>();
  hw_uint<16> denoise_FIFO_buf76_lane_100 = denoise_FIFO_buf76.extract<1600, 1615>();
  hw_uint<16> denoise_FIFO_buf76_lane_101 = denoise_FIFO_buf76.extract<1616, 1631>();
  hw_uint<16> denoise_FIFO_buf76_lane_102 = denoise_FIFO_buf76.extract<1632, 1647>();
  hw_uint<16> denoise_FIFO_buf76_lane_103 = denoise_FIFO_buf76.extract<1648, 1663>();
  hw_uint<16> denoise_FIFO_buf76_lane_104 = denoise_FIFO_buf76.extract<1664, 1679>();
  hw_uint<16> denoise_FIFO_buf76_lane_105 = denoise_FIFO_buf76.extract<1680, 1695>();
  hw_uint<16> denoise_FIFO_buf76_lane_106 = denoise_FIFO_buf76.extract<1696, 1711>();
  hw_uint<16> denoise_FIFO_buf76_lane_107 = denoise_FIFO_buf76.extract<1712, 1727>();
  hw_uint<16> denoise_FIFO_buf76_lane_108 = denoise_FIFO_buf76.extract<1728, 1743>();
  hw_uint<16> denoise_FIFO_buf76_lane_109 = denoise_FIFO_buf76.extract<1744, 1759>();
  hw_uint<16> denoise_FIFO_buf76_lane_110 = denoise_FIFO_buf76.extract<1760, 1775>();
  hw_uint<16> denoise_FIFO_buf76_lane_111 = denoise_FIFO_buf76.extract<1776, 1791>();
  hw_uint<16> denoise_FIFO_buf76_lane_112 = denoise_FIFO_buf76.extract<1792, 1807>();
  hw_uint<16> denoise_FIFO_buf76_lane_113 = denoise_FIFO_buf76.extract<1808, 1823>();
  hw_uint<16> denoise_FIFO_buf76_lane_114 = denoise_FIFO_buf76.extract<1824, 1839>();
  hw_uint<16> denoise_FIFO_buf76_lane_115 = denoise_FIFO_buf76.extract<1840, 1855>();
  hw_uint<16> denoise_FIFO_buf76_lane_116 = denoise_FIFO_buf76.extract<1856, 1871>();
  hw_uint<16> denoise_FIFO_buf76_lane_117 = denoise_FIFO_buf76.extract<1872, 1887>();
  hw_uint<16> denoise_FIFO_buf76_lane_118 = denoise_FIFO_buf76.extract<1888, 1903>();
  hw_uint<16> denoise_FIFO_buf76_lane_119 = denoise_FIFO_buf76.extract<1904, 1919>();
  hw_uint<16> denoise_FIFO_buf76_lane_120 = denoise_FIFO_buf76.extract<1920, 1935>();
  hw_uint<16> denoise_FIFO_buf76_lane_121 = denoise_FIFO_buf76.extract<1936, 1951>();
  hw_uint<16> denoise_FIFO_buf76_lane_122 = denoise_FIFO_buf76.extract<1952, 1967>();
  hw_uint<16> denoise_FIFO_buf76_lane_123 = denoise_FIFO_buf76.extract<1968, 1983>();
  hw_uint<16> denoise_FIFO_buf76_lane_124 = denoise_FIFO_buf76.extract<1984, 1999>();
  hw_uint<16> denoise_FIFO_buf76_lane_125 = denoise_FIFO_buf76.extract<2000, 2015>();
  hw_uint<16> denoise_FIFO_buf76_lane_126 = denoise_FIFO_buf76.extract<2016, 2031>();
  hw_uint<16> denoise_FIFO_buf76_lane_127 = denoise_FIFO_buf76.extract<2032, 2047>();
  hw_uint<16> denoise_FIFO_buf76_lane_128 = denoise_FIFO_buf76.extract<2048, 2063>();
  hw_uint<16> denoise_FIFO_buf76_lane_129 = denoise_FIFO_buf76.extract<2064, 2079>();
  hw_uint<16> denoise_FIFO_buf76_lane_130 = denoise_FIFO_buf76.extract<2080, 2095>();
  hw_uint<16> denoise_FIFO_buf76_lane_131 = denoise_FIFO_buf76.extract<2096, 2111>();
  hw_uint<16> denoise_FIFO_buf76_lane_132 = denoise_FIFO_buf76.extract<2112, 2127>();
  hw_uint<16> denoise_FIFO_buf76_lane_133 = denoise_FIFO_buf76.extract<2128, 2143>();
  hw_uint<16> denoise_FIFO_buf76_lane_134 = denoise_FIFO_buf76.extract<2144, 2159>();
  hw_uint<16> denoise_FIFO_buf76_lane_135 = denoise_FIFO_buf76.extract<2160, 2175>();
  hw_uint<16> denoise_FIFO_buf76_lane_136 = denoise_FIFO_buf76.extract<2176, 2191>();
  hw_uint<16> denoise_FIFO_buf76_lane_137 = denoise_FIFO_buf76.extract<2192, 2207>();
  hw_uint<16> denoise_FIFO_buf76_lane_138 = denoise_FIFO_buf76.extract<2208, 2223>();
  hw_uint<16> denoise_FIFO_buf76_lane_139 = denoise_FIFO_buf76.extract<2224, 2239>();
  hw_uint<16> denoise_FIFO_buf76_lane_140 = denoise_FIFO_buf76.extract<2240, 2255>();
  hw_uint<16> denoise_FIFO_buf76_lane_141 = denoise_FIFO_buf76.extract<2256, 2271>();
  hw_uint<16> denoise_FIFO_buf76_lane_142 = denoise_FIFO_buf76.extract<2272, 2287>();
  hw_uint<16> denoise_FIFO_buf76_lane_143 = denoise_FIFO_buf76.extract<2288, 2303>();

	
  hw_uint<144 > denoise_FIFO_buf76_lane_8_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_0);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_1);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_2);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_3);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_4);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_5);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_6);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_7);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_8_pack, denoise_FIFO_buf76_lane_8);
  auto res_demosaicb_update_0_sm94_15343 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_8_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_17_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_9);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_10);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_11);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_12);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_13);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_14);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_15);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_16);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_17_pack, denoise_FIFO_buf76_lane_17);
  auto res_demosaicb_update_0_sm94_14341 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_17_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_26_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_18);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_19);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_20);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_21);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_22);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_23);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_24);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_25);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_26_pack, denoise_FIFO_buf76_lane_26);
  auto res_demosaicb_update_0_sm94_13339 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_26_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_35_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_27);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_28);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_29);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_30);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_31);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_32);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_33);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_34);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_35_pack, denoise_FIFO_buf76_lane_35);
  auto res_demosaicb_update_0_sm94_12337 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_35_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_44_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_36);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_37);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_38);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_39);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_40);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_41);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_42);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_43);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_44_pack, denoise_FIFO_buf76_lane_44);
  auto res_demosaicb_update_0_sm94_11335 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_44_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_53_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_45);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_46);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_47);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_48);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_49);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_50);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_51);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_52);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_53_pack, denoise_FIFO_buf76_lane_53);
  auto res_demosaicb_update_0_sm94_10333 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_53_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_62_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_54);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_55);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_56);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_57);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_58);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_59);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_60);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_61);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_62_pack, denoise_FIFO_buf76_lane_62);
  auto res_demosaicb_update_0_sm94_9331 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_62_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_71_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_63);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_64);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_65);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_66);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_67);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_68);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_69);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_70);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_71_pack, denoise_FIFO_buf76_lane_71);
  auto res_demosaicb_update_0_sm94_8329 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_71_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_80_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_72);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_73);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_74);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_75);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_76);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_77);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_78);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_79);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_80_pack, denoise_FIFO_buf76_lane_80);
  auto res_demosaicb_update_0_sm94_7327 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_80_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_89_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_81);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_82);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_83);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_84);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_85);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_86);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_87);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_88);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_89_pack, denoise_FIFO_buf76_lane_89);
  auto res_demosaicb_update_0_sm94_6325 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_89_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_98_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_90);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_91);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_92);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_93);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_94);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_95);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_96);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_97);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_98_pack, denoise_FIFO_buf76_lane_98);
  auto res_demosaicb_update_0_sm94_5323 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_98_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_107_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_99);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_100);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_101);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_102);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_103);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_104);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_105);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_106);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_107_pack, denoise_FIFO_buf76_lane_107);
  auto res_demosaicb_update_0_sm94_4321 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_107_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_116_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_108);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_109);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_110);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_111);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_112);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_113);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_114);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_115);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_116_pack, denoise_FIFO_buf76_lane_116);
  auto res_demosaicb_update_0_sm94_3319 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_116_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_125_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_117);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_118);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_119);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_120);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_121);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_122);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_123);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_124);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_125_pack, denoise_FIFO_buf76_lane_125);
  auto res_demosaicb_update_0_sm94_2317 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_125_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_134_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_126);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_127);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_128);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_129);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_130);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_131);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_132);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_133);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_134_pack, denoise_FIFO_buf76_lane_134);
  auto res_demosaicb_update_0_sm94_1315 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_134_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_143_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_135);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_136);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_137);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_138);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_139);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_140);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_141);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_142);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_143_pack, denoise_FIFO_buf76_lane_143);
  auto res_demosaicb_update_0_sm94_0313 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_143_pack);
  hw_uint<256 > return_value1193;
  set_at<0, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_15343);
  set_at<16, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_14341);
  set_at<32, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_13339);
  set_at<48, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_12337);
  set_at<64, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_11335);
  set_at<80, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_10333);
  set_at<96, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_9331);
  set_at<112, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_8329);
  set_at<128, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_7327);
  set_at<144, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_6325);
  set_at<160, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_5323);
  set_at<176, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_4321);
  set_at<192, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_3319);
  set_at<208, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_2317);
  set_at<224, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_1315);
  set_at<240, 256, 16>(return_value1193, res_demosaicb_update_0_sm94_0313);
  return return_value1193;

}

hw_uint<256> demosaic_1_cu1195(hw_uint<16*16>& demosaicb_FIFO_buf72) {
  hw_uint<16> demosaicb_FIFO_buf72_lane_0 = demosaicb_FIFO_buf72.extract<0, 15>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_1 = demosaicb_FIFO_buf72.extract<16, 31>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_2 = demosaicb_FIFO_buf72.extract<32, 47>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_3 = demosaicb_FIFO_buf72.extract<48, 63>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_4 = demosaicb_FIFO_buf72.extract<64, 79>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_5 = demosaicb_FIFO_buf72.extract<80, 95>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_6 = demosaicb_FIFO_buf72.extract<96, 111>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_7 = demosaicb_FIFO_buf72.extract<112, 127>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_8 = demosaicb_FIFO_buf72.extract<128, 143>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_9 = demosaicb_FIFO_buf72.extract<144, 159>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_10 = demosaicb_FIFO_buf72.extract<160, 175>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_11 = demosaicb_FIFO_buf72.extract<176, 191>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_12 = demosaicb_FIFO_buf72.extract<192, 207>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_13 = demosaicb_FIFO_buf72.extract<208, 223>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_14 = demosaicb_FIFO_buf72.extract<224, 239>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_15 = demosaicb_FIFO_buf72.extract<240, 255>();

	
  hw_uint<16 > demosaicb_FIFO_buf72_lane_0_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_0_pack, demosaicb_FIFO_buf72_lane_0);
  auto res_demosaic_update_0_sm95_15375 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_0_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_1_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_1_pack, demosaicb_FIFO_buf72_lane_1);
  auto res_demosaic_update_0_sm95_14373 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_1_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_2_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_2_pack, demosaicb_FIFO_buf72_lane_2);
  auto res_demosaic_update_0_sm95_13371 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_2_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_3_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_3_pack, demosaicb_FIFO_buf72_lane_3);
  auto res_demosaic_update_0_sm95_12369 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_3_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_4_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_4_pack, demosaicb_FIFO_buf72_lane_4);
  auto res_demosaic_update_0_sm95_11367 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_4_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_5_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_5_pack, demosaicb_FIFO_buf72_lane_5);
  auto res_demosaic_update_0_sm95_10365 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_5_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_6_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_6_pack, demosaicb_FIFO_buf72_lane_6);
  auto res_demosaic_update_0_sm95_9363 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_6_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_7_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_7_pack, demosaicb_FIFO_buf72_lane_7);
  auto res_demosaic_update_0_sm95_8361 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_7_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_8_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_8_pack, demosaicb_FIFO_buf72_lane_8);
  auto res_demosaic_update_0_sm95_7359 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_8_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_9_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_9_pack, demosaicb_FIFO_buf72_lane_9);
  auto res_demosaic_update_0_sm95_6357 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_9_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_10_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_10_pack, demosaicb_FIFO_buf72_lane_10);
  auto res_demosaic_update_0_sm95_5355 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_10_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_11_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_11_pack, demosaicb_FIFO_buf72_lane_11);
  auto res_demosaic_update_0_sm95_4353 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_11_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_12_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_12_pack, demosaicb_FIFO_buf72_lane_12);
  auto res_demosaic_update_0_sm95_3351 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_12_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_13_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_13_pack, demosaicb_FIFO_buf72_lane_13);
  auto res_demosaic_update_0_sm95_2349 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_13_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_14_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_14_pack, demosaicb_FIFO_buf72_lane_14);
  auto res_demosaic_update_0_sm95_1347 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_14_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_15_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_15_pack, demosaicb_FIFO_buf72_lane_15);
  auto res_demosaic_update_0_sm95_0345 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_15_pack);
  hw_uint<256 > return_value1196;
  set_at<0, 256, 16>(return_value1196, res_demosaic_update_0_sm95_15375);
  set_at<16, 256, 16>(return_value1196, res_demosaic_update_0_sm95_14373);
  set_at<32, 256, 16>(return_value1196, res_demosaic_update_0_sm95_13371);
  set_at<48, 256, 16>(return_value1196, res_demosaic_update_0_sm95_12369);
  set_at<64, 256, 16>(return_value1196, res_demosaic_update_0_sm95_11367);
  set_at<80, 256, 16>(return_value1196, res_demosaic_update_0_sm95_10365);
  set_at<96, 256, 16>(return_value1196, res_demosaic_update_0_sm95_9363);
  set_at<112, 256, 16>(return_value1196, res_demosaic_update_0_sm95_8361);
  set_at<128, 256, 16>(return_value1196, res_demosaic_update_0_sm95_7359);
  set_at<144, 256, 16>(return_value1196, res_demosaic_update_0_sm95_6357);
  set_at<160, 256, 16>(return_value1196, res_demosaic_update_0_sm95_5355);
  set_at<176, 256, 16>(return_value1196, res_demosaic_update_0_sm95_4353);
  set_at<192, 256, 16>(return_value1196, res_demosaic_update_0_sm95_3351);
  set_at<208, 256, 16>(return_value1196, res_demosaic_update_0_sm95_2349);
  set_at<224, 256, 16>(return_value1196, res_demosaic_update_0_sm95_1347);
  set_at<240, 256, 16>(return_value1196, res_demosaic_update_0_sm95_0345);
  return return_value1196;

}

hw_uint<256> demosaic_bxb_1_cu1198(hw_uint<16*48>& demosaic_FIFO_buf44) {
  hw_uint<16> demosaic_FIFO_buf44_lane_0 = demosaic_FIFO_buf44.extract<0, 15>();
  hw_uint<16> demosaic_FIFO_buf44_lane_1 = demosaic_FIFO_buf44.extract<16, 31>();
  hw_uint<16> demosaic_FIFO_buf44_lane_2 = demosaic_FIFO_buf44.extract<32, 47>();
  hw_uint<16> demosaic_FIFO_buf44_lane_3 = demosaic_FIFO_buf44.extract<48, 63>();
  hw_uint<16> demosaic_FIFO_buf44_lane_4 = demosaic_FIFO_buf44.extract<64, 79>();
  hw_uint<16> demosaic_FIFO_buf44_lane_5 = demosaic_FIFO_buf44.extract<80, 95>();
  hw_uint<16> demosaic_FIFO_buf44_lane_6 = demosaic_FIFO_buf44.extract<96, 111>();
  hw_uint<16> demosaic_FIFO_buf44_lane_7 = demosaic_FIFO_buf44.extract<112, 127>();
  hw_uint<16> demosaic_FIFO_buf44_lane_8 = demosaic_FIFO_buf44.extract<128, 143>();
  hw_uint<16> demosaic_FIFO_buf44_lane_9 = demosaic_FIFO_buf44.extract<144, 159>();
  hw_uint<16> demosaic_FIFO_buf44_lane_10 = demosaic_FIFO_buf44.extract<160, 175>();
  hw_uint<16> demosaic_FIFO_buf44_lane_11 = demosaic_FIFO_buf44.extract<176, 191>();
  hw_uint<16> demosaic_FIFO_buf44_lane_12 = demosaic_FIFO_buf44.extract<192, 207>();
  hw_uint<16> demosaic_FIFO_buf44_lane_13 = demosaic_FIFO_buf44.extract<208, 223>();
  hw_uint<16> demosaic_FIFO_buf44_lane_14 = demosaic_FIFO_buf44.extract<224, 239>();
  hw_uint<16> demosaic_FIFO_buf44_lane_15 = demosaic_FIFO_buf44.extract<240, 255>();
  hw_uint<16> demosaic_FIFO_buf44_lane_16 = demosaic_FIFO_buf44.extract<256, 271>();
  hw_uint<16> demosaic_FIFO_buf44_lane_17 = demosaic_FIFO_buf44.extract<272, 287>();
  hw_uint<16> demosaic_FIFO_buf44_lane_18 = demosaic_FIFO_buf44.extract<288, 303>();
  hw_uint<16> demosaic_FIFO_buf44_lane_19 = demosaic_FIFO_buf44.extract<304, 319>();
  hw_uint<16> demosaic_FIFO_buf44_lane_20 = demosaic_FIFO_buf44.extract<320, 335>();
  hw_uint<16> demosaic_FIFO_buf44_lane_21 = demosaic_FIFO_buf44.extract<336, 351>();
  hw_uint<16> demosaic_FIFO_buf44_lane_22 = demosaic_FIFO_buf44.extract<352, 367>();
  hw_uint<16> demosaic_FIFO_buf44_lane_23 = demosaic_FIFO_buf44.extract<368, 383>();
  hw_uint<16> demosaic_FIFO_buf44_lane_24 = demosaic_FIFO_buf44.extract<384, 399>();
  hw_uint<16> demosaic_FIFO_buf44_lane_25 = demosaic_FIFO_buf44.extract<400, 415>();
  hw_uint<16> demosaic_FIFO_buf44_lane_26 = demosaic_FIFO_buf44.extract<416, 431>();
  hw_uint<16> demosaic_FIFO_buf44_lane_27 = demosaic_FIFO_buf44.extract<432, 447>();
  hw_uint<16> demosaic_FIFO_buf44_lane_28 = demosaic_FIFO_buf44.extract<448, 463>();
  hw_uint<16> demosaic_FIFO_buf44_lane_29 = demosaic_FIFO_buf44.extract<464, 479>();
  hw_uint<16> demosaic_FIFO_buf44_lane_30 = demosaic_FIFO_buf44.extract<480, 495>();
  hw_uint<16> demosaic_FIFO_buf44_lane_31 = demosaic_FIFO_buf44.extract<496, 511>();
  hw_uint<16> demosaic_FIFO_buf44_lane_32 = demosaic_FIFO_buf44.extract<512, 527>();
  hw_uint<16> demosaic_FIFO_buf44_lane_33 = demosaic_FIFO_buf44.extract<528, 543>();
  hw_uint<16> demosaic_FIFO_buf44_lane_34 = demosaic_FIFO_buf44.extract<544, 559>();
  hw_uint<16> demosaic_FIFO_buf44_lane_35 = demosaic_FIFO_buf44.extract<560, 575>();
  hw_uint<16> demosaic_FIFO_buf44_lane_36 = demosaic_FIFO_buf44.extract<576, 591>();
  hw_uint<16> demosaic_FIFO_buf44_lane_37 = demosaic_FIFO_buf44.extract<592, 607>();
  hw_uint<16> demosaic_FIFO_buf44_lane_38 = demosaic_FIFO_buf44.extract<608, 623>();
  hw_uint<16> demosaic_FIFO_buf44_lane_39 = demosaic_FIFO_buf44.extract<624, 639>();
  hw_uint<16> demosaic_FIFO_buf44_lane_40 = demosaic_FIFO_buf44.extract<640, 655>();
  hw_uint<16> demosaic_FIFO_buf44_lane_41 = demosaic_FIFO_buf44.extract<656, 671>();
  hw_uint<16> demosaic_FIFO_buf44_lane_42 = demosaic_FIFO_buf44.extract<672, 687>();
  hw_uint<16> demosaic_FIFO_buf44_lane_43 = demosaic_FIFO_buf44.extract<688, 703>();
  hw_uint<16> demosaic_FIFO_buf44_lane_44 = demosaic_FIFO_buf44.extract<704, 719>();
  hw_uint<16> demosaic_FIFO_buf44_lane_45 = demosaic_FIFO_buf44.extract<720, 735>();
  hw_uint<16> demosaic_FIFO_buf44_lane_46 = demosaic_FIFO_buf44.extract<736, 751>();
  hw_uint<16> demosaic_FIFO_buf44_lane_47 = demosaic_FIFO_buf44.extract<752, 767>();

	
  hw_uint<48 > demosaic_FIFO_buf44_lane_2_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_2_pack, demosaic_FIFO_buf44_lane_0);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_2_pack, demosaic_FIFO_buf44_lane_1);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_2_pack, demosaic_FIFO_buf44_lane_2);
  auto res_demosaic_bxb_update_0_sm96_15407 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_2_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_5_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_5_pack, demosaic_FIFO_buf44_lane_3);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_5_pack, demosaic_FIFO_buf44_lane_4);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_5_pack, demosaic_FIFO_buf44_lane_5);
  auto res_demosaic_bxb_update_0_sm96_14405 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_5_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_8_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_8_pack, demosaic_FIFO_buf44_lane_6);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_8_pack, demosaic_FIFO_buf44_lane_7);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_8_pack, demosaic_FIFO_buf44_lane_8);
  auto res_demosaic_bxb_update_0_sm96_13403 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_8_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_11_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_11_pack, demosaic_FIFO_buf44_lane_9);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_11_pack, demosaic_FIFO_buf44_lane_10);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_11_pack, demosaic_FIFO_buf44_lane_11);
  auto res_demosaic_bxb_update_0_sm96_12401 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_11_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_14_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_14_pack, demosaic_FIFO_buf44_lane_12);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_14_pack, demosaic_FIFO_buf44_lane_13);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_14_pack, demosaic_FIFO_buf44_lane_14);
  auto res_demosaic_bxb_update_0_sm96_11399 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_14_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_17_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_17_pack, demosaic_FIFO_buf44_lane_15);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_17_pack, demosaic_FIFO_buf44_lane_16);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_17_pack, demosaic_FIFO_buf44_lane_17);
  auto res_demosaic_bxb_update_0_sm96_10397 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_17_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_20_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_20_pack, demosaic_FIFO_buf44_lane_18);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_20_pack, demosaic_FIFO_buf44_lane_19);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_20_pack, demosaic_FIFO_buf44_lane_20);
  auto res_demosaic_bxb_update_0_sm96_9395 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_20_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_23_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_23_pack, demosaic_FIFO_buf44_lane_21);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_23_pack, demosaic_FIFO_buf44_lane_22);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_23_pack, demosaic_FIFO_buf44_lane_23);
  auto res_demosaic_bxb_update_0_sm96_8393 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_23_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_26_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_26_pack, demosaic_FIFO_buf44_lane_24);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_26_pack, demosaic_FIFO_buf44_lane_25);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_26_pack, demosaic_FIFO_buf44_lane_26);
  auto res_demosaic_bxb_update_0_sm96_7391 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_26_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_29_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_29_pack, demosaic_FIFO_buf44_lane_27);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_29_pack, demosaic_FIFO_buf44_lane_28);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_29_pack, demosaic_FIFO_buf44_lane_29);
  auto res_demosaic_bxb_update_0_sm96_6389 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_29_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_32_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_32_pack, demosaic_FIFO_buf44_lane_30);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_32_pack, demosaic_FIFO_buf44_lane_31);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_32_pack, demosaic_FIFO_buf44_lane_32);
  auto res_demosaic_bxb_update_0_sm96_5387 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_32_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_35_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_35_pack, demosaic_FIFO_buf44_lane_33);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_35_pack, demosaic_FIFO_buf44_lane_34);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_35_pack, demosaic_FIFO_buf44_lane_35);
  auto res_demosaic_bxb_update_0_sm96_4385 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_35_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_38_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_38_pack, demosaic_FIFO_buf44_lane_36);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_38_pack, demosaic_FIFO_buf44_lane_37);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_38_pack, demosaic_FIFO_buf44_lane_38);
  auto res_demosaic_bxb_update_0_sm96_3383 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_38_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_41_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_41_pack, demosaic_FIFO_buf44_lane_39);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_41_pack, demosaic_FIFO_buf44_lane_40);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_41_pack, demosaic_FIFO_buf44_lane_41);
  auto res_demosaic_bxb_update_0_sm96_2381 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_41_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_44_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_44_pack, demosaic_FIFO_buf44_lane_42);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_44_pack, demosaic_FIFO_buf44_lane_43);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_44_pack, demosaic_FIFO_buf44_lane_44);
  auto res_demosaic_bxb_update_0_sm96_1379 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_44_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_47_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_47_pack, demosaic_FIFO_buf44_lane_45);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_47_pack, demosaic_FIFO_buf44_lane_46);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_47_pack, demosaic_FIFO_buf44_lane_47);
  auto res_demosaic_bxb_update_0_sm96_0377 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_47_pack);
  hw_uint<256 > return_value1199;
  set_at<0, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_15407);
  set_at<16, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_14405);
  set_at<32, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_13403);
  set_at<48, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_12401);
  set_at<64, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_11399);
  set_at<80, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_10397);
  set_at<96, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_9395);
  set_at<112, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_8393);
  set_at<128, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_7391);
  set_at<144, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_6389);
  set_at<160, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_5387);
  set_at<176, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_4385);
  set_at<192, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_3383);
  set_at<208, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_2381);
  set_at<224, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_1379);
  set_at<240, 256, 16>(return_value1199, res_demosaic_bxb_update_0_sm96_0377);
  return return_value1199;

}

hw_uint<256> demosaic_bx_1_cu1201(hw_uint<16*16>& demosaic_bxb_FIFO_buf56) {
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_0 = demosaic_bxb_FIFO_buf56.extract<0, 15>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_1 = demosaic_bxb_FIFO_buf56.extract<16, 31>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_2 = demosaic_bxb_FIFO_buf56.extract<32, 47>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_3 = demosaic_bxb_FIFO_buf56.extract<48, 63>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_4 = demosaic_bxb_FIFO_buf56.extract<64, 79>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_5 = demosaic_bxb_FIFO_buf56.extract<80, 95>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_6 = demosaic_bxb_FIFO_buf56.extract<96, 111>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_7 = demosaic_bxb_FIFO_buf56.extract<112, 127>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_8 = demosaic_bxb_FIFO_buf56.extract<128, 143>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_9 = demosaic_bxb_FIFO_buf56.extract<144, 159>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_10 = demosaic_bxb_FIFO_buf56.extract<160, 175>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_11 = demosaic_bxb_FIFO_buf56.extract<176, 191>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_12 = demosaic_bxb_FIFO_buf56.extract<192, 207>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_13 = demosaic_bxb_FIFO_buf56.extract<208, 223>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_14 = demosaic_bxb_FIFO_buf56.extract<224, 239>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_15 = demosaic_bxb_FIFO_buf56.extract<240, 255>();

	
  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_0_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_0_pack, demosaic_bxb_FIFO_buf56_lane_0);
  auto res_demosaic_bx_update_0_sm97_15439 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_0_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_1_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_1_pack, demosaic_bxb_FIFO_buf56_lane_1);
  auto res_demosaic_bx_update_0_sm97_14437 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_1_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_2_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_2_pack, demosaic_bxb_FIFO_buf56_lane_2);
  auto res_demosaic_bx_update_0_sm97_13435 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_2_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_3_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_3_pack, demosaic_bxb_FIFO_buf56_lane_3);
  auto res_demosaic_bx_update_0_sm97_12433 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_3_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_4_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_4_pack, demosaic_bxb_FIFO_buf56_lane_4);
  auto res_demosaic_bx_update_0_sm97_11431 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_4_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_5_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_5_pack, demosaic_bxb_FIFO_buf56_lane_5);
  auto res_demosaic_bx_update_0_sm97_10429 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_5_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_6_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_6_pack, demosaic_bxb_FIFO_buf56_lane_6);
  auto res_demosaic_bx_update_0_sm97_9427 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_6_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_7_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_7_pack, demosaic_bxb_FIFO_buf56_lane_7);
  auto res_demosaic_bx_update_0_sm97_8425 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_7_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_8_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_8_pack, demosaic_bxb_FIFO_buf56_lane_8);
  auto res_demosaic_bx_update_0_sm97_7423 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_8_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_9_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_9_pack, demosaic_bxb_FIFO_buf56_lane_9);
  auto res_demosaic_bx_update_0_sm97_6421 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_9_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_10_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_10_pack, demosaic_bxb_FIFO_buf56_lane_10);
  auto res_demosaic_bx_update_0_sm97_5419 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_10_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_11_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_11_pack, demosaic_bxb_FIFO_buf56_lane_11);
  auto res_demosaic_bx_update_0_sm97_4417 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_11_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_12_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_12_pack, demosaic_bxb_FIFO_buf56_lane_12);
  auto res_demosaic_bx_update_0_sm97_3415 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_12_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_13_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_13_pack, demosaic_bxb_FIFO_buf56_lane_13);
  auto res_demosaic_bx_update_0_sm97_2413 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_13_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_14_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_14_pack, demosaic_bxb_FIFO_buf56_lane_14);
  auto res_demosaic_bx_update_0_sm97_1411 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_14_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_15_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_15_pack, demosaic_bxb_FIFO_buf56_lane_15);
  auto res_demosaic_bx_update_0_sm97_0409 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_15_pack);
  hw_uint<256 > return_value1202;
  set_at<0, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_15439);
  set_at<16, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_14437);
  set_at<32, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_13435);
  set_at<48, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_12433);
  set_at<64, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_11431);
  set_at<80, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_10429);
  set_at<96, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_9427);
  set_at<112, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_8425);
  set_at<128, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_7423);
  set_at<144, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_6421);
  set_at<160, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_5419);
  set_at<176, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_4417);
  set_at<192, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_3415);
  set_at<208, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_2413);
  set_at<224, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_1411);
  set_at<240, 256, 16>(return_value1202, res_demosaic_bx_update_0_sm97_0409);
  return return_value1202;

}

hw_uint<256> demosaic_byb_1_cu1204(hw_uint<16*48>& demosaic_bx_FIFO_buf52) {
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_0 = demosaic_bx_FIFO_buf52.extract<0, 15>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_1 = demosaic_bx_FIFO_buf52.extract<16, 31>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_2 = demosaic_bx_FIFO_buf52.extract<32, 47>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_3 = demosaic_bx_FIFO_buf52.extract<48, 63>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_4 = demosaic_bx_FIFO_buf52.extract<64, 79>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_5 = demosaic_bx_FIFO_buf52.extract<80, 95>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_6 = demosaic_bx_FIFO_buf52.extract<96, 111>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_7 = demosaic_bx_FIFO_buf52.extract<112, 127>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_8 = demosaic_bx_FIFO_buf52.extract<128, 143>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_9 = demosaic_bx_FIFO_buf52.extract<144, 159>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_10 = demosaic_bx_FIFO_buf52.extract<160, 175>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_11 = demosaic_bx_FIFO_buf52.extract<176, 191>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_12 = demosaic_bx_FIFO_buf52.extract<192, 207>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_13 = demosaic_bx_FIFO_buf52.extract<208, 223>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_14 = demosaic_bx_FIFO_buf52.extract<224, 239>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_15 = demosaic_bx_FIFO_buf52.extract<240, 255>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_16 = demosaic_bx_FIFO_buf52.extract<256, 271>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_17 = demosaic_bx_FIFO_buf52.extract<272, 287>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_18 = demosaic_bx_FIFO_buf52.extract<288, 303>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_19 = demosaic_bx_FIFO_buf52.extract<304, 319>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_20 = demosaic_bx_FIFO_buf52.extract<320, 335>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_21 = demosaic_bx_FIFO_buf52.extract<336, 351>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_22 = demosaic_bx_FIFO_buf52.extract<352, 367>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_23 = demosaic_bx_FIFO_buf52.extract<368, 383>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_24 = demosaic_bx_FIFO_buf52.extract<384, 399>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_25 = demosaic_bx_FIFO_buf52.extract<400, 415>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_26 = demosaic_bx_FIFO_buf52.extract<416, 431>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_27 = demosaic_bx_FIFO_buf52.extract<432, 447>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_28 = demosaic_bx_FIFO_buf52.extract<448, 463>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_29 = demosaic_bx_FIFO_buf52.extract<464, 479>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_30 = demosaic_bx_FIFO_buf52.extract<480, 495>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_31 = demosaic_bx_FIFO_buf52.extract<496, 511>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_32 = demosaic_bx_FIFO_buf52.extract<512, 527>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_33 = demosaic_bx_FIFO_buf52.extract<528, 543>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_34 = demosaic_bx_FIFO_buf52.extract<544, 559>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_35 = demosaic_bx_FIFO_buf52.extract<560, 575>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_36 = demosaic_bx_FIFO_buf52.extract<576, 591>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_37 = demosaic_bx_FIFO_buf52.extract<592, 607>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_38 = demosaic_bx_FIFO_buf52.extract<608, 623>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_39 = demosaic_bx_FIFO_buf52.extract<624, 639>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_40 = demosaic_bx_FIFO_buf52.extract<640, 655>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_41 = demosaic_bx_FIFO_buf52.extract<656, 671>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_42 = demosaic_bx_FIFO_buf52.extract<672, 687>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_43 = demosaic_bx_FIFO_buf52.extract<688, 703>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_44 = demosaic_bx_FIFO_buf52.extract<704, 719>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_45 = demosaic_bx_FIFO_buf52.extract<720, 735>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_46 = demosaic_bx_FIFO_buf52.extract<736, 751>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_47 = demosaic_bx_FIFO_buf52.extract<752, 767>();

	
  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_2_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_2_pack, demosaic_bx_FIFO_buf52_lane_0);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_2_pack, demosaic_bx_FIFO_buf52_lane_1);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_2_pack, demosaic_bx_FIFO_buf52_lane_2);
  auto res_demosaic_byb_update_0_sm98_15471 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_2_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_5_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_5_pack, demosaic_bx_FIFO_buf52_lane_3);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_5_pack, demosaic_bx_FIFO_buf52_lane_4);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_5_pack, demosaic_bx_FIFO_buf52_lane_5);
  auto res_demosaic_byb_update_0_sm98_14469 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_5_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_8_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_8_pack, demosaic_bx_FIFO_buf52_lane_6);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_8_pack, demosaic_bx_FIFO_buf52_lane_7);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_8_pack, demosaic_bx_FIFO_buf52_lane_8);
  auto res_demosaic_byb_update_0_sm98_13467 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_8_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_11_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_11_pack, demosaic_bx_FIFO_buf52_lane_9);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_11_pack, demosaic_bx_FIFO_buf52_lane_10);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_11_pack, demosaic_bx_FIFO_buf52_lane_11);
  auto res_demosaic_byb_update_0_sm98_12465 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_11_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_14_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_14_pack, demosaic_bx_FIFO_buf52_lane_12);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_14_pack, demosaic_bx_FIFO_buf52_lane_13);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_14_pack, demosaic_bx_FIFO_buf52_lane_14);
  auto res_demosaic_byb_update_0_sm98_11463 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_14_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_17_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_17_pack, demosaic_bx_FIFO_buf52_lane_15);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_17_pack, demosaic_bx_FIFO_buf52_lane_16);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_17_pack, demosaic_bx_FIFO_buf52_lane_17);
  auto res_demosaic_byb_update_0_sm98_10461 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_17_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_20_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_20_pack, demosaic_bx_FIFO_buf52_lane_18);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_20_pack, demosaic_bx_FIFO_buf52_lane_19);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_20_pack, demosaic_bx_FIFO_buf52_lane_20);
  auto res_demosaic_byb_update_0_sm98_9459 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_20_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_23_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_23_pack, demosaic_bx_FIFO_buf52_lane_21);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_23_pack, demosaic_bx_FIFO_buf52_lane_22);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_23_pack, demosaic_bx_FIFO_buf52_lane_23);
  auto res_demosaic_byb_update_0_sm98_8457 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_23_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_26_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_26_pack, demosaic_bx_FIFO_buf52_lane_24);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_26_pack, demosaic_bx_FIFO_buf52_lane_25);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_26_pack, demosaic_bx_FIFO_buf52_lane_26);
  auto res_demosaic_byb_update_0_sm98_7455 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_26_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_29_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_29_pack, demosaic_bx_FIFO_buf52_lane_27);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_29_pack, demosaic_bx_FIFO_buf52_lane_28);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_29_pack, demosaic_bx_FIFO_buf52_lane_29);
  auto res_demosaic_byb_update_0_sm98_6453 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_29_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_32_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_32_pack, demosaic_bx_FIFO_buf52_lane_30);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_32_pack, demosaic_bx_FIFO_buf52_lane_31);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_32_pack, demosaic_bx_FIFO_buf52_lane_32);
  auto res_demosaic_byb_update_0_sm98_5451 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_32_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_35_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_35_pack, demosaic_bx_FIFO_buf52_lane_33);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_35_pack, demosaic_bx_FIFO_buf52_lane_34);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_35_pack, demosaic_bx_FIFO_buf52_lane_35);
  auto res_demosaic_byb_update_0_sm98_4449 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_35_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_38_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_38_pack, demosaic_bx_FIFO_buf52_lane_36);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_38_pack, demosaic_bx_FIFO_buf52_lane_37);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_38_pack, demosaic_bx_FIFO_buf52_lane_38);
  auto res_demosaic_byb_update_0_sm98_3447 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_38_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_41_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_41_pack, demosaic_bx_FIFO_buf52_lane_39);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_41_pack, demosaic_bx_FIFO_buf52_lane_40);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_41_pack, demosaic_bx_FIFO_buf52_lane_41);
  auto res_demosaic_byb_update_0_sm98_2445 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_41_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_44_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_44_pack, demosaic_bx_FIFO_buf52_lane_42);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_44_pack, demosaic_bx_FIFO_buf52_lane_43);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_44_pack, demosaic_bx_FIFO_buf52_lane_44);
  auto res_demosaic_byb_update_0_sm98_1443 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_44_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_47_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_47_pack, demosaic_bx_FIFO_buf52_lane_45);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_47_pack, demosaic_bx_FIFO_buf52_lane_46);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_47_pack, demosaic_bx_FIFO_buf52_lane_47);
  auto res_demosaic_byb_update_0_sm98_0441 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_47_pack);
  hw_uint<256 > return_value1205;
  set_at<0, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_15471);
  set_at<16, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_14469);
  set_at<32, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_13467);
  set_at<48, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_12465);
  set_at<64, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_11463);
  set_at<80, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_10461);
  set_at<96, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_9459);
  set_at<112, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_8457);
  set_at<128, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_7455);
  set_at<144, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_6453);
  set_at<160, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_5451);
  set_at<176, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_4449);
  set_at<192, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_3447);
  set_at<208, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_2445);
  set_at<224, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_1443);
  set_at<240, 256, 16>(return_value1205, res_demosaic_byb_update_0_sm98_0441);
  return return_value1205;

}

hw_uint<256> demosaic_by_1_cu1207(hw_uint<16*16>& demosaic_byb_FIFO_buf64) {
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_0 = demosaic_byb_FIFO_buf64.extract<0, 15>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_1 = demosaic_byb_FIFO_buf64.extract<16, 31>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_2 = demosaic_byb_FIFO_buf64.extract<32, 47>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_3 = demosaic_byb_FIFO_buf64.extract<48, 63>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_4 = demosaic_byb_FIFO_buf64.extract<64, 79>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_5 = demosaic_byb_FIFO_buf64.extract<80, 95>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_6 = demosaic_byb_FIFO_buf64.extract<96, 111>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_7 = demosaic_byb_FIFO_buf64.extract<112, 127>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_8 = demosaic_byb_FIFO_buf64.extract<128, 143>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_9 = demosaic_byb_FIFO_buf64.extract<144, 159>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_10 = demosaic_byb_FIFO_buf64.extract<160, 175>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_11 = demosaic_byb_FIFO_buf64.extract<176, 191>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_12 = demosaic_byb_FIFO_buf64.extract<192, 207>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_13 = demosaic_byb_FIFO_buf64.extract<208, 223>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_14 = demosaic_byb_FIFO_buf64.extract<224, 239>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_15 = demosaic_byb_FIFO_buf64.extract<240, 255>();

	
  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_0_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_0_pack, demosaic_byb_FIFO_buf64_lane_0);
  auto res_demosaic_by_update_0_sm99_15503 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_0_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_1_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_1_pack, demosaic_byb_FIFO_buf64_lane_1);
  auto res_demosaic_by_update_0_sm99_14501 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_1_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_2_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_2_pack, demosaic_byb_FIFO_buf64_lane_2);
  auto res_demosaic_by_update_0_sm99_13499 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_2_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_3_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_3_pack, demosaic_byb_FIFO_buf64_lane_3);
  auto res_demosaic_by_update_0_sm99_12497 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_3_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_4_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_4_pack, demosaic_byb_FIFO_buf64_lane_4);
  auto res_demosaic_by_update_0_sm99_11495 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_4_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_5_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_5_pack, demosaic_byb_FIFO_buf64_lane_5);
  auto res_demosaic_by_update_0_sm99_10493 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_5_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_6_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_6_pack, demosaic_byb_FIFO_buf64_lane_6);
  auto res_demosaic_by_update_0_sm99_9491 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_6_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_7_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_7_pack, demosaic_byb_FIFO_buf64_lane_7);
  auto res_demosaic_by_update_0_sm99_8489 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_7_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_8_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_8_pack, demosaic_byb_FIFO_buf64_lane_8);
  auto res_demosaic_by_update_0_sm99_7487 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_8_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_9_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_9_pack, demosaic_byb_FIFO_buf64_lane_9);
  auto res_demosaic_by_update_0_sm99_6485 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_9_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_10_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_10_pack, demosaic_byb_FIFO_buf64_lane_10);
  auto res_demosaic_by_update_0_sm99_5483 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_10_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_11_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_11_pack, demosaic_byb_FIFO_buf64_lane_11);
  auto res_demosaic_by_update_0_sm99_4481 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_11_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_12_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_12_pack, demosaic_byb_FIFO_buf64_lane_12);
  auto res_demosaic_by_update_0_sm99_3479 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_12_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_13_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_13_pack, demosaic_byb_FIFO_buf64_lane_13);
  auto res_demosaic_by_update_0_sm99_2477 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_13_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_14_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_14_pack, demosaic_byb_FIFO_buf64_lane_14);
  auto res_demosaic_by_update_0_sm99_1475 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_14_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_15_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_15_pack, demosaic_byb_FIFO_buf64_lane_15);
  auto res_demosaic_by_update_0_sm99_0473 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_15_pack);
  hw_uint<256 > return_value1208;
  set_at<0, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_15503);
  set_at<16, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_14501);
  set_at<32, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_13499);
  set_at<48, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_12497);
  set_at<64, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_11495);
  set_at<80, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_10493);
  set_at<96, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_9491);
  set_at<112, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_8489);
  set_at<128, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_7487);
  set_at<144, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_6485);
  set_at<160, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_5483);
  set_at<176, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_4481);
  set_at<192, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_3479);
  set_at<208, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_2477);
  set_at<224, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_1475);
  set_at<240, 256, 16>(return_value1208, res_demosaic_by_update_0_sm99_0473);
  return return_value1208;

}

hw_uint<256> demosaic_diff_1_cu1210(hw_uint<16*16>& demosaic_FIFO_buf48, hw_uint<16*16>& demosaic_by_FIFO_buf60) {
  hw_uint<16> demosaic_FIFO_buf48_lane_0 = demosaic_FIFO_buf48.extract<0, 15>();
  hw_uint<16> demosaic_FIFO_buf48_lane_1 = demosaic_FIFO_buf48.extract<16, 31>();
  hw_uint<16> demosaic_FIFO_buf48_lane_2 = demosaic_FIFO_buf48.extract<32, 47>();
  hw_uint<16> demosaic_FIFO_buf48_lane_3 = demosaic_FIFO_buf48.extract<48, 63>();
  hw_uint<16> demosaic_FIFO_buf48_lane_4 = demosaic_FIFO_buf48.extract<64, 79>();
  hw_uint<16> demosaic_FIFO_buf48_lane_5 = demosaic_FIFO_buf48.extract<80, 95>();
  hw_uint<16> demosaic_FIFO_buf48_lane_6 = demosaic_FIFO_buf48.extract<96, 111>();
  hw_uint<16> demosaic_FIFO_buf48_lane_7 = demosaic_FIFO_buf48.extract<112, 127>();
  hw_uint<16> demosaic_FIFO_buf48_lane_8 = demosaic_FIFO_buf48.extract<128, 143>();
  hw_uint<16> demosaic_FIFO_buf48_lane_9 = demosaic_FIFO_buf48.extract<144, 159>();
  hw_uint<16> demosaic_FIFO_buf48_lane_10 = demosaic_FIFO_buf48.extract<160, 175>();
  hw_uint<16> demosaic_FIFO_buf48_lane_11 = demosaic_FIFO_buf48.extract<176, 191>();
  hw_uint<16> demosaic_FIFO_buf48_lane_12 = demosaic_FIFO_buf48.extract<192, 207>();
  hw_uint<16> demosaic_FIFO_buf48_lane_13 = demosaic_FIFO_buf48.extract<208, 223>();
  hw_uint<16> demosaic_FIFO_buf48_lane_14 = demosaic_FIFO_buf48.extract<224, 239>();
  hw_uint<16> demosaic_FIFO_buf48_lane_15 = demosaic_FIFO_buf48.extract<240, 255>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_0 = demosaic_by_FIFO_buf60.extract<0, 15>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_1 = demosaic_by_FIFO_buf60.extract<16, 31>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_2 = demosaic_by_FIFO_buf60.extract<32, 47>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_3 = demosaic_by_FIFO_buf60.extract<48, 63>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_4 = demosaic_by_FIFO_buf60.extract<64, 79>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_5 = demosaic_by_FIFO_buf60.extract<80, 95>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_6 = demosaic_by_FIFO_buf60.extract<96, 111>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_7 = demosaic_by_FIFO_buf60.extract<112, 127>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_8 = demosaic_by_FIFO_buf60.extract<128, 143>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_9 = demosaic_by_FIFO_buf60.extract<144, 159>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_10 = demosaic_by_FIFO_buf60.extract<160, 175>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_11 = demosaic_by_FIFO_buf60.extract<176, 191>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_12 = demosaic_by_FIFO_buf60.extract<192, 207>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_13 = demosaic_by_FIFO_buf60.extract<208, 223>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_14 = demosaic_by_FIFO_buf60.extract<224, 239>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_15 = demosaic_by_FIFO_buf60.extract<240, 255>();

	
  hw_uint<16 > demosaic_FIFO_buf48_lane_0_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_0_pack, demosaic_FIFO_buf48_lane_0);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_0_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_0_pack, demosaic_by_FIFO_buf60_lane_0);
  auto res_demosaic_diff_update_0_sm100_15535 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_0_pack, demosaic_by_FIFO_buf60_lane_0_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_1_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_1_pack, demosaic_FIFO_buf48_lane_1);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_1_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_1_pack, demosaic_by_FIFO_buf60_lane_1);
  auto res_demosaic_diff_update_0_sm100_14533 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_1_pack, demosaic_by_FIFO_buf60_lane_1_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_2_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_2_pack, demosaic_FIFO_buf48_lane_2);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_2_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_2_pack, demosaic_by_FIFO_buf60_lane_2);
  auto res_demosaic_diff_update_0_sm100_13531 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_2_pack, demosaic_by_FIFO_buf60_lane_2_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_3_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_3_pack, demosaic_FIFO_buf48_lane_3);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_3_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_3_pack, demosaic_by_FIFO_buf60_lane_3);
  auto res_demosaic_diff_update_0_sm100_12529 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_3_pack, demosaic_by_FIFO_buf60_lane_3_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_4_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_4_pack, demosaic_FIFO_buf48_lane_4);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_4_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_4_pack, demosaic_by_FIFO_buf60_lane_4);
  auto res_demosaic_diff_update_0_sm100_11527 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_4_pack, demosaic_by_FIFO_buf60_lane_4_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_5_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_5_pack, demosaic_FIFO_buf48_lane_5);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_5_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_5_pack, demosaic_by_FIFO_buf60_lane_5);
  auto res_demosaic_diff_update_0_sm100_10525 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_5_pack, demosaic_by_FIFO_buf60_lane_5_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_6_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_6_pack, demosaic_FIFO_buf48_lane_6);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_6_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_6_pack, demosaic_by_FIFO_buf60_lane_6);
  auto res_demosaic_diff_update_0_sm100_9523 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_6_pack, demosaic_by_FIFO_buf60_lane_6_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_7_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_7_pack, demosaic_FIFO_buf48_lane_7);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_7_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_7_pack, demosaic_by_FIFO_buf60_lane_7);
  auto res_demosaic_diff_update_0_sm100_8521 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_7_pack, demosaic_by_FIFO_buf60_lane_7_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_8_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_8_pack, demosaic_FIFO_buf48_lane_8);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_8_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_8_pack, demosaic_by_FIFO_buf60_lane_8);
  auto res_demosaic_diff_update_0_sm100_7519 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_8_pack, demosaic_by_FIFO_buf60_lane_8_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_9_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_9_pack, demosaic_FIFO_buf48_lane_9);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_9_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_9_pack, demosaic_by_FIFO_buf60_lane_9);
  auto res_demosaic_diff_update_0_sm100_6517 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_9_pack, demosaic_by_FIFO_buf60_lane_9_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_10_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_10_pack, demosaic_FIFO_buf48_lane_10);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_10_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_10_pack, demosaic_by_FIFO_buf60_lane_10);
  auto res_demosaic_diff_update_0_sm100_5515 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_10_pack, demosaic_by_FIFO_buf60_lane_10_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_11_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_11_pack, demosaic_FIFO_buf48_lane_11);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_11_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_11_pack, demosaic_by_FIFO_buf60_lane_11);
  auto res_demosaic_diff_update_0_sm100_4513 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_11_pack, demosaic_by_FIFO_buf60_lane_11_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_12_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_12_pack, demosaic_FIFO_buf48_lane_12);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_12_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_12_pack, demosaic_by_FIFO_buf60_lane_12);
  auto res_demosaic_diff_update_0_sm100_3511 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_12_pack, demosaic_by_FIFO_buf60_lane_12_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_13_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_13_pack, demosaic_FIFO_buf48_lane_13);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_13_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_13_pack, demosaic_by_FIFO_buf60_lane_13);
  auto res_demosaic_diff_update_0_sm100_2509 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_13_pack, demosaic_by_FIFO_buf60_lane_13_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_14_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_14_pack, demosaic_FIFO_buf48_lane_14);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_14_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_14_pack, demosaic_by_FIFO_buf60_lane_14);
  auto res_demosaic_diff_update_0_sm100_1507 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_14_pack, demosaic_by_FIFO_buf60_lane_14_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_15_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_15_pack, demosaic_FIFO_buf48_lane_15);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_15_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_15_pack, demosaic_by_FIFO_buf60_lane_15);
  auto res_demosaic_diff_update_0_sm100_0505 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_15_pack, demosaic_by_FIFO_buf60_lane_15_pack);
  hw_uint<256 > return_value1211;
  set_at<0, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_15535);
  set_at<16, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_14533);
  set_at<32, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_13531);
  set_at<48, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_12529);
  set_at<64, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_11527);
  set_at<80, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_10525);
  set_at<96, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_9523);
  set_at<112, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_8521);
  set_at<128, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_7519);
  set_at<144, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_6517);
  set_at<160, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_5515);
  set_at<176, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_4513);
  set_at<192, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_3511);
  set_at<208, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_2509);
  set_at<224, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_1507);
  set_at<240, 256, 16>(return_value1211, res_demosaic_diff_update_0_sm100_0505);
  return return_value1211;

}

hw_uint<256> cpfc_16_1_cu1213(hw_uint<16*16>& demosaic_diff_FIFO_buf68) {
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_0 = demosaic_diff_FIFO_buf68.extract<0, 15>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_1 = demosaic_diff_FIFO_buf68.extract<16, 31>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_2 = demosaic_diff_FIFO_buf68.extract<32, 47>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_3 = demosaic_diff_FIFO_buf68.extract<48, 63>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_4 = demosaic_diff_FIFO_buf68.extract<64, 79>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_5 = demosaic_diff_FIFO_buf68.extract<80, 95>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_6 = demosaic_diff_FIFO_buf68.extract<96, 111>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_7 = demosaic_diff_FIFO_buf68.extract<112, 127>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_8 = demosaic_diff_FIFO_buf68.extract<128, 143>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_9 = demosaic_diff_FIFO_buf68.extract<144, 159>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_10 = demosaic_diff_FIFO_buf68.extract<160, 175>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_11 = demosaic_diff_FIFO_buf68.extract<176, 191>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_12 = demosaic_diff_FIFO_buf68.extract<192, 207>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_13 = demosaic_diff_FIFO_buf68.extract<208, 223>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_14 = demosaic_diff_FIFO_buf68.extract<224, 239>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_15 = demosaic_diff_FIFO_buf68.extract<240, 255>();

	
  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_0_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_0_pack, demosaic_diff_FIFO_buf68_lane_0);
  auto res_cpfc_16_update_0_sm101_15567 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_0_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_1_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_1_pack, demosaic_diff_FIFO_buf68_lane_1);
  auto res_cpfc_16_update_0_sm101_14565 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_1_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_2_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_2_pack, demosaic_diff_FIFO_buf68_lane_2);
  auto res_cpfc_16_update_0_sm101_13563 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_2_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_3_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_3_pack, demosaic_diff_FIFO_buf68_lane_3);
  auto res_cpfc_16_update_0_sm101_12561 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_3_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_4_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_4_pack, demosaic_diff_FIFO_buf68_lane_4);
  auto res_cpfc_16_update_0_sm101_11559 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_4_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_5_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_5_pack, demosaic_diff_FIFO_buf68_lane_5);
  auto res_cpfc_16_update_0_sm101_10557 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_5_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_6_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_6_pack, demosaic_diff_FIFO_buf68_lane_6);
  auto res_cpfc_16_update_0_sm101_9555 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_6_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_7_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_7_pack, demosaic_diff_FIFO_buf68_lane_7);
  auto res_cpfc_16_update_0_sm101_8553 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_7_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_8_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_8_pack, demosaic_diff_FIFO_buf68_lane_8);
  auto res_cpfc_16_update_0_sm101_7551 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_8_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_9_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_9_pack, demosaic_diff_FIFO_buf68_lane_9);
  auto res_cpfc_16_update_0_sm101_6549 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_9_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_10_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_10_pack, demosaic_diff_FIFO_buf68_lane_10);
  auto res_cpfc_16_update_0_sm101_5547 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_10_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_11_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_11_pack, demosaic_diff_FIFO_buf68_lane_11);
  auto res_cpfc_16_update_0_sm101_4545 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_11_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_12_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_12_pack, demosaic_diff_FIFO_buf68_lane_12);
  auto res_cpfc_16_update_0_sm101_3543 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_12_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_13_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_13_pack, demosaic_diff_FIFO_buf68_lane_13);
  auto res_cpfc_16_update_0_sm101_2541 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_13_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_14_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_14_pack, demosaic_diff_FIFO_buf68_lane_14);
  auto res_cpfc_16_update_0_sm101_1539 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_14_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_15_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_15_pack, demosaic_diff_FIFO_buf68_lane_15);
  auto res_cpfc_16_update_0_sm101_0537 = cpfc_16_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_15_pack);
  hw_uint<256 > return_value1214;
  set_at<0, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_15567);
  set_at<16, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_14565);
  set_at<32, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_13563);
  set_at<48, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_12561);
  set_at<64, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_11559);
  set_at<80, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_10557);
  set_at<96, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_9555);
  set_at<112, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_8553);
  set_at<128, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_7551);
  set_at<144, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_6549);
  set_at<160, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_5547);
  set_at<176, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_4545);
  set_at<192, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_3543);
  set_at<208, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_2541);
  set_at<224, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_1539);
  set_at<240, 256, 16>(return_value1214, res_cpfc_16_update_0_sm101_0537);
  return return_value1214;

}

hw_uint<256> demosaic_by_ld17_cu1216(hw_uint<16*16>& demosaic_by) {
  return demosaic_by;
}

hw_uint<256> denoise_ld33_cu1218(hw_uint<16*16>& denoise) {
  return denoise;
}

hw_uint<256> denoiseb_ld37_cu1220(hw_uint<16*16>& denoiseb) {
  return denoiseb;
}

hw_uint<256> demosaic_to_gp_30_ld45_cu1222(hw_uint<16*16>& demosaic_to_gp_30) {
  return demosaic_to_gp_30;
}

hw_uint<256> demosaic_ld1_cu1224(hw_uint<16*16>& demosaic) {
  return demosaic;
}

hw_uint<256> demosaic_ld5_cu1226(hw_uint<16*16>& demosaic) {
  return demosaic;
}

hw_uint<256> demosaic_bx_ld9_cu1228(hw_uint<16*16>& demosaic_bx) {
  return demosaic_bx;
}

hw_uint<256> demosaic_byb_ld21_cu1230(hw_uint<16*16>& demosaic_byb) {
  return demosaic_byb;
}

hw_uint<256> raw_ld41_cu1232(hw_uint<16*16>& raw) {
  return raw;
}

hw_uint<256> demosaic_to_gp_64_ld49_cu1234(hw_uint<16*16>& demosaic_to_gp_64) {
  return demosaic_to_gp_64;
}

hw_uint<256> demosaic_bx_to_gp_58_ld53_cu1236(hw_uint<16*16>& demosaic_bx_to_gp_58) {
  return demosaic_bx_to_gp_58;
}

hw_uint<256> demosaic_byb_to_gp_420_ld65_cu1238(hw_uint<16*16>& demosaic_byb_to_gp_420) {
  return demosaic_byb_to_gp_420;
}

hw_uint<256> demosaic_diff_to_gp_024_ld69_cu1240(hw_uint<16*16>& demosaic_diff_to_gp_024) {
  return demosaic_diff_to_gp_024;
}

hw_uint<256> demosaicb_to_gp_128_ld73_cu1242(hw_uint<16*16>& demosaicb_to_gp_128) {
  return demosaicb_to_gp_128;
}

hw_uint<256> denoiseb_to_gp_836_ld81_cu1244(hw_uint<16*16>& denoiseb_to_gp_836) {
  return denoiseb_to_gp_836;
}

hw_uint<256> demosaic_bxb_to_gp_212_ld57_cu1246(hw_uint<16*16>& demosaic_bxb_to_gp_212) {
  return demosaic_bxb_to_gp_212;
}

hw_uint<256> demosaic_by_to_gp_616_ld61_cu1248(hw_uint<16*16>& demosaic_by_to_gp_616) {
  return demosaic_by_to_gp_616;
}

hw_uint<256> denoise_to_gp_732_ld77_cu1250(hw_uint<16*16>& denoise_to_gp_732) {
  return denoise_to_gp_732;
}

hw_uint<256> raw_to_gp_940_ld85_cu1252(hw_uint<16*16>& raw_to_gp_940) {
  return raw_to_gp_940;
}

