#include "jacdyn_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> stg3_to_gp_1136_ld101_cu1745(hw_uint<32*16>& stg3_to_gp_1136) {
  return stg3_to_gp_1136;
}

hw_uint<256> stg8_to_gp_1656_ld121_cu1747(hw_uint<32*16>& stg8_to_gp_1656) {
  return stg8_to_gp_1656;
}

hw_uint<256> stg13_to_gp_724_ld89_cu1749(hw_uint<32*16>& stg13_to_gp_724) {
  return stg13_to_gp_724;
}

hw_uint<256> stg7_ld53_cu1751(hw_uint<32*16>& stg7) {
  return stg7;
}

hw_uint<256> stg9_ld61_cu1753(hw_uint<32*16>& stg9) {
  return stg9;
}

hw_uint<256> stg12_to_gp_620_ld85_cu1755(hw_uint<32*16>& stg12_to_gp_620) {
  return stg12_to_gp_620;
}

hw_uint<256> stg4_to_gp_1240_ld105_cu1757(hw_uint<32*16>& stg4_to_gp_1240) {
  return stg4_to_gp_1240;
}

hw_uint<256> stg5_to_gp_1344_ld109_cu1759(hw_uint<32*16>& stg5_to_gp_1344) {
  return stg5_to_gp_1344;
}

hw_uint<256> stg6_to_gp_1448_ld113_cu1761(hw_uint<32*16>& stg6_to_gp_1448) {
  return stg6_to_gp_1448;
}

hw_uint<256> stg7_to_gp_1552_ld117_cu1763(hw_uint<32*16>& stg7_to_gp_1552) {
  return stg7_to_gp_1552;
}

hw_uint<256> stg3_ld37_cu1765(hw_uint<32*16>& stg3) {
  return stg3;
}

hw_uint<256> stg10_to_gp_412_ld77_cu1767(hw_uint<32*16>& stg10_to_gp_412) {
  return stg10_to_gp_412;
}

hw_uint<256> stg11_ld17_cu1769(hw_uint<32*16>& stg11) {
  return stg11;
}

hw_uint<256> stg12_ld21_cu1771(hw_uint<32*16>& stg12) {
  return stg12;
}

hw_uint<256> in_to_gp_20_ld65_cu1773(hw_uint<32*16>& in_to_gp_20) {
  return in_to_gp_20;
}

hw_uint<256> stg1_to_gp_98_ld73_cu1775(hw_uint<32*16>& stg1_to_gp_98) {
  return stg1_to_gp_98;
}

hw_uint<256> stg11_to_gp_516_ld81_cu1777(hw_uint<32*16>& stg11_to_gp_516) {
  return stg11_to_gp_516;
}

hw_uint<256> stg14_to_gp_128_ld93_cu1779(hw_uint<32*16>& stg14_to_gp_128) {
  return stg14_to_gp_128;
}

hw_uint<256> stg0_to_gp_84_ld69_cu1781(hw_uint<32*16>& stg0_to_gp_84) {
  return stg0_to_gp_84;
}

hw_uint<256> stg4_ld41_cu1783(hw_uint<32*16>& stg4) {
  return stg4;
}

hw_uint<256> stg8_ld57_cu1785(hw_uint<32*16>& stg8) {
  return stg8;
}

hw_uint<256> stg2_to_gp_1032_ld97_cu1787(hw_uint<32*16>& stg2_to_gp_1032) {
  return stg2_to_gp_1032;
}

hw_uint<256> stg9_to_gp_360_ld125_cu1789(hw_uint<32*16>& stg9_to_gp_360) {
  return stg9_to_gp_360;
}

hw_uint<256> in_1_cu1791(hw_uint<32*16>& in_off_chip) {
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

	
  hw_uint<32 > in_off_chip_lane_0_pack;
  set_at<0, 32, 32>(in_off_chip_lane_0_pack, in_off_chip_lane_0);
auto res_in_update_0_sm151_15943 = in_generated_compute_unrolled_16(in_off_chip_lane_0_pack);

	  hw_uint<32 > in_off_chip_lane_1_pack;
  set_at<0, 32, 32>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
auto res_in_update_0_sm151_14941 = in_generated_compute_unrolled_16(in_off_chip_lane_1_pack);

	  hw_uint<32 > in_off_chip_lane_2_pack;
  set_at<0, 32, 32>(in_off_chip_lane_2_pack, in_off_chip_lane_2);
auto res_in_update_0_sm151_13939 = in_generated_compute_unrolled_16(in_off_chip_lane_2_pack);

	  hw_uint<32 > in_off_chip_lane_3_pack;
  set_at<0, 32, 32>(in_off_chip_lane_3_pack, in_off_chip_lane_3);
auto res_in_update_0_sm151_12937 = in_generated_compute_unrolled_16(in_off_chip_lane_3_pack);

	  hw_uint<32 > in_off_chip_lane_4_pack;
  set_at<0, 32, 32>(in_off_chip_lane_4_pack, in_off_chip_lane_4);
auto res_in_update_0_sm151_11935 = in_generated_compute_unrolled_16(in_off_chip_lane_4_pack);

	  hw_uint<32 > in_off_chip_lane_5_pack;
  set_at<0, 32, 32>(in_off_chip_lane_5_pack, in_off_chip_lane_5);
auto res_in_update_0_sm151_10933 = in_generated_compute_unrolled_16(in_off_chip_lane_5_pack);

	  hw_uint<32 > in_off_chip_lane_6_pack;
  set_at<0, 32, 32>(in_off_chip_lane_6_pack, in_off_chip_lane_6);
auto res_in_update_0_sm151_9931 = in_generated_compute_unrolled_16(in_off_chip_lane_6_pack);

	  hw_uint<32 > in_off_chip_lane_7_pack;
  set_at<0, 32, 32>(in_off_chip_lane_7_pack, in_off_chip_lane_7);
auto res_in_update_0_sm151_8929 = in_generated_compute_unrolled_16(in_off_chip_lane_7_pack);

	  hw_uint<32 > in_off_chip_lane_8_pack;
  set_at<0, 32, 32>(in_off_chip_lane_8_pack, in_off_chip_lane_8);
auto res_in_update_0_sm151_7927 = in_generated_compute_unrolled_16(in_off_chip_lane_8_pack);

	  hw_uint<32 > in_off_chip_lane_9_pack;
  set_at<0, 32, 32>(in_off_chip_lane_9_pack, in_off_chip_lane_9);
auto res_in_update_0_sm151_6925 = in_generated_compute_unrolled_16(in_off_chip_lane_9_pack);

	  hw_uint<32 > in_off_chip_lane_10_pack;
  set_at<0, 32, 32>(in_off_chip_lane_10_pack, in_off_chip_lane_10);
auto res_in_update_0_sm151_5923 = in_generated_compute_unrolled_16(in_off_chip_lane_10_pack);

	  hw_uint<32 > in_off_chip_lane_11_pack;
  set_at<0, 32, 32>(in_off_chip_lane_11_pack, in_off_chip_lane_11);
auto res_in_update_0_sm151_4921 = in_generated_compute_unrolled_16(in_off_chip_lane_11_pack);

	  hw_uint<32 > in_off_chip_lane_12_pack;
  set_at<0, 32, 32>(in_off_chip_lane_12_pack, in_off_chip_lane_12);
auto res_in_update_0_sm151_3919 = in_generated_compute_unrolled_16(in_off_chip_lane_12_pack);

	  hw_uint<32 > in_off_chip_lane_13_pack;
  set_at<0, 32, 32>(in_off_chip_lane_13_pack, in_off_chip_lane_13);
auto res_in_update_0_sm151_2917 = in_generated_compute_unrolled_16(in_off_chip_lane_13_pack);

	  hw_uint<32 > in_off_chip_lane_14_pack;
  set_at<0, 32, 32>(in_off_chip_lane_14_pack, in_off_chip_lane_14);
auto res_in_update_0_sm151_1915 = in_generated_compute_unrolled_16(in_off_chip_lane_14_pack);

	  hw_uint<32 > in_off_chip_lane_15_pack;
  set_at<0, 32, 32>(in_off_chip_lane_15_pack, in_off_chip_lane_15);
auto res_in_update_0_sm151_0913 = in_generated_compute_unrolled_16(in_off_chip_lane_15_pack);
  hw_uint<512 > return_value1792;
  set_at<0, 512, 32>(return_value1792, res_in_update_0_sm151_15943);
  set_at<32, 512, 32>(return_value1792, res_in_update_0_sm151_14941);
  set_at<64, 512, 32>(return_value1792, res_in_update_0_sm151_13939);
  set_at<96, 512, 32>(return_value1792, res_in_update_0_sm151_12937);
  set_at<128, 512, 32>(return_value1792, res_in_update_0_sm151_11935);
  set_at<160, 512, 32>(return_value1792, res_in_update_0_sm151_10933);
  set_at<192, 512, 32>(return_value1792, res_in_update_0_sm151_9931);
  set_at<224, 512, 32>(return_value1792, res_in_update_0_sm151_8929);
  set_at<256, 512, 32>(return_value1792, res_in_update_0_sm151_7927);
  set_at<288, 512, 32>(return_value1792, res_in_update_0_sm151_6925);
  set_at<320, 512, 32>(return_value1792, res_in_update_0_sm151_5923);
  set_at<352, 512, 32>(return_value1792, res_in_update_0_sm151_4921);
  set_at<384, 512, 32>(return_value1792, res_in_update_0_sm151_3919);
  set_at<416, 512, 32>(return_value1792, res_in_update_0_sm151_2917);
  set_at<448, 512, 32>(return_value1792, res_in_update_0_sm151_1915);
  set_at<480, 512, 32>(return_value1792, res_in_update_0_sm151_0913);
  return return_value1792;

}

hw_uint<256> stg0_1_cu1794(hw_uint<32*64>& in_FIFO_buf64) {
  hw_uint<16> in_FIFO_buf64_lane_0 = in_FIFO_buf64.extract<0, 15>();
  hw_uint<16> in_FIFO_buf64_lane_1 = in_FIFO_buf64.extract<16, 31>();
  hw_uint<16> in_FIFO_buf64_lane_2 = in_FIFO_buf64.extract<32, 47>();
  hw_uint<16> in_FIFO_buf64_lane_3 = in_FIFO_buf64.extract<48, 63>();
  hw_uint<16> in_FIFO_buf64_lane_4 = in_FIFO_buf64.extract<64, 79>();
  hw_uint<16> in_FIFO_buf64_lane_5 = in_FIFO_buf64.extract<80, 95>();
  hw_uint<16> in_FIFO_buf64_lane_6 = in_FIFO_buf64.extract<96, 111>();
  hw_uint<16> in_FIFO_buf64_lane_7 = in_FIFO_buf64.extract<112, 127>();
  hw_uint<16> in_FIFO_buf64_lane_8 = in_FIFO_buf64.extract<128, 143>();
  hw_uint<16> in_FIFO_buf64_lane_9 = in_FIFO_buf64.extract<144, 159>();
  hw_uint<16> in_FIFO_buf64_lane_10 = in_FIFO_buf64.extract<160, 175>();
  hw_uint<16> in_FIFO_buf64_lane_11 = in_FIFO_buf64.extract<176, 191>();
  hw_uint<16> in_FIFO_buf64_lane_12 = in_FIFO_buf64.extract<192, 207>();
  hw_uint<16> in_FIFO_buf64_lane_13 = in_FIFO_buf64.extract<208, 223>();
  hw_uint<16> in_FIFO_buf64_lane_14 = in_FIFO_buf64.extract<224, 239>();
  hw_uint<16> in_FIFO_buf64_lane_15 = in_FIFO_buf64.extract<240, 255>();
  hw_uint<16> in_FIFO_buf64_lane_16 = in_FIFO_buf64.extract<256, 271>();
  hw_uint<16> in_FIFO_buf64_lane_17 = in_FIFO_buf64.extract<272, 287>();
  hw_uint<16> in_FIFO_buf64_lane_18 = in_FIFO_buf64.extract<288, 303>();
  hw_uint<16> in_FIFO_buf64_lane_19 = in_FIFO_buf64.extract<304, 319>();
  hw_uint<16> in_FIFO_buf64_lane_20 = in_FIFO_buf64.extract<320, 335>();
  hw_uint<16> in_FIFO_buf64_lane_21 = in_FIFO_buf64.extract<336, 351>();
  hw_uint<16> in_FIFO_buf64_lane_22 = in_FIFO_buf64.extract<352, 367>();
  hw_uint<16> in_FIFO_buf64_lane_23 = in_FIFO_buf64.extract<368, 383>();
  hw_uint<16> in_FIFO_buf64_lane_24 = in_FIFO_buf64.extract<384, 399>();
  hw_uint<16> in_FIFO_buf64_lane_25 = in_FIFO_buf64.extract<400, 415>();
  hw_uint<16> in_FIFO_buf64_lane_26 = in_FIFO_buf64.extract<416, 431>();
  hw_uint<16> in_FIFO_buf64_lane_27 = in_FIFO_buf64.extract<432, 447>();
  hw_uint<16> in_FIFO_buf64_lane_28 = in_FIFO_buf64.extract<448, 463>();
  hw_uint<16> in_FIFO_buf64_lane_29 = in_FIFO_buf64.extract<464, 479>();
  hw_uint<16> in_FIFO_buf64_lane_30 = in_FIFO_buf64.extract<480, 495>();
  hw_uint<16> in_FIFO_buf64_lane_31 = in_FIFO_buf64.extract<496, 511>();
  hw_uint<16> in_FIFO_buf64_lane_32 = in_FIFO_buf64.extract<512, 527>();
  hw_uint<16> in_FIFO_buf64_lane_33 = in_FIFO_buf64.extract<528, 543>();
  hw_uint<16> in_FIFO_buf64_lane_34 = in_FIFO_buf64.extract<544, 559>();
  hw_uint<16> in_FIFO_buf64_lane_35 = in_FIFO_buf64.extract<560, 575>();
  hw_uint<16> in_FIFO_buf64_lane_36 = in_FIFO_buf64.extract<576, 591>();
  hw_uint<16> in_FIFO_buf64_lane_37 = in_FIFO_buf64.extract<592, 607>();
  hw_uint<16> in_FIFO_buf64_lane_38 = in_FIFO_buf64.extract<608, 623>();
  hw_uint<16> in_FIFO_buf64_lane_39 = in_FIFO_buf64.extract<624, 639>();
  hw_uint<16> in_FIFO_buf64_lane_40 = in_FIFO_buf64.extract<640, 655>();
  hw_uint<16> in_FIFO_buf64_lane_41 = in_FIFO_buf64.extract<656, 671>();
  hw_uint<16> in_FIFO_buf64_lane_42 = in_FIFO_buf64.extract<672, 687>();
  hw_uint<16> in_FIFO_buf64_lane_43 = in_FIFO_buf64.extract<688, 703>();
  hw_uint<16> in_FIFO_buf64_lane_44 = in_FIFO_buf64.extract<704, 719>();
  hw_uint<16> in_FIFO_buf64_lane_45 = in_FIFO_buf64.extract<720, 735>();
  hw_uint<16> in_FIFO_buf64_lane_46 = in_FIFO_buf64.extract<736, 751>();
  hw_uint<16> in_FIFO_buf64_lane_47 = in_FIFO_buf64.extract<752, 767>();
  hw_uint<16> in_FIFO_buf64_lane_48 = in_FIFO_buf64.extract<768, 783>();
  hw_uint<16> in_FIFO_buf64_lane_49 = in_FIFO_buf64.extract<784, 799>();
  hw_uint<16> in_FIFO_buf64_lane_50 = in_FIFO_buf64.extract<800, 815>();
  hw_uint<16> in_FIFO_buf64_lane_51 = in_FIFO_buf64.extract<816, 831>();
  hw_uint<16> in_FIFO_buf64_lane_52 = in_FIFO_buf64.extract<832, 847>();
  hw_uint<16> in_FIFO_buf64_lane_53 = in_FIFO_buf64.extract<848, 863>();
  hw_uint<16> in_FIFO_buf64_lane_54 = in_FIFO_buf64.extract<864, 879>();
  hw_uint<16> in_FIFO_buf64_lane_55 = in_FIFO_buf64.extract<880, 895>();
  hw_uint<16> in_FIFO_buf64_lane_56 = in_FIFO_buf64.extract<896, 911>();
  hw_uint<16> in_FIFO_buf64_lane_57 = in_FIFO_buf64.extract<912, 927>();
  hw_uint<16> in_FIFO_buf64_lane_58 = in_FIFO_buf64.extract<928, 943>();
  hw_uint<16> in_FIFO_buf64_lane_59 = in_FIFO_buf64.extract<944, 959>();
  hw_uint<16> in_FIFO_buf64_lane_60 = in_FIFO_buf64.extract<960, 975>();
  hw_uint<16> in_FIFO_buf64_lane_61 = in_FIFO_buf64.extract<976, 991>();
  hw_uint<16> in_FIFO_buf64_lane_62 = in_FIFO_buf64.extract<992, 1007>();
  hw_uint<16> in_FIFO_buf64_lane_63 = in_FIFO_buf64.extract<1008, 1023>();

	
  hw_uint<128 > in_FIFO_buf64_lane_3_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_0);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_1);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_2);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_3);
auto res_stg0_update_0_sm152_15975 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_3_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_7_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_4);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_5);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_6);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_7);
auto res_stg0_update_0_sm152_14973 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_7_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_11_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_8);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_9);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_10);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_11);
auto res_stg0_update_0_sm152_13971 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_11_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_15_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_12);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_13);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_14);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_15);
auto res_stg0_update_0_sm152_12969 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_15_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_19_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_16);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_17);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_18);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_19);
auto res_stg0_update_0_sm152_11967 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_19_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_23_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_20);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_21);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_22);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_23);
auto res_stg0_update_0_sm152_10965 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_23_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_27_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_24);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_25);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_26);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_27);
auto res_stg0_update_0_sm152_9963 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_27_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_31_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_28);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_29);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_30);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_31);
auto res_stg0_update_0_sm152_8961 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_31_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_35_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_32);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_33);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_34);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_35);
auto res_stg0_update_0_sm152_7959 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_35_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_39_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_36);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_37);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_38);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_39);
auto res_stg0_update_0_sm152_6957 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_39_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_43_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_40);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_41);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_42);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_43);
auto res_stg0_update_0_sm152_5955 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_43_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_47_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_44);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_45);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_46);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_47);
auto res_stg0_update_0_sm152_4953 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_47_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_51_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_48);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_49);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_50);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_51);
auto res_stg0_update_0_sm152_3951 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_51_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_55_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_52);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_53);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_54);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_55);
auto res_stg0_update_0_sm152_2949 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_55_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_59_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_56);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_57);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_58);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_59);
auto res_stg0_update_0_sm152_1947 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_59_pack);

	  hw_uint<128 > in_FIFO_buf64_lane_63_pack;
  set_at<0, 128, 32>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_60);
  set_at<32, 128, 32>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_61);
  set_at<64, 128, 32>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_62);
  set_at<96, 128, 32>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_63);
auto res_stg0_update_0_sm152_0945 = stg0_generated_compute_unrolled_16(in_FIFO_buf64_lane_63_pack);
  hw_uint<512 > return_value1795;
  set_at<0, 512, 32>(return_value1795, res_stg0_update_0_sm152_15975);
  set_at<32, 512, 32>(return_value1795, res_stg0_update_0_sm152_14973);
  set_at<64, 512, 32>(return_value1795, res_stg0_update_0_sm152_13971);
  set_at<96, 512, 32>(return_value1795, res_stg0_update_0_sm152_12969);
  set_at<128, 512, 32>(return_value1795, res_stg0_update_0_sm152_11967);
  set_at<160, 512, 32>(return_value1795, res_stg0_update_0_sm152_10965);
  set_at<192, 512, 32>(return_value1795, res_stg0_update_0_sm152_9963);
  set_at<224, 512, 32>(return_value1795, res_stg0_update_0_sm152_8961);
  set_at<256, 512, 32>(return_value1795, res_stg0_update_0_sm152_7959);
  set_at<288, 512, 32>(return_value1795, res_stg0_update_0_sm152_6957);
  set_at<320, 512, 32>(return_value1795, res_stg0_update_0_sm152_5955);
  set_at<352, 512, 32>(return_value1795, res_stg0_update_0_sm152_4953);
  set_at<384, 512, 32>(return_value1795, res_stg0_update_0_sm152_3951);
  set_at<416, 512, 32>(return_value1795, res_stg0_update_0_sm152_2949);
  set_at<448, 512, 32>(return_value1795, res_stg0_update_0_sm152_1947);
  set_at<480, 512, 32>(return_value1795, res_stg0_update_0_sm152_0945);
  return return_value1795;

}

