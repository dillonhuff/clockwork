#include "cp4_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> demosaic_by_ld17_cu2233(hw_uint<16*32>& demosaic_by) {
  return demosaic_by;
}

hw_uint<512> demosaicb_to_gp_128_ld73_cu2235(hw_uint<16*32>& demosaicb_to_gp_128) {
  return demosaicb_to_gp_128;
}

hw_uint<512> denoise_to_gp_732_ld77_cu2237(hw_uint<16*32>& denoise_to_gp_732) {
  return denoise_to_gp_732;
}

hw_uint<512> demosaic_ld1_cu2239(hw_uint<16*32>& demosaic) {
  return demosaic;
}

hw_uint<512> demosaic_by_to_gp_616_ld61_cu2241(hw_uint<16*32>& demosaic_by_to_gp_616) {
  return demosaic_by_to_gp_616;
}

hw_uint<512> demosaic_byb_to_gp_420_ld65_cu2243(hw_uint<16*32>& demosaic_byb_to_gp_420) {
  return demosaic_byb_to_gp_420;
}

hw_uint<512> demosaic_bxb_1_cu2245(hw_uint<16*96>& demosaic_FIFO_buf44) {
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
  hw_uint<16> demosaic_FIFO_buf44_lane_48 = demosaic_FIFO_buf44.extract<768, 783>();
  hw_uint<16> demosaic_FIFO_buf44_lane_49 = demosaic_FIFO_buf44.extract<784, 799>();
  hw_uint<16> demosaic_FIFO_buf44_lane_50 = demosaic_FIFO_buf44.extract<800, 815>();
  hw_uint<16> demosaic_FIFO_buf44_lane_51 = demosaic_FIFO_buf44.extract<816, 831>();
  hw_uint<16> demosaic_FIFO_buf44_lane_52 = demosaic_FIFO_buf44.extract<832, 847>();
  hw_uint<16> demosaic_FIFO_buf44_lane_53 = demosaic_FIFO_buf44.extract<848, 863>();
  hw_uint<16> demosaic_FIFO_buf44_lane_54 = demosaic_FIFO_buf44.extract<864, 879>();
  hw_uint<16> demosaic_FIFO_buf44_lane_55 = demosaic_FIFO_buf44.extract<880, 895>();
  hw_uint<16> demosaic_FIFO_buf44_lane_56 = demosaic_FIFO_buf44.extract<896, 911>();
  hw_uint<16> demosaic_FIFO_buf44_lane_57 = demosaic_FIFO_buf44.extract<912, 927>();
  hw_uint<16> demosaic_FIFO_buf44_lane_58 = demosaic_FIFO_buf44.extract<928, 943>();
  hw_uint<16> demosaic_FIFO_buf44_lane_59 = demosaic_FIFO_buf44.extract<944, 959>();
  hw_uint<16> demosaic_FIFO_buf44_lane_60 = demosaic_FIFO_buf44.extract<960, 975>();
  hw_uint<16> demosaic_FIFO_buf44_lane_61 = demosaic_FIFO_buf44.extract<976, 991>();
  hw_uint<16> demosaic_FIFO_buf44_lane_62 = demosaic_FIFO_buf44.extract<992, 1007>();
  hw_uint<16> demosaic_FIFO_buf44_lane_63 = demosaic_FIFO_buf44.extract<1008, 1023>();
  hw_uint<16> demosaic_FIFO_buf44_lane_64 = demosaic_FIFO_buf44.extract<1024, 1039>();
  hw_uint<16> demosaic_FIFO_buf44_lane_65 = demosaic_FIFO_buf44.extract<1040, 1055>();
  hw_uint<16> demosaic_FIFO_buf44_lane_66 = demosaic_FIFO_buf44.extract<1056, 1071>();
  hw_uint<16> demosaic_FIFO_buf44_lane_67 = demosaic_FIFO_buf44.extract<1072, 1087>();
  hw_uint<16> demosaic_FIFO_buf44_lane_68 = demosaic_FIFO_buf44.extract<1088, 1103>();
  hw_uint<16> demosaic_FIFO_buf44_lane_69 = demosaic_FIFO_buf44.extract<1104, 1119>();
  hw_uint<16> demosaic_FIFO_buf44_lane_70 = demosaic_FIFO_buf44.extract<1120, 1135>();
  hw_uint<16> demosaic_FIFO_buf44_lane_71 = demosaic_FIFO_buf44.extract<1136, 1151>();
  hw_uint<16> demosaic_FIFO_buf44_lane_72 = demosaic_FIFO_buf44.extract<1152, 1167>();
  hw_uint<16> demosaic_FIFO_buf44_lane_73 = demosaic_FIFO_buf44.extract<1168, 1183>();
  hw_uint<16> demosaic_FIFO_buf44_lane_74 = demosaic_FIFO_buf44.extract<1184, 1199>();
  hw_uint<16> demosaic_FIFO_buf44_lane_75 = demosaic_FIFO_buf44.extract<1200, 1215>();
  hw_uint<16> demosaic_FIFO_buf44_lane_76 = demosaic_FIFO_buf44.extract<1216, 1231>();
  hw_uint<16> demosaic_FIFO_buf44_lane_77 = demosaic_FIFO_buf44.extract<1232, 1247>();
  hw_uint<16> demosaic_FIFO_buf44_lane_78 = demosaic_FIFO_buf44.extract<1248, 1263>();
  hw_uint<16> demosaic_FIFO_buf44_lane_79 = demosaic_FIFO_buf44.extract<1264, 1279>();
  hw_uint<16> demosaic_FIFO_buf44_lane_80 = demosaic_FIFO_buf44.extract<1280, 1295>();
  hw_uint<16> demosaic_FIFO_buf44_lane_81 = demosaic_FIFO_buf44.extract<1296, 1311>();
  hw_uint<16> demosaic_FIFO_buf44_lane_82 = demosaic_FIFO_buf44.extract<1312, 1327>();
  hw_uint<16> demosaic_FIFO_buf44_lane_83 = demosaic_FIFO_buf44.extract<1328, 1343>();
  hw_uint<16> demosaic_FIFO_buf44_lane_84 = demosaic_FIFO_buf44.extract<1344, 1359>();
  hw_uint<16> demosaic_FIFO_buf44_lane_85 = demosaic_FIFO_buf44.extract<1360, 1375>();
  hw_uint<16> demosaic_FIFO_buf44_lane_86 = demosaic_FIFO_buf44.extract<1376, 1391>();
  hw_uint<16> demosaic_FIFO_buf44_lane_87 = demosaic_FIFO_buf44.extract<1392, 1407>();
  hw_uint<16> demosaic_FIFO_buf44_lane_88 = demosaic_FIFO_buf44.extract<1408, 1423>();
  hw_uint<16> demosaic_FIFO_buf44_lane_89 = demosaic_FIFO_buf44.extract<1424, 1439>();
  hw_uint<16> demosaic_FIFO_buf44_lane_90 = demosaic_FIFO_buf44.extract<1440, 1455>();
  hw_uint<16> demosaic_FIFO_buf44_lane_91 = demosaic_FIFO_buf44.extract<1456, 1471>();
  hw_uint<16> demosaic_FIFO_buf44_lane_92 = demosaic_FIFO_buf44.extract<1472, 1487>();
  hw_uint<16> demosaic_FIFO_buf44_lane_93 = demosaic_FIFO_buf44.extract<1488, 1503>();
  hw_uint<16> demosaic_FIFO_buf44_lane_94 = demosaic_FIFO_buf44.extract<1504, 1519>();
  hw_uint<16> demosaic_FIFO_buf44_lane_95 = demosaic_FIFO_buf44.extract<1520, 1535>();

	
  hw_uint<48 > demosaic_FIFO_buf44_lane_2_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_2_pack, demosaic_FIFO_buf44_lane_0);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_2_pack, demosaic_FIFO_buf44_lane_1);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_2_pack, demosaic_FIFO_buf44_lane_2);
  auto res_demosaic_bxb_update_0_sm94_31183 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_2_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_5_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_5_pack, demosaic_FIFO_buf44_lane_3);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_5_pack, demosaic_FIFO_buf44_lane_4);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_5_pack, demosaic_FIFO_buf44_lane_5);
  auto res_demosaic_bxb_update_0_sm94_30181 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_5_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_8_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_8_pack, demosaic_FIFO_buf44_lane_6);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_8_pack, demosaic_FIFO_buf44_lane_7);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_8_pack, demosaic_FIFO_buf44_lane_8);
  auto res_demosaic_bxb_update_0_sm94_29179 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_8_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_11_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_11_pack, demosaic_FIFO_buf44_lane_9);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_11_pack, demosaic_FIFO_buf44_lane_10);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_11_pack, demosaic_FIFO_buf44_lane_11);
  auto res_demosaic_bxb_update_0_sm94_28177 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_11_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_14_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_14_pack, demosaic_FIFO_buf44_lane_12);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_14_pack, demosaic_FIFO_buf44_lane_13);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_14_pack, demosaic_FIFO_buf44_lane_14);
  auto res_demosaic_bxb_update_0_sm94_27175 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_14_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_17_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_17_pack, demosaic_FIFO_buf44_lane_15);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_17_pack, demosaic_FIFO_buf44_lane_16);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_17_pack, demosaic_FIFO_buf44_lane_17);
  auto res_demosaic_bxb_update_0_sm94_26173 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_17_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_20_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_20_pack, demosaic_FIFO_buf44_lane_18);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_20_pack, demosaic_FIFO_buf44_lane_19);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_20_pack, demosaic_FIFO_buf44_lane_20);
  auto res_demosaic_bxb_update_0_sm94_25171 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_20_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_23_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_23_pack, demosaic_FIFO_buf44_lane_21);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_23_pack, demosaic_FIFO_buf44_lane_22);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_23_pack, demosaic_FIFO_buf44_lane_23);
  auto res_demosaic_bxb_update_0_sm94_24169 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_23_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_26_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_26_pack, demosaic_FIFO_buf44_lane_24);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_26_pack, demosaic_FIFO_buf44_lane_25);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_26_pack, demosaic_FIFO_buf44_lane_26);
  auto res_demosaic_bxb_update_0_sm94_23167 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_26_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_29_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_29_pack, demosaic_FIFO_buf44_lane_27);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_29_pack, demosaic_FIFO_buf44_lane_28);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_29_pack, demosaic_FIFO_buf44_lane_29);
  auto res_demosaic_bxb_update_0_sm94_22165 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_29_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_32_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_32_pack, demosaic_FIFO_buf44_lane_30);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_32_pack, demosaic_FIFO_buf44_lane_31);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_32_pack, demosaic_FIFO_buf44_lane_32);
  auto res_demosaic_bxb_update_0_sm94_21163 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_32_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_35_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_35_pack, demosaic_FIFO_buf44_lane_33);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_35_pack, demosaic_FIFO_buf44_lane_34);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_35_pack, demosaic_FIFO_buf44_lane_35);
  auto res_demosaic_bxb_update_0_sm94_20161 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_35_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_38_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_38_pack, demosaic_FIFO_buf44_lane_36);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_38_pack, demosaic_FIFO_buf44_lane_37);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_38_pack, demosaic_FIFO_buf44_lane_38);
  auto res_demosaic_bxb_update_0_sm94_19159 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_38_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_41_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_41_pack, demosaic_FIFO_buf44_lane_39);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_41_pack, demosaic_FIFO_buf44_lane_40);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_41_pack, demosaic_FIFO_buf44_lane_41);
  auto res_demosaic_bxb_update_0_sm94_18157 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_41_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_44_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_44_pack, demosaic_FIFO_buf44_lane_42);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_44_pack, demosaic_FIFO_buf44_lane_43);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_44_pack, demosaic_FIFO_buf44_lane_44);
  auto res_demosaic_bxb_update_0_sm94_17155 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_44_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_47_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_47_pack, demosaic_FIFO_buf44_lane_45);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_47_pack, demosaic_FIFO_buf44_lane_46);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_47_pack, demosaic_FIFO_buf44_lane_47);
  auto res_demosaic_bxb_update_0_sm94_16153 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_47_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_50_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_50_pack, demosaic_FIFO_buf44_lane_48);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_50_pack, demosaic_FIFO_buf44_lane_49);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_50_pack, demosaic_FIFO_buf44_lane_50);
  auto res_demosaic_bxb_update_0_sm94_15151 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_50_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_53_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_53_pack, demosaic_FIFO_buf44_lane_51);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_53_pack, demosaic_FIFO_buf44_lane_52);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_53_pack, demosaic_FIFO_buf44_lane_53);
  auto res_demosaic_bxb_update_0_sm94_14149 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_53_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_56_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_56_pack, demosaic_FIFO_buf44_lane_54);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_56_pack, demosaic_FIFO_buf44_lane_55);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_56_pack, demosaic_FIFO_buf44_lane_56);
  auto res_demosaic_bxb_update_0_sm94_13147 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_56_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_59_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_59_pack, demosaic_FIFO_buf44_lane_57);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_59_pack, demosaic_FIFO_buf44_lane_58);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_59_pack, demosaic_FIFO_buf44_lane_59);
  auto res_demosaic_bxb_update_0_sm94_12145 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_59_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_62_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_62_pack, demosaic_FIFO_buf44_lane_60);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_62_pack, demosaic_FIFO_buf44_lane_61);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_62_pack, demosaic_FIFO_buf44_lane_62);
  auto res_demosaic_bxb_update_0_sm94_11143 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_62_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_65_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_65_pack, demosaic_FIFO_buf44_lane_63);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_65_pack, demosaic_FIFO_buf44_lane_64);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_65_pack, demosaic_FIFO_buf44_lane_65);
  auto res_demosaic_bxb_update_0_sm94_10141 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_65_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_68_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_68_pack, demosaic_FIFO_buf44_lane_66);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_68_pack, demosaic_FIFO_buf44_lane_67);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_68_pack, demosaic_FIFO_buf44_lane_68);
  auto res_demosaic_bxb_update_0_sm94_9139 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_68_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_71_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_71_pack, demosaic_FIFO_buf44_lane_69);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_71_pack, demosaic_FIFO_buf44_lane_70);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_71_pack, demosaic_FIFO_buf44_lane_71);
  auto res_demosaic_bxb_update_0_sm94_8137 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_71_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_74_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_74_pack, demosaic_FIFO_buf44_lane_72);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_74_pack, demosaic_FIFO_buf44_lane_73);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_74_pack, demosaic_FIFO_buf44_lane_74);
  auto res_demosaic_bxb_update_0_sm94_7135 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_74_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_77_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_77_pack, demosaic_FIFO_buf44_lane_75);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_77_pack, demosaic_FIFO_buf44_lane_76);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_77_pack, demosaic_FIFO_buf44_lane_77);
  auto res_demosaic_bxb_update_0_sm94_6133 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_77_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_80_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_80_pack, demosaic_FIFO_buf44_lane_78);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_80_pack, demosaic_FIFO_buf44_lane_79);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_80_pack, demosaic_FIFO_buf44_lane_80);
  auto res_demosaic_bxb_update_0_sm94_5131 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_80_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_83_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_83_pack, demosaic_FIFO_buf44_lane_81);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_83_pack, demosaic_FIFO_buf44_lane_82);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_83_pack, demosaic_FIFO_buf44_lane_83);
  auto res_demosaic_bxb_update_0_sm94_4129 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_83_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_86_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_86_pack, demosaic_FIFO_buf44_lane_84);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_86_pack, demosaic_FIFO_buf44_lane_85);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_86_pack, demosaic_FIFO_buf44_lane_86);
  auto res_demosaic_bxb_update_0_sm94_3127 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_86_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_89_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_89_pack, demosaic_FIFO_buf44_lane_87);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_89_pack, demosaic_FIFO_buf44_lane_88);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_89_pack, demosaic_FIFO_buf44_lane_89);
  auto res_demosaic_bxb_update_0_sm94_2125 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_89_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_92_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_92_pack, demosaic_FIFO_buf44_lane_90);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_92_pack, demosaic_FIFO_buf44_lane_91);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_92_pack, demosaic_FIFO_buf44_lane_92);
  auto res_demosaic_bxb_update_0_sm94_1123 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_92_pack);

  hw_uint<48 > demosaic_FIFO_buf44_lane_95_pack;
  set_at<0, 48, 16>(demosaic_FIFO_buf44_lane_95_pack, demosaic_FIFO_buf44_lane_93);
  set_at<16, 48, 16>(demosaic_FIFO_buf44_lane_95_pack, demosaic_FIFO_buf44_lane_94);
  set_at<32, 48, 16>(demosaic_FIFO_buf44_lane_95_pack, demosaic_FIFO_buf44_lane_95);
  auto res_demosaic_bxb_update_0_sm94_0121 = demosaic_bxb_generated_compute_unrolled_1(demosaic_FIFO_buf44_lane_95_pack);
  hw_uint<512 > return_value2246;
  set_at<0, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_31183);
  set_at<16, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_30181);
  set_at<32, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_29179);
  set_at<48, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_28177);
  set_at<64, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_27175);
  set_at<80, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_26173);
  set_at<96, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_25171);
  set_at<112, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_24169);
  set_at<128, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_23167);
  set_at<144, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_22165);
  set_at<160, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_21163);
  set_at<176, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_20161);
  set_at<192, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_19159);
  set_at<208, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_18157);
  set_at<224, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_17155);
  set_at<240, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_16153);
  set_at<256, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_15151);
  set_at<272, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_14149);
  set_at<288, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_13147);
  set_at<304, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_12145);
  set_at<320, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_11143);
  set_at<336, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_10141);
  set_at<352, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_9139);
  set_at<368, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_8137);
  set_at<384, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_7135);
  set_at<400, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_6133);
  set_at<416, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_5131);
  set_at<432, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_4129);
  set_at<448, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_3127);
  set_at<464, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_2125);
  set_at<480, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_1123);
  set_at<496, 512, 16>(return_value2246, res_demosaic_bxb_update_0_sm94_0121);
  return return_value2246;

}

hw_uint<512> demosaic_1_cu2248(hw_uint<16*32>& demosaicb_FIFO_buf72) {
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
  hw_uint<16> demosaicb_FIFO_buf72_lane_16 = demosaicb_FIFO_buf72.extract<256, 271>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_17 = demosaicb_FIFO_buf72.extract<272, 287>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_18 = demosaicb_FIFO_buf72.extract<288, 303>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_19 = demosaicb_FIFO_buf72.extract<304, 319>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_20 = demosaicb_FIFO_buf72.extract<320, 335>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_21 = demosaicb_FIFO_buf72.extract<336, 351>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_22 = demosaicb_FIFO_buf72.extract<352, 367>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_23 = demosaicb_FIFO_buf72.extract<368, 383>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_24 = demosaicb_FIFO_buf72.extract<384, 399>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_25 = demosaicb_FIFO_buf72.extract<400, 415>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_26 = demosaicb_FIFO_buf72.extract<416, 431>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_27 = demosaicb_FIFO_buf72.extract<432, 447>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_28 = demosaicb_FIFO_buf72.extract<448, 463>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_29 = demosaicb_FIFO_buf72.extract<464, 479>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_30 = demosaicb_FIFO_buf72.extract<480, 495>();
  hw_uint<16> demosaicb_FIFO_buf72_lane_31 = demosaicb_FIFO_buf72.extract<496, 511>();

	
  hw_uint<16 > demosaicb_FIFO_buf72_lane_0_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_0_pack, demosaicb_FIFO_buf72_lane_0);
  auto res_demosaic_update_0_sm95_311335 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_0_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_1_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_1_pack, demosaicb_FIFO_buf72_lane_1);
  auto res_demosaic_update_0_sm95_301333 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_1_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_2_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_2_pack, demosaicb_FIFO_buf72_lane_2);
  auto res_demosaic_update_0_sm95_291331 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_2_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_3_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_3_pack, demosaicb_FIFO_buf72_lane_3);
  auto res_demosaic_update_0_sm95_281329 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_3_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_4_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_4_pack, demosaicb_FIFO_buf72_lane_4);
  auto res_demosaic_update_0_sm95_271327 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_4_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_5_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_5_pack, demosaicb_FIFO_buf72_lane_5);
  auto res_demosaic_update_0_sm95_261325 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_5_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_6_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_6_pack, demosaicb_FIFO_buf72_lane_6);
  auto res_demosaic_update_0_sm95_251323 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_6_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_7_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_7_pack, demosaicb_FIFO_buf72_lane_7);
  auto res_demosaic_update_0_sm95_241321 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_7_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_8_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_8_pack, demosaicb_FIFO_buf72_lane_8);
  auto res_demosaic_update_0_sm95_231319 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_8_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_9_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_9_pack, demosaicb_FIFO_buf72_lane_9);
  auto res_demosaic_update_0_sm95_221317 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_9_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_10_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_10_pack, demosaicb_FIFO_buf72_lane_10);
  auto res_demosaic_update_0_sm95_211315 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_10_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_11_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_11_pack, demosaicb_FIFO_buf72_lane_11);
  auto res_demosaic_update_0_sm95_201313 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_11_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_12_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_12_pack, demosaicb_FIFO_buf72_lane_12);
  auto res_demosaic_update_0_sm95_191311 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_12_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_13_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_13_pack, demosaicb_FIFO_buf72_lane_13);
  auto res_demosaic_update_0_sm95_181309 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_13_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_14_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_14_pack, demosaicb_FIFO_buf72_lane_14);
  auto res_demosaic_update_0_sm95_171307 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_14_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_15_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_15_pack, demosaicb_FIFO_buf72_lane_15);
  auto res_demosaic_update_0_sm95_161305 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_15_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_16_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_16_pack, demosaicb_FIFO_buf72_lane_16);
  auto res_demosaic_update_0_sm95_151303 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_16_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_17_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_17_pack, demosaicb_FIFO_buf72_lane_17);
  auto res_demosaic_update_0_sm95_141301 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_17_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_18_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_18_pack, demosaicb_FIFO_buf72_lane_18);
  auto res_demosaic_update_0_sm95_131299 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_18_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_19_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_19_pack, demosaicb_FIFO_buf72_lane_19);
  auto res_demosaic_update_0_sm95_121297 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_19_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_20_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_20_pack, demosaicb_FIFO_buf72_lane_20);
  auto res_demosaic_update_0_sm95_111295 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_20_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_21_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_21_pack, demosaicb_FIFO_buf72_lane_21);
  auto res_demosaic_update_0_sm95_101293 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_21_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_22_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_22_pack, demosaicb_FIFO_buf72_lane_22);
  auto res_demosaic_update_0_sm95_91291 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_22_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_23_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_23_pack, demosaicb_FIFO_buf72_lane_23);
  auto res_demosaic_update_0_sm95_81289 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_23_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_24_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_24_pack, demosaicb_FIFO_buf72_lane_24);
  auto res_demosaic_update_0_sm95_71287 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_24_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_25_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_25_pack, demosaicb_FIFO_buf72_lane_25);
  auto res_demosaic_update_0_sm95_61285 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_25_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_26_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_26_pack, demosaicb_FIFO_buf72_lane_26);
  auto res_demosaic_update_0_sm95_51283 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_26_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_27_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_27_pack, demosaicb_FIFO_buf72_lane_27);
  auto res_demosaic_update_0_sm95_41281 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_27_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_28_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_28_pack, demosaicb_FIFO_buf72_lane_28);
  auto res_demosaic_update_0_sm95_31279 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_28_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_29_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_29_pack, demosaicb_FIFO_buf72_lane_29);
  auto res_demosaic_update_0_sm95_21277 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_29_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_30_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_30_pack, demosaicb_FIFO_buf72_lane_30);
  auto res_demosaic_update_0_sm95_11275 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_30_pack);

  hw_uint<16 > demosaicb_FIFO_buf72_lane_31_pack;
  set_at<0, 16, 16>(demosaicb_FIFO_buf72_lane_31_pack, demosaicb_FIFO_buf72_lane_31);
  auto res_demosaic_update_0_sm95_01273 = demosaic_generated_compute_unrolled_1(demosaicb_FIFO_buf72_lane_31_pack);
  hw_uint<512 > return_value2249;
  set_at<0, 512, 16>(return_value2249, res_demosaic_update_0_sm95_311335);
  set_at<16, 512, 16>(return_value2249, res_demosaic_update_0_sm95_301333);
  set_at<32, 512, 16>(return_value2249, res_demosaic_update_0_sm95_291331);
  set_at<48, 512, 16>(return_value2249, res_demosaic_update_0_sm95_281329);
  set_at<64, 512, 16>(return_value2249, res_demosaic_update_0_sm95_271327);
  set_at<80, 512, 16>(return_value2249, res_demosaic_update_0_sm95_261325);
  set_at<96, 512, 16>(return_value2249, res_demosaic_update_0_sm95_251323);
  set_at<112, 512, 16>(return_value2249, res_demosaic_update_0_sm95_241321);
  set_at<128, 512, 16>(return_value2249, res_demosaic_update_0_sm95_231319);
  set_at<144, 512, 16>(return_value2249, res_demosaic_update_0_sm95_221317);
  set_at<160, 512, 16>(return_value2249, res_demosaic_update_0_sm95_211315);
  set_at<176, 512, 16>(return_value2249, res_demosaic_update_0_sm95_201313);
  set_at<192, 512, 16>(return_value2249, res_demosaic_update_0_sm95_191311);
  set_at<208, 512, 16>(return_value2249, res_demosaic_update_0_sm95_181309);
  set_at<224, 512, 16>(return_value2249, res_demosaic_update_0_sm95_171307);
  set_at<240, 512, 16>(return_value2249, res_demosaic_update_0_sm95_161305);
  set_at<256, 512, 16>(return_value2249, res_demosaic_update_0_sm95_151303);
  set_at<272, 512, 16>(return_value2249, res_demosaic_update_0_sm95_141301);
  set_at<288, 512, 16>(return_value2249, res_demosaic_update_0_sm95_131299);
  set_at<304, 512, 16>(return_value2249, res_demosaic_update_0_sm95_121297);
  set_at<320, 512, 16>(return_value2249, res_demosaic_update_0_sm95_111295);
  set_at<336, 512, 16>(return_value2249, res_demosaic_update_0_sm95_101293);
  set_at<352, 512, 16>(return_value2249, res_demosaic_update_0_sm95_91291);
  set_at<368, 512, 16>(return_value2249, res_demosaic_update_0_sm95_81289);
  set_at<384, 512, 16>(return_value2249, res_demosaic_update_0_sm95_71287);
  set_at<400, 512, 16>(return_value2249, res_demosaic_update_0_sm95_61285);
  set_at<416, 512, 16>(return_value2249, res_demosaic_update_0_sm95_51283);
  set_at<432, 512, 16>(return_value2249, res_demosaic_update_0_sm95_41281);
  set_at<448, 512, 16>(return_value2249, res_demosaic_update_0_sm95_31279);
  set_at<464, 512, 16>(return_value2249, res_demosaic_update_0_sm95_21277);
  set_at<480, 512, 16>(return_value2249, res_demosaic_update_0_sm95_11275);
  set_at<496, 512, 16>(return_value2249, res_demosaic_update_0_sm95_01273);
  return return_value2249;

}

