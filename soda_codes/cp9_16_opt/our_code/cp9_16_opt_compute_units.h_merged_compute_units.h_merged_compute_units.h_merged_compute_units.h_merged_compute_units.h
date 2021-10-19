#include "cp9_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> raw_1_cu363(hw_uint<16*16>& raw_oc) {
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
  auto res_raw_update_0_sm0_043 = raw_generated_compute_unrolled_1(raw_oc_lane_0_pack);

  hw_uint<16 > raw_oc_lane_1_pack;
  set_at<0, 16, 16>(raw_oc_lane_1_pack, raw_oc_lane_1);
  auto res_raw_update_0_sm0_145 = raw_generated_compute_unrolled_1(raw_oc_lane_1_pack);

  hw_uint<16 > raw_oc_lane_2_pack;
  set_at<0, 16, 16>(raw_oc_lane_2_pack, raw_oc_lane_2);
  auto res_raw_update_0_sm0_247 = raw_generated_compute_unrolled_1(raw_oc_lane_2_pack);

  hw_uint<16 > raw_oc_lane_3_pack;
  set_at<0, 16, 16>(raw_oc_lane_3_pack, raw_oc_lane_3);
  auto res_raw_update_0_sm0_349 = raw_generated_compute_unrolled_1(raw_oc_lane_3_pack);

  hw_uint<16 > raw_oc_lane_4_pack;
  set_at<0, 16, 16>(raw_oc_lane_4_pack, raw_oc_lane_4);
  auto res_raw_update_0_sm0_451 = raw_generated_compute_unrolled_1(raw_oc_lane_4_pack);

  hw_uint<16 > raw_oc_lane_5_pack;
  set_at<0, 16, 16>(raw_oc_lane_5_pack, raw_oc_lane_5);
  auto res_raw_update_0_sm0_553 = raw_generated_compute_unrolled_1(raw_oc_lane_5_pack);

  hw_uint<16 > raw_oc_lane_6_pack;
  set_at<0, 16, 16>(raw_oc_lane_6_pack, raw_oc_lane_6);
  auto res_raw_update_0_sm0_655 = raw_generated_compute_unrolled_1(raw_oc_lane_6_pack);

  hw_uint<16 > raw_oc_lane_7_pack;
  set_at<0, 16, 16>(raw_oc_lane_7_pack, raw_oc_lane_7);
  auto res_raw_update_0_sm0_757 = raw_generated_compute_unrolled_1(raw_oc_lane_7_pack);

  hw_uint<16 > raw_oc_lane_8_pack;
  set_at<0, 16, 16>(raw_oc_lane_8_pack, raw_oc_lane_8);
  auto res_raw_update_0_sm0_859 = raw_generated_compute_unrolled_1(raw_oc_lane_8_pack);

  hw_uint<16 > raw_oc_lane_9_pack;
  set_at<0, 16, 16>(raw_oc_lane_9_pack, raw_oc_lane_9);
  auto res_raw_update_0_sm0_961 = raw_generated_compute_unrolled_1(raw_oc_lane_9_pack);

  hw_uint<16 > raw_oc_lane_10_pack;
  set_at<0, 16, 16>(raw_oc_lane_10_pack, raw_oc_lane_10);
  auto res_raw_update_0_sm0_1063 = raw_generated_compute_unrolled_1(raw_oc_lane_10_pack);

  hw_uint<16 > raw_oc_lane_11_pack;
  set_at<0, 16, 16>(raw_oc_lane_11_pack, raw_oc_lane_11);
  auto res_raw_update_0_sm0_1165 = raw_generated_compute_unrolled_1(raw_oc_lane_11_pack);

  hw_uint<16 > raw_oc_lane_12_pack;
  set_at<0, 16, 16>(raw_oc_lane_12_pack, raw_oc_lane_12);
  auto res_raw_update_0_sm0_1267 = raw_generated_compute_unrolled_1(raw_oc_lane_12_pack);

  hw_uint<16 > raw_oc_lane_13_pack;
  set_at<0, 16, 16>(raw_oc_lane_13_pack, raw_oc_lane_13);
  auto res_raw_update_0_sm0_1369 = raw_generated_compute_unrolled_1(raw_oc_lane_13_pack);

  hw_uint<16 > raw_oc_lane_14_pack;
  set_at<0, 16, 16>(raw_oc_lane_14_pack, raw_oc_lane_14);
  auto res_raw_update_0_sm0_1471 = raw_generated_compute_unrolled_1(raw_oc_lane_14_pack);

  hw_uint<16 > raw_oc_lane_15_pack;
  set_at<0, 16, 16>(raw_oc_lane_15_pack, raw_oc_lane_15);
  auto res_raw_update_0_sm0_1573 = raw_generated_compute_unrolled_1(raw_oc_lane_15_pack);
  hw_uint<256 > return_value364;
  set_at<0, 256, 16>(return_value364, res_raw_update_0_sm0_043);
  set_at<16, 256, 16>(return_value364, res_raw_update_0_sm0_145);
  set_at<32, 256, 16>(return_value364, res_raw_update_0_sm0_247);
  set_at<48, 256, 16>(return_value364, res_raw_update_0_sm0_349);
  set_at<64, 256, 16>(return_value364, res_raw_update_0_sm0_451);
  set_at<80, 256, 16>(return_value364, res_raw_update_0_sm0_553);
  set_at<96, 256, 16>(return_value364, res_raw_update_0_sm0_655);
  set_at<112, 256, 16>(return_value364, res_raw_update_0_sm0_757);
  set_at<128, 256, 16>(return_value364, res_raw_update_0_sm0_859);
  set_at<144, 256, 16>(return_value364, res_raw_update_0_sm0_961);
  set_at<160, 256, 16>(return_value364, res_raw_update_0_sm0_1063);
  set_at<176, 256, 16>(return_value364, res_raw_update_0_sm0_1165);
  set_at<192, 256, 16>(return_value364, res_raw_update_0_sm0_1267);
  set_at<208, 256, 16>(return_value364, res_raw_update_0_sm0_1369);
  set_at<224, 256, 16>(return_value364, res_raw_update_0_sm0_1471);
  set_at<240, 256, 16>(return_value364, res_raw_update_0_sm0_1573);
  return return_value364;

}

