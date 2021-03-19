#include "jac9_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> stg8_to_gp_16112_ld117_cu3313(hw_uint<16*32>& stg8_to_gp_16112) {
  return stg8_to_gp_16112;
}

hw_uint<512> stg3_ld73_cu3315(hw_uint<16*32>& stg3) {
  return stg3;
}

hw_uint<512> stg13_ld49_cu3317(hw_uint<16*32>& stg13) {
  return stg13;
}

hw_uint<512> stg9_to_gp_3120_ld125_cu3319(hw_uint<16*32>& stg9_to_gp_3120) {
  return stg9_to_gp_3120;
}

hw_uint<512> stg1_to_gp_916_ld21_cu3321(hw_uint<16*32>& stg1_to_gp_916) {
  return stg1_to_gp_916;
}

hw_uint<512> stg1_ld17_cu3323(hw_uint<16*32>& stg1) {
  return stg1;
}

hw_uint<512> stg0_to_gp_88_ld13_cu3325(hw_uint<16*32>& stg0_to_gp_88) {
  return stg0_to_gp_88;
}

hw_uint<512> stg0_ld9_cu3327(hw_uint<16*32>& stg0) {
  return stg0;
}

hw_uint<512> in_to_gp_20_ld5_cu3329(hw_uint<16*32>& in_to_gp_20) {
  return in_to_gp_20;
}

hw_uint<512> stg5_ld89_cu3331(hw_uint<16*32>& stg5) {
  return stg5;
}

hw_uint<512> stg9_ld121_cu3333(hw_uint<16*32>& stg9) {
  return stg9;
}

hw_uint<512> stg3_to_gp_1172_ld77_cu3335(hw_uint<16*32>& stg3_to_gp_1172) {
  return stg3_to_gp_1172;
}

hw_uint<512> stg4_to_gp_1280_ld85_cu3337(hw_uint<16*32>& stg4_to_gp_1280) {
  return stg4_to_gp_1280;
}

hw_uint<512> stg2_ld65_cu3339(hw_uint<16*32>& stg2) {
  return stg2;
}

hw_uint<512> stg2_to_gp_1064_ld69_cu3341(hw_uint<16*32>& stg2_to_gp_1064) {
  return stg2_to_gp_1064;
}

hw_uint<512> stg14_ld57_cu3343(hw_uint<16*32>& stg14) {
  return stg14;
}

hw_uint<512> stg13_to_gp_748_ld53_cu3345(hw_uint<16*32>& stg13_to_gp_748) {
  return stg13_to_gp_748;
}

hw_uint<512> stg5_to_gp_1388_ld93_cu3347(hw_uint<16*32>& stg5_to_gp_1388) {
  return stg5_to_gp_1388;
}

hw_uint<512> stg10_ld25_cu3349(hw_uint<16*32>& stg10) {
  return stg10;
}

hw_uint<512> stg7_to_gp_15104_ld109_cu3351(hw_uint<16*32>& stg7_to_gp_15104) {
  return stg7_to_gp_15104;
}

hw_uint<512> stg11_to_gp_532_ld37_cu3353(hw_uint<16*32>& stg11_to_gp_532) {
  return stg11_to_gp_532;
}

hw_uint<512> stg8_ld113_cu3355(hw_uint<16*32>& stg8) {
  return stg8;
}

hw_uint<512> stg6_to_gp_1496_ld101_cu3357(hw_uint<16*32>& stg6_to_gp_1496) {
  return stg6_to_gp_1496;
}

hw_uint<512> stg12_to_gp_640_ld45_cu3359(hw_uint<16*32>& stg12_to_gp_640) {
  return stg12_to_gp_640;
}

hw_uint<512> stg12_ld41_cu3361(hw_uint<16*32>& stg12) {
  return stg12;
}

hw_uint<512> stg11_ld33_cu3363(hw_uint<16*32>& stg11) {
  return stg11;
}

hw_uint<512> stg10_to_gp_424_ld29_cu3365(hw_uint<16*32>& stg10_to_gp_424) {
  return stg10_to_gp_424;
}

hw_uint<512> in_ld1_cu3367(hw_uint<16*32>& in) {
  return in;
}

hw_uint<512> stg7_ld105_cu3369(hw_uint<16*32>& stg7) {
  return stg7;
}

hw_uint<512> stg4_ld81_cu3371(hw_uint<16*32>& stg4) {
  return stg4;
}

hw_uint<512> stg6_ld97_cu3373(hw_uint<16*32>& stg6) {
  return stg6;
}

hw_uint<512> in_1_cu3375(hw_uint<16*32>& in_off_chip) {
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
  auto res_in_update_0_sm159_02993 = in_generated_compute_unrolled_1(in_off_chip_lane_0_pack);

  hw_uint<16 > in_off_chip_lane_1_pack;
  set_at<0, 16, 16>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
  auto res_in_update_0_sm159_12995 = in_generated_compute_unrolled_1(in_off_chip_lane_1_pack);

  hw_uint<16 > in_off_chip_lane_2_pack;
  set_at<0, 16, 16>(in_off_chip_lane_2_pack, in_off_chip_lane_2);
  auto res_in_update_0_sm159_22997 = in_generated_compute_unrolled_1(in_off_chip_lane_2_pack);

  hw_uint<16 > in_off_chip_lane_3_pack;
  set_at<0, 16, 16>(in_off_chip_lane_3_pack, in_off_chip_lane_3);
  auto res_in_update_0_sm159_32999 = in_generated_compute_unrolled_1(in_off_chip_lane_3_pack);

  hw_uint<16 > in_off_chip_lane_4_pack;
  set_at<0, 16, 16>(in_off_chip_lane_4_pack, in_off_chip_lane_4);
  auto res_in_update_0_sm159_43001 = in_generated_compute_unrolled_1(in_off_chip_lane_4_pack);

  hw_uint<16 > in_off_chip_lane_5_pack;
  set_at<0, 16, 16>(in_off_chip_lane_5_pack, in_off_chip_lane_5);
  auto res_in_update_0_sm159_53003 = in_generated_compute_unrolled_1(in_off_chip_lane_5_pack);

  hw_uint<16 > in_off_chip_lane_6_pack;
  set_at<0, 16, 16>(in_off_chip_lane_6_pack, in_off_chip_lane_6);
  auto res_in_update_0_sm159_63005 = in_generated_compute_unrolled_1(in_off_chip_lane_6_pack);

  hw_uint<16 > in_off_chip_lane_7_pack;
  set_at<0, 16, 16>(in_off_chip_lane_7_pack, in_off_chip_lane_7);
  auto res_in_update_0_sm159_73007 = in_generated_compute_unrolled_1(in_off_chip_lane_7_pack);

  hw_uint<16 > in_off_chip_lane_8_pack;
  set_at<0, 16, 16>(in_off_chip_lane_8_pack, in_off_chip_lane_8);
  auto res_in_update_0_sm159_83009 = in_generated_compute_unrolled_1(in_off_chip_lane_8_pack);

  hw_uint<16 > in_off_chip_lane_9_pack;
  set_at<0, 16, 16>(in_off_chip_lane_9_pack, in_off_chip_lane_9);
  auto res_in_update_0_sm159_93011 = in_generated_compute_unrolled_1(in_off_chip_lane_9_pack);

  hw_uint<16 > in_off_chip_lane_10_pack;
  set_at<0, 16, 16>(in_off_chip_lane_10_pack, in_off_chip_lane_10);
  auto res_in_update_0_sm159_103013 = in_generated_compute_unrolled_1(in_off_chip_lane_10_pack);

  hw_uint<16 > in_off_chip_lane_11_pack;
  set_at<0, 16, 16>(in_off_chip_lane_11_pack, in_off_chip_lane_11);
  auto res_in_update_0_sm159_113015 = in_generated_compute_unrolled_1(in_off_chip_lane_11_pack);

  hw_uint<16 > in_off_chip_lane_12_pack;
  set_at<0, 16, 16>(in_off_chip_lane_12_pack, in_off_chip_lane_12);
  auto res_in_update_0_sm159_123017 = in_generated_compute_unrolled_1(in_off_chip_lane_12_pack);

  hw_uint<16 > in_off_chip_lane_13_pack;
  set_at<0, 16, 16>(in_off_chip_lane_13_pack, in_off_chip_lane_13);
  auto res_in_update_0_sm159_133019 = in_generated_compute_unrolled_1(in_off_chip_lane_13_pack);

  hw_uint<16 > in_off_chip_lane_14_pack;
  set_at<0, 16, 16>(in_off_chip_lane_14_pack, in_off_chip_lane_14);
  auto res_in_update_0_sm159_143021 = in_generated_compute_unrolled_1(in_off_chip_lane_14_pack);

  hw_uint<16 > in_off_chip_lane_15_pack;
  set_at<0, 16, 16>(in_off_chip_lane_15_pack, in_off_chip_lane_15);
  auto res_in_update_0_sm159_153023 = in_generated_compute_unrolled_1(in_off_chip_lane_15_pack);

  hw_uint<16 > in_off_chip_lane_16_pack;
  set_at<0, 16, 16>(in_off_chip_lane_16_pack, in_off_chip_lane_16);
  auto res_in_update_0_sm159_163025 = in_generated_compute_unrolled_1(in_off_chip_lane_16_pack);

  hw_uint<16 > in_off_chip_lane_17_pack;
  set_at<0, 16, 16>(in_off_chip_lane_17_pack, in_off_chip_lane_17);
  auto res_in_update_0_sm159_173027 = in_generated_compute_unrolled_1(in_off_chip_lane_17_pack);

  hw_uint<16 > in_off_chip_lane_18_pack;
  set_at<0, 16, 16>(in_off_chip_lane_18_pack, in_off_chip_lane_18);
  auto res_in_update_0_sm159_183029 = in_generated_compute_unrolled_1(in_off_chip_lane_18_pack);

  hw_uint<16 > in_off_chip_lane_19_pack;
  set_at<0, 16, 16>(in_off_chip_lane_19_pack, in_off_chip_lane_19);
  auto res_in_update_0_sm159_193031 = in_generated_compute_unrolled_1(in_off_chip_lane_19_pack);

  hw_uint<16 > in_off_chip_lane_20_pack;
  set_at<0, 16, 16>(in_off_chip_lane_20_pack, in_off_chip_lane_20);
  auto res_in_update_0_sm159_203033 = in_generated_compute_unrolled_1(in_off_chip_lane_20_pack);

  hw_uint<16 > in_off_chip_lane_21_pack;
  set_at<0, 16, 16>(in_off_chip_lane_21_pack, in_off_chip_lane_21);
  auto res_in_update_0_sm159_213035 = in_generated_compute_unrolled_1(in_off_chip_lane_21_pack);

  hw_uint<16 > in_off_chip_lane_22_pack;
  set_at<0, 16, 16>(in_off_chip_lane_22_pack, in_off_chip_lane_22);
  auto res_in_update_0_sm159_223037 = in_generated_compute_unrolled_1(in_off_chip_lane_22_pack);

  hw_uint<16 > in_off_chip_lane_23_pack;
  set_at<0, 16, 16>(in_off_chip_lane_23_pack, in_off_chip_lane_23);
  auto res_in_update_0_sm159_233039 = in_generated_compute_unrolled_1(in_off_chip_lane_23_pack);

  hw_uint<16 > in_off_chip_lane_24_pack;
  set_at<0, 16, 16>(in_off_chip_lane_24_pack, in_off_chip_lane_24);
  auto res_in_update_0_sm159_243041 = in_generated_compute_unrolled_1(in_off_chip_lane_24_pack);

  hw_uint<16 > in_off_chip_lane_25_pack;
  set_at<0, 16, 16>(in_off_chip_lane_25_pack, in_off_chip_lane_25);
  auto res_in_update_0_sm159_253043 = in_generated_compute_unrolled_1(in_off_chip_lane_25_pack);

  hw_uint<16 > in_off_chip_lane_26_pack;
  set_at<0, 16, 16>(in_off_chip_lane_26_pack, in_off_chip_lane_26);
  auto res_in_update_0_sm159_263045 = in_generated_compute_unrolled_1(in_off_chip_lane_26_pack);

  hw_uint<16 > in_off_chip_lane_27_pack;
  set_at<0, 16, 16>(in_off_chip_lane_27_pack, in_off_chip_lane_27);
  auto res_in_update_0_sm159_273047 = in_generated_compute_unrolled_1(in_off_chip_lane_27_pack);

  hw_uint<16 > in_off_chip_lane_28_pack;
  set_at<0, 16, 16>(in_off_chip_lane_28_pack, in_off_chip_lane_28);
  auto res_in_update_0_sm159_283049 = in_generated_compute_unrolled_1(in_off_chip_lane_28_pack);

  hw_uint<16 > in_off_chip_lane_29_pack;
  set_at<0, 16, 16>(in_off_chip_lane_29_pack, in_off_chip_lane_29);
  auto res_in_update_0_sm159_293051 = in_generated_compute_unrolled_1(in_off_chip_lane_29_pack);

  hw_uint<16 > in_off_chip_lane_30_pack;
  set_at<0, 16, 16>(in_off_chip_lane_30_pack, in_off_chip_lane_30);
  auto res_in_update_0_sm159_303053 = in_generated_compute_unrolled_1(in_off_chip_lane_30_pack);

  hw_uint<16 > in_off_chip_lane_31_pack;
  set_at<0, 16, 16>(in_off_chip_lane_31_pack, in_off_chip_lane_31);
  auto res_in_update_0_sm159_313055 = in_generated_compute_unrolled_1(in_off_chip_lane_31_pack);
  hw_uint<512 > return_value3376;
  set_at<0, 512, 16>(return_value3376, res_in_update_0_sm159_02993);
  set_at<16, 512, 16>(return_value3376, res_in_update_0_sm159_12995);
  set_at<32, 512, 16>(return_value3376, res_in_update_0_sm159_22997);
  set_at<48, 512, 16>(return_value3376, res_in_update_0_sm159_32999);
  set_at<64, 512, 16>(return_value3376, res_in_update_0_sm159_43001);
  set_at<80, 512, 16>(return_value3376, res_in_update_0_sm159_53003);
  set_at<96, 512, 16>(return_value3376, res_in_update_0_sm159_63005);
  set_at<112, 512, 16>(return_value3376, res_in_update_0_sm159_73007);
  set_at<128, 512, 16>(return_value3376, res_in_update_0_sm159_83009);
  set_at<144, 512, 16>(return_value3376, res_in_update_0_sm159_93011);
  set_at<160, 512, 16>(return_value3376, res_in_update_0_sm159_103013);
  set_at<176, 512, 16>(return_value3376, res_in_update_0_sm159_113015);
  set_at<192, 512, 16>(return_value3376, res_in_update_0_sm159_123017);
  set_at<208, 512, 16>(return_value3376, res_in_update_0_sm159_133019);
  set_at<224, 512, 16>(return_value3376, res_in_update_0_sm159_143021);
  set_at<240, 512, 16>(return_value3376, res_in_update_0_sm159_153023);
  set_at<256, 512, 16>(return_value3376, res_in_update_0_sm159_163025);
  set_at<272, 512, 16>(return_value3376, res_in_update_0_sm159_173027);
  set_at<288, 512, 16>(return_value3376, res_in_update_0_sm159_183029);
  set_at<304, 512, 16>(return_value3376, res_in_update_0_sm159_193031);
  set_at<320, 512, 16>(return_value3376, res_in_update_0_sm159_203033);
  set_at<336, 512, 16>(return_value3376, res_in_update_0_sm159_213035);
  set_at<352, 512, 16>(return_value3376, res_in_update_0_sm159_223037);
  set_at<368, 512, 16>(return_value3376, res_in_update_0_sm159_233039);
  set_at<384, 512, 16>(return_value3376, res_in_update_0_sm159_243041);
  set_at<400, 512, 16>(return_value3376, res_in_update_0_sm159_253043);
  set_at<416, 512, 16>(return_value3376, res_in_update_0_sm159_263045);
  set_at<432, 512, 16>(return_value3376, res_in_update_0_sm159_273047);
  set_at<448, 512, 16>(return_value3376, res_in_update_0_sm159_283049);
  set_at<464, 512, 16>(return_value3376, res_in_update_0_sm159_293051);
  set_at<480, 512, 16>(return_value3376, res_in_update_0_sm159_303053);
  set_at<496, 512, 16>(return_value3376, res_in_update_0_sm159_313055);
  return return_value3376;

}