hw_uint<256> stg1_1_cu1797(hw_uint<32*64>& stg0_FIFO_buf68) {
  hw_uint<16> stg0_FIFO_buf68_lane_0 = stg0_FIFO_buf68.extract<0, 15>();
  hw_uint<16> stg0_FIFO_buf68_lane_1 = stg0_FIFO_buf68.extract<16, 31>();
  hw_uint<16> stg0_FIFO_buf68_lane_2 = stg0_FIFO_buf68.extract<32, 47>();
  hw_uint<16> stg0_FIFO_buf68_lane_3 = stg0_FIFO_buf68.extract<48, 63>();
  hw_uint<16> stg0_FIFO_buf68_lane_4 = stg0_FIFO_buf68.extract<64, 79>();
  hw_uint<16> stg0_FIFO_buf68_lane_5 = stg0_FIFO_buf68.extract<80, 95>();
  hw_uint<16> stg0_FIFO_buf68_lane_6 = stg0_FIFO_buf68.extract<96, 111>();
  hw_uint<16> stg0_FIFO_buf68_lane_7 = stg0_FIFO_buf68.extract<112, 127>();
  hw_uint<16> stg0_FIFO_buf68_lane_8 = stg0_FIFO_buf68.extract<128, 143>();
  hw_uint<16> stg0_FIFO_buf68_lane_9 = stg0_FIFO_buf68.extract<144, 159>();
  hw_uint<16> stg0_FIFO_buf68_lane_10 = stg0_FIFO_buf68.extract<160, 175>();
  hw_uint<16> stg0_FIFO_buf68_lane_11 = stg0_FIFO_buf68.extract<176, 191>();
  hw_uint<16> stg0_FIFO_buf68_lane_12 = stg0_FIFO_buf68.extract<192, 207>();
  hw_uint<16> stg0_FIFO_buf68_lane_13 = stg0_FIFO_buf68.extract<208, 223>();
  hw_uint<16> stg0_FIFO_buf68_lane_14 = stg0_FIFO_buf68.extract<224, 239>();
  hw_uint<16> stg0_FIFO_buf68_lane_15 = stg0_FIFO_buf68.extract<240, 255>();
  hw_uint<16> stg0_FIFO_buf68_lane_16 = stg0_FIFO_buf68.extract<256, 271>();
  hw_uint<16> stg0_FIFO_buf68_lane_17 = stg0_FIFO_buf68.extract<272, 287>();
  hw_uint<16> stg0_FIFO_buf68_lane_18 = stg0_FIFO_buf68.extract<288, 303>();
  hw_uint<16> stg0_FIFO_buf68_lane_19 = stg0_FIFO_buf68.extract<304, 319>();
  hw_uint<16> stg0_FIFO_buf68_lane_20 = stg0_FIFO_buf68.extract<320, 335>();
  hw_uint<16> stg0_FIFO_buf68_lane_21 = stg0_FIFO_buf68.extract<336, 351>();
  hw_uint<16> stg0_FIFO_buf68_lane_22 = stg0_FIFO_buf68.extract<352, 367>();
  hw_uint<16> stg0_FIFO_buf68_lane_23 = stg0_FIFO_buf68.extract<368, 383>();
  hw_uint<16> stg0_FIFO_buf68_lane_24 = stg0_FIFO_buf68.extract<384, 399>();
  hw_uint<16> stg0_FIFO_buf68_lane_25 = stg0_FIFO_buf68.extract<400, 415>();
  hw_uint<16> stg0_FIFO_buf68_lane_26 = stg0_FIFO_buf68.extract<416, 431>();
  hw_uint<16> stg0_FIFO_buf68_lane_27 = stg0_FIFO_buf68.extract<432, 447>();
  hw_uint<16> stg0_FIFO_buf68_lane_28 = stg0_FIFO_buf68.extract<448, 463>();
  hw_uint<16> stg0_FIFO_buf68_lane_29 = stg0_FIFO_buf68.extract<464, 479>();
  hw_uint<16> stg0_FIFO_buf68_lane_30 = stg0_FIFO_buf68.extract<480, 495>();
  hw_uint<16> stg0_FIFO_buf68_lane_31 = stg0_FIFO_buf68.extract<496, 511>();
  hw_uint<16> stg0_FIFO_buf68_lane_32 = stg0_FIFO_buf68.extract<512, 527>();
  hw_uint<16> stg0_FIFO_buf68_lane_33 = stg0_FIFO_buf68.extract<528, 543>();
  hw_uint<16> stg0_FIFO_buf68_lane_34 = stg0_FIFO_buf68.extract<544, 559>();
  hw_uint<16> stg0_FIFO_buf68_lane_35 = stg0_FIFO_buf68.extract<560, 575>();
  hw_uint<16> stg0_FIFO_buf68_lane_36 = stg0_FIFO_buf68.extract<576, 591>();
  hw_uint<16> stg0_FIFO_buf68_lane_37 = stg0_FIFO_buf68.extract<592, 607>();
  hw_uint<16> stg0_FIFO_buf68_lane_38 = stg0_FIFO_buf68.extract<608, 623>();
  hw_uint<16> stg0_FIFO_buf68_lane_39 = stg0_FIFO_buf68.extract<624, 639>();
  hw_uint<16> stg0_FIFO_buf68_lane_40 = stg0_FIFO_buf68.extract<640, 655>();
  hw_uint<16> stg0_FIFO_buf68_lane_41 = stg0_FIFO_buf68.extract<656, 671>();
  hw_uint<16> stg0_FIFO_buf68_lane_42 = stg0_FIFO_buf68.extract<672, 687>();
  hw_uint<16> stg0_FIFO_buf68_lane_43 = stg0_FIFO_buf68.extract<688, 703>();
  hw_uint<16> stg0_FIFO_buf68_lane_44 = stg0_FIFO_buf68.extract<704, 719>();
  hw_uint<16> stg0_FIFO_buf68_lane_45 = stg0_FIFO_buf68.extract<720, 735>();
  hw_uint<16> stg0_FIFO_buf68_lane_46 = stg0_FIFO_buf68.extract<736, 751>();
  hw_uint<16> stg0_FIFO_buf68_lane_47 = stg0_FIFO_buf68.extract<752, 767>();
  hw_uint<16> stg0_FIFO_buf68_lane_48 = stg0_FIFO_buf68.extract<768, 783>();
  hw_uint<16> stg0_FIFO_buf68_lane_49 = stg0_FIFO_buf68.extract<784, 799>();
  hw_uint<16> stg0_FIFO_buf68_lane_50 = stg0_FIFO_buf68.extract<800, 815>();
  hw_uint<16> stg0_FIFO_buf68_lane_51 = stg0_FIFO_buf68.extract<816, 831>();
  hw_uint<16> stg0_FIFO_buf68_lane_52 = stg0_FIFO_buf68.extract<832, 847>();
  hw_uint<16> stg0_FIFO_buf68_lane_53 = stg0_FIFO_buf68.extract<848, 863>();
  hw_uint<16> stg0_FIFO_buf68_lane_54 = stg0_FIFO_buf68.extract<864, 879>();
  hw_uint<16> stg0_FIFO_buf68_lane_55 = stg0_FIFO_buf68.extract<880, 895>();
  hw_uint<16> stg0_FIFO_buf68_lane_56 = stg0_FIFO_buf68.extract<896, 911>();
  hw_uint<16> stg0_FIFO_buf68_lane_57 = stg0_FIFO_buf68.extract<912, 927>();
  hw_uint<16> stg0_FIFO_buf68_lane_58 = stg0_FIFO_buf68.extract<928, 943>();
  hw_uint<16> stg0_FIFO_buf68_lane_59 = stg0_FIFO_buf68.extract<944, 959>();
  hw_uint<16> stg0_FIFO_buf68_lane_60 = stg0_FIFO_buf68.extract<960, 975>();
  hw_uint<16> stg0_FIFO_buf68_lane_61 = stg0_FIFO_buf68.extract<976, 991>();
  hw_uint<16> stg0_FIFO_buf68_lane_62 = stg0_FIFO_buf68.extract<992, 1007>();
  hw_uint<16> stg0_FIFO_buf68_lane_63 = stg0_FIFO_buf68.extract<1008, 1023>();

	
  hw_uint<128 > stg0_FIFO_buf68_lane_3_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_0);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_1);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_2);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_3);
auto res_stg1_update_0_sm153_151007 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_3_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_7_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_4);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_5);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_6);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_7);
auto res_stg1_update_0_sm153_141005 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_7_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_11_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_8);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_9);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_10);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_11);
auto res_stg1_update_0_sm153_131003 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_11_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_15_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_12);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_13);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_14);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_15);
auto res_stg1_update_0_sm153_121001 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_15_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_19_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_16);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_17);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_18);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_19);
auto res_stg1_update_0_sm153_11999 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_19_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_23_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_20);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_21);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_22);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_23);
auto res_stg1_update_0_sm153_10997 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_23_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_27_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_24);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_25);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_26);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_27);
auto res_stg1_update_0_sm153_9995 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_27_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_31_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_28);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_29);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_30);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_31);
auto res_stg1_update_0_sm153_8993 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_31_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_35_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_32);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_33);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_34);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_35);
auto res_stg1_update_0_sm153_7991 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_35_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_39_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_36);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_37);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_38);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_39);
auto res_stg1_update_0_sm153_6989 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_39_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_43_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_40);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_41);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_42);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_43);
auto res_stg1_update_0_sm153_5987 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_43_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_47_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_44);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_45);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_46);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_47);
auto res_stg1_update_0_sm153_4985 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_47_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_51_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_48);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_49);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_50);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_51);
auto res_stg1_update_0_sm153_3983 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_51_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_55_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_52);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_53);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_54);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_55);
auto res_stg1_update_0_sm153_2981 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_55_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_59_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_56);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_57);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_58);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_59);
auto res_stg1_update_0_sm153_1979 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_59_pack);

	  hw_uint<128 > stg0_FIFO_buf68_lane_63_pack;
  set_at<0, 128, 32>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_60);
  set_at<32, 128, 32>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_61);
  set_at<64, 128, 32>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_62);
  set_at<96, 128, 32>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_63);
auto res_stg1_update_0_sm153_0977 = stg1_generated_compute_unrolled_16(stg0_FIFO_buf68_lane_63_pack);
  hw_uint<512 > return_value1798;
  set_at<0, 512, 32>(return_value1798, res_stg1_update_0_sm153_151007);
  set_at<32, 512, 32>(return_value1798, res_stg1_update_0_sm153_141005);
  set_at<64, 512, 32>(return_value1798, res_stg1_update_0_sm153_131003);
  set_at<96, 512, 32>(return_value1798, res_stg1_update_0_sm153_121001);
  set_at<128, 512, 32>(return_value1798, res_stg1_update_0_sm153_11999);
  set_at<160, 512, 32>(return_value1798, res_stg1_update_0_sm153_10997);
  set_at<192, 512, 32>(return_value1798, res_stg1_update_0_sm153_9995);
  set_at<224, 512, 32>(return_value1798, res_stg1_update_0_sm153_8993);
  set_at<256, 512, 32>(return_value1798, res_stg1_update_0_sm153_7991);
  set_at<288, 512, 32>(return_value1798, res_stg1_update_0_sm153_6989);
  set_at<320, 512, 32>(return_value1798, res_stg1_update_0_sm153_5987);
  set_at<352, 512, 32>(return_value1798, res_stg1_update_0_sm153_4985);
  set_at<384, 512, 32>(return_value1798, res_stg1_update_0_sm153_3983);
  set_at<416, 512, 32>(return_value1798, res_stg1_update_0_sm153_2981);
  set_at<448, 512, 32>(return_value1798, res_stg1_update_0_sm153_1979);
  set_at<480, 512, 32>(return_value1798, res_stg1_update_0_sm153_0977);
  return return_value1798;

}

hw_uint<256> stg2_1_cu1800(hw_uint<32*64>& stg1_FIFO_buf72) {
  hw_uint<16> stg1_FIFO_buf72_lane_0 = stg1_FIFO_buf72.extract<0, 15>();
  hw_uint<16> stg1_FIFO_buf72_lane_1 = stg1_FIFO_buf72.extract<16, 31>();
  hw_uint<16> stg1_FIFO_buf72_lane_2 = stg1_FIFO_buf72.extract<32, 47>();
  hw_uint<16> stg1_FIFO_buf72_lane_3 = stg1_FIFO_buf72.extract<48, 63>();
  hw_uint<16> stg1_FIFO_buf72_lane_4 = stg1_FIFO_buf72.extract<64, 79>();
  hw_uint<16> stg1_FIFO_buf72_lane_5 = stg1_FIFO_buf72.extract<80, 95>();
  hw_uint<16> stg1_FIFO_buf72_lane_6 = stg1_FIFO_buf72.extract<96, 111>();
  hw_uint<16> stg1_FIFO_buf72_lane_7 = stg1_FIFO_buf72.extract<112, 127>();
  hw_uint<16> stg1_FIFO_buf72_lane_8 = stg1_FIFO_buf72.extract<128, 143>();
  hw_uint<16> stg1_FIFO_buf72_lane_9 = stg1_FIFO_buf72.extract<144, 159>();
  hw_uint<16> stg1_FIFO_buf72_lane_10 = stg1_FIFO_buf72.extract<160, 175>();
  hw_uint<16> stg1_FIFO_buf72_lane_11 = stg1_FIFO_buf72.extract<176, 191>();
  hw_uint<16> stg1_FIFO_buf72_lane_12 = stg1_FIFO_buf72.extract<192, 207>();
  hw_uint<16> stg1_FIFO_buf72_lane_13 = stg1_FIFO_buf72.extract<208, 223>();
  hw_uint<16> stg1_FIFO_buf72_lane_14 = stg1_FIFO_buf72.extract<224, 239>();
  hw_uint<16> stg1_FIFO_buf72_lane_15 = stg1_FIFO_buf72.extract<240, 255>();
  hw_uint<16> stg1_FIFO_buf72_lane_16 = stg1_FIFO_buf72.extract<256, 271>();
  hw_uint<16> stg1_FIFO_buf72_lane_17 = stg1_FIFO_buf72.extract<272, 287>();
  hw_uint<16> stg1_FIFO_buf72_lane_18 = stg1_FIFO_buf72.extract<288, 303>();
  hw_uint<16> stg1_FIFO_buf72_lane_19 = stg1_FIFO_buf72.extract<304, 319>();
  hw_uint<16> stg1_FIFO_buf72_lane_20 = stg1_FIFO_buf72.extract<320, 335>();
  hw_uint<16> stg1_FIFO_buf72_lane_21 = stg1_FIFO_buf72.extract<336, 351>();
  hw_uint<16> stg1_FIFO_buf72_lane_22 = stg1_FIFO_buf72.extract<352, 367>();
  hw_uint<16> stg1_FIFO_buf72_lane_23 = stg1_FIFO_buf72.extract<368, 383>();
  hw_uint<16> stg1_FIFO_buf72_lane_24 = stg1_FIFO_buf72.extract<384, 399>();
  hw_uint<16> stg1_FIFO_buf72_lane_25 = stg1_FIFO_buf72.extract<400, 415>();
  hw_uint<16> stg1_FIFO_buf72_lane_26 = stg1_FIFO_buf72.extract<416, 431>();
  hw_uint<16> stg1_FIFO_buf72_lane_27 = stg1_FIFO_buf72.extract<432, 447>();
  hw_uint<16> stg1_FIFO_buf72_lane_28 = stg1_FIFO_buf72.extract<448, 463>();
  hw_uint<16> stg1_FIFO_buf72_lane_29 = stg1_FIFO_buf72.extract<464, 479>();
  hw_uint<16> stg1_FIFO_buf72_lane_30 = stg1_FIFO_buf72.extract<480, 495>();
  hw_uint<16> stg1_FIFO_buf72_lane_31 = stg1_FIFO_buf72.extract<496, 511>();
  hw_uint<16> stg1_FIFO_buf72_lane_32 = stg1_FIFO_buf72.extract<512, 527>();
  hw_uint<16> stg1_FIFO_buf72_lane_33 = stg1_FIFO_buf72.extract<528, 543>();
  hw_uint<16> stg1_FIFO_buf72_lane_34 = stg1_FIFO_buf72.extract<544, 559>();
  hw_uint<16> stg1_FIFO_buf72_lane_35 = stg1_FIFO_buf72.extract<560, 575>();
  hw_uint<16> stg1_FIFO_buf72_lane_36 = stg1_FIFO_buf72.extract<576, 591>();
  hw_uint<16> stg1_FIFO_buf72_lane_37 = stg1_FIFO_buf72.extract<592, 607>();
  hw_uint<16> stg1_FIFO_buf72_lane_38 = stg1_FIFO_buf72.extract<608, 623>();
  hw_uint<16> stg1_FIFO_buf72_lane_39 = stg1_FIFO_buf72.extract<624, 639>();
  hw_uint<16> stg1_FIFO_buf72_lane_40 = stg1_FIFO_buf72.extract<640, 655>();
  hw_uint<16> stg1_FIFO_buf72_lane_41 = stg1_FIFO_buf72.extract<656, 671>();
  hw_uint<16> stg1_FIFO_buf72_lane_42 = stg1_FIFO_buf72.extract<672, 687>();
  hw_uint<16> stg1_FIFO_buf72_lane_43 = stg1_FIFO_buf72.extract<688, 703>();
  hw_uint<16> stg1_FIFO_buf72_lane_44 = stg1_FIFO_buf72.extract<704, 719>();
  hw_uint<16> stg1_FIFO_buf72_lane_45 = stg1_FIFO_buf72.extract<720, 735>();
  hw_uint<16> stg1_FIFO_buf72_lane_46 = stg1_FIFO_buf72.extract<736, 751>();
  hw_uint<16> stg1_FIFO_buf72_lane_47 = stg1_FIFO_buf72.extract<752, 767>();
  hw_uint<16> stg1_FIFO_buf72_lane_48 = stg1_FIFO_buf72.extract<768, 783>();
  hw_uint<16> stg1_FIFO_buf72_lane_49 = stg1_FIFO_buf72.extract<784, 799>();
  hw_uint<16> stg1_FIFO_buf72_lane_50 = stg1_FIFO_buf72.extract<800, 815>();
  hw_uint<16> stg1_FIFO_buf72_lane_51 = stg1_FIFO_buf72.extract<816, 831>();
  hw_uint<16> stg1_FIFO_buf72_lane_52 = stg1_FIFO_buf72.extract<832, 847>();
  hw_uint<16> stg1_FIFO_buf72_lane_53 = stg1_FIFO_buf72.extract<848, 863>();
  hw_uint<16> stg1_FIFO_buf72_lane_54 = stg1_FIFO_buf72.extract<864, 879>();
  hw_uint<16> stg1_FIFO_buf72_lane_55 = stg1_FIFO_buf72.extract<880, 895>();
  hw_uint<16> stg1_FIFO_buf72_lane_56 = stg1_FIFO_buf72.extract<896, 911>();
  hw_uint<16> stg1_FIFO_buf72_lane_57 = stg1_FIFO_buf72.extract<912, 927>();
  hw_uint<16> stg1_FIFO_buf72_lane_58 = stg1_FIFO_buf72.extract<928, 943>();
  hw_uint<16> stg1_FIFO_buf72_lane_59 = stg1_FIFO_buf72.extract<944, 959>();
  hw_uint<16> stg1_FIFO_buf72_lane_60 = stg1_FIFO_buf72.extract<960, 975>();
  hw_uint<16> stg1_FIFO_buf72_lane_61 = stg1_FIFO_buf72.extract<976, 991>();
  hw_uint<16> stg1_FIFO_buf72_lane_62 = stg1_FIFO_buf72.extract<992, 1007>();
  hw_uint<16> stg1_FIFO_buf72_lane_63 = stg1_FIFO_buf72.extract<1008, 1023>();

	
  hw_uint<128 > stg1_FIFO_buf72_lane_3_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_0);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_1);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_2);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_3);
auto res_stg2_update_0_sm154_151039 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_3_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_7_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_4);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_5);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_6);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_7);
auto res_stg2_update_0_sm154_141037 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_7_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_11_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_8);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_9);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_10);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_11);
auto res_stg2_update_0_sm154_131035 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_11_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_15_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_12);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_13);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_14);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_15);
auto res_stg2_update_0_sm154_121033 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_15_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_19_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_16);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_17);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_18);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_19);
auto res_stg2_update_0_sm154_111031 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_19_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_23_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_20);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_21);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_22);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_23);
auto res_stg2_update_0_sm154_101029 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_23_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_27_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_24);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_25);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_26);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_27);
auto res_stg2_update_0_sm154_91027 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_27_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_31_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_28);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_29);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_30);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_31);
auto res_stg2_update_0_sm154_81025 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_31_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_35_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_32);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_33);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_34);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_35);
auto res_stg2_update_0_sm154_71023 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_35_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_39_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_36);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_37);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_38);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_39);
auto res_stg2_update_0_sm154_61021 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_39_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_43_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_40);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_41);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_42);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_43);
auto res_stg2_update_0_sm154_51019 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_43_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_47_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_44);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_45);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_46);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_47);
auto res_stg2_update_0_sm154_41017 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_47_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_51_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_48);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_49);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_50);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_51);
auto res_stg2_update_0_sm154_31015 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_51_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_55_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_52);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_53);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_54);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_55);
auto res_stg2_update_0_sm154_21013 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_55_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_59_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_56);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_57);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_58);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_59);
auto res_stg2_update_0_sm154_11011 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_59_pack);

	  hw_uint<128 > stg1_FIFO_buf72_lane_63_pack;
  set_at<0, 128, 32>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_60);
  set_at<32, 128, 32>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_61);
  set_at<64, 128, 32>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_62);
  set_at<96, 128, 32>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_63);
auto res_stg2_update_0_sm154_01009 = stg2_generated_compute_unrolled_16(stg1_FIFO_buf72_lane_63_pack);
  hw_uint<512 > return_value1801;
  set_at<0, 512, 32>(return_value1801, res_stg2_update_0_sm154_151039);
  set_at<32, 512, 32>(return_value1801, res_stg2_update_0_sm154_141037);
  set_at<64, 512, 32>(return_value1801, res_stg2_update_0_sm154_131035);
  set_at<96, 512, 32>(return_value1801, res_stg2_update_0_sm154_121033);
  set_at<128, 512, 32>(return_value1801, res_stg2_update_0_sm154_111031);
  set_at<160, 512, 32>(return_value1801, res_stg2_update_0_sm154_101029);
  set_at<192, 512, 32>(return_value1801, res_stg2_update_0_sm154_91027);
  set_at<224, 512, 32>(return_value1801, res_stg2_update_0_sm154_81025);
  set_at<256, 512, 32>(return_value1801, res_stg2_update_0_sm154_71023);
  set_at<288, 512, 32>(return_value1801, res_stg2_update_0_sm154_61021);
  set_at<320, 512, 32>(return_value1801, res_stg2_update_0_sm154_51019);
  set_at<352, 512, 32>(return_value1801, res_stg2_update_0_sm154_41017);
  set_at<384, 512, 32>(return_value1801, res_stg2_update_0_sm154_31015);
  set_at<416, 512, 32>(return_value1801, res_stg2_update_0_sm154_21013);
  set_at<448, 512, 32>(return_value1801, res_stg2_update_0_sm154_11011);
  set_at<480, 512, 32>(return_value1801, res_stg2_update_0_sm154_01009);
  return return_value1801;

}