hw_uint<256> denoiseb_1_cu366(hw_uint<16*400>& raw) {
  hw_uint<16> raw_lane_0 = raw.extract<0, 15>();
  hw_uint<16> raw_lane_1 = raw.extract<16, 31>();
  hw_uint<16> raw_lane_2 = raw.extract<32, 47>();
  hw_uint<16> raw_lane_3 = raw.extract<48, 63>();
  hw_uint<16> raw_lane_4 = raw.extract<64, 79>();
  hw_uint<16> raw_lane_5 = raw.extract<80, 95>();
  hw_uint<16> raw_lane_6 = raw.extract<96, 111>();
  hw_uint<16> raw_lane_7 = raw.extract<112, 127>();
  hw_uint<16> raw_lane_8 = raw.extract<128, 143>();
  hw_uint<16> raw_lane_9 = raw.extract<144, 159>();
  hw_uint<16> raw_lane_10 = raw.extract<160, 175>();
  hw_uint<16> raw_lane_11 = raw.extract<176, 191>();
  hw_uint<16> raw_lane_12 = raw.extract<192, 207>();
  hw_uint<16> raw_lane_13 = raw.extract<208, 223>();
  hw_uint<16> raw_lane_14 = raw.extract<224, 239>();
  hw_uint<16> raw_lane_15 = raw.extract<240, 255>();
  hw_uint<16> raw_lane_16 = raw.extract<256, 271>();
  hw_uint<16> raw_lane_17 = raw.extract<272, 287>();
  hw_uint<16> raw_lane_18 = raw.extract<288, 303>();
  hw_uint<16> raw_lane_19 = raw.extract<304, 319>();
  hw_uint<16> raw_lane_20 = raw.extract<320, 335>();
  hw_uint<16> raw_lane_21 = raw.extract<336, 351>();
  hw_uint<16> raw_lane_22 = raw.extract<352, 367>();
  hw_uint<16> raw_lane_23 = raw.extract<368, 383>();
  hw_uint<16> raw_lane_24 = raw.extract<384, 399>();
  hw_uint<16> raw_lane_25 = raw.extract<400, 415>();
  hw_uint<16> raw_lane_26 = raw.extract<416, 431>();
  hw_uint<16> raw_lane_27 = raw.extract<432, 447>();
  hw_uint<16> raw_lane_28 = raw.extract<448, 463>();
  hw_uint<16> raw_lane_29 = raw.extract<464, 479>();
  hw_uint<16> raw_lane_30 = raw.extract<480, 495>();
  hw_uint<16> raw_lane_31 = raw.extract<496, 511>();
  hw_uint<16> raw_lane_32 = raw.extract<512, 527>();
  hw_uint<16> raw_lane_33 = raw.extract<528, 543>();
  hw_uint<16> raw_lane_34 = raw.extract<544, 559>();
  hw_uint<16> raw_lane_35 = raw.extract<560, 575>();
  hw_uint<16> raw_lane_36 = raw.extract<576, 591>();
  hw_uint<16> raw_lane_37 = raw.extract<592, 607>();
  hw_uint<16> raw_lane_38 = raw.extract<608, 623>();
  hw_uint<16> raw_lane_39 = raw.extract<624, 639>();
  hw_uint<16> raw_lane_40 = raw.extract<640, 655>();
  hw_uint<16> raw_lane_41 = raw.extract<656, 671>();
  hw_uint<16> raw_lane_42 = raw.extract<672, 687>();
  hw_uint<16> raw_lane_43 = raw.extract<688, 703>();
  hw_uint<16> raw_lane_44 = raw.extract<704, 719>();
  hw_uint<16> raw_lane_45 = raw.extract<720, 735>();
  hw_uint<16> raw_lane_46 = raw.extract<736, 751>();
  hw_uint<16> raw_lane_47 = raw.extract<752, 767>();
  hw_uint<16> raw_lane_48 = raw.extract<768, 783>();
  hw_uint<16> raw_lane_49 = raw.extract<784, 799>();
  hw_uint<16> raw_lane_50 = raw.extract<800, 815>();
  hw_uint<16> raw_lane_51 = raw.extract<816, 831>();
  hw_uint<16> raw_lane_52 = raw.extract<832, 847>();
  hw_uint<16> raw_lane_53 = raw.extract<848, 863>();
  hw_uint<16> raw_lane_54 = raw.extract<864, 879>();
  hw_uint<16> raw_lane_55 = raw.extract<880, 895>();
  hw_uint<16> raw_lane_56 = raw.extract<896, 911>();
  hw_uint<16> raw_lane_57 = raw.extract<912, 927>();
  hw_uint<16> raw_lane_58 = raw.extract<928, 943>();
  hw_uint<16> raw_lane_59 = raw.extract<944, 959>();
  hw_uint<16> raw_lane_60 = raw.extract<960, 975>();
  hw_uint<16> raw_lane_61 = raw.extract<976, 991>();
  hw_uint<16> raw_lane_62 = raw.extract<992, 1007>();
  hw_uint<16> raw_lane_63 = raw.extract<1008, 1023>();
  hw_uint<16> raw_lane_64 = raw.extract<1024, 1039>();
  hw_uint<16> raw_lane_65 = raw.extract<1040, 1055>();
  hw_uint<16> raw_lane_66 = raw.extract<1056, 1071>();
  hw_uint<16> raw_lane_67 = raw.extract<1072, 1087>();
  hw_uint<16> raw_lane_68 = raw.extract<1088, 1103>();
  hw_uint<16> raw_lane_69 = raw.extract<1104, 1119>();
  hw_uint<16> raw_lane_70 = raw.extract<1120, 1135>();
  hw_uint<16> raw_lane_71 = raw.extract<1136, 1151>();
  hw_uint<16> raw_lane_72 = raw.extract<1152, 1167>();
  hw_uint<16> raw_lane_73 = raw.extract<1168, 1183>();
  hw_uint<16> raw_lane_74 = raw.extract<1184, 1199>();
  hw_uint<16> raw_lane_75 = raw.extract<1200, 1215>();
  hw_uint<16> raw_lane_76 = raw.extract<1216, 1231>();
  hw_uint<16> raw_lane_77 = raw.extract<1232, 1247>();
  hw_uint<16> raw_lane_78 = raw.extract<1248, 1263>();
  hw_uint<16> raw_lane_79 = raw.extract<1264, 1279>();
  hw_uint<16> raw_lane_80 = raw.extract<1280, 1295>();
  hw_uint<16> raw_lane_81 = raw.extract<1296, 1311>();
  hw_uint<16> raw_lane_82 = raw.extract<1312, 1327>();
  hw_uint<16> raw_lane_83 = raw.extract<1328, 1343>();
  hw_uint<16> raw_lane_84 = raw.extract<1344, 1359>();
  hw_uint<16> raw_lane_85 = raw.extract<1360, 1375>();
  hw_uint<16> raw_lane_86 = raw.extract<1376, 1391>();
  hw_uint<16> raw_lane_87 = raw.extract<1392, 1407>();
  hw_uint<16> raw_lane_88 = raw.extract<1408, 1423>();
  hw_uint<16> raw_lane_89 = raw.extract<1424, 1439>();
  hw_uint<16> raw_lane_90 = raw.extract<1440, 1455>();
  hw_uint<16> raw_lane_91 = raw.extract<1456, 1471>();
  hw_uint<16> raw_lane_92 = raw.extract<1472, 1487>();
  hw_uint<16> raw_lane_93 = raw.extract<1488, 1503>();
  hw_uint<16> raw_lane_94 = raw.extract<1504, 1519>();
  hw_uint<16> raw_lane_95 = raw.extract<1520, 1535>();
  hw_uint<16> raw_lane_96 = raw.extract<1536, 1551>();
  hw_uint<16> raw_lane_97 = raw.extract<1552, 1567>();
  hw_uint<16> raw_lane_98 = raw.extract<1568, 1583>();
  hw_uint<16> raw_lane_99 = raw.extract<1584, 1599>();
  hw_uint<16> raw_lane_100 = raw.extract<1600, 1615>();
  hw_uint<16> raw_lane_101 = raw.extract<1616, 1631>();
  hw_uint<16> raw_lane_102 = raw.extract<1632, 1647>();
  hw_uint<16> raw_lane_103 = raw.extract<1648, 1663>();
  hw_uint<16> raw_lane_104 = raw.extract<1664, 1679>();
  hw_uint<16> raw_lane_105 = raw.extract<1680, 1695>();
  hw_uint<16> raw_lane_106 = raw.extract<1696, 1711>();
  hw_uint<16> raw_lane_107 = raw.extract<1712, 1727>();
  hw_uint<16> raw_lane_108 = raw.extract<1728, 1743>();
  hw_uint<16> raw_lane_109 = raw.extract<1744, 1759>();
  hw_uint<16> raw_lane_110 = raw.extract<1760, 1775>();
  hw_uint<16> raw_lane_111 = raw.extract<1776, 1791>();
  hw_uint<16> raw_lane_112 = raw.extract<1792, 1807>();
  hw_uint<16> raw_lane_113 = raw.extract<1808, 1823>();
  hw_uint<16> raw_lane_114 = raw.extract<1824, 1839>();
  hw_uint<16> raw_lane_115 = raw.extract<1840, 1855>();
  hw_uint<16> raw_lane_116 = raw.extract<1856, 1871>();
  hw_uint<16> raw_lane_117 = raw.extract<1872, 1887>();
  hw_uint<16> raw_lane_118 = raw.extract<1888, 1903>();
  hw_uint<16> raw_lane_119 = raw.extract<1904, 1919>();
  hw_uint<16> raw_lane_120 = raw.extract<1920, 1935>();
  hw_uint<16> raw_lane_121 = raw.extract<1936, 1951>();
  hw_uint<16> raw_lane_122 = raw.extract<1952, 1967>();
  hw_uint<16> raw_lane_123 = raw.extract<1968, 1983>();
  hw_uint<16> raw_lane_124 = raw.extract<1984, 1999>();
  hw_uint<16> raw_lane_125 = raw.extract<2000, 2015>();
  hw_uint<16> raw_lane_126 = raw.extract<2016, 2031>();
  hw_uint<16> raw_lane_127 = raw.extract<2032, 2047>();
  hw_uint<16> raw_lane_128 = raw.extract<2048, 2063>();
  hw_uint<16> raw_lane_129 = raw.extract<2064, 2079>();
  hw_uint<16> raw_lane_130 = raw.extract<2080, 2095>();
  hw_uint<16> raw_lane_131 = raw.extract<2096, 2111>();
  hw_uint<16> raw_lane_132 = raw.extract<2112, 2127>();
  hw_uint<16> raw_lane_133 = raw.extract<2128, 2143>();
  hw_uint<16> raw_lane_134 = raw.extract<2144, 2159>();
  hw_uint<16> raw_lane_135 = raw.extract<2160, 2175>();
  hw_uint<16> raw_lane_136 = raw.extract<2176, 2191>();
  hw_uint<16> raw_lane_137 = raw.extract<2192, 2207>();
  hw_uint<16> raw_lane_138 = raw.extract<2208, 2223>();
  hw_uint<16> raw_lane_139 = raw.extract<2224, 2239>();
  hw_uint<16> raw_lane_140 = raw.extract<2240, 2255>();
  hw_uint<16> raw_lane_141 = raw.extract<2256, 2271>();
  hw_uint<16> raw_lane_142 = raw.extract<2272, 2287>();
  hw_uint<16> raw_lane_143 = raw.extract<2288, 2303>();
  hw_uint<16> raw_lane_144 = raw.extract<2304, 2319>();
  hw_uint<16> raw_lane_145 = raw.extract<2320, 2335>();
  hw_uint<16> raw_lane_146 = raw.extract<2336, 2351>();
  hw_uint<16> raw_lane_147 = raw.extract<2352, 2367>();
  hw_uint<16> raw_lane_148 = raw.extract<2368, 2383>();
  hw_uint<16> raw_lane_149 = raw.extract<2384, 2399>();
  hw_uint<16> raw_lane_150 = raw.extract<2400, 2415>();
  hw_uint<16> raw_lane_151 = raw.extract<2416, 2431>();
  hw_uint<16> raw_lane_152 = raw.extract<2432, 2447>();
  hw_uint<16> raw_lane_153 = raw.extract<2448, 2463>();
  hw_uint<16> raw_lane_154 = raw.extract<2464, 2479>();
  hw_uint<16> raw_lane_155 = raw.extract<2480, 2495>();
  hw_uint<16> raw_lane_156 = raw.extract<2496, 2511>();
  hw_uint<16> raw_lane_157 = raw.extract<2512, 2527>();
  hw_uint<16> raw_lane_158 = raw.extract<2528, 2543>();
  hw_uint<16> raw_lane_159 = raw.extract<2544, 2559>();
  hw_uint<16> raw_lane_160 = raw.extract<2560, 2575>();
  hw_uint<16> raw_lane_161 = raw.extract<2576, 2591>();
  hw_uint<16> raw_lane_162 = raw.extract<2592, 2607>();
  hw_uint<16> raw_lane_163 = raw.extract<2608, 2623>();
  hw_uint<16> raw_lane_164 = raw.extract<2624, 2639>();
  hw_uint<16> raw_lane_165 = raw.extract<2640, 2655>();
  hw_uint<16> raw_lane_166 = raw.extract<2656, 2671>();
  hw_uint<16> raw_lane_167 = raw.extract<2672, 2687>();
  hw_uint<16> raw_lane_168 = raw.extract<2688, 2703>();
  hw_uint<16> raw_lane_169 = raw.extract<2704, 2719>();
  hw_uint<16> raw_lane_170 = raw.extract<2720, 2735>();
  hw_uint<16> raw_lane_171 = raw.extract<2736, 2751>();
  hw_uint<16> raw_lane_172 = raw.extract<2752, 2767>();
  hw_uint<16> raw_lane_173 = raw.extract<2768, 2783>();
  hw_uint<16> raw_lane_174 = raw.extract<2784, 2799>();
  hw_uint<16> raw_lane_175 = raw.extract<2800, 2815>();
  hw_uint<16> raw_lane_176 = raw.extract<2816, 2831>();
  hw_uint<16> raw_lane_177 = raw.extract<2832, 2847>();
  hw_uint<16> raw_lane_178 = raw.extract<2848, 2863>();
  hw_uint<16> raw_lane_179 = raw.extract<2864, 2879>();
  hw_uint<16> raw_lane_180 = raw.extract<2880, 2895>();
  hw_uint<16> raw_lane_181 = raw.extract<2896, 2911>();
  hw_uint<16> raw_lane_182 = raw.extract<2912, 2927>();
  hw_uint<16> raw_lane_183 = raw.extract<2928, 2943>();
  hw_uint<16> raw_lane_184 = raw.extract<2944, 2959>();
  hw_uint<16> raw_lane_185 = raw.extract<2960, 2975>();
  hw_uint<16> raw_lane_186 = raw.extract<2976, 2991>();
  hw_uint<16> raw_lane_187 = raw.extract<2992, 3007>();
  hw_uint<16> raw_lane_188 = raw.extract<3008, 3023>();
  hw_uint<16> raw_lane_189 = raw.extract<3024, 3039>();
  hw_uint<16> raw_lane_190 = raw.extract<3040, 3055>();
  hw_uint<16> raw_lane_191 = raw.extract<3056, 3071>();
  hw_uint<16> raw_lane_192 = raw.extract<3072, 3087>();
  hw_uint<16> raw_lane_193 = raw.extract<3088, 3103>();
  hw_uint<16> raw_lane_194 = raw.extract<3104, 3119>();
  hw_uint<16> raw_lane_195 = raw.extract<3120, 3135>();
  hw_uint<16> raw_lane_196 = raw.extract<3136, 3151>();
  hw_uint<16> raw_lane_197 = raw.extract<3152, 3167>();
  hw_uint<16> raw_lane_198 = raw.extract<3168, 3183>();
  hw_uint<16> raw_lane_199 = raw.extract<3184, 3199>();
  hw_uint<16> raw_lane_200 = raw.extract<3200, 3215>();
  hw_uint<16> raw_lane_201 = raw.extract<3216, 3231>();
  hw_uint<16> raw_lane_202 = raw.extract<3232, 3247>();
  hw_uint<16> raw_lane_203 = raw.extract<3248, 3263>();
  hw_uint<16> raw_lane_204 = raw.extract<3264, 3279>();
  hw_uint<16> raw_lane_205 = raw.extract<3280, 3295>();
  hw_uint<16> raw_lane_206 = raw.extract<3296, 3311>();
  hw_uint<16> raw_lane_207 = raw.extract<3312, 3327>();
  hw_uint<16> raw_lane_208 = raw.extract<3328, 3343>();
  hw_uint<16> raw_lane_209 = raw.extract<3344, 3359>();
  hw_uint<16> raw_lane_210 = raw.extract<3360, 3375>();
  hw_uint<16> raw_lane_211 = raw.extract<3376, 3391>();
  hw_uint<16> raw_lane_212 = raw.extract<3392, 3407>();
  hw_uint<16> raw_lane_213 = raw.extract<3408, 3423>();
  hw_uint<16> raw_lane_214 = raw.extract<3424, 3439>();
  hw_uint<16> raw_lane_215 = raw.extract<3440, 3455>();
  hw_uint<16> raw_lane_216 = raw.extract<3456, 3471>();
  hw_uint<16> raw_lane_217 = raw.extract<3472, 3487>();
  hw_uint<16> raw_lane_218 = raw.extract<3488, 3503>();
  hw_uint<16> raw_lane_219 = raw.extract<3504, 3519>();
  hw_uint<16> raw_lane_220 = raw.extract<3520, 3535>();
  hw_uint<16> raw_lane_221 = raw.extract<3536, 3551>();
  hw_uint<16> raw_lane_222 = raw.extract<3552, 3567>();
  hw_uint<16> raw_lane_223 = raw.extract<3568, 3583>();
  hw_uint<16> raw_lane_224 = raw.extract<3584, 3599>();
  hw_uint<16> raw_lane_225 = raw.extract<3600, 3615>();
  hw_uint<16> raw_lane_226 = raw.extract<3616, 3631>();
  hw_uint<16> raw_lane_227 = raw.extract<3632, 3647>();
  hw_uint<16> raw_lane_228 = raw.extract<3648, 3663>();
  hw_uint<16> raw_lane_229 = raw.extract<3664, 3679>();
  hw_uint<16> raw_lane_230 = raw.extract<3680, 3695>();
  hw_uint<16> raw_lane_231 = raw.extract<3696, 3711>();
  hw_uint<16> raw_lane_232 = raw.extract<3712, 3727>();
  hw_uint<16> raw_lane_233 = raw.extract<3728, 3743>();
  hw_uint<16> raw_lane_234 = raw.extract<3744, 3759>();
  hw_uint<16> raw_lane_235 = raw.extract<3760, 3775>();
  hw_uint<16> raw_lane_236 = raw.extract<3776, 3791>();
  hw_uint<16> raw_lane_237 = raw.extract<3792, 3807>();
  hw_uint<16> raw_lane_238 = raw.extract<3808, 3823>();
  hw_uint<16> raw_lane_239 = raw.extract<3824, 3839>();
  hw_uint<16> raw_lane_240 = raw.extract<3840, 3855>();
  hw_uint<16> raw_lane_241 = raw.extract<3856, 3871>();
  hw_uint<16> raw_lane_242 = raw.extract<3872, 3887>();
  hw_uint<16> raw_lane_243 = raw.extract<3888, 3903>();
  hw_uint<16> raw_lane_244 = raw.extract<3904, 3919>();
  hw_uint<16> raw_lane_245 = raw.extract<3920, 3935>();
  hw_uint<16> raw_lane_246 = raw.extract<3936, 3951>();
  hw_uint<16> raw_lane_247 = raw.extract<3952, 3967>();
  hw_uint<16> raw_lane_248 = raw.extract<3968, 3983>();
  hw_uint<16> raw_lane_249 = raw.extract<3984, 3999>();
  hw_uint<16> raw_lane_250 = raw.extract<4000, 4015>();
  hw_uint<16> raw_lane_251 = raw.extract<4016, 4031>();
  hw_uint<16> raw_lane_252 = raw.extract<4032, 4047>();
  hw_uint<16> raw_lane_253 = raw.extract<4048, 4063>();
  hw_uint<16> raw_lane_254 = raw.extract<4064, 4079>();
  hw_uint<16> raw_lane_255 = raw.extract<4080, 4095>();
  hw_uint<16> raw_lane_256 = raw.extract<4096, 4111>();
  hw_uint<16> raw_lane_257 = raw.extract<4112, 4127>();
  hw_uint<16> raw_lane_258 = raw.extract<4128, 4143>();
  hw_uint<16> raw_lane_259 = raw.extract<4144, 4159>();
  hw_uint<16> raw_lane_260 = raw.extract<4160, 4175>();
  hw_uint<16> raw_lane_261 = raw.extract<4176, 4191>();
  hw_uint<16> raw_lane_262 = raw.extract<4192, 4207>();
  hw_uint<16> raw_lane_263 = raw.extract<4208, 4223>();
  hw_uint<16> raw_lane_264 = raw.extract<4224, 4239>();
  hw_uint<16> raw_lane_265 = raw.extract<4240, 4255>();
  hw_uint<16> raw_lane_266 = raw.extract<4256, 4271>();
  hw_uint<16> raw_lane_267 = raw.extract<4272, 4287>();
  hw_uint<16> raw_lane_268 = raw.extract<4288, 4303>();
  hw_uint<16> raw_lane_269 = raw.extract<4304, 4319>();
  hw_uint<16> raw_lane_270 = raw.extract<4320, 4335>();
  hw_uint<16> raw_lane_271 = raw.extract<4336, 4351>();
  hw_uint<16> raw_lane_272 = raw.extract<4352, 4367>();
  hw_uint<16> raw_lane_273 = raw.extract<4368, 4383>();
  hw_uint<16> raw_lane_274 = raw.extract<4384, 4399>();
  hw_uint<16> raw_lane_275 = raw.extract<4400, 4415>();
  hw_uint<16> raw_lane_276 = raw.extract<4416, 4431>();
  hw_uint<16> raw_lane_277 = raw.extract<4432, 4447>();
  hw_uint<16> raw_lane_278 = raw.extract<4448, 4463>();
  hw_uint<16> raw_lane_279 = raw.extract<4464, 4479>();
  hw_uint<16> raw_lane_280 = raw.extract<4480, 4495>();
  hw_uint<16> raw_lane_281 = raw.extract<4496, 4511>();
  hw_uint<16> raw_lane_282 = raw.extract<4512, 4527>();
  hw_uint<16> raw_lane_283 = raw.extract<4528, 4543>();
  hw_uint<16> raw_lane_284 = raw.extract<4544, 4559>();
  hw_uint<16> raw_lane_285 = raw.extract<4560, 4575>();
  hw_uint<16> raw_lane_286 = raw.extract<4576, 4591>();
  hw_uint<16> raw_lane_287 = raw.extract<4592, 4607>();
  hw_uint<16> raw_lane_288 = raw.extract<4608, 4623>();
  hw_uint<16> raw_lane_289 = raw.extract<4624, 4639>();
  hw_uint<16> raw_lane_290 = raw.extract<4640, 4655>();
  hw_uint<16> raw_lane_291 = raw.extract<4656, 4671>();
  hw_uint<16> raw_lane_292 = raw.extract<4672, 4687>();
  hw_uint<16> raw_lane_293 = raw.extract<4688, 4703>();
  hw_uint<16> raw_lane_294 = raw.extract<4704, 4719>();
  hw_uint<16> raw_lane_295 = raw.extract<4720, 4735>();
  hw_uint<16> raw_lane_296 = raw.extract<4736, 4751>();
  hw_uint<16> raw_lane_297 = raw.extract<4752, 4767>();
  hw_uint<16> raw_lane_298 = raw.extract<4768, 4783>();
  hw_uint<16> raw_lane_299 = raw.extract<4784, 4799>();
  hw_uint<16> raw_lane_300 = raw.extract<4800, 4815>();
  hw_uint<16> raw_lane_301 = raw.extract<4816, 4831>();
  hw_uint<16> raw_lane_302 = raw.extract<4832, 4847>();
  hw_uint<16> raw_lane_303 = raw.extract<4848, 4863>();
  hw_uint<16> raw_lane_304 = raw.extract<4864, 4879>();
  hw_uint<16> raw_lane_305 = raw.extract<4880, 4895>();
  hw_uint<16> raw_lane_306 = raw.extract<4896, 4911>();
  hw_uint<16> raw_lane_307 = raw.extract<4912, 4927>();
  hw_uint<16> raw_lane_308 = raw.extract<4928, 4943>();
  hw_uint<16> raw_lane_309 = raw.extract<4944, 4959>();
  hw_uint<16> raw_lane_310 = raw.extract<4960, 4975>();
  hw_uint<16> raw_lane_311 = raw.extract<4976, 4991>();
  hw_uint<16> raw_lane_312 = raw.extract<4992, 5007>();
  hw_uint<16> raw_lane_313 = raw.extract<5008, 5023>();
  hw_uint<16> raw_lane_314 = raw.extract<5024, 5039>();
  hw_uint<16> raw_lane_315 = raw.extract<5040, 5055>();
  hw_uint<16> raw_lane_316 = raw.extract<5056, 5071>();
  hw_uint<16> raw_lane_317 = raw.extract<5072, 5087>();
  hw_uint<16> raw_lane_318 = raw.extract<5088, 5103>();
  hw_uint<16> raw_lane_319 = raw.extract<5104, 5119>();
  hw_uint<16> raw_lane_320 = raw.extract<5120, 5135>();
  hw_uint<16> raw_lane_321 = raw.extract<5136, 5151>();
  hw_uint<16> raw_lane_322 = raw.extract<5152, 5167>();
  hw_uint<16> raw_lane_323 = raw.extract<5168, 5183>();
  hw_uint<16> raw_lane_324 = raw.extract<5184, 5199>();
  hw_uint<16> raw_lane_325 = raw.extract<5200, 5215>();
  hw_uint<16> raw_lane_326 = raw.extract<5216, 5231>();
  hw_uint<16> raw_lane_327 = raw.extract<5232, 5247>();
  hw_uint<16> raw_lane_328 = raw.extract<5248, 5263>();
  hw_uint<16> raw_lane_329 = raw.extract<5264, 5279>();
  hw_uint<16> raw_lane_330 = raw.extract<5280, 5295>();
  hw_uint<16> raw_lane_331 = raw.extract<5296, 5311>();
  hw_uint<16> raw_lane_332 = raw.extract<5312, 5327>();
  hw_uint<16> raw_lane_333 = raw.extract<5328, 5343>();
  hw_uint<16> raw_lane_334 = raw.extract<5344, 5359>();
  hw_uint<16> raw_lane_335 = raw.extract<5360, 5375>();
  hw_uint<16> raw_lane_336 = raw.extract<5376, 5391>();
  hw_uint<16> raw_lane_337 = raw.extract<5392, 5407>();
  hw_uint<16> raw_lane_338 = raw.extract<5408, 5423>();
  hw_uint<16> raw_lane_339 = raw.extract<5424, 5439>();
  hw_uint<16> raw_lane_340 = raw.extract<5440, 5455>();
  hw_uint<16> raw_lane_341 = raw.extract<5456, 5471>();
  hw_uint<16> raw_lane_342 = raw.extract<5472, 5487>();
  hw_uint<16> raw_lane_343 = raw.extract<5488, 5503>();
  hw_uint<16> raw_lane_344 = raw.extract<5504, 5519>();
  hw_uint<16> raw_lane_345 = raw.extract<5520, 5535>();
  hw_uint<16> raw_lane_346 = raw.extract<5536, 5551>();
  hw_uint<16> raw_lane_347 = raw.extract<5552, 5567>();
  hw_uint<16> raw_lane_348 = raw.extract<5568, 5583>();
  hw_uint<16> raw_lane_349 = raw.extract<5584, 5599>();
  hw_uint<16> raw_lane_350 = raw.extract<5600, 5615>();
  hw_uint<16> raw_lane_351 = raw.extract<5616, 5631>();
  hw_uint<16> raw_lane_352 = raw.extract<5632, 5647>();
  hw_uint<16> raw_lane_353 = raw.extract<5648, 5663>();
  hw_uint<16> raw_lane_354 = raw.extract<5664, 5679>();
  hw_uint<16> raw_lane_355 = raw.extract<5680, 5695>();
  hw_uint<16> raw_lane_356 = raw.extract<5696, 5711>();
  hw_uint<16> raw_lane_357 = raw.extract<5712, 5727>();
  hw_uint<16> raw_lane_358 = raw.extract<5728, 5743>();
  hw_uint<16> raw_lane_359 = raw.extract<5744, 5759>();
  hw_uint<16> raw_lane_360 = raw.extract<5760, 5775>();
  hw_uint<16> raw_lane_361 = raw.extract<5776, 5791>();
  hw_uint<16> raw_lane_362 = raw.extract<5792, 5807>();
  hw_uint<16> raw_lane_363 = raw.extract<5808, 5823>();
  hw_uint<16> raw_lane_364 = raw.extract<5824, 5839>();
  hw_uint<16> raw_lane_365 = raw.extract<5840, 5855>();
  hw_uint<16> raw_lane_366 = raw.extract<5856, 5871>();
  hw_uint<16> raw_lane_367 = raw.extract<5872, 5887>();
  hw_uint<16> raw_lane_368 = raw.extract<5888, 5903>();
  hw_uint<16> raw_lane_369 = raw.extract<5904, 5919>();
  hw_uint<16> raw_lane_370 = raw.extract<5920, 5935>();
  hw_uint<16> raw_lane_371 = raw.extract<5936, 5951>();
  hw_uint<16> raw_lane_372 = raw.extract<5952, 5967>();
  hw_uint<16> raw_lane_373 = raw.extract<5968, 5983>();
  hw_uint<16> raw_lane_374 = raw.extract<5984, 5999>();
  hw_uint<16> raw_lane_375 = raw.extract<6000, 6015>();
  hw_uint<16> raw_lane_376 = raw.extract<6016, 6031>();
  hw_uint<16> raw_lane_377 = raw.extract<6032, 6047>();
  hw_uint<16> raw_lane_378 = raw.extract<6048, 6063>();
  hw_uint<16> raw_lane_379 = raw.extract<6064, 6079>();
  hw_uint<16> raw_lane_380 = raw.extract<6080, 6095>();
  hw_uint<16> raw_lane_381 = raw.extract<6096, 6111>();
  hw_uint<16> raw_lane_382 = raw.extract<6112, 6127>();
  hw_uint<16> raw_lane_383 = raw.extract<6128, 6143>();
  hw_uint<16> raw_lane_384 = raw.extract<6144, 6159>();
  hw_uint<16> raw_lane_385 = raw.extract<6160, 6175>();
  hw_uint<16> raw_lane_386 = raw.extract<6176, 6191>();
  hw_uint<16> raw_lane_387 = raw.extract<6192, 6207>();
  hw_uint<16> raw_lane_388 = raw.extract<6208, 6223>();
  hw_uint<16> raw_lane_389 = raw.extract<6224, 6239>();
  hw_uint<16> raw_lane_390 = raw.extract<6240, 6255>();
  hw_uint<16> raw_lane_391 = raw.extract<6256, 6271>();
  hw_uint<16> raw_lane_392 = raw.extract<6272, 6287>();
  hw_uint<16> raw_lane_393 = raw.extract<6288, 6303>();
  hw_uint<16> raw_lane_394 = raw.extract<6304, 6319>();
  hw_uint<16> raw_lane_395 = raw.extract<6320, 6335>();
  hw_uint<16> raw_lane_396 = raw.extract<6336, 6351>();
  hw_uint<16> raw_lane_397 = raw.extract<6352, 6367>();
  hw_uint<16> raw_lane_398 = raw.extract<6368, 6383>();
  hw_uint<16> raw_lane_399 = raw.extract<6384, 6399>();

	
  hw_uint<400 > raw_lane_24_pack;
  set_at<0, 400, 16>(raw_lane_24_pack, raw_lane_0);
  set_at<16, 400, 16>(raw_lane_24_pack, raw_lane_1);
  set_at<32, 400, 16>(raw_lane_24_pack, raw_lane_2);
  set_at<48, 400, 16>(raw_lane_24_pack, raw_lane_3);
  set_at<64, 400, 16>(raw_lane_24_pack, raw_lane_4);
  set_at<80, 400, 16>(raw_lane_24_pack, raw_lane_5);
  set_at<96, 400, 16>(raw_lane_24_pack, raw_lane_6);
  set_at<112, 400, 16>(raw_lane_24_pack, raw_lane_7);
  set_at<128, 400, 16>(raw_lane_24_pack, raw_lane_8);
  set_at<144, 400, 16>(raw_lane_24_pack, raw_lane_9);
  set_at<160, 400, 16>(raw_lane_24_pack, raw_lane_10);
  set_at<176, 400, 16>(raw_lane_24_pack, raw_lane_11);
  set_at<192, 400, 16>(raw_lane_24_pack, raw_lane_12);
  set_at<208, 400, 16>(raw_lane_24_pack, raw_lane_13);
  set_at<224, 400, 16>(raw_lane_24_pack, raw_lane_14);
  set_at<240, 400, 16>(raw_lane_24_pack, raw_lane_15);
  set_at<256, 400, 16>(raw_lane_24_pack, raw_lane_16);
  set_at<272, 400, 16>(raw_lane_24_pack, raw_lane_17);
  set_at<288, 400, 16>(raw_lane_24_pack, raw_lane_18);
  set_at<304, 400, 16>(raw_lane_24_pack, raw_lane_19);
  set_at<320, 400, 16>(raw_lane_24_pack, raw_lane_20);
  set_at<336, 400, 16>(raw_lane_24_pack, raw_lane_21);
  set_at<352, 400, 16>(raw_lane_24_pack, raw_lane_22);
  set_at<368, 400, 16>(raw_lane_24_pack, raw_lane_23);
  set_at<384, 400, 16>(raw_lane_24_pack, raw_lane_24);
  auto res_denoiseb_update_0_sm1_011 = denoiseb_generated_compute_unrolled_1(raw_lane_24_pack);

  hw_uint<400 > raw_lane_49_pack;
  set_at<0, 400, 16>(raw_lane_49_pack, raw_lane_25);
  set_at<16, 400, 16>(raw_lane_49_pack, raw_lane_26);
  set_at<32, 400, 16>(raw_lane_49_pack, raw_lane_27);
  set_at<48, 400, 16>(raw_lane_49_pack, raw_lane_28);
  set_at<64, 400, 16>(raw_lane_49_pack, raw_lane_29);
  set_at<80, 400, 16>(raw_lane_49_pack, raw_lane_30);
  set_at<96, 400, 16>(raw_lane_49_pack, raw_lane_31);
  set_at<112, 400, 16>(raw_lane_49_pack, raw_lane_32);
  set_at<128, 400, 16>(raw_lane_49_pack, raw_lane_33);
  set_at<144, 400, 16>(raw_lane_49_pack, raw_lane_34);
  set_at<160, 400, 16>(raw_lane_49_pack, raw_lane_35);
  set_at<176, 400, 16>(raw_lane_49_pack, raw_lane_36);
  set_at<192, 400, 16>(raw_lane_49_pack, raw_lane_37);
  set_at<208, 400, 16>(raw_lane_49_pack, raw_lane_38);
  set_at<224, 400, 16>(raw_lane_49_pack, raw_lane_39);
  set_at<240, 400, 16>(raw_lane_49_pack, raw_lane_40);
  set_at<256, 400, 16>(raw_lane_49_pack, raw_lane_41);
  set_at<272, 400, 16>(raw_lane_49_pack, raw_lane_42);
  set_at<288, 400, 16>(raw_lane_49_pack, raw_lane_43);
  set_at<304, 400, 16>(raw_lane_49_pack, raw_lane_44);
  set_at<320, 400, 16>(raw_lane_49_pack, raw_lane_45);
  set_at<336, 400, 16>(raw_lane_49_pack, raw_lane_46);
  set_at<352, 400, 16>(raw_lane_49_pack, raw_lane_47);
  set_at<368, 400, 16>(raw_lane_49_pack, raw_lane_48);
  set_at<384, 400, 16>(raw_lane_49_pack, raw_lane_49);
  auto res_denoiseb_update_0_sm1_113 = denoiseb_generated_compute_unrolled_1(raw_lane_49_pack);

  hw_uint<400 > raw_lane_74_pack;
  set_at<0, 400, 16>(raw_lane_74_pack, raw_lane_50);
  set_at<16, 400, 16>(raw_lane_74_pack, raw_lane_51);
  set_at<32, 400, 16>(raw_lane_74_pack, raw_lane_52);
  set_at<48, 400, 16>(raw_lane_74_pack, raw_lane_53);
  set_at<64, 400, 16>(raw_lane_74_pack, raw_lane_54);
  set_at<80, 400, 16>(raw_lane_74_pack, raw_lane_55);
  set_at<96, 400, 16>(raw_lane_74_pack, raw_lane_56);
  set_at<112, 400, 16>(raw_lane_74_pack, raw_lane_57);
  set_at<128, 400, 16>(raw_lane_74_pack, raw_lane_58);
  set_at<144, 400, 16>(raw_lane_74_pack, raw_lane_59);
  set_at<160, 400, 16>(raw_lane_74_pack, raw_lane_60);
  set_at<176, 400, 16>(raw_lane_74_pack, raw_lane_61);
  set_at<192, 400, 16>(raw_lane_74_pack, raw_lane_62);
  set_at<208, 400, 16>(raw_lane_74_pack, raw_lane_63);
  set_at<224, 400, 16>(raw_lane_74_pack, raw_lane_64);
  set_at<240, 400, 16>(raw_lane_74_pack, raw_lane_65);
  set_at<256, 400, 16>(raw_lane_74_pack, raw_lane_66);
  set_at<272, 400, 16>(raw_lane_74_pack, raw_lane_67);
  set_at<288, 400, 16>(raw_lane_74_pack, raw_lane_68);
  set_at<304, 400, 16>(raw_lane_74_pack, raw_lane_69);
  set_at<320, 400, 16>(raw_lane_74_pack, raw_lane_70);
  set_at<336, 400, 16>(raw_lane_74_pack, raw_lane_71);
  set_at<352, 400, 16>(raw_lane_74_pack, raw_lane_72);
  set_at<368, 400, 16>(raw_lane_74_pack, raw_lane_73);
  set_at<384, 400, 16>(raw_lane_74_pack, raw_lane_74);
  auto res_denoiseb_update_0_sm1_215 = denoiseb_generated_compute_unrolled_1(raw_lane_74_pack);

  hw_uint<400 > raw_lane_99_pack;
  set_at<0, 400, 16>(raw_lane_99_pack, raw_lane_75);
  set_at<16, 400, 16>(raw_lane_99_pack, raw_lane_76);
  set_at<32, 400, 16>(raw_lane_99_pack, raw_lane_77);
  set_at<48, 400, 16>(raw_lane_99_pack, raw_lane_78);
  set_at<64, 400, 16>(raw_lane_99_pack, raw_lane_79);
  set_at<80, 400, 16>(raw_lane_99_pack, raw_lane_80);
  set_at<96, 400, 16>(raw_lane_99_pack, raw_lane_81);
  set_at<112, 400, 16>(raw_lane_99_pack, raw_lane_82);
  set_at<128, 400, 16>(raw_lane_99_pack, raw_lane_83);
  set_at<144, 400, 16>(raw_lane_99_pack, raw_lane_84);
  set_at<160, 400, 16>(raw_lane_99_pack, raw_lane_85);
  set_at<176, 400, 16>(raw_lane_99_pack, raw_lane_86);
  set_at<192, 400, 16>(raw_lane_99_pack, raw_lane_87);
  set_at<208, 400, 16>(raw_lane_99_pack, raw_lane_88);
  set_at<224, 400, 16>(raw_lane_99_pack, raw_lane_89);
  set_at<240, 400, 16>(raw_lane_99_pack, raw_lane_90);
  set_at<256, 400, 16>(raw_lane_99_pack, raw_lane_91);
  set_at<272, 400, 16>(raw_lane_99_pack, raw_lane_92);
  set_at<288, 400, 16>(raw_lane_99_pack, raw_lane_93);
  set_at<304, 400, 16>(raw_lane_99_pack, raw_lane_94);
  set_at<320, 400, 16>(raw_lane_99_pack, raw_lane_95);
  set_at<336, 400, 16>(raw_lane_99_pack, raw_lane_96);
  set_at<352, 400, 16>(raw_lane_99_pack, raw_lane_97);
  set_at<368, 400, 16>(raw_lane_99_pack, raw_lane_98);
  set_at<384, 400, 16>(raw_lane_99_pack, raw_lane_99);
  auto res_denoiseb_update_0_sm1_317 = denoiseb_generated_compute_unrolled_1(raw_lane_99_pack);

  hw_uint<400 > raw_lane_124_pack;
  set_at<0, 400, 16>(raw_lane_124_pack, raw_lane_100);
  set_at<16, 400, 16>(raw_lane_124_pack, raw_lane_101);
  set_at<32, 400, 16>(raw_lane_124_pack, raw_lane_102);
  set_at<48, 400, 16>(raw_lane_124_pack, raw_lane_103);
  set_at<64, 400, 16>(raw_lane_124_pack, raw_lane_104);
  set_at<80, 400, 16>(raw_lane_124_pack, raw_lane_105);
  set_at<96, 400, 16>(raw_lane_124_pack, raw_lane_106);
  set_at<112, 400, 16>(raw_lane_124_pack, raw_lane_107);
  set_at<128, 400, 16>(raw_lane_124_pack, raw_lane_108);
  set_at<144, 400, 16>(raw_lane_124_pack, raw_lane_109);
  set_at<160, 400, 16>(raw_lane_124_pack, raw_lane_110);
  set_at<176, 400, 16>(raw_lane_124_pack, raw_lane_111);
  set_at<192, 400, 16>(raw_lane_124_pack, raw_lane_112);
  set_at<208, 400, 16>(raw_lane_124_pack, raw_lane_113);
  set_at<224, 400, 16>(raw_lane_124_pack, raw_lane_114);
  set_at<240, 400, 16>(raw_lane_124_pack, raw_lane_115);
  set_at<256, 400, 16>(raw_lane_124_pack, raw_lane_116);
  set_at<272, 400, 16>(raw_lane_124_pack, raw_lane_117);
  set_at<288, 400, 16>(raw_lane_124_pack, raw_lane_118);
  set_at<304, 400, 16>(raw_lane_124_pack, raw_lane_119);
  set_at<320, 400, 16>(raw_lane_124_pack, raw_lane_120);
  set_at<336, 400, 16>(raw_lane_124_pack, raw_lane_121);
  set_at<352, 400, 16>(raw_lane_124_pack, raw_lane_122);
  set_at<368, 400, 16>(raw_lane_124_pack, raw_lane_123);
  set_at<384, 400, 16>(raw_lane_124_pack, raw_lane_124);
  auto res_denoiseb_update_0_sm1_419 = denoiseb_generated_compute_unrolled_1(raw_lane_124_pack);

  hw_uint<400 > raw_lane_149_pack;
  set_at<0, 400, 16>(raw_lane_149_pack, raw_lane_125);
  set_at<16, 400, 16>(raw_lane_149_pack, raw_lane_126);
  set_at<32, 400, 16>(raw_lane_149_pack, raw_lane_127);
  set_at<48, 400, 16>(raw_lane_149_pack, raw_lane_128);
  set_at<64, 400, 16>(raw_lane_149_pack, raw_lane_129);
  set_at<80, 400, 16>(raw_lane_149_pack, raw_lane_130);
  set_at<96, 400, 16>(raw_lane_149_pack, raw_lane_131);
  set_at<112, 400, 16>(raw_lane_149_pack, raw_lane_132);
  set_at<128, 400, 16>(raw_lane_149_pack, raw_lane_133);
  set_at<144, 400, 16>(raw_lane_149_pack, raw_lane_134);
  set_at<160, 400, 16>(raw_lane_149_pack, raw_lane_135);
  set_at<176, 400, 16>(raw_lane_149_pack, raw_lane_136);
  set_at<192, 400, 16>(raw_lane_149_pack, raw_lane_137);
  set_at<208, 400, 16>(raw_lane_149_pack, raw_lane_138);
  set_at<224, 400, 16>(raw_lane_149_pack, raw_lane_139);
  set_at<240, 400, 16>(raw_lane_149_pack, raw_lane_140);
  set_at<256, 400, 16>(raw_lane_149_pack, raw_lane_141);
  set_at<272, 400, 16>(raw_lane_149_pack, raw_lane_142);
  set_at<288, 400, 16>(raw_lane_149_pack, raw_lane_143);
  set_at<304, 400, 16>(raw_lane_149_pack, raw_lane_144);
  set_at<320, 400, 16>(raw_lane_149_pack, raw_lane_145);
  set_at<336, 400, 16>(raw_lane_149_pack, raw_lane_146);
  set_at<352, 400, 16>(raw_lane_149_pack, raw_lane_147);
  set_at<368, 400, 16>(raw_lane_149_pack, raw_lane_148);
  set_at<384, 400, 16>(raw_lane_149_pack, raw_lane_149);
  auto res_denoiseb_update_0_sm1_521 = denoiseb_generated_compute_unrolled_1(raw_lane_149_pack);

  hw_uint<400 > raw_lane_174_pack;
  set_at<0, 400, 16>(raw_lane_174_pack, raw_lane_150);
  set_at<16, 400, 16>(raw_lane_174_pack, raw_lane_151);
  set_at<32, 400, 16>(raw_lane_174_pack, raw_lane_152);
  set_at<48, 400, 16>(raw_lane_174_pack, raw_lane_153);
  set_at<64, 400, 16>(raw_lane_174_pack, raw_lane_154);
  set_at<80, 400, 16>(raw_lane_174_pack, raw_lane_155);
  set_at<96, 400, 16>(raw_lane_174_pack, raw_lane_156);
  set_at<112, 400, 16>(raw_lane_174_pack, raw_lane_157);
  set_at<128, 400, 16>(raw_lane_174_pack, raw_lane_158);
  set_at<144, 400, 16>(raw_lane_174_pack, raw_lane_159);
  set_at<160, 400, 16>(raw_lane_174_pack, raw_lane_160);
  set_at<176, 400, 16>(raw_lane_174_pack, raw_lane_161);
  set_at<192, 400, 16>(raw_lane_174_pack, raw_lane_162);
  set_at<208, 400, 16>(raw_lane_174_pack, raw_lane_163);
  set_at<224, 400, 16>(raw_lane_174_pack, raw_lane_164);
  set_at<240, 400, 16>(raw_lane_174_pack, raw_lane_165);
  set_at<256, 400, 16>(raw_lane_174_pack, raw_lane_166);
  set_at<272, 400, 16>(raw_lane_174_pack, raw_lane_167);
  set_at<288, 400, 16>(raw_lane_174_pack, raw_lane_168);
  set_at<304, 400, 16>(raw_lane_174_pack, raw_lane_169);
  set_at<320, 400, 16>(raw_lane_174_pack, raw_lane_170);
  set_at<336, 400, 16>(raw_lane_174_pack, raw_lane_171);
  set_at<352, 400, 16>(raw_lane_174_pack, raw_lane_172);
  set_at<368, 400, 16>(raw_lane_174_pack, raw_lane_173);
  set_at<384, 400, 16>(raw_lane_174_pack, raw_lane_174);
  auto res_denoiseb_update_0_sm1_623 = denoiseb_generated_compute_unrolled_1(raw_lane_174_pack);

  hw_uint<400 > raw_lane_199_pack;
  set_at<0, 400, 16>(raw_lane_199_pack, raw_lane_175);
  set_at<16, 400, 16>(raw_lane_199_pack, raw_lane_176);
  set_at<32, 400, 16>(raw_lane_199_pack, raw_lane_177);
  set_at<48, 400, 16>(raw_lane_199_pack, raw_lane_178);
  set_at<64, 400, 16>(raw_lane_199_pack, raw_lane_179);
  set_at<80, 400, 16>(raw_lane_199_pack, raw_lane_180);
  set_at<96, 400, 16>(raw_lane_199_pack, raw_lane_181);
  set_at<112, 400, 16>(raw_lane_199_pack, raw_lane_182);
  set_at<128, 400, 16>(raw_lane_199_pack, raw_lane_183);
  set_at<144, 400, 16>(raw_lane_199_pack, raw_lane_184);
  set_at<160, 400, 16>(raw_lane_199_pack, raw_lane_185);
  set_at<176, 400, 16>(raw_lane_199_pack, raw_lane_186);
  set_at<192, 400, 16>(raw_lane_199_pack, raw_lane_187);
  set_at<208, 400, 16>(raw_lane_199_pack, raw_lane_188);
  set_at<224, 400, 16>(raw_lane_199_pack, raw_lane_189);
  set_at<240, 400, 16>(raw_lane_199_pack, raw_lane_190);
  set_at<256, 400, 16>(raw_lane_199_pack, raw_lane_191);
  set_at<272, 400, 16>(raw_lane_199_pack, raw_lane_192);
  set_at<288, 400, 16>(raw_lane_199_pack, raw_lane_193);
  set_at<304, 400, 16>(raw_lane_199_pack, raw_lane_194);
  set_at<320, 400, 16>(raw_lane_199_pack, raw_lane_195);
  set_at<336, 400, 16>(raw_lane_199_pack, raw_lane_196);
  set_at<352, 400, 16>(raw_lane_199_pack, raw_lane_197);
  set_at<368, 400, 16>(raw_lane_199_pack, raw_lane_198);
  set_at<384, 400, 16>(raw_lane_199_pack, raw_lane_199);
  auto res_denoiseb_update_0_sm1_725 = denoiseb_generated_compute_unrolled_1(raw_lane_199_pack);

  hw_uint<400 > raw_lane_224_pack;
  set_at<0, 400, 16>(raw_lane_224_pack, raw_lane_200);
  set_at<16, 400, 16>(raw_lane_224_pack, raw_lane_201);
  set_at<32, 400, 16>(raw_lane_224_pack, raw_lane_202);
  set_at<48, 400, 16>(raw_lane_224_pack, raw_lane_203);
  set_at<64, 400, 16>(raw_lane_224_pack, raw_lane_204);
  set_at<80, 400, 16>(raw_lane_224_pack, raw_lane_205);
  set_at<96, 400, 16>(raw_lane_224_pack, raw_lane_206);
  set_at<112, 400, 16>(raw_lane_224_pack, raw_lane_207);
  set_at<128, 400, 16>(raw_lane_224_pack, raw_lane_208);
  set_at<144, 400, 16>(raw_lane_224_pack, raw_lane_209);
  set_at<160, 400, 16>(raw_lane_224_pack, raw_lane_210);
  set_at<176, 400, 16>(raw_lane_224_pack, raw_lane_211);
  set_at<192, 400, 16>(raw_lane_224_pack, raw_lane_212);
  set_at<208, 400, 16>(raw_lane_224_pack, raw_lane_213);
  set_at<224, 400, 16>(raw_lane_224_pack, raw_lane_214);
  set_at<240, 400, 16>(raw_lane_224_pack, raw_lane_215);
  set_at<256, 400, 16>(raw_lane_224_pack, raw_lane_216);
  set_at<272, 400, 16>(raw_lane_224_pack, raw_lane_217);
  set_at<288, 400, 16>(raw_lane_224_pack, raw_lane_218);
  set_at<304, 400, 16>(raw_lane_224_pack, raw_lane_219);
  set_at<320, 400, 16>(raw_lane_224_pack, raw_lane_220);
  set_at<336, 400, 16>(raw_lane_224_pack, raw_lane_221);
  set_at<352, 400, 16>(raw_lane_224_pack, raw_lane_222);
  set_at<368, 400, 16>(raw_lane_224_pack, raw_lane_223);
  set_at<384, 400, 16>(raw_lane_224_pack, raw_lane_224);
  auto res_denoiseb_update_0_sm1_827 = denoiseb_generated_compute_unrolled_1(raw_lane_224_pack);

  hw_uint<400 > raw_lane_249_pack;
  set_at<0, 400, 16>(raw_lane_249_pack, raw_lane_225);
  set_at<16, 400, 16>(raw_lane_249_pack, raw_lane_226);
  set_at<32, 400, 16>(raw_lane_249_pack, raw_lane_227);
  set_at<48, 400, 16>(raw_lane_249_pack, raw_lane_228);
  set_at<64, 400, 16>(raw_lane_249_pack, raw_lane_229);
  set_at<80, 400, 16>(raw_lane_249_pack, raw_lane_230);
  set_at<96, 400, 16>(raw_lane_249_pack, raw_lane_231);
  set_at<112, 400, 16>(raw_lane_249_pack, raw_lane_232);
  set_at<128, 400, 16>(raw_lane_249_pack, raw_lane_233);
  set_at<144, 400, 16>(raw_lane_249_pack, raw_lane_234);
  set_at<160, 400, 16>(raw_lane_249_pack, raw_lane_235);
  set_at<176, 400, 16>(raw_lane_249_pack, raw_lane_236);
  set_at<192, 400, 16>(raw_lane_249_pack, raw_lane_237);
  set_at<208, 400, 16>(raw_lane_249_pack, raw_lane_238);
  set_at<224, 400, 16>(raw_lane_249_pack, raw_lane_239);
  set_at<240, 400, 16>(raw_lane_249_pack, raw_lane_240);
  set_at<256, 400, 16>(raw_lane_249_pack, raw_lane_241);
  set_at<272, 400, 16>(raw_lane_249_pack, raw_lane_242);
  set_at<288, 400, 16>(raw_lane_249_pack, raw_lane_243);
  set_at<304, 400, 16>(raw_lane_249_pack, raw_lane_244);
  set_at<320, 400, 16>(raw_lane_249_pack, raw_lane_245);
  set_at<336, 400, 16>(raw_lane_249_pack, raw_lane_246);
  set_at<352, 400, 16>(raw_lane_249_pack, raw_lane_247);
  set_at<368, 400, 16>(raw_lane_249_pack, raw_lane_248);
  set_at<384, 400, 16>(raw_lane_249_pack, raw_lane_249);
  auto res_denoiseb_update_0_sm1_929 = denoiseb_generated_compute_unrolled_1(raw_lane_249_pack);

  hw_uint<400 > raw_lane_274_pack;
  set_at<0, 400, 16>(raw_lane_274_pack, raw_lane_250);
  set_at<16, 400, 16>(raw_lane_274_pack, raw_lane_251);
  set_at<32, 400, 16>(raw_lane_274_pack, raw_lane_252);
  set_at<48, 400, 16>(raw_lane_274_pack, raw_lane_253);
  set_at<64, 400, 16>(raw_lane_274_pack, raw_lane_254);
  set_at<80, 400, 16>(raw_lane_274_pack, raw_lane_255);
  set_at<96, 400, 16>(raw_lane_274_pack, raw_lane_256);
  set_at<112, 400, 16>(raw_lane_274_pack, raw_lane_257);
  set_at<128, 400, 16>(raw_lane_274_pack, raw_lane_258);
  set_at<144, 400, 16>(raw_lane_274_pack, raw_lane_259);
  set_at<160, 400, 16>(raw_lane_274_pack, raw_lane_260);
  set_at<176, 400, 16>(raw_lane_274_pack, raw_lane_261);
  set_at<192, 400, 16>(raw_lane_274_pack, raw_lane_262);
  set_at<208, 400, 16>(raw_lane_274_pack, raw_lane_263);
  set_at<224, 400, 16>(raw_lane_274_pack, raw_lane_264);
  set_at<240, 400, 16>(raw_lane_274_pack, raw_lane_265);
  set_at<256, 400, 16>(raw_lane_274_pack, raw_lane_266);
  set_at<272, 400, 16>(raw_lane_274_pack, raw_lane_267);
  set_at<288, 400, 16>(raw_lane_274_pack, raw_lane_268);
  set_at<304, 400, 16>(raw_lane_274_pack, raw_lane_269);
  set_at<320, 400, 16>(raw_lane_274_pack, raw_lane_270);
  set_at<336, 400, 16>(raw_lane_274_pack, raw_lane_271);
  set_at<352, 400, 16>(raw_lane_274_pack, raw_lane_272);
  set_at<368, 400, 16>(raw_lane_274_pack, raw_lane_273);
  set_at<384, 400, 16>(raw_lane_274_pack, raw_lane_274);
  auto res_denoiseb_update_0_sm1_1031 = denoiseb_generated_compute_unrolled_1(raw_lane_274_pack);

  hw_uint<400 > raw_lane_299_pack;
  set_at<0, 400, 16>(raw_lane_299_pack, raw_lane_275);
  set_at<16, 400, 16>(raw_lane_299_pack, raw_lane_276);
  set_at<32, 400, 16>(raw_lane_299_pack, raw_lane_277);
  set_at<48, 400, 16>(raw_lane_299_pack, raw_lane_278);
  set_at<64, 400, 16>(raw_lane_299_pack, raw_lane_279);
  set_at<80, 400, 16>(raw_lane_299_pack, raw_lane_280);
  set_at<96, 400, 16>(raw_lane_299_pack, raw_lane_281);
  set_at<112, 400, 16>(raw_lane_299_pack, raw_lane_282);
  set_at<128, 400, 16>(raw_lane_299_pack, raw_lane_283);
  set_at<144, 400, 16>(raw_lane_299_pack, raw_lane_284);
  set_at<160, 400, 16>(raw_lane_299_pack, raw_lane_285);
  set_at<176, 400, 16>(raw_lane_299_pack, raw_lane_286);
  set_at<192, 400, 16>(raw_lane_299_pack, raw_lane_287);
  set_at<208, 400, 16>(raw_lane_299_pack, raw_lane_288);
  set_at<224, 400, 16>(raw_lane_299_pack, raw_lane_289);
  set_at<240, 400, 16>(raw_lane_299_pack, raw_lane_290);
  set_at<256, 400, 16>(raw_lane_299_pack, raw_lane_291);
  set_at<272, 400, 16>(raw_lane_299_pack, raw_lane_292);
  set_at<288, 400, 16>(raw_lane_299_pack, raw_lane_293);
  set_at<304, 400, 16>(raw_lane_299_pack, raw_lane_294);
  set_at<320, 400, 16>(raw_lane_299_pack, raw_lane_295);
  set_at<336, 400, 16>(raw_lane_299_pack, raw_lane_296);
  set_at<352, 400, 16>(raw_lane_299_pack, raw_lane_297);
  set_at<368, 400, 16>(raw_lane_299_pack, raw_lane_298);
  set_at<384, 400, 16>(raw_lane_299_pack, raw_lane_299);
  auto res_denoiseb_update_0_sm1_1133 = denoiseb_generated_compute_unrolled_1(raw_lane_299_pack);

  hw_uint<400 > raw_lane_324_pack;
  set_at<0, 400, 16>(raw_lane_324_pack, raw_lane_300);
  set_at<16, 400, 16>(raw_lane_324_pack, raw_lane_301);
  set_at<32, 400, 16>(raw_lane_324_pack, raw_lane_302);
  set_at<48, 400, 16>(raw_lane_324_pack, raw_lane_303);
  set_at<64, 400, 16>(raw_lane_324_pack, raw_lane_304);
  set_at<80, 400, 16>(raw_lane_324_pack, raw_lane_305);
  set_at<96, 400, 16>(raw_lane_324_pack, raw_lane_306);
  set_at<112, 400, 16>(raw_lane_324_pack, raw_lane_307);
  set_at<128, 400, 16>(raw_lane_324_pack, raw_lane_308);
  set_at<144, 400, 16>(raw_lane_324_pack, raw_lane_309);
  set_at<160, 400, 16>(raw_lane_324_pack, raw_lane_310);
  set_at<176, 400, 16>(raw_lane_324_pack, raw_lane_311);
  set_at<192, 400, 16>(raw_lane_324_pack, raw_lane_312);
  set_at<208, 400, 16>(raw_lane_324_pack, raw_lane_313);
  set_at<224, 400, 16>(raw_lane_324_pack, raw_lane_314);
  set_at<240, 400, 16>(raw_lane_324_pack, raw_lane_315);
  set_at<256, 400, 16>(raw_lane_324_pack, raw_lane_316);
  set_at<272, 400, 16>(raw_lane_324_pack, raw_lane_317);
  set_at<288, 400, 16>(raw_lane_324_pack, raw_lane_318);
  set_at<304, 400, 16>(raw_lane_324_pack, raw_lane_319);
  set_at<320, 400, 16>(raw_lane_324_pack, raw_lane_320);
  set_at<336, 400, 16>(raw_lane_324_pack, raw_lane_321);
  set_at<352, 400, 16>(raw_lane_324_pack, raw_lane_322);
  set_at<368, 400, 16>(raw_lane_324_pack, raw_lane_323);
  set_at<384, 400, 16>(raw_lane_324_pack, raw_lane_324);
  auto res_denoiseb_update_0_sm1_1235 = denoiseb_generated_compute_unrolled_1(raw_lane_324_pack);

  hw_uint<400 > raw_lane_349_pack;
  set_at<0, 400, 16>(raw_lane_349_pack, raw_lane_325);
  set_at<16, 400, 16>(raw_lane_349_pack, raw_lane_326);
  set_at<32, 400, 16>(raw_lane_349_pack, raw_lane_327);
  set_at<48, 400, 16>(raw_lane_349_pack, raw_lane_328);
  set_at<64, 400, 16>(raw_lane_349_pack, raw_lane_329);
  set_at<80, 400, 16>(raw_lane_349_pack, raw_lane_330);
  set_at<96, 400, 16>(raw_lane_349_pack, raw_lane_331);
  set_at<112, 400, 16>(raw_lane_349_pack, raw_lane_332);
  set_at<128, 400, 16>(raw_lane_349_pack, raw_lane_333);
  set_at<144, 400, 16>(raw_lane_349_pack, raw_lane_334);
  set_at<160, 400, 16>(raw_lane_349_pack, raw_lane_335);
  set_at<176, 400, 16>(raw_lane_349_pack, raw_lane_336);
  set_at<192, 400, 16>(raw_lane_349_pack, raw_lane_337);
  set_at<208, 400, 16>(raw_lane_349_pack, raw_lane_338);
  set_at<224, 400, 16>(raw_lane_349_pack, raw_lane_339);
  set_at<240, 400, 16>(raw_lane_349_pack, raw_lane_340);
  set_at<256, 400, 16>(raw_lane_349_pack, raw_lane_341);
  set_at<272, 400, 16>(raw_lane_349_pack, raw_lane_342);
  set_at<288, 400, 16>(raw_lane_349_pack, raw_lane_343);
  set_at<304, 400, 16>(raw_lane_349_pack, raw_lane_344);
  set_at<320, 400, 16>(raw_lane_349_pack, raw_lane_345);
  set_at<336, 400, 16>(raw_lane_349_pack, raw_lane_346);
  set_at<352, 400, 16>(raw_lane_349_pack, raw_lane_347);
  set_at<368, 400, 16>(raw_lane_349_pack, raw_lane_348);
  set_at<384, 400, 16>(raw_lane_349_pack, raw_lane_349);
  auto res_denoiseb_update_0_sm1_1337 = denoiseb_generated_compute_unrolled_1(raw_lane_349_pack);

  hw_uint<400 > raw_lane_374_pack;
  set_at<0, 400, 16>(raw_lane_374_pack, raw_lane_350);
  set_at<16, 400, 16>(raw_lane_374_pack, raw_lane_351);
  set_at<32, 400, 16>(raw_lane_374_pack, raw_lane_352);
  set_at<48, 400, 16>(raw_lane_374_pack, raw_lane_353);
  set_at<64, 400, 16>(raw_lane_374_pack, raw_lane_354);
  set_at<80, 400, 16>(raw_lane_374_pack, raw_lane_355);
  set_at<96, 400, 16>(raw_lane_374_pack, raw_lane_356);
  set_at<112, 400, 16>(raw_lane_374_pack, raw_lane_357);
  set_at<128, 400, 16>(raw_lane_374_pack, raw_lane_358);
  set_at<144, 400, 16>(raw_lane_374_pack, raw_lane_359);
  set_at<160, 400, 16>(raw_lane_374_pack, raw_lane_360);
  set_at<176, 400, 16>(raw_lane_374_pack, raw_lane_361);
  set_at<192, 400, 16>(raw_lane_374_pack, raw_lane_362);
  set_at<208, 400, 16>(raw_lane_374_pack, raw_lane_363);
  set_at<224, 400, 16>(raw_lane_374_pack, raw_lane_364);
  set_at<240, 400, 16>(raw_lane_374_pack, raw_lane_365);
  set_at<256, 400, 16>(raw_lane_374_pack, raw_lane_366);
  set_at<272, 400, 16>(raw_lane_374_pack, raw_lane_367);
  set_at<288, 400, 16>(raw_lane_374_pack, raw_lane_368);
  set_at<304, 400, 16>(raw_lane_374_pack, raw_lane_369);
  set_at<320, 400, 16>(raw_lane_374_pack, raw_lane_370);
  set_at<336, 400, 16>(raw_lane_374_pack, raw_lane_371);
  set_at<352, 400, 16>(raw_lane_374_pack, raw_lane_372);
  set_at<368, 400, 16>(raw_lane_374_pack, raw_lane_373);
  set_at<384, 400, 16>(raw_lane_374_pack, raw_lane_374);
  auto res_denoiseb_update_0_sm1_1439 = denoiseb_generated_compute_unrolled_1(raw_lane_374_pack);

  hw_uint<400 > raw_lane_399_pack;
  set_at<0, 400, 16>(raw_lane_399_pack, raw_lane_375);
  set_at<16, 400, 16>(raw_lane_399_pack, raw_lane_376);
  set_at<32, 400, 16>(raw_lane_399_pack, raw_lane_377);
  set_at<48, 400, 16>(raw_lane_399_pack, raw_lane_378);
  set_at<64, 400, 16>(raw_lane_399_pack, raw_lane_379);
  set_at<80, 400, 16>(raw_lane_399_pack, raw_lane_380);
  set_at<96, 400, 16>(raw_lane_399_pack, raw_lane_381);
  set_at<112, 400, 16>(raw_lane_399_pack, raw_lane_382);
  set_at<128, 400, 16>(raw_lane_399_pack, raw_lane_383);
  set_at<144, 400, 16>(raw_lane_399_pack, raw_lane_384);
  set_at<160, 400, 16>(raw_lane_399_pack, raw_lane_385);
  set_at<176, 400, 16>(raw_lane_399_pack, raw_lane_386);
  set_at<192, 400, 16>(raw_lane_399_pack, raw_lane_387);
  set_at<208, 400, 16>(raw_lane_399_pack, raw_lane_388);
  set_at<224, 400, 16>(raw_lane_399_pack, raw_lane_389);
  set_at<240, 400, 16>(raw_lane_399_pack, raw_lane_390);
  set_at<256, 400, 16>(raw_lane_399_pack, raw_lane_391);
  set_at<272, 400, 16>(raw_lane_399_pack, raw_lane_392);
  set_at<288, 400, 16>(raw_lane_399_pack, raw_lane_393);
  set_at<304, 400, 16>(raw_lane_399_pack, raw_lane_394);
  set_at<320, 400, 16>(raw_lane_399_pack, raw_lane_395);
  set_at<336, 400, 16>(raw_lane_399_pack, raw_lane_396);
  set_at<352, 400, 16>(raw_lane_399_pack, raw_lane_397);
  set_at<368, 400, 16>(raw_lane_399_pack, raw_lane_398);
  set_at<384, 400, 16>(raw_lane_399_pack, raw_lane_399);
  auto res_denoiseb_update_0_sm1_1541 = denoiseb_generated_compute_unrolled_1(raw_lane_399_pack);
  hw_uint<256 > return_value367;
  set_at<0, 256, 16>(return_value367, res_denoiseb_update_0_sm1_011);
  set_at<16, 256, 16>(return_value367, res_denoiseb_update_0_sm1_113);
  set_at<32, 256, 16>(return_value367, res_denoiseb_update_0_sm1_215);
  set_at<48, 256, 16>(return_value367, res_denoiseb_update_0_sm1_317);
  set_at<64, 256, 16>(return_value367, res_denoiseb_update_0_sm1_419);
  set_at<80, 256, 16>(return_value367, res_denoiseb_update_0_sm1_521);
  set_at<96, 256, 16>(return_value367, res_denoiseb_update_0_sm1_623);
  set_at<112, 256, 16>(return_value367, res_denoiseb_update_0_sm1_725);
  set_at<128, 256, 16>(return_value367, res_denoiseb_update_0_sm1_827);
  set_at<144, 256, 16>(return_value367, res_denoiseb_update_0_sm1_929);
  set_at<160, 256, 16>(return_value367, res_denoiseb_update_0_sm1_1031);
  set_at<176, 256, 16>(return_value367, res_denoiseb_update_0_sm1_1133);
  set_at<192, 256, 16>(return_value367, res_denoiseb_update_0_sm1_1235);
  set_at<208, 256, 16>(return_value367, res_denoiseb_update_0_sm1_1337);
  set_at<224, 256, 16>(return_value367, res_denoiseb_update_0_sm1_1439);
  set_at<240, 256, 16>(return_value367, res_denoiseb_update_0_sm1_1541);
  return return_value367;

}