hw_uint<512> stg0_1_cu3378(hw_uint<16*128>& in_FIFO_buf4) {
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
  auto res_stg0_update_0_sm160_01969 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_3_pack);

  hw_uint<64 > in_FIFO_buf4_lane_7_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_4);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_5);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_6);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_7);
  auto res_stg0_update_0_sm160_11971 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_7_pack);

  hw_uint<64 > in_FIFO_buf4_lane_11_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_8);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_9);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_10);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_11);
  auto res_stg0_update_0_sm160_21973 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_11_pack);

  hw_uint<64 > in_FIFO_buf4_lane_15_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_12);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_13);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_14);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_15);
  auto res_stg0_update_0_sm160_31975 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_15_pack);

  hw_uint<64 > in_FIFO_buf4_lane_19_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_16);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_17);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_18);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_19);
  auto res_stg0_update_0_sm160_41977 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_19_pack);

  hw_uint<64 > in_FIFO_buf4_lane_23_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_20);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_21);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_22);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_23);
  auto res_stg0_update_0_sm160_51979 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_23_pack);

  hw_uint<64 > in_FIFO_buf4_lane_27_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_24);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_25);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_26);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_27);
  auto res_stg0_update_0_sm160_61981 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_27_pack);

  hw_uint<64 > in_FIFO_buf4_lane_31_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_28);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_29);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_30);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_31);
  auto res_stg0_update_0_sm160_71983 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_31_pack);

  hw_uint<64 > in_FIFO_buf4_lane_35_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_32);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_33);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_34);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_35);
  auto res_stg0_update_0_sm160_81985 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_35_pack);

  hw_uint<64 > in_FIFO_buf4_lane_39_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_36);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_37);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_38);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_39);
  auto res_stg0_update_0_sm160_91987 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_39_pack);

  hw_uint<64 > in_FIFO_buf4_lane_43_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_40);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_41);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_42);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_43);
  auto res_stg0_update_0_sm160_101989 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_43_pack);

  hw_uint<64 > in_FIFO_buf4_lane_47_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_44);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_45);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_46);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_47);
  auto res_stg0_update_0_sm160_111991 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_47_pack);

  hw_uint<64 > in_FIFO_buf4_lane_51_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_48);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_49);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_50);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_51);
  auto res_stg0_update_0_sm160_121993 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_51_pack);

  hw_uint<64 > in_FIFO_buf4_lane_55_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_52);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_53);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_54);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_55);
  auto res_stg0_update_0_sm160_131995 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_55_pack);

  hw_uint<64 > in_FIFO_buf4_lane_59_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_56);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_57);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_58);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_59);
  auto res_stg0_update_0_sm160_141997 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_59_pack);

  hw_uint<64 > in_FIFO_buf4_lane_63_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_60);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_61);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_62);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_63);
  auto res_stg0_update_0_sm160_151999 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_63_pack);

  hw_uint<64 > in_FIFO_buf4_lane_67_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_64);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_65);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_66);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_67_pack, in_FIFO_buf4_lane_67);
  auto res_stg0_update_0_sm160_162001 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_67_pack);

  hw_uint<64 > in_FIFO_buf4_lane_71_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_68);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_69);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_70);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_71_pack, in_FIFO_buf4_lane_71);
  auto res_stg0_update_0_sm160_172003 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_71_pack);

  hw_uint<64 > in_FIFO_buf4_lane_75_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_72);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_73);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_74);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_75_pack, in_FIFO_buf4_lane_75);
  auto res_stg0_update_0_sm160_182005 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_75_pack);

  hw_uint<64 > in_FIFO_buf4_lane_79_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_76);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_77);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_78);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_79_pack, in_FIFO_buf4_lane_79);
  auto res_stg0_update_0_sm160_192007 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_79_pack);

  hw_uint<64 > in_FIFO_buf4_lane_83_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_80);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_81);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_82);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_83_pack, in_FIFO_buf4_lane_83);
  auto res_stg0_update_0_sm160_202009 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_83_pack);

  hw_uint<64 > in_FIFO_buf4_lane_87_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_84);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_85);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_86);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_87_pack, in_FIFO_buf4_lane_87);
  auto res_stg0_update_0_sm160_212011 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_87_pack);

  hw_uint<64 > in_FIFO_buf4_lane_91_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_88);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_89);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_90);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_91_pack, in_FIFO_buf4_lane_91);
  auto res_stg0_update_0_sm160_222013 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_91_pack);

  hw_uint<64 > in_FIFO_buf4_lane_95_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_92);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_93);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_94);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_95_pack, in_FIFO_buf4_lane_95);
  auto res_stg0_update_0_sm160_232015 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_95_pack);

  hw_uint<64 > in_FIFO_buf4_lane_99_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_96);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_97);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_98);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_99_pack, in_FIFO_buf4_lane_99);
  auto res_stg0_update_0_sm160_242017 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_99_pack);

  hw_uint<64 > in_FIFO_buf4_lane_103_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_100);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_101);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_102);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_103_pack, in_FIFO_buf4_lane_103);
  auto res_stg0_update_0_sm160_252019 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_103_pack);

  hw_uint<64 > in_FIFO_buf4_lane_107_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_104);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_105);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_106);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_107_pack, in_FIFO_buf4_lane_107);
  auto res_stg0_update_0_sm160_262021 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_107_pack);

  hw_uint<64 > in_FIFO_buf4_lane_111_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_108);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_109);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_110);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_111_pack, in_FIFO_buf4_lane_111);
  auto res_stg0_update_0_sm160_272023 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_111_pack);

  hw_uint<64 > in_FIFO_buf4_lane_115_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_112);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_113);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_114);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_115_pack, in_FIFO_buf4_lane_115);
  auto res_stg0_update_0_sm160_282025 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_115_pack);

  hw_uint<64 > in_FIFO_buf4_lane_119_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_116);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_117);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_118);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_119_pack, in_FIFO_buf4_lane_119);
  auto res_stg0_update_0_sm160_292027 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_119_pack);

  hw_uint<64 > in_FIFO_buf4_lane_123_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_120);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_121);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_122);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_123_pack, in_FIFO_buf4_lane_123);
  auto res_stg0_update_0_sm160_302029 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_123_pack);

  hw_uint<64 > in_FIFO_buf4_lane_127_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_124);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_125);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_126);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_127_pack, in_FIFO_buf4_lane_127);
  auto res_stg0_update_0_sm160_312031 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_127_pack);
  hw_uint<512 > return_value3379;
  set_at<0, 512, 16>(return_value3379, res_stg0_update_0_sm160_01969);
  set_at<16, 512, 16>(return_value3379, res_stg0_update_0_sm160_11971);
  set_at<32, 512, 16>(return_value3379, res_stg0_update_0_sm160_21973);
  set_at<48, 512, 16>(return_value3379, res_stg0_update_0_sm160_31975);
  set_at<64, 512, 16>(return_value3379, res_stg0_update_0_sm160_41977);
  set_at<80, 512, 16>(return_value3379, res_stg0_update_0_sm160_51979);
  set_at<96, 512, 16>(return_value3379, res_stg0_update_0_sm160_61981);
  set_at<112, 512, 16>(return_value3379, res_stg0_update_0_sm160_71983);
  set_at<128, 512, 16>(return_value3379, res_stg0_update_0_sm160_81985);
  set_at<144, 512, 16>(return_value3379, res_stg0_update_0_sm160_91987);
  set_at<160, 512, 16>(return_value3379, res_stg0_update_0_sm160_101989);
  set_at<176, 512, 16>(return_value3379, res_stg0_update_0_sm160_111991);
  set_at<192, 512, 16>(return_value3379, res_stg0_update_0_sm160_121993);
  set_at<208, 512, 16>(return_value3379, res_stg0_update_0_sm160_131995);
  set_at<224, 512, 16>(return_value3379, res_stg0_update_0_sm160_141997);
  set_at<240, 512, 16>(return_value3379, res_stg0_update_0_sm160_151999);
  set_at<256, 512, 16>(return_value3379, res_stg0_update_0_sm160_162001);
  set_at<272, 512, 16>(return_value3379, res_stg0_update_0_sm160_172003);
  set_at<288, 512, 16>(return_value3379, res_stg0_update_0_sm160_182005);
  set_at<304, 512, 16>(return_value3379, res_stg0_update_0_sm160_192007);
  set_at<320, 512, 16>(return_value3379, res_stg0_update_0_sm160_202009);
  set_at<336, 512, 16>(return_value3379, res_stg0_update_0_sm160_212011);
  set_at<352, 512, 16>(return_value3379, res_stg0_update_0_sm160_222013);
  set_at<368, 512, 16>(return_value3379, res_stg0_update_0_sm160_232015);
  set_at<384, 512, 16>(return_value3379, res_stg0_update_0_sm160_242017);
  set_at<400, 512, 16>(return_value3379, res_stg0_update_0_sm160_252019);
  set_at<416, 512, 16>(return_value3379, res_stg0_update_0_sm160_262021);
  set_at<432, 512, 16>(return_value3379, res_stg0_update_0_sm160_272023);
  set_at<448, 512, 16>(return_value3379, res_stg0_update_0_sm160_282025);
  set_at<464, 512, 16>(return_value3379, res_stg0_update_0_sm160_292027);
  set_at<480, 512, 16>(return_value3379, res_stg0_update_0_sm160_302029);
  set_at<496, 512, 16>(return_value3379, res_stg0_update_0_sm160_312031);
  return return_value3379;

}

hw_uint<512> stg1_1_cu3381(hw_uint<16*128>& stg0_FIFO_buf12) {
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
  auto res_stg1_update_0_sm161_02033 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_3_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_7_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_4);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_5);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_6);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_7);
  auto res_stg1_update_0_sm161_12035 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_7_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_11_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_8);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_9);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_10);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_11);
  auto res_stg1_update_0_sm161_22037 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_11_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_15_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_12);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_13);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_14);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_15);
  auto res_stg1_update_0_sm161_32039 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_15_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_19_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_16);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_17);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_18);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_19);
  auto res_stg1_update_0_sm161_42041 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_19_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_23_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_20);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_21);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_22);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_23);
  auto res_stg1_update_0_sm161_52043 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_23_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_27_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_24);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_25);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_26);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_27);
  auto res_stg1_update_0_sm161_62045 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_27_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_31_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_28);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_29);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_30);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_31);
  auto res_stg1_update_0_sm161_72047 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_31_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_35_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_32);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_33);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_34);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_35);
  auto res_stg1_update_0_sm161_82049 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_35_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_39_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_36);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_37);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_38);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_39);
  auto res_stg1_update_0_sm161_92051 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_39_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_43_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_40);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_41);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_42);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_43);
  auto res_stg1_update_0_sm161_102053 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_43_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_47_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_44);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_45);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_46);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_47);
  auto res_stg1_update_0_sm161_112055 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_47_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_51_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_48);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_49);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_50);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_51);
  auto res_stg1_update_0_sm161_122057 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_51_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_55_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_52);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_53);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_54);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_55);
  auto res_stg1_update_0_sm161_132059 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_55_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_59_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_56);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_57);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_58);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_59);
  auto res_stg1_update_0_sm161_142061 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_59_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_63_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_60);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_61);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_62);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_63);
  auto res_stg1_update_0_sm161_152063 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_63_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_67_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_64);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_65);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_66);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_67_pack, stg0_FIFO_buf12_lane_67);
  auto res_stg1_update_0_sm161_162065 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_67_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_71_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_68);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_69);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_70);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_71_pack, stg0_FIFO_buf12_lane_71);
  auto res_stg1_update_0_sm161_172067 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_71_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_75_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_72);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_73);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_74);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_75_pack, stg0_FIFO_buf12_lane_75);
  auto res_stg1_update_0_sm161_182069 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_75_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_79_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_76);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_77);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_78);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_79_pack, stg0_FIFO_buf12_lane_79);
  auto res_stg1_update_0_sm161_192071 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_79_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_83_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_80);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_81);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_82);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_83_pack, stg0_FIFO_buf12_lane_83);
  auto res_stg1_update_0_sm161_202073 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_83_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_87_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_84);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_85);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_86);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_87_pack, stg0_FIFO_buf12_lane_87);
  auto res_stg1_update_0_sm161_212075 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_87_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_91_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_88);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_89);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_90);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_91_pack, stg0_FIFO_buf12_lane_91);
  auto res_stg1_update_0_sm161_222077 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_91_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_95_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_92);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_93);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_94);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_95_pack, stg0_FIFO_buf12_lane_95);
  auto res_stg1_update_0_sm161_232079 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_95_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_99_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_96);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_97);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_98);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_99_pack, stg0_FIFO_buf12_lane_99);
  auto res_stg1_update_0_sm161_242081 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_99_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_103_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_100);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_101);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_102);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_103_pack, stg0_FIFO_buf12_lane_103);
  auto res_stg1_update_0_sm161_252083 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_103_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_107_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_104);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_105);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_106);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_107_pack, stg0_FIFO_buf12_lane_107);
  auto res_stg1_update_0_sm161_262085 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_107_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_111_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_108);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_109);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_110);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_111_pack, stg0_FIFO_buf12_lane_111);
  auto res_stg1_update_0_sm161_272087 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_111_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_115_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_112);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_113);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_114);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_115_pack, stg0_FIFO_buf12_lane_115);
  auto res_stg1_update_0_sm161_282089 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_115_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_119_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_116);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_117);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_118);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_119_pack, stg0_FIFO_buf12_lane_119);
  auto res_stg1_update_0_sm161_292091 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_119_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_123_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_120);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_121);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_122);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_123_pack, stg0_FIFO_buf12_lane_123);
  auto res_stg1_update_0_sm161_302093 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_123_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_127_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_124);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_125);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_126);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_127_pack, stg0_FIFO_buf12_lane_127);
  auto res_stg1_update_0_sm161_312095 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_127_pack);
  hw_uint<512 > return_value3382;
  set_at<0, 512, 16>(return_value3382, res_stg1_update_0_sm161_02033);
  set_at<16, 512, 16>(return_value3382, res_stg1_update_0_sm161_12035);
  set_at<32, 512, 16>(return_value3382, res_stg1_update_0_sm161_22037);
  set_at<48, 512, 16>(return_value3382, res_stg1_update_0_sm161_32039);
  set_at<64, 512, 16>(return_value3382, res_stg1_update_0_sm161_42041);
  set_at<80, 512, 16>(return_value3382, res_stg1_update_0_sm161_52043);
  set_at<96, 512, 16>(return_value3382, res_stg1_update_0_sm161_62045);
  set_at<112, 512, 16>(return_value3382, res_stg1_update_0_sm161_72047);
  set_at<128, 512, 16>(return_value3382, res_stg1_update_0_sm161_82049);
  set_at<144, 512, 16>(return_value3382, res_stg1_update_0_sm161_92051);
  set_at<160, 512, 16>(return_value3382, res_stg1_update_0_sm161_102053);
  set_at<176, 512, 16>(return_value3382, res_stg1_update_0_sm161_112055);
  set_at<192, 512, 16>(return_value3382, res_stg1_update_0_sm161_122057);
  set_at<208, 512, 16>(return_value3382, res_stg1_update_0_sm161_132059);
  set_at<224, 512, 16>(return_value3382, res_stg1_update_0_sm161_142061);
  set_at<240, 512, 16>(return_value3382, res_stg1_update_0_sm161_152063);
  set_at<256, 512, 16>(return_value3382, res_stg1_update_0_sm161_162065);
  set_at<272, 512, 16>(return_value3382, res_stg1_update_0_sm161_172067);
  set_at<288, 512, 16>(return_value3382, res_stg1_update_0_sm161_182069);
  set_at<304, 512, 16>(return_value3382, res_stg1_update_0_sm161_192071);
  set_at<320, 512, 16>(return_value3382, res_stg1_update_0_sm161_202073);
  set_at<336, 512, 16>(return_value3382, res_stg1_update_0_sm161_212075);
  set_at<352, 512, 16>(return_value3382, res_stg1_update_0_sm161_222077);
  set_at<368, 512, 16>(return_value3382, res_stg1_update_0_sm161_232079);
  set_at<384, 512, 16>(return_value3382, res_stg1_update_0_sm161_242081);
  set_at<400, 512, 16>(return_value3382, res_stg1_update_0_sm161_252083);
  set_at<416, 512, 16>(return_value3382, res_stg1_update_0_sm161_262085);
  set_at<432, 512, 16>(return_value3382, res_stg1_update_0_sm161_272087);
  set_at<448, 512, 16>(return_value3382, res_stg1_update_0_sm161_282089);
  set_at<464, 512, 16>(return_value3382, res_stg1_update_0_sm161_292091);
  set_at<480, 512, 16>(return_value3382, res_stg1_update_0_sm161_302093);
  set_at<496, 512, 16>(return_value3382, res_stg1_update_0_sm161_312095);
  return return_value3382;

}