hw_uint<256> stg3_1_cu1803(hw_uint<32*64>& stg2_FIFO_buf96) {
  hw_uint<16> stg2_FIFO_buf96_lane_0 = stg2_FIFO_buf96.extract<0, 15>();
  hw_uint<16> stg2_FIFO_buf96_lane_1 = stg2_FIFO_buf96.extract<16, 31>();
  hw_uint<16> stg2_FIFO_buf96_lane_2 = stg2_FIFO_buf96.extract<32, 47>();
  hw_uint<16> stg2_FIFO_buf96_lane_3 = stg2_FIFO_buf96.extract<48, 63>();
  hw_uint<16> stg2_FIFO_buf96_lane_4 = stg2_FIFO_buf96.extract<64, 79>();
  hw_uint<16> stg2_FIFO_buf96_lane_5 = stg2_FIFO_buf96.extract<80, 95>();
  hw_uint<16> stg2_FIFO_buf96_lane_6 = stg2_FIFO_buf96.extract<96, 111>();
  hw_uint<16> stg2_FIFO_buf96_lane_7 = stg2_FIFO_buf96.extract<112, 127>();
  hw_uint<16> stg2_FIFO_buf96_lane_8 = stg2_FIFO_buf96.extract<128, 143>();
  hw_uint<16> stg2_FIFO_buf96_lane_9 = stg2_FIFO_buf96.extract<144, 159>();
  hw_uint<16> stg2_FIFO_buf96_lane_10 = stg2_FIFO_buf96.extract<160, 175>();
  hw_uint<16> stg2_FIFO_buf96_lane_11 = stg2_FIFO_buf96.extract<176, 191>();
  hw_uint<16> stg2_FIFO_buf96_lane_12 = stg2_FIFO_buf96.extract<192, 207>();
  hw_uint<16> stg2_FIFO_buf96_lane_13 = stg2_FIFO_buf96.extract<208, 223>();
  hw_uint<16> stg2_FIFO_buf96_lane_14 = stg2_FIFO_buf96.extract<224, 239>();
  hw_uint<16> stg2_FIFO_buf96_lane_15 = stg2_FIFO_buf96.extract<240, 255>();
  hw_uint<16> stg2_FIFO_buf96_lane_16 = stg2_FIFO_buf96.extract<256, 271>();
  hw_uint<16> stg2_FIFO_buf96_lane_17 = stg2_FIFO_buf96.extract<272, 287>();
  hw_uint<16> stg2_FIFO_buf96_lane_18 = stg2_FIFO_buf96.extract<288, 303>();
  hw_uint<16> stg2_FIFO_buf96_lane_19 = stg2_FIFO_buf96.extract<304, 319>();
  hw_uint<16> stg2_FIFO_buf96_lane_20 = stg2_FIFO_buf96.extract<320, 335>();
  hw_uint<16> stg2_FIFO_buf96_lane_21 = stg2_FIFO_buf96.extract<336, 351>();
  hw_uint<16> stg2_FIFO_buf96_lane_22 = stg2_FIFO_buf96.extract<352, 367>();
  hw_uint<16> stg2_FIFO_buf96_lane_23 = stg2_FIFO_buf96.extract<368, 383>();
  hw_uint<16> stg2_FIFO_buf96_lane_24 = stg2_FIFO_buf96.extract<384, 399>();
  hw_uint<16> stg2_FIFO_buf96_lane_25 = stg2_FIFO_buf96.extract<400, 415>();
  hw_uint<16> stg2_FIFO_buf96_lane_26 = stg2_FIFO_buf96.extract<416, 431>();
  hw_uint<16> stg2_FIFO_buf96_lane_27 = stg2_FIFO_buf96.extract<432, 447>();
  hw_uint<16> stg2_FIFO_buf96_lane_28 = stg2_FIFO_buf96.extract<448, 463>();
  hw_uint<16> stg2_FIFO_buf96_lane_29 = stg2_FIFO_buf96.extract<464, 479>();
  hw_uint<16> stg2_FIFO_buf96_lane_30 = stg2_FIFO_buf96.extract<480, 495>();
  hw_uint<16> stg2_FIFO_buf96_lane_31 = stg2_FIFO_buf96.extract<496, 511>();
  hw_uint<16> stg2_FIFO_buf96_lane_32 = stg2_FIFO_buf96.extract<512, 527>();
  hw_uint<16> stg2_FIFO_buf96_lane_33 = stg2_FIFO_buf96.extract<528, 543>();
  hw_uint<16> stg2_FIFO_buf96_lane_34 = stg2_FIFO_buf96.extract<544, 559>();
  hw_uint<16> stg2_FIFO_buf96_lane_35 = stg2_FIFO_buf96.extract<560, 575>();
  hw_uint<16> stg2_FIFO_buf96_lane_36 = stg2_FIFO_buf96.extract<576, 591>();
  hw_uint<16> stg2_FIFO_buf96_lane_37 = stg2_FIFO_buf96.extract<592, 607>();
  hw_uint<16> stg2_FIFO_buf96_lane_38 = stg2_FIFO_buf96.extract<608, 623>();
  hw_uint<16> stg2_FIFO_buf96_lane_39 = stg2_FIFO_buf96.extract<624, 639>();
  hw_uint<16> stg2_FIFO_buf96_lane_40 = stg2_FIFO_buf96.extract<640, 655>();
  hw_uint<16> stg2_FIFO_buf96_lane_41 = stg2_FIFO_buf96.extract<656, 671>();
  hw_uint<16> stg2_FIFO_buf96_lane_42 = stg2_FIFO_buf96.extract<672, 687>();
  hw_uint<16> stg2_FIFO_buf96_lane_43 = stg2_FIFO_buf96.extract<688, 703>();
  hw_uint<16> stg2_FIFO_buf96_lane_44 = stg2_FIFO_buf96.extract<704, 719>();
  hw_uint<16> stg2_FIFO_buf96_lane_45 = stg2_FIFO_buf96.extract<720, 735>();
  hw_uint<16> stg2_FIFO_buf96_lane_46 = stg2_FIFO_buf96.extract<736, 751>();
  hw_uint<16> stg2_FIFO_buf96_lane_47 = stg2_FIFO_buf96.extract<752, 767>();
  hw_uint<16> stg2_FIFO_buf96_lane_48 = stg2_FIFO_buf96.extract<768, 783>();
  hw_uint<16> stg2_FIFO_buf96_lane_49 = stg2_FIFO_buf96.extract<784, 799>();
  hw_uint<16> stg2_FIFO_buf96_lane_50 = stg2_FIFO_buf96.extract<800, 815>();
  hw_uint<16> stg2_FIFO_buf96_lane_51 = stg2_FIFO_buf96.extract<816, 831>();
  hw_uint<16> stg2_FIFO_buf96_lane_52 = stg2_FIFO_buf96.extract<832, 847>();
  hw_uint<16> stg2_FIFO_buf96_lane_53 = stg2_FIFO_buf96.extract<848, 863>();
  hw_uint<16> stg2_FIFO_buf96_lane_54 = stg2_FIFO_buf96.extract<864, 879>();
  hw_uint<16> stg2_FIFO_buf96_lane_55 = stg2_FIFO_buf96.extract<880, 895>();
  hw_uint<16> stg2_FIFO_buf96_lane_56 = stg2_FIFO_buf96.extract<896, 911>();
  hw_uint<16> stg2_FIFO_buf96_lane_57 = stg2_FIFO_buf96.extract<912, 927>();
  hw_uint<16> stg2_FIFO_buf96_lane_58 = stg2_FIFO_buf96.extract<928, 943>();
  hw_uint<16> stg2_FIFO_buf96_lane_59 = stg2_FIFO_buf96.extract<944, 959>();
  hw_uint<16> stg2_FIFO_buf96_lane_60 = stg2_FIFO_buf96.extract<960, 975>();
  hw_uint<16> stg2_FIFO_buf96_lane_61 = stg2_FIFO_buf96.extract<976, 991>();
  hw_uint<16> stg2_FIFO_buf96_lane_62 = stg2_FIFO_buf96.extract<992, 1007>();
  hw_uint<16> stg2_FIFO_buf96_lane_63 = stg2_FIFO_buf96.extract<1008, 1023>();

	
  hw_uint<128 > stg2_FIFO_buf96_lane_3_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_0);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_1);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_2);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_3);
auto res_stg3_update_0_sm155_151071 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_3_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_7_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_4);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_5);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_6);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_7);
auto res_stg3_update_0_sm155_141069 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_7_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_11_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_8);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_9);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_10);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_11);
auto res_stg3_update_0_sm155_131067 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_11_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_15_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_12);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_13);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_14);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_15);
auto res_stg3_update_0_sm155_121065 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_15_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_19_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_16);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_17);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_18);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_19);
auto res_stg3_update_0_sm155_111063 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_19_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_23_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_20);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_21);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_22);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_23);
auto res_stg3_update_0_sm155_101061 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_23_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_27_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_24);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_25);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_26);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_27);
auto res_stg3_update_0_sm155_91059 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_27_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_31_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_28);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_29);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_30);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_31);
auto res_stg3_update_0_sm155_81057 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_31_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_35_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_32);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_33);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_34);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_35);
auto res_stg3_update_0_sm155_71055 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_35_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_39_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_36);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_37);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_38);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_39);
auto res_stg3_update_0_sm155_61053 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_39_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_43_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_40);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_41);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_42);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_43);
auto res_stg3_update_0_sm155_51051 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_43_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_47_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_44);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_45);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_46);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_47);
auto res_stg3_update_0_sm155_41049 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_47_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_51_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_48);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_49);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_50);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_51);
auto res_stg3_update_0_sm155_31047 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_51_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_55_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_52);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_53);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_54);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_55);
auto res_stg3_update_0_sm155_21045 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_55_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_59_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_56);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_57);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_58);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_59);
auto res_stg3_update_0_sm155_11043 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_59_pack);

	  hw_uint<128 > stg2_FIFO_buf96_lane_63_pack;
  set_at<0, 128, 32>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_60);
  set_at<32, 128, 32>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_61);
  set_at<64, 128, 32>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_62);
  set_at<96, 128, 32>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_63);
auto res_stg3_update_0_sm155_01041 = stg3_generated_compute_unrolled_16(stg2_FIFO_buf96_lane_63_pack);
  hw_uint<512 > return_value1804;
  set_at<0, 512, 32>(return_value1804, res_stg3_update_0_sm155_151071);
  set_at<32, 512, 32>(return_value1804, res_stg3_update_0_sm155_141069);
  set_at<64, 512, 32>(return_value1804, res_stg3_update_0_sm155_131067);
  set_at<96, 512, 32>(return_value1804, res_stg3_update_0_sm155_121065);
  set_at<128, 512, 32>(return_value1804, res_stg3_update_0_sm155_111063);
  set_at<160, 512, 32>(return_value1804, res_stg3_update_0_sm155_101061);
  set_at<192, 512, 32>(return_value1804, res_stg3_update_0_sm155_91059);
  set_at<224, 512, 32>(return_value1804, res_stg3_update_0_sm155_81057);
  set_at<256, 512, 32>(return_value1804, res_stg3_update_0_sm155_71055);
  set_at<288, 512, 32>(return_value1804, res_stg3_update_0_sm155_61053);
  set_at<320, 512, 32>(return_value1804, res_stg3_update_0_sm155_51051);
  set_at<352, 512, 32>(return_value1804, res_stg3_update_0_sm155_41049);
  set_at<384, 512, 32>(return_value1804, res_stg3_update_0_sm155_31047);
  set_at<416, 512, 32>(return_value1804, res_stg3_update_0_sm155_21045);
  set_at<448, 512, 32>(return_value1804, res_stg3_update_0_sm155_11043);
  set_at<480, 512, 32>(return_value1804, res_stg3_update_0_sm155_01041);
  return return_value1804;

}

hw_uint<256> stg4_1_cu1806(hw_uint<32*64>& stg3_FIFO_buf100) {
  hw_uint<16> stg3_FIFO_buf100_lane_0 = stg3_FIFO_buf100.extract<0, 15>();
  hw_uint<16> stg3_FIFO_buf100_lane_1 = stg3_FIFO_buf100.extract<16, 31>();
  hw_uint<16> stg3_FIFO_buf100_lane_2 = stg3_FIFO_buf100.extract<32, 47>();
  hw_uint<16> stg3_FIFO_buf100_lane_3 = stg3_FIFO_buf100.extract<48, 63>();
  hw_uint<16> stg3_FIFO_buf100_lane_4 = stg3_FIFO_buf100.extract<64, 79>();
  hw_uint<16> stg3_FIFO_buf100_lane_5 = stg3_FIFO_buf100.extract<80, 95>();
  hw_uint<16> stg3_FIFO_buf100_lane_6 = stg3_FIFO_buf100.extract<96, 111>();
  hw_uint<16> stg3_FIFO_buf100_lane_7 = stg3_FIFO_buf100.extract<112, 127>();
  hw_uint<16> stg3_FIFO_buf100_lane_8 = stg3_FIFO_buf100.extract<128, 143>();
  hw_uint<16> stg3_FIFO_buf100_lane_9 = stg3_FIFO_buf100.extract<144, 159>();
  hw_uint<16> stg3_FIFO_buf100_lane_10 = stg3_FIFO_buf100.extract<160, 175>();
  hw_uint<16> stg3_FIFO_buf100_lane_11 = stg3_FIFO_buf100.extract<176, 191>();
  hw_uint<16> stg3_FIFO_buf100_lane_12 = stg3_FIFO_buf100.extract<192, 207>();
  hw_uint<16> stg3_FIFO_buf100_lane_13 = stg3_FIFO_buf100.extract<208, 223>();
  hw_uint<16> stg3_FIFO_buf100_lane_14 = stg3_FIFO_buf100.extract<224, 239>();
  hw_uint<16> stg3_FIFO_buf100_lane_15 = stg3_FIFO_buf100.extract<240, 255>();
  hw_uint<16> stg3_FIFO_buf100_lane_16 = stg3_FIFO_buf100.extract<256, 271>();
  hw_uint<16> stg3_FIFO_buf100_lane_17 = stg3_FIFO_buf100.extract<272, 287>();
  hw_uint<16> stg3_FIFO_buf100_lane_18 = stg3_FIFO_buf100.extract<288, 303>();
  hw_uint<16> stg3_FIFO_buf100_lane_19 = stg3_FIFO_buf100.extract<304, 319>();
  hw_uint<16> stg3_FIFO_buf100_lane_20 = stg3_FIFO_buf100.extract<320, 335>();
  hw_uint<16> stg3_FIFO_buf100_lane_21 = stg3_FIFO_buf100.extract<336, 351>();
  hw_uint<16> stg3_FIFO_buf100_lane_22 = stg3_FIFO_buf100.extract<352, 367>();
  hw_uint<16> stg3_FIFO_buf100_lane_23 = stg3_FIFO_buf100.extract<368, 383>();
  hw_uint<16> stg3_FIFO_buf100_lane_24 = stg3_FIFO_buf100.extract<384, 399>();
  hw_uint<16> stg3_FIFO_buf100_lane_25 = stg3_FIFO_buf100.extract<400, 415>();
  hw_uint<16> stg3_FIFO_buf100_lane_26 = stg3_FIFO_buf100.extract<416, 431>();
  hw_uint<16> stg3_FIFO_buf100_lane_27 = stg3_FIFO_buf100.extract<432, 447>();
  hw_uint<16> stg3_FIFO_buf100_lane_28 = stg3_FIFO_buf100.extract<448, 463>();
  hw_uint<16> stg3_FIFO_buf100_lane_29 = stg3_FIFO_buf100.extract<464, 479>();
  hw_uint<16> stg3_FIFO_buf100_lane_30 = stg3_FIFO_buf100.extract<480, 495>();
  hw_uint<16> stg3_FIFO_buf100_lane_31 = stg3_FIFO_buf100.extract<496, 511>();
  hw_uint<16> stg3_FIFO_buf100_lane_32 = stg3_FIFO_buf100.extract<512, 527>();
  hw_uint<16> stg3_FIFO_buf100_lane_33 = stg3_FIFO_buf100.extract<528, 543>();
  hw_uint<16> stg3_FIFO_buf100_lane_34 = stg3_FIFO_buf100.extract<544, 559>();
  hw_uint<16> stg3_FIFO_buf100_lane_35 = stg3_FIFO_buf100.extract<560, 575>();
  hw_uint<16> stg3_FIFO_buf100_lane_36 = stg3_FIFO_buf100.extract<576, 591>();
  hw_uint<16> stg3_FIFO_buf100_lane_37 = stg3_FIFO_buf100.extract<592, 607>();
  hw_uint<16> stg3_FIFO_buf100_lane_38 = stg3_FIFO_buf100.extract<608, 623>();
  hw_uint<16> stg3_FIFO_buf100_lane_39 = stg3_FIFO_buf100.extract<624, 639>();
  hw_uint<16> stg3_FIFO_buf100_lane_40 = stg3_FIFO_buf100.extract<640, 655>();
  hw_uint<16> stg3_FIFO_buf100_lane_41 = stg3_FIFO_buf100.extract<656, 671>();
  hw_uint<16> stg3_FIFO_buf100_lane_42 = stg3_FIFO_buf100.extract<672, 687>();
  hw_uint<16> stg3_FIFO_buf100_lane_43 = stg3_FIFO_buf100.extract<688, 703>();
  hw_uint<16> stg3_FIFO_buf100_lane_44 = stg3_FIFO_buf100.extract<704, 719>();
  hw_uint<16> stg3_FIFO_buf100_lane_45 = stg3_FIFO_buf100.extract<720, 735>();
  hw_uint<16> stg3_FIFO_buf100_lane_46 = stg3_FIFO_buf100.extract<736, 751>();
  hw_uint<16> stg3_FIFO_buf100_lane_47 = stg3_FIFO_buf100.extract<752, 767>();
  hw_uint<16> stg3_FIFO_buf100_lane_48 = stg3_FIFO_buf100.extract<768, 783>();
  hw_uint<16> stg3_FIFO_buf100_lane_49 = stg3_FIFO_buf100.extract<784, 799>();
  hw_uint<16> stg3_FIFO_buf100_lane_50 = stg3_FIFO_buf100.extract<800, 815>();
  hw_uint<16> stg3_FIFO_buf100_lane_51 = stg3_FIFO_buf100.extract<816, 831>();
  hw_uint<16> stg3_FIFO_buf100_lane_52 = stg3_FIFO_buf100.extract<832, 847>();
  hw_uint<16> stg3_FIFO_buf100_lane_53 = stg3_FIFO_buf100.extract<848, 863>();
  hw_uint<16> stg3_FIFO_buf100_lane_54 = stg3_FIFO_buf100.extract<864, 879>();
  hw_uint<16> stg3_FIFO_buf100_lane_55 = stg3_FIFO_buf100.extract<880, 895>();
  hw_uint<16> stg3_FIFO_buf100_lane_56 = stg3_FIFO_buf100.extract<896, 911>();
  hw_uint<16> stg3_FIFO_buf100_lane_57 = stg3_FIFO_buf100.extract<912, 927>();
  hw_uint<16> stg3_FIFO_buf100_lane_58 = stg3_FIFO_buf100.extract<928, 943>();
  hw_uint<16> stg3_FIFO_buf100_lane_59 = stg3_FIFO_buf100.extract<944, 959>();
  hw_uint<16> stg3_FIFO_buf100_lane_60 = stg3_FIFO_buf100.extract<960, 975>();
  hw_uint<16> stg3_FIFO_buf100_lane_61 = stg3_FIFO_buf100.extract<976, 991>();
  hw_uint<16> stg3_FIFO_buf100_lane_62 = stg3_FIFO_buf100.extract<992, 1007>();
  hw_uint<16> stg3_FIFO_buf100_lane_63 = stg3_FIFO_buf100.extract<1008, 1023>();

	
  hw_uint<128 > stg3_FIFO_buf100_lane_3_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_0);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_1);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_2);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_3);
auto res_stg4_update_0_sm156_151103 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_3_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_7_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_4);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_5);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_6);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_7);
auto res_stg4_update_0_sm156_141101 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_7_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_11_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_8);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_9);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_10);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_11);
auto res_stg4_update_0_sm156_131099 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_11_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_15_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_12);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_13);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_14);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_15);
auto res_stg4_update_0_sm156_121097 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_15_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_19_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_16);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_17);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_18);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_19);
auto res_stg4_update_0_sm156_111095 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_19_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_23_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_20);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_21);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_22);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_23);
auto res_stg4_update_0_sm156_101093 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_23_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_27_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_24);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_25);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_26);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_27);
auto res_stg4_update_0_sm156_91091 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_27_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_31_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_28);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_29);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_30);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_31);
auto res_stg4_update_0_sm156_81089 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_31_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_35_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_32);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_33);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_34);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_35);
auto res_stg4_update_0_sm156_71087 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_35_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_39_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_36);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_37);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_38);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_39);
auto res_stg4_update_0_sm156_61085 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_39_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_43_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_40);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_41);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_42);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_43);
auto res_stg4_update_0_sm156_51083 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_43_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_47_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_44);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_45);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_46);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_47);
auto res_stg4_update_0_sm156_41081 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_47_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_51_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_48);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_49);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_50);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_51);
auto res_stg4_update_0_sm156_31079 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_51_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_55_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_52);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_53);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_54);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_55);
auto res_stg4_update_0_sm156_21077 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_55_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_59_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_56);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_57);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_58);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_59);
auto res_stg4_update_0_sm156_11075 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_59_pack);

	  hw_uint<128 > stg3_FIFO_buf100_lane_63_pack;
  set_at<0, 128, 32>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_60);
  set_at<32, 128, 32>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_61);
  set_at<64, 128, 32>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_62);
  set_at<96, 128, 32>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_63);
auto res_stg4_update_0_sm156_01073 = stg4_generated_compute_unrolled_16(stg3_FIFO_buf100_lane_63_pack);
  hw_uint<512 > return_value1807;
  set_at<0, 512, 32>(return_value1807, res_stg4_update_0_sm156_151103);
  set_at<32, 512, 32>(return_value1807, res_stg4_update_0_sm156_141101);
  set_at<64, 512, 32>(return_value1807, res_stg4_update_0_sm156_131099);
  set_at<96, 512, 32>(return_value1807, res_stg4_update_0_sm156_121097);
  set_at<128, 512, 32>(return_value1807, res_stg4_update_0_sm156_111095);
  set_at<160, 512, 32>(return_value1807, res_stg4_update_0_sm156_101093);
  set_at<192, 512, 32>(return_value1807, res_stg4_update_0_sm156_91091);
  set_at<224, 512, 32>(return_value1807, res_stg4_update_0_sm156_81089);
  set_at<256, 512, 32>(return_value1807, res_stg4_update_0_sm156_71087);
  set_at<288, 512, 32>(return_value1807, res_stg4_update_0_sm156_61085);
  set_at<320, 512, 32>(return_value1807, res_stg4_update_0_sm156_51083);
  set_at<352, 512, 32>(return_value1807, res_stg4_update_0_sm156_41081);
  set_at<384, 512, 32>(return_value1807, res_stg4_update_0_sm156_31079);
  set_at<416, 512, 32>(return_value1807, res_stg4_update_0_sm156_21077);
  set_at<448, 512, 32>(return_value1807, res_stg4_update_0_sm156_11075);
  set_at<480, 512, 32>(return_value1807, res_stg4_update_0_sm156_01073);
  return return_value1807;

}

