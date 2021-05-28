#include "jac9_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> stg9_ld121_cu1745(hw_uint<16*16>& stg9) {
  return stg9;
}

hw_uint<256> stg8_to_gp_16112_ld117_cu1747(hw_uint<16*16>& stg8_to_gp_16112) {
  return stg8_to_gp_16112;
}

hw_uint<256> stg6_ld97_cu1749(hw_uint<16*16>& stg6) {
  return stg6;
}

hw_uint<256> stg6_to_gp_1496_ld101_cu1751(hw_uint<16*16>& stg6_to_gp_1496) {
  return stg6_to_gp_1496;
}

hw_uint<256> stg7_ld105_cu1753(hw_uint<16*16>& stg7) {
  return stg7;
}

hw_uint<256> stg10_to_gp_424_ld29_cu1755(hw_uint<16*16>& stg10_to_gp_424) {
  return stg10_to_gp_424;
}

hw_uint<256> stg11_to_gp_532_ld37_cu1757(hw_uint<16*16>& stg11_to_gp_532) {
  return stg11_to_gp_532;
}

hw_uint<256> stg11_ld33_cu1759(hw_uint<16*16>& stg11) {
  return stg11;
}

hw_uint<256> stg10_ld25_cu1761(hw_uint<16*16>& stg10) {
  return stg10;
}

hw_uint<256> stg13_ld49_cu1763(hw_uint<16*16>& stg13) {
  return stg13;
}

hw_uint<256> stg13_to_gp_748_ld53_cu1765(hw_uint<16*16>& stg13_to_gp_748) {
  return stg13_to_gp_748;
}

hw_uint<256> stg5_1_cu1767(hw_uint<16*64>& stg4_FIFO_buf84) {
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

	
  hw_uint<64 > stg4_FIFO_buf84_lane_3_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_0);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_1);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_2);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_3_pack, stg4_FIFO_buf84_lane_3);
  auto res_stg5_update_0_sm139_0401 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_3_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_7_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_4);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_5);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_6);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_7_pack, stg4_FIFO_buf84_lane_7);
  auto res_stg5_update_0_sm139_1403 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_7_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_11_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_8);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_9);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_10);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_11_pack, stg4_FIFO_buf84_lane_11);
  auto res_stg5_update_0_sm139_2405 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_11_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_15_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_12);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_13);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_14);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_15_pack, stg4_FIFO_buf84_lane_15);
  auto res_stg5_update_0_sm139_3407 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_15_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_19_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_16);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_17);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_18);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_19_pack, stg4_FIFO_buf84_lane_19);
  auto res_stg5_update_0_sm139_4409 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_19_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_23_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_20);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_21);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_22);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_23_pack, stg4_FIFO_buf84_lane_23);
  auto res_stg5_update_0_sm139_5411 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_23_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_27_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_24);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_25);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_26);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_27_pack, stg4_FIFO_buf84_lane_27);
  auto res_stg5_update_0_sm139_6413 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_27_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_31_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_28);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_29);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_30);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_31_pack, stg4_FIFO_buf84_lane_31);
  auto res_stg5_update_0_sm139_7415 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_31_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_35_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_32);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_33);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_34);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_35_pack, stg4_FIFO_buf84_lane_35);
  auto res_stg5_update_0_sm139_8417 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_35_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_39_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_36);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_37);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_38);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_39_pack, stg4_FIFO_buf84_lane_39);
  auto res_stg5_update_0_sm139_9419 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_39_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_43_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_40);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_41);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_42);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_43_pack, stg4_FIFO_buf84_lane_43);
  auto res_stg5_update_0_sm139_10421 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_43_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_47_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_44);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_45);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_46);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_47_pack, stg4_FIFO_buf84_lane_47);
  auto res_stg5_update_0_sm139_11423 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_47_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_51_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_48);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_49);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_50);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_51_pack, stg4_FIFO_buf84_lane_51);
  auto res_stg5_update_0_sm139_12425 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_51_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_55_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_52);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_53);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_54);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_55_pack, stg4_FIFO_buf84_lane_55);
  auto res_stg5_update_0_sm139_13427 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_55_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_59_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_56);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_57);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_58);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_59_pack, stg4_FIFO_buf84_lane_59);
  auto res_stg5_update_0_sm139_14429 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_59_pack);

  hw_uint<64 > stg4_FIFO_buf84_lane_63_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_60);
  set_at<16, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_61);
  set_at<32, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_62);
  set_at<48, 64, 16>(stg4_FIFO_buf84_lane_63_pack, stg4_FIFO_buf84_lane_63);
  auto res_stg5_update_0_sm139_15431 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf84_lane_63_pack);
  hw_uint<256 > return_value1768;
  set_at<0, 256, 16>(return_value1768, res_stg5_update_0_sm139_0401);
  set_at<16, 256, 16>(return_value1768, res_stg5_update_0_sm139_1403);
  set_at<32, 256, 16>(return_value1768, res_stg5_update_0_sm139_2405);
  set_at<48, 256, 16>(return_value1768, res_stg5_update_0_sm139_3407);
  set_at<64, 256, 16>(return_value1768, res_stg5_update_0_sm139_4409);
  set_at<80, 256, 16>(return_value1768, res_stg5_update_0_sm139_5411);
  set_at<96, 256, 16>(return_value1768, res_stg5_update_0_sm139_6413);
  set_at<112, 256, 16>(return_value1768, res_stg5_update_0_sm139_7415);
  set_at<128, 256, 16>(return_value1768, res_stg5_update_0_sm139_8417);
  set_at<144, 256, 16>(return_value1768, res_stg5_update_0_sm139_9419);
  set_at<160, 256, 16>(return_value1768, res_stg5_update_0_sm139_10421);
  set_at<176, 256, 16>(return_value1768, res_stg5_update_0_sm139_11423);
  set_at<192, 256, 16>(return_value1768, res_stg5_update_0_sm139_12425);
  set_at<208, 256, 16>(return_value1768, res_stg5_update_0_sm139_13427);
  set_at<224, 256, 16>(return_value1768, res_stg5_update_0_sm139_14429);
  set_at<240, 256, 16>(return_value1768, res_stg5_update_0_sm139_15431);
  return return_value1768;

}

hw_uint<256> stg13_1_cu1770(hw_uint<16*64>& stg12_FIFO_buf44) {
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

	
  hw_uint<64 > stg12_FIFO_buf44_lane_3_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_0);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_1);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_2);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_3_pack, stg12_FIFO_buf44_lane_3);
  auto res_stg13_update_0_sm140_0273 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_3_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_7_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_4);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_5);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_6);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_7_pack, stg12_FIFO_buf44_lane_7);
  auto res_stg13_update_0_sm140_1275 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_7_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_11_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_8);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_9);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_10);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_11_pack, stg12_FIFO_buf44_lane_11);
  auto res_stg13_update_0_sm140_2277 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_11_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_15_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_12);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_13);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_14);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_15_pack, stg12_FIFO_buf44_lane_15);
  auto res_stg13_update_0_sm140_3279 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_15_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_19_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_16);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_17);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_18);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_19_pack, stg12_FIFO_buf44_lane_19);
  auto res_stg13_update_0_sm140_4281 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_19_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_23_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_20);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_21);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_22);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_23_pack, stg12_FIFO_buf44_lane_23);
  auto res_stg13_update_0_sm140_5283 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_23_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_27_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_24);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_25);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_26);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_27_pack, stg12_FIFO_buf44_lane_27);
  auto res_stg13_update_0_sm140_6285 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_27_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_31_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_28);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_29);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_30);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_31_pack, stg12_FIFO_buf44_lane_31);
  auto res_stg13_update_0_sm140_7287 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_31_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_35_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_32);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_33);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_34);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_35_pack, stg12_FIFO_buf44_lane_35);
  auto res_stg13_update_0_sm140_8289 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_35_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_39_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_36);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_37);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_38);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_39_pack, stg12_FIFO_buf44_lane_39);
  auto res_stg13_update_0_sm140_9291 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_39_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_43_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_40);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_41);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_42);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_43_pack, stg12_FIFO_buf44_lane_43);
  auto res_stg13_update_0_sm140_10293 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_43_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_47_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_44);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_45);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_46);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_47_pack, stg12_FIFO_buf44_lane_47);
  auto res_stg13_update_0_sm140_11295 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_47_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_51_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_48);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_49);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_50);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_51_pack, stg12_FIFO_buf44_lane_51);
  auto res_stg13_update_0_sm140_12297 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_51_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_55_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_52);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_53);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_54);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_55_pack, stg12_FIFO_buf44_lane_55);
  auto res_stg13_update_0_sm140_13299 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_55_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_59_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_56);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_57);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_58);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_59_pack, stg12_FIFO_buf44_lane_59);
  auto res_stg13_update_0_sm140_14301 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_59_pack);

  hw_uint<64 > stg12_FIFO_buf44_lane_63_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_60);
  set_at<16, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_61);
  set_at<32, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_62);
  set_at<48, 64, 16>(stg12_FIFO_buf44_lane_63_pack, stg12_FIFO_buf44_lane_63);
  auto res_stg13_update_0_sm140_15303 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf44_lane_63_pack);
  hw_uint<256 > return_value1771;
  set_at<0, 256, 16>(return_value1771, res_stg13_update_0_sm140_0273);
  set_at<16, 256, 16>(return_value1771, res_stg13_update_0_sm140_1275);
  set_at<32, 256, 16>(return_value1771, res_stg13_update_0_sm140_2277);
  set_at<48, 256, 16>(return_value1771, res_stg13_update_0_sm140_3279);
  set_at<64, 256, 16>(return_value1771, res_stg13_update_0_sm140_4281);
  set_at<80, 256, 16>(return_value1771, res_stg13_update_0_sm140_5283);
  set_at<96, 256, 16>(return_value1771, res_stg13_update_0_sm140_6285);
  set_at<112, 256, 16>(return_value1771, res_stg13_update_0_sm140_7287);
  set_at<128, 256, 16>(return_value1771, res_stg13_update_0_sm140_8289);
  set_at<144, 256, 16>(return_value1771, res_stg13_update_0_sm140_9291);
  set_at<160, 256, 16>(return_value1771, res_stg13_update_0_sm140_10293);
  set_at<176, 256, 16>(return_value1771, res_stg13_update_0_sm140_11295);
  set_at<192, 256, 16>(return_value1771, res_stg13_update_0_sm140_12297);
  set_at<208, 256, 16>(return_value1771, res_stg13_update_0_sm140_13299);
  set_at<224, 256, 16>(return_value1771, res_stg13_update_0_sm140_14301);
  set_at<240, 256, 16>(return_value1771, res_stg13_update_0_sm140_15303);
  return return_value1771;

}