hw_uint<512> stg2_1_cu3384(hw_uint<16*128>& stg1_FIFO_buf20) {
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
  auto res_stg2_update_0_sm162_02097 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_3_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_7_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_4);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_5);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_6);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_7);
  auto res_stg2_update_0_sm162_12099 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_7_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_11_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_8);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_9);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_10);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_11);
  auto res_stg2_update_0_sm162_22101 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_11_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_15_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_12);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_13);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_14);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_15);
  auto res_stg2_update_0_sm162_32103 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_15_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_19_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_16);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_17);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_18);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_19);
  auto res_stg2_update_0_sm162_42105 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_19_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_23_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_20);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_21);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_22);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_23);
  auto res_stg2_update_0_sm162_52107 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_23_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_27_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_24);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_25);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_26);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_27);
  auto res_stg2_update_0_sm162_62109 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_27_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_31_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_28);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_29);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_30);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_31);
  auto res_stg2_update_0_sm162_72111 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_31_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_35_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_32);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_33);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_34);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_35);
  auto res_stg2_update_0_sm162_82113 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_35_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_39_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_36);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_37);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_38);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_39);
  auto res_stg2_update_0_sm162_92115 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_39_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_43_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_40);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_41);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_42);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_43);
  auto res_stg2_update_0_sm162_102117 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_43_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_47_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_44);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_45);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_46);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_47);
  auto res_stg2_update_0_sm162_112119 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_47_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_51_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_48);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_49);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_50);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_51);
  auto res_stg2_update_0_sm162_122121 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_51_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_55_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_52);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_53);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_54);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_55);
  auto res_stg2_update_0_sm162_132123 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_55_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_59_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_56);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_57);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_58);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_59);
  auto res_stg2_update_0_sm162_142125 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_59_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_63_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_60);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_61);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_62);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_63);
  auto res_stg2_update_0_sm162_152127 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_63_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_67_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_64);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_65);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_66);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_67_pack, stg1_FIFO_buf20_lane_67);
  auto res_stg2_update_0_sm162_162129 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_67_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_71_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_68);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_69);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_70);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_71_pack, stg1_FIFO_buf20_lane_71);
  auto res_stg2_update_0_sm162_172131 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_71_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_75_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_72);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_73);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_74);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_75_pack, stg1_FIFO_buf20_lane_75);
  auto res_stg2_update_0_sm162_182133 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_75_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_79_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_76);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_77);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_78);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_79_pack, stg1_FIFO_buf20_lane_79);
  auto res_stg2_update_0_sm162_192135 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_79_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_83_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_80);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_81);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_82);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_83_pack, stg1_FIFO_buf20_lane_83);
  auto res_stg2_update_0_sm162_202137 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_83_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_87_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_84);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_85);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_86);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_87_pack, stg1_FIFO_buf20_lane_87);
  auto res_stg2_update_0_sm162_212139 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_87_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_91_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_88);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_89);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_90);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_91_pack, stg1_FIFO_buf20_lane_91);
  auto res_stg2_update_0_sm162_222141 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_91_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_95_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_92);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_93);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_94);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_95_pack, stg1_FIFO_buf20_lane_95);
  auto res_stg2_update_0_sm162_232143 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_95_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_99_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_96);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_97);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_98);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_99_pack, stg1_FIFO_buf20_lane_99);
  auto res_stg2_update_0_sm162_242145 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_99_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_103_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_100);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_101);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_102);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_103_pack, stg1_FIFO_buf20_lane_103);
  auto res_stg2_update_0_sm162_252147 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_103_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_107_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_104);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_105);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_106);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_107_pack, stg1_FIFO_buf20_lane_107);
  auto res_stg2_update_0_sm162_262149 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_107_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_111_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_108);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_109);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_110);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_111_pack, stg1_FIFO_buf20_lane_111);
  auto res_stg2_update_0_sm162_272151 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_111_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_115_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_112);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_113);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_114);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_115_pack, stg1_FIFO_buf20_lane_115);
  auto res_stg2_update_0_sm162_282153 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_115_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_119_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_116);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_117);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_118);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_119_pack, stg1_FIFO_buf20_lane_119);
  auto res_stg2_update_0_sm162_292155 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_119_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_123_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_120);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_121);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_122);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_123_pack, stg1_FIFO_buf20_lane_123);
  auto res_stg2_update_0_sm162_302157 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_123_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_127_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_124);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_125);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_126);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_127_pack, stg1_FIFO_buf20_lane_127);
  auto res_stg2_update_0_sm162_312159 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_127_pack);
  hw_uint<512 > return_value3385;
  set_at<0, 512, 16>(return_value3385, res_stg2_update_0_sm162_02097);
  set_at<16, 512, 16>(return_value3385, res_stg2_update_0_sm162_12099);
  set_at<32, 512, 16>(return_value3385, res_stg2_update_0_sm162_22101);
  set_at<48, 512, 16>(return_value3385, res_stg2_update_0_sm162_32103);
  set_at<64, 512, 16>(return_value3385, res_stg2_update_0_sm162_42105);
  set_at<80, 512, 16>(return_value3385, res_stg2_update_0_sm162_52107);
  set_at<96, 512, 16>(return_value3385, res_stg2_update_0_sm162_62109);
  set_at<112, 512, 16>(return_value3385, res_stg2_update_0_sm162_72111);
  set_at<128, 512, 16>(return_value3385, res_stg2_update_0_sm162_82113);
  set_at<144, 512, 16>(return_value3385, res_stg2_update_0_sm162_92115);
  set_at<160, 512, 16>(return_value3385, res_stg2_update_0_sm162_102117);
  set_at<176, 512, 16>(return_value3385, res_stg2_update_0_sm162_112119);
  set_at<192, 512, 16>(return_value3385, res_stg2_update_0_sm162_122121);
  set_at<208, 512, 16>(return_value3385, res_stg2_update_0_sm162_132123);
  set_at<224, 512, 16>(return_value3385, res_stg2_update_0_sm162_142125);
  set_at<240, 512, 16>(return_value3385, res_stg2_update_0_sm162_152127);
  set_at<256, 512, 16>(return_value3385, res_stg2_update_0_sm162_162129);
  set_at<272, 512, 16>(return_value3385, res_stg2_update_0_sm162_172131);
  set_at<288, 512, 16>(return_value3385, res_stg2_update_0_sm162_182133);
  set_at<304, 512, 16>(return_value3385, res_stg2_update_0_sm162_192135);
  set_at<320, 512, 16>(return_value3385, res_stg2_update_0_sm162_202137);
  set_at<336, 512, 16>(return_value3385, res_stg2_update_0_sm162_212139);
  set_at<352, 512, 16>(return_value3385, res_stg2_update_0_sm162_222141);
  set_at<368, 512, 16>(return_value3385, res_stg2_update_0_sm162_232143);
  set_at<384, 512, 16>(return_value3385, res_stg2_update_0_sm162_242145);
  set_at<400, 512, 16>(return_value3385, res_stg2_update_0_sm162_252147);
  set_at<416, 512, 16>(return_value3385, res_stg2_update_0_sm162_262149);
  set_at<432, 512, 16>(return_value3385, res_stg2_update_0_sm162_272151);
  set_at<448, 512, 16>(return_value3385, res_stg2_update_0_sm162_282153);
  set_at<464, 512, 16>(return_value3385, res_stg2_update_0_sm162_292155);
  set_at<480, 512, 16>(return_value3385, res_stg2_update_0_sm162_302157);
  set_at<496, 512, 16>(return_value3385, res_stg2_update_0_sm162_312159);
  return return_value3385;

}

hw_uint<512> stg3_1_cu3387(hw_uint<16*128>& stg2_FIFO_buf68) {
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
  auto res_stg3_update_0_sm163_02161 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_3_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_7_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_4);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_5);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_6);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_7);
  auto res_stg3_update_0_sm163_12163 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_7_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_11_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_8);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_9);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_10);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_11);
  auto res_stg3_update_0_sm163_22165 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_11_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_15_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_12);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_13);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_14);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_15);
  auto res_stg3_update_0_sm163_32167 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_15_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_19_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_16);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_17);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_18);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_19);
  auto res_stg3_update_0_sm163_42169 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_19_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_23_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_20);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_21);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_22);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_23);
  auto res_stg3_update_0_sm163_52171 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_23_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_27_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_24);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_25);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_26);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_27);
  auto res_stg3_update_0_sm163_62173 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_27_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_31_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_28);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_29);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_30);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_31);
  auto res_stg3_update_0_sm163_72175 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_31_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_35_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_32);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_33);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_34);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_35);
  auto res_stg3_update_0_sm163_82177 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_35_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_39_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_36);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_37);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_38);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_39);
  auto res_stg3_update_0_sm163_92179 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_39_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_43_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_40);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_41);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_42);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_43);
  auto res_stg3_update_0_sm163_102181 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_43_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_47_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_44);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_45);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_46);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_47);
  auto res_stg3_update_0_sm163_112183 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_47_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_51_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_48);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_49);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_50);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_51);
  auto res_stg3_update_0_sm163_122185 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_51_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_55_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_52);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_53);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_54);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_55);
  auto res_stg3_update_0_sm163_132187 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_55_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_59_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_56);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_57);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_58);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_59);
  auto res_stg3_update_0_sm163_142189 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_59_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_63_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_60);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_61);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_62);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_63);
  auto res_stg3_update_0_sm163_152191 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_63_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_67_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_64);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_65);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_66);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_67_pack, stg2_FIFO_buf68_lane_67);
  auto res_stg3_update_0_sm163_162193 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_67_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_71_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_68);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_69);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_70);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_71_pack, stg2_FIFO_buf68_lane_71);
  auto res_stg3_update_0_sm163_172195 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_71_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_75_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_72);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_73);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_74);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_75_pack, stg2_FIFO_buf68_lane_75);
  auto res_stg3_update_0_sm163_182197 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_75_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_79_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_76);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_77);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_78);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_79_pack, stg2_FIFO_buf68_lane_79);
  auto res_stg3_update_0_sm163_192199 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_79_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_83_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_80);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_81);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_82);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_83_pack, stg2_FIFO_buf68_lane_83);
  auto res_stg3_update_0_sm163_202201 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_83_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_87_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_84);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_85);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_86);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_87_pack, stg2_FIFO_buf68_lane_87);
  auto res_stg3_update_0_sm163_212203 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_87_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_91_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_88);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_89);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_90);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_91_pack, stg2_FIFO_buf68_lane_91);
  auto res_stg3_update_0_sm163_222205 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_91_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_95_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_92);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_93);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_94);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_95_pack, stg2_FIFO_buf68_lane_95);
  auto res_stg3_update_0_sm163_232207 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_95_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_99_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_96);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_97);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_98);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_99_pack, stg2_FIFO_buf68_lane_99);
  auto res_stg3_update_0_sm163_242209 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_99_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_103_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_100);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_101);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_102);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_103_pack, stg2_FIFO_buf68_lane_103);
  auto res_stg3_update_0_sm163_252211 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_103_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_107_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_104);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_105);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_106);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_107_pack, stg2_FIFO_buf68_lane_107);
  auto res_stg3_update_0_sm163_262213 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_107_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_111_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_108);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_109);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_110);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_111_pack, stg2_FIFO_buf68_lane_111);
  auto res_stg3_update_0_sm163_272215 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_111_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_115_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_112);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_113);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_114);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_115_pack, stg2_FIFO_buf68_lane_115);
  auto res_stg3_update_0_sm163_282217 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_115_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_119_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_116);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_117);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_118);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_119_pack, stg2_FIFO_buf68_lane_119);
  auto res_stg3_update_0_sm163_292219 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_119_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_123_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_120);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_121);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_122);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_123_pack, stg2_FIFO_buf68_lane_123);
  auto res_stg3_update_0_sm163_302221 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_123_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_127_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_124);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_125);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_126);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_127_pack, stg2_FIFO_buf68_lane_127);
  auto res_stg3_update_0_sm163_312223 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_127_pack);
  hw_uint<512 > return_value3388;
  set_at<0, 512, 16>(return_value3388, res_stg3_update_0_sm163_02161);
  set_at<16, 512, 16>(return_value3388, res_stg3_update_0_sm163_12163);
  set_at<32, 512, 16>(return_value3388, res_stg3_update_0_sm163_22165);
  set_at<48, 512, 16>(return_value3388, res_stg3_update_0_sm163_32167);
  set_at<64, 512, 16>(return_value3388, res_stg3_update_0_sm163_42169);
  set_at<80, 512, 16>(return_value3388, res_stg3_update_0_sm163_52171);
  set_at<96, 512, 16>(return_value3388, res_stg3_update_0_sm163_62173);
  set_at<112, 512, 16>(return_value3388, res_stg3_update_0_sm163_72175);
  set_at<128, 512, 16>(return_value3388, res_stg3_update_0_sm163_82177);
  set_at<144, 512, 16>(return_value3388, res_stg3_update_0_sm163_92179);
  set_at<160, 512, 16>(return_value3388, res_stg3_update_0_sm163_102181);
  set_at<176, 512, 16>(return_value3388, res_stg3_update_0_sm163_112183);
  set_at<192, 512, 16>(return_value3388, res_stg3_update_0_sm163_122185);
  set_at<208, 512, 16>(return_value3388, res_stg3_update_0_sm163_132187);
  set_at<224, 512, 16>(return_value3388, res_stg3_update_0_sm163_142189);
  set_at<240, 512, 16>(return_value3388, res_stg3_update_0_sm163_152191);
  set_at<256, 512, 16>(return_value3388, res_stg3_update_0_sm163_162193);
  set_at<272, 512, 16>(return_value3388, res_stg3_update_0_sm163_172195);
  set_at<288, 512, 16>(return_value3388, res_stg3_update_0_sm163_182197);
  set_at<304, 512, 16>(return_value3388, res_stg3_update_0_sm163_192199);
  set_at<320, 512, 16>(return_value3388, res_stg3_update_0_sm163_202201);
  set_at<336, 512, 16>(return_value3388, res_stg3_update_0_sm163_212203);
  set_at<352, 512, 16>(return_value3388, res_stg3_update_0_sm163_222205);
  set_at<368, 512, 16>(return_value3388, res_stg3_update_0_sm163_232207);
  set_at<384, 512, 16>(return_value3388, res_stg3_update_0_sm163_242209);
  set_at<400, 512, 16>(return_value3388, res_stg3_update_0_sm163_252211);
  set_at<416, 512, 16>(return_value3388, res_stg3_update_0_sm163_262213);
  set_at<432, 512, 16>(return_value3388, res_stg3_update_0_sm163_272215);
  set_at<448, 512, 16>(return_value3388, res_stg3_update_0_sm163_282217);
  set_at<464, 512, 16>(return_value3388, res_stg3_update_0_sm163_292219);
  set_at<480, 512, 16>(return_value3388, res_stg3_update_0_sm163_302221);
  set_at<496, 512, 16>(return_value3388, res_stg3_update_0_sm163_312223);
  return return_value3388;

}

