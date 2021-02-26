#include "jac4_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> in_1_cu561(hw_uint<16*16>& in_off_chip) {
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
  auto res_in_update_0_sm0_1547 = in_generated_compute_unrolled_1(in_off_chip_lane_0_pack);

  hw_uint<16 > in_off_chip_lane_1_pack;
  set_at<0, 16, 16>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
  auto res_in_update_0_sm0_1445 = in_generated_compute_unrolled_1(in_off_chip_lane_1_pack);

  hw_uint<16 > in_off_chip_lane_2_pack;
  set_at<0, 16, 16>(in_off_chip_lane_2_pack, in_off_chip_lane_2);
  auto res_in_update_0_sm0_1343 = in_generated_compute_unrolled_1(in_off_chip_lane_2_pack);

  hw_uint<16 > in_off_chip_lane_3_pack;
  set_at<0, 16, 16>(in_off_chip_lane_3_pack, in_off_chip_lane_3);
  auto res_in_update_0_sm0_1241 = in_generated_compute_unrolled_1(in_off_chip_lane_3_pack);

  hw_uint<16 > in_off_chip_lane_4_pack;
  set_at<0, 16, 16>(in_off_chip_lane_4_pack, in_off_chip_lane_4);
  auto res_in_update_0_sm0_1139 = in_generated_compute_unrolled_1(in_off_chip_lane_4_pack);

  hw_uint<16 > in_off_chip_lane_5_pack;
  set_at<0, 16, 16>(in_off_chip_lane_5_pack, in_off_chip_lane_5);
  auto res_in_update_0_sm0_1037 = in_generated_compute_unrolled_1(in_off_chip_lane_5_pack);

  hw_uint<16 > in_off_chip_lane_6_pack;
  set_at<0, 16, 16>(in_off_chip_lane_6_pack, in_off_chip_lane_6);
  auto res_in_update_0_sm0_935 = in_generated_compute_unrolled_1(in_off_chip_lane_6_pack);

  hw_uint<16 > in_off_chip_lane_7_pack;
  set_at<0, 16, 16>(in_off_chip_lane_7_pack, in_off_chip_lane_7);
  auto res_in_update_0_sm0_833 = in_generated_compute_unrolled_1(in_off_chip_lane_7_pack);

  hw_uint<16 > in_off_chip_lane_8_pack;
  set_at<0, 16, 16>(in_off_chip_lane_8_pack, in_off_chip_lane_8);
  auto res_in_update_0_sm0_731 = in_generated_compute_unrolled_1(in_off_chip_lane_8_pack);

  hw_uint<16 > in_off_chip_lane_9_pack;
  set_at<0, 16, 16>(in_off_chip_lane_9_pack, in_off_chip_lane_9);
  auto res_in_update_0_sm0_629 = in_generated_compute_unrolled_1(in_off_chip_lane_9_pack);

  hw_uint<16 > in_off_chip_lane_10_pack;
  set_at<0, 16, 16>(in_off_chip_lane_10_pack, in_off_chip_lane_10);
  auto res_in_update_0_sm0_527 = in_generated_compute_unrolled_1(in_off_chip_lane_10_pack);

  hw_uint<16 > in_off_chip_lane_11_pack;
  set_at<0, 16, 16>(in_off_chip_lane_11_pack, in_off_chip_lane_11);
  auto res_in_update_0_sm0_425 = in_generated_compute_unrolled_1(in_off_chip_lane_11_pack);

  hw_uint<16 > in_off_chip_lane_12_pack;
  set_at<0, 16, 16>(in_off_chip_lane_12_pack, in_off_chip_lane_12);
  auto res_in_update_0_sm0_323 = in_generated_compute_unrolled_1(in_off_chip_lane_12_pack);

  hw_uint<16 > in_off_chip_lane_13_pack;
  set_at<0, 16, 16>(in_off_chip_lane_13_pack, in_off_chip_lane_13);
  auto res_in_update_0_sm0_221 = in_generated_compute_unrolled_1(in_off_chip_lane_13_pack);

  hw_uint<16 > in_off_chip_lane_14_pack;
  set_at<0, 16, 16>(in_off_chip_lane_14_pack, in_off_chip_lane_14);
  auto res_in_update_0_sm0_119 = in_generated_compute_unrolled_1(in_off_chip_lane_14_pack);

  hw_uint<16 > in_off_chip_lane_15_pack;
  set_at<0, 16, 16>(in_off_chip_lane_15_pack, in_off_chip_lane_15);
  auto res_in_update_0_sm0_017 = in_generated_compute_unrolled_1(in_off_chip_lane_15_pack);
  hw_uint<256 > return_value562;
  set_at<0, 256, 16>(return_value562, res_in_update_0_sm0_1547);
  set_at<16, 256, 16>(return_value562, res_in_update_0_sm0_1445);
  set_at<32, 256, 16>(return_value562, res_in_update_0_sm0_1343);
  set_at<48, 256, 16>(return_value562, res_in_update_0_sm0_1241);
  set_at<64, 256, 16>(return_value562, res_in_update_0_sm0_1139);
  set_at<80, 256, 16>(return_value562, res_in_update_0_sm0_1037);
  set_at<96, 256, 16>(return_value562, res_in_update_0_sm0_935);
  set_at<112, 256, 16>(return_value562, res_in_update_0_sm0_833);
  set_at<128, 256, 16>(return_value562, res_in_update_0_sm0_731);
  set_at<144, 256, 16>(return_value562, res_in_update_0_sm0_629);
  set_at<160, 256, 16>(return_value562, res_in_update_0_sm0_527);
  set_at<176, 256, 16>(return_value562, res_in_update_0_sm0_425);
  set_at<192, 256, 16>(return_value562, res_in_update_0_sm0_323);
  set_at<208, 256, 16>(return_value562, res_in_update_0_sm0_221);
  set_at<224, 256, 16>(return_value562, res_in_update_0_sm0_119);
  set_at<240, 256, 16>(return_value562, res_in_update_0_sm0_017);
  return return_value562;

}

hw_uint<256> stg0_1_cu564(hw_uint<16*64>& in) {
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

	
  hw_uint<64 > in_lane_3_pack;
  set_at<0, 64, 16>(in_lane_3_pack, in_lane_0);
  set_at<16, 64, 16>(in_lane_3_pack, in_lane_1);
  set_at<32, 64, 16>(in_lane_3_pack, in_lane_2);
  set_at<48, 64, 16>(in_lane_3_pack, in_lane_3);
  auto res_stg0_update_0_sm1_1579 = stg0_generated_compute_unrolled_1(in_lane_3_pack);

  hw_uint<64 > in_lane_7_pack;
  set_at<0, 64, 16>(in_lane_7_pack, in_lane_4);
  set_at<16, 64, 16>(in_lane_7_pack, in_lane_5);
  set_at<32, 64, 16>(in_lane_7_pack, in_lane_6);
  set_at<48, 64, 16>(in_lane_7_pack, in_lane_7);
  auto res_stg0_update_0_sm1_1477 = stg0_generated_compute_unrolled_1(in_lane_7_pack);

  hw_uint<64 > in_lane_11_pack;
  set_at<0, 64, 16>(in_lane_11_pack, in_lane_8);
  set_at<16, 64, 16>(in_lane_11_pack, in_lane_9);
  set_at<32, 64, 16>(in_lane_11_pack, in_lane_10);
  set_at<48, 64, 16>(in_lane_11_pack, in_lane_11);
  auto res_stg0_update_0_sm1_1375 = stg0_generated_compute_unrolled_1(in_lane_11_pack);

  hw_uint<64 > in_lane_15_pack;
  set_at<0, 64, 16>(in_lane_15_pack, in_lane_12);
  set_at<16, 64, 16>(in_lane_15_pack, in_lane_13);
  set_at<32, 64, 16>(in_lane_15_pack, in_lane_14);
  set_at<48, 64, 16>(in_lane_15_pack, in_lane_15);
  auto res_stg0_update_0_sm1_1273 = stg0_generated_compute_unrolled_1(in_lane_15_pack);

  hw_uint<64 > in_lane_19_pack;
  set_at<0, 64, 16>(in_lane_19_pack, in_lane_16);
  set_at<16, 64, 16>(in_lane_19_pack, in_lane_17);
  set_at<32, 64, 16>(in_lane_19_pack, in_lane_18);
  set_at<48, 64, 16>(in_lane_19_pack, in_lane_19);
  auto res_stg0_update_0_sm1_1171 = stg0_generated_compute_unrolled_1(in_lane_19_pack);

  hw_uint<64 > in_lane_23_pack;
  set_at<0, 64, 16>(in_lane_23_pack, in_lane_20);
  set_at<16, 64, 16>(in_lane_23_pack, in_lane_21);
  set_at<32, 64, 16>(in_lane_23_pack, in_lane_22);
  set_at<48, 64, 16>(in_lane_23_pack, in_lane_23);
  auto res_stg0_update_0_sm1_1069 = stg0_generated_compute_unrolled_1(in_lane_23_pack);

  hw_uint<64 > in_lane_27_pack;
  set_at<0, 64, 16>(in_lane_27_pack, in_lane_24);
  set_at<16, 64, 16>(in_lane_27_pack, in_lane_25);
  set_at<32, 64, 16>(in_lane_27_pack, in_lane_26);
  set_at<48, 64, 16>(in_lane_27_pack, in_lane_27);
  auto res_stg0_update_0_sm1_967 = stg0_generated_compute_unrolled_1(in_lane_27_pack);

  hw_uint<64 > in_lane_31_pack;
  set_at<0, 64, 16>(in_lane_31_pack, in_lane_28);
  set_at<16, 64, 16>(in_lane_31_pack, in_lane_29);
  set_at<32, 64, 16>(in_lane_31_pack, in_lane_30);
  set_at<48, 64, 16>(in_lane_31_pack, in_lane_31);
  auto res_stg0_update_0_sm1_865 = stg0_generated_compute_unrolled_1(in_lane_31_pack);

  hw_uint<64 > in_lane_35_pack;
  set_at<0, 64, 16>(in_lane_35_pack, in_lane_32);
  set_at<16, 64, 16>(in_lane_35_pack, in_lane_33);
  set_at<32, 64, 16>(in_lane_35_pack, in_lane_34);
  set_at<48, 64, 16>(in_lane_35_pack, in_lane_35);
  auto res_stg0_update_0_sm1_763 = stg0_generated_compute_unrolled_1(in_lane_35_pack);

  hw_uint<64 > in_lane_39_pack;
  set_at<0, 64, 16>(in_lane_39_pack, in_lane_36);
  set_at<16, 64, 16>(in_lane_39_pack, in_lane_37);
  set_at<32, 64, 16>(in_lane_39_pack, in_lane_38);
  set_at<48, 64, 16>(in_lane_39_pack, in_lane_39);
  auto res_stg0_update_0_sm1_661 = stg0_generated_compute_unrolled_1(in_lane_39_pack);

  hw_uint<64 > in_lane_43_pack;
  set_at<0, 64, 16>(in_lane_43_pack, in_lane_40);
  set_at<16, 64, 16>(in_lane_43_pack, in_lane_41);
  set_at<32, 64, 16>(in_lane_43_pack, in_lane_42);
  set_at<48, 64, 16>(in_lane_43_pack, in_lane_43);
  auto res_stg0_update_0_sm1_559 = stg0_generated_compute_unrolled_1(in_lane_43_pack);

  hw_uint<64 > in_lane_47_pack;
  set_at<0, 64, 16>(in_lane_47_pack, in_lane_44);
  set_at<16, 64, 16>(in_lane_47_pack, in_lane_45);
  set_at<32, 64, 16>(in_lane_47_pack, in_lane_46);
  set_at<48, 64, 16>(in_lane_47_pack, in_lane_47);
  auto res_stg0_update_0_sm1_457 = stg0_generated_compute_unrolled_1(in_lane_47_pack);

  hw_uint<64 > in_lane_51_pack;
  set_at<0, 64, 16>(in_lane_51_pack, in_lane_48);
  set_at<16, 64, 16>(in_lane_51_pack, in_lane_49);
  set_at<32, 64, 16>(in_lane_51_pack, in_lane_50);
  set_at<48, 64, 16>(in_lane_51_pack, in_lane_51);
  auto res_stg0_update_0_sm1_355 = stg0_generated_compute_unrolled_1(in_lane_51_pack);

  hw_uint<64 > in_lane_55_pack;
  set_at<0, 64, 16>(in_lane_55_pack, in_lane_52);
  set_at<16, 64, 16>(in_lane_55_pack, in_lane_53);
  set_at<32, 64, 16>(in_lane_55_pack, in_lane_54);
  set_at<48, 64, 16>(in_lane_55_pack, in_lane_55);
  auto res_stg0_update_0_sm1_253 = stg0_generated_compute_unrolled_1(in_lane_55_pack);

  hw_uint<64 > in_lane_59_pack;
  set_at<0, 64, 16>(in_lane_59_pack, in_lane_56);
  set_at<16, 64, 16>(in_lane_59_pack, in_lane_57);
  set_at<32, 64, 16>(in_lane_59_pack, in_lane_58);
  set_at<48, 64, 16>(in_lane_59_pack, in_lane_59);
  auto res_stg0_update_0_sm1_151 = stg0_generated_compute_unrolled_1(in_lane_59_pack);

  hw_uint<64 > in_lane_63_pack;
  set_at<0, 64, 16>(in_lane_63_pack, in_lane_60);
  set_at<16, 64, 16>(in_lane_63_pack, in_lane_61);
  set_at<32, 64, 16>(in_lane_63_pack, in_lane_62);
  set_at<48, 64, 16>(in_lane_63_pack, in_lane_63);
  auto res_stg0_update_0_sm1_049 = stg0_generated_compute_unrolled_1(in_lane_63_pack);
  hw_uint<256 > return_value565;
  set_at<0, 256, 16>(return_value565, res_stg0_update_0_sm1_1579);
  set_at<16, 256, 16>(return_value565, res_stg0_update_0_sm1_1477);
  set_at<32, 256, 16>(return_value565, res_stg0_update_0_sm1_1375);
  set_at<48, 256, 16>(return_value565, res_stg0_update_0_sm1_1273);
  set_at<64, 256, 16>(return_value565, res_stg0_update_0_sm1_1171);
  set_at<80, 256, 16>(return_value565, res_stg0_update_0_sm1_1069);
  set_at<96, 256, 16>(return_value565, res_stg0_update_0_sm1_967);
  set_at<112, 256, 16>(return_value565, res_stg0_update_0_sm1_865);
  set_at<128, 256, 16>(return_value565, res_stg0_update_0_sm1_763);
  set_at<144, 256, 16>(return_value565, res_stg0_update_0_sm1_661);
  set_at<160, 256, 16>(return_value565, res_stg0_update_0_sm1_559);
  set_at<176, 256, 16>(return_value565, res_stg0_update_0_sm1_457);
  set_at<192, 256, 16>(return_value565, res_stg0_update_0_sm1_355);
  set_at<208, 256, 16>(return_value565, res_stg0_update_0_sm1_253);
  set_at<224, 256, 16>(return_value565, res_stg0_update_0_sm1_151);
  set_at<240, 256, 16>(return_value565, res_stg0_update_0_sm1_049);
  return return_value565;

}

hw_uint<256> stg1_1_cu567(hw_uint<16*64>& stg0) {
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

	
  hw_uint<64 > stg0_lane_3_pack;
  set_at<0, 64, 16>(stg0_lane_3_pack, stg0_lane_0);
  set_at<16, 64, 16>(stg0_lane_3_pack, stg0_lane_1);
  set_at<32, 64, 16>(stg0_lane_3_pack, stg0_lane_2);
  set_at<48, 64, 16>(stg0_lane_3_pack, stg0_lane_3);
  auto res_stg1_update_0_sm2_15111 = stg1_generated_compute_unrolled_1(stg0_lane_3_pack);

  hw_uint<64 > stg0_lane_7_pack;
  set_at<0, 64, 16>(stg0_lane_7_pack, stg0_lane_4);
  set_at<16, 64, 16>(stg0_lane_7_pack, stg0_lane_5);
  set_at<32, 64, 16>(stg0_lane_7_pack, stg0_lane_6);
  set_at<48, 64, 16>(stg0_lane_7_pack, stg0_lane_7);
  auto res_stg1_update_0_sm2_14109 = stg1_generated_compute_unrolled_1(stg0_lane_7_pack);

  hw_uint<64 > stg0_lane_11_pack;
  set_at<0, 64, 16>(stg0_lane_11_pack, stg0_lane_8);
  set_at<16, 64, 16>(stg0_lane_11_pack, stg0_lane_9);
  set_at<32, 64, 16>(stg0_lane_11_pack, stg0_lane_10);
  set_at<48, 64, 16>(stg0_lane_11_pack, stg0_lane_11);
  auto res_stg1_update_0_sm2_13107 = stg1_generated_compute_unrolled_1(stg0_lane_11_pack);

  hw_uint<64 > stg0_lane_15_pack;
  set_at<0, 64, 16>(stg0_lane_15_pack, stg0_lane_12);
  set_at<16, 64, 16>(stg0_lane_15_pack, stg0_lane_13);
  set_at<32, 64, 16>(stg0_lane_15_pack, stg0_lane_14);
  set_at<48, 64, 16>(stg0_lane_15_pack, stg0_lane_15);
  auto res_stg1_update_0_sm2_12105 = stg1_generated_compute_unrolled_1(stg0_lane_15_pack);

  hw_uint<64 > stg0_lane_19_pack;
  set_at<0, 64, 16>(stg0_lane_19_pack, stg0_lane_16);
  set_at<16, 64, 16>(stg0_lane_19_pack, stg0_lane_17);
  set_at<32, 64, 16>(stg0_lane_19_pack, stg0_lane_18);
  set_at<48, 64, 16>(stg0_lane_19_pack, stg0_lane_19);
  auto res_stg1_update_0_sm2_11103 = stg1_generated_compute_unrolled_1(stg0_lane_19_pack);

  hw_uint<64 > stg0_lane_23_pack;
  set_at<0, 64, 16>(stg0_lane_23_pack, stg0_lane_20);
  set_at<16, 64, 16>(stg0_lane_23_pack, stg0_lane_21);
  set_at<32, 64, 16>(stg0_lane_23_pack, stg0_lane_22);
  set_at<48, 64, 16>(stg0_lane_23_pack, stg0_lane_23);
  auto res_stg1_update_0_sm2_10101 = stg1_generated_compute_unrolled_1(stg0_lane_23_pack);

  hw_uint<64 > stg0_lane_27_pack;
  set_at<0, 64, 16>(stg0_lane_27_pack, stg0_lane_24);
  set_at<16, 64, 16>(stg0_lane_27_pack, stg0_lane_25);
  set_at<32, 64, 16>(stg0_lane_27_pack, stg0_lane_26);
  set_at<48, 64, 16>(stg0_lane_27_pack, stg0_lane_27);
  auto res_stg1_update_0_sm2_999 = stg1_generated_compute_unrolled_1(stg0_lane_27_pack);

  hw_uint<64 > stg0_lane_31_pack;
  set_at<0, 64, 16>(stg0_lane_31_pack, stg0_lane_28);
  set_at<16, 64, 16>(stg0_lane_31_pack, stg0_lane_29);
  set_at<32, 64, 16>(stg0_lane_31_pack, stg0_lane_30);
  set_at<48, 64, 16>(stg0_lane_31_pack, stg0_lane_31);
  auto res_stg1_update_0_sm2_897 = stg1_generated_compute_unrolled_1(stg0_lane_31_pack);

  hw_uint<64 > stg0_lane_35_pack;
  set_at<0, 64, 16>(stg0_lane_35_pack, stg0_lane_32);
  set_at<16, 64, 16>(stg0_lane_35_pack, stg0_lane_33);
  set_at<32, 64, 16>(stg0_lane_35_pack, stg0_lane_34);
  set_at<48, 64, 16>(stg0_lane_35_pack, stg0_lane_35);
  auto res_stg1_update_0_sm2_795 = stg1_generated_compute_unrolled_1(stg0_lane_35_pack);

  hw_uint<64 > stg0_lane_39_pack;
  set_at<0, 64, 16>(stg0_lane_39_pack, stg0_lane_36);
  set_at<16, 64, 16>(stg0_lane_39_pack, stg0_lane_37);
  set_at<32, 64, 16>(stg0_lane_39_pack, stg0_lane_38);
  set_at<48, 64, 16>(stg0_lane_39_pack, stg0_lane_39);
  auto res_stg1_update_0_sm2_693 = stg1_generated_compute_unrolled_1(stg0_lane_39_pack);

  hw_uint<64 > stg0_lane_43_pack;
  set_at<0, 64, 16>(stg0_lane_43_pack, stg0_lane_40);
  set_at<16, 64, 16>(stg0_lane_43_pack, stg0_lane_41);
  set_at<32, 64, 16>(stg0_lane_43_pack, stg0_lane_42);
  set_at<48, 64, 16>(stg0_lane_43_pack, stg0_lane_43);
  auto res_stg1_update_0_sm2_591 = stg1_generated_compute_unrolled_1(stg0_lane_43_pack);

  hw_uint<64 > stg0_lane_47_pack;
  set_at<0, 64, 16>(stg0_lane_47_pack, stg0_lane_44);
  set_at<16, 64, 16>(stg0_lane_47_pack, stg0_lane_45);
  set_at<32, 64, 16>(stg0_lane_47_pack, stg0_lane_46);
  set_at<48, 64, 16>(stg0_lane_47_pack, stg0_lane_47);
  auto res_stg1_update_0_sm2_489 = stg1_generated_compute_unrolled_1(stg0_lane_47_pack);

  hw_uint<64 > stg0_lane_51_pack;
  set_at<0, 64, 16>(stg0_lane_51_pack, stg0_lane_48);
  set_at<16, 64, 16>(stg0_lane_51_pack, stg0_lane_49);
  set_at<32, 64, 16>(stg0_lane_51_pack, stg0_lane_50);
  set_at<48, 64, 16>(stg0_lane_51_pack, stg0_lane_51);
  auto res_stg1_update_0_sm2_387 = stg1_generated_compute_unrolled_1(stg0_lane_51_pack);

  hw_uint<64 > stg0_lane_55_pack;
  set_at<0, 64, 16>(stg0_lane_55_pack, stg0_lane_52);
  set_at<16, 64, 16>(stg0_lane_55_pack, stg0_lane_53);
  set_at<32, 64, 16>(stg0_lane_55_pack, stg0_lane_54);
  set_at<48, 64, 16>(stg0_lane_55_pack, stg0_lane_55);
  auto res_stg1_update_0_sm2_285 = stg1_generated_compute_unrolled_1(stg0_lane_55_pack);

  hw_uint<64 > stg0_lane_59_pack;
  set_at<0, 64, 16>(stg0_lane_59_pack, stg0_lane_56);
  set_at<16, 64, 16>(stg0_lane_59_pack, stg0_lane_57);
  set_at<32, 64, 16>(stg0_lane_59_pack, stg0_lane_58);
  set_at<48, 64, 16>(stg0_lane_59_pack, stg0_lane_59);
  auto res_stg1_update_0_sm2_183 = stg1_generated_compute_unrolled_1(stg0_lane_59_pack);

  hw_uint<64 > stg0_lane_63_pack;
  set_at<0, 64, 16>(stg0_lane_63_pack, stg0_lane_60);
  set_at<16, 64, 16>(stg0_lane_63_pack, stg0_lane_61);
  set_at<32, 64, 16>(stg0_lane_63_pack, stg0_lane_62);
  set_at<48, 64, 16>(stg0_lane_63_pack, stg0_lane_63);
  auto res_stg1_update_0_sm2_081 = stg1_generated_compute_unrolled_1(stg0_lane_63_pack);
  hw_uint<256 > return_value568;
  set_at<0, 256, 16>(return_value568, res_stg1_update_0_sm2_15111);
  set_at<16, 256, 16>(return_value568, res_stg1_update_0_sm2_14109);
  set_at<32, 256, 16>(return_value568, res_stg1_update_0_sm2_13107);
  set_at<48, 256, 16>(return_value568, res_stg1_update_0_sm2_12105);
  set_at<64, 256, 16>(return_value568, res_stg1_update_0_sm2_11103);
  set_at<80, 256, 16>(return_value568, res_stg1_update_0_sm2_10101);
  set_at<96, 256, 16>(return_value568, res_stg1_update_0_sm2_999);
  set_at<112, 256, 16>(return_value568, res_stg1_update_0_sm2_897);
  set_at<128, 256, 16>(return_value568, res_stg1_update_0_sm2_795);
  set_at<144, 256, 16>(return_value568, res_stg1_update_0_sm2_693);
  set_at<160, 256, 16>(return_value568, res_stg1_update_0_sm2_591);
  set_at<176, 256, 16>(return_value568, res_stg1_update_0_sm2_489);
  set_at<192, 256, 16>(return_value568, res_stg1_update_0_sm2_387);
  set_at<208, 256, 16>(return_value568, res_stg1_update_0_sm2_285);
  set_at<224, 256, 16>(return_value568, res_stg1_update_0_sm2_183);
  set_at<240, 256, 16>(return_value568, res_stg1_update_0_sm2_081);
  return return_value568;

}