hw_uint<256> stg8_1_cu1773(hw_uint<16*64>& stg7_FIFO_buf108) {
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

	
  hw_uint<64 > stg7_FIFO_buf108_lane_3_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_0);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_1);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_2);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_3_pack, stg7_FIFO_buf108_lane_3);
  auto res_stg8_update_0_sm141_0337 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_3_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_7_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_4);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_5);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_6);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_7_pack, stg7_FIFO_buf108_lane_7);
  auto res_stg8_update_0_sm141_1339 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_7_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_11_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_8);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_9);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_10);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_11_pack, stg7_FIFO_buf108_lane_11);
  auto res_stg8_update_0_sm141_2341 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_11_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_15_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_12);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_13);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_14);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_15_pack, stg7_FIFO_buf108_lane_15);
  auto res_stg8_update_0_sm141_3343 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_15_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_19_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_16);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_17);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_18);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_19_pack, stg7_FIFO_buf108_lane_19);
  auto res_stg8_update_0_sm141_4345 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_19_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_23_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_20);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_21);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_22);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_23_pack, stg7_FIFO_buf108_lane_23);
  auto res_stg8_update_0_sm141_5347 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_23_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_27_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_24);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_25);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_26);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_27_pack, stg7_FIFO_buf108_lane_27);
  auto res_stg8_update_0_sm141_6349 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_27_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_31_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_28);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_29);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_30);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_31_pack, stg7_FIFO_buf108_lane_31);
  auto res_stg8_update_0_sm141_7351 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_31_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_35_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_32);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_33);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_34);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_35_pack, stg7_FIFO_buf108_lane_35);
  auto res_stg8_update_0_sm141_8353 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_35_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_39_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_36);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_37);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_38);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_39_pack, stg7_FIFO_buf108_lane_39);
  auto res_stg8_update_0_sm141_9355 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_39_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_43_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_40);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_41);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_42);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_43_pack, stg7_FIFO_buf108_lane_43);
  auto res_stg8_update_0_sm141_10357 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_43_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_47_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_44);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_45);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_46);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_47_pack, stg7_FIFO_buf108_lane_47);
  auto res_stg8_update_0_sm141_11359 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_47_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_51_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_48);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_49);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_50);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_51_pack, stg7_FIFO_buf108_lane_51);
  auto res_stg8_update_0_sm141_12361 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_51_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_55_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_52);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_53);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_54);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_55_pack, stg7_FIFO_buf108_lane_55);
  auto res_stg8_update_0_sm141_13363 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_55_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_59_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_56);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_57);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_58);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_59_pack, stg7_FIFO_buf108_lane_59);
  auto res_stg8_update_0_sm141_14365 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_59_pack);

  hw_uint<64 > stg7_FIFO_buf108_lane_63_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_60);
  set_at<16, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_61);
  set_at<32, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_62);
  set_at<48, 64, 16>(stg7_FIFO_buf108_lane_63_pack, stg7_FIFO_buf108_lane_63);
  auto res_stg8_update_0_sm141_15367 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf108_lane_63_pack);
  hw_uint<256 > return_value1774;
  set_at<0, 256, 16>(return_value1774, res_stg8_update_0_sm141_0337);
  set_at<16, 256, 16>(return_value1774, res_stg8_update_0_sm141_1339);
  set_at<32, 256, 16>(return_value1774, res_stg8_update_0_sm141_2341);
  set_at<48, 256, 16>(return_value1774, res_stg8_update_0_sm141_3343);
  set_at<64, 256, 16>(return_value1774, res_stg8_update_0_sm141_4345);
  set_at<80, 256, 16>(return_value1774, res_stg8_update_0_sm141_5347);
  set_at<96, 256, 16>(return_value1774, res_stg8_update_0_sm141_6349);
  set_at<112, 256, 16>(return_value1774, res_stg8_update_0_sm141_7351);
  set_at<128, 256, 16>(return_value1774, res_stg8_update_0_sm141_8353);
  set_at<144, 256, 16>(return_value1774, res_stg8_update_0_sm141_9355);
  set_at<160, 256, 16>(return_value1774, res_stg8_update_0_sm141_10357);
  set_at<176, 256, 16>(return_value1774, res_stg8_update_0_sm141_11359);
  set_at<192, 256, 16>(return_value1774, res_stg8_update_0_sm141_12361);
  set_at<208, 256, 16>(return_value1774, res_stg8_update_0_sm141_13363);
  set_at<224, 256, 16>(return_value1774, res_stg8_update_0_sm141_14365);
  set_at<240, 256, 16>(return_value1774, res_stg8_update_0_sm141_15367);
  return return_value1774;

}

hw_uint<256> stg11_1_cu1776(hw_uint<16*64>& stg10_FIFO_buf28) {
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

	
  hw_uint<64 > stg10_FIFO_buf28_lane_3_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_0);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_1);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_2);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_3_pack, stg10_FIFO_buf28_lane_3);
  auto res_stg11_update_0_sm142_0369 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_3_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_7_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_4);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_5);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_6);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_7_pack, stg10_FIFO_buf28_lane_7);
  auto res_stg11_update_0_sm142_1371 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_7_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_11_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_8);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_9);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_10);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_11_pack, stg10_FIFO_buf28_lane_11);
  auto res_stg11_update_0_sm142_2373 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_11_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_15_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_12);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_13);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_14);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_15_pack, stg10_FIFO_buf28_lane_15);
  auto res_stg11_update_0_sm142_3375 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_15_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_19_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_16);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_17);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_18);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_19_pack, stg10_FIFO_buf28_lane_19);
  auto res_stg11_update_0_sm142_4377 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_19_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_23_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_20);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_21);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_22);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_23_pack, stg10_FIFO_buf28_lane_23);
  auto res_stg11_update_0_sm142_5379 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_23_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_27_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_24);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_25);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_26);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_27_pack, stg10_FIFO_buf28_lane_27);
  auto res_stg11_update_0_sm142_6381 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_27_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_31_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_28);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_29);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_30);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_31_pack, stg10_FIFO_buf28_lane_31);
  auto res_stg11_update_0_sm142_7383 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_31_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_35_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_32);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_33);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_34);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_35_pack, stg10_FIFO_buf28_lane_35);
  auto res_stg11_update_0_sm142_8385 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_35_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_39_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_36);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_37);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_38);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_39_pack, stg10_FIFO_buf28_lane_39);
  auto res_stg11_update_0_sm142_9387 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_39_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_43_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_40);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_41);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_42);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_43_pack, stg10_FIFO_buf28_lane_43);
  auto res_stg11_update_0_sm142_10389 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_43_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_47_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_44);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_45);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_46);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_47_pack, stg10_FIFO_buf28_lane_47);
  auto res_stg11_update_0_sm142_11391 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_47_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_51_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_48);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_49);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_50);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_51_pack, stg10_FIFO_buf28_lane_51);
  auto res_stg11_update_0_sm142_12393 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_51_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_55_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_52);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_53);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_54);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_55_pack, stg10_FIFO_buf28_lane_55);
  auto res_stg11_update_0_sm142_13395 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_55_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_59_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_56);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_57);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_58);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_59_pack, stg10_FIFO_buf28_lane_59);
  auto res_stg11_update_0_sm142_14397 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_59_pack);

  hw_uint<64 > stg10_FIFO_buf28_lane_63_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_60);
  set_at<16, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_61);
  set_at<32, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_62);
  set_at<48, 64, 16>(stg10_FIFO_buf28_lane_63_pack, stg10_FIFO_buf28_lane_63);
  auto res_stg11_update_0_sm142_15399 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf28_lane_63_pack);
  hw_uint<256 > return_value1777;
  set_at<0, 256, 16>(return_value1777, res_stg11_update_0_sm142_0369);
  set_at<16, 256, 16>(return_value1777, res_stg11_update_0_sm142_1371);
  set_at<32, 256, 16>(return_value1777, res_stg11_update_0_sm142_2373);
  set_at<48, 256, 16>(return_value1777, res_stg11_update_0_sm142_3375);
  set_at<64, 256, 16>(return_value1777, res_stg11_update_0_sm142_4377);
  set_at<80, 256, 16>(return_value1777, res_stg11_update_0_sm142_5379);
  set_at<96, 256, 16>(return_value1777, res_stg11_update_0_sm142_6381);
  set_at<112, 256, 16>(return_value1777, res_stg11_update_0_sm142_7383);
  set_at<128, 256, 16>(return_value1777, res_stg11_update_0_sm142_8385);
  set_at<144, 256, 16>(return_value1777, res_stg11_update_0_sm142_9387);
  set_at<160, 256, 16>(return_value1777, res_stg11_update_0_sm142_10389);
  set_at<176, 256, 16>(return_value1777, res_stg11_update_0_sm142_11391);
  set_at<192, 256, 16>(return_value1777, res_stg11_update_0_sm142_12393);
  set_at<208, 256, 16>(return_value1777, res_stg11_update_0_sm142_13395);
  set_at<224, 256, 16>(return_value1777, res_stg11_update_0_sm142_14397);
  set_at<240, 256, 16>(return_value1777, res_stg11_update_0_sm142_15399);
  return return_value1777;

}

hw_uint<256> stg3_to_gp_1172_ld77_cu1779(hw_uint<16*16>& stg3_to_gp_1172) {
  return stg3_to_gp_1172;
}

hw_uint<256> stg2_to_gp_1064_ld69_cu1781(hw_uint<16*16>& stg2_to_gp_1064) {
  return stg2_to_gp_1064;
}

hw_uint<256> stg3_ld73_cu1783(hw_uint<16*16>& stg3) {
  return stg3;
}

hw_uint<256> stg2_ld65_cu1785(hw_uint<16*16>& stg2) {
  return stg2;
}

hw_uint<256> stg14_ld57_cu1787(hw_uint<16*16>& stg14) {
  return stg14;
}