hw_uint<256> stg5_1_cu1809(hw_uint<32*64>& stg4_FIFO_buf104) {
  hw_uint<16> stg4_FIFO_buf104_lane_0 = stg4_FIFO_buf104.extract<0, 15>();
  hw_uint<16> stg4_FIFO_buf104_lane_1 = stg4_FIFO_buf104.extract<16, 31>();
  hw_uint<16> stg4_FIFO_buf104_lane_2 = stg4_FIFO_buf104.extract<32, 47>();
  hw_uint<16> stg4_FIFO_buf104_lane_3 = stg4_FIFO_buf104.extract<48, 63>();
  hw_uint<16> stg4_FIFO_buf104_lane_4 = stg4_FIFO_buf104.extract<64, 79>();
  hw_uint<16> stg4_FIFO_buf104_lane_5 = stg4_FIFO_buf104.extract<80, 95>();
  hw_uint<16> stg4_FIFO_buf104_lane_6 = stg4_FIFO_buf104.extract<96, 111>();
  hw_uint<16> stg4_FIFO_buf104_lane_7 = stg4_FIFO_buf104.extract<112, 127>();
  hw_uint<16> stg4_FIFO_buf104_lane_8 = stg4_FIFO_buf104.extract<128, 143>();
  hw_uint<16> stg4_FIFO_buf104_lane_9 = stg4_FIFO_buf104.extract<144, 159>();
  hw_uint<16> stg4_FIFO_buf104_lane_10 = stg4_FIFO_buf104.extract<160, 175>();
  hw_uint<16> stg4_FIFO_buf104_lane_11 = stg4_FIFO_buf104.extract<176, 191>();
  hw_uint<16> stg4_FIFO_buf104_lane_12 = stg4_FIFO_buf104.extract<192, 207>();
  hw_uint<16> stg4_FIFO_buf104_lane_13 = stg4_FIFO_buf104.extract<208, 223>();
  hw_uint<16> stg4_FIFO_buf104_lane_14 = stg4_FIFO_buf104.extract<224, 239>();
  hw_uint<16> stg4_FIFO_buf104_lane_15 = stg4_FIFO_buf104.extract<240, 255>();
  hw_uint<16> stg4_FIFO_buf104_lane_16 = stg4_FIFO_buf104.extract<256, 271>();
  hw_uint<16> stg4_FIFO_buf104_lane_17 = stg4_FIFO_buf104.extract<272, 287>();
  hw_uint<16> stg4_FIFO_buf104_lane_18 = stg4_FIFO_buf104.extract<288, 303>();
  hw_uint<16> stg4_FIFO_buf104_lane_19 = stg4_FIFO_buf104.extract<304, 319>();
  hw_uint<16> stg4_FIFO_buf104_lane_20 = stg4_FIFO_buf104.extract<320, 335>();
  hw_uint<16> stg4_FIFO_buf104_lane_21 = stg4_FIFO_buf104.extract<336, 351>();
  hw_uint<16> stg4_FIFO_buf104_lane_22 = stg4_FIFO_buf104.extract<352, 367>();
  hw_uint<16> stg4_FIFO_buf104_lane_23 = stg4_FIFO_buf104.extract<368, 383>();
  hw_uint<16> stg4_FIFO_buf104_lane_24 = stg4_FIFO_buf104.extract<384, 399>();
  hw_uint<16> stg4_FIFO_buf104_lane_25 = stg4_FIFO_buf104.extract<400, 415>();
  hw_uint<16> stg4_FIFO_buf104_lane_26 = stg4_FIFO_buf104.extract<416, 431>();
  hw_uint<16> stg4_FIFO_buf104_lane_27 = stg4_FIFO_buf104.extract<432, 447>();
  hw_uint<16> stg4_FIFO_buf104_lane_28 = stg4_FIFO_buf104.extract<448, 463>();
  hw_uint<16> stg4_FIFO_buf104_lane_29 = stg4_FIFO_buf104.extract<464, 479>();
  hw_uint<16> stg4_FIFO_buf104_lane_30 = stg4_FIFO_buf104.extract<480, 495>();
  hw_uint<16> stg4_FIFO_buf104_lane_31 = stg4_FIFO_buf104.extract<496, 511>();
  hw_uint<16> stg4_FIFO_buf104_lane_32 = stg4_FIFO_buf104.extract<512, 527>();
  hw_uint<16> stg4_FIFO_buf104_lane_33 = stg4_FIFO_buf104.extract<528, 543>();
  hw_uint<16> stg4_FIFO_buf104_lane_34 = stg4_FIFO_buf104.extract<544, 559>();
  hw_uint<16> stg4_FIFO_buf104_lane_35 = stg4_FIFO_buf104.extract<560, 575>();
  hw_uint<16> stg4_FIFO_buf104_lane_36 = stg4_FIFO_buf104.extract<576, 591>();
  hw_uint<16> stg4_FIFO_buf104_lane_37 = stg4_FIFO_buf104.extract<592, 607>();
  hw_uint<16> stg4_FIFO_buf104_lane_38 = stg4_FIFO_buf104.extract<608, 623>();
  hw_uint<16> stg4_FIFO_buf104_lane_39 = stg4_FIFO_buf104.extract<624, 639>();
  hw_uint<16> stg4_FIFO_buf104_lane_40 = stg4_FIFO_buf104.extract<640, 655>();
  hw_uint<16> stg4_FIFO_buf104_lane_41 = stg4_FIFO_buf104.extract<656, 671>();
  hw_uint<16> stg4_FIFO_buf104_lane_42 = stg4_FIFO_buf104.extract<672, 687>();
  hw_uint<16> stg4_FIFO_buf104_lane_43 = stg4_FIFO_buf104.extract<688, 703>();
  hw_uint<16> stg4_FIFO_buf104_lane_44 = stg4_FIFO_buf104.extract<704, 719>();
  hw_uint<16> stg4_FIFO_buf104_lane_45 = stg4_FIFO_buf104.extract<720, 735>();
  hw_uint<16> stg4_FIFO_buf104_lane_46 = stg4_FIFO_buf104.extract<736, 751>();
  hw_uint<16> stg4_FIFO_buf104_lane_47 = stg4_FIFO_buf104.extract<752, 767>();
  hw_uint<16> stg4_FIFO_buf104_lane_48 = stg4_FIFO_buf104.extract<768, 783>();
  hw_uint<16> stg4_FIFO_buf104_lane_49 = stg4_FIFO_buf104.extract<784, 799>();
  hw_uint<16> stg4_FIFO_buf104_lane_50 = stg4_FIFO_buf104.extract<800, 815>();
  hw_uint<16> stg4_FIFO_buf104_lane_51 = stg4_FIFO_buf104.extract<816, 831>();
  hw_uint<16> stg4_FIFO_buf104_lane_52 = stg4_FIFO_buf104.extract<832, 847>();
  hw_uint<16> stg4_FIFO_buf104_lane_53 = stg4_FIFO_buf104.extract<848, 863>();
  hw_uint<16> stg4_FIFO_buf104_lane_54 = stg4_FIFO_buf104.extract<864, 879>();
  hw_uint<16> stg4_FIFO_buf104_lane_55 = stg4_FIFO_buf104.extract<880, 895>();
  hw_uint<16> stg4_FIFO_buf104_lane_56 = stg4_FIFO_buf104.extract<896, 911>();
  hw_uint<16> stg4_FIFO_buf104_lane_57 = stg4_FIFO_buf104.extract<912, 927>();
  hw_uint<16> stg4_FIFO_buf104_lane_58 = stg4_FIFO_buf104.extract<928, 943>();
  hw_uint<16> stg4_FIFO_buf104_lane_59 = stg4_FIFO_buf104.extract<944, 959>();
  hw_uint<16> stg4_FIFO_buf104_lane_60 = stg4_FIFO_buf104.extract<960, 975>();
  hw_uint<16> stg4_FIFO_buf104_lane_61 = stg4_FIFO_buf104.extract<976, 991>();
  hw_uint<16> stg4_FIFO_buf104_lane_62 = stg4_FIFO_buf104.extract<992, 1007>();
  hw_uint<16> stg4_FIFO_buf104_lane_63 = stg4_FIFO_buf104.extract<1008, 1023>();

	
  hw_uint<128 > stg4_FIFO_buf104_lane_3_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_0);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_1);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_2);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_3);
auto res_stg5_update_0_sm157_151135 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_3_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_7_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_4);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_5);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_6);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_7);
auto res_stg5_update_0_sm157_141133 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_7_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_11_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_8);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_9);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_10);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_11);
auto res_stg5_update_0_sm157_131131 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_11_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_15_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_12);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_13);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_14);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_15);
auto res_stg5_update_0_sm157_121129 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_15_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_19_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_16);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_17);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_18);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_19);
auto res_stg5_update_0_sm157_111127 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_19_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_23_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_20);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_21);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_22);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_23);
auto res_stg5_update_0_sm157_101125 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_23_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_27_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_24);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_25);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_26);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_27);
auto res_stg5_update_0_sm157_91123 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_27_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_31_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_28);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_29);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_30);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_31);
auto res_stg5_update_0_sm157_81121 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_31_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_35_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_32);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_33);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_34);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_35);
auto res_stg5_update_0_sm157_71119 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_35_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_39_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_36);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_37);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_38);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_39);
auto res_stg5_update_0_sm157_61117 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_39_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_43_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_40);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_41);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_42);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_43);
auto res_stg5_update_0_sm157_51115 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_43_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_47_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_44);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_45);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_46);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_47);
auto res_stg5_update_0_sm157_41113 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_47_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_51_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_48);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_49);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_50);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_51);
auto res_stg5_update_0_sm157_31111 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_51_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_55_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_52);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_53);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_54);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_55);
auto res_stg5_update_0_sm157_21109 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_55_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_59_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_56);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_57);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_58);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_59);
auto res_stg5_update_0_sm157_11107 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_59_pack);

	  hw_uint<128 > stg4_FIFO_buf104_lane_63_pack;
  set_at<0, 128, 32>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_60);
  set_at<32, 128, 32>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_61);
  set_at<64, 128, 32>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_62);
  set_at<96, 128, 32>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_63);
auto res_stg5_update_0_sm157_01105 = stg5_generated_compute_unrolled_16(stg4_FIFO_buf104_lane_63_pack);
  hw_uint<512 > return_value1810;
  set_at<0, 512, 32>(return_value1810, res_stg5_update_0_sm157_151135);
  set_at<32, 512, 32>(return_value1810, res_stg5_update_0_sm157_141133);
  set_at<64, 512, 32>(return_value1810, res_stg5_update_0_sm157_131131);
  set_at<96, 512, 32>(return_value1810, res_stg5_update_0_sm157_121129);
  set_at<128, 512, 32>(return_value1810, res_stg5_update_0_sm157_111127);
  set_at<160, 512, 32>(return_value1810, res_stg5_update_0_sm157_101125);
  set_at<192, 512, 32>(return_value1810, res_stg5_update_0_sm157_91123);
  set_at<224, 512, 32>(return_value1810, res_stg5_update_0_sm157_81121);
  set_at<256, 512, 32>(return_value1810, res_stg5_update_0_sm157_71119);
  set_at<288, 512, 32>(return_value1810, res_stg5_update_0_sm157_61117);
  set_at<320, 512, 32>(return_value1810, res_stg5_update_0_sm157_51115);
  set_at<352, 512, 32>(return_value1810, res_stg5_update_0_sm157_41113);
  set_at<384, 512, 32>(return_value1810, res_stg5_update_0_sm157_31111);
  set_at<416, 512, 32>(return_value1810, res_stg5_update_0_sm157_21109);
  set_at<448, 512, 32>(return_value1810, res_stg5_update_0_sm157_11107);
  set_at<480, 512, 32>(return_value1810, res_stg5_update_0_sm157_01105);
  return return_value1810;

}

hw_uint<256> stg6_1_cu1812(hw_uint<32*64>& stg5_FIFO_buf108) {
  hw_uint<16> stg5_FIFO_buf108_lane_0 = stg5_FIFO_buf108.extract<0, 15>();
  hw_uint<16> stg5_FIFO_buf108_lane_1 = stg5_FIFO_buf108.extract<16, 31>();
  hw_uint<16> stg5_FIFO_buf108_lane_2 = stg5_FIFO_buf108.extract<32, 47>();
  hw_uint<16> stg5_FIFO_buf108_lane_3 = stg5_FIFO_buf108.extract<48, 63>();
  hw_uint<16> stg5_FIFO_buf108_lane_4 = stg5_FIFO_buf108.extract<64, 79>();
  hw_uint<16> stg5_FIFO_buf108_lane_5 = stg5_FIFO_buf108.extract<80, 95>();
  hw_uint<16> stg5_FIFO_buf108_lane_6 = stg5_FIFO_buf108.extract<96, 111>();
  hw_uint<16> stg5_FIFO_buf108_lane_7 = stg5_FIFO_buf108.extract<112, 127>();
  hw_uint<16> stg5_FIFO_buf108_lane_8 = stg5_FIFO_buf108.extract<128, 143>();
  hw_uint<16> stg5_FIFO_buf108_lane_9 = stg5_FIFO_buf108.extract<144, 159>();
  hw_uint<16> stg5_FIFO_buf108_lane_10 = stg5_FIFO_buf108.extract<160, 175>();
  hw_uint<16> stg5_FIFO_buf108_lane_11 = stg5_FIFO_buf108.extract<176, 191>();
  hw_uint<16> stg5_FIFO_buf108_lane_12 = stg5_FIFO_buf108.extract<192, 207>();
  hw_uint<16> stg5_FIFO_buf108_lane_13 = stg5_FIFO_buf108.extract<208, 223>();
  hw_uint<16> stg5_FIFO_buf108_lane_14 = stg5_FIFO_buf108.extract<224, 239>();
  hw_uint<16> stg5_FIFO_buf108_lane_15 = stg5_FIFO_buf108.extract<240, 255>();
  hw_uint<16> stg5_FIFO_buf108_lane_16 = stg5_FIFO_buf108.extract<256, 271>();
  hw_uint<16> stg5_FIFO_buf108_lane_17 = stg5_FIFO_buf108.extract<272, 287>();
  hw_uint<16> stg5_FIFO_buf108_lane_18 = stg5_FIFO_buf108.extract<288, 303>();
  hw_uint<16> stg5_FIFO_buf108_lane_19 = stg5_FIFO_buf108.extract<304, 319>();
  hw_uint<16> stg5_FIFO_buf108_lane_20 = stg5_FIFO_buf108.extract<320, 335>();
  hw_uint<16> stg5_FIFO_buf108_lane_21 = stg5_FIFO_buf108.extract<336, 351>();
  hw_uint<16> stg5_FIFO_buf108_lane_22 = stg5_FIFO_buf108.extract<352, 367>();
  hw_uint<16> stg5_FIFO_buf108_lane_23 = stg5_FIFO_buf108.extract<368, 383>();
  hw_uint<16> stg5_FIFO_buf108_lane_24 = stg5_FIFO_buf108.extract<384, 399>();
  hw_uint<16> stg5_FIFO_buf108_lane_25 = stg5_FIFO_buf108.extract<400, 415>();
  hw_uint<16> stg5_FIFO_buf108_lane_26 = stg5_FIFO_buf108.extract<416, 431>();
  hw_uint<16> stg5_FIFO_buf108_lane_27 = stg5_FIFO_buf108.extract<432, 447>();
  hw_uint<16> stg5_FIFO_buf108_lane_28 = stg5_FIFO_buf108.extract<448, 463>();
  hw_uint<16> stg5_FIFO_buf108_lane_29 = stg5_FIFO_buf108.extract<464, 479>();
  hw_uint<16> stg5_FIFO_buf108_lane_30 = stg5_FIFO_buf108.extract<480, 495>();
  hw_uint<16> stg5_FIFO_buf108_lane_31 = stg5_FIFO_buf108.extract<496, 511>();
  hw_uint<16> stg5_FIFO_buf108_lane_32 = stg5_FIFO_buf108.extract<512, 527>();
  hw_uint<16> stg5_FIFO_buf108_lane_33 = stg5_FIFO_buf108.extract<528, 543>();
  hw_uint<16> stg5_FIFO_buf108_lane_34 = stg5_FIFO_buf108.extract<544, 559>();
  hw_uint<16> stg5_FIFO_buf108_lane_35 = stg5_FIFO_buf108.extract<560, 575>();
  hw_uint<16> stg5_FIFO_buf108_lane_36 = stg5_FIFO_buf108.extract<576, 591>();
  hw_uint<16> stg5_FIFO_buf108_lane_37 = stg5_FIFO_buf108.extract<592, 607>();
  hw_uint<16> stg5_FIFO_buf108_lane_38 = stg5_FIFO_buf108.extract<608, 623>();
  hw_uint<16> stg5_FIFO_buf108_lane_39 = stg5_FIFO_buf108.extract<624, 639>();
  hw_uint<16> stg5_FIFO_buf108_lane_40 = stg5_FIFO_buf108.extract<640, 655>();
  hw_uint<16> stg5_FIFO_buf108_lane_41 = stg5_FIFO_buf108.extract<656, 671>();
  hw_uint<16> stg5_FIFO_buf108_lane_42 = stg5_FIFO_buf108.extract<672, 687>();
  hw_uint<16> stg5_FIFO_buf108_lane_43 = stg5_FIFO_buf108.extract<688, 703>();
  hw_uint<16> stg5_FIFO_buf108_lane_44 = stg5_FIFO_buf108.extract<704, 719>();
  hw_uint<16> stg5_FIFO_buf108_lane_45 = stg5_FIFO_buf108.extract<720, 735>();
  hw_uint<16> stg5_FIFO_buf108_lane_46 = stg5_FIFO_buf108.extract<736, 751>();
  hw_uint<16> stg5_FIFO_buf108_lane_47 = stg5_FIFO_buf108.extract<752, 767>();
  hw_uint<16> stg5_FIFO_buf108_lane_48 = stg5_FIFO_buf108.extract<768, 783>();
  hw_uint<16> stg5_FIFO_buf108_lane_49 = stg5_FIFO_buf108.extract<784, 799>();
  hw_uint<16> stg5_FIFO_buf108_lane_50 = stg5_FIFO_buf108.extract<800, 815>();
  hw_uint<16> stg5_FIFO_buf108_lane_51 = stg5_FIFO_buf108.extract<816, 831>();
  hw_uint<16> stg5_FIFO_buf108_lane_52 = stg5_FIFO_buf108.extract<832, 847>();
  hw_uint<16> stg5_FIFO_buf108_lane_53 = stg5_FIFO_buf108.extract<848, 863>();
  hw_uint<16> stg5_FIFO_buf108_lane_54 = stg5_FIFO_buf108.extract<864, 879>();
  hw_uint<16> stg5_FIFO_buf108_lane_55 = stg5_FIFO_buf108.extract<880, 895>();
  hw_uint<16> stg5_FIFO_buf108_lane_56 = stg5_FIFO_buf108.extract<896, 911>();
  hw_uint<16> stg5_FIFO_buf108_lane_57 = stg5_FIFO_buf108.extract<912, 927>();
  hw_uint<16> stg5_FIFO_buf108_lane_58 = stg5_FIFO_buf108.extract<928, 943>();
  hw_uint<16> stg5_FIFO_buf108_lane_59 = stg5_FIFO_buf108.extract<944, 959>();
  hw_uint<16> stg5_FIFO_buf108_lane_60 = stg5_FIFO_buf108.extract<960, 975>();
  hw_uint<16> stg5_FIFO_buf108_lane_61 = stg5_FIFO_buf108.extract<976, 991>();
  hw_uint<16> stg5_FIFO_buf108_lane_62 = stg5_FIFO_buf108.extract<992, 1007>();
  hw_uint<16> stg5_FIFO_buf108_lane_63 = stg5_FIFO_buf108.extract<1008, 1023>();

	
  hw_uint<128 > stg5_FIFO_buf108_lane_3_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_0);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_1);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_2);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_3);
auto res_stg6_update_0_sm158_151167 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_3_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_7_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_4);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_5);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_6);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_7);
auto res_stg6_update_0_sm158_141165 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_7_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_11_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_8);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_9);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_10);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_11);
auto res_stg6_update_0_sm158_131163 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_11_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_15_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_12);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_13);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_14);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_15);
auto res_stg6_update_0_sm158_121161 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_15_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_19_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_16);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_17);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_18);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_19);
auto res_stg6_update_0_sm158_111159 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_19_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_23_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_20);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_21);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_22);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_23);
auto res_stg6_update_0_sm158_101157 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_23_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_27_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_24);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_25);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_26);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_27);
auto res_stg6_update_0_sm158_91155 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_27_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_31_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_28);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_29);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_30);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_31);
auto res_stg6_update_0_sm158_81153 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_31_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_35_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_32);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_33);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_34);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_35);
auto res_stg6_update_0_sm158_71151 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_35_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_39_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_36);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_37);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_38);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_39);
auto res_stg6_update_0_sm158_61149 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_39_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_43_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_40);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_41);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_42);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_43);
auto res_stg6_update_0_sm158_51147 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_43_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_47_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_44);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_45);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_46);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_47);
auto res_stg6_update_0_sm158_41145 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_47_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_51_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_48);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_49);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_50);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_51);
auto res_stg6_update_0_sm158_31143 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_51_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_55_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_52);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_53);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_54);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_55);
auto res_stg6_update_0_sm158_21141 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_55_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_59_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_56);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_57);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_58);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_59);
auto res_stg6_update_0_sm158_11139 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_59_pack);

	  hw_uint<128 > stg5_FIFO_buf108_lane_63_pack;
  set_at<0, 128, 32>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_60);
  set_at<32, 128, 32>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_61);
  set_at<64, 128, 32>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_62);
  set_at<96, 128, 32>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_63);
auto res_stg6_update_0_sm158_01137 = stg6_generated_compute_unrolled_16(stg5_FIFO_buf108_lane_63_pack);
  hw_uint<512 > return_value1813;
  set_at<0, 512, 32>(return_value1813, res_stg6_update_0_sm158_151167);
  set_at<32, 512, 32>(return_value1813, res_stg6_update_0_sm158_141165);
  set_at<64, 512, 32>(return_value1813, res_stg6_update_0_sm158_131163);
  set_at<96, 512, 32>(return_value1813, res_stg6_update_0_sm158_121161);
  set_at<128, 512, 32>(return_value1813, res_stg6_update_0_sm158_111159);
  set_at<160, 512, 32>(return_value1813, res_stg6_update_0_sm158_101157);
  set_at<192, 512, 32>(return_value1813, res_stg6_update_0_sm158_91155);
  set_at<224, 512, 32>(return_value1813, res_stg6_update_0_sm158_81153);
  set_at<256, 512, 32>(return_value1813, res_stg6_update_0_sm158_71151);
  set_at<288, 512, 32>(return_value1813, res_stg6_update_0_sm158_61149);
  set_at<320, 512, 32>(return_value1813, res_stg6_update_0_sm158_51147);
  set_at<352, 512, 32>(return_value1813, res_stg6_update_0_sm158_41145);
  set_at<384, 512, 32>(return_value1813, res_stg6_update_0_sm158_31143);
  set_at<416, 512, 32>(return_value1813, res_stg6_update_0_sm158_21141);
  set_at<448, 512, 32>(return_value1813, res_stg6_update_0_sm158_11139);
  set_at<480, 512, 32>(return_value1813, res_stg6_update_0_sm158_01137);
  return return_value1813;

}