hw_uint<256> stg2_1_cu570(hw_uint<16*64>& stg1) {
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

	
  hw_uint<64 > stg1_lane_3_pack;
  set_at<0, 64, 16>(stg1_lane_3_pack, stg1_lane_0);
  set_at<16, 64, 16>(stg1_lane_3_pack, stg1_lane_1);
  set_at<32, 64, 16>(stg1_lane_3_pack, stg1_lane_2);
  set_at<48, 64, 16>(stg1_lane_3_pack, stg1_lane_3);
  auto res_stg2_update_0_sm3_15143 = stg2_generated_compute_unrolled_1(stg1_lane_3_pack);

  hw_uint<64 > stg1_lane_7_pack;
  set_at<0, 64, 16>(stg1_lane_7_pack, stg1_lane_4);
  set_at<16, 64, 16>(stg1_lane_7_pack, stg1_lane_5);
  set_at<32, 64, 16>(stg1_lane_7_pack, stg1_lane_6);
  set_at<48, 64, 16>(stg1_lane_7_pack, stg1_lane_7);
  auto res_stg2_update_0_sm3_14141 = stg2_generated_compute_unrolled_1(stg1_lane_7_pack);

  hw_uint<64 > stg1_lane_11_pack;
  set_at<0, 64, 16>(stg1_lane_11_pack, stg1_lane_8);
  set_at<16, 64, 16>(stg1_lane_11_pack, stg1_lane_9);
  set_at<32, 64, 16>(stg1_lane_11_pack, stg1_lane_10);
  set_at<48, 64, 16>(stg1_lane_11_pack, stg1_lane_11);
  auto res_stg2_update_0_sm3_13139 = stg2_generated_compute_unrolled_1(stg1_lane_11_pack);

  hw_uint<64 > stg1_lane_15_pack;
  set_at<0, 64, 16>(stg1_lane_15_pack, stg1_lane_12);
  set_at<16, 64, 16>(stg1_lane_15_pack, stg1_lane_13);
  set_at<32, 64, 16>(stg1_lane_15_pack, stg1_lane_14);
  set_at<48, 64, 16>(stg1_lane_15_pack, stg1_lane_15);
  auto res_stg2_update_0_sm3_12137 = stg2_generated_compute_unrolled_1(stg1_lane_15_pack);

  hw_uint<64 > stg1_lane_19_pack;
  set_at<0, 64, 16>(stg1_lane_19_pack, stg1_lane_16);
  set_at<16, 64, 16>(stg1_lane_19_pack, stg1_lane_17);
  set_at<32, 64, 16>(stg1_lane_19_pack, stg1_lane_18);
  set_at<48, 64, 16>(stg1_lane_19_pack, stg1_lane_19);
  auto res_stg2_update_0_sm3_11135 = stg2_generated_compute_unrolled_1(stg1_lane_19_pack);

  hw_uint<64 > stg1_lane_23_pack;
  set_at<0, 64, 16>(stg1_lane_23_pack, stg1_lane_20);
  set_at<16, 64, 16>(stg1_lane_23_pack, stg1_lane_21);
  set_at<32, 64, 16>(stg1_lane_23_pack, stg1_lane_22);
  set_at<48, 64, 16>(stg1_lane_23_pack, stg1_lane_23);
  auto res_stg2_update_0_sm3_10133 = stg2_generated_compute_unrolled_1(stg1_lane_23_pack);

  hw_uint<64 > stg1_lane_27_pack;
  set_at<0, 64, 16>(stg1_lane_27_pack, stg1_lane_24);
  set_at<16, 64, 16>(stg1_lane_27_pack, stg1_lane_25);
  set_at<32, 64, 16>(stg1_lane_27_pack, stg1_lane_26);
  set_at<48, 64, 16>(stg1_lane_27_pack, stg1_lane_27);
  auto res_stg2_update_0_sm3_9131 = stg2_generated_compute_unrolled_1(stg1_lane_27_pack);

  hw_uint<64 > stg1_lane_31_pack;
  set_at<0, 64, 16>(stg1_lane_31_pack, stg1_lane_28);
  set_at<16, 64, 16>(stg1_lane_31_pack, stg1_lane_29);
  set_at<32, 64, 16>(stg1_lane_31_pack, stg1_lane_30);
  set_at<48, 64, 16>(stg1_lane_31_pack, stg1_lane_31);
  auto res_stg2_update_0_sm3_8129 = stg2_generated_compute_unrolled_1(stg1_lane_31_pack);

  hw_uint<64 > stg1_lane_35_pack;
  set_at<0, 64, 16>(stg1_lane_35_pack, stg1_lane_32);
  set_at<16, 64, 16>(stg1_lane_35_pack, stg1_lane_33);
  set_at<32, 64, 16>(stg1_lane_35_pack, stg1_lane_34);
  set_at<48, 64, 16>(stg1_lane_35_pack, stg1_lane_35);
  auto res_stg2_update_0_sm3_7127 = stg2_generated_compute_unrolled_1(stg1_lane_35_pack);

  hw_uint<64 > stg1_lane_39_pack;
  set_at<0, 64, 16>(stg1_lane_39_pack, stg1_lane_36);
  set_at<16, 64, 16>(stg1_lane_39_pack, stg1_lane_37);
  set_at<32, 64, 16>(stg1_lane_39_pack, stg1_lane_38);
  set_at<48, 64, 16>(stg1_lane_39_pack, stg1_lane_39);
  auto res_stg2_update_0_sm3_6125 = stg2_generated_compute_unrolled_1(stg1_lane_39_pack);

  hw_uint<64 > stg1_lane_43_pack;
  set_at<0, 64, 16>(stg1_lane_43_pack, stg1_lane_40);
  set_at<16, 64, 16>(stg1_lane_43_pack, stg1_lane_41);
  set_at<32, 64, 16>(stg1_lane_43_pack, stg1_lane_42);
  set_at<48, 64, 16>(stg1_lane_43_pack, stg1_lane_43);
  auto res_stg2_update_0_sm3_5123 = stg2_generated_compute_unrolled_1(stg1_lane_43_pack);

  hw_uint<64 > stg1_lane_47_pack;
  set_at<0, 64, 16>(stg1_lane_47_pack, stg1_lane_44);
  set_at<16, 64, 16>(stg1_lane_47_pack, stg1_lane_45);
  set_at<32, 64, 16>(stg1_lane_47_pack, stg1_lane_46);
  set_at<48, 64, 16>(stg1_lane_47_pack, stg1_lane_47);
  auto res_stg2_update_0_sm3_4121 = stg2_generated_compute_unrolled_1(stg1_lane_47_pack);

  hw_uint<64 > stg1_lane_51_pack;
  set_at<0, 64, 16>(stg1_lane_51_pack, stg1_lane_48);
  set_at<16, 64, 16>(stg1_lane_51_pack, stg1_lane_49);
  set_at<32, 64, 16>(stg1_lane_51_pack, stg1_lane_50);
  set_at<48, 64, 16>(stg1_lane_51_pack, stg1_lane_51);
  auto res_stg2_update_0_sm3_3119 = stg2_generated_compute_unrolled_1(stg1_lane_51_pack);

  hw_uint<64 > stg1_lane_55_pack;
  set_at<0, 64, 16>(stg1_lane_55_pack, stg1_lane_52);
  set_at<16, 64, 16>(stg1_lane_55_pack, stg1_lane_53);
  set_at<32, 64, 16>(stg1_lane_55_pack, stg1_lane_54);
  set_at<48, 64, 16>(stg1_lane_55_pack, stg1_lane_55);
  auto res_stg2_update_0_sm3_2117 = stg2_generated_compute_unrolled_1(stg1_lane_55_pack);

  hw_uint<64 > stg1_lane_59_pack;
  set_at<0, 64, 16>(stg1_lane_59_pack, stg1_lane_56);
  set_at<16, 64, 16>(stg1_lane_59_pack, stg1_lane_57);
  set_at<32, 64, 16>(stg1_lane_59_pack, stg1_lane_58);
  set_at<48, 64, 16>(stg1_lane_59_pack, stg1_lane_59);
  auto res_stg2_update_0_sm3_1115 = stg2_generated_compute_unrolled_1(stg1_lane_59_pack);

  hw_uint<64 > stg1_lane_63_pack;
  set_at<0, 64, 16>(stg1_lane_63_pack, stg1_lane_60);
  set_at<16, 64, 16>(stg1_lane_63_pack, stg1_lane_61);
  set_at<32, 64, 16>(stg1_lane_63_pack, stg1_lane_62);
  set_at<48, 64, 16>(stg1_lane_63_pack, stg1_lane_63);
  auto res_stg2_update_0_sm3_0113 = stg2_generated_compute_unrolled_1(stg1_lane_63_pack);
  hw_uint<256 > return_value571;
  set_at<0, 256, 16>(return_value571, res_stg2_update_0_sm3_15143);
  set_at<16, 256, 16>(return_value571, res_stg2_update_0_sm3_14141);
  set_at<32, 256, 16>(return_value571, res_stg2_update_0_sm3_13139);
  set_at<48, 256, 16>(return_value571, res_stg2_update_0_sm3_12137);
  set_at<64, 256, 16>(return_value571, res_stg2_update_0_sm3_11135);
  set_at<80, 256, 16>(return_value571, res_stg2_update_0_sm3_10133);
  set_at<96, 256, 16>(return_value571, res_stg2_update_0_sm3_9131);
  set_at<112, 256, 16>(return_value571, res_stg2_update_0_sm3_8129);
  set_at<128, 256, 16>(return_value571, res_stg2_update_0_sm3_7127);
  set_at<144, 256, 16>(return_value571, res_stg2_update_0_sm3_6125);
  set_at<160, 256, 16>(return_value571, res_stg2_update_0_sm3_5123);
  set_at<176, 256, 16>(return_value571, res_stg2_update_0_sm3_4121);
  set_at<192, 256, 16>(return_value571, res_stg2_update_0_sm3_3119);
  set_at<208, 256, 16>(return_value571, res_stg2_update_0_sm3_2117);
  set_at<224, 256, 16>(return_value571, res_stg2_update_0_sm3_1115);
  set_at<240, 256, 16>(return_value571, res_stg2_update_0_sm3_0113);
  return return_value571;

}

hw_uint<256> stg3_1_cu573(hw_uint<16*64>& stg2) {
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

	
  hw_uint<64 > stg2_lane_3_pack;
  set_at<0, 64, 16>(stg2_lane_3_pack, stg2_lane_0);
  set_at<16, 64, 16>(stg2_lane_3_pack, stg2_lane_1);
  set_at<32, 64, 16>(stg2_lane_3_pack, stg2_lane_2);
  set_at<48, 64, 16>(stg2_lane_3_pack, stg2_lane_3);
  auto res_stg3_update_0_sm4_15175 = stg3_generated_compute_unrolled_1(stg2_lane_3_pack);

  hw_uint<64 > stg2_lane_7_pack;
  set_at<0, 64, 16>(stg2_lane_7_pack, stg2_lane_4);
  set_at<16, 64, 16>(stg2_lane_7_pack, stg2_lane_5);
  set_at<32, 64, 16>(stg2_lane_7_pack, stg2_lane_6);
  set_at<48, 64, 16>(stg2_lane_7_pack, stg2_lane_7);
  auto res_stg3_update_0_sm4_14173 = stg3_generated_compute_unrolled_1(stg2_lane_7_pack);

  hw_uint<64 > stg2_lane_11_pack;
  set_at<0, 64, 16>(stg2_lane_11_pack, stg2_lane_8);
  set_at<16, 64, 16>(stg2_lane_11_pack, stg2_lane_9);
  set_at<32, 64, 16>(stg2_lane_11_pack, stg2_lane_10);
  set_at<48, 64, 16>(stg2_lane_11_pack, stg2_lane_11);
  auto res_stg3_update_0_sm4_13171 = stg3_generated_compute_unrolled_1(stg2_lane_11_pack);

  hw_uint<64 > stg2_lane_15_pack;
  set_at<0, 64, 16>(stg2_lane_15_pack, stg2_lane_12);
  set_at<16, 64, 16>(stg2_lane_15_pack, stg2_lane_13);
  set_at<32, 64, 16>(stg2_lane_15_pack, stg2_lane_14);
  set_at<48, 64, 16>(stg2_lane_15_pack, stg2_lane_15);
  auto res_stg3_update_0_sm4_12169 = stg3_generated_compute_unrolled_1(stg2_lane_15_pack);

  hw_uint<64 > stg2_lane_19_pack;
  set_at<0, 64, 16>(stg2_lane_19_pack, stg2_lane_16);
  set_at<16, 64, 16>(stg2_lane_19_pack, stg2_lane_17);
  set_at<32, 64, 16>(stg2_lane_19_pack, stg2_lane_18);
  set_at<48, 64, 16>(stg2_lane_19_pack, stg2_lane_19);
  auto res_stg3_update_0_sm4_11167 = stg3_generated_compute_unrolled_1(stg2_lane_19_pack);

  hw_uint<64 > stg2_lane_23_pack;
  set_at<0, 64, 16>(stg2_lane_23_pack, stg2_lane_20);
  set_at<16, 64, 16>(stg2_lane_23_pack, stg2_lane_21);
  set_at<32, 64, 16>(stg2_lane_23_pack, stg2_lane_22);
  set_at<48, 64, 16>(stg2_lane_23_pack, stg2_lane_23);
  auto res_stg3_update_0_sm4_10165 = stg3_generated_compute_unrolled_1(stg2_lane_23_pack);

  hw_uint<64 > stg2_lane_27_pack;
  set_at<0, 64, 16>(stg2_lane_27_pack, stg2_lane_24);
  set_at<16, 64, 16>(stg2_lane_27_pack, stg2_lane_25);
  set_at<32, 64, 16>(stg2_lane_27_pack, stg2_lane_26);
  set_at<48, 64, 16>(stg2_lane_27_pack, stg2_lane_27);
  auto res_stg3_update_0_sm4_9163 = stg3_generated_compute_unrolled_1(stg2_lane_27_pack);

  hw_uint<64 > stg2_lane_31_pack;
  set_at<0, 64, 16>(stg2_lane_31_pack, stg2_lane_28);
  set_at<16, 64, 16>(stg2_lane_31_pack, stg2_lane_29);
  set_at<32, 64, 16>(stg2_lane_31_pack, stg2_lane_30);
  set_at<48, 64, 16>(stg2_lane_31_pack, stg2_lane_31);
  auto res_stg3_update_0_sm4_8161 = stg3_generated_compute_unrolled_1(stg2_lane_31_pack);

  hw_uint<64 > stg2_lane_35_pack;
  set_at<0, 64, 16>(stg2_lane_35_pack, stg2_lane_32);
  set_at<16, 64, 16>(stg2_lane_35_pack, stg2_lane_33);
  set_at<32, 64, 16>(stg2_lane_35_pack, stg2_lane_34);
  set_at<48, 64, 16>(stg2_lane_35_pack, stg2_lane_35);
  auto res_stg3_update_0_sm4_7159 = stg3_generated_compute_unrolled_1(stg2_lane_35_pack);

  hw_uint<64 > stg2_lane_39_pack;
  set_at<0, 64, 16>(stg2_lane_39_pack, stg2_lane_36);
  set_at<16, 64, 16>(stg2_lane_39_pack, stg2_lane_37);
  set_at<32, 64, 16>(stg2_lane_39_pack, stg2_lane_38);
  set_at<48, 64, 16>(stg2_lane_39_pack, stg2_lane_39);
  auto res_stg3_update_0_sm4_6157 = stg3_generated_compute_unrolled_1(stg2_lane_39_pack);

  hw_uint<64 > stg2_lane_43_pack;
  set_at<0, 64, 16>(stg2_lane_43_pack, stg2_lane_40);
  set_at<16, 64, 16>(stg2_lane_43_pack, stg2_lane_41);
  set_at<32, 64, 16>(stg2_lane_43_pack, stg2_lane_42);
  set_at<48, 64, 16>(stg2_lane_43_pack, stg2_lane_43);
  auto res_stg3_update_0_sm4_5155 = stg3_generated_compute_unrolled_1(stg2_lane_43_pack);

  hw_uint<64 > stg2_lane_47_pack;
  set_at<0, 64, 16>(stg2_lane_47_pack, stg2_lane_44);
  set_at<16, 64, 16>(stg2_lane_47_pack, stg2_lane_45);
  set_at<32, 64, 16>(stg2_lane_47_pack, stg2_lane_46);
  set_at<48, 64, 16>(stg2_lane_47_pack, stg2_lane_47);
  auto res_stg3_update_0_sm4_4153 = stg3_generated_compute_unrolled_1(stg2_lane_47_pack);

  hw_uint<64 > stg2_lane_51_pack;
  set_at<0, 64, 16>(stg2_lane_51_pack, stg2_lane_48);
  set_at<16, 64, 16>(stg2_lane_51_pack, stg2_lane_49);
  set_at<32, 64, 16>(stg2_lane_51_pack, stg2_lane_50);
  set_at<48, 64, 16>(stg2_lane_51_pack, stg2_lane_51);
  auto res_stg3_update_0_sm4_3151 = stg3_generated_compute_unrolled_1(stg2_lane_51_pack);

  hw_uint<64 > stg2_lane_55_pack;
  set_at<0, 64, 16>(stg2_lane_55_pack, stg2_lane_52);
  set_at<16, 64, 16>(stg2_lane_55_pack, stg2_lane_53);
  set_at<32, 64, 16>(stg2_lane_55_pack, stg2_lane_54);
  set_at<48, 64, 16>(stg2_lane_55_pack, stg2_lane_55);
  auto res_stg3_update_0_sm4_2149 = stg3_generated_compute_unrolled_1(stg2_lane_55_pack);

  hw_uint<64 > stg2_lane_59_pack;
  set_at<0, 64, 16>(stg2_lane_59_pack, stg2_lane_56);
  set_at<16, 64, 16>(stg2_lane_59_pack, stg2_lane_57);
  set_at<32, 64, 16>(stg2_lane_59_pack, stg2_lane_58);
  set_at<48, 64, 16>(stg2_lane_59_pack, stg2_lane_59);
  auto res_stg3_update_0_sm4_1147 = stg3_generated_compute_unrolled_1(stg2_lane_59_pack);

  hw_uint<64 > stg2_lane_63_pack;
  set_at<0, 64, 16>(stg2_lane_63_pack, stg2_lane_60);
  set_at<16, 64, 16>(stg2_lane_63_pack, stg2_lane_61);
  set_at<32, 64, 16>(stg2_lane_63_pack, stg2_lane_62);
  set_at<48, 64, 16>(stg2_lane_63_pack, stg2_lane_63);
  auto res_stg3_update_0_sm4_0145 = stg3_generated_compute_unrolled_1(stg2_lane_63_pack);
  hw_uint<256 > return_value574;
  set_at<0, 256, 16>(return_value574, res_stg3_update_0_sm4_15175);
  set_at<16, 256, 16>(return_value574, res_stg3_update_0_sm4_14173);
  set_at<32, 256, 16>(return_value574, res_stg3_update_0_sm4_13171);
  set_at<48, 256, 16>(return_value574, res_stg3_update_0_sm4_12169);
  set_at<64, 256, 16>(return_value574, res_stg3_update_0_sm4_11167);
  set_at<80, 256, 16>(return_value574, res_stg3_update_0_sm4_10165);
  set_at<96, 256, 16>(return_value574, res_stg3_update_0_sm4_9163);
  set_at<112, 256, 16>(return_value574, res_stg3_update_0_sm4_8161);
  set_at<128, 256, 16>(return_value574, res_stg3_update_0_sm4_7159);
  set_at<144, 256, 16>(return_value574, res_stg3_update_0_sm4_6157);
  set_at<160, 256, 16>(return_value574, res_stg3_update_0_sm4_5155);
  set_at<176, 256, 16>(return_value574, res_stg3_update_0_sm4_4153);
  set_at<192, 256, 16>(return_value574, res_stg3_update_0_sm4_3151);
  set_at<208, 256, 16>(return_value574, res_stg3_update_0_sm4_2149);
  set_at<224, 256, 16>(return_value574, res_stg3_update_0_sm4_1147);
  set_at<240, 256, 16>(return_value574, res_stg3_update_0_sm4_0145);
  return return_value574;

}