hw_uint<256> denoise_1_cu369(hw_uint<16*16>& denoiseb) {
  hw_uint<16> denoiseb_lane_0 = denoiseb.extract<0, 15>();
  hw_uint<16> denoiseb_lane_1 = denoiseb.extract<16, 31>();
  hw_uint<16> denoiseb_lane_2 = denoiseb.extract<32, 47>();
  hw_uint<16> denoiseb_lane_3 = denoiseb.extract<48, 63>();
  hw_uint<16> denoiseb_lane_4 = denoiseb.extract<64, 79>();
  hw_uint<16> denoiseb_lane_5 = denoiseb.extract<80, 95>();
  hw_uint<16> denoiseb_lane_6 = denoiseb.extract<96, 111>();
  hw_uint<16> denoiseb_lane_7 = denoiseb.extract<112, 127>();
  hw_uint<16> denoiseb_lane_8 = denoiseb.extract<128, 143>();
  hw_uint<16> denoiseb_lane_9 = denoiseb.extract<144, 159>();
  hw_uint<16> denoiseb_lane_10 = denoiseb.extract<160, 175>();
  hw_uint<16> denoiseb_lane_11 = denoiseb.extract<176, 191>();
  hw_uint<16> denoiseb_lane_12 = denoiseb.extract<192, 207>();
  hw_uint<16> denoiseb_lane_13 = denoiseb.extract<208, 223>();
  hw_uint<16> denoiseb_lane_14 = denoiseb.extract<224, 239>();
  hw_uint<16> denoiseb_lane_15 = denoiseb.extract<240, 255>();

	
  hw_uint<16 > denoiseb_lane_0_pack;
  set_at<0, 16, 16>(denoiseb_lane_0_pack, denoiseb_lane_0);
  auto res_denoise_update_0_sm2_075 = denoise_generated_compute_unrolled_1(denoiseb_lane_0_pack);

  hw_uint<16 > denoiseb_lane_1_pack;
  set_at<0, 16, 16>(denoiseb_lane_1_pack, denoiseb_lane_1);
  auto res_denoise_update_0_sm2_177 = denoise_generated_compute_unrolled_1(denoiseb_lane_1_pack);

  hw_uint<16 > denoiseb_lane_2_pack;
  set_at<0, 16, 16>(denoiseb_lane_2_pack, denoiseb_lane_2);
  auto res_denoise_update_0_sm2_279 = denoise_generated_compute_unrolled_1(denoiseb_lane_2_pack);

  hw_uint<16 > denoiseb_lane_3_pack;
  set_at<0, 16, 16>(denoiseb_lane_3_pack, denoiseb_lane_3);
  auto res_denoise_update_0_sm2_381 = denoise_generated_compute_unrolled_1(denoiseb_lane_3_pack);

  hw_uint<16 > denoiseb_lane_4_pack;
  set_at<0, 16, 16>(denoiseb_lane_4_pack, denoiseb_lane_4);
  auto res_denoise_update_0_sm2_483 = denoise_generated_compute_unrolled_1(denoiseb_lane_4_pack);

  hw_uint<16 > denoiseb_lane_5_pack;
  set_at<0, 16, 16>(denoiseb_lane_5_pack, denoiseb_lane_5);
  auto res_denoise_update_0_sm2_585 = denoise_generated_compute_unrolled_1(denoiseb_lane_5_pack);

  hw_uint<16 > denoiseb_lane_6_pack;
  set_at<0, 16, 16>(denoiseb_lane_6_pack, denoiseb_lane_6);
  auto res_denoise_update_0_sm2_687 = denoise_generated_compute_unrolled_1(denoiseb_lane_6_pack);

  hw_uint<16 > denoiseb_lane_7_pack;
  set_at<0, 16, 16>(denoiseb_lane_7_pack, denoiseb_lane_7);
  auto res_denoise_update_0_sm2_789 = denoise_generated_compute_unrolled_1(denoiseb_lane_7_pack);

  hw_uint<16 > denoiseb_lane_8_pack;
  set_at<0, 16, 16>(denoiseb_lane_8_pack, denoiseb_lane_8);
  auto res_denoise_update_0_sm2_891 = denoise_generated_compute_unrolled_1(denoiseb_lane_8_pack);

  hw_uint<16 > denoiseb_lane_9_pack;
  set_at<0, 16, 16>(denoiseb_lane_9_pack, denoiseb_lane_9);
  auto res_denoise_update_0_sm2_993 = denoise_generated_compute_unrolled_1(denoiseb_lane_9_pack);

  hw_uint<16 > denoiseb_lane_10_pack;
  set_at<0, 16, 16>(denoiseb_lane_10_pack, denoiseb_lane_10);
  auto res_denoise_update_0_sm2_1095 = denoise_generated_compute_unrolled_1(denoiseb_lane_10_pack);

  hw_uint<16 > denoiseb_lane_11_pack;
  set_at<0, 16, 16>(denoiseb_lane_11_pack, denoiseb_lane_11);
  auto res_denoise_update_0_sm2_1197 = denoise_generated_compute_unrolled_1(denoiseb_lane_11_pack);

  hw_uint<16 > denoiseb_lane_12_pack;
  set_at<0, 16, 16>(denoiseb_lane_12_pack, denoiseb_lane_12);
  auto res_denoise_update_0_sm2_1299 = denoise_generated_compute_unrolled_1(denoiseb_lane_12_pack);

  hw_uint<16 > denoiseb_lane_13_pack;
  set_at<0, 16, 16>(denoiseb_lane_13_pack, denoiseb_lane_13);
  auto res_denoise_update_0_sm2_13101 = denoise_generated_compute_unrolled_1(denoiseb_lane_13_pack);

  hw_uint<16 > denoiseb_lane_14_pack;
  set_at<0, 16, 16>(denoiseb_lane_14_pack, denoiseb_lane_14);
  auto res_denoise_update_0_sm2_14103 = denoise_generated_compute_unrolled_1(denoiseb_lane_14_pack);

  hw_uint<16 > denoiseb_lane_15_pack;
  set_at<0, 16, 16>(denoiseb_lane_15_pack, denoiseb_lane_15);
  auto res_denoise_update_0_sm2_15105 = denoise_generated_compute_unrolled_1(denoiseb_lane_15_pack);
  hw_uint<256 > return_value370;
  set_at<0, 256, 16>(return_value370, res_denoise_update_0_sm2_075);
  set_at<16, 256, 16>(return_value370, res_denoise_update_0_sm2_177);
  set_at<32, 256, 16>(return_value370, res_denoise_update_0_sm2_279);
  set_at<48, 256, 16>(return_value370, res_denoise_update_0_sm2_381);
  set_at<64, 256, 16>(return_value370, res_denoise_update_0_sm2_483);
  set_at<80, 256, 16>(return_value370, res_denoise_update_0_sm2_585);
  set_at<96, 256, 16>(return_value370, res_denoise_update_0_sm2_687);
  set_at<112, 256, 16>(return_value370, res_denoise_update_0_sm2_789);
  set_at<128, 256, 16>(return_value370, res_denoise_update_0_sm2_891);
  set_at<144, 256, 16>(return_value370, res_denoise_update_0_sm2_993);
  set_at<160, 256, 16>(return_value370, res_denoise_update_0_sm2_1095);
  set_at<176, 256, 16>(return_value370, res_denoise_update_0_sm2_1197);
  set_at<192, 256, 16>(return_value370, res_denoise_update_0_sm2_1299);
  set_at<208, 256, 16>(return_value370, res_denoise_update_0_sm2_13101);
  set_at<224, 256, 16>(return_value370, res_denoise_update_0_sm2_14103);
  set_at<240, 256, 16>(return_value370, res_denoise_update_0_sm2_15105);
  return return_value370;

}