hw_uint<512> demosaic_ld5_cu2251(hw_uint<16*32>& demosaic) {
  return demosaic;
}

hw_uint<512> demosaicb_1_cu2253(hw_uint<16*288>& denoise_FIFO_buf76) {
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
  hw_uint<16> denoise_FIFO_buf76_lane_144 = denoise_FIFO_buf76.extract<2304, 2319>();
  hw_uint<16> denoise_FIFO_buf76_lane_145 = denoise_FIFO_buf76.extract<2320, 2335>();
  hw_uint<16> denoise_FIFO_buf76_lane_146 = denoise_FIFO_buf76.extract<2336, 2351>();
  hw_uint<16> denoise_FIFO_buf76_lane_147 = denoise_FIFO_buf76.extract<2352, 2367>();
  hw_uint<16> denoise_FIFO_buf76_lane_148 = denoise_FIFO_buf76.extract<2368, 2383>();
  hw_uint<16> denoise_FIFO_buf76_lane_149 = denoise_FIFO_buf76.extract<2384, 2399>();
  hw_uint<16> denoise_FIFO_buf76_lane_150 = denoise_FIFO_buf76.extract<2400, 2415>();
  hw_uint<16> denoise_FIFO_buf76_lane_151 = denoise_FIFO_buf76.extract<2416, 2431>();
  hw_uint<16> denoise_FIFO_buf76_lane_152 = denoise_FIFO_buf76.extract<2432, 2447>();
  hw_uint<16> denoise_FIFO_buf76_lane_153 = denoise_FIFO_buf76.extract<2448, 2463>();
  hw_uint<16> denoise_FIFO_buf76_lane_154 = denoise_FIFO_buf76.extract<2464, 2479>();
  hw_uint<16> denoise_FIFO_buf76_lane_155 = denoise_FIFO_buf76.extract<2480, 2495>();
  hw_uint<16> denoise_FIFO_buf76_lane_156 = denoise_FIFO_buf76.extract<2496, 2511>();
  hw_uint<16> denoise_FIFO_buf76_lane_157 = denoise_FIFO_buf76.extract<2512, 2527>();
  hw_uint<16> denoise_FIFO_buf76_lane_158 = denoise_FIFO_buf76.extract<2528, 2543>();
  hw_uint<16> denoise_FIFO_buf76_lane_159 = denoise_FIFO_buf76.extract<2544, 2559>();
  hw_uint<16> denoise_FIFO_buf76_lane_160 = denoise_FIFO_buf76.extract<2560, 2575>();
  hw_uint<16> denoise_FIFO_buf76_lane_161 = denoise_FIFO_buf76.extract<2576, 2591>();
  hw_uint<16> denoise_FIFO_buf76_lane_162 = denoise_FIFO_buf76.extract<2592, 2607>();
  hw_uint<16> denoise_FIFO_buf76_lane_163 = denoise_FIFO_buf76.extract<2608, 2623>();
  hw_uint<16> denoise_FIFO_buf76_lane_164 = denoise_FIFO_buf76.extract<2624, 2639>();
  hw_uint<16> denoise_FIFO_buf76_lane_165 = denoise_FIFO_buf76.extract<2640, 2655>();
  hw_uint<16> denoise_FIFO_buf76_lane_166 = denoise_FIFO_buf76.extract<2656, 2671>();
  hw_uint<16> denoise_FIFO_buf76_lane_167 = denoise_FIFO_buf76.extract<2672, 2687>();
  hw_uint<16> denoise_FIFO_buf76_lane_168 = denoise_FIFO_buf76.extract<2688, 2703>();
  hw_uint<16> denoise_FIFO_buf76_lane_169 = denoise_FIFO_buf76.extract<2704, 2719>();
  hw_uint<16> denoise_FIFO_buf76_lane_170 = denoise_FIFO_buf76.extract<2720, 2735>();
  hw_uint<16> denoise_FIFO_buf76_lane_171 = denoise_FIFO_buf76.extract<2736, 2751>();
  hw_uint<16> denoise_FIFO_buf76_lane_172 = denoise_FIFO_buf76.extract<2752, 2767>();
  hw_uint<16> denoise_FIFO_buf76_lane_173 = denoise_FIFO_buf76.extract<2768, 2783>();
  hw_uint<16> denoise_FIFO_buf76_lane_174 = denoise_FIFO_buf76.extract<2784, 2799>();
  hw_uint<16> denoise_FIFO_buf76_lane_175 = denoise_FIFO_buf76.extract<2800, 2815>();
  hw_uint<16> denoise_FIFO_buf76_lane_176 = denoise_FIFO_buf76.extract<2816, 2831>();
  hw_uint<16> denoise_FIFO_buf76_lane_177 = denoise_FIFO_buf76.extract<2832, 2847>();
  hw_uint<16> denoise_FIFO_buf76_lane_178 = denoise_FIFO_buf76.extract<2848, 2863>();
  hw_uint<16> denoise_FIFO_buf76_lane_179 = denoise_FIFO_buf76.extract<2864, 2879>();
  hw_uint<16> denoise_FIFO_buf76_lane_180 = denoise_FIFO_buf76.extract<2880, 2895>();
  hw_uint<16> denoise_FIFO_buf76_lane_181 = denoise_FIFO_buf76.extract<2896, 2911>();
  hw_uint<16> denoise_FIFO_buf76_lane_182 = denoise_FIFO_buf76.extract<2912, 2927>();
  hw_uint<16> denoise_FIFO_buf76_lane_183 = denoise_FIFO_buf76.extract<2928, 2943>();
  hw_uint<16> denoise_FIFO_buf76_lane_184 = denoise_FIFO_buf76.extract<2944, 2959>();
  hw_uint<16> denoise_FIFO_buf76_lane_185 = denoise_FIFO_buf76.extract<2960, 2975>();
  hw_uint<16> denoise_FIFO_buf76_lane_186 = denoise_FIFO_buf76.extract<2976, 2991>();
  hw_uint<16> denoise_FIFO_buf76_lane_187 = denoise_FIFO_buf76.extract<2992, 3007>();
  hw_uint<16> denoise_FIFO_buf76_lane_188 = denoise_FIFO_buf76.extract<3008, 3023>();
  hw_uint<16> denoise_FIFO_buf76_lane_189 = denoise_FIFO_buf76.extract<3024, 3039>();
  hw_uint<16> denoise_FIFO_buf76_lane_190 = denoise_FIFO_buf76.extract<3040, 3055>();
  hw_uint<16> denoise_FIFO_buf76_lane_191 = denoise_FIFO_buf76.extract<3056, 3071>();
  hw_uint<16> denoise_FIFO_buf76_lane_192 = denoise_FIFO_buf76.extract<3072, 3087>();
  hw_uint<16> denoise_FIFO_buf76_lane_193 = denoise_FIFO_buf76.extract<3088, 3103>();
  hw_uint<16> denoise_FIFO_buf76_lane_194 = denoise_FIFO_buf76.extract<3104, 3119>();
  hw_uint<16> denoise_FIFO_buf76_lane_195 = denoise_FIFO_buf76.extract<3120, 3135>();
  hw_uint<16> denoise_FIFO_buf76_lane_196 = denoise_FIFO_buf76.extract<3136, 3151>();
  hw_uint<16> denoise_FIFO_buf76_lane_197 = denoise_FIFO_buf76.extract<3152, 3167>();
  hw_uint<16> denoise_FIFO_buf76_lane_198 = denoise_FIFO_buf76.extract<3168, 3183>();
  hw_uint<16> denoise_FIFO_buf76_lane_199 = denoise_FIFO_buf76.extract<3184, 3199>();
  hw_uint<16> denoise_FIFO_buf76_lane_200 = denoise_FIFO_buf76.extract<3200, 3215>();
  hw_uint<16> denoise_FIFO_buf76_lane_201 = denoise_FIFO_buf76.extract<3216, 3231>();
  hw_uint<16> denoise_FIFO_buf76_lane_202 = denoise_FIFO_buf76.extract<3232, 3247>();
  hw_uint<16> denoise_FIFO_buf76_lane_203 = denoise_FIFO_buf76.extract<3248, 3263>();
  hw_uint<16> denoise_FIFO_buf76_lane_204 = denoise_FIFO_buf76.extract<3264, 3279>();
  hw_uint<16> denoise_FIFO_buf76_lane_205 = denoise_FIFO_buf76.extract<3280, 3295>();
  hw_uint<16> denoise_FIFO_buf76_lane_206 = denoise_FIFO_buf76.extract<3296, 3311>();
  hw_uint<16> denoise_FIFO_buf76_lane_207 = denoise_FIFO_buf76.extract<3312, 3327>();
  hw_uint<16> denoise_FIFO_buf76_lane_208 = denoise_FIFO_buf76.extract<3328, 3343>();
  hw_uint<16> denoise_FIFO_buf76_lane_209 = denoise_FIFO_buf76.extract<3344, 3359>();
  hw_uint<16> denoise_FIFO_buf76_lane_210 = denoise_FIFO_buf76.extract<3360, 3375>();
  hw_uint<16> denoise_FIFO_buf76_lane_211 = denoise_FIFO_buf76.extract<3376, 3391>();
  hw_uint<16> denoise_FIFO_buf76_lane_212 = denoise_FIFO_buf76.extract<3392, 3407>();
  hw_uint<16> denoise_FIFO_buf76_lane_213 = denoise_FIFO_buf76.extract<3408, 3423>();
  hw_uint<16> denoise_FIFO_buf76_lane_214 = denoise_FIFO_buf76.extract<3424, 3439>();
  hw_uint<16> denoise_FIFO_buf76_lane_215 = denoise_FIFO_buf76.extract<3440, 3455>();
  hw_uint<16> denoise_FIFO_buf76_lane_216 = denoise_FIFO_buf76.extract<3456, 3471>();
  hw_uint<16> denoise_FIFO_buf76_lane_217 = denoise_FIFO_buf76.extract<3472, 3487>();
  hw_uint<16> denoise_FIFO_buf76_lane_218 = denoise_FIFO_buf76.extract<3488, 3503>();
  hw_uint<16> denoise_FIFO_buf76_lane_219 = denoise_FIFO_buf76.extract<3504, 3519>();
  hw_uint<16> denoise_FIFO_buf76_lane_220 = denoise_FIFO_buf76.extract<3520, 3535>();
  hw_uint<16> denoise_FIFO_buf76_lane_221 = denoise_FIFO_buf76.extract<3536, 3551>();
  hw_uint<16> denoise_FIFO_buf76_lane_222 = denoise_FIFO_buf76.extract<3552, 3567>();
  hw_uint<16> denoise_FIFO_buf76_lane_223 = denoise_FIFO_buf76.extract<3568, 3583>();
  hw_uint<16> denoise_FIFO_buf76_lane_224 = denoise_FIFO_buf76.extract<3584, 3599>();
  hw_uint<16> denoise_FIFO_buf76_lane_225 = denoise_FIFO_buf76.extract<3600, 3615>();
  hw_uint<16> denoise_FIFO_buf76_lane_226 = denoise_FIFO_buf76.extract<3616, 3631>();
  hw_uint<16> denoise_FIFO_buf76_lane_227 = denoise_FIFO_buf76.extract<3632, 3647>();
  hw_uint<16> denoise_FIFO_buf76_lane_228 = denoise_FIFO_buf76.extract<3648, 3663>();
  hw_uint<16> denoise_FIFO_buf76_lane_229 = denoise_FIFO_buf76.extract<3664, 3679>();
  hw_uint<16> denoise_FIFO_buf76_lane_230 = denoise_FIFO_buf76.extract<3680, 3695>();
  hw_uint<16> denoise_FIFO_buf76_lane_231 = denoise_FIFO_buf76.extract<3696, 3711>();
  hw_uint<16> denoise_FIFO_buf76_lane_232 = denoise_FIFO_buf76.extract<3712, 3727>();
  hw_uint<16> denoise_FIFO_buf76_lane_233 = denoise_FIFO_buf76.extract<3728, 3743>();
  hw_uint<16> denoise_FIFO_buf76_lane_234 = denoise_FIFO_buf76.extract<3744, 3759>();
  hw_uint<16> denoise_FIFO_buf76_lane_235 = denoise_FIFO_buf76.extract<3760, 3775>();
  hw_uint<16> denoise_FIFO_buf76_lane_236 = denoise_FIFO_buf76.extract<3776, 3791>();
  hw_uint<16> denoise_FIFO_buf76_lane_237 = denoise_FIFO_buf76.extract<3792, 3807>();
  hw_uint<16> denoise_FIFO_buf76_lane_238 = denoise_FIFO_buf76.extract<3808, 3823>();
  hw_uint<16> denoise_FIFO_buf76_lane_239 = denoise_FIFO_buf76.extract<3824, 3839>();
  hw_uint<16> denoise_FIFO_buf76_lane_240 = denoise_FIFO_buf76.extract<3840, 3855>();
  hw_uint<16> denoise_FIFO_buf76_lane_241 = denoise_FIFO_buf76.extract<3856, 3871>();
  hw_uint<16> denoise_FIFO_buf76_lane_242 = denoise_FIFO_buf76.extract<3872, 3887>();
  hw_uint<16> denoise_FIFO_buf76_lane_243 = denoise_FIFO_buf76.extract<3888, 3903>();
  hw_uint<16> denoise_FIFO_buf76_lane_244 = denoise_FIFO_buf76.extract<3904, 3919>();
  hw_uint<16> denoise_FIFO_buf76_lane_245 = denoise_FIFO_buf76.extract<3920, 3935>();
  hw_uint<16> denoise_FIFO_buf76_lane_246 = denoise_FIFO_buf76.extract<3936, 3951>();
  hw_uint<16> denoise_FIFO_buf76_lane_247 = denoise_FIFO_buf76.extract<3952, 3967>();
  hw_uint<16> denoise_FIFO_buf76_lane_248 = denoise_FIFO_buf76.extract<3968, 3983>();
  hw_uint<16> denoise_FIFO_buf76_lane_249 = denoise_FIFO_buf76.extract<3984, 3999>();
  hw_uint<16> denoise_FIFO_buf76_lane_250 = denoise_FIFO_buf76.extract<4000, 4015>();
  hw_uint<16> denoise_FIFO_buf76_lane_251 = denoise_FIFO_buf76.extract<4016, 4031>();
  hw_uint<16> denoise_FIFO_buf76_lane_252 = denoise_FIFO_buf76.extract<4032, 4047>();
  hw_uint<16> denoise_FIFO_buf76_lane_253 = denoise_FIFO_buf76.extract<4048, 4063>();
  hw_uint<16> denoise_FIFO_buf76_lane_254 = denoise_FIFO_buf76.extract<4064, 4079>();
  hw_uint<16> denoise_FIFO_buf76_lane_255 = denoise_FIFO_buf76.extract<4080, 4095>();
  hw_uint<16> denoise_FIFO_buf76_lane_256 = denoise_FIFO_buf76.extract<4096, 4111>();
  hw_uint<16> denoise_FIFO_buf76_lane_257 = denoise_FIFO_buf76.extract<4112, 4127>();
  hw_uint<16> denoise_FIFO_buf76_lane_258 = denoise_FIFO_buf76.extract<4128, 4143>();
  hw_uint<16> denoise_FIFO_buf76_lane_259 = denoise_FIFO_buf76.extract<4144, 4159>();
  hw_uint<16> denoise_FIFO_buf76_lane_260 = denoise_FIFO_buf76.extract<4160, 4175>();
  hw_uint<16> denoise_FIFO_buf76_lane_261 = denoise_FIFO_buf76.extract<4176, 4191>();
  hw_uint<16> denoise_FIFO_buf76_lane_262 = denoise_FIFO_buf76.extract<4192, 4207>();
  hw_uint<16> denoise_FIFO_buf76_lane_263 = denoise_FIFO_buf76.extract<4208, 4223>();
  hw_uint<16> denoise_FIFO_buf76_lane_264 = denoise_FIFO_buf76.extract<4224, 4239>();
  hw_uint<16> denoise_FIFO_buf76_lane_265 = denoise_FIFO_buf76.extract<4240, 4255>();
  hw_uint<16> denoise_FIFO_buf76_lane_266 = denoise_FIFO_buf76.extract<4256, 4271>();
  hw_uint<16> denoise_FIFO_buf76_lane_267 = denoise_FIFO_buf76.extract<4272, 4287>();
  hw_uint<16> denoise_FIFO_buf76_lane_268 = denoise_FIFO_buf76.extract<4288, 4303>();
  hw_uint<16> denoise_FIFO_buf76_lane_269 = denoise_FIFO_buf76.extract<4304, 4319>();
  hw_uint<16> denoise_FIFO_buf76_lane_270 = denoise_FIFO_buf76.extract<4320, 4335>();
  hw_uint<16> denoise_FIFO_buf76_lane_271 = denoise_FIFO_buf76.extract<4336, 4351>();
  hw_uint<16> denoise_FIFO_buf76_lane_272 = denoise_FIFO_buf76.extract<4352, 4367>();
  hw_uint<16> denoise_FIFO_buf76_lane_273 = denoise_FIFO_buf76.extract<4368, 4383>();
  hw_uint<16> denoise_FIFO_buf76_lane_274 = denoise_FIFO_buf76.extract<4384, 4399>();
  hw_uint<16> denoise_FIFO_buf76_lane_275 = denoise_FIFO_buf76.extract<4400, 4415>();
  hw_uint<16> denoise_FIFO_buf76_lane_276 = denoise_FIFO_buf76.extract<4416, 4431>();
  hw_uint<16> denoise_FIFO_buf76_lane_277 = denoise_FIFO_buf76.extract<4432, 4447>();
  hw_uint<16> denoise_FIFO_buf76_lane_278 = denoise_FIFO_buf76.extract<4448, 4463>();
  hw_uint<16> denoise_FIFO_buf76_lane_279 = denoise_FIFO_buf76.extract<4464, 4479>();
  hw_uint<16> denoise_FIFO_buf76_lane_280 = denoise_FIFO_buf76.extract<4480, 4495>();
  hw_uint<16> denoise_FIFO_buf76_lane_281 = denoise_FIFO_buf76.extract<4496, 4511>();
  hw_uint<16> denoise_FIFO_buf76_lane_282 = denoise_FIFO_buf76.extract<4512, 4527>();
  hw_uint<16> denoise_FIFO_buf76_lane_283 = denoise_FIFO_buf76.extract<4528, 4543>();
  hw_uint<16> denoise_FIFO_buf76_lane_284 = denoise_FIFO_buf76.extract<4544, 4559>();
  hw_uint<16> denoise_FIFO_buf76_lane_285 = denoise_FIFO_buf76.extract<4560, 4575>();
  hw_uint<16> denoise_FIFO_buf76_lane_286 = denoise_FIFO_buf76.extract<4576, 4591>();
  hw_uint<16> denoise_FIFO_buf76_lane_287 = denoise_FIFO_buf76.extract<4592, 4607>();

	
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
  auto res_demosaicb_update_0_sm97_311207 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_8_pack);

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
  auto res_demosaicb_update_0_sm97_301205 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_17_pack);

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
  auto res_demosaicb_update_0_sm97_291203 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_26_pack);

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
  auto res_demosaicb_update_0_sm97_281201 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_35_pack);

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
  auto res_demosaicb_update_0_sm97_271199 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_44_pack);

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
  auto res_demosaicb_update_0_sm97_261197 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_53_pack);

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
  auto res_demosaicb_update_0_sm97_251195 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_62_pack);

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
  auto res_demosaicb_update_0_sm97_241193 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_71_pack);

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
  auto res_demosaicb_update_0_sm97_231191 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_80_pack);

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
  auto res_demosaicb_update_0_sm97_221189 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_89_pack);

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
  auto res_demosaicb_update_0_sm97_211187 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_98_pack);

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
  auto res_demosaicb_update_0_sm97_201185 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_107_pack);

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
  auto res_demosaicb_update_0_sm97_191183 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_116_pack);

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
  auto res_demosaicb_update_0_sm97_181181 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_125_pack);

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
  auto res_demosaicb_update_0_sm97_171179 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_134_pack);

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
  auto res_demosaicb_update_0_sm97_161177 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_143_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_152_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_144);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_145);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_146);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_147);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_148);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_149);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_150);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_151);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_152_pack, denoise_FIFO_buf76_lane_152);
  auto res_demosaicb_update_0_sm97_151175 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_152_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_161_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_153);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_154);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_155);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_156);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_157);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_158);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_159);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_160);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_161_pack, denoise_FIFO_buf76_lane_161);
  auto res_demosaicb_update_0_sm97_141173 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_161_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_170_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_162);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_163);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_164);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_165);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_166);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_167);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_168);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_169);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_170_pack, denoise_FIFO_buf76_lane_170);
  auto res_demosaicb_update_0_sm97_131171 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_170_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_179_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_171);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_172);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_173);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_174);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_175);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_176);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_177);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_178);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_179_pack, denoise_FIFO_buf76_lane_179);
  auto res_demosaicb_update_0_sm97_121169 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_179_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_188_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_180);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_181);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_182);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_183);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_184);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_185);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_186);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_187);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_188_pack, denoise_FIFO_buf76_lane_188);
  auto res_demosaicb_update_0_sm97_111167 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_188_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_197_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_189);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_190);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_191);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_192);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_193);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_194);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_195);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_196);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_197_pack, denoise_FIFO_buf76_lane_197);
  auto res_demosaicb_update_0_sm97_101165 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_197_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_206_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_198);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_199);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_200);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_201);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_202);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_203);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_204);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_205);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_206_pack, denoise_FIFO_buf76_lane_206);
  auto res_demosaicb_update_0_sm97_91163 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_206_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_215_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_207);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_208);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_209);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_210);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_211);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_212);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_213);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_214);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_215_pack, denoise_FIFO_buf76_lane_215);
  auto res_demosaicb_update_0_sm97_81161 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_215_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_224_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_216);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_217);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_218);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_219);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_220);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_221);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_222);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_223);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_224_pack, denoise_FIFO_buf76_lane_224);
  auto res_demosaicb_update_0_sm97_71159 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_224_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_233_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_225);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_226);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_227);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_228);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_229);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_230);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_231);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_232);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_233_pack, denoise_FIFO_buf76_lane_233);
  auto res_demosaicb_update_0_sm97_61157 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_233_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_242_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_234);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_235);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_236);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_237);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_238);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_239);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_240);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_241);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_242_pack, denoise_FIFO_buf76_lane_242);
  auto res_demosaicb_update_0_sm97_51155 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_242_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_251_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_243);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_244);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_245);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_246);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_247);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_248);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_249);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_250);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_251_pack, denoise_FIFO_buf76_lane_251);
  auto res_demosaicb_update_0_sm97_41153 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_251_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_260_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_252);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_253);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_254);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_255);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_256);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_257);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_258);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_259);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_260_pack, denoise_FIFO_buf76_lane_260);
  auto res_demosaicb_update_0_sm97_31151 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_260_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_269_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_261);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_262);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_263);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_264);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_265);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_266);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_267);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_268);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_269_pack, denoise_FIFO_buf76_lane_269);
  auto res_demosaicb_update_0_sm97_21149 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_269_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_278_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_270);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_271);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_272);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_273);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_274);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_275);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_276);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_277);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_278_pack, denoise_FIFO_buf76_lane_278);
  auto res_demosaicb_update_0_sm97_11147 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_278_pack);

  hw_uint<144 > denoise_FIFO_buf76_lane_287_pack;
  set_at<0, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_279);
  set_at<16, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_280);
  set_at<32, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_281);
  set_at<48, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_282);
  set_at<64, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_283);
  set_at<80, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_284);
  set_at<96, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_285);
  set_at<112, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_286);
  set_at<128, 144, 16>(denoise_FIFO_buf76_lane_287_pack, denoise_FIFO_buf76_lane_287);
  auto res_demosaicb_update_0_sm97_01145 = demosaicb_generated_compute_unrolled_1(denoise_FIFO_buf76_lane_287_pack);
  hw_uint<512 > return_value2254;
  set_at<0, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_311207);
  set_at<16, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_301205);
  set_at<32, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_291203);
  set_at<48, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_281201);
  set_at<64, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_271199);
  set_at<80, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_261197);
  set_at<96, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_251195);
  set_at<112, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_241193);
  set_at<128, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_231191);
  set_at<144, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_221189);
  set_at<160, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_211187);
  set_at<176, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_201185);
  set_at<192, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_191183);
  set_at<208, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_181181);
  set_at<224, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_171179);
  set_at<240, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_161177);
  set_at<256, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_151175);
  set_at<272, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_141173);
  set_at<288, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_131171);
  set_at<304, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_121169);
  set_at<320, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_111167);
  set_at<336, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_101165);
  set_at<352, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_91163);
  set_at<368, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_81161);
  set_at<384, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_71159);
  set_at<400, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_61157);
  set_at<416, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_51155);
  set_at<432, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_41153);
  set_at<448, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_31151);
  set_at<464, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_21149);
  set_at<480, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_11147);
  set_at<496, 512, 16>(return_value2254, res_demosaicb_update_0_sm97_01145);
  return return_value2254;

}

