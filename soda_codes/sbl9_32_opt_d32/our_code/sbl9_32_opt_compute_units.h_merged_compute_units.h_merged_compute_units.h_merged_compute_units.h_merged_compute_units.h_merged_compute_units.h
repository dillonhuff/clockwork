#include "sbl9_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> img_to_gp_10_ld5_cu812(hw_uint<16*32>& img_to_gp_10) {
  return img_to_gp_10;
}

hw_uint<512> mag_x_ld17_cu814(hw_uint<16*32>& mag_x) {
  return mag_x;
}

hw_uint<512> mag_y_to_gp_324_ld29_cu816(hw_uint<16*32>& mag_y_to_gp_324) {
  return mag_y_to_gp_324;
}

hw_uint<512> img_ld9_cu818(hw_uint<16*32>& img) {
  return img;
}

hw_uint<512> img_to_gp_28_ld13_cu820(hw_uint<16*32>& img_to_gp_28) {
  return img_to_gp_28;
}

hw_uint<512> mag_y_ld25_cu822(hw_uint<16*32>& mag_y) {
  return mag_y;
}

hw_uint<512> mag_x_1_cu824(hw_uint<16*192>& img_FIFO_buf4) {
  hw_uint<16> img_FIFO_buf4_lane_0 = img_FIFO_buf4.extract<0, 15>();
  hw_uint<16> img_FIFO_buf4_lane_1 = img_FIFO_buf4.extract<16, 31>();
  hw_uint<16> img_FIFO_buf4_lane_2 = img_FIFO_buf4.extract<32, 47>();
  hw_uint<16> img_FIFO_buf4_lane_3 = img_FIFO_buf4.extract<48, 63>();
  hw_uint<16> img_FIFO_buf4_lane_4 = img_FIFO_buf4.extract<64, 79>();
  hw_uint<16> img_FIFO_buf4_lane_5 = img_FIFO_buf4.extract<80, 95>();
  hw_uint<16> img_FIFO_buf4_lane_6 = img_FIFO_buf4.extract<96, 111>();
  hw_uint<16> img_FIFO_buf4_lane_7 = img_FIFO_buf4.extract<112, 127>();
  hw_uint<16> img_FIFO_buf4_lane_8 = img_FIFO_buf4.extract<128, 143>();
  hw_uint<16> img_FIFO_buf4_lane_9 = img_FIFO_buf4.extract<144, 159>();
  hw_uint<16> img_FIFO_buf4_lane_10 = img_FIFO_buf4.extract<160, 175>();
  hw_uint<16> img_FIFO_buf4_lane_11 = img_FIFO_buf4.extract<176, 191>();
  hw_uint<16> img_FIFO_buf4_lane_12 = img_FIFO_buf4.extract<192, 207>();
  hw_uint<16> img_FIFO_buf4_lane_13 = img_FIFO_buf4.extract<208, 223>();
  hw_uint<16> img_FIFO_buf4_lane_14 = img_FIFO_buf4.extract<224, 239>();
  hw_uint<16> img_FIFO_buf4_lane_15 = img_FIFO_buf4.extract<240, 255>();
  hw_uint<16> img_FIFO_buf4_lane_16 = img_FIFO_buf4.extract<256, 271>();
  hw_uint<16> img_FIFO_buf4_lane_17 = img_FIFO_buf4.extract<272, 287>();
  hw_uint<16> img_FIFO_buf4_lane_18 = img_FIFO_buf4.extract<288, 303>();
  hw_uint<16> img_FIFO_buf4_lane_19 = img_FIFO_buf4.extract<304, 319>();
  hw_uint<16> img_FIFO_buf4_lane_20 = img_FIFO_buf4.extract<320, 335>();
  hw_uint<16> img_FIFO_buf4_lane_21 = img_FIFO_buf4.extract<336, 351>();
  hw_uint<16> img_FIFO_buf4_lane_22 = img_FIFO_buf4.extract<352, 367>();
  hw_uint<16> img_FIFO_buf4_lane_23 = img_FIFO_buf4.extract<368, 383>();
  hw_uint<16> img_FIFO_buf4_lane_24 = img_FIFO_buf4.extract<384, 399>();
  hw_uint<16> img_FIFO_buf4_lane_25 = img_FIFO_buf4.extract<400, 415>();
  hw_uint<16> img_FIFO_buf4_lane_26 = img_FIFO_buf4.extract<416, 431>();
  hw_uint<16> img_FIFO_buf4_lane_27 = img_FIFO_buf4.extract<432, 447>();
  hw_uint<16> img_FIFO_buf4_lane_28 = img_FIFO_buf4.extract<448, 463>();
  hw_uint<16> img_FIFO_buf4_lane_29 = img_FIFO_buf4.extract<464, 479>();
  hw_uint<16> img_FIFO_buf4_lane_30 = img_FIFO_buf4.extract<480, 495>();
  hw_uint<16> img_FIFO_buf4_lane_31 = img_FIFO_buf4.extract<496, 511>();
  hw_uint<16> img_FIFO_buf4_lane_32 = img_FIFO_buf4.extract<512, 527>();
  hw_uint<16> img_FIFO_buf4_lane_33 = img_FIFO_buf4.extract<528, 543>();
  hw_uint<16> img_FIFO_buf4_lane_34 = img_FIFO_buf4.extract<544, 559>();
  hw_uint<16> img_FIFO_buf4_lane_35 = img_FIFO_buf4.extract<560, 575>();
  hw_uint<16> img_FIFO_buf4_lane_36 = img_FIFO_buf4.extract<576, 591>();
  hw_uint<16> img_FIFO_buf4_lane_37 = img_FIFO_buf4.extract<592, 607>();
  hw_uint<16> img_FIFO_buf4_lane_38 = img_FIFO_buf4.extract<608, 623>();
  hw_uint<16> img_FIFO_buf4_lane_39 = img_FIFO_buf4.extract<624, 639>();
  hw_uint<16> img_FIFO_buf4_lane_40 = img_FIFO_buf4.extract<640, 655>();
  hw_uint<16> img_FIFO_buf4_lane_41 = img_FIFO_buf4.extract<656, 671>();
  hw_uint<16> img_FIFO_buf4_lane_42 = img_FIFO_buf4.extract<672, 687>();
  hw_uint<16> img_FIFO_buf4_lane_43 = img_FIFO_buf4.extract<688, 703>();
  hw_uint<16> img_FIFO_buf4_lane_44 = img_FIFO_buf4.extract<704, 719>();
  hw_uint<16> img_FIFO_buf4_lane_45 = img_FIFO_buf4.extract<720, 735>();
  hw_uint<16> img_FIFO_buf4_lane_46 = img_FIFO_buf4.extract<736, 751>();
  hw_uint<16> img_FIFO_buf4_lane_47 = img_FIFO_buf4.extract<752, 767>();
  hw_uint<16> img_FIFO_buf4_lane_48 = img_FIFO_buf4.extract<768, 783>();
  hw_uint<16> img_FIFO_buf4_lane_49 = img_FIFO_buf4.extract<784, 799>();
  hw_uint<16> img_FIFO_buf4_lane_50 = img_FIFO_buf4.extract<800, 815>();
  hw_uint<16> img_FIFO_buf4_lane_51 = img_FIFO_buf4.extract<816, 831>();
  hw_uint<16> img_FIFO_buf4_lane_52 = img_FIFO_buf4.extract<832, 847>();
  hw_uint<16> img_FIFO_buf4_lane_53 = img_FIFO_buf4.extract<848, 863>();
  hw_uint<16> img_FIFO_buf4_lane_54 = img_FIFO_buf4.extract<864, 879>();
  hw_uint<16> img_FIFO_buf4_lane_55 = img_FIFO_buf4.extract<880, 895>();
  hw_uint<16> img_FIFO_buf4_lane_56 = img_FIFO_buf4.extract<896, 911>();
  hw_uint<16> img_FIFO_buf4_lane_57 = img_FIFO_buf4.extract<912, 927>();
  hw_uint<16> img_FIFO_buf4_lane_58 = img_FIFO_buf4.extract<928, 943>();
  hw_uint<16> img_FIFO_buf4_lane_59 = img_FIFO_buf4.extract<944, 959>();
  hw_uint<16> img_FIFO_buf4_lane_60 = img_FIFO_buf4.extract<960, 975>();
  hw_uint<16> img_FIFO_buf4_lane_61 = img_FIFO_buf4.extract<976, 991>();
  hw_uint<16> img_FIFO_buf4_lane_62 = img_FIFO_buf4.extract<992, 1007>();
  hw_uint<16> img_FIFO_buf4_lane_63 = img_FIFO_buf4.extract<1008, 1023>();
  hw_uint<16> img_FIFO_buf4_lane_64 = img_FIFO_buf4.extract<1024, 1039>();
  hw_uint<16> img_FIFO_buf4_lane_65 = img_FIFO_buf4.extract<1040, 1055>();
  hw_uint<16> img_FIFO_buf4_lane_66 = img_FIFO_buf4.extract<1056, 1071>();
  hw_uint<16> img_FIFO_buf4_lane_67 = img_FIFO_buf4.extract<1072, 1087>();
  hw_uint<16> img_FIFO_buf4_lane_68 = img_FIFO_buf4.extract<1088, 1103>();
  hw_uint<16> img_FIFO_buf4_lane_69 = img_FIFO_buf4.extract<1104, 1119>();
  hw_uint<16> img_FIFO_buf4_lane_70 = img_FIFO_buf4.extract<1120, 1135>();
  hw_uint<16> img_FIFO_buf4_lane_71 = img_FIFO_buf4.extract<1136, 1151>();
  hw_uint<16> img_FIFO_buf4_lane_72 = img_FIFO_buf4.extract<1152, 1167>();
  hw_uint<16> img_FIFO_buf4_lane_73 = img_FIFO_buf4.extract<1168, 1183>();
  hw_uint<16> img_FIFO_buf4_lane_74 = img_FIFO_buf4.extract<1184, 1199>();
  hw_uint<16> img_FIFO_buf4_lane_75 = img_FIFO_buf4.extract<1200, 1215>();
  hw_uint<16> img_FIFO_buf4_lane_76 = img_FIFO_buf4.extract<1216, 1231>();
  hw_uint<16> img_FIFO_buf4_lane_77 = img_FIFO_buf4.extract<1232, 1247>();
  hw_uint<16> img_FIFO_buf4_lane_78 = img_FIFO_buf4.extract<1248, 1263>();
  hw_uint<16> img_FIFO_buf4_lane_79 = img_FIFO_buf4.extract<1264, 1279>();
  hw_uint<16> img_FIFO_buf4_lane_80 = img_FIFO_buf4.extract<1280, 1295>();
  hw_uint<16> img_FIFO_buf4_lane_81 = img_FIFO_buf4.extract<1296, 1311>();
  hw_uint<16> img_FIFO_buf4_lane_82 = img_FIFO_buf4.extract<1312, 1327>();
  hw_uint<16> img_FIFO_buf4_lane_83 = img_FIFO_buf4.extract<1328, 1343>();
  hw_uint<16> img_FIFO_buf4_lane_84 = img_FIFO_buf4.extract<1344, 1359>();
  hw_uint<16> img_FIFO_buf4_lane_85 = img_FIFO_buf4.extract<1360, 1375>();
  hw_uint<16> img_FIFO_buf4_lane_86 = img_FIFO_buf4.extract<1376, 1391>();
  hw_uint<16> img_FIFO_buf4_lane_87 = img_FIFO_buf4.extract<1392, 1407>();
  hw_uint<16> img_FIFO_buf4_lane_88 = img_FIFO_buf4.extract<1408, 1423>();
  hw_uint<16> img_FIFO_buf4_lane_89 = img_FIFO_buf4.extract<1424, 1439>();
  hw_uint<16> img_FIFO_buf4_lane_90 = img_FIFO_buf4.extract<1440, 1455>();
  hw_uint<16> img_FIFO_buf4_lane_91 = img_FIFO_buf4.extract<1456, 1471>();
  hw_uint<16> img_FIFO_buf4_lane_92 = img_FIFO_buf4.extract<1472, 1487>();
  hw_uint<16> img_FIFO_buf4_lane_93 = img_FIFO_buf4.extract<1488, 1503>();
  hw_uint<16> img_FIFO_buf4_lane_94 = img_FIFO_buf4.extract<1504, 1519>();
  hw_uint<16> img_FIFO_buf4_lane_95 = img_FIFO_buf4.extract<1520, 1535>();
  hw_uint<16> img_FIFO_buf4_lane_96 = img_FIFO_buf4.extract<1536, 1551>();
  hw_uint<16> img_FIFO_buf4_lane_97 = img_FIFO_buf4.extract<1552, 1567>();
  hw_uint<16> img_FIFO_buf4_lane_98 = img_FIFO_buf4.extract<1568, 1583>();
  hw_uint<16> img_FIFO_buf4_lane_99 = img_FIFO_buf4.extract<1584, 1599>();
  hw_uint<16> img_FIFO_buf4_lane_100 = img_FIFO_buf4.extract<1600, 1615>();
  hw_uint<16> img_FIFO_buf4_lane_101 = img_FIFO_buf4.extract<1616, 1631>();
  hw_uint<16> img_FIFO_buf4_lane_102 = img_FIFO_buf4.extract<1632, 1647>();
  hw_uint<16> img_FIFO_buf4_lane_103 = img_FIFO_buf4.extract<1648, 1663>();
  hw_uint<16> img_FIFO_buf4_lane_104 = img_FIFO_buf4.extract<1664, 1679>();
  hw_uint<16> img_FIFO_buf4_lane_105 = img_FIFO_buf4.extract<1680, 1695>();
  hw_uint<16> img_FIFO_buf4_lane_106 = img_FIFO_buf4.extract<1696, 1711>();
  hw_uint<16> img_FIFO_buf4_lane_107 = img_FIFO_buf4.extract<1712, 1727>();
  hw_uint<16> img_FIFO_buf4_lane_108 = img_FIFO_buf4.extract<1728, 1743>();
  hw_uint<16> img_FIFO_buf4_lane_109 = img_FIFO_buf4.extract<1744, 1759>();
  hw_uint<16> img_FIFO_buf4_lane_110 = img_FIFO_buf4.extract<1760, 1775>();
  hw_uint<16> img_FIFO_buf4_lane_111 = img_FIFO_buf4.extract<1776, 1791>();
  hw_uint<16> img_FIFO_buf4_lane_112 = img_FIFO_buf4.extract<1792, 1807>();
  hw_uint<16> img_FIFO_buf4_lane_113 = img_FIFO_buf4.extract<1808, 1823>();
  hw_uint<16> img_FIFO_buf4_lane_114 = img_FIFO_buf4.extract<1824, 1839>();
  hw_uint<16> img_FIFO_buf4_lane_115 = img_FIFO_buf4.extract<1840, 1855>();
  hw_uint<16> img_FIFO_buf4_lane_116 = img_FIFO_buf4.extract<1856, 1871>();
  hw_uint<16> img_FIFO_buf4_lane_117 = img_FIFO_buf4.extract<1872, 1887>();
  hw_uint<16> img_FIFO_buf4_lane_118 = img_FIFO_buf4.extract<1888, 1903>();
  hw_uint<16> img_FIFO_buf4_lane_119 = img_FIFO_buf4.extract<1904, 1919>();
  hw_uint<16> img_FIFO_buf4_lane_120 = img_FIFO_buf4.extract<1920, 1935>();
  hw_uint<16> img_FIFO_buf4_lane_121 = img_FIFO_buf4.extract<1936, 1951>();
  hw_uint<16> img_FIFO_buf4_lane_122 = img_FIFO_buf4.extract<1952, 1967>();
  hw_uint<16> img_FIFO_buf4_lane_123 = img_FIFO_buf4.extract<1968, 1983>();
  hw_uint<16> img_FIFO_buf4_lane_124 = img_FIFO_buf4.extract<1984, 1999>();
  hw_uint<16> img_FIFO_buf4_lane_125 = img_FIFO_buf4.extract<2000, 2015>();
  hw_uint<16> img_FIFO_buf4_lane_126 = img_FIFO_buf4.extract<2016, 2031>();
  hw_uint<16> img_FIFO_buf4_lane_127 = img_FIFO_buf4.extract<2032, 2047>();
  hw_uint<16> img_FIFO_buf4_lane_128 = img_FIFO_buf4.extract<2048, 2063>();
  hw_uint<16> img_FIFO_buf4_lane_129 = img_FIFO_buf4.extract<2064, 2079>();
  hw_uint<16> img_FIFO_buf4_lane_130 = img_FIFO_buf4.extract<2080, 2095>();
  hw_uint<16> img_FIFO_buf4_lane_131 = img_FIFO_buf4.extract<2096, 2111>();
  hw_uint<16> img_FIFO_buf4_lane_132 = img_FIFO_buf4.extract<2112, 2127>();
  hw_uint<16> img_FIFO_buf4_lane_133 = img_FIFO_buf4.extract<2128, 2143>();
  hw_uint<16> img_FIFO_buf4_lane_134 = img_FIFO_buf4.extract<2144, 2159>();
  hw_uint<16> img_FIFO_buf4_lane_135 = img_FIFO_buf4.extract<2160, 2175>();
  hw_uint<16> img_FIFO_buf4_lane_136 = img_FIFO_buf4.extract<2176, 2191>();
  hw_uint<16> img_FIFO_buf4_lane_137 = img_FIFO_buf4.extract<2192, 2207>();
  hw_uint<16> img_FIFO_buf4_lane_138 = img_FIFO_buf4.extract<2208, 2223>();
  hw_uint<16> img_FIFO_buf4_lane_139 = img_FIFO_buf4.extract<2224, 2239>();
  hw_uint<16> img_FIFO_buf4_lane_140 = img_FIFO_buf4.extract<2240, 2255>();
  hw_uint<16> img_FIFO_buf4_lane_141 = img_FIFO_buf4.extract<2256, 2271>();
  hw_uint<16> img_FIFO_buf4_lane_142 = img_FIFO_buf4.extract<2272, 2287>();
  hw_uint<16> img_FIFO_buf4_lane_143 = img_FIFO_buf4.extract<2288, 2303>();
  hw_uint<16> img_FIFO_buf4_lane_144 = img_FIFO_buf4.extract<2304, 2319>();
  hw_uint<16> img_FIFO_buf4_lane_145 = img_FIFO_buf4.extract<2320, 2335>();
  hw_uint<16> img_FIFO_buf4_lane_146 = img_FIFO_buf4.extract<2336, 2351>();
  hw_uint<16> img_FIFO_buf4_lane_147 = img_FIFO_buf4.extract<2352, 2367>();
  hw_uint<16> img_FIFO_buf4_lane_148 = img_FIFO_buf4.extract<2368, 2383>();
  hw_uint<16> img_FIFO_buf4_lane_149 = img_FIFO_buf4.extract<2384, 2399>();
  hw_uint<16> img_FIFO_buf4_lane_150 = img_FIFO_buf4.extract<2400, 2415>();
  hw_uint<16> img_FIFO_buf4_lane_151 = img_FIFO_buf4.extract<2416, 2431>();
  hw_uint<16> img_FIFO_buf4_lane_152 = img_FIFO_buf4.extract<2432, 2447>();
  hw_uint<16> img_FIFO_buf4_lane_153 = img_FIFO_buf4.extract<2448, 2463>();
  hw_uint<16> img_FIFO_buf4_lane_154 = img_FIFO_buf4.extract<2464, 2479>();
  hw_uint<16> img_FIFO_buf4_lane_155 = img_FIFO_buf4.extract<2480, 2495>();
  hw_uint<16> img_FIFO_buf4_lane_156 = img_FIFO_buf4.extract<2496, 2511>();
  hw_uint<16> img_FIFO_buf4_lane_157 = img_FIFO_buf4.extract<2512, 2527>();
  hw_uint<16> img_FIFO_buf4_lane_158 = img_FIFO_buf4.extract<2528, 2543>();
  hw_uint<16> img_FIFO_buf4_lane_159 = img_FIFO_buf4.extract<2544, 2559>();
  hw_uint<16> img_FIFO_buf4_lane_160 = img_FIFO_buf4.extract<2560, 2575>();
  hw_uint<16> img_FIFO_buf4_lane_161 = img_FIFO_buf4.extract<2576, 2591>();
  hw_uint<16> img_FIFO_buf4_lane_162 = img_FIFO_buf4.extract<2592, 2607>();
  hw_uint<16> img_FIFO_buf4_lane_163 = img_FIFO_buf4.extract<2608, 2623>();
  hw_uint<16> img_FIFO_buf4_lane_164 = img_FIFO_buf4.extract<2624, 2639>();
  hw_uint<16> img_FIFO_buf4_lane_165 = img_FIFO_buf4.extract<2640, 2655>();
  hw_uint<16> img_FIFO_buf4_lane_166 = img_FIFO_buf4.extract<2656, 2671>();
  hw_uint<16> img_FIFO_buf4_lane_167 = img_FIFO_buf4.extract<2672, 2687>();
  hw_uint<16> img_FIFO_buf4_lane_168 = img_FIFO_buf4.extract<2688, 2703>();
  hw_uint<16> img_FIFO_buf4_lane_169 = img_FIFO_buf4.extract<2704, 2719>();
  hw_uint<16> img_FIFO_buf4_lane_170 = img_FIFO_buf4.extract<2720, 2735>();
  hw_uint<16> img_FIFO_buf4_lane_171 = img_FIFO_buf4.extract<2736, 2751>();
  hw_uint<16> img_FIFO_buf4_lane_172 = img_FIFO_buf4.extract<2752, 2767>();
  hw_uint<16> img_FIFO_buf4_lane_173 = img_FIFO_buf4.extract<2768, 2783>();
  hw_uint<16> img_FIFO_buf4_lane_174 = img_FIFO_buf4.extract<2784, 2799>();
  hw_uint<16> img_FIFO_buf4_lane_175 = img_FIFO_buf4.extract<2800, 2815>();
  hw_uint<16> img_FIFO_buf4_lane_176 = img_FIFO_buf4.extract<2816, 2831>();
  hw_uint<16> img_FIFO_buf4_lane_177 = img_FIFO_buf4.extract<2832, 2847>();
  hw_uint<16> img_FIFO_buf4_lane_178 = img_FIFO_buf4.extract<2848, 2863>();
  hw_uint<16> img_FIFO_buf4_lane_179 = img_FIFO_buf4.extract<2864, 2879>();
  hw_uint<16> img_FIFO_buf4_lane_180 = img_FIFO_buf4.extract<2880, 2895>();
  hw_uint<16> img_FIFO_buf4_lane_181 = img_FIFO_buf4.extract<2896, 2911>();
  hw_uint<16> img_FIFO_buf4_lane_182 = img_FIFO_buf4.extract<2912, 2927>();
  hw_uint<16> img_FIFO_buf4_lane_183 = img_FIFO_buf4.extract<2928, 2943>();
  hw_uint<16> img_FIFO_buf4_lane_184 = img_FIFO_buf4.extract<2944, 2959>();
  hw_uint<16> img_FIFO_buf4_lane_185 = img_FIFO_buf4.extract<2960, 2975>();
  hw_uint<16> img_FIFO_buf4_lane_186 = img_FIFO_buf4.extract<2976, 2991>();
  hw_uint<16> img_FIFO_buf4_lane_187 = img_FIFO_buf4.extract<2992, 3007>();
  hw_uint<16> img_FIFO_buf4_lane_188 = img_FIFO_buf4.extract<3008, 3023>();
  hw_uint<16> img_FIFO_buf4_lane_189 = img_FIFO_buf4.extract<3024, 3039>();
  hw_uint<16> img_FIFO_buf4_lane_190 = img_FIFO_buf4.extract<3040, 3055>();
  hw_uint<16> img_FIFO_buf4_lane_191 = img_FIFO_buf4.extract<3056, 3071>();

	
  hw_uint<96 > img_FIFO_buf4_lane_5_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_0);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_1);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_2);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_3);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_4);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_5_pack, img_FIFO_buf4_lane_5);
  auto res_mag_x_update_0_sm38_0300 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_5_pack);

  hw_uint<96 > img_FIFO_buf4_lane_11_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_6);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_7);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_8);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_9);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_10);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_11_pack, img_FIFO_buf4_lane_11);
  auto res_mag_x_update_0_sm38_1302 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_11_pack);

  hw_uint<96 > img_FIFO_buf4_lane_17_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_12);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_13);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_14);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_15);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_16);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_17_pack, img_FIFO_buf4_lane_17);
  auto res_mag_x_update_0_sm38_2304 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_17_pack);

  hw_uint<96 > img_FIFO_buf4_lane_23_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_18);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_19);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_20);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_21);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_22);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_23_pack, img_FIFO_buf4_lane_23);
  auto res_mag_x_update_0_sm38_3306 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_23_pack);

  hw_uint<96 > img_FIFO_buf4_lane_29_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_24);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_25);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_26);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_27);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_28);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_29_pack, img_FIFO_buf4_lane_29);
  auto res_mag_x_update_0_sm38_4308 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_29_pack);

  hw_uint<96 > img_FIFO_buf4_lane_35_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_30);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_31);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_32);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_33);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_34);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_35_pack, img_FIFO_buf4_lane_35);
  auto res_mag_x_update_0_sm38_5310 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_35_pack);

  hw_uint<96 > img_FIFO_buf4_lane_41_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_36);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_37);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_38);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_39);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_40);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_41_pack, img_FIFO_buf4_lane_41);
  auto res_mag_x_update_0_sm38_6312 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_41_pack);

  hw_uint<96 > img_FIFO_buf4_lane_47_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_42);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_43);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_44);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_45);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_46);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_47_pack, img_FIFO_buf4_lane_47);
  auto res_mag_x_update_0_sm38_7314 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_47_pack);

  hw_uint<96 > img_FIFO_buf4_lane_53_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_48);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_49);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_50);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_51);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_52);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_53_pack, img_FIFO_buf4_lane_53);
  auto res_mag_x_update_0_sm38_8316 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_53_pack);

  hw_uint<96 > img_FIFO_buf4_lane_59_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_54);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_55);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_56);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_57);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_58);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_59_pack, img_FIFO_buf4_lane_59);
  auto res_mag_x_update_0_sm38_9318 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_59_pack);

  hw_uint<96 > img_FIFO_buf4_lane_65_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_60);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_61);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_62);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_63);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_64);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_65_pack, img_FIFO_buf4_lane_65);
  auto res_mag_x_update_0_sm38_10320 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_65_pack);

  hw_uint<96 > img_FIFO_buf4_lane_71_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_66);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_67);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_68);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_69);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_70);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_71_pack, img_FIFO_buf4_lane_71);
  auto res_mag_x_update_0_sm38_11322 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_71_pack);

  hw_uint<96 > img_FIFO_buf4_lane_77_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_72);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_73);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_74);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_75);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_76);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_77_pack, img_FIFO_buf4_lane_77);
  auto res_mag_x_update_0_sm38_12324 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_77_pack);

  hw_uint<96 > img_FIFO_buf4_lane_83_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_78);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_79);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_80);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_81);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_82);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_83_pack, img_FIFO_buf4_lane_83);
  auto res_mag_x_update_0_sm38_13326 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_83_pack);

  hw_uint<96 > img_FIFO_buf4_lane_89_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_84);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_85);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_86);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_87);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_88);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_89_pack, img_FIFO_buf4_lane_89);
  auto res_mag_x_update_0_sm38_14328 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_89_pack);

  hw_uint<96 > img_FIFO_buf4_lane_95_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_90);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_91);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_92);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_93);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_94);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_95_pack, img_FIFO_buf4_lane_95);
  auto res_mag_x_update_0_sm38_15330 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_95_pack);

  hw_uint<96 > img_FIFO_buf4_lane_101_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_101_pack, img_FIFO_buf4_lane_96);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_101_pack, img_FIFO_buf4_lane_97);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_101_pack, img_FIFO_buf4_lane_98);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_101_pack, img_FIFO_buf4_lane_99);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_101_pack, img_FIFO_buf4_lane_100);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_101_pack, img_FIFO_buf4_lane_101);
  auto res_mag_x_update_0_sm38_16332 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_101_pack);

  hw_uint<96 > img_FIFO_buf4_lane_107_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_107_pack, img_FIFO_buf4_lane_102);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_107_pack, img_FIFO_buf4_lane_103);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_107_pack, img_FIFO_buf4_lane_104);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_107_pack, img_FIFO_buf4_lane_105);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_107_pack, img_FIFO_buf4_lane_106);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_107_pack, img_FIFO_buf4_lane_107);
  auto res_mag_x_update_0_sm38_17334 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_107_pack);

  hw_uint<96 > img_FIFO_buf4_lane_113_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_113_pack, img_FIFO_buf4_lane_108);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_113_pack, img_FIFO_buf4_lane_109);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_113_pack, img_FIFO_buf4_lane_110);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_113_pack, img_FIFO_buf4_lane_111);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_113_pack, img_FIFO_buf4_lane_112);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_113_pack, img_FIFO_buf4_lane_113);
  auto res_mag_x_update_0_sm38_18336 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_113_pack);

  hw_uint<96 > img_FIFO_buf4_lane_119_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_119_pack, img_FIFO_buf4_lane_114);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_119_pack, img_FIFO_buf4_lane_115);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_119_pack, img_FIFO_buf4_lane_116);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_119_pack, img_FIFO_buf4_lane_117);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_119_pack, img_FIFO_buf4_lane_118);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_119_pack, img_FIFO_buf4_lane_119);
  auto res_mag_x_update_0_sm38_19338 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_119_pack);

  hw_uint<96 > img_FIFO_buf4_lane_125_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_125_pack, img_FIFO_buf4_lane_120);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_125_pack, img_FIFO_buf4_lane_121);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_125_pack, img_FIFO_buf4_lane_122);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_125_pack, img_FIFO_buf4_lane_123);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_125_pack, img_FIFO_buf4_lane_124);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_125_pack, img_FIFO_buf4_lane_125);
  auto res_mag_x_update_0_sm38_20340 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_125_pack);

  hw_uint<96 > img_FIFO_buf4_lane_131_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_131_pack, img_FIFO_buf4_lane_126);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_131_pack, img_FIFO_buf4_lane_127);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_131_pack, img_FIFO_buf4_lane_128);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_131_pack, img_FIFO_buf4_lane_129);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_131_pack, img_FIFO_buf4_lane_130);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_131_pack, img_FIFO_buf4_lane_131);
  auto res_mag_x_update_0_sm38_21342 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_131_pack);

  hw_uint<96 > img_FIFO_buf4_lane_137_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_137_pack, img_FIFO_buf4_lane_132);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_137_pack, img_FIFO_buf4_lane_133);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_137_pack, img_FIFO_buf4_lane_134);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_137_pack, img_FIFO_buf4_lane_135);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_137_pack, img_FIFO_buf4_lane_136);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_137_pack, img_FIFO_buf4_lane_137);
  auto res_mag_x_update_0_sm38_22344 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_137_pack);

  hw_uint<96 > img_FIFO_buf4_lane_143_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_143_pack, img_FIFO_buf4_lane_138);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_143_pack, img_FIFO_buf4_lane_139);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_143_pack, img_FIFO_buf4_lane_140);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_143_pack, img_FIFO_buf4_lane_141);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_143_pack, img_FIFO_buf4_lane_142);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_143_pack, img_FIFO_buf4_lane_143);
  auto res_mag_x_update_0_sm38_23346 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_143_pack);

  hw_uint<96 > img_FIFO_buf4_lane_149_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_149_pack, img_FIFO_buf4_lane_144);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_149_pack, img_FIFO_buf4_lane_145);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_149_pack, img_FIFO_buf4_lane_146);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_149_pack, img_FIFO_buf4_lane_147);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_149_pack, img_FIFO_buf4_lane_148);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_149_pack, img_FIFO_buf4_lane_149);
  auto res_mag_x_update_0_sm38_24348 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_149_pack);

  hw_uint<96 > img_FIFO_buf4_lane_155_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_155_pack, img_FIFO_buf4_lane_150);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_155_pack, img_FIFO_buf4_lane_151);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_155_pack, img_FIFO_buf4_lane_152);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_155_pack, img_FIFO_buf4_lane_153);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_155_pack, img_FIFO_buf4_lane_154);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_155_pack, img_FIFO_buf4_lane_155);
  auto res_mag_x_update_0_sm38_25350 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_155_pack);

  hw_uint<96 > img_FIFO_buf4_lane_161_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_161_pack, img_FIFO_buf4_lane_156);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_161_pack, img_FIFO_buf4_lane_157);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_161_pack, img_FIFO_buf4_lane_158);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_161_pack, img_FIFO_buf4_lane_159);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_161_pack, img_FIFO_buf4_lane_160);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_161_pack, img_FIFO_buf4_lane_161);
  auto res_mag_x_update_0_sm38_26352 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_161_pack);

  hw_uint<96 > img_FIFO_buf4_lane_167_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_167_pack, img_FIFO_buf4_lane_162);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_167_pack, img_FIFO_buf4_lane_163);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_167_pack, img_FIFO_buf4_lane_164);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_167_pack, img_FIFO_buf4_lane_165);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_167_pack, img_FIFO_buf4_lane_166);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_167_pack, img_FIFO_buf4_lane_167);
  auto res_mag_x_update_0_sm38_27354 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_167_pack);

  hw_uint<96 > img_FIFO_buf4_lane_173_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_173_pack, img_FIFO_buf4_lane_168);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_173_pack, img_FIFO_buf4_lane_169);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_173_pack, img_FIFO_buf4_lane_170);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_173_pack, img_FIFO_buf4_lane_171);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_173_pack, img_FIFO_buf4_lane_172);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_173_pack, img_FIFO_buf4_lane_173);
  auto res_mag_x_update_0_sm38_28356 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_173_pack);

  hw_uint<96 > img_FIFO_buf4_lane_179_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_179_pack, img_FIFO_buf4_lane_174);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_179_pack, img_FIFO_buf4_lane_175);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_179_pack, img_FIFO_buf4_lane_176);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_179_pack, img_FIFO_buf4_lane_177);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_179_pack, img_FIFO_buf4_lane_178);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_179_pack, img_FIFO_buf4_lane_179);
  auto res_mag_x_update_0_sm38_29358 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_179_pack);

  hw_uint<96 > img_FIFO_buf4_lane_185_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_185_pack, img_FIFO_buf4_lane_180);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_185_pack, img_FIFO_buf4_lane_181);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_185_pack, img_FIFO_buf4_lane_182);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_185_pack, img_FIFO_buf4_lane_183);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_185_pack, img_FIFO_buf4_lane_184);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_185_pack, img_FIFO_buf4_lane_185);
  auto res_mag_x_update_0_sm38_30360 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_185_pack);

  hw_uint<96 > img_FIFO_buf4_lane_191_pack;
  set_at<0, 96, 16>(img_FIFO_buf4_lane_191_pack, img_FIFO_buf4_lane_186);
  set_at<16, 96, 16>(img_FIFO_buf4_lane_191_pack, img_FIFO_buf4_lane_187);
  set_at<32, 96, 16>(img_FIFO_buf4_lane_191_pack, img_FIFO_buf4_lane_188);
  set_at<48, 96, 16>(img_FIFO_buf4_lane_191_pack, img_FIFO_buf4_lane_189);
  set_at<64, 96, 16>(img_FIFO_buf4_lane_191_pack, img_FIFO_buf4_lane_190);
  set_at<80, 96, 16>(img_FIFO_buf4_lane_191_pack, img_FIFO_buf4_lane_191);
  auto res_mag_x_update_0_sm38_31362 = mag_x_generated_compute_unrolled_1(img_FIFO_buf4_lane_191_pack);
  hw_uint<512 > return_value825;
  set_at<0, 512, 16>(return_value825, res_mag_x_update_0_sm38_0300);
  set_at<16, 512, 16>(return_value825, res_mag_x_update_0_sm38_1302);
  set_at<32, 512, 16>(return_value825, res_mag_x_update_0_sm38_2304);
  set_at<48, 512, 16>(return_value825, res_mag_x_update_0_sm38_3306);
  set_at<64, 512, 16>(return_value825, res_mag_x_update_0_sm38_4308);
  set_at<80, 512, 16>(return_value825, res_mag_x_update_0_sm38_5310);
  set_at<96, 512, 16>(return_value825, res_mag_x_update_0_sm38_6312);
  set_at<112, 512, 16>(return_value825, res_mag_x_update_0_sm38_7314);
  set_at<128, 512, 16>(return_value825, res_mag_x_update_0_sm38_8316);
  set_at<144, 512, 16>(return_value825, res_mag_x_update_0_sm38_9318);
  set_at<160, 512, 16>(return_value825, res_mag_x_update_0_sm38_10320);
  set_at<176, 512, 16>(return_value825, res_mag_x_update_0_sm38_11322);
  set_at<192, 512, 16>(return_value825, res_mag_x_update_0_sm38_12324);
  set_at<208, 512, 16>(return_value825, res_mag_x_update_0_sm38_13326);
  set_at<224, 512, 16>(return_value825, res_mag_x_update_0_sm38_14328);
  set_at<240, 512, 16>(return_value825, res_mag_x_update_0_sm38_15330);
  set_at<256, 512, 16>(return_value825, res_mag_x_update_0_sm38_16332);
  set_at<272, 512, 16>(return_value825, res_mag_x_update_0_sm38_17334);
  set_at<288, 512, 16>(return_value825, res_mag_x_update_0_sm38_18336);
  set_at<304, 512, 16>(return_value825, res_mag_x_update_0_sm38_19338);
  set_at<320, 512, 16>(return_value825, res_mag_x_update_0_sm38_20340);
  set_at<336, 512, 16>(return_value825, res_mag_x_update_0_sm38_21342);
  set_at<352, 512, 16>(return_value825, res_mag_x_update_0_sm38_22344);
  set_at<368, 512, 16>(return_value825, res_mag_x_update_0_sm38_23346);
  set_at<384, 512, 16>(return_value825, res_mag_x_update_0_sm38_24348);
  set_at<400, 512, 16>(return_value825, res_mag_x_update_0_sm38_25350);
  set_at<416, 512, 16>(return_value825, res_mag_x_update_0_sm38_26352);
  set_at<432, 512, 16>(return_value825, res_mag_x_update_0_sm38_27354);
  set_at<448, 512, 16>(return_value825, res_mag_x_update_0_sm38_28356);
  set_at<464, 512, 16>(return_value825, res_mag_x_update_0_sm38_29358);
  set_at<480, 512, 16>(return_value825, res_mag_x_update_0_sm38_30360);
  set_at<496, 512, 16>(return_value825, res_mag_x_update_0_sm38_31362);
  return return_value825;

}