hw_uint<256> stg14_to_gp_156_ld61_cu1789(hw_uint<16*16>& stg14_to_gp_156) {
  return stg14_to_gp_156;
}

hw_uint<256> stg6_1_cu1791(hw_uint<16*64>& stg5_FIFO_buf92) {
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

	
  hw_uint<64 > stg5_FIFO_buf92_lane_3_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_0);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_1);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_2);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_3_pack, stg5_FIFO_buf92_lane_3);
  auto res_stg6_update_0_sm149_01681 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_3_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_7_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_4);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_5);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_6);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_7_pack, stg5_FIFO_buf92_lane_7);
  auto res_stg6_update_0_sm149_11683 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_7_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_11_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_8);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_9);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_10);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_11_pack, stg5_FIFO_buf92_lane_11);
  auto res_stg6_update_0_sm149_21685 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_11_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_15_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_12);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_13);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_14);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_15_pack, stg5_FIFO_buf92_lane_15);
  auto res_stg6_update_0_sm149_31687 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_15_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_19_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_16);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_17);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_18);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_19_pack, stg5_FIFO_buf92_lane_19);
  auto res_stg6_update_0_sm149_41689 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_19_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_23_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_20);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_21);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_22);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_23_pack, stg5_FIFO_buf92_lane_23);
  auto res_stg6_update_0_sm149_51691 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_23_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_27_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_24);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_25);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_26);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_27_pack, stg5_FIFO_buf92_lane_27);
  auto res_stg6_update_0_sm149_61693 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_27_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_31_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_28);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_29);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_30);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_31_pack, stg5_FIFO_buf92_lane_31);
  auto res_stg6_update_0_sm149_71695 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_31_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_35_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_32);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_33);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_34);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_35_pack, stg5_FIFO_buf92_lane_35);
  auto res_stg6_update_0_sm149_81697 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_35_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_39_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_36);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_37);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_38);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_39_pack, stg5_FIFO_buf92_lane_39);
  auto res_stg6_update_0_sm149_91699 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_39_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_43_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_40);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_41);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_42);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_43_pack, stg5_FIFO_buf92_lane_43);
  auto res_stg6_update_0_sm149_101701 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_43_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_47_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_44);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_45);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_46);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_47_pack, stg5_FIFO_buf92_lane_47);
  auto res_stg6_update_0_sm149_111703 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_47_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_51_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_48);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_49);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_50);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_51_pack, stg5_FIFO_buf92_lane_51);
  auto res_stg6_update_0_sm149_121705 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_51_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_55_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_52);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_53);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_54);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_55_pack, stg5_FIFO_buf92_lane_55);
  auto res_stg6_update_0_sm149_131707 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_55_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_59_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_56);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_57);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_58);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_59_pack, stg5_FIFO_buf92_lane_59);
  auto res_stg6_update_0_sm149_141709 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_59_pack);

  hw_uint<64 > stg5_FIFO_buf92_lane_63_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_60);
  set_at<16, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_61);
  set_at<32, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_62);
  set_at<48, 64, 16>(stg5_FIFO_buf92_lane_63_pack, stg5_FIFO_buf92_lane_63);
  auto res_stg6_update_0_sm149_151711 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf92_lane_63_pack);
  hw_uint<256 > return_value1792;
  set_at<0, 256, 16>(return_value1792, res_stg6_update_0_sm149_01681);
  set_at<16, 256, 16>(return_value1792, res_stg6_update_0_sm149_11683);
  set_at<32, 256, 16>(return_value1792, res_stg6_update_0_sm149_21685);
  set_at<48, 256, 16>(return_value1792, res_stg6_update_0_sm149_31687);
  set_at<64, 256, 16>(return_value1792, res_stg6_update_0_sm149_41689);
  set_at<80, 256, 16>(return_value1792, res_stg6_update_0_sm149_51691);
  set_at<96, 256, 16>(return_value1792, res_stg6_update_0_sm149_61693);
  set_at<112, 256, 16>(return_value1792, res_stg6_update_0_sm149_71695);
  set_at<128, 256, 16>(return_value1792, res_stg6_update_0_sm149_81697);
  set_at<144, 256, 16>(return_value1792, res_stg6_update_0_sm149_91699);
  set_at<160, 256, 16>(return_value1792, res_stg6_update_0_sm149_101701);
  set_at<176, 256, 16>(return_value1792, res_stg6_update_0_sm149_111703);
  set_at<192, 256, 16>(return_value1792, res_stg6_update_0_sm149_121705);
  set_at<208, 256, 16>(return_value1792, res_stg6_update_0_sm149_131707);
  set_at<224, 256, 16>(return_value1792, res_stg6_update_0_sm149_141709);
  set_at<240, 256, 16>(return_value1792, res_stg6_update_0_sm149_151711);
  return return_value1792;

}

hw_uint<256> stg10_1_cu1794(hw_uint<16*64>& stg9_FIFO_buf124) {
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

	
  hw_uint<64 > stg9_FIFO_buf124_lane_3_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_0);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_1);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_2);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_3);
  auto res_stg10_update_0_sm150_01585 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_3_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_7_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_4);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_5);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_6);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_7);
  auto res_stg10_update_0_sm150_11587 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_7_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_11_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_8);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_9);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_10);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_11);
  auto res_stg10_update_0_sm150_21589 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_11_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_15_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_12);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_13);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_14);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_15);
  auto res_stg10_update_0_sm150_31591 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_15_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_19_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_16);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_17);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_18);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_19);
  auto res_stg10_update_0_sm150_41593 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_19_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_23_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_20);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_21);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_22);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_23);
  auto res_stg10_update_0_sm150_51595 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_23_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_27_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_24);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_25);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_26);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_27);
  auto res_stg10_update_0_sm150_61597 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_27_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_31_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_28);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_29);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_30);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_31);
  auto res_stg10_update_0_sm150_71599 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_31_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_35_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_32);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_33);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_34);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_35);
  auto res_stg10_update_0_sm150_81601 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_35_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_39_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_36);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_37);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_38);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_39);
  auto res_stg10_update_0_sm150_91603 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_39_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_43_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_40);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_41);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_42);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_43);
  auto res_stg10_update_0_sm150_101605 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_43_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_47_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_44);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_45);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_46);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_47);
  auto res_stg10_update_0_sm150_111607 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_47_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_51_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_48);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_49);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_50);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_51);
  auto res_stg10_update_0_sm150_121609 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_51_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_55_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_52);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_53);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_54);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_55);
  auto res_stg10_update_0_sm150_131611 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_55_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_59_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_56);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_57);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_58);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_59);
  auto res_stg10_update_0_sm150_141613 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_59_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_63_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_60);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_61);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_62);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_63);
  auto res_stg10_update_0_sm150_151615 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_63_pack);
  hw_uint<256 > return_value1795;
  set_at<0, 256, 16>(return_value1795, res_stg10_update_0_sm150_01585);
  set_at<16, 256, 16>(return_value1795, res_stg10_update_0_sm150_11587);
  set_at<32, 256, 16>(return_value1795, res_stg10_update_0_sm150_21589);
  set_at<48, 256, 16>(return_value1795, res_stg10_update_0_sm150_31591);
  set_at<64, 256, 16>(return_value1795, res_stg10_update_0_sm150_41593);
  set_at<80, 256, 16>(return_value1795, res_stg10_update_0_sm150_51595);
  set_at<96, 256, 16>(return_value1795, res_stg10_update_0_sm150_61597);
  set_at<112, 256, 16>(return_value1795, res_stg10_update_0_sm150_71599);
  set_at<128, 256, 16>(return_value1795, res_stg10_update_0_sm150_81601);
  set_at<144, 256, 16>(return_value1795, res_stg10_update_0_sm150_91603);
  set_at<160, 256, 16>(return_value1795, res_stg10_update_0_sm150_101605);
  set_at<176, 256, 16>(return_value1795, res_stg10_update_0_sm150_111607);
  set_at<192, 256, 16>(return_value1795, res_stg10_update_0_sm150_121609);
  set_at<208, 256, 16>(return_value1795, res_stg10_update_0_sm150_131611);
  set_at<224, 256, 16>(return_value1795, res_stg10_update_0_sm150_141613);
  set_at<240, 256, 16>(return_value1795, res_stg10_update_0_sm150_151615);
  return return_value1795;

}