hw_uint<256> demosaicb_1_cu372(hw_uint<16*144>& denoise) {
  hw_uint<16> denoise_lane_0 = denoise.extract<0, 15>();
  hw_uint<16> denoise_lane_1 = denoise.extract<16, 31>();
  hw_uint<16> denoise_lane_2 = denoise.extract<32, 47>();
  hw_uint<16> denoise_lane_3 = denoise.extract<48, 63>();
  hw_uint<16> denoise_lane_4 = denoise.extract<64, 79>();
  hw_uint<16> denoise_lane_5 = denoise.extract<80, 95>();
  hw_uint<16> denoise_lane_6 = denoise.extract<96, 111>();
  hw_uint<16> denoise_lane_7 = denoise.extract<112, 127>();
  hw_uint<16> denoise_lane_8 = denoise.extract<128, 143>();
  hw_uint<16> denoise_lane_9 = denoise.extract<144, 159>();
  hw_uint<16> denoise_lane_10 = denoise.extract<160, 175>();
  hw_uint<16> denoise_lane_11 = denoise.extract<176, 191>();
  hw_uint<16> denoise_lane_12 = denoise.extract<192, 207>();
  hw_uint<16> denoise_lane_13 = denoise.extract<208, 223>();
  hw_uint<16> denoise_lane_14 = denoise.extract<224, 239>();
  hw_uint<16> denoise_lane_15 = denoise.extract<240, 255>();
  hw_uint<16> denoise_lane_16 = denoise.extract<256, 271>();
  hw_uint<16> denoise_lane_17 = denoise.extract<272, 287>();
  hw_uint<16> denoise_lane_18 = denoise.extract<288, 303>();
  hw_uint<16> denoise_lane_19 = denoise.extract<304, 319>();
  hw_uint<16> denoise_lane_20 = denoise.extract<320, 335>();
  hw_uint<16> denoise_lane_21 = denoise.extract<336, 351>();
  hw_uint<16> denoise_lane_22 = denoise.extract<352, 367>();
  hw_uint<16> denoise_lane_23 = denoise.extract<368, 383>();
  hw_uint<16> denoise_lane_24 = denoise.extract<384, 399>();
  hw_uint<16> denoise_lane_25 = denoise.extract<400, 415>();
  hw_uint<16> denoise_lane_26 = denoise.extract<416, 431>();
  hw_uint<16> denoise_lane_27 = denoise.extract<432, 447>();
  hw_uint<16> denoise_lane_28 = denoise.extract<448, 463>();
  hw_uint<16> denoise_lane_29 = denoise.extract<464, 479>();
  hw_uint<16> denoise_lane_30 = denoise.extract<480, 495>();
  hw_uint<16> denoise_lane_31 = denoise.extract<496, 511>();
  hw_uint<16> denoise_lane_32 = denoise.extract<512, 527>();
  hw_uint<16> denoise_lane_33 = denoise.extract<528, 543>();
  hw_uint<16> denoise_lane_34 = denoise.extract<544, 559>();
  hw_uint<16> denoise_lane_35 = denoise.extract<560, 575>();
  hw_uint<16> denoise_lane_36 = denoise.extract<576, 591>();
  hw_uint<16> denoise_lane_37 = denoise.extract<592, 607>();
  hw_uint<16> denoise_lane_38 = denoise.extract<608, 623>();
  hw_uint<16> denoise_lane_39 = denoise.extract<624, 639>();
  hw_uint<16> denoise_lane_40 = denoise.extract<640, 655>();
  hw_uint<16> denoise_lane_41 = denoise.extract<656, 671>();
  hw_uint<16> denoise_lane_42 = denoise.extract<672, 687>();
  hw_uint<16> denoise_lane_43 = denoise.extract<688, 703>();
  hw_uint<16> denoise_lane_44 = denoise.extract<704, 719>();
  hw_uint<16> denoise_lane_45 = denoise.extract<720, 735>();
  hw_uint<16> denoise_lane_46 = denoise.extract<736, 751>();
  hw_uint<16> denoise_lane_47 = denoise.extract<752, 767>();
  hw_uint<16> denoise_lane_48 = denoise.extract<768, 783>();
  hw_uint<16> denoise_lane_49 = denoise.extract<784, 799>();
  hw_uint<16> denoise_lane_50 = denoise.extract<800, 815>();
  hw_uint<16> denoise_lane_51 = denoise.extract<816, 831>();
  hw_uint<16> denoise_lane_52 = denoise.extract<832, 847>();
  hw_uint<16> denoise_lane_53 = denoise.extract<848, 863>();
  hw_uint<16> denoise_lane_54 = denoise.extract<864, 879>();
  hw_uint<16> denoise_lane_55 = denoise.extract<880, 895>();
  hw_uint<16> denoise_lane_56 = denoise.extract<896, 911>();
  hw_uint<16> denoise_lane_57 = denoise.extract<912, 927>();
  hw_uint<16> denoise_lane_58 = denoise.extract<928, 943>();
  hw_uint<16> denoise_lane_59 = denoise.extract<944, 959>();
  hw_uint<16> denoise_lane_60 = denoise.extract<960, 975>();
  hw_uint<16> denoise_lane_61 = denoise.extract<976, 991>();
  hw_uint<16> denoise_lane_62 = denoise.extract<992, 1007>();
  hw_uint<16> denoise_lane_63 = denoise.extract<1008, 1023>();
  hw_uint<16> denoise_lane_64 = denoise.extract<1024, 1039>();
  hw_uint<16> denoise_lane_65 = denoise.extract<1040, 1055>();
  hw_uint<16> denoise_lane_66 = denoise.extract<1056, 1071>();
  hw_uint<16> denoise_lane_67 = denoise.extract<1072, 1087>();
  hw_uint<16> denoise_lane_68 = denoise.extract<1088, 1103>();
  hw_uint<16> denoise_lane_69 = denoise.extract<1104, 1119>();
  hw_uint<16> denoise_lane_70 = denoise.extract<1120, 1135>();
  hw_uint<16> denoise_lane_71 = denoise.extract<1136, 1151>();
  hw_uint<16> denoise_lane_72 = denoise.extract<1152, 1167>();
  hw_uint<16> denoise_lane_73 = denoise.extract<1168, 1183>();
  hw_uint<16> denoise_lane_74 = denoise.extract<1184, 1199>();
  hw_uint<16> denoise_lane_75 = denoise.extract<1200, 1215>();
  hw_uint<16> denoise_lane_76 = denoise.extract<1216, 1231>();
  hw_uint<16> denoise_lane_77 = denoise.extract<1232, 1247>();
  hw_uint<16> denoise_lane_78 = denoise.extract<1248, 1263>();
  hw_uint<16> denoise_lane_79 = denoise.extract<1264, 1279>();
  hw_uint<16> denoise_lane_80 = denoise.extract<1280, 1295>();
  hw_uint<16> denoise_lane_81 = denoise.extract<1296, 1311>();
  hw_uint<16> denoise_lane_82 = denoise.extract<1312, 1327>();
  hw_uint<16> denoise_lane_83 = denoise.extract<1328, 1343>();
  hw_uint<16> denoise_lane_84 = denoise.extract<1344, 1359>();
  hw_uint<16> denoise_lane_85 = denoise.extract<1360, 1375>();
  hw_uint<16> denoise_lane_86 = denoise.extract<1376, 1391>();
  hw_uint<16> denoise_lane_87 = denoise.extract<1392, 1407>();
  hw_uint<16> denoise_lane_88 = denoise.extract<1408, 1423>();
  hw_uint<16> denoise_lane_89 = denoise.extract<1424, 1439>();
  hw_uint<16> denoise_lane_90 = denoise.extract<1440, 1455>();
  hw_uint<16> denoise_lane_91 = denoise.extract<1456, 1471>();
  hw_uint<16> denoise_lane_92 = denoise.extract<1472, 1487>();
  hw_uint<16> denoise_lane_93 = denoise.extract<1488, 1503>();
  hw_uint<16> denoise_lane_94 = denoise.extract<1504, 1519>();
  hw_uint<16> denoise_lane_95 = denoise.extract<1520, 1535>();
  hw_uint<16> denoise_lane_96 = denoise.extract<1536, 1551>();
  hw_uint<16> denoise_lane_97 = denoise.extract<1552, 1567>();
  hw_uint<16> denoise_lane_98 = denoise.extract<1568, 1583>();
  hw_uint<16> denoise_lane_99 = denoise.extract<1584, 1599>();
  hw_uint<16> denoise_lane_100 = denoise.extract<1600, 1615>();
  hw_uint<16> denoise_lane_101 = denoise.extract<1616, 1631>();
  hw_uint<16> denoise_lane_102 = denoise.extract<1632, 1647>();
  hw_uint<16> denoise_lane_103 = denoise.extract<1648, 1663>();
  hw_uint<16> denoise_lane_104 = denoise.extract<1664, 1679>();
  hw_uint<16> denoise_lane_105 = denoise.extract<1680, 1695>();
  hw_uint<16> denoise_lane_106 = denoise.extract<1696, 1711>();
  hw_uint<16> denoise_lane_107 = denoise.extract<1712, 1727>();
  hw_uint<16> denoise_lane_108 = denoise.extract<1728, 1743>();
  hw_uint<16> denoise_lane_109 = denoise.extract<1744, 1759>();
  hw_uint<16> denoise_lane_110 = denoise.extract<1760, 1775>();
  hw_uint<16> denoise_lane_111 = denoise.extract<1776, 1791>();
  hw_uint<16> denoise_lane_112 = denoise.extract<1792, 1807>();
  hw_uint<16> denoise_lane_113 = denoise.extract<1808, 1823>();
  hw_uint<16> denoise_lane_114 = denoise.extract<1824, 1839>();
  hw_uint<16> denoise_lane_115 = denoise.extract<1840, 1855>();
  hw_uint<16> denoise_lane_116 = denoise.extract<1856, 1871>();
  hw_uint<16> denoise_lane_117 = denoise.extract<1872, 1887>();
  hw_uint<16> denoise_lane_118 = denoise.extract<1888, 1903>();
  hw_uint<16> denoise_lane_119 = denoise.extract<1904, 1919>();
  hw_uint<16> denoise_lane_120 = denoise.extract<1920, 1935>();
  hw_uint<16> denoise_lane_121 = denoise.extract<1936, 1951>();
  hw_uint<16> denoise_lane_122 = denoise.extract<1952, 1967>();
  hw_uint<16> denoise_lane_123 = denoise.extract<1968, 1983>();
  hw_uint<16> denoise_lane_124 = denoise.extract<1984, 1999>();
  hw_uint<16> denoise_lane_125 = denoise.extract<2000, 2015>();
  hw_uint<16> denoise_lane_126 = denoise.extract<2016, 2031>();
  hw_uint<16> denoise_lane_127 = denoise.extract<2032, 2047>();
  hw_uint<16> denoise_lane_128 = denoise.extract<2048, 2063>();
  hw_uint<16> denoise_lane_129 = denoise.extract<2064, 2079>();
  hw_uint<16> denoise_lane_130 = denoise.extract<2080, 2095>();
  hw_uint<16> denoise_lane_131 = denoise.extract<2096, 2111>();
  hw_uint<16> denoise_lane_132 = denoise.extract<2112, 2127>();
  hw_uint<16> denoise_lane_133 = denoise.extract<2128, 2143>();
  hw_uint<16> denoise_lane_134 = denoise.extract<2144, 2159>();
  hw_uint<16> denoise_lane_135 = denoise.extract<2160, 2175>();
  hw_uint<16> denoise_lane_136 = denoise.extract<2176, 2191>();
  hw_uint<16> denoise_lane_137 = denoise.extract<2192, 2207>();
  hw_uint<16> denoise_lane_138 = denoise.extract<2208, 2223>();
  hw_uint<16> denoise_lane_139 = denoise.extract<2224, 2239>();
  hw_uint<16> denoise_lane_140 = denoise.extract<2240, 2255>();
  hw_uint<16> denoise_lane_141 = denoise.extract<2256, 2271>();
  hw_uint<16> denoise_lane_142 = denoise.extract<2272, 2287>();
  hw_uint<16> denoise_lane_143 = denoise.extract<2288, 2303>();

	
  hw_uint<144 > denoise_lane_8_pack;
  set_at<0, 144, 16>(denoise_lane_8_pack, denoise_lane_0);
  set_at<16, 144, 16>(denoise_lane_8_pack, denoise_lane_1);
  set_at<32, 144, 16>(denoise_lane_8_pack, denoise_lane_2);
  set_at<48, 144, 16>(denoise_lane_8_pack, denoise_lane_3);
  set_at<64, 144, 16>(denoise_lane_8_pack, denoise_lane_4);
  set_at<80, 144, 16>(denoise_lane_8_pack, denoise_lane_5);
  set_at<96, 144, 16>(denoise_lane_8_pack, denoise_lane_6);
  set_at<112, 144, 16>(denoise_lane_8_pack, denoise_lane_7);
  set_at<128, 144, 16>(denoise_lane_8_pack, denoise_lane_8);
  auto res_demosaicb_update_0_sm3_0107 = demosaicb_generated_compute_unrolled_1(denoise_lane_8_pack);

  hw_uint<144 > denoise_lane_17_pack;
  set_at<0, 144, 16>(denoise_lane_17_pack, denoise_lane_9);
  set_at<16, 144, 16>(denoise_lane_17_pack, denoise_lane_10);
  set_at<32, 144, 16>(denoise_lane_17_pack, denoise_lane_11);
  set_at<48, 144, 16>(denoise_lane_17_pack, denoise_lane_12);
  set_at<64, 144, 16>(denoise_lane_17_pack, denoise_lane_13);
  set_at<80, 144, 16>(denoise_lane_17_pack, denoise_lane_14);
  set_at<96, 144, 16>(denoise_lane_17_pack, denoise_lane_15);
  set_at<112, 144, 16>(denoise_lane_17_pack, denoise_lane_16);
  set_at<128, 144, 16>(denoise_lane_17_pack, denoise_lane_17);
  auto res_demosaicb_update_0_sm3_1109 = demosaicb_generated_compute_unrolled_1(denoise_lane_17_pack);

  hw_uint<144 > denoise_lane_26_pack;
  set_at<0, 144, 16>(denoise_lane_26_pack, denoise_lane_18);
  set_at<16, 144, 16>(denoise_lane_26_pack, denoise_lane_19);
  set_at<32, 144, 16>(denoise_lane_26_pack, denoise_lane_20);
  set_at<48, 144, 16>(denoise_lane_26_pack, denoise_lane_21);
  set_at<64, 144, 16>(denoise_lane_26_pack, denoise_lane_22);
  set_at<80, 144, 16>(denoise_lane_26_pack, denoise_lane_23);
  set_at<96, 144, 16>(denoise_lane_26_pack, denoise_lane_24);
  set_at<112, 144, 16>(denoise_lane_26_pack, denoise_lane_25);
  set_at<128, 144, 16>(denoise_lane_26_pack, denoise_lane_26);
  auto res_demosaicb_update_0_sm3_2111 = demosaicb_generated_compute_unrolled_1(denoise_lane_26_pack);

  hw_uint<144 > denoise_lane_35_pack;
  set_at<0, 144, 16>(denoise_lane_35_pack, denoise_lane_27);
  set_at<16, 144, 16>(denoise_lane_35_pack, denoise_lane_28);
  set_at<32, 144, 16>(denoise_lane_35_pack, denoise_lane_29);
  set_at<48, 144, 16>(denoise_lane_35_pack, denoise_lane_30);
  set_at<64, 144, 16>(denoise_lane_35_pack, denoise_lane_31);
  set_at<80, 144, 16>(denoise_lane_35_pack, denoise_lane_32);
  set_at<96, 144, 16>(denoise_lane_35_pack, denoise_lane_33);
  set_at<112, 144, 16>(denoise_lane_35_pack, denoise_lane_34);
  set_at<128, 144, 16>(denoise_lane_35_pack, denoise_lane_35);
  auto res_demosaicb_update_0_sm3_3113 = demosaicb_generated_compute_unrolled_1(denoise_lane_35_pack);

  hw_uint<144 > denoise_lane_44_pack;
  set_at<0, 144, 16>(denoise_lane_44_pack, denoise_lane_36);
  set_at<16, 144, 16>(denoise_lane_44_pack, denoise_lane_37);
  set_at<32, 144, 16>(denoise_lane_44_pack, denoise_lane_38);
  set_at<48, 144, 16>(denoise_lane_44_pack, denoise_lane_39);
  set_at<64, 144, 16>(denoise_lane_44_pack, denoise_lane_40);
  set_at<80, 144, 16>(denoise_lane_44_pack, denoise_lane_41);
  set_at<96, 144, 16>(denoise_lane_44_pack, denoise_lane_42);
  set_at<112, 144, 16>(denoise_lane_44_pack, denoise_lane_43);
  set_at<128, 144, 16>(denoise_lane_44_pack, denoise_lane_44);
  auto res_demosaicb_update_0_sm3_4115 = demosaicb_generated_compute_unrolled_1(denoise_lane_44_pack);

  hw_uint<144 > denoise_lane_53_pack;
  set_at<0, 144, 16>(denoise_lane_53_pack, denoise_lane_45);
  set_at<16, 144, 16>(denoise_lane_53_pack, denoise_lane_46);
  set_at<32, 144, 16>(denoise_lane_53_pack, denoise_lane_47);
  set_at<48, 144, 16>(denoise_lane_53_pack, denoise_lane_48);
  set_at<64, 144, 16>(denoise_lane_53_pack, denoise_lane_49);
  set_at<80, 144, 16>(denoise_lane_53_pack, denoise_lane_50);
  set_at<96, 144, 16>(denoise_lane_53_pack, denoise_lane_51);
  set_at<112, 144, 16>(denoise_lane_53_pack, denoise_lane_52);
  set_at<128, 144, 16>(denoise_lane_53_pack, denoise_lane_53);
  auto res_demosaicb_update_0_sm3_5117 = demosaicb_generated_compute_unrolled_1(denoise_lane_53_pack);

  hw_uint<144 > denoise_lane_62_pack;
  set_at<0, 144, 16>(denoise_lane_62_pack, denoise_lane_54);
  set_at<16, 144, 16>(denoise_lane_62_pack, denoise_lane_55);
  set_at<32, 144, 16>(denoise_lane_62_pack, denoise_lane_56);
  set_at<48, 144, 16>(denoise_lane_62_pack, denoise_lane_57);
  set_at<64, 144, 16>(denoise_lane_62_pack, denoise_lane_58);
  set_at<80, 144, 16>(denoise_lane_62_pack, denoise_lane_59);
  set_at<96, 144, 16>(denoise_lane_62_pack, denoise_lane_60);
  set_at<112, 144, 16>(denoise_lane_62_pack, denoise_lane_61);
  set_at<128, 144, 16>(denoise_lane_62_pack, denoise_lane_62);
  auto res_demosaicb_update_0_sm3_6119 = demosaicb_generated_compute_unrolled_1(denoise_lane_62_pack);

  hw_uint<144 > denoise_lane_71_pack;
  set_at<0, 144, 16>(denoise_lane_71_pack, denoise_lane_63);
  set_at<16, 144, 16>(denoise_lane_71_pack, denoise_lane_64);
  set_at<32, 144, 16>(denoise_lane_71_pack, denoise_lane_65);
  set_at<48, 144, 16>(denoise_lane_71_pack, denoise_lane_66);
  set_at<64, 144, 16>(denoise_lane_71_pack, denoise_lane_67);
  set_at<80, 144, 16>(denoise_lane_71_pack, denoise_lane_68);
  set_at<96, 144, 16>(denoise_lane_71_pack, denoise_lane_69);
  set_at<112, 144, 16>(denoise_lane_71_pack, denoise_lane_70);
  set_at<128, 144, 16>(denoise_lane_71_pack, denoise_lane_71);
  auto res_demosaicb_update_0_sm3_7121 = demosaicb_generated_compute_unrolled_1(denoise_lane_71_pack);

  hw_uint<144 > denoise_lane_80_pack;
  set_at<0, 144, 16>(denoise_lane_80_pack, denoise_lane_72);
  set_at<16, 144, 16>(denoise_lane_80_pack, denoise_lane_73);
  set_at<32, 144, 16>(denoise_lane_80_pack, denoise_lane_74);
  set_at<48, 144, 16>(denoise_lane_80_pack, denoise_lane_75);
  set_at<64, 144, 16>(denoise_lane_80_pack, denoise_lane_76);
  set_at<80, 144, 16>(denoise_lane_80_pack, denoise_lane_77);
  set_at<96, 144, 16>(denoise_lane_80_pack, denoise_lane_78);
  set_at<112, 144, 16>(denoise_lane_80_pack, denoise_lane_79);
  set_at<128, 144, 16>(denoise_lane_80_pack, denoise_lane_80);
  auto res_demosaicb_update_0_sm3_8123 = demosaicb_generated_compute_unrolled_1(denoise_lane_80_pack);

  hw_uint<144 > denoise_lane_89_pack;
  set_at<0, 144, 16>(denoise_lane_89_pack, denoise_lane_81);
  set_at<16, 144, 16>(denoise_lane_89_pack, denoise_lane_82);
  set_at<32, 144, 16>(denoise_lane_89_pack, denoise_lane_83);
  set_at<48, 144, 16>(denoise_lane_89_pack, denoise_lane_84);
  set_at<64, 144, 16>(denoise_lane_89_pack, denoise_lane_85);
  set_at<80, 144, 16>(denoise_lane_89_pack, denoise_lane_86);
  set_at<96, 144, 16>(denoise_lane_89_pack, denoise_lane_87);
  set_at<112, 144, 16>(denoise_lane_89_pack, denoise_lane_88);
  set_at<128, 144, 16>(denoise_lane_89_pack, denoise_lane_89);
  auto res_demosaicb_update_0_sm3_9125 = demosaicb_generated_compute_unrolled_1(denoise_lane_89_pack);

  hw_uint<144 > denoise_lane_98_pack;
  set_at<0, 144, 16>(denoise_lane_98_pack, denoise_lane_90);
  set_at<16, 144, 16>(denoise_lane_98_pack, denoise_lane_91);
  set_at<32, 144, 16>(denoise_lane_98_pack, denoise_lane_92);
  set_at<48, 144, 16>(denoise_lane_98_pack, denoise_lane_93);
  set_at<64, 144, 16>(denoise_lane_98_pack, denoise_lane_94);
  set_at<80, 144, 16>(denoise_lane_98_pack, denoise_lane_95);
  set_at<96, 144, 16>(denoise_lane_98_pack, denoise_lane_96);
  set_at<112, 144, 16>(denoise_lane_98_pack, denoise_lane_97);
  set_at<128, 144, 16>(denoise_lane_98_pack, denoise_lane_98);
  auto res_demosaicb_update_0_sm3_10127 = demosaicb_generated_compute_unrolled_1(denoise_lane_98_pack);

  hw_uint<144 > denoise_lane_107_pack;
  set_at<0, 144, 16>(denoise_lane_107_pack, denoise_lane_99);
  set_at<16, 144, 16>(denoise_lane_107_pack, denoise_lane_100);
  set_at<32, 144, 16>(denoise_lane_107_pack, denoise_lane_101);
  set_at<48, 144, 16>(denoise_lane_107_pack, denoise_lane_102);
  set_at<64, 144, 16>(denoise_lane_107_pack, denoise_lane_103);
  set_at<80, 144, 16>(denoise_lane_107_pack, denoise_lane_104);
  set_at<96, 144, 16>(denoise_lane_107_pack, denoise_lane_105);
  set_at<112, 144, 16>(denoise_lane_107_pack, denoise_lane_106);
  set_at<128, 144, 16>(denoise_lane_107_pack, denoise_lane_107);
  auto res_demosaicb_update_0_sm3_11129 = demosaicb_generated_compute_unrolled_1(denoise_lane_107_pack);

  hw_uint<144 > denoise_lane_116_pack;
  set_at<0, 144, 16>(denoise_lane_116_pack, denoise_lane_108);
  set_at<16, 144, 16>(denoise_lane_116_pack, denoise_lane_109);
  set_at<32, 144, 16>(denoise_lane_116_pack, denoise_lane_110);
  set_at<48, 144, 16>(denoise_lane_116_pack, denoise_lane_111);
  set_at<64, 144, 16>(denoise_lane_116_pack, denoise_lane_112);
  set_at<80, 144, 16>(denoise_lane_116_pack, denoise_lane_113);
  set_at<96, 144, 16>(denoise_lane_116_pack, denoise_lane_114);
  set_at<112, 144, 16>(denoise_lane_116_pack, denoise_lane_115);
  set_at<128, 144, 16>(denoise_lane_116_pack, denoise_lane_116);
  auto res_demosaicb_update_0_sm3_12131 = demosaicb_generated_compute_unrolled_1(denoise_lane_116_pack);

  hw_uint<144 > denoise_lane_125_pack;
  set_at<0, 144, 16>(denoise_lane_125_pack, denoise_lane_117);
  set_at<16, 144, 16>(denoise_lane_125_pack, denoise_lane_118);
  set_at<32, 144, 16>(denoise_lane_125_pack, denoise_lane_119);
  set_at<48, 144, 16>(denoise_lane_125_pack, denoise_lane_120);
  set_at<64, 144, 16>(denoise_lane_125_pack, denoise_lane_121);
  set_at<80, 144, 16>(denoise_lane_125_pack, denoise_lane_122);
  set_at<96, 144, 16>(denoise_lane_125_pack, denoise_lane_123);
  set_at<112, 144, 16>(denoise_lane_125_pack, denoise_lane_124);
  set_at<128, 144, 16>(denoise_lane_125_pack, denoise_lane_125);
  auto res_demosaicb_update_0_sm3_13133 = demosaicb_generated_compute_unrolled_1(denoise_lane_125_pack);

  hw_uint<144 > denoise_lane_134_pack;
  set_at<0, 144, 16>(denoise_lane_134_pack, denoise_lane_126);
  set_at<16, 144, 16>(denoise_lane_134_pack, denoise_lane_127);
  set_at<32, 144, 16>(denoise_lane_134_pack, denoise_lane_128);
  set_at<48, 144, 16>(denoise_lane_134_pack, denoise_lane_129);
  set_at<64, 144, 16>(denoise_lane_134_pack, denoise_lane_130);
  set_at<80, 144, 16>(denoise_lane_134_pack, denoise_lane_131);
  set_at<96, 144, 16>(denoise_lane_134_pack, denoise_lane_132);
  set_at<112, 144, 16>(denoise_lane_134_pack, denoise_lane_133);
  set_at<128, 144, 16>(denoise_lane_134_pack, denoise_lane_134);
  auto res_demosaicb_update_0_sm3_14135 = demosaicb_generated_compute_unrolled_1(denoise_lane_134_pack);

  hw_uint<144 > denoise_lane_143_pack;
  set_at<0, 144, 16>(denoise_lane_143_pack, denoise_lane_135);
  set_at<16, 144, 16>(denoise_lane_143_pack, denoise_lane_136);
  set_at<32, 144, 16>(denoise_lane_143_pack, denoise_lane_137);
  set_at<48, 144, 16>(denoise_lane_143_pack, denoise_lane_138);
  set_at<64, 144, 16>(denoise_lane_143_pack, denoise_lane_139);
  set_at<80, 144, 16>(denoise_lane_143_pack, denoise_lane_140);
  set_at<96, 144, 16>(denoise_lane_143_pack, denoise_lane_141);
  set_at<112, 144, 16>(denoise_lane_143_pack, denoise_lane_142);
  set_at<128, 144, 16>(denoise_lane_143_pack, denoise_lane_143);
  auto res_demosaicb_update_0_sm3_15137 = demosaicb_generated_compute_unrolled_1(denoise_lane_143_pack);
  hw_uint<256 > return_value373;
  set_at<0, 256, 16>(return_value373, res_demosaicb_update_0_sm3_0107);
  set_at<16, 256, 16>(return_value373, res_demosaicb_update_0_sm3_1109);
  set_at<32, 256, 16>(return_value373, res_demosaicb_update_0_sm3_2111);
  set_at<48, 256, 16>(return_value373, res_demosaicb_update_0_sm3_3113);
  set_at<64, 256, 16>(return_value373, res_demosaicb_update_0_sm3_4115);
  set_at<80, 256, 16>(return_value373, res_demosaicb_update_0_sm3_5117);
  set_at<96, 256, 16>(return_value373, res_demosaicb_update_0_sm3_6119);
  set_at<112, 256, 16>(return_value373, res_demosaicb_update_0_sm3_7121);
  set_at<128, 256, 16>(return_value373, res_demosaicb_update_0_sm3_8123);
  set_at<144, 256, 16>(return_value373, res_demosaicb_update_0_sm3_9125);
  set_at<160, 256, 16>(return_value373, res_demosaicb_update_0_sm3_10127);
  set_at<176, 256, 16>(return_value373, res_demosaicb_update_0_sm3_11129);
  set_at<192, 256, 16>(return_value373, res_demosaicb_update_0_sm3_12131);
  set_at<208, 256, 16>(return_value373, res_demosaicb_update_0_sm3_13133);
  set_at<224, 256, 16>(return_value373, res_demosaicb_update_0_sm3_14135);
  set_at<240, 256, 16>(return_value373, res_demosaicb_update_0_sm3_15137);
  return return_value373;

}