hw_uint<256> stg4_1_cu576(hw_uint<16*64>& stg3) {
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

	
  hw_uint<64 > stg3_lane_3_pack;
  set_at<0, 64, 16>(stg3_lane_3_pack, stg3_lane_0);
  set_at<16, 64, 16>(stg3_lane_3_pack, stg3_lane_1);
  set_at<32, 64, 16>(stg3_lane_3_pack, stg3_lane_2);
  set_at<48, 64, 16>(stg3_lane_3_pack, stg3_lane_3);
  auto res_stg4_update_0_sm5_15207 = stg4_generated_compute_unrolled_1(stg3_lane_3_pack);

  hw_uint<64 > stg3_lane_7_pack;
  set_at<0, 64, 16>(stg3_lane_7_pack, stg3_lane_4);
  set_at<16, 64, 16>(stg3_lane_7_pack, stg3_lane_5);
  set_at<32, 64, 16>(stg3_lane_7_pack, stg3_lane_6);
  set_at<48, 64, 16>(stg3_lane_7_pack, stg3_lane_7);
  auto res_stg4_update_0_sm5_14205 = stg4_generated_compute_unrolled_1(stg3_lane_7_pack);

  hw_uint<64 > stg3_lane_11_pack;
  set_at<0, 64, 16>(stg3_lane_11_pack, stg3_lane_8);
  set_at<16, 64, 16>(stg3_lane_11_pack, stg3_lane_9);
  set_at<32, 64, 16>(stg3_lane_11_pack, stg3_lane_10);
  set_at<48, 64, 16>(stg3_lane_11_pack, stg3_lane_11);
  auto res_stg4_update_0_sm5_13203 = stg4_generated_compute_unrolled_1(stg3_lane_11_pack);

  hw_uint<64 > stg3_lane_15_pack;
  set_at<0, 64, 16>(stg3_lane_15_pack, stg3_lane_12);
  set_at<16, 64, 16>(stg3_lane_15_pack, stg3_lane_13);
  set_at<32, 64, 16>(stg3_lane_15_pack, stg3_lane_14);
  set_at<48, 64, 16>(stg3_lane_15_pack, stg3_lane_15);
  auto res_stg4_update_0_sm5_12201 = stg4_generated_compute_unrolled_1(stg3_lane_15_pack);

  hw_uint<64 > stg3_lane_19_pack;
  set_at<0, 64, 16>(stg3_lane_19_pack, stg3_lane_16);
  set_at<16, 64, 16>(stg3_lane_19_pack, stg3_lane_17);
  set_at<32, 64, 16>(stg3_lane_19_pack, stg3_lane_18);
  set_at<48, 64, 16>(stg3_lane_19_pack, stg3_lane_19);
  auto res_stg4_update_0_sm5_11199 = stg4_generated_compute_unrolled_1(stg3_lane_19_pack);

  hw_uint<64 > stg3_lane_23_pack;
  set_at<0, 64, 16>(stg3_lane_23_pack, stg3_lane_20);
  set_at<16, 64, 16>(stg3_lane_23_pack, stg3_lane_21);
  set_at<32, 64, 16>(stg3_lane_23_pack, stg3_lane_22);
  set_at<48, 64, 16>(stg3_lane_23_pack, stg3_lane_23);
  auto res_stg4_update_0_sm5_10197 = stg4_generated_compute_unrolled_1(stg3_lane_23_pack);

  hw_uint<64 > stg3_lane_27_pack;
  set_at<0, 64, 16>(stg3_lane_27_pack, stg3_lane_24);
  set_at<16, 64, 16>(stg3_lane_27_pack, stg3_lane_25);
  set_at<32, 64, 16>(stg3_lane_27_pack, stg3_lane_26);
  set_at<48, 64, 16>(stg3_lane_27_pack, stg3_lane_27);
  auto res_stg4_update_0_sm5_9195 = stg4_generated_compute_unrolled_1(stg3_lane_27_pack);

  hw_uint<64 > stg3_lane_31_pack;
  set_at<0, 64, 16>(stg3_lane_31_pack, stg3_lane_28);
  set_at<16, 64, 16>(stg3_lane_31_pack, stg3_lane_29);
  set_at<32, 64, 16>(stg3_lane_31_pack, stg3_lane_30);
  set_at<48, 64, 16>(stg3_lane_31_pack, stg3_lane_31);
  auto res_stg4_update_0_sm5_8193 = stg4_generated_compute_unrolled_1(stg3_lane_31_pack);

  hw_uint<64 > stg3_lane_35_pack;
  set_at<0, 64, 16>(stg3_lane_35_pack, stg3_lane_32);
  set_at<16, 64, 16>(stg3_lane_35_pack, stg3_lane_33);
  set_at<32, 64, 16>(stg3_lane_35_pack, stg3_lane_34);
  set_at<48, 64, 16>(stg3_lane_35_pack, stg3_lane_35);
  auto res_stg4_update_0_sm5_7191 = stg4_generated_compute_unrolled_1(stg3_lane_35_pack);

  hw_uint<64 > stg3_lane_39_pack;
  set_at<0, 64, 16>(stg3_lane_39_pack, stg3_lane_36);
  set_at<16, 64, 16>(stg3_lane_39_pack, stg3_lane_37);
  set_at<32, 64, 16>(stg3_lane_39_pack, stg3_lane_38);
  set_at<48, 64, 16>(stg3_lane_39_pack, stg3_lane_39);
  auto res_stg4_update_0_sm5_6189 = stg4_generated_compute_unrolled_1(stg3_lane_39_pack);

  hw_uint<64 > stg3_lane_43_pack;
  set_at<0, 64, 16>(stg3_lane_43_pack, stg3_lane_40);
  set_at<16, 64, 16>(stg3_lane_43_pack, stg3_lane_41);
  set_at<32, 64, 16>(stg3_lane_43_pack, stg3_lane_42);
  set_at<48, 64, 16>(stg3_lane_43_pack, stg3_lane_43);
  auto res_stg4_update_0_sm5_5187 = stg4_generated_compute_unrolled_1(stg3_lane_43_pack);

  hw_uint<64 > stg3_lane_47_pack;
  set_at<0, 64, 16>(stg3_lane_47_pack, stg3_lane_44);
  set_at<16, 64, 16>(stg3_lane_47_pack, stg3_lane_45);
  set_at<32, 64, 16>(stg3_lane_47_pack, stg3_lane_46);
  set_at<48, 64, 16>(stg3_lane_47_pack, stg3_lane_47);
  auto res_stg4_update_0_sm5_4185 = stg4_generated_compute_unrolled_1(stg3_lane_47_pack);

  hw_uint<64 > stg3_lane_51_pack;
  set_at<0, 64, 16>(stg3_lane_51_pack, stg3_lane_48);
  set_at<16, 64, 16>(stg3_lane_51_pack, stg3_lane_49);
  set_at<32, 64, 16>(stg3_lane_51_pack, stg3_lane_50);
  set_at<48, 64, 16>(stg3_lane_51_pack, stg3_lane_51);
  auto res_stg4_update_0_sm5_3183 = stg4_generated_compute_unrolled_1(stg3_lane_51_pack);

  hw_uint<64 > stg3_lane_55_pack;
  set_at<0, 64, 16>(stg3_lane_55_pack, stg3_lane_52);
  set_at<16, 64, 16>(stg3_lane_55_pack, stg3_lane_53);
  set_at<32, 64, 16>(stg3_lane_55_pack, stg3_lane_54);
  set_at<48, 64, 16>(stg3_lane_55_pack, stg3_lane_55);
  auto res_stg4_update_0_sm5_2181 = stg4_generated_compute_unrolled_1(stg3_lane_55_pack);

  hw_uint<64 > stg3_lane_59_pack;
  set_at<0, 64, 16>(stg3_lane_59_pack, stg3_lane_56);
  set_at<16, 64, 16>(stg3_lane_59_pack, stg3_lane_57);
  set_at<32, 64, 16>(stg3_lane_59_pack, stg3_lane_58);
  set_at<48, 64, 16>(stg3_lane_59_pack, stg3_lane_59);
  auto res_stg4_update_0_sm5_1179 = stg4_generated_compute_unrolled_1(stg3_lane_59_pack);

  hw_uint<64 > stg3_lane_63_pack;
  set_at<0, 64, 16>(stg3_lane_63_pack, stg3_lane_60);
  set_at<16, 64, 16>(stg3_lane_63_pack, stg3_lane_61);
  set_at<32, 64, 16>(stg3_lane_63_pack, stg3_lane_62);
  set_at<48, 64, 16>(stg3_lane_63_pack, stg3_lane_63);
  auto res_stg4_update_0_sm5_0177 = stg4_generated_compute_unrolled_1(stg3_lane_63_pack);
  hw_uint<256 > return_value577;
  set_at<0, 256, 16>(return_value577, res_stg4_update_0_sm5_15207);
  set_at<16, 256, 16>(return_value577, res_stg4_update_0_sm5_14205);
  set_at<32, 256, 16>(return_value577, res_stg4_update_0_sm5_13203);
  set_at<48, 256, 16>(return_value577, res_stg4_update_0_sm5_12201);
  set_at<64, 256, 16>(return_value577, res_stg4_update_0_sm5_11199);
  set_at<80, 256, 16>(return_value577, res_stg4_update_0_sm5_10197);
  set_at<96, 256, 16>(return_value577, res_stg4_update_0_sm5_9195);
  set_at<112, 256, 16>(return_value577, res_stg4_update_0_sm5_8193);
  set_at<128, 256, 16>(return_value577, res_stg4_update_0_sm5_7191);
  set_at<144, 256, 16>(return_value577, res_stg4_update_0_sm5_6189);
  set_at<160, 256, 16>(return_value577, res_stg4_update_0_sm5_5187);
  set_at<176, 256, 16>(return_value577, res_stg4_update_0_sm5_4185);
  set_at<192, 256, 16>(return_value577, res_stg4_update_0_sm5_3183);
  set_at<208, 256, 16>(return_value577, res_stg4_update_0_sm5_2181);
  set_at<224, 256, 16>(return_value577, res_stg4_update_0_sm5_1179);
  set_at<240, 256, 16>(return_value577, res_stg4_update_0_sm5_0177);
  return return_value577;

}

hw_uint<256> stg5_1_cu579(hw_uint<16*64>& stg4) {
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

	
  hw_uint<64 > stg4_lane_3_pack;
  set_at<0, 64, 16>(stg4_lane_3_pack, stg4_lane_0);
  set_at<16, 64, 16>(stg4_lane_3_pack, stg4_lane_1);
  set_at<32, 64, 16>(stg4_lane_3_pack, stg4_lane_2);
  set_at<48, 64, 16>(stg4_lane_3_pack, stg4_lane_3);
  auto res_stg5_update_0_sm6_15239 = stg5_generated_compute_unrolled_1(stg4_lane_3_pack);

  hw_uint<64 > stg4_lane_7_pack;
  set_at<0, 64, 16>(stg4_lane_7_pack, stg4_lane_4);
  set_at<16, 64, 16>(stg4_lane_7_pack, stg4_lane_5);
  set_at<32, 64, 16>(stg4_lane_7_pack, stg4_lane_6);
  set_at<48, 64, 16>(stg4_lane_7_pack, stg4_lane_7);
  auto res_stg5_update_0_sm6_14237 = stg5_generated_compute_unrolled_1(stg4_lane_7_pack);

  hw_uint<64 > stg4_lane_11_pack;
  set_at<0, 64, 16>(stg4_lane_11_pack, stg4_lane_8);
  set_at<16, 64, 16>(stg4_lane_11_pack, stg4_lane_9);
  set_at<32, 64, 16>(stg4_lane_11_pack, stg4_lane_10);
  set_at<48, 64, 16>(stg4_lane_11_pack, stg4_lane_11);
  auto res_stg5_update_0_sm6_13235 = stg5_generated_compute_unrolled_1(stg4_lane_11_pack);

  hw_uint<64 > stg4_lane_15_pack;
  set_at<0, 64, 16>(stg4_lane_15_pack, stg4_lane_12);
  set_at<16, 64, 16>(stg4_lane_15_pack, stg4_lane_13);
  set_at<32, 64, 16>(stg4_lane_15_pack, stg4_lane_14);
  set_at<48, 64, 16>(stg4_lane_15_pack, stg4_lane_15);
  auto res_stg5_update_0_sm6_12233 = stg5_generated_compute_unrolled_1(stg4_lane_15_pack);

  hw_uint<64 > stg4_lane_19_pack;
  set_at<0, 64, 16>(stg4_lane_19_pack, stg4_lane_16);
  set_at<16, 64, 16>(stg4_lane_19_pack, stg4_lane_17);
  set_at<32, 64, 16>(stg4_lane_19_pack, stg4_lane_18);
  set_at<48, 64, 16>(stg4_lane_19_pack, stg4_lane_19);
  auto res_stg5_update_0_sm6_11231 = stg5_generated_compute_unrolled_1(stg4_lane_19_pack);

  hw_uint<64 > stg4_lane_23_pack;
  set_at<0, 64, 16>(stg4_lane_23_pack, stg4_lane_20);
  set_at<16, 64, 16>(stg4_lane_23_pack, stg4_lane_21);
  set_at<32, 64, 16>(stg4_lane_23_pack, stg4_lane_22);
  set_at<48, 64, 16>(stg4_lane_23_pack, stg4_lane_23);
  auto res_stg5_update_0_sm6_10229 = stg5_generated_compute_unrolled_1(stg4_lane_23_pack);

  hw_uint<64 > stg4_lane_27_pack;
  set_at<0, 64, 16>(stg4_lane_27_pack, stg4_lane_24);
  set_at<16, 64, 16>(stg4_lane_27_pack, stg4_lane_25);
  set_at<32, 64, 16>(stg4_lane_27_pack, stg4_lane_26);
  set_at<48, 64, 16>(stg4_lane_27_pack, stg4_lane_27);
  auto res_stg5_update_0_sm6_9227 = stg5_generated_compute_unrolled_1(stg4_lane_27_pack);

  hw_uint<64 > stg4_lane_31_pack;
  set_at<0, 64, 16>(stg4_lane_31_pack, stg4_lane_28);
  set_at<16, 64, 16>(stg4_lane_31_pack, stg4_lane_29);
  set_at<32, 64, 16>(stg4_lane_31_pack, stg4_lane_30);
  set_at<48, 64, 16>(stg4_lane_31_pack, stg4_lane_31);
  auto res_stg5_update_0_sm6_8225 = stg5_generated_compute_unrolled_1(stg4_lane_31_pack);

  hw_uint<64 > stg4_lane_35_pack;
  set_at<0, 64, 16>(stg4_lane_35_pack, stg4_lane_32);
  set_at<16, 64, 16>(stg4_lane_35_pack, stg4_lane_33);
  set_at<32, 64, 16>(stg4_lane_35_pack, stg4_lane_34);
  set_at<48, 64, 16>(stg4_lane_35_pack, stg4_lane_35);
  auto res_stg5_update_0_sm6_7223 = stg5_generated_compute_unrolled_1(stg4_lane_35_pack);

  hw_uint<64 > stg4_lane_39_pack;
  set_at<0, 64, 16>(stg4_lane_39_pack, stg4_lane_36);
  set_at<16, 64, 16>(stg4_lane_39_pack, stg4_lane_37);
  set_at<32, 64, 16>(stg4_lane_39_pack, stg4_lane_38);
  set_at<48, 64, 16>(stg4_lane_39_pack, stg4_lane_39);
  auto res_stg5_update_0_sm6_6221 = stg5_generated_compute_unrolled_1(stg4_lane_39_pack);

  hw_uint<64 > stg4_lane_43_pack;
  set_at<0, 64, 16>(stg4_lane_43_pack, stg4_lane_40);
  set_at<16, 64, 16>(stg4_lane_43_pack, stg4_lane_41);
  set_at<32, 64, 16>(stg4_lane_43_pack, stg4_lane_42);
  set_at<48, 64, 16>(stg4_lane_43_pack, stg4_lane_43);
  auto res_stg5_update_0_sm6_5219 = stg5_generated_compute_unrolled_1(stg4_lane_43_pack);

  hw_uint<64 > stg4_lane_47_pack;
  set_at<0, 64, 16>(stg4_lane_47_pack, stg4_lane_44);
  set_at<16, 64, 16>(stg4_lane_47_pack, stg4_lane_45);
  set_at<32, 64, 16>(stg4_lane_47_pack, stg4_lane_46);
  set_at<48, 64, 16>(stg4_lane_47_pack, stg4_lane_47);
  auto res_stg5_update_0_sm6_4217 = stg5_generated_compute_unrolled_1(stg4_lane_47_pack);

  hw_uint<64 > stg4_lane_51_pack;
  set_at<0, 64, 16>(stg4_lane_51_pack, stg4_lane_48);
  set_at<16, 64, 16>(stg4_lane_51_pack, stg4_lane_49);
  set_at<32, 64, 16>(stg4_lane_51_pack, stg4_lane_50);
  set_at<48, 64, 16>(stg4_lane_51_pack, stg4_lane_51);
  auto res_stg5_update_0_sm6_3215 = stg5_generated_compute_unrolled_1(stg4_lane_51_pack);

  hw_uint<64 > stg4_lane_55_pack;
  set_at<0, 64, 16>(stg4_lane_55_pack, stg4_lane_52);
  set_at<16, 64, 16>(stg4_lane_55_pack, stg4_lane_53);
  set_at<32, 64, 16>(stg4_lane_55_pack, stg4_lane_54);
  set_at<48, 64, 16>(stg4_lane_55_pack, stg4_lane_55);
  auto res_stg5_update_0_sm6_2213 = stg5_generated_compute_unrolled_1(stg4_lane_55_pack);

  hw_uint<64 > stg4_lane_59_pack;
  set_at<0, 64, 16>(stg4_lane_59_pack, stg4_lane_56);
  set_at<16, 64, 16>(stg4_lane_59_pack, stg4_lane_57);
  set_at<32, 64, 16>(stg4_lane_59_pack, stg4_lane_58);
  set_at<48, 64, 16>(stg4_lane_59_pack, stg4_lane_59);
  auto res_stg5_update_0_sm6_1211 = stg5_generated_compute_unrolled_1(stg4_lane_59_pack);

  hw_uint<64 > stg4_lane_63_pack;
  set_at<0, 64, 16>(stg4_lane_63_pack, stg4_lane_60);
  set_at<16, 64, 16>(stg4_lane_63_pack, stg4_lane_61);
  set_at<32, 64, 16>(stg4_lane_63_pack, stg4_lane_62);
  set_at<48, 64, 16>(stg4_lane_63_pack, stg4_lane_63);
  auto res_stg5_update_0_sm6_0209 = stg5_generated_compute_unrolled_1(stg4_lane_63_pack);
  hw_uint<256 > return_value580;
  set_at<0, 256, 16>(return_value580, res_stg5_update_0_sm6_15239);
  set_at<16, 256, 16>(return_value580, res_stg5_update_0_sm6_14237);
  set_at<32, 256, 16>(return_value580, res_stg5_update_0_sm6_13235);
  set_at<48, 256, 16>(return_value580, res_stg5_update_0_sm6_12233);
  set_at<64, 256, 16>(return_value580, res_stg5_update_0_sm6_11231);
  set_at<80, 256, 16>(return_value580, res_stg5_update_0_sm6_10229);
  set_at<96, 256, 16>(return_value580, res_stg5_update_0_sm6_9227);
  set_at<112, 256, 16>(return_value580, res_stg5_update_0_sm6_8225);
  set_at<128, 256, 16>(return_value580, res_stg5_update_0_sm6_7223);
  set_at<144, 256, 16>(return_value580, res_stg5_update_0_sm6_6221);
  set_at<160, 256, 16>(return_value580, res_stg5_update_0_sm6_5219);
  set_at<176, 256, 16>(return_value580, res_stg5_update_0_sm6_4217);
  set_at<192, 256, 16>(return_value580, res_stg5_update_0_sm6_3215);
  set_at<208, 256, 16>(return_value580, res_stg5_update_0_sm6_2213);
  set_at<224, 256, 16>(return_value580, res_stg5_update_0_sm6_1211);
  set_at<240, 256, 16>(return_value580, res_stg5_update_0_sm6_0209);
  return return_value580;

}