hw_uint<256> stg9_1_cu1797(hw_uint<16*64>& stg8_FIFO_buf116) {
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

	
  hw_uint<64 > stg8_FIFO_buf116_lane_3_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_0);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_1);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_2);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_3_pack, stg8_FIFO_buf116_lane_3);
  auto res_stg9_update_0_sm151_01457 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_3_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_7_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_4);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_5);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_6);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_7_pack, stg8_FIFO_buf116_lane_7);
  auto res_stg9_update_0_sm151_11459 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_7_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_11_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_8);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_9);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_10);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_11_pack, stg8_FIFO_buf116_lane_11);
  auto res_stg9_update_0_sm151_21461 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_11_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_15_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_12);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_13);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_14);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_15_pack, stg8_FIFO_buf116_lane_15);
  auto res_stg9_update_0_sm151_31463 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_15_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_19_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_16);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_17);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_18);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_19_pack, stg8_FIFO_buf116_lane_19);
  auto res_stg9_update_0_sm151_41465 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_19_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_23_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_20);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_21);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_22);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_23_pack, stg8_FIFO_buf116_lane_23);
  auto res_stg9_update_0_sm151_51467 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_23_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_27_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_24);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_25);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_26);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_27_pack, stg8_FIFO_buf116_lane_27);
  auto res_stg9_update_0_sm151_61469 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_27_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_31_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_28);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_29);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_30);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_31_pack, stg8_FIFO_buf116_lane_31);
  auto res_stg9_update_0_sm151_71471 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_31_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_35_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_32);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_33);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_34);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_35_pack, stg8_FIFO_buf116_lane_35);
  auto res_stg9_update_0_sm151_81473 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_35_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_39_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_36);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_37);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_38);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_39_pack, stg8_FIFO_buf116_lane_39);
  auto res_stg9_update_0_sm151_91475 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_39_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_43_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_40);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_41);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_42);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_43_pack, stg8_FIFO_buf116_lane_43);
  auto res_stg9_update_0_sm151_101477 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_43_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_47_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_44);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_45);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_46);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_47_pack, stg8_FIFO_buf116_lane_47);
  auto res_stg9_update_0_sm151_111479 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_47_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_51_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_48);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_49);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_50);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_51_pack, stg8_FIFO_buf116_lane_51);
  auto res_stg9_update_0_sm151_121481 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_51_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_55_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_52);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_53);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_54);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_55_pack, stg8_FIFO_buf116_lane_55);
  auto res_stg9_update_0_sm151_131483 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_55_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_59_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_56);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_57);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_58);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_59_pack, stg8_FIFO_buf116_lane_59);
  auto res_stg9_update_0_sm151_141485 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_59_pack);

  hw_uint<64 > stg8_FIFO_buf116_lane_63_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_60);
  set_at<16, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_61);
  set_at<32, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_62);
  set_at<48, 64, 16>(stg8_FIFO_buf116_lane_63_pack, stg8_FIFO_buf116_lane_63);
  auto res_stg9_update_0_sm151_151487 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf116_lane_63_pack);
  hw_uint<256 > return_value1798;
  set_at<0, 256, 16>(return_value1798, res_stg9_update_0_sm151_01457);
  set_at<16, 256, 16>(return_value1798, res_stg9_update_0_sm151_11459);
  set_at<32, 256, 16>(return_value1798, res_stg9_update_0_sm151_21461);
  set_at<48, 256, 16>(return_value1798, res_stg9_update_0_sm151_31463);
  set_at<64, 256, 16>(return_value1798, res_stg9_update_0_sm151_41465);
  set_at<80, 256, 16>(return_value1798, res_stg9_update_0_sm151_51467);
  set_at<96, 256, 16>(return_value1798, res_stg9_update_0_sm151_61469);
  set_at<112, 256, 16>(return_value1798, res_stg9_update_0_sm151_71471);
  set_at<128, 256, 16>(return_value1798, res_stg9_update_0_sm151_81473);
  set_at<144, 256, 16>(return_value1798, res_stg9_update_0_sm151_91475);
  set_at<160, 256, 16>(return_value1798, res_stg9_update_0_sm151_101477);
  set_at<176, 256, 16>(return_value1798, res_stg9_update_0_sm151_111479);
  set_at<192, 256, 16>(return_value1798, res_stg9_update_0_sm151_121481);
  set_at<208, 256, 16>(return_value1798, res_stg9_update_0_sm151_131483);
  set_at<224, 256, 16>(return_value1798, res_stg9_update_0_sm151_141485);
  set_at<240, 256, 16>(return_value1798, res_stg9_update_0_sm151_151487);
  return return_value1798;

}

hw_uint<256> stg4_1_cu1800(hw_uint<16*64>& stg3_FIFO_buf76) {
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

	
  hw_uint<64 > stg3_FIFO_buf76_lane_3_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_0);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_1);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_2);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_3_pack, stg3_FIFO_buf76_lane_3);
  auto res_stg4_update_0_sm152_01393 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_3_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_7_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_4);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_5);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_6);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_7_pack, stg3_FIFO_buf76_lane_7);
  auto res_stg4_update_0_sm152_11395 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_7_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_11_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_8);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_9);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_10);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_11_pack, stg3_FIFO_buf76_lane_11);
  auto res_stg4_update_0_sm152_21397 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_11_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_15_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_12);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_13);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_14);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_15_pack, stg3_FIFO_buf76_lane_15);
  auto res_stg4_update_0_sm152_31399 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_15_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_19_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_16);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_17);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_18);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_19_pack, stg3_FIFO_buf76_lane_19);
  auto res_stg4_update_0_sm152_41401 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_19_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_23_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_20);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_21);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_22);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_23_pack, stg3_FIFO_buf76_lane_23);
  auto res_stg4_update_0_sm152_51403 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_23_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_27_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_24);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_25);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_26);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_27_pack, stg3_FIFO_buf76_lane_27);
  auto res_stg4_update_0_sm152_61405 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_27_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_31_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_28);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_29);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_30);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_31_pack, stg3_FIFO_buf76_lane_31);
  auto res_stg4_update_0_sm152_71407 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_31_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_35_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_32);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_33);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_34);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_35_pack, stg3_FIFO_buf76_lane_35);
  auto res_stg4_update_0_sm152_81409 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_35_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_39_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_36);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_37);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_38);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_39_pack, stg3_FIFO_buf76_lane_39);
  auto res_stg4_update_0_sm152_91411 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_39_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_43_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_40);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_41);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_42);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_43_pack, stg3_FIFO_buf76_lane_43);
  auto res_stg4_update_0_sm152_101413 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_43_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_47_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_44);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_45);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_46);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_47_pack, stg3_FIFO_buf76_lane_47);
  auto res_stg4_update_0_sm152_111415 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_47_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_51_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_48);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_49);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_50);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_51_pack, stg3_FIFO_buf76_lane_51);
  auto res_stg4_update_0_sm152_121417 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_51_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_55_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_52);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_53);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_54);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_55_pack, stg3_FIFO_buf76_lane_55);
  auto res_stg4_update_0_sm152_131419 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_55_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_59_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_56);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_57);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_58);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_59_pack, stg3_FIFO_buf76_lane_59);
  auto res_stg4_update_0_sm152_141421 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_59_pack);

  hw_uint<64 > stg3_FIFO_buf76_lane_63_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_60);
  set_at<16, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_61);
  set_at<32, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_62);
  set_at<48, 64, 16>(stg3_FIFO_buf76_lane_63_pack, stg3_FIFO_buf76_lane_63);
  auto res_stg4_update_0_sm152_151423 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf76_lane_63_pack);
  hw_uint<256 > return_value1801;
  set_at<0, 256, 16>(return_value1801, res_stg4_update_0_sm152_01393);
  set_at<16, 256, 16>(return_value1801, res_stg4_update_0_sm152_11395);
  set_at<32, 256, 16>(return_value1801, res_stg4_update_0_sm152_21397);
  set_at<48, 256, 16>(return_value1801, res_stg4_update_0_sm152_31399);
  set_at<64, 256, 16>(return_value1801, res_stg4_update_0_sm152_41401);
  set_at<80, 256, 16>(return_value1801, res_stg4_update_0_sm152_51403);
  set_at<96, 256, 16>(return_value1801, res_stg4_update_0_sm152_61405);
  set_at<112, 256, 16>(return_value1801, res_stg4_update_0_sm152_71407);
  set_at<128, 256, 16>(return_value1801, res_stg4_update_0_sm152_81409);
  set_at<144, 256, 16>(return_value1801, res_stg4_update_0_sm152_91411);
  set_at<160, 256, 16>(return_value1801, res_stg4_update_0_sm152_101413);
  set_at<176, 256, 16>(return_value1801, res_stg4_update_0_sm152_111415);
  set_at<192, 256, 16>(return_value1801, res_stg4_update_0_sm152_121417);
  set_at<208, 256, 16>(return_value1801, res_stg4_update_0_sm152_131419);
  set_at<224, 256, 16>(return_value1801, res_stg4_update_0_sm152_141421);
  set_at<240, 256, 16>(return_value1801, res_stg4_update_0_sm152_151423);
  return return_value1801;

}

hw_uint<256> stg4_to_gp_1280_ld85_cu1803(hw_uint<16*16>& stg4_to_gp_1280) {
  return stg4_to_gp_1280;
}

hw_uint<256> stg5_to_gp_1388_ld93_cu1805(hw_uint<16*16>& stg5_to_gp_1388) {
  return stg5_to_gp_1388;
}

hw_uint<256> stg14_1_cu1807(hw_uint<16*64>& stg13_FIFO_buf52) {
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

	
  hw_uint<64 > stg13_FIFO_buf52_lane_3_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_0);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_1);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_2);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_3_pack, stg13_FIFO_buf52_lane_3);
  auto res_stg14_update_0_sm155_01521 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_3_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_7_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_4);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_5);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_6);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_7_pack, stg13_FIFO_buf52_lane_7);
  auto res_stg14_update_0_sm155_11523 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_7_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_11_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_8);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_9);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_10);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_11_pack, stg13_FIFO_buf52_lane_11);
  auto res_stg14_update_0_sm155_21525 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_11_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_15_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_12);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_13);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_14);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_15_pack, stg13_FIFO_buf52_lane_15);
  auto res_stg14_update_0_sm155_31527 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_15_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_19_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_16);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_17);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_18);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_19_pack, stg13_FIFO_buf52_lane_19);
  auto res_stg14_update_0_sm155_41529 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_19_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_23_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_20);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_21);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_22);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_23_pack, stg13_FIFO_buf52_lane_23);
  auto res_stg14_update_0_sm155_51531 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_23_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_27_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_24);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_25);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_26);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_27_pack, stg13_FIFO_buf52_lane_27);
  auto res_stg14_update_0_sm155_61533 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_27_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_31_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_28);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_29);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_30);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_31_pack, stg13_FIFO_buf52_lane_31);
  auto res_stg14_update_0_sm155_71535 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_31_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_35_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_32);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_33);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_34);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_35_pack, stg13_FIFO_buf52_lane_35);
  auto res_stg14_update_0_sm155_81537 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_35_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_39_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_36);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_37);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_38);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_39_pack, stg13_FIFO_buf52_lane_39);
  auto res_stg14_update_0_sm155_91539 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_39_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_43_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_40);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_41);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_42);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_43_pack, stg13_FIFO_buf52_lane_43);
  auto res_stg14_update_0_sm155_101541 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_43_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_47_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_44);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_45);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_46);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_47_pack, stg13_FIFO_buf52_lane_47);
  auto res_stg14_update_0_sm155_111543 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_47_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_51_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_48);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_49);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_50);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_51_pack, stg13_FIFO_buf52_lane_51);
  auto res_stg14_update_0_sm155_121545 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_51_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_55_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_52);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_53);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_54);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_55_pack, stg13_FIFO_buf52_lane_55);
  auto res_stg14_update_0_sm155_131547 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_55_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_59_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_56);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_57);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_58);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_59_pack, stg13_FIFO_buf52_lane_59);
  auto res_stg14_update_0_sm155_141549 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_59_pack);

  hw_uint<64 > stg13_FIFO_buf52_lane_63_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_60);
  set_at<16, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_61);
  set_at<32, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_62);
  set_at<48, 64, 16>(stg13_FIFO_buf52_lane_63_pack, stg13_FIFO_buf52_lane_63);
  auto res_stg14_update_0_sm155_151551 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf52_lane_63_pack);
  hw_uint<256 > return_value1808;
  set_at<0, 256, 16>(return_value1808, res_stg14_update_0_sm155_01521);
  set_at<16, 256, 16>(return_value1808, res_stg14_update_0_sm155_11523);
  set_at<32, 256, 16>(return_value1808, res_stg14_update_0_sm155_21525);
  set_at<48, 256, 16>(return_value1808, res_stg14_update_0_sm155_31527);
  set_at<64, 256, 16>(return_value1808, res_stg14_update_0_sm155_41529);
  set_at<80, 256, 16>(return_value1808, res_stg14_update_0_sm155_51531);
  set_at<96, 256, 16>(return_value1808, res_stg14_update_0_sm155_61533);
  set_at<112, 256, 16>(return_value1808, res_stg14_update_0_sm155_71535);
  set_at<128, 256, 16>(return_value1808, res_stg14_update_0_sm155_81537);
  set_at<144, 256, 16>(return_value1808, res_stg14_update_0_sm155_91539);
  set_at<160, 256, 16>(return_value1808, res_stg14_update_0_sm155_101541);
  set_at<176, 256, 16>(return_value1808, res_stg14_update_0_sm155_111543);
  set_at<192, 256, 16>(return_value1808, res_stg14_update_0_sm155_121545);
  set_at<208, 256, 16>(return_value1808, res_stg14_update_0_sm155_131547);
  set_at<224, 256, 16>(return_value1808, res_stg14_update_0_sm155_141549);
  set_at<240, 256, 16>(return_value1808, res_stg14_update_0_sm155_151551);
  return return_value1808;

}