hw_uint<512> stg4_1_cu3390(hw_uint<16*128>& stg3_FIFO_buf76) {
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
  auto res_stg4_update_0_sm164_03057 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_3_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_7_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_4);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_5);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_6);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_7);
  auto res_stg4_update_0_sm164_13059 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_7_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_11_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_8);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_9);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_10);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_11);
  auto res_stg4_update_0_sm164_23061 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_11_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_15_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_12);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_13);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_14);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_15);
  auto res_stg4_update_0_sm164_33063 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_15_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_19_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_16);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_17);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_18);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_19);
  auto res_stg4_update_0_sm164_43065 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_19_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_23_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_20);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_21);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_22);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_23);
  auto res_stg4_update_0_sm164_53067 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_23_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_27_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_24);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_25);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_26);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_27);
  auto res_stg4_update_0_sm164_63069 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_27_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_31_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_28);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_29);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_30);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_31);
  auto res_stg4_update_0_sm164_73071 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_31_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_35_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_32);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_33);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_34);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_35);
  auto res_stg4_update_0_sm164_83073 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_35_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_39_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_36);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_37);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_38);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_39);
  auto res_stg4_update_0_sm164_93075 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_39_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_43_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_40);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_41);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_42);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_43);
  auto res_stg4_update_0_sm164_103077 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_43_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_47_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_44);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_45);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_46);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_47);
  auto res_stg4_update_0_sm164_113079 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_47_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_51_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_48);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_49);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_50);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_51);
  auto res_stg4_update_0_sm164_123081 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_51_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_55_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_52);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_53);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_54);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_55);
  auto res_stg4_update_0_sm164_133083 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_55_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_59_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_56);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_57);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_58);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_59);
  auto res_stg4_update_0_sm164_143085 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_59_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_63_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_60);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_61);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_62);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_63);
  auto res_stg4_update_0_sm164_153087 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_63_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_67_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_64);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_65);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_66);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_67_pack, stg3_FIFO_buf76_lane_67);
  auto res_stg4_update_0_sm164_163089 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_67_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_71_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_68);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_69);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_70);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_71_pack, stg3_FIFO_buf76_lane_71);
  auto res_stg4_update_0_sm164_173091 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_71_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_75_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_72);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_73);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_74);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_75_pack, stg3_FIFO_buf76_lane_75);
  auto res_stg4_update_0_sm164_183093 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_75_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_79_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_76);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_77);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_78);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_79_pack, stg3_FIFO_buf76_lane_79);
  auto res_stg4_update_0_sm164_193095 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_79_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_83_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_80);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_81);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_82);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_83_pack, stg3_FIFO_buf76_lane_83);
  auto res_stg4_update_0_sm164_203097 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_83_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_87_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_84);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_85);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_86);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_87_pack, stg3_FIFO_buf76_lane_87);
  auto res_stg4_update_0_sm164_213099 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_87_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_91_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_88);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_89);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_90);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_91_pack, stg3_FIFO_buf76_lane_91);
  auto res_stg4_update_0_sm164_223101 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_91_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_95_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_92);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_93);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_94);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_95_pack, stg3_FIFO_buf76_lane_95);
  auto res_stg4_update_0_sm164_233103 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_95_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_99_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_96);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_97);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_98);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_99_pack, stg3_FIFO_buf76_lane_99);
  auto res_stg4_update_0_sm164_243105 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_99_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_103_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_100);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_101);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_102);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_103_pack, stg3_FIFO_buf76_lane_103);
  auto res_stg4_update_0_sm164_253107 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_103_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_107_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_104);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_105);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_106);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_107_pack, stg3_FIFO_buf76_lane_107);
  auto res_stg4_update_0_sm164_263109 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_107_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_111_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_108);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_109);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_110);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_111_pack, stg3_FIFO_buf76_lane_111);
  auto res_stg4_update_0_sm164_273111 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_111_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_115_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_112);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_113);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_114);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_115_pack, stg3_FIFO_buf76_lane_115);
  auto res_stg4_update_0_sm164_283113 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_115_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_119_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_116);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_117);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_118);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_119_pack, stg3_FIFO_buf76_lane_119);
  auto res_stg4_update_0_sm164_293115 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_119_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_123_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_120);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_121);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_122);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_123_pack, stg3_FIFO_buf76_lane_123);
  auto res_stg4_update_0_sm164_303117 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_123_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_127_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_124);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_125);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_126);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_127_pack, stg3_FIFO_buf76_lane_127);
  auto res_stg4_update_0_sm164_313119 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_127_pack);
  hw_uint<512 > return_value3391;
  set_at<0, 512, 16>(return_value3391, res_stg4_update_0_sm164_03057);
  set_at<16, 512, 16>(return_value3391, res_stg4_update_0_sm164_13059);
  set_at<32, 512, 16>(return_value3391, res_stg4_update_0_sm164_23061);
  set_at<48, 512, 16>(return_value3391, res_stg4_update_0_sm164_33063);
  set_at<64, 512, 16>(return_value3391, res_stg4_update_0_sm164_43065);
  set_at<80, 512, 16>(return_value3391, res_stg4_update_0_sm164_53067);
  set_at<96, 512, 16>(return_value3391, res_stg4_update_0_sm164_63069);
  set_at<112, 512, 16>(return_value3391, res_stg4_update_0_sm164_73071);
  set_at<128, 512, 16>(return_value3391, res_stg4_update_0_sm164_83073);
  set_at<144, 512, 16>(return_value3391, res_stg4_update_0_sm164_93075);
  set_at<160, 512, 16>(return_value3391, res_stg4_update_0_sm164_103077);
  set_at<176, 512, 16>(return_value3391, res_stg4_update_0_sm164_113079);
  set_at<192, 512, 16>(return_value3391, res_stg4_update_0_sm164_123081);
  set_at<208, 512, 16>(return_value3391, res_stg4_update_0_sm164_133083);
  set_at<224, 512, 16>(return_value3391, res_stg4_update_0_sm164_143085);
  set_at<240, 512, 16>(return_value3391, res_stg4_update_0_sm164_153087);
  set_at<256, 512, 16>(return_value3391, res_stg4_update_0_sm164_163089);
  set_at<272, 512, 16>(return_value3391, res_stg4_update_0_sm164_173091);
  set_at<288, 512, 16>(return_value3391, res_stg4_update_0_sm164_183093);
  set_at<304, 512, 16>(return_value3391, res_stg4_update_0_sm164_193095);
  set_at<320, 512, 16>(return_value3391, res_stg4_update_0_sm164_203097);
  set_at<336, 512, 16>(return_value3391, res_stg4_update_0_sm164_213099);
  set_at<352, 512, 16>(return_value3391, res_stg4_update_0_sm164_223101);
  set_at<368, 512, 16>(return_value3391, res_stg4_update_0_sm164_233103);
  set_at<384, 512, 16>(return_value3391, res_stg4_update_0_sm164_243105);
  set_at<400, 512, 16>(return_value3391, res_stg4_update_0_sm164_253107);
  set_at<416, 512, 16>(return_value3391, res_stg4_update_0_sm164_263109);
  set_at<432, 512, 16>(return_value3391, res_stg4_update_0_sm164_273111);
  set_at<448, 512, 16>(return_value3391, res_stg4_update_0_sm164_283113);
  set_at<464, 512, 16>(return_value3391, res_stg4_update_0_sm164_293115);
  set_at<480, 512, 16>(return_value3391, res_stg4_update_0_sm164_303117);
  set_at<496, 512, 16>(return_value3391, res_stg4_update_0_sm164_313119);
  return return_value3391;

}

hw_uint<512> stg5_1_cu3393(hw_uint<16*128>& stg4_FIFO_buf84) {
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
  auto res_stg5_update_0_sm165_0177 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_3_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_7_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_4);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_5);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_6);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_7);
  auto res_stg5_update_0_sm165_1179 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_7_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_11_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_8);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_9);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_10);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_11);
  auto res_stg5_update_0_sm165_2181 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_11_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_15_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_12);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_13);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_14);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_15);
  auto res_stg5_update_0_sm165_3183 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_15_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_19_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_16);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_17);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_18);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_19);
  auto res_stg5_update_0_sm165_4185 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_19_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_23_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_20);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_21);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_22);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_23);
  auto res_stg5_update_0_sm165_5187 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_23_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_27_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_24);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_25);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_26);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_27);
  auto res_stg5_update_0_sm165_6189 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_27_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_31_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_28);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_29);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_30);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_31);
  auto res_stg5_update_0_sm165_7191 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_31_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_35_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_32);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_33);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_34);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_35);
  auto res_stg5_update_0_sm165_8193 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_35_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_39_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_36);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_37);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_38);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_39);
  auto res_stg5_update_0_sm165_9195 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_39_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_43_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_40);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_41);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_42);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_43);
  auto res_stg5_update_0_sm165_10197 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_43_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_47_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_44);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_45);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_46);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_47);
  auto res_stg5_update_0_sm165_11199 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_47_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_51_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_48);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_49);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_50);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_51);
  auto res_stg5_update_0_sm165_12201 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_51_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_55_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_52);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_53);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_54);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_55);
  auto res_stg5_update_0_sm165_13203 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_55_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_59_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_56);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_57);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_58);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_59);
  auto res_stg5_update_0_sm165_14205 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_59_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_63_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_60);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_61);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_62);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_63);
  auto res_stg5_update_0_sm165_15207 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_63_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_67_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_64);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_65);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_66);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_67_pack, stg4_FIFO_buf84_lane_67);
  auto res_stg5_update_0_sm165_16209 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_67_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_71_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_68);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_69);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_70);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_71_pack, stg4_FIFO_buf84_lane_71);
  auto res_stg5_update_0_sm165_17211 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_71_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_75_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_72);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_73);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_74);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_75_pack, stg4_FIFO_buf84_lane_75);
  auto res_stg5_update_0_sm165_18213 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_75_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_79_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_76);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_77);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_78);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_79_pack, stg4_FIFO_buf84_lane_79);
  auto res_stg5_update_0_sm165_19215 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_79_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_83_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_80);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_81);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_82);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_83_pack, stg4_FIFO_buf84_lane_83);
  auto res_stg5_update_0_sm165_20217 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_83_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_87_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_84);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_85);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_86);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_87_pack, stg4_FIFO_buf84_lane_87);
  auto res_stg5_update_0_sm165_21219 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_87_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_91_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_88);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_89);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_90);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_91_pack, stg4_FIFO_buf84_lane_91);
  auto res_stg5_update_0_sm165_22221 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_91_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_95_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_92);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_93);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_94);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_95_pack, stg4_FIFO_buf84_lane_95);
  auto res_stg5_update_0_sm165_23223 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_95_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_99_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_96);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_97);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_98);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_99_pack, stg4_FIFO_buf84_lane_99);
  auto res_stg5_update_0_sm165_24225 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_99_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_103_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_100);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_101);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_102);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_103_pack, stg4_FIFO_buf84_lane_103);
  auto res_stg5_update_0_sm165_25227 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_103_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_107_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_104);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_105);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_106);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_107_pack, stg4_FIFO_buf84_lane_107);
  auto res_stg5_update_0_sm165_26229 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_107_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_111_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_108);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_109);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_110);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_111_pack, stg4_FIFO_buf84_lane_111);
  auto res_stg5_update_0_sm165_27231 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_111_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_115_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_112);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_113);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_114);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_115_pack, stg4_FIFO_buf84_lane_115);
  auto res_stg5_update_0_sm165_28233 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_115_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_119_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_116);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_117);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_118);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_119_pack, stg4_FIFO_buf84_lane_119);
  auto res_stg5_update_0_sm165_29235 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_119_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_123_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_120);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_121);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_122);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_123_pack, stg4_FIFO_buf84_lane_123);
  auto res_stg5_update_0_sm165_30237 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_123_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_127_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_124);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_125);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_126);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_127_pack, stg4_FIFO_buf84_lane_127);
  auto res_stg5_update_0_sm165_31239 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_127_pack);
  hw_uint<512 > return_value3394;
  set_at<0, 512, 16>(return_value3394, res_stg5_update_0_sm165_0177);
  set_at<16, 512, 16>(return_value3394, res_stg5_update_0_sm165_1179);
  set_at<32, 512, 16>(return_value3394, res_stg5_update_0_sm165_2181);
  set_at<48, 512, 16>(return_value3394, res_stg5_update_0_sm165_3183);
  set_at<64, 512, 16>(return_value3394, res_stg5_update_0_sm165_4185);
  set_at<80, 512, 16>(return_value3394, res_stg5_update_0_sm165_5187);
  set_at<96, 512, 16>(return_value3394, res_stg5_update_0_sm165_6189);
  set_at<112, 512, 16>(return_value3394, res_stg5_update_0_sm165_7191);
  set_at<128, 512, 16>(return_value3394, res_stg5_update_0_sm165_8193);
  set_at<144, 512, 16>(return_value3394, res_stg5_update_0_sm165_9195);
  set_at<160, 512, 16>(return_value3394, res_stg5_update_0_sm165_10197);
  set_at<176, 512, 16>(return_value3394, res_stg5_update_0_sm165_11199);
  set_at<192, 512, 16>(return_value3394, res_stg5_update_0_sm165_12201);
  set_at<208, 512, 16>(return_value3394, res_stg5_update_0_sm165_13203);
  set_at<224, 512, 16>(return_value3394, res_stg5_update_0_sm165_14205);
  set_at<240, 512, 16>(return_value3394, res_stg5_update_0_sm165_15207);
  set_at<256, 512, 16>(return_value3394, res_stg5_update_0_sm165_16209);
  set_at<272, 512, 16>(return_value3394, res_stg5_update_0_sm165_17211);
  set_at<288, 512, 16>(return_value3394, res_stg5_update_0_sm165_18213);
  set_at<304, 512, 16>(return_value3394, res_stg5_update_0_sm165_19215);
  set_at<320, 512, 16>(return_value3394, res_stg5_update_0_sm165_20217);
  set_at<336, 512, 16>(return_value3394, res_stg5_update_0_sm165_21219);
  set_at<352, 512, 16>(return_value3394, res_stg5_update_0_sm165_22221);
  set_at<368, 512, 16>(return_value3394, res_stg5_update_0_sm165_23223);
  set_at<384, 512, 16>(return_value3394, res_stg5_update_0_sm165_24225);
  set_at<400, 512, 16>(return_value3394, res_stg5_update_0_sm165_25227);
  set_at<416, 512, 16>(return_value3394, res_stg5_update_0_sm165_26229);
  set_at<432, 512, 16>(return_value3394, res_stg5_update_0_sm165_27231);
  set_at<448, 512, 16>(return_value3394, res_stg5_update_0_sm165_28233);
  set_at<464, 512, 16>(return_value3394, res_stg5_update_0_sm165_29235);
  set_at<480, 512, 16>(return_value3394, res_stg5_update_0_sm165_30237);
  set_at<496, 512, 16>(return_value3394, res_stg5_update_0_sm165_31239);
  return return_value3394;

}

hw_uint<512> stg6_1_cu3396(hw_uint<16*128>& stg5_FIFO_buf92) {
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
  auto res_stg6_update_0_sm166_02225 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_3_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_7_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_4);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_5);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_6);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_7);
  auto res_stg6_update_0_sm166_12227 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_7_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_11_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_8);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_9);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_10);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_11);
  auto res_stg6_update_0_sm166_22229 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_11_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_15_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_12);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_13);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_14);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_15);
  auto res_stg6_update_0_sm166_32231 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_15_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_19_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_16);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_17);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_18);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_19);
  auto res_stg6_update_0_sm166_42233 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_19_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_23_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_20);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_21);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_22);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_23);
  auto res_stg6_update_0_sm166_52235 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_23_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_27_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_24);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_25);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_26);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_27);
  auto res_stg6_update_0_sm166_62237 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_27_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_31_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_28);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_29);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_30);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_31);
  auto res_stg6_update_0_sm166_72239 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_31_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_35_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_32);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_33);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_34);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_35);
  auto res_stg6_update_0_sm166_82241 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_35_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_39_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_36);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_37);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_38);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_39);
  auto res_stg6_update_0_sm166_92243 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_39_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_43_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_40);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_41);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_42);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_43);
  auto res_stg6_update_0_sm166_102245 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_43_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_47_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_44);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_45);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_46);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_47);
  auto res_stg6_update_0_sm166_112247 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_47_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_51_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_48);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_49);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_50);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_51);
  auto res_stg6_update_0_sm166_122249 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_51_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_55_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_52);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_53);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_54);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_55);
  auto res_stg6_update_0_sm166_132251 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_55_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_59_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_56);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_57);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_58);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_59);
  auto res_stg6_update_0_sm166_142253 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_59_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_63_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_60);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_61);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_62);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_63);
  auto res_stg6_update_0_sm166_152255 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_63_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_67_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_64);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_65);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_66);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_67_pack, stg5_FIFO_buf92_lane_67);
  auto res_stg6_update_0_sm166_162257 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_67_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_71_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_68);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_69);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_70);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_71_pack, stg5_FIFO_buf92_lane_71);
  auto res_stg6_update_0_sm166_172259 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_71_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_75_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_72);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_73);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_74);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_75_pack, stg5_FIFO_buf92_lane_75);
  auto res_stg6_update_0_sm166_182261 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_75_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_79_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_76);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_77);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_78);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_79_pack, stg5_FIFO_buf92_lane_79);
  auto res_stg6_update_0_sm166_192263 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_79_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_83_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_80);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_81);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_82);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_83_pack, stg5_FIFO_buf92_lane_83);
  auto res_stg6_update_0_sm166_202265 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_83_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_87_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_84);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_85);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_86);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_87_pack, stg5_FIFO_buf92_lane_87);
  auto res_stg6_update_0_sm166_212267 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_87_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_91_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_88);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_89);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_90);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_91_pack, stg5_FIFO_buf92_lane_91);
  auto res_stg6_update_0_sm166_222269 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_91_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_95_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_92);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_93);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_94);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_95_pack, stg5_FIFO_buf92_lane_95);
  auto res_stg6_update_0_sm166_232271 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_95_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_99_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_96);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_97);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_98);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_99_pack, stg5_FIFO_buf92_lane_99);
  auto res_stg6_update_0_sm166_242273 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_99_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_103_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_100);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_101);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_102);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_103_pack, stg5_FIFO_buf92_lane_103);
  auto res_stg6_update_0_sm166_252275 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_103_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_107_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_104);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_105);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_106);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_107_pack, stg5_FIFO_buf92_lane_107);
  auto res_stg6_update_0_sm166_262277 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_107_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_111_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_108);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_109);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_110);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_111_pack, stg5_FIFO_buf92_lane_111);
  auto res_stg6_update_0_sm166_272279 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_111_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_115_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_112);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_113);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_114);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_115_pack, stg5_FIFO_buf92_lane_115);
  auto res_stg6_update_0_sm166_282281 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_115_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_119_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_116);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_117);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_118);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_119_pack, stg5_FIFO_buf92_lane_119);
  auto res_stg6_update_0_sm166_292283 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_119_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_123_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_120);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_121);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_122);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_123_pack, stg5_FIFO_buf92_lane_123);
  auto res_stg6_update_0_sm166_302285 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_123_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_127_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_124);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_125);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_126);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_127_pack, stg5_FIFO_buf92_lane_127);
  auto res_stg6_update_0_sm166_312287 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_127_pack);
  hw_uint<512 > return_value3397;
  set_at<0, 512, 16>(return_value3397, res_stg6_update_0_sm166_02225);
  set_at<16, 512, 16>(return_value3397, res_stg6_update_0_sm166_12227);
  set_at<32, 512, 16>(return_value3397, res_stg6_update_0_sm166_22229);
  set_at<48, 512, 16>(return_value3397, res_stg6_update_0_sm166_32231);
  set_at<64, 512, 16>(return_value3397, res_stg6_update_0_sm166_42233);
  set_at<80, 512, 16>(return_value3397, res_stg6_update_0_sm166_52235);
  set_at<96, 512, 16>(return_value3397, res_stg6_update_0_sm166_62237);
  set_at<112, 512, 16>(return_value3397, res_stg6_update_0_sm166_72239);
  set_at<128, 512, 16>(return_value3397, res_stg6_update_0_sm166_82241);
  set_at<144, 512, 16>(return_value3397, res_stg6_update_0_sm166_92243);
  set_at<160, 512, 16>(return_value3397, res_stg6_update_0_sm166_102245);
  set_at<176, 512, 16>(return_value3397, res_stg6_update_0_sm166_112247);
  set_at<192, 512, 16>(return_value3397, res_stg6_update_0_sm166_122249);
  set_at<208, 512, 16>(return_value3397, res_stg6_update_0_sm166_132251);
  set_at<224, 512, 16>(return_value3397, res_stg6_update_0_sm166_142253);
  set_at<240, 512, 16>(return_value3397, res_stg6_update_0_sm166_152255);
  set_at<256, 512, 16>(return_value3397, res_stg6_update_0_sm166_162257);
  set_at<272, 512, 16>(return_value3397, res_stg6_update_0_sm166_172259);
  set_at<288, 512, 16>(return_value3397, res_stg6_update_0_sm166_182261);
  set_at<304, 512, 16>(return_value3397, res_stg6_update_0_sm166_192263);
  set_at<320, 512, 16>(return_value3397, res_stg6_update_0_sm166_202265);
  set_at<336, 512, 16>(return_value3397, res_stg6_update_0_sm166_212267);
  set_at<352, 512, 16>(return_value3397, res_stg6_update_0_sm166_222269);
  set_at<368, 512, 16>(return_value3397, res_stg6_update_0_sm166_232271);
  set_at<384, 512, 16>(return_value3397, res_stg6_update_0_sm166_242273);
  set_at<400, 512, 16>(return_value3397, res_stg6_update_0_sm166_252275);
  set_at<416, 512, 16>(return_value3397, res_stg6_update_0_sm166_262277);
  set_at<432, 512, 16>(return_value3397, res_stg6_update_0_sm166_272279);
  set_at<448, 512, 16>(return_value3397, res_stg6_update_0_sm166_282281);
  set_at<464, 512, 16>(return_value3397, res_stg6_update_0_sm166_292283);
  set_at<480, 512, 16>(return_value3397, res_stg6_update_0_sm166_302285);
  set_at<496, 512, 16>(return_value3397, res_stg6_update_0_sm166_312287);
  return return_value3397;

}