hw_uint<256> stg6_1_cu582(hw_uint<16*64>& stg5) {
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

	
  hw_uint<64 > stg5_lane_3_pack;
  set_at<0, 64, 16>(stg5_lane_3_pack, stg5_lane_0);
  set_at<16, 64, 16>(stg5_lane_3_pack, stg5_lane_1);
  set_at<32, 64, 16>(stg5_lane_3_pack, stg5_lane_2);
  set_at<48, 64, 16>(stg5_lane_3_pack, stg5_lane_3);
  auto res_stg6_update_0_sm7_15271 = stg6_generated_compute_unrolled_1(stg5_lane_3_pack);

  hw_uint<64 > stg5_lane_7_pack;
  set_at<0, 64, 16>(stg5_lane_7_pack, stg5_lane_4);
  set_at<16, 64, 16>(stg5_lane_7_pack, stg5_lane_5);
  set_at<32, 64, 16>(stg5_lane_7_pack, stg5_lane_6);
  set_at<48, 64, 16>(stg5_lane_7_pack, stg5_lane_7);
  auto res_stg6_update_0_sm7_14269 = stg6_generated_compute_unrolled_1(stg5_lane_7_pack);

  hw_uint<64 > stg5_lane_11_pack;
  set_at<0, 64, 16>(stg5_lane_11_pack, stg5_lane_8);
  set_at<16, 64, 16>(stg5_lane_11_pack, stg5_lane_9);
  set_at<32, 64, 16>(stg5_lane_11_pack, stg5_lane_10);
  set_at<48, 64, 16>(stg5_lane_11_pack, stg5_lane_11);
  auto res_stg6_update_0_sm7_13267 = stg6_generated_compute_unrolled_1(stg5_lane_11_pack);

  hw_uint<64 > stg5_lane_15_pack;
  set_at<0, 64, 16>(stg5_lane_15_pack, stg5_lane_12);
  set_at<16, 64, 16>(stg5_lane_15_pack, stg5_lane_13);
  set_at<32, 64, 16>(stg5_lane_15_pack, stg5_lane_14);
  set_at<48, 64, 16>(stg5_lane_15_pack, stg5_lane_15);
  auto res_stg6_update_0_sm7_12265 = stg6_generated_compute_unrolled_1(stg5_lane_15_pack);

  hw_uint<64 > stg5_lane_19_pack;
  set_at<0, 64, 16>(stg5_lane_19_pack, stg5_lane_16);
  set_at<16, 64, 16>(stg5_lane_19_pack, stg5_lane_17);
  set_at<32, 64, 16>(stg5_lane_19_pack, stg5_lane_18);
  set_at<48, 64, 16>(stg5_lane_19_pack, stg5_lane_19);
  auto res_stg6_update_0_sm7_11263 = stg6_generated_compute_unrolled_1(stg5_lane_19_pack);

  hw_uint<64 > stg5_lane_23_pack;
  set_at<0, 64, 16>(stg5_lane_23_pack, stg5_lane_20);
  set_at<16, 64, 16>(stg5_lane_23_pack, stg5_lane_21);
  set_at<32, 64, 16>(stg5_lane_23_pack, stg5_lane_22);
  set_at<48, 64, 16>(stg5_lane_23_pack, stg5_lane_23);
  auto res_stg6_update_0_sm7_10261 = stg6_generated_compute_unrolled_1(stg5_lane_23_pack);

  hw_uint<64 > stg5_lane_27_pack;
  set_at<0, 64, 16>(stg5_lane_27_pack, stg5_lane_24);
  set_at<16, 64, 16>(stg5_lane_27_pack, stg5_lane_25);
  set_at<32, 64, 16>(stg5_lane_27_pack, stg5_lane_26);
  set_at<48, 64, 16>(stg5_lane_27_pack, stg5_lane_27);
  auto res_stg6_update_0_sm7_9259 = stg6_generated_compute_unrolled_1(stg5_lane_27_pack);

  hw_uint<64 > stg5_lane_31_pack;
  set_at<0, 64, 16>(stg5_lane_31_pack, stg5_lane_28);
  set_at<16, 64, 16>(stg5_lane_31_pack, stg5_lane_29);
  set_at<32, 64, 16>(stg5_lane_31_pack, stg5_lane_30);
  set_at<48, 64, 16>(stg5_lane_31_pack, stg5_lane_31);
  auto res_stg6_update_0_sm7_8257 = stg6_generated_compute_unrolled_1(stg5_lane_31_pack);

  hw_uint<64 > stg5_lane_35_pack;
  set_at<0, 64, 16>(stg5_lane_35_pack, stg5_lane_32);
  set_at<16, 64, 16>(stg5_lane_35_pack, stg5_lane_33);
  set_at<32, 64, 16>(stg5_lane_35_pack, stg5_lane_34);
  set_at<48, 64, 16>(stg5_lane_35_pack, stg5_lane_35);
  auto res_stg6_update_0_sm7_7255 = stg6_generated_compute_unrolled_1(stg5_lane_35_pack);

  hw_uint<64 > stg5_lane_39_pack;
  set_at<0, 64, 16>(stg5_lane_39_pack, stg5_lane_36);
  set_at<16, 64, 16>(stg5_lane_39_pack, stg5_lane_37);
  set_at<32, 64, 16>(stg5_lane_39_pack, stg5_lane_38);
  set_at<48, 64, 16>(stg5_lane_39_pack, stg5_lane_39);
  auto res_stg6_update_0_sm7_6253 = stg6_generated_compute_unrolled_1(stg5_lane_39_pack);

  hw_uint<64 > stg5_lane_43_pack;
  set_at<0, 64, 16>(stg5_lane_43_pack, stg5_lane_40);
  set_at<16, 64, 16>(stg5_lane_43_pack, stg5_lane_41);
  set_at<32, 64, 16>(stg5_lane_43_pack, stg5_lane_42);
  set_at<48, 64, 16>(stg5_lane_43_pack, stg5_lane_43);
  auto res_stg6_update_0_sm7_5251 = stg6_generated_compute_unrolled_1(stg5_lane_43_pack);

  hw_uint<64 > stg5_lane_47_pack;
  set_at<0, 64, 16>(stg5_lane_47_pack, stg5_lane_44);
  set_at<16, 64, 16>(stg5_lane_47_pack, stg5_lane_45);
  set_at<32, 64, 16>(stg5_lane_47_pack, stg5_lane_46);
  set_at<48, 64, 16>(stg5_lane_47_pack, stg5_lane_47);
  auto res_stg6_update_0_sm7_4249 = stg6_generated_compute_unrolled_1(stg5_lane_47_pack);

  hw_uint<64 > stg5_lane_51_pack;
  set_at<0, 64, 16>(stg5_lane_51_pack, stg5_lane_48);
  set_at<16, 64, 16>(stg5_lane_51_pack, stg5_lane_49);
  set_at<32, 64, 16>(stg5_lane_51_pack, stg5_lane_50);
  set_at<48, 64, 16>(stg5_lane_51_pack, stg5_lane_51);
  auto res_stg6_update_0_sm7_3247 = stg6_generated_compute_unrolled_1(stg5_lane_51_pack);

  hw_uint<64 > stg5_lane_55_pack;
  set_at<0, 64, 16>(stg5_lane_55_pack, stg5_lane_52);
  set_at<16, 64, 16>(stg5_lane_55_pack, stg5_lane_53);
  set_at<32, 64, 16>(stg5_lane_55_pack, stg5_lane_54);
  set_at<48, 64, 16>(stg5_lane_55_pack, stg5_lane_55);
  auto res_stg6_update_0_sm7_2245 = stg6_generated_compute_unrolled_1(stg5_lane_55_pack);

  hw_uint<64 > stg5_lane_59_pack;
  set_at<0, 64, 16>(stg5_lane_59_pack, stg5_lane_56);
  set_at<16, 64, 16>(stg5_lane_59_pack, stg5_lane_57);
  set_at<32, 64, 16>(stg5_lane_59_pack, stg5_lane_58);
  set_at<48, 64, 16>(stg5_lane_59_pack, stg5_lane_59);
  auto res_stg6_update_0_sm7_1243 = stg6_generated_compute_unrolled_1(stg5_lane_59_pack);

  hw_uint<64 > stg5_lane_63_pack;
  set_at<0, 64, 16>(stg5_lane_63_pack, stg5_lane_60);
  set_at<16, 64, 16>(stg5_lane_63_pack, stg5_lane_61);
  set_at<32, 64, 16>(stg5_lane_63_pack, stg5_lane_62);
  set_at<48, 64, 16>(stg5_lane_63_pack, stg5_lane_63);
  auto res_stg6_update_0_sm7_0241 = stg6_generated_compute_unrolled_1(stg5_lane_63_pack);
  hw_uint<256 > return_value583;
  set_at<0, 256, 16>(return_value583, res_stg6_update_0_sm7_15271);
  set_at<16, 256, 16>(return_value583, res_stg6_update_0_sm7_14269);
  set_at<32, 256, 16>(return_value583, res_stg6_update_0_sm7_13267);
  set_at<48, 256, 16>(return_value583, res_stg6_update_0_sm7_12265);
  set_at<64, 256, 16>(return_value583, res_stg6_update_0_sm7_11263);
  set_at<80, 256, 16>(return_value583, res_stg6_update_0_sm7_10261);
  set_at<96, 256, 16>(return_value583, res_stg6_update_0_sm7_9259);
  set_at<112, 256, 16>(return_value583, res_stg6_update_0_sm7_8257);
  set_at<128, 256, 16>(return_value583, res_stg6_update_0_sm7_7255);
  set_at<144, 256, 16>(return_value583, res_stg6_update_0_sm7_6253);
  set_at<160, 256, 16>(return_value583, res_stg6_update_0_sm7_5251);
  set_at<176, 256, 16>(return_value583, res_stg6_update_0_sm7_4249);
  set_at<192, 256, 16>(return_value583, res_stg6_update_0_sm7_3247);
  set_at<208, 256, 16>(return_value583, res_stg6_update_0_sm7_2245);
  set_at<224, 256, 16>(return_value583, res_stg6_update_0_sm7_1243);
  set_at<240, 256, 16>(return_value583, res_stg6_update_0_sm7_0241);
  return return_value583;

}

hw_uint<256> stg7_1_cu585(hw_uint<16*64>& stg6) {
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

	
  hw_uint<64 > stg6_lane_3_pack;
  set_at<0, 64, 16>(stg6_lane_3_pack, stg6_lane_0);
  set_at<16, 64, 16>(stg6_lane_3_pack, stg6_lane_1);
  set_at<32, 64, 16>(stg6_lane_3_pack, stg6_lane_2);
  set_at<48, 64, 16>(stg6_lane_3_pack, stg6_lane_3);
  auto res_stg7_update_0_sm8_15303 = stg7_generated_compute_unrolled_1(stg6_lane_3_pack);

  hw_uint<64 > stg6_lane_7_pack;
  set_at<0, 64, 16>(stg6_lane_7_pack, stg6_lane_4);
  set_at<16, 64, 16>(stg6_lane_7_pack, stg6_lane_5);
  set_at<32, 64, 16>(stg6_lane_7_pack, stg6_lane_6);
  set_at<48, 64, 16>(stg6_lane_7_pack, stg6_lane_7);
  auto res_stg7_update_0_sm8_14301 = stg7_generated_compute_unrolled_1(stg6_lane_7_pack);

  hw_uint<64 > stg6_lane_11_pack;
  set_at<0, 64, 16>(stg6_lane_11_pack, stg6_lane_8);
  set_at<16, 64, 16>(stg6_lane_11_pack, stg6_lane_9);
  set_at<32, 64, 16>(stg6_lane_11_pack, stg6_lane_10);
  set_at<48, 64, 16>(stg6_lane_11_pack, stg6_lane_11);
  auto res_stg7_update_0_sm8_13299 = stg7_generated_compute_unrolled_1(stg6_lane_11_pack);

  hw_uint<64 > stg6_lane_15_pack;
  set_at<0, 64, 16>(stg6_lane_15_pack, stg6_lane_12);
  set_at<16, 64, 16>(stg6_lane_15_pack, stg6_lane_13);
  set_at<32, 64, 16>(stg6_lane_15_pack, stg6_lane_14);
  set_at<48, 64, 16>(stg6_lane_15_pack, stg6_lane_15);
  auto res_stg7_update_0_sm8_12297 = stg7_generated_compute_unrolled_1(stg6_lane_15_pack);

  hw_uint<64 > stg6_lane_19_pack;
  set_at<0, 64, 16>(stg6_lane_19_pack, stg6_lane_16);
  set_at<16, 64, 16>(stg6_lane_19_pack, stg6_lane_17);
  set_at<32, 64, 16>(stg6_lane_19_pack, stg6_lane_18);
  set_at<48, 64, 16>(stg6_lane_19_pack, stg6_lane_19);
  auto res_stg7_update_0_sm8_11295 = stg7_generated_compute_unrolled_1(stg6_lane_19_pack);

  hw_uint<64 > stg6_lane_23_pack;
  set_at<0, 64, 16>(stg6_lane_23_pack, stg6_lane_20);
  set_at<16, 64, 16>(stg6_lane_23_pack, stg6_lane_21);
  set_at<32, 64, 16>(stg6_lane_23_pack, stg6_lane_22);
  set_at<48, 64, 16>(stg6_lane_23_pack, stg6_lane_23);
  auto res_stg7_update_0_sm8_10293 = stg7_generated_compute_unrolled_1(stg6_lane_23_pack);

  hw_uint<64 > stg6_lane_27_pack;
  set_at<0, 64, 16>(stg6_lane_27_pack, stg6_lane_24);
  set_at<16, 64, 16>(stg6_lane_27_pack, stg6_lane_25);
  set_at<32, 64, 16>(stg6_lane_27_pack, stg6_lane_26);
  set_at<48, 64, 16>(stg6_lane_27_pack, stg6_lane_27);
  auto res_stg7_update_0_sm8_9291 = stg7_generated_compute_unrolled_1(stg6_lane_27_pack);

  hw_uint<64 > stg6_lane_31_pack;
  set_at<0, 64, 16>(stg6_lane_31_pack, stg6_lane_28);
  set_at<16, 64, 16>(stg6_lane_31_pack, stg6_lane_29);
  set_at<32, 64, 16>(stg6_lane_31_pack, stg6_lane_30);
  set_at<48, 64, 16>(stg6_lane_31_pack, stg6_lane_31);
  auto res_stg7_update_0_sm8_8289 = stg7_generated_compute_unrolled_1(stg6_lane_31_pack);

  hw_uint<64 > stg6_lane_35_pack;
  set_at<0, 64, 16>(stg6_lane_35_pack, stg6_lane_32);
  set_at<16, 64, 16>(stg6_lane_35_pack, stg6_lane_33);
  set_at<32, 64, 16>(stg6_lane_35_pack, stg6_lane_34);
  set_at<48, 64, 16>(stg6_lane_35_pack, stg6_lane_35);
  auto res_stg7_update_0_sm8_7287 = stg7_generated_compute_unrolled_1(stg6_lane_35_pack);

  hw_uint<64 > stg6_lane_39_pack;
  set_at<0, 64, 16>(stg6_lane_39_pack, stg6_lane_36);
  set_at<16, 64, 16>(stg6_lane_39_pack, stg6_lane_37);
  set_at<32, 64, 16>(stg6_lane_39_pack, stg6_lane_38);
  set_at<48, 64, 16>(stg6_lane_39_pack, stg6_lane_39);
  auto res_stg7_update_0_sm8_6285 = stg7_generated_compute_unrolled_1(stg6_lane_39_pack);

  hw_uint<64 > stg6_lane_43_pack;
  set_at<0, 64, 16>(stg6_lane_43_pack, stg6_lane_40);
  set_at<16, 64, 16>(stg6_lane_43_pack, stg6_lane_41);
  set_at<32, 64, 16>(stg6_lane_43_pack, stg6_lane_42);
  set_at<48, 64, 16>(stg6_lane_43_pack, stg6_lane_43);
  auto res_stg7_update_0_sm8_5283 = stg7_generated_compute_unrolled_1(stg6_lane_43_pack);

  hw_uint<64 > stg6_lane_47_pack;
  set_at<0, 64, 16>(stg6_lane_47_pack, stg6_lane_44);
  set_at<16, 64, 16>(stg6_lane_47_pack, stg6_lane_45);
  set_at<32, 64, 16>(stg6_lane_47_pack, stg6_lane_46);
  set_at<48, 64, 16>(stg6_lane_47_pack, stg6_lane_47);
  auto res_stg7_update_0_sm8_4281 = stg7_generated_compute_unrolled_1(stg6_lane_47_pack);

  hw_uint<64 > stg6_lane_51_pack;
  set_at<0, 64, 16>(stg6_lane_51_pack, stg6_lane_48);
  set_at<16, 64, 16>(stg6_lane_51_pack, stg6_lane_49);
  set_at<32, 64, 16>(stg6_lane_51_pack, stg6_lane_50);
  set_at<48, 64, 16>(stg6_lane_51_pack, stg6_lane_51);
  auto res_stg7_update_0_sm8_3279 = stg7_generated_compute_unrolled_1(stg6_lane_51_pack);

  hw_uint<64 > stg6_lane_55_pack;
  set_at<0, 64, 16>(stg6_lane_55_pack, stg6_lane_52);
  set_at<16, 64, 16>(stg6_lane_55_pack, stg6_lane_53);
  set_at<32, 64, 16>(stg6_lane_55_pack, stg6_lane_54);
  set_at<48, 64, 16>(stg6_lane_55_pack, stg6_lane_55);
  auto res_stg7_update_0_sm8_2277 = stg7_generated_compute_unrolled_1(stg6_lane_55_pack);

  hw_uint<64 > stg6_lane_59_pack;
  set_at<0, 64, 16>(stg6_lane_59_pack, stg6_lane_56);
  set_at<16, 64, 16>(stg6_lane_59_pack, stg6_lane_57);
  set_at<32, 64, 16>(stg6_lane_59_pack, stg6_lane_58);
  set_at<48, 64, 16>(stg6_lane_59_pack, stg6_lane_59);
  auto res_stg7_update_0_sm8_1275 = stg7_generated_compute_unrolled_1(stg6_lane_59_pack);

  hw_uint<64 > stg6_lane_63_pack;
  set_at<0, 64, 16>(stg6_lane_63_pack, stg6_lane_60);
  set_at<16, 64, 16>(stg6_lane_63_pack, stg6_lane_61);
  set_at<32, 64, 16>(stg6_lane_63_pack, stg6_lane_62);
  set_at<48, 64, 16>(stg6_lane_63_pack, stg6_lane_63);
  auto res_stg7_update_0_sm8_0273 = stg7_generated_compute_unrolled_1(stg6_lane_63_pack);
  hw_uint<256 > return_value586;
  set_at<0, 256, 16>(return_value586, res_stg7_update_0_sm8_15303);
  set_at<16, 256, 16>(return_value586, res_stg7_update_0_sm8_14301);
  set_at<32, 256, 16>(return_value586, res_stg7_update_0_sm8_13299);
  set_at<48, 256, 16>(return_value586, res_stg7_update_0_sm8_12297);
  set_at<64, 256, 16>(return_value586, res_stg7_update_0_sm8_11295);
  set_at<80, 256, 16>(return_value586, res_stg7_update_0_sm8_10293);
  set_at<96, 256, 16>(return_value586, res_stg7_update_0_sm8_9291);
  set_at<112, 256, 16>(return_value586, res_stg7_update_0_sm8_8289);
  set_at<128, 256, 16>(return_value586, res_stg7_update_0_sm8_7287);
  set_at<144, 256, 16>(return_value586, res_stg7_update_0_sm8_6285);
  set_at<160, 256, 16>(return_value586, res_stg7_update_0_sm8_5283);
  set_at<176, 256, 16>(return_value586, res_stg7_update_0_sm8_4281);
  set_at<192, 256, 16>(return_value586, res_stg7_update_0_sm8_3279);
  set_at<208, 256, 16>(return_value586, res_stg7_update_0_sm8_2277);
  set_at<224, 256, 16>(return_value586, res_stg7_update_0_sm8_1275);
  set_at<240, 256, 16>(return_value586, res_stg7_update_0_sm8_0273);
  return return_value586;

}