hw_uint<256> jac9_16_1_cu1810(hw_uint<16*16>& stg14_FIFO_buf60) {
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

	
  hw_uint<16 > stg14_FIFO_buf60_lane_0_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_0_pack, stg14_FIFO_buf60_lane_0);
  auto res_jac9_16_update_0_sm156_01649 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_0_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_1_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_1_pack, stg14_FIFO_buf60_lane_1);
  auto res_jac9_16_update_0_sm156_11651 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_1_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_2_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_2_pack, stg14_FIFO_buf60_lane_2);
  auto res_jac9_16_update_0_sm156_21653 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_2_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_3_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_3_pack, stg14_FIFO_buf60_lane_3);
  auto res_jac9_16_update_0_sm156_31655 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_3_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_4_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_4_pack, stg14_FIFO_buf60_lane_4);
  auto res_jac9_16_update_0_sm156_41657 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_4_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_5_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_5_pack, stg14_FIFO_buf60_lane_5);
  auto res_jac9_16_update_0_sm156_51659 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_5_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_6_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_6_pack, stg14_FIFO_buf60_lane_6);
  auto res_jac9_16_update_0_sm156_61661 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_6_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_7_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_7_pack, stg14_FIFO_buf60_lane_7);
  auto res_jac9_16_update_0_sm156_71663 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_7_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_8_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_8_pack, stg14_FIFO_buf60_lane_8);
  auto res_jac9_16_update_0_sm156_81665 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_8_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_9_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_9_pack, stg14_FIFO_buf60_lane_9);
  auto res_jac9_16_update_0_sm156_91667 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_9_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_10_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_10_pack, stg14_FIFO_buf60_lane_10);
  auto res_jac9_16_update_0_sm156_101669 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_10_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_11_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_11_pack, stg14_FIFO_buf60_lane_11);
  auto res_jac9_16_update_0_sm156_111671 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_11_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_12_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_12_pack, stg14_FIFO_buf60_lane_12);
  auto res_jac9_16_update_0_sm156_121673 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_12_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_13_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_13_pack, stg14_FIFO_buf60_lane_13);
  auto res_jac9_16_update_0_sm156_131675 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_13_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_14_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_14_pack, stg14_FIFO_buf60_lane_14);
  auto res_jac9_16_update_0_sm156_141677 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_14_pack);

  hw_uint<16 > stg14_FIFO_buf60_lane_15_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf60_lane_15_pack, stg14_FIFO_buf60_lane_15);
  auto res_jac9_16_update_0_sm156_151679 = jac9_16_generated_compute_unrolled_1(stg14_FIFO_buf60_lane_15_pack);
  hw_uint<256 > return_value1811;
  set_at<0, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_01649);
  set_at<16, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_11651);
  set_at<32, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_21653);
  set_at<48, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_31655);
  set_at<64, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_41657);
  set_at<80, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_51659);
  set_at<96, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_61661);
  set_at<112, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_71663);
  set_at<128, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_81665);
  set_at<144, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_91667);
  set_at<160, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_101669);
  set_at<176, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_111671);
  set_at<192, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_121673);
  set_at<208, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_131675);
  set_at<224, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_141677);
  set_at<240, 256, 16>(return_value1811, res_jac9_16_update_0_sm156_151679);
  return return_value1811;

}

hw_uint<256> stg0_ld9_cu1813(hw_uint<16*16>& stg0) {
  return stg0;
}

hw_uint<256> stg0_to_gp_88_ld13_cu1815(hw_uint<16*16>& stg0_to_gp_88) {
  return stg0_to_gp_88;
}

hw_uint<256> stg1_to_gp_916_ld21_cu1817(hw_uint<16*16>& stg1_to_gp_916) {
  return stg1_to_gp_916;
}

hw_uint<256> stg1_ld17_cu1819(hw_uint<16*16>& stg1) {
  return stg1;
}

hw_uint<256> stg4_ld81_cu1821(hw_uint<16*16>& stg4) {
  return stg4;
}

hw_uint<256> stg5_ld89_cu1823(hw_uint<16*16>& stg5) {
  return stg5;
}

hw_uint<256> stg12_ld41_cu1825(hw_uint<16*16>& stg12) {
  return stg12;
}

hw_uint<256> stg12_to_gp_640_ld45_cu1827(hw_uint<16*16>& stg12_to_gp_640) {
  return stg12_to_gp_640;
}

hw_uint<256> stg8_ld113_cu1829(hw_uint<16*16>& stg8) {
  return stg8;
}

hw_uint<256> stg7_to_gp_15104_ld109_cu1831(hw_uint<16*16>& stg7_to_gp_15104) {
  return stg7_to_gp_15104;
}

hw_uint<256> in_to_gp_20_ld5_cu1833(hw_uint<16*16>& in_to_gp_20) {
  return in_to_gp_20;
}

hw_uint<256> in_1_cu1835(hw_uint<16*16>& in_off_chip) {
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

	
  hw_uint<16 > in_off_chip_lane_0_pack;
  set_at<0, 16, 16>(in_off_chip_lane_0_pack, in_off_chip_lane_0);
  auto res_in_update_0_sm168_0945 = in_generated_compute_unrolled_1(in_off_chip_lane_0_pack);

  hw_uint<16 > in_off_chip_lane_1_pack;
  set_at<0, 16, 16>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
  auto res_in_update_0_sm168_1947 = in_generated_compute_unrolled_1(in_off_chip_lane_1_pack);

  hw_uint<16 > in_off_chip_lane_2_pack;
  set_at<0, 16, 16>(in_off_chip_lane_2_pack, in_off_chip_lane_2);
  auto res_in_update_0_sm168_2949 = in_generated_compute_unrolled_1(in_off_chip_lane_2_pack);

  hw_uint<16 > in_off_chip_lane_3_pack;
  set_at<0, 16, 16>(in_off_chip_lane_3_pack, in_off_chip_lane_3);
  auto res_in_update_0_sm168_3951 = in_generated_compute_unrolled_1(in_off_chip_lane_3_pack);

  hw_uint<16 > in_off_chip_lane_4_pack;
  set_at<0, 16, 16>(in_off_chip_lane_4_pack, in_off_chip_lane_4);
  auto res_in_update_0_sm168_4953 = in_generated_compute_unrolled_1(in_off_chip_lane_4_pack);

  hw_uint<16 > in_off_chip_lane_5_pack;
  set_at<0, 16, 16>(in_off_chip_lane_5_pack, in_off_chip_lane_5);
  auto res_in_update_0_sm168_5955 = in_generated_compute_unrolled_1(in_off_chip_lane_5_pack);

  hw_uint<16 > in_off_chip_lane_6_pack;
  set_at<0, 16, 16>(in_off_chip_lane_6_pack, in_off_chip_lane_6);
  auto res_in_update_0_sm168_6957 = in_generated_compute_unrolled_1(in_off_chip_lane_6_pack);

  hw_uint<16 > in_off_chip_lane_7_pack;
  set_at<0, 16, 16>(in_off_chip_lane_7_pack, in_off_chip_lane_7);
  auto res_in_update_0_sm168_7959 = in_generated_compute_unrolled_1(in_off_chip_lane_7_pack);

  hw_uint<16 > in_off_chip_lane_8_pack;
  set_at<0, 16, 16>(in_off_chip_lane_8_pack, in_off_chip_lane_8);
  auto res_in_update_0_sm168_8961 = in_generated_compute_unrolled_1(in_off_chip_lane_8_pack);

  hw_uint<16 > in_off_chip_lane_9_pack;
  set_at<0, 16, 16>(in_off_chip_lane_9_pack, in_off_chip_lane_9);
  auto res_in_update_0_sm168_9963 = in_generated_compute_unrolled_1(in_off_chip_lane_9_pack);

  hw_uint<16 > in_off_chip_lane_10_pack;
  set_at<0, 16, 16>(in_off_chip_lane_10_pack, in_off_chip_lane_10);
  auto res_in_update_0_sm168_10965 = in_generated_compute_unrolled_1(in_off_chip_lane_10_pack);

  hw_uint<16 > in_off_chip_lane_11_pack;
  set_at<0, 16, 16>(in_off_chip_lane_11_pack, in_off_chip_lane_11);
  auto res_in_update_0_sm168_11967 = in_generated_compute_unrolled_1(in_off_chip_lane_11_pack);

  hw_uint<16 > in_off_chip_lane_12_pack;
  set_at<0, 16, 16>(in_off_chip_lane_12_pack, in_off_chip_lane_12);
  auto res_in_update_0_sm168_12969 = in_generated_compute_unrolled_1(in_off_chip_lane_12_pack);

  hw_uint<16 > in_off_chip_lane_13_pack;
  set_at<0, 16, 16>(in_off_chip_lane_13_pack, in_off_chip_lane_13);
  auto res_in_update_0_sm168_13971 = in_generated_compute_unrolled_1(in_off_chip_lane_13_pack);

  hw_uint<16 > in_off_chip_lane_14_pack;
  set_at<0, 16, 16>(in_off_chip_lane_14_pack, in_off_chip_lane_14);
  auto res_in_update_0_sm168_14973 = in_generated_compute_unrolled_1(in_off_chip_lane_14_pack);

  hw_uint<16 > in_off_chip_lane_15_pack;
  set_at<0, 16, 16>(in_off_chip_lane_15_pack, in_off_chip_lane_15);
  auto res_in_update_0_sm168_15975 = in_generated_compute_unrolled_1(in_off_chip_lane_15_pack);
  hw_uint<256 > return_value1836;
  set_at<0, 256, 16>(return_value1836, res_in_update_0_sm168_0945);
  set_at<16, 256, 16>(return_value1836, res_in_update_0_sm168_1947);
  set_at<32, 256, 16>(return_value1836, res_in_update_0_sm168_2949);
  set_at<48, 256, 16>(return_value1836, res_in_update_0_sm168_3951);
  set_at<64, 256, 16>(return_value1836, res_in_update_0_sm168_4953);
  set_at<80, 256, 16>(return_value1836, res_in_update_0_sm168_5955);
  set_at<96, 256, 16>(return_value1836, res_in_update_0_sm168_6957);
  set_at<112, 256, 16>(return_value1836, res_in_update_0_sm168_7959);
  set_at<128, 256, 16>(return_value1836, res_in_update_0_sm168_8961);
  set_at<144, 256, 16>(return_value1836, res_in_update_0_sm168_9963);
  set_at<160, 256, 16>(return_value1836, res_in_update_0_sm168_10965);
  set_at<176, 256, 16>(return_value1836, res_in_update_0_sm168_11967);
  set_at<192, 256, 16>(return_value1836, res_in_update_0_sm168_12969);
  set_at<208, 256, 16>(return_value1836, res_in_update_0_sm168_13971);
  set_at<224, 256, 16>(return_value1836, res_in_update_0_sm168_14973);
  set_at<240, 256, 16>(return_value1836, res_in_update_0_sm168_15975);
  return return_value1836;

}