hw_uint<512> denoiseb_1_cu2256(hw_uint<16*800>& raw_FIFO_buf84) {
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
  hw_uint<16> raw_FIFO_buf84_lane_400 = raw_FIFO_buf84.extract<6400, 6415>();
  hw_uint<16> raw_FIFO_buf84_lane_401 = raw_FIFO_buf84.extract<6416, 6431>();
  hw_uint<16> raw_FIFO_buf84_lane_402 = raw_FIFO_buf84.extract<6432, 6447>();
  hw_uint<16> raw_FIFO_buf84_lane_403 = raw_FIFO_buf84.extract<6448, 6463>();
  hw_uint<16> raw_FIFO_buf84_lane_404 = raw_FIFO_buf84.extract<6464, 6479>();
  hw_uint<16> raw_FIFO_buf84_lane_405 = raw_FIFO_buf84.extract<6480, 6495>();
  hw_uint<16> raw_FIFO_buf84_lane_406 = raw_FIFO_buf84.extract<6496, 6511>();
  hw_uint<16> raw_FIFO_buf84_lane_407 = raw_FIFO_buf84.extract<6512, 6527>();
  hw_uint<16> raw_FIFO_buf84_lane_408 = raw_FIFO_buf84.extract<6528, 6543>();
  hw_uint<16> raw_FIFO_buf84_lane_409 = raw_FIFO_buf84.extract<6544, 6559>();
  hw_uint<16> raw_FIFO_buf84_lane_410 = raw_FIFO_buf84.extract<6560, 6575>();
  hw_uint<16> raw_FIFO_buf84_lane_411 = raw_FIFO_buf84.extract<6576, 6591>();
  hw_uint<16> raw_FIFO_buf84_lane_412 = raw_FIFO_buf84.extract<6592, 6607>();
  hw_uint<16> raw_FIFO_buf84_lane_413 = raw_FIFO_buf84.extract<6608, 6623>();
  hw_uint<16> raw_FIFO_buf84_lane_414 = raw_FIFO_buf84.extract<6624, 6639>();
  hw_uint<16> raw_FIFO_buf84_lane_415 = raw_FIFO_buf84.extract<6640, 6655>();
  hw_uint<16> raw_FIFO_buf84_lane_416 = raw_FIFO_buf84.extract<6656, 6671>();
  hw_uint<16> raw_FIFO_buf84_lane_417 = raw_FIFO_buf84.extract<6672, 6687>();
  hw_uint<16> raw_FIFO_buf84_lane_418 = raw_FIFO_buf84.extract<6688, 6703>();
  hw_uint<16> raw_FIFO_buf84_lane_419 = raw_FIFO_buf84.extract<6704, 6719>();
  hw_uint<16> raw_FIFO_buf84_lane_420 = raw_FIFO_buf84.extract<6720, 6735>();
  hw_uint<16> raw_FIFO_buf84_lane_421 = raw_FIFO_buf84.extract<6736, 6751>();
  hw_uint<16> raw_FIFO_buf84_lane_422 = raw_FIFO_buf84.extract<6752, 6767>();
  hw_uint<16> raw_FIFO_buf84_lane_423 = raw_FIFO_buf84.extract<6768, 6783>();
  hw_uint<16> raw_FIFO_buf84_lane_424 = raw_FIFO_buf84.extract<6784, 6799>();
  hw_uint<16> raw_FIFO_buf84_lane_425 = raw_FIFO_buf84.extract<6800, 6815>();
  hw_uint<16> raw_FIFO_buf84_lane_426 = raw_FIFO_buf84.extract<6816, 6831>();
  hw_uint<16> raw_FIFO_buf84_lane_427 = raw_FIFO_buf84.extract<6832, 6847>();
  hw_uint<16> raw_FIFO_buf84_lane_428 = raw_FIFO_buf84.extract<6848, 6863>();
  hw_uint<16> raw_FIFO_buf84_lane_429 = raw_FIFO_buf84.extract<6864, 6879>();
  hw_uint<16> raw_FIFO_buf84_lane_430 = raw_FIFO_buf84.extract<6880, 6895>();
  hw_uint<16> raw_FIFO_buf84_lane_431 = raw_FIFO_buf84.extract<6896, 6911>();
  hw_uint<16> raw_FIFO_buf84_lane_432 = raw_FIFO_buf84.extract<6912, 6927>();
  hw_uint<16> raw_FIFO_buf84_lane_433 = raw_FIFO_buf84.extract<6928, 6943>();
  hw_uint<16> raw_FIFO_buf84_lane_434 = raw_FIFO_buf84.extract<6944, 6959>();
  hw_uint<16> raw_FIFO_buf84_lane_435 = raw_FIFO_buf84.extract<6960, 6975>();
  hw_uint<16> raw_FIFO_buf84_lane_436 = raw_FIFO_buf84.extract<6976, 6991>();
  hw_uint<16> raw_FIFO_buf84_lane_437 = raw_FIFO_buf84.extract<6992, 7007>();
  hw_uint<16> raw_FIFO_buf84_lane_438 = raw_FIFO_buf84.extract<7008, 7023>();
  hw_uint<16> raw_FIFO_buf84_lane_439 = raw_FIFO_buf84.extract<7024, 7039>();
  hw_uint<16> raw_FIFO_buf84_lane_440 = raw_FIFO_buf84.extract<7040, 7055>();
  hw_uint<16> raw_FIFO_buf84_lane_441 = raw_FIFO_buf84.extract<7056, 7071>();
  hw_uint<16> raw_FIFO_buf84_lane_442 = raw_FIFO_buf84.extract<7072, 7087>();
  hw_uint<16> raw_FIFO_buf84_lane_443 = raw_FIFO_buf84.extract<7088, 7103>();
  hw_uint<16> raw_FIFO_buf84_lane_444 = raw_FIFO_buf84.extract<7104, 7119>();
  hw_uint<16> raw_FIFO_buf84_lane_445 = raw_FIFO_buf84.extract<7120, 7135>();
  hw_uint<16> raw_FIFO_buf84_lane_446 = raw_FIFO_buf84.extract<7136, 7151>();
  hw_uint<16> raw_FIFO_buf84_lane_447 = raw_FIFO_buf84.extract<7152, 7167>();
  hw_uint<16> raw_FIFO_buf84_lane_448 = raw_FIFO_buf84.extract<7168, 7183>();
  hw_uint<16> raw_FIFO_buf84_lane_449 = raw_FIFO_buf84.extract<7184, 7199>();
  hw_uint<16> raw_FIFO_buf84_lane_450 = raw_FIFO_buf84.extract<7200, 7215>();
  hw_uint<16> raw_FIFO_buf84_lane_451 = raw_FIFO_buf84.extract<7216, 7231>();
  hw_uint<16> raw_FIFO_buf84_lane_452 = raw_FIFO_buf84.extract<7232, 7247>();
  hw_uint<16> raw_FIFO_buf84_lane_453 = raw_FIFO_buf84.extract<7248, 7263>();
  hw_uint<16> raw_FIFO_buf84_lane_454 = raw_FIFO_buf84.extract<7264, 7279>();
  hw_uint<16> raw_FIFO_buf84_lane_455 = raw_FIFO_buf84.extract<7280, 7295>();
  hw_uint<16> raw_FIFO_buf84_lane_456 = raw_FIFO_buf84.extract<7296, 7311>();
  hw_uint<16> raw_FIFO_buf84_lane_457 = raw_FIFO_buf84.extract<7312, 7327>();
  hw_uint<16> raw_FIFO_buf84_lane_458 = raw_FIFO_buf84.extract<7328, 7343>();
  hw_uint<16> raw_FIFO_buf84_lane_459 = raw_FIFO_buf84.extract<7344, 7359>();
  hw_uint<16> raw_FIFO_buf84_lane_460 = raw_FIFO_buf84.extract<7360, 7375>();
  hw_uint<16> raw_FIFO_buf84_lane_461 = raw_FIFO_buf84.extract<7376, 7391>();
  hw_uint<16> raw_FIFO_buf84_lane_462 = raw_FIFO_buf84.extract<7392, 7407>();
  hw_uint<16> raw_FIFO_buf84_lane_463 = raw_FIFO_buf84.extract<7408, 7423>();
  hw_uint<16> raw_FIFO_buf84_lane_464 = raw_FIFO_buf84.extract<7424, 7439>();
  hw_uint<16> raw_FIFO_buf84_lane_465 = raw_FIFO_buf84.extract<7440, 7455>();
  hw_uint<16> raw_FIFO_buf84_lane_466 = raw_FIFO_buf84.extract<7456, 7471>();
  hw_uint<16> raw_FIFO_buf84_lane_467 = raw_FIFO_buf84.extract<7472, 7487>();
  hw_uint<16> raw_FIFO_buf84_lane_468 = raw_FIFO_buf84.extract<7488, 7503>();
  hw_uint<16> raw_FIFO_buf84_lane_469 = raw_FIFO_buf84.extract<7504, 7519>();
  hw_uint<16> raw_FIFO_buf84_lane_470 = raw_FIFO_buf84.extract<7520, 7535>();
  hw_uint<16> raw_FIFO_buf84_lane_471 = raw_FIFO_buf84.extract<7536, 7551>();
  hw_uint<16> raw_FIFO_buf84_lane_472 = raw_FIFO_buf84.extract<7552, 7567>();
  hw_uint<16> raw_FIFO_buf84_lane_473 = raw_FIFO_buf84.extract<7568, 7583>();
  hw_uint<16> raw_FIFO_buf84_lane_474 = raw_FIFO_buf84.extract<7584, 7599>();
  hw_uint<16> raw_FIFO_buf84_lane_475 = raw_FIFO_buf84.extract<7600, 7615>();
  hw_uint<16> raw_FIFO_buf84_lane_476 = raw_FIFO_buf84.extract<7616, 7631>();
  hw_uint<16> raw_FIFO_buf84_lane_477 = raw_FIFO_buf84.extract<7632, 7647>();
  hw_uint<16> raw_FIFO_buf84_lane_478 = raw_FIFO_buf84.extract<7648, 7663>();
  hw_uint<16> raw_FIFO_buf84_lane_479 = raw_FIFO_buf84.extract<7664, 7679>();
  hw_uint<16> raw_FIFO_buf84_lane_480 = raw_FIFO_buf84.extract<7680, 7695>();
  hw_uint<16> raw_FIFO_buf84_lane_481 = raw_FIFO_buf84.extract<7696, 7711>();
  hw_uint<16> raw_FIFO_buf84_lane_482 = raw_FIFO_buf84.extract<7712, 7727>();
  hw_uint<16> raw_FIFO_buf84_lane_483 = raw_FIFO_buf84.extract<7728, 7743>();
  hw_uint<16> raw_FIFO_buf84_lane_484 = raw_FIFO_buf84.extract<7744, 7759>();
  hw_uint<16> raw_FIFO_buf84_lane_485 = raw_FIFO_buf84.extract<7760, 7775>();
  hw_uint<16> raw_FIFO_buf84_lane_486 = raw_FIFO_buf84.extract<7776, 7791>();
  hw_uint<16> raw_FIFO_buf84_lane_487 = raw_FIFO_buf84.extract<7792, 7807>();
  hw_uint<16> raw_FIFO_buf84_lane_488 = raw_FIFO_buf84.extract<7808, 7823>();
  hw_uint<16> raw_FIFO_buf84_lane_489 = raw_FIFO_buf84.extract<7824, 7839>();
  hw_uint<16> raw_FIFO_buf84_lane_490 = raw_FIFO_buf84.extract<7840, 7855>();
  hw_uint<16> raw_FIFO_buf84_lane_491 = raw_FIFO_buf84.extract<7856, 7871>();
  hw_uint<16> raw_FIFO_buf84_lane_492 = raw_FIFO_buf84.extract<7872, 7887>();
  hw_uint<16> raw_FIFO_buf84_lane_493 = raw_FIFO_buf84.extract<7888, 7903>();
  hw_uint<16> raw_FIFO_buf84_lane_494 = raw_FIFO_buf84.extract<7904, 7919>();
  hw_uint<16> raw_FIFO_buf84_lane_495 = raw_FIFO_buf84.extract<7920, 7935>();
  hw_uint<16> raw_FIFO_buf84_lane_496 = raw_FIFO_buf84.extract<7936, 7951>();
  hw_uint<16> raw_FIFO_buf84_lane_497 = raw_FIFO_buf84.extract<7952, 7967>();
  hw_uint<16> raw_FIFO_buf84_lane_498 = raw_FIFO_buf84.extract<7968, 7983>();
  hw_uint<16> raw_FIFO_buf84_lane_499 = raw_FIFO_buf84.extract<7984, 7999>();
  hw_uint<16> raw_FIFO_buf84_lane_500 = raw_FIFO_buf84.extract<8000, 8015>();
  hw_uint<16> raw_FIFO_buf84_lane_501 = raw_FIFO_buf84.extract<8016, 8031>();
  hw_uint<16> raw_FIFO_buf84_lane_502 = raw_FIFO_buf84.extract<8032, 8047>();
  hw_uint<16> raw_FIFO_buf84_lane_503 = raw_FIFO_buf84.extract<8048, 8063>();
  hw_uint<16> raw_FIFO_buf84_lane_504 = raw_FIFO_buf84.extract<8064, 8079>();
  hw_uint<16> raw_FIFO_buf84_lane_505 = raw_FIFO_buf84.extract<8080, 8095>();
  hw_uint<16> raw_FIFO_buf84_lane_506 = raw_FIFO_buf84.extract<8096, 8111>();
  hw_uint<16> raw_FIFO_buf84_lane_507 = raw_FIFO_buf84.extract<8112, 8127>();
  hw_uint<16> raw_FIFO_buf84_lane_508 = raw_FIFO_buf84.extract<8128, 8143>();
  hw_uint<16> raw_FIFO_buf84_lane_509 = raw_FIFO_buf84.extract<8144, 8159>();
  hw_uint<16> raw_FIFO_buf84_lane_510 = raw_FIFO_buf84.extract<8160, 8175>();
  hw_uint<16> raw_FIFO_buf84_lane_511 = raw_FIFO_buf84.extract<8176, 8191>();
  hw_uint<16> raw_FIFO_buf84_lane_512 = raw_FIFO_buf84.extract<8192, 8207>();
  hw_uint<16> raw_FIFO_buf84_lane_513 = raw_FIFO_buf84.extract<8208, 8223>();
  hw_uint<16> raw_FIFO_buf84_lane_514 = raw_FIFO_buf84.extract<8224, 8239>();
  hw_uint<16> raw_FIFO_buf84_lane_515 = raw_FIFO_buf84.extract<8240, 8255>();
  hw_uint<16> raw_FIFO_buf84_lane_516 = raw_FIFO_buf84.extract<8256, 8271>();
  hw_uint<16> raw_FIFO_buf84_lane_517 = raw_FIFO_buf84.extract<8272, 8287>();
  hw_uint<16> raw_FIFO_buf84_lane_518 = raw_FIFO_buf84.extract<8288, 8303>();
  hw_uint<16> raw_FIFO_buf84_lane_519 = raw_FIFO_buf84.extract<8304, 8319>();
  hw_uint<16> raw_FIFO_buf84_lane_520 = raw_FIFO_buf84.extract<8320, 8335>();
  hw_uint<16> raw_FIFO_buf84_lane_521 = raw_FIFO_buf84.extract<8336, 8351>();
  hw_uint<16> raw_FIFO_buf84_lane_522 = raw_FIFO_buf84.extract<8352, 8367>();
  hw_uint<16> raw_FIFO_buf84_lane_523 = raw_FIFO_buf84.extract<8368, 8383>();
  hw_uint<16> raw_FIFO_buf84_lane_524 = raw_FIFO_buf84.extract<8384, 8399>();
  hw_uint<16> raw_FIFO_buf84_lane_525 = raw_FIFO_buf84.extract<8400, 8415>();
  hw_uint<16> raw_FIFO_buf84_lane_526 = raw_FIFO_buf84.extract<8416, 8431>();
  hw_uint<16> raw_FIFO_buf84_lane_527 = raw_FIFO_buf84.extract<8432, 8447>();
  hw_uint<16> raw_FIFO_buf84_lane_528 = raw_FIFO_buf84.extract<8448, 8463>();
  hw_uint<16> raw_FIFO_buf84_lane_529 = raw_FIFO_buf84.extract<8464, 8479>();
  hw_uint<16> raw_FIFO_buf84_lane_530 = raw_FIFO_buf84.extract<8480, 8495>();
  hw_uint<16> raw_FIFO_buf84_lane_531 = raw_FIFO_buf84.extract<8496, 8511>();
  hw_uint<16> raw_FIFO_buf84_lane_532 = raw_FIFO_buf84.extract<8512, 8527>();
  hw_uint<16> raw_FIFO_buf84_lane_533 = raw_FIFO_buf84.extract<8528, 8543>();
  hw_uint<16> raw_FIFO_buf84_lane_534 = raw_FIFO_buf84.extract<8544, 8559>();
  hw_uint<16> raw_FIFO_buf84_lane_535 = raw_FIFO_buf84.extract<8560, 8575>();
  hw_uint<16> raw_FIFO_buf84_lane_536 = raw_FIFO_buf84.extract<8576, 8591>();
  hw_uint<16> raw_FIFO_buf84_lane_537 = raw_FIFO_buf84.extract<8592, 8607>();
  hw_uint<16> raw_FIFO_buf84_lane_538 = raw_FIFO_buf84.extract<8608, 8623>();
  hw_uint<16> raw_FIFO_buf84_lane_539 = raw_FIFO_buf84.extract<8624, 8639>();
  hw_uint<16> raw_FIFO_buf84_lane_540 = raw_FIFO_buf84.extract<8640, 8655>();
  hw_uint<16> raw_FIFO_buf84_lane_541 = raw_FIFO_buf84.extract<8656, 8671>();
  hw_uint<16> raw_FIFO_buf84_lane_542 = raw_FIFO_buf84.extract<8672, 8687>();
  hw_uint<16> raw_FIFO_buf84_lane_543 = raw_FIFO_buf84.extract<8688, 8703>();
  hw_uint<16> raw_FIFO_buf84_lane_544 = raw_FIFO_buf84.extract<8704, 8719>();
  hw_uint<16> raw_FIFO_buf84_lane_545 = raw_FIFO_buf84.extract<8720, 8735>();
  hw_uint<16> raw_FIFO_buf84_lane_546 = raw_FIFO_buf84.extract<8736, 8751>();
  hw_uint<16> raw_FIFO_buf84_lane_547 = raw_FIFO_buf84.extract<8752, 8767>();
  hw_uint<16> raw_FIFO_buf84_lane_548 = raw_FIFO_buf84.extract<8768, 8783>();
  hw_uint<16> raw_FIFO_buf84_lane_549 = raw_FIFO_buf84.extract<8784, 8799>();
  hw_uint<16> raw_FIFO_buf84_lane_550 = raw_FIFO_buf84.extract<8800, 8815>();
  hw_uint<16> raw_FIFO_buf84_lane_551 = raw_FIFO_buf84.extract<8816, 8831>();
  hw_uint<16> raw_FIFO_buf84_lane_552 = raw_FIFO_buf84.extract<8832, 8847>();
  hw_uint<16> raw_FIFO_buf84_lane_553 = raw_FIFO_buf84.extract<8848, 8863>();
  hw_uint<16> raw_FIFO_buf84_lane_554 = raw_FIFO_buf84.extract<8864, 8879>();
  hw_uint<16> raw_FIFO_buf84_lane_555 = raw_FIFO_buf84.extract<8880, 8895>();
  hw_uint<16> raw_FIFO_buf84_lane_556 = raw_FIFO_buf84.extract<8896, 8911>();
  hw_uint<16> raw_FIFO_buf84_lane_557 = raw_FIFO_buf84.extract<8912, 8927>();
  hw_uint<16> raw_FIFO_buf84_lane_558 = raw_FIFO_buf84.extract<8928, 8943>();
  hw_uint<16> raw_FIFO_buf84_lane_559 = raw_FIFO_buf84.extract<8944, 8959>();
  hw_uint<16> raw_FIFO_buf84_lane_560 = raw_FIFO_buf84.extract<8960, 8975>();
  hw_uint<16> raw_FIFO_buf84_lane_561 = raw_FIFO_buf84.extract<8976, 8991>();
  hw_uint<16> raw_FIFO_buf84_lane_562 = raw_FIFO_buf84.extract<8992, 9007>();
  hw_uint<16> raw_FIFO_buf84_lane_563 = raw_FIFO_buf84.extract<9008, 9023>();
  hw_uint<16> raw_FIFO_buf84_lane_564 = raw_FIFO_buf84.extract<9024, 9039>();
  hw_uint<16> raw_FIFO_buf84_lane_565 = raw_FIFO_buf84.extract<9040, 9055>();
  hw_uint<16> raw_FIFO_buf84_lane_566 = raw_FIFO_buf84.extract<9056, 9071>();
  hw_uint<16> raw_FIFO_buf84_lane_567 = raw_FIFO_buf84.extract<9072, 9087>();
  hw_uint<16> raw_FIFO_buf84_lane_568 = raw_FIFO_buf84.extract<9088, 9103>();
  hw_uint<16> raw_FIFO_buf84_lane_569 = raw_FIFO_buf84.extract<9104, 9119>();
  hw_uint<16> raw_FIFO_buf84_lane_570 = raw_FIFO_buf84.extract<9120, 9135>();
  hw_uint<16> raw_FIFO_buf84_lane_571 = raw_FIFO_buf84.extract<9136, 9151>();
  hw_uint<16> raw_FIFO_buf84_lane_572 = raw_FIFO_buf84.extract<9152, 9167>();
  hw_uint<16> raw_FIFO_buf84_lane_573 = raw_FIFO_buf84.extract<9168, 9183>();
  hw_uint<16> raw_FIFO_buf84_lane_574 = raw_FIFO_buf84.extract<9184, 9199>();
  hw_uint<16> raw_FIFO_buf84_lane_575 = raw_FIFO_buf84.extract<9200, 9215>();
  hw_uint<16> raw_FIFO_buf84_lane_576 = raw_FIFO_buf84.extract<9216, 9231>();
  hw_uint<16> raw_FIFO_buf84_lane_577 = raw_FIFO_buf84.extract<9232, 9247>();
  hw_uint<16> raw_FIFO_buf84_lane_578 = raw_FIFO_buf84.extract<9248, 9263>();
  hw_uint<16> raw_FIFO_buf84_lane_579 = raw_FIFO_buf84.extract<9264, 9279>();
  hw_uint<16> raw_FIFO_buf84_lane_580 = raw_FIFO_buf84.extract<9280, 9295>();
  hw_uint<16> raw_FIFO_buf84_lane_581 = raw_FIFO_buf84.extract<9296, 9311>();
  hw_uint<16> raw_FIFO_buf84_lane_582 = raw_FIFO_buf84.extract<9312, 9327>();
  hw_uint<16> raw_FIFO_buf84_lane_583 = raw_FIFO_buf84.extract<9328, 9343>();
  hw_uint<16> raw_FIFO_buf84_lane_584 = raw_FIFO_buf84.extract<9344, 9359>();
  hw_uint<16> raw_FIFO_buf84_lane_585 = raw_FIFO_buf84.extract<9360, 9375>();
  hw_uint<16> raw_FIFO_buf84_lane_586 = raw_FIFO_buf84.extract<9376, 9391>();
  hw_uint<16> raw_FIFO_buf84_lane_587 = raw_FIFO_buf84.extract<9392, 9407>();
  hw_uint<16> raw_FIFO_buf84_lane_588 = raw_FIFO_buf84.extract<9408, 9423>();
  hw_uint<16> raw_FIFO_buf84_lane_589 = raw_FIFO_buf84.extract<9424, 9439>();
  hw_uint<16> raw_FIFO_buf84_lane_590 = raw_FIFO_buf84.extract<9440, 9455>();
  hw_uint<16> raw_FIFO_buf84_lane_591 = raw_FIFO_buf84.extract<9456, 9471>();
  hw_uint<16> raw_FIFO_buf84_lane_592 = raw_FIFO_buf84.extract<9472, 9487>();
  hw_uint<16> raw_FIFO_buf84_lane_593 = raw_FIFO_buf84.extract<9488, 9503>();
  hw_uint<16> raw_FIFO_buf84_lane_594 = raw_FIFO_buf84.extract<9504, 9519>();
  hw_uint<16> raw_FIFO_buf84_lane_595 = raw_FIFO_buf84.extract<9520, 9535>();
  hw_uint<16> raw_FIFO_buf84_lane_596 = raw_FIFO_buf84.extract<9536, 9551>();
  hw_uint<16> raw_FIFO_buf84_lane_597 = raw_FIFO_buf84.extract<9552, 9567>();
  hw_uint<16> raw_FIFO_buf84_lane_598 = raw_FIFO_buf84.extract<9568, 9583>();
  hw_uint<16> raw_FIFO_buf84_lane_599 = raw_FIFO_buf84.extract<9584, 9599>();
  hw_uint<16> raw_FIFO_buf84_lane_600 = raw_FIFO_buf84.extract<9600, 9615>();
  hw_uint<16> raw_FIFO_buf84_lane_601 = raw_FIFO_buf84.extract<9616, 9631>();
  hw_uint<16> raw_FIFO_buf84_lane_602 = raw_FIFO_buf84.extract<9632, 9647>();
  hw_uint<16> raw_FIFO_buf84_lane_603 = raw_FIFO_buf84.extract<9648, 9663>();
  hw_uint<16> raw_FIFO_buf84_lane_604 = raw_FIFO_buf84.extract<9664, 9679>();
  hw_uint<16> raw_FIFO_buf84_lane_605 = raw_FIFO_buf84.extract<9680, 9695>();
  hw_uint<16> raw_FIFO_buf84_lane_606 = raw_FIFO_buf84.extract<9696, 9711>();
  hw_uint<16> raw_FIFO_buf84_lane_607 = raw_FIFO_buf84.extract<9712, 9727>();
  hw_uint<16> raw_FIFO_buf84_lane_608 = raw_FIFO_buf84.extract<9728, 9743>();
  hw_uint<16> raw_FIFO_buf84_lane_609 = raw_FIFO_buf84.extract<9744, 9759>();
  hw_uint<16> raw_FIFO_buf84_lane_610 = raw_FIFO_buf84.extract<9760, 9775>();
  hw_uint<16> raw_FIFO_buf84_lane_611 = raw_FIFO_buf84.extract<9776, 9791>();
  hw_uint<16> raw_FIFO_buf84_lane_612 = raw_FIFO_buf84.extract<9792, 9807>();
  hw_uint<16> raw_FIFO_buf84_lane_613 = raw_FIFO_buf84.extract<9808, 9823>();
  hw_uint<16> raw_FIFO_buf84_lane_614 = raw_FIFO_buf84.extract<9824, 9839>();
  hw_uint<16> raw_FIFO_buf84_lane_615 = raw_FIFO_buf84.extract<9840, 9855>();
  hw_uint<16> raw_FIFO_buf84_lane_616 = raw_FIFO_buf84.extract<9856, 9871>();
  hw_uint<16> raw_FIFO_buf84_lane_617 = raw_FIFO_buf84.extract<9872, 9887>();
  hw_uint<16> raw_FIFO_buf84_lane_618 = raw_FIFO_buf84.extract<9888, 9903>();
  hw_uint<16> raw_FIFO_buf84_lane_619 = raw_FIFO_buf84.extract<9904, 9919>();
  hw_uint<16> raw_FIFO_buf84_lane_620 = raw_FIFO_buf84.extract<9920, 9935>();
  hw_uint<16> raw_FIFO_buf84_lane_621 = raw_FIFO_buf84.extract<9936, 9951>();
  hw_uint<16> raw_FIFO_buf84_lane_622 = raw_FIFO_buf84.extract<9952, 9967>();
  hw_uint<16> raw_FIFO_buf84_lane_623 = raw_FIFO_buf84.extract<9968, 9983>();
  hw_uint<16> raw_FIFO_buf84_lane_624 = raw_FIFO_buf84.extract<9984, 9999>();
  hw_uint<16> raw_FIFO_buf84_lane_625 = raw_FIFO_buf84.extract<10000, 10015>();
  hw_uint<16> raw_FIFO_buf84_lane_626 = raw_FIFO_buf84.extract<10016, 10031>();
  hw_uint<16> raw_FIFO_buf84_lane_627 = raw_FIFO_buf84.extract<10032, 10047>();
  hw_uint<16> raw_FIFO_buf84_lane_628 = raw_FIFO_buf84.extract<10048, 10063>();
  hw_uint<16> raw_FIFO_buf84_lane_629 = raw_FIFO_buf84.extract<10064, 10079>();
  hw_uint<16> raw_FIFO_buf84_lane_630 = raw_FIFO_buf84.extract<10080, 10095>();
  hw_uint<16> raw_FIFO_buf84_lane_631 = raw_FIFO_buf84.extract<10096, 10111>();
  hw_uint<16> raw_FIFO_buf84_lane_632 = raw_FIFO_buf84.extract<10112, 10127>();
  hw_uint<16> raw_FIFO_buf84_lane_633 = raw_FIFO_buf84.extract<10128, 10143>();
  hw_uint<16> raw_FIFO_buf84_lane_634 = raw_FIFO_buf84.extract<10144, 10159>();
  hw_uint<16> raw_FIFO_buf84_lane_635 = raw_FIFO_buf84.extract<10160, 10175>();
  hw_uint<16> raw_FIFO_buf84_lane_636 = raw_FIFO_buf84.extract<10176, 10191>();
  hw_uint<16> raw_FIFO_buf84_lane_637 = raw_FIFO_buf84.extract<10192, 10207>();
  hw_uint<16> raw_FIFO_buf84_lane_638 = raw_FIFO_buf84.extract<10208, 10223>();
  hw_uint<16> raw_FIFO_buf84_lane_639 = raw_FIFO_buf84.extract<10224, 10239>();
  hw_uint<16> raw_FIFO_buf84_lane_640 = raw_FIFO_buf84.extract<10240, 10255>();
  hw_uint<16> raw_FIFO_buf84_lane_641 = raw_FIFO_buf84.extract<10256, 10271>();
  hw_uint<16> raw_FIFO_buf84_lane_642 = raw_FIFO_buf84.extract<10272, 10287>();
  hw_uint<16> raw_FIFO_buf84_lane_643 = raw_FIFO_buf84.extract<10288, 10303>();
  hw_uint<16> raw_FIFO_buf84_lane_644 = raw_FIFO_buf84.extract<10304, 10319>();
  hw_uint<16> raw_FIFO_buf84_lane_645 = raw_FIFO_buf84.extract<10320, 10335>();
  hw_uint<16> raw_FIFO_buf84_lane_646 = raw_FIFO_buf84.extract<10336, 10351>();
  hw_uint<16> raw_FIFO_buf84_lane_647 = raw_FIFO_buf84.extract<10352, 10367>();
  hw_uint<16> raw_FIFO_buf84_lane_648 = raw_FIFO_buf84.extract<10368, 10383>();
  hw_uint<16> raw_FIFO_buf84_lane_649 = raw_FIFO_buf84.extract<10384, 10399>();
  hw_uint<16> raw_FIFO_buf84_lane_650 = raw_FIFO_buf84.extract<10400, 10415>();
  hw_uint<16> raw_FIFO_buf84_lane_651 = raw_FIFO_buf84.extract<10416, 10431>();
  hw_uint<16> raw_FIFO_buf84_lane_652 = raw_FIFO_buf84.extract<10432, 10447>();
  hw_uint<16> raw_FIFO_buf84_lane_653 = raw_FIFO_buf84.extract<10448, 10463>();
  hw_uint<16> raw_FIFO_buf84_lane_654 = raw_FIFO_buf84.extract<10464, 10479>();
  hw_uint<16> raw_FIFO_buf84_lane_655 = raw_FIFO_buf84.extract<10480, 10495>();
  hw_uint<16> raw_FIFO_buf84_lane_656 = raw_FIFO_buf84.extract<10496, 10511>();
  hw_uint<16> raw_FIFO_buf84_lane_657 = raw_FIFO_buf84.extract<10512, 10527>();
  hw_uint<16> raw_FIFO_buf84_lane_658 = raw_FIFO_buf84.extract<10528, 10543>();
  hw_uint<16> raw_FIFO_buf84_lane_659 = raw_FIFO_buf84.extract<10544, 10559>();
  hw_uint<16> raw_FIFO_buf84_lane_660 = raw_FIFO_buf84.extract<10560, 10575>();
  hw_uint<16> raw_FIFO_buf84_lane_661 = raw_FIFO_buf84.extract<10576, 10591>();
  hw_uint<16> raw_FIFO_buf84_lane_662 = raw_FIFO_buf84.extract<10592, 10607>();
  hw_uint<16> raw_FIFO_buf84_lane_663 = raw_FIFO_buf84.extract<10608, 10623>();
  hw_uint<16> raw_FIFO_buf84_lane_664 = raw_FIFO_buf84.extract<10624, 10639>();
  hw_uint<16> raw_FIFO_buf84_lane_665 = raw_FIFO_buf84.extract<10640, 10655>();
  hw_uint<16> raw_FIFO_buf84_lane_666 = raw_FIFO_buf84.extract<10656, 10671>();
  hw_uint<16> raw_FIFO_buf84_lane_667 = raw_FIFO_buf84.extract<10672, 10687>();
  hw_uint<16> raw_FIFO_buf84_lane_668 = raw_FIFO_buf84.extract<10688, 10703>();
  hw_uint<16> raw_FIFO_buf84_lane_669 = raw_FIFO_buf84.extract<10704, 10719>();
  hw_uint<16> raw_FIFO_buf84_lane_670 = raw_FIFO_buf84.extract<10720, 10735>();
  hw_uint<16> raw_FIFO_buf84_lane_671 = raw_FIFO_buf84.extract<10736, 10751>();
  hw_uint<16> raw_FIFO_buf84_lane_672 = raw_FIFO_buf84.extract<10752, 10767>();
  hw_uint<16> raw_FIFO_buf84_lane_673 = raw_FIFO_buf84.extract<10768, 10783>();
  hw_uint<16> raw_FIFO_buf84_lane_674 = raw_FIFO_buf84.extract<10784, 10799>();
  hw_uint<16> raw_FIFO_buf84_lane_675 = raw_FIFO_buf84.extract<10800, 10815>();
  hw_uint<16> raw_FIFO_buf84_lane_676 = raw_FIFO_buf84.extract<10816, 10831>();
  hw_uint<16> raw_FIFO_buf84_lane_677 = raw_FIFO_buf84.extract<10832, 10847>();
  hw_uint<16> raw_FIFO_buf84_lane_678 = raw_FIFO_buf84.extract<10848, 10863>();
  hw_uint<16> raw_FIFO_buf84_lane_679 = raw_FIFO_buf84.extract<10864, 10879>();
  hw_uint<16> raw_FIFO_buf84_lane_680 = raw_FIFO_buf84.extract<10880, 10895>();
  hw_uint<16> raw_FIFO_buf84_lane_681 = raw_FIFO_buf84.extract<10896, 10911>();
  hw_uint<16> raw_FIFO_buf84_lane_682 = raw_FIFO_buf84.extract<10912, 10927>();
  hw_uint<16> raw_FIFO_buf84_lane_683 = raw_FIFO_buf84.extract<10928, 10943>();
  hw_uint<16> raw_FIFO_buf84_lane_684 = raw_FIFO_buf84.extract<10944, 10959>();
  hw_uint<16> raw_FIFO_buf84_lane_685 = raw_FIFO_buf84.extract<10960, 10975>();
  hw_uint<16> raw_FIFO_buf84_lane_686 = raw_FIFO_buf84.extract<10976, 10991>();
  hw_uint<16> raw_FIFO_buf84_lane_687 = raw_FIFO_buf84.extract<10992, 11007>();
  hw_uint<16> raw_FIFO_buf84_lane_688 = raw_FIFO_buf84.extract<11008, 11023>();
  hw_uint<16> raw_FIFO_buf84_lane_689 = raw_FIFO_buf84.extract<11024, 11039>();
  hw_uint<16> raw_FIFO_buf84_lane_690 = raw_FIFO_buf84.extract<11040, 11055>();
  hw_uint<16> raw_FIFO_buf84_lane_691 = raw_FIFO_buf84.extract<11056, 11071>();
  hw_uint<16> raw_FIFO_buf84_lane_692 = raw_FIFO_buf84.extract<11072, 11087>();
  hw_uint<16> raw_FIFO_buf84_lane_693 = raw_FIFO_buf84.extract<11088, 11103>();
  hw_uint<16> raw_FIFO_buf84_lane_694 = raw_FIFO_buf84.extract<11104, 11119>();
  hw_uint<16> raw_FIFO_buf84_lane_695 = raw_FIFO_buf84.extract<11120, 11135>();
  hw_uint<16> raw_FIFO_buf84_lane_696 = raw_FIFO_buf84.extract<11136, 11151>();
  hw_uint<16> raw_FIFO_buf84_lane_697 = raw_FIFO_buf84.extract<11152, 11167>();
  hw_uint<16> raw_FIFO_buf84_lane_698 = raw_FIFO_buf84.extract<11168, 11183>();
  hw_uint<16> raw_FIFO_buf84_lane_699 = raw_FIFO_buf84.extract<11184, 11199>();
  hw_uint<16> raw_FIFO_buf84_lane_700 = raw_FIFO_buf84.extract<11200, 11215>();
  hw_uint<16> raw_FIFO_buf84_lane_701 = raw_FIFO_buf84.extract<11216, 11231>();
  hw_uint<16> raw_FIFO_buf84_lane_702 = raw_FIFO_buf84.extract<11232, 11247>();
  hw_uint<16> raw_FIFO_buf84_lane_703 = raw_FIFO_buf84.extract<11248, 11263>();
  hw_uint<16> raw_FIFO_buf84_lane_704 = raw_FIFO_buf84.extract<11264, 11279>();
  hw_uint<16> raw_FIFO_buf84_lane_705 = raw_FIFO_buf84.extract<11280, 11295>();
  hw_uint<16> raw_FIFO_buf84_lane_706 = raw_FIFO_buf84.extract<11296, 11311>();
  hw_uint<16> raw_FIFO_buf84_lane_707 = raw_FIFO_buf84.extract<11312, 11327>();
  hw_uint<16> raw_FIFO_buf84_lane_708 = raw_FIFO_buf84.extract<11328, 11343>();
  hw_uint<16> raw_FIFO_buf84_lane_709 = raw_FIFO_buf84.extract<11344, 11359>();
  hw_uint<16> raw_FIFO_buf84_lane_710 = raw_FIFO_buf84.extract<11360, 11375>();
  hw_uint<16> raw_FIFO_buf84_lane_711 = raw_FIFO_buf84.extract<11376, 11391>();
  hw_uint<16> raw_FIFO_buf84_lane_712 = raw_FIFO_buf84.extract<11392, 11407>();
  hw_uint<16> raw_FIFO_buf84_lane_713 = raw_FIFO_buf84.extract<11408, 11423>();
  hw_uint<16> raw_FIFO_buf84_lane_714 = raw_FIFO_buf84.extract<11424, 11439>();
  hw_uint<16> raw_FIFO_buf84_lane_715 = raw_FIFO_buf84.extract<11440, 11455>();
  hw_uint<16> raw_FIFO_buf84_lane_716 = raw_FIFO_buf84.extract<11456, 11471>();
  hw_uint<16> raw_FIFO_buf84_lane_717 = raw_FIFO_buf84.extract<11472, 11487>();
  hw_uint<16> raw_FIFO_buf84_lane_718 = raw_FIFO_buf84.extract<11488, 11503>();
  hw_uint<16> raw_FIFO_buf84_lane_719 = raw_FIFO_buf84.extract<11504, 11519>();
  hw_uint<16> raw_FIFO_buf84_lane_720 = raw_FIFO_buf84.extract<11520, 11535>();
  hw_uint<16> raw_FIFO_buf84_lane_721 = raw_FIFO_buf84.extract<11536, 11551>();
  hw_uint<16> raw_FIFO_buf84_lane_722 = raw_FIFO_buf84.extract<11552, 11567>();
  hw_uint<16> raw_FIFO_buf84_lane_723 = raw_FIFO_buf84.extract<11568, 11583>();
  hw_uint<16> raw_FIFO_buf84_lane_724 = raw_FIFO_buf84.extract<11584, 11599>();
  hw_uint<16> raw_FIFO_buf84_lane_725 = raw_FIFO_buf84.extract<11600, 11615>();
  hw_uint<16> raw_FIFO_buf84_lane_726 = raw_FIFO_buf84.extract<11616, 11631>();
  hw_uint<16> raw_FIFO_buf84_lane_727 = raw_FIFO_buf84.extract<11632, 11647>();
  hw_uint<16> raw_FIFO_buf84_lane_728 = raw_FIFO_buf84.extract<11648, 11663>();
  hw_uint<16> raw_FIFO_buf84_lane_729 = raw_FIFO_buf84.extract<11664, 11679>();
  hw_uint<16> raw_FIFO_buf84_lane_730 = raw_FIFO_buf84.extract<11680, 11695>();
  hw_uint<16> raw_FIFO_buf84_lane_731 = raw_FIFO_buf84.extract<11696, 11711>();
  hw_uint<16> raw_FIFO_buf84_lane_732 = raw_FIFO_buf84.extract<11712, 11727>();
  hw_uint<16> raw_FIFO_buf84_lane_733 = raw_FIFO_buf84.extract<11728, 11743>();
  hw_uint<16> raw_FIFO_buf84_lane_734 = raw_FIFO_buf84.extract<11744, 11759>();
  hw_uint<16> raw_FIFO_buf84_lane_735 = raw_FIFO_buf84.extract<11760, 11775>();
  hw_uint<16> raw_FIFO_buf84_lane_736 = raw_FIFO_buf84.extract<11776, 11791>();
  hw_uint<16> raw_FIFO_buf84_lane_737 = raw_FIFO_buf84.extract<11792, 11807>();
  hw_uint<16> raw_FIFO_buf84_lane_738 = raw_FIFO_buf84.extract<11808, 11823>();
  hw_uint<16> raw_FIFO_buf84_lane_739 = raw_FIFO_buf84.extract<11824, 11839>();
  hw_uint<16> raw_FIFO_buf84_lane_740 = raw_FIFO_buf84.extract<11840, 11855>();
  hw_uint<16> raw_FIFO_buf84_lane_741 = raw_FIFO_buf84.extract<11856, 11871>();
  hw_uint<16> raw_FIFO_buf84_lane_742 = raw_FIFO_buf84.extract<11872, 11887>();
  hw_uint<16> raw_FIFO_buf84_lane_743 = raw_FIFO_buf84.extract<11888, 11903>();
  hw_uint<16> raw_FIFO_buf84_lane_744 = raw_FIFO_buf84.extract<11904, 11919>();
  hw_uint<16> raw_FIFO_buf84_lane_745 = raw_FIFO_buf84.extract<11920, 11935>();
  hw_uint<16> raw_FIFO_buf84_lane_746 = raw_FIFO_buf84.extract<11936, 11951>();
  hw_uint<16> raw_FIFO_buf84_lane_747 = raw_FIFO_buf84.extract<11952, 11967>();
  hw_uint<16> raw_FIFO_buf84_lane_748 = raw_FIFO_buf84.extract<11968, 11983>();
  hw_uint<16> raw_FIFO_buf84_lane_749 = raw_FIFO_buf84.extract<11984, 11999>();
  hw_uint<16> raw_FIFO_buf84_lane_750 = raw_FIFO_buf84.extract<12000, 12015>();
  hw_uint<16> raw_FIFO_buf84_lane_751 = raw_FIFO_buf84.extract<12016, 12031>();
  hw_uint<16> raw_FIFO_buf84_lane_752 = raw_FIFO_buf84.extract<12032, 12047>();
  hw_uint<16> raw_FIFO_buf84_lane_753 = raw_FIFO_buf84.extract<12048, 12063>();
  hw_uint<16> raw_FIFO_buf84_lane_754 = raw_FIFO_buf84.extract<12064, 12079>();
  hw_uint<16> raw_FIFO_buf84_lane_755 = raw_FIFO_buf84.extract<12080, 12095>();
  hw_uint<16> raw_FIFO_buf84_lane_756 = raw_FIFO_buf84.extract<12096, 12111>();
  hw_uint<16> raw_FIFO_buf84_lane_757 = raw_FIFO_buf84.extract<12112, 12127>();
  hw_uint<16> raw_FIFO_buf84_lane_758 = raw_FIFO_buf84.extract<12128, 12143>();
  hw_uint<16> raw_FIFO_buf84_lane_759 = raw_FIFO_buf84.extract<12144, 12159>();
  hw_uint<16> raw_FIFO_buf84_lane_760 = raw_FIFO_buf84.extract<12160, 12175>();
  hw_uint<16> raw_FIFO_buf84_lane_761 = raw_FIFO_buf84.extract<12176, 12191>();
  hw_uint<16> raw_FIFO_buf84_lane_762 = raw_FIFO_buf84.extract<12192, 12207>();
  hw_uint<16> raw_FIFO_buf84_lane_763 = raw_FIFO_buf84.extract<12208, 12223>();
  hw_uint<16> raw_FIFO_buf84_lane_764 = raw_FIFO_buf84.extract<12224, 12239>();
  hw_uint<16> raw_FIFO_buf84_lane_765 = raw_FIFO_buf84.extract<12240, 12255>();
  hw_uint<16> raw_FIFO_buf84_lane_766 = raw_FIFO_buf84.extract<12256, 12271>();
  hw_uint<16> raw_FIFO_buf84_lane_767 = raw_FIFO_buf84.extract<12272, 12287>();
  hw_uint<16> raw_FIFO_buf84_lane_768 = raw_FIFO_buf84.extract<12288, 12303>();
  hw_uint<16> raw_FIFO_buf84_lane_769 = raw_FIFO_buf84.extract<12304, 12319>();
  hw_uint<16> raw_FIFO_buf84_lane_770 = raw_FIFO_buf84.extract<12320, 12335>();
  hw_uint<16> raw_FIFO_buf84_lane_771 = raw_FIFO_buf84.extract<12336, 12351>();
  hw_uint<16> raw_FIFO_buf84_lane_772 = raw_FIFO_buf84.extract<12352, 12367>();
  hw_uint<16> raw_FIFO_buf84_lane_773 = raw_FIFO_buf84.extract<12368, 12383>();
  hw_uint<16> raw_FIFO_buf84_lane_774 = raw_FIFO_buf84.extract<12384, 12399>();
  hw_uint<16> raw_FIFO_buf84_lane_775 = raw_FIFO_buf84.extract<12400, 12415>();
  hw_uint<16> raw_FIFO_buf84_lane_776 = raw_FIFO_buf84.extract<12416, 12431>();
  hw_uint<16> raw_FIFO_buf84_lane_777 = raw_FIFO_buf84.extract<12432, 12447>();
  hw_uint<16> raw_FIFO_buf84_lane_778 = raw_FIFO_buf84.extract<12448, 12463>();
  hw_uint<16> raw_FIFO_buf84_lane_779 = raw_FIFO_buf84.extract<12464, 12479>();
  hw_uint<16> raw_FIFO_buf84_lane_780 = raw_FIFO_buf84.extract<12480, 12495>();
  hw_uint<16> raw_FIFO_buf84_lane_781 = raw_FIFO_buf84.extract<12496, 12511>();
  hw_uint<16> raw_FIFO_buf84_lane_782 = raw_FIFO_buf84.extract<12512, 12527>();
  hw_uint<16> raw_FIFO_buf84_lane_783 = raw_FIFO_buf84.extract<12528, 12543>();
  hw_uint<16> raw_FIFO_buf84_lane_784 = raw_FIFO_buf84.extract<12544, 12559>();
  hw_uint<16> raw_FIFO_buf84_lane_785 = raw_FIFO_buf84.extract<12560, 12575>();
  hw_uint<16> raw_FIFO_buf84_lane_786 = raw_FIFO_buf84.extract<12576, 12591>();
  hw_uint<16> raw_FIFO_buf84_lane_787 = raw_FIFO_buf84.extract<12592, 12607>();
  hw_uint<16> raw_FIFO_buf84_lane_788 = raw_FIFO_buf84.extract<12608, 12623>();
  hw_uint<16> raw_FIFO_buf84_lane_789 = raw_FIFO_buf84.extract<12624, 12639>();
  hw_uint<16> raw_FIFO_buf84_lane_790 = raw_FIFO_buf84.extract<12640, 12655>();
  hw_uint<16> raw_FIFO_buf84_lane_791 = raw_FIFO_buf84.extract<12656, 12671>();
  hw_uint<16> raw_FIFO_buf84_lane_792 = raw_FIFO_buf84.extract<12672, 12687>();
  hw_uint<16> raw_FIFO_buf84_lane_793 = raw_FIFO_buf84.extract<12688, 12703>();
  hw_uint<16> raw_FIFO_buf84_lane_794 = raw_FIFO_buf84.extract<12704, 12719>();
  hw_uint<16> raw_FIFO_buf84_lane_795 = raw_FIFO_buf84.extract<12720, 12735>();
  hw_uint<16> raw_FIFO_buf84_lane_796 = raw_FIFO_buf84.extract<12736, 12751>();
  hw_uint<16> raw_FIFO_buf84_lane_797 = raw_FIFO_buf84.extract<12752, 12767>();
  hw_uint<16> raw_FIFO_buf84_lane_798 = raw_FIFO_buf84.extract<12768, 12783>();
  hw_uint<16> raw_FIFO_buf84_lane_799 = raw_FIFO_buf84.extract<12784, 12799>();

	
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
  auto res_denoiseb_update_0_sm98_311271 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_24_pack);

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
  auto res_denoiseb_update_0_sm98_301269 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_49_pack);

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
  auto res_denoiseb_update_0_sm98_291267 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_74_pack);

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
  auto res_denoiseb_update_0_sm98_281265 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_99_pack);

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
  auto res_denoiseb_update_0_sm98_271263 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_124_pack);

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
  auto res_denoiseb_update_0_sm98_261261 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_149_pack);

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
  auto res_denoiseb_update_0_sm98_251259 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_174_pack);

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
  auto res_denoiseb_update_0_sm98_241257 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_199_pack);

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
  auto res_denoiseb_update_0_sm98_231255 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_224_pack);

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
  auto res_denoiseb_update_0_sm98_221253 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_249_pack);

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
  auto res_denoiseb_update_0_sm98_211251 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_274_pack);

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
  auto res_denoiseb_update_0_sm98_201249 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_299_pack);

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
  auto res_denoiseb_update_0_sm98_191247 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_324_pack);

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
  auto res_denoiseb_update_0_sm98_181245 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_349_pack);

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
  auto res_denoiseb_update_0_sm98_171243 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_374_pack);

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
  auto res_denoiseb_update_0_sm98_161241 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_399_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_424_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_400);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_401);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_402);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_403);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_404);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_405);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_406);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_407);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_408);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_409);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_410);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_411);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_412);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_413);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_414);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_415);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_416);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_417);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_418);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_419);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_420);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_421);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_422);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_423);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_424_pack, raw_FIFO_buf84_lane_424);
  auto res_denoiseb_update_0_sm98_151239 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_424_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_449_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_425);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_426);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_427);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_428);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_429);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_430);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_431);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_432);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_433);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_434);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_435);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_436);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_437);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_438);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_439);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_440);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_441);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_442);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_443);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_444);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_445);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_446);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_447);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_448);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_449_pack, raw_FIFO_buf84_lane_449);
  auto res_denoiseb_update_0_sm98_141237 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_449_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_474_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_450);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_451);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_452);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_453);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_454);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_455);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_456);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_457);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_458);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_459);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_460);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_461);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_462);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_463);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_464);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_465);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_466);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_467);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_468);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_469);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_470);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_471);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_472);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_473);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_474_pack, raw_FIFO_buf84_lane_474);
  auto res_denoiseb_update_0_sm98_131235 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_474_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_499_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_475);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_476);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_477);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_478);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_479);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_480);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_481);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_482);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_483);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_484);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_485);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_486);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_487);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_488);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_489);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_490);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_491);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_492);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_493);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_494);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_495);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_496);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_497);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_498);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_499_pack, raw_FIFO_buf84_lane_499);
  auto res_denoiseb_update_0_sm98_121233 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_499_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_524_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_500);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_501);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_502);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_503);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_504);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_505);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_506);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_507);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_508);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_509);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_510);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_511);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_512);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_513);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_514);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_515);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_516);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_517);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_518);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_519);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_520);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_521);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_522);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_523);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_524_pack, raw_FIFO_buf84_lane_524);
  auto res_denoiseb_update_0_sm98_111231 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_524_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_549_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_525);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_526);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_527);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_528);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_529);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_530);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_531);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_532);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_533);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_534);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_535);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_536);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_537);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_538);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_539);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_540);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_541);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_542);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_543);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_544);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_545);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_546);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_547);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_548);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_549_pack, raw_FIFO_buf84_lane_549);
  auto res_denoiseb_update_0_sm98_101229 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_549_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_574_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_550);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_551);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_552);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_553);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_554);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_555);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_556);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_557);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_558);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_559);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_560);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_561);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_562);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_563);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_564);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_565);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_566);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_567);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_568);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_569);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_570);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_571);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_572);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_573);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_574_pack, raw_FIFO_buf84_lane_574);
  auto res_denoiseb_update_0_sm98_91227 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_574_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_599_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_575);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_576);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_577);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_578);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_579);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_580);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_581);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_582);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_583);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_584);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_585);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_586);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_587);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_588);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_589);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_590);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_591);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_592);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_593);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_594);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_595);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_596);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_597);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_598);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_599_pack, raw_FIFO_buf84_lane_599);
  auto res_denoiseb_update_0_sm98_81225 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_599_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_624_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_600);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_601);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_602);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_603);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_604);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_605);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_606);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_607);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_608);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_609);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_610);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_611);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_612);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_613);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_614);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_615);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_616);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_617);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_618);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_619);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_620);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_621);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_622);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_623);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_624_pack, raw_FIFO_buf84_lane_624);
  auto res_denoiseb_update_0_sm98_71223 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_624_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_649_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_625);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_626);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_627);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_628);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_629);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_630);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_631);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_632);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_633);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_634);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_635);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_636);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_637);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_638);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_639);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_640);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_641);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_642);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_643);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_644);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_645);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_646);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_647);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_648);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_649_pack, raw_FIFO_buf84_lane_649);
  auto res_denoiseb_update_0_sm98_61221 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_649_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_674_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_650);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_651);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_652);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_653);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_654);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_655);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_656);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_657);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_658);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_659);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_660);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_661);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_662);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_663);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_664);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_665);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_666);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_667);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_668);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_669);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_670);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_671);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_672);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_673);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_674_pack, raw_FIFO_buf84_lane_674);
  auto res_denoiseb_update_0_sm98_51219 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_674_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_699_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_675);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_676);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_677);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_678);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_679);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_680);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_681);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_682);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_683);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_684);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_685);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_686);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_687);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_688);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_689);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_690);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_691);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_692);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_693);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_694);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_695);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_696);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_697);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_698);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_699_pack, raw_FIFO_buf84_lane_699);
  auto res_denoiseb_update_0_sm98_41217 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_699_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_724_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_700);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_701);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_702);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_703);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_704);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_705);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_706);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_707);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_708);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_709);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_710);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_711);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_712);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_713);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_714);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_715);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_716);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_717);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_718);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_719);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_720);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_721);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_722);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_723);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_724_pack, raw_FIFO_buf84_lane_724);
  auto res_denoiseb_update_0_sm98_31215 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_724_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_749_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_725);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_726);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_727);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_728);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_729);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_730);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_731);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_732);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_733);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_734);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_735);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_736);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_737);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_738);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_739);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_740);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_741);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_742);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_743);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_744);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_745);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_746);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_747);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_748);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_749_pack, raw_FIFO_buf84_lane_749);
  auto res_denoiseb_update_0_sm98_21213 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_749_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_774_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_750);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_751);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_752);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_753);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_754);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_755);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_756);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_757);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_758);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_759);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_760);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_761);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_762);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_763);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_764);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_765);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_766);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_767);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_768);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_769);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_770);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_771);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_772);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_773);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_774_pack, raw_FIFO_buf84_lane_774);
  auto res_denoiseb_update_0_sm98_11211 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_774_pack);

  hw_uint<400 > raw_FIFO_buf84_lane_799_pack;
  set_at<0, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_775);
  set_at<16, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_776);
  set_at<32, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_777);
  set_at<48, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_778);
  set_at<64, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_779);
  set_at<80, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_780);
  set_at<96, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_781);
  set_at<112, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_782);
  set_at<128, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_783);
  set_at<144, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_784);
  set_at<160, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_785);
  set_at<176, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_786);
  set_at<192, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_787);
  set_at<208, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_788);
  set_at<224, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_789);
  set_at<240, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_790);
  set_at<256, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_791);
  set_at<272, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_792);
  set_at<288, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_793);
  set_at<304, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_794);
  set_at<320, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_795);
  set_at<336, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_796);
  set_at<352, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_797);
  set_at<368, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_798);
  set_at<384, 400, 16>(raw_FIFO_buf84_lane_799_pack, raw_FIFO_buf84_lane_799);
  auto res_denoiseb_update_0_sm98_01209 = denoiseb_generated_compute_unrolled_1(raw_FIFO_buf84_lane_799_pack);
  hw_uint<512 > return_value2257;
  set_at<0, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_311271);
  set_at<16, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_301269);
  set_at<32, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_291267);
  set_at<48, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_281265);
  set_at<64, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_271263);
  set_at<80, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_261261);
  set_at<96, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_251259);
  set_at<112, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_241257);
  set_at<128, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_231255);
  set_at<144, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_221253);
  set_at<160, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_211251);
  set_at<176, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_201249);
  set_at<192, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_191247);
  set_at<208, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_181245);
  set_at<224, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_171243);
  set_at<240, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_161241);
  set_at<256, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_151239);
  set_at<272, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_141237);
  set_at<288, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_131235);
  set_at<304, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_121233);
  set_at<320, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_111231);
  set_at<336, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_101229);
  set_at<352, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_91227);
  set_at<368, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_81225);
  set_at<384, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_71223);
  set_at<400, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_61221);
  set_at<416, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_51219);
  set_at<432, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_41217);
  set_at<448, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_31215);
  set_at<464, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_21213);
  set_at<480, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_11211);
  set_at<496, 512, 16>(return_value2257, res_denoiseb_update_0_sm98_01209);
  return return_value2257;

}