hw_uint<256> stg8_1_cu588(hw_uint<16*64>& stg7) {
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

	
  hw_uint<64 > stg7_lane_3_pack;
  set_at<0, 64, 16>(stg7_lane_3_pack, stg7_lane_0);
  set_at<16, 64, 16>(stg7_lane_3_pack, stg7_lane_1);
  set_at<32, 64, 16>(stg7_lane_3_pack, stg7_lane_2);
  set_at<48, 64, 16>(stg7_lane_3_pack, stg7_lane_3);
  auto res_stg8_update_0_sm9_15335 = stg8_generated_compute_unrolled_1(stg7_lane_3_pack);

  hw_uint<64 > stg7_lane_7_pack;
  set_at<0, 64, 16>(stg7_lane_7_pack, stg7_lane_4);
  set_at<16, 64, 16>(stg7_lane_7_pack, stg7_lane_5);
  set_at<32, 64, 16>(stg7_lane_7_pack, stg7_lane_6);
  set_at<48, 64, 16>(stg7_lane_7_pack, stg7_lane_7);
  auto res_stg8_update_0_sm9_14333 = stg8_generated_compute_unrolled_1(stg7_lane_7_pack);

  hw_uint<64 > stg7_lane_11_pack;
  set_at<0, 64, 16>(stg7_lane_11_pack, stg7_lane_8);
  set_at<16, 64, 16>(stg7_lane_11_pack, stg7_lane_9);
  set_at<32, 64, 16>(stg7_lane_11_pack, stg7_lane_10);
  set_at<48, 64, 16>(stg7_lane_11_pack, stg7_lane_11);
  auto res_stg8_update_0_sm9_13331 = stg8_generated_compute_unrolled_1(stg7_lane_11_pack);

  hw_uint<64 > stg7_lane_15_pack;
  set_at<0, 64, 16>(stg7_lane_15_pack, stg7_lane_12);
  set_at<16, 64, 16>(stg7_lane_15_pack, stg7_lane_13);
  set_at<32, 64, 16>(stg7_lane_15_pack, stg7_lane_14);
  set_at<48, 64, 16>(stg7_lane_15_pack, stg7_lane_15);
  auto res_stg8_update_0_sm9_12329 = stg8_generated_compute_unrolled_1(stg7_lane_15_pack);

  hw_uint<64 > stg7_lane_19_pack;
  set_at<0, 64, 16>(stg7_lane_19_pack, stg7_lane_16);
  set_at<16, 64, 16>(stg7_lane_19_pack, stg7_lane_17);
  set_at<32, 64, 16>(stg7_lane_19_pack, stg7_lane_18);
  set_at<48, 64, 16>(stg7_lane_19_pack, stg7_lane_19);
  auto res_stg8_update_0_sm9_11327 = stg8_generated_compute_unrolled_1(stg7_lane_19_pack);

  hw_uint<64 > stg7_lane_23_pack;
  set_at<0, 64, 16>(stg7_lane_23_pack, stg7_lane_20);
  set_at<16, 64, 16>(stg7_lane_23_pack, stg7_lane_21);
  set_at<32, 64, 16>(stg7_lane_23_pack, stg7_lane_22);
  set_at<48, 64, 16>(stg7_lane_23_pack, stg7_lane_23);
  auto res_stg8_update_0_sm9_10325 = stg8_generated_compute_unrolled_1(stg7_lane_23_pack);

  hw_uint<64 > stg7_lane_27_pack;
  set_at<0, 64, 16>(stg7_lane_27_pack, stg7_lane_24);
  set_at<16, 64, 16>(stg7_lane_27_pack, stg7_lane_25);
  set_at<32, 64, 16>(stg7_lane_27_pack, stg7_lane_26);
  set_at<48, 64, 16>(stg7_lane_27_pack, stg7_lane_27);
  auto res_stg8_update_0_sm9_9323 = stg8_generated_compute_unrolled_1(stg7_lane_27_pack);

  hw_uint<64 > stg7_lane_31_pack;
  set_at<0, 64, 16>(stg7_lane_31_pack, stg7_lane_28);
  set_at<16, 64, 16>(stg7_lane_31_pack, stg7_lane_29);
  set_at<32, 64, 16>(stg7_lane_31_pack, stg7_lane_30);
  set_at<48, 64, 16>(stg7_lane_31_pack, stg7_lane_31);
  auto res_stg8_update_0_sm9_8321 = stg8_generated_compute_unrolled_1(stg7_lane_31_pack);

  hw_uint<64 > stg7_lane_35_pack;
  set_at<0, 64, 16>(stg7_lane_35_pack, stg7_lane_32);
  set_at<16, 64, 16>(stg7_lane_35_pack, stg7_lane_33);
  set_at<32, 64, 16>(stg7_lane_35_pack, stg7_lane_34);
  set_at<48, 64, 16>(stg7_lane_35_pack, stg7_lane_35);
  auto res_stg8_update_0_sm9_7319 = stg8_generated_compute_unrolled_1(stg7_lane_35_pack);

  hw_uint<64 > stg7_lane_39_pack;
  set_at<0, 64, 16>(stg7_lane_39_pack, stg7_lane_36);
  set_at<16, 64, 16>(stg7_lane_39_pack, stg7_lane_37);
  set_at<32, 64, 16>(stg7_lane_39_pack, stg7_lane_38);
  set_at<48, 64, 16>(stg7_lane_39_pack, stg7_lane_39);
  auto res_stg8_update_0_sm9_6317 = stg8_generated_compute_unrolled_1(stg7_lane_39_pack);

  hw_uint<64 > stg7_lane_43_pack;
  set_at<0, 64, 16>(stg7_lane_43_pack, stg7_lane_40);
  set_at<16, 64, 16>(stg7_lane_43_pack, stg7_lane_41);
  set_at<32, 64, 16>(stg7_lane_43_pack, stg7_lane_42);
  set_at<48, 64, 16>(stg7_lane_43_pack, stg7_lane_43);
  auto res_stg8_update_0_sm9_5315 = stg8_generated_compute_unrolled_1(stg7_lane_43_pack);

  hw_uint<64 > stg7_lane_47_pack;
  set_at<0, 64, 16>(stg7_lane_47_pack, stg7_lane_44);
  set_at<16, 64, 16>(stg7_lane_47_pack, stg7_lane_45);
  set_at<32, 64, 16>(stg7_lane_47_pack, stg7_lane_46);
  set_at<48, 64, 16>(stg7_lane_47_pack, stg7_lane_47);
  auto res_stg8_update_0_sm9_4313 = stg8_generated_compute_unrolled_1(stg7_lane_47_pack);

  hw_uint<64 > stg7_lane_51_pack;
  set_at<0, 64, 16>(stg7_lane_51_pack, stg7_lane_48);
  set_at<16, 64, 16>(stg7_lane_51_pack, stg7_lane_49);
  set_at<32, 64, 16>(stg7_lane_51_pack, stg7_lane_50);
  set_at<48, 64, 16>(stg7_lane_51_pack, stg7_lane_51);
  auto res_stg8_update_0_sm9_3311 = stg8_generated_compute_unrolled_1(stg7_lane_51_pack);

  hw_uint<64 > stg7_lane_55_pack;
  set_at<0, 64, 16>(stg7_lane_55_pack, stg7_lane_52);
  set_at<16, 64, 16>(stg7_lane_55_pack, stg7_lane_53);
  set_at<32, 64, 16>(stg7_lane_55_pack, stg7_lane_54);
  set_at<48, 64, 16>(stg7_lane_55_pack, stg7_lane_55);
  auto res_stg8_update_0_sm9_2309 = stg8_generated_compute_unrolled_1(stg7_lane_55_pack);

  hw_uint<64 > stg7_lane_59_pack;
  set_at<0, 64, 16>(stg7_lane_59_pack, stg7_lane_56);
  set_at<16, 64, 16>(stg7_lane_59_pack, stg7_lane_57);
  set_at<32, 64, 16>(stg7_lane_59_pack, stg7_lane_58);
  set_at<48, 64, 16>(stg7_lane_59_pack, stg7_lane_59);
  auto res_stg8_update_0_sm9_1307 = stg8_generated_compute_unrolled_1(stg7_lane_59_pack);

  hw_uint<64 > stg7_lane_63_pack;
  set_at<0, 64, 16>(stg7_lane_63_pack, stg7_lane_60);
  set_at<16, 64, 16>(stg7_lane_63_pack, stg7_lane_61);
  set_at<32, 64, 16>(stg7_lane_63_pack, stg7_lane_62);
  set_at<48, 64, 16>(stg7_lane_63_pack, stg7_lane_63);
  auto res_stg8_update_0_sm9_0305 = stg8_generated_compute_unrolled_1(stg7_lane_63_pack);
  hw_uint<256 > return_value589;
  set_at<0, 256, 16>(return_value589, res_stg8_update_0_sm9_15335);
  set_at<16, 256, 16>(return_value589, res_stg8_update_0_sm9_14333);
  set_at<32, 256, 16>(return_value589, res_stg8_update_0_sm9_13331);
  set_at<48, 256, 16>(return_value589, res_stg8_update_0_sm9_12329);
  set_at<64, 256, 16>(return_value589, res_stg8_update_0_sm9_11327);
  set_at<80, 256, 16>(return_value589, res_stg8_update_0_sm9_10325);
  set_at<96, 256, 16>(return_value589, res_stg8_update_0_sm9_9323);
  set_at<112, 256, 16>(return_value589, res_stg8_update_0_sm9_8321);
  set_at<128, 256, 16>(return_value589, res_stg8_update_0_sm9_7319);
  set_at<144, 256, 16>(return_value589, res_stg8_update_0_sm9_6317);
  set_at<160, 256, 16>(return_value589, res_stg8_update_0_sm9_5315);
  set_at<176, 256, 16>(return_value589, res_stg8_update_0_sm9_4313);
  set_at<192, 256, 16>(return_value589, res_stg8_update_0_sm9_3311);
  set_at<208, 256, 16>(return_value589, res_stg8_update_0_sm9_2309);
  set_at<224, 256, 16>(return_value589, res_stg8_update_0_sm9_1307);
  set_at<240, 256, 16>(return_value589, res_stg8_update_0_sm9_0305);
  return return_value589;

}

hw_uint<256> stg9_1_cu591(hw_uint<16*64>& stg8) {
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

	
  hw_uint<64 > stg8_lane_3_pack;
  set_at<0, 64, 16>(stg8_lane_3_pack, stg8_lane_0);
  set_at<16, 64, 16>(stg8_lane_3_pack, stg8_lane_1);
  set_at<32, 64, 16>(stg8_lane_3_pack, stg8_lane_2);
  set_at<48, 64, 16>(stg8_lane_3_pack, stg8_lane_3);
  auto res_stg9_update_0_sm10_15367 = stg9_generated_compute_unrolled_1(stg8_lane_3_pack);

  hw_uint<64 > stg8_lane_7_pack;
  set_at<0, 64, 16>(stg8_lane_7_pack, stg8_lane_4);
  set_at<16, 64, 16>(stg8_lane_7_pack, stg8_lane_5);
  set_at<32, 64, 16>(stg8_lane_7_pack, stg8_lane_6);
  set_at<48, 64, 16>(stg8_lane_7_pack, stg8_lane_7);
  auto res_stg9_update_0_sm10_14365 = stg9_generated_compute_unrolled_1(stg8_lane_7_pack);

  hw_uint<64 > stg8_lane_11_pack;
  set_at<0, 64, 16>(stg8_lane_11_pack, stg8_lane_8);
  set_at<16, 64, 16>(stg8_lane_11_pack, stg8_lane_9);
  set_at<32, 64, 16>(stg8_lane_11_pack, stg8_lane_10);
  set_at<48, 64, 16>(stg8_lane_11_pack, stg8_lane_11);
  auto res_stg9_update_0_sm10_13363 = stg9_generated_compute_unrolled_1(stg8_lane_11_pack);

  hw_uint<64 > stg8_lane_15_pack;
  set_at<0, 64, 16>(stg8_lane_15_pack, stg8_lane_12);
  set_at<16, 64, 16>(stg8_lane_15_pack, stg8_lane_13);
  set_at<32, 64, 16>(stg8_lane_15_pack, stg8_lane_14);
  set_at<48, 64, 16>(stg8_lane_15_pack, stg8_lane_15);
  auto res_stg9_update_0_sm10_12361 = stg9_generated_compute_unrolled_1(stg8_lane_15_pack);

  hw_uint<64 > stg8_lane_19_pack;
  set_at<0, 64, 16>(stg8_lane_19_pack, stg8_lane_16);
  set_at<16, 64, 16>(stg8_lane_19_pack, stg8_lane_17);
  set_at<32, 64, 16>(stg8_lane_19_pack, stg8_lane_18);
  set_at<48, 64, 16>(stg8_lane_19_pack, stg8_lane_19);
  auto res_stg9_update_0_sm10_11359 = stg9_generated_compute_unrolled_1(stg8_lane_19_pack);

  hw_uint<64 > stg8_lane_23_pack;
  set_at<0, 64, 16>(stg8_lane_23_pack, stg8_lane_20);
  set_at<16, 64, 16>(stg8_lane_23_pack, stg8_lane_21);
  set_at<32, 64, 16>(stg8_lane_23_pack, stg8_lane_22);
  set_at<48, 64, 16>(stg8_lane_23_pack, stg8_lane_23);
  auto res_stg9_update_0_sm10_10357 = stg9_generated_compute_unrolled_1(stg8_lane_23_pack);

  hw_uint<64 > stg8_lane_27_pack;
  set_at<0, 64, 16>(stg8_lane_27_pack, stg8_lane_24);
  set_at<16, 64, 16>(stg8_lane_27_pack, stg8_lane_25);
  set_at<32, 64, 16>(stg8_lane_27_pack, stg8_lane_26);
  set_at<48, 64, 16>(stg8_lane_27_pack, stg8_lane_27);
  auto res_stg9_update_0_sm10_9355 = stg9_generated_compute_unrolled_1(stg8_lane_27_pack);

  hw_uint<64 > stg8_lane_31_pack;
  set_at<0, 64, 16>(stg8_lane_31_pack, stg8_lane_28);
  set_at<16, 64, 16>(stg8_lane_31_pack, stg8_lane_29);
  set_at<32, 64, 16>(stg8_lane_31_pack, stg8_lane_30);
  set_at<48, 64, 16>(stg8_lane_31_pack, stg8_lane_31);
  auto res_stg9_update_0_sm10_8353 = stg9_generated_compute_unrolled_1(stg8_lane_31_pack);

  hw_uint<64 > stg8_lane_35_pack;
  set_at<0, 64, 16>(stg8_lane_35_pack, stg8_lane_32);
  set_at<16, 64, 16>(stg8_lane_35_pack, stg8_lane_33);
  set_at<32, 64, 16>(stg8_lane_35_pack, stg8_lane_34);
  set_at<48, 64, 16>(stg8_lane_35_pack, stg8_lane_35);
  auto res_stg9_update_0_sm10_7351 = stg9_generated_compute_unrolled_1(stg8_lane_35_pack);

  hw_uint<64 > stg8_lane_39_pack;
  set_at<0, 64, 16>(stg8_lane_39_pack, stg8_lane_36);
  set_at<16, 64, 16>(stg8_lane_39_pack, stg8_lane_37);
  set_at<32, 64, 16>(stg8_lane_39_pack, stg8_lane_38);
  set_at<48, 64, 16>(stg8_lane_39_pack, stg8_lane_39);
  auto res_stg9_update_0_sm10_6349 = stg9_generated_compute_unrolled_1(stg8_lane_39_pack);

  hw_uint<64 > stg8_lane_43_pack;
  set_at<0, 64, 16>(stg8_lane_43_pack, stg8_lane_40);
  set_at<16, 64, 16>(stg8_lane_43_pack, stg8_lane_41);
  set_at<32, 64, 16>(stg8_lane_43_pack, stg8_lane_42);
  set_at<48, 64, 16>(stg8_lane_43_pack, stg8_lane_43);
  auto res_stg9_update_0_sm10_5347 = stg9_generated_compute_unrolled_1(stg8_lane_43_pack);

  hw_uint<64 > stg8_lane_47_pack;
  set_at<0, 64, 16>(stg8_lane_47_pack, stg8_lane_44);
  set_at<16, 64, 16>(stg8_lane_47_pack, stg8_lane_45);
  set_at<32, 64, 16>(stg8_lane_47_pack, stg8_lane_46);
  set_at<48, 64, 16>(stg8_lane_47_pack, stg8_lane_47);
  auto res_stg9_update_0_sm10_4345 = stg9_generated_compute_unrolled_1(stg8_lane_47_pack);

  hw_uint<64 > stg8_lane_51_pack;
  set_at<0, 64, 16>(stg8_lane_51_pack, stg8_lane_48);
  set_at<16, 64, 16>(stg8_lane_51_pack, stg8_lane_49);
  set_at<32, 64, 16>(stg8_lane_51_pack, stg8_lane_50);
  set_at<48, 64, 16>(stg8_lane_51_pack, stg8_lane_51);
  auto res_stg9_update_0_sm10_3343 = stg9_generated_compute_unrolled_1(stg8_lane_51_pack);

  hw_uint<64 > stg8_lane_55_pack;
  set_at<0, 64, 16>(stg8_lane_55_pack, stg8_lane_52);
  set_at<16, 64, 16>(stg8_lane_55_pack, stg8_lane_53);
  set_at<32, 64, 16>(stg8_lane_55_pack, stg8_lane_54);
  set_at<48, 64, 16>(stg8_lane_55_pack, stg8_lane_55);
  auto res_stg9_update_0_sm10_2341 = stg9_generated_compute_unrolled_1(stg8_lane_55_pack);

  hw_uint<64 > stg8_lane_59_pack;
  set_at<0, 64, 16>(stg8_lane_59_pack, stg8_lane_56);
  set_at<16, 64, 16>(stg8_lane_59_pack, stg8_lane_57);
  set_at<32, 64, 16>(stg8_lane_59_pack, stg8_lane_58);
  set_at<48, 64, 16>(stg8_lane_59_pack, stg8_lane_59);
  auto res_stg9_update_0_sm10_1339 = stg9_generated_compute_unrolled_1(stg8_lane_59_pack);

  hw_uint<64 > stg8_lane_63_pack;
  set_at<0, 64, 16>(stg8_lane_63_pack, stg8_lane_60);
  set_at<16, 64, 16>(stg8_lane_63_pack, stg8_lane_61);
  set_at<32, 64, 16>(stg8_lane_63_pack, stg8_lane_62);
  set_at<48, 64, 16>(stg8_lane_63_pack, stg8_lane_63);
  auto res_stg9_update_0_sm10_0337 = stg9_generated_compute_unrolled_1(stg8_lane_63_pack);
  hw_uint<256 > return_value592;
  set_at<0, 256, 16>(return_value592, res_stg9_update_0_sm10_15367);
  set_at<16, 256, 16>(return_value592, res_stg9_update_0_sm10_14365);
  set_at<32, 256, 16>(return_value592, res_stg9_update_0_sm10_13363);
  set_at<48, 256, 16>(return_value592, res_stg9_update_0_sm10_12361);
  set_at<64, 256, 16>(return_value592, res_stg9_update_0_sm10_11359);
  set_at<80, 256, 16>(return_value592, res_stg9_update_0_sm10_10357);
  set_at<96, 256, 16>(return_value592, res_stg9_update_0_sm10_9355);
  set_at<112, 256, 16>(return_value592, res_stg9_update_0_sm10_8353);
  set_at<128, 256, 16>(return_value592, res_stg9_update_0_sm10_7351);
  set_at<144, 256, 16>(return_value592, res_stg9_update_0_sm10_6349);
  set_at<160, 256, 16>(return_value592, res_stg9_update_0_sm10_5347);
  set_at<176, 256, 16>(return_value592, res_stg9_update_0_sm10_4345);
  set_at<192, 256, 16>(return_value592, res_stg9_update_0_sm10_3343);
  set_at<208, 256, 16>(return_value592, res_stg9_update_0_sm10_2341);
  set_at<224, 256, 16>(return_value592, res_stg9_update_0_sm10_1339);
  set_at<240, 256, 16>(return_value592, res_stg9_update_0_sm10_0337);
  return return_value592;

}