hw_uint<256> stg9_to_gp_3120_ld125_cu1838(hw_uint<16*16>& stg9_to_gp_3120) {
  return stg9_to_gp_3120;
}

hw_uint<256> stg0_1_cu1840(hw_uint<16*64>& in_FIFO_buf4) {
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

	
  hw_uint<64 > in_FIFO_buf4_lane_3_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_0);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_1);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_2);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_3_pack, in_FIFO_buf4_lane_3);
  auto res_stg0_update_0_sm170_0657 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_3_pack);

  hw_uint<64 > in_FIFO_buf4_lane_7_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_4);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_5);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_6);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_7_pack, in_FIFO_buf4_lane_7);
  auto res_stg0_update_0_sm170_1659 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_7_pack);

  hw_uint<64 > in_FIFO_buf4_lane_11_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_8);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_9);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_10);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_11_pack, in_FIFO_buf4_lane_11);
  auto res_stg0_update_0_sm170_2661 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_11_pack);

  hw_uint<64 > in_FIFO_buf4_lane_15_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_12);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_13);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_14);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_15_pack, in_FIFO_buf4_lane_15);
  auto res_stg0_update_0_sm170_3663 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_15_pack);

  hw_uint<64 > in_FIFO_buf4_lane_19_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_16);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_17);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_18);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_19_pack, in_FIFO_buf4_lane_19);
  auto res_stg0_update_0_sm170_4665 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_19_pack);

  hw_uint<64 > in_FIFO_buf4_lane_23_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_20);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_21);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_22);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_23_pack, in_FIFO_buf4_lane_23);
  auto res_stg0_update_0_sm170_5667 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_23_pack);

  hw_uint<64 > in_FIFO_buf4_lane_27_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_24);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_25);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_26);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_27_pack, in_FIFO_buf4_lane_27);
  auto res_stg0_update_0_sm170_6669 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_27_pack);

  hw_uint<64 > in_FIFO_buf4_lane_31_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_28);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_29);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_30);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_31_pack, in_FIFO_buf4_lane_31);
  auto res_stg0_update_0_sm170_7671 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_31_pack);

  hw_uint<64 > in_FIFO_buf4_lane_35_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_32);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_33);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_34);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_35_pack, in_FIFO_buf4_lane_35);
  auto res_stg0_update_0_sm170_8673 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_35_pack);

  hw_uint<64 > in_FIFO_buf4_lane_39_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_36);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_37);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_38);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_39_pack, in_FIFO_buf4_lane_39);
  auto res_stg0_update_0_sm170_9675 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_39_pack);

  hw_uint<64 > in_FIFO_buf4_lane_43_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_40);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_41);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_42);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_43_pack, in_FIFO_buf4_lane_43);
  auto res_stg0_update_0_sm170_10677 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_43_pack);

  hw_uint<64 > in_FIFO_buf4_lane_47_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_44);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_45);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_46);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_47_pack, in_FIFO_buf4_lane_47);
  auto res_stg0_update_0_sm170_11679 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_47_pack);

  hw_uint<64 > in_FIFO_buf4_lane_51_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_48);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_49);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_50);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_51_pack, in_FIFO_buf4_lane_51);
  auto res_stg0_update_0_sm170_12681 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_51_pack);

  hw_uint<64 > in_FIFO_buf4_lane_55_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_52);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_53);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_54);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_55_pack, in_FIFO_buf4_lane_55);
  auto res_stg0_update_0_sm170_13683 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_55_pack);

  hw_uint<64 > in_FIFO_buf4_lane_59_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_56);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_57);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_58);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_59_pack, in_FIFO_buf4_lane_59);
  auto res_stg0_update_0_sm170_14685 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_59_pack);

  hw_uint<64 > in_FIFO_buf4_lane_63_pack;
  set_at<0, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_60);
  set_at<16, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_61);
  set_at<32, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_62);
  set_at<48, 64, 16>(in_FIFO_buf4_lane_63_pack, in_FIFO_buf4_lane_63);
  auto res_stg0_update_0_sm170_15687 = stg0_generated_compute_unrolled_1(in_FIFO_buf4_lane_63_pack);
  hw_uint<256 > return_value1841;
  set_at<0, 256, 16>(return_value1841, res_stg0_update_0_sm170_0657);
  set_at<16, 256, 16>(return_value1841, res_stg0_update_0_sm170_1659);
  set_at<32, 256, 16>(return_value1841, res_stg0_update_0_sm170_2661);
  set_at<48, 256, 16>(return_value1841, res_stg0_update_0_sm170_3663);
  set_at<64, 256, 16>(return_value1841, res_stg0_update_0_sm170_4665);
  set_at<80, 256, 16>(return_value1841, res_stg0_update_0_sm170_5667);
  set_at<96, 256, 16>(return_value1841, res_stg0_update_0_sm170_6669);
  set_at<112, 256, 16>(return_value1841, res_stg0_update_0_sm170_7671);
  set_at<128, 256, 16>(return_value1841, res_stg0_update_0_sm170_8673);
  set_at<144, 256, 16>(return_value1841, res_stg0_update_0_sm170_9675);
  set_at<160, 256, 16>(return_value1841, res_stg0_update_0_sm170_10677);
  set_at<176, 256, 16>(return_value1841, res_stg0_update_0_sm170_11679);
  set_at<192, 256, 16>(return_value1841, res_stg0_update_0_sm170_12681);
  set_at<208, 256, 16>(return_value1841, res_stg0_update_0_sm170_13683);
  set_at<224, 256, 16>(return_value1841, res_stg0_update_0_sm170_14685);
  set_at<240, 256, 16>(return_value1841, res_stg0_update_0_sm170_15687);
  return return_value1841;

}

hw_uint<256> in_ld1_cu1843(hw_uint<16*16>& in) {
  return in;
}