hw_uint<256> stg7_1_cu1815(hw_uint<32*64>& stg6_FIFO_buf112) {
  hw_uint<16> stg6_FIFO_buf112_lane_0 = stg6_FIFO_buf112.extract<0, 15>();
  hw_uint<16> stg6_FIFO_buf112_lane_1 = stg6_FIFO_buf112.extract<16, 31>();
  hw_uint<16> stg6_FIFO_buf112_lane_2 = stg6_FIFO_buf112.extract<32, 47>();
  hw_uint<16> stg6_FIFO_buf112_lane_3 = stg6_FIFO_buf112.extract<48, 63>();
  hw_uint<16> stg6_FIFO_buf112_lane_4 = stg6_FIFO_buf112.extract<64, 79>();
  hw_uint<16> stg6_FIFO_buf112_lane_5 = stg6_FIFO_buf112.extract<80, 95>();
  hw_uint<16> stg6_FIFO_buf112_lane_6 = stg6_FIFO_buf112.extract<96, 111>();
  hw_uint<16> stg6_FIFO_buf112_lane_7 = stg6_FIFO_buf112.extract<112, 127>();
  hw_uint<16> stg6_FIFO_buf112_lane_8 = stg6_FIFO_buf112.extract<128, 143>();
  hw_uint<16> stg6_FIFO_buf112_lane_9 = stg6_FIFO_buf112.extract<144, 159>();
  hw_uint<16> stg6_FIFO_buf112_lane_10 = stg6_FIFO_buf112.extract<160, 175>();
  hw_uint<16> stg6_FIFO_buf112_lane_11 = stg6_FIFO_buf112.extract<176, 191>();
  hw_uint<16> stg6_FIFO_buf112_lane_12 = stg6_FIFO_buf112.extract<192, 207>();
  hw_uint<16> stg6_FIFO_buf112_lane_13 = stg6_FIFO_buf112.extract<208, 223>();
  hw_uint<16> stg6_FIFO_buf112_lane_14 = stg6_FIFO_buf112.extract<224, 239>();
  hw_uint<16> stg6_FIFO_buf112_lane_15 = stg6_FIFO_buf112.extract<240, 255>();
  hw_uint<16> stg6_FIFO_buf112_lane_16 = stg6_FIFO_buf112.extract<256, 271>();
  hw_uint<16> stg6_FIFO_buf112_lane_17 = stg6_FIFO_buf112.extract<272, 287>();
  hw_uint<16> stg6_FIFO_buf112_lane_18 = stg6_FIFO_buf112.extract<288, 303>();
  hw_uint<16> stg6_FIFO_buf112_lane_19 = stg6_FIFO_buf112.extract<304, 319>();
  hw_uint<16> stg6_FIFO_buf112_lane_20 = stg6_FIFO_buf112.extract<320, 335>();
  hw_uint<16> stg6_FIFO_buf112_lane_21 = stg6_FIFO_buf112.extract<336, 351>();
  hw_uint<16> stg6_FIFO_buf112_lane_22 = stg6_FIFO_buf112.extract<352, 367>();
  hw_uint<16> stg6_FIFO_buf112_lane_23 = stg6_FIFO_buf112.extract<368, 383>();
  hw_uint<16> stg6_FIFO_buf112_lane_24 = stg6_FIFO_buf112.extract<384, 399>();
  hw_uint<16> stg6_FIFO_buf112_lane_25 = stg6_FIFO_buf112.extract<400, 415>();
  hw_uint<16> stg6_FIFO_buf112_lane_26 = stg6_FIFO_buf112.extract<416, 431>();
  hw_uint<16> stg6_FIFO_buf112_lane_27 = stg6_FIFO_buf112.extract<432, 447>();
  hw_uint<16> stg6_FIFO_buf112_lane_28 = stg6_FIFO_buf112.extract<448, 463>();
  hw_uint<16> stg6_FIFO_buf112_lane_29 = stg6_FIFO_buf112.extract<464, 479>();
  hw_uint<16> stg6_FIFO_buf112_lane_30 = stg6_FIFO_buf112.extract<480, 495>();
  hw_uint<16> stg6_FIFO_buf112_lane_31 = stg6_FIFO_buf112.extract<496, 511>();
  hw_uint<16> stg6_FIFO_buf112_lane_32 = stg6_FIFO_buf112.extract<512, 527>();
  hw_uint<16> stg6_FIFO_buf112_lane_33 = stg6_FIFO_buf112.extract<528, 543>();
  hw_uint<16> stg6_FIFO_buf112_lane_34 = stg6_FIFO_buf112.extract<544, 559>();
  hw_uint<16> stg6_FIFO_buf112_lane_35 = stg6_FIFO_buf112.extract<560, 575>();
  hw_uint<16> stg6_FIFO_buf112_lane_36 = stg6_FIFO_buf112.extract<576, 591>();
  hw_uint<16> stg6_FIFO_buf112_lane_37 = stg6_FIFO_buf112.extract<592, 607>();
  hw_uint<16> stg6_FIFO_buf112_lane_38 = stg6_FIFO_buf112.extract<608, 623>();
  hw_uint<16> stg6_FIFO_buf112_lane_39 = stg6_FIFO_buf112.extract<624, 639>();
  hw_uint<16> stg6_FIFO_buf112_lane_40 = stg6_FIFO_buf112.extract<640, 655>();
  hw_uint<16> stg6_FIFO_buf112_lane_41 = stg6_FIFO_buf112.extract<656, 671>();
  hw_uint<16> stg6_FIFO_buf112_lane_42 = stg6_FIFO_buf112.extract<672, 687>();
  hw_uint<16> stg6_FIFO_buf112_lane_43 = stg6_FIFO_buf112.extract<688, 703>();
  hw_uint<16> stg6_FIFO_buf112_lane_44 = stg6_FIFO_buf112.extract<704, 719>();
  hw_uint<16> stg6_FIFO_buf112_lane_45 = stg6_FIFO_buf112.extract<720, 735>();
  hw_uint<16> stg6_FIFO_buf112_lane_46 = stg6_FIFO_buf112.extract<736, 751>();
  hw_uint<16> stg6_FIFO_buf112_lane_47 = stg6_FIFO_buf112.extract<752, 767>();
  hw_uint<16> stg6_FIFO_buf112_lane_48 = stg6_FIFO_buf112.extract<768, 783>();
  hw_uint<16> stg6_FIFO_buf112_lane_49 = stg6_FIFO_buf112.extract<784, 799>();
  hw_uint<16> stg6_FIFO_buf112_lane_50 = stg6_FIFO_buf112.extract<800, 815>();
  hw_uint<16> stg6_FIFO_buf112_lane_51 = stg6_FIFO_buf112.extract<816, 831>();
  hw_uint<16> stg6_FIFO_buf112_lane_52 = stg6_FIFO_buf112.extract<832, 847>();
  hw_uint<16> stg6_FIFO_buf112_lane_53 = stg6_FIFO_buf112.extract<848, 863>();
  hw_uint<16> stg6_FIFO_buf112_lane_54 = stg6_FIFO_buf112.extract<864, 879>();
  hw_uint<16> stg6_FIFO_buf112_lane_55 = stg6_FIFO_buf112.extract<880, 895>();
  hw_uint<16> stg6_FIFO_buf112_lane_56 = stg6_FIFO_buf112.extract<896, 911>();
  hw_uint<16> stg6_FIFO_buf112_lane_57 = stg6_FIFO_buf112.extract<912, 927>();
  hw_uint<16> stg6_FIFO_buf112_lane_58 = stg6_FIFO_buf112.extract<928, 943>();
  hw_uint<16> stg6_FIFO_buf112_lane_59 = stg6_FIFO_buf112.extract<944, 959>();
  hw_uint<16> stg6_FIFO_buf112_lane_60 = stg6_FIFO_buf112.extract<960, 975>();
  hw_uint<16> stg6_FIFO_buf112_lane_61 = stg6_FIFO_buf112.extract<976, 991>();
  hw_uint<16> stg6_FIFO_buf112_lane_62 = stg6_FIFO_buf112.extract<992, 1007>();
  hw_uint<16> stg6_FIFO_buf112_lane_63 = stg6_FIFO_buf112.extract<1008, 1023>();

	
  hw_uint<128 > stg6_FIFO_buf112_lane_3_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_0);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_1);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_2);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_3);
auto res_stg7_update_0_sm159_151199 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_3_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_7_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_4);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_5);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_6);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_7);
auto res_stg7_update_0_sm159_141197 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_7_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_11_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_8);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_9);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_10);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_11);
auto res_stg7_update_0_sm159_131195 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_11_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_15_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_12);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_13);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_14);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_15);
auto res_stg7_update_0_sm159_121193 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_15_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_19_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_16);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_17);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_18);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_19);
auto res_stg7_update_0_sm159_111191 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_19_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_23_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_20);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_21);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_22);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_23);
auto res_stg7_update_0_sm159_101189 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_23_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_27_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_24);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_25);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_26);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_27);
auto res_stg7_update_0_sm159_91187 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_27_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_31_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_28);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_29);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_30);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_31);
auto res_stg7_update_0_sm159_81185 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_31_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_35_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_32);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_33);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_34);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_35);
auto res_stg7_update_0_sm159_71183 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_35_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_39_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_36);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_37);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_38);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_39);
auto res_stg7_update_0_sm159_61181 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_39_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_43_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_40);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_41);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_42);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_43);
auto res_stg7_update_0_sm159_51179 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_43_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_47_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_44);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_45);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_46);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_47);
auto res_stg7_update_0_sm159_41177 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_47_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_51_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_48);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_49);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_50);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_51);
auto res_stg7_update_0_sm159_31175 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_51_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_55_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_52);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_53);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_54);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_55);
auto res_stg7_update_0_sm159_21173 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_55_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_59_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_56);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_57);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_58);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_59);
auto res_stg7_update_0_sm159_11171 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_59_pack);

	  hw_uint<128 > stg6_FIFO_buf112_lane_63_pack;
  set_at<0, 128, 32>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_60);
  set_at<32, 128, 32>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_61);
  set_at<64, 128, 32>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_62);
  set_at<96, 128, 32>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_63);
auto res_stg7_update_0_sm159_01169 = stg7_generated_compute_unrolled_16(stg6_FIFO_buf112_lane_63_pack);
  hw_uint<512 > return_value1816;
  set_at<0, 512, 32>(return_value1816, res_stg7_update_0_sm159_151199);
  set_at<32, 512, 32>(return_value1816, res_stg7_update_0_sm159_141197);
  set_at<64, 512, 32>(return_value1816, res_stg7_update_0_sm159_131195);
  set_at<96, 512, 32>(return_value1816, res_stg7_update_0_sm159_121193);
  set_at<128, 512, 32>(return_value1816, res_stg7_update_0_sm159_111191);
  set_at<160, 512, 32>(return_value1816, res_stg7_update_0_sm159_101189);
  set_at<192, 512, 32>(return_value1816, res_stg7_update_0_sm159_91187);
  set_at<224, 512, 32>(return_value1816, res_stg7_update_0_sm159_81185);
  set_at<256, 512, 32>(return_value1816, res_stg7_update_0_sm159_71183);
  set_at<288, 512, 32>(return_value1816, res_stg7_update_0_sm159_61181);
  set_at<320, 512, 32>(return_value1816, res_stg7_update_0_sm159_51179);
  set_at<352, 512, 32>(return_value1816, res_stg7_update_0_sm159_41177);
  set_at<384, 512, 32>(return_value1816, res_stg7_update_0_sm159_31175);
  set_at<416, 512, 32>(return_value1816, res_stg7_update_0_sm159_21173);
  set_at<448, 512, 32>(return_value1816, res_stg7_update_0_sm159_11171);
  set_at<480, 512, 32>(return_value1816, res_stg7_update_0_sm159_01169);
  return return_value1816;

}

hw_uint<256> stg8_1_cu1818(hw_uint<32*64>& stg7_FIFO_buf116) {
  hw_uint<16> stg7_FIFO_buf116_lane_0 = stg7_FIFO_buf116.extract<0, 15>();
  hw_uint<16> stg7_FIFO_buf116_lane_1 = stg7_FIFO_buf116.extract<16, 31>();
  hw_uint<16> stg7_FIFO_buf116_lane_2 = stg7_FIFO_buf116.extract<32, 47>();
  hw_uint<16> stg7_FIFO_buf116_lane_3 = stg7_FIFO_buf116.extract<48, 63>();
  hw_uint<16> stg7_FIFO_buf116_lane_4 = stg7_FIFO_buf116.extract<64, 79>();
  hw_uint<16> stg7_FIFO_buf116_lane_5 = stg7_FIFO_buf116.extract<80, 95>();
  hw_uint<16> stg7_FIFO_buf116_lane_6 = stg7_FIFO_buf116.extract<96, 111>();
  hw_uint<16> stg7_FIFO_buf116_lane_7 = stg7_FIFO_buf116.extract<112, 127>();
  hw_uint<16> stg7_FIFO_buf116_lane_8 = stg7_FIFO_buf116.extract<128, 143>();
  hw_uint<16> stg7_FIFO_buf116_lane_9 = stg7_FIFO_buf116.extract<144, 159>();
  hw_uint<16> stg7_FIFO_buf116_lane_10 = stg7_FIFO_buf116.extract<160, 175>();
  hw_uint<16> stg7_FIFO_buf116_lane_11 = stg7_FIFO_buf116.extract<176, 191>();
  hw_uint<16> stg7_FIFO_buf116_lane_12 = stg7_FIFO_buf116.extract<192, 207>();
  hw_uint<16> stg7_FIFO_buf116_lane_13 = stg7_FIFO_buf116.extract<208, 223>();
  hw_uint<16> stg7_FIFO_buf116_lane_14 = stg7_FIFO_buf116.extract<224, 239>();
  hw_uint<16> stg7_FIFO_buf116_lane_15 = stg7_FIFO_buf116.extract<240, 255>();
  hw_uint<16> stg7_FIFO_buf116_lane_16 = stg7_FIFO_buf116.extract<256, 271>();
  hw_uint<16> stg7_FIFO_buf116_lane_17 = stg7_FIFO_buf116.extract<272, 287>();
  hw_uint<16> stg7_FIFO_buf116_lane_18 = stg7_FIFO_buf116.extract<288, 303>();
  hw_uint<16> stg7_FIFO_buf116_lane_19 = stg7_FIFO_buf116.extract<304, 319>();
  hw_uint<16> stg7_FIFO_buf116_lane_20 = stg7_FIFO_buf116.extract<320, 335>();
  hw_uint<16> stg7_FIFO_buf116_lane_21 = stg7_FIFO_buf116.extract<336, 351>();
  hw_uint<16> stg7_FIFO_buf116_lane_22 = stg7_FIFO_buf116.extract<352, 367>();
  hw_uint<16> stg7_FIFO_buf116_lane_23 = stg7_FIFO_buf116.extract<368, 383>();
  hw_uint<16> stg7_FIFO_buf116_lane_24 = stg7_FIFO_buf116.extract<384, 399>();
  hw_uint<16> stg7_FIFO_buf116_lane_25 = stg7_FIFO_buf116.extract<400, 415>();
  hw_uint<16> stg7_FIFO_buf116_lane_26 = stg7_FIFO_buf116.extract<416, 431>();
  hw_uint<16> stg7_FIFO_buf116_lane_27 = stg7_FIFO_buf116.extract<432, 447>();
  hw_uint<16> stg7_FIFO_buf116_lane_28 = stg7_FIFO_buf116.extract<448, 463>();
  hw_uint<16> stg7_FIFO_buf116_lane_29 = stg7_FIFO_buf116.extract<464, 479>();
  hw_uint<16> stg7_FIFO_buf116_lane_30 = stg7_FIFO_buf116.extract<480, 495>();
  hw_uint<16> stg7_FIFO_buf116_lane_31 = stg7_FIFO_buf116.extract<496, 511>();
  hw_uint<16> stg7_FIFO_buf116_lane_32 = stg7_FIFO_buf116.extract<512, 527>();
  hw_uint<16> stg7_FIFO_buf116_lane_33 = stg7_FIFO_buf116.extract<528, 543>();
  hw_uint<16> stg7_FIFO_buf116_lane_34 = stg7_FIFO_buf116.extract<544, 559>();
  hw_uint<16> stg7_FIFO_buf116_lane_35 = stg7_FIFO_buf116.extract<560, 575>();
  hw_uint<16> stg7_FIFO_buf116_lane_36 = stg7_FIFO_buf116.extract<576, 591>();
  hw_uint<16> stg7_FIFO_buf116_lane_37 = stg7_FIFO_buf116.extract<592, 607>();
  hw_uint<16> stg7_FIFO_buf116_lane_38 = stg7_FIFO_buf116.extract<608, 623>();
  hw_uint<16> stg7_FIFO_buf116_lane_39 = stg7_FIFO_buf116.extract<624, 639>();
  hw_uint<16> stg7_FIFO_buf116_lane_40 = stg7_FIFO_buf116.extract<640, 655>();
  hw_uint<16> stg7_FIFO_buf116_lane_41 = stg7_FIFO_buf116.extract<656, 671>();
  hw_uint<16> stg7_FIFO_buf116_lane_42 = stg7_FIFO_buf116.extract<672, 687>();
  hw_uint<16> stg7_FIFO_buf116_lane_43 = stg7_FIFO_buf116.extract<688, 703>();
  hw_uint<16> stg7_FIFO_buf116_lane_44 = stg7_FIFO_buf116.extract<704, 719>();
  hw_uint<16> stg7_FIFO_buf116_lane_45 = stg7_FIFO_buf116.extract<720, 735>();
  hw_uint<16> stg7_FIFO_buf116_lane_46 = stg7_FIFO_buf116.extract<736, 751>();
  hw_uint<16> stg7_FIFO_buf116_lane_47 = stg7_FIFO_buf116.extract<752, 767>();
  hw_uint<16> stg7_FIFO_buf116_lane_48 = stg7_FIFO_buf116.extract<768, 783>();
  hw_uint<16> stg7_FIFO_buf116_lane_49 = stg7_FIFO_buf116.extract<784, 799>();
  hw_uint<16> stg7_FIFO_buf116_lane_50 = stg7_FIFO_buf116.extract<800, 815>();
  hw_uint<16> stg7_FIFO_buf116_lane_51 = stg7_FIFO_buf116.extract<816, 831>();
  hw_uint<16> stg7_FIFO_buf116_lane_52 = stg7_FIFO_buf116.extract<832, 847>();
  hw_uint<16> stg7_FIFO_buf116_lane_53 = stg7_FIFO_buf116.extract<848, 863>();
  hw_uint<16> stg7_FIFO_buf116_lane_54 = stg7_FIFO_buf116.extract<864, 879>();
  hw_uint<16> stg7_FIFO_buf116_lane_55 = stg7_FIFO_buf116.extract<880, 895>();
  hw_uint<16> stg7_FIFO_buf116_lane_56 = stg7_FIFO_buf116.extract<896, 911>();
  hw_uint<16> stg7_FIFO_buf116_lane_57 = stg7_FIFO_buf116.extract<912, 927>();
  hw_uint<16> stg7_FIFO_buf116_lane_58 = stg7_FIFO_buf116.extract<928, 943>();
  hw_uint<16> stg7_FIFO_buf116_lane_59 = stg7_FIFO_buf116.extract<944, 959>();
  hw_uint<16> stg7_FIFO_buf116_lane_60 = stg7_FIFO_buf116.extract<960, 975>();
  hw_uint<16> stg7_FIFO_buf116_lane_61 = stg7_FIFO_buf116.extract<976, 991>();
  hw_uint<16> stg7_FIFO_buf116_lane_62 = stg7_FIFO_buf116.extract<992, 1007>();
  hw_uint<16> stg7_FIFO_buf116_lane_63 = stg7_FIFO_buf116.extract<1008, 1023>();

	
  hw_uint<128 > stg7_FIFO_buf116_lane_3_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_0);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_1);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_2);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_3);
auto res_stg8_update_0_sm160_151231 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_3_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_7_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_4);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_5);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_6);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_7);
auto res_stg8_update_0_sm160_141229 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_7_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_11_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_8);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_9);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_10);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_11);
auto res_stg8_update_0_sm160_131227 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_11_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_15_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_12);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_13);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_14);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_15);
auto res_stg8_update_0_sm160_121225 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_15_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_19_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_16);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_17);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_18);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_19);
auto res_stg8_update_0_sm160_111223 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_19_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_23_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_20);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_21);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_22);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_23);
auto res_stg8_update_0_sm160_101221 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_23_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_27_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_24);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_25);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_26);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_27);
auto res_stg8_update_0_sm160_91219 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_27_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_31_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_28);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_29);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_30);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_31);
auto res_stg8_update_0_sm160_81217 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_31_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_35_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_32);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_33);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_34);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_35);
auto res_stg8_update_0_sm160_71215 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_35_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_39_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_36);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_37);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_38);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_39);
auto res_stg8_update_0_sm160_61213 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_39_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_43_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_40);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_41);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_42);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_43);
auto res_stg8_update_0_sm160_51211 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_43_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_47_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_44);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_45);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_46);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_47);
auto res_stg8_update_0_sm160_41209 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_47_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_51_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_48);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_49);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_50);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_51);
auto res_stg8_update_0_sm160_31207 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_51_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_55_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_52);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_53);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_54);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_55);
auto res_stg8_update_0_sm160_21205 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_55_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_59_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_56);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_57);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_58);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_59);
auto res_stg8_update_0_sm160_11203 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_59_pack);

	  hw_uint<128 > stg7_FIFO_buf116_lane_63_pack;
  set_at<0, 128, 32>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_60);
  set_at<32, 128, 32>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_61);
  set_at<64, 128, 32>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_62);
  set_at<96, 128, 32>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_63);
auto res_stg8_update_0_sm160_01201 = stg8_generated_compute_unrolled_16(stg7_FIFO_buf116_lane_63_pack);
  hw_uint<512 > return_value1819;
  set_at<0, 512, 32>(return_value1819, res_stg8_update_0_sm160_151231);
  set_at<32, 512, 32>(return_value1819, res_stg8_update_0_sm160_141229);
  set_at<64, 512, 32>(return_value1819, res_stg8_update_0_sm160_131227);
  set_at<96, 512, 32>(return_value1819, res_stg8_update_0_sm160_121225);
  set_at<128, 512, 32>(return_value1819, res_stg8_update_0_sm160_111223);
  set_at<160, 512, 32>(return_value1819, res_stg8_update_0_sm160_101221);
  set_at<192, 512, 32>(return_value1819, res_stg8_update_0_sm160_91219);
  set_at<224, 512, 32>(return_value1819, res_stg8_update_0_sm160_81217);
  set_at<256, 512, 32>(return_value1819, res_stg8_update_0_sm160_71215);
  set_at<288, 512, 32>(return_value1819, res_stg8_update_0_sm160_61213);
  set_at<320, 512, 32>(return_value1819, res_stg8_update_0_sm160_51211);
  set_at<352, 512, 32>(return_value1819, res_stg8_update_0_sm160_41209);
  set_at<384, 512, 32>(return_value1819, res_stg8_update_0_sm160_31207);
  set_at<416, 512, 32>(return_value1819, res_stg8_update_0_sm160_21205);
  set_at<448, 512, 32>(return_value1819, res_stg8_update_0_sm160_11203);
  set_at<480, 512, 32>(return_value1819, res_stg8_update_0_sm160_01201);
  return return_value1819;

}