hw_uint<512> denoise_1_cu2259(hw_uint<16*32>& denoiseb_FIFO_buf80) {
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
  hw_uint<16> denoiseb_FIFO_buf80_lane_16 = denoiseb_FIFO_buf80.extract<256, 271>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_17 = denoiseb_FIFO_buf80.extract<272, 287>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_18 = denoiseb_FIFO_buf80.extract<288, 303>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_19 = denoiseb_FIFO_buf80.extract<304, 319>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_20 = denoiseb_FIFO_buf80.extract<320, 335>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_21 = denoiseb_FIFO_buf80.extract<336, 351>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_22 = denoiseb_FIFO_buf80.extract<352, 367>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_23 = denoiseb_FIFO_buf80.extract<368, 383>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_24 = denoiseb_FIFO_buf80.extract<384, 399>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_25 = denoiseb_FIFO_buf80.extract<400, 415>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_26 = denoiseb_FIFO_buf80.extract<416, 431>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_27 = denoiseb_FIFO_buf80.extract<432, 447>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_28 = denoiseb_FIFO_buf80.extract<448, 463>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_29 = denoiseb_FIFO_buf80.extract<464, 479>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_30 = denoiseb_FIFO_buf80.extract<480, 495>();
  hw_uint<16> denoiseb_FIFO_buf80_lane_31 = denoiseb_FIFO_buf80.extract<496, 511>();

	
  hw_uint<16 > denoiseb_FIFO_buf80_lane_0_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_0_pack, denoiseb_FIFO_buf80_lane_0);
  auto res_denoise_update_0_sm99_311143 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_0_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_1_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_1_pack, denoiseb_FIFO_buf80_lane_1);
  auto res_denoise_update_0_sm99_301141 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_1_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_2_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_2_pack, denoiseb_FIFO_buf80_lane_2);
  auto res_denoise_update_0_sm99_291139 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_2_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_3_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_3_pack, denoiseb_FIFO_buf80_lane_3);
  auto res_denoise_update_0_sm99_281137 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_3_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_4_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_4_pack, denoiseb_FIFO_buf80_lane_4);
  auto res_denoise_update_0_sm99_271135 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_4_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_5_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_5_pack, denoiseb_FIFO_buf80_lane_5);
  auto res_denoise_update_0_sm99_261133 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_5_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_6_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_6_pack, denoiseb_FIFO_buf80_lane_6);
  auto res_denoise_update_0_sm99_251131 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_6_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_7_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_7_pack, denoiseb_FIFO_buf80_lane_7);
  auto res_denoise_update_0_sm99_241129 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_7_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_8_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_8_pack, denoiseb_FIFO_buf80_lane_8);
  auto res_denoise_update_0_sm99_231127 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_8_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_9_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_9_pack, denoiseb_FIFO_buf80_lane_9);
  auto res_denoise_update_0_sm99_221125 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_9_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_10_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_10_pack, denoiseb_FIFO_buf80_lane_10);
  auto res_denoise_update_0_sm99_211123 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_10_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_11_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_11_pack, denoiseb_FIFO_buf80_lane_11);
  auto res_denoise_update_0_sm99_201121 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_11_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_12_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_12_pack, denoiseb_FIFO_buf80_lane_12);
  auto res_denoise_update_0_sm99_191119 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_12_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_13_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_13_pack, denoiseb_FIFO_buf80_lane_13);
  auto res_denoise_update_0_sm99_181117 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_13_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_14_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_14_pack, denoiseb_FIFO_buf80_lane_14);
  auto res_denoise_update_0_sm99_171115 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_14_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_15_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_15_pack, denoiseb_FIFO_buf80_lane_15);
  auto res_denoise_update_0_sm99_161113 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_15_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_16_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_16_pack, denoiseb_FIFO_buf80_lane_16);
  auto res_denoise_update_0_sm99_151111 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_16_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_17_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_17_pack, denoiseb_FIFO_buf80_lane_17);
  auto res_denoise_update_0_sm99_141109 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_17_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_18_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_18_pack, denoiseb_FIFO_buf80_lane_18);
  auto res_denoise_update_0_sm99_131107 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_18_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_19_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_19_pack, denoiseb_FIFO_buf80_lane_19);
  auto res_denoise_update_0_sm99_121105 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_19_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_20_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_20_pack, denoiseb_FIFO_buf80_lane_20);
  auto res_denoise_update_0_sm99_111103 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_20_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_21_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_21_pack, denoiseb_FIFO_buf80_lane_21);
  auto res_denoise_update_0_sm99_101101 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_21_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_22_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_22_pack, denoiseb_FIFO_buf80_lane_22);
  auto res_denoise_update_0_sm99_91099 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_22_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_23_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_23_pack, denoiseb_FIFO_buf80_lane_23);
  auto res_denoise_update_0_sm99_81097 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_23_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_24_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_24_pack, denoiseb_FIFO_buf80_lane_24);
  auto res_denoise_update_0_sm99_71095 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_24_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_25_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_25_pack, denoiseb_FIFO_buf80_lane_25);
  auto res_denoise_update_0_sm99_61093 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_25_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_26_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_26_pack, denoiseb_FIFO_buf80_lane_26);
  auto res_denoise_update_0_sm99_51091 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_26_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_27_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_27_pack, denoiseb_FIFO_buf80_lane_27);
  auto res_denoise_update_0_sm99_41089 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_27_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_28_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_28_pack, denoiseb_FIFO_buf80_lane_28);
  auto res_denoise_update_0_sm99_31087 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_28_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_29_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_29_pack, denoiseb_FIFO_buf80_lane_29);
  auto res_denoise_update_0_sm99_21085 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_29_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_30_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_30_pack, denoiseb_FIFO_buf80_lane_30);
  auto res_denoise_update_0_sm99_11083 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_30_pack);

  hw_uint<16 > denoiseb_FIFO_buf80_lane_31_pack;
  set_at<0, 16, 16>(denoiseb_FIFO_buf80_lane_31_pack, denoiseb_FIFO_buf80_lane_31);
  auto res_denoise_update_0_sm99_01081 = denoise_generated_compute_unrolled_1(denoiseb_FIFO_buf80_lane_31_pack);
  hw_uint<512 > return_value2260;
  set_at<0, 512, 16>(return_value2260, res_denoise_update_0_sm99_311143);
  set_at<16, 512, 16>(return_value2260, res_denoise_update_0_sm99_301141);
  set_at<32, 512, 16>(return_value2260, res_denoise_update_0_sm99_291139);
  set_at<48, 512, 16>(return_value2260, res_denoise_update_0_sm99_281137);
  set_at<64, 512, 16>(return_value2260, res_denoise_update_0_sm99_271135);
  set_at<80, 512, 16>(return_value2260, res_denoise_update_0_sm99_261133);
  set_at<96, 512, 16>(return_value2260, res_denoise_update_0_sm99_251131);
  set_at<112, 512, 16>(return_value2260, res_denoise_update_0_sm99_241129);
  set_at<128, 512, 16>(return_value2260, res_denoise_update_0_sm99_231127);
  set_at<144, 512, 16>(return_value2260, res_denoise_update_0_sm99_221125);
  set_at<160, 512, 16>(return_value2260, res_denoise_update_0_sm99_211123);
  set_at<176, 512, 16>(return_value2260, res_denoise_update_0_sm99_201121);
  set_at<192, 512, 16>(return_value2260, res_denoise_update_0_sm99_191119);
  set_at<208, 512, 16>(return_value2260, res_denoise_update_0_sm99_181117);
  set_at<224, 512, 16>(return_value2260, res_denoise_update_0_sm99_171115);
  set_at<240, 512, 16>(return_value2260, res_denoise_update_0_sm99_161113);
  set_at<256, 512, 16>(return_value2260, res_denoise_update_0_sm99_151111);
  set_at<272, 512, 16>(return_value2260, res_denoise_update_0_sm99_141109);
  set_at<288, 512, 16>(return_value2260, res_denoise_update_0_sm99_131107);
  set_at<304, 512, 16>(return_value2260, res_denoise_update_0_sm99_121105);
  set_at<320, 512, 16>(return_value2260, res_denoise_update_0_sm99_111103);
  set_at<336, 512, 16>(return_value2260, res_denoise_update_0_sm99_101101);
  set_at<352, 512, 16>(return_value2260, res_denoise_update_0_sm99_91099);
  set_at<368, 512, 16>(return_value2260, res_denoise_update_0_sm99_81097);
  set_at<384, 512, 16>(return_value2260, res_denoise_update_0_sm99_71095);
  set_at<400, 512, 16>(return_value2260, res_denoise_update_0_sm99_61093);
  set_at<416, 512, 16>(return_value2260, res_denoise_update_0_sm99_51091);
  set_at<432, 512, 16>(return_value2260, res_denoise_update_0_sm99_41089);
  set_at<448, 512, 16>(return_value2260, res_denoise_update_0_sm99_31087);
  set_at<464, 512, 16>(return_value2260, res_denoise_update_0_sm99_21085);
  set_at<480, 512, 16>(return_value2260, res_denoise_update_0_sm99_11083);
  set_at<496, 512, 16>(return_value2260, res_denoise_update_0_sm99_01081);
  return return_value2260;

}