hw_uint<512> img_1_cu827(hw_uint<16*32>& off_chip_img) {
  hw_uint<16> off_chip_img_lane_0 = off_chip_img.extract<0, 15>();
  hw_uint<16> off_chip_img_lane_1 = off_chip_img.extract<16, 31>();
  hw_uint<16> off_chip_img_lane_2 = off_chip_img.extract<32, 47>();
  hw_uint<16> off_chip_img_lane_3 = off_chip_img.extract<48, 63>();
  hw_uint<16> off_chip_img_lane_4 = off_chip_img.extract<64, 79>();
  hw_uint<16> off_chip_img_lane_5 = off_chip_img.extract<80, 95>();
  hw_uint<16> off_chip_img_lane_6 = off_chip_img.extract<96, 111>();
  hw_uint<16> off_chip_img_lane_7 = off_chip_img.extract<112, 127>();
  hw_uint<16> off_chip_img_lane_8 = off_chip_img.extract<128, 143>();
  hw_uint<16> off_chip_img_lane_9 = off_chip_img.extract<144, 159>();
  hw_uint<16> off_chip_img_lane_10 = off_chip_img.extract<160, 175>();
  hw_uint<16> off_chip_img_lane_11 = off_chip_img.extract<176, 191>();
  hw_uint<16> off_chip_img_lane_12 = off_chip_img.extract<192, 207>();
  hw_uint<16> off_chip_img_lane_13 = off_chip_img.extract<208, 223>();
  hw_uint<16> off_chip_img_lane_14 = off_chip_img.extract<224, 239>();
  hw_uint<16> off_chip_img_lane_15 = off_chip_img.extract<240, 255>();
  hw_uint<16> off_chip_img_lane_16 = off_chip_img.extract<256, 271>();
  hw_uint<16> off_chip_img_lane_17 = off_chip_img.extract<272, 287>();
  hw_uint<16> off_chip_img_lane_18 = off_chip_img.extract<288, 303>();
  hw_uint<16> off_chip_img_lane_19 = off_chip_img.extract<304, 319>();
  hw_uint<16> off_chip_img_lane_20 = off_chip_img.extract<320, 335>();
  hw_uint<16> off_chip_img_lane_21 = off_chip_img.extract<336, 351>();
  hw_uint<16> off_chip_img_lane_22 = off_chip_img.extract<352, 367>();
  hw_uint<16> off_chip_img_lane_23 = off_chip_img.extract<368, 383>();
  hw_uint<16> off_chip_img_lane_24 = off_chip_img.extract<384, 399>();
  hw_uint<16> off_chip_img_lane_25 = off_chip_img.extract<400, 415>();
  hw_uint<16> off_chip_img_lane_26 = off_chip_img.extract<416, 431>();
  hw_uint<16> off_chip_img_lane_27 = off_chip_img.extract<432, 447>();
  hw_uint<16> off_chip_img_lane_28 = off_chip_img.extract<448, 463>();
  hw_uint<16> off_chip_img_lane_29 = off_chip_img.extract<464, 479>();
  hw_uint<16> off_chip_img_lane_30 = off_chip_img.extract<480, 495>();
  hw_uint<16> off_chip_img_lane_31 = off_chip_img.extract<496, 511>();

	
  hw_uint<16 > off_chip_img_lane_0_pack;
  set_at<0, 16, 16>(off_chip_img_lane_0_pack, off_chip_img_lane_0);
  auto res_img_update_0_sm39_0364 = img_generated_compute_unrolled_1(off_chip_img_lane_0_pack);

  hw_uint<16 > off_chip_img_lane_1_pack;
  set_at<0, 16, 16>(off_chip_img_lane_1_pack, off_chip_img_lane_1);
  auto res_img_update_0_sm39_1366 = img_generated_compute_unrolled_1(off_chip_img_lane_1_pack);

  hw_uint<16 > off_chip_img_lane_2_pack;
  set_at<0, 16, 16>(off_chip_img_lane_2_pack, off_chip_img_lane_2);
  auto res_img_update_0_sm39_2368 = img_generated_compute_unrolled_1(off_chip_img_lane_2_pack);

  hw_uint<16 > off_chip_img_lane_3_pack;
  set_at<0, 16, 16>(off_chip_img_lane_3_pack, off_chip_img_lane_3);
  auto res_img_update_0_sm39_3370 = img_generated_compute_unrolled_1(off_chip_img_lane_3_pack);

  hw_uint<16 > off_chip_img_lane_4_pack;
  set_at<0, 16, 16>(off_chip_img_lane_4_pack, off_chip_img_lane_4);
  auto res_img_update_0_sm39_4372 = img_generated_compute_unrolled_1(off_chip_img_lane_4_pack);

  hw_uint<16 > off_chip_img_lane_5_pack;
  set_at<0, 16, 16>(off_chip_img_lane_5_pack, off_chip_img_lane_5);
  auto res_img_update_0_sm39_5374 = img_generated_compute_unrolled_1(off_chip_img_lane_5_pack);

  hw_uint<16 > off_chip_img_lane_6_pack;
  set_at<0, 16, 16>(off_chip_img_lane_6_pack, off_chip_img_lane_6);
  auto res_img_update_0_sm39_6376 = img_generated_compute_unrolled_1(off_chip_img_lane_6_pack);

  hw_uint<16 > off_chip_img_lane_7_pack;
  set_at<0, 16, 16>(off_chip_img_lane_7_pack, off_chip_img_lane_7);
  auto res_img_update_0_sm39_7378 = img_generated_compute_unrolled_1(off_chip_img_lane_7_pack);

  hw_uint<16 > off_chip_img_lane_8_pack;
  set_at<0, 16, 16>(off_chip_img_lane_8_pack, off_chip_img_lane_8);
  auto res_img_update_0_sm39_8380 = img_generated_compute_unrolled_1(off_chip_img_lane_8_pack);

  hw_uint<16 > off_chip_img_lane_9_pack;
  set_at<0, 16, 16>(off_chip_img_lane_9_pack, off_chip_img_lane_9);
  auto res_img_update_0_sm39_9382 = img_generated_compute_unrolled_1(off_chip_img_lane_9_pack);

  hw_uint<16 > off_chip_img_lane_10_pack;
  set_at<0, 16, 16>(off_chip_img_lane_10_pack, off_chip_img_lane_10);
  auto res_img_update_0_sm39_10384 = img_generated_compute_unrolled_1(off_chip_img_lane_10_pack);

  hw_uint<16 > off_chip_img_lane_11_pack;
  set_at<0, 16, 16>(off_chip_img_lane_11_pack, off_chip_img_lane_11);
  auto res_img_update_0_sm39_11386 = img_generated_compute_unrolled_1(off_chip_img_lane_11_pack);

  hw_uint<16 > off_chip_img_lane_12_pack;
  set_at<0, 16, 16>(off_chip_img_lane_12_pack, off_chip_img_lane_12);
  auto res_img_update_0_sm39_12388 = img_generated_compute_unrolled_1(off_chip_img_lane_12_pack);

  hw_uint<16 > off_chip_img_lane_13_pack;
  set_at<0, 16, 16>(off_chip_img_lane_13_pack, off_chip_img_lane_13);
  auto res_img_update_0_sm39_13390 = img_generated_compute_unrolled_1(off_chip_img_lane_13_pack);

  hw_uint<16 > off_chip_img_lane_14_pack;
  set_at<0, 16, 16>(off_chip_img_lane_14_pack, off_chip_img_lane_14);
  auto res_img_update_0_sm39_14392 = img_generated_compute_unrolled_1(off_chip_img_lane_14_pack);

  hw_uint<16 > off_chip_img_lane_15_pack;
  set_at<0, 16, 16>(off_chip_img_lane_15_pack, off_chip_img_lane_15);
  auto res_img_update_0_sm39_15394 = img_generated_compute_unrolled_1(off_chip_img_lane_15_pack);

  hw_uint<16 > off_chip_img_lane_16_pack;
  set_at<0, 16, 16>(off_chip_img_lane_16_pack, off_chip_img_lane_16);
  auto res_img_update_0_sm39_16396 = img_generated_compute_unrolled_1(off_chip_img_lane_16_pack);

  hw_uint<16 > off_chip_img_lane_17_pack;
  set_at<0, 16, 16>(off_chip_img_lane_17_pack, off_chip_img_lane_17);
  auto res_img_update_0_sm39_17398 = img_generated_compute_unrolled_1(off_chip_img_lane_17_pack);

  hw_uint<16 > off_chip_img_lane_18_pack;
  set_at<0, 16, 16>(off_chip_img_lane_18_pack, off_chip_img_lane_18);
  auto res_img_update_0_sm39_18400 = img_generated_compute_unrolled_1(off_chip_img_lane_18_pack);

  hw_uint<16 > off_chip_img_lane_19_pack;
  set_at<0, 16, 16>(off_chip_img_lane_19_pack, off_chip_img_lane_19);
  auto res_img_update_0_sm39_19402 = img_generated_compute_unrolled_1(off_chip_img_lane_19_pack);

  hw_uint<16 > off_chip_img_lane_20_pack;
  set_at<0, 16, 16>(off_chip_img_lane_20_pack, off_chip_img_lane_20);
  auto res_img_update_0_sm39_20404 = img_generated_compute_unrolled_1(off_chip_img_lane_20_pack);

  hw_uint<16 > off_chip_img_lane_21_pack;
  set_at<0, 16, 16>(off_chip_img_lane_21_pack, off_chip_img_lane_21);
  auto res_img_update_0_sm39_21406 = img_generated_compute_unrolled_1(off_chip_img_lane_21_pack);

  hw_uint<16 > off_chip_img_lane_22_pack;
  set_at<0, 16, 16>(off_chip_img_lane_22_pack, off_chip_img_lane_22);
  auto res_img_update_0_sm39_22408 = img_generated_compute_unrolled_1(off_chip_img_lane_22_pack);

  hw_uint<16 > off_chip_img_lane_23_pack;
  set_at<0, 16, 16>(off_chip_img_lane_23_pack, off_chip_img_lane_23);
  auto res_img_update_0_sm39_23410 = img_generated_compute_unrolled_1(off_chip_img_lane_23_pack);

  hw_uint<16 > off_chip_img_lane_24_pack;
  set_at<0, 16, 16>(off_chip_img_lane_24_pack, off_chip_img_lane_24);
  auto res_img_update_0_sm39_24412 = img_generated_compute_unrolled_1(off_chip_img_lane_24_pack);

  hw_uint<16 > off_chip_img_lane_25_pack;
  set_at<0, 16, 16>(off_chip_img_lane_25_pack, off_chip_img_lane_25);
  auto res_img_update_0_sm39_25414 = img_generated_compute_unrolled_1(off_chip_img_lane_25_pack);

  hw_uint<16 > off_chip_img_lane_26_pack;
  set_at<0, 16, 16>(off_chip_img_lane_26_pack, off_chip_img_lane_26);
  auto res_img_update_0_sm39_26416 = img_generated_compute_unrolled_1(off_chip_img_lane_26_pack);

  hw_uint<16 > off_chip_img_lane_27_pack;
  set_at<0, 16, 16>(off_chip_img_lane_27_pack, off_chip_img_lane_27);
  auto res_img_update_0_sm39_27418 = img_generated_compute_unrolled_1(off_chip_img_lane_27_pack);

  hw_uint<16 > off_chip_img_lane_28_pack;
  set_at<0, 16, 16>(off_chip_img_lane_28_pack, off_chip_img_lane_28);
  auto res_img_update_0_sm39_28420 = img_generated_compute_unrolled_1(off_chip_img_lane_28_pack);

  hw_uint<16 > off_chip_img_lane_29_pack;
  set_at<0, 16, 16>(off_chip_img_lane_29_pack, off_chip_img_lane_29);
  auto res_img_update_0_sm39_29422 = img_generated_compute_unrolled_1(off_chip_img_lane_29_pack);

  hw_uint<16 > off_chip_img_lane_30_pack;
  set_at<0, 16, 16>(off_chip_img_lane_30_pack, off_chip_img_lane_30);
  auto res_img_update_0_sm39_30424 = img_generated_compute_unrolled_1(off_chip_img_lane_30_pack);

  hw_uint<16 > off_chip_img_lane_31_pack;
  set_at<0, 16, 16>(off_chip_img_lane_31_pack, off_chip_img_lane_31);
  auto res_img_update_0_sm39_31426 = img_generated_compute_unrolled_1(off_chip_img_lane_31_pack);
  hw_uint<512 > return_value828;
  set_at<0, 512, 16>(return_value828, res_img_update_0_sm39_0364);
  set_at<16, 512, 16>(return_value828, res_img_update_0_sm39_1366);
  set_at<32, 512, 16>(return_value828, res_img_update_0_sm39_2368);
  set_at<48, 512, 16>(return_value828, res_img_update_0_sm39_3370);
  set_at<64, 512, 16>(return_value828, res_img_update_0_sm39_4372);
  set_at<80, 512, 16>(return_value828, res_img_update_0_sm39_5374);
  set_at<96, 512, 16>(return_value828, res_img_update_0_sm39_6376);
  set_at<112, 512, 16>(return_value828, res_img_update_0_sm39_7378);
  set_at<128, 512, 16>(return_value828, res_img_update_0_sm39_8380);
  set_at<144, 512, 16>(return_value828, res_img_update_0_sm39_9382);
  set_at<160, 512, 16>(return_value828, res_img_update_0_sm39_10384);
  set_at<176, 512, 16>(return_value828, res_img_update_0_sm39_11386);
  set_at<192, 512, 16>(return_value828, res_img_update_0_sm39_12388);
  set_at<208, 512, 16>(return_value828, res_img_update_0_sm39_13390);
  set_at<224, 512, 16>(return_value828, res_img_update_0_sm39_14392);
  set_at<240, 512, 16>(return_value828, res_img_update_0_sm39_15394);
  set_at<256, 512, 16>(return_value828, res_img_update_0_sm39_16396);
  set_at<272, 512, 16>(return_value828, res_img_update_0_sm39_17398);
  set_at<288, 512, 16>(return_value828, res_img_update_0_sm39_18400);
  set_at<304, 512, 16>(return_value828, res_img_update_0_sm39_19402);
  set_at<320, 512, 16>(return_value828, res_img_update_0_sm39_20404);
  set_at<336, 512, 16>(return_value828, res_img_update_0_sm39_21406);
  set_at<352, 512, 16>(return_value828, res_img_update_0_sm39_22408);
  set_at<368, 512, 16>(return_value828, res_img_update_0_sm39_23410);
  set_at<384, 512, 16>(return_value828, res_img_update_0_sm39_24412);
  set_at<400, 512, 16>(return_value828, res_img_update_0_sm39_25414);
  set_at<416, 512, 16>(return_value828, res_img_update_0_sm39_26416);
  set_at<432, 512, 16>(return_value828, res_img_update_0_sm39_27418);
  set_at<448, 512, 16>(return_value828, res_img_update_0_sm39_28420);
  set_at<464, 512, 16>(return_value828, res_img_update_0_sm39_29422);
  set_at<480, 512, 16>(return_value828, res_img_update_0_sm39_30424);
  set_at<496, 512, 16>(return_value828, res_img_update_0_sm39_31426);
  return return_value828;

}