hw_uint<256> stg10_1_cu594(hw_uint<16*64>& stg9) {
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

	
  hw_uint<64 > stg9_lane_3_pack;
  set_at<0, 64, 16>(stg9_lane_3_pack, stg9_lane_0);
  set_at<16, 64, 16>(stg9_lane_3_pack, stg9_lane_1);
  set_at<32, 64, 16>(stg9_lane_3_pack, stg9_lane_2);
  set_at<48, 64, 16>(stg9_lane_3_pack, stg9_lane_3);
  auto res_stg10_update_0_sm11_15399 = stg10_generated_compute_unrolled_1(stg9_lane_3_pack);

  hw_uint<64 > stg9_lane_7_pack;
  set_at<0, 64, 16>(stg9_lane_7_pack, stg9_lane_4);
  set_at<16, 64, 16>(stg9_lane_7_pack, stg9_lane_5);
  set_at<32, 64, 16>(stg9_lane_7_pack, stg9_lane_6);
  set_at<48, 64, 16>(stg9_lane_7_pack, stg9_lane_7);
  auto res_stg10_update_0_sm11_14397 = stg10_generated_compute_unrolled_1(stg9_lane_7_pack);

  hw_uint<64 > stg9_lane_11_pack;
  set_at<0, 64, 16>(stg9_lane_11_pack, stg9_lane_8);
  set_at<16, 64, 16>(stg9_lane_11_pack, stg9_lane_9);
  set_at<32, 64, 16>(stg9_lane_11_pack, stg9_lane_10);
  set_at<48, 64, 16>(stg9_lane_11_pack, stg9_lane_11);
  auto res_stg10_update_0_sm11_13395 = stg10_generated_compute_unrolled_1(stg9_lane_11_pack);

  hw_uint<64 > stg9_lane_15_pack;
  set_at<0, 64, 16>(stg9_lane_15_pack, stg9_lane_12);
  set_at<16, 64, 16>(stg9_lane_15_pack, stg9_lane_13);
  set_at<32, 64, 16>(stg9_lane_15_pack, stg9_lane_14);
  set_at<48, 64, 16>(stg9_lane_15_pack, stg9_lane_15);
  auto res_stg10_update_0_sm11_12393 = stg10_generated_compute_unrolled_1(stg9_lane_15_pack);

  hw_uint<64 > stg9_lane_19_pack;
  set_at<0, 64, 16>(stg9_lane_19_pack, stg9_lane_16);
  set_at<16, 64, 16>(stg9_lane_19_pack, stg9_lane_17);
  set_at<32, 64, 16>(stg9_lane_19_pack, stg9_lane_18);
  set_at<48, 64, 16>(stg9_lane_19_pack, stg9_lane_19);
  auto res_stg10_update_0_sm11_11391 = stg10_generated_compute_unrolled_1(stg9_lane_19_pack);

  hw_uint<64 > stg9_lane_23_pack;
  set_at<0, 64, 16>(stg9_lane_23_pack, stg9_lane_20);
  set_at<16, 64, 16>(stg9_lane_23_pack, stg9_lane_21);
  set_at<32, 64, 16>(stg9_lane_23_pack, stg9_lane_22);
  set_at<48, 64, 16>(stg9_lane_23_pack, stg9_lane_23);
  auto res_stg10_update_0_sm11_10389 = stg10_generated_compute_unrolled_1(stg9_lane_23_pack);

  hw_uint<64 > stg9_lane_27_pack;
  set_at<0, 64, 16>(stg9_lane_27_pack, stg9_lane_24);
  set_at<16, 64, 16>(stg9_lane_27_pack, stg9_lane_25);
  set_at<32, 64, 16>(stg9_lane_27_pack, stg9_lane_26);
  set_at<48, 64, 16>(stg9_lane_27_pack, stg9_lane_27);
  auto res_stg10_update_0_sm11_9387 = stg10_generated_compute_unrolled_1(stg9_lane_27_pack);

  hw_uint<64 > stg9_lane_31_pack;
  set_at<0, 64, 16>(stg9_lane_31_pack, stg9_lane_28);
  set_at<16, 64, 16>(stg9_lane_31_pack, stg9_lane_29);
  set_at<32, 64, 16>(stg9_lane_31_pack, stg9_lane_30);
  set_at<48, 64, 16>(stg9_lane_31_pack, stg9_lane_31);
  auto res_stg10_update_0_sm11_8385 = stg10_generated_compute_unrolled_1(stg9_lane_31_pack);

  hw_uint<64 > stg9_lane_35_pack;
  set_at<0, 64, 16>(stg9_lane_35_pack, stg9_lane_32);
  set_at<16, 64, 16>(stg9_lane_35_pack, stg9_lane_33);
  set_at<32, 64, 16>(stg9_lane_35_pack, stg9_lane_34);
  set_at<48, 64, 16>(stg9_lane_35_pack, stg9_lane_35);
  auto res_stg10_update_0_sm11_7383 = stg10_generated_compute_unrolled_1(stg9_lane_35_pack);

  hw_uint<64 > stg9_lane_39_pack;
  set_at<0, 64, 16>(stg9_lane_39_pack, stg9_lane_36);
  set_at<16, 64, 16>(stg9_lane_39_pack, stg9_lane_37);
  set_at<32, 64, 16>(stg9_lane_39_pack, stg9_lane_38);
  set_at<48, 64, 16>(stg9_lane_39_pack, stg9_lane_39);
  auto res_stg10_update_0_sm11_6381 = stg10_generated_compute_unrolled_1(stg9_lane_39_pack);

  hw_uint<64 > stg9_lane_43_pack;
  set_at<0, 64, 16>(stg9_lane_43_pack, stg9_lane_40);
  set_at<16, 64, 16>(stg9_lane_43_pack, stg9_lane_41);
  set_at<32, 64, 16>(stg9_lane_43_pack, stg9_lane_42);
  set_at<48, 64, 16>(stg9_lane_43_pack, stg9_lane_43);
  auto res_stg10_update_0_sm11_5379 = stg10_generated_compute_unrolled_1(stg9_lane_43_pack);

  hw_uint<64 > stg9_lane_47_pack;
  set_at<0, 64, 16>(stg9_lane_47_pack, stg9_lane_44);
  set_at<16, 64, 16>(stg9_lane_47_pack, stg9_lane_45);
  set_at<32, 64, 16>(stg9_lane_47_pack, stg9_lane_46);
  set_at<48, 64, 16>(stg9_lane_47_pack, stg9_lane_47);
  auto res_stg10_update_0_sm11_4377 = stg10_generated_compute_unrolled_1(stg9_lane_47_pack);

  hw_uint<64 > stg9_lane_51_pack;
  set_at<0, 64, 16>(stg9_lane_51_pack, stg9_lane_48);
  set_at<16, 64, 16>(stg9_lane_51_pack, stg9_lane_49);
  set_at<32, 64, 16>(stg9_lane_51_pack, stg9_lane_50);
  set_at<48, 64, 16>(stg9_lane_51_pack, stg9_lane_51);
  auto res_stg10_update_0_sm11_3375 = stg10_generated_compute_unrolled_1(stg9_lane_51_pack);

  hw_uint<64 > stg9_lane_55_pack;
  set_at<0, 64, 16>(stg9_lane_55_pack, stg9_lane_52);
  set_at<16, 64, 16>(stg9_lane_55_pack, stg9_lane_53);
  set_at<32, 64, 16>(stg9_lane_55_pack, stg9_lane_54);
  set_at<48, 64, 16>(stg9_lane_55_pack, stg9_lane_55);
  auto res_stg10_update_0_sm11_2373 = stg10_generated_compute_unrolled_1(stg9_lane_55_pack);

  hw_uint<64 > stg9_lane_59_pack;
  set_at<0, 64, 16>(stg9_lane_59_pack, stg9_lane_56);
  set_at<16, 64, 16>(stg9_lane_59_pack, stg9_lane_57);
  set_at<32, 64, 16>(stg9_lane_59_pack, stg9_lane_58);
  set_at<48, 64, 16>(stg9_lane_59_pack, stg9_lane_59);
  auto res_stg10_update_0_sm11_1371 = stg10_generated_compute_unrolled_1(stg9_lane_59_pack);

  hw_uint<64 > stg9_lane_63_pack;
  set_at<0, 64, 16>(stg9_lane_63_pack, stg9_lane_60);
  set_at<16, 64, 16>(stg9_lane_63_pack, stg9_lane_61);
  set_at<32, 64, 16>(stg9_lane_63_pack, stg9_lane_62);
  set_at<48, 64, 16>(stg9_lane_63_pack, stg9_lane_63);
  auto res_stg10_update_0_sm11_0369 = stg10_generated_compute_unrolled_1(stg9_lane_63_pack);
  hw_uint<256 > return_value595;
  set_at<0, 256, 16>(return_value595, res_stg10_update_0_sm11_15399);
  set_at<16, 256, 16>(return_value595, res_stg10_update_0_sm11_14397);
  set_at<32, 256, 16>(return_value595, res_stg10_update_0_sm11_13395);
  set_at<48, 256, 16>(return_value595, res_stg10_update_0_sm11_12393);
  set_at<64, 256, 16>(return_value595, res_stg10_update_0_sm11_11391);
  set_at<80, 256, 16>(return_value595, res_stg10_update_0_sm11_10389);
  set_at<96, 256, 16>(return_value595, res_stg10_update_0_sm11_9387);
  set_at<112, 256, 16>(return_value595, res_stg10_update_0_sm11_8385);
  set_at<128, 256, 16>(return_value595, res_stg10_update_0_sm11_7383);
  set_at<144, 256, 16>(return_value595, res_stg10_update_0_sm11_6381);
  set_at<160, 256, 16>(return_value595, res_stg10_update_0_sm11_5379);
  set_at<176, 256, 16>(return_value595, res_stg10_update_0_sm11_4377);
  set_at<192, 256, 16>(return_value595, res_stg10_update_0_sm11_3375);
  set_at<208, 256, 16>(return_value595, res_stg10_update_0_sm11_2373);
  set_at<224, 256, 16>(return_value595, res_stg10_update_0_sm11_1371);
  set_at<240, 256, 16>(return_value595, res_stg10_update_0_sm11_0369);
  return return_value595;

}

hw_uint<256> stg11_1_cu597(hw_uint<16*64>& stg10) {
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

	
  hw_uint<64 > stg10_lane_3_pack;
  set_at<0, 64, 16>(stg10_lane_3_pack, stg10_lane_0);
  set_at<16, 64, 16>(stg10_lane_3_pack, stg10_lane_1);
  set_at<32, 64, 16>(stg10_lane_3_pack, stg10_lane_2);
  set_at<48, 64, 16>(stg10_lane_3_pack, stg10_lane_3);
  auto res_stg11_update_0_sm12_15431 = stg11_generated_compute_unrolled_1(stg10_lane_3_pack);

  hw_uint<64 > stg10_lane_7_pack;
  set_at<0, 64, 16>(stg10_lane_7_pack, stg10_lane_4);
  set_at<16, 64, 16>(stg10_lane_7_pack, stg10_lane_5);
  set_at<32, 64, 16>(stg10_lane_7_pack, stg10_lane_6);
  set_at<48, 64, 16>(stg10_lane_7_pack, stg10_lane_7);
  auto res_stg11_update_0_sm12_14429 = stg11_generated_compute_unrolled_1(stg10_lane_7_pack);

  hw_uint<64 > stg10_lane_11_pack;
  set_at<0, 64, 16>(stg10_lane_11_pack, stg10_lane_8);
  set_at<16, 64, 16>(stg10_lane_11_pack, stg10_lane_9);
  set_at<32, 64, 16>(stg10_lane_11_pack, stg10_lane_10);
  set_at<48, 64, 16>(stg10_lane_11_pack, stg10_lane_11);
  auto res_stg11_update_0_sm12_13427 = stg11_generated_compute_unrolled_1(stg10_lane_11_pack);

  hw_uint<64 > stg10_lane_15_pack;
  set_at<0, 64, 16>(stg10_lane_15_pack, stg10_lane_12);
  set_at<16, 64, 16>(stg10_lane_15_pack, stg10_lane_13);
  set_at<32, 64, 16>(stg10_lane_15_pack, stg10_lane_14);
  set_at<48, 64, 16>(stg10_lane_15_pack, stg10_lane_15);
  auto res_stg11_update_0_sm12_12425 = stg11_generated_compute_unrolled_1(stg10_lane_15_pack);

  hw_uint<64 > stg10_lane_19_pack;
  set_at<0, 64, 16>(stg10_lane_19_pack, stg10_lane_16);
  set_at<16, 64, 16>(stg10_lane_19_pack, stg10_lane_17);
  set_at<32, 64, 16>(stg10_lane_19_pack, stg10_lane_18);
  set_at<48, 64, 16>(stg10_lane_19_pack, stg10_lane_19);
  auto res_stg11_update_0_sm12_11423 = stg11_generated_compute_unrolled_1(stg10_lane_19_pack);

  hw_uint<64 > stg10_lane_23_pack;
  set_at<0, 64, 16>(stg10_lane_23_pack, stg10_lane_20);
  set_at<16, 64, 16>(stg10_lane_23_pack, stg10_lane_21);
  set_at<32, 64, 16>(stg10_lane_23_pack, stg10_lane_22);
  set_at<48, 64, 16>(stg10_lane_23_pack, stg10_lane_23);
  auto res_stg11_update_0_sm12_10421 = stg11_generated_compute_unrolled_1(stg10_lane_23_pack);

  hw_uint<64 > stg10_lane_27_pack;
  set_at<0, 64, 16>(stg10_lane_27_pack, stg10_lane_24);
  set_at<16, 64, 16>(stg10_lane_27_pack, stg10_lane_25);
  set_at<32, 64, 16>(stg10_lane_27_pack, stg10_lane_26);
  set_at<48, 64, 16>(stg10_lane_27_pack, stg10_lane_27);
  auto res_stg11_update_0_sm12_9419 = stg11_generated_compute_unrolled_1(stg10_lane_27_pack);

  hw_uint<64 > stg10_lane_31_pack;
  set_at<0, 64, 16>(stg10_lane_31_pack, stg10_lane_28);
  set_at<16, 64, 16>(stg10_lane_31_pack, stg10_lane_29);
  set_at<32, 64, 16>(stg10_lane_31_pack, stg10_lane_30);
  set_at<48, 64, 16>(stg10_lane_31_pack, stg10_lane_31);
  auto res_stg11_update_0_sm12_8417 = stg11_generated_compute_unrolled_1(stg10_lane_31_pack);

  hw_uint<64 > stg10_lane_35_pack;
  set_at<0, 64, 16>(stg10_lane_35_pack, stg10_lane_32);
  set_at<16, 64, 16>(stg10_lane_35_pack, stg10_lane_33);
  set_at<32, 64, 16>(stg10_lane_35_pack, stg10_lane_34);
  set_at<48, 64, 16>(stg10_lane_35_pack, stg10_lane_35);
  auto res_stg11_update_0_sm12_7415 = stg11_generated_compute_unrolled_1(stg10_lane_35_pack);

  hw_uint<64 > stg10_lane_39_pack;
  set_at<0, 64, 16>(stg10_lane_39_pack, stg10_lane_36);
  set_at<16, 64, 16>(stg10_lane_39_pack, stg10_lane_37);
  set_at<32, 64, 16>(stg10_lane_39_pack, stg10_lane_38);
  set_at<48, 64, 16>(stg10_lane_39_pack, stg10_lane_39);
  auto res_stg11_update_0_sm12_6413 = stg11_generated_compute_unrolled_1(stg10_lane_39_pack);

  hw_uint<64 > stg10_lane_43_pack;
  set_at<0, 64, 16>(stg10_lane_43_pack, stg10_lane_40);
  set_at<16, 64, 16>(stg10_lane_43_pack, stg10_lane_41);
  set_at<32, 64, 16>(stg10_lane_43_pack, stg10_lane_42);
  set_at<48, 64, 16>(stg10_lane_43_pack, stg10_lane_43);
  auto res_stg11_update_0_sm12_5411 = stg11_generated_compute_unrolled_1(stg10_lane_43_pack);

  hw_uint<64 > stg10_lane_47_pack;
  set_at<0, 64, 16>(stg10_lane_47_pack, stg10_lane_44);
  set_at<16, 64, 16>(stg10_lane_47_pack, stg10_lane_45);
  set_at<32, 64, 16>(stg10_lane_47_pack, stg10_lane_46);
  set_at<48, 64, 16>(stg10_lane_47_pack, stg10_lane_47);
  auto res_stg11_update_0_sm12_4409 = stg11_generated_compute_unrolled_1(stg10_lane_47_pack);

  hw_uint<64 > stg10_lane_51_pack;
  set_at<0, 64, 16>(stg10_lane_51_pack, stg10_lane_48);
  set_at<16, 64, 16>(stg10_lane_51_pack, stg10_lane_49);
  set_at<32, 64, 16>(stg10_lane_51_pack, stg10_lane_50);
  set_at<48, 64, 16>(stg10_lane_51_pack, stg10_lane_51);
  auto res_stg11_update_0_sm12_3407 = stg11_generated_compute_unrolled_1(stg10_lane_51_pack);

  hw_uint<64 > stg10_lane_55_pack;
  set_at<0, 64, 16>(stg10_lane_55_pack, stg10_lane_52);
  set_at<16, 64, 16>(stg10_lane_55_pack, stg10_lane_53);
  set_at<32, 64, 16>(stg10_lane_55_pack, stg10_lane_54);
  set_at<48, 64, 16>(stg10_lane_55_pack, stg10_lane_55);
  auto res_stg11_update_0_sm12_2405 = stg11_generated_compute_unrolled_1(stg10_lane_55_pack);

  hw_uint<64 > stg10_lane_59_pack;
  set_at<0, 64, 16>(stg10_lane_59_pack, stg10_lane_56);
  set_at<16, 64, 16>(stg10_lane_59_pack, stg10_lane_57);
  set_at<32, 64, 16>(stg10_lane_59_pack, stg10_lane_58);
  set_at<48, 64, 16>(stg10_lane_59_pack, stg10_lane_59);
  auto res_stg11_update_0_sm12_1403 = stg11_generated_compute_unrolled_1(stg10_lane_59_pack);

  hw_uint<64 > stg10_lane_63_pack;
  set_at<0, 64, 16>(stg10_lane_63_pack, stg10_lane_60);
  set_at<16, 64, 16>(stg10_lane_63_pack, stg10_lane_61);
  set_at<32, 64, 16>(stg10_lane_63_pack, stg10_lane_62);
  set_at<48, 64, 16>(stg10_lane_63_pack, stg10_lane_63);
  auto res_stg11_update_0_sm12_0401 = stg11_generated_compute_unrolled_1(stg10_lane_63_pack);
  hw_uint<256 > return_value598;
  set_at<0, 256, 16>(return_value598, res_stg11_update_0_sm12_15431);
  set_at<16, 256, 16>(return_value598, res_stg11_update_0_sm12_14429);
  set_at<32, 256, 16>(return_value598, res_stg11_update_0_sm12_13427);
  set_at<48, 256, 16>(return_value598, res_stg11_update_0_sm12_12425);
  set_at<64, 256, 16>(return_value598, res_stg11_update_0_sm12_11423);
  set_at<80, 256, 16>(return_value598, res_stg11_update_0_sm12_10421);
  set_at<96, 256, 16>(return_value598, res_stg11_update_0_sm12_9419);
  set_at<112, 256, 16>(return_value598, res_stg11_update_0_sm12_8417);
  set_at<128, 256, 16>(return_value598, res_stg11_update_0_sm12_7415);
  set_at<144, 256, 16>(return_value598, res_stg11_update_0_sm12_6413);
  set_at<160, 256, 16>(return_value598, res_stg11_update_0_sm12_5411);
  set_at<176, 256, 16>(return_value598, res_stg11_update_0_sm12_4409);
  set_at<192, 256, 16>(return_value598, res_stg11_update_0_sm12_3407);
  set_at<208, 256, 16>(return_value598, res_stg11_update_0_sm12_2405);
  set_at<224, 256, 16>(return_value598, res_stg11_update_0_sm12_1403);
  set_at<240, 256, 16>(return_value598, res_stg11_update_0_sm12_0401);
  return return_value598;

}