hw_uint<512> stg7_1_cu3399(hw_uint<16*128>& stg6_FIFO_buf100) {
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
  auto res_stg7_update_0_sm167_02289 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_3_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_7_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_4);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_5);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_6);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_7);
  auto res_stg7_update_0_sm167_12291 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_7_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_11_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_8);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_9);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_10);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_11);
  auto res_stg7_update_0_sm167_22293 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_11_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_15_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_12);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_13);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_14);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_15);
  auto res_stg7_update_0_sm167_32295 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_15_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_19_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_16);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_17);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_18);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_19);
  auto res_stg7_update_0_sm167_42297 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_19_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_23_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_20);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_21);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_22);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_23);
  auto res_stg7_update_0_sm167_52299 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_23_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_27_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_24);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_25);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_26);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_27);
  auto res_stg7_update_0_sm167_62301 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_27_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_31_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_28);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_29);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_30);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_31);
  auto res_stg7_update_0_sm167_72303 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_31_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_35_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_32);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_33);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_34);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_35);
  auto res_stg7_update_0_sm167_82305 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_35_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_39_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_36);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_37);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_38);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_39);
  auto res_stg7_update_0_sm167_92307 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_39_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_43_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_40);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_41);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_42);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_43);
  auto res_stg7_update_0_sm167_102309 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_43_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_47_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_44);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_45);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_46);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_47);
  auto res_stg7_update_0_sm167_112311 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_47_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_51_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_48);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_49);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_50);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_51);
  auto res_stg7_update_0_sm167_122313 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_51_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_55_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_52);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_53);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_54);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_55);
  auto res_stg7_update_0_sm167_132315 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_55_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_59_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_56);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_57);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_58);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_59);
  auto res_stg7_update_0_sm167_142317 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_59_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_63_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_60);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_61);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_62);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_63);
  auto res_stg7_update_0_sm167_152319 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_63_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_67_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_64);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_65);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_66);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_67_pack, stg6_FIFO_buf100_lane_67);
  auto res_stg7_update_0_sm167_162321 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_67_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_71_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_68);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_69);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_70);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_71_pack, stg6_FIFO_buf100_lane_71);
  auto res_stg7_update_0_sm167_172323 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_71_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_75_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_72);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_73);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_74);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_75_pack, stg6_FIFO_buf100_lane_75);
  auto res_stg7_update_0_sm167_182325 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_75_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_79_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_76);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_77);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_78);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_79_pack, stg6_FIFO_buf100_lane_79);
  auto res_stg7_update_0_sm167_192327 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_79_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_83_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_80);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_81);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_82);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_83_pack, stg6_FIFO_buf100_lane_83);
  auto res_stg7_update_0_sm167_202329 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_83_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_87_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_84);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_85);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_86);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_87_pack, stg6_FIFO_buf100_lane_87);
  auto res_stg7_update_0_sm167_212331 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_87_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_91_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_88);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_89);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_90);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_91_pack, stg6_FIFO_buf100_lane_91);
  auto res_stg7_update_0_sm167_222333 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_91_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_95_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_92);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_93);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_94);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_95_pack, stg6_FIFO_buf100_lane_95);
  auto res_stg7_update_0_sm167_232335 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_95_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_99_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_96);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_97);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_98);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_99_pack, stg6_FIFO_buf100_lane_99);
  auto res_stg7_update_0_sm167_242337 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_99_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_103_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_100);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_101);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_102);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_103_pack, stg6_FIFO_buf100_lane_103);
  auto res_stg7_update_0_sm167_252339 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_103_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_107_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_104);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_105);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_106);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_107_pack, stg6_FIFO_buf100_lane_107);
  auto res_stg7_update_0_sm167_262341 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_107_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_111_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_108);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_109);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_110);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_111_pack, stg6_FIFO_buf100_lane_111);
  auto res_stg7_update_0_sm167_272343 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_111_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_115_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_112);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_113);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_114);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_115_pack, stg6_FIFO_buf100_lane_115);
  auto res_stg7_update_0_sm167_282345 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_115_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_119_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_116);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_117);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_118);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_119_pack, stg6_FIFO_buf100_lane_119);
  auto res_stg7_update_0_sm167_292347 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_119_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_123_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_120);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_121);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_122);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_123_pack, stg6_FIFO_buf100_lane_123);
  auto res_stg7_update_0_sm167_302349 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_123_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_127_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_124);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_125);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_126);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_127_pack, stg6_FIFO_buf100_lane_127);
  auto res_stg7_update_0_sm167_312351 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_127_pack);
  hw_uint<512 > return_value3400;
  set_at<0, 512, 16>(return_value3400, res_stg7_update_0_sm167_02289);
  set_at<16, 512, 16>(return_value3400, res_stg7_update_0_sm167_12291);
  set_at<32, 512, 16>(return_value3400, res_stg7_update_0_sm167_22293);
  set_at<48, 512, 16>(return_value3400, res_stg7_update_0_sm167_32295);
  set_at<64, 512, 16>(return_value3400, res_stg7_update_0_sm167_42297);
  set_at<80, 512, 16>(return_value3400, res_stg7_update_0_sm167_52299);
  set_at<96, 512, 16>(return_value3400, res_stg7_update_0_sm167_62301);
  set_at<112, 512, 16>(return_value3400, res_stg7_update_0_sm167_72303);
  set_at<128, 512, 16>(return_value3400, res_stg7_update_0_sm167_82305);
  set_at<144, 512, 16>(return_value3400, res_stg7_update_0_sm167_92307);
  set_at<160, 512, 16>(return_value3400, res_stg7_update_0_sm167_102309);
  set_at<176, 512, 16>(return_value3400, res_stg7_update_0_sm167_112311);
  set_at<192, 512, 16>(return_value3400, res_stg7_update_0_sm167_122313);
  set_at<208, 512, 16>(return_value3400, res_stg7_update_0_sm167_132315);
  set_at<224, 512, 16>(return_value3400, res_stg7_update_0_sm167_142317);
  set_at<240, 512, 16>(return_value3400, res_stg7_update_0_sm167_152319);
  set_at<256, 512, 16>(return_value3400, res_stg7_update_0_sm167_162321);
  set_at<272, 512, 16>(return_value3400, res_stg7_update_0_sm167_172323);
  set_at<288, 512, 16>(return_value3400, res_stg7_update_0_sm167_182325);
  set_at<304, 512, 16>(return_value3400, res_stg7_update_0_sm167_192327);
  set_at<320, 512, 16>(return_value3400, res_stg7_update_0_sm167_202329);
  set_at<336, 512, 16>(return_value3400, res_stg7_update_0_sm167_212331);
  set_at<352, 512, 16>(return_value3400, res_stg7_update_0_sm167_222333);
  set_at<368, 512, 16>(return_value3400, res_stg7_update_0_sm167_232335);
  set_at<384, 512, 16>(return_value3400, res_stg7_update_0_sm167_242337);
  set_at<400, 512, 16>(return_value3400, res_stg7_update_0_sm167_252339);
  set_at<416, 512, 16>(return_value3400, res_stg7_update_0_sm167_262341);
  set_at<432, 512, 16>(return_value3400, res_stg7_update_0_sm167_272343);
  set_at<448, 512, 16>(return_value3400, res_stg7_update_0_sm167_282345);
  set_at<464, 512, 16>(return_value3400, res_stg7_update_0_sm167_292347);
  set_at<480, 512, 16>(return_value3400, res_stg7_update_0_sm167_302349);
  set_at<496, 512, 16>(return_value3400, res_stg7_update_0_sm167_312351);
  return return_value3400;

}

hw_uint<512> stg8_1_cu3402(hw_uint<16*128>& stg7_FIFO_buf108) {
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
  auto res_stg8_update_0_sm168_02353 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_3_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_7_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_4);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_5);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_6);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_7);
  auto res_stg8_update_0_sm168_12355 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_7_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_11_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_8);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_9);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_10);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_11);
  auto res_stg8_update_0_sm168_22357 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_11_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_15_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_12);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_13);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_14);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_15);
  auto res_stg8_update_0_sm168_32359 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_15_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_19_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_16);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_17);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_18);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_19);
  auto res_stg8_update_0_sm168_42361 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_19_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_23_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_20);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_21);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_22);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_23);
  auto res_stg8_update_0_sm168_52363 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_23_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_27_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_24);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_25);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_26);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_27);
  auto res_stg8_update_0_sm168_62365 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_27_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_31_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_28);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_29);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_30);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_31);
  auto res_stg8_update_0_sm168_72367 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_31_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_35_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_32);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_33);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_34);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_35);
  auto res_stg8_update_0_sm168_82369 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_35_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_39_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_36);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_37);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_38);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_39);
  auto res_stg8_update_0_sm168_92371 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_39_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_43_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_40);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_41);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_42);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_43);
  auto res_stg8_update_0_sm168_102373 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_43_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_47_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_44);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_45);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_46);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_47);
  auto res_stg8_update_0_sm168_112375 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_47_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_51_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_48);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_49);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_50);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_51);
  auto res_stg8_update_0_sm168_122377 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_51_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_55_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_52);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_53);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_54);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_55);
  auto res_stg8_update_0_sm168_132379 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_55_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_59_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_56);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_57);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_58);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_59);
  auto res_stg8_update_0_sm168_142381 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_59_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_63_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_60);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_61);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_62);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_63);
  auto res_stg8_update_0_sm168_152383 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_63_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_67_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_64);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_65);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_66);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_67_pack, stg7_FIFO_buf108_lane_67);
  auto res_stg8_update_0_sm168_162385 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_67_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_71_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_68);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_69);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_70);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_71_pack, stg7_FIFO_buf108_lane_71);
  auto res_stg8_update_0_sm168_172387 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_71_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_75_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_72);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_73);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_74);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_75_pack, stg7_FIFO_buf108_lane_75);
  auto res_stg8_update_0_sm168_182389 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_75_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_79_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_76);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_77);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_78);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_79_pack, stg7_FIFO_buf108_lane_79);
  auto res_stg8_update_0_sm168_192391 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_79_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_83_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_80);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_81);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_82);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_83_pack, stg7_FIFO_buf108_lane_83);
  auto res_stg8_update_0_sm168_202393 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_83_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_87_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_84);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_85);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_86);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_87_pack, stg7_FIFO_buf108_lane_87);
  auto res_stg8_update_0_sm168_212395 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_87_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_91_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_88);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_89);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_90);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_91_pack, stg7_FIFO_buf108_lane_91);
  auto res_stg8_update_0_sm168_222397 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_91_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_95_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_92);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_93);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_94);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_95_pack, stg7_FIFO_buf108_lane_95);
  auto res_stg8_update_0_sm168_232399 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_95_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_99_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_96);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_97);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_98);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_99_pack, stg7_FIFO_buf108_lane_99);
  auto res_stg8_update_0_sm168_242401 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_99_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_103_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_100);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_101);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_102);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_103_pack, stg7_FIFO_buf108_lane_103);
  auto res_stg8_update_0_sm168_252403 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_103_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_107_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_104);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_105);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_106);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_107_pack, stg7_FIFO_buf108_lane_107);
  auto res_stg8_update_0_sm168_262405 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_107_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_111_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_108);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_109);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_110);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_111_pack, stg7_FIFO_buf108_lane_111);
  auto res_stg8_update_0_sm168_272407 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_111_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_115_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_112);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_113);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_114);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_115_pack, stg7_FIFO_buf108_lane_115);
  auto res_stg8_update_0_sm168_282409 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_115_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_119_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_116);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_117);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_118);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_119_pack, stg7_FIFO_buf108_lane_119);
  auto res_stg8_update_0_sm168_292411 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_119_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_123_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_120);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_121);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_122);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_123_pack, stg7_FIFO_buf108_lane_123);
  auto res_stg8_update_0_sm168_302413 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_123_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_127_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_124);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_125);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_126);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_127_pack, stg7_FIFO_buf108_lane_127);
  auto res_stg8_update_0_sm168_312415 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_127_pack);
  hw_uint<512 > return_value3403;
  set_at<0, 512, 16>(return_value3403, res_stg8_update_0_sm168_02353);
  set_at<16, 512, 16>(return_value3403, res_stg8_update_0_sm168_12355);
  set_at<32, 512, 16>(return_value3403, res_stg8_update_0_sm168_22357);
  set_at<48, 512, 16>(return_value3403, res_stg8_update_0_sm168_32359);
  set_at<64, 512, 16>(return_value3403, res_stg8_update_0_sm168_42361);
  set_at<80, 512, 16>(return_value3403, res_stg8_update_0_sm168_52363);
  set_at<96, 512, 16>(return_value3403, res_stg8_update_0_sm168_62365);
  set_at<112, 512, 16>(return_value3403, res_stg8_update_0_sm168_72367);
  set_at<128, 512, 16>(return_value3403, res_stg8_update_0_sm168_82369);
  set_at<144, 512, 16>(return_value3403, res_stg8_update_0_sm168_92371);
  set_at<160, 512, 16>(return_value3403, res_stg8_update_0_sm168_102373);
  set_at<176, 512, 16>(return_value3403, res_stg8_update_0_sm168_112375);
  set_at<192, 512, 16>(return_value3403, res_stg8_update_0_sm168_122377);
  set_at<208, 512, 16>(return_value3403, res_stg8_update_0_sm168_132379);
  set_at<224, 512, 16>(return_value3403, res_stg8_update_0_sm168_142381);
  set_at<240, 512, 16>(return_value3403, res_stg8_update_0_sm168_152383);
  set_at<256, 512, 16>(return_value3403, res_stg8_update_0_sm168_162385);
  set_at<272, 512, 16>(return_value3403, res_stg8_update_0_sm168_172387);
  set_at<288, 512, 16>(return_value3403, res_stg8_update_0_sm168_182389);
  set_at<304, 512, 16>(return_value3403, res_stg8_update_0_sm168_192391);
  set_at<320, 512, 16>(return_value3403, res_stg8_update_0_sm168_202393);
  set_at<336, 512, 16>(return_value3403, res_stg8_update_0_sm168_212395);
  set_at<352, 512, 16>(return_value3403, res_stg8_update_0_sm168_222397);
  set_at<368, 512, 16>(return_value3403, res_stg8_update_0_sm168_232399);
  set_at<384, 512, 16>(return_value3403, res_stg8_update_0_sm168_242401);
  set_at<400, 512, 16>(return_value3403, res_stg8_update_0_sm168_252403);
  set_at<416, 512, 16>(return_value3403, res_stg8_update_0_sm168_262405);
  set_at<432, 512, 16>(return_value3403, res_stg8_update_0_sm168_272407);
  set_at<448, 512, 16>(return_value3403, res_stg8_update_0_sm168_282409);
  set_at<464, 512, 16>(return_value3403, res_stg8_update_0_sm168_292411);
  set_at<480, 512, 16>(return_value3403, res_stg8_update_0_sm168_302413);
  set_at<496, 512, 16>(return_value3403, res_stg8_update_0_sm168_312415);
  return return_value3403;

}