hw_uint<256> stg9_1_cu1821(hw_uint<32*64>& stg8_FIFO_buf120) {
  hw_uint<16> stg8_FIFO_buf120_lane_0 = stg8_FIFO_buf120.extract<0, 15>();
  hw_uint<16> stg8_FIFO_buf120_lane_1 = stg8_FIFO_buf120.extract<16, 31>();
  hw_uint<16> stg8_FIFO_buf120_lane_2 = stg8_FIFO_buf120.extract<32, 47>();
  hw_uint<16> stg8_FIFO_buf120_lane_3 = stg8_FIFO_buf120.extract<48, 63>();
  hw_uint<16> stg8_FIFO_buf120_lane_4 = stg8_FIFO_buf120.extract<64, 79>();
  hw_uint<16> stg8_FIFO_buf120_lane_5 = stg8_FIFO_buf120.extract<80, 95>();
  hw_uint<16> stg8_FIFO_buf120_lane_6 = stg8_FIFO_buf120.extract<96, 111>();
  hw_uint<16> stg8_FIFO_buf120_lane_7 = stg8_FIFO_buf120.extract<112, 127>();
  hw_uint<16> stg8_FIFO_buf120_lane_8 = stg8_FIFO_buf120.extract<128, 143>();
  hw_uint<16> stg8_FIFO_buf120_lane_9 = stg8_FIFO_buf120.extract<144, 159>();
  hw_uint<16> stg8_FIFO_buf120_lane_10 = stg8_FIFO_buf120.extract<160, 175>();
  hw_uint<16> stg8_FIFO_buf120_lane_11 = stg8_FIFO_buf120.extract<176, 191>();
  hw_uint<16> stg8_FIFO_buf120_lane_12 = stg8_FIFO_buf120.extract<192, 207>();
  hw_uint<16> stg8_FIFO_buf120_lane_13 = stg8_FIFO_buf120.extract<208, 223>();
  hw_uint<16> stg8_FIFO_buf120_lane_14 = stg8_FIFO_buf120.extract<224, 239>();
  hw_uint<16> stg8_FIFO_buf120_lane_15 = stg8_FIFO_buf120.extract<240, 255>();
  hw_uint<16> stg8_FIFO_buf120_lane_16 = stg8_FIFO_buf120.extract<256, 271>();
  hw_uint<16> stg8_FIFO_buf120_lane_17 = stg8_FIFO_buf120.extract<272, 287>();
  hw_uint<16> stg8_FIFO_buf120_lane_18 = stg8_FIFO_buf120.extract<288, 303>();
  hw_uint<16> stg8_FIFO_buf120_lane_19 = stg8_FIFO_buf120.extract<304, 319>();
  hw_uint<16> stg8_FIFO_buf120_lane_20 = stg8_FIFO_buf120.extract<320, 335>();
  hw_uint<16> stg8_FIFO_buf120_lane_21 = stg8_FIFO_buf120.extract<336, 351>();
  hw_uint<16> stg8_FIFO_buf120_lane_22 = stg8_FIFO_buf120.extract<352, 367>();
  hw_uint<16> stg8_FIFO_buf120_lane_23 = stg8_FIFO_buf120.extract<368, 383>();
  hw_uint<16> stg8_FIFO_buf120_lane_24 = stg8_FIFO_buf120.extract<384, 399>();
  hw_uint<16> stg8_FIFO_buf120_lane_25 = stg8_FIFO_buf120.extract<400, 415>();
  hw_uint<16> stg8_FIFO_buf120_lane_26 = stg8_FIFO_buf120.extract<416, 431>();
  hw_uint<16> stg8_FIFO_buf120_lane_27 = stg8_FIFO_buf120.extract<432, 447>();
  hw_uint<16> stg8_FIFO_buf120_lane_28 = stg8_FIFO_buf120.extract<448, 463>();
  hw_uint<16> stg8_FIFO_buf120_lane_29 = stg8_FIFO_buf120.extract<464, 479>();
  hw_uint<16> stg8_FIFO_buf120_lane_30 = stg8_FIFO_buf120.extract<480, 495>();
  hw_uint<16> stg8_FIFO_buf120_lane_31 = stg8_FIFO_buf120.extract<496, 511>();
  hw_uint<16> stg8_FIFO_buf120_lane_32 = stg8_FIFO_buf120.extract<512, 527>();
  hw_uint<16> stg8_FIFO_buf120_lane_33 = stg8_FIFO_buf120.extract<528, 543>();
  hw_uint<16> stg8_FIFO_buf120_lane_34 = stg8_FIFO_buf120.extract<544, 559>();
  hw_uint<16> stg8_FIFO_buf120_lane_35 = stg8_FIFO_buf120.extract<560, 575>();
  hw_uint<16> stg8_FIFO_buf120_lane_36 = stg8_FIFO_buf120.extract<576, 591>();
  hw_uint<16> stg8_FIFO_buf120_lane_37 = stg8_FIFO_buf120.extract<592, 607>();
  hw_uint<16> stg8_FIFO_buf120_lane_38 = stg8_FIFO_buf120.extract<608, 623>();
  hw_uint<16> stg8_FIFO_buf120_lane_39 = stg8_FIFO_buf120.extract<624, 639>();
  hw_uint<16> stg8_FIFO_buf120_lane_40 = stg8_FIFO_buf120.extract<640, 655>();
  hw_uint<16> stg8_FIFO_buf120_lane_41 = stg8_FIFO_buf120.extract<656, 671>();
  hw_uint<16> stg8_FIFO_buf120_lane_42 = stg8_FIFO_buf120.extract<672, 687>();
  hw_uint<16> stg8_FIFO_buf120_lane_43 = stg8_FIFO_buf120.extract<688, 703>();
  hw_uint<16> stg8_FIFO_buf120_lane_44 = stg8_FIFO_buf120.extract<704, 719>();
  hw_uint<16> stg8_FIFO_buf120_lane_45 = stg8_FIFO_buf120.extract<720, 735>();
  hw_uint<16> stg8_FIFO_buf120_lane_46 = stg8_FIFO_buf120.extract<736, 751>();
  hw_uint<16> stg8_FIFO_buf120_lane_47 = stg8_FIFO_buf120.extract<752, 767>();
  hw_uint<16> stg8_FIFO_buf120_lane_48 = stg8_FIFO_buf120.extract<768, 783>();
  hw_uint<16> stg8_FIFO_buf120_lane_49 = stg8_FIFO_buf120.extract<784, 799>();
  hw_uint<16> stg8_FIFO_buf120_lane_50 = stg8_FIFO_buf120.extract<800, 815>();
  hw_uint<16> stg8_FIFO_buf120_lane_51 = stg8_FIFO_buf120.extract<816, 831>();
  hw_uint<16> stg8_FIFO_buf120_lane_52 = stg8_FIFO_buf120.extract<832, 847>();
  hw_uint<16> stg8_FIFO_buf120_lane_53 = stg8_FIFO_buf120.extract<848, 863>();
  hw_uint<16> stg8_FIFO_buf120_lane_54 = stg8_FIFO_buf120.extract<864, 879>();
  hw_uint<16> stg8_FIFO_buf120_lane_55 = stg8_FIFO_buf120.extract<880, 895>();
  hw_uint<16> stg8_FIFO_buf120_lane_56 = stg8_FIFO_buf120.extract<896, 911>();
  hw_uint<16> stg8_FIFO_buf120_lane_57 = stg8_FIFO_buf120.extract<912, 927>();
  hw_uint<16> stg8_FIFO_buf120_lane_58 = stg8_FIFO_buf120.extract<928, 943>();
  hw_uint<16> stg8_FIFO_buf120_lane_59 = stg8_FIFO_buf120.extract<944, 959>();
  hw_uint<16> stg8_FIFO_buf120_lane_60 = stg8_FIFO_buf120.extract<960, 975>();
  hw_uint<16> stg8_FIFO_buf120_lane_61 = stg8_FIFO_buf120.extract<976, 991>();
  hw_uint<16> stg8_FIFO_buf120_lane_62 = stg8_FIFO_buf120.extract<992, 1007>();
  hw_uint<16> stg8_FIFO_buf120_lane_63 = stg8_FIFO_buf120.extract<1008, 1023>();

	
  hw_uint<128 > stg8_FIFO_buf120_lane_3_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_0);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_1);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_2);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_3);
auto res_stg9_update_0_sm161_151263 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_3_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_7_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_4);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_5);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_6);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_7);
auto res_stg9_update_0_sm161_141261 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_7_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_11_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_8);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_9);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_10);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_11);
auto res_stg9_update_0_sm161_131259 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_11_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_15_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_12);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_13);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_14);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_15);
auto res_stg9_update_0_sm161_121257 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_15_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_19_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_16);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_17);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_18);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_19);
auto res_stg9_update_0_sm161_111255 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_19_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_23_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_20);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_21);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_22);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_23);
auto res_stg9_update_0_sm161_101253 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_23_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_27_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_24);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_25);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_26);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_27);
auto res_stg9_update_0_sm161_91251 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_27_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_31_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_28);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_29);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_30);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_31);
auto res_stg9_update_0_sm161_81249 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_31_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_35_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_32);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_33);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_34);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_35);
auto res_stg9_update_0_sm161_71247 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_35_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_39_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_36);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_37);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_38);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_39);
auto res_stg9_update_0_sm161_61245 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_39_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_43_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_40);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_41);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_42);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_43);
auto res_stg9_update_0_sm161_51243 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_43_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_47_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_44);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_45);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_46);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_47);
auto res_stg9_update_0_sm161_41241 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_47_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_51_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_48);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_49);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_50);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_51);
auto res_stg9_update_0_sm161_31239 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_51_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_55_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_52);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_53);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_54);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_55);
auto res_stg9_update_0_sm161_21237 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_55_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_59_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_56);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_57);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_58);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_59);
auto res_stg9_update_0_sm161_11235 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_59_pack);

	  hw_uint<128 > stg8_FIFO_buf120_lane_63_pack;
  set_at<0, 128, 32>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_60);
  set_at<32, 128, 32>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_61);
  set_at<64, 128, 32>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_62);
  set_at<96, 128, 32>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_63);
auto res_stg9_update_0_sm161_01233 = stg9_generated_compute_unrolled_16(stg8_FIFO_buf120_lane_63_pack);
  hw_uint<512 > return_value1822;
  set_at<0, 512, 32>(return_value1822, res_stg9_update_0_sm161_151263);
  set_at<32, 512, 32>(return_value1822, res_stg9_update_0_sm161_141261);
  set_at<64, 512, 32>(return_value1822, res_stg9_update_0_sm161_131259);
  set_at<96, 512, 32>(return_value1822, res_stg9_update_0_sm161_121257);
  set_at<128, 512, 32>(return_value1822, res_stg9_update_0_sm161_111255);
  set_at<160, 512, 32>(return_value1822, res_stg9_update_0_sm161_101253);
  set_at<192, 512, 32>(return_value1822, res_stg9_update_0_sm161_91251);
  set_at<224, 512, 32>(return_value1822, res_stg9_update_0_sm161_81249);
  set_at<256, 512, 32>(return_value1822, res_stg9_update_0_sm161_71247);
  set_at<288, 512, 32>(return_value1822, res_stg9_update_0_sm161_61245);
  set_at<320, 512, 32>(return_value1822, res_stg9_update_0_sm161_51243);
  set_at<352, 512, 32>(return_value1822, res_stg9_update_0_sm161_41241);
  set_at<384, 512, 32>(return_value1822, res_stg9_update_0_sm161_31239);
  set_at<416, 512, 32>(return_value1822, res_stg9_update_0_sm161_21237);
  set_at<448, 512, 32>(return_value1822, res_stg9_update_0_sm161_11235);
  set_at<480, 512, 32>(return_value1822, res_stg9_update_0_sm161_01233);
  return return_value1822;

}

hw_uint<256> stg10_1_cu1824(hw_uint<32*64>& stg9_FIFO_buf124) {
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

	
  hw_uint<128 > stg9_FIFO_buf124_lane_3_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_0);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_1);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_2);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_3_pack, stg9_FIFO_buf124_lane_3);
auto res_stg10_update_0_sm162_151295 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_3_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_7_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_4);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_5);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_6);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_7);
auto res_stg10_update_0_sm162_141293 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_7_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_11_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_8);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_9);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_10);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_11);
auto res_stg10_update_0_sm162_131291 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_11_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_15_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_12);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_13);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_14);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_15);
auto res_stg10_update_0_sm162_121289 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_15_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_19_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_16);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_17);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_18);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_19);
auto res_stg10_update_0_sm162_111287 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_19_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_23_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_20);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_21);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_22);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_23);
auto res_stg10_update_0_sm162_101285 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_23_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_27_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_24);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_25);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_26);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_27);
auto res_stg10_update_0_sm162_91283 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_27_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_31_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_28);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_29);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_30);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_31);
auto res_stg10_update_0_sm162_81281 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_31_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_35_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_32);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_33);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_34);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_35);
auto res_stg10_update_0_sm162_71279 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_35_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_39_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_36);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_37);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_38);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_39);
auto res_stg10_update_0_sm162_61277 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_39_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_43_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_40);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_41);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_42);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_43);
auto res_stg10_update_0_sm162_51275 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_43_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_47_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_44);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_45);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_46);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_47);
auto res_stg10_update_0_sm162_41273 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_47_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_51_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_48);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_49);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_50);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_51);
auto res_stg10_update_0_sm162_31271 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_51_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_55_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_52);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_53);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_54);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_55);
auto res_stg10_update_0_sm162_21269 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_55_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_59_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_56);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_57);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_58);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_59);
auto res_stg10_update_0_sm162_11267 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_59_pack);

	  hw_uint<128 > stg9_FIFO_buf124_lane_63_pack;
  set_at<0, 128, 32>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_60);
  set_at<32, 128, 32>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_61);
  set_at<64, 128, 32>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_62);
  set_at<96, 128, 32>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_63);
auto res_stg10_update_0_sm162_01265 = stg10_generated_compute_unrolled_16(stg9_FIFO_buf124_lane_63_pack);
  hw_uint<512 > return_value1825;
  set_at<0, 512, 32>(return_value1825, res_stg10_update_0_sm162_151295);
  set_at<32, 512, 32>(return_value1825, res_stg10_update_0_sm162_141293);
  set_at<64, 512, 32>(return_value1825, res_stg10_update_0_sm162_131291);
  set_at<96, 512, 32>(return_value1825, res_stg10_update_0_sm162_121289);
  set_at<128, 512, 32>(return_value1825, res_stg10_update_0_sm162_111287);
  set_at<160, 512, 32>(return_value1825, res_stg10_update_0_sm162_101285);
  set_at<192, 512, 32>(return_value1825, res_stg10_update_0_sm162_91283);
  set_at<224, 512, 32>(return_value1825, res_stg10_update_0_sm162_81281);
  set_at<256, 512, 32>(return_value1825, res_stg10_update_0_sm162_71279);
  set_at<288, 512, 32>(return_value1825, res_stg10_update_0_sm162_61277);
  set_at<320, 512, 32>(return_value1825, res_stg10_update_0_sm162_51275);
  set_at<352, 512, 32>(return_value1825, res_stg10_update_0_sm162_41273);
  set_at<384, 512, 32>(return_value1825, res_stg10_update_0_sm162_31271);
  set_at<416, 512, 32>(return_value1825, res_stg10_update_0_sm162_21269);
  set_at<448, 512, 32>(return_value1825, res_stg10_update_0_sm162_11267);
  set_at<480, 512, 32>(return_value1825, res_stg10_update_0_sm162_01265);
  return return_value1825;

}

hw_uint<256> stg11_1_cu1827(hw_uint<32*64>& stg10_FIFO_buf76) {
  hw_uint<16> stg10_FIFO_buf76_lane_0 = stg10_FIFO_buf76.extract<0, 15>();
  hw_uint<16> stg10_FIFO_buf76_lane_1 = stg10_FIFO_buf76.extract<16, 31>();
  hw_uint<16> stg10_FIFO_buf76_lane_2 = stg10_FIFO_buf76.extract<32, 47>();
  hw_uint<16> stg10_FIFO_buf76_lane_3 = stg10_FIFO_buf76.extract<48, 63>();
  hw_uint<16> stg10_FIFO_buf76_lane_4 = stg10_FIFO_buf76.extract<64, 79>();
  hw_uint<16> stg10_FIFO_buf76_lane_5 = stg10_FIFO_buf76.extract<80, 95>();
  hw_uint<16> stg10_FIFO_buf76_lane_6 = stg10_FIFO_buf76.extract<96, 111>();
  hw_uint<16> stg10_FIFO_buf76_lane_7 = stg10_FIFO_buf76.extract<112, 127>();
  hw_uint<16> stg10_FIFO_buf76_lane_8 = stg10_FIFO_buf76.extract<128, 143>();
  hw_uint<16> stg10_FIFO_buf76_lane_9 = stg10_FIFO_buf76.extract<144, 159>();
  hw_uint<16> stg10_FIFO_buf76_lane_10 = stg10_FIFO_buf76.extract<160, 175>();
  hw_uint<16> stg10_FIFO_buf76_lane_11 = stg10_FIFO_buf76.extract<176, 191>();
  hw_uint<16> stg10_FIFO_buf76_lane_12 = stg10_FIFO_buf76.extract<192, 207>();
  hw_uint<16> stg10_FIFO_buf76_lane_13 = stg10_FIFO_buf76.extract<208, 223>();
  hw_uint<16> stg10_FIFO_buf76_lane_14 = stg10_FIFO_buf76.extract<224, 239>();
  hw_uint<16> stg10_FIFO_buf76_lane_15 = stg10_FIFO_buf76.extract<240, 255>();
  hw_uint<16> stg10_FIFO_buf76_lane_16 = stg10_FIFO_buf76.extract<256, 271>();
  hw_uint<16> stg10_FIFO_buf76_lane_17 = stg10_FIFO_buf76.extract<272, 287>();
  hw_uint<16> stg10_FIFO_buf76_lane_18 = stg10_FIFO_buf76.extract<288, 303>();
  hw_uint<16> stg10_FIFO_buf76_lane_19 = stg10_FIFO_buf76.extract<304, 319>();
  hw_uint<16> stg10_FIFO_buf76_lane_20 = stg10_FIFO_buf76.extract<320, 335>();
  hw_uint<16> stg10_FIFO_buf76_lane_21 = stg10_FIFO_buf76.extract<336, 351>();
  hw_uint<16> stg10_FIFO_buf76_lane_22 = stg10_FIFO_buf76.extract<352, 367>();
  hw_uint<16> stg10_FIFO_buf76_lane_23 = stg10_FIFO_buf76.extract<368, 383>();
  hw_uint<16> stg10_FIFO_buf76_lane_24 = stg10_FIFO_buf76.extract<384, 399>();
  hw_uint<16> stg10_FIFO_buf76_lane_25 = stg10_FIFO_buf76.extract<400, 415>();
  hw_uint<16> stg10_FIFO_buf76_lane_26 = stg10_FIFO_buf76.extract<416, 431>();
  hw_uint<16> stg10_FIFO_buf76_lane_27 = stg10_FIFO_buf76.extract<432, 447>();
  hw_uint<16> stg10_FIFO_buf76_lane_28 = stg10_FIFO_buf76.extract<448, 463>();
  hw_uint<16> stg10_FIFO_buf76_lane_29 = stg10_FIFO_buf76.extract<464, 479>();
  hw_uint<16> stg10_FIFO_buf76_lane_30 = stg10_FIFO_buf76.extract<480, 495>();
  hw_uint<16> stg10_FIFO_buf76_lane_31 = stg10_FIFO_buf76.extract<496, 511>();
  hw_uint<16> stg10_FIFO_buf76_lane_32 = stg10_FIFO_buf76.extract<512, 527>();
  hw_uint<16> stg10_FIFO_buf76_lane_33 = stg10_FIFO_buf76.extract<528, 543>();
  hw_uint<16> stg10_FIFO_buf76_lane_34 = stg10_FIFO_buf76.extract<544, 559>();
  hw_uint<16> stg10_FIFO_buf76_lane_35 = stg10_FIFO_buf76.extract<560, 575>();
  hw_uint<16> stg10_FIFO_buf76_lane_36 = stg10_FIFO_buf76.extract<576, 591>();
  hw_uint<16> stg10_FIFO_buf76_lane_37 = stg10_FIFO_buf76.extract<592, 607>();
  hw_uint<16> stg10_FIFO_buf76_lane_38 = stg10_FIFO_buf76.extract<608, 623>();
  hw_uint<16> stg10_FIFO_buf76_lane_39 = stg10_FIFO_buf76.extract<624, 639>();
  hw_uint<16> stg10_FIFO_buf76_lane_40 = stg10_FIFO_buf76.extract<640, 655>();
  hw_uint<16> stg10_FIFO_buf76_lane_41 = stg10_FIFO_buf76.extract<656, 671>();
  hw_uint<16> stg10_FIFO_buf76_lane_42 = stg10_FIFO_buf76.extract<672, 687>();
  hw_uint<16> stg10_FIFO_buf76_lane_43 = stg10_FIFO_buf76.extract<688, 703>();
  hw_uint<16> stg10_FIFO_buf76_lane_44 = stg10_FIFO_buf76.extract<704, 719>();
  hw_uint<16> stg10_FIFO_buf76_lane_45 = stg10_FIFO_buf76.extract<720, 735>();
  hw_uint<16> stg10_FIFO_buf76_lane_46 = stg10_FIFO_buf76.extract<736, 751>();
  hw_uint<16> stg10_FIFO_buf76_lane_47 = stg10_FIFO_buf76.extract<752, 767>();
  hw_uint<16> stg10_FIFO_buf76_lane_48 = stg10_FIFO_buf76.extract<768, 783>();
  hw_uint<16> stg10_FIFO_buf76_lane_49 = stg10_FIFO_buf76.extract<784, 799>();
  hw_uint<16> stg10_FIFO_buf76_lane_50 = stg10_FIFO_buf76.extract<800, 815>();
  hw_uint<16> stg10_FIFO_buf76_lane_51 = stg10_FIFO_buf76.extract<816, 831>();
  hw_uint<16> stg10_FIFO_buf76_lane_52 = stg10_FIFO_buf76.extract<832, 847>();
  hw_uint<16> stg10_FIFO_buf76_lane_53 = stg10_FIFO_buf76.extract<848, 863>();
  hw_uint<16> stg10_FIFO_buf76_lane_54 = stg10_FIFO_buf76.extract<864, 879>();
  hw_uint<16> stg10_FIFO_buf76_lane_55 = stg10_FIFO_buf76.extract<880, 895>();
  hw_uint<16> stg10_FIFO_buf76_lane_56 = stg10_FIFO_buf76.extract<896, 911>();
  hw_uint<16> stg10_FIFO_buf76_lane_57 = stg10_FIFO_buf76.extract<912, 927>();
  hw_uint<16> stg10_FIFO_buf76_lane_58 = stg10_FIFO_buf76.extract<928, 943>();
  hw_uint<16> stg10_FIFO_buf76_lane_59 = stg10_FIFO_buf76.extract<944, 959>();
  hw_uint<16> stg10_FIFO_buf76_lane_60 = stg10_FIFO_buf76.extract<960, 975>();
  hw_uint<16> stg10_FIFO_buf76_lane_61 = stg10_FIFO_buf76.extract<976, 991>();
  hw_uint<16> stg10_FIFO_buf76_lane_62 = stg10_FIFO_buf76.extract<992, 1007>();
  hw_uint<16> stg10_FIFO_buf76_lane_63 = stg10_FIFO_buf76.extract<1008, 1023>();

	
  hw_uint<128 > stg10_FIFO_buf76_lane_3_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_0);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_1);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_2);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_3);