hw_uint<256> demosaic_1_cu375(hw_uint<16*16>& demosaicb) {
  hw_uint<16> demosaicb_lane_0 = demosaicb.extract<0, 15>();
  hw_uint<16> demosaicb_lane_1 = demosaicb.extract<16, 31>();
  hw_uint<16> demosaicb_lane_2 = demosaicb.extract<32, 47>();
  hw_uint<16> demosaicb_lane_3 = demosaicb.extract<48, 63>();
  hw_uint<16> demosaicb_lane_4 = demosaicb.extract<64, 79>();
  hw_uint<16> demosaicb_lane_5 = demosaicb.extract<80, 95>();
  hw_uint<16> demosaicb_lane_6 = demosaicb.extract<96, 111>();
  hw_uint<16> demosaicb_lane_7 = demosaicb.extract<112, 127>();
  hw_uint<16> demosaicb_lane_8 = demosaicb.extract<128, 143>();
  hw_uint<16> demosaicb_lane_9 = demosaicb.extract<144, 159>();
  hw_uint<16> demosaicb_lane_10 = demosaicb.extract<160, 175>();
  hw_uint<16> demosaicb_lane_11 = demosaicb.extract<176, 191>();
  hw_uint<16> demosaicb_lane_12 = demosaicb.extract<192, 207>();
  hw_uint<16> demosaicb_lane_13 = demosaicb.extract<208, 223>();
  hw_uint<16> demosaicb_lane_14 = demosaicb.extract<224, 239>();
  hw_uint<16> demosaicb_lane_15 = demosaicb.extract<240, 255>();

	
  hw_uint<16 > demosaicb_lane_0_pack;
  set_at<0, 16, 16>(demosaicb_lane_0_pack, demosaicb_lane_0);
  auto res_demosaic_update_0_sm4_0139 = demosaic_generated_compute_unrolled_1(demosaicb_lane_0_pack);

  hw_uint<16 > demosaicb_lane_1_pack;
  set_at<0, 16, 16>(demosaicb_lane_1_pack, demosaicb_lane_1);
  auto res_demosaic_update_0_sm4_1141 = demosaic_generated_compute_unrolled_1(demosaicb_lane_1_pack);

  hw_uint<16 > demosaicb_lane_2_pack;
  set_at<0, 16, 16>(demosaicb_lane_2_pack, demosaicb_lane_2);
  auto res_demosaic_update_0_sm4_2143 = demosaic_generated_compute_unrolled_1(demosaicb_lane_2_pack);

  hw_uint<16 > demosaicb_lane_3_pack;
  set_at<0, 16, 16>(demosaicb_lane_3_pack, demosaicb_lane_3);
  auto res_demosaic_update_0_sm4_3145 = demosaic_generated_compute_unrolled_1(demosaicb_lane_3_pack);

  hw_uint<16 > demosaicb_lane_4_pack;
  set_at<0, 16, 16>(demosaicb_lane_4_pack, demosaicb_lane_4);
  auto res_demosaic_update_0_sm4_4147 = demosaic_generated_compute_unrolled_1(demosaicb_lane_4_pack);

  hw_uint<16 > demosaicb_lane_5_pack;
  set_at<0, 16, 16>(demosaicb_lane_5_pack, demosaicb_lane_5);
  auto res_demosaic_update_0_sm4_5149 = demosaic_generated_compute_unrolled_1(demosaicb_lane_5_pack);

  hw_uint<16 > demosaicb_lane_6_pack;
  set_at<0, 16, 16>(demosaicb_lane_6_pack, demosaicb_lane_6);
  auto res_demosaic_update_0_sm4_6151 = demosaic_generated_compute_unrolled_1(demosaicb_lane_6_pack);

  hw_uint<16 > demosaicb_lane_7_pack;
  set_at<0, 16, 16>(demosaicb_lane_7_pack, demosaicb_lane_7);
  auto res_demosaic_update_0_sm4_7153 = demosaic_generated_compute_unrolled_1(demosaicb_lane_7_pack);

  hw_uint<16 > demosaicb_lane_8_pack;
  set_at<0, 16, 16>(demosaicb_lane_8_pack, demosaicb_lane_8);
  auto res_demosaic_update_0_sm4_8155 = demosaic_generated_compute_unrolled_1(demosaicb_lane_8_pack);

  hw_uint<16 > demosaicb_lane_9_pack;
  set_at<0, 16, 16>(demosaicb_lane_9_pack, demosaicb_lane_9);
  auto res_demosaic_update_0_sm4_9157 = demosaic_generated_compute_unrolled_1(demosaicb_lane_9_pack);

  hw_uint<16 > demosaicb_lane_10_pack;
  set_at<0, 16, 16>(demosaicb_lane_10_pack, demosaicb_lane_10);
  auto res_demosaic_update_0_sm4_10159 = demosaic_generated_compute_unrolled_1(demosaicb_lane_10_pack);

  hw_uint<16 > demosaicb_lane_11_pack;
  set_at<0, 16, 16>(demosaicb_lane_11_pack, demosaicb_lane_11);
  auto res_demosaic_update_0_sm4_11161 = demosaic_generated_compute_unrolled_1(demosaicb_lane_11_pack);

  hw_uint<16 > demosaicb_lane_12_pack;
  set_at<0, 16, 16>(demosaicb_lane_12_pack, demosaicb_lane_12);
  auto res_demosaic_update_0_sm4_12163 = demosaic_generated_compute_unrolled_1(demosaicb_lane_12_pack);

  hw_uint<16 > demosaicb_lane_13_pack;
  set_at<0, 16, 16>(demosaicb_lane_13_pack, demosaicb_lane_13);
  auto res_demosaic_update_0_sm4_13165 = demosaic_generated_compute_unrolled_1(demosaicb_lane_13_pack);

  hw_uint<16 > demosaicb_lane_14_pack;
  set_at<0, 16, 16>(demosaicb_lane_14_pack, demosaicb_lane_14);
  auto res_demosaic_update_0_sm4_14167 = demosaic_generated_compute_unrolled_1(demosaicb_lane_14_pack);

  hw_uint<16 > demosaicb_lane_15_pack;
  set_at<0, 16, 16>(demosaicb_lane_15_pack, demosaicb_lane_15);
  auto res_demosaic_update_0_sm4_15169 = demosaic_generated_compute_unrolled_1(demosaicb_lane_15_pack);
  hw_uint<256 > return_value376;
  set_at<0, 256, 16>(return_value376, res_demosaic_update_0_sm4_0139);
  set_at<16, 256, 16>(return_value376, res_demosaic_update_0_sm4_1141);
  set_at<32, 256, 16>(return_value376, res_demosaic_update_0_sm4_2143);
  set_at<48, 256, 16>(return_value376, res_demosaic_update_0_sm4_3145);
  set_at<64, 256, 16>(return_value376, res_demosaic_update_0_sm4_4147);
  set_at<80, 256, 16>(return_value376, res_demosaic_update_0_sm4_5149);
  set_at<96, 256, 16>(return_value376, res_demosaic_update_0_sm4_6151);
  set_at<112, 256, 16>(return_value376, res_demosaic_update_0_sm4_7153);
  set_at<128, 256, 16>(return_value376, res_demosaic_update_0_sm4_8155);
  set_at<144, 256, 16>(return_value376, res_demosaic_update_0_sm4_9157);
  set_at<160, 256, 16>(return_value376, res_demosaic_update_0_sm4_10159);
  set_at<176, 256, 16>(return_value376, res_demosaic_update_0_sm4_11161);
  set_at<192, 256, 16>(return_value376, res_demosaic_update_0_sm4_12163);
  set_at<208, 256, 16>(return_value376, res_demosaic_update_0_sm4_13165);
  set_at<224, 256, 16>(return_value376, res_demosaic_update_0_sm4_14167);
  set_at<240, 256, 16>(return_value376, res_demosaic_update_0_sm4_15169);
  return return_value376;

}