hw_uint<512> stg9_1_cu3405(hw_uint<16*128>& stg8_FIFO_buf116) {
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
  auto res_stg9_update_0_sm169_02417 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_3_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_7_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_4);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_5);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_6);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_7);
  auto res_stg9_update_0_sm169_12419 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_7_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_11_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_8);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_9);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_10);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_11);
  auto res_stg9_update_0_sm169_22421 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_11_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_15_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_12);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_13);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_14);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_15);
  auto res_stg9_update_0_sm169_32423 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_15_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_19_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_16);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_17);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_18);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_19);
  auto res_stg9_update_0_sm169_42425 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_19_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_23_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_20);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_21);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_22);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_23);
  auto res_stg9_update_0_sm169_52427 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_23_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_27_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_24);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_25);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_26);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_27);
  auto res_stg9_update_0_sm169_62429 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_27_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_31_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_28);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_29);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_30);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_31);
  auto res_stg9_update_0_sm169_72431 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_31_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_35_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_32);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_33);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_34);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_35);
  auto res_stg9_update_0_sm169_82433 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_35_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_39_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_36);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_37);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_38);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_39);
  auto res_stg9_update_0_sm169_92435 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_39_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_43_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_40);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_41);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_42);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_43);
  auto res_stg9_update_0_sm169_102437 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_43_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_47_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_44);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_45);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_46);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_47);
  auto res_stg9_update_0_sm169_112439 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_47_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_51_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_48);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_49);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_50);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_51);
  auto res_stg9_update_0_sm169_122441 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_51_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_55_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_52);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_53);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_54);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_55);
  auto res_stg9_update_0_sm169_132443 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_55_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_59_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_56);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_57);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_58);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_59);
  auto res_stg9_update_0_sm169_142445 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_59_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_63_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_60);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_61);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_62);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_63);
  auto res_stg9_update_0_sm169_152447 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_63_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_67_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_64);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_65);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_66);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_67_pack, stg8_FIFO_buf116_lane_67);
  auto res_stg9_update_0_sm169_162449 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_67_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_71_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_68);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_69);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_70);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_71_pack, stg8_FIFO_buf116_lane_71);
  auto res_stg9_update_0_sm169_172451 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_71_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_75_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_72);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_73);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_74);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_75_pack, stg8_FIFO_buf116_lane_75);
  auto res_stg9_update_0_sm169_182453 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_75_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_79_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_76);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_77);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_78);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_79_pack, stg8_FIFO_buf116_lane_79);
  auto res_stg9_update_0_sm169_192455 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_79_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_83_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_80);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_81);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_82);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_83_pack, stg8_FIFO_buf116_lane_83);
  auto res_stg9_update_0_sm169_202457 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_83_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_87_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_84);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_85);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_86);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_87_pack, stg8_FIFO_buf116_lane_87);
  auto res_stg9_update_0_sm169_212459 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_87_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_91_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_88);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_89);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_90);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_91_pack, stg8_FIFO_buf116_lane_91);
  auto res_stg9_update_0_sm169_222461 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_91_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_95_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_92);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_93);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_94);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_95_pack, stg8_FIFO_buf116_lane_95);
  auto res_stg9_update_0_sm169_232463 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_95_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_99_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_96);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_97);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_98);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_99_pack, stg8_FIFO_buf116_lane_99);
  auto res_stg9_update_0_sm169_242465 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_99_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_103_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_100);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_101);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_102);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_103_pack, stg8_FIFO_buf116_lane_103);
  auto res_stg9_update_0_sm169_252467 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_103_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_107_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_104);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_105);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_106);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_107_pack, stg8_FIFO_buf116_lane_107);
  auto res_stg9_update_0_sm169_262469 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_107_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_111_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_108);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_109);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_110);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_111_pack, stg8_FIFO_buf116_lane_111);
  auto res_stg9_update_0_sm169_272471 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_111_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_115_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_112);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_113);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_114);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_115_pack, stg8_FIFO_buf116_lane_115);
  auto res_stg9_update_0_sm169_282473 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_115_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_119_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_116);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_117);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_118);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_119_pack, stg8_FIFO_buf116_lane_119);
  auto res_stg9_update_0_sm169_292475 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_119_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_123_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_120);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_121);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_122);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_123_pack, stg8_FIFO_buf116_lane_123);
  auto res_stg9_update_0_sm169_302477 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_123_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_127_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_124);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_125);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_126);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_127_pack, stg8_FIFO_buf116_lane_127);
  auto res_stg9_update_0_sm169_312479 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_127_pack);
  hw_uint<512 > return_value3406;
  set_at<0, 512, 16>(return_value3406, res_stg9_update_0_sm169_02417);
  set_at<16, 512, 16>(return_value3406, res_stg9_update_0_sm169_12419);
  set_at<32, 512, 16>(return_value3406, res_stg9_update_0_sm169_22421);
  set_at<48, 512, 16>(return_value3406, res_stg9_update_0_sm169_32423);
  set_at<64, 512, 16>(return_value3406, res_stg9_update_0_sm169_42425);
  set_at<80, 512, 16>(return_value3406, res_stg9_update_0_sm169_52427);
  set_at<96, 512, 16>(return_value3406, res_stg9_update_0_sm169_62429);
  set_at<112, 512, 16>(return_value3406, res_stg9_update_0_sm169_72431);
  set_at<128, 512, 16>(return_value3406, res_stg9_update_0_sm169_82433);
  set_at<144, 512, 16>(return_value3406, res_stg9_update_0_sm169_92435);
  set_at<160, 512, 16>(return_value3406, res_stg9_update_0_sm169_102437);
  set_at<176, 512, 16>(return_value3406, res_stg9_update_0_sm169_112439);
  set_at<192, 512, 16>(return_value3406, res_stg9_update_0_sm169_122441);
  set_at<208, 512, 16>(return_value3406, res_stg9_update_0_sm169_132443);
  set_at<224, 512, 16>(return_value3406, res_stg9_update_0_sm169_142445);
  set_at<240, 512, 16>(return_value3406, res_stg9_update_0_sm169_152447);
  set_at<256, 512, 16>(return_value3406, res_stg9_update_0_sm169_162449);
  set_at<272, 512, 16>(return_value3406, res_stg9_update_0_sm169_172451);
  set_at<288, 512, 16>(return_value3406, res_stg9_update_0_sm169_182453);
  set_at<304, 512, 16>(return_value3406, res_stg9_update_0_sm169_192455);
  set_at<320, 512, 16>(return_value3406, res_stg9_update_0_sm169_202457);
  set_at<336, 512, 16>(return_value3406, res_stg9_update_0_sm169_212459);
  set_at<352, 512, 16>(return_value3406, res_stg9_update_0_sm169_222461);
  set_at<368, 512, 16>(return_value3406, res_stg9_update_0_sm169_232463);
  set_at<384, 512, 16>(return_value3406, res_stg9_update_0_sm169_242465);
  set_at<400, 512, 16>(return_value3406, res_stg9_update_0_sm169_252467);
  set_at<416, 512, 16>(return_value3406, res_stg9_update_0_sm169_262469);
  set_at<432, 512, 16>(return_value3406, res_stg9_update_0_sm169_272471);
  set_at<448, 512, 16>(return_value3406, res_stg9_update_0_sm169_282473);
  set_at<464, 512, 16>(return_value3406, res_stg9_update_0_sm169_292475);
  set_at<480, 512, 16>(return_value3406, res_stg9_update_0_sm169_302477);
  set_at<496, 512, 16>(return_value3406, res_stg9_update_0_sm169_312479);
  return return_value3406;

}

hw_uint<512> stg10_1_cu3408(hw_uint<16*128>& stg9_FIFO_buf124) {
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
  auto res_stg10_update_0_sm170_02481 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_3_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_7_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_4);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_5);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_6);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_7);
  auto res_stg10_update_0_sm170_12483 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_7_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_11_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_8);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_9);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_10);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_11);
  auto res_stg10_update_0_sm170_22485 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_11_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_15_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_12);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_13);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_14);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_15);
  auto res_stg10_update_0_sm170_32487 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_15_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_19_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_16);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_17);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_18);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_19);
  auto res_stg10_update_0_sm170_42489 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_19_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_23_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_20);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_21);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_22);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_23);
  auto res_stg10_update_0_sm170_52491 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_23_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_27_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_24);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_25);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_26);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_27);
  auto res_stg10_update_0_sm170_62493 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_27_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_31_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_28);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_29);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_30);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_31);
  auto res_stg10_update_0_sm170_72495 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_31_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_35_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_32);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_33);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_34);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_35);
  auto res_stg10_update_0_sm170_82497 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_35_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_39_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_36);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_37);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_38);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_39);
  auto res_stg10_update_0_sm170_92499 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_39_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_43_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_40);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_41);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_42);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_43);
  auto res_stg10_update_0_sm170_102501 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_43_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_47_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_44);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_45);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_46);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_47);
  auto res_stg10_update_0_sm170_112503 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_47_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_51_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_48);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_49);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_50);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_51);
  auto res_stg10_update_0_sm170_122505 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_51_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_55_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_52);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_53);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_54);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_55);
  auto res_stg10_update_0_sm170_132507 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_55_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_59_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_56);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_57);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_58);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_59);
  auto res_stg10_update_0_sm170_142509 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_59_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_63_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_60);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_61);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_62);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_63);
  auto res_stg10_update_0_sm170_152511 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_63_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_67_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_64);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_65);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_66);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_67);
  auto res_stg10_update_0_sm170_162513 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_67_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_71_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_68);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_69);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_70);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_71);
  auto res_stg10_update_0_sm170_172515 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_71_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_75_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_72);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_73);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_74);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_75);
  auto res_stg10_update_0_sm170_182517 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_75_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_79_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_76);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_77);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_78);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_79);
  auto res_stg10_update_0_sm170_192519 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_79_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_83_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_80);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_81);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_82);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_83);
  auto res_stg10_update_0_sm170_202521 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_83_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_87_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_84);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_85);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_86);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_87);
  auto res_stg10_update_0_sm170_212523 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_87_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_91_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_88);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_89);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_90);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_91);
  auto res_stg10_update_0_sm170_222525 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_91_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_95_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_92);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_93);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_94);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_95);
  auto res_stg10_update_0_sm170_232527 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_95_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_99_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_96);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_97);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_98);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_99);
  auto res_stg10_update_0_sm170_242529 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_99_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_103_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_100);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_101);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_102);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_103);
  auto res_stg10_update_0_sm170_252531 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_103_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_107_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_104);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_105);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_106);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_107);
  auto res_stg10_update_0_sm170_262533 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_107_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_111_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_108);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_109);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_110);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_111);
  auto res_stg10_update_0_sm170_272535 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_111_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_115_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_112);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_113);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_114);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_115);
  auto res_stg10_update_0_sm170_282537 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_115_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_119_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_116);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_117);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_118);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_119);
  auto res_stg10_update_0_sm170_292539 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_119_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_123_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_120);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_121);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_122);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_123);
  auto res_stg10_update_0_sm170_302541 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_123_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_127_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_124);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_125);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_126);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_127);
  auto res_stg10_update_0_sm170_312543 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_127_pack);
  hw_uint<512 > return_value3409;
  set_at<0, 512, 16>(return_value3409, res_stg10_update_0_sm170_02481);
  set_at<16, 512, 16>(return_value3409, res_stg10_update_0_sm170_12483);
  set_at<32, 512, 16>(return_value3409, res_stg10_update_0_sm170_22485);
  set_at<48, 512, 16>(return_value3409, res_stg10_update_0_sm170_32487);
  set_at<64, 512, 16>(return_value3409, res_stg10_update_0_sm170_42489);
  set_at<80, 512, 16>(return_value3409, res_stg10_update_0_sm170_52491);
  set_at<96, 512, 16>(return_value3409, res_stg10_update_0_sm170_62493);
  set_at<112, 512, 16>(return_value3409, res_stg10_update_0_sm170_72495);
  set_at<128, 512, 16>(return_value3409, res_stg10_update_0_sm170_82497);
  set_at<144, 512, 16>(return_value3409, res_stg10_update_0_sm170_92499);
  set_at<160, 512, 16>(return_value3409, res_stg10_update_0_sm170_102501);
  set_at<176, 512, 16>(return_value3409, res_stg10_update_0_sm170_112503);
  set_at<192, 512, 16>(return_value3409, res_stg10_update_0_sm170_122505);
  set_at<208, 512, 16>(return_value3409, res_stg10_update_0_sm170_132507);
  set_at<224, 512, 16>(return_value3409, res_stg10_update_0_sm170_142509);
  set_at<240, 512, 16>(return_value3409, res_stg10_update_0_sm170_152511);
  set_at<256, 512, 16>(return_value3409, res_stg10_update_0_sm170_162513);
  set_at<272, 512, 16>(return_value3409, res_stg10_update_0_sm170_172515);
  set_at<288, 512, 16>(return_value3409, res_stg10_update_0_sm170_182517);
  set_at<304, 512, 16>(return_value3409, res_stg10_update_0_sm170_192519);
  set_at<320, 512, 16>(return_value3409, res_stg10_update_0_sm170_202521);
  set_at<336, 512, 16>(return_value3409, res_stg10_update_0_sm170_212523);
  set_at<352, 512, 16>(return_value3409, res_stg10_update_0_sm170_222525);
  set_at<368, 512, 16>(return_value3409, res_stg10_update_0_sm170_232527);
  set_at<384, 512, 16>(return_value3409, res_stg10_update_0_sm170_242529);
  set_at<400, 512, 16>(return_value3409, res_stg10_update_0_sm170_252531);
  set_at<416, 512, 16>(return_value3409, res_stg10_update_0_sm170_262533);
  set_at<432, 512, 16>(return_value3409, res_stg10_update_0_sm170_272535);
  set_at<448, 512, 16>(return_value3409, res_stg10_update_0_sm170_282537);
  set_at<464, 512, 16>(return_value3409, res_stg10_update_0_sm170_292539);
  set_at<480, 512, 16>(return_value3409, res_stg10_update_0_sm170_302541);
  set_at<496, 512, 16>(return_value3409, res_stg10_update_0_sm170_312543);
  return return_value3409;

}