hw_uint<512> sbl9_32_1_cu830(hw_uint<16*32>& mag_x_FIFO_buf20, hw_uint<16*32>& mag_y_FIFO_buf28) {
  hw_uint<16> mag_x_FIFO_buf20_lane_0 = mag_x_FIFO_buf20.extract<0, 15>();
  hw_uint<16> mag_x_FIFO_buf20_lane_1 = mag_x_FIFO_buf20.extract<16, 31>();
  hw_uint<16> mag_x_FIFO_buf20_lane_2 = mag_x_FIFO_buf20.extract<32, 47>();
  hw_uint<16> mag_x_FIFO_buf20_lane_3 = mag_x_FIFO_buf20.extract<48, 63>();
  hw_uint<16> mag_x_FIFO_buf20_lane_4 = mag_x_FIFO_buf20.extract<64, 79>();
  hw_uint<16> mag_x_FIFO_buf20_lane_5 = mag_x_FIFO_buf20.extract<80, 95>();
  hw_uint<16> mag_x_FIFO_buf20_lane_6 = mag_x_FIFO_buf20.extract<96, 111>();
  hw_uint<16> mag_x_FIFO_buf20_lane_7 = mag_x_FIFO_buf20.extract<112, 127>();
  hw_uint<16> mag_x_FIFO_buf20_lane_8 = mag_x_FIFO_buf20.extract<128, 143>();
  hw_uint<16> mag_x_FIFO_buf20_lane_9 = mag_x_FIFO_buf20.extract<144, 159>();
  hw_uint<16> mag_x_FIFO_buf20_lane_10 = mag_x_FIFO_buf20.extract<160, 175>();
  hw_uint<16> mag_x_FIFO_buf20_lane_11 = mag_x_FIFO_buf20.extract<176, 191>();
  hw_uint<16> mag_x_FIFO_buf20_lane_12 = mag_x_FIFO_buf20.extract<192, 207>();
  hw_uint<16> mag_x_FIFO_buf20_lane_13 = mag_x_FIFO_buf20.extract<208, 223>();
  hw_uint<16> mag_x_FIFO_buf20_lane_14 = mag_x_FIFO_buf20.extract<224, 239>();
  hw_uint<16> mag_x_FIFO_buf20_lane_15 = mag_x_FIFO_buf20.extract<240, 255>();
  hw_uint<16> mag_x_FIFO_buf20_lane_16 = mag_x_FIFO_buf20.extract<256, 271>();
  hw_uint<16> mag_x_FIFO_buf20_lane_17 = mag_x_FIFO_buf20.extract<272, 287>();
  hw_uint<16> mag_x_FIFO_buf20_lane_18 = mag_x_FIFO_buf20.extract<288, 303>();
  hw_uint<16> mag_x_FIFO_buf20_lane_19 = mag_x_FIFO_buf20.extract<304, 319>();
  hw_uint<16> mag_x_FIFO_buf20_lane_20 = mag_x_FIFO_buf20.extract<320, 335>();
  hw_uint<16> mag_x_FIFO_buf20_lane_21 = mag_x_FIFO_buf20.extract<336, 351>();
  hw_uint<16> mag_x_FIFO_buf20_lane_22 = mag_x_FIFO_buf20.extract<352, 367>();
  hw_uint<16> mag_x_FIFO_buf20_lane_23 = mag_x_FIFO_buf20.extract<368, 383>();
  hw_uint<16> mag_x_FIFO_buf20_lane_24 = mag_x_FIFO_buf20.extract<384, 399>();
  hw_uint<16> mag_x_FIFO_buf20_lane_25 = mag_x_FIFO_buf20.extract<400, 415>();
  hw_uint<16> mag_x_FIFO_buf20_lane_26 = mag_x_FIFO_buf20.extract<416, 431>();
  hw_uint<16> mag_x_FIFO_buf20_lane_27 = mag_x_FIFO_buf20.extract<432, 447>();
  hw_uint<16> mag_x_FIFO_buf20_lane_28 = mag_x_FIFO_buf20.extract<448, 463>();
  hw_uint<16> mag_x_FIFO_buf20_lane_29 = mag_x_FIFO_buf20.extract<464, 479>();
  hw_uint<16> mag_x_FIFO_buf20_lane_30 = mag_x_FIFO_buf20.extract<480, 495>();
  hw_uint<16> mag_x_FIFO_buf20_lane_31 = mag_x_FIFO_buf20.extract<496, 511>();
  hw_uint<16> mag_y_FIFO_buf28_lane_0 = mag_y_FIFO_buf28.extract<0, 15>();
  hw_uint<16> mag_y_FIFO_buf28_lane_1 = mag_y_FIFO_buf28.extract<16, 31>();
  hw_uint<16> mag_y_FIFO_buf28_lane_2 = mag_y_FIFO_buf28.extract<32, 47>();
  hw_uint<16> mag_y_FIFO_buf28_lane_3 = mag_y_FIFO_buf28.extract<48, 63>();
  hw_uint<16> mag_y_FIFO_buf28_lane_4 = mag_y_FIFO_buf28.extract<64, 79>();
  hw_uint<16> mag_y_FIFO_buf28_lane_5 = mag_y_FIFO_buf28.extract<80, 95>();
  hw_uint<16> mag_y_FIFO_buf28_lane_6 = mag_y_FIFO_buf28.extract<96, 111>();
  hw_uint<16> mag_y_FIFO_buf28_lane_7 = mag_y_FIFO_buf28.extract<112, 127>();
  hw_uint<16> mag_y_FIFO_buf28_lane_8 = mag_y_FIFO_buf28.extract<128, 143>();
  hw_uint<16> mag_y_FIFO_buf28_lane_9 = mag_y_FIFO_buf28.extract<144, 159>();
  hw_uint<16> mag_y_FIFO_buf28_lane_10 = mag_y_FIFO_buf28.extract<160, 175>();
  hw_uint<16> mag_y_FIFO_buf28_lane_11 = mag_y_FIFO_buf28.extract<176, 191>();
  hw_uint<16> mag_y_FIFO_buf28_lane_12 = mag_y_FIFO_buf28.extract<192, 207>();
  hw_uint<16> mag_y_FIFO_buf28_lane_13 = mag_y_FIFO_buf28.extract<208, 223>();
  hw_uint<16> mag_y_FIFO_buf28_lane_14 = mag_y_FIFO_buf28.extract<224, 239>();
  hw_uint<16> mag_y_FIFO_buf28_lane_15 = mag_y_FIFO_buf28.extract<240, 255>();
  hw_uint<16> mag_y_FIFO_buf28_lane_16 = mag_y_FIFO_buf28.extract<256, 271>();
  hw_uint<16> mag_y_FIFO_buf28_lane_17 = mag_y_FIFO_buf28.extract<272, 287>();
  hw_uint<16> mag_y_FIFO_buf28_lane_18 = mag_y_FIFO_buf28.extract<288, 303>();
  hw_uint<16> mag_y_FIFO_buf28_lane_19 = mag_y_FIFO_buf28.extract<304, 319>();
  hw_uint<16> mag_y_FIFO_buf28_lane_20 = mag_y_FIFO_buf28.extract<320, 335>();
  hw_uint<16> mag_y_FIFO_buf28_lane_21 = mag_y_FIFO_buf28.extract<336, 351>();
  hw_uint<16> mag_y_FIFO_buf28_lane_22 = mag_y_FIFO_buf28.extract<352, 367>();
  hw_uint<16> mag_y_FIFO_buf28_lane_23 = mag_y_FIFO_buf28.extract<368, 383>();
  hw_uint<16> mag_y_FIFO_buf28_lane_24 = mag_y_FIFO_buf28.extract<384, 399>();
  hw_uint<16> mag_y_FIFO_buf28_lane_25 = mag_y_FIFO_buf28.extract<400, 415>();
  hw_uint<16> mag_y_FIFO_buf28_lane_26 = mag_y_FIFO_buf28.extract<416, 431>();
  hw_uint<16> mag_y_FIFO_buf28_lane_27 = mag_y_FIFO_buf28.extract<432, 447>();
  hw_uint<16> mag_y_FIFO_buf28_lane_28 = mag_y_FIFO_buf28.extract<448, 463>();
  hw_uint<16> mag_y_FIFO_buf28_lane_29 = mag_y_FIFO_buf28.extract<464, 479>();
  hw_uint<16> mag_y_FIFO_buf28_lane_30 = mag_y_FIFO_buf28.extract<480, 495>();
  hw_uint<16> mag_y_FIFO_buf28_lane_31 = mag_y_FIFO_buf28.extract<496, 511>();

	
  hw_uint<16 > mag_x_FIFO_buf20_lane_0_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_0_pack, mag_x_FIFO_buf20_lane_0);
  hw_uint<16 > mag_y_FIFO_buf28_lane_0_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_0_pack, mag_y_FIFO_buf28_lane_0);
  auto res_sbl9_32_update_0_sm40_0428 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_0_pack, mag_y_FIFO_buf28_lane_0_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_1_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_1_pack, mag_x_FIFO_buf20_lane_1);
  hw_uint<16 > mag_y_FIFO_buf28_lane_1_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_1_pack, mag_y_FIFO_buf28_lane_1);
  auto res_sbl9_32_update_0_sm40_1430 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_1_pack, mag_y_FIFO_buf28_lane_1_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_2_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_2_pack, mag_x_FIFO_buf20_lane_2);
  hw_uint<16 > mag_y_FIFO_buf28_lane_2_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_2_pack, mag_y_FIFO_buf28_lane_2);
  auto res_sbl9_32_update_0_sm40_2432 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_2_pack, mag_y_FIFO_buf28_lane_2_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_3_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_3_pack, mag_x_FIFO_buf20_lane_3);
  hw_uint<16 > mag_y_FIFO_buf28_lane_3_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_3_pack, mag_y_FIFO_buf28_lane_3);
  auto res_sbl9_32_update_0_sm40_3434 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_3_pack, mag_y_FIFO_buf28_lane_3_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_4_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_4_pack, mag_x_FIFO_buf20_lane_4);
  hw_uint<16 > mag_y_FIFO_buf28_lane_4_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_4_pack, mag_y_FIFO_buf28_lane_4);
  auto res_sbl9_32_update_0_sm40_4436 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_4_pack, mag_y_FIFO_buf28_lane_4_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_5_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_5_pack, mag_x_FIFO_buf20_lane_5);
  hw_uint<16 > mag_y_FIFO_buf28_lane_5_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_5_pack, mag_y_FIFO_buf28_lane_5);
  auto res_sbl9_32_update_0_sm40_5438 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_5_pack, mag_y_FIFO_buf28_lane_5_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_6_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_6_pack, mag_x_FIFO_buf20_lane_6);
  hw_uint<16 > mag_y_FIFO_buf28_lane_6_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_6_pack, mag_y_FIFO_buf28_lane_6);
  auto res_sbl9_32_update_0_sm40_6440 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_6_pack, mag_y_FIFO_buf28_lane_6_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_7_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_7_pack, mag_x_FIFO_buf20_lane_7);
  hw_uint<16 > mag_y_FIFO_buf28_lane_7_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_7_pack, mag_y_FIFO_buf28_lane_7);
  auto res_sbl9_32_update_0_sm40_7442 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_7_pack, mag_y_FIFO_buf28_lane_7_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_8_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_8_pack, mag_x_FIFO_buf20_lane_8);
  hw_uint<16 > mag_y_FIFO_buf28_lane_8_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_8_pack, mag_y_FIFO_buf28_lane_8);
  auto res_sbl9_32_update_0_sm40_8444 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_8_pack, mag_y_FIFO_buf28_lane_8_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_9_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_9_pack, mag_x_FIFO_buf20_lane_9);
  hw_uint<16 > mag_y_FIFO_buf28_lane_9_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_9_pack, mag_y_FIFO_buf28_lane_9);
  auto res_sbl9_32_update_0_sm40_9446 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_9_pack, mag_y_FIFO_buf28_lane_9_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_10_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_10_pack, mag_x_FIFO_buf20_lane_10);
  hw_uint<16 > mag_y_FIFO_buf28_lane_10_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_10_pack, mag_y_FIFO_buf28_lane_10);
  auto res_sbl9_32_update_0_sm40_10448 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_10_pack, mag_y_FIFO_buf28_lane_10_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_11_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_11_pack, mag_x_FIFO_buf20_lane_11);
  hw_uint<16 > mag_y_FIFO_buf28_lane_11_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_11_pack, mag_y_FIFO_buf28_lane_11);
  auto res_sbl9_32_update_0_sm40_11450 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_11_pack, mag_y_FIFO_buf28_lane_11_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_12_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_12_pack, mag_x_FIFO_buf20_lane_12);
  hw_uint<16 > mag_y_FIFO_buf28_lane_12_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_12_pack, mag_y_FIFO_buf28_lane_12);
  auto res_sbl9_32_update_0_sm40_12452 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_12_pack, mag_y_FIFO_buf28_lane_12_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_13_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_13_pack, mag_x_FIFO_buf20_lane_13);
  hw_uint<16 > mag_y_FIFO_buf28_lane_13_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_13_pack, mag_y_FIFO_buf28_lane_13);
  auto res_sbl9_32_update_0_sm40_13454 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_13_pack, mag_y_FIFO_buf28_lane_13_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_14_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_14_pack, mag_x_FIFO_buf20_lane_14);
  hw_uint<16 > mag_y_FIFO_buf28_lane_14_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_14_pack, mag_y_FIFO_buf28_lane_14);
  auto res_sbl9_32_update_0_sm40_14456 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_14_pack, mag_y_FIFO_buf28_lane_14_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_15_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_15_pack, mag_x_FIFO_buf20_lane_15);
  hw_uint<16 > mag_y_FIFO_buf28_lane_15_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_15_pack, mag_y_FIFO_buf28_lane_15);
  auto res_sbl9_32_update_0_sm40_15458 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_15_pack, mag_y_FIFO_buf28_lane_15_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_16_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_16_pack, mag_x_FIFO_buf20_lane_16);
  hw_uint<16 > mag_y_FIFO_buf28_lane_16_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_16_pack, mag_y_FIFO_buf28_lane_16);
  auto res_sbl9_32_update_0_sm40_16460 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_16_pack, mag_y_FIFO_buf28_lane_16_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_17_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_17_pack, mag_x_FIFO_buf20_lane_17);
  hw_uint<16 > mag_y_FIFO_buf28_lane_17_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_17_pack, mag_y_FIFO_buf28_lane_17);
  auto res_sbl9_32_update_0_sm40_17462 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_17_pack, mag_y_FIFO_buf28_lane_17_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_18_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_18_pack, mag_x_FIFO_buf20_lane_18);
  hw_uint<16 > mag_y_FIFO_buf28_lane_18_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_18_pack, mag_y_FIFO_buf28_lane_18);
  auto res_sbl9_32_update_0_sm40_18464 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_18_pack, mag_y_FIFO_buf28_lane_18_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_19_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_19_pack, mag_x_FIFO_buf20_lane_19);
  hw_uint<16 > mag_y_FIFO_buf28_lane_19_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_19_pack, mag_y_FIFO_buf28_lane_19);
  auto res_sbl9_32_update_0_sm40_19466 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_19_pack, mag_y_FIFO_buf28_lane_19_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_20_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_20_pack, mag_x_FIFO_buf20_lane_20);
  hw_uint<16 > mag_y_FIFO_buf28_lane_20_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_20_pack, mag_y_FIFO_buf28_lane_20);
  auto res_sbl9_32_update_0_sm40_20468 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_20_pack, mag_y_FIFO_buf28_lane_20_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_21_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_21_pack, mag_x_FIFO_buf20_lane_21);
  hw_uint<16 > mag_y_FIFO_buf28_lane_21_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_21_pack, mag_y_FIFO_buf28_lane_21);
  auto res_sbl9_32_update_0_sm40_21470 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_21_pack, mag_y_FIFO_buf28_lane_21_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_22_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_22_pack, mag_x_FIFO_buf20_lane_22);
  hw_uint<16 > mag_y_FIFO_buf28_lane_22_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_22_pack, mag_y_FIFO_buf28_lane_22);
  auto res_sbl9_32_update_0_sm40_22472 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_22_pack, mag_y_FIFO_buf28_lane_22_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_23_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_23_pack, mag_x_FIFO_buf20_lane_23);
  hw_uint<16 > mag_y_FIFO_buf28_lane_23_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_23_pack, mag_y_FIFO_buf28_lane_23);
  auto res_sbl9_32_update_0_sm40_23474 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_23_pack, mag_y_FIFO_buf28_lane_23_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_24_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_24_pack, mag_x_FIFO_buf20_lane_24);
  hw_uint<16 > mag_y_FIFO_buf28_lane_24_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_24_pack, mag_y_FIFO_buf28_lane_24);
  auto res_sbl9_32_update_0_sm40_24476 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_24_pack, mag_y_FIFO_buf28_lane_24_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_25_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_25_pack, mag_x_FIFO_buf20_lane_25);
  hw_uint<16 > mag_y_FIFO_buf28_lane_25_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_25_pack, mag_y_FIFO_buf28_lane_25);
  auto res_sbl9_32_update_0_sm40_25478 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_25_pack, mag_y_FIFO_buf28_lane_25_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_26_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_26_pack, mag_x_FIFO_buf20_lane_26);
  hw_uint<16 > mag_y_FIFO_buf28_lane_26_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_26_pack, mag_y_FIFO_buf28_lane_26);
  auto res_sbl9_32_update_0_sm40_26480 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_26_pack, mag_y_FIFO_buf28_lane_26_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_27_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_27_pack, mag_x_FIFO_buf20_lane_27);
  hw_uint<16 > mag_y_FIFO_buf28_lane_27_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_27_pack, mag_y_FIFO_buf28_lane_27);
  auto res_sbl9_32_update_0_sm40_27482 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_27_pack, mag_y_FIFO_buf28_lane_27_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_28_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_28_pack, mag_x_FIFO_buf20_lane_28);
  hw_uint<16 > mag_y_FIFO_buf28_lane_28_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_28_pack, mag_y_FIFO_buf28_lane_28);
  auto res_sbl9_32_update_0_sm40_28484 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_28_pack, mag_y_FIFO_buf28_lane_28_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_29_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_29_pack, mag_x_FIFO_buf20_lane_29);
  hw_uint<16 > mag_y_FIFO_buf28_lane_29_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_29_pack, mag_y_FIFO_buf28_lane_29);
  auto res_sbl9_32_update_0_sm40_29486 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_29_pack, mag_y_FIFO_buf28_lane_29_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_30_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_30_pack, mag_x_FIFO_buf20_lane_30);
  hw_uint<16 > mag_y_FIFO_buf28_lane_30_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_30_pack, mag_y_FIFO_buf28_lane_30);
  auto res_sbl9_32_update_0_sm40_30488 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_30_pack, mag_y_FIFO_buf28_lane_30_pack);

  hw_uint<16 > mag_x_FIFO_buf20_lane_31_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf20_lane_31_pack, mag_x_FIFO_buf20_lane_31);
  hw_uint<16 > mag_y_FIFO_buf28_lane_31_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_31_pack, mag_y_FIFO_buf28_lane_31);
  auto res_sbl9_32_update_0_sm40_31490 = sbl9_32_generated_compute_unrolled_1(mag_x_FIFO_buf20_lane_31_pack, mag_y_FIFO_buf28_lane_31_pack);
  hw_uint<512 > return_value831;
  set_at<0, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_0428);
  set_at<16, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_1430);
  set_at<32, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_2432);
  set_at<48, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_3434);
  set_at<64, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_4436);
  set_at<80, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_5438);
  set_at<96, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_6440);
  set_at<112, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_7442);
  set_at<128, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_8444);
  set_at<144, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_9446);
  set_at<160, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_10448);
  set_at<176, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_11450);
  set_at<192, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_12452);
  set_at<208, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_13454);
  set_at<224, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_14456);
  set_at<240, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_15458);
  set_at<256, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_16460);
  set_at<272, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_17462);
  set_at<288, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_18464);
  set_at<304, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_19466);
  set_at<320, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_20468);
  set_at<336, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_21470);
  set_at<352, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_22472);
  set_at<368, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_23474);
  set_at<384, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_24476);
  set_at<400, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_25478);
  set_at<416, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_26480);
  set_at<432, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_27482);
  set_at<448, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_28484);
  set_at<464, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_29486);
  set_at<480, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_30488);
  set_at<496, 512, 16>(return_value831, res_sbl9_32_update_0_sm40_31490);
  return return_value831;

}