auto res_stg11_update_0_sm163_151327 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_3_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_7_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_4);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_5);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_6);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_7);
auto res_stg11_update_0_sm163_141325 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_7_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_11_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_8);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_9);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_10);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_11);
auto res_stg11_update_0_sm163_131323 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_11_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_15_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_12);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_13);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_14);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_15);
auto res_stg11_update_0_sm163_121321 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_15_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_19_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_16);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_17);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_18);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_19);
auto res_stg11_update_0_sm163_111319 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_19_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_23_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_20);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_21);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_22);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_23);
auto res_stg11_update_0_sm163_101317 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_23_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_27_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_24);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_25);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_26);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_27);
auto res_stg11_update_0_sm163_91315 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_27_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_31_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_28);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_29);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_30);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_31);
auto res_stg11_update_0_sm163_81313 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_31_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_35_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_32);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_33);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_34);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_35);
auto res_stg11_update_0_sm163_71311 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_35_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_39_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_36);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_37);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_38);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_39);
auto res_stg11_update_0_sm163_61309 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_39_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_43_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_40);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_41);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_42);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_43);
auto res_stg11_update_0_sm163_51307 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_43_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_47_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_44);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_45);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_46);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_47);
auto res_stg11_update_0_sm163_41305 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_47_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_51_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_48);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_49);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_50);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_51);
auto res_stg11_update_0_sm163_31303 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_51_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_55_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_52);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_53);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_54);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_55);
auto res_stg11_update_0_sm163_21301 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_55_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_59_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_56);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_57);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_58);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_59);
auto res_stg11_update_0_sm163_11299 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_59_pack);

	  hw_uint<128 > stg10_FIFO_buf76_lane_63_pack;
  set_at<0, 128, 32>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_60);
  set_at<32, 128, 32>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_61);
  set_at<64, 128, 32>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_62);
  set_at<96, 128, 32>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_63);
auto res_stg11_update_0_sm163_01297 = stg11_generated_compute_unrolled_16(stg10_FIFO_buf76_lane_63_pack);
  hw_uint<512 > return_value1828;
  set_at<0, 512, 32>(return_value1828, res_stg11_update_0_sm163_151327);
  set_at<32, 512, 32>(return_value1828, res_stg11_update_0_sm163_141325);
  set_at<64, 512, 32>(return_value1828, res_stg11_update_0_sm163_131323);
  set_at<96, 512, 32>(return_value1828, res_stg11_update_0_sm163_121321);
  set_at<128, 512, 32>(return_value1828, res_stg11_update_0_sm163_111319);
  set_at<160, 512, 32>(return_value1828, res_stg11_update_0_sm163_101317);
  set_at<192, 512, 32>(return_value1828, res_stg11_update_0_sm163_91315);
  set_at<224, 512, 32>(return_value1828, res_stg11_update_0_sm163_81313);
  set_at<256, 512, 32>(return_value1828, res_stg11_update_0_sm163_71311);
  set_at<288, 512, 32>(return_value1828, res_stg11_update_0_sm163_61309);
  set_at<320, 512, 32>(return_value1828, res_stg11_update_0_sm163_51307);
  set_at<352, 512, 32>(return_value1828, res_stg11_update_0_sm163_41305);
  set_at<384, 512, 32>(return_value1828, res_stg11_update_0_sm163_31303);
  set_at<416, 512, 32>(return_value1828, res_stg11_update_0_sm163_21301);
  set_at<448, 512, 32>(return_value1828, res_stg11_update_0_sm163_11299);
  set_at<480, 512, 32>(return_value1828, res_stg11_update_0_sm163_01297);
  return return_value1828;

}

hw_uint<256> stg12_1_cu1830(hw_uint<32*64>& stg11_FIFO_buf80) {
  hw_uint<16> stg11_FIFO_buf80_lane_0 = stg11_FIFO_buf80.extract<0, 15>();
  hw_uint<16> stg11_FIFO_buf80_lane_1 = stg11_FIFO_buf80.extract<16, 31>();
  hw_uint<16> stg11_FIFO_buf80_lane_2 = stg11_FIFO_buf80.extract<32, 47>();
  hw_uint<16> stg11_FIFO_buf80_lane_3 = stg11_FIFO_buf80.extract<48, 63>();
  hw_uint<16> stg11_FIFO_buf80_lane_4 = stg11_FIFO_buf80.extract<64, 79>();
  hw_uint<16> stg11_FIFO_buf80_lane_5 = stg11_FIFO_buf80.extract<80, 95>();
  hw_uint<16> stg11_FIFO_buf80_lane_6 = stg11_FIFO_buf80.extract<96, 111>();
  hw_uint<16> stg11_FIFO_buf80_lane_7 = stg11_FIFO_buf80.extract<112, 127>();
  hw_uint<16> stg11_FIFO_buf80_lane_8 = stg11_FIFO_buf80.extract<128, 143>();
  hw_uint<16> stg11_FIFO_buf80_lane_9 = stg11_FIFO_buf80.extract<144, 159>();
  hw_uint<16> stg11_FIFO_buf80_lane_10 = stg11_FIFO_buf80.extract<160, 175>();
  hw_uint<16> stg11_FIFO_buf80_lane_11 = stg11_FIFO_buf80.extract<176, 191>();
  hw_uint<16> stg11_FIFO_buf80_lane_12 = stg11_FIFO_buf80.extract<192, 207>();
  hw_uint<16> stg11_FIFO_buf80_lane_13 = stg11_FIFO_buf80.extract<208, 223>();
  hw_uint<16> stg11_FIFO_buf80_lane_14 = stg11_FIFO_buf80.extract<224, 239>();
  hw_uint<16> stg11_FIFO_buf80_lane_15 = stg11_FIFO_buf80.extract<240, 255>();
  hw_uint<16> stg11_FIFO_buf80_lane_16 = stg11_FIFO_buf80.extract<256, 271>();
  hw_uint<16> stg11_FIFO_buf80_lane_17 = stg11_FIFO_buf80.extract<272, 287>();
  hw_uint<16> stg11_FIFO_buf80_lane_18 = stg11_FIFO_buf80.extract<288, 303>();
  hw_uint<16> stg11_FIFO_buf80_lane_19 = stg11_FIFO_buf80.extract<304, 319>();
  hw_uint<16> stg11_FIFO_buf80_lane_20 = stg11_FIFO_buf80.extract<320, 335>();
  hw_uint<16> stg11_FIFO_buf80_lane_21 = stg11_FIFO_buf80.extract<336, 351>();
  hw_uint<16> stg11_FIFO_buf80_lane_22 = stg11_FIFO_buf80.extract<352, 367>();
  hw_uint<16> stg11_FIFO_buf80_lane_23 = stg11_FIFO_buf80.extract<368, 383>();
  hw_uint<16> stg11_FIFO_buf80_lane_24 = stg11_FIFO_buf80.extract<384, 399>();
  hw_uint<16> stg11_FIFO_buf80_lane_25 = stg11_FIFO_buf80.extract<400, 415>();
  hw_uint<16> stg11_FIFO_buf80_lane_26 = stg11_FIFO_buf80.extract<416, 431>();
  hw_uint<16> stg11_FIFO_buf80_lane_27 = stg11_FIFO_buf80.extract<432, 447>();
  hw_uint<16> stg11_FIFO_buf80_lane_28 = stg11_FIFO_buf80.extract<448, 463>();
  hw_uint<16> stg11_FIFO_buf80_lane_29 = stg11_FIFO_buf80.extract<464, 479>();
  hw_uint<16> stg11_FIFO_buf80_lane_30 = stg11_FIFO_buf80.extract<480, 495>();
  hw_uint<16> stg11_FIFO_buf80_lane_31 = stg11_FIFO_buf80.extract<496, 511>();
  hw_uint<16> stg11_FIFO_buf80_lane_32 = stg11_FIFO_buf80.extract<512, 527>();
  hw_uint<16> stg11_FIFO_buf80_lane_33 = stg11_FIFO_buf80.extract<528, 543>();
  hw_uint<16> stg11_FIFO_buf80_lane_34 = stg11_FIFO_buf80.extract<544, 559>();
  hw_uint<16> stg11_FIFO_buf80_lane_35 = stg11_FIFO_buf80.extract<560, 575>();
  hw_uint<16> stg11_FIFO_buf80_lane_36 = stg11_FIFO_buf80.extract<576, 591>();
  hw_uint<16> stg11_FIFO_buf80_lane_37 = stg11_FIFO_buf80.extract<592, 607>();
  hw_uint<16> stg11_FIFO_buf80_lane_38 = stg11_FIFO_buf80.extract<608, 623>();
  hw_uint<16> stg11_FIFO_buf80_lane_39 = stg11_FIFO_buf80.extract<624, 639>();
  hw_uint<16> stg11_FIFO_buf80_lane_40 = stg11_FIFO_buf80.extract<640, 655>();
  hw_uint<16> stg11_FIFO_buf80_lane_41 = stg11_FIFO_buf80.extract<656, 671>();
  hw_uint<16> stg11_FIFO_buf80_lane_42 = stg11_FIFO_buf80.extract<672, 687>();
  hw_uint<16> stg11_FIFO_buf80_lane_43 = stg11_FIFO_buf80.extract<688, 703>();
  hw_uint<16> stg11_FIFO_buf80_lane_44 = stg11_FIFO_buf80.extract<704, 719>();
  hw_uint<16> stg11_FIFO_buf80_lane_45 = stg11_FIFO_buf80.extract<720, 735>();
  hw_uint<16> stg11_FIFO_buf80_lane_46 = stg11_FIFO_buf80.extract<736, 751>();
  hw_uint<16> stg11_FIFO_buf80_lane_47 = stg11_FIFO_buf80.extract<752, 767>();
  hw_uint<16> stg11_FIFO_buf80_lane_48 = stg11_FIFO_buf80.extract<768, 783>();
  hw_uint<16> stg11_FIFO_buf80_lane_49 = stg11_FIFO_buf80.extract<784, 799>();
  hw_uint<16> stg11_FIFO_buf80_lane_50 = stg11_FIFO_buf80.extract<800, 815>();
  hw_uint<16> stg11_FIFO_buf80_lane_51 = stg11_FIFO_buf80.extract<816, 831>();
  hw_uint<16> stg11_FIFO_buf80_lane_52 = stg11_FIFO_buf80.extract<832, 847>();
  hw_uint<16> stg11_FIFO_buf80_lane_53 = stg11_FIFO_buf80.extract<848, 863>();
  hw_uint<16> stg11_FIFO_buf80_lane_54 = stg11_FIFO_buf80.extract<864, 879>();
  hw_uint<16> stg11_FIFO_buf80_lane_55 = stg11_FIFO_buf80.extract<880, 895>();
  hw_uint<16> stg11_FIFO_buf80_lane_56 = stg11_FIFO_buf80.extract<896, 911>();
  hw_uint<16> stg11_FIFO_buf80_lane_57 = stg11_FIFO_buf80.extract<912, 927>();
  hw_uint<16> stg11_FIFO_buf80_lane_58 = stg11_FIFO_buf80.extract<928, 943>();
  hw_uint<16> stg11_FIFO_buf80_lane_59 = stg11_FIFO_buf80.extract<944, 959>();
  hw_uint<16> stg11_FIFO_buf80_lane_60 = stg11_FIFO_buf80.extract<960, 975>();
  hw_uint<16> stg11_FIFO_buf80_lane_61 = stg11_FIFO_buf80.extract<976, 991>();
  hw_uint<16> stg11_FIFO_buf80_lane_62 = stg11_FIFO_buf80.extract<992, 1007>();
  hw_uint<16> stg11_FIFO_buf80_lane_63 = stg11_FIFO_buf80.extract<1008, 1023>();

	
  hw_uint<128 > stg11_FIFO_buf80_lane_3_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_0);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_1);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_2);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_3);
auto res_stg12_update_0_sm164_151359 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_3_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_7_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_4);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_5);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_6);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_7);
auto res_stg12_update_0_sm164_141357 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_7_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_11_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_8);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_9);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_10);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_11);
auto res_stg12_update_0_sm164_131355 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_11_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_15_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_12);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_13);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_14);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_15);
auto res_stg12_update_0_sm164_121353 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_15_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_19_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_16);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_17);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_18);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_19);
auto res_stg12_update_0_sm164_111351 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_19_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_23_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_20);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_21);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_22);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_23);
auto res_stg12_update_0_sm164_101349 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_23_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_27_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_24);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_25);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_26);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_27);
auto res_stg12_update_0_sm164_91347 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_27_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_31_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_28);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_29);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_30);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_31);
auto res_stg12_update_0_sm164_81345 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_31_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_35_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_32);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_33);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_34);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_35);
auto res_stg12_update_0_sm164_71343 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_35_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_39_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_36);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_37);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_38);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_39);
auto res_stg12_update_0_sm164_61341 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_39_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_43_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_40);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_41);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_42);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_43);
auto res_stg12_update_0_sm164_51339 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_43_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_47_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_44);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_45);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_46);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_47);
auto res_stg12_update_0_sm164_41337 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_47_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_51_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_48);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_49);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_50);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_51);
auto res_stg12_update_0_sm164_31335 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_51_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_55_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_52);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_53);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_54);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_55);
auto res_stg12_update_0_sm164_21333 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_55_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_59_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_56);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_57);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_58);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_59);
auto res_stg12_update_0_sm164_11331 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_59_pack);

	  hw_uint<128 > stg11_FIFO_buf80_lane_63_pack;
  set_at<0, 128, 32>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_60);
  set_at<32, 128, 32>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_61);
  set_at<64, 128, 32>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_62);
  set_at<96, 128, 32>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_63);
auto res_stg12_update_0_sm164_01329 = stg12_generated_compute_unrolled_16(stg11_FIFO_buf80_lane_63_pack);
  hw_uint<512 > return_value1831;
  set_at<0, 512, 32>(return_value1831, res_stg12_update_0_sm164_151359);
  set_at<32, 512, 32>(return_value1831, res_stg12_update_0_sm164_141357);
  set_at<64, 512, 32>(return_value1831, res_stg12_update_0_sm164_131355);
  set_at<96, 512, 32>(return_value1831, res_stg12_update_0_sm164_121353);
  set_at<128, 512, 32>(return_value1831, res_stg12_update_0_sm164_111351);
  set_at<160, 512, 32>(return_value1831, res_stg12_update_0_sm164_101349);
  set_at<192, 512, 32>(return_value1831, res_stg12_update_0_sm164_91347);
  set_at<224, 512, 32>(return_value1831, res_stg12_update_0_sm164_81345);
  set_at<256, 512, 32>(return_value1831, res_stg12_update_0_sm164_71343);
  set_at<288, 512, 32>(return_value1831, res_stg12_update_0_sm164_61341);
  set_at<320, 512, 32>(return_value1831, res_stg12_update_0_sm164_51339);
  set_at<352, 512, 32>(return_value1831, res_stg12_update_0_sm164_41337);
  set_at<384, 512, 32>(return_value1831, res_stg12_update_0_sm164_31335);
  set_at<416, 512, 32>(return_value1831, res_stg12_update_0_sm164_21333);
  set_at<448, 512, 32>(return_value1831, res_stg12_update_0_sm164_11331);
  set_at<480, 512, 32>(return_value1831, res_stg12_update_0_sm164_01329);
  return return_value1831;

}

hw_uint<256> stg13_1_cu1833(hw_uint<32*64>& stg12_FIFO_buf84) {
  hw_uint<16> stg12_FIFO_buf84_lane_0 = stg12_FIFO_buf84.extract<0, 15>();
  hw_uint<16> stg12_FIFO_buf84_lane_1 = stg12_FIFO_buf84.extract<16, 31>();
  hw_uint<16> stg12_FIFO_buf84_lane_2 = stg12_FIFO_buf84.extract<32, 47>();
  hw_uint<16> stg12_FIFO_buf84_lane_3 = stg12_FIFO_buf84.extract<48, 63>();
  hw_uint<16> stg12_FIFO_buf84_lane_4 = stg12_FIFO_buf84.extract<64, 79>();
  hw_uint<16> stg12_FIFO_buf84_lane_5 = stg12_FIFO_buf84.extract<80, 95>();
  hw_uint<16> stg12_FIFO_buf84_lane_6 = stg12_FIFO_buf84.extract<96, 111>();
  hw_uint<16> stg12_FIFO_buf84_lane_7 = stg12_FIFO_buf84.extract<112, 127>();
  hw_uint<16> stg12_FIFO_buf84_lane_8 = stg12_FIFO_buf84.extract<128, 143>();
  hw_uint<16> stg12_FIFO_buf84_lane_9 = stg12_FIFO_buf84.extract<144, 159>();
  hw_uint<16> stg12_FIFO_buf84_lane_10 = stg12_FIFO_buf84.extract<160, 175>();
  hw_uint<16> stg12_FIFO_buf84_lane_11 = stg12_FIFO_buf84.extract<176, 191>();
  hw_uint<16> stg12_FIFO_buf84_lane_12 = stg12_FIFO_buf84.extract<192, 207>();
  hw_uint<16> stg12_FIFO_buf84_lane_13 = stg12_FIFO_buf84.extract<208, 223>();
  hw_uint<16> stg12_FIFO_buf84_lane_14 = stg12_FIFO_buf84.extract<224, 239>();
  hw_uint<16> stg12_FIFO_buf84_lane_15 = stg12_FIFO_buf84.extract<240, 255>();
  hw_uint<16> stg12_FIFO_buf84_lane_16 = stg12_FIFO_buf84.extract<256, 271>();
  hw_uint<16> stg12_FIFO_buf84_lane_17 = stg12_FIFO_buf84.extract<272, 287>();
  hw_uint<16> stg12_FIFO_buf84_lane_18 = stg12_FIFO_buf84.extract<288, 303>();
  hw_uint<16> stg12_FIFO_buf84_lane_19 = stg12_FIFO_buf84.extract<304, 319>();
  hw_uint<16> stg12_FIFO_buf84_lane_20 = stg12_FIFO_buf84.extract<320, 335>();
  hw_uint<16> stg12_FIFO_buf84_lane_21 = stg12_FIFO_buf84.extract<336, 351>();
  hw_uint<16> stg12_FIFO_buf84_lane_22 = stg12_FIFO_buf84.extract<352, 367>();
  hw_uint<16> stg12_FIFO_buf84_lane_23 = stg12_FIFO_buf84.extract<368, 383>();
  hw_uint<16> stg12_FIFO_buf84_lane_24 = stg12_FIFO_buf84.extract<384, 399>();
  hw_uint<16> stg12_FIFO_buf84_lane_25 = stg12_FIFO_buf84.extract<400, 415>();
  hw_uint<16> stg12_FIFO_buf84_lane_26 = stg12_FIFO_buf84.extract<416, 431>();
  hw_uint<16> stg12_FIFO_buf84_lane_27 = stg12_FIFO_buf84.extract<432, 447>();
  hw_uint<16> stg12_FIFO_buf84_lane_28 = stg12_FIFO_buf84.extract<448, 463>();
  hw_uint<16> stg12_FIFO_buf84_lane_29 = stg12_FIFO_buf84.extract<464, 479>();
  hw_uint<16> stg12_FIFO_buf84_lane_30 = stg12_FIFO_buf84.extract<480, 495>();
  hw_uint<16> stg12_FIFO_buf84_lane_31 = stg12_FIFO_buf84.extract<496, 511>();
  hw_uint<16> stg12_FIFO_buf84_lane_32 = stg12_FIFO_buf84.extract<512, 527>();
  hw_uint<16> stg12_FIFO_buf84_lane_33 = stg12_FIFO_buf84.extract<528, 543>();
  hw_uint<16> stg12_FIFO_buf84_lane_34 = stg12_FIFO_buf84.extract<544, 559>();
  hw_uint<16> stg12_FIFO_buf84_lane_35 = stg12_FIFO_buf84.extract<560, 575>();
  hw_uint<16> stg12_FIFO_buf84_lane_36 = stg12_FIFO_buf84.extract<576, 591>();
  hw_uint<16> stg12_FIFO_buf84_lane_37 = stg12_FIFO_buf84.extract<592, 607>();
  hw_uint<16> stg12_FIFO_buf84_lane_38 = stg12_FIFO_buf84.extract<608, 623>();
  hw_uint<16> stg12_FIFO_buf84_lane_39 = stg12_FIFO_buf84.extract<624, 639>();
  hw_uint<16> stg12_FIFO_buf84_lane_40 = stg12_FIFO_buf84.extract<640, 655>();
  hw_uint<16> stg12_FIFO_buf84_lane_41 = stg12_FIFO_buf84.extract<656, 671>();
  hw_uint<16> stg12_FIFO_buf84_lane_42 = stg12_FIFO_buf84.extract<672, 687>();
  hw_uint<16> stg12_FIFO_buf84_lane_43 = stg12_FIFO_buf84.extract<688, 703>();
  hw_uint<16> stg12_FIFO_buf84_lane_44 = stg12_FIFO_buf84.extract<704, 719>();
  hw_uint<16> stg12_FIFO_buf84_lane_45 = stg12_FIFO_buf84.extract<720, 735>();
  hw_uint<16> stg12_FIFO_buf84_lane_46 = stg12_FIFO_buf84.extract<736, 751>();
  hw_uint<16> stg12_FIFO_buf84_lane_47 = stg12_FIFO_buf84.extract<752, 767>();
  hw_uint<16> stg12_FIFO_buf84_lane_48 = stg12_FIFO_buf84.extract<768, 783>();
  hw_uint<16> stg12_FIFO_buf84_lane_49 = stg12_FIFO_buf84.extract<784, 799>();
  hw_uint<16> stg12_FIFO_buf84_lane_50 = stg12_FIFO_buf84.extract<800, 815>();
  hw_uint<16> stg12_FIFO_buf84_lane_51 = stg12_FIFO_buf84.extract<816, 831>();
  hw_uint<16> stg12_FIFO_buf84_lane_52 = stg12_FIFO_buf84.extract<832, 847>();
  hw_uint<16> stg12_FIFO_buf84_lane_53 = stg12_FIFO_buf84.extract<848, 863>();
  hw_uint<16> stg12_FIFO_buf84_lane_54 = stg12_FIFO_buf84.extract<864, 879>();
  hw_uint<16> stg12_FIFO_buf84_lane_55 = stg12_FIFO_buf84.extract<880, 895>();
  hw_uint<16> stg12_FIFO_buf84_lane_56 = stg12_FIFO_buf84.extract<896, 911>();
  hw_uint<16> stg12_FIFO_buf84_lane_57 = stg12_FIFO_buf84.extract<912, 927>();
  hw_uint<16> stg12_FIFO_buf84_lane_58 = stg12_FIFO_buf84.extract<928, 943>();
  hw_uint<16> stg12_FIFO_buf84_lane_59 = stg12_FIFO_buf84.extract<944, 959>();
  hw_uint<16> stg12_FIFO_buf84_lane_60 = stg12_FIFO_buf84.extract<960, 975>();
  hw_uint<16> stg12_FIFO_buf84_lane_61 = stg12_FIFO_buf84.extract<976, 991>();
  hw_uint<16> stg12_FIFO_buf84_lane_62 = stg12_FIFO_buf84.extract<992, 1007>();
  hw_uint<16> stg12_FIFO_buf84_lane_63 = stg12_FIFO_buf84.extract<1008, 1023>();

	
  hw_uint<128 > stg12_FIFO_buf84_lane_3_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_0);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_1);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_2);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_3);