hw_uint<256> stg12_1_cu600(hw_uint<16*64>& stg11) {
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

	
  hw_uint<64 > stg11_lane_3_pack;
  set_at<0, 64, 16>(stg11_lane_3_pack, stg11_lane_0);
  set_at<16, 64, 16>(stg11_lane_3_pack, stg11_lane_1);
  set_at<32, 64, 16>(stg11_lane_3_pack, stg11_lane_2);
  set_at<48, 64, 16>(stg11_lane_3_pack, stg11_lane_3);
  auto res_stg12_update_0_sm13_15463 = stg12_generated_compute_unrolled_1(stg11_lane_3_pack);

  hw_uint<64 > stg11_lane_7_pack;
  set_at<0, 64, 16>(stg11_lane_7_pack, stg11_lane_4);
  set_at<16, 64, 16>(stg11_lane_7_pack, stg11_lane_5);
  set_at<32, 64, 16>(stg11_lane_7_pack, stg11_lane_6);
  set_at<48, 64, 16>(stg11_lane_7_pack, stg11_lane_7);
  auto res_stg12_update_0_sm13_14461 = stg12_generated_compute_unrolled_1(stg11_lane_7_pack);

  hw_uint<64 > stg11_lane_11_pack;
  set_at<0, 64, 16>(stg11_lane_11_pack, stg11_lane_8);
  set_at<16, 64, 16>(stg11_lane_11_pack, stg11_lane_9);
  set_at<32, 64, 16>(stg11_lane_11_pack, stg11_lane_10);
  set_at<48, 64, 16>(stg11_lane_11_pack, stg11_lane_11);
  auto res_stg12_update_0_sm13_13459 = stg12_generated_compute_unrolled_1(stg11_lane_11_pack);

  hw_uint<64 > stg11_lane_15_pack;
  set_at<0, 64, 16>(stg11_lane_15_pack, stg11_lane_12);
  set_at<16, 64, 16>(stg11_lane_15_pack, stg11_lane_13);
  set_at<32, 64, 16>(stg11_lane_15_pack, stg11_lane_14);
  set_at<48, 64, 16>(stg11_lane_15_pack, stg11_lane_15);
  auto res_stg12_update_0_sm13_12457 = stg12_generated_compute_unrolled_1(stg11_lane_15_pack);

  hw_uint<64 > stg11_lane_19_pack;
  set_at<0, 64, 16>(stg11_lane_19_pack, stg11_lane_16);
  set_at<16, 64, 16>(stg11_lane_19_pack, stg11_lane_17);
  set_at<32, 64, 16>(stg11_lane_19_pack, stg11_lane_18);
  set_at<48, 64, 16>(stg11_lane_19_pack, stg11_lane_19);
  auto res_stg12_update_0_sm13_11455 = stg12_generated_compute_unrolled_1(stg11_lane_19_pack);

  hw_uint<64 > stg11_lane_23_pack;
  set_at<0, 64, 16>(stg11_lane_23_pack, stg11_lane_20);
  set_at<16, 64, 16>(stg11_lane_23_pack, stg11_lane_21);
  set_at<32, 64, 16>(stg11_lane_23_pack, stg11_lane_22);
  set_at<48, 64, 16>(stg11_lane_23_pack, stg11_lane_23);
  auto res_stg12_update_0_sm13_10453 = stg12_generated_compute_unrolled_1(stg11_lane_23_pack);

  hw_uint<64 > stg11_lane_27_pack;
  set_at<0, 64, 16>(stg11_lane_27_pack, stg11_lane_24);
  set_at<16, 64, 16>(stg11_lane_27_pack, stg11_lane_25);
  set_at<32, 64, 16>(stg11_lane_27_pack, stg11_lane_26);
  set_at<48, 64, 16>(stg11_lane_27_pack, stg11_lane_27);
  auto res_stg12_update_0_sm13_9451 = stg12_generated_compute_unrolled_1(stg11_lane_27_pack);

  hw_uint<64 > stg11_lane_31_pack;
  set_at<0, 64, 16>(stg11_lane_31_pack, stg11_lane_28);
  set_at<16, 64, 16>(stg11_lane_31_pack, stg11_lane_29);
  set_at<32, 64, 16>(stg11_lane_31_pack, stg11_lane_30);
  set_at<48, 64, 16>(stg11_lane_31_pack, stg11_lane_31);
  auto res_stg12_update_0_sm13_8449 = stg12_generated_compute_unrolled_1(stg11_lane_31_pack);

  hw_uint<64 > stg11_lane_35_pack;
  set_at<0, 64, 16>(stg11_lane_35_pack, stg11_lane_32);
  set_at<16, 64, 16>(stg11_lane_35_pack, stg11_lane_33);
  set_at<32, 64, 16>(stg11_lane_35_pack, stg11_lane_34);
  set_at<48, 64, 16>(stg11_lane_35_pack, stg11_lane_35);
  auto res_stg12_update_0_sm13_7447 = stg12_generated_compute_unrolled_1(stg11_lane_35_pack);

  hw_uint<64 > stg11_lane_39_pack;
  set_at<0, 64, 16>(stg11_lane_39_pack, stg11_lane_36);
  set_at<16, 64, 16>(stg11_lane_39_pack, stg11_lane_37);
  set_at<32, 64, 16>(stg11_lane_39_pack, stg11_lane_38);
  set_at<48, 64, 16>(stg11_lane_39_pack, stg11_lane_39);
  auto res_stg12_update_0_sm13_6445 = stg12_generated_compute_unrolled_1(stg11_lane_39_pack);

  hw_uint<64 > stg11_lane_43_pack;
  set_at<0, 64, 16>(stg11_lane_43_pack, stg11_lane_40);
  set_at<16, 64, 16>(stg11_lane_43_pack, stg11_lane_41);
  set_at<32, 64, 16>(stg11_lane_43_pack, stg11_lane_42);
  set_at<48, 64, 16>(stg11_lane_43_pack, stg11_lane_43);
  auto res_stg12_update_0_sm13_5443 = stg12_generated_compute_unrolled_1(stg11_lane_43_pack);

  hw_uint<64 > stg11_lane_47_pack;
  set_at<0, 64, 16>(stg11_lane_47_pack, stg11_lane_44);
  set_at<16, 64, 16>(stg11_lane_47_pack, stg11_lane_45);
  set_at<32, 64, 16>(stg11_lane_47_pack, stg11_lane_46);
  set_at<48, 64, 16>(stg11_lane_47_pack, stg11_lane_47);
  auto res_stg12_update_0_sm13_4441 = stg12_generated_compute_unrolled_1(stg11_lane_47_pack);

  hw_uint<64 > stg11_lane_51_pack;
  set_at<0, 64, 16>(stg11_lane_51_pack, stg11_lane_48);
  set_at<16, 64, 16>(stg11_lane_51_pack, stg11_lane_49);
  set_at<32, 64, 16>(stg11_lane_51_pack, stg11_lane_50);
  set_at<48, 64, 16>(stg11_lane_51_pack, stg11_lane_51);
  auto res_stg12_update_0_sm13_3439 = stg12_generated_compute_unrolled_1(stg11_lane_51_pack);

  hw_uint<64 > stg11_lane_55_pack;
  set_at<0, 64, 16>(stg11_lane_55_pack, stg11_lane_52);
  set_at<16, 64, 16>(stg11_lane_55_pack, stg11_lane_53);
  set_at<32, 64, 16>(stg11_lane_55_pack, stg11_lane_54);
  set_at<48, 64, 16>(stg11_lane_55_pack, stg11_lane_55);
  auto res_stg12_update_0_sm13_2437 = stg12_generated_compute_unrolled_1(stg11_lane_55_pack);

  hw_uint<64 > stg11_lane_59_pack;
  set_at<0, 64, 16>(stg11_lane_59_pack, stg11_lane_56);
  set_at<16, 64, 16>(stg11_lane_59_pack, stg11_lane_57);
  set_at<32, 64, 16>(stg11_lane_59_pack, stg11_lane_58);
  set_at<48, 64, 16>(stg11_lane_59_pack, stg11_lane_59);
  auto res_stg12_update_0_sm13_1435 = stg12_generated_compute_unrolled_1(stg11_lane_59_pack);

  hw_uint<64 > stg11_lane_63_pack;
  set_at<0, 64, 16>(stg11_lane_63_pack, stg11_lane_60);
  set_at<16, 64, 16>(stg11_lane_63_pack, stg11_lane_61);
  set_at<32, 64, 16>(stg11_lane_63_pack, stg11_lane_62);
  set_at<48, 64, 16>(stg11_lane_63_pack, stg11_lane_63);
  auto res_stg12_update_0_sm13_0433 = stg12_generated_compute_unrolled_1(stg11_lane_63_pack);
  hw_uint<256 > return_value601;
  set_at<0, 256, 16>(return_value601, res_stg12_update_0_sm13_15463);
  set_at<16, 256, 16>(return_value601, res_stg12_update_0_sm13_14461);
  set_at<32, 256, 16>(return_value601, res_stg12_update_0_sm13_13459);
  set_at<48, 256, 16>(return_value601, res_stg12_update_0_sm13_12457);
  set_at<64, 256, 16>(return_value601, res_stg12_update_0_sm13_11455);
  set_at<80, 256, 16>(return_value601, res_stg12_update_0_sm13_10453);
  set_at<96, 256, 16>(return_value601, res_stg12_update_0_sm13_9451);
  set_at<112, 256, 16>(return_value601, res_stg12_update_0_sm13_8449);
  set_at<128, 256, 16>(return_value601, res_stg12_update_0_sm13_7447);
  set_at<144, 256, 16>(return_value601, res_stg12_update_0_sm13_6445);
  set_at<160, 256, 16>(return_value601, res_stg12_update_0_sm13_5443);
  set_at<176, 256, 16>(return_value601, res_stg12_update_0_sm13_4441);
  set_at<192, 256, 16>(return_value601, res_stg12_update_0_sm13_3439);
  set_at<208, 256, 16>(return_value601, res_stg12_update_0_sm13_2437);
  set_at<224, 256, 16>(return_value601, res_stg12_update_0_sm13_1435);
  set_at<240, 256, 16>(return_value601, res_stg12_update_0_sm13_0433);
  return return_value601;

}

hw_uint<256> stg13_1_cu603(hw_uint<16*64>& stg12) {
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

	
  hw_uint<64 > stg12_lane_3_pack;
  set_at<0, 64, 16>(stg12_lane_3_pack, stg12_lane_0);
  set_at<16, 64, 16>(stg12_lane_3_pack, stg12_lane_1);
  set_at<32, 64, 16>(stg12_lane_3_pack, stg12_lane_2);
  set_at<48, 64, 16>(stg12_lane_3_pack, stg12_lane_3);
  auto res_stg13_update_0_sm14_15495 = stg13_generated_compute_unrolled_1(stg12_lane_3_pack);

  hw_uint<64 > stg12_lane_7_pack;
  set_at<0, 64, 16>(stg12_lane_7_pack, stg12_lane_4);
  set_at<16, 64, 16>(stg12_lane_7_pack, stg12_lane_5);
  set_at<32, 64, 16>(stg12_lane_7_pack, stg12_lane_6);
  set_at<48, 64, 16>(stg12_lane_7_pack, stg12_lane_7);
  auto res_stg13_update_0_sm14_14493 = stg13_generated_compute_unrolled_1(stg12_lane_7_pack);

  hw_uint<64 > stg12_lane_11_pack;
  set_at<0, 64, 16>(stg12_lane_11_pack, stg12_lane_8);
  set_at<16, 64, 16>(stg12_lane_11_pack, stg12_lane_9);
  set_at<32, 64, 16>(stg12_lane_11_pack, stg12_lane_10);
  set_at<48, 64, 16>(stg12_lane_11_pack, stg12_lane_11);
  auto res_stg13_update_0_sm14_13491 = stg13_generated_compute_unrolled_1(stg12_lane_11_pack);

  hw_uint<64 > stg12_lane_15_pack;
  set_at<0, 64, 16>(stg12_lane_15_pack, stg12_lane_12);
  set_at<16, 64, 16>(stg12_lane_15_pack, stg12_lane_13);
  set_at<32, 64, 16>(stg12_lane_15_pack, stg12_lane_14);
  set_at<48, 64, 16>(stg12_lane_15_pack, stg12_lane_15);
  auto res_stg13_update_0_sm14_12489 = stg13_generated_compute_unrolled_1(stg12_lane_15_pack);

  hw_uint<64 > stg12_lane_19_pack;
  set_at<0, 64, 16>(stg12_lane_19_pack, stg12_lane_16);
  set_at<16, 64, 16>(stg12_lane_19_pack, stg12_lane_17);
  set_at<32, 64, 16>(stg12_lane_19_pack, stg12_lane_18);
  set_at<48, 64, 16>(stg12_lane_19_pack, stg12_lane_19);
  auto res_stg13_update_0_sm14_11487 = stg13_generated_compute_unrolled_1(stg12_lane_19_pack);

  hw_uint<64 > stg12_lane_23_pack;
  set_at<0, 64, 16>(stg12_lane_23_pack, stg12_lane_20);
  set_at<16, 64, 16>(stg12_lane_23_pack, stg12_lane_21);
  set_at<32, 64, 16>(stg12_lane_23_pack, stg12_lane_22);
  set_at<48, 64, 16>(stg12_lane_23_pack, stg12_lane_23);
  auto res_stg13_update_0_sm14_10485 = stg13_generated_compute_unrolled_1(stg12_lane_23_pack);

  hw_uint<64 > stg12_lane_27_pack;
  set_at<0, 64, 16>(stg12_lane_27_pack, stg12_lane_24);
  set_at<16, 64, 16>(stg12_lane_27_pack, stg12_lane_25);
  set_at<32, 64, 16>(stg12_lane_27_pack, stg12_lane_26);
  set_at<48, 64, 16>(stg12_lane_27_pack, stg12_lane_27);
  auto res_stg13_update_0_sm14_9483 = stg13_generated_compute_unrolled_1(stg12_lane_27_pack);

  hw_uint<64 > stg12_lane_31_pack;
  set_at<0, 64, 16>(stg12_lane_31_pack, stg12_lane_28);
  set_at<16, 64, 16>(stg12_lane_31_pack, stg12_lane_29);
  set_at<32, 64, 16>(stg12_lane_31_pack, stg12_lane_30);
  set_at<48, 64, 16>(stg12_lane_31_pack, stg12_lane_31);
  auto res_stg13_update_0_sm14_8481 = stg13_generated_compute_unrolled_1(stg12_lane_31_pack);

  hw_uint<64 > stg12_lane_35_pack;
  set_at<0, 64, 16>(stg12_lane_35_pack, stg12_lane_32);
  set_at<16, 64, 16>(stg12_lane_35_pack, stg12_lane_33);
  set_at<32, 64, 16>(stg12_lane_35_pack, stg12_lane_34);
  set_at<48, 64, 16>(stg12_lane_35_pack, stg12_lane_35);
  auto res_stg13_update_0_sm14_7479 = stg13_generated_compute_unrolled_1(stg12_lane_35_pack);

  hw_uint<64 > stg12_lane_39_pack;
  set_at<0, 64, 16>(stg12_lane_39_pack, stg12_lane_36);
  set_at<16, 64, 16>(stg12_lane_39_pack, stg12_lane_37);
  set_at<32, 64, 16>(stg12_lane_39_pack, stg12_lane_38);
  set_at<48, 64, 16>(stg12_lane_39_pack, stg12_lane_39);
  auto res_stg13_update_0_sm14_6477 = stg13_generated_compute_unrolled_1(stg12_lane_39_pack);

  hw_uint<64 > stg12_lane_43_pack;
  set_at<0, 64, 16>(stg12_lane_43_pack, stg12_lane_40);
  set_at<16, 64, 16>(stg12_lane_43_pack, stg12_lane_41);
  set_at<32, 64, 16>(stg12_lane_43_pack, stg12_lane_42);
  set_at<48, 64, 16>(stg12_lane_43_pack, stg12_lane_43);
  auto res_stg13_update_0_sm14_5475 = stg13_generated_compute_unrolled_1(stg12_lane_43_pack);

  hw_uint<64 > stg12_lane_47_pack;
  set_at<0, 64, 16>(stg12_lane_47_pack, stg12_lane_44);
  set_at<16, 64, 16>(stg12_lane_47_pack, stg12_lane_45);
  set_at<32, 64, 16>(stg12_lane_47_pack, stg12_lane_46);
  set_at<48, 64, 16>(stg12_lane_47_pack, stg12_lane_47);
  auto res_stg13_update_0_sm14_4473 = stg13_generated_compute_unrolled_1(stg12_lane_47_pack);

  hw_uint<64 > stg12_lane_51_pack;
  set_at<0, 64, 16>(stg12_lane_51_pack, stg12_lane_48);
  set_at<16, 64, 16>(stg12_lane_51_pack, stg12_lane_49);
  set_at<32, 64, 16>(stg12_lane_51_pack, stg12_lane_50);
  set_at<48, 64, 16>(stg12_lane_51_pack, stg12_lane_51);
  auto res_stg13_update_0_sm14_3471 = stg13_generated_compute_unrolled_1(stg12_lane_51_pack);

  hw_uint<64 > stg12_lane_55_pack;
  set_at<0, 64, 16>(stg12_lane_55_pack, stg12_lane_52);
  set_at<16, 64, 16>(stg12_lane_55_pack, stg12_lane_53);
  set_at<32, 64, 16>(stg12_lane_55_pack, stg12_lane_54);
  set_at<48, 64, 16>(stg12_lane_55_pack, stg12_lane_55);
  auto res_stg13_update_0_sm14_2469 = stg13_generated_compute_unrolled_1(stg12_lane_55_pack);

  hw_uint<64 > stg12_lane_59_pack;
  set_at<0, 64, 16>(stg12_lane_59_pack, stg12_lane_56);
  set_at<16, 64, 16>(stg12_lane_59_pack, stg12_lane_57);
  set_at<32, 64, 16>(stg12_lane_59_pack, stg12_lane_58);
  set_at<48, 64, 16>(stg12_lane_59_pack, stg12_lane_59);
  auto res_stg13_update_0_sm14_1467 = stg13_generated_compute_unrolled_1(stg12_lane_59_pack);

  hw_uint<64 > stg12_lane_63_pack;
  set_at<0, 64, 16>(stg12_lane_63_pack, stg12_lane_60);
  set_at<16, 64, 16>(stg12_lane_63_pack, stg12_lane_61);
  set_at<32, 64, 16>(stg12_lane_63_pack, stg12_lane_62);
  set_at<48, 64, 16>(stg12_lane_63_pack, stg12_lane_63);
  auto res_stg13_update_0_sm14_0465 = stg13_generated_compute_unrolled_1(stg12_lane_63_pack);
  hw_uint<256 > return_value604;
  set_at<0, 256, 16>(return_value604, res_stg13_update_0_sm14_15495);
  set_at<16, 256, 16>(return_value604, res_stg13_update_0_sm14_14493);
  set_at<32, 256, 16>(return_value604, res_stg13_update_0_sm14_13491);
  set_at<48, 256, 16>(return_value604, res_stg13_update_0_sm14_12489);
  set_at<64, 256, 16>(return_value604, res_stg13_update_0_sm14_11487);
  set_at<80, 256, 16>(return_value604, res_stg13_update_0_sm14_10485);
  set_at<96, 256, 16>(return_value604, res_stg13_update_0_sm14_9483);
  set_at<112, 256, 16>(return_value604, res_stg13_update_0_sm14_8481);
  set_at<128, 256, 16>(return_value604, res_stg13_update_0_sm14_7479);
  set_at<144, 256, 16>(return_value604, res_stg13_update_0_sm14_6477);
  set_at<160, 256, 16>(return_value604, res_stg13_update_0_sm14_5475);
  set_at<176, 256, 16>(return_value604, res_stg13_update_0_sm14_4473);
  set_at<192, 256, 16>(return_value604, res_stg13_update_0_sm14_3471);
  set_at<208, 256, 16>(return_value604, res_stg13_update_0_sm14_2469);
  set_at<224, 256, 16>(return_value604, res_stg13_update_0_sm14_1467);
  set_at<240, 256, 16>(return_value604, res_stg13_update_0_sm14_0465);
  return return_value604;

}