hw_uint<512> stg11_1_cu3411(hw_uint<16*128>& stg10_FIFO_buf28) {
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
  auto res_stg11_update_0_sm171_02545 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_3_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_7_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_4);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_5);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_6);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_7);
  auto res_stg11_update_0_sm171_12547 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_7_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_11_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_8);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_9);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_10);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_11);
  auto res_stg11_update_0_sm171_22549 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_11_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_15_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_12);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_13);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_14);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_15);
  auto res_stg11_update_0_sm171_32551 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_15_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_19_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_16);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_17);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_18);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_19);
  auto res_stg11_update_0_sm171_42553 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_19_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_23_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_20);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_21);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_22);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_23);
  auto res_stg11_update_0_sm171_52555 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_23_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_27_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_24);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_25);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_26);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_27);
  auto res_stg11_update_0_sm171_62557 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_27_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_31_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_28);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_29);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_30);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_31);
  auto res_stg11_update_0_sm171_72559 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_31_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_35_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_32);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_33);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_34);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_35);
  auto res_stg11_update_0_sm171_82561 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_35_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_39_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_36);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_37);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_38);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_39);
  auto res_stg11_update_0_sm171_92563 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_39_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_43_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_40);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_41);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_42);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_43);
  auto res_stg11_update_0_sm171_102565 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_43_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_47_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_44);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_45);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_46);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_47);
  auto res_stg11_update_0_sm171_112567 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_47_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_51_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_48);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_49);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_50);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_51);
  auto res_stg11_update_0_sm171_122569 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_51_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_55_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_52);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_53);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_54);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_55);
  auto res_stg11_update_0_sm171_132571 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_55_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_59_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_56);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_57);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_58);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_59);
  auto res_stg11_update_0_sm171_142573 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_59_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_63_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_60);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_61);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_62);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_63);
  auto res_stg11_update_0_sm171_152575 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_63_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_67_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_64);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_65);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_66);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_67_pack, stg10_FIFO_buf28_lane_67);
  auto res_stg11_update_0_sm171_162577 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_67_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_71_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_68);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_69);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_70);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_71_pack, stg10_FIFO_buf28_lane_71);
  auto res_stg11_update_0_sm171_172579 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_71_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_75_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_72);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_73);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_74);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_75_pack, stg10_FIFO_buf28_lane_75);
  auto res_stg11_update_0_sm171_182581 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_75_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_79_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_76);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_77);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_78);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_79_pack, stg10_FIFO_buf28_lane_79);
  auto res_stg11_update_0_sm171_192583 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_79_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_83_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_80);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_81);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_82);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_83_pack, stg10_FIFO_buf28_lane_83);
  auto res_stg11_update_0_sm171_202585 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_83_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_87_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_84);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_85);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_86);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_87_pack, stg10_FIFO_buf28_lane_87);
  auto res_stg11_update_0_sm171_212587 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_87_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_91_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_88);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_89);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_90);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_91_pack, stg10_FIFO_buf28_lane_91);
  auto res_stg11_update_0_sm171_222589 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_91_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_95_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_92);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_93);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_94);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_95_pack, stg10_FIFO_buf28_lane_95);
  auto res_stg11_update_0_sm171_232591 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_95_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_99_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_96);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_97);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_98);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_99_pack, stg10_FIFO_buf28_lane_99);
  auto res_stg11_update_0_sm171_242593 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_99_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_103_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_100);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_101);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_102);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_103_pack, stg10_FIFO_buf28_lane_103);
  auto res_stg11_update_0_sm171_252595 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_103_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_107_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_104);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_105);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_106);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_107_pack, stg10_FIFO_buf28_lane_107);
  auto res_stg11_update_0_sm171_262597 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_107_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_111_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_108);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_109);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_110);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_111_pack, stg10_FIFO_buf28_lane_111);
  auto res_stg11_update_0_sm171_272599 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_111_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_115_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_112);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_113);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_114);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_115_pack, stg10_FIFO_buf28_lane_115);
  auto res_stg11_update_0_sm171_282601 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_115_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_119_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_116);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_117);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_118);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_119_pack, stg10_FIFO_buf28_lane_119);
  auto res_stg11_update_0_sm171_292603 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_119_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_123_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_120);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_121);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_122);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_123_pack, stg10_FIFO_buf28_lane_123);
  auto res_stg11_update_0_sm171_302605 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_123_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_127_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_124);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_125);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_126);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_127_pack, stg10_FIFO_buf28_lane_127);
  auto res_stg11_update_0_sm171_312607 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_127_pack);
  hw_uint<512 > return_value3412;
  set_at<0, 512, 16>(return_value3412, res_stg11_update_0_sm171_02545);
  set_at<16, 512, 16>(return_value3412, res_stg11_update_0_sm171_12547);
  set_at<32, 512, 16>(return_value3412, res_stg11_update_0_sm171_22549);
  set_at<48, 512, 16>(return_value3412, res_stg11_update_0_sm171_32551);
  set_at<64, 512, 16>(return_value3412, res_stg11_update_0_sm171_42553);
  set_at<80, 512, 16>(return_value3412, res_stg11_update_0_sm171_52555);
  set_at<96, 512, 16>(return_value3412, res_stg11_update_0_sm171_62557);
  set_at<112, 512, 16>(return_value3412, res_stg11_update_0_sm171_72559);
  set_at<128, 512, 16>(return_value3412, res_stg11_update_0_sm171_82561);
  set_at<144, 512, 16>(return_value3412, res_stg11_update_0_sm171_92563);
  set_at<160, 512, 16>(return_value3412, res_stg11_update_0_sm171_102565);
  set_at<176, 512, 16>(return_value3412, res_stg11_update_0_sm171_112567);
  set_at<192, 512, 16>(return_value3412, res_stg11_update_0_sm171_122569);
  set_at<208, 512, 16>(return_value3412, res_stg11_update_0_sm171_132571);
  set_at<224, 512, 16>(return_value3412, res_stg11_update_0_sm171_142573);
  set_at<240, 512, 16>(return_value3412, res_stg11_update_0_sm171_152575);
  set_at<256, 512, 16>(return_value3412, res_stg11_update_0_sm171_162577);
  set_at<272, 512, 16>(return_value3412, res_stg11_update_0_sm171_172579);
  set_at<288, 512, 16>(return_value3412, res_stg11_update_0_sm171_182581);
  set_at<304, 512, 16>(return_value3412, res_stg11_update_0_sm171_192583);
  set_at<320, 512, 16>(return_value3412, res_stg11_update_0_sm171_202585);
  set_at<336, 512, 16>(return_value3412, res_stg11_update_0_sm171_212587);
  set_at<352, 512, 16>(return_value3412, res_stg11_update_0_sm171_222589);
  set_at<368, 512, 16>(return_value3412, res_stg11_update_0_sm171_232591);
  set_at<384, 512, 16>(return_value3412, res_stg11_update_0_sm171_242593);
  set_at<400, 512, 16>(return_value3412, res_stg11_update_0_sm171_252595);
  set_at<416, 512, 16>(return_value3412, res_stg11_update_0_sm171_262597);
  set_at<432, 512, 16>(return_value3412, res_stg11_update_0_sm171_272599);
  set_at<448, 512, 16>(return_value3412, res_stg11_update_0_sm171_282601);
  set_at<464, 512, 16>(return_value3412, res_stg11_update_0_sm171_292603);
  set_at<480, 512, 16>(return_value3412, res_stg11_update_0_sm171_302605);
  set_at<496, 512, 16>(return_value3412, res_stg11_update_0_sm171_312607);
  return return_value3412;

}

hw_uint<512> stg12_1_cu3414(hw_uint<16*128>& stg11_FIFO_buf36) {
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
  auto res_stg12_update_0_sm172_02609 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_3_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_7_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_4);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_5);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_6);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_7);
  auto res_stg12_update_0_sm172_12611 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_7_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_11_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_8);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_9);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_10);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_11);
  auto res_stg12_update_0_sm172_22613 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_11_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_15_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_12);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_13);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_14);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_15);
  auto res_stg12_update_0_sm172_32615 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_15_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_19_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_16);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_17);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_18);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_19);
  auto res_stg12_update_0_sm172_42617 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_19_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_23_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_20);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_21);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_22);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_23);
  auto res_stg12_update_0_sm172_52619 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_23_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_27_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_24);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_25);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_26);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_27);
  auto res_stg12_update_0_sm172_62621 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_27_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_31_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_28);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_29);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_30);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_31);
  auto res_stg12_update_0_sm172_72623 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_31_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_35_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_32);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_33);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_34);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_35);
  auto res_stg12_update_0_sm172_82625 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_35_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_39_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_36);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_37);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_38);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_39);
  auto res_stg12_update_0_sm172_92627 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_39_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_43_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_40);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_41);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_42);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_43);
  auto res_stg12_update_0_sm172_102629 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_43_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_47_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_44);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_45);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_46);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_47);
  auto res_stg12_update_0_sm172_112631 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_47_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_51_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_48);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_49);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_50);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_51);
  auto res_stg12_update_0_sm172_122633 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_51_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_55_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_52);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_53);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_54);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_55);
  auto res_stg12_update_0_sm172_132635 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_55_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_59_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_56);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_57);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_58);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_59);
  auto res_stg12_update_0_sm172_142637 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_59_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_63_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_60);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_61);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_62);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_63);
  auto res_stg12_update_0_sm172_152639 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_63_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_67_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_64);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_65);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_66);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_67_pack, stg11_FIFO_buf36_lane_67);
  auto res_stg12_update_0_sm172_162641 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_67_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_71_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_68);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_69);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_70);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_71_pack, stg11_FIFO_buf36_lane_71);
  auto res_stg12_update_0_sm172_172643 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_71_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_75_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_72);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_73);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_74);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_75_pack, stg11_FIFO_buf36_lane_75);
  auto res_stg12_update_0_sm172_182645 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_75_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_79_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_76);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_77);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_78);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_79_pack, stg11_FIFO_buf36_lane_79);
  auto res_stg12_update_0_sm172_192647 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_79_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_83_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_80);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_81);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_82);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_83_pack, stg11_FIFO_buf36_lane_83);
  auto res_stg12_update_0_sm172_202649 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_83_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_87_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_84);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_85);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_86);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_87_pack, stg11_FIFO_buf36_lane_87);
  auto res_stg12_update_0_sm172_212651 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_87_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_91_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_88);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_89);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_90);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_91_pack, stg11_FIFO_buf36_lane_91);
  auto res_stg12_update_0_sm172_222653 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_91_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_95_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_92);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_93);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_94);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_95_pack, stg11_FIFO_buf36_lane_95);
  auto res_stg12_update_0_sm172_232655 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_95_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_99_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_96);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_97);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_98);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_99_pack, stg11_FIFO_buf36_lane_99);
  auto res_stg12_update_0_sm172_242657 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_99_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_103_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_100);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_101);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_102);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_103_pack, stg11_FIFO_buf36_lane_103);
  auto res_stg12_update_0_sm172_252659 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_103_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_107_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_104);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_105);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_106);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_107_pack, stg11_FIFO_buf36_lane_107);
  auto res_stg12_update_0_sm172_262661 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_107_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_111_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_108);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_109);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_110);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_111_pack, stg11_FIFO_buf36_lane_111);
  auto res_stg12_update_0_sm172_272663 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_111_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_115_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_112);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_113);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_114);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_115_pack, stg11_FIFO_buf36_lane_115);
  auto res_stg12_update_0_sm172_282665 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_115_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_119_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_116);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_117);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_118);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_119_pack, stg11_FIFO_buf36_lane_119);
  auto res_stg12_update_0_sm172_292667 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_119_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_123_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_120);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_121);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_122);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_123_pack, stg11_FIFO_buf36_lane_123);
  auto res_stg12_update_0_sm172_302669 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_123_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_127_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_124);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_125);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_126);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_127_pack, stg11_FIFO_buf36_lane_127);
  auto res_stg12_update_0_sm172_312671 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_127_pack);
  hw_uint<512 > return_value3415;
  set_at<0, 512, 16>(return_value3415, res_stg12_update_0_sm172_02609);
  set_at<16, 512, 16>(return_value3415, res_stg12_update_0_sm172_12611);
  set_at<32, 512, 16>(return_value3415, res_stg12_update_0_sm172_22613);
  set_at<48, 512, 16>(return_value3415, res_stg12_update_0_sm172_32615);
  set_at<64, 512, 16>(return_value3415, res_stg12_update_0_sm172_42617);
  set_at<80, 512, 16>(return_value3415, res_stg12_update_0_sm172_52619);
  set_at<96, 512, 16>(return_value3415, res_stg12_update_0_sm172_62621);
  set_at<112, 512, 16>(return_value3415, res_stg12_update_0_sm172_72623);
  set_at<128, 512, 16>(return_value3415, res_stg12_update_0_sm172_82625);
  set_at<144, 512, 16>(return_value3415, res_stg12_update_0_sm172_92627);
  set_at<160, 512, 16>(return_value3415, res_stg12_update_0_sm172_102629);
  set_at<176, 512, 16>(return_value3415, res_stg12_update_0_sm172_112631);
  set_at<192, 512, 16>(return_value3415, res_stg12_update_0_sm172_122633);
  set_at<208, 512, 16>(return_value3415, res_stg12_update_0_sm172_132635);
  set_at<224, 512, 16>(return_value3415, res_stg12_update_0_sm172_142637);
  set_at<240, 512, 16>(return_value3415, res_stg12_update_0_sm172_152639);
  set_at<256, 512, 16>(return_value3415, res_stg12_update_0_sm172_162641);
  set_at<272, 512, 16>(return_value3415, res_stg12_update_0_sm172_172643);
  set_at<288, 512, 16>(return_value3415, res_stg12_update_0_sm172_182645);
  set_at<304, 512, 16>(return_value3415, res_stg12_update_0_sm172_192647);
  set_at<320, 512, 16>(return_value3415, res_stg12_update_0_sm172_202649);
  set_at<336, 512, 16>(return_value3415, res_stg12_update_0_sm172_212651);
  set_at<352, 512, 16>(return_value3415, res_stg12_update_0_sm172_222653);
  set_at<368, 512, 16>(return_value3415, res_stg12_update_0_sm172_232655);
  set_at<384, 512, 16>(return_value3415, res_stg12_update_0_sm172_242657);
  set_at<400, 512, 16>(return_value3415, res_stg12_update_0_sm172_252659);
  set_at<416, 512, 16>(return_value3415, res_stg12_update_0_sm172_262661);
  set_at<432, 512, 16>(return_value3415, res_stg12_update_0_sm172_272663);
  set_at<448, 512, 16>(return_value3415, res_stg12_update_0_sm172_282665);
  set_at<464, 512, 16>(return_value3415, res_stg12_update_0_sm172_292667);
  set_at<480, 512, 16>(return_value3415, res_stg12_update_0_sm172_302669);
  set_at<496, 512, 16>(return_value3415, res_stg12_update_0_sm172_312671);
  return return_value3415;

}

hw_uint<512> stg13_1_cu3417(hw_uint<16*128>& stg12_FIFO_buf44) {
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
  auto res_stg13_update_0_sm173_0241 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_3_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_7_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_4);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_5);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_6);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_7);
  auto res_stg13_update_0_sm173_1243 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_7_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_11_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_8);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_9);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_10);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_11);
  auto res_stg13_update_0_sm173_2245 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_11_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_15_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_12);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_13);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_14);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_15);
  auto res_stg13_update_0_sm173_3247 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_15_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_19_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_16);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_17);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_18);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_19);
  auto res_stg13_update_0_sm173_4249 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_19_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_23_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_20);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_21);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_22);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_23);
  auto res_stg13_update_0_sm173_5251 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_23_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_27_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_24);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_25);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_26);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_27);
  auto res_stg13_update_0_sm173_6253 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_27_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_31_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_28);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_29);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_30);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_31);
  auto res_stg13_update_0_sm173_7255 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_31_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_35_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_32);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_33);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_34);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_35);
  auto res_stg13_update_0_sm173_8257 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_35_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_39_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_36);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_37);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_38);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_39);
  auto res_stg13_update_0_sm173_9259 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_39_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_43_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_40);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_41);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_42);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_43);
  auto res_stg13_update_0_sm173_10261 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_43_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_47_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_44);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_45);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_46);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_47);
  auto res_stg13_update_0_sm173_11263 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_47_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_51_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_48);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_49);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_50);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_51);
  auto res_stg13_update_0_sm173_12265 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_51_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_55_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_52);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_53);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_54);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_55);
  auto res_stg13_update_0_sm173_13267 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_55_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_59_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_56);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_57);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_58);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_59);
  auto res_stg13_update_0_sm173_14269 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_59_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_63_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_60);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_61);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_62);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_63);
  auto res_stg13_update_0_sm173_15271 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_63_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_67_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_64);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_65);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_66);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_67_pack, stg12_FIFO_buf44_lane_67);
  auto res_stg13_update_0_sm173_16273 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_67_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_71_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_68);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_69);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_70);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_71_pack, stg12_FIFO_buf44_lane_71);
  auto res_stg13_update_0_sm173_17275 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_71_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_75_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_72);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_73);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_74);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_75_pack, stg12_FIFO_buf44_lane_75);
  auto res_stg13_update_0_sm173_18277 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_75_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_79_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_76);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_77);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_78);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_79_pack, stg12_FIFO_buf44_lane_79);
  auto res_stg13_update_0_sm173_19279 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_79_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_83_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_80);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_81);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_82);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_83_pack, stg12_FIFO_buf44_lane_83);
  auto res_stg13_update_0_sm173_20281 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_83_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_87_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_84);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_85);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_86);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_87_pack, stg12_FIFO_buf44_lane_87);
  auto res_stg13_update_0_sm173_21283 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_87_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_91_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_88);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_89);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_90);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_91_pack, stg12_FIFO_buf44_lane_91);
  auto res_stg13_update_0_sm173_22285 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_91_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_95_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_92);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_93);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_94);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_95_pack, stg12_FIFO_buf44_lane_95);
  auto res_stg13_update_0_sm173_23287 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_95_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_99_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_96);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_97);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_98);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_99_pack, stg12_FIFO_buf44_lane_99);
  auto res_stg13_update_0_sm173_24289 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_99_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_103_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_100);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_101);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_102);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_103_pack, stg12_FIFO_buf44_lane_103);
  auto res_stg13_update_0_sm173_25291 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_103_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_107_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_104);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_105);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_106);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_107_pack, stg12_FIFO_buf44_lane_107);
  auto res_stg13_update_0_sm173_26293 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_107_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_111_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_108);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_109);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_110);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_111_pack, stg12_FIFO_buf44_lane_111);
  auto res_stg13_update_0_sm173_27295 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_111_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_115_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_112);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_113);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_114);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_115_pack, stg12_FIFO_buf44_lane_115);
  auto res_stg13_update_0_sm173_28297 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_115_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_119_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_116);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_117);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_118);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_119_pack, stg12_FIFO_buf44_lane_119);
  auto res_stg13_update_0_sm173_29299 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_119_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_123_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_120);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_121);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_122);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_123_pack, stg12_FIFO_buf44_lane_123);
  auto res_stg13_update_0_sm173_30301 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_123_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_127_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_124);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_125);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_126);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_127_pack, stg12_FIFO_buf44_lane_127);
  auto res_stg13_update_0_sm173_31303 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_127_pack);
  hw_uint<512 > return_value3418;
  set_at<0, 512, 16>(return_value3418, res_stg13_update_0_sm173_0241);
  set_at<16, 512, 16>(return_value3418, res_stg13_update_0_sm173_1243);
  set_at<32, 512, 16>(return_value3418, res_stg13_update_0_sm173_2245);
  set_at<48, 512, 16>(return_value3418, res_stg13_update_0_sm173_3247);
  set_at<64, 512, 16>(return_value3418, res_stg13_update_0_sm173_4249);
  set_at<80, 512, 16>(return_value3418, res_stg13_update_0_sm173_5251);
  set_at<96, 512, 16>(return_value3418, res_stg13_update_0_sm173_6253);
  set_at<112, 512, 16>(return_value3418, res_stg13_update_0_sm173_7255);
  set_at<128, 512, 16>(return_value3418, res_stg13_update_0_sm173_8257);
  set_at<144, 512, 16>(return_value3418, res_stg13_update_0_sm173_9259);
  set_at<160, 512, 16>(return_value3418, res_stg13_update_0_sm173_10261);
  set_at<176, 512, 16>(return_value3418, res_stg13_update_0_sm173_11263);
  set_at<192, 512, 16>(return_value3418, res_stg13_update_0_sm173_12265);
  set_at<208, 512, 16>(return_value3418, res_stg13_update_0_sm173_13267);
  set_at<224, 512, 16>(return_value3418, res_stg13_update_0_sm173_14269);
  set_at<240, 512, 16>(return_value3418, res_stg13_update_0_sm173_15271);
  set_at<256, 512, 16>(return_value3418, res_stg13_update_0_sm173_16273);
  set_at<272, 512, 16>(return_value3418, res_stg13_update_0_sm173_17275);
  set_at<288, 512, 16>(return_value3418, res_stg13_update_0_sm173_18277);
  set_at<304, 512, 16>(return_value3418, res_stg13_update_0_sm173_19279);
  set_at<320, 512, 16>(return_value3418, res_stg13_update_0_sm173_20281);
  set_at<336, 512, 16>(return_value3418, res_stg13_update_0_sm173_21283);
  set_at<352, 512, 16>(return_value3418, res_stg13_update_0_sm173_22285);
  set_at<368, 512, 16>(return_value3418, res_stg13_update_0_sm173_23287);
  set_at<384, 512, 16>(return_value3418, res_stg13_update_0_sm173_24289);
  set_at<400, 512, 16>(return_value3418, res_stg13_update_0_sm173_25291);
  set_at<416, 512, 16>(return_value3418, res_stg13_update_0_sm173_26293);
  set_at<432, 512, 16>(return_value3418, res_stg13_update_0_sm173_27295);
  set_at<448, 512, 16>(return_value3418, res_stg13_update_0_sm173_28297);
  set_at<464, 512, 16>(return_value3418, res_stg13_update_0_sm173_29299);
  set_at<480, 512, 16>(return_value3418, res_stg13_update_0_sm173_30301);
  set_at<496, 512, 16>(return_value3418, res_stg13_update_0_sm173_31303);
  return return_value3418;

}