hw_uint<512> raw_1_cu2262(hw_uint<16*32>& raw_oc) {
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
  hw_uint<16> raw_oc_lane_16 = raw_oc.extract<256, 271>();
  hw_uint<16> raw_oc_lane_17 = raw_oc.extract<272, 287>();
  hw_uint<16> raw_oc_lane_18 = raw_oc.extract<288, 303>();
  hw_uint<16> raw_oc_lane_19 = raw_oc.extract<304, 319>();
  hw_uint<16> raw_oc_lane_20 = raw_oc.extract<320, 335>();
  hw_uint<16> raw_oc_lane_21 = raw_oc.extract<336, 351>();
  hw_uint<16> raw_oc_lane_22 = raw_oc.extract<352, 367>();
  hw_uint<16> raw_oc_lane_23 = raw_oc.extract<368, 383>();
  hw_uint<16> raw_oc_lane_24 = raw_oc.extract<384, 399>();
  hw_uint<16> raw_oc_lane_25 = raw_oc.extract<400, 415>();
  hw_uint<16> raw_oc_lane_26 = raw_oc.extract<416, 431>();
  hw_uint<16> raw_oc_lane_27 = raw_oc.extract<432, 447>();
  hw_uint<16> raw_oc_lane_28 = raw_oc.extract<448, 463>();
  hw_uint<16> raw_oc_lane_29 = raw_oc.extract<464, 479>();
  hw_uint<16> raw_oc_lane_30 = raw_oc.extract<480, 495>();
  hw_uint<16> raw_oc_lane_31 = raw_oc.extract<496, 511>();

	
  hw_uint<16 > raw_oc_lane_0_pack;
  set_at<0, 16, 16>(raw_oc_lane_0_pack, raw_oc_lane_0);
  auto res_raw_update_0_sm100_311079 = raw_generated_compute_unrolled_1(raw_oc_lane_0_pack);

  hw_uint<16 > raw_oc_lane_1_pack;
  set_at<0, 16, 16>(raw_oc_lane_1_pack, raw_oc_lane_1);
  auto res_raw_update_0_sm100_301077 = raw_generated_compute_unrolled_1(raw_oc_lane_1_pack);

  hw_uint<16 > raw_oc_lane_2_pack;
  set_at<0, 16, 16>(raw_oc_lane_2_pack, raw_oc_lane_2);
  auto res_raw_update_0_sm100_291075 = raw_generated_compute_unrolled_1(raw_oc_lane_2_pack);

  hw_uint<16 > raw_oc_lane_3_pack;
  set_at<0, 16, 16>(raw_oc_lane_3_pack, raw_oc_lane_3);
  auto res_raw_update_0_sm100_281073 = raw_generated_compute_unrolled_1(raw_oc_lane_3_pack);

  hw_uint<16 > raw_oc_lane_4_pack;
  set_at<0, 16, 16>(raw_oc_lane_4_pack, raw_oc_lane_4);
  auto res_raw_update_0_sm100_271071 = raw_generated_compute_unrolled_1(raw_oc_lane_4_pack);

  hw_uint<16 > raw_oc_lane_5_pack;
  set_at<0, 16, 16>(raw_oc_lane_5_pack, raw_oc_lane_5);
  auto res_raw_update_0_sm100_261069 = raw_generated_compute_unrolled_1(raw_oc_lane_5_pack);

  hw_uint<16 > raw_oc_lane_6_pack;
  set_at<0, 16, 16>(raw_oc_lane_6_pack, raw_oc_lane_6);
  auto res_raw_update_0_sm100_251067 = raw_generated_compute_unrolled_1(raw_oc_lane_6_pack);

  hw_uint<16 > raw_oc_lane_7_pack;
  set_at<0, 16, 16>(raw_oc_lane_7_pack, raw_oc_lane_7);
  auto res_raw_update_0_sm100_241065 = raw_generated_compute_unrolled_1(raw_oc_lane_7_pack);

  hw_uint<16 > raw_oc_lane_8_pack;
  set_at<0, 16, 16>(raw_oc_lane_8_pack, raw_oc_lane_8);
  auto res_raw_update_0_sm100_231063 = raw_generated_compute_unrolled_1(raw_oc_lane_8_pack);

  hw_uint<16 > raw_oc_lane_9_pack;
  set_at<0, 16, 16>(raw_oc_lane_9_pack, raw_oc_lane_9);
  auto res_raw_update_0_sm100_221061 = raw_generated_compute_unrolled_1(raw_oc_lane_9_pack);

  hw_uint<16 > raw_oc_lane_10_pack;
  set_at<0, 16, 16>(raw_oc_lane_10_pack, raw_oc_lane_10);
  auto res_raw_update_0_sm100_211059 = raw_generated_compute_unrolled_1(raw_oc_lane_10_pack);

  hw_uint<16 > raw_oc_lane_11_pack;
  set_at<0, 16, 16>(raw_oc_lane_11_pack, raw_oc_lane_11);
  auto res_raw_update_0_sm100_201057 = raw_generated_compute_unrolled_1(raw_oc_lane_11_pack);

  hw_uint<16 > raw_oc_lane_12_pack;
  set_at<0, 16, 16>(raw_oc_lane_12_pack, raw_oc_lane_12);
  auto res_raw_update_0_sm100_191055 = raw_generated_compute_unrolled_1(raw_oc_lane_12_pack);

  hw_uint<16 > raw_oc_lane_13_pack;
  set_at<0, 16, 16>(raw_oc_lane_13_pack, raw_oc_lane_13);
  auto res_raw_update_0_sm100_181053 = raw_generated_compute_unrolled_1(raw_oc_lane_13_pack);

  hw_uint<16 > raw_oc_lane_14_pack;
  set_at<0, 16, 16>(raw_oc_lane_14_pack, raw_oc_lane_14);
  auto res_raw_update_0_sm100_171051 = raw_generated_compute_unrolled_1(raw_oc_lane_14_pack);

  hw_uint<16 > raw_oc_lane_15_pack;
  set_at<0, 16, 16>(raw_oc_lane_15_pack, raw_oc_lane_15);
  auto res_raw_update_0_sm100_161049 = raw_generated_compute_unrolled_1(raw_oc_lane_15_pack);

  hw_uint<16 > raw_oc_lane_16_pack;
  set_at<0, 16, 16>(raw_oc_lane_16_pack, raw_oc_lane_16);
  auto res_raw_update_0_sm100_151047 = raw_generated_compute_unrolled_1(raw_oc_lane_16_pack);

  hw_uint<16 > raw_oc_lane_17_pack;
  set_at<0, 16, 16>(raw_oc_lane_17_pack, raw_oc_lane_17);
  auto res_raw_update_0_sm100_141045 = raw_generated_compute_unrolled_1(raw_oc_lane_17_pack);

  hw_uint<16 > raw_oc_lane_18_pack;
  set_at<0, 16, 16>(raw_oc_lane_18_pack, raw_oc_lane_18);
  auto res_raw_update_0_sm100_131043 = raw_generated_compute_unrolled_1(raw_oc_lane_18_pack);

  hw_uint<16 > raw_oc_lane_19_pack;
  set_at<0, 16, 16>(raw_oc_lane_19_pack, raw_oc_lane_19);
  auto res_raw_update_0_sm100_121041 = raw_generated_compute_unrolled_1(raw_oc_lane_19_pack);

  hw_uint<16 > raw_oc_lane_20_pack;
  set_at<0, 16, 16>(raw_oc_lane_20_pack, raw_oc_lane_20);
  auto res_raw_update_0_sm100_111039 = raw_generated_compute_unrolled_1(raw_oc_lane_20_pack);

  hw_uint<16 > raw_oc_lane_21_pack;
  set_at<0, 16, 16>(raw_oc_lane_21_pack, raw_oc_lane_21);
  auto res_raw_update_0_sm100_101037 = raw_generated_compute_unrolled_1(raw_oc_lane_21_pack);

  hw_uint<16 > raw_oc_lane_22_pack;
  set_at<0, 16, 16>(raw_oc_lane_22_pack, raw_oc_lane_22);
  auto res_raw_update_0_sm100_91035 = raw_generated_compute_unrolled_1(raw_oc_lane_22_pack);

  hw_uint<16 > raw_oc_lane_23_pack;
  set_at<0, 16, 16>(raw_oc_lane_23_pack, raw_oc_lane_23);
  auto res_raw_update_0_sm100_81033 = raw_generated_compute_unrolled_1(raw_oc_lane_23_pack);

  hw_uint<16 > raw_oc_lane_24_pack;
  set_at<0, 16, 16>(raw_oc_lane_24_pack, raw_oc_lane_24);
  auto res_raw_update_0_sm100_71031 = raw_generated_compute_unrolled_1(raw_oc_lane_24_pack);

  hw_uint<16 > raw_oc_lane_25_pack;
  set_at<0, 16, 16>(raw_oc_lane_25_pack, raw_oc_lane_25);
  auto res_raw_update_0_sm100_61029 = raw_generated_compute_unrolled_1(raw_oc_lane_25_pack);

  hw_uint<16 > raw_oc_lane_26_pack;
  set_at<0, 16, 16>(raw_oc_lane_26_pack, raw_oc_lane_26);
  auto res_raw_update_0_sm100_51027 = raw_generated_compute_unrolled_1(raw_oc_lane_26_pack);

  hw_uint<16 > raw_oc_lane_27_pack;
  set_at<0, 16, 16>(raw_oc_lane_27_pack, raw_oc_lane_27);
  auto res_raw_update_0_sm100_41025 = raw_generated_compute_unrolled_1(raw_oc_lane_27_pack);

  hw_uint<16 > raw_oc_lane_28_pack;
  set_at<0, 16, 16>(raw_oc_lane_28_pack, raw_oc_lane_28);
  auto res_raw_update_0_sm100_31023 = raw_generated_compute_unrolled_1(raw_oc_lane_28_pack);

  hw_uint<16 > raw_oc_lane_29_pack;
  set_at<0, 16, 16>(raw_oc_lane_29_pack, raw_oc_lane_29);
  auto res_raw_update_0_sm100_21021 = raw_generated_compute_unrolled_1(raw_oc_lane_29_pack);

  hw_uint<16 > raw_oc_lane_30_pack;
  set_at<0, 16, 16>(raw_oc_lane_30_pack, raw_oc_lane_30);
  auto res_raw_update_0_sm100_11019 = raw_generated_compute_unrolled_1(raw_oc_lane_30_pack);

  hw_uint<16 > raw_oc_lane_31_pack;
  set_at<0, 16, 16>(raw_oc_lane_31_pack, raw_oc_lane_31);
  auto res_raw_update_0_sm100_01017 = raw_generated_compute_unrolled_1(raw_oc_lane_31_pack);
  hw_uint<512 > return_value2263;
  set_at<0, 512, 16>(return_value2263, res_raw_update_0_sm100_311079);
  set_at<16, 512, 16>(return_value2263, res_raw_update_0_sm100_301077);
  set_at<32, 512, 16>(return_value2263, res_raw_update_0_sm100_291075);
  set_at<48, 512, 16>(return_value2263, res_raw_update_0_sm100_281073);
  set_at<64, 512, 16>(return_value2263, res_raw_update_0_sm100_271071);
  set_at<80, 512, 16>(return_value2263, res_raw_update_0_sm100_261069);
  set_at<96, 512, 16>(return_value2263, res_raw_update_0_sm100_251067);
  set_at<112, 512, 16>(return_value2263, res_raw_update_0_sm100_241065);
  set_at<128, 512, 16>(return_value2263, res_raw_update_0_sm100_231063);
  set_at<144, 512, 16>(return_value2263, res_raw_update_0_sm100_221061);
  set_at<160, 512, 16>(return_value2263, res_raw_update_0_sm100_211059);
  set_at<176, 512, 16>(return_value2263, res_raw_update_0_sm100_201057);
  set_at<192, 512, 16>(return_value2263, res_raw_update_0_sm100_191055);
  set_at<208, 512, 16>(return_value2263, res_raw_update_0_sm100_181053);
  set_at<224, 512, 16>(return_value2263, res_raw_update_0_sm100_171051);
  set_at<240, 512, 16>(return_value2263, res_raw_update_0_sm100_161049);
  set_at<256, 512, 16>(return_value2263, res_raw_update_0_sm100_151047);
  set_at<272, 512, 16>(return_value2263, res_raw_update_0_sm100_141045);
  set_at<288, 512, 16>(return_value2263, res_raw_update_0_sm100_131043);
  set_at<304, 512, 16>(return_value2263, res_raw_update_0_sm100_121041);
  set_at<320, 512, 16>(return_value2263, res_raw_update_0_sm100_111039);
  set_at<336, 512, 16>(return_value2263, res_raw_update_0_sm100_101037);
  set_at<352, 512, 16>(return_value2263, res_raw_update_0_sm100_91035);
  set_at<368, 512, 16>(return_value2263, res_raw_update_0_sm100_81033);
  set_at<384, 512, 16>(return_value2263, res_raw_update_0_sm100_71031);
  set_at<400, 512, 16>(return_value2263, res_raw_update_0_sm100_61029);
  set_at<416, 512, 16>(return_value2263, res_raw_update_0_sm100_51027);
  set_at<432, 512, 16>(return_value2263, res_raw_update_0_sm100_41025);
  set_at<448, 512, 16>(return_value2263, res_raw_update_0_sm100_31023);
  set_at<464, 512, 16>(return_value2263, res_raw_update_0_sm100_21021);
  set_at<480, 512, 16>(return_value2263, res_raw_update_0_sm100_11019);
  set_at<496, 512, 16>(return_value2263, res_raw_update_0_sm100_01017);
  return return_value2263;

}