hw_uint<256> stg14_1_cu606(hw_uint<16*64>& stg13) {
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

	
  hw_uint<64 > stg13_lane_3_pack;
  set_at<0, 64, 16>(stg13_lane_3_pack, stg13_lane_0);
  set_at<16, 64, 16>(stg13_lane_3_pack, stg13_lane_1);
  set_at<32, 64, 16>(stg13_lane_3_pack, stg13_lane_2);
  set_at<48, 64, 16>(stg13_lane_3_pack, stg13_lane_3);
  auto res_stg14_update_0_sm15_15527 = stg14_generated_compute_unrolled_1(stg13_lane_3_pack);

  hw_uint<64 > stg13_lane_7_pack;
  set_at<0, 64, 16>(stg13_lane_7_pack, stg13_lane_4);
  set_at<16, 64, 16>(stg13_lane_7_pack, stg13_lane_5);
  set_at<32, 64, 16>(stg13_lane_7_pack, stg13_lane_6);
  set_at<48, 64, 16>(stg13_lane_7_pack, stg13_lane_7);
  auto res_stg14_update_0_sm15_14525 = stg14_generated_compute_unrolled_1(stg13_lane_7_pack);

  hw_uint<64 > stg13_lane_11_pack;
  set_at<0, 64, 16>(stg13_lane_11_pack, stg13_lane_8);
  set_at<16, 64, 16>(stg13_lane_11_pack, stg13_lane_9);
  set_at<32, 64, 16>(stg13_lane_11_pack, stg13_lane_10);
  set_at<48, 64, 16>(stg13_lane_11_pack, stg13_lane_11);
  auto res_stg14_update_0_sm15_13523 = stg14_generated_compute_unrolled_1(stg13_lane_11_pack);

  hw_uint<64 > stg13_lane_15_pack;
  set_at<0, 64, 16>(stg13_lane_15_pack, stg13_lane_12);
  set_at<16, 64, 16>(stg13_lane_15_pack, stg13_lane_13);
  set_at<32, 64, 16>(stg13_lane_15_pack, stg13_lane_14);
  set_at<48, 64, 16>(stg13_lane_15_pack, stg13_lane_15);
  auto res_stg14_update_0_sm15_12521 = stg14_generated_compute_unrolled_1(stg13_lane_15_pack);

  hw_uint<64 > stg13_lane_19_pack;
  set_at<0, 64, 16>(stg13_lane_19_pack, stg13_lane_16);
  set_at<16, 64, 16>(stg13_lane_19_pack, stg13_lane_17);
  set_at<32, 64, 16>(stg13_lane_19_pack, stg13_lane_18);
  set_at<48, 64, 16>(stg13_lane_19_pack, stg13_lane_19);
  auto res_stg14_update_0_sm15_11519 = stg14_generated_compute_unrolled_1(stg13_lane_19_pack);

  hw_uint<64 > stg13_lane_23_pack;
  set_at<0, 64, 16>(stg13_lane_23_pack, stg13_lane_20);
  set_at<16, 64, 16>(stg13_lane_23_pack, stg13_lane_21);
  set_at<32, 64, 16>(stg13_lane_23_pack, stg13_lane_22);
  set_at<48, 64, 16>(stg13_lane_23_pack, stg13_lane_23);
  auto res_stg14_update_0_sm15_10517 = stg14_generated_compute_unrolled_1(stg13_lane_23_pack);

  hw_uint<64 > stg13_lane_27_pack;
  set_at<0, 64, 16>(stg13_lane_27_pack, stg13_lane_24);
  set_at<16, 64, 16>(stg13_lane_27_pack, stg13_lane_25);
  set_at<32, 64, 16>(stg13_lane_27_pack, stg13_lane_26);
  set_at<48, 64, 16>(stg13_lane_27_pack, stg13_lane_27);
  auto res_stg14_update_0_sm15_9515 = stg14_generated_compute_unrolled_1(stg13_lane_27_pack);

  hw_uint<64 > stg13_lane_31_pack;
  set_at<0, 64, 16>(stg13_lane_31_pack, stg13_lane_28);
  set_at<16, 64, 16>(stg13_lane_31_pack, stg13_lane_29);
  set_at<32, 64, 16>(stg13_lane_31_pack, stg13_lane_30);
  set_at<48, 64, 16>(stg13_lane_31_pack, stg13_lane_31);
  auto res_stg14_update_0_sm15_8513 = stg14_generated_compute_unrolled_1(stg13_lane_31_pack);

  hw_uint<64 > stg13_lane_35_pack;
  set_at<0, 64, 16>(stg13_lane_35_pack, stg13_lane_32);
  set_at<16, 64, 16>(stg13_lane_35_pack, stg13_lane_33);
  set_at<32, 64, 16>(stg13_lane_35_pack, stg13_lane_34);
  set_at<48, 64, 16>(stg13_lane_35_pack, stg13_lane_35);
  auto res_stg14_update_0_sm15_7511 = stg14_generated_compute_unrolled_1(stg13_lane_35_pack);

  hw_uint<64 > stg13_lane_39_pack;
  set_at<0, 64, 16>(stg13_lane_39_pack, stg13_lane_36);
  set_at<16, 64, 16>(stg13_lane_39_pack, stg13_lane_37);
  set_at<32, 64, 16>(stg13_lane_39_pack, stg13_lane_38);
  set_at<48, 64, 16>(stg13_lane_39_pack, stg13_lane_39);
  auto res_stg14_update_0_sm15_6509 = stg14_generated_compute_unrolled_1(stg13_lane_39_pack);

  hw_uint<64 > stg13_lane_43_pack;
  set_at<0, 64, 16>(stg13_lane_43_pack, stg13_lane_40);
  set_at<16, 64, 16>(stg13_lane_43_pack, stg13_lane_41);
  set_at<32, 64, 16>(stg13_lane_43_pack, stg13_lane_42);
  set_at<48, 64, 16>(stg13_lane_43_pack, stg13_lane_43);
  auto res_stg14_update_0_sm15_5507 = stg14_generated_compute_unrolled_1(stg13_lane_43_pack);

  hw_uint<64 > stg13_lane_47_pack;
  set_at<0, 64, 16>(stg13_lane_47_pack, stg13_lane_44);
  set_at<16, 64, 16>(stg13_lane_47_pack, stg13_lane_45);
  set_at<32, 64, 16>(stg13_lane_47_pack, stg13_lane_46);
  set_at<48, 64, 16>(stg13_lane_47_pack, stg13_lane_47);
  auto res_stg14_update_0_sm15_4505 = stg14_generated_compute_unrolled_1(stg13_lane_47_pack);

  hw_uint<64 > stg13_lane_51_pack;
  set_at<0, 64, 16>(stg13_lane_51_pack, stg13_lane_48);
  set_at<16, 64, 16>(stg13_lane_51_pack, stg13_lane_49);
  set_at<32, 64, 16>(stg13_lane_51_pack, stg13_lane_50);
  set_at<48, 64, 16>(stg13_lane_51_pack, stg13_lane_51);
  auto res_stg14_update_0_sm15_3503 = stg14_generated_compute_unrolled_1(stg13_lane_51_pack);

  hw_uint<64 > stg13_lane_55_pack;
  set_at<0, 64, 16>(stg13_lane_55_pack, stg13_lane_52);
  set_at<16, 64, 16>(stg13_lane_55_pack, stg13_lane_53);
  set_at<32, 64, 16>(stg13_lane_55_pack, stg13_lane_54);
  set_at<48, 64, 16>(stg13_lane_55_pack, stg13_lane_55);
  auto res_stg14_update_0_sm15_2501 = stg14_generated_compute_unrolled_1(stg13_lane_55_pack);

  hw_uint<64 > stg13_lane_59_pack;
  set_at<0, 64, 16>(stg13_lane_59_pack, stg13_lane_56);
  set_at<16, 64, 16>(stg13_lane_59_pack, stg13_lane_57);
  set_at<32, 64, 16>(stg13_lane_59_pack, stg13_lane_58);
  set_at<48, 64, 16>(stg13_lane_59_pack, stg13_lane_59);
  auto res_stg14_update_0_sm15_1499 = stg14_generated_compute_unrolled_1(stg13_lane_59_pack);

  hw_uint<64 > stg13_lane_63_pack;
  set_at<0, 64, 16>(stg13_lane_63_pack, stg13_lane_60);
  set_at<16, 64, 16>(stg13_lane_63_pack, stg13_lane_61);
  set_at<32, 64, 16>(stg13_lane_63_pack, stg13_lane_62);
  set_at<48, 64, 16>(stg13_lane_63_pack, stg13_lane_63);
  auto res_stg14_update_0_sm15_0497 = stg14_generated_compute_unrolled_1(stg13_lane_63_pack);
  hw_uint<256 > return_value607;
  set_at<0, 256, 16>(return_value607, res_stg14_update_0_sm15_15527);
  set_at<16, 256, 16>(return_value607, res_stg14_update_0_sm15_14525);
  set_at<32, 256, 16>(return_value607, res_stg14_update_0_sm15_13523);
  set_at<48, 256, 16>(return_value607, res_stg14_update_0_sm15_12521);
  set_at<64, 256, 16>(return_value607, res_stg14_update_0_sm15_11519);
  set_at<80, 256, 16>(return_value607, res_stg14_update_0_sm15_10517);
  set_at<96, 256, 16>(return_value607, res_stg14_update_0_sm15_9515);
  set_at<112, 256, 16>(return_value607, res_stg14_update_0_sm15_8513);
  set_at<128, 256, 16>(return_value607, res_stg14_update_0_sm15_7511);
  set_at<144, 256, 16>(return_value607, res_stg14_update_0_sm15_6509);
  set_at<160, 256, 16>(return_value607, res_stg14_update_0_sm15_5507);
  set_at<176, 256, 16>(return_value607, res_stg14_update_0_sm15_4505);
  set_at<192, 256, 16>(return_value607, res_stg14_update_0_sm15_3503);
  set_at<208, 256, 16>(return_value607, res_stg14_update_0_sm15_2501);
  set_at<224, 256, 16>(return_value607, res_stg14_update_0_sm15_1499);
  set_at<240, 256, 16>(return_value607, res_stg14_update_0_sm15_0497);
  return return_value607;

}

hw_uint<256> jac4_16_1_cu609(hw_uint<16*16>& stg14) {
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

	
  hw_uint<16 > stg14_lane_0_pack;
  set_at<0, 16, 16>(stg14_lane_0_pack, stg14_lane_0);
  auto res_jac4_16_update_0_sm16_15559 = jac4_16_generated_compute_unrolled_1(stg14_lane_0_pack);

  hw_uint<16 > stg14_lane_1_pack;
  set_at<0, 16, 16>(stg14_lane_1_pack, stg14_lane_1);
  auto res_jac4_16_update_0_sm16_14557 = jac4_16_generated_compute_unrolled_1(stg14_lane_1_pack);

  hw_uint<16 > stg14_lane_2_pack;
  set_at<0, 16, 16>(stg14_lane_2_pack, stg14_lane_2);
  auto res_jac4_16_update_0_sm16_13555 = jac4_16_generated_compute_unrolled_1(stg14_lane_2_pack);

  hw_uint<16 > stg14_lane_3_pack;
  set_at<0, 16, 16>(stg14_lane_3_pack, stg14_lane_3);
  auto res_jac4_16_update_0_sm16_12553 = jac4_16_generated_compute_unrolled_1(stg14_lane_3_pack);

  hw_uint<16 > stg14_lane_4_pack;
  set_at<0, 16, 16>(stg14_lane_4_pack, stg14_lane_4);
  auto res_jac4_16_update_0_sm16_11551 = jac4_16_generated_compute_unrolled_1(stg14_lane_4_pack);

  hw_uint<16 > stg14_lane_5_pack;
  set_at<0, 16, 16>(stg14_lane_5_pack, stg14_lane_5);
  auto res_jac4_16_update_0_sm16_10549 = jac4_16_generated_compute_unrolled_1(stg14_lane_5_pack);

  hw_uint<16 > stg14_lane_6_pack;
  set_at<0, 16, 16>(stg14_lane_6_pack, stg14_lane_6);
  auto res_jac4_16_update_0_sm16_9547 = jac4_16_generated_compute_unrolled_1(stg14_lane_6_pack);

  hw_uint<16 > stg14_lane_7_pack;
  set_at<0, 16, 16>(stg14_lane_7_pack, stg14_lane_7);
  auto res_jac4_16_update_0_sm16_8545 = jac4_16_generated_compute_unrolled_1(stg14_lane_7_pack);

  hw_uint<16 > stg14_lane_8_pack;
  set_at<0, 16, 16>(stg14_lane_8_pack, stg14_lane_8);
  auto res_jac4_16_update_0_sm16_7543 = jac4_16_generated_compute_unrolled_1(stg14_lane_8_pack);

  hw_uint<16 > stg14_lane_9_pack;
  set_at<0, 16, 16>(stg14_lane_9_pack, stg14_lane_9);
  auto res_jac4_16_update_0_sm16_6541 = jac4_16_generated_compute_unrolled_1(stg14_lane_9_pack);

  hw_uint<16 > stg14_lane_10_pack;
  set_at<0, 16, 16>(stg14_lane_10_pack, stg14_lane_10);
  auto res_jac4_16_update_0_sm16_5539 = jac4_16_generated_compute_unrolled_1(stg14_lane_10_pack);

  hw_uint<16 > stg14_lane_11_pack;
  set_at<0, 16, 16>(stg14_lane_11_pack, stg14_lane_11);
  auto res_jac4_16_update_0_sm16_4537 = jac4_16_generated_compute_unrolled_1(stg14_lane_11_pack);

  hw_uint<16 > stg14_lane_12_pack;
  set_at<0, 16, 16>(stg14_lane_12_pack, stg14_lane_12);
  auto res_jac4_16_update_0_sm16_3535 = jac4_16_generated_compute_unrolled_1(stg14_lane_12_pack);

  hw_uint<16 > stg14_lane_13_pack;
  set_at<0, 16, 16>(stg14_lane_13_pack, stg14_lane_13);
  auto res_jac4_16_update_0_sm16_2533 = jac4_16_generated_compute_unrolled_1(stg14_lane_13_pack);

  hw_uint<16 > stg14_lane_14_pack;
  set_at<0, 16, 16>(stg14_lane_14_pack, stg14_lane_14);
  auto res_jac4_16_update_0_sm16_1531 = jac4_16_generated_compute_unrolled_1(stg14_lane_14_pack);

  hw_uint<16 > stg14_lane_15_pack;
  set_at<0, 16, 16>(stg14_lane_15_pack, stg14_lane_15);
  auto res_jac4_16_update_0_sm16_0529 = jac4_16_generated_compute_unrolled_1(stg14_lane_15_pack);
  hw_uint<256 > return_value610;
  set_at<0, 256, 16>(return_value610, res_jac4_16_update_0_sm16_15559);
  set_at<16, 256, 16>(return_value610, res_jac4_16_update_0_sm16_14557);
  set_at<32, 256, 16>(return_value610, res_jac4_16_update_0_sm16_13555);
  set_at<48, 256, 16>(return_value610, res_jac4_16_update_0_sm16_12553);
  set_at<64, 256, 16>(return_value610, res_jac4_16_update_0_sm16_11551);
  set_at<80, 256, 16>(return_value610, res_jac4_16_update_0_sm16_10549);
  set_at<96, 256, 16>(return_value610, res_jac4_16_update_0_sm16_9547);
  set_at<112, 256, 16>(return_value610, res_jac4_16_update_0_sm16_8545);
  set_at<128, 256, 16>(return_value610, res_jac4_16_update_0_sm16_7543);
  set_at<144, 256, 16>(return_value610, res_jac4_16_update_0_sm16_6541);
  set_at<160, 256, 16>(return_value610, res_jac4_16_update_0_sm16_5539);
  set_at<176, 256, 16>(return_value610, res_jac4_16_update_0_sm16_4537);
  set_at<192, 256, 16>(return_value610, res_jac4_16_update_0_sm16_3535);
  set_at<208, 256, 16>(return_value610, res_jac4_16_update_0_sm16_2533);
  set_at<224, 256, 16>(return_value610, res_jac4_16_update_0_sm16_1531);
  set_at<240, 256, 16>(return_value610, res_jac4_16_update_0_sm16_0529);
  return return_value610;

}