hw_uint<512> stg14_1_cu3420(hw_uint<16*128>& stg13_FIFO_buf52) {
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
  auto res_stg14_update_0_sm174_03121 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_3_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_7_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_4);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_5);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_6);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_7);
  auto res_stg14_update_0_sm174_13123 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_7_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_11_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_8);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_9);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_10);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_11);
  auto res_stg14_update_0_sm174_23125 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_11_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_15_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_12);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_13);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_14);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_15);
  auto res_stg14_update_0_sm174_33127 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_15_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_19_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_16);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_17);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_18);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_19);
  auto res_stg14_update_0_sm174_43129 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_19_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_23_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_20);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_21);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_22);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_23);
  auto res_stg14_update_0_sm174_53131 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_23_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_27_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_24);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_25);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_26);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_27);
  auto res_stg14_update_0_sm174_63133 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_27_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_31_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_28);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_29);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_30);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_31);
  auto res_stg14_update_0_sm174_73135 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_31_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_35_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_32);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_33);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_34);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_35);
  auto res_stg14_update_0_sm174_83137 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_35_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_39_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_36);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_37);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_38);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_39);
  auto res_stg14_update_0_sm174_93139 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_39_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_43_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_40);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_41);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_42);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_43);
  auto res_stg14_update_0_sm174_103141 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_43_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_47_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_44);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_45);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_46);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_47);
  auto res_stg14_update_0_sm174_113143 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_47_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_51_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_48);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_49);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_50);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_51);
  auto res_stg14_update_0_sm174_123145 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_51_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_55_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_52);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_53);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_54);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_55);
  auto res_stg14_update_0_sm174_133147 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_55_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_59_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_56);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_57);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_58);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_59);
  auto res_stg14_update_0_sm174_143149 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_59_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_63_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_60);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_61);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_62);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_63);
  auto res_stg14_update_0_sm174_153151 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_63_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_67_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_64);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_65);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_66);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_67_pack, stg13_FIFO_buf52_lane_67);
  auto res_stg14_update_0_sm174_163153 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_67_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_71_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_68);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_69);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_70);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_71_pack, stg13_FIFO_buf52_lane_71);
  auto res_stg14_update_0_sm174_173155 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_71_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_75_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_72);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_73);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_74);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_75_pack, stg13_FIFO_buf52_lane_75);
  auto res_stg14_update_0_sm174_183157 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_75_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_79_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_76);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_77);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_78);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_79_pack, stg13_FIFO_buf52_lane_79);
  auto res_stg14_update_0_sm174_193159 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_79_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_83_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_80);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_81);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_82);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_83_pack, stg13_FIFO_buf52_lane_83);
  auto res_stg14_update_0_sm174_203161 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_83_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_87_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_84);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_85);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_86);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_87_pack, stg13_FIFO_buf52_lane_87);
  auto res_stg14_update_0_sm174_213163 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_87_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_91_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_88);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_89);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_90);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_91_pack, stg13_FIFO_buf52_lane_91);
  auto res_stg14_update_0_sm174_223165 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_91_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_95_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_92);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_93);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_94);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_95_pack, stg13_FIFO_buf52_lane_95);
  auto res_stg14_update_0_sm174_233167 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_95_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_99_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_96);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_97);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_98);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_99_pack, stg13_FIFO_buf52_lane_99);
  auto res_stg14_update_0_sm174_243169 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_99_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_103_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_100);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_101);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_102);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_103_pack, stg13_FIFO_buf52_lane_103);
  auto res_stg14_update_0_sm174_253171 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_103_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_107_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_104);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_105);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_106);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_107_pack, stg13_FIFO_buf52_lane_107);
  auto res_stg14_update_0_sm174_263173 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_107_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_111_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_108);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_109);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_110);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_111_pack, stg13_FIFO_buf52_lane_111);
  auto res_stg14_update_0_sm174_273175 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_111_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_115_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_112);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_113);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_114);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_115_pack, stg13_FIFO_buf52_lane_115);
  auto res_stg14_update_0_sm174_283177 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_115_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_119_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_116);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_117);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_118);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_119_pack, stg13_FIFO_buf52_lane_119);
  auto res_stg14_update_0_sm174_293179 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_119_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_123_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_120);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_121);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_122);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_123_pack, stg13_FIFO_buf52_lane_123);
  auto res_stg14_update_0_sm174_303181 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_123_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_127_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_124);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_125);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_126);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_127_pack, stg13_FIFO_buf52_lane_127);
  auto res_stg14_update_0_sm174_313183 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_127_pack);
  hw_uint<512 > return_value3421;
  set_at<0, 512, 16>(return_value3421, res_stg14_update_0_sm174_03121);
  set_at<16, 512, 16>(return_value3421, res_stg14_update_0_sm174_13123);
  set_at<32, 512, 16>(return_value3421, res_stg14_update_0_sm174_23125);
  set_at<48, 512, 16>(return_value3421, res_stg14_update_0_sm174_33127);
  set_at<64, 512, 16>(return_value3421, res_stg14_update_0_sm174_43129);
  set_at<80, 512, 16>(return_value3421, res_stg14_update_0_sm174_53131);
  set_at<96, 512, 16>(return_value3421, res_stg14_update_0_sm174_63133);
  set_at<112, 512, 16>(return_value3421, res_stg14_update_0_sm174_73135);
  set_at<128, 512, 16>(return_value3421, res_stg14_update_0_sm174_83137);
  set_at<144, 512, 16>(return_value3421, res_stg14_update_0_sm174_93139);
  set_at<160, 512, 16>(return_value3421, res_stg14_update_0_sm174_103141);
  set_at<176, 512, 16>(return_value3421, res_stg14_update_0_sm174_113143);
  set_at<192, 512, 16>(return_value3421, res_stg14_update_0_sm174_123145);
  set_at<208, 512, 16>(return_value3421, res_stg14_update_0_sm174_133147);
  set_at<224, 512, 16>(return_value3421, res_stg14_update_0_sm174_143149);
  set_at<240, 512, 16>(return_value3421, res_stg14_update_0_sm174_153151);
  set_at<256, 512, 16>(return_value3421, res_stg14_update_0_sm174_163153);
  set_at<272, 512, 16>(return_value3421, res_stg14_update_0_sm174_173155);
  set_at<288, 512, 16>(return_value3421, res_stg14_update_0_sm174_183157);
  set_at<304, 512, 16>(return_value3421, res_stg14_update_0_sm174_193159);
  set_at<320, 512, 16>(return_value3421, res_stg14_update_0_sm174_203161);
  set_at<336, 512, 16>(return_value3421, res_stg14_update_0_sm174_213163);
  set_at<352, 512, 16>(return_value3421, res_stg14_update_0_sm174_223165);
  set_at<368, 512, 16>(return_value3421, res_stg14_update_0_sm174_233167);
  set_at<384, 512, 16>(return_value3421, res_stg14_update_0_sm174_243169);
  set_at<400, 512, 16>(return_value3421, res_stg14_update_0_sm174_253171);
  set_at<416, 512, 16>(return_value3421, res_stg14_update_0_sm174_263173);
  set_at<432, 512, 16>(return_value3421, res_stg14_update_0_sm174_273175);
  set_at<448, 512, 16>(return_value3421, res_stg14_update_0_sm174_283177);
  set_at<464, 512, 16>(return_value3421, res_stg14_update_0_sm174_293179);
  set_at<480, 512, 16>(return_value3421, res_stg14_update_0_sm174_303181);
  set_at<496, 512, 16>(return_value3421, res_stg14_update_0_sm174_313183);
  return return_value3421;

}

hw_uint<512> stg14_to_gp_156_ld61_cu3423(hw_uint<16*32>& stg14_to_gp_156) {
  return stg14_to_gp_156;
}

hw_uint<512> jac9_32_1_cu3425(hw_uint<16*32>& stg14_FIFO_buf60) {
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
  auto res_jac9_32_update_0_sm176_03249 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_0_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_1_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_1_pack, stg14_FIFO_buf60_lane_1);
  auto res_jac9_32_update_0_sm176_13251 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_1_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_2_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_2_pack, stg14_FIFO_buf60_lane_2);
  auto res_jac9_32_update_0_sm176_23253 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_2_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_3_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_3_pack, stg14_FIFO_buf60_lane_3);
  auto res_jac9_32_update_0_sm176_33255 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_3_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_4_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_4_pack, stg14_FIFO_buf60_lane_4);
  auto res_jac9_32_update_0_sm176_43257 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_4_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_5_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_5_pack, stg14_FIFO_buf60_lane_5);
  auto res_jac9_32_update_0_sm176_53259 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_5_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_6_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_6_pack, stg14_FIFO_buf60_lane_6);
  auto res_jac9_32_update_0_sm176_63261 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_6_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_7_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_7_pack, stg14_FIFO_buf60_lane_7);
  auto res_jac9_32_update_0_sm176_73263 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_7_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_8_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_8_pack, stg14_FIFO_buf60_lane_8);
  auto res_jac9_32_update_0_sm176_83265 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_8_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_9_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_9_pack, stg14_FIFO_buf60_lane_9);
  auto res_jac9_32_update_0_sm176_93267 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_9_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_10_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_10_pack, stg14_FIFO_buf60_lane_10);
  auto res_jac9_32_update_0_sm176_103269 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_10_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_11_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_11_pack, stg14_FIFO_buf60_lane_11);
  auto res_jac9_32_update_0_sm176_113271 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_11_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_12_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_12_pack, stg14_FIFO_buf60_lane_12);
  auto res_jac9_32_update_0_sm176_123273 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_12_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_13_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_13_pack, stg14_FIFO_buf60_lane_13);
  auto res_jac9_32_update_0_sm176_133275 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_13_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_14_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_14_pack, stg14_FIFO_buf60_lane_14);
  auto res_jac9_32_update_0_sm176_143277 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_14_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_15_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_15_pack, stg14_FIFO_buf60_lane_15);
  auto res_jac9_32_update_0_sm176_153279 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_15_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_16_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_16_pack, stg14_FIFO_buf60_lane_16);
  auto res_jac9_32_update_0_sm176_163281 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_16_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_17_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_17_pack, stg14_FIFO_buf60_lane_17);
  auto res_jac9_32_update_0_sm176_173283 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_17_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_18_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_18_pack, stg14_FIFO_buf60_lane_18);
  auto res_jac9_32_update_0_sm176_183285 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_18_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_19_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_19_pack, stg14_FIFO_buf60_lane_19);
  auto res_jac9_32_update_0_sm176_193287 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_19_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_20_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_20_pack, stg14_FIFO_buf60_lane_20);
  auto res_jac9_32_update_0_sm176_203289 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_20_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_21_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_21_pack, stg14_FIFO_buf60_lane_21);
  auto res_jac9_32_update_0_sm176_213291 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_21_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_22_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_22_pack, stg14_FIFO_buf60_lane_22);
  auto res_jac9_32_update_0_sm176_223293 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_22_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_23_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_23_pack, stg14_FIFO_buf60_lane_23);
  auto res_jac9_32_update_0_sm176_233295 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_23_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_24_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_24_pack, stg14_FIFO_buf60_lane_24);
  auto res_jac9_32_update_0_sm176_243297 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_24_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_25_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_25_pack, stg14_FIFO_buf60_lane_25);
  auto res_jac9_32_update_0_sm176_253299 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_25_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_26_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_26_pack, stg14_FIFO_buf60_lane_26);
  auto res_jac9_32_update_0_sm176_263301 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_26_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_27_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_27_pack, stg14_FIFO_buf60_lane_27);
  auto res_jac9_32_update_0_sm176_273303 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_27_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_28_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_28_pack, stg14_FIFO_buf60_lane_28);
  auto res_jac9_32_update_0_sm176_283305 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_28_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_29_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_29_pack, stg14_FIFO_buf60_lane_29);
  auto res_jac9_32_update_0_sm176_293307 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_29_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_30_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_30_pack, stg14_FIFO_buf60_lane_30);
  auto res_jac9_32_update_0_sm176_303309 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_30_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_31_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_31_pack, stg14_FIFO_buf60_lane_31);
  auto res_jac9_32_update_0_sm176_313311 = jac9_32_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_31_pack);
  hw_uint<512 > return_value3426;
  set_at<0, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_03249);
  set_at<16, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_13251);
  set_at<32, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_23253);
  set_at<48, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_33255);
  set_at<64, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_43257);
  set_at<80, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_53259);
  set_at<96, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_63261);
  set_at<112, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_73263);
  set_at<128, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_83265);
  set_at<144, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_93267);
  set_at<160, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_103269);
  set_at<176, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_113271);
  set_at<192, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_123273);
  set_at<208, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_133275);
  set_at<224, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_143277);
  set_at<240, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_153279);
  set_at<256, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_163281);
  set_at<272, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_173283);
  set_at<288, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_183285);
  set_at<304, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_193287);
  set_at<320, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_203289);
  set_at<336, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_213291);
  set_at<352, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_223293);
  set_at<368, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_233295);
  set_at<384, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_243297);
  set_at<400, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_253299);
  set_at<416, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_263301);
  set_at<432, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_273303);
  set_at<448, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_283305);
  set_at<464, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_293307);
  set_at<480, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_303309);
  set_at<496, 512, 16>(return_value3426, res_jac9_32_update_0_sm176_313311);
  return return_value3426;

}