hw_uint<512> denoise_ld33_cu2265(hw_uint<16*32>& denoise) {
  return denoise;
}

hw_uint<512> demosaic_bx_to_gp_58_ld53_cu2267(hw_uint<16*32>& demosaic_bx_to_gp_58) {
  return demosaic_bx_to_gp_58;
}

hw_uint<512> denoiseb_ld37_cu2269(hw_uint<16*32>& denoiseb) {
  return denoiseb;
}

hw_uint<512> demosaicb_ld29_cu2271(hw_uint<16*32>& demosaicb) {
  return demosaicb;
}

hw_uint<512> raw_ld41_cu2273(hw_uint<16*32>& raw) {
  return raw;
}

hw_uint<512> demosaic_bxb_to_gp_212_ld57_cu2275(hw_uint<16*32>& demosaic_bxb_to_gp_212) {
  return demosaic_bxb_to_gp_212;
}

hw_uint<512> denoiseb_to_gp_836_ld81_cu2277(hw_uint<16*32>& denoiseb_to_gp_836) {
  return denoiseb_to_gp_836;
}

hw_uint<512> raw_to_gp_940_ld85_cu2279(hw_uint<16*32>& raw_to_gp_940) {
  return raw_to_gp_940;
}

hw_uint<512> demosaic_diff_ld25_cu2281(hw_uint<16*32>& demosaic_diff) {
  return demosaic_diff;
}

hw_uint<512> demosaic_to_gp_30_ld45_cu2283(hw_uint<16*32>& demosaic_to_gp_30) {
  return demosaic_to_gp_30;
}

hw_uint<512> demosaic_diff_to_gp_024_ld69_cu2285(hw_uint<16*32>& demosaic_diff_to_gp_024) {
  return demosaic_diff_to_gp_024;
}

hw_uint<512> demosaic_bxb_ld13_cu2287(hw_uint<16*32>& demosaic_bxb) {
  return demosaic_bxb;
}

hw_uint<512> demosaic_by_1_cu2289(hw_uint<16*32>& demosaic_byb_FIFO_buf64) {
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
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_16 = demosaic_byb_FIFO_buf64.extract<256, 271>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_17 = demosaic_byb_FIFO_buf64.extract<272, 287>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_18 = demosaic_byb_FIFO_buf64.extract<288, 303>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_19 = demosaic_byb_FIFO_buf64.extract<304, 319>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_20 = demosaic_byb_FIFO_buf64.extract<320, 335>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_21 = demosaic_byb_FIFO_buf64.extract<336, 351>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_22 = demosaic_byb_FIFO_buf64.extract<352, 367>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_23 = demosaic_byb_FIFO_buf64.extract<368, 383>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_24 = demosaic_byb_FIFO_buf64.extract<384, 399>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_25 = demosaic_byb_FIFO_buf64.extract<400, 415>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_26 = demosaic_byb_FIFO_buf64.extract<416, 431>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_27 = demosaic_byb_FIFO_buf64.extract<432, 447>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_28 = demosaic_byb_FIFO_buf64.extract<448, 463>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_29 = demosaic_byb_FIFO_buf64.extract<464, 479>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_30 = demosaic_byb_FIFO_buf64.extract<480, 495>();
  hw_uint<16> demosaic_byb_FIFO_buf64_lane_31 = demosaic_byb_FIFO_buf64.extract<496, 511>();

	
  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_0_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_0_pack, demosaic_byb_FIFO_buf64_lane_0);
  auto res_demosaic_by_update_0_sm113_311975 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_0_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_1_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_1_pack, demosaic_byb_FIFO_buf64_lane_1);
  auto res_demosaic_by_update_0_sm113_301973 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_1_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_2_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_2_pack, demosaic_byb_FIFO_buf64_lane_2);
  auto res_demosaic_by_update_0_sm113_291971 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_2_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_3_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_3_pack, demosaic_byb_FIFO_buf64_lane_3);
  auto res_demosaic_by_update_0_sm113_281969 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_3_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_4_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_4_pack, demosaic_byb_FIFO_buf64_lane_4);
  auto res_demosaic_by_update_0_sm113_271967 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_4_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_5_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_5_pack, demosaic_byb_FIFO_buf64_lane_5);
  auto res_demosaic_by_update_0_sm113_261965 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_5_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_6_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_6_pack, demosaic_byb_FIFO_buf64_lane_6);
  auto res_demosaic_by_update_0_sm113_251963 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_6_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_7_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_7_pack, demosaic_byb_FIFO_buf64_lane_7);
  auto res_demosaic_by_update_0_sm113_241961 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_7_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_8_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_8_pack, demosaic_byb_FIFO_buf64_lane_8);
  auto res_demosaic_by_update_0_sm113_231959 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_8_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_9_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_9_pack, demosaic_byb_FIFO_buf64_lane_9);
  auto res_demosaic_by_update_0_sm113_221957 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_9_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_10_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_10_pack, demosaic_byb_FIFO_buf64_lane_10);
  auto res_demosaic_by_update_0_sm113_211955 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_10_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_11_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_11_pack, demosaic_byb_FIFO_buf64_lane_11);
  auto res_demosaic_by_update_0_sm113_201953 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_11_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_12_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_12_pack, demosaic_byb_FIFO_buf64_lane_12);
  auto res_demosaic_by_update_0_sm113_191951 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_12_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_13_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_13_pack, demosaic_byb_FIFO_buf64_lane_13);
  auto res_demosaic_by_update_0_sm113_181949 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_13_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_14_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_14_pack, demosaic_byb_FIFO_buf64_lane_14);
  auto res_demosaic_by_update_0_sm113_171947 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_14_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_15_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_15_pack, demosaic_byb_FIFO_buf64_lane_15);
  auto res_demosaic_by_update_0_sm113_161945 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_15_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_16_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_16_pack, demosaic_byb_FIFO_buf64_lane_16);
  auto res_demosaic_by_update_0_sm113_151943 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_16_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_17_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_17_pack, demosaic_byb_FIFO_buf64_lane_17);
  auto res_demosaic_by_update_0_sm113_141941 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_17_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_18_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_18_pack, demosaic_byb_FIFO_buf64_lane_18);
  auto res_demosaic_by_update_0_sm113_131939 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_18_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_19_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_19_pack, demosaic_byb_FIFO_buf64_lane_19);
  auto res_demosaic_by_update_0_sm113_121937 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_19_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_20_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_20_pack, demosaic_byb_FIFO_buf64_lane_20);
  auto res_demosaic_by_update_0_sm113_111935 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_20_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_21_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_21_pack, demosaic_byb_FIFO_buf64_lane_21);
  auto res_demosaic_by_update_0_sm113_101933 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_21_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_22_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_22_pack, demosaic_byb_FIFO_buf64_lane_22);
  auto res_demosaic_by_update_0_sm113_91931 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_22_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_23_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_23_pack, demosaic_byb_FIFO_buf64_lane_23);
  auto res_demosaic_by_update_0_sm113_81929 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_23_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_24_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_24_pack, demosaic_byb_FIFO_buf64_lane_24);
  auto res_demosaic_by_update_0_sm113_71927 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_24_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_25_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_25_pack, demosaic_byb_FIFO_buf64_lane_25);
  auto res_demosaic_by_update_0_sm113_61925 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_25_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_26_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_26_pack, demosaic_byb_FIFO_buf64_lane_26);
  auto res_demosaic_by_update_0_sm113_51923 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_26_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_27_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_27_pack, demosaic_byb_FIFO_buf64_lane_27);
  auto res_demosaic_by_update_0_sm113_41921 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_27_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_28_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_28_pack, demosaic_byb_FIFO_buf64_lane_28);
  auto res_demosaic_by_update_0_sm113_31919 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_28_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_29_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_29_pack, demosaic_byb_FIFO_buf64_lane_29);
  auto res_demosaic_by_update_0_sm113_21917 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_29_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_30_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_30_pack, demosaic_byb_FIFO_buf64_lane_30);
  auto res_demosaic_by_update_0_sm113_11915 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_30_pack);

  hw_uint<16 > demosaic_byb_FIFO_buf64_lane_31_pack;
  set_at<0, 16, 16>(demosaic_byb_FIFO_buf64_lane_31_pack, demosaic_byb_FIFO_buf64_lane_31);
  auto res_demosaic_by_update_0_sm113_01913 = demosaic_by_generated_compute_unrolled_1(demosaic_byb_FIFO_buf64_lane_31_pack);
  hw_uint<512 > return_value2290;
  set_at<0, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_311975);
  set_at<16, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_301973);
  set_at<32, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_291971);
  set_at<48, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_281969);
  set_at<64, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_271967);
  set_at<80, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_261965);
  set_at<96, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_251963);
  set_at<112, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_241961);
  set_at<128, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_231959);
  set_at<144, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_221957);
  set_at<160, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_211955);
  set_at<176, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_201953);
  set_at<192, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_191951);
  set_at<208, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_181949);
  set_at<224, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_171947);
  set_at<240, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_161945);
  set_at<256, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_151943);
  set_at<272, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_141941);
  set_at<288, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_131939);
  set_at<304, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_121937);
  set_at<320, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_111935);
  set_at<336, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_101933);
  set_at<352, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_91931);
  set_at<368, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_81929);
  set_at<384, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_71927);
  set_at<400, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_61925);
  set_at<416, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_51923);
  set_at<432, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_41921);
  set_at<448, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_31919);
  set_at<464, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_21917);
  set_at<480, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_11915);
  set_at<496, 512, 16>(return_value2290, res_demosaic_by_update_0_sm113_01913);
  return return_value2290;

}