hw_uint<512> mag_y_1_cu833(hw_uint<16*192>& img_FIFO_buf12) {
  hw_uint<16> img_FIFO_buf12_lane_0 = img_FIFO_buf12.extract<0, 15>();
  hw_uint<16> img_FIFO_buf12_lane_1 = img_FIFO_buf12.extract<16, 31>();
  hw_uint<16> img_FIFO_buf12_lane_2 = img_FIFO_buf12.extract<32, 47>();
  hw_uint<16> img_FIFO_buf12_lane_3 = img_FIFO_buf12.extract<48, 63>();
  hw_uint<16> img_FIFO_buf12_lane_4 = img_FIFO_buf12.extract<64, 79>();
  hw_uint<16> img_FIFO_buf12_lane_5 = img_FIFO_buf12.extract<80, 95>();
  hw_uint<16> img_FIFO_buf12_lane_6 = img_FIFO_buf12.extract<96, 111>();
  hw_uint<16> img_FIFO_buf12_lane_7 = img_FIFO_buf12.extract<112, 127>();
  hw_uint<16> img_FIFO_buf12_lane_8 = img_FIFO_buf12.extract<128, 143>();
  hw_uint<16> img_FIFO_buf12_lane_9 = img_FIFO_buf12.extract<144, 159>();
  hw_uint<16> img_FIFO_buf12_lane_10 = img_FIFO_buf12.extract<160, 175>();
  hw_uint<16> img_FIFO_buf12_lane_11 = img_FIFO_buf12.extract<176, 191>();
  hw_uint<16> img_FIFO_buf12_lane_12 = img_FIFO_buf12.extract<192, 207>();
  hw_uint<16> img_FIFO_buf12_lane_13 = img_FIFO_buf12.extract<208, 223>();
  hw_uint<16> img_FIFO_buf12_lane_14 = img_FIFO_buf12.extract<224, 239>();
  hw_uint<16> img_FIFO_buf12_lane_15 = img_FIFO_buf12.extract<240, 255>();
  hw_uint<16> img_FIFO_buf12_lane_16 = img_FIFO_buf12.extract<256, 271>();
  hw_uint<16> img_FIFO_buf12_lane_17 = img_FIFO_buf12.extract<272, 287>();
  hw_uint<16> img_FIFO_buf12_lane_18 = img_FIFO_buf12.extract<288, 303>();
  hw_uint<16> img_FIFO_buf12_lane_19 = img_FIFO_buf12.extract<304, 319>();
  hw_uint<16> img_FIFO_buf12_lane_20 = img_FIFO_buf12.extract<320, 335>();
  hw_uint<16> img_FIFO_buf12_lane_21 = img_FIFO_buf12.extract<336, 351>();
  hw_uint<16> img_FIFO_buf12_lane_22 = img_FIFO_buf12.extract<352, 367>();
  hw_uint<16> img_FIFO_buf12_lane_23 = img_FIFO_buf12.extract<368, 383>();
  hw_uint<16> img_FIFO_buf12_lane_24 = img_FIFO_buf12.extract<384, 399>();
  hw_uint<16> img_FIFO_buf12_lane_25 = img_FIFO_buf12.extract<400, 415>();
  hw_uint<16> img_FIFO_buf12_lane_26 = img_FIFO_buf12.extract<416, 431>();
  hw_uint<16> img_FIFO_buf12_lane_27 = img_FIFO_buf12.extract<432, 447>();
  hw_uint<16> img_FIFO_buf12_lane_28 = img_FIFO_buf12.extract<448, 463>();
  hw_uint<16> img_FIFO_buf12_lane_29 = img_FIFO_buf12.extract<464, 479>();
  hw_uint<16> img_FIFO_buf12_lane_30 = img_FIFO_buf12.extract<480, 495>();
  hw_uint<16> img_FIFO_buf12_lane_31 = img_FIFO_buf12.extract<496, 511>();
  hw_uint<16> img_FIFO_buf12_lane_32 = img_FIFO_buf12.extract<512, 527>();
  hw_uint<16> img_FIFO_buf12_lane_33 = img_FIFO_buf12.extract<528, 543>();
  hw_uint<16> img_FIFO_buf12_lane_34 = img_FIFO_buf12.extract<544, 559>();
  hw_uint<16> img_FIFO_buf12_lane_35 = img_FIFO_buf12.extract<560, 575>();
  hw_uint<16> img_FIFO_buf12_lane_36 = img_FIFO_buf12.extract<576, 591>();
  hw_uint<16> img_FIFO_buf12_lane_37 = img_FIFO_buf12.extract<592, 607>();
  hw_uint<16> img_FIFO_buf12_lane_38 = img_FIFO_buf12.extract<608, 623>();
  hw_uint<16> img_FIFO_buf12_lane_39 = img_FIFO_buf12.extract<624, 639>();
  hw_uint<16> img_FIFO_buf12_lane_40 = img_FIFO_buf12.extract<640, 655>();
  hw_uint<16> img_FIFO_buf12_lane_41 = img_FIFO_buf12.extract<656, 671>();
  hw_uint<16> img_FIFO_buf12_lane_42 = img_FIFO_buf12.extract<672, 687>();
  hw_uint<16> img_FIFO_buf12_lane_43 = img_FIFO_buf12.extract<688, 703>();
  hw_uint<16> img_FIFO_buf12_lane_44 = img_FIFO_buf12.extract<704, 719>();
  hw_uint<16> img_FIFO_buf12_lane_45 = img_FIFO_buf12.extract<720, 735>();
  hw_uint<16> img_FIFO_buf12_lane_46 = img_FIFO_buf12.extract<736, 751>();
  hw_uint<16> img_FIFO_buf12_lane_47 = img_FIFO_buf12.extract<752, 767>();
  hw_uint<16> img_FIFO_buf12_lane_48 = img_FIFO_buf12.extract<768, 783>();
  hw_uint<16> img_FIFO_buf12_lane_49 = img_FIFO_buf12.extract<784, 799>();
  hw_uint<16> img_FIFO_buf12_lane_50 = img_FIFO_buf12.extract<800, 815>();
  hw_uint<16> img_FIFO_buf12_lane_51 = img_FIFO_buf12.extract<816, 831>();
  hw_uint<16> img_FIFO_buf12_lane_52 = img_FIFO_buf12.extract<832, 847>();
  hw_uint<16> img_FIFO_buf12_lane_53 = img_FIFO_buf12.extract<848, 863>();
  hw_uint<16> img_FIFO_buf12_lane_54 = img_FIFO_buf12.extract<864, 879>();
  hw_uint<16> img_FIFO_buf12_lane_55 = img_FIFO_buf12.extract<880, 895>();
  hw_uint<16> img_FIFO_buf12_lane_56 = img_FIFO_buf12.extract<896, 911>();
  hw_uint<16> img_FIFO_buf12_lane_57 = img_FIFO_buf12.extract<912, 927>();
  hw_uint<16> img_FIFO_buf12_lane_58 = img_FIFO_buf12.extract<928, 943>();
  hw_uint<16> img_FIFO_buf12_lane_59 = img_FIFO_buf12.extract<944, 959>();
  hw_uint<16> img_FIFO_buf12_lane_60 = img_FIFO_buf12.extract<960, 975>();
  hw_uint<16> img_FIFO_buf12_lane_61 = img_FIFO_buf12.extract<976, 991>();
  hw_uint<16> img_FIFO_buf12_lane_62 = img_FIFO_buf12.extract<992, 1007>();
  hw_uint<16> img_FIFO_buf12_lane_63 = img_FIFO_buf12.extract<1008, 1023>();
  hw_uint<16> img_FIFO_buf12_lane_64 = img_FIFO_buf12.extract<1024, 1039>();
  hw_uint<16> img_FIFO_buf12_lane_65 = img_FIFO_buf12.extract<1040, 1055>();
  hw_uint<16> img_FIFO_buf12_lane_66 = img_FIFO_buf12.extract<1056, 1071>();
  hw_uint<16> img_FIFO_buf12_lane_67 = img_FIFO_buf12.extract<1072, 1087>();
  hw_uint<16> img_FIFO_buf12_lane_68 = img_FIFO_buf12.extract<1088, 1103>();
  hw_uint<16> img_FIFO_buf12_lane_69 = img_FIFO_buf12.extract<1104, 1119>();
  hw_uint<16> img_FIFO_buf12_lane_70 = img_FIFO_buf12.extract<1120, 1135>();
  hw_uint<16> img_FIFO_buf12_lane_71 = img_FIFO_buf12.extract<1136, 1151>();
  hw_uint<16> img_FIFO_buf12_lane_72 = img_FIFO_buf12.extract<1152, 1167>();
  hw_uint<16> img_FIFO_buf12_lane_73 = img_FIFO_buf12.extract<1168, 1183>();
  hw_uint<16> img_FIFO_buf12_lane_74 = img_FIFO_buf12.extract<1184, 1199>();
  hw_uint<16> img_FIFO_buf12_lane_75 = img_FIFO_buf12.extract<1200, 1215>();
  hw_uint<16> img_FIFO_buf12_lane_76 = img_FIFO_buf12.extract<1216, 1231>();
  hw_uint<16> img_FIFO_buf12_lane_77 = img_FIFO_buf12.extract<1232, 1247>();
  hw_uint<16> img_FIFO_buf12_lane_78 = img_FIFO_buf12.extract<1248, 1263>();
  hw_uint<16> img_FIFO_buf12_lane_79 = img_FIFO_buf12.extract<1264, 1279>();
  hw_uint<16> img_FIFO_buf12_lane_80 = img_FIFO_buf12.extract<1280, 1295>();
  hw_uint<16> img_FIFO_buf12_lane_81 = img_FIFO_buf12.extract<1296, 1311>();
  hw_uint<16> img_FIFO_buf12_lane_82 = img_FIFO_buf12.extract<1312, 1327>();
  hw_uint<16> img_FIFO_buf12_lane_83 = img_FIFO_buf12.extract<1328, 1343>();
  hw_uint<16> img_FIFO_buf12_lane_84 = img_FIFO_buf12.extract<1344, 1359>();
  hw_uint<16> img_FIFO_buf12_lane_85 = img_FIFO_buf12.extract<1360, 1375>();
  hw_uint<16> img_FIFO_buf12_lane_86 = img_FIFO_buf12.extract<1376, 1391>();
  hw_uint<16> img_FIFO_buf12_lane_87 = img_FIFO_buf12.extract<1392, 1407>();
  hw_uint<16> img_FIFO_buf12_lane_88 = img_FIFO_buf12.extract<1408, 1423>();
  hw_uint<16> img_FIFO_buf12_lane_89 = img_FIFO_buf12.extract<1424, 1439>();
  hw_uint<16> img_FIFO_buf12_lane_90 = img_FIFO_buf12.extract<1440, 1455>();
  hw_uint<16> img_FIFO_buf12_lane_91 = img_FIFO_buf12.extract<1456, 1471>();
  hw_uint<16> img_FIFO_buf12_lane_92 = img_FIFO_buf12.extract<1472, 1487>();
  hw_uint<16> img_FIFO_buf12_lane_93 = img_FIFO_buf12.extract<1488, 1503>();
  hw_uint<16> img_FIFO_buf12_lane_94 = img_FIFO_buf12.extract<1504, 1519>();
  hw_uint<16> img_FIFO_buf12_lane_95 = img_FIFO_buf12.extract<1520, 1535>();
  hw_uint<16> img_FIFO_buf12_lane_96 = img_FIFO_buf12.extract<1536, 1551>();
  hw_uint<16> img_FIFO_buf12_lane_97 = img_FIFO_buf12.extract<1552, 1567>();
  hw_uint<16> img_FIFO_buf12_lane_98 = img_FIFO_buf12.extract<1568, 1583>();
  hw_uint<16> img_FIFO_buf12_lane_99 = img_FIFO_buf12.extract<1584, 1599>();
  hw_uint<16> img_FIFO_buf12_lane_100 = img_FIFO_buf12.extract<1600, 1615>();
  hw_uint<16> img_FIFO_buf12_lane_101 = img_FIFO_buf12.extract<1616, 1631>();
  hw_uint<16> img_FIFO_buf12_lane_102 = img_FIFO_buf12.extract<1632, 1647>();
  hw_uint<16> img_FIFO_buf12_lane_103 = img_FIFO_buf12.extract<1648, 1663>();
  hw_uint<16> img_FIFO_buf12_lane_104 = img_FIFO_buf12.extract<1664, 1679>();
  hw_uint<16> img_FIFO_buf12_lane_105 = img_FIFO_buf12.extract<1680, 1695>();
  hw_uint<16> img_FIFO_buf12_lane_106 = img_FIFO_buf12.extract<1696, 1711>();
  hw_uint<16> img_FIFO_buf12_lane_107 = img_FIFO_buf12.extract<1712, 1727>();
  hw_uint<16> img_FIFO_buf12_lane_108 = img_FIFO_buf12.extract<1728, 1743>();
  hw_uint<16> img_FIFO_buf12_lane_109 = img_FIFO_buf12.extract<1744, 1759>();
  hw_uint<16> img_FIFO_buf12_lane_110 = img_FIFO_buf12.extract<1760, 1775>();
  hw_uint<16> img_FIFO_buf12_lane_111 = img_FIFO_buf12.extract<1776, 1791>();
  hw_uint<16> img_FIFO_buf12_lane_112 = img_FIFO_buf12.extract<1792, 1807>();
  hw_uint<16> img_FIFO_buf12_lane_113 = img_FIFO_buf12.extract<1808, 1823>();
  hw_uint<16> img_FIFO_buf12_lane_114 = img_FIFO_buf12.extract<1824, 1839>();
  hw_uint<16> img_FIFO_buf12_lane_115 = img_FIFO_buf12.extract<1840, 1855>();
  hw_uint<16> img_FIFO_buf12_lane_116 = img_FIFO_buf12.extract<1856, 1871>();
  hw_uint<16> img_FIFO_buf12_lane_117 = img_FIFO_buf12.extract<1872, 1887>();
  hw_uint<16> img_FIFO_buf12_lane_118 = img_FIFO_buf12.extract<1888, 1903>();
  hw_uint<16> img_FIFO_buf12_lane_119 = img_FIFO_buf12.extract<1904, 1919>();
  hw_uint<16> img_FIFO_buf12_lane_120 = img_FIFO_buf12.extract<1920, 1935>();
  hw_uint<16> img_FIFO_buf12_lane_121 = img_FIFO_buf12.extract<1936, 1951>();
  hw_uint<16> img_FIFO_buf12_lane_122 = img_FIFO_buf12.extract<1952, 1967>();
  hw_uint<16> img_FIFO_buf12_lane_123 = img_FIFO_buf12.extract<1968, 1983>();
  hw_uint<16> img_FIFO_buf12_lane_124 = img_FIFO_buf12.extract<1984, 1999>();
  hw_uint<16> img_FIFO_buf12_lane_125 = img_FIFO_buf12.extract<2000, 2015>();
  hw_uint<16> img_FIFO_buf12_lane_126 = img_FIFO_buf12.extract<2016, 2031>();
  hw_uint<16> img_FIFO_buf12_lane_127 = img_FIFO_buf12.extract<2032, 2047>();
  hw_uint<16> img_FIFO_buf12_lane_128 = img_FIFO_buf12.extract<2048, 2063>();
  hw_uint<16> img_FIFO_buf12_lane_129 = img_FIFO_buf12.extract<2064, 2079>();
  hw_uint<16> img_FIFO_buf12_lane_130 = img_FIFO_buf12.extract<2080, 2095>();
  hw_uint<16> img_FIFO_buf12_lane_131 = img_FIFO_buf12.extract<2096, 2111>();
  hw_uint<16> img_FIFO_buf12_lane_132 = img_FIFO_buf12.extract<2112, 2127>();
  hw_uint<16> img_FIFO_buf12_lane_133 = img_FIFO_buf12.extract<2128, 2143>();
  hw_uint<16> img_FIFO_buf12_lane_134 = img_FIFO_buf12.extract<2144, 2159>();
  hw_uint<16> img_FIFO_buf12_lane_135 = img_FIFO_buf12.extract<2160, 2175>();
  hw_uint<16> img_FIFO_buf12_lane_136 = img_FIFO_buf12.extract<2176, 2191>();
  hw_uint<16> img_FIFO_buf12_lane_137 = img_FIFO_buf12.extract<2192, 2207>();
  hw_uint<16> img_FIFO_buf12_lane_138 = img_FIFO_buf12.extract<2208, 2223>();
  hw_uint<16> img_FIFO_buf12_lane_139 = img_FIFO_buf12.extract<2224, 2239>();
  hw_uint<16> img_FIFO_buf12_lane_140 = img_FIFO_buf12.extract<2240, 2255>();
  hw_uint<16> img_FIFO_buf12_lane_141 = img_FIFO_buf12.extract<2256, 2271>();
  hw_uint<16> img_FIFO_buf12_lane_142 = img_FIFO_buf12.extract<2272, 2287>();
  hw_uint<16> img_FIFO_buf12_lane_143 = img_FIFO_buf12.extract<2288, 2303>();
  hw_uint<16> img_FIFO_buf12_lane_144 = img_FIFO_buf12.extract<2304, 2319>();
  hw_uint<16> img_FIFO_buf12_lane_145 = img_FIFO_buf12.extract<2320, 2335>();
  hw_uint<16> img_FIFO_buf12_lane_146 = img_FIFO_buf12.extract<2336, 2351>();
  hw_uint<16> img_FIFO_buf12_lane_147 = img_FIFO_buf12.extract<2352, 2367>();
  hw_uint<16> img_FIFO_buf12_lane_148 = img_FIFO_buf12.extract<2368, 2383>();
  hw_uint<16> img_FIFO_buf12_lane_149 = img_FIFO_buf12.extract<2384, 2399>();
  hw_uint<16> img_FIFO_buf12_lane_150 = img_FIFO_buf12.extract<2400, 2415>();
  hw_uint<16> img_FIFO_buf12_lane_151 = img_FIFO_buf12.extract<2416, 2431>();
  hw_uint<16> img_FIFO_buf12_lane_152 = img_FIFO_buf12.extract<2432, 2447>();
  hw_uint<16> img_FIFO_buf12_lane_153 = img_FIFO_buf12.extract<2448, 2463>();
  hw_uint<16> img_FIFO_buf12_lane_154 = img_FIFO_buf12.extract<2464, 2479>();
  hw_uint<16> img_FIFO_buf12_lane_155 = img_FIFO_buf12.extract<2480, 2495>();
  hw_uint<16> img_FIFO_buf12_lane_156 = img_FIFO_buf12.extract<2496, 2511>();
  hw_uint<16> img_FIFO_buf12_lane_157 = img_FIFO_buf12.extract<2512, 2527>();
  hw_uint<16> img_FIFO_buf12_lane_158 = img_FIFO_buf12.extract<2528, 2543>();
  hw_uint<16> img_FIFO_buf12_lane_159 = img_FIFO_buf12.extract<2544, 2559>();
  hw_uint<16> img_FIFO_buf12_lane_160 = img_FIFO_buf12.extract<2560, 2575>();
  hw_uint<16> img_FIFO_buf12_lane_161 = img_FIFO_buf12.extract<2576, 2591>();
  hw_uint<16> img_FIFO_buf12_lane_162 = img_FIFO_buf12.extract<2592, 2607>();
  hw_uint<16> img_FIFO_buf12_lane_163 = img_FIFO_buf12.extract<2608, 2623>();
  hw_uint<16> img_FIFO_buf12_lane_164 = img_FIFO_buf12.extract<2624, 2639>();
  hw_uint<16> img_FIFO_buf12_lane_165 = img_FIFO_buf12.extract<2640, 2655>();
  hw_uint<16> img_FIFO_buf12_lane_166 = img_FIFO_buf12.extract<2656, 2671>();
  hw_uint<16> img_FIFO_buf12_lane_167 = img_FIFO_buf12.extract<2672, 2687>();
  hw_uint<16> img_FIFO_buf12_lane_168 = img_FIFO_buf12.extract<2688, 2703>();
  hw_uint<16> img_FIFO_buf12_lane_169 = img_FIFO_buf12.extract<2704, 2719>();
  hw_uint<16> img_FIFO_buf12_lane_170 = img_FIFO_buf12.extract<2720, 2735>();
  hw_uint<16> img_FIFO_buf12_lane_171 = img_FIFO_buf12.extract<2736, 2751>();
  hw_uint<16> img_FIFO_buf12_lane_172 = img_FIFO_buf12.extract<2752, 2767>();
  hw_uint<16> img_FIFO_buf12_lane_173 = img_FIFO_buf12.extract<2768, 2783>();
  hw_uint<16> img_FIFO_buf12_lane_174 = img_FIFO_buf12.extract<2784, 2799>();
  hw_uint<16> img_FIFO_buf12_lane_175 = img_FIFO_buf12.extract<2800, 2815>();
  hw_uint<16> img_FIFO_buf12_lane_176 = img_FIFO_buf12.extract<2816, 2831>();
  hw_uint<16> img_FIFO_buf12_lane_177 = img_FIFO_buf12.extract<2832, 2847>();
  hw_uint<16> img_FIFO_buf12_lane_178 = img_FIFO_buf12.extract<2848, 2863>();
  hw_uint<16> img_FIFO_buf12_lane_179 = img_FIFO_buf12.extract<2864, 2879>();
  hw_uint<16> img_FIFO_buf12_lane_180 = img_FIFO_buf12.extract<2880, 2895>();
  hw_uint<16> img_FIFO_buf12_lane_181 = img_FIFO_buf12.extract<2896, 2911>();
  hw_uint<16> img_FIFO_buf12_lane_182 = img_FIFO_buf12.extract<2912, 2927>();
  hw_uint<16> img_FIFO_buf12_lane_183 = img_FIFO_buf12.extract<2928, 2943>();
  hw_uint<16> img_FIFO_buf12_lane_184 = img_FIFO_buf12.extract<2944, 2959>();
  hw_uint<16> img_FIFO_buf12_lane_185 = img_FIFO_buf12.extract<2960, 2975>();
  hw_uint<16> img_FIFO_buf12_lane_186 = img_FIFO_buf12.extract<2976, 2991>();
  hw_uint<16> img_FIFO_buf12_lane_187 = img_FIFO_buf12.extract<2992, 3007>();
  hw_uint<16> img_FIFO_buf12_lane_188 = img_FIFO_buf12.extract<3008, 3023>();
  hw_uint<16> img_FIFO_buf12_lane_189 = img_FIFO_buf12.extract<3024, 3039>();
  hw_uint<16> img_FIFO_buf12_lane_190 = img_FIFO_buf12.extract<3040, 3055>();
  hw_uint<16> img_FIFO_buf12_lane_191 = img_FIFO_buf12.extract<3056, 3071>();

	
  hw_uint<96 > img_FIFO_buf12_lane_5_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_0);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_1);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_2);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_3);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_4);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_5_pack, img_FIFO_buf12_lane_5);
  auto res_mag_y_update_0_sm41_0492 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_5_pack);

  hw_uint<96 > img_FIFO_buf12_lane_11_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_6);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_7);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_8);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_9);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_10);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_11_pack, img_FIFO_buf12_lane_11);
  auto res_mag_y_update_0_sm41_1494 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_11_pack);

  hw_uint<96 > img_FIFO_buf12_lane_17_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_12);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_13);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_14);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_15);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_16);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_17_pack, img_FIFO_buf12_lane_17);
  auto res_mag_y_update_0_sm41_2496 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_17_pack);

  hw_uint<96 > img_FIFO_buf12_lane_23_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_18);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_19);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_20);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_21);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_22);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_23_pack, img_FIFO_buf12_lane_23);
  auto res_mag_y_update_0_sm41_3498 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_23_pack);

  hw_uint<96 > img_FIFO_buf12_lane_29_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_24);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_25);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_26);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_27);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_28);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_29_pack, img_FIFO_buf12_lane_29);
  auto res_mag_y_update_0_sm41_4500 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_29_pack);

  hw_uint<96 > img_FIFO_buf12_lane_35_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_30);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_31);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_32);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_33);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_34);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_35_pack, img_FIFO_buf12_lane_35);
  auto res_mag_y_update_0_sm41_5502 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_35_pack);

  hw_uint<96 > img_FIFO_buf12_lane_41_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_36);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_37);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_38);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_39);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_40);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_41_pack, img_FIFO_buf12_lane_41);
  auto res_mag_y_update_0_sm41_6504 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_41_pack);

  hw_uint<96 > img_FIFO_buf12_lane_47_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_42);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_43);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_44);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_45);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_46);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_47_pack, img_FIFO_buf12_lane_47);
  auto res_mag_y_update_0_sm41_7506 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_47_pack);

  hw_uint<96 > img_FIFO_buf12_lane_53_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_48);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_49);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_50);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_51);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_52);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_53_pack, img_FIFO_buf12_lane_53);
  auto res_mag_y_update_0_sm41_8508 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_53_pack);

  hw_uint<96 > img_FIFO_buf12_lane_59_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_54);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_55);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_56);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_57);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_58);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_59_pack, img_FIFO_buf12_lane_59);
  auto res_mag_y_update_0_sm41_9510 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_59_pack);

  hw_uint<96 > img_FIFO_buf12_lane_65_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_60);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_61);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_62);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_63);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_64);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_65_pack, img_FIFO_buf12_lane_65);
  auto res_mag_y_update_0_sm41_10512 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_65_pack);

  hw_uint<96 > img_FIFO_buf12_lane_71_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_66);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_67);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_68);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_69);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_70);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_71_pack, img_FIFO_buf12_lane_71);
  auto res_mag_y_update_0_sm41_11514 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_71_pack);

  hw_uint<96 > img_FIFO_buf12_lane_77_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_72);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_73);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_74);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_75);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_76);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_77_pack, img_FIFO_buf12_lane_77);
  auto res_mag_y_update_0_sm41_12516 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_77_pack);

  hw_uint<96 > img_FIFO_buf12_lane_83_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_78);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_79);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_80);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_81);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_82);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_83_pack, img_FIFO_buf12_lane_83);
  auto res_mag_y_update_0_sm41_13518 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_83_pack);

  hw_uint<96 > img_FIFO_buf12_lane_89_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_84);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_85);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_86);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_87);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_88);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_89_pack, img_FIFO_buf12_lane_89);
  auto res_mag_y_update_0_sm41_14520 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_89_pack);

  hw_uint<96 > img_FIFO_buf12_lane_95_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_90);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_91);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_92);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_93);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_94);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_95_pack, img_FIFO_buf12_lane_95);
  auto res_mag_y_update_0_sm41_15522 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_95_pack);

  hw_uint<96 > img_FIFO_buf12_lane_101_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_101_pack, img_FIFO_buf12_lane_96);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_101_pack, img_FIFO_buf12_lane_97);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_101_pack, img_FIFO_buf12_lane_98);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_101_pack, img_FIFO_buf12_lane_99);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_101_pack, img_FIFO_buf12_lane_100);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_101_pack, img_FIFO_buf12_lane_101);
  auto res_mag_y_update_0_sm41_16524 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_101_pack);

  hw_uint<96 > img_FIFO_buf12_lane_107_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_107_pack, img_FIFO_buf12_lane_102);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_107_pack, img_FIFO_buf12_lane_103);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_107_pack, img_FIFO_buf12_lane_104);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_107_pack, img_FIFO_buf12_lane_105);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_107_pack, img_FIFO_buf12_lane_106);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_107_pack, img_FIFO_buf12_lane_107);
  auto res_mag_y_update_0_sm41_17526 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_107_pack);

  hw_uint<96 > img_FIFO_buf12_lane_113_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_113_pack, img_FIFO_buf12_lane_108);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_113_pack, img_FIFO_buf12_lane_109);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_113_pack, img_FIFO_buf12_lane_110);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_113_pack, img_FIFO_buf12_lane_111);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_113_pack, img_FIFO_buf12_lane_112);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_113_pack, img_FIFO_buf12_lane_113);
  auto res_mag_y_update_0_sm41_18528 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_113_pack);

  hw_uint<96 > img_FIFO_buf12_lane_119_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_119_pack, img_FIFO_buf12_lane_114);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_119_pack, img_FIFO_buf12_lane_115);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_119_pack, img_FIFO_buf12_lane_116);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_119_pack, img_FIFO_buf12_lane_117);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_119_pack, img_FIFO_buf12_lane_118);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_119_pack, img_FIFO_buf12_lane_119);
  auto res_mag_y_update_0_sm41_19530 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_119_pack);

  hw_uint<96 > img_FIFO_buf12_lane_125_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_125_pack, img_FIFO_buf12_lane_120);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_125_pack, img_FIFO_buf12_lane_121);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_125_pack, img_FIFO_buf12_lane_122);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_125_pack, img_FIFO_buf12_lane_123);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_125_pack, img_FIFO_buf12_lane_124);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_125_pack, img_FIFO_buf12_lane_125);
  auto res_mag_y_update_0_sm41_20532 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_125_pack);

  hw_uint<96 > img_FIFO_buf12_lane_131_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_131_pack, img_FIFO_buf12_lane_126);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_131_pack, img_FIFO_buf12_lane_127);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_131_pack, img_FIFO_buf12_lane_128);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_131_pack, img_FIFO_buf12_lane_129);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_131_pack, img_FIFO_buf12_lane_130);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_131_pack, img_FIFO_buf12_lane_131);
  auto res_mag_y_update_0_sm41_21534 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_131_pack);

  hw_uint<96 > img_FIFO_buf12_lane_137_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_137_pack, img_FIFO_buf12_lane_132);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_137_pack, img_FIFO_buf12_lane_133);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_137_pack, img_FIFO_buf12_lane_134);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_137_pack, img_FIFO_buf12_lane_135);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_137_pack, img_FIFO_buf12_lane_136);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_137_pack, img_FIFO_buf12_lane_137);
  auto res_mag_y_update_0_sm41_22536 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_137_pack);

  hw_uint<96 > img_FIFO_buf12_lane_143_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_143_pack, img_FIFO_buf12_lane_138);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_143_pack, img_FIFO_buf12_lane_139);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_143_pack, img_FIFO_buf12_lane_140);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_143_pack, img_FIFO_buf12_lane_141);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_143_pack, img_FIFO_buf12_lane_142);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_143_pack, img_FIFO_buf12_lane_143);
  auto res_mag_y_update_0_sm41_23538 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_143_pack);

  hw_uint<96 > img_FIFO_buf12_lane_149_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_149_pack, img_FIFO_buf12_lane_144);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_149_pack, img_FIFO_buf12_lane_145);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_149_pack, img_FIFO_buf12_lane_146);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_149_pack, img_FIFO_buf12_lane_147);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_149_pack, img_FIFO_buf12_lane_148);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_149_pack, img_FIFO_buf12_lane_149);
  auto res_mag_y_update_0_sm41_24540 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_149_pack);

  hw_uint<96 > img_FIFO_buf12_lane_155_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_155_pack, img_FIFO_buf12_lane_150);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_155_pack, img_FIFO_buf12_lane_151);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_155_pack, img_FIFO_buf12_lane_152);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_155_pack, img_FIFO_buf12_lane_153);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_155_pack, img_FIFO_buf12_lane_154);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_155_pack, img_FIFO_buf12_lane_155);
  auto res_mag_y_update_0_sm41_25542 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_155_pack);

  hw_uint<96 > img_FIFO_buf12_lane_161_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_161_pack, img_FIFO_buf12_lane_156);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_161_pack, img_FIFO_buf12_lane_157);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_161_pack, img_FIFO_buf12_lane_158);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_161_pack, img_FIFO_buf12_lane_159);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_161_pack, img_FIFO_buf12_lane_160);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_161_pack, img_FIFO_buf12_lane_161);
  auto res_mag_y_update_0_sm41_26544 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_161_pack);

  hw_uint<96 > img_FIFO_buf12_lane_167_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_167_pack, img_FIFO_buf12_lane_162);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_167_pack, img_FIFO_buf12_lane_163);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_167_pack, img_FIFO_buf12_lane_164);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_167_pack, img_FIFO_buf12_lane_165);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_167_pack, img_FIFO_buf12_lane_166);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_167_pack, img_FIFO_buf12_lane_167);
  auto res_mag_y_update_0_sm41_27546 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_167_pack);

  hw_uint<96 > img_FIFO_buf12_lane_173_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_173_pack, img_FIFO_buf12_lane_168);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_173_pack, img_FIFO_buf12_lane_169);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_173_pack, img_FIFO_buf12_lane_170);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_173_pack, img_FIFO_buf12_lane_171);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_173_pack, img_FIFO_buf12_lane_172);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_173_pack, img_FIFO_buf12_lane_173);
  auto res_mag_y_update_0_sm41_28548 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_173_pack);

  hw_uint<96 > img_FIFO_buf12_lane_179_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_179_pack, img_FIFO_buf12_lane_174);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_179_pack, img_FIFO_buf12_lane_175);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_179_pack, img_FIFO_buf12_lane_176);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_179_pack, img_FIFO_buf12_lane_177);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_179_pack, img_FIFO_buf12_lane_178);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_179_pack, img_FIFO_buf12_lane_179);
  auto res_mag_y_update_0_sm41_29550 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_179_pack);

  hw_uint<96 > img_FIFO_buf12_lane_185_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_185_pack, img_FIFO_buf12_lane_180);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_185_pack, img_FIFO_buf12_lane_181);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_185_pack, img_FIFO_buf12_lane_182);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_185_pack, img_FIFO_buf12_lane_183);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_185_pack, img_FIFO_buf12_lane_184);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_185_pack, img_FIFO_buf12_lane_185);
  auto res_mag_y_update_0_sm41_30552 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_185_pack);

  hw_uint<96 > img_FIFO_buf12_lane_191_pack;
  set_at<0, 96, 16>(img_FIFO_buf12_lane_191_pack, img_FIFO_buf12_lane_186);
  set_at<16, 96, 16>(img_FIFO_buf12_lane_191_pack, img_FIFO_buf12_lane_187);
  set_at<32, 96, 16>(img_FIFO_buf12_lane_191_pack, img_FIFO_buf12_lane_188);
  set_at<48, 96, 16>(img_FIFO_buf12_lane_191_pack, img_FIFO_buf12_lane_189);
  set_at<64, 96, 16>(img_FIFO_buf12_lane_191_pack, img_FIFO_buf12_lane_190);
  set_at<80, 96, 16>(img_FIFO_buf12_lane_191_pack, img_FIFO_buf12_lane_191);
  auto res_mag_y_update_0_sm41_31554 = mag_y_generated_compute_unrolled_1(img_FIFO_buf12_lane_191_pack);
  hw_uint<512 > return_value834;
  set_at<0, 512, 16>(return_value834, res_mag_y_update_0_sm41_0492);
  set_at<16, 512, 16>(return_value834, res_mag_y_update_0_sm41_1494);
  set_at<32, 512, 16>(return_value834, res_mag_y_update_0_sm41_2496);
  set_at<48, 512, 16>(return_value834, res_mag_y_update_0_sm41_3498);
  set_at<64, 512, 16>(return_value834, res_mag_y_update_0_sm41_4500);
  set_at<80, 512, 16>(return_value834, res_mag_y_update_0_sm41_5502);
  set_at<96, 512, 16>(return_value834, res_mag_y_update_0_sm41_6504);
  set_at<112, 512, 16>(return_value834, res_mag_y_update_0_sm41_7506);
  set_at<128, 512, 16>(return_value834, res_mag_y_update_0_sm41_8508);
  set_at<144, 512, 16>(return_value834, res_mag_y_update_0_sm41_9510);
  set_at<160, 512, 16>(return_value834, res_mag_y_update_0_sm41_10512);
  set_at<176, 512, 16>(return_value834, res_mag_y_update_0_sm41_11514);
  set_at<192, 512, 16>(return_value834, res_mag_y_update_0_sm41_12516);
  set_at<208, 512, 16>(return_value834, res_mag_y_update_0_sm41_13518);
  set_at<224, 512, 16>(return_value834, res_mag_y_update_0_sm41_14520);
  set_at<240, 512, 16>(return_value834, res_mag_y_update_0_sm41_15522);
  set_at<256, 512, 16>(return_value834, res_mag_y_update_0_sm41_16524);
  set_at<272, 512, 16>(return_value834, res_mag_y_update_0_sm41_17526);
  set_at<288, 512, 16>(return_value834, res_mag_y_update_0_sm41_18528);
  set_at<304, 512, 16>(return_value834, res_mag_y_update_0_sm41_19530);
  set_at<320, 512, 16>(return_value834, res_mag_y_update_0_sm41_20532);
  set_at<336, 512, 16>(return_value834, res_mag_y_update_0_sm41_21534);
  set_at<352, 512, 16>(return_value834, res_mag_y_update_0_sm41_22536);
  set_at<368, 512, 16>(return_value834, res_mag_y_update_0_sm41_23538);
  set_at<384, 512, 16>(return_value834, res_mag_y_update_0_sm41_24540);
  set_at<400, 512, 16>(return_value834, res_mag_y_update_0_sm41_25542);
  set_at<416, 512, 16>(return_value834, res_mag_y_update_0_sm41_26544);
  set_at<432, 512, 16>(return_value834, res_mag_y_update_0_sm41_27546);
  set_at<448, 512, 16>(return_value834, res_mag_y_update_0_sm41_28548);
  set_at<464, 512, 16>(return_value834, res_mag_y_update_0_sm41_29550);
  set_at<480, 512, 16>(return_value834, res_mag_y_update_0_sm41_30552);
  set_at<496, 512, 16>(return_value834, res_mag_y_update_0_sm41_31554);
  return return_value834;

}

hw_uint<512> img_ld1_cu836(hw_uint<16*32>& img) {
  return img;
}

hw_uint<512> mag_x_to_gp_316_ld21_cu838(hw_uint<16*32>& mag_x_to_gp_316) {
  return mag_x_to_gp_316;
}