hw_uint<256> demosaic_bxb_1_cu378(hw_uint<16*48>& demosaic) {
  hw_uint<16> demosaic_lane_0 = demosaic.extract<0, 15>();
  hw_uint<16> demosaic_lane_1 = demosaic.extract<16, 31>();
  hw_uint<16> demosaic_lane_2 = demosaic.extract<32, 47>();
  hw_uint<16> demosaic_lane_3 = demosaic.extract<48, 63>();
  hw_uint<16> demosaic_lane_4 = demosaic.extract<64, 79>();
  hw_uint<16> demosaic_lane_5 = demosaic.extract<80, 95>();
  hw_uint<16> demosaic_lane_6 = demosaic.extract<96, 111>();
  hw_uint<16> demosaic_lane_7 = demosaic.extract<112, 127>();
  hw_uint<16> demosaic_lane_8 = demosaic.extract<128, 143>();
  hw_uint<16> demosaic_lane_9 = demosaic.extract<144, 159>();
  hw_uint<16> demosaic_lane_10 = demosaic.extract<160, 175>();
  hw_uint<16> demosaic_lane_11 = demosaic.extract<176, 191>();
  hw_uint<16> demosaic_lane_12 = demosaic.extract<192, 207>();
  hw_uint<16> demosaic_lane_13 = demosaic.extract<208, 223>();
  hw_uint<16> demosaic_lane_14 = demosaic.extract<224, 239>();
  hw_uint<16> demosaic_lane_15 = demosaic.extract<240, 255>();
  hw_uint<16> demosaic_lane_16 = demosaic.extract<256, 271>();
  hw_uint<16> demosaic_lane_17 = demosaic.extract<272, 287>();
  hw_uint<16> demosaic_lane_18 = demosaic.extract<288, 303>();
  hw_uint<16> demosaic_lane_19 = demosaic.extract<304, 319>();
  hw_uint<16> demosaic_lane_20 = demosaic.extract<320, 335>();
  hw_uint<16> demosaic_lane_21 = demosaic.extract<336, 351>();
  hw_uint<16> demosaic_lane_22 = demosaic.extract<352, 367>();
  hw_uint<16> demosaic_lane_23 = demosaic.extract<368, 383>();
  hw_uint<16> demosaic_lane_24 = demosaic.extract<384, 399>();
  hw_uint<16> demosaic_lane_25 = demosaic.extract<400, 415>();
  hw_uint<16> demosaic_lane_26 = demosaic.extract<416, 431>();
  hw_uint<16> demosaic_lane_27 = demosaic.extract<432, 447>();
  hw_uint<16> demosaic_lane_28 = demosaic.extract<448, 463>();
  hw_uint<16> demosaic_lane_29 = demosaic.extract<464, 479>();
  hw_uint<16> demosaic_lane_30 = demosaic.extract<480, 495>();
  hw_uint<16> demosaic_lane_31 = demosaic.extract<496, 511>();
  hw_uint<16> demosaic_lane_32 = demosaic.extract<512, 527>();
  hw_uint<16> demosaic_lane_33 = demosaic.extract<528, 543>();
  hw_uint<16> demosaic_lane_34 = demosaic.extract<544, 559>();
  hw_uint<16> demosaic_lane_35 = demosaic.extract<560, 575>();
  hw_uint<16> demosaic_lane_36 = demosaic.extract<576, 591>();
  hw_uint<16> demosaic_lane_37 = demosaic.extract<592, 607>();
  hw_uint<16> demosaic_lane_38 = demosaic.extract<608, 623>();
  hw_uint<16> demosaic_lane_39 = demosaic.extract<624, 639>();
  hw_uint<16> demosaic_lane_40 = demosaic.extract<640, 655>();
  hw_uint<16> demosaic_lane_41 = demosaic.extract<656, 671>();
  hw_uint<16> demosaic_lane_42 = demosaic.extract<672, 687>();
  hw_uint<16> demosaic_lane_43 = demosaic.extract<688, 703>();
  hw_uint<16> demosaic_lane_44 = demosaic.extract<704, 719>();
  hw_uint<16> demosaic_lane_45 = demosaic.extract<720, 735>();
  hw_uint<16> demosaic_lane_46 = demosaic.extract<736, 751>();
  hw_uint<16> demosaic_lane_47 = demosaic.extract<752, 767>();

	
  hw_uint<48 > demosaic_lane_2_pack;
  set_at<0, 48, 16>(demosaic_lane_2_pack, demosaic_lane_0);
  set_at<16, 48, 16>(demosaic_lane_2_pack, demosaic_lane_1);
  set_at<32, 48, 16>(demosaic_lane_2_pack, demosaic_lane_2);
  auto res_demosaic_bxb_update_0_sm5_0171 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_2_pack);

  hw_uint<48 > demosaic_lane_5_pack;
  set_at<0, 48, 16>(demosaic_lane_5_pack, demosaic_lane_3);
  set_at<16, 48, 16>(demosaic_lane_5_pack, demosaic_lane_4);
  set_at<32, 48, 16>(demosaic_lane_5_pack, demosaic_lane_5);
  auto res_demosaic_bxb_update_0_sm5_1173 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_5_pack);

  hw_uint<48 > demosaic_lane_8_pack;
  set_at<0, 48, 16>(demosaic_lane_8_pack, demosaic_lane_6);
  set_at<16, 48, 16>(demosaic_lane_8_pack, demosaic_lane_7);
  set_at<32, 48, 16>(demosaic_lane_8_pack, demosaic_lane_8);
  auto res_demosaic_bxb_update_0_sm5_2175 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_8_pack);

  hw_uint<48 > demosaic_lane_11_pack;
  set_at<0, 48, 16>(demosaic_lane_11_pack, demosaic_lane_9);
  set_at<16, 48, 16>(demosaic_lane_11_pack, demosaic_lane_10);
  set_at<32, 48, 16>(demosaic_lane_11_pack, demosaic_lane_11);
  auto res_demosaic_bxb_update_0_sm5_3177 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_11_pack);

  hw_uint<48 > demosaic_lane_14_pack;
  set_at<0, 48, 16>(demosaic_lane_14_pack, demosaic_lane_12);
  set_at<16, 48, 16>(demosaic_lane_14_pack, demosaic_lane_13);
  set_at<32, 48, 16>(demosaic_lane_14_pack, demosaic_lane_14);
  auto res_demosaic_bxb_update_0_sm5_4179 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_14_pack);

  hw_uint<48 > demosaic_lane_17_pack;
  set_at<0, 48, 16>(demosaic_lane_17_pack, demosaic_lane_15);
  set_at<16, 48, 16>(demosaic_lane_17_pack, demosaic_lane_16);
  set_at<32, 48, 16>(demosaic_lane_17_pack, demosaic_lane_17);
  auto res_demosaic_bxb_update_0_sm5_5181 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_17_pack);

  hw_uint<48 > demosaic_lane_20_pack;
  set_at<0, 48, 16>(demosaic_lane_20_pack, demosaic_lane_18);
  set_at<16, 48, 16>(demosaic_lane_20_pack, demosaic_lane_19);
  set_at<32, 48, 16>(demosaic_lane_20_pack, demosaic_lane_20);
  auto res_demosaic_bxb_update_0_sm5_6183 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_20_pack);

  hw_uint<48 > demosaic_lane_23_pack;
  set_at<0, 48, 16>(demosaic_lane_23_pack, demosaic_lane_21);
  set_at<16, 48, 16>(demosaic_lane_23_pack, demosaic_lane_22);
  set_at<32, 48, 16>(demosaic_lane_23_pack, demosaic_lane_23);
  auto res_demosaic_bxb_update_0_sm5_7185 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_23_pack);

  hw_uint<48 > demosaic_lane_26_pack;
  set_at<0, 48, 16>(demosaic_lane_26_pack, demosaic_lane_24);
  set_at<16, 48, 16>(demosaic_lane_26_pack, demosaic_lane_25);
  set_at<32, 48, 16>(demosaic_lane_26_pack, demosaic_lane_26);
  auto res_demosaic_bxb_update_0_sm5_8187 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_26_pack);

  hw_uint<48 > demosaic_lane_29_pack;
  set_at<0, 48, 16>(demosaic_lane_29_pack, demosaic_lane_27);
  set_at<16, 48, 16>(demosaic_lane_29_pack, demosaic_lane_28);
  set_at<32, 48, 16>(demosaic_lane_29_pack, demosaic_lane_29);
  auto res_demosaic_bxb_update_0_sm5_9189 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_29_pack);

  hw_uint<48 > demosaic_lane_32_pack;
  set_at<0, 48, 16>(demosaic_lane_32_pack, demosaic_lane_30);
  set_at<16, 48, 16>(demosaic_lane_32_pack, demosaic_lane_31);
  set_at<32, 48, 16>(demosaic_lane_32_pack, demosaic_lane_32);
  auto res_demosaic_bxb_update_0_sm5_10191 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_32_pack);

  hw_uint<48 > demosaic_lane_35_pack;
  set_at<0, 48, 16>(demosaic_lane_35_pack, demosaic_lane_33);
  set_at<16, 48, 16>(demosaic_lane_35_pack, demosaic_lane_34);
  set_at<32, 48, 16>(demosaic_lane_35_pack, demosaic_lane_35);
  auto res_demosaic_bxb_update_0_sm5_11193 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_35_pack);

  hw_uint<48 > demosaic_lane_38_pack;
  set_at<0, 48, 16>(demosaic_lane_38_pack, demosaic_lane_36);
  set_at<16, 48, 16>(demosaic_lane_38_pack, demosaic_lane_37);
  set_at<32, 48, 16>(demosaic_lane_38_pack, demosaic_lane_38);
  auto res_demosaic_bxb_update_0_sm5_12195 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_38_pack);

  hw_uint<48 > demosaic_lane_41_pack;
  set_at<0, 48, 16>(demosaic_lane_41_pack, demosaic_lane_39);
  set_at<16, 48, 16>(demosaic_lane_41_pack, demosaic_lane_40);
  set_at<32, 48, 16>(demosaic_lane_41_pack, demosaic_lane_41);
  auto res_demosaic_bxb_update_0_sm5_13197 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_41_pack);

  hw_uint<48 > demosaic_lane_44_pack;
  set_at<0, 48, 16>(demosaic_lane_44_pack, demosaic_lane_42);
  set_at<16, 48, 16>(demosaic_lane_44_pack, demosaic_lane_43);
  set_at<32, 48, 16>(demosaic_lane_44_pack, demosaic_lane_44);
  auto res_demosaic_bxb_update_0_sm5_14199 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_44_pack);

  hw_uint<48 > demosaic_lane_47_pack;
  set_at<0, 48, 16>(demosaic_lane_47_pack, demosaic_lane_45);
  set_at<16, 48, 16>(demosaic_lane_47_pack, demosaic_lane_46);
  set_at<32, 48, 16>(demosaic_lane_47_pack, demosaic_lane_47);
  auto res_demosaic_bxb_update_0_sm5_15201 = demosaic_bxb_generated_compute_unrolled_1(demosaic_lane_47_pack);
  hw_uint<256 > return_value379;
  set_at<0, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_0171);
  set_at<16, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_1173);
  set_at<32, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_2175);
  set_at<48, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_3177);
  set_at<64, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_4179);
  set_at<80, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_5181);
  set_at<96, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_6183);
  set_at<112, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_7185);
  set_at<128, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_8187);
  set_at<144, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_9189);
  set_at<160, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_10191);
  set_at<176, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_11193);
  set_at<192, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_12195);
  set_at<208, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_13197);
  set_at<224, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_14199);
  set_at<240, 256, 16>(return_value379, res_demosaic_bxb_update_0_sm5_15201);
  return return_value379;

}