hw_uint<512> demosaic_bx_1_cu2292(hw_uint<16*32>& demosaic_bxb_FIFO_buf56) {
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
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_16 = demosaic_bxb_FIFO_buf56.extract<256, 271>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_17 = demosaic_bxb_FIFO_buf56.extract<272, 287>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_18 = demosaic_bxb_FIFO_buf56.extract<288, 303>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_19 = demosaic_bxb_FIFO_buf56.extract<304, 319>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_20 = demosaic_bxb_FIFO_buf56.extract<320, 335>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_21 = demosaic_bxb_FIFO_buf56.extract<336, 351>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_22 = demosaic_bxb_FIFO_buf56.extract<352, 367>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_23 = demosaic_bxb_FIFO_buf56.extract<368, 383>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_24 = demosaic_bxb_FIFO_buf56.extract<384, 399>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_25 = demosaic_bxb_FIFO_buf56.extract<400, 415>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_26 = demosaic_bxb_FIFO_buf56.extract<416, 431>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_27 = demosaic_bxb_FIFO_buf56.extract<432, 447>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_28 = demosaic_bxb_FIFO_buf56.extract<448, 463>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_29 = demosaic_bxb_FIFO_buf56.extract<464, 479>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_30 = demosaic_bxb_FIFO_buf56.extract<480, 495>();
  hw_uint<16> demosaic_bxb_FIFO_buf56_lane_31 = demosaic_bxb_FIFO_buf56.extract<496, 511>();

	
  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_0_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_0_pack, demosaic_bxb_FIFO_buf56_lane_0);
  auto res_demosaic_bx_update_0_sm114_311719 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_0_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_1_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_1_pack, demosaic_bxb_FIFO_buf56_lane_1);
  auto res_demosaic_bx_update_0_sm114_301717 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_1_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_2_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_2_pack, demosaic_bxb_FIFO_buf56_lane_2);
  auto res_demosaic_bx_update_0_sm114_291715 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_2_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_3_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_3_pack, demosaic_bxb_FIFO_buf56_lane_3);
  auto res_demosaic_bx_update_0_sm114_281713 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_3_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_4_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_4_pack, demosaic_bxb_FIFO_buf56_lane_4);
  auto res_demosaic_bx_update_0_sm114_271711 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_4_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_5_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_5_pack, demosaic_bxb_FIFO_buf56_lane_5);
  auto res_demosaic_bx_update_0_sm114_261709 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_5_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_6_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_6_pack, demosaic_bxb_FIFO_buf56_lane_6);
  auto res_demosaic_bx_update_0_sm114_251707 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_6_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_7_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_7_pack, demosaic_bxb_FIFO_buf56_lane_7);
  auto res_demosaic_bx_update_0_sm114_241705 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_7_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_8_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_8_pack, demosaic_bxb_FIFO_buf56_lane_8);
  auto res_demosaic_bx_update_0_sm114_231703 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_8_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_9_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_9_pack, demosaic_bxb_FIFO_buf56_lane_9);
  auto res_demosaic_bx_update_0_sm114_221701 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_9_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_10_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_10_pack, demosaic_bxb_FIFO_buf56_lane_10);
  auto res_demosaic_bx_update_0_sm114_211699 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_10_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_11_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_11_pack, demosaic_bxb_FIFO_buf56_lane_11);
  auto res_demosaic_bx_update_0_sm114_201697 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_11_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_12_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_12_pack, demosaic_bxb_FIFO_buf56_lane_12);
  auto res_demosaic_bx_update_0_sm114_191695 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_12_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_13_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_13_pack, demosaic_bxb_FIFO_buf56_lane_13);
  auto res_demosaic_bx_update_0_sm114_181693 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_13_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_14_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_14_pack, demosaic_bxb_FIFO_buf56_lane_14);
  auto res_demosaic_bx_update_0_sm114_171691 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_14_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_15_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_15_pack, demosaic_bxb_FIFO_buf56_lane_15);
  auto res_demosaic_bx_update_0_sm114_161689 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_15_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_16_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_16_pack, demosaic_bxb_FIFO_buf56_lane_16);
  auto res_demosaic_bx_update_0_sm114_151687 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_16_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_17_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_17_pack, demosaic_bxb_FIFO_buf56_lane_17);
  auto res_demosaic_bx_update_0_sm114_141685 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_17_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_18_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_18_pack, demosaic_bxb_FIFO_buf56_lane_18);
  auto res_demosaic_bx_update_0_sm114_131683 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_18_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_19_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_19_pack, demosaic_bxb_FIFO_buf56_lane_19);
  auto res_demosaic_bx_update_0_sm114_121681 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_19_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_20_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_20_pack, demosaic_bxb_FIFO_buf56_lane_20);
  auto res_demosaic_bx_update_0_sm114_111679 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_20_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_21_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_21_pack, demosaic_bxb_FIFO_buf56_lane_21);
  auto res_demosaic_bx_update_0_sm114_101677 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_21_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_22_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_22_pack, demosaic_bxb_FIFO_buf56_lane_22);
  auto res_demosaic_bx_update_0_sm114_91675 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_22_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_23_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_23_pack, demosaic_bxb_FIFO_buf56_lane_23);
  auto res_demosaic_bx_update_0_sm114_81673 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_23_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_24_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_24_pack, demosaic_bxb_FIFO_buf56_lane_24);
  auto res_demosaic_bx_update_0_sm114_71671 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_24_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_25_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_25_pack, demosaic_bxb_FIFO_buf56_lane_25);
  auto res_demosaic_bx_update_0_sm114_61669 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_25_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_26_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_26_pack, demosaic_bxb_FIFO_buf56_lane_26);
  auto res_demosaic_bx_update_0_sm114_51667 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_26_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_27_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_27_pack, demosaic_bxb_FIFO_buf56_lane_27);
  auto res_demosaic_bx_update_0_sm114_41665 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_27_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_28_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_28_pack, demosaic_bxb_FIFO_buf56_lane_28);
  auto res_demosaic_bx_update_0_sm114_31663 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_28_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_29_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_29_pack, demosaic_bxb_FIFO_buf56_lane_29);
  auto res_demosaic_bx_update_0_sm114_21661 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_29_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_30_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_30_pack, demosaic_bxb_FIFO_buf56_lane_30);
  auto res_demosaic_bx_update_0_sm114_11659 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_30_pack);

  hw_uint<16 > demosaic_bxb_FIFO_buf56_lane_31_pack;
  set_at<0, 16, 16>(demosaic_bxb_FIFO_buf56_lane_31_pack, demosaic_bxb_FIFO_buf56_lane_31);
  auto res_demosaic_bx_update_0_sm114_01657 = demosaic_bx_generated_compute_unrolled_1(demosaic_bxb_FIFO_buf56_lane_31_pack);
  hw_uint<512 > return_value2293;
  set_at<0, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_311719);
  set_at<16, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_301717);
  set_at<32, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_291715);
  set_at<48, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_281713);
  set_at<64, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_271711);
  set_at<80, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_261709);
  set_at<96, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_251707);
  set_at<112, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_241705);
  set_at<128, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_231703);
  set_at<144, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_221701);
  set_at<160, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_211699);
  set_at<176, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_201697);
  set_at<192, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_191695);
  set_at<208, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_181693);
  set_at<224, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_171691);
  set_at<240, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_161689);
  set_at<256, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_151687);
  set_at<272, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_141685);
  set_at<288, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_131683);
  set_at<304, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_121681);
  set_at<320, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_111679);
  set_at<336, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_101677);
  set_at<352, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_91675);
  set_at<368, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_81673);
  set_at<384, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_71671);
  set_at<400, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_61669);
  set_at<416, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_51667);
  set_at<432, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_41665);
  set_at<448, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_31663);
  set_at<464, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_21661);
  set_at<480, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_11659);
  set_at<496, 512, 16>(return_value2293, res_demosaic_bx_update_0_sm114_01657);
  return return_value2293;

}

hw_uint<512> demosaic_byb_1_cu2295(hw_uint<16*96>& demosaic_bx_FIFO_buf52) {
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
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_48 = demosaic_bx_FIFO_buf52.extract<768, 783>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_49 = demosaic_bx_FIFO_buf52.extract<784, 799>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_50 = demosaic_bx_FIFO_buf52.extract<800, 815>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_51 = demosaic_bx_FIFO_buf52.extract<816, 831>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_52 = demosaic_bx_FIFO_buf52.extract<832, 847>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_53 = demosaic_bx_FIFO_buf52.extract<848, 863>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_54 = demosaic_bx_FIFO_buf52.extract<864, 879>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_55 = demosaic_bx_FIFO_buf52.extract<880, 895>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_56 = demosaic_bx_FIFO_buf52.extract<896, 911>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_57 = demosaic_bx_FIFO_buf52.extract<912, 927>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_58 = demosaic_bx_FIFO_buf52.extract<928, 943>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_59 = demosaic_bx_FIFO_buf52.extract<944, 959>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_60 = demosaic_bx_FIFO_buf52.extract<960, 975>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_61 = demosaic_bx_FIFO_buf52.extract<976, 991>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_62 = demosaic_bx_FIFO_buf52.extract<992, 1007>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_63 = demosaic_bx_FIFO_buf52.extract<1008, 1023>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_64 = demosaic_bx_FIFO_buf52.extract<1024, 1039>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_65 = demosaic_bx_FIFO_buf52.extract<1040, 1055>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_66 = demosaic_bx_FIFO_buf52.extract<1056, 1071>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_67 = demosaic_bx_FIFO_buf52.extract<1072, 1087>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_68 = demosaic_bx_FIFO_buf52.extract<1088, 1103>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_69 = demosaic_bx_FIFO_buf52.extract<1104, 1119>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_70 = demosaic_bx_FIFO_buf52.extract<1120, 1135>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_71 = demosaic_bx_FIFO_buf52.extract<1136, 1151>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_72 = demosaic_bx_FIFO_buf52.extract<1152, 1167>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_73 = demosaic_bx_FIFO_buf52.extract<1168, 1183>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_74 = demosaic_bx_FIFO_buf52.extract<1184, 1199>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_75 = demosaic_bx_FIFO_buf52.extract<1200, 1215>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_76 = demosaic_bx_FIFO_buf52.extract<1216, 1231>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_77 = demosaic_bx_FIFO_buf52.extract<1232, 1247>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_78 = demosaic_bx_FIFO_buf52.extract<1248, 1263>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_79 = demosaic_bx_FIFO_buf52.extract<1264, 1279>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_80 = demosaic_bx_FIFO_buf52.extract<1280, 1295>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_81 = demosaic_bx_FIFO_buf52.extract<1296, 1311>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_82 = demosaic_bx_FIFO_buf52.extract<1312, 1327>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_83 = demosaic_bx_FIFO_buf52.extract<1328, 1343>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_84 = demosaic_bx_FIFO_buf52.extract<1344, 1359>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_85 = demosaic_bx_FIFO_buf52.extract<1360, 1375>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_86 = demosaic_bx_FIFO_buf52.extract<1376, 1391>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_87 = demosaic_bx_FIFO_buf52.extract<1392, 1407>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_88 = demosaic_bx_FIFO_buf52.extract<1408, 1423>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_89 = demosaic_bx_FIFO_buf52.extract<1424, 1439>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_90 = demosaic_bx_FIFO_buf52.extract<1440, 1455>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_91 = demosaic_bx_FIFO_buf52.extract<1456, 1471>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_92 = demosaic_bx_FIFO_buf52.extract<1472, 1487>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_93 = demosaic_bx_FIFO_buf52.extract<1488, 1503>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_94 = demosaic_bx_FIFO_buf52.extract<1504, 1519>();
  hw_uint<16> demosaic_bx_FIFO_buf52_lane_95 = demosaic_bx_FIFO_buf52.extract<1520, 1535>();

	
  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_2_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_2_pack, demosaic_bx_FIFO_buf52_lane_0);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_2_pack, demosaic_bx_FIFO_buf52_lane_1);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_2_pack, demosaic_bx_FIFO_buf52_lane_2);
  auto res_demosaic_byb_update_0_sm115_311783 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_2_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_5_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_5_pack, demosaic_bx_FIFO_buf52_lane_3);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_5_pack, demosaic_bx_FIFO_buf52_lane_4);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_5_pack, demosaic_bx_FIFO_buf52_lane_5);
  auto res_demosaic_byb_update_0_sm115_301781 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_5_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_8_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_8_pack, demosaic_bx_FIFO_buf52_lane_6);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_8_pack, demosaic_bx_FIFO_buf52_lane_7);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_8_pack, demosaic_bx_FIFO_buf52_lane_8);
  auto res_demosaic_byb_update_0_sm115_291779 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_8_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_11_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_11_pack, demosaic_bx_FIFO_buf52_lane_9);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_11_pack, demosaic_bx_FIFO_buf52_lane_10);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_11_pack, demosaic_bx_FIFO_buf52_lane_11);
  auto res_demosaic_byb_update_0_sm115_281777 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_11_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_14_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_14_pack, demosaic_bx_FIFO_buf52_lane_12);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_14_pack, demosaic_bx_FIFO_buf52_lane_13);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_14_pack, demosaic_bx_FIFO_buf52_lane_14);
  auto res_demosaic_byb_update_0_sm115_271775 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_14_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_17_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_17_pack, demosaic_bx_FIFO_buf52_lane_15);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_17_pack, demosaic_bx_FIFO_buf52_lane_16);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_17_pack, demosaic_bx_FIFO_buf52_lane_17);
  auto res_demosaic_byb_update_0_sm115_261773 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_17_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_20_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_20_pack, demosaic_bx_FIFO_buf52_lane_18);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_20_pack, demosaic_bx_FIFO_buf52_lane_19);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_20_pack, demosaic_bx_FIFO_buf52_lane_20);
  auto res_demosaic_byb_update_0_sm115_251771 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_20_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_23_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_23_pack, demosaic_bx_FIFO_buf52_lane_21);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_23_pack, demosaic_bx_FIFO_buf52_lane_22);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_23_pack, demosaic_bx_FIFO_buf52_lane_23);
  auto res_demosaic_byb_update_0_sm115_241769 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_23_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_26_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_26_pack, demosaic_bx_FIFO_buf52_lane_24);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_26_pack, demosaic_bx_FIFO_buf52_lane_25);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_26_pack, demosaic_bx_FIFO_buf52_lane_26);
  auto res_demosaic_byb_update_0_sm115_231767 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_26_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_29_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_29_pack, demosaic_bx_FIFO_buf52_lane_27);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_29_pack, demosaic_bx_FIFO_buf52_lane_28);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_29_pack, demosaic_bx_FIFO_buf52_lane_29);
  auto res_demosaic_byb_update_0_sm115_221765 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_29_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_32_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_32_pack, demosaic_bx_FIFO_buf52_lane_30);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_32_pack, demosaic_bx_FIFO_buf52_lane_31);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_32_pack, demosaic_bx_FIFO_buf52_lane_32);
  auto res_demosaic_byb_update_0_sm115_211763 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_32_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_35_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_35_pack, demosaic_bx_FIFO_buf52_lane_33);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_35_pack, demosaic_bx_FIFO_buf52_lane_34);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_35_pack, demosaic_bx_FIFO_buf52_lane_35);
  auto res_demosaic_byb_update_0_sm115_201761 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_35_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_38_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_38_pack, demosaic_bx_FIFO_buf52_lane_36);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_38_pack, demosaic_bx_FIFO_buf52_lane_37);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_38_pack, demosaic_bx_FIFO_buf52_lane_38);
  auto res_demosaic_byb_update_0_sm115_191759 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_38_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_41_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_41_pack, demosaic_bx_FIFO_buf52_lane_39);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_41_pack, demosaic_bx_FIFO_buf52_lane_40);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_41_pack, demosaic_bx_FIFO_buf52_lane_41);
  auto res_demosaic_byb_update_0_sm115_181757 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_41_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_44_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_44_pack, demosaic_bx_FIFO_buf52_lane_42);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_44_pack, demosaic_bx_FIFO_buf52_lane_43);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_44_pack, demosaic_bx_FIFO_buf52_lane_44);
  auto res_demosaic_byb_update_0_sm115_171755 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_44_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_47_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_47_pack, demosaic_bx_FIFO_buf52_lane_45);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_47_pack, demosaic_bx_FIFO_buf52_lane_46);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_47_pack, demosaic_bx_FIFO_buf52_lane_47);
  auto res_demosaic_byb_update_0_sm115_161753 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_47_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_50_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_50_pack, demosaic_bx_FIFO_buf52_lane_48);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_50_pack, demosaic_bx_FIFO_buf52_lane_49);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_50_pack, demosaic_bx_FIFO_buf52_lane_50);
  auto res_demosaic_byb_update_0_sm115_151751 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_50_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_53_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_53_pack, demosaic_bx_FIFO_buf52_lane_51);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_53_pack, demosaic_bx_FIFO_buf52_lane_52);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_53_pack, demosaic_bx_FIFO_buf52_lane_53);
  auto res_demosaic_byb_update_0_sm115_141749 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_53_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_56_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_56_pack, demosaic_bx_FIFO_buf52_lane_54);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_56_pack, demosaic_bx_FIFO_buf52_lane_55);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_56_pack, demosaic_bx_FIFO_buf52_lane_56);
  auto res_demosaic_byb_update_0_sm115_131747 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_56_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_59_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_59_pack, demosaic_bx_FIFO_buf52_lane_57);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_59_pack, demosaic_bx_FIFO_buf52_lane_58);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_59_pack, demosaic_bx_FIFO_buf52_lane_59);
  auto res_demosaic_byb_update_0_sm115_121745 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_59_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_62_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_62_pack, demosaic_bx_FIFO_buf52_lane_60);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_62_pack, demosaic_bx_FIFO_buf52_lane_61);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_62_pack, demosaic_bx_FIFO_buf52_lane_62);
  auto res_demosaic_byb_update_0_sm115_111743 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_62_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_65_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_65_pack, demosaic_bx_FIFO_buf52_lane_63);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_65_pack, demosaic_bx_FIFO_buf52_lane_64);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_65_pack, demosaic_bx_FIFO_buf52_lane_65);
  auto res_demosaic_byb_update_0_sm115_101741 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_65_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_68_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_68_pack, demosaic_bx_FIFO_buf52_lane_66);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_68_pack, demosaic_bx_FIFO_buf52_lane_67);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_68_pack, demosaic_bx_FIFO_buf52_lane_68);
  auto res_demosaic_byb_update_0_sm115_91739 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_68_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_71_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_71_pack, demosaic_bx_FIFO_buf52_lane_69);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_71_pack, demosaic_bx_FIFO_buf52_lane_70);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_71_pack, demosaic_bx_FIFO_buf52_lane_71);
  auto res_demosaic_byb_update_0_sm115_81737 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_71_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_74_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_74_pack, demosaic_bx_FIFO_buf52_lane_72);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_74_pack, demosaic_bx_FIFO_buf52_lane_73);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_74_pack, demosaic_bx_FIFO_buf52_lane_74);
  auto res_demosaic_byb_update_0_sm115_71735 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_74_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_77_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_77_pack, demosaic_bx_FIFO_buf52_lane_75);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_77_pack, demosaic_bx_FIFO_buf52_lane_76);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_77_pack, demosaic_bx_FIFO_buf52_lane_77);
  auto res_demosaic_byb_update_0_sm115_61733 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_77_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_80_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_80_pack, demosaic_bx_FIFO_buf52_lane_78);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_80_pack, demosaic_bx_FIFO_buf52_lane_79);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_80_pack, demosaic_bx_FIFO_buf52_lane_80);
  auto res_demosaic_byb_update_0_sm115_51731 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_80_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_83_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_83_pack, demosaic_bx_FIFO_buf52_lane_81);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_83_pack, demosaic_bx_FIFO_buf52_lane_82);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_83_pack, demosaic_bx_FIFO_buf52_lane_83);
  auto res_demosaic_byb_update_0_sm115_41729 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_83_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_86_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_86_pack, demosaic_bx_FIFO_buf52_lane_84);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_86_pack, demosaic_bx_FIFO_buf52_lane_85);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_86_pack, demosaic_bx_FIFO_buf52_lane_86);
  auto res_demosaic_byb_update_0_sm115_31727 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_86_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_89_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_89_pack, demosaic_bx_FIFO_buf52_lane_87);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_89_pack, demosaic_bx_FIFO_buf52_lane_88);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_89_pack, demosaic_bx_FIFO_buf52_lane_89);
  auto res_demosaic_byb_update_0_sm115_21725 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_89_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_92_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_92_pack, demosaic_bx_FIFO_buf52_lane_90);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_92_pack, demosaic_bx_FIFO_buf52_lane_91);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_92_pack, demosaic_bx_FIFO_buf52_lane_92);
  auto res_demosaic_byb_update_0_sm115_11723 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_92_pack);

  hw_uint<48 > demosaic_bx_FIFO_buf52_lane_95_pack;
  set_at<0, 48, 16>(demosaic_bx_FIFO_buf52_lane_95_pack, demosaic_bx_FIFO_buf52_lane_93);
  set_at<16, 48, 16>(demosaic_bx_FIFO_buf52_lane_95_pack, demosaic_bx_FIFO_buf52_lane_94);
  set_at<32, 48, 16>(demosaic_bx_FIFO_buf52_lane_95_pack, demosaic_bx_FIFO_buf52_lane_95);
  auto res_demosaic_byb_update_0_sm115_01721 = demosaic_byb_generated_compute_unrolled_1(demosaic_bx_FIFO_buf52_lane_95_pack);
  hw_uint<512 > return_value2296;
  set_at<0, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_311783);
  set_at<16, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_301781);
  set_at<32, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_291779);
  set_at<48, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_281777);
  set_at<64, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_271775);
  set_at<80, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_261773);
  set_at<96, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_251771);
  set_at<112, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_241769);
  set_at<128, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_231767);
  set_at<144, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_221765);
  set_at<160, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_211763);
  set_at<176, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_201761);
  set_at<192, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_191759);
  set_at<208, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_181757);
  set_at<224, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_171755);
  set_at<240, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_161753);
  set_at<256, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_151751);
  set_at<272, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_141749);
  set_at<288, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_131747);
  set_at<304, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_121745);
  set_at<320, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_111743);
  set_at<336, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_101741);
  set_at<352, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_91739);
  set_at<368, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_81737);
  set_at<384, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_71735);
  set_at<400, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_61733);
  set_at<416, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_51731);
  set_at<432, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_41729);
  set_at<448, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_31727);
  set_at<464, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_21725);
  set_at<480, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_11723);
  set_at<496, 512, 16>(return_value2296, res_demosaic_byb_update_0_sm115_01721);
  return return_value2296;

}