hw_uint<256> stg1_1_cu1845(hw_uint<16*64>& stg0_FIFO_buf12) {
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

	
  hw_uint<64 > stg0_FIFO_buf12_lane_3_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_0);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_1);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_2);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_3_pack, stg0_FIFO_buf12_lane_3);
  auto res_stg1_update_0_sm172_0849 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_3_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_7_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_4);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_5);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_6);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_7_pack, stg0_FIFO_buf12_lane_7);
  auto res_stg1_update_0_sm172_1851 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_7_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_11_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_8);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_9);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_10);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_11_pack, stg0_FIFO_buf12_lane_11);
  auto res_stg1_update_0_sm172_2853 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_11_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_15_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_12);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_13);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_14);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_15_pack, stg0_FIFO_buf12_lane_15);
  auto res_stg1_update_0_sm172_3855 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_15_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_19_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_16);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_17);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_18);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_19_pack, stg0_FIFO_buf12_lane_19);
  auto res_stg1_update_0_sm172_4857 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_19_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_23_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_20);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_21);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_22);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_23_pack, stg0_FIFO_buf12_lane_23);
  auto res_stg1_update_0_sm172_5859 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_23_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_27_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_24);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_25);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_26);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_27_pack, stg0_FIFO_buf12_lane_27);
  auto res_stg1_update_0_sm172_6861 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_27_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_31_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_28);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_29);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_30);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_31_pack, stg0_FIFO_buf12_lane_31);
  auto res_stg1_update_0_sm172_7863 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_31_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_35_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_32);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_33);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_34);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_35_pack, stg0_FIFO_buf12_lane_35);
  auto res_stg1_update_0_sm172_8865 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_35_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_39_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_36);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_37);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_38);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_39_pack, stg0_FIFO_buf12_lane_39);
  auto res_stg1_update_0_sm172_9867 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_39_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_43_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_40);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_41);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_42);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_43_pack, stg0_FIFO_buf12_lane_43);
  auto res_stg1_update_0_sm172_10869 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_43_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_47_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_44);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_45);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_46);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_47_pack, stg0_FIFO_buf12_lane_47);
  auto res_stg1_update_0_sm172_11871 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_47_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_51_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_48);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_49);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_50);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_51_pack, stg0_FIFO_buf12_lane_51);
  auto res_stg1_update_0_sm172_12873 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_51_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_55_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_52);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_53);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_54);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_55_pack, stg0_FIFO_buf12_lane_55);
  auto res_stg1_update_0_sm172_13875 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_55_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_59_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_56);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_57);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_58);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_59_pack, stg0_FIFO_buf12_lane_59);
  auto res_stg1_update_0_sm172_14877 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_59_pack);

  hw_uint<64 > stg0_FIFO_buf12_lane_63_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_60);
  set_at<16, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_61);
  set_at<32, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_62);
  set_at<48, 64, 16>(stg0_FIFO_buf12_lane_63_pack, stg0_FIFO_buf12_lane_63);
  auto res_stg1_update_0_sm172_15879 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf12_lane_63_pack);
  hw_uint<256 > return_value1846;
  set_at<0, 256, 16>(return_value1846, res_stg1_update_0_sm172_0849);
  set_at<16, 256, 16>(return_value1846, res_stg1_update_0_sm172_1851);
  set_at<32, 256, 16>(return_value1846, res_stg1_update_0_sm172_2853);
  set_at<48, 256, 16>(return_value1846, res_stg1_update_0_sm172_3855);
  set_at<64, 256, 16>(return_value1846, res_stg1_update_0_sm172_4857);
  set_at<80, 256, 16>(return_value1846, res_stg1_update_0_sm172_5859);
  set_at<96, 256, 16>(return_value1846, res_stg1_update_0_sm172_6861);
  set_at<112, 256, 16>(return_value1846, res_stg1_update_0_sm172_7863);
  set_at<128, 256, 16>(return_value1846, res_stg1_update_0_sm172_8865);
  set_at<144, 256, 16>(return_value1846, res_stg1_update_0_sm172_9867);
  set_at<160, 256, 16>(return_value1846, res_stg1_update_0_sm172_10869);
  set_at<176, 256, 16>(return_value1846, res_stg1_update_0_sm172_11871);
  set_at<192, 256, 16>(return_value1846, res_stg1_update_0_sm172_12873);
  set_at<208, 256, 16>(return_value1846, res_stg1_update_0_sm172_13875);
  set_at<224, 256, 16>(return_value1846, res_stg1_update_0_sm172_14877);
  set_at<240, 256, 16>(return_value1846, res_stg1_update_0_sm172_15879);
  return return_value1846;

}

hw_uint<256> stg7_1_cu1848(hw_uint<16*64>& stg6_FIFO_buf100) {
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

	
  hw_uint<64 > stg6_FIFO_buf100_lane_3_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_0);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_1);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_2);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_3_pack, stg6_FIFO_buf100_lane_3);
  auto res_stg7_update_0_sm173_0881 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_3_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_7_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_4);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_5);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_6);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_7_pack, stg6_FIFO_buf100_lane_7);
  auto res_stg7_update_0_sm173_1883 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_7_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_11_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_8);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_9);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_10);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_11_pack, stg6_FIFO_buf100_lane_11);
  auto res_stg7_update_0_sm173_2885 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_11_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_15_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_12);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_13);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_14);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_15_pack, stg6_FIFO_buf100_lane_15);
  auto res_stg7_update_0_sm173_3887 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_15_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_19_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_16);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_17);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_18);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_19_pack, stg6_FIFO_buf100_lane_19);
  auto res_stg7_update_0_sm173_4889 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_19_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_23_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_20);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_21);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_22);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_23_pack, stg6_FIFO_buf100_lane_23);
  auto res_stg7_update_0_sm173_5891 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_23_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_27_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_24);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_25);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_26);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_27_pack, stg6_FIFO_buf100_lane_27);
  auto res_stg7_update_0_sm173_6893 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_27_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_31_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_28);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_29);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_30);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_31_pack, stg6_FIFO_buf100_lane_31);
  auto res_stg7_update_0_sm173_7895 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_31_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_35_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_32);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_33);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_34);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_35_pack, stg6_FIFO_buf100_lane_35);
  auto res_stg7_update_0_sm173_8897 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_35_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_39_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_36);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_37);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_38);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_39_pack, stg6_FIFO_buf100_lane_39);
  auto res_stg7_update_0_sm173_9899 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_39_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_43_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_40);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_41);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_42);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_43_pack, stg6_FIFO_buf100_lane_43);
  auto res_stg7_update_0_sm173_10901 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_43_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_47_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_44);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_45);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_46);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_47_pack, stg6_FIFO_buf100_lane_47);
  auto res_stg7_update_0_sm173_11903 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_47_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_51_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_48);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_49);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_50);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_51_pack, stg6_FIFO_buf100_lane_51);
  auto res_stg7_update_0_sm173_12905 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_51_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_55_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_52);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_53);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_54);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_55_pack, stg6_FIFO_buf100_lane_55);
  auto res_stg7_update_0_sm173_13907 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_55_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_59_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_56);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_57);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_58);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_59_pack, stg6_FIFO_buf100_lane_59);
  auto res_stg7_update_0_sm173_14909 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_59_pack);

  hw_uint<64 > stg6_FIFO_buf100_lane_63_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_60);
  set_at<16, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_61);
  set_at<32, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_62);
  set_at<48, 64, 16>(stg6_FIFO_buf100_lane_63_pack, stg6_FIFO_buf100_lane_63);
  auto res_stg7_update_0_sm173_15911 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf100_lane_63_pack);
  hw_uint<256 > return_value1849;
  set_at<0, 256, 16>(return_value1849, res_stg7_update_0_sm173_0881);
  set_at<16, 256, 16>(return_value1849, res_stg7_update_0_sm173_1883);
  set_at<32, 256, 16>(return_value1849, res_stg7_update_0_sm173_2885);
  set_at<48, 256, 16>(return_value1849, res_stg7_update_0_sm173_3887);
  set_at<64, 256, 16>(return_value1849, res_stg7_update_0_sm173_4889);
  set_at<80, 256, 16>(return_value1849, res_stg7_update_0_sm173_5891);
  set_at<96, 256, 16>(return_value1849, res_stg7_update_0_sm173_6893);
  set_at<112, 256, 16>(return_value1849, res_stg7_update_0_sm173_7895);
  set_at<128, 256, 16>(return_value1849, res_stg7_update_0_sm173_8897);
  set_at<144, 256, 16>(return_value1849, res_stg7_update_0_sm173_9899);
  set_at<160, 256, 16>(return_value1849, res_stg7_update_0_sm173_10901);
  set_at<176, 256, 16>(return_value1849, res_stg7_update_0_sm173_11903);
  set_at<192, 256, 16>(return_value1849, res_stg7_update_0_sm173_12905);
  set_at<208, 256, 16>(return_value1849, res_stg7_update_0_sm173_13907);
  set_at<224, 256, 16>(return_value1849, res_stg7_update_0_sm173_14909);
  set_at<240, 256, 16>(return_value1849, res_stg7_update_0_sm173_15911);
  return return_value1849;

}

hw_uint<256> stg3_1_cu1851(hw_uint<16*64>& stg2_FIFO_buf68) {
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

	
  hw_uint<64 > stg2_FIFO_buf68_lane_3_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_0);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_1);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_2);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_3_pack, stg2_FIFO_buf68_lane_3);
  auto res_stg3_update_0_sm174_0785 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_3_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_7_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_4);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_5);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_6);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_7_pack, stg2_FIFO_buf68_lane_7);
  auto res_stg3_update_0_sm174_1787 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_7_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_11_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_8);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_9);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_10);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_11_pack, stg2_FIFO_buf68_lane_11);
  auto res_stg3_update_0_sm174_2789 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_11_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_15_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_12);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_13);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_14);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_15_pack, stg2_FIFO_buf68_lane_15);
  auto res_stg3_update_0_sm174_3791 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_15_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_19_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_16);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_17);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_18);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_19_pack, stg2_FIFO_buf68_lane_19);
  auto res_stg3_update_0_sm174_4793 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_19_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_23_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_20);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_21);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_22);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_23_pack, stg2_FIFO_buf68_lane_23);
  auto res_stg3_update_0_sm174_5795 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_23_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_27_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_24);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_25);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_26);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_27_pack, stg2_FIFO_buf68_lane_27);
  auto res_stg3_update_0_sm174_6797 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_27_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_31_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_28);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_29);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_30);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_31_pack, stg2_FIFO_buf68_lane_31);
  auto res_stg3_update_0_sm174_7799 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_31_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_35_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_32);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_33);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_34);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_35_pack, stg2_FIFO_buf68_lane_35);
  auto res_stg3_update_0_sm174_8801 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_35_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_39_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_36);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_37);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_38);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_39_pack, stg2_FIFO_buf68_lane_39);
  auto res_stg3_update_0_sm174_9803 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_39_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_43_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_40);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_41);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_42);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_43_pack, stg2_FIFO_buf68_lane_43);
  auto res_stg3_update_0_sm174_10805 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_43_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_47_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_44);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_45);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_46);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_47_pack, stg2_FIFO_buf68_lane_47);
  auto res_stg3_update_0_sm174_11807 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_47_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_51_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_48);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_49);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_50);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_51_pack, stg2_FIFO_buf68_lane_51);
  auto res_stg3_update_0_sm174_12809 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_51_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_55_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_52);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_53);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_54);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_55_pack, stg2_FIFO_buf68_lane_55);
  auto res_stg3_update_0_sm174_13811 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_55_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_59_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_56);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_57);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_58);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_59_pack, stg2_FIFO_buf68_lane_59);
  auto res_stg3_update_0_sm174_14813 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_59_pack);

  hw_uint<64 > stg2_FIFO_buf68_lane_63_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_60);
  set_at<16, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_61);
  set_at<32, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_62);
  set_at<48, 64, 16>(stg2_FIFO_buf68_lane_63_pack, stg2_FIFO_buf68_lane_63);
  auto res_stg3_update_0_sm174_15815 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf68_lane_63_pack);
  hw_uint<256 > return_value1852;
  set_at<0, 256, 16>(return_value1852, res_stg3_update_0_sm174_0785);
  set_at<16, 256, 16>(return_value1852, res_stg3_update_0_sm174_1787);
  set_at<32, 256, 16>(return_value1852, res_stg3_update_0_sm174_2789);
  set_at<48, 256, 16>(return_value1852, res_stg3_update_0_sm174_3791);
  set_at<64, 256, 16>(return_value1852, res_stg3_update_0_sm174_4793);
  set_at<80, 256, 16>(return_value1852, res_stg3_update_0_sm174_5795);
  set_at<96, 256, 16>(return_value1852, res_stg3_update_0_sm174_6797);
  set_at<112, 256, 16>(return_value1852, res_stg3_update_0_sm174_7799);
  set_at<128, 256, 16>(return_value1852, res_stg3_update_0_sm174_8801);
  set_at<144, 256, 16>(return_value1852, res_stg3_update_0_sm174_9803);
  set_at<160, 256, 16>(return_value1852, res_stg3_update_0_sm174_10805);
  set_at<176, 256, 16>(return_value1852, res_stg3_update_0_sm174_11807);
  set_at<192, 256, 16>(return_value1852, res_stg3_update_0_sm174_12809);
  set_at<208, 256, 16>(return_value1852, res_stg3_update_0_sm174_13811);
  set_at<224, 256, 16>(return_value1852, res_stg3_update_0_sm174_14813);
  set_at<240, 256, 16>(return_value1852, res_stg3_update_0_sm174_15815);
  return return_value1852;

}