hw_uint<256> demosaic_bx_1_cu381(hw_uint<16*16>& demosaic_bxb) {
  hw_uint<16> demosaic_bxb_lane_0 = demosaic_bxb.extract<0, 15>();
  hw_uint<16> demosaic_bxb_lane_1 = demosaic_bxb.extract<16, 31>();
  hw_uint<16> demosaic_bxb_lane_2 = demosaic_bxb.extract<32, 47>();
  hw_uint<16> demosaic_bxb_lane_3 = demosaic_bxb.extract<48, 63>();
  hw_uint<16> demosaic_bxb_lane_4 = demosaic_bxb.extract<64, 79>();
  hw_uint<16> demosaic_bxb_lane_5 = demosaic_bxb.extract<80, 95>();
  hw_uint<16> demosaic_bxb_lane_6 = demosaic_bxb.extract<96, 111>();
  hw_uint<16> demosaic_bxb_lane_7 = demosaic_bxb.extract<112, 127>();
  hw_uint<16> demosaic_bxb_lane_8 = demosaic_bxb.extract<128, 143>();
  hw_uint<16> demosaic_bxb_lane_9 = demosaic_bxb.extract<144, 159>();
  hw_uint<16> demosaic_bxb_lane_10 = demosaic_bxb.extract<160, 175>();
  hw_uint<16> demosaic_bxb_lane_11 = demosaic_bxb.extract<176, 191>();
  hw_uint<16> demosaic_bxb_lane_12 = demosaic_bxb.extract<192, 207>();
  hw_uint<16> demosaic_bxb_lane_13 = demosaic_bxb.extract<208, 223>();
  hw_uint<16> demosaic_bxb_lane_14 = demosaic_bxb.extract<224, 239>();
  hw_uint<16> demosaic_bxb_lane_15 = demosaic_bxb.extract<240, 255>();

	
  hw_uint<16 > demosaic_bxb_lane_0_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_0_pack, demosaic_bxb_lane_0);
  auto res_demosaic_bx_update_0_sm6_0203 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_0_pack);

  hw_uint<16 > demosaic_bxb_lane_1_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_1_pack, demosaic_bxb_lane_1);
  auto res_demosaic_bx_update_0_sm6_1205 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_1_pack);

  hw_uint<16 > demosaic_bxb_lane_2_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_2_pack, demosaic_bxb_lane_2);
  auto res_demosaic_bx_update_0_sm6_2207 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_2_pack);

  hw_uint<16 > demosaic_bxb_lane_3_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_3_pack, demosaic_bxb_lane_3);
  auto res_demosaic_bx_update_0_sm6_3209 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_3_pack);

  hw_uint<16 > demosaic_bxb_lane_4_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_4_pack, demosaic_bxb_lane_4);
  auto res_demosaic_bx_update_0_sm6_4211 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_4_pack);

  hw_uint<16 > demosaic_bxb_lane_5_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_5_pack, demosaic_bxb_lane_5);
  auto res_demosaic_bx_update_0_sm6_5213 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_5_pack);

  hw_uint<16 > demosaic_bxb_lane_6_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_6_pack, demosaic_bxb_lane_6);
  auto res_demosaic_bx_update_0_sm6_6215 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_6_pack);

  hw_uint<16 > demosaic_bxb_lane_7_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_7_pack, demosaic_bxb_lane_7);
  auto res_demosaic_bx_update_0_sm6_7217 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_7_pack);

  hw_uint<16 > demosaic_bxb_lane_8_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_8_pack, demosaic_bxb_lane_8);
  auto res_demosaic_bx_update_0_sm6_8219 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_8_pack);

  hw_uint<16 > demosaic_bxb_lane_9_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_9_pack, demosaic_bxb_lane_9);
  auto res_demosaic_bx_update_0_sm6_9221 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_9_pack);

  hw_uint<16 > demosaic_bxb_lane_10_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_10_pack, demosaic_bxb_lane_10);
  auto res_demosaic_bx_update_0_sm6_10223 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_10_pack);

  hw_uint<16 > demosaic_bxb_lane_11_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_11_pack, demosaic_bxb_lane_11);
  auto res_demosaic_bx_update_0_sm6_11225 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_11_pack);

  hw_uint<16 > demosaic_bxb_lane_12_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_12_pack, demosaic_bxb_lane_12);
  auto res_demosaic_bx_update_0_sm6_12227 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_12_pack);

  hw_uint<16 > demosaic_bxb_lane_13_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_13_pack, demosaic_bxb_lane_13);
  auto res_demosaic_bx_update_0_sm6_13229 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_13_pack);

  hw_uint<16 > demosaic_bxb_lane_14_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_14_pack, demosaic_bxb_lane_14);
  auto res_demosaic_bx_update_0_sm6_14231 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_14_pack);

  hw_uint<16 > demosaic_bxb_lane_15_pack;
  set_at<0, 16, 16>(demosaic_bxb_lane_15_pack, demosaic_bxb_lane_15);
  auto res_demosaic_bx_update_0_sm6_15233 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_lane_15_pack);
  hw_uint<256 > return_value382;
  set_at<0, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_0203);
  set_at<16, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_1205);
  set_at<32, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_2207);
  set_at<48, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_3209);
  set_at<64, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_4211);
  set_at<80, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_5213);
  set_at<96, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_6215);
  set_at<112, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_7217);
  set_at<128, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_8219);
  set_at<144, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_9221);
  set_at<160, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_10223);
  set_at<176, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_11225);
  set_at<192, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_12227);
  set_at<208, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_13229);
  set_at<224, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_14231);
  set_at<240, 256, 16>(return_value382, res_demosaic_bx_update_0_sm6_15233);
  return return_value382;

}

hw_uint<256> demosaic_byb_1_cu384(hw_uint<16*48>& demosaic_bx) {
  hw_uint<16> demosaic_bx_lane_0 = demosaic_bx.extract<0, 15>();
  hw_uint<16> demosaic_bx_lane_1 = demosaic_bx.extract<16, 31>();
  hw_uint<16> demosaic_bx_lane_2 = demosaic_bx.extract<32, 47>();
  hw_uint<16> demosaic_bx_lane_3 = demosaic_bx.extract<48, 63>();
  hw_uint<16> demosaic_bx_lane_4 = demosaic_bx.extract<64, 79>();
  hw_uint<16> demosaic_bx_lane_5 = demosaic_bx.extract<80, 95>();
  hw_uint<16> demosaic_bx_lane_6 = demosaic_bx.extract<96, 111>();
  hw_uint<16> demosaic_bx_lane_7 = demosaic_bx.extract<112, 127>();
  hw_uint<16> demosaic_bx_lane_8 = demosaic_bx.extract<128, 143>();
  hw_uint<16> demosaic_bx_lane_9 = demosaic_bx.extract<144, 159>();
  hw_uint<16> demosaic_bx_lane_10 = demosaic_bx.extract<160, 175>();
  hw_uint<16> demosaic_bx_lane_11 = demosaic_bx.extract<176, 191>();
  hw_uint<16> demosaic_bx_lane_12 = demosaic_bx.extract<192, 207>();
  hw_uint<16> demosaic_bx_lane_13 = demosaic_bx.extract<208, 223>();
  hw_uint<16> demosaic_bx_lane_14 = demosaic_bx.extract<224, 239>();
  hw_uint<16> demosaic_bx_lane_15 = demosaic_bx.extract<240, 255>();
  hw_uint<16> demosaic_bx_lane_16 = demosaic_bx.extract<256, 271>();
  hw_uint<16> demosaic_bx_lane_17 = demosaic_bx.extract<272, 287>();
  hw_uint<16> demosaic_bx_lane_18 = demosaic_bx.extract<288, 303>();
  hw_uint<16> demosaic_bx_lane_19 = demosaic_bx.extract<304, 319>();
  hw_uint<16> demosaic_bx_lane_20 = demosaic_bx.extract<320, 335>();
  hw_uint<16> demosaic_bx_lane_21 = demosaic_bx.extract<336, 351>();
  hw_uint<16> demosaic_bx_lane_22 = demosaic_bx.extract<352, 367>();
  hw_uint<16> demosaic_bx_lane_23 = demosaic_bx.extract<368, 383>();
  hw_uint<16> demosaic_bx_lane_24 = demosaic_bx.extract<384, 399>();
  hw_uint<16> demosaic_bx_lane_25 = demosaic_bx.extract<400, 415>();
  hw_uint<16> demosaic_bx_lane_26 = demosaic_bx.extract<416, 431>();
  hw_uint<16> demosaic_bx_lane_27 = demosaic_bx.extract<432, 447>();
  hw_uint<16> demosaic_bx_lane_28 = demosaic_bx.extract<448, 463>();
  hw_uint<16> demosaic_bx_lane_29 = demosaic_bx.extract<464, 479>();
  hw_uint<16> demosaic_bx_lane_30 = demosaic_bx.extract<480, 495>();
  hw_uint<16> demosaic_bx_lane_31 = demosaic_bx.extract<496, 511>();
  hw_uint<16> demosaic_bx_lane_32 = demosaic_bx.extract<512, 527>();
  hw_uint<16> demosaic_bx_lane_33 = demosaic_bx.extract<528, 543>();
  hw_uint<16> demosaic_bx_lane_34 = demosaic_bx.extract<544, 559>();
  hw_uint<16> demosaic_bx_lane_35 = demosaic_bx.extract<560, 575>();
  hw_uint<16> demosaic_bx_lane_36 = demosaic_bx.extract<576, 591>();
  hw_uint<16> demosaic_bx_lane_37 = demosaic_bx.extract<592, 607>();
  hw_uint<16> demosaic_bx_lane_38 = demosaic_bx.extract<608, 623>();
  hw_uint<16> demosaic_bx_lane_39 = demosaic_bx.extract<624, 639>();
  hw_uint<16> demosaic_bx_lane_40 = demosaic_bx.extract<640, 655>();
  hw_uint<16> demosaic_bx_lane_41 = demosaic_bx.extract<656, 671>();
  hw_uint<16> demosaic_bx_lane_42 = demosaic_bx.extract<672, 687>();
  hw_uint<16> demosaic_bx_lane_43 = demosaic_bx.extract<688, 703>();
  hw_uint<16> demosaic_bx_lane_44 = demosaic_bx.extract<704, 719>();
  hw_uint<16> demosaic_bx_lane_45 = demosaic_bx.extract<720, 735>();
  hw_uint<16> demosaic_bx_lane_46 = demosaic_bx.extract<736, 751>();
  hw_uint<16> demosaic_bx_lane_47 = demosaic_bx.extract<752, 767>();

	
  hw_uint<48 > demosaic_bx_lane_2_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_2_pack, demosaic_bx_lane_0);
  set_at<16, 48, 16>(demosaic_bx_lane_2_pack, demosaic_bx_lane_1);
  set_at<32, 48, 16>(demosaic_bx_lane_2_pack, demosaic_bx_lane_2);
  auto res_demosaic_byb_update_0_sm7_0235 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_2_pack);

  hw_uint<48 > demosaic_bx_lane_5_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_5_pack, demosaic_bx_lane_3);
  set_at<16, 48, 16>(demosaic_bx_lane_5_pack, demosaic_bx_lane_4);
  set_at<32, 48, 16>(demosaic_bx_lane_5_pack, demosaic_bx_lane_5);
  auto res_demosaic_byb_update_0_sm7_1237 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_5_pack);

  hw_uint<48 > demosaic_bx_lane_8_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_8_pack, demosaic_bx_lane_6);
  set_at<16, 48, 16>(demosaic_bx_lane_8_pack, demosaic_bx_lane_7);
  set_at<32, 48, 16>(demosaic_bx_lane_8_pack, demosaic_bx_lane_8);
  auto res_demosaic_byb_update_0_sm7_2239 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_8_pack);

  hw_uint<48 > demosaic_bx_lane_11_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_11_pack, demosaic_bx_lane_9);
  set_at<16, 48, 16>(demosaic_bx_lane_11_pack, demosaic_bx_lane_10);
  set_at<32, 48, 16>(demosaic_bx_lane_11_pack, demosaic_bx_lane_11);
  auto res_demosaic_byb_update_0_sm7_3241 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_11_pack);

  hw_uint<48 > demosaic_bx_lane_14_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_14_pack, demosaic_bx_lane_12);
  set_at<16, 48, 16>(demosaic_bx_lane_14_pack, demosaic_bx_lane_13);
  set_at<32, 48, 16>(demosaic_bx_lane_14_pack, demosaic_bx_lane_14);
  auto res_demosaic_byb_update_0_sm7_4243 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_14_pack);

  hw_uint<48 > demosaic_bx_lane_17_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_17_pack, demosaic_bx_lane_15);
  set_at<16, 48, 16>(demosaic_bx_lane_17_pack, demosaic_bx_lane_16);
  set_at<32, 48, 16>(demosaic_bx_lane_17_pack, demosaic_bx_lane_17);
  auto res_demosaic_byb_update_0_sm7_5245 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_17_pack);

  hw_uint<48 > demosaic_bx_lane_20_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_20_pack, demosaic_bx_lane_18);
  set_at<16, 48, 16>(demosaic_bx_lane_20_pack, demosaic_bx_lane_19);
  set_at<32, 48, 16>(demosaic_bx_lane_20_pack, demosaic_bx_lane_20);
  auto res_demosaic_byb_update_0_sm7_6247 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_20_pack);

  hw_uint<48 > demosaic_bx_lane_23_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_23_pack, demosaic_bx_lane_21);
  set_at<16, 48, 16>(demosaic_bx_lane_23_pack, demosaic_bx_lane_22);
  set_at<32, 48, 16>(demosaic_bx_lane_23_pack, demosaic_bx_lane_23);
  auto res_demosaic_byb_update_0_sm7_7249 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_23_pack);

  hw_uint<48 > demosaic_bx_lane_26_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_26_pack, demosaic_bx_lane_24);
  set_at<16, 48, 16>(demosaic_bx_lane_26_pack, demosaic_bx_lane_25);
  set_at<32, 48, 16>(demosaic_bx_lane_26_pack, demosaic_bx_lane_26);
  auto res_demosaic_byb_update_0_sm7_8251 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_26_pack);

  hw_uint<48 > demosaic_bx_lane_29_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_29_pack, demosaic_bx_lane_27);
  set_at<16, 48, 16>(demosaic_bx_lane_29_pack, demosaic_bx_lane_28);
  set_at<32, 48, 16>(demosaic_bx_lane_29_pack, demosaic_bx_lane_29);
  auto res_demosaic_byb_update_0_sm7_9253 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_29_pack);

  hw_uint<48 > demosaic_bx_lane_32_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_32_pack, demosaic_bx_lane_30);
  set_at<16, 48, 16>(demosaic_bx_lane_32_pack, demosaic_bx_lane_31);
  set_at<32, 48, 16>(demosaic_bx_lane_32_pack, demosaic_bx_lane_32);
  auto res_demosaic_byb_update_0_sm7_10255 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_32_pack);

  hw_uint<48 > demosaic_bx_lane_35_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_35_pack, demosaic_bx_lane_33);
  set_at<16, 48, 16>(demosaic_bx_lane_35_pack, demosaic_bx_lane_34);
  set_at<32, 48, 16>(demosaic_bx_lane_35_pack, demosaic_bx_lane_35);
  auto res_demosaic_byb_update_0_sm7_11257 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_35_pack);

  hw_uint<48 > demosaic_bx_lane_38_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_38_pack, demosaic_bx_lane_36);
  set_at<16, 48, 16>(demosaic_bx_lane_38_pack, demosaic_bx_lane_37);
  set_at<32, 48, 16>(demosaic_bx_lane_38_pack, demosaic_bx_lane_38);
  auto res_demosaic_byb_update_0_sm7_12259 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_38_pack);

  hw_uint<48 > demosaic_bx_lane_41_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_41_pack, demosaic_bx_lane_39);
  set_at<16, 48, 16>(demosaic_bx_lane_41_pack, demosaic_bx_lane_40);
  set_at<32, 48, 16>(demosaic_bx_lane_41_pack, demosaic_bx_lane_41);
  auto res_demosaic_byb_update_0_sm7_13261 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_41_pack);

  hw_uint<48 > demosaic_bx_lane_44_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_44_pack, demosaic_bx_lane_42);
  set_at<16, 48, 16>(demosaic_bx_lane_44_pack, demosaic_bx_lane_43);
  set_at<32, 48, 16>(demosaic_bx_lane_44_pack, demosaic_bx_lane_44);
  auto res_demosaic_byb_update_0_sm7_14263 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_44_pack);

  hw_uint<48 > demosaic_bx_lane_47_pack;
  set_at<0, 48, 16>(demosaic_bx_lane_47_pack, demosaic_bx_lane_45);
  set_at<16, 48, 16>(demosaic_bx_lane_47_pack, demosaic_bx_lane_46);
  set_at<32, 48, 16>(demosaic_bx_lane_47_pack, demosaic_bx_lane_47);
  auto res_demosaic_byb_update_0_sm7_15265 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_lane_47_pack);
  hw_uint<256 > return_value385;
  set_at<0, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_0235);
  set_at<16, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_1237);
  set_at<32, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_2239);
  set_at<48, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_3241);
  set_at<64, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_4243);
  set_at<80, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_5245);
  set_at<96, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_6247);
  set_at<112, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_7249);
  set_at<128, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_8251);
  set_at<144, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_9253);
  set_at<160, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_10255);
  set_at<176, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_11257);
  set_at<192, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_12259);
  set_at<208, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_13261);
  set_at<224, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_14263);
  set_at<240, 256, 16>(return_value385, res_demosaic_byb_update_0_sm7_15265);
  return return_value385;

}