hw_uint<512> demosaic_diff_1_cu2298(hw_uint<16*32>& demosaic_FIFO_buf48, hw_uint<16*32>& demosaic_by_FIFO_buf60) {
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
  hw_uint<16> demosaic_FIFO_buf48_lane_16 = demosaic_FIFO_buf48.extract<256, 271>();
  hw_uint<16> demosaic_FIFO_buf48_lane_17 = demosaic_FIFO_buf48.extract<272, 287>();
  hw_uint<16> demosaic_FIFO_buf48_lane_18 = demosaic_FIFO_buf48.extract<288, 303>();
  hw_uint<16> demosaic_FIFO_buf48_lane_19 = demosaic_FIFO_buf48.extract<304, 319>();
  hw_uint<16> demosaic_FIFO_buf48_lane_20 = demosaic_FIFO_buf48.extract<320, 335>();
  hw_uint<16> demosaic_FIFO_buf48_lane_21 = demosaic_FIFO_buf48.extract<336, 351>();
  hw_uint<16> demosaic_FIFO_buf48_lane_22 = demosaic_FIFO_buf48.extract<352, 367>();
  hw_uint<16> demosaic_FIFO_buf48_lane_23 = demosaic_FIFO_buf48.extract<368, 383>();
  hw_uint<16> demosaic_FIFO_buf48_lane_24 = demosaic_FIFO_buf48.extract<384, 399>();
  hw_uint<16> demosaic_FIFO_buf48_lane_25 = demosaic_FIFO_buf48.extract<400, 415>();
  hw_uint<16> demosaic_FIFO_buf48_lane_26 = demosaic_FIFO_buf48.extract<416, 431>();
  hw_uint<16> demosaic_FIFO_buf48_lane_27 = demosaic_FIFO_buf48.extract<432, 447>();
  hw_uint<16> demosaic_FIFO_buf48_lane_28 = demosaic_FIFO_buf48.extract<448, 463>();
  hw_uint<16> demosaic_FIFO_buf48_lane_29 = demosaic_FIFO_buf48.extract<464, 479>();
  hw_uint<16> demosaic_FIFO_buf48_lane_30 = demosaic_FIFO_buf48.extract<480, 495>();
  hw_uint<16> demosaic_FIFO_buf48_lane_31 = demosaic_FIFO_buf48.extract<496, 511>();
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
  hw_uint<16> demosaic_by_FIFO_buf60_lane_16 = demosaic_by_FIFO_buf60.extract<256, 271>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_17 = demosaic_by_FIFO_buf60.extract<272, 287>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_18 = demosaic_by_FIFO_buf60.extract<288, 303>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_19 = demosaic_by_FIFO_buf60.extract<304, 319>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_20 = demosaic_by_FIFO_buf60.extract<320, 335>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_21 = demosaic_by_FIFO_buf60.extract<336, 351>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_22 = demosaic_by_FIFO_buf60.extract<352, 367>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_23 = demosaic_by_FIFO_buf60.extract<368, 383>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_24 = demosaic_by_FIFO_buf60.extract<384, 399>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_25 = demosaic_by_FIFO_buf60.extract<400, 415>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_26 = demosaic_by_FIFO_buf60.extract<416, 431>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_27 = demosaic_by_FIFO_buf60.extract<432, 447>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_28 = demosaic_by_FIFO_buf60.extract<448, 463>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_29 = demosaic_by_FIFO_buf60.extract<464, 479>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_30 = demosaic_by_FIFO_buf60.extract<480, 495>();
  hw_uint<16> demosaic_by_FIFO_buf60_lane_31 = demosaic_by_FIFO_buf60.extract<496, 511>();

	
  hw_uint<16 > demosaic_FIFO_buf48_lane_0_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_0_pack, demosaic_FIFO_buf48_lane_0);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_0_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_0_pack, demosaic_by_FIFO_buf60_lane_0);
  auto res_demosaic_diff_update_0_sm116_311655 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_0_pack, demosaic_by_FIFO_buf60_lane_0_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_1_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_1_pack, demosaic_FIFO_buf48_lane_1);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_1_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_1_pack, demosaic_by_FIFO_buf60_lane_1);
  auto res_demosaic_diff_update_0_sm116_301653 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_1_pack, demosaic_by_FIFO_buf60_lane_1_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_2_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_2_pack, demosaic_FIFO_buf48_lane_2);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_2_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_2_pack, demosaic_by_FIFO_buf60_lane_2);
  auto res_demosaic_diff_update_0_sm116_291651 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_2_pack, demosaic_by_FIFO_buf60_lane_2_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_3_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_3_pack, demosaic_FIFO_buf48_lane_3);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_3_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_3_pack, demosaic_by_FIFO_buf60_lane_3);
  auto res_demosaic_diff_update_0_sm116_281649 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_3_pack, demosaic_by_FIFO_buf60_lane_3_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_4_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_4_pack, demosaic_FIFO_buf48_lane_4);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_4_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_4_pack, demosaic_by_FIFO_buf60_lane_4);
  auto res_demosaic_diff_update_0_sm116_271647 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_4_pack, demosaic_by_FIFO_buf60_lane_4_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_5_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_5_pack, demosaic_FIFO_buf48_lane_5);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_5_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_5_pack, demosaic_by_FIFO_buf60_lane_5);
  auto res_demosaic_diff_update_0_sm116_261645 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_5_pack, demosaic_by_FIFO_buf60_lane_5_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_6_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_6_pack, demosaic_FIFO_buf48_lane_6);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_6_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_6_pack, demosaic_by_FIFO_buf60_lane_6);
  auto res_demosaic_diff_update_0_sm116_251643 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_6_pack, demosaic_by_FIFO_buf60_lane_6_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_7_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_7_pack, demosaic_FIFO_buf48_lane_7);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_7_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_7_pack, demosaic_by_FIFO_buf60_lane_7);
  auto res_demosaic_diff_update_0_sm116_241641 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_7_pack, demosaic_by_FIFO_buf60_lane_7_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_8_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_8_pack, demosaic_FIFO_buf48_lane_8);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_8_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_8_pack, demosaic_by_FIFO_buf60_lane_8);
  auto res_demosaic_diff_update_0_sm116_231639 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_8_pack, demosaic_by_FIFO_buf60_lane_8_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_9_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_9_pack, demosaic_FIFO_buf48_lane_9);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_9_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_9_pack, demosaic_by_FIFO_buf60_lane_9);
  auto res_demosaic_diff_update_0_sm116_221637 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_9_pack, demosaic_by_FIFO_buf60_lane_9_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_10_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_10_pack, demosaic_FIFO_buf48_lane_10);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_10_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_10_pack, demosaic_by_FIFO_buf60_lane_10);
  auto res_demosaic_diff_update_0_sm116_211635 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_10_pack, demosaic_by_FIFO_buf60_lane_10_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_11_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_11_pack, demosaic_FIFO_buf48_lane_11);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_11_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_11_pack, demosaic_by_FIFO_buf60_lane_11);
  auto res_demosaic_diff_update_0_sm116_201633 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_11_pack, demosaic_by_FIFO_buf60_lane_11_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_12_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_12_pack, demosaic_FIFO_buf48_lane_12);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_12_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_12_pack, demosaic_by_FIFO_buf60_lane_12);
  auto res_demosaic_diff_update_0_sm116_191631 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_12_pack, demosaic_by_FIFO_buf60_lane_12_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_13_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_13_pack, demosaic_FIFO_buf48_lane_13);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_13_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_13_pack, demosaic_by_FIFO_buf60_lane_13);
  auto res_demosaic_diff_update_0_sm116_181629 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_13_pack, demosaic_by_FIFO_buf60_lane_13_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_14_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_14_pack, demosaic_FIFO_buf48_lane_14);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_14_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_14_pack, demosaic_by_FIFO_buf60_lane_14);
  auto res_demosaic_diff_update_0_sm116_171627 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_14_pack, demosaic_by_FIFO_buf60_lane_14_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_15_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_15_pack, demosaic_FIFO_buf48_lane_15);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_15_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_15_pack, demosaic_by_FIFO_buf60_lane_15);
  auto res_demosaic_diff_update_0_sm116_161625 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_15_pack, demosaic_by_FIFO_buf60_lane_15_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_16_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_16_pack, demosaic_FIFO_buf48_lane_16);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_16_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_16_pack, demosaic_by_FIFO_buf60_lane_16);
  auto res_demosaic_diff_update_0_sm116_151623 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_16_pack, demosaic_by_FIFO_buf60_lane_16_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_17_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_17_pack, demosaic_FIFO_buf48_lane_17);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_17_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_17_pack, demosaic_by_FIFO_buf60_lane_17);
  auto res_demosaic_diff_update_0_sm116_141621 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_17_pack, demosaic_by_FIFO_buf60_lane_17_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_18_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_18_pack, demosaic_FIFO_buf48_lane_18);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_18_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_18_pack, demosaic_by_FIFO_buf60_lane_18);
  auto res_demosaic_diff_update_0_sm116_131619 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_18_pack, demosaic_by_FIFO_buf60_lane_18_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_19_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_19_pack, demosaic_FIFO_buf48_lane_19);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_19_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_19_pack, demosaic_by_FIFO_buf60_lane_19);
  auto res_demosaic_diff_update_0_sm116_121617 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_19_pack, demosaic_by_FIFO_buf60_lane_19_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_20_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_20_pack, demosaic_FIFO_buf48_lane_20);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_20_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_20_pack, demosaic_by_FIFO_buf60_lane_20);
  auto res_demosaic_diff_update_0_sm116_111615 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_20_pack, demosaic_by_FIFO_buf60_lane_20_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_21_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_21_pack, demosaic_FIFO_buf48_lane_21);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_21_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_21_pack, demosaic_by_FIFO_buf60_lane_21);
  auto res_demosaic_diff_update_0_sm116_101613 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_21_pack, demosaic_by_FIFO_buf60_lane_21_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_22_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_22_pack, demosaic_FIFO_buf48_lane_22);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_22_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_22_pack, demosaic_by_FIFO_buf60_lane_22);
  auto res_demosaic_diff_update_0_sm116_91611 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_22_pack, demosaic_by_FIFO_buf60_lane_22_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_23_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_23_pack, demosaic_FIFO_buf48_lane_23);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_23_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_23_pack, demosaic_by_FIFO_buf60_lane_23);
  auto res_demosaic_diff_update_0_sm116_81609 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_23_pack, demosaic_by_FIFO_buf60_lane_23_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_24_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_24_pack, demosaic_FIFO_buf48_lane_24);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_24_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_24_pack, demosaic_by_FIFO_buf60_lane_24);
  auto res_demosaic_diff_update_0_sm116_71607 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_24_pack, demosaic_by_FIFO_buf60_lane_24_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_25_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_25_pack, demosaic_FIFO_buf48_lane_25);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_25_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_25_pack, demosaic_by_FIFO_buf60_lane_25);
  auto res_demosaic_diff_update_0_sm116_61605 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_25_pack, demosaic_by_FIFO_buf60_lane_25_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_26_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_26_pack, demosaic_FIFO_buf48_lane_26);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_26_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_26_pack, demosaic_by_FIFO_buf60_lane_26);
  auto res_demosaic_diff_update_0_sm116_51603 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_26_pack, demosaic_by_FIFO_buf60_lane_26_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_27_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_27_pack, demosaic_FIFO_buf48_lane_27);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_27_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_27_pack, demosaic_by_FIFO_buf60_lane_27);
  auto res_demosaic_diff_update_0_sm116_41601 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_27_pack, demosaic_by_FIFO_buf60_lane_27_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_28_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_28_pack, demosaic_FIFO_buf48_lane_28);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_28_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_28_pack, demosaic_by_FIFO_buf60_lane_28);
  auto res_demosaic_diff_update_0_sm116_31599 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_28_pack, demosaic_by_FIFO_buf60_lane_28_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_29_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_29_pack, demosaic_FIFO_buf48_lane_29);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_29_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_29_pack, demosaic_by_FIFO_buf60_lane_29);
  auto res_demosaic_diff_update_0_sm116_21597 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_29_pack, demosaic_by_FIFO_buf60_lane_29_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_30_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_30_pack, demosaic_FIFO_buf48_lane_30);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_30_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_30_pack, demosaic_by_FIFO_buf60_lane_30);
  auto res_demosaic_diff_update_0_sm116_11595 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_30_pack, demosaic_by_FIFO_buf60_lane_30_pack);

  hw_uint<16 > demosaic_FIFO_buf48_lane_31_pack;
  set_at<0, 16, 16>(demosaic_FIFO_buf48_lane_31_pack, demosaic_FIFO_buf48_lane_31);
  hw_uint<16 > demosaic_by_FIFO_buf60_lane_31_pack;
  set_at<0, 16, 16>(demosaic_by_FIFO_buf60_lane_31_pack, demosaic_by_FIFO_buf60_lane_31);
  auto res_demosaic_diff_update_0_sm116_01593 = demosaic_diff_generated_compute_unrolled_1(demosaic_FIFO_buf48_lane_31_pack, demosaic_by_FIFO_buf60_lane_31_pack);
  hw_uint<512 > return_value2299;
  set_at<0, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_311655);
  set_at<16, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_301653);
  set_at<32, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_291651);
  set_at<48, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_281649);
  set_at<64, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_271647);
  set_at<80, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_261645);
  set_at<96, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_251643);
  set_at<112, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_241641);
  set_at<128, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_231639);
  set_at<144, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_221637);
  set_at<160, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_211635);
  set_at<176, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_201633);
  set_at<192, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_191631);
  set_at<208, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_181629);
  set_at<224, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_171627);
  set_at<240, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_161625);
  set_at<256, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_151623);
  set_at<272, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_141621);
  set_at<288, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_131619);
  set_at<304, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_121617);
  set_at<320, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_111615);
  set_at<336, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_101613);
  set_at<352, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_91611);
  set_at<368, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_81609);
  set_at<384, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_71607);
  set_at<400, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_61605);
  set_at<416, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_51603);
  set_at<432, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_41601);
  set_at<448, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_31599);
  set_at<464, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_21597);
  set_at<480, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_11595);
  set_at<496, 512, 16>(return_value2299, res_demosaic_diff_update_0_sm116_01593);
  return return_value2299;

}

hw_uint<512> cp4_32_1_cu2301(hw_uint<16*32>& demosaic_diff_FIFO_buf68) {
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
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_16 = demosaic_diff_FIFO_buf68.extract<256, 271>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_17 = demosaic_diff_FIFO_buf68.extract<272, 287>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_18 = demosaic_diff_FIFO_buf68.extract<288, 303>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_19 = demosaic_diff_FIFO_buf68.extract<304, 319>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_20 = demosaic_diff_FIFO_buf68.extract<320, 335>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_21 = demosaic_diff_FIFO_buf68.extract<336, 351>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_22 = demosaic_diff_FIFO_buf68.extract<352, 367>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_23 = demosaic_diff_FIFO_buf68.extract<368, 383>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_24 = demosaic_diff_FIFO_buf68.extract<384, 399>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_25 = demosaic_diff_FIFO_buf68.extract<400, 415>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_26 = demosaic_diff_FIFO_buf68.extract<416, 431>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_27 = demosaic_diff_FIFO_buf68.extract<432, 447>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_28 = demosaic_diff_FIFO_buf68.extract<448, 463>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_29 = demosaic_diff_FIFO_buf68.extract<464, 479>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_30 = demosaic_diff_FIFO_buf68.extract<480, 495>();
  hw_uint<16> demosaic_diff_FIFO_buf68_lane_31 = demosaic_diff_FIFO_buf68.extract<496, 511>();

	
  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_0_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_0_pack, demosaic_diff_FIFO_buf68_lane_0);
  auto res_cp4_32_update_0_sm117_311463 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_0_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_1_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_1_pack, demosaic_diff_FIFO_buf68_lane_1);
  auto res_cp4_32_update_0_sm117_301461 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_1_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_2_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_2_pack, demosaic_diff_FIFO_buf68_lane_2);
  auto res_cp4_32_update_0_sm117_291459 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_2_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_3_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_3_pack, demosaic_diff_FIFO_buf68_lane_3);
  auto res_cp4_32_update_0_sm117_281457 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_3_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_4_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_4_pack, demosaic_diff_FIFO_buf68_lane_4);
  auto res_cp4_32_update_0_sm117_271455 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_4_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_5_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_5_pack, demosaic_diff_FIFO_buf68_lane_5);
  auto res_cp4_32_update_0_sm117_261453 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_5_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_6_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_6_pack, demosaic_diff_FIFO_buf68_lane_6);
  auto res_cp4_32_update_0_sm117_251451 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_6_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_7_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_7_pack, demosaic_diff_FIFO_buf68_lane_7);
  auto res_cp4_32_update_0_sm117_241449 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_7_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_8_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_8_pack, demosaic_diff_FIFO_buf68_lane_8);
  auto res_cp4_32_update_0_sm117_231447 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_8_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_9_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_9_pack, demosaic_diff_FIFO_buf68_lane_9);
  auto res_cp4_32_update_0_sm117_221445 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_9_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_10_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_10_pack, demosaic_diff_FIFO_buf68_lane_10);
  auto res_cp4_32_update_0_sm117_211443 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_10_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_11_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_11_pack, demosaic_diff_FIFO_buf68_lane_11);
  auto res_cp4_32_update_0_sm117_201441 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_11_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_12_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_12_pack, demosaic_diff_FIFO_buf68_lane_12);
  auto res_cp4_32_update_0_sm117_191439 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_12_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_13_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_13_pack, demosaic_diff_FIFO_buf68_lane_13);
  auto res_cp4_32_update_0_sm117_181437 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_13_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_14_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_14_pack, demosaic_diff_FIFO_buf68_lane_14);
  auto res_cp4_32_update_0_sm117_171435 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_14_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_15_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_15_pack, demosaic_diff_FIFO_buf68_lane_15);
  auto res_cp4_32_update_0_sm117_161433 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_15_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_16_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_16_pack, demosaic_diff_FIFO_buf68_lane_16);
  auto res_cp4_32_update_0_sm117_151431 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_16_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_17_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_17_pack, demosaic_diff_FIFO_buf68_lane_17);
  auto res_cp4_32_update_0_sm117_141429 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_17_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_18_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_18_pack, demosaic_diff_FIFO_buf68_lane_18);
  auto res_cp4_32_update_0_sm117_131427 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_18_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_19_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_19_pack, demosaic_diff_FIFO_buf68_lane_19);
  auto res_cp4_32_update_0_sm117_121425 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_19_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_20_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_20_pack, demosaic_diff_FIFO_buf68_lane_20);
  auto res_cp4_32_update_0_sm117_111423 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_20_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_21_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_21_pack, demosaic_diff_FIFO_buf68_lane_21);
  auto res_cp4_32_update_0_sm117_101421 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_21_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_22_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_22_pack, demosaic_diff_FIFO_buf68_lane_22);
  auto res_cp4_32_update_0_sm117_91419 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_22_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_23_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_23_pack, demosaic_diff_FIFO_buf68_lane_23);
  auto res_cp4_32_update_0_sm117_81417 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_23_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_24_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_24_pack, demosaic_diff_FIFO_buf68_lane_24);
  auto res_cp4_32_update_0_sm117_71415 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_24_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_25_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_25_pack, demosaic_diff_FIFO_buf68_lane_25);
  auto res_cp4_32_update_0_sm117_61413 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_25_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_26_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_26_pack, demosaic_diff_FIFO_buf68_lane_26);
  auto res_cp4_32_update_0_sm117_51411 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_26_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_27_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_27_pack, demosaic_diff_FIFO_buf68_lane_27);
  auto res_cp4_32_update_0_sm117_41409 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_27_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_28_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_28_pack, demosaic_diff_FIFO_buf68_lane_28);
  auto res_cp4_32_update_0_sm117_31407 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_28_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_29_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_29_pack, demosaic_diff_FIFO_buf68_lane_29);
  auto res_cp4_32_update_0_sm117_21405 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_29_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_30_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_30_pack, demosaic_diff_FIFO_buf68_lane_30);
  auto res_cp4_32_update_0_sm117_11403 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_30_pack);

  hw_uint<16 > demosaic_diff_FIFO_buf68_lane_31_pack;
  set_at<0, 16, 16>(demosaic_diff_FIFO_buf68_lane_31_pack, demosaic_diff_FIFO_buf68_lane_31);
  auto res_cp4_32_update_0_sm117_01401 = cp4_32_generated_compute_unrolled_1(demosaic_diff_FIFO_buf68_lane_31_pack);
  hw_uint<512 > return_value2302;
  set_at<0, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_311463);
  set_at<16, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_301461);
  set_at<32, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_291459);
  set_at<48, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_281457);
  set_at<64, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_271455);
  set_at<80, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_261453);
  set_at<96, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_251451);
  set_at<112, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_241449);
  set_at<128, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_231447);
  set_at<144, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_221445);
  set_at<160, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_211443);
  set_at<176, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_201441);
  set_at<192, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_191439);
  set_at<208, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_181437);
  set_at<224, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_171435);
  set_at<240, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_161433);
  set_at<256, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_151431);
  set_at<272, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_141429);
  set_at<288, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_131427);
  set_at<304, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_121425);
  set_at<320, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_111423);
  set_at<336, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_101421);
  set_at<352, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_91419);
  set_at<368, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_81417);
  set_at<384, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_71415);
  set_at<400, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_61413);
  set_at<416, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_51411);
  set_at<432, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_41409);
  set_at<448, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_31407);
  set_at<464, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_21405);
  set_at<480, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_11403);
  set_at<496, 512, 16>(return_value2302, res_cp4_32_update_0_sm117_01401);
  return return_value2302;

}

hw_uint<512> demosaic_to_gp_64_ld49_cu2304(hw_uint<16*32>& demosaic_to_gp_64) {
  return demosaic_to_gp_64;
}

hw_uint<512> demosaic_byb_ld21_cu2306(hw_uint<16*32>& demosaic_byb) {
  return demosaic_byb;
}

hw_uint<512> demosaic_bx_ld9_cu2308(hw_uint<16*32>& demosaic_bx) {
  return demosaic_bx;
}