hw_uint<256> stg2_1_cu1854(hw_uint<16*64>& stg1_FIFO_buf20) {
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

	
  hw_uint<64 > stg1_FIFO_buf20_lane_3_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_0);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_1);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_2);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_3_pack, stg1_FIFO_buf20_lane_3);
  auto res_stg2_update_0_sm175_01137 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_3_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_7_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_4);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_5);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_6);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_7_pack, stg1_FIFO_buf20_lane_7);
  auto res_stg2_update_0_sm175_11139 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_7_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_11_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_8);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_9);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_10);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_11_pack, stg1_FIFO_buf20_lane_11);
  auto res_stg2_update_0_sm175_21141 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_11_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_15_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_12);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_13);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_14);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_15_pack, stg1_FIFO_buf20_lane_15);
  auto res_stg2_update_0_sm175_31143 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_15_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_19_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_16);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_17);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_18);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_19_pack, stg1_FIFO_buf20_lane_19);
  auto res_stg2_update_0_sm175_41145 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_19_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_23_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_20);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_21);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_22);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_23_pack, stg1_FIFO_buf20_lane_23);
  auto res_stg2_update_0_sm175_51147 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_23_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_27_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_24);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_25);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_26);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_27_pack, stg1_FIFO_buf20_lane_27);
  auto res_stg2_update_0_sm175_61149 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_27_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_31_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_28);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_29);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_30);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_31_pack, stg1_FIFO_buf20_lane_31);
  auto res_stg2_update_0_sm175_71151 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_31_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_35_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_32);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_33);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_34);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_35_pack, stg1_FIFO_buf20_lane_35);
  auto res_stg2_update_0_sm175_81153 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_35_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_39_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_36);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_37);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_38);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_39_pack, stg1_FIFO_buf20_lane_39);
  auto res_stg2_update_0_sm175_91155 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_39_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_43_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_40);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_41);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_42);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_43_pack, stg1_FIFO_buf20_lane_43);
  auto res_stg2_update_0_sm175_101157 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_43_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_47_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_44);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_45);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_46);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_47_pack, stg1_FIFO_buf20_lane_47);
  auto res_stg2_update_0_sm175_111159 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_47_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_51_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_48);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_49);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_50);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_51_pack, stg1_FIFO_buf20_lane_51);
  auto res_stg2_update_0_sm175_121161 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_51_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_55_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_52);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_53);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_54);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_55_pack, stg1_FIFO_buf20_lane_55);
  auto res_stg2_update_0_sm175_131163 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_55_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_59_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_56);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_57);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_58);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_59_pack, stg1_FIFO_buf20_lane_59);
  auto res_stg2_update_0_sm175_141165 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_59_pack);

  hw_uint<64 > stg1_FIFO_buf20_lane_63_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_60);
  set_at<16, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_61);
  set_at<32, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_62);
  set_at<48, 64, 16>(stg1_FIFO_buf20_lane_63_pack, stg1_FIFO_buf20_lane_63);
  auto res_stg2_update_0_sm175_151167 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf20_lane_63_pack);
  hw_uint<256 > return_value1855;
  set_at<0, 256, 16>(return_value1855, res_stg2_update_0_sm175_01137);
  set_at<16, 256, 16>(return_value1855, res_stg2_update_0_sm175_11139);
  set_at<32, 256, 16>(return_value1855, res_stg2_update_0_sm175_21141);
  set_at<48, 256, 16>(return_value1855, res_stg2_update_0_sm175_31143);
  set_at<64, 256, 16>(return_value1855, res_stg2_update_0_sm175_41145);
  set_at<80, 256, 16>(return_value1855, res_stg2_update_0_sm175_51147);
  set_at<96, 256, 16>(return_value1855, res_stg2_update_0_sm175_61149);
  set_at<112, 256, 16>(return_value1855, res_stg2_update_0_sm175_71151);
  set_at<128, 256, 16>(return_value1855, res_stg2_update_0_sm175_81153);
  set_at<144, 256, 16>(return_value1855, res_stg2_update_0_sm175_91155);
  set_at<160, 256, 16>(return_value1855, res_stg2_update_0_sm175_101157);
  set_at<176, 256, 16>(return_value1855, res_stg2_update_0_sm175_111159);
  set_at<192, 256, 16>(return_value1855, res_stg2_update_0_sm175_121161);
  set_at<208, 256, 16>(return_value1855, res_stg2_update_0_sm175_131163);
  set_at<224, 256, 16>(return_value1855, res_stg2_update_0_sm175_141165);
  set_at<240, 256, 16>(return_value1855, res_stg2_update_0_sm175_151167);
  return return_value1855;

}

hw_uint<256> stg12_1_cu1857(hw_uint<16*64>& stg11_FIFO_buf36) {
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

	
  hw_uint<64 > stg11_FIFO_buf36_lane_3_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_0);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_1);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_2);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_3_pack, stg11_FIFO_buf36_lane_3);
  auto res_stg12_update_0_sm176_01105 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_3_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_7_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_4);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_5);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_6);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_7_pack, stg11_FIFO_buf36_lane_7);
  auto res_stg12_update_0_sm176_11107 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_7_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_11_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_8);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_9);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_10);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_11_pack, stg11_FIFO_buf36_lane_11);
  auto res_stg12_update_0_sm176_21109 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_11_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_15_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_12);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_13);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_14);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_15_pack, stg11_FIFO_buf36_lane_15);
  auto res_stg12_update_0_sm176_31111 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_15_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_19_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_16);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_17);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_18);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_19_pack, stg11_FIFO_buf36_lane_19);
  auto res_stg12_update_0_sm176_41113 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_19_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_23_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_20);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_21);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_22);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_23_pack, stg11_FIFO_buf36_lane_23);
  auto res_stg12_update_0_sm176_51115 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_23_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_27_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_24);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_25);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_26);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_27_pack, stg11_FIFO_buf36_lane_27);
  auto res_stg12_update_0_sm176_61117 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_27_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_31_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_28);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_29);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_30);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_31_pack, stg11_FIFO_buf36_lane_31);
  auto res_stg12_update_0_sm176_71119 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_31_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_35_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_32);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_33);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_34);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_35_pack, stg11_FIFO_buf36_lane_35);
  auto res_stg12_update_0_sm176_81121 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_35_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_39_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_36);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_37);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_38);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_39_pack, stg11_FIFO_buf36_lane_39);
  auto res_stg12_update_0_sm176_91123 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_39_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_43_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_40);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_41);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_42);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_43_pack, stg11_FIFO_buf36_lane_43);
  auto res_stg12_update_0_sm176_101125 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_43_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_47_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_44);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_45);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_46);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_47_pack, stg11_FIFO_buf36_lane_47);
  auto res_stg12_update_0_sm176_111127 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_47_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_51_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_48);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_49);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_50);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_51_pack, stg11_FIFO_buf36_lane_51);
  auto res_stg12_update_0_sm176_121129 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_51_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_55_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_52);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_53);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_54);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_55_pack, stg11_FIFO_buf36_lane_55);
  auto res_stg12_update_0_sm176_131131 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_55_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_59_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_56);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_57);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_58);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_59_pack, stg11_FIFO_buf36_lane_59);
  auto res_stg12_update_0_sm176_141133 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_59_pack);

  hw_uint<64 > stg11_FIFO_buf36_lane_63_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_60);
  set_at<16, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_61);
  set_at<32, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_62);
  set_at<48, 64, 16>(stg11_FIFO_buf36_lane_63_pack, stg11_FIFO_buf36_lane_63);
  auto res_stg12_update_0_sm176_151135 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf36_lane_63_pack);
  hw_uint<256 > return_value1858;
  set_at<0, 256, 16>(return_value1858, res_stg12_update_0_sm176_01105);
  set_at<16, 256, 16>(return_value1858, res_stg12_update_0_sm176_11107);
  set_at<32, 256, 16>(return_value1858, res_stg12_update_0_sm176_21109);
  set_at<48, 256, 16>(return_value1858, res_stg12_update_0_sm176_31111);
  set_at<64, 256, 16>(return_value1858, res_stg12_update_0_sm176_41113);
  set_at<80, 256, 16>(return_value1858, res_stg12_update_0_sm176_51115);
  set_at<96, 256, 16>(return_value1858, res_stg12_update_0_sm176_61117);
  set_at<112, 256, 16>(return_value1858, res_stg12_update_0_sm176_71119);
  set_at<128, 256, 16>(return_value1858, res_stg12_update_0_sm176_81121);
  set_at<144, 256, 16>(return_value1858, res_stg12_update_0_sm176_91123);
  set_at<160, 256, 16>(return_value1858, res_stg12_update_0_sm176_101125);
  set_at<176, 256, 16>(return_value1858, res_stg12_update_0_sm176_111127);
  set_at<192, 256, 16>(return_value1858, res_stg12_update_0_sm176_121129);
  set_at<208, 256, 16>(return_value1858, res_stg12_update_0_sm176_131131);
  set_at<224, 256, 16>(return_value1858, res_stg12_update_0_sm176_141133);
  set_at<240, 256, 16>(return_value1858, res_stg12_update_0_sm176_151135);
  return return_value1858;

}