hw_uint<256> demosaic_by_1_cu387(hw_uint<16*16>& demosaic_byb) {
  hw_uint<16> demosaic_byb_lane_0 = demosaic_byb.extract<0, 15>();
  hw_uint<16> demosaic_byb_lane_1 = demosaic_byb.extract<16, 31>();
  hw_uint<16> demosaic_byb_lane_2 = demosaic_byb.extract<32, 47>();
  hw_uint<16> demosaic_byb_lane_3 = demosaic_byb.extract<48, 63>();
  hw_uint<16> demosaic_byb_lane_4 = demosaic_byb.extract<64, 79>();
  hw_uint<16> demosaic_byb_lane_5 = demosaic_byb.extract<80, 95>();
  hw_uint<16> demosaic_byb_lane_6 = demosaic_byb.extract<96, 111>();
  hw_uint<16> demosaic_byb_lane_7 = demosaic_byb.extract<112, 127>();
  hw_uint<16> demosaic_byb_lane_8 = demosaic_byb.extract<128, 143>();
  hw_uint<16> demosaic_byb_lane_9 = demosaic_byb.extract<144, 159>();
  hw_uint<16> demosaic_byb_lane_10 = demosaic_byb.extract<160, 175>();
  hw_uint<16> demosaic_byb_lane_11 = demosaic_byb.extract<176, 191>();
  hw_uint<16> demosaic_byb_lane_12 = demosaic_byb.extract<192, 207>();
  hw_uint<16> demosaic_byb_lane_13 = demosaic_byb.extract<208, 223>();
  hw_uint<16> demosaic_byb_lane_14 = demosaic_byb.extract<224, 239>();
  hw_uint<16> demosaic_byb_lane_15 = demosaic_byb.extract<240, 255>();

	
  hw_uint<16 > demosaic_byb_lane_0_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_0_pack, demosaic_byb_lane_0);
  auto res_demosaic_by_update_0_sm8_0267 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_0_pack);

  hw_uint<16 > demosaic_byb_lane_1_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_1_pack, demosaic_byb_lane_1);
  auto res_demosaic_by_update_0_sm8_1269 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_1_pack);

  hw_uint<16 > demosaic_byb_lane_2_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_2_pack, demosaic_byb_lane_2);
  auto res_demosaic_by_update_0_sm8_2271 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_2_pack);

  hw_uint<16 > demosaic_byb_lane_3_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_3_pack, demosaic_byb_lane_3);
  auto res_demosaic_by_update_0_sm8_3273 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_3_pack);

  hw_uint<16 > demosaic_byb_lane_4_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_4_pack, demosaic_byb_lane_4);
  auto res_demosaic_by_update_0_sm8_4275 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_4_pack);

  hw_uint<16 > demosaic_byb_lane_5_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_5_pack, demosaic_byb_lane_5);
  auto res_demosaic_by_update_0_sm8_5277 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_5_pack);

  hw_uint<16 > demosaic_byb_lane_6_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_6_pack, demosaic_byb_lane_6);
  auto res_demosaic_by_update_0_sm8_6279 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_6_pack);

  hw_uint<16 > demosaic_byb_lane_7_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_7_pack, demosaic_byb_lane_7);
  auto res_demosaic_by_update_0_sm8_7281 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_7_pack);

  hw_uint<16 > demosaic_byb_lane_8_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_8_pack, demosaic_byb_lane_8);
  auto res_demosaic_by_update_0_sm8_8283 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_8_pack);

  hw_uint<16 > demosaic_byb_lane_9_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_9_pack, demosaic_byb_lane_9);
  auto res_demosaic_by_update_0_sm8_9285 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_9_pack);

  hw_uint<16 > demosaic_byb_lane_10_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_10_pack, demosaic_byb_lane_10);
  auto res_demosaic_by_update_0_sm8_10287 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_10_pack);

  hw_uint<16 > demosaic_byb_lane_11_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_11_pack, demosaic_byb_lane_11);
  auto res_demosaic_by_update_0_sm8_11289 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_11_pack);

  hw_uint<16 > demosaic_byb_lane_12_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_12_pack, demosaic_byb_lane_12);
  auto res_demosaic_by_update_0_sm8_12291 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_12_pack);

  hw_uint<16 > demosaic_byb_lane_13_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_13_pack, demosaic_byb_lane_13);
  auto res_demosaic_by_update_0_sm8_13293 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_13_pack);

  hw_uint<16 > demosaic_byb_lane_14_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_14_pack, demosaic_byb_lane_14);
  auto res_demosaic_by_update_0_sm8_14295 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_14_pack);

  hw_uint<16 > demosaic_byb_lane_15_pack;
  set_at<0, 16, 16>(demosaic_byb_lane_15_pack, demosaic_byb_lane_15);
  auto res_demosaic_by_update_0_sm8_15297 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_lane_15_pack);
  hw_uint<256 > return_value388;
  set_at<0, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_0267);
  set_at<16, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_1269);
  set_at<32, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_2271);
  set_at<48, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_3273);
  set_at<64, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_4275);
  set_at<80, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_5277);
  set_at<96, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_6279);
  set_at<112, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_7281);
  set_at<128, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_8283);
  set_at<144, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_9285);
  set_at<160, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_10287);
  set_at<176, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_11289);
  set_at<192, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_12291);
  set_at<208, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_13293);
  set_at<224, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_14295);
  set_at<240, 256, 16>(return_value388, res_demosaic_by_update_0_sm8_15297);
  return return_value388;

}

hw_uint<256> demosaic_diff_1_cu390(hw_uint<16*16>& demosaic, hw_uint<16*16>& demosaic_by) {
  hw_uint<16> demosaic_lane_0 = demosaic.extract<0, 15>();
  hw_uint<16> demosaic_lane_1 = demosaic.extract<16, 31>();
  hw_uint<16> demosaic_lane_2 = demosaic.extract<32, 47>();
  hw_uint<16> demosaic_lane_3 = demosaic.extract<48, 63>();
  hw_uint<16> demosaic_lane_4 = demosaic.extract<64, 79>();
  hw_uint<16> demosaic_lane_5 = demosaic.extract<80, 95>();
  hw_uint<16> demosaic_lane_6 = demosaic.extract<96, 111>();
  hw_uint<16> demosaic_lane_7 = demosaic.extract<112, 127>();
  hw_uint<16> demosaic_lane_8 = demosaic.extract<128, 143>();
  hw_uint<16> demosaic_lane_9 = demosaic.extract<144, 159>();
  hw_uint<16> demosaic_lane_10 = demosaic.extract<160, 175>();
  hw_uint<16> demosaic_lane_11 = demosaic.extract<176, 191>();
  hw_uint<16> demosaic_lane_12 = demosaic.extract<192, 207>();
  hw_uint<16> demosaic_lane_13 = demosaic.extract<208, 223>();
  hw_uint<16> demosaic_lane_14 = demosaic.extract<224, 239>();
  hw_uint<16> demosaic_lane_15 = demosaic.extract<240, 255>();
  hw_uint<16> demosaic_by_lane_0 = demosaic_by.extract<0, 15>();
  hw_uint<16> demosaic_by_lane_1 = demosaic_by.extract<16, 31>();
  hw_uint<16> demosaic_by_lane_2 = demosaic_by.extract<32, 47>();
  hw_uint<16> demosaic_by_lane_3 = demosaic_by.extract<48, 63>();
  hw_uint<16> demosaic_by_lane_4 = demosaic_by.extract<64, 79>();
  hw_uint<16> demosaic_by_lane_5 = demosaic_by.extract<80, 95>();
  hw_uint<16> demosaic_by_lane_6 = demosaic_by.extract<96, 111>();
  hw_uint<16> demosaic_by_lane_7 = demosaic_by.extract<112, 127>();
  hw_uint<16> demosaic_by_lane_8 = demosaic_by.extract<128, 143>();
  hw_uint<16> demosaic_by_lane_9 = demosaic_by.extract<144, 159>();
  hw_uint<16> demosaic_by_lane_10 = demosaic_by.extract<160, 175>();
  hw_uint<16> demosaic_by_lane_11 = demosaic_by.extract<176, 191>();
  hw_uint<16> demosaic_by_lane_12 = demosaic_by.extract<192, 207>();
  hw_uint<16> demosaic_by_lane_13 = demosaic_by.extract<208, 223>();
  hw_uint<16> demosaic_by_lane_14 = demosaic_by.extract<224, 239>();
  hw_uint<16> demosaic_by_lane_15 = demosaic_by.extract<240, 255>();

	
  hw_uint<16 > demosaic_lane_0_pack;
  set_at<0, 16, 16>(demosaic_lane_0_pack, demosaic_lane_0);
  hw_uint<16 > demosaic_by_lane_0_pack;
  set_at<0, 16, 16>(demosaic_by_lane_0_pack, demosaic_by_lane_0);
  auto res_demosaic_diff_update_0_sm9_0299 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_0_pack, demosaic_by_lane_0_pack);

  hw_uint<16 > demosaic_lane_1_pack;
  set_at<0, 16, 16>(demosaic_lane_1_pack, demosaic_lane_1);
  hw_uint<16 > demosaic_by_lane_1_pack;
  set_at<0, 16, 16>(demosaic_by_lane_1_pack, demosaic_by_lane_1);
  auto res_demosaic_diff_update_0_sm9_1301 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_1_pack, demosaic_by_lane_1_pack);

  hw_uint<16 > demosaic_lane_2_pack;
  set_at<0, 16, 16>(demosaic_lane_2_pack, demosaic_lane_2);
  hw_uint<16 > demosaic_by_lane_2_pack;
  set_at<0, 16, 16>(demosaic_by_lane_2_pack, demosaic_by_lane_2);
  auto res_demosaic_diff_update_0_sm9_2303 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_2_pack, demosaic_by_lane_2_pack);

  hw_uint<16 > demosaic_lane_3_pack;
  set_at<0, 16, 16>(demosaic_lane_3_pack, demosaic_lane_3);
  hw_uint<16 > demosaic_by_lane_3_pack;
  set_at<0, 16, 16>(demosaic_by_lane_3_pack, demosaic_by_lane_3);
  auto res_demosaic_diff_update_0_sm9_3305 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_3_pack, demosaic_by_lane_3_pack);

  hw_uint<16 > demosaic_lane_4_pack;
  set_at<0, 16, 16>(demosaic_lane_4_pack, demosaic_lane_4);
  hw_uint<16 > demosaic_by_lane_4_pack;
  set_at<0, 16, 16>(demosaic_by_lane_4_pack, demosaic_by_lane_4);
  auto res_demosaic_diff_update_0_sm9_4307 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_4_pack, demosaic_by_lane_4_pack);

  hw_uint<16 > demosaic_lane_5_pack;
  set_at<0, 16, 16>(demosaic_lane_5_pack, demosaic_lane_5);
  hw_uint<16 > demosaic_by_lane_5_pack;
  set_at<0, 16, 16>(demosaic_by_lane_5_pack, demosaic_by_lane_5);
  auto res_demosaic_diff_update_0_sm9_5309 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_5_pack, demosaic_by_lane_5_pack);

  hw_uint<16 > demosaic_lane_6_pack;
  set_at<0, 16, 16>(demosaic_lane_6_pack, demosaic_lane_6);
  hw_uint<16 > demosaic_by_lane_6_pack;
  set_at<0, 16, 16>(demosaic_by_lane_6_pack, demosaic_by_lane_6);
  auto res_demosaic_diff_update_0_sm9_6311 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_6_pack, demosaic_by_lane_6_pack);

  hw_uint<16 > demosaic_lane_7_pack;
  set_at<0, 16, 16>(demosaic_lane_7_pack, demosaic_lane_7);
  hw_uint<16 > demosaic_by_lane_7_pack;
  set_at<0, 16, 16>(demosaic_by_lane_7_pack, demosaic_by_lane_7);
  auto res_demosaic_diff_update_0_sm9_7313 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_7_pack, demosaic_by_lane_7_pack);

  hw_uint<16 > demosaic_lane_8_pack;
  set_at<0, 16, 16>(demosaic_lane_8_pack, demosaic_lane_8);
  hw_uint<16 > demosaic_by_lane_8_pack;
  set_at<0, 16, 16>(demosaic_by_lane_8_pack, demosaic_by_lane_8);
  auto res_demosaic_diff_update_0_sm9_8315 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_8_pack, demosaic_by_lane_8_pack);

  hw_uint<16 > demosaic_lane_9_pack;
  set_at<0, 16, 16>(demosaic_lane_9_pack, demosaic_lane_9);
  hw_uint<16 > demosaic_by_lane_9_pack;
  set_at<0, 16, 16>(demosaic_by_lane_9_pack, demosaic_by_lane_9);
  auto res_demosaic_diff_update_0_sm9_9317 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_9_pack, demosaic_by_lane_9_pack);

  hw_uint<16 > demosaic_lane_10_pack;
  set_at<0, 16, 16>(demosaic_lane_10_pack, demosaic_lane_10);
  hw_uint<16 > demosaic_by_lane_10_pack;
  set_at<0, 16, 16>(demosaic_by_lane_10_pack, demosaic_by_lane_10);
  auto res_demosaic_diff_update_0_sm9_10319 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_10_pack, demosaic_by_lane_10_pack);

  hw_uint<16 > demosaic_lane_11_pack;
  set_at<0, 16, 16>(demosaic_lane_11_pack, demosaic_lane_11);
  hw_uint<16 > demosaic_by_lane_11_pack;
  set_at<0, 16, 16>(demosaic_by_lane_11_pack, demosaic_by_lane_11);
  auto res_demosaic_diff_update_0_sm9_11321 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_11_pack, demosaic_by_lane_11_pack);

  hw_uint<16 > demosaic_lane_12_pack;
  set_at<0, 16, 16>(demosaic_lane_12_pack, demosaic_lane_12);
  hw_uint<16 > demosaic_by_lane_12_pack;
  set_at<0, 16, 16>(demosaic_by_lane_12_pack, demosaic_by_lane_12);
  auto res_demosaic_diff_update_0_sm9_12323 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_12_pack, demosaic_by_lane_12_pack);

  hw_uint<16 > demosaic_lane_13_pack;
  set_at<0, 16, 16>(demosaic_lane_13_pack, demosaic_lane_13);
  hw_uint<16 > demosaic_by_lane_13_pack;
  set_at<0, 16, 16>(demosaic_by_lane_13_pack, demosaic_by_lane_13);
  auto res_demosaic_diff_update_0_sm9_13325 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_13_pack, demosaic_by_lane_13_pack);

  hw_uint<16 > demosaic_lane_14_pack;
  set_at<0, 16, 16>(demosaic_lane_14_pack, demosaic_lane_14);
  hw_uint<16 > demosaic_by_lane_14_pack;
  set_at<0, 16, 16>(demosaic_by_lane_14_pack, demosaic_by_lane_14);
  auto res_demosaic_diff_update_0_sm9_14327 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_14_pack, demosaic_by_lane_14_pack);

  hw_uint<16 > demosaic_lane_15_pack;
  set_at<0, 16, 16>(demosaic_lane_15_pack, demosaic_lane_15);
  hw_uint<16 > demosaic_by_lane_15_pack;
  set_at<0, 16, 16>(demosaic_by_lane_15_pack, demosaic_by_lane_15);
  auto res_demosaic_diff_update_0_sm9_15329 = demosaic_diff_generated_compute_unrolled_1(demosaic_lane_15_pack, demosaic_by_lane_15_pack);
  hw_uint<256 > return_value391;
  set_at<0, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_0299);
  set_at<16, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_1301);
  set_at<32, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_2303);
  set_at<48, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_3305);
  set_at<64, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_4307);
  set_at<80, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_5309);
  set_at<96, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_6311);
  set_at<112, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_7313);
  set_at<128, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_8315);
  set_at<144, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_9317);
  set_at<160, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_10319);
  set_at<176, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_11321);
  set_at<192, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_12323);
  set_at<208, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_13325);
  set_at<224, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_14327);
  set_at<240, 256, 16>(return_value391, res_demosaic_diff_update_0_sm9_15329);
  return return_value391;

}

hw_uint<256> cp9_16_1_cu393(hw_uint<16*16>& demosaic_diff) {
  hw_uint<16> demosaic_diff_lane_0 = demosaic_diff.extract<0, 15>();
  hw_uint<16> demosaic_diff_lane_1 = demosaic_diff.extract<16, 31>();
  hw_uint<16> demosaic_diff_lane_2 = demosaic_diff.extract<32, 47>();
  hw_uint<16> demosaic_diff_lane_3 = demosaic_diff.extract<48, 63>();
  hw_uint<16> demosaic_diff_lane_4 = demosaic_diff.extract<64, 79>();
  hw_uint<16> demosaic_diff_lane_5 = demosaic_diff.extract<80, 95>();
  hw_uint<16> demosaic_diff_lane_6 = demosaic_diff.extract<96, 111>();
  hw_uint<16> demosaic_diff_lane_7 = demosaic_diff.extract<112, 127>();
  hw_uint<16> demosaic_diff_lane_8 = demosaic_diff.extract<128, 143>();
  hw_uint<16> demosaic_diff_lane_9 = demosaic_diff.extract<144, 159>();
  hw_uint<16> demosaic_diff_lane_10 = demosaic_diff.extract<160, 175>();
  hw_uint<16> demosaic_diff_lane_11 = demosaic_diff.extract<176, 191>();
  hw_uint<16> demosaic_diff_lane_12 = demosaic_diff.extract<192, 207>();
  hw_uint<16> demosaic_diff_lane_13 = demosaic_diff.extract<208, 223>();
  hw_uint<16> demosaic_diff_lane_14 = demosaic_diff.extract<224, 239>();
  hw_uint<16> demosaic_diff_lane_15 = demosaic_diff.extract<240, 255>();

	
  hw_uint<16 > demosaic_diff_lane_0_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_0_pack, demosaic_diff_lane_0);
  auto res_cp9_16_update_0_sm10_0331 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_0_pack);

  hw_uint<16 > demosaic_diff_lane_1_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_1_pack, demosaic_diff_lane_1);
  auto res_cp9_16_update_0_sm10_1333 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_1_pack);

  hw_uint<16 > demosaic_diff_lane_2_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_2_pack, demosaic_diff_lane_2);
  auto res_cp9_16_update_0_sm10_2335 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_2_pack);

  hw_uint<16 > demosaic_diff_lane_3_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_3_pack, demosaic_diff_lane_3);
  auto res_cp9_16_update_0_sm10_3337 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_3_pack);

  hw_uint<16 > demosaic_diff_lane_4_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_4_pack, demosaic_diff_lane_4);
  auto res_cp9_16_update_0_sm10_4339 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_4_pack);

  hw_uint<16 > demosaic_diff_lane_5_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_5_pack, demosaic_diff_lane_5);
  auto res_cp9_16_update_0_sm10_5341 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_5_pack);

  hw_uint<16 > demosaic_diff_lane_6_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_6_pack, demosaic_diff_lane_6);
  auto res_cp9_16_update_0_sm10_6343 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_6_pack);

  hw_uint<16 > demosaic_diff_lane_7_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_7_pack, demosaic_diff_lane_7);
  auto res_cp9_16_update_0_sm10_7345 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_7_pack);

  hw_uint<16 > demosaic_diff_lane_8_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_8_pack, demosaic_diff_lane_8);
  auto res_cp9_16_update_0_sm10_8347 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_8_pack);

  hw_uint<16 > demosaic_diff_lane_9_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_9_pack, demosaic_diff_lane_9);
  auto res_cp9_16_update_0_sm10_9349 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_9_pack);

  hw_uint<16 > demosaic_diff_lane_10_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_10_pack, demosaic_diff_lane_10);
  auto res_cp9_16_update_0_sm10_10351 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_10_pack);

  hw_uint<16 > demosaic_diff_lane_11_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_11_pack, demosaic_diff_lane_11);
  auto res_cp9_16_update_0_sm10_11353 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_11_pack);

  hw_uint<16 > demosaic_diff_lane_12_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_12_pack, demosaic_diff_lane_12);
  auto res_cp9_16_update_0_sm10_12355 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_12_pack);

  hw_uint<16 > demosaic_diff_lane_13_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_13_pack, demosaic_diff_lane_13);
  auto res_cp9_16_update_0_sm10_13357 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_13_pack);

  hw_uint<16 > demosaic_diff_lane_14_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_14_pack, demosaic_diff_lane_14);
  auto res_cp9_16_update_0_sm10_14359 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_14_pack);

  hw_uint<16 > demosaic_diff_lane_15_pack;
  set_at<0, 16, 16>(demosaic_diff_lane_15_pack, demosaic_diff_lane_15);
  auto res_cp9_16_update_0_sm10_15361 = cp9_16_generated_compute_unrolled_1(demosaic_diff_lane_15_pack);
  hw_uint<256 > return_value394;
  set_at<0, 256, 16>(return_value394, res_cp9_16_update_0_sm10_0331);
  set_at<16, 256, 16>(return_value394, res_cp9_16_update_0_sm10_1333);
  set_at<32, 256, 16>(return_value394, res_cp9_16_update_0_sm10_2335);
  set_at<48, 256, 16>(return_value394, res_cp9_16_update_0_sm10_3337);
  set_at<64, 256, 16>(return_value394, res_cp9_16_update_0_sm10_4339);
  set_at<80, 256, 16>(return_value394, res_cp9_16_update_0_sm10_5341);
  set_at<96, 256, 16>(return_value394, res_cp9_16_update_0_sm10_6343);
  set_at<112, 256, 16>(return_value394, res_cp9_16_update_0_sm10_7345);
  set_at<128, 256, 16>(return_value394, res_cp9_16_update_0_sm10_8347);
  set_at<144, 256, 16>(return_value394, res_cp9_16_update_0_sm10_9349);
  set_at<160, 256, 16>(return_value394, res_cp9_16_update_0_sm10_10351);
  set_at<176, 256, 16>(return_value394, res_cp9_16_update_0_sm10_11353);
  set_at<192, 256, 16>(return_value394, res_cp9_16_update_0_sm10_12355);
  set_at<208, 256, 16>(return_value394, res_cp9_16_update_0_sm10_13357);
  set_at<224, 256, 16>(return_value394, res_cp9_16_update_0_sm10_14359);
  set_at<240, 256, 16>(return_value394, res_cp9_16_update_0_sm10_15361);
  return return_value394;

}