auto res_stg13_update_0_sm165_151391 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_3_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_7_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_4);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_5);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_6);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_7);
auto res_stg13_update_0_sm165_141389 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_7_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_11_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_8);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_9);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_10);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_11);
auto res_stg13_update_0_sm165_131387 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_11_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_15_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_12);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_13);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_14);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_15);
auto res_stg13_update_0_sm165_121385 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_15_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_19_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_16);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_17);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_18);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_19);
auto res_stg13_update_0_sm165_111383 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_19_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_23_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_20);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_21);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_22);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_23);
auto res_stg13_update_0_sm165_101381 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_23_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_27_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_24);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_25);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_26);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_27);
auto res_stg13_update_0_sm165_91379 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_27_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_31_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_28);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_29);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_30);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_31);
auto res_stg13_update_0_sm165_81377 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_31_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_35_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_32);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_33);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_34);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_35);
auto res_stg13_update_0_sm165_71375 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_35_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_39_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_36);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_37);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_38);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_39);
auto res_stg13_update_0_sm165_61373 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_39_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_43_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_40);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_41);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_42);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_43);
auto res_stg13_update_0_sm165_51371 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_43_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_47_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_44);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_45);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_46);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_47);
auto res_stg13_update_0_sm165_41369 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_47_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_51_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_48);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_49);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_50);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_51);
auto res_stg13_update_0_sm165_31367 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_51_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_55_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_52);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_53);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_54);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_55);
auto res_stg13_update_0_sm165_21365 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_55_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_59_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_56);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_57);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_58);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_59);
auto res_stg13_update_0_sm165_11363 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_59_pack);

	  hw_uint<128 > stg12_FIFO_buf84_lane_63_pack;
  set_at<0, 128, 32>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_60);
  set_at<32, 128, 32>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_61);
  set_at<64, 128, 32>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_62);
  set_at<96, 128, 32>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_63);
auto res_stg13_update_0_sm165_01361 = stg13_generated_compute_unrolled_16(stg12_FIFO_buf84_lane_63_pack);
  hw_uint<512 > return_value1834;
  set_at<0, 512, 32>(return_value1834, res_stg13_update_0_sm165_151391);
  set_at<32, 512, 32>(return_value1834, res_stg13_update_0_sm165_141389);
  set_at<64, 512, 32>(return_value1834, res_stg13_update_0_sm165_131387);
  set_at<96, 512, 32>(return_value1834, res_stg13_update_0_sm165_121385);
  set_at<128, 512, 32>(return_value1834, res_stg13_update_0_sm165_111383);
  set_at<160, 512, 32>(return_value1834, res_stg13_update_0_sm165_101381);
  set_at<192, 512, 32>(return_value1834, res_stg13_update_0_sm165_91379);
  set_at<224, 512, 32>(return_value1834, res_stg13_update_0_sm165_81377);
  set_at<256, 512, 32>(return_value1834, res_stg13_update_0_sm165_71375);
  set_at<288, 512, 32>(return_value1834, res_stg13_update_0_sm165_61373);
  set_at<320, 512, 32>(return_value1834, res_stg13_update_0_sm165_51371);
  set_at<352, 512, 32>(return_value1834, res_stg13_update_0_sm165_41369);
  set_at<384, 512, 32>(return_value1834, res_stg13_update_0_sm165_31367);
  set_at<416, 512, 32>(return_value1834, res_stg13_update_0_sm165_21365);
  set_at<448, 512, 32>(return_value1834, res_stg13_update_0_sm165_11363);
  set_at<480, 512, 32>(return_value1834, res_stg13_update_0_sm165_01361);
  return return_value1834;

}

hw_uint<256> stg14_1_cu1836(hw_uint<32*64>& stg13_FIFO_buf88) {
  hw_uint<16> stg13_FIFO_buf88_lane_0 = stg13_FIFO_buf88.extract<0, 15>();
  hw_uint<16> stg13_FIFO_buf88_lane_1 = stg13_FIFO_buf88.extract<16, 31>();
  hw_uint<16> stg13_FIFO_buf88_lane_2 = stg13_FIFO_buf88.extract<32, 47>();
  hw_uint<16> stg13_FIFO_buf88_lane_3 = stg13_FIFO_buf88.extract<48, 63>();
  hw_uint<16> stg13_FIFO_buf88_lane_4 = stg13_FIFO_buf88.extract<64, 79>();
  hw_uint<16> stg13_FIFO_buf88_lane_5 = stg13_FIFO_buf88.extract<80, 95>();
  hw_uint<16> stg13_FIFO_buf88_lane_6 = stg13_FIFO_buf88.extract<96, 111>();
  hw_uint<16> stg13_FIFO_buf88_lane_7 = stg13_FIFO_buf88.extract<112, 127>();
  hw_uint<16> stg13_FIFO_buf88_lane_8 = stg13_FIFO_buf88.extract<128, 143>();
  hw_uint<16> stg13_FIFO_buf88_lane_9 = stg13_FIFO_buf88.extract<144, 159>();
  hw_uint<16> stg13_FIFO_buf88_lane_10 = stg13_FIFO_buf88.extract<160, 175>();
  hw_uint<16> stg13_FIFO_buf88_lane_11 = stg13_FIFO_buf88.extract<176, 191>();
  hw_uint<16> stg13_FIFO_buf88_lane_12 = stg13_FIFO_buf88.extract<192, 207>();
  hw_uint<16> stg13_FIFO_buf88_lane_13 = stg13_FIFO_buf88.extract<208, 223>();
  hw_uint<16> stg13_FIFO_buf88_lane_14 = stg13_FIFO_buf88.extract<224, 239>();
  hw_uint<16> stg13_FIFO_buf88_lane_15 = stg13_FIFO_buf88.extract<240, 255>();
  hw_uint<16> stg13_FIFO_buf88_lane_16 = stg13_FIFO_buf88.extract<256, 271>();
  hw_uint<16> stg13_FIFO_buf88_lane_17 = stg13_FIFO_buf88.extract<272, 287>();
  hw_uint<16> stg13_FIFO_buf88_lane_18 = stg13_FIFO_buf88.extract<288, 303>();
  hw_uint<16> stg13_FIFO_buf88_lane_19 = stg13_FIFO_buf88.extract<304, 319>();
  hw_uint<16> stg13_FIFO_buf88_lane_20 = stg13_FIFO_buf88.extract<320, 335>();
  hw_uint<16> stg13_FIFO_buf88_lane_21 = stg13_FIFO_buf88.extract<336, 351>();
  hw_uint<16> stg13_FIFO_buf88_lane_22 = stg13_FIFO_buf88.extract<352, 367>();
  hw_uint<16> stg13_FIFO_buf88_lane_23 = stg13_FIFO_buf88.extract<368, 383>();
  hw_uint<16> stg13_FIFO_buf88_lane_24 = stg13_FIFO_buf88.extract<384, 399>();
  hw_uint<16> stg13_FIFO_buf88_lane_25 = stg13_FIFO_buf88.extract<400, 415>();
  hw_uint<16> stg13_FIFO_buf88_lane_26 = stg13_FIFO_buf88.extract<416, 431>();
  hw_uint<16> stg13_FIFO_buf88_lane_27 = stg13_FIFO_buf88.extract<432, 447>();
  hw_uint<16> stg13_FIFO_buf88_lane_28 = stg13_FIFO_buf88.extract<448, 463>();
  hw_uint<16> stg13_FIFO_buf88_lane_29 = stg13_FIFO_buf88.extract<464, 479>();
  hw_uint<16> stg13_FIFO_buf88_lane_30 = stg13_FIFO_buf88.extract<480, 495>();
  hw_uint<16> stg13_FIFO_buf88_lane_31 = stg13_FIFO_buf88.extract<496, 511>();
  hw_uint<16> stg13_FIFO_buf88_lane_32 = stg13_FIFO_buf88.extract<512, 527>();
  hw_uint<16> stg13_FIFO_buf88_lane_33 = stg13_FIFO_buf88.extract<528, 543>();
  hw_uint<16> stg13_FIFO_buf88_lane_34 = stg13_FIFO_buf88.extract<544, 559>();
  hw_uint<16> stg13_FIFO_buf88_lane_35 = stg13_FIFO_buf88.extract<560, 575>();
  hw_uint<16> stg13_FIFO_buf88_lane_36 = stg13_FIFO_buf88.extract<576, 591>();
  hw_uint<16> stg13_FIFO_buf88_lane_37 = stg13_FIFO_buf88.extract<592, 607>();
  hw_uint<16> stg13_FIFO_buf88_lane_38 = stg13_FIFO_buf88.extract<608, 623>();
  hw_uint<16> stg13_FIFO_buf88_lane_39 = stg13_FIFO_buf88.extract<624, 639>();
  hw_uint<16> stg13_FIFO_buf88_lane_40 = stg13_FIFO_buf88.extract<640, 655>();
  hw_uint<16> stg13_FIFO_buf88_lane_41 = stg13_FIFO_buf88.extract<656, 671>();
  hw_uint<16> stg13_FIFO_buf88_lane_42 = stg13_FIFO_buf88.extract<672, 687>();
  hw_uint<16> stg13_FIFO_buf88_lane_43 = stg13_FIFO_buf88.extract<688, 703>();
  hw_uint<16> stg13_FIFO_buf88_lane_44 = stg13_FIFO_buf88.extract<704, 719>();
  hw_uint<16> stg13_FIFO_buf88_lane_45 = stg13_FIFO_buf88.extract<720, 735>();
  hw_uint<16> stg13_FIFO_buf88_lane_46 = stg13_FIFO_buf88.extract<736, 751>();
  hw_uint<16> stg13_FIFO_buf88_lane_47 = stg13_FIFO_buf88.extract<752, 767>();
  hw_uint<16> stg13_FIFO_buf88_lane_48 = stg13_FIFO_buf88.extract<768, 783>();
  hw_uint<16> stg13_FIFO_buf88_lane_49 = stg13_FIFO_buf88.extract<784, 799>();
  hw_uint<16> stg13_FIFO_buf88_lane_50 = stg13_FIFO_buf88.extract<800, 815>();
  hw_uint<16> stg13_FIFO_buf88_lane_51 = stg13_FIFO_buf88.extract<816, 831>();
  hw_uint<16> stg13_FIFO_buf88_lane_52 = stg13_FIFO_buf88.extract<832, 847>();
  hw_uint<16> stg13_FIFO_buf88_lane_53 = stg13_FIFO_buf88.extract<848, 863>();
  hw_uint<16> stg13_FIFO_buf88_lane_54 = stg13_FIFO_buf88.extract<864, 879>();
  hw_uint<16> stg13_FIFO_buf88_lane_55 = stg13_FIFO_buf88.extract<880, 895>();
  hw_uint<16> stg13_FIFO_buf88_lane_56 = stg13_FIFO_buf88.extract<896, 911>();
  hw_uint<16> stg13_FIFO_buf88_lane_57 = stg13_FIFO_buf88.extract<912, 927>();
  hw_uint<16> stg13_FIFO_buf88_lane_58 = stg13_FIFO_buf88.extract<928, 943>();
  hw_uint<16> stg13_FIFO_buf88_lane_59 = stg13_FIFO_buf88.extract<944, 959>();
  hw_uint<16> stg13_FIFO_buf88_lane_60 = stg13_FIFO_buf88.extract<960, 975>();
  hw_uint<16> stg13_FIFO_buf88_lane_61 = stg13_FIFO_buf88.extract<976, 991>();
  hw_uint<16> stg13_FIFO_buf88_lane_62 = stg13_FIFO_buf88.extract<992, 1007>();
  hw_uint<16> stg13_FIFO_buf88_lane_63 = stg13_FIFO_buf88.extract<1008, 1023>();

	
  hw_uint<128 > stg13_FIFO_buf88_lane_3_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_0);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_1);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_2);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_3);
auto res_stg14_update_0_sm166_151423 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_3_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_7_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_4);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_5);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_6);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_7);
auto res_stg14_update_0_sm166_141421 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_7_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_11_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_8);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_9);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_10);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_11);
auto res_stg14_update_0_sm166_131419 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_11_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_15_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_12);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_13);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_14);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_15);
auto res_stg14_update_0_sm166_121417 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_15_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_19_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_16);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_17);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_18);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_19);
auto res_stg14_update_0_sm166_111415 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_19_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_23_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_20);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_21);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_22);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_23);
auto res_stg14_update_0_sm166_101413 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_23_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_27_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_24);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_25);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_26);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_27);
auto res_stg14_update_0_sm166_91411 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_27_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_31_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_28);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_29);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_30);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_31);
auto res_stg14_update_0_sm166_81409 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_31_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_35_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_32);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_33);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_34);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_35);
auto res_stg14_update_0_sm166_71407 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_35_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_39_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_36);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_37);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_38);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_39);
auto res_stg14_update_0_sm166_61405 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_39_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_43_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_40);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_41);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_42);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_43);
auto res_stg14_update_0_sm166_51403 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_43_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_47_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_44);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_45);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_46);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_47);
auto res_stg14_update_0_sm166_41401 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_47_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_51_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_48);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_49);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_50);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_51);
auto res_stg14_update_0_sm166_31399 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_51_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_55_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_52);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_53);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_54);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_55);
auto res_stg14_update_0_sm166_21397 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_55_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_59_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_56);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_57);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_58);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_59);
auto res_stg14_update_0_sm166_11395 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_59_pack);

	  hw_uint<128 > stg13_FIFO_buf88_lane_63_pack;
  set_at<0, 128, 32>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_60);
  set_at<32, 128, 32>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_61);
  set_at<64, 128, 32>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_62);
  set_at<96, 128, 32>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_63);
auto res_stg14_update_0_sm166_01393 = stg14_generated_compute_unrolled_16(stg13_FIFO_buf88_lane_63_pack);
  hw_uint<512 > return_value1837;
  set_at<0, 512, 32>(return_value1837, res_stg14_update_0_sm166_151423);
  set_at<32, 512, 32>(return_value1837, res_stg14_update_0_sm166_141421);
  set_at<64, 512, 32>(return_value1837, res_stg14_update_0_sm166_131419);
  set_at<96, 512, 32>(return_value1837, res_stg14_update_0_sm166_121417);
  set_at<128, 512, 32>(return_value1837, res_stg14_update_0_sm166_111415);
  set_at<160, 512, 32>(return_value1837, res_stg14_update_0_sm166_101413);
  set_at<192, 512, 32>(return_value1837, res_stg14_update_0_sm166_91411);
  set_at<224, 512, 32>(return_value1837, res_stg14_update_0_sm166_81409);
  set_at<256, 512, 32>(return_value1837, res_stg14_update_0_sm166_71407);
  set_at<288, 512, 32>(return_value1837, res_stg14_update_0_sm166_61405);
  set_at<320, 512, 32>(return_value1837, res_stg14_update_0_sm166_51403);
  set_at<352, 512, 32>(return_value1837, res_stg14_update_0_sm166_41401);
  set_at<384, 512, 32>(return_value1837, res_stg14_update_0_sm166_31399);
  set_at<416, 512, 32>(return_value1837, res_stg14_update_0_sm166_21397);
  set_at<448, 512, 32>(return_value1837, res_stg14_update_0_sm166_11395);
  set_at<480, 512, 32>(return_value1837, res_stg14_update_0_sm166_01393);
  return return_value1837;

}

hw_uint<256> jacdyn_16_1_cu1839(hw_uint<32*16>& stg14_FIFO_buf92) {
  hw_uint<16> stg14_FIFO_buf92_lane_0 = stg14_FIFO_buf92.extract<0, 15>();
  hw_uint<16> stg14_FIFO_buf92_lane_1 = stg14_FIFO_buf92.extract<16, 31>();
  hw_uint<16> stg14_FIFO_buf92_lane_2 = stg14_FIFO_buf92.extract<32, 47>();
  hw_uint<16> stg14_FIFO_buf92_lane_3 = stg14_FIFO_buf92.extract<48, 63>();
  hw_uint<16> stg14_FIFO_buf92_lane_4 = stg14_FIFO_buf92.extract<64, 79>();
  hw_uint<16> stg14_FIFO_buf92_lane_5 = stg14_FIFO_buf92.extract<80, 95>();
  hw_uint<16> stg14_FIFO_buf92_lane_6 = stg14_FIFO_buf92.extract<96, 111>();
  hw_uint<16> stg14_FIFO_buf92_lane_7 = stg14_FIFO_buf92.extract<112, 127>();
  hw_uint<16> stg14_FIFO_buf92_lane_8 = stg14_FIFO_buf92.extract<128, 143>();
  hw_uint<16> stg14_FIFO_buf92_lane_9 = stg14_FIFO_buf92.extract<144, 159>();
  hw_uint<16> stg14_FIFO_buf92_lane_10 = stg14_FIFO_buf92.extract<160, 175>();
  hw_uint<16> stg14_FIFO_buf92_lane_11 = stg14_FIFO_buf92.extract<176, 191>();
  hw_uint<16> stg14_FIFO_buf92_lane_12 = stg14_FIFO_buf92.extract<192, 207>();
  hw_uint<16> stg14_FIFO_buf92_lane_13 = stg14_FIFO_buf92.extract<208, 223>();
  hw_uint<16> stg14_FIFO_buf92_lane_14 = stg14_FIFO_buf92.extract<224, 239>();
  hw_uint<16> stg14_FIFO_buf92_lane_15 = stg14_FIFO_buf92.extract<240, 255>();

	
  hw_uint<32 > stg14_FIFO_buf92_lane_0_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_0_pack, stg14_FIFO_buf92_lane_0);
auto res_jacdyn_16_update_0_sm167_151455 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_0_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_1_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_1_pack, stg14_FIFO_buf92_lane_1);
auto res_jacdyn_16_update_0_sm167_141453 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_1_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_2_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_2_pack, stg14_FIFO_buf92_lane_2);
auto res_jacdyn_16_update_0_sm167_131451 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_2_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_3_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_3_pack, stg14_FIFO_buf92_lane_3);
auto res_jacdyn_16_update_0_sm167_121449 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_3_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_4_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_4_pack, stg14_FIFO_buf92_lane_4);
auto res_jacdyn_16_update_0_sm167_111447 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_4_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_5_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_5_pack, stg14_FIFO_buf92_lane_5);
auto res_jacdyn_16_update_0_sm167_101445 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_5_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_6_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_6_pack, stg14_FIFO_buf92_lane_6);
auto res_jacdyn_16_update_0_sm167_91443 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_6_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_7_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_7_pack, stg14_FIFO_buf92_lane_7);
auto res_jacdyn_16_update_0_sm167_81441 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_7_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_8_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_8_pack, stg14_FIFO_buf92_lane_8);
auto res_jacdyn_16_update_0_sm167_71439 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_8_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_9_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_9_pack, stg14_FIFO_buf92_lane_9);
auto res_jacdyn_16_update_0_sm167_61437 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_9_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_10_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_10_pack, stg14_FIFO_buf92_lane_10);
auto res_jacdyn_16_update_0_sm167_51435 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_10_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_11_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_11_pack, stg14_FIFO_buf92_lane_11);
auto res_jacdyn_16_update_0_sm167_41433 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_11_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_12_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_12_pack, stg14_FIFO_buf92_lane_12);
auto res_jacdyn_16_update_0_sm167_31431 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_12_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_13_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_13_pack, stg14_FIFO_buf92_lane_13);
auto res_jacdyn_16_update_0_sm167_21429 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_13_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_14_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_14_pack, stg14_FIFO_buf92_lane_14);
auto res_jacdyn_16_update_0_sm167_11427 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_14_pack);

	  hw_uint<32 > stg14_FIFO_buf92_lane_15_pack;
  set_at<0, 32, 32>(stg14_FIFO_buf92_lane_15_pack, stg14_FIFO_buf92_lane_15);
auto res_jacdyn_16_update_0_sm167_01425 = jacdyn_16_generated_compute_unrolled_16(stg14_FIFO_buf92_lane_15_pack);
  hw_uint<512 > return_value1840;
  set_at<0, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_151455);
  set_at<32, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_141453);
  set_at<64, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_131451);
  set_at<96, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_121449);
  set_at<128, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_111447);
  set_at<160, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_101445);
  set_at<192, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_91443);
  set_at<224, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_81441);
  set_at<256, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_71439);
  set_at<288, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_61437);
  set_at<320, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_51435);
  set_at<352, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_41433);
  set_at<384, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_31431);
  set_at<416, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_21429);
  set_at<448, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_11427);
  set_at<480, 512, 32>(return_value1840, res_jacdyn_16_update_0_sm167_01425);
  return return_value1840;

}

hw_uint<256> stg1_ld9_cu1842(hw_uint<32*16>& stg1) {
  return stg1;
}

hw_uint<256> stg14_ld29_cu1844(hw_uint<32*16>& stg14) {
  return stg14;
}

hw_uint<256> in_ld1_cu1846(hw_uint<32*16>& in) {
  return in;
}

hw_uint<256> stg10_ld13_cu1848(hw_uint<32*16>& stg10) {
  return stg10;
}

hw_uint<256> stg13_ld25_cu1850(hw_uint<32*16>& stg13) {
  return stg13;
}

hw_uint<256> stg5_ld45_cu1852(hw_uint<32*16>& stg5) {
  return stg5;
}

hw_uint<256> stg6_ld49_cu1854(hw_uint<32*16>& stg6) {
  return stg6;
}

hw_uint<256> stg0_ld5_cu1856(hw_uint<32*16>& stg0) {
  return stg0;
}

hw_uint<256> stg2_ld33_cu1858(hw_uint<32*16>& stg2) {
  return stg2;
}

