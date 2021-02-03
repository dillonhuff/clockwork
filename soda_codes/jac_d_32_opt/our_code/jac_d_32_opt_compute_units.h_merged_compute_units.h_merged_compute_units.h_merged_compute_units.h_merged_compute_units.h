#include "jac_d_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> in_ld1_cu3313(hw_uint<16*32>& in) {
  return in;
}

hw_uint<512> stg11_ld17_cu3315(hw_uint<16*32>& stg11) {
  return stg11;
}

hw_uint<512> stg12_ld21_cu3317(hw_uint<16*32>& stg12) {
  return stg12;
}

hw_uint<512> stg14_ld29_cu3319(hw_uint<16*32>& stg14) {
  return stg14;
}

hw_uint<512> stg5_ld45_cu3321(hw_uint<16*32>& stg5) {
  return stg5;
}

hw_uint<512> in_to_gp_20_ld65_cu3323(hw_uint<16*32>& in_to_gp_20) {
  return in_to_gp_20;
}

hw_uint<512> stg0_to_gp_84_ld69_cu3325(hw_uint<16*32>& stg0_to_gp_84) {
  return stg0_to_gp_84;
}

hw_uint<512> stg14_to_gp_128_ld93_cu3327(hw_uint<16*32>& stg14_to_gp_128) {
  return stg14_to_gp_128;
}

hw_uint<512> stg10_ld13_cu3329(hw_uint<16*32>& stg10) {
  return stg10;
}

hw_uint<512> in_1_cu3331(hw_uint<16*32>& in_off_chip) {
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
  auto res_in_update_0_sm137_31815 = in_generated_compute_unrolled_1(in_off_chip_lane_0_pack);

  hw_uint<16 > in_off_chip_lane_1_pack;
  set_at<0, 16, 16>(in_off_chip_lane_1_pack, in_off_chip_lane_1);
  auto res_in_update_0_sm137_30813 = in_generated_compute_unrolled_1(in_off_chip_lane_1_pack);

  hw_uint<16 > in_off_chip_lane_2_pack;
  set_at<0, 16, 16>(in_off_chip_lane_2_pack, in_off_chip_lane_2);
  auto res_in_update_0_sm137_29811 = in_generated_compute_unrolled_1(in_off_chip_lane_2_pack);

  hw_uint<16 > in_off_chip_lane_3_pack;
  set_at<0, 16, 16>(in_off_chip_lane_3_pack, in_off_chip_lane_3);
  auto res_in_update_0_sm137_28809 = in_generated_compute_unrolled_1(in_off_chip_lane_3_pack);

  hw_uint<16 > in_off_chip_lane_4_pack;
  set_at<0, 16, 16>(in_off_chip_lane_4_pack, in_off_chip_lane_4);
  auto res_in_update_0_sm137_27807 = in_generated_compute_unrolled_1(in_off_chip_lane_4_pack);

  hw_uint<16 > in_off_chip_lane_5_pack;
  set_at<0, 16, 16>(in_off_chip_lane_5_pack, in_off_chip_lane_5);
  auto res_in_update_0_sm137_26805 = in_generated_compute_unrolled_1(in_off_chip_lane_5_pack);

  hw_uint<16 > in_off_chip_lane_6_pack;
  set_at<0, 16, 16>(in_off_chip_lane_6_pack, in_off_chip_lane_6);
  auto res_in_update_0_sm137_25803 = in_generated_compute_unrolled_1(in_off_chip_lane_6_pack);

  hw_uint<16 > in_off_chip_lane_7_pack;
  set_at<0, 16, 16>(in_off_chip_lane_7_pack, in_off_chip_lane_7);
  auto res_in_update_0_sm137_24801 = in_generated_compute_unrolled_1(in_off_chip_lane_7_pack);

  hw_uint<16 > in_off_chip_lane_8_pack;
  set_at<0, 16, 16>(in_off_chip_lane_8_pack, in_off_chip_lane_8);
  auto res_in_update_0_sm137_23799 = in_generated_compute_unrolled_1(in_off_chip_lane_8_pack);

  hw_uint<16 > in_off_chip_lane_9_pack;
  set_at<0, 16, 16>(in_off_chip_lane_9_pack, in_off_chip_lane_9);
  auto res_in_update_0_sm137_22797 = in_generated_compute_unrolled_1(in_off_chip_lane_9_pack);

  hw_uint<16 > in_off_chip_lane_10_pack;
  set_at<0, 16, 16>(in_off_chip_lane_10_pack, in_off_chip_lane_10);
  auto res_in_update_0_sm137_21795 = in_generated_compute_unrolled_1(in_off_chip_lane_10_pack);

  hw_uint<16 > in_off_chip_lane_11_pack;
  set_at<0, 16, 16>(in_off_chip_lane_11_pack, in_off_chip_lane_11);
  auto res_in_update_0_sm137_20793 = in_generated_compute_unrolled_1(in_off_chip_lane_11_pack);

  hw_uint<16 > in_off_chip_lane_12_pack;
  set_at<0, 16, 16>(in_off_chip_lane_12_pack, in_off_chip_lane_12);
  auto res_in_update_0_sm137_19791 = in_generated_compute_unrolled_1(in_off_chip_lane_12_pack);

  hw_uint<16 > in_off_chip_lane_13_pack;
  set_at<0, 16, 16>(in_off_chip_lane_13_pack, in_off_chip_lane_13);
  auto res_in_update_0_sm137_18789 = in_generated_compute_unrolled_1(in_off_chip_lane_13_pack);

  hw_uint<16 > in_off_chip_lane_14_pack;
  set_at<0, 16, 16>(in_off_chip_lane_14_pack, in_off_chip_lane_14);
  auto res_in_update_0_sm137_17787 = in_generated_compute_unrolled_1(in_off_chip_lane_14_pack);

  hw_uint<16 > in_off_chip_lane_15_pack;
  set_at<0, 16, 16>(in_off_chip_lane_15_pack, in_off_chip_lane_15);
  auto res_in_update_0_sm137_16785 = in_generated_compute_unrolled_1(in_off_chip_lane_15_pack);

  hw_uint<16 > in_off_chip_lane_16_pack;
  set_at<0, 16, 16>(in_off_chip_lane_16_pack, in_off_chip_lane_16);
  auto res_in_update_0_sm137_15783 = in_generated_compute_unrolled_1(in_off_chip_lane_16_pack);

  hw_uint<16 > in_off_chip_lane_17_pack;
  set_at<0, 16, 16>(in_off_chip_lane_17_pack, in_off_chip_lane_17);
  auto res_in_update_0_sm137_14781 = in_generated_compute_unrolled_1(in_off_chip_lane_17_pack);

  hw_uint<16 > in_off_chip_lane_18_pack;
  set_at<0, 16, 16>(in_off_chip_lane_18_pack, in_off_chip_lane_18);
  auto res_in_update_0_sm137_13779 = in_generated_compute_unrolled_1(in_off_chip_lane_18_pack);

  hw_uint<16 > in_off_chip_lane_19_pack;
  set_at<0, 16, 16>(in_off_chip_lane_19_pack, in_off_chip_lane_19);
  auto res_in_update_0_sm137_12777 = in_generated_compute_unrolled_1(in_off_chip_lane_19_pack);

  hw_uint<16 > in_off_chip_lane_20_pack;
  set_at<0, 16, 16>(in_off_chip_lane_20_pack, in_off_chip_lane_20);
  auto res_in_update_0_sm137_11775 = in_generated_compute_unrolled_1(in_off_chip_lane_20_pack);

  hw_uint<16 > in_off_chip_lane_21_pack;
  set_at<0, 16, 16>(in_off_chip_lane_21_pack, in_off_chip_lane_21);
  auto res_in_update_0_sm137_10773 = in_generated_compute_unrolled_1(in_off_chip_lane_21_pack);

  hw_uint<16 > in_off_chip_lane_22_pack;
  set_at<0, 16, 16>(in_off_chip_lane_22_pack, in_off_chip_lane_22);
  auto res_in_update_0_sm137_9771 = in_generated_compute_unrolled_1(in_off_chip_lane_22_pack);

  hw_uint<16 > in_off_chip_lane_23_pack;
  set_at<0, 16, 16>(in_off_chip_lane_23_pack, in_off_chip_lane_23);
  auto res_in_update_0_sm137_8769 = in_generated_compute_unrolled_1(in_off_chip_lane_23_pack);

  hw_uint<16 > in_off_chip_lane_24_pack;
  set_at<0, 16, 16>(in_off_chip_lane_24_pack, in_off_chip_lane_24);
  auto res_in_update_0_sm137_7767 = in_generated_compute_unrolled_1(in_off_chip_lane_24_pack);

  hw_uint<16 > in_off_chip_lane_25_pack;
  set_at<0, 16, 16>(in_off_chip_lane_25_pack, in_off_chip_lane_25);
  auto res_in_update_0_sm137_6765 = in_generated_compute_unrolled_1(in_off_chip_lane_25_pack);

  hw_uint<16 > in_off_chip_lane_26_pack;
  set_at<0, 16, 16>(in_off_chip_lane_26_pack, in_off_chip_lane_26);
  auto res_in_update_0_sm137_5763 = in_generated_compute_unrolled_1(in_off_chip_lane_26_pack);

  hw_uint<16 > in_off_chip_lane_27_pack;
  set_at<0, 16, 16>(in_off_chip_lane_27_pack, in_off_chip_lane_27);
  auto res_in_update_0_sm137_4761 = in_generated_compute_unrolled_1(in_off_chip_lane_27_pack);

  hw_uint<16 > in_off_chip_lane_28_pack;
  set_at<0, 16, 16>(in_off_chip_lane_28_pack, in_off_chip_lane_28);
  auto res_in_update_0_sm137_3759 = in_generated_compute_unrolled_1(in_off_chip_lane_28_pack);

  hw_uint<16 > in_off_chip_lane_29_pack;
  set_at<0, 16, 16>(in_off_chip_lane_29_pack, in_off_chip_lane_29);
  auto res_in_update_0_sm137_2757 = in_generated_compute_unrolled_1(in_off_chip_lane_29_pack);

  hw_uint<16 > in_off_chip_lane_30_pack;
  set_at<0, 16, 16>(in_off_chip_lane_30_pack, in_off_chip_lane_30);
  auto res_in_update_0_sm137_1755 = in_generated_compute_unrolled_1(in_off_chip_lane_30_pack);

  hw_uint<16 > in_off_chip_lane_31_pack;
  set_at<0, 16, 16>(in_off_chip_lane_31_pack, in_off_chip_lane_31);
  auto res_in_update_0_sm137_0753 = in_generated_compute_unrolled_1(in_off_chip_lane_31_pack);
  hw_uint<512 > return_value3332;
  set_at<0, 512, 16>(return_value3332, res_in_update_0_sm137_31815);
  set_at<16, 512, 16>(return_value3332, res_in_update_0_sm137_30813);
  set_at<32, 512, 16>(return_value3332, res_in_update_0_sm137_29811);
  set_at<48, 512, 16>(return_value3332, res_in_update_0_sm137_28809);
  set_at<64, 512, 16>(return_value3332, res_in_update_0_sm137_27807);
  set_at<80, 512, 16>(return_value3332, res_in_update_0_sm137_26805);
  set_at<96, 512, 16>(return_value3332, res_in_update_0_sm137_25803);
  set_at<112, 512, 16>(return_value3332, res_in_update_0_sm137_24801);
  set_at<128, 512, 16>(return_value3332, res_in_update_0_sm137_23799);
  set_at<144, 512, 16>(return_value3332, res_in_update_0_sm137_22797);
  set_at<160, 512, 16>(return_value3332, res_in_update_0_sm137_21795);
  set_at<176, 512, 16>(return_value3332, res_in_update_0_sm137_20793);
  set_at<192, 512, 16>(return_value3332, res_in_update_0_sm137_19791);
  set_at<208, 512, 16>(return_value3332, res_in_update_0_sm137_18789);
  set_at<224, 512, 16>(return_value3332, res_in_update_0_sm137_17787);
  set_at<240, 512, 16>(return_value3332, res_in_update_0_sm137_16785);
  set_at<256, 512, 16>(return_value3332, res_in_update_0_sm137_15783);
  set_at<272, 512, 16>(return_value3332, res_in_update_0_sm137_14781);
  set_at<288, 512, 16>(return_value3332, res_in_update_0_sm137_13779);
  set_at<304, 512, 16>(return_value3332, res_in_update_0_sm137_12777);
  set_at<320, 512, 16>(return_value3332, res_in_update_0_sm137_11775);
  set_at<336, 512, 16>(return_value3332, res_in_update_0_sm137_10773);
  set_at<352, 512, 16>(return_value3332, res_in_update_0_sm137_9771);
  set_at<368, 512, 16>(return_value3332, res_in_update_0_sm137_8769);
  set_at<384, 512, 16>(return_value3332, res_in_update_0_sm137_7767);
  set_at<400, 512, 16>(return_value3332, res_in_update_0_sm137_6765);
  set_at<416, 512, 16>(return_value3332, res_in_update_0_sm137_5763);
  set_at<432, 512, 16>(return_value3332, res_in_update_0_sm137_4761);
  set_at<448, 512, 16>(return_value3332, res_in_update_0_sm137_3759);
  set_at<464, 512, 16>(return_value3332, res_in_update_0_sm137_2757);
  set_at<480, 512, 16>(return_value3332, res_in_update_0_sm137_1755);
  set_at<496, 512, 16>(return_value3332, res_in_update_0_sm137_0753);
  return return_value3332;

}

hw_uint<512> stg0_1_cu3334(hw_uint<16*128>& in_FIFO_buf64) {
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
  hw_uint<16> in_FIFO_buf64_lane_64 = in_FIFO_buf64.extract<1024, 1039>();
  hw_uint<16> in_FIFO_buf64_lane_65 = in_FIFO_buf64.extract<1040, 1055>();
  hw_uint<16> in_FIFO_buf64_lane_66 = in_FIFO_buf64.extract<1056, 1071>();
  hw_uint<16> in_FIFO_buf64_lane_67 = in_FIFO_buf64.extract<1072, 1087>();
  hw_uint<16> in_FIFO_buf64_lane_68 = in_FIFO_buf64.extract<1088, 1103>();
  hw_uint<16> in_FIFO_buf64_lane_69 = in_FIFO_buf64.extract<1104, 1119>();
  hw_uint<16> in_FIFO_buf64_lane_70 = in_FIFO_buf64.extract<1120, 1135>();
  hw_uint<16> in_FIFO_buf64_lane_71 = in_FIFO_buf64.extract<1136, 1151>();
  hw_uint<16> in_FIFO_buf64_lane_72 = in_FIFO_buf64.extract<1152, 1167>();
  hw_uint<16> in_FIFO_buf64_lane_73 = in_FIFO_buf64.extract<1168, 1183>();
  hw_uint<16> in_FIFO_buf64_lane_74 = in_FIFO_buf64.extract<1184, 1199>();
  hw_uint<16> in_FIFO_buf64_lane_75 = in_FIFO_buf64.extract<1200, 1215>();
  hw_uint<16> in_FIFO_buf64_lane_76 = in_FIFO_buf64.extract<1216, 1231>();
  hw_uint<16> in_FIFO_buf64_lane_77 = in_FIFO_buf64.extract<1232, 1247>();
  hw_uint<16> in_FIFO_buf64_lane_78 = in_FIFO_buf64.extract<1248, 1263>();
  hw_uint<16> in_FIFO_buf64_lane_79 = in_FIFO_buf64.extract<1264, 1279>();
  hw_uint<16> in_FIFO_buf64_lane_80 = in_FIFO_buf64.extract<1280, 1295>();
  hw_uint<16> in_FIFO_buf64_lane_81 = in_FIFO_buf64.extract<1296, 1311>();
  hw_uint<16> in_FIFO_buf64_lane_82 = in_FIFO_buf64.extract<1312, 1327>();
  hw_uint<16> in_FIFO_buf64_lane_83 = in_FIFO_buf64.extract<1328, 1343>();
  hw_uint<16> in_FIFO_buf64_lane_84 = in_FIFO_buf64.extract<1344, 1359>();
  hw_uint<16> in_FIFO_buf64_lane_85 = in_FIFO_buf64.extract<1360, 1375>();
  hw_uint<16> in_FIFO_buf64_lane_86 = in_FIFO_buf64.extract<1376, 1391>();
  hw_uint<16> in_FIFO_buf64_lane_87 = in_FIFO_buf64.extract<1392, 1407>();
  hw_uint<16> in_FIFO_buf64_lane_88 = in_FIFO_buf64.extract<1408, 1423>();
  hw_uint<16> in_FIFO_buf64_lane_89 = in_FIFO_buf64.extract<1424, 1439>();
  hw_uint<16> in_FIFO_buf64_lane_90 = in_FIFO_buf64.extract<1440, 1455>();
  hw_uint<16> in_FIFO_buf64_lane_91 = in_FIFO_buf64.extract<1456, 1471>();
  hw_uint<16> in_FIFO_buf64_lane_92 = in_FIFO_buf64.extract<1472, 1487>();
  hw_uint<16> in_FIFO_buf64_lane_93 = in_FIFO_buf64.extract<1488, 1503>();
  hw_uint<16> in_FIFO_buf64_lane_94 = in_FIFO_buf64.extract<1504, 1519>();
  hw_uint<16> in_FIFO_buf64_lane_95 = in_FIFO_buf64.extract<1520, 1535>();
  hw_uint<16> in_FIFO_buf64_lane_96 = in_FIFO_buf64.extract<1536, 1551>();
  hw_uint<16> in_FIFO_buf64_lane_97 = in_FIFO_buf64.extract<1552, 1567>();
  hw_uint<16> in_FIFO_buf64_lane_98 = in_FIFO_buf64.extract<1568, 1583>();
  hw_uint<16> in_FIFO_buf64_lane_99 = in_FIFO_buf64.extract<1584, 1599>();
  hw_uint<16> in_FIFO_buf64_lane_100 = in_FIFO_buf64.extract<1600, 1615>();
  hw_uint<16> in_FIFO_buf64_lane_101 = in_FIFO_buf64.extract<1616, 1631>();
  hw_uint<16> in_FIFO_buf64_lane_102 = in_FIFO_buf64.extract<1632, 1647>();
  hw_uint<16> in_FIFO_buf64_lane_103 = in_FIFO_buf64.extract<1648, 1663>();
  hw_uint<16> in_FIFO_buf64_lane_104 = in_FIFO_buf64.extract<1664, 1679>();
  hw_uint<16> in_FIFO_buf64_lane_105 = in_FIFO_buf64.extract<1680, 1695>();
  hw_uint<16> in_FIFO_buf64_lane_106 = in_FIFO_buf64.extract<1696, 1711>();
  hw_uint<16> in_FIFO_buf64_lane_107 = in_FIFO_buf64.extract<1712, 1727>();
  hw_uint<16> in_FIFO_buf64_lane_108 = in_FIFO_buf64.extract<1728, 1743>();
  hw_uint<16> in_FIFO_buf64_lane_109 = in_FIFO_buf64.extract<1744, 1759>();
  hw_uint<16> in_FIFO_buf64_lane_110 = in_FIFO_buf64.extract<1760, 1775>();
  hw_uint<16> in_FIFO_buf64_lane_111 = in_FIFO_buf64.extract<1776, 1791>();
  hw_uint<16> in_FIFO_buf64_lane_112 = in_FIFO_buf64.extract<1792, 1807>();
  hw_uint<16> in_FIFO_buf64_lane_113 = in_FIFO_buf64.extract<1808, 1823>();
  hw_uint<16> in_FIFO_buf64_lane_114 = in_FIFO_buf64.extract<1824, 1839>();
  hw_uint<16> in_FIFO_buf64_lane_115 = in_FIFO_buf64.extract<1840, 1855>();
  hw_uint<16> in_FIFO_buf64_lane_116 = in_FIFO_buf64.extract<1856, 1871>();
  hw_uint<16> in_FIFO_buf64_lane_117 = in_FIFO_buf64.extract<1872, 1887>();
  hw_uint<16> in_FIFO_buf64_lane_118 = in_FIFO_buf64.extract<1888, 1903>();
  hw_uint<16> in_FIFO_buf64_lane_119 = in_FIFO_buf64.extract<1904, 1919>();
  hw_uint<16> in_FIFO_buf64_lane_120 = in_FIFO_buf64.extract<1920, 1935>();
  hw_uint<16> in_FIFO_buf64_lane_121 = in_FIFO_buf64.extract<1936, 1951>();
  hw_uint<16> in_FIFO_buf64_lane_122 = in_FIFO_buf64.extract<1952, 1967>();
  hw_uint<16> in_FIFO_buf64_lane_123 = in_FIFO_buf64.extract<1968, 1983>();
  hw_uint<16> in_FIFO_buf64_lane_124 = in_FIFO_buf64.extract<1984, 1999>();
  hw_uint<16> in_FIFO_buf64_lane_125 = in_FIFO_buf64.extract<2000, 2015>();
  hw_uint<16> in_FIFO_buf64_lane_126 = in_FIFO_buf64.extract<2016, 2031>();
  hw_uint<16> in_FIFO_buf64_lane_127 = in_FIFO_buf64.extract<2032, 2047>();

	
  hw_uint<64 > in_FIFO_buf64_lane_3_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_0);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_1);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_2);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_3_pack, in_FIFO_buf64_lane_3);
  auto res_stg0_update_0_sm138_31879 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_3_pack);

  hw_uint<64 > in_FIFO_buf64_lane_7_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_4);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_5);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_6);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_7_pack, in_FIFO_buf64_lane_7);
  auto res_stg0_update_0_sm138_30877 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_7_pack);

  hw_uint<64 > in_FIFO_buf64_lane_11_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_8);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_9);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_10);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_11_pack, in_FIFO_buf64_lane_11);
  auto res_stg0_update_0_sm138_29875 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_11_pack);

  hw_uint<64 > in_FIFO_buf64_lane_15_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_12);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_13);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_14);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_15_pack, in_FIFO_buf64_lane_15);
  auto res_stg0_update_0_sm138_28873 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_15_pack);

  hw_uint<64 > in_FIFO_buf64_lane_19_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_16);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_17);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_18);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_19_pack, in_FIFO_buf64_lane_19);
  auto res_stg0_update_0_sm138_27871 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_19_pack);

  hw_uint<64 > in_FIFO_buf64_lane_23_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_20);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_21);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_22);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_23_pack, in_FIFO_buf64_lane_23);
  auto res_stg0_update_0_sm138_26869 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_23_pack);

  hw_uint<64 > in_FIFO_buf64_lane_27_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_24);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_25);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_26);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_27_pack, in_FIFO_buf64_lane_27);
  auto res_stg0_update_0_sm138_25867 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_27_pack);

  hw_uint<64 > in_FIFO_buf64_lane_31_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_28);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_29);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_30);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_31_pack, in_FIFO_buf64_lane_31);
  auto res_stg0_update_0_sm138_24865 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_31_pack);

  hw_uint<64 > in_FIFO_buf64_lane_35_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_32);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_33);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_34);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_35_pack, in_FIFO_buf64_lane_35);
  auto res_stg0_update_0_sm138_23863 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_35_pack);

  hw_uint<64 > in_FIFO_buf64_lane_39_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_36);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_37);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_38);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_39_pack, in_FIFO_buf64_lane_39);
  auto res_stg0_update_0_sm138_22861 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_39_pack);

  hw_uint<64 > in_FIFO_buf64_lane_43_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_40);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_41);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_42);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_43_pack, in_FIFO_buf64_lane_43);
  auto res_stg0_update_0_sm138_21859 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_43_pack);

  hw_uint<64 > in_FIFO_buf64_lane_47_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_44);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_45);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_46);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_47_pack, in_FIFO_buf64_lane_47);
  auto res_stg0_update_0_sm138_20857 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_47_pack);

  hw_uint<64 > in_FIFO_buf64_lane_51_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_48);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_49);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_50);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_51_pack, in_FIFO_buf64_lane_51);
  auto res_stg0_update_0_sm138_19855 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_51_pack);

  hw_uint<64 > in_FIFO_buf64_lane_55_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_52);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_53);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_54);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_55_pack, in_FIFO_buf64_lane_55);
  auto res_stg0_update_0_sm138_18853 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_55_pack);

  hw_uint<64 > in_FIFO_buf64_lane_59_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_56);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_57);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_58);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_59_pack, in_FIFO_buf64_lane_59);
  auto res_stg0_update_0_sm138_17851 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_59_pack);

  hw_uint<64 > in_FIFO_buf64_lane_63_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_60);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_61);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_62);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_63_pack, in_FIFO_buf64_lane_63);
  auto res_stg0_update_0_sm138_16849 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_63_pack);

  hw_uint<64 > in_FIFO_buf64_lane_67_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_67_pack, in_FIFO_buf64_lane_64);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_67_pack, in_FIFO_buf64_lane_65);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_67_pack, in_FIFO_buf64_lane_66);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_67_pack, in_FIFO_buf64_lane_67);
  auto res_stg0_update_0_sm138_15847 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_67_pack);

  hw_uint<64 > in_FIFO_buf64_lane_71_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_71_pack, in_FIFO_buf64_lane_68);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_71_pack, in_FIFO_buf64_lane_69);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_71_pack, in_FIFO_buf64_lane_70);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_71_pack, in_FIFO_buf64_lane_71);
  auto res_stg0_update_0_sm138_14845 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_71_pack);

  hw_uint<64 > in_FIFO_buf64_lane_75_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_75_pack, in_FIFO_buf64_lane_72);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_75_pack, in_FIFO_buf64_lane_73);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_75_pack, in_FIFO_buf64_lane_74);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_75_pack, in_FIFO_buf64_lane_75);
  auto res_stg0_update_0_sm138_13843 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_75_pack);

  hw_uint<64 > in_FIFO_buf64_lane_79_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_79_pack, in_FIFO_buf64_lane_76);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_79_pack, in_FIFO_buf64_lane_77);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_79_pack, in_FIFO_buf64_lane_78);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_79_pack, in_FIFO_buf64_lane_79);
  auto res_stg0_update_0_sm138_12841 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_79_pack);

  hw_uint<64 > in_FIFO_buf64_lane_83_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_83_pack, in_FIFO_buf64_lane_80);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_83_pack, in_FIFO_buf64_lane_81);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_83_pack, in_FIFO_buf64_lane_82);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_83_pack, in_FIFO_buf64_lane_83);
  auto res_stg0_update_0_sm138_11839 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_83_pack);

  hw_uint<64 > in_FIFO_buf64_lane_87_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_87_pack, in_FIFO_buf64_lane_84);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_87_pack, in_FIFO_buf64_lane_85);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_87_pack, in_FIFO_buf64_lane_86);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_87_pack, in_FIFO_buf64_lane_87);
  auto res_stg0_update_0_sm138_10837 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_87_pack);

  hw_uint<64 > in_FIFO_buf64_lane_91_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_91_pack, in_FIFO_buf64_lane_88);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_91_pack, in_FIFO_buf64_lane_89);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_91_pack, in_FIFO_buf64_lane_90);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_91_pack, in_FIFO_buf64_lane_91);
  auto res_stg0_update_0_sm138_9835 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_91_pack);

  hw_uint<64 > in_FIFO_buf64_lane_95_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_95_pack, in_FIFO_buf64_lane_92);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_95_pack, in_FIFO_buf64_lane_93);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_95_pack, in_FIFO_buf64_lane_94);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_95_pack, in_FIFO_buf64_lane_95);
  auto res_stg0_update_0_sm138_8833 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_95_pack);

  hw_uint<64 > in_FIFO_buf64_lane_99_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_99_pack, in_FIFO_buf64_lane_96);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_99_pack, in_FIFO_buf64_lane_97);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_99_pack, in_FIFO_buf64_lane_98);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_99_pack, in_FIFO_buf64_lane_99);
  auto res_stg0_update_0_sm138_7831 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_99_pack);

  hw_uint<64 > in_FIFO_buf64_lane_103_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_103_pack, in_FIFO_buf64_lane_100);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_103_pack, in_FIFO_buf64_lane_101);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_103_pack, in_FIFO_buf64_lane_102);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_103_pack, in_FIFO_buf64_lane_103);
  auto res_stg0_update_0_sm138_6829 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_103_pack);

  hw_uint<64 > in_FIFO_buf64_lane_107_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_107_pack, in_FIFO_buf64_lane_104);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_107_pack, in_FIFO_buf64_lane_105);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_107_pack, in_FIFO_buf64_lane_106);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_107_pack, in_FIFO_buf64_lane_107);
  auto res_stg0_update_0_sm138_5827 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_107_pack);

  hw_uint<64 > in_FIFO_buf64_lane_111_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_111_pack, in_FIFO_buf64_lane_108);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_111_pack, in_FIFO_buf64_lane_109);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_111_pack, in_FIFO_buf64_lane_110);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_111_pack, in_FIFO_buf64_lane_111);
  auto res_stg0_update_0_sm138_4825 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_111_pack);

  hw_uint<64 > in_FIFO_buf64_lane_115_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_115_pack, in_FIFO_buf64_lane_112);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_115_pack, in_FIFO_buf64_lane_113);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_115_pack, in_FIFO_buf64_lane_114);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_115_pack, in_FIFO_buf64_lane_115);
  auto res_stg0_update_0_sm138_3823 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_115_pack);

  hw_uint<64 > in_FIFO_buf64_lane_119_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_119_pack, in_FIFO_buf64_lane_116);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_119_pack, in_FIFO_buf64_lane_117);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_119_pack, in_FIFO_buf64_lane_118);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_119_pack, in_FIFO_buf64_lane_119);
  auto res_stg0_update_0_sm138_2821 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_119_pack);

  hw_uint<64 > in_FIFO_buf64_lane_123_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_123_pack, in_FIFO_buf64_lane_120);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_123_pack, in_FIFO_buf64_lane_121);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_123_pack, in_FIFO_buf64_lane_122);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_123_pack, in_FIFO_buf64_lane_123);
  auto res_stg0_update_0_sm138_1819 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_123_pack);

  hw_uint<64 > in_FIFO_buf64_lane_127_pack;
  set_at<0, 64, 16>(in_FIFO_buf64_lane_127_pack, in_FIFO_buf64_lane_124);
  set_at<16, 64, 16>(in_FIFO_buf64_lane_127_pack, in_FIFO_buf64_lane_125);
  set_at<32, 64, 16>(in_FIFO_buf64_lane_127_pack, in_FIFO_buf64_lane_126);
  set_at<48, 64, 16>(in_FIFO_buf64_lane_127_pack, in_FIFO_buf64_lane_127);
  auto res_stg0_update_0_sm138_0817 = stg0_generated_compute_unrolled_1(in_FIFO_buf64_lane_127_pack);
  hw_uint<512 > return_value3335;
  set_at<0, 512, 16>(return_value3335, res_stg0_update_0_sm138_31879);
  set_at<16, 512, 16>(return_value3335, res_stg0_update_0_sm138_30877);
  set_at<32, 512, 16>(return_value3335, res_stg0_update_0_sm138_29875);
  set_at<48, 512, 16>(return_value3335, res_stg0_update_0_sm138_28873);
  set_at<64, 512, 16>(return_value3335, res_stg0_update_0_sm138_27871);
  set_at<80, 512, 16>(return_value3335, res_stg0_update_0_sm138_26869);
  set_at<96, 512, 16>(return_value3335, res_stg0_update_0_sm138_25867);
  set_at<112, 512, 16>(return_value3335, res_stg0_update_0_sm138_24865);
  set_at<128, 512, 16>(return_value3335, res_stg0_update_0_sm138_23863);
  set_at<144, 512, 16>(return_value3335, res_stg0_update_0_sm138_22861);
  set_at<160, 512, 16>(return_value3335, res_stg0_update_0_sm138_21859);
  set_at<176, 512, 16>(return_value3335, res_stg0_update_0_sm138_20857);
  set_at<192, 512, 16>(return_value3335, res_stg0_update_0_sm138_19855);
  set_at<208, 512, 16>(return_value3335, res_stg0_update_0_sm138_18853);
  set_at<224, 512, 16>(return_value3335, res_stg0_update_0_sm138_17851);
  set_at<240, 512, 16>(return_value3335, res_stg0_update_0_sm138_16849);
  set_at<256, 512, 16>(return_value3335, res_stg0_update_0_sm138_15847);
  set_at<272, 512, 16>(return_value3335, res_stg0_update_0_sm138_14845);
  set_at<288, 512, 16>(return_value3335, res_stg0_update_0_sm138_13843);
  set_at<304, 512, 16>(return_value3335, res_stg0_update_0_sm138_12841);
  set_at<320, 512, 16>(return_value3335, res_stg0_update_0_sm138_11839);
  set_at<336, 512, 16>(return_value3335, res_stg0_update_0_sm138_10837);
  set_at<352, 512, 16>(return_value3335, res_stg0_update_0_sm138_9835);
  set_at<368, 512, 16>(return_value3335, res_stg0_update_0_sm138_8833);
  set_at<384, 512, 16>(return_value3335, res_stg0_update_0_sm138_7831);
  set_at<400, 512, 16>(return_value3335, res_stg0_update_0_sm138_6829);
  set_at<416, 512, 16>(return_value3335, res_stg0_update_0_sm138_5827);
  set_at<432, 512, 16>(return_value3335, res_stg0_update_0_sm138_4825);
  set_at<448, 512, 16>(return_value3335, res_stg0_update_0_sm138_3823);
  set_at<464, 512, 16>(return_value3335, res_stg0_update_0_sm138_2821);
  set_at<480, 512, 16>(return_value3335, res_stg0_update_0_sm138_1819);
  set_at<496, 512, 16>(return_value3335, res_stg0_update_0_sm138_0817);
  return return_value3335;

}

hw_uint<512> stg1_1_cu3337(hw_uint<16*128>& stg0_FIFO_buf68) {
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
  hw_uint<16> stg0_FIFO_buf68_lane_64 = stg0_FIFO_buf68.extract<1024, 1039>();
  hw_uint<16> stg0_FIFO_buf68_lane_65 = stg0_FIFO_buf68.extract<1040, 1055>();
  hw_uint<16> stg0_FIFO_buf68_lane_66 = stg0_FIFO_buf68.extract<1056, 1071>();
  hw_uint<16> stg0_FIFO_buf68_lane_67 = stg0_FIFO_buf68.extract<1072, 1087>();
  hw_uint<16> stg0_FIFO_buf68_lane_68 = stg0_FIFO_buf68.extract<1088, 1103>();
  hw_uint<16> stg0_FIFO_buf68_lane_69 = stg0_FIFO_buf68.extract<1104, 1119>();
  hw_uint<16> stg0_FIFO_buf68_lane_70 = stg0_FIFO_buf68.extract<1120, 1135>();
  hw_uint<16> stg0_FIFO_buf68_lane_71 = stg0_FIFO_buf68.extract<1136, 1151>();
  hw_uint<16> stg0_FIFO_buf68_lane_72 = stg0_FIFO_buf68.extract<1152, 1167>();
  hw_uint<16> stg0_FIFO_buf68_lane_73 = stg0_FIFO_buf68.extract<1168, 1183>();
  hw_uint<16> stg0_FIFO_buf68_lane_74 = stg0_FIFO_buf68.extract<1184, 1199>();
  hw_uint<16> stg0_FIFO_buf68_lane_75 = stg0_FIFO_buf68.extract<1200, 1215>();
  hw_uint<16> stg0_FIFO_buf68_lane_76 = stg0_FIFO_buf68.extract<1216, 1231>();
  hw_uint<16> stg0_FIFO_buf68_lane_77 = stg0_FIFO_buf68.extract<1232, 1247>();
  hw_uint<16> stg0_FIFO_buf68_lane_78 = stg0_FIFO_buf68.extract<1248, 1263>();
  hw_uint<16> stg0_FIFO_buf68_lane_79 = stg0_FIFO_buf68.extract<1264, 1279>();
  hw_uint<16> stg0_FIFO_buf68_lane_80 = stg0_FIFO_buf68.extract<1280, 1295>();
  hw_uint<16> stg0_FIFO_buf68_lane_81 = stg0_FIFO_buf68.extract<1296, 1311>();
  hw_uint<16> stg0_FIFO_buf68_lane_82 = stg0_FIFO_buf68.extract<1312, 1327>();
  hw_uint<16> stg0_FIFO_buf68_lane_83 = stg0_FIFO_buf68.extract<1328, 1343>();
  hw_uint<16> stg0_FIFO_buf68_lane_84 = stg0_FIFO_buf68.extract<1344, 1359>();
  hw_uint<16> stg0_FIFO_buf68_lane_85 = stg0_FIFO_buf68.extract<1360, 1375>();
  hw_uint<16> stg0_FIFO_buf68_lane_86 = stg0_FIFO_buf68.extract<1376, 1391>();
  hw_uint<16> stg0_FIFO_buf68_lane_87 = stg0_FIFO_buf68.extract<1392, 1407>();
  hw_uint<16> stg0_FIFO_buf68_lane_88 = stg0_FIFO_buf68.extract<1408, 1423>();
  hw_uint<16> stg0_FIFO_buf68_lane_89 = stg0_FIFO_buf68.extract<1424, 1439>();
  hw_uint<16> stg0_FIFO_buf68_lane_90 = stg0_FIFO_buf68.extract<1440, 1455>();
  hw_uint<16> stg0_FIFO_buf68_lane_91 = stg0_FIFO_buf68.extract<1456, 1471>();
  hw_uint<16> stg0_FIFO_buf68_lane_92 = stg0_FIFO_buf68.extract<1472, 1487>();
  hw_uint<16> stg0_FIFO_buf68_lane_93 = stg0_FIFO_buf68.extract<1488, 1503>();
  hw_uint<16> stg0_FIFO_buf68_lane_94 = stg0_FIFO_buf68.extract<1504, 1519>();
  hw_uint<16> stg0_FIFO_buf68_lane_95 = stg0_FIFO_buf68.extract<1520, 1535>();
  hw_uint<16> stg0_FIFO_buf68_lane_96 = stg0_FIFO_buf68.extract<1536, 1551>();
  hw_uint<16> stg0_FIFO_buf68_lane_97 = stg0_FIFO_buf68.extract<1552, 1567>();
  hw_uint<16> stg0_FIFO_buf68_lane_98 = stg0_FIFO_buf68.extract<1568, 1583>();
  hw_uint<16> stg0_FIFO_buf68_lane_99 = stg0_FIFO_buf68.extract<1584, 1599>();
  hw_uint<16> stg0_FIFO_buf68_lane_100 = stg0_FIFO_buf68.extract<1600, 1615>();
  hw_uint<16> stg0_FIFO_buf68_lane_101 = stg0_FIFO_buf68.extract<1616, 1631>();
  hw_uint<16> stg0_FIFO_buf68_lane_102 = stg0_FIFO_buf68.extract<1632, 1647>();
  hw_uint<16> stg0_FIFO_buf68_lane_103 = stg0_FIFO_buf68.extract<1648, 1663>();
  hw_uint<16> stg0_FIFO_buf68_lane_104 = stg0_FIFO_buf68.extract<1664, 1679>();
  hw_uint<16> stg0_FIFO_buf68_lane_105 = stg0_FIFO_buf68.extract<1680, 1695>();
  hw_uint<16> stg0_FIFO_buf68_lane_106 = stg0_FIFO_buf68.extract<1696, 1711>();
  hw_uint<16> stg0_FIFO_buf68_lane_107 = stg0_FIFO_buf68.extract<1712, 1727>();
  hw_uint<16> stg0_FIFO_buf68_lane_108 = stg0_FIFO_buf68.extract<1728, 1743>();
  hw_uint<16> stg0_FIFO_buf68_lane_109 = stg0_FIFO_buf68.extract<1744, 1759>();
  hw_uint<16> stg0_FIFO_buf68_lane_110 = stg0_FIFO_buf68.extract<1760, 1775>();
  hw_uint<16> stg0_FIFO_buf68_lane_111 = stg0_FIFO_buf68.extract<1776, 1791>();
  hw_uint<16> stg0_FIFO_buf68_lane_112 = stg0_FIFO_buf68.extract<1792, 1807>();
  hw_uint<16> stg0_FIFO_buf68_lane_113 = stg0_FIFO_buf68.extract<1808, 1823>();
  hw_uint<16> stg0_FIFO_buf68_lane_114 = stg0_FIFO_buf68.extract<1824, 1839>();
  hw_uint<16> stg0_FIFO_buf68_lane_115 = stg0_FIFO_buf68.extract<1840, 1855>();
  hw_uint<16> stg0_FIFO_buf68_lane_116 = stg0_FIFO_buf68.extract<1856, 1871>();
  hw_uint<16> stg0_FIFO_buf68_lane_117 = stg0_FIFO_buf68.extract<1872, 1887>();
  hw_uint<16> stg0_FIFO_buf68_lane_118 = stg0_FIFO_buf68.extract<1888, 1903>();
  hw_uint<16> stg0_FIFO_buf68_lane_119 = stg0_FIFO_buf68.extract<1904, 1919>();
  hw_uint<16> stg0_FIFO_buf68_lane_120 = stg0_FIFO_buf68.extract<1920, 1935>();
  hw_uint<16> stg0_FIFO_buf68_lane_121 = stg0_FIFO_buf68.extract<1936, 1951>();
  hw_uint<16> stg0_FIFO_buf68_lane_122 = stg0_FIFO_buf68.extract<1952, 1967>();
  hw_uint<16> stg0_FIFO_buf68_lane_123 = stg0_FIFO_buf68.extract<1968, 1983>();
  hw_uint<16> stg0_FIFO_buf68_lane_124 = stg0_FIFO_buf68.extract<1984, 1999>();
  hw_uint<16> stg0_FIFO_buf68_lane_125 = stg0_FIFO_buf68.extract<2000, 2015>();
  hw_uint<16> stg0_FIFO_buf68_lane_126 = stg0_FIFO_buf68.extract<2016, 2031>();
  hw_uint<16> stg0_FIFO_buf68_lane_127 = stg0_FIFO_buf68.extract<2032, 2047>();

	
  hw_uint<64 > stg0_FIFO_buf68_lane_3_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_0);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_1);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_2);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_3_pack, stg0_FIFO_buf68_lane_3);
  auto res_stg1_update_0_sm139_31943 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_3_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_7_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_4);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_5);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_6);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_7_pack, stg0_FIFO_buf68_lane_7);
  auto res_stg1_update_0_sm139_30941 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_7_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_11_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_8);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_9);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_10);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_11_pack, stg0_FIFO_buf68_lane_11);
  auto res_stg1_update_0_sm139_29939 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_11_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_15_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_12);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_13);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_14);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_15_pack, stg0_FIFO_buf68_lane_15);
  auto res_stg1_update_0_sm139_28937 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_15_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_19_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_16);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_17);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_18);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_19_pack, stg0_FIFO_buf68_lane_19);
  auto res_stg1_update_0_sm139_27935 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_19_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_23_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_20);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_21);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_22);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_23_pack, stg0_FIFO_buf68_lane_23);
  auto res_stg1_update_0_sm139_26933 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_23_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_27_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_24);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_25);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_26);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_27_pack, stg0_FIFO_buf68_lane_27);
  auto res_stg1_update_0_sm139_25931 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_27_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_31_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_28);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_29);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_30);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_31_pack, stg0_FIFO_buf68_lane_31);
  auto res_stg1_update_0_sm139_24929 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_31_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_35_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_32);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_33);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_34);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_35_pack, stg0_FIFO_buf68_lane_35);
  auto res_stg1_update_0_sm139_23927 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_35_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_39_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_36);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_37);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_38);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_39_pack, stg0_FIFO_buf68_lane_39);
  auto res_stg1_update_0_sm139_22925 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_39_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_43_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_40);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_41);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_42);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_43_pack, stg0_FIFO_buf68_lane_43);
  auto res_stg1_update_0_sm139_21923 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_43_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_47_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_44);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_45);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_46);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_47_pack, stg0_FIFO_buf68_lane_47);
  auto res_stg1_update_0_sm139_20921 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_47_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_51_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_48);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_49);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_50);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_51_pack, stg0_FIFO_buf68_lane_51);
  auto res_stg1_update_0_sm139_19919 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_51_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_55_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_52);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_53);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_54);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_55_pack, stg0_FIFO_buf68_lane_55);
  auto res_stg1_update_0_sm139_18917 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_55_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_59_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_56);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_57);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_58);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_59_pack, stg0_FIFO_buf68_lane_59);
  auto res_stg1_update_0_sm139_17915 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_59_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_63_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_60);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_61);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_62);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_63_pack, stg0_FIFO_buf68_lane_63);
  auto res_stg1_update_0_sm139_16913 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_63_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_67_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_67_pack, stg0_FIFO_buf68_lane_64);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_67_pack, stg0_FIFO_buf68_lane_65);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_67_pack, stg0_FIFO_buf68_lane_66);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_67_pack, stg0_FIFO_buf68_lane_67);
  auto res_stg1_update_0_sm139_15911 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_67_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_71_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_71_pack, stg0_FIFO_buf68_lane_68);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_71_pack, stg0_FIFO_buf68_lane_69);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_71_pack, stg0_FIFO_buf68_lane_70);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_71_pack, stg0_FIFO_buf68_lane_71);
  auto res_stg1_update_0_sm139_14909 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_71_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_75_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_75_pack, stg0_FIFO_buf68_lane_72);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_75_pack, stg0_FIFO_buf68_lane_73);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_75_pack, stg0_FIFO_buf68_lane_74);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_75_pack, stg0_FIFO_buf68_lane_75);
  auto res_stg1_update_0_sm139_13907 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_75_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_79_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_79_pack, stg0_FIFO_buf68_lane_76);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_79_pack, stg0_FIFO_buf68_lane_77);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_79_pack, stg0_FIFO_buf68_lane_78);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_79_pack, stg0_FIFO_buf68_lane_79);
  auto res_stg1_update_0_sm139_12905 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_79_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_83_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_83_pack, stg0_FIFO_buf68_lane_80);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_83_pack, stg0_FIFO_buf68_lane_81);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_83_pack, stg0_FIFO_buf68_lane_82);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_83_pack, stg0_FIFO_buf68_lane_83);
  auto res_stg1_update_0_sm139_11903 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_83_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_87_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_87_pack, stg0_FIFO_buf68_lane_84);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_87_pack, stg0_FIFO_buf68_lane_85);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_87_pack, stg0_FIFO_buf68_lane_86);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_87_pack, stg0_FIFO_buf68_lane_87);
  auto res_stg1_update_0_sm139_10901 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_87_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_91_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_91_pack, stg0_FIFO_buf68_lane_88);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_91_pack, stg0_FIFO_buf68_lane_89);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_91_pack, stg0_FIFO_buf68_lane_90);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_91_pack, stg0_FIFO_buf68_lane_91);
  auto res_stg1_update_0_sm139_9899 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_91_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_95_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_95_pack, stg0_FIFO_buf68_lane_92);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_95_pack, stg0_FIFO_buf68_lane_93);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_95_pack, stg0_FIFO_buf68_lane_94);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_95_pack, stg0_FIFO_buf68_lane_95);
  auto res_stg1_update_0_sm139_8897 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_95_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_99_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_99_pack, stg0_FIFO_buf68_lane_96);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_99_pack, stg0_FIFO_buf68_lane_97);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_99_pack, stg0_FIFO_buf68_lane_98);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_99_pack, stg0_FIFO_buf68_lane_99);
  auto res_stg1_update_0_sm139_7895 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_99_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_103_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_103_pack, stg0_FIFO_buf68_lane_100);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_103_pack, stg0_FIFO_buf68_lane_101);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_103_pack, stg0_FIFO_buf68_lane_102);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_103_pack, stg0_FIFO_buf68_lane_103);
  auto res_stg1_update_0_sm139_6893 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_103_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_107_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_107_pack, stg0_FIFO_buf68_lane_104);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_107_pack, stg0_FIFO_buf68_lane_105);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_107_pack, stg0_FIFO_buf68_lane_106);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_107_pack, stg0_FIFO_buf68_lane_107);
  auto res_stg1_update_0_sm139_5891 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_107_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_111_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_111_pack, stg0_FIFO_buf68_lane_108);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_111_pack, stg0_FIFO_buf68_lane_109);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_111_pack, stg0_FIFO_buf68_lane_110);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_111_pack, stg0_FIFO_buf68_lane_111);
  auto res_stg1_update_0_sm139_4889 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_111_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_115_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_115_pack, stg0_FIFO_buf68_lane_112);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_115_pack, stg0_FIFO_buf68_lane_113);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_115_pack, stg0_FIFO_buf68_lane_114);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_115_pack, stg0_FIFO_buf68_lane_115);
  auto res_stg1_update_0_sm139_3887 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_115_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_119_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_119_pack, stg0_FIFO_buf68_lane_116);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_119_pack, stg0_FIFO_buf68_lane_117);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_119_pack, stg0_FIFO_buf68_lane_118);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_119_pack, stg0_FIFO_buf68_lane_119);
  auto res_stg1_update_0_sm139_2885 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_119_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_123_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_123_pack, stg0_FIFO_buf68_lane_120);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_123_pack, stg0_FIFO_buf68_lane_121);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_123_pack, stg0_FIFO_buf68_lane_122);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_123_pack, stg0_FIFO_buf68_lane_123);
  auto res_stg1_update_0_sm139_1883 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_123_pack);

  hw_uint<64 > stg0_FIFO_buf68_lane_127_pack;
  set_at<0, 64, 16>(stg0_FIFO_buf68_lane_127_pack, stg0_FIFO_buf68_lane_124);
  set_at<16, 64, 16>(stg0_FIFO_buf68_lane_127_pack, stg0_FIFO_buf68_lane_125);
  set_at<32, 64, 16>(stg0_FIFO_buf68_lane_127_pack, stg0_FIFO_buf68_lane_126);
  set_at<48, 64, 16>(stg0_FIFO_buf68_lane_127_pack, stg0_FIFO_buf68_lane_127);
  auto res_stg1_update_0_sm139_0881 = stg1_generated_compute_unrolled_1(stg0_FIFO_buf68_lane_127_pack);
  hw_uint<512 > return_value3338;
  set_at<0, 512, 16>(return_value3338, res_stg1_update_0_sm139_31943);
  set_at<16, 512, 16>(return_value3338, res_stg1_update_0_sm139_30941);
  set_at<32, 512, 16>(return_value3338, res_stg1_update_0_sm139_29939);
  set_at<48, 512, 16>(return_value3338, res_stg1_update_0_sm139_28937);
  set_at<64, 512, 16>(return_value3338, res_stg1_update_0_sm139_27935);
  set_at<80, 512, 16>(return_value3338, res_stg1_update_0_sm139_26933);
  set_at<96, 512, 16>(return_value3338, res_stg1_update_0_sm139_25931);
  set_at<112, 512, 16>(return_value3338, res_stg1_update_0_sm139_24929);
  set_at<128, 512, 16>(return_value3338, res_stg1_update_0_sm139_23927);
  set_at<144, 512, 16>(return_value3338, res_stg1_update_0_sm139_22925);
  set_at<160, 512, 16>(return_value3338, res_stg1_update_0_sm139_21923);
  set_at<176, 512, 16>(return_value3338, res_stg1_update_0_sm139_20921);
  set_at<192, 512, 16>(return_value3338, res_stg1_update_0_sm139_19919);
  set_at<208, 512, 16>(return_value3338, res_stg1_update_0_sm139_18917);
  set_at<224, 512, 16>(return_value3338, res_stg1_update_0_sm139_17915);
  set_at<240, 512, 16>(return_value3338, res_stg1_update_0_sm139_16913);
  set_at<256, 512, 16>(return_value3338, res_stg1_update_0_sm139_15911);
  set_at<272, 512, 16>(return_value3338, res_stg1_update_0_sm139_14909);
  set_at<288, 512, 16>(return_value3338, res_stg1_update_0_sm139_13907);
  set_at<304, 512, 16>(return_value3338, res_stg1_update_0_sm139_12905);
  set_at<320, 512, 16>(return_value3338, res_stg1_update_0_sm139_11903);
  set_at<336, 512, 16>(return_value3338, res_stg1_update_0_sm139_10901);
  set_at<352, 512, 16>(return_value3338, res_stg1_update_0_sm139_9899);
  set_at<368, 512, 16>(return_value3338, res_stg1_update_0_sm139_8897);
  set_at<384, 512, 16>(return_value3338, res_stg1_update_0_sm139_7895);
  set_at<400, 512, 16>(return_value3338, res_stg1_update_0_sm139_6893);
  set_at<416, 512, 16>(return_value3338, res_stg1_update_0_sm139_5891);
  set_at<432, 512, 16>(return_value3338, res_stg1_update_0_sm139_4889);
  set_at<448, 512, 16>(return_value3338, res_stg1_update_0_sm139_3887);
  set_at<464, 512, 16>(return_value3338, res_stg1_update_0_sm139_2885);
  set_at<480, 512, 16>(return_value3338, res_stg1_update_0_sm139_1883);
  set_at<496, 512, 16>(return_value3338, res_stg1_update_0_sm139_0881);
  return return_value3338;

}

hw_uint<512> stg2_1_cu3340(hw_uint<16*128>& stg1_FIFO_buf72) {
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
  hw_uint<16> stg1_FIFO_buf72_lane_64 = stg1_FIFO_buf72.extract<1024, 1039>();
  hw_uint<16> stg1_FIFO_buf72_lane_65 = stg1_FIFO_buf72.extract<1040, 1055>();
  hw_uint<16> stg1_FIFO_buf72_lane_66 = stg1_FIFO_buf72.extract<1056, 1071>();
  hw_uint<16> stg1_FIFO_buf72_lane_67 = stg1_FIFO_buf72.extract<1072, 1087>();
  hw_uint<16> stg1_FIFO_buf72_lane_68 = stg1_FIFO_buf72.extract<1088, 1103>();
  hw_uint<16> stg1_FIFO_buf72_lane_69 = stg1_FIFO_buf72.extract<1104, 1119>();
  hw_uint<16> stg1_FIFO_buf72_lane_70 = stg1_FIFO_buf72.extract<1120, 1135>();
  hw_uint<16> stg1_FIFO_buf72_lane_71 = stg1_FIFO_buf72.extract<1136, 1151>();
  hw_uint<16> stg1_FIFO_buf72_lane_72 = stg1_FIFO_buf72.extract<1152, 1167>();
  hw_uint<16> stg1_FIFO_buf72_lane_73 = stg1_FIFO_buf72.extract<1168, 1183>();
  hw_uint<16> stg1_FIFO_buf72_lane_74 = stg1_FIFO_buf72.extract<1184, 1199>();
  hw_uint<16> stg1_FIFO_buf72_lane_75 = stg1_FIFO_buf72.extract<1200, 1215>();
  hw_uint<16> stg1_FIFO_buf72_lane_76 = stg1_FIFO_buf72.extract<1216, 1231>();
  hw_uint<16> stg1_FIFO_buf72_lane_77 = stg1_FIFO_buf72.extract<1232, 1247>();
  hw_uint<16> stg1_FIFO_buf72_lane_78 = stg1_FIFO_buf72.extract<1248, 1263>();
  hw_uint<16> stg1_FIFO_buf72_lane_79 = stg1_FIFO_buf72.extract<1264, 1279>();
  hw_uint<16> stg1_FIFO_buf72_lane_80 = stg1_FIFO_buf72.extract<1280, 1295>();
  hw_uint<16> stg1_FIFO_buf72_lane_81 = stg1_FIFO_buf72.extract<1296, 1311>();
  hw_uint<16> stg1_FIFO_buf72_lane_82 = stg1_FIFO_buf72.extract<1312, 1327>();
  hw_uint<16> stg1_FIFO_buf72_lane_83 = stg1_FIFO_buf72.extract<1328, 1343>();
  hw_uint<16> stg1_FIFO_buf72_lane_84 = stg1_FIFO_buf72.extract<1344, 1359>();
  hw_uint<16> stg1_FIFO_buf72_lane_85 = stg1_FIFO_buf72.extract<1360, 1375>();
  hw_uint<16> stg1_FIFO_buf72_lane_86 = stg1_FIFO_buf72.extract<1376, 1391>();
  hw_uint<16> stg1_FIFO_buf72_lane_87 = stg1_FIFO_buf72.extract<1392, 1407>();
  hw_uint<16> stg1_FIFO_buf72_lane_88 = stg1_FIFO_buf72.extract<1408, 1423>();
  hw_uint<16> stg1_FIFO_buf72_lane_89 = stg1_FIFO_buf72.extract<1424, 1439>();
  hw_uint<16> stg1_FIFO_buf72_lane_90 = stg1_FIFO_buf72.extract<1440, 1455>();
  hw_uint<16> stg1_FIFO_buf72_lane_91 = stg1_FIFO_buf72.extract<1456, 1471>();
  hw_uint<16> stg1_FIFO_buf72_lane_92 = stg1_FIFO_buf72.extract<1472, 1487>();
  hw_uint<16> stg1_FIFO_buf72_lane_93 = stg1_FIFO_buf72.extract<1488, 1503>();
  hw_uint<16> stg1_FIFO_buf72_lane_94 = stg1_FIFO_buf72.extract<1504, 1519>();
  hw_uint<16> stg1_FIFO_buf72_lane_95 = stg1_FIFO_buf72.extract<1520, 1535>();
  hw_uint<16> stg1_FIFO_buf72_lane_96 = stg1_FIFO_buf72.extract<1536, 1551>();
  hw_uint<16> stg1_FIFO_buf72_lane_97 = stg1_FIFO_buf72.extract<1552, 1567>();
  hw_uint<16> stg1_FIFO_buf72_lane_98 = stg1_FIFO_buf72.extract<1568, 1583>();
  hw_uint<16> stg1_FIFO_buf72_lane_99 = stg1_FIFO_buf72.extract<1584, 1599>();
  hw_uint<16> stg1_FIFO_buf72_lane_100 = stg1_FIFO_buf72.extract<1600, 1615>();
  hw_uint<16> stg1_FIFO_buf72_lane_101 = stg1_FIFO_buf72.extract<1616, 1631>();
  hw_uint<16> stg1_FIFO_buf72_lane_102 = stg1_FIFO_buf72.extract<1632, 1647>();
  hw_uint<16> stg1_FIFO_buf72_lane_103 = stg1_FIFO_buf72.extract<1648, 1663>();
  hw_uint<16> stg1_FIFO_buf72_lane_104 = stg1_FIFO_buf72.extract<1664, 1679>();
  hw_uint<16> stg1_FIFO_buf72_lane_105 = stg1_FIFO_buf72.extract<1680, 1695>();
  hw_uint<16> stg1_FIFO_buf72_lane_106 = stg1_FIFO_buf72.extract<1696, 1711>();
  hw_uint<16> stg1_FIFO_buf72_lane_107 = stg1_FIFO_buf72.extract<1712, 1727>();
  hw_uint<16> stg1_FIFO_buf72_lane_108 = stg1_FIFO_buf72.extract<1728, 1743>();
  hw_uint<16> stg1_FIFO_buf72_lane_109 = stg1_FIFO_buf72.extract<1744, 1759>();
  hw_uint<16> stg1_FIFO_buf72_lane_110 = stg1_FIFO_buf72.extract<1760, 1775>();
  hw_uint<16> stg1_FIFO_buf72_lane_111 = stg1_FIFO_buf72.extract<1776, 1791>();
  hw_uint<16> stg1_FIFO_buf72_lane_112 = stg1_FIFO_buf72.extract<1792, 1807>();
  hw_uint<16> stg1_FIFO_buf72_lane_113 = stg1_FIFO_buf72.extract<1808, 1823>();
  hw_uint<16> stg1_FIFO_buf72_lane_114 = stg1_FIFO_buf72.extract<1824, 1839>();
  hw_uint<16> stg1_FIFO_buf72_lane_115 = stg1_FIFO_buf72.extract<1840, 1855>();
  hw_uint<16> stg1_FIFO_buf72_lane_116 = stg1_FIFO_buf72.extract<1856, 1871>();
  hw_uint<16> stg1_FIFO_buf72_lane_117 = stg1_FIFO_buf72.extract<1872, 1887>();
  hw_uint<16> stg1_FIFO_buf72_lane_118 = stg1_FIFO_buf72.extract<1888, 1903>();
  hw_uint<16> stg1_FIFO_buf72_lane_119 = stg1_FIFO_buf72.extract<1904, 1919>();
  hw_uint<16> stg1_FIFO_buf72_lane_120 = stg1_FIFO_buf72.extract<1920, 1935>();
  hw_uint<16> stg1_FIFO_buf72_lane_121 = stg1_FIFO_buf72.extract<1936, 1951>();
  hw_uint<16> stg1_FIFO_buf72_lane_122 = stg1_FIFO_buf72.extract<1952, 1967>();
  hw_uint<16> stg1_FIFO_buf72_lane_123 = stg1_FIFO_buf72.extract<1968, 1983>();
  hw_uint<16> stg1_FIFO_buf72_lane_124 = stg1_FIFO_buf72.extract<1984, 1999>();
  hw_uint<16> stg1_FIFO_buf72_lane_125 = stg1_FIFO_buf72.extract<2000, 2015>();
  hw_uint<16> stg1_FIFO_buf72_lane_126 = stg1_FIFO_buf72.extract<2016, 2031>();
  hw_uint<16> stg1_FIFO_buf72_lane_127 = stg1_FIFO_buf72.extract<2032, 2047>();

	
  hw_uint<64 > stg1_FIFO_buf72_lane_3_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_0);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_1);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_2);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_3_pack, stg1_FIFO_buf72_lane_3);
  auto res_stg2_update_0_sm140_311007 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_3_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_7_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_4);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_5);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_6);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_7_pack, stg1_FIFO_buf72_lane_7);
  auto res_stg2_update_0_sm140_301005 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_7_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_11_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_8);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_9);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_10);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_11_pack, stg1_FIFO_buf72_lane_11);
  auto res_stg2_update_0_sm140_291003 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_11_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_15_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_12);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_13);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_14);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_15_pack, stg1_FIFO_buf72_lane_15);
  auto res_stg2_update_0_sm140_281001 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_15_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_19_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_16);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_17);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_18);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_19_pack, stg1_FIFO_buf72_lane_19);
  auto res_stg2_update_0_sm140_27999 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_19_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_23_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_20);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_21);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_22);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_23_pack, stg1_FIFO_buf72_lane_23);
  auto res_stg2_update_0_sm140_26997 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_23_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_27_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_24);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_25);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_26);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_27_pack, stg1_FIFO_buf72_lane_27);
  auto res_stg2_update_0_sm140_25995 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_27_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_31_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_28);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_29);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_30);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_31_pack, stg1_FIFO_buf72_lane_31);
  auto res_stg2_update_0_sm140_24993 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_31_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_35_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_32);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_33);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_34);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_35_pack, stg1_FIFO_buf72_lane_35);
  auto res_stg2_update_0_sm140_23991 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_35_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_39_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_36);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_37);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_38);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_39_pack, stg1_FIFO_buf72_lane_39);
  auto res_stg2_update_0_sm140_22989 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_39_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_43_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_40);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_41);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_42);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_43_pack, stg1_FIFO_buf72_lane_43);
  auto res_stg2_update_0_sm140_21987 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_43_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_47_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_44);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_45);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_46);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_47_pack, stg1_FIFO_buf72_lane_47);
  auto res_stg2_update_0_sm140_20985 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_47_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_51_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_48);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_49);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_50);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_51_pack, stg1_FIFO_buf72_lane_51);
  auto res_stg2_update_0_sm140_19983 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_51_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_55_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_52);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_53);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_54);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_55_pack, stg1_FIFO_buf72_lane_55);
  auto res_stg2_update_0_sm140_18981 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_55_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_59_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_56);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_57);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_58);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_59_pack, stg1_FIFO_buf72_lane_59);
  auto res_stg2_update_0_sm140_17979 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_59_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_63_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_60);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_61);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_62);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_63_pack, stg1_FIFO_buf72_lane_63);
  auto res_stg2_update_0_sm140_16977 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_63_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_67_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_67_pack, stg1_FIFO_buf72_lane_64);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_67_pack, stg1_FIFO_buf72_lane_65);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_67_pack, stg1_FIFO_buf72_lane_66);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_67_pack, stg1_FIFO_buf72_lane_67);
  auto res_stg2_update_0_sm140_15975 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_67_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_71_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_71_pack, stg1_FIFO_buf72_lane_68);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_71_pack, stg1_FIFO_buf72_lane_69);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_71_pack, stg1_FIFO_buf72_lane_70);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_71_pack, stg1_FIFO_buf72_lane_71);
  auto res_stg2_update_0_sm140_14973 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_71_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_75_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_75_pack, stg1_FIFO_buf72_lane_72);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_75_pack, stg1_FIFO_buf72_lane_73);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_75_pack, stg1_FIFO_buf72_lane_74);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_75_pack, stg1_FIFO_buf72_lane_75);
  auto res_stg2_update_0_sm140_13971 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_75_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_79_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_79_pack, stg1_FIFO_buf72_lane_76);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_79_pack, stg1_FIFO_buf72_lane_77);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_79_pack, stg1_FIFO_buf72_lane_78);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_79_pack, stg1_FIFO_buf72_lane_79);
  auto res_stg2_update_0_sm140_12969 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_79_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_83_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_83_pack, stg1_FIFO_buf72_lane_80);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_83_pack, stg1_FIFO_buf72_lane_81);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_83_pack, stg1_FIFO_buf72_lane_82);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_83_pack, stg1_FIFO_buf72_lane_83);
  auto res_stg2_update_0_sm140_11967 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_83_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_87_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_87_pack, stg1_FIFO_buf72_lane_84);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_87_pack, stg1_FIFO_buf72_lane_85);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_87_pack, stg1_FIFO_buf72_lane_86);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_87_pack, stg1_FIFO_buf72_lane_87);
  auto res_stg2_update_0_sm140_10965 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_87_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_91_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_91_pack, stg1_FIFO_buf72_lane_88);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_91_pack, stg1_FIFO_buf72_lane_89);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_91_pack, stg1_FIFO_buf72_lane_90);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_91_pack, stg1_FIFO_buf72_lane_91);
  auto res_stg2_update_0_sm140_9963 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_91_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_95_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_95_pack, stg1_FIFO_buf72_lane_92);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_95_pack, stg1_FIFO_buf72_lane_93);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_95_pack, stg1_FIFO_buf72_lane_94);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_95_pack, stg1_FIFO_buf72_lane_95);
  auto res_stg2_update_0_sm140_8961 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_95_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_99_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_99_pack, stg1_FIFO_buf72_lane_96);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_99_pack, stg1_FIFO_buf72_lane_97);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_99_pack, stg1_FIFO_buf72_lane_98);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_99_pack, stg1_FIFO_buf72_lane_99);
  auto res_stg2_update_0_sm140_7959 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_99_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_103_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_103_pack, stg1_FIFO_buf72_lane_100);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_103_pack, stg1_FIFO_buf72_lane_101);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_103_pack, stg1_FIFO_buf72_lane_102);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_103_pack, stg1_FIFO_buf72_lane_103);
  auto res_stg2_update_0_sm140_6957 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_103_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_107_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_107_pack, stg1_FIFO_buf72_lane_104);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_107_pack, stg1_FIFO_buf72_lane_105);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_107_pack, stg1_FIFO_buf72_lane_106);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_107_pack, stg1_FIFO_buf72_lane_107);
  auto res_stg2_update_0_sm140_5955 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_107_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_111_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_111_pack, stg1_FIFO_buf72_lane_108);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_111_pack, stg1_FIFO_buf72_lane_109);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_111_pack, stg1_FIFO_buf72_lane_110);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_111_pack, stg1_FIFO_buf72_lane_111);
  auto res_stg2_update_0_sm140_4953 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_111_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_115_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_115_pack, stg1_FIFO_buf72_lane_112);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_115_pack, stg1_FIFO_buf72_lane_113);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_115_pack, stg1_FIFO_buf72_lane_114);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_115_pack, stg1_FIFO_buf72_lane_115);
  auto res_stg2_update_0_sm140_3951 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_115_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_119_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_119_pack, stg1_FIFO_buf72_lane_116);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_119_pack, stg1_FIFO_buf72_lane_117);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_119_pack, stg1_FIFO_buf72_lane_118);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_119_pack, stg1_FIFO_buf72_lane_119);
  auto res_stg2_update_0_sm140_2949 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_119_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_123_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_123_pack, stg1_FIFO_buf72_lane_120);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_123_pack, stg1_FIFO_buf72_lane_121);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_123_pack, stg1_FIFO_buf72_lane_122);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_123_pack, stg1_FIFO_buf72_lane_123);
  auto res_stg2_update_0_sm140_1947 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_123_pack);

  hw_uint<64 > stg1_FIFO_buf72_lane_127_pack;
  set_at<0, 64, 16>(stg1_FIFO_buf72_lane_127_pack, stg1_FIFO_buf72_lane_124);
  set_at<16, 64, 16>(stg1_FIFO_buf72_lane_127_pack, stg1_FIFO_buf72_lane_125);
  set_at<32, 64, 16>(stg1_FIFO_buf72_lane_127_pack, stg1_FIFO_buf72_lane_126);
  set_at<48, 64, 16>(stg1_FIFO_buf72_lane_127_pack, stg1_FIFO_buf72_lane_127);
  auto res_stg2_update_0_sm140_0945 = stg2_generated_compute_unrolled_1(stg1_FIFO_buf72_lane_127_pack);
  hw_uint<512 > return_value3341;
  set_at<0, 512, 16>(return_value3341, res_stg2_update_0_sm140_311007);
  set_at<16, 512, 16>(return_value3341, res_stg2_update_0_sm140_301005);
  set_at<32, 512, 16>(return_value3341, res_stg2_update_0_sm140_291003);
  set_at<48, 512, 16>(return_value3341, res_stg2_update_0_sm140_281001);
  set_at<64, 512, 16>(return_value3341, res_stg2_update_0_sm140_27999);
  set_at<80, 512, 16>(return_value3341, res_stg2_update_0_sm140_26997);
  set_at<96, 512, 16>(return_value3341, res_stg2_update_0_sm140_25995);
  set_at<112, 512, 16>(return_value3341, res_stg2_update_0_sm140_24993);
  set_at<128, 512, 16>(return_value3341, res_stg2_update_0_sm140_23991);
  set_at<144, 512, 16>(return_value3341, res_stg2_update_0_sm140_22989);
  set_at<160, 512, 16>(return_value3341, res_stg2_update_0_sm140_21987);
  set_at<176, 512, 16>(return_value3341, res_stg2_update_0_sm140_20985);
  set_at<192, 512, 16>(return_value3341, res_stg2_update_0_sm140_19983);
  set_at<208, 512, 16>(return_value3341, res_stg2_update_0_sm140_18981);
  set_at<224, 512, 16>(return_value3341, res_stg2_update_0_sm140_17979);
  set_at<240, 512, 16>(return_value3341, res_stg2_update_0_sm140_16977);
  set_at<256, 512, 16>(return_value3341, res_stg2_update_0_sm140_15975);
  set_at<272, 512, 16>(return_value3341, res_stg2_update_0_sm140_14973);
  set_at<288, 512, 16>(return_value3341, res_stg2_update_0_sm140_13971);
  set_at<304, 512, 16>(return_value3341, res_stg2_update_0_sm140_12969);
  set_at<320, 512, 16>(return_value3341, res_stg2_update_0_sm140_11967);
  set_at<336, 512, 16>(return_value3341, res_stg2_update_0_sm140_10965);
  set_at<352, 512, 16>(return_value3341, res_stg2_update_0_sm140_9963);
  set_at<368, 512, 16>(return_value3341, res_stg2_update_0_sm140_8961);
  set_at<384, 512, 16>(return_value3341, res_stg2_update_0_sm140_7959);
  set_at<400, 512, 16>(return_value3341, res_stg2_update_0_sm140_6957);
  set_at<416, 512, 16>(return_value3341, res_stg2_update_0_sm140_5955);
  set_at<432, 512, 16>(return_value3341, res_stg2_update_0_sm140_4953);
  set_at<448, 512, 16>(return_value3341, res_stg2_update_0_sm140_3951);
  set_at<464, 512, 16>(return_value3341, res_stg2_update_0_sm140_2949);
  set_at<480, 512, 16>(return_value3341, res_stg2_update_0_sm140_1947);
  set_at<496, 512, 16>(return_value3341, res_stg2_update_0_sm140_0945);
  return return_value3341;

}

hw_uint<512> stg3_1_cu3343(hw_uint<16*128>& stg2_FIFO_buf96) {
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
  hw_uint<16> stg2_FIFO_buf96_lane_64 = stg2_FIFO_buf96.extract<1024, 1039>();
  hw_uint<16> stg2_FIFO_buf96_lane_65 = stg2_FIFO_buf96.extract<1040, 1055>();
  hw_uint<16> stg2_FIFO_buf96_lane_66 = stg2_FIFO_buf96.extract<1056, 1071>();
  hw_uint<16> stg2_FIFO_buf96_lane_67 = stg2_FIFO_buf96.extract<1072, 1087>();
  hw_uint<16> stg2_FIFO_buf96_lane_68 = stg2_FIFO_buf96.extract<1088, 1103>();
  hw_uint<16> stg2_FIFO_buf96_lane_69 = stg2_FIFO_buf96.extract<1104, 1119>();
  hw_uint<16> stg2_FIFO_buf96_lane_70 = stg2_FIFO_buf96.extract<1120, 1135>();
  hw_uint<16> stg2_FIFO_buf96_lane_71 = stg2_FIFO_buf96.extract<1136, 1151>();
  hw_uint<16> stg2_FIFO_buf96_lane_72 = stg2_FIFO_buf96.extract<1152, 1167>();
  hw_uint<16> stg2_FIFO_buf96_lane_73 = stg2_FIFO_buf96.extract<1168, 1183>();
  hw_uint<16> stg2_FIFO_buf96_lane_74 = stg2_FIFO_buf96.extract<1184, 1199>();
  hw_uint<16> stg2_FIFO_buf96_lane_75 = stg2_FIFO_buf96.extract<1200, 1215>();
  hw_uint<16> stg2_FIFO_buf96_lane_76 = stg2_FIFO_buf96.extract<1216, 1231>();
  hw_uint<16> stg2_FIFO_buf96_lane_77 = stg2_FIFO_buf96.extract<1232, 1247>();
  hw_uint<16> stg2_FIFO_buf96_lane_78 = stg2_FIFO_buf96.extract<1248, 1263>();
  hw_uint<16> stg2_FIFO_buf96_lane_79 = stg2_FIFO_buf96.extract<1264, 1279>();
  hw_uint<16> stg2_FIFO_buf96_lane_80 = stg2_FIFO_buf96.extract<1280, 1295>();
  hw_uint<16> stg2_FIFO_buf96_lane_81 = stg2_FIFO_buf96.extract<1296, 1311>();
  hw_uint<16> stg2_FIFO_buf96_lane_82 = stg2_FIFO_buf96.extract<1312, 1327>();
  hw_uint<16> stg2_FIFO_buf96_lane_83 = stg2_FIFO_buf96.extract<1328, 1343>();
  hw_uint<16> stg2_FIFO_buf96_lane_84 = stg2_FIFO_buf96.extract<1344, 1359>();
  hw_uint<16> stg2_FIFO_buf96_lane_85 = stg2_FIFO_buf96.extract<1360, 1375>();
  hw_uint<16> stg2_FIFO_buf96_lane_86 = stg2_FIFO_buf96.extract<1376, 1391>();
  hw_uint<16> stg2_FIFO_buf96_lane_87 = stg2_FIFO_buf96.extract<1392, 1407>();
  hw_uint<16> stg2_FIFO_buf96_lane_88 = stg2_FIFO_buf96.extract<1408, 1423>();
  hw_uint<16> stg2_FIFO_buf96_lane_89 = stg2_FIFO_buf96.extract<1424, 1439>();
  hw_uint<16> stg2_FIFO_buf96_lane_90 = stg2_FIFO_buf96.extract<1440, 1455>();
  hw_uint<16> stg2_FIFO_buf96_lane_91 = stg2_FIFO_buf96.extract<1456, 1471>();
  hw_uint<16> stg2_FIFO_buf96_lane_92 = stg2_FIFO_buf96.extract<1472, 1487>();
  hw_uint<16> stg2_FIFO_buf96_lane_93 = stg2_FIFO_buf96.extract<1488, 1503>();
  hw_uint<16> stg2_FIFO_buf96_lane_94 = stg2_FIFO_buf96.extract<1504, 1519>();
  hw_uint<16> stg2_FIFO_buf96_lane_95 = stg2_FIFO_buf96.extract<1520, 1535>();
  hw_uint<16> stg2_FIFO_buf96_lane_96 = stg2_FIFO_buf96.extract<1536, 1551>();
  hw_uint<16> stg2_FIFO_buf96_lane_97 = stg2_FIFO_buf96.extract<1552, 1567>();
  hw_uint<16> stg2_FIFO_buf96_lane_98 = stg2_FIFO_buf96.extract<1568, 1583>();
  hw_uint<16> stg2_FIFO_buf96_lane_99 = stg2_FIFO_buf96.extract<1584, 1599>();
  hw_uint<16> stg2_FIFO_buf96_lane_100 = stg2_FIFO_buf96.extract<1600, 1615>();
  hw_uint<16> stg2_FIFO_buf96_lane_101 = stg2_FIFO_buf96.extract<1616, 1631>();
  hw_uint<16> stg2_FIFO_buf96_lane_102 = stg2_FIFO_buf96.extract<1632, 1647>();
  hw_uint<16> stg2_FIFO_buf96_lane_103 = stg2_FIFO_buf96.extract<1648, 1663>();
  hw_uint<16> stg2_FIFO_buf96_lane_104 = stg2_FIFO_buf96.extract<1664, 1679>();
  hw_uint<16> stg2_FIFO_buf96_lane_105 = stg2_FIFO_buf96.extract<1680, 1695>();
  hw_uint<16> stg2_FIFO_buf96_lane_106 = stg2_FIFO_buf96.extract<1696, 1711>();
  hw_uint<16> stg2_FIFO_buf96_lane_107 = stg2_FIFO_buf96.extract<1712, 1727>();
  hw_uint<16> stg2_FIFO_buf96_lane_108 = stg2_FIFO_buf96.extract<1728, 1743>();
  hw_uint<16> stg2_FIFO_buf96_lane_109 = stg2_FIFO_buf96.extract<1744, 1759>();
  hw_uint<16> stg2_FIFO_buf96_lane_110 = stg2_FIFO_buf96.extract<1760, 1775>();
  hw_uint<16> stg2_FIFO_buf96_lane_111 = stg2_FIFO_buf96.extract<1776, 1791>();
  hw_uint<16> stg2_FIFO_buf96_lane_112 = stg2_FIFO_buf96.extract<1792, 1807>();
  hw_uint<16> stg2_FIFO_buf96_lane_113 = stg2_FIFO_buf96.extract<1808, 1823>();
  hw_uint<16> stg2_FIFO_buf96_lane_114 = stg2_FIFO_buf96.extract<1824, 1839>();
  hw_uint<16> stg2_FIFO_buf96_lane_115 = stg2_FIFO_buf96.extract<1840, 1855>();
  hw_uint<16> stg2_FIFO_buf96_lane_116 = stg2_FIFO_buf96.extract<1856, 1871>();
  hw_uint<16> stg2_FIFO_buf96_lane_117 = stg2_FIFO_buf96.extract<1872, 1887>();
  hw_uint<16> stg2_FIFO_buf96_lane_118 = stg2_FIFO_buf96.extract<1888, 1903>();
  hw_uint<16> stg2_FIFO_buf96_lane_119 = stg2_FIFO_buf96.extract<1904, 1919>();
  hw_uint<16> stg2_FIFO_buf96_lane_120 = stg2_FIFO_buf96.extract<1920, 1935>();
  hw_uint<16> stg2_FIFO_buf96_lane_121 = stg2_FIFO_buf96.extract<1936, 1951>();
  hw_uint<16> stg2_FIFO_buf96_lane_122 = stg2_FIFO_buf96.extract<1952, 1967>();
  hw_uint<16> stg2_FIFO_buf96_lane_123 = stg2_FIFO_buf96.extract<1968, 1983>();
  hw_uint<16> stg2_FIFO_buf96_lane_124 = stg2_FIFO_buf96.extract<1984, 1999>();
  hw_uint<16> stg2_FIFO_buf96_lane_125 = stg2_FIFO_buf96.extract<2000, 2015>();
  hw_uint<16> stg2_FIFO_buf96_lane_126 = stg2_FIFO_buf96.extract<2016, 2031>();
  hw_uint<16> stg2_FIFO_buf96_lane_127 = stg2_FIFO_buf96.extract<2032, 2047>();

	
  hw_uint<64 > stg2_FIFO_buf96_lane_3_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_0);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_1);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_2);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_3_pack, stg2_FIFO_buf96_lane_3);
  auto res_stg3_update_0_sm141_311071 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_3_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_7_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_4);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_5);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_6);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_7_pack, stg2_FIFO_buf96_lane_7);
  auto res_stg3_update_0_sm141_301069 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_7_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_11_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_8);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_9);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_10);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_11_pack, stg2_FIFO_buf96_lane_11);
  auto res_stg3_update_0_sm141_291067 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_11_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_15_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_12);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_13);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_14);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_15_pack, stg2_FIFO_buf96_lane_15);
  auto res_stg3_update_0_sm141_281065 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_15_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_19_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_16);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_17);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_18);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_19_pack, stg2_FIFO_buf96_lane_19);
  auto res_stg3_update_0_sm141_271063 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_19_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_23_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_20);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_21);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_22);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_23_pack, stg2_FIFO_buf96_lane_23);
  auto res_stg3_update_0_sm141_261061 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_23_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_27_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_24);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_25);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_26);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_27_pack, stg2_FIFO_buf96_lane_27);
  auto res_stg3_update_0_sm141_251059 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_27_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_31_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_28);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_29);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_30);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_31_pack, stg2_FIFO_buf96_lane_31);
  auto res_stg3_update_0_sm141_241057 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_31_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_35_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_32);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_33);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_34);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_35_pack, stg2_FIFO_buf96_lane_35);
  auto res_stg3_update_0_sm141_231055 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_35_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_39_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_36);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_37);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_38);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_39_pack, stg2_FIFO_buf96_lane_39);
  auto res_stg3_update_0_sm141_221053 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_39_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_43_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_40);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_41);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_42);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_43_pack, stg2_FIFO_buf96_lane_43);
  auto res_stg3_update_0_sm141_211051 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_43_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_47_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_44);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_45);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_46);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_47_pack, stg2_FIFO_buf96_lane_47);
  auto res_stg3_update_0_sm141_201049 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_47_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_51_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_48);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_49);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_50);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_51_pack, stg2_FIFO_buf96_lane_51);
  auto res_stg3_update_0_sm141_191047 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_51_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_55_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_52);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_53);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_54);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_55_pack, stg2_FIFO_buf96_lane_55);
  auto res_stg3_update_0_sm141_181045 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_55_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_59_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_56);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_57);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_58);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_59_pack, stg2_FIFO_buf96_lane_59);
  auto res_stg3_update_0_sm141_171043 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_59_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_63_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_60);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_61);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_62);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_63_pack, stg2_FIFO_buf96_lane_63);
  auto res_stg3_update_0_sm141_161041 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_63_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_67_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_67_pack, stg2_FIFO_buf96_lane_64);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_67_pack, stg2_FIFO_buf96_lane_65);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_67_pack, stg2_FIFO_buf96_lane_66);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_67_pack, stg2_FIFO_buf96_lane_67);
  auto res_stg3_update_0_sm141_151039 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_67_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_71_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_71_pack, stg2_FIFO_buf96_lane_68);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_71_pack, stg2_FIFO_buf96_lane_69);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_71_pack, stg2_FIFO_buf96_lane_70);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_71_pack, stg2_FIFO_buf96_lane_71);
  auto res_stg3_update_0_sm141_141037 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_71_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_75_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_75_pack, stg2_FIFO_buf96_lane_72);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_75_pack, stg2_FIFO_buf96_lane_73);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_75_pack, stg2_FIFO_buf96_lane_74);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_75_pack, stg2_FIFO_buf96_lane_75);
  auto res_stg3_update_0_sm141_131035 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_75_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_79_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_79_pack, stg2_FIFO_buf96_lane_76);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_79_pack, stg2_FIFO_buf96_lane_77);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_79_pack, stg2_FIFO_buf96_lane_78);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_79_pack, stg2_FIFO_buf96_lane_79);
  auto res_stg3_update_0_sm141_121033 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_79_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_83_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_83_pack, stg2_FIFO_buf96_lane_80);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_83_pack, stg2_FIFO_buf96_lane_81);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_83_pack, stg2_FIFO_buf96_lane_82);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_83_pack, stg2_FIFO_buf96_lane_83);
  auto res_stg3_update_0_sm141_111031 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_83_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_87_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_87_pack, stg2_FIFO_buf96_lane_84);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_87_pack, stg2_FIFO_buf96_lane_85);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_87_pack, stg2_FIFO_buf96_lane_86);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_87_pack, stg2_FIFO_buf96_lane_87);
  auto res_stg3_update_0_sm141_101029 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_87_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_91_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_91_pack, stg2_FIFO_buf96_lane_88);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_91_pack, stg2_FIFO_buf96_lane_89);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_91_pack, stg2_FIFO_buf96_lane_90);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_91_pack, stg2_FIFO_buf96_lane_91);
  auto res_stg3_update_0_sm141_91027 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_91_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_95_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_95_pack, stg2_FIFO_buf96_lane_92);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_95_pack, stg2_FIFO_buf96_lane_93);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_95_pack, stg2_FIFO_buf96_lane_94);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_95_pack, stg2_FIFO_buf96_lane_95);
  auto res_stg3_update_0_sm141_81025 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_95_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_99_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_99_pack, stg2_FIFO_buf96_lane_96);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_99_pack, stg2_FIFO_buf96_lane_97);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_99_pack, stg2_FIFO_buf96_lane_98);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_99_pack, stg2_FIFO_buf96_lane_99);
  auto res_stg3_update_0_sm141_71023 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_99_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_103_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_103_pack, stg2_FIFO_buf96_lane_100);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_103_pack, stg2_FIFO_buf96_lane_101);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_103_pack, stg2_FIFO_buf96_lane_102);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_103_pack, stg2_FIFO_buf96_lane_103);
  auto res_stg3_update_0_sm141_61021 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_103_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_107_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_107_pack, stg2_FIFO_buf96_lane_104);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_107_pack, stg2_FIFO_buf96_lane_105);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_107_pack, stg2_FIFO_buf96_lane_106);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_107_pack, stg2_FIFO_buf96_lane_107);
  auto res_stg3_update_0_sm141_51019 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_107_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_111_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_111_pack, stg2_FIFO_buf96_lane_108);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_111_pack, stg2_FIFO_buf96_lane_109);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_111_pack, stg2_FIFO_buf96_lane_110);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_111_pack, stg2_FIFO_buf96_lane_111);
  auto res_stg3_update_0_sm141_41017 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_111_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_115_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_115_pack, stg2_FIFO_buf96_lane_112);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_115_pack, stg2_FIFO_buf96_lane_113);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_115_pack, stg2_FIFO_buf96_lane_114);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_115_pack, stg2_FIFO_buf96_lane_115);
  auto res_stg3_update_0_sm141_31015 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_115_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_119_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_119_pack, stg2_FIFO_buf96_lane_116);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_119_pack, stg2_FIFO_buf96_lane_117);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_119_pack, stg2_FIFO_buf96_lane_118);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_119_pack, stg2_FIFO_buf96_lane_119);
  auto res_stg3_update_0_sm141_21013 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_119_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_123_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_123_pack, stg2_FIFO_buf96_lane_120);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_123_pack, stg2_FIFO_buf96_lane_121);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_123_pack, stg2_FIFO_buf96_lane_122);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_123_pack, stg2_FIFO_buf96_lane_123);
  auto res_stg3_update_0_sm141_11011 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_123_pack);

  hw_uint<64 > stg2_FIFO_buf96_lane_127_pack;
  set_at<0, 64, 16>(stg2_FIFO_buf96_lane_127_pack, stg2_FIFO_buf96_lane_124);
  set_at<16, 64, 16>(stg2_FIFO_buf96_lane_127_pack, stg2_FIFO_buf96_lane_125);
  set_at<32, 64, 16>(stg2_FIFO_buf96_lane_127_pack, stg2_FIFO_buf96_lane_126);
  set_at<48, 64, 16>(stg2_FIFO_buf96_lane_127_pack, stg2_FIFO_buf96_lane_127);
  auto res_stg3_update_0_sm141_01009 = stg3_generated_compute_unrolled_1(stg2_FIFO_buf96_lane_127_pack);
  hw_uint<512 > return_value3344;
  set_at<0, 512, 16>(return_value3344, res_stg3_update_0_sm141_311071);
  set_at<16, 512, 16>(return_value3344, res_stg3_update_0_sm141_301069);
  set_at<32, 512, 16>(return_value3344, res_stg3_update_0_sm141_291067);
  set_at<48, 512, 16>(return_value3344, res_stg3_update_0_sm141_281065);
  set_at<64, 512, 16>(return_value3344, res_stg3_update_0_sm141_271063);
  set_at<80, 512, 16>(return_value3344, res_stg3_update_0_sm141_261061);
  set_at<96, 512, 16>(return_value3344, res_stg3_update_0_sm141_251059);
  set_at<112, 512, 16>(return_value3344, res_stg3_update_0_sm141_241057);
  set_at<128, 512, 16>(return_value3344, res_stg3_update_0_sm141_231055);
  set_at<144, 512, 16>(return_value3344, res_stg3_update_0_sm141_221053);
  set_at<160, 512, 16>(return_value3344, res_stg3_update_0_sm141_211051);
  set_at<176, 512, 16>(return_value3344, res_stg3_update_0_sm141_201049);
  set_at<192, 512, 16>(return_value3344, res_stg3_update_0_sm141_191047);
  set_at<208, 512, 16>(return_value3344, res_stg3_update_0_sm141_181045);
  set_at<224, 512, 16>(return_value3344, res_stg3_update_0_sm141_171043);
  set_at<240, 512, 16>(return_value3344, res_stg3_update_0_sm141_161041);
  set_at<256, 512, 16>(return_value3344, res_stg3_update_0_sm141_151039);
  set_at<272, 512, 16>(return_value3344, res_stg3_update_0_sm141_141037);
  set_at<288, 512, 16>(return_value3344, res_stg3_update_0_sm141_131035);
  set_at<304, 512, 16>(return_value3344, res_stg3_update_0_sm141_121033);
  set_at<320, 512, 16>(return_value3344, res_stg3_update_0_sm141_111031);
  set_at<336, 512, 16>(return_value3344, res_stg3_update_0_sm141_101029);
  set_at<352, 512, 16>(return_value3344, res_stg3_update_0_sm141_91027);
  set_at<368, 512, 16>(return_value3344, res_stg3_update_0_sm141_81025);
  set_at<384, 512, 16>(return_value3344, res_stg3_update_0_sm141_71023);
  set_at<400, 512, 16>(return_value3344, res_stg3_update_0_sm141_61021);
  set_at<416, 512, 16>(return_value3344, res_stg3_update_0_sm141_51019);
  set_at<432, 512, 16>(return_value3344, res_stg3_update_0_sm141_41017);
  set_at<448, 512, 16>(return_value3344, res_stg3_update_0_sm141_31015);
  set_at<464, 512, 16>(return_value3344, res_stg3_update_0_sm141_21013);
  set_at<480, 512, 16>(return_value3344, res_stg3_update_0_sm141_11011);
  set_at<496, 512, 16>(return_value3344, res_stg3_update_0_sm141_01009);
  return return_value3344;

}

hw_uint<512> stg4_1_cu3346(hw_uint<16*128>& stg3_FIFO_buf100) {
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
  hw_uint<16> stg3_FIFO_buf100_lane_64 = stg3_FIFO_buf100.extract<1024, 1039>();
  hw_uint<16> stg3_FIFO_buf100_lane_65 = stg3_FIFO_buf100.extract<1040, 1055>();
  hw_uint<16> stg3_FIFO_buf100_lane_66 = stg3_FIFO_buf100.extract<1056, 1071>();
  hw_uint<16> stg3_FIFO_buf100_lane_67 = stg3_FIFO_buf100.extract<1072, 1087>();
  hw_uint<16> stg3_FIFO_buf100_lane_68 = stg3_FIFO_buf100.extract<1088, 1103>();
  hw_uint<16> stg3_FIFO_buf100_lane_69 = stg3_FIFO_buf100.extract<1104, 1119>();
  hw_uint<16> stg3_FIFO_buf100_lane_70 = stg3_FIFO_buf100.extract<1120, 1135>();
  hw_uint<16> stg3_FIFO_buf100_lane_71 = stg3_FIFO_buf100.extract<1136, 1151>();
  hw_uint<16> stg3_FIFO_buf100_lane_72 = stg3_FIFO_buf100.extract<1152, 1167>();
  hw_uint<16> stg3_FIFO_buf100_lane_73 = stg3_FIFO_buf100.extract<1168, 1183>();
  hw_uint<16> stg3_FIFO_buf100_lane_74 = stg3_FIFO_buf100.extract<1184, 1199>();
  hw_uint<16> stg3_FIFO_buf100_lane_75 = stg3_FIFO_buf100.extract<1200, 1215>();
  hw_uint<16> stg3_FIFO_buf100_lane_76 = stg3_FIFO_buf100.extract<1216, 1231>();
  hw_uint<16> stg3_FIFO_buf100_lane_77 = stg3_FIFO_buf100.extract<1232, 1247>();
  hw_uint<16> stg3_FIFO_buf100_lane_78 = stg3_FIFO_buf100.extract<1248, 1263>();
  hw_uint<16> stg3_FIFO_buf100_lane_79 = stg3_FIFO_buf100.extract<1264, 1279>();
  hw_uint<16> stg3_FIFO_buf100_lane_80 = stg3_FIFO_buf100.extract<1280, 1295>();
  hw_uint<16> stg3_FIFO_buf100_lane_81 = stg3_FIFO_buf100.extract<1296, 1311>();
  hw_uint<16> stg3_FIFO_buf100_lane_82 = stg3_FIFO_buf100.extract<1312, 1327>();
  hw_uint<16> stg3_FIFO_buf100_lane_83 = stg3_FIFO_buf100.extract<1328, 1343>();
  hw_uint<16> stg3_FIFO_buf100_lane_84 = stg3_FIFO_buf100.extract<1344, 1359>();
  hw_uint<16> stg3_FIFO_buf100_lane_85 = stg3_FIFO_buf100.extract<1360, 1375>();
  hw_uint<16> stg3_FIFO_buf100_lane_86 = stg3_FIFO_buf100.extract<1376, 1391>();
  hw_uint<16> stg3_FIFO_buf100_lane_87 = stg3_FIFO_buf100.extract<1392, 1407>();
  hw_uint<16> stg3_FIFO_buf100_lane_88 = stg3_FIFO_buf100.extract<1408, 1423>();
  hw_uint<16> stg3_FIFO_buf100_lane_89 = stg3_FIFO_buf100.extract<1424, 1439>();
  hw_uint<16> stg3_FIFO_buf100_lane_90 = stg3_FIFO_buf100.extract<1440, 1455>();
  hw_uint<16> stg3_FIFO_buf100_lane_91 = stg3_FIFO_buf100.extract<1456, 1471>();
  hw_uint<16> stg3_FIFO_buf100_lane_92 = stg3_FIFO_buf100.extract<1472, 1487>();
  hw_uint<16> stg3_FIFO_buf100_lane_93 = stg3_FIFO_buf100.extract<1488, 1503>();
  hw_uint<16> stg3_FIFO_buf100_lane_94 = stg3_FIFO_buf100.extract<1504, 1519>();
  hw_uint<16> stg3_FIFO_buf100_lane_95 = stg3_FIFO_buf100.extract<1520, 1535>();
  hw_uint<16> stg3_FIFO_buf100_lane_96 = stg3_FIFO_buf100.extract<1536, 1551>();
  hw_uint<16> stg3_FIFO_buf100_lane_97 = stg3_FIFO_buf100.extract<1552, 1567>();
  hw_uint<16> stg3_FIFO_buf100_lane_98 = stg3_FIFO_buf100.extract<1568, 1583>();
  hw_uint<16> stg3_FIFO_buf100_lane_99 = stg3_FIFO_buf100.extract<1584, 1599>();
  hw_uint<16> stg3_FIFO_buf100_lane_100 = stg3_FIFO_buf100.extract<1600, 1615>();
  hw_uint<16> stg3_FIFO_buf100_lane_101 = stg3_FIFO_buf100.extract<1616, 1631>();
  hw_uint<16> stg3_FIFO_buf100_lane_102 = stg3_FIFO_buf100.extract<1632, 1647>();
  hw_uint<16> stg3_FIFO_buf100_lane_103 = stg3_FIFO_buf100.extract<1648, 1663>();
  hw_uint<16> stg3_FIFO_buf100_lane_104 = stg3_FIFO_buf100.extract<1664, 1679>();
  hw_uint<16> stg3_FIFO_buf100_lane_105 = stg3_FIFO_buf100.extract<1680, 1695>();
  hw_uint<16> stg3_FIFO_buf100_lane_106 = stg3_FIFO_buf100.extract<1696, 1711>();
  hw_uint<16> stg3_FIFO_buf100_lane_107 = stg3_FIFO_buf100.extract<1712, 1727>();
  hw_uint<16> stg3_FIFO_buf100_lane_108 = stg3_FIFO_buf100.extract<1728, 1743>();
  hw_uint<16> stg3_FIFO_buf100_lane_109 = stg3_FIFO_buf100.extract<1744, 1759>();
  hw_uint<16> stg3_FIFO_buf100_lane_110 = stg3_FIFO_buf100.extract<1760, 1775>();
  hw_uint<16> stg3_FIFO_buf100_lane_111 = stg3_FIFO_buf100.extract<1776, 1791>();
  hw_uint<16> stg3_FIFO_buf100_lane_112 = stg3_FIFO_buf100.extract<1792, 1807>();
  hw_uint<16> stg3_FIFO_buf100_lane_113 = stg3_FIFO_buf100.extract<1808, 1823>();
  hw_uint<16> stg3_FIFO_buf100_lane_114 = stg3_FIFO_buf100.extract<1824, 1839>();
  hw_uint<16> stg3_FIFO_buf100_lane_115 = stg3_FIFO_buf100.extract<1840, 1855>();
  hw_uint<16> stg3_FIFO_buf100_lane_116 = stg3_FIFO_buf100.extract<1856, 1871>();
  hw_uint<16> stg3_FIFO_buf100_lane_117 = stg3_FIFO_buf100.extract<1872, 1887>();
  hw_uint<16> stg3_FIFO_buf100_lane_118 = stg3_FIFO_buf100.extract<1888, 1903>();
  hw_uint<16> stg3_FIFO_buf100_lane_119 = stg3_FIFO_buf100.extract<1904, 1919>();
  hw_uint<16> stg3_FIFO_buf100_lane_120 = stg3_FIFO_buf100.extract<1920, 1935>();
  hw_uint<16> stg3_FIFO_buf100_lane_121 = stg3_FIFO_buf100.extract<1936, 1951>();
  hw_uint<16> stg3_FIFO_buf100_lane_122 = stg3_FIFO_buf100.extract<1952, 1967>();
  hw_uint<16> stg3_FIFO_buf100_lane_123 = stg3_FIFO_buf100.extract<1968, 1983>();
  hw_uint<16> stg3_FIFO_buf100_lane_124 = stg3_FIFO_buf100.extract<1984, 1999>();
  hw_uint<16> stg3_FIFO_buf100_lane_125 = stg3_FIFO_buf100.extract<2000, 2015>();
  hw_uint<16> stg3_FIFO_buf100_lane_126 = stg3_FIFO_buf100.extract<2016, 2031>();
  hw_uint<16> stg3_FIFO_buf100_lane_127 = stg3_FIFO_buf100.extract<2032, 2047>();

	
  hw_uint<64 > stg3_FIFO_buf100_lane_3_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_0);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_1);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_2);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_3_pack, stg3_FIFO_buf100_lane_3);
  auto res_stg4_update_0_sm142_311135 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_3_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_7_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_4);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_5);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_6);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_7_pack, stg3_FIFO_buf100_lane_7);
  auto res_stg4_update_0_sm142_301133 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_7_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_11_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_8);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_9);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_10);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_11_pack, stg3_FIFO_buf100_lane_11);
  auto res_stg4_update_0_sm142_291131 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_11_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_15_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_12);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_13);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_14);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_15_pack, stg3_FIFO_buf100_lane_15);
  auto res_stg4_update_0_sm142_281129 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_15_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_19_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_16);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_17);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_18);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_19_pack, stg3_FIFO_buf100_lane_19);
  auto res_stg4_update_0_sm142_271127 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_19_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_23_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_20);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_21);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_22);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_23_pack, stg3_FIFO_buf100_lane_23);
  auto res_stg4_update_0_sm142_261125 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_23_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_27_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_24);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_25);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_26);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_27_pack, stg3_FIFO_buf100_lane_27);
  auto res_stg4_update_0_sm142_251123 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_27_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_31_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_28);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_29);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_30);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_31_pack, stg3_FIFO_buf100_lane_31);
  auto res_stg4_update_0_sm142_241121 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_31_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_35_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_32);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_33);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_34);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_35_pack, stg3_FIFO_buf100_lane_35);
  auto res_stg4_update_0_sm142_231119 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_35_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_39_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_36);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_37);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_38);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_39_pack, stg3_FIFO_buf100_lane_39);
  auto res_stg4_update_0_sm142_221117 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_39_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_43_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_40);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_41);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_42);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_43_pack, stg3_FIFO_buf100_lane_43);
  auto res_stg4_update_0_sm142_211115 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_43_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_47_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_44);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_45);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_46);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_47_pack, stg3_FIFO_buf100_lane_47);
  auto res_stg4_update_0_sm142_201113 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_47_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_51_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_48);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_49);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_50);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_51_pack, stg3_FIFO_buf100_lane_51);
  auto res_stg4_update_0_sm142_191111 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_51_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_55_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_52);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_53);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_54);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_55_pack, stg3_FIFO_buf100_lane_55);
  auto res_stg4_update_0_sm142_181109 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_55_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_59_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_56);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_57);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_58);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_59_pack, stg3_FIFO_buf100_lane_59);
  auto res_stg4_update_0_sm142_171107 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_59_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_63_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_60);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_61);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_62);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_63_pack, stg3_FIFO_buf100_lane_63);
  auto res_stg4_update_0_sm142_161105 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_63_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_67_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_67_pack, stg3_FIFO_buf100_lane_64);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_67_pack, stg3_FIFO_buf100_lane_65);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_67_pack, stg3_FIFO_buf100_lane_66);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_67_pack, stg3_FIFO_buf100_lane_67);
  auto res_stg4_update_0_sm142_151103 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_67_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_71_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_71_pack, stg3_FIFO_buf100_lane_68);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_71_pack, stg3_FIFO_buf100_lane_69);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_71_pack, stg3_FIFO_buf100_lane_70);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_71_pack, stg3_FIFO_buf100_lane_71);
  auto res_stg4_update_0_sm142_141101 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_71_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_75_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_75_pack, stg3_FIFO_buf100_lane_72);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_75_pack, stg3_FIFO_buf100_lane_73);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_75_pack, stg3_FIFO_buf100_lane_74);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_75_pack, stg3_FIFO_buf100_lane_75);
  auto res_stg4_update_0_sm142_131099 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_75_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_79_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_79_pack, stg3_FIFO_buf100_lane_76);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_79_pack, stg3_FIFO_buf100_lane_77);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_79_pack, stg3_FIFO_buf100_lane_78);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_79_pack, stg3_FIFO_buf100_lane_79);
  auto res_stg4_update_0_sm142_121097 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_79_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_83_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_83_pack, stg3_FIFO_buf100_lane_80);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_83_pack, stg3_FIFO_buf100_lane_81);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_83_pack, stg3_FIFO_buf100_lane_82);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_83_pack, stg3_FIFO_buf100_lane_83);
  auto res_stg4_update_0_sm142_111095 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_83_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_87_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_87_pack, stg3_FIFO_buf100_lane_84);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_87_pack, stg3_FIFO_buf100_lane_85);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_87_pack, stg3_FIFO_buf100_lane_86);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_87_pack, stg3_FIFO_buf100_lane_87);
  auto res_stg4_update_0_sm142_101093 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_87_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_91_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_91_pack, stg3_FIFO_buf100_lane_88);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_91_pack, stg3_FIFO_buf100_lane_89);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_91_pack, stg3_FIFO_buf100_lane_90);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_91_pack, stg3_FIFO_buf100_lane_91);
  auto res_stg4_update_0_sm142_91091 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_91_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_95_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_95_pack, stg3_FIFO_buf100_lane_92);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_95_pack, stg3_FIFO_buf100_lane_93);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_95_pack, stg3_FIFO_buf100_lane_94);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_95_pack, stg3_FIFO_buf100_lane_95);
  auto res_stg4_update_0_sm142_81089 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_95_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_99_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_99_pack, stg3_FIFO_buf100_lane_96);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_99_pack, stg3_FIFO_buf100_lane_97);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_99_pack, stg3_FIFO_buf100_lane_98);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_99_pack, stg3_FIFO_buf100_lane_99);
  auto res_stg4_update_0_sm142_71087 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_99_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_103_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_103_pack, stg3_FIFO_buf100_lane_100);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_103_pack, stg3_FIFO_buf100_lane_101);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_103_pack, stg3_FIFO_buf100_lane_102);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_103_pack, stg3_FIFO_buf100_lane_103);
  auto res_stg4_update_0_sm142_61085 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_103_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_107_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_107_pack, stg3_FIFO_buf100_lane_104);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_107_pack, stg3_FIFO_buf100_lane_105);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_107_pack, stg3_FIFO_buf100_lane_106);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_107_pack, stg3_FIFO_buf100_lane_107);
  auto res_stg4_update_0_sm142_51083 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_107_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_111_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_111_pack, stg3_FIFO_buf100_lane_108);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_111_pack, stg3_FIFO_buf100_lane_109);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_111_pack, stg3_FIFO_buf100_lane_110);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_111_pack, stg3_FIFO_buf100_lane_111);
  auto res_stg4_update_0_sm142_41081 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_111_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_115_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_115_pack, stg3_FIFO_buf100_lane_112);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_115_pack, stg3_FIFO_buf100_lane_113);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_115_pack, stg3_FIFO_buf100_lane_114);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_115_pack, stg3_FIFO_buf100_lane_115);
  auto res_stg4_update_0_sm142_31079 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_115_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_119_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_119_pack, stg3_FIFO_buf100_lane_116);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_119_pack, stg3_FIFO_buf100_lane_117);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_119_pack, stg3_FIFO_buf100_lane_118);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_119_pack, stg3_FIFO_buf100_lane_119);
  auto res_stg4_update_0_sm142_21077 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_119_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_123_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_123_pack, stg3_FIFO_buf100_lane_120);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_123_pack, stg3_FIFO_buf100_lane_121);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_123_pack, stg3_FIFO_buf100_lane_122);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_123_pack, stg3_FIFO_buf100_lane_123);
  auto res_stg4_update_0_sm142_11075 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_123_pack);

  hw_uint<64 > stg3_FIFO_buf100_lane_127_pack;
  set_at<0, 64, 16>(stg3_FIFO_buf100_lane_127_pack, stg3_FIFO_buf100_lane_124);
  set_at<16, 64, 16>(stg3_FIFO_buf100_lane_127_pack, stg3_FIFO_buf100_lane_125);
  set_at<32, 64, 16>(stg3_FIFO_buf100_lane_127_pack, stg3_FIFO_buf100_lane_126);
  set_at<48, 64, 16>(stg3_FIFO_buf100_lane_127_pack, stg3_FIFO_buf100_lane_127);
  auto res_stg4_update_0_sm142_01073 = stg4_generated_compute_unrolled_1(stg3_FIFO_buf100_lane_127_pack);
  hw_uint<512 > return_value3347;
  set_at<0, 512, 16>(return_value3347, res_stg4_update_0_sm142_311135);
  set_at<16, 512, 16>(return_value3347, res_stg4_update_0_sm142_301133);
  set_at<32, 512, 16>(return_value3347, res_stg4_update_0_sm142_291131);
  set_at<48, 512, 16>(return_value3347, res_stg4_update_0_sm142_281129);
  set_at<64, 512, 16>(return_value3347, res_stg4_update_0_sm142_271127);
  set_at<80, 512, 16>(return_value3347, res_stg4_update_0_sm142_261125);
  set_at<96, 512, 16>(return_value3347, res_stg4_update_0_sm142_251123);
  set_at<112, 512, 16>(return_value3347, res_stg4_update_0_sm142_241121);
  set_at<128, 512, 16>(return_value3347, res_stg4_update_0_sm142_231119);
  set_at<144, 512, 16>(return_value3347, res_stg4_update_0_sm142_221117);
  set_at<160, 512, 16>(return_value3347, res_stg4_update_0_sm142_211115);
  set_at<176, 512, 16>(return_value3347, res_stg4_update_0_sm142_201113);
  set_at<192, 512, 16>(return_value3347, res_stg4_update_0_sm142_191111);
  set_at<208, 512, 16>(return_value3347, res_stg4_update_0_sm142_181109);
  set_at<224, 512, 16>(return_value3347, res_stg4_update_0_sm142_171107);
  set_at<240, 512, 16>(return_value3347, res_stg4_update_0_sm142_161105);
  set_at<256, 512, 16>(return_value3347, res_stg4_update_0_sm142_151103);
  set_at<272, 512, 16>(return_value3347, res_stg4_update_0_sm142_141101);
  set_at<288, 512, 16>(return_value3347, res_stg4_update_0_sm142_131099);
  set_at<304, 512, 16>(return_value3347, res_stg4_update_0_sm142_121097);
  set_at<320, 512, 16>(return_value3347, res_stg4_update_0_sm142_111095);
  set_at<336, 512, 16>(return_value3347, res_stg4_update_0_sm142_101093);
  set_at<352, 512, 16>(return_value3347, res_stg4_update_0_sm142_91091);
  set_at<368, 512, 16>(return_value3347, res_stg4_update_0_sm142_81089);
  set_at<384, 512, 16>(return_value3347, res_stg4_update_0_sm142_71087);
  set_at<400, 512, 16>(return_value3347, res_stg4_update_0_sm142_61085);
  set_at<416, 512, 16>(return_value3347, res_stg4_update_0_sm142_51083);
  set_at<432, 512, 16>(return_value3347, res_stg4_update_0_sm142_41081);
  set_at<448, 512, 16>(return_value3347, res_stg4_update_0_sm142_31079);
  set_at<464, 512, 16>(return_value3347, res_stg4_update_0_sm142_21077);
  set_at<480, 512, 16>(return_value3347, res_stg4_update_0_sm142_11075);
  set_at<496, 512, 16>(return_value3347, res_stg4_update_0_sm142_01073);
  return return_value3347;

}

hw_uint<512> stg5_1_cu3349(hw_uint<16*128>& stg4_FIFO_buf104) {
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
  hw_uint<16> stg4_FIFO_buf104_lane_64 = stg4_FIFO_buf104.extract<1024, 1039>();
  hw_uint<16> stg4_FIFO_buf104_lane_65 = stg4_FIFO_buf104.extract<1040, 1055>();
  hw_uint<16> stg4_FIFO_buf104_lane_66 = stg4_FIFO_buf104.extract<1056, 1071>();
  hw_uint<16> stg4_FIFO_buf104_lane_67 = stg4_FIFO_buf104.extract<1072, 1087>();
  hw_uint<16> stg4_FIFO_buf104_lane_68 = stg4_FIFO_buf104.extract<1088, 1103>();
  hw_uint<16> stg4_FIFO_buf104_lane_69 = stg4_FIFO_buf104.extract<1104, 1119>();
  hw_uint<16> stg4_FIFO_buf104_lane_70 = stg4_FIFO_buf104.extract<1120, 1135>();
  hw_uint<16> stg4_FIFO_buf104_lane_71 = stg4_FIFO_buf104.extract<1136, 1151>();
  hw_uint<16> stg4_FIFO_buf104_lane_72 = stg4_FIFO_buf104.extract<1152, 1167>();
  hw_uint<16> stg4_FIFO_buf104_lane_73 = stg4_FIFO_buf104.extract<1168, 1183>();
  hw_uint<16> stg4_FIFO_buf104_lane_74 = stg4_FIFO_buf104.extract<1184, 1199>();
  hw_uint<16> stg4_FIFO_buf104_lane_75 = stg4_FIFO_buf104.extract<1200, 1215>();
  hw_uint<16> stg4_FIFO_buf104_lane_76 = stg4_FIFO_buf104.extract<1216, 1231>();
  hw_uint<16> stg4_FIFO_buf104_lane_77 = stg4_FIFO_buf104.extract<1232, 1247>();
  hw_uint<16> stg4_FIFO_buf104_lane_78 = stg4_FIFO_buf104.extract<1248, 1263>();
  hw_uint<16> stg4_FIFO_buf104_lane_79 = stg4_FIFO_buf104.extract<1264, 1279>();
  hw_uint<16> stg4_FIFO_buf104_lane_80 = stg4_FIFO_buf104.extract<1280, 1295>();
  hw_uint<16> stg4_FIFO_buf104_lane_81 = stg4_FIFO_buf104.extract<1296, 1311>();
  hw_uint<16> stg4_FIFO_buf104_lane_82 = stg4_FIFO_buf104.extract<1312, 1327>();
  hw_uint<16> stg4_FIFO_buf104_lane_83 = stg4_FIFO_buf104.extract<1328, 1343>();
  hw_uint<16> stg4_FIFO_buf104_lane_84 = stg4_FIFO_buf104.extract<1344, 1359>();
  hw_uint<16> stg4_FIFO_buf104_lane_85 = stg4_FIFO_buf104.extract<1360, 1375>();
  hw_uint<16> stg4_FIFO_buf104_lane_86 = stg4_FIFO_buf104.extract<1376, 1391>();
  hw_uint<16> stg4_FIFO_buf104_lane_87 = stg4_FIFO_buf104.extract<1392, 1407>();
  hw_uint<16> stg4_FIFO_buf104_lane_88 = stg4_FIFO_buf104.extract<1408, 1423>();
  hw_uint<16> stg4_FIFO_buf104_lane_89 = stg4_FIFO_buf104.extract<1424, 1439>();
  hw_uint<16> stg4_FIFO_buf104_lane_90 = stg4_FIFO_buf104.extract<1440, 1455>();
  hw_uint<16> stg4_FIFO_buf104_lane_91 = stg4_FIFO_buf104.extract<1456, 1471>();
  hw_uint<16> stg4_FIFO_buf104_lane_92 = stg4_FIFO_buf104.extract<1472, 1487>();
  hw_uint<16> stg4_FIFO_buf104_lane_93 = stg4_FIFO_buf104.extract<1488, 1503>();
  hw_uint<16> stg4_FIFO_buf104_lane_94 = stg4_FIFO_buf104.extract<1504, 1519>();
  hw_uint<16> stg4_FIFO_buf104_lane_95 = stg4_FIFO_buf104.extract<1520, 1535>();
  hw_uint<16> stg4_FIFO_buf104_lane_96 = stg4_FIFO_buf104.extract<1536, 1551>();
  hw_uint<16> stg4_FIFO_buf104_lane_97 = stg4_FIFO_buf104.extract<1552, 1567>();
  hw_uint<16> stg4_FIFO_buf104_lane_98 = stg4_FIFO_buf104.extract<1568, 1583>();
  hw_uint<16> stg4_FIFO_buf104_lane_99 = stg4_FIFO_buf104.extract<1584, 1599>();
  hw_uint<16> stg4_FIFO_buf104_lane_100 = stg4_FIFO_buf104.extract<1600, 1615>();
  hw_uint<16> stg4_FIFO_buf104_lane_101 = stg4_FIFO_buf104.extract<1616, 1631>();
  hw_uint<16> stg4_FIFO_buf104_lane_102 = stg4_FIFO_buf104.extract<1632, 1647>();
  hw_uint<16> stg4_FIFO_buf104_lane_103 = stg4_FIFO_buf104.extract<1648, 1663>();
  hw_uint<16> stg4_FIFO_buf104_lane_104 = stg4_FIFO_buf104.extract<1664, 1679>();
  hw_uint<16> stg4_FIFO_buf104_lane_105 = stg4_FIFO_buf104.extract<1680, 1695>();
  hw_uint<16> stg4_FIFO_buf104_lane_106 = stg4_FIFO_buf104.extract<1696, 1711>();
  hw_uint<16> stg4_FIFO_buf104_lane_107 = stg4_FIFO_buf104.extract<1712, 1727>();
  hw_uint<16> stg4_FIFO_buf104_lane_108 = stg4_FIFO_buf104.extract<1728, 1743>();
  hw_uint<16> stg4_FIFO_buf104_lane_109 = stg4_FIFO_buf104.extract<1744, 1759>();
  hw_uint<16> stg4_FIFO_buf104_lane_110 = stg4_FIFO_buf104.extract<1760, 1775>();
  hw_uint<16> stg4_FIFO_buf104_lane_111 = stg4_FIFO_buf104.extract<1776, 1791>();
  hw_uint<16> stg4_FIFO_buf104_lane_112 = stg4_FIFO_buf104.extract<1792, 1807>();
  hw_uint<16> stg4_FIFO_buf104_lane_113 = stg4_FIFO_buf104.extract<1808, 1823>();
  hw_uint<16> stg4_FIFO_buf104_lane_114 = stg4_FIFO_buf104.extract<1824, 1839>();
  hw_uint<16> stg4_FIFO_buf104_lane_115 = stg4_FIFO_buf104.extract<1840, 1855>();
  hw_uint<16> stg4_FIFO_buf104_lane_116 = stg4_FIFO_buf104.extract<1856, 1871>();
  hw_uint<16> stg4_FIFO_buf104_lane_117 = stg4_FIFO_buf104.extract<1872, 1887>();
  hw_uint<16> stg4_FIFO_buf104_lane_118 = stg4_FIFO_buf104.extract<1888, 1903>();
  hw_uint<16> stg4_FIFO_buf104_lane_119 = stg4_FIFO_buf104.extract<1904, 1919>();
  hw_uint<16> stg4_FIFO_buf104_lane_120 = stg4_FIFO_buf104.extract<1920, 1935>();
  hw_uint<16> stg4_FIFO_buf104_lane_121 = stg4_FIFO_buf104.extract<1936, 1951>();
  hw_uint<16> stg4_FIFO_buf104_lane_122 = stg4_FIFO_buf104.extract<1952, 1967>();
  hw_uint<16> stg4_FIFO_buf104_lane_123 = stg4_FIFO_buf104.extract<1968, 1983>();
  hw_uint<16> stg4_FIFO_buf104_lane_124 = stg4_FIFO_buf104.extract<1984, 1999>();
  hw_uint<16> stg4_FIFO_buf104_lane_125 = stg4_FIFO_buf104.extract<2000, 2015>();
  hw_uint<16> stg4_FIFO_buf104_lane_126 = stg4_FIFO_buf104.extract<2016, 2031>();
  hw_uint<16> stg4_FIFO_buf104_lane_127 = stg4_FIFO_buf104.extract<2032, 2047>();

	
  hw_uint<64 > stg4_FIFO_buf104_lane_3_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_0);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_1);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_2);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_3_pack, stg4_FIFO_buf104_lane_3);
  auto res_stg5_update_0_sm143_311199 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_3_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_7_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_4);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_5);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_6);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_7_pack, stg4_FIFO_buf104_lane_7);
  auto res_stg5_update_0_sm143_301197 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_7_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_11_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_8);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_9);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_10);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_11_pack, stg4_FIFO_buf104_lane_11);
  auto res_stg5_update_0_sm143_291195 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_11_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_15_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_12);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_13);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_14);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_15_pack, stg4_FIFO_buf104_lane_15);
  auto res_stg5_update_0_sm143_281193 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_15_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_19_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_16);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_17);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_18);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_19_pack, stg4_FIFO_buf104_lane_19);
  auto res_stg5_update_0_sm143_271191 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_19_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_23_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_20);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_21);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_22);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_23_pack, stg4_FIFO_buf104_lane_23);
  auto res_stg5_update_0_sm143_261189 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_23_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_27_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_24);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_25);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_26);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_27_pack, stg4_FIFO_buf104_lane_27);
  auto res_stg5_update_0_sm143_251187 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_27_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_31_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_28);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_29);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_30);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_31_pack, stg4_FIFO_buf104_lane_31);
  auto res_stg5_update_0_sm143_241185 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_31_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_35_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_32);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_33);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_34);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_35_pack, stg4_FIFO_buf104_lane_35);
  auto res_stg5_update_0_sm143_231183 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_35_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_39_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_36);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_37);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_38);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_39_pack, stg4_FIFO_buf104_lane_39);
  auto res_stg5_update_0_sm143_221181 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_39_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_43_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_40);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_41);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_42);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_43_pack, stg4_FIFO_buf104_lane_43);
  auto res_stg5_update_0_sm143_211179 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_43_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_47_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_44);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_45);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_46);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_47_pack, stg4_FIFO_buf104_lane_47);
  auto res_stg5_update_0_sm143_201177 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_47_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_51_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_48);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_49);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_50);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_51_pack, stg4_FIFO_buf104_lane_51);
  auto res_stg5_update_0_sm143_191175 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_51_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_55_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_52);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_53);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_54);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_55_pack, stg4_FIFO_buf104_lane_55);
  auto res_stg5_update_0_sm143_181173 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_55_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_59_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_56);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_57);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_58);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_59_pack, stg4_FIFO_buf104_lane_59);
  auto res_stg5_update_0_sm143_171171 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_59_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_63_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_60);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_61);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_62);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_63_pack, stg4_FIFO_buf104_lane_63);
  auto res_stg5_update_0_sm143_161169 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_63_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_67_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_67_pack, stg4_FIFO_buf104_lane_64);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_67_pack, stg4_FIFO_buf104_lane_65);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_67_pack, stg4_FIFO_buf104_lane_66);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_67_pack, stg4_FIFO_buf104_lane_67);
  auto res_stg5_update_0_sm143_151167 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_67_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_71_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_71_pack, stg4_FIFO_buf104_lane_68);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_71_pack, stg4_FIFO_buf104_lane_69);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_71_pack, stg4_FIFO_buf104_lane_70);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_71_pack, stg4_FIFO_buf104_lane_71);
  auto res_stg5_update_0_sm143_141165 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_71_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_75_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_75_pack, stg4_FIFO_buf104_lane_72);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_75_pack, stg4_FIFO_buf104_lane_73);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_75_pack, stg4_FIFO_buf104_lane_74);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_75_pack, stg4_FIFO_buf104_lane_75);
  auto res_stg5_update_0_sm143_131163 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_75_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_79_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_79_pack, stg4_FIFO_buf104_lane_76);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_79_pack, stg4_FIFO_buf104_lane_77);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_79_pack, stg4_FIFO_buf104_lane_78);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_79_pack, stg4_FIFO_buf104_lane_79);
  auto res_stg5_update_0_sm143_121161 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_79_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_83_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_83_pack, stg4_FIFO_buf104_lane_80);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_83_pack, stg4_FIFO_buf104_lane_81);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_83_pack, stg4_FIFO_buf104_lane_82);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_83_pack, stg4_FIFO_buf104_lane_83);
  auto res_stg5_update_0_sm143_111159 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_83_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_87_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_87_pack, stg4_FIFO_buf104_lane_84);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_87_pack, stg4_FIFO_buf104_lane_85);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_87_pack, stg4_FIFO_buf104_lane_86);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_87_pack, stg4_FIFO_buf104_lane_87);
  auto res_stg5_update_0_sm143_101157 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_87_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_91_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_91_pack, stg4_FIFO_buf104_lane_88);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_91_pack, stg4_FIFO_buf104_lane_89);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_91_pack, stg4_FIFO_buf104_lane_90);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_91_pack, stg4_FIFO_buf104_lane_91);
  auto res_stg5_update_0_sm143_91155 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_91_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_95_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_95_pack, stg4_FIFO_buf104_lane_92);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_95_pack, stg4_FIFO_buf104_lane_93);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_95_pack, stg4_FIFO_buf104_lane_94);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_95_pack, stg4_FIFO_buf104_lane_95);
  auto res_stg5_update_0_sm143_81153 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_95_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_99_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_99_pack, stg4_FIFO_buf104_lane_96);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_99_pack, stg4_FIFO_buf104_lane_97);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_99_pack, stg4_FIFO_buf104_lane_98);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_99_pack, stg4_FIFO_buf104_lane_99);
  auto res_stg5_update_0_sm143_71151 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_99_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_103_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_103_pack, stg4_FIFO_buf104_lane_100);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_103_pack, stg4_FIFO_buf104_lane_101);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_103_pack, stg4_FIFO_buf104_lane_102);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_103_pack, stg4_FIFO_buf104_lane_103);
  auto res_stg5_update_0_sm143_61149 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_103_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_107_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_107_pack, stg4_FIFO_buf104_lane_104);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_107_pack, stg4_FIFO_buf104_lane_105);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_107_pack, stg4_FIFO_buf104_lane_106);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_107_pack, stg4_FIFO_buf104_lane_107);
  auto res_stg5_update_0_sm143_51147 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_107_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_111_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_111_pack, stg4_FIFO_buf104_lane_108);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_111_pack, stg4_FIFO_buf104_lane_109);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_111_pack, stg4_FIFO_buf104_lane_110);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_111_pack, stg4_FIFO_buf104_lane_111);
  auto res_stg5_update_0_sm143_41145 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_111_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_115_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_115_pack, stg4_FIFO_buf104_lane_112);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_115_pack, stg4_FIFO_buf104_lane_113);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_115_pack, stg4_FIFO_buf104_lane_114);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_115_pack, stg4_FIFO_buf104_lane_115);
  auto res_stg5_update_0_sm143_31143 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_115_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_119_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_119_pack, stg4_FIFO_buf104_lane_116);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_119_pack, stg4_FIFO_buf104_lane_117);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_119_pack, stg4_FIFO_buf104_lane_118);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_119_pack, stg4_FIFO_buf104_lane_119);
  auto res_stg5_update_0_sm143_21141 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_119_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_123_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_123_pack, stg4_FIFO_buf104_lane_120);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_123_pack, stg4_FIFO_buf104_lane_121);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_123_pack, stg4_FIFO_buf104_lane_122);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_123_pack, stg4_FIFO_buf104_lane_123);
  auto res_stg5_update_0_sm143_11139 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_123_pack);

  hw_uint<64 > stg4_FIFO_buf104_lane_127_pack;
  set_at<0, 64, 16>(stg4_FIFO_buf104_lane_127_pack, stg4_FIFO_buf104_lane_124);
  set_at<16, 64, 16>(stg4_FIFO_buf104_lane_127_pack, stg4_FIFO_buf104_lane_125);
  set_at<32, 64, 16>(stg4_FIFO_buf104_lane_127_pack, stg4_FIFO_buf104_lane_126);
  set_at<48, 64, 16>(stg4_FIFO_buf104_lane_127_pack, stg4_FIFO_buf104_lane_127);
  auto res_stg5_update_0_sm143_01137 = stg5_generated_compute_unrolled_1(stg4_FIFO_buf104_lane_127_pack);
  hw_uint<512 > return_value3350;
  set_at<0, 512, 16>(return_value3350, res_stg5_update_0_sm143_311199);
  set_at<16, 512, 16>(return_value3350, res_stg5_update_0_sm143_301197);
  set_at<32, 512, 16>(return_value3350, res_stg5_update_0_sm143_291195);
  set_at<48, 512, 16>(return_value3350, res_stg5_update_0_sm143_281193);
  set_at<64, 512, 16>(return_value3350, res_stg5_update_0_sm143_271191);
  set_at<80, 512, 16>(return_value3350, res_stg5_update_0_sm143_261189);
  set_at<96, 512, 16>(return_value3350, res_stg5_update_0_sm143_251187);
  set_at<112, 512, 16>(return_value3350, res_stg5_update_0_sm143_241185);
  set_at<128, 512, 16>(return_value3350, res_stg5_update_0_sm143_231183);
  set_at<144, 512, 16>(return_value3350, res_stg5_update_0_sm143_221181);
  set_at<160, 512, 16>(return_value3350, res_stg5_update_0_sm143_211179);
  set_at<176, 512, 16>(return_value3350, res_stg5_update_0_sm143_201177);
  set_at<192, 512, 16>(return_value3350, res_stg5_update_0_sm143_191175);
  set_at<208, 512, 16>(return_value3350, res_stg5_update_0_sm143_181173);
  set_at<224, 512, 16>(return_value3350, res_stg5_update_0_sm143_171171);
  set_at<240, 512, 16>(return_value3350, res_stg5_update_0_sm143_161169);
  set_at<256, 512, 16>(return_value3350, res_stg5_update_0_sm143_151167);
  set_at<272, 512, 16>(return_value3350, res_stg5_update_0_sm143_141165);
  set_at<288, 512, 16>(return_value3350, res_stg5_update_0_sm143_131163);
  set_at<304, 512, 16>(return_value3350, res_stg5_update_0_sm143_121161);
  set_at<320, 512, 16>(return_value3350, res_stg5_update_0_sm143_111159);
  set_at<336, 512, 16>(return_value3350, res_stg5_update_0_sm143_101157);
  set_at<352, 512, 16>(return_value3350, res_stg5_update_0_sm143_91155);
  set_at<368, 512, 16>(return_value3350, res_stg5_update_0_sm143_81153);
  set_at<384, 512, 16>(return_value3350, res_stg5_update_0_sm143_71151);
  set_at<400, 512, 16>(return_value3350, res_stg5_update_0_sm143_61149);
  set_at<416, 512, 16>(return_value3350, res_stg5_update_0_sm143_51147);
  set_at<432, 512, 16>(return_value3350, res_stg5_update_0_sm143_41145);
  set_at<448, 512, 16>(return_value3350, res_stg5_update_0_sm143_31143);
  set_at<464, 512, 16>(return_value3350, res_stg5_update_0_sm143_21141);
  set_at<480, 512, 16>(return_value3350, res_stg5_update_0_sm143_11139);
  set_at<496, 512, 16>(return_value3350, res_stg5_update_0_sm143_01137);
  return return_value3350;

}

hw_uint<512> stg6_1_cu3352(hw_uint<16*128>& stg5_FIFO_buf108) {
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
  hw_uint<16> stg5_FIFO_buf108_lane_64 = stg5_FIFO_buf108.extract<1024, 1039>();
  hw_uint<16> stg5_FIFO_buf108_lane_65 = stg5_FIFO_buf108.extract<1040, 1055>();
  hw_uint<16> stg5_FIFO_buf108_lane_66 = stg5_FIFO_buf108.extract<1056, 1071>();
  hw_uint<16> stg5_FIFO_buf108_lane_67 = stg5_FIFO_buf108.extract<1072, 1087>();
  hw_uint<16> stg5_FIFO_buf108_lane_68 = stg5_FIFO_buf108.extract<1088, 1103>();
  hw_uint<16> stg5_FIFO_buf108_lane_69 = stg5_FIFO_buf108.extract<1104, 1119>();
  hw_uint<16> stg5_FIFO_buf108_lane_70 = stg5_FIFO_buf108.extract<1120, 1135>();
  hw_uint<16> stg5_FIFO_buf108_lane_71 = stg5_FIFO_buf108.extract<1136, 1151>();
  hw_uint<16> stg5_FIFO_buf108_lane_72 = stg5_FIFO_buf108.extract<1152, 1167>();
  hw_uint<16> stg5_FIFO_buf108_lane_73 = stg5_FIFO_buf108.extract<1168, 1183>();
  hw_uint<16> stg5_FIFO_buf108_lane_74 = stg5_FIFO_buf108.extract<1184, 1199>();
  hw_uint<16> stg5_FIFO_buf108_lane_75 = stg5_FIFO_buf108.extract<1200, 1215>();
  hw_uint<16> stg5_FIFO_buf108_lane_76 = stg5_FIFO_buf108.extract<1216, 1231>();
  hw_uint<16> stg5_FIFO_buf108_lane_77 = stg5_FIFO_buf108.extract<1232, 1247>();
  hw_uint<16> stg5_FIFO_buf108_lane_78 = stg5_FIFO_buf108.extract<1248, 1263>();
  hw_uint<16> stg5_FIFO_buf108_lane_79 = stg5_FIFO_buf108.extract<1264, 1279>();
  hw_uint<16> stg5_FIFO_buf108_lane_80 = stg5_FIFO_buf108.extract<1280, 1295>();
  hw_uint<16> stg5_FIFO_buf108_lane_81 = stg5_FIFO_buf108.extract<1296, 1311>();
  hw_uint<16> stg5_FIFO_buf108_lane_82 = stg5_FIFO_buf108.extract<1312, 1327>();
  hw_uint<16> stg5_FIFO_buf108_lane_83 = stg5_FIFO_buf108.extract<1328, 1343>();
  hw_uint<16> stg5_FIFO_buf108_lane_84 = stg5_FIFO_buf108.extract<1344, 1359>();
  hw_uint<16> stg5_FIFO_buf108_lane_85 = stg5_FIFO_buf108.extract<1360, 1375>();
  hw_uint<16> stg5_FIFO_buf108_lane_86 = stg5_FIFO_buf108.extract<1376, 1391>();
  hw_uint<16> stg5_FIFO_buf108_lane_87 = stg5_FIFO_buf108.extract<1392, 1407>();
  hw_uint<16> stg5_FIFO_buf108_lane_88 = stg5_FIFO_buf108.extract<1408, 1423>();
  hw_uint<16> stg5_FIFO_buf108_lane_89 = stg5_FIFO_buf108.extract<1424, 1439>();
  hw_uint<16> stg5_FIFO_buf108_lane_90 = stg5_FIFO_buf108.extract<1440, 1455>();
  hw_uint<16> stg5_FIFO_buf108_lane_91 = stg5_FIFO_buf108.extract<1456, 1471>();
  hw_uint<16> stg5_FIFO_buf108_lane_92 = stg5_FIFO_buf108.extract<1472, 1487>();
  hw_uint<16> stg5_FIFO_buf108_lane_93 = stg5_FIFO_buf108.extract<1488, 1503>();
  hw_uint<16> stg5_FIFO_buf108_lane_94 = stg5_FIFO_buf108.extract<1504, 1519>();
  hw_uint<16> stg5_FIFO_buf108_lane_95 = stg5_FIFO_buf108.extract<1520, 1535>();
  hw_uint<16> stg5_FIFO_buf108_lane_96 = stg5_FIFO_buf108.extract<1536, 1551>();
  hw_uint<16> stg5_FIFO_buf108_lane_97 = stg5_FIFO_buf108.extract<1552, 1567>();
  hw_uint<16> stg5_FIFO_buf108_lane_98 = stg5_FIFO_buf108.extract<1568, 1583>();
  hw_uint<16> stg5_FIFO_buf108_lane_99 = stg5_FIFO_buf108.extract<1584, 1599>();
  hw_uint<16> stg5_FIFO_buf108_lane_100 = stg5_FIFO_buf108.extract<1600, 1615>();
  hw_uint<16> stg5_FIFO_buf108_lane_101 = stg5_FIFO_buf108.extract<1616, 1631>();
  hw_uint<16> stg5_FIFO_buf108_lane_102 = stg5_FIFO_buf108.extract<1632, 1647>();
  hw_uint<16> stg5_FIFO_buf108_lane_103 = stg5_FIFO_buf108.extract<1648, 1663>();
  hw_uint<16> stg5_FIFO_buf108_lane_104 = stg5_FIFO_buf108.extract<1664, 1679>();
  hw_uint<16> stg5_FIFO_buf108_lane_105 = stg5_FIFO_buf108.extract<1680, 1695>();
  hw_uint<16> stg5_FIFO_buf108_lane_106 = stg5_FIFO_buf108.extract<1696, 1711>();
  hw_uint<16> stg5_FIFO_buf108_lane_107 = stg5_FIFO_buf108.extract<1712, 1727>();
  hw_uint<16> stg5_FIFO_buf108_lane_108 = stg5_FIFO_buf108.extract<1728, 1743>();
  hw_uint<16> stg5_FIFO_buf108_lane_109 = stg5_FIFO_buf108.extract<1744, 1759>();
  hw_uint<16> stg5_FIFO_buf108_lane_110 = stg5_FIFO_buf108.extract<1760, 1775>();
  hw_uint<16> stg5_FIFO_buf108_lane_111 = stg5_FIFO_buf108.extract<1776, 1791>();
  hw_uint<16> stg5_FIFO_buf108_lane_112 = stg5_FIFO_buf108.extract<1792, 1807>();
  hw_uint<16> stg5_FIFO_buf108_lane_113 = stg5_FIFO_buf108.extract<1808, 1823>();
  hw_uint<16> stg5_FIFO_buf108_lane_114 = stg5_FIFO_buf108.extract<1824, 1839>();
  hw_uint<16> stg5_FIFO_buf108_lane_115 = stg5_FIFO_buf108.extract<1840, 1855>();
  hw_uint<16> stg5_FIFO_buf108_lane_116 = stg5_FIFO_buf108.extract<1856, 1871>();
  hw_uint<16> stg5_FIFO_buf108_lane_117 = stg5_FIFO_buf108.extract<1872, 1887>();
  hw_uint<16> stg5_FIFO_buf108_lane_118 = stg5_FIFO_buf108.extract<1888, 1903>();
  hw_uint<16> stg5_FIFO_buf108_lane_119 = stg5_FIFO_buf108.extract<1904, 1919>();
  hw_uint<16> stg5_FIFO_buf108_lane_120 = stg5_FIFO_buf108.extract<1920, 1935>();
  hw_uint<16> stg5_FIFO_buf108_lane_121 = stg5_FIFO_buf108.extract<1936, 1951>();
  hw_uint<16> stg5_FIFO_buf108_lane_122 = stg5_FIFO_buf108.extract<1952, 1967>();
  hw_uint<16> stg5_FIFO_buf108_lane_123 = stg5_FIFO_buf108.extract<1968, 1983>();
  hw_uint<16> stg5_FIFO_buf108_lane_124 = stg5_FIFO_buf108.extract<1984, 1999>();
  hw_uint<16> stg5_FIFO_buf108_lane_125 = stg5_FIFO_buf108.extract<2000, 2015>();
  hw_uint<16> stg5_FIFO_buf108_lane_126 = stg5_FIFO_buf108.extract<2016, 2031>();
  hw_uint<16> stg5_FIFO_buf108_lane_127 = stg5_FIFO_buf108.extract<2032, 2047>();

	
  hw_uint<64 > stg5_FIFO_buf108_lane_3_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_0);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_1);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_2);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_3_pack, stg5_FIFO_buf108_lane_3);
  auto res_stg6_update_0_sm144_311263 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_3_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_7_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_4);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_5);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_6);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_7_pack, stg5_FIFO_buf108_lane_7);
  auto res_stg6_update_0_sm144_301261 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_7_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_11_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_8);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_9);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_10);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_11_pack, stg5_FIFO_buf108_lane_11);
  auto res_stg6_update_0_sm144_291259 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_11_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_15_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_12);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_13);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_14);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_15_pack, stg5_FIFO_buf108_lane_15);
  auto res_stg6_update_0_sm144_281257 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_15_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_19_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_16);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_17);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_18);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_19_pack, stg5_FIFO_buf108_lane_19);
  auto res_stg6_update_0_sm144_271255 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_19_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_23_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_20);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_21);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_22);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_23_pack, stg5_FIFO_buf108_lane_23);
  auto res_stg6_update_0_sm144_261253 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_23_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_27_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_24);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_25);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_26);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_27_pack, stg5_FIFO_buf108_lane_27);
  auto res_stg6_update_0_sm144_251251 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_27_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_31_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_28);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_29);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_30);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_31_pack, stg5_FIFO_buf108_lane_31);
  auto res_stg6_update_0_sm144_241249 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_31_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_35_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_32);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_33);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_34);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_35_pack, stg5_FIFO_buf108_lane_35);
  auto res_stg6_update_0_sm144_231247 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_35_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_39_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_36);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_37);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_38);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_39_pack, stg5_FIFO_buf108_lane_39);
  auto res_stg6_update_0_sm144_221245 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_39_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_43_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_40);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_41);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_42);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_43_pack, stg5_FIFO_buf108_lane_43);
  auto res_stg6_update_0_sm144_211243 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_43_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_47_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_44);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_45);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_46);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_47_pack, stg5_FIFO_buf108_lane_47);
  auto res_stg6_update_0_sm144_201241 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_47_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_51_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_48);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_49);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_50);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_51_pack, stg5_FIFO_buf108_lane_51);
  auto res_stg6_update_0_sm144_191239 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_51_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_55_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_52);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_53);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_54);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_55_pack, stg5_FIFO_buf108_lane_55);
  auto res_stg6_update_0_sm144_181237 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_55_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_59_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_56);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_57);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_58);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_59_pack, stg5_FIFO_buf108_lane_59);
  auto res_stg6_update_0_sm144_171235 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_59_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_63_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_60);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_61);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_62);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_63_pack, stg5_FIFO_buf108_lane_63);
  auto res_stg6_update_0_sm144_161233 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_63_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_67_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_67_pack, stg5_FIFO_buf108_lane_64);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_67_pack, stg5_FIFO_buf108_lane_65);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_67_pack, stg5_FIFO_buf108_lane_66);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_67_pack, stg5_FIFO_buf108_lane_67);
  auto res_stg6_update_0_sm144_151231 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_67_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_71_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_71_pack, stg5_FIFO_buf108_lane_68);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_71_pack, stg5_FIFO_buf108_lane_69);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_71_pack, stg5_FIFO_buf108_lane_70);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_71_pack, stg5_FIFO_buf108_lane_71);
  auto res_stg6_update_0_sm144_141229 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_71_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_75_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_75_pack, stg5_FIFO_buf108_lane_72);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_75_pack, stg5_FIFO_buf108_lane_73);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_75_pack, stg5_FIFO_buf108_lane_74);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_75_pack, stg5_FIFO_buf108_lane_75);
  auto res_stg6_update_0_sm144_131227 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_75_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_79_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_79_pack, stg5_FIFO_buf108_lane_76);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_79_pack, stg5_FIFO_buf108_lane_77);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_79_pack, stg5_FIFO_buf108_lane_78);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_79_pack, stg5_FIFO_buf108_lane_79);
  auto res_stg6_update_0_sm144_121225 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_79_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_83_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_83_pack, stg5_FIFO_buf108_lane_80);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_83_pack, stg5_FIFO_buf108_lane_81);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_83_pack, stg5_FIFO_buf108_lane_82);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_83_pack, stg5_FIFO_buf108_lane_83);
  auto res_stg6_update_0_sm144_111223 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_83_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_87_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_87_pack, stg5_FIFO_buf108_lane_84);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_87_pack, stg5_FIFO_buf108_lane_85);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_87_pack, stg5_FIFO_buf108_lane_86);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_87_pack, stg5_FIFO_buf108_lane_87);
  auto res_stg6_update_0_sm144_101221 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_87_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_91_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_91_pack, stg5_FIFO_buf108_lane_88);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_91_pack, stg5_FIFO_buf108_lane_89);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_91_pack, stg5_FIFO_buf108_lane_90);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_91_pack, stg5_FIFO_buf108_lane_91);
  auto res_stg6_update_0_sm144_91219 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_91_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_95_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_95_pack, stg5_FIFO_buf108_lane_92);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_95_pack, stg5_FIFO_buf108_lane_93);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_95_pack, stg5_FIFO_buf108_lane_94);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_95_pack, stg5_FIFO_buf108_lane_95);
  auto res_stg6_update_0_sm144_81217 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_95_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_99_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_99_pack, stg5_FIFO_buf108_lane_96);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_99_pack, stg5_FIFO_buf108_lane_97);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_99_pack, stg5_FIFO_buf108_lane_98);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_99_pack, stg5_FIFO_buf108_lane_99);
  auto res_stg6_update_0_sm144_71215 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_99_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_103_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_103_pack, stg5_FIFO_buf108_lane_100);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_103_pack, stg5_FIFO_buf108_lane_101);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_103_pack, stg5_FIFO_buf108_lane_102);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_103_pack, stg5_FIFO_buf108_lane_103);
  auto res_stg6_update_0_sm144_61213 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_103_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_107_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_107_pack, stg5_FIFO_buf108_lane_104);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_107_pack, stg5_FIFO_buf108_lane_105);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_107_pack, stg5_FIFO_buf108_lane_106);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_107_pack, stg5_FIFO_buf108_lane_107);
  auto res_stg6_update_0_sm144_51211 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_107_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_111_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_111_pack, stg5_FIFO_buf108_lane_108);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_111_pack, stg5_FIFO_buf108_lane_109);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_111_pack, stg5_FIFO_buf108_lane_110);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_111_pack, stg5_FIFO_buf108_lane_111);
  auto res_stg6_update_0_sm144_41209 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_111_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_115_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_115_pack, stg5_FIFO_buf108_lane_112);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_115_pack, stg5_FIFO_buf108_lane_113);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_115_pack, stg5_FIFO_buf108_lane_114);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_115_pack, stg5_FIFO_buf108_lane_115);
  auto res_stg6_update_0_sm144_31207 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_115_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_119_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_119_pack, stg5_FIFO_buf108_lane_116);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_119_pack, stg5_FIFO_buf108_lane_117);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_119_pack, stg5_FIFO_buf108_lane_118);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_119_pack, stg5_FIFO_buf108_lane_119);
  auto res_stg6_update_0_sm144_21205 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_119_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_123_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_123_pack, stg5_FIFO_buf108_lane_120);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_123_pack, stg5_FIFO_buf108_lane_121);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_123_pack, stg5_FIFO_buf108_lane_122);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_123_pack, stg5_FIFO_buf108_lane_123);
  auto res_stg6_update_0_sm144_11203 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_123_pack);

  hw_uint<64 > stg5_FIFO_buf108_lane_127_pack;
  set_at<0, 64, 16>(stg5_FIFO_buf108_lane_127_pack, stg5_FIFO_buf108_lane_124);
  set_at<16, 64, 16>(stg5_FIFO_buf108_lane_127_pack, stg5_FIFO_buf108_lane_125);
  set_at<32, 64, 16>(stg5_FIFO_buf108_lane_127_pack, stg5_FIFO_buf108_lane_126);
  set_at<48, 64, 16>(stg5_FIFO_buf108_lane_127_pack, stg5_FIFO_buf108_lane_127);
  auto res_stg6_update_0_sm144_01201 = stg6_generated_compute_unrolled_1(stg5_FIFO_buf108_lane_127_pack);
  hw_uint<512 > return_value3353;
  set_at<0, 512, 16>(return_value3353, res_stg6_update_0_sm144_311263);
  set_at<16, 512, 16>(return_value3353, res_stg6_update_0_sm144_301261);
  set_at<32, 512, 16>(return_value3353, res_stg6_update_0_sm144_291259);
  set_at<48, 512, 16>(return_value3353, res_stg6_update_0_sm144_281257);
  set_at<64, 512, 16>(return_value3353, res_stg6_update_0_sm144_271255);
  set_at<80, 512, 16>(return_value3353, res_stg6_update_0_sm144_261253);
  set_at<96, 512, 16>(return_value3353, res_stg6_update_0_sm144_251251);
  set_at<112, 512, 16>(return_value3353, res_stg6_update_0_sm144_241249);
  set_at<128, 512, 16>(return_value3353, res_stg6_update_0_sm144_231247);
  set_at<144, 512, 16>(return_value3353, res_stg6_update_0_sm144_221245);
  set_at<160, 512, 16>(return_value3353, res_stg6_update_0_sm144_211243);
  set_at<176, 512, 16>(return_value3353, res_stg6_update_0_sm144_201241);
  set_at<192, 512, 16>(return_value3353, res_stg6_update_0_sm144_191239);
  set_at<208, 512, 16>(return_value3353, res_stg6_update_0_sm144_181237);
  set_at<224, 512, 16>(return_value3353, res_stg6_update_0_sm144_171235);
  set_at<240, 512, 16>(return_value3353, res_stg6_update_0_sm144_161233);
  set_at<256, 512, 16>(return_value3353, res_stg6_update_0_sm144_151231);
  set_at<272, 512, 16>(return_value3353, res_stg6_update_0_sm144_141229);
  set_at<288, 512, 16>(return_value3353, res_stg6_update_0_sm144_131227);
  set_at<304, 512, 16>(return_value3353, res_stg6_update_0_sm144_121225);
  set_at<320, 512, 16>(return_value3353, res_stg6_update_0_sm144_111223);
  set_at<336, 512, 16>(return_value3353, res_stg6_update_0_sm144_101221);
  set_at<352, 512, 16>(return_value3353, res_stg6_update_0_sm144_91219);
  set_at<368, 512, 16>(return_value3353, res_stg6_update_0_sm144_81217);
  set_at<384, 512, 16>(return_value3353, res_stg6_update_0_sm144_71215);
  set_at<400, 512, 16>(return_value3353, res_stg6_update_0_sm144_61213);
  set_at<416, 512, 16>(return_value3353, res_stg6_update_0_sm144_51211);
  set_at<432, 512, 16>(return_value3353, res_stg6_update_0_sm144_41209);
  set_at<448, 512, 16>(return_value3353, res_stg6_update_0_sm144_31207);
  set_at<464, 512, 16>(return_value3353, res_stg6_update_0_sm144_21205);
  set_at<480, 512, 16>(return_value3353, res_stg6_update_0_sm144_11203);
  set_at<496, 512, 16>(return_value3353, res_stg6_update_0_sm144_01201);
  return return_value3353;

}

hw_uint<512> stg7_1_cu3355(hw_uint<16*128>& stg6_FIFO_buf112) {
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
  hw_uint<16> stg6_FIFO_buf112_lane_64 = stg6_FIFO_buf112.extract<1024, 1039>();
  hw_uint<16> stg6_FIFO_buf112_lane_65 = stg6_FIFO_buf112.extract<1040, 1055>();
  hw_uint<16> stg6_FIFO_buf112_lane_66 = stg6_FIFO_buf112.extract<1056, 1071>();
  hw_uint<16> stg6_FIFO_buf112_lane_67 = stg6_FIFO_buf112.extract<1072, 1087>();
  hw_uint<16> stg6_FIFO_buf112_lane_68 = stg6_FIFO_buf112.extract<1088, 1103>();
  hw_uint<16> stg6_FIFO_buf112_lane_69 = stg6_FIFO_buf112.extract<1104, 1119>();
  hw_uint<16> stg6_FIFO_buf112_lane_70 = stg6_FIFO_buf112.extract<1120, 1135>();
  hw_uint<16> stg6_FIFO_buf112_lane_71 = stg6_FIFO_buf112.extract<1136, 1151>();
  hw_uint<16> stg6_FIFO_buf112_lane_72 = stg6_FIFO_buf112.extract<1152, 1167>();
  hw_uint<16> stg6_FIFO_buf112_lane_73 = stg6_FIFO_buf112.extract<1168, 1183>();
  hw_uint<16> stg6_FIFO_buf112_lane_74 = stg6_FIFO_buf112.extract<1184, 1199>();
  hw_uint<16> stg6_FIFO_buf112_lane_75 = stg6_FIFO_buf112.extract<1200, 1215>();
  hw_uint<16> stg6_FIFO_buf112_lane_76 = stg6_FIFO_buf112.extract<1216, 1231>();
  hw_uint<16> stg6_FIFO_buf112_lane_77 = stg6_FIFO_buf112.extract<1232, 1247>();
  hw_uint<16> stg6_FIFO_buf112_lane_78 = stg6_FIFO_buf112.extract<1248, 1263>();
  hw_uint<16> stg6_FIFO_buf112_lane_79 = stg6_FIFO_buf112.extract<1264, 1279>();
  hw_uint<16> stg6_FIFO_buf112_lane_80 = stg6_FIFO_buf112.extract<1280, 1295>();
  hw_uint<16> stg6_FIFO_buf112_lane_81 = stg6_FIFO_buf112.extract<1296, 1311>();
  hw_uint<16> stg6_FIFO_buf112_lane_82 = stg6_FIFO_buf112.extract<1312, 1327>();
  hw_uint<16> stg6_FIFO_buf112_lane_83 = stg6_FIFO_buf112.extract<1328, 1343>();
  hw_uint<16> stg6_FIFO_buf112_lane_84 = stg6_FIFO_buf112.extract<1344, 1359>();
  hw_uint<16> stg6_FIFO_buf112_lane_85 = stg6_FIFO_buf112.extract<1360, 1375>();
  hw_uint<16> stg6_FIFO_buf112_lane_86 = stg6_FIFO_buf112.extract<1376, 1391>();
  hw_uint<16> stg6_FIFO_buf112_lane_87 = stg6_FIFO_buf112.extract<1392, 1407>();
  hw_uint<16> stg6_FIFO_buf112_lane_88 = stg6_FIFO_buf112.extract<1408, 1423>();
  hw_uint<16> stg6_FIFO_buf112_lane_89 = stg6_FIFO_buf112.extract<1424, 1439>();
  hw_uint<16> stg6_FIFO_buf112_lane_90 = stg6_FIFO_buf112.extract<1440, 1455>();
  hw_uint<16> stg6_FIFO_buf112_lane_91 = stg6_FIFO_buf112.extract<1456, 1471>();
  hw_uint<16> stg6_FIFO_buf112_lane_92 = stg6_FIFO_buf112.extract<1472, 1487>();
  hw_uint<16> stg6_FIFO_buf112_lane_93 = stg6_FIFO_buf112.extract<1488, 1503>();
  hw_uint<16> stg6_FIFO_buf112_lane_94 = stg6_FIFO_buf112.extract<1504, 1519>();
  hw_uint<16> stg6_FIFO_buf112_lane_95 = stg6_FIFO_buf112.extract<1520, 1535>();
  hw_uint<16> stg6_FIFO_buf112_lane_96 = stg6_FIFO_buf112.extract<1536, 1551>();
  hw_uint<16> stg6_FIFO_buf112_lane_97 = stg6_FIFO_buf112.extract<1552, 1567>();
  hw_uint<16> stg6_FIFO_buf112_lane_98 = stg6_FIFO_buf112.extract<1568, 1583>();
  hw_uint<16> stg6_FIFO_buf112_lane_99 = stg6_FIFO_buf112.extract<1584, 1599>();
  hw_uint<16> stg6_FIFO_buf112_lane_100 = stg6_FIFO_buf112.extract<1600, 1615>();
  hw_uint<16> stg6_FIFO_buf112_lane_101 = stg6_FIFO_buf112.extract<1616, 1631>();
  hw_uint<16> stg6_FIFO_buf112_lane_102 = stg6_FIFO_buf112.extract<1632, 1647>();
  hw_uint<16> stg6_FIFO_buf112_lane_103 = stg6_FIFO_buf112.extract<1648, 1663>();
  hw_uint<16> stg6_FIFO_buf112_lane_104 = stg6_FIFO_buf112.extract<1664, 1679>();
  hw_uint<16> stg6_FIFO_buf112_lane_105 = stg6_FIFO_buf112.extract<1680, 1695>();
  hw_uint<16> stg6_FIFO_buf112_lane_106 = stg6_FIFO_buf112.extract<1696, 1711>();
  hw_uint<16> stg6_FIFO_buf112_lane_107 = stg6_FIFO_buf112.extract<1712, 1727>();
  hw_uint<16> stg6_FIFO_buf112_lane_108 = stg6_FIFO_buf112.extract<1728, 1743>();
  hw_uint<16> stg6_FIFO_buf112_lane_109 = stg6_FIFO_buf112.extract<1744, 1759>();
  hw_uint<16> stg6_FIFO_buf112_lane_110 = stg6_FIFO_buf112.extract<1760, 1775>();
  hw_uint<16> stg6_FIFO_buf112_lane_111 = stg6_FIFO_buf112.extract<1776, 1791>();
  hw_uint<16> stg6_FIFO_buf112_lane_112 = stg6_FIFO_buf112.extract<1792, 1807>();
  hw_uint<16> stg6_FIFO_buf112_lane_113 = stg6_FIFO_buf112.extract<1808, 1823>();
  hw_uint<16> stg6_FIFO_buf112_lane_114 = stg6_FIFO_buf112.extract<1824, 1839>();
  hw_uint<16> stg6_FIFO_buf112_lane_115 = stg6_FIFO_buf112.extract<1840, 1855>();
  hw_uint<16> stg6_FIFO_buf112_lane_116 = stg6_FIFO_buf112.extract<1856, 1871>();
  hw_uint<16> stg6_FIFO_buf112_lane_117 = stg6_FIFO_buf112.extract<1872, 1887>();
  hw_uint<16> stg6_FIFO_buf112_lane_118 = stg6_FIFO_buf112.extract<1888, 1903>();
  hw_uint<16> stg6_FIFO_buf112_lane_119 = stg6_FIFO_buf112.extract<1904, 1919>();
  hw_uint<16> stg6_FIFO_buf112_lane_120 = stg6_FIFO_buf112.extract<1920, 1935>();
  hw_uint<16> stg6_FIFO_buf112_lane_121 = stg6_FIFO_buf112.extract<1936, 1951>();
  hw_uint<16> stg6_FIFO_buf112_lane_122 = stg6_FIFO_buf112.extract<1952, 1967>();
  hw_uint<16> stg6_FIFO_buf112_lane_123 = stg6_FIFO_buf112.extract<1968, 1983>();
  hw_uint<16> stg6_FIFO_buf112_lane_124 = stg6_FIFO_buf112.extract<1984, 1999>();
  hw_uint<16> stg6_FIFO_buf112_lane_125 = stg6_FIFO_buf112.extract<2000, 2015>();
  hw_uint<16> stg6_FIFO_buf112_lane_126 = stg6_FIFO_buf112.extract<2016, 2031>();
  hw_uint<16> stg6_FIFO_buf112_lane_127 = stg6_FIFO_buf112.extract<2032, 2047>();

	
  hw_uint<64 > stg6_FIFO_buf112_lane_3_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_0);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_1);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_2);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_3_pack, stg6_FIFO_buf112_lane_3);
  auto res_stg7_update_0_sm145_311327 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_3_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_7_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_4);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_5);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_6);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_7_pack, stg6_FIFO_buf112_lane_7);
  auto res_stg7_update_0_sm145_301325 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_7_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_11_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_8);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_9);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_10);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_11_pack, stg6_FIFO_buf112_lane_11);
  auto res_stg7_update_0_sm145_291323 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_11_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_15_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_12);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_13);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_14);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_15_pack, stg6_FIFO_buf112_lane_15);
  auto res_stg7_update_0_sm145_281321 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_15_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_19_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_16);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_17);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_18);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_19_pack, stg6_FIFO_buf112_lane_19);
  auto res_stg7_update_0_sm145_271319 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_19_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_23_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_20);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_21);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_22);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_23_pack, stg6_FIFO_buf112_lane_23);
  auto res_stg7_update_0_sm145_261317 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_23_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_27_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_24);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_25);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_26);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_27_pack, stg6_FIFO_buf112_lane_27);
  auto res_stg7_update_0_sm145_251315 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_27_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_31_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_28);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_29);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_30);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_31_pack, stg6_FIFO_buf112_lane_31);
  auto res_stg7_update_0_sm145_241313 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_31_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_35_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_32);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_33);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_34);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_35_pack, stg6_FIFO_buf112_lane_35);
  auto res_stg7_update_0_sm145_231311 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_35_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_39_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_36);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_37);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_38);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_39_pack, stg6_FIFO_buf112_lane_39);
  auto res_stg7_update_0_sm145_221309 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_39_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_43_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_40);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_41);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_42);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_43_pack, stg6_FIFO_buf112_lane_43);
  auto res_stg7_update_0_sm145_211307 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_43_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_47_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_44);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_45);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_46);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_47_pack, stg6_FIFO_buf112_lane_47);
  auto res_stg7_update_0_sm145_201305 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_47_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_51_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_48);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_49);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_50);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_51_pack, stg6_FIFO_buf112_lane_51);
  auto res_stg7_update_0_sm145_191303 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_51_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_55_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_52);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_53);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_54);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_55_pack, stg6_FIFO_buf112_lane_55);
  auto res_stg7_update_0_sm145_181301 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_55_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_59_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_56);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_57);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_58);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_59_pack, stg6_FIFO_buf112_lane_59);
  auto res_stg7_update_0_sm145_171299 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_59_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_63_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_60);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_61);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_62);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_63_pack, stg6_FIFO_buf112_lane_63);
  auto res_stg7_update_0_sm145_161297 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_63_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_67_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_67_pack, stg6_FIFO_buf112_lane_64);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_67_pack, stg6_FIFO_buf112_lane_65);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_67_pack, stg6_FIFO_buf112_lane_66);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_67_pack, stg6_FIFO_buf112_lane_67);
  auto res_stg7_update_0_sm145_151295 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_67_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_71_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_71_pack, stg6_FIFO_buf112_lane_68);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_71_pack, stg6_FIFO_buf112_lane_69);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_71_pack, stg6_FIFO_buf112_lane_70);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_71_pack, stg6_FIFO_buf112_lane_71);
  auto res_stg7_update_0_sm145_141293 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_71_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_75_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_75_pack, stg6_FIFO_buf112_lane_72);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_75_pack, stg6_FIFO_buf112_lane_73);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_75_pack, stg6_FIFO_buf112_lane_74);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_75_pack, stg6_FIFO_buf112_lane_75);
  auto res_stg7_update_0_sm145_131291 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_75_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_79_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_79_pack, stg6_FIFO_buf112_lane_76);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_79_pack, stg6_FIFO_buf112_lane_77);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_79_pack, stg6_FIFO_buf112_lane_78);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_79_pack, stg6_FIFO_buf112_lane_79);
  auto res_stg7_update_0_sm145_121289 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_79_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_83_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_83_pack, stg6_FIFO_buf112_lane_80);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_83_pack, stg6_FIFO_buf112_lane_81);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_83_pack, stg6_FIFO_buf112_lane_82);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_83_pack, stg6_FIFO_buf112_lane_83);
  auto res_stg7_update_0_sm145_111287 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_83_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_87_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_87_pack, stg6_FIFO_buf112_lane_84);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_87_pack, stg6_FIFO_buf112_lane_85);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_87_pack, stg6_FIFO_buf112_lane_86);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_87_pack, stg6_FIFO_buf112_lane_87);
  auto res_stg7_update_0_sm145_101285 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_87_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_91_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_91_pack, stg6_FIFO_buf112_lane_88);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_91_pack, stg6_FIFO_buf112_lane_89);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_91_pack, stg6_FIFO_buf112_lane_90);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_91_pack, stg6_FIFO_buf112_lane_91);
  auto res_stg7_update_0_sm145_91283 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_91_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_95_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_95_pack, stg6_FIFO_buf112_lane_92);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_95_pack, stg6_FIFO_buf112_lane_93);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_95_pack, stg6_FIFO_buf112_lane_94);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_95_pack, stg6_FIFO_buf112_lane_95);
  auto res_stg7_update_0_sm145_81281 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_95_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_99_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_99_pack, stg6_FIFO_buf112_lane_96);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_99_pack, stg6_FIFO_buf112_lane_97);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_99_pack, stg6_FIFO_buf112_lane_98);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_99_pack, stg6_FIFO_buf112_lane_99);
  auto res_stg7_update_0_sm145_71279 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_99_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_103_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_103_pack, stg6_FIFO_buf112_lane_100);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_103_pack, stg6_FIFO_buf112_lane_101);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_103_pack, stg6_FIFO_buf112_lane_102);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_103_pack, stg6_FIFO_buf112_lane_103);
  auto res_stg7_update_0_sm145_61277 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_103_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_107_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_107_pack, stg6_FIFO_buf112_lane_104);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_107_pack, stg6_FIFO_buf112_lane_105);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_107_pack, stg6_FIFO_buf112_lane_106);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_107_pack, stg6_FIFO_buf112_lane_107);
  auto res_stg7_update_0_sm145_51275 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_107_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_111_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_111_pack, stg6_FIFO_buf112_lane_108);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_111_pack, stg6_FIFO_buf112_lane_109);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_111_pack, stg6_FIFO_buf112_lane_110);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_111_pack, stg6_FIFO_buf112_lane_111);
  auto res_stg7_update_0_sm145_41273 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_111_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_115_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_115_pack, stg6_FIFO_buf112_lane_112);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_115_pack, stg6_FIFO_buf112_lane_113);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_115_pack, stg6_FIFO_buf112_lane_114);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_115_pack, stg6_FIFO_buf112_lane_115);
  auto res_stg7_update_0_sm145_31271 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_115_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_119_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_119_pack, stg6_FIFO_buf112_lane_116);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_119_pack, stg6_FIFO_buf112_lane_117);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_119_pack, stg6_FIFO_buf112_lane_118);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_119_pack, stg6_FIFO_buf112_lane_119);
  auto res_stg7_update_0_sm145_21269 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_119_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_123_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_123_pack, stg6_FIFO_buf112_lane_120);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_123_pack, stg6_FIFO_buf112_lane_121);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_123_pack, stg6_FIFO_buf112_lane_122);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_123_pack, stg6_FIFO_buf112_lane_123);
  auto res_stg7_update_0_sm145_11267 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_123_pack);

  hw_uint<64 > stg6_FIFO_buf112_lane_127_pack;
  set_at<0, 64, 16>(stg6_FIFO_buf112_lane_127_pack, stg6_FIFO_buf112_lane_124);
  set_at<16, 64, 16>(stg6_FIFO_buf112_lane_127_pack, stg6_FIFO_buf112_lane_125);
  set_at<32, 64, 16>(stg6_FIFO_buf112_lane_127_pack, stg6_FIFO_buf112_lane_126);
  set_at<48, 64, 16>(stg6_FIFO_buf112_lane_127_pack, stg6_FIFO_buf112_lane_127);
  auto res_stg7_update_0_sm145_01265 = stg7_generated_compute_unrolled_1(stg6_FIFO_buf112_lane_127_pack);
  hw_uint<512 > return_value3356;
  set_at<0, 512, 16>(return_value3356, res_stg7_update_0_sm145_311327);
  set_at<16, 512, 16>(return_value3356, res_stg7_update_0_sm145_301325);
  set_at<32, 512, 16>(return_value3356, res_stg7_update_0_sm145_291323);
  set_at<48, 512, 16>(return_value3356, res_stg7_update_0_sm145_281321);
  set_at<64, 512, 16>(return_value3356, res_stg7_update_0_sm145_271319);
  set_at<80, 512, 16>(return_value3356, res_stg7_update_0_sm145_261317);
  set_at<96, 512, 16>(return_value3356, res_stg7_update_0_sm145_251315);
  set_at<112, 512, 16>(return_value3356, res_stg7_update_0_sm145_241313);
  set_at<128, 512, 16>(return_value3356, res_stg7_update_0_sm145_231311);
  set_at<144, 512, 16>(return_value3356, res_stg7_update_0_sm145_221309);
  set_at<160, 512, 16>(return_value3356, res_stg7_update_0_sm145_211307);
  set_at<176, 512, 16>(return_value3356, res_stg7_update_0_sm145_201305);
  set_at<192, 512, 16>(return_value3356, res_stg7_update_0_sm145_191303);
  set_at<208, 512, 16>(return_value3356, res_stg7_update_0_sm145_181301);
  set_at<224, 512, 16>(return_value3356, res_stg7_update_0_sm145_171299);
  set_at<240, 512, 16>(return_value3356, res_stg7_update_0_sm145_161297);
  set_at<256, 512, 16>(return_value3356, res_stg7_update_0_sm145_151295);
  set_at<272, 512, 16>(return_value3356, res_stg7_update_0_sm145_141293);
  set_at<288, 512, 16>(return_value3356, res_stg7_update_0_sm145_131291);
  set_at<304, 512, 16>(return_value3356, res_stg7_update_0_sm145_121289);
  set_at<320, 512, 16>(return_value3356, res_stg7_update_0_sm145_111287);
  set_at<336, 512, 16>(return_value3356, res_stg7_update_0_sm145_101285);
  set_at<352, 512, 16>(return_value3356, res_stg7_update_0_sm145_91283);
  set_at<368, 512, 16>(return_value3356, res_stg7_update_0_sm145_81281);
  set_at<384, 512, 16>(return_value3356, res_stg7_update_0_sm145_71279);
  set_at<400, 512, 16>(return_value3356, res_stg7_update_0_sm145_61277);
  set_at<416, 512, 16>(return_value3356, res_stg7_update_0_sm145_51275);
  set_at<432, 512, 16>(return_value3356, res_stg7_update_0_sm145_41273);
  set_at<448, 512, 16>(return_value3356, res_stg7_update_0_sm145_31271);
  set_at<464, 512, 16>(return_value3356, res_stg7_update_0_sm145_21269);
  set_at<480, 512, 16>(return_value3356, res_stg7_update_0_sm145_11267);
  set_at<496, 512, 16>(return_value3356, res_stg7_update_0_sm145_01265);
  return return_value3356;

}

hw_uint<512> stg8_1_cu3358(hw_uint<16*128>& stg7_FIFO_buf116) {
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
  hw_uint<16> stg7_FIFO_buf116_lane_64 = stg7_FIFO_buf116.extract<1024, 1039>();
  hw_uint<16> stg7_FIFO_buf116_lane_65 = stg7_FIFO_buf116.extract<1040, 1055>();
  hw_uint<16> stg7_FIFO_buf116_lane_66 = stg7_FIFO_buf116.extract<1056, 1071>();
  hw_uint<16> stg7_FIFO_buf116_lane_67 = stg7_FIFO_buf116.extract<1072, 1087>();
  hw_uint<16> stg7_FIFO_buf116_lane_68 = stg7_FIFO_buf116.extract<1088, 1103>();
  hw_uint<16> stg7_FIFO_buf116_lane_69 = stg7_FIFO_buf116.extract<1104, 1119>();
  hw_uint<16> stg7_FIFO_buf116_lane_70 = stg7_FIFO_buf116.extract<1120, 1135>();
  hw_uint<16> stg7_FIFO_buf116_lane_71 = stg7_FIFO_buf116.extract<1136, 1151>();
  hw_uint<16> stg7_FIFO_buf116_lane_72 = stg7_FIFO_buf116.extract<1152, 1167>();
  hw_uint<16> stg7_FIFO_buf116_lane_73 = stg7_FIFO_buf116.extract<1168, 1183>();
  hw_uint<16> stg7_FIFO_buf116_lane_74 = stg7_FIFO_buf116.extract<1184, 1199>();
  hw_uint<16> stg7_FIFO_buf116_lane_75 = stg7_FIFO_buf116.extract<1200, 1215>();
  hw_uint<16> stg7_FIFO_buf116_lane_76 = stg7_FIFO_buf116.extract<1216, 1231>();
  hw_uint<16> stg7_FIFO_buf116_lane_77 = stg7_FIFO_buf116.extract<1232, 1247>();
  hw_uint<16> stg7_FIFO_buf116_lane_78 = stg7_FIFO_buf116.extract<1248, 1263>();
  hw_uint<16> stg7_FIFO_buf116_lane_79 = stg7_FIFO_buf116.extract<1264, 1279>();
  hw_uint<16> stg7_FIFO_buf116_lane_80 = stg7_FIFO_buf116.extract<1280, 1295>();
  hw_uint<16> stg7_FIFO_buf116_lane_81 = stg7_FIFO_buf116.extract<1296, 1311>();
  hw_uint<16> stg7_FIFO_buf116_lane_82 = stg7_FIFO_buf116.extract<1312, 1327>();
  hw_uint<16> stg7_FIFO_buf116_lane_83 = stg7_FIFO_buf116.extract<1328, 1343>();
  hw_uint<16> stg7_FIFO_buf116_lane_84 = stg7_FIFO_buf116.extract<1344, 1359>();
  hw_uint<16> stg7_FIFO_buf116_lane_85 = stg7_FIFO_buf116.extract<1360, 1375>();
  hw_uint<16> stg7_FIFO_buf116_lane_86 = stg7_FIFO_buf116.extract<1376, 1391>();
  hw_uint<16> stg7_FIFO_buf116_lane_87 = stg7_FIFO_buf116.extract<1392, 1407>();
  hw_uint<16> stg7_FIFO_buf116_lane_88 = stg7_FIFO_buf116.extract<1408, 1423>();
  hw_uint<16> stg7_FIFO_buf116_lane_89 = stg7_FIFO_buf116.extract<1424, 1439>();
  hw_uint<16> stg7_FIFO_buf116_lane_90 = stg7_FIFO_buf116.extract<1440, 1455>();
  hw_uint<16> stg7_FIFO_buf116_lane_91 = stg7_FIFO_buf116.extract<1456, 1471>();
  hw_uint<16> stg7_FIFO_buf116_lane_92 = stg7_FIFO_buf116.extract<1472, 1487>();
  hw_uint<16> stg7_FIFO_buf116_lane_93 = stg7_FIFO_buf116.extract<1488, 1503>();
  hw_uint<16> stg7_FIFO_buf116_lane_94 = stg7_FIFO_buf116.extract<1504, 1519>();
  hw_uint<16> stg7_FIFO_buf116_lane_95 = stg7_FIFO_buf116.extract<1520, 1535>();
  hw_uint<16> stg7_FIFO_buf116_lane_96 = stg7_FIFO_buf116.extract<1536, 1551>();
  hw_uint<16> stg7_FIFO_buf116_lane_97 = stg7_FIFO_buf116.extract<1552, 1567>();
  hw_uint<16> stg7_FIFO_buf116_lane_98 = stg7_FIFO_buf116.extract<1568, 1583>();
  hw_uint<16> stg7_FIFO_buf116_lane_99 = stg7_FIFO_buf116.extract<1584, 1599>();
  hw_uint<16> stg7_FIFO_buf116_lane_100 = stg7_FIFO_buf116.extract<1600, 1615>();
  hw_uint<16> stg7_FIFO_buf116_lane_101 = stg7_FIFO_buf116.extract<1616, 1631>();
  hw_uint<16> stg7_FIFO_buf116_lane_102 = stg7_FIFO_buf116.extract<1632, 1647>();
  hw_uint<16> stg7_FIFO_buf116_lane_103 = stg7_FIFO_buf116.extract<1648, 1663>();
  hw_uint<16> stg7_FIFO_buf116_lane_104 = stg7_FIFO_buf116.extract<1664, 1679>();
  hw_uint<16> stg7_FIFO_buf116_lane_105 = stg7_FIFO_buf116.extract<1680, 1695>();
  hw_uint<16> stg7_FIFO_buf116_lane_106 = stg7_FIFO_buf116.extract<1696, 1711>();
  hw_uint<16> stg7_FIFO_buf116_lane_107 = stg7_FIFO_buf116.extract<1712, 1727>();
  hw_uint<16> stg7_FIFO_buf116_lane_108 = stg7_FIFO_buf116.extract<1728, 1743>();
  hw_uint<16> stg7_FIFO_buf116_lane_109 = stg7_FIFO_buf116.extract<1744, 1759>();
  hw_uint<16> stg7_FIFO_buf116_lane_110 = stg7_FIFO_buf116.extract<1760, 1775>();
  hw_uint<16> stg7_FIFO_buf116_lane_111 = stg7_FIFO_buf116.extract<1776, 1791>();
  hw_uint<16> stg7_FIFO_buf116_lane_112 = stg7_FIFO_buf116.extract<1792, 1807>();
  hw_uint<16> stg7_FIFO_buf116_lane_113 = stg7_FIFO_buf116.extract<1808, 1823>();
  hw_uint<16> stg7_FIFO_buf116_lane_114 = stg7_FIFO_buf116.extract<1824, 1839>();
  hw_uint<16> stg7_FIFO_buf116_lane_115 = stg7_FIFO_buf116.extract<1840, 1855>();
  hw_uint<16> stg7_FIFO_buf116_lane_116 = stg7_FIFO_buf116.extract<1856, 1871>();
  hw_uint<16> stg7_FIFO_buf116_lane_117 = stg7_FIFO_buf116.extract<1872, 1887>();
  hw_uint<16> stg7_FIFO_buf116_lane_118 = stg7_FIFO_buf116.extract<1888, 1903>();
  hw_uint<16> stg7_FIFO_buf116_lane_119 = stg7_FIFO_buf116.extract<1904, 1919>();
  hw_uint<16> stg7_FIFO_buf116_lane_120 = stg7_FIFO_buf116.extract<1920, 1935>();
  hw_uint<16> stg7_FIFO_buf116_lane_121 = stg7_FIFO_buf116.extract<1936, 1951>();
  hw_uint<16> stg7_FIFO_buf116_lane_122 = stg7_FIFO_buf116.extract<1952, 1967>();
  hw_uint<16> stg7_FIFO_buf116_lane_123 = stg7_FIFO_buf116.extract<1968, 1983>();
  hw_uint<16> stg7_FIFO_buf116_lane_124 = stg7_FIFO_buf116.extract<1984, 1999>();
  hw_uint<16> stg7_FIFO_buf116_lane_125 = stg7_FIFO_buf116.extract<2000, 2015>();
  hw_uint<16> stg7_FIFO_buf116_lane_126 = stg7_FIFO_buf116.extract<2016, 2031>();
  hw_uint<16> stg7_FIFO_buf116_lane_127 = stg7_FIFO_buf116.extract<2032, 2047>();

	
  hw_uint<64 > stg7_FIFO_buf116_lane_3_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_0);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_1);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_2);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_3_pack, stg7_FIFO_buf116_lane_3);
  auto res_stg8_update_0_sm146_311391 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_3_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_7_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_4);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_5);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_6);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_7_pack, stg7_FIFO_buf116_lane_7);
  auto res_stg8_update_0_sm146_301389 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_7_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_11_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_8);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_9);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_10);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_11_pack, stg7_FIFO_buf116_lane_11);
  auto res_stg8_update_0_sm146_291387 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_11_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_15_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_12);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_13);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_14);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_15_pack, stg7_FIFO_buf116_lane_15);
  auto res_stg8_update_0_sm146_281385 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_15_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_19_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_16);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_17);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_18);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_19_pack, stg7_FIFO_buf116_lane_19);
  auto res_stg8_update_0_sm146_271383 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_19_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_23_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_20);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_21);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_22);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_23_pack, stg7_FIFO_buf116_lane_23);
  auto res_stg8_update_0_sm146_261381 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_23_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_27_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_24);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_25);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_26);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_27_pack, stg7_FIFO_buf116_lane_27);
  auto res_stg8_update_0_sm146_251379 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_27_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_31_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_28);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_29);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_30);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_31_pack, stg7_FIFO_buf116_lane_31);
  auto res_stg8_update_0_sm146_241377 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_31_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_35_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_32);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_33);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_34);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_35_pack, stg7_FIFO_buf116_lane_35);
  auto res_stg8_update_0_sm146_231375 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_35_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_39_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_36);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_37);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_38);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_39_pack, stg7_FIFO_buf116_lane_39);
  auto res_stg8_update_0_sm146_221373 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_39_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_43_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_40);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_41);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_42);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_43_pack, stg7_FIFO_buf116_lane_43);
  auto res_stg8_update_0_sm146_211371 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_43_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_47_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_44);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_45);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_46);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_47_pack, stg7_FIFO_buf116_lane_47);
  auto res_stg8_update_0_sm146_201369 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_47_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_51_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_48);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_49);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_50);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_51_pack, stg7_FIFO_buf116_lane_51);
  auto res_stg8_update_0_sm146_191367 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_51_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_55_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_52);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_53);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_54);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_55_pack, stg7_FIFO_buf116_lane_55);
  auto res_stg8_update_0_sm146_181365 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_55_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_59_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_56);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_57);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_58);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_59_pack, stg7_FIFO_buf116_lane_59);
  auto res_stg8_update_0_sm146_171363 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_59_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_63_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_60);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_61);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_62);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_63_pack, stg7_FIFO_buf116_lane_63);
  auto res_stg8_update_0_sm146_161361 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_63_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_67_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_67_pack, stg7_FIFO_buf116_lane_64);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_67_pack, stg7_FIFO_buf116_lane_65);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_67_pack, stg7_FIFO_buf116_lane_66);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_67_pack, stg7_FIFO_buf116_lane_67);
  auto res_stg8_update_0_sm146_151359 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_67_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_71_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_71_pack, stg7_FIFO_buf116_lane_68);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_71_pack, stg7_FIFO_buf116_lane_69);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_71_pack, stg7_FIFO_buf116_lane_70);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_71_pack, stg7_FIFO_buf116_lane_71);
  auto res_stg8_update_0_sm146_141357 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_71_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_75_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_75_pack, stg7_FIFO_buf116_lane_72);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_75_pack, stg7_FIFO_buf116_lane_73);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_75_pack, stg7_FIFO_buf116_lane_74);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_75_pack, stg7_FIFO_buf116_lane_75);
  auto res_stg8_update_0_sm146_131355 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_75_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_79_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_79_pack, stg7_FIFO_buf116_lane_76);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_79_pack, stg7_FIFO_buf116_lane_77);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_79_pack, stg7_FIFO_buf116_lane_78);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_79_pack, stg7_FIFO_buf116_lane_79);
  auto res_stg8_update_0_sm146_121353 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_79_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_83_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_83_pack, stg7_FIFO_buf116_lane_80);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_83_pack, stg7_FIFO_buf116_lane_81);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_83_pack, stg7_FIFO_buf116_lane_82);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_83_pack, stg7_FIFO_buf116_lane_83);
  auto res_stg8_update_0_sm146_111351 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_83_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_87_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_87_pack, stg7_FIFO_buf116_lane_84);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_87_pack, stg7_FIFO_buf116_lane_85);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_87_pack, stg7_FIFO_buf116_lane_86);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_87_pack, stg7_FIFO_buf116_lane_87);
  auto res_stg8_update_0_sm146_101349 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_87_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_91_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_91_pack, stg7_FIFO_buf116_lane_88);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_91_pack, stg7_FIFO_buf116_lane_89);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_91_pack, stg7_FIFO_buf116_lane_90);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_91_pack, stg7_FIFO_buf116_lane_91);
  auto res_stg8_update_0_sm146_91347 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_91_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_95_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_95_pack, stg7_FIFO_buf116_lane_92);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_95_pack, stg7_FIFO_buf116_lane_93);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_95_pack, stg7_FIFO_buf116_lane_94);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_95_pack, stg7_FIFO_buf116_lane_95);
  auto res_stg8_update_0_sm146_81345 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_95_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_99_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_99_pack, stg7_FIFO_buf116_lane_96);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_99_pack, stg7_FIFO_buf116_lane_97);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_99_pack, stg7_FIFO_buf116_lane_98);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_99_pack, stg7_FIFO_buf116_lane_99);
  auto res_stg8_update_0_sm146_71343 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_99_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_103_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_103_pack, stg7_FIFO_buf116_lane_100);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_103_pack, stg7_FIFO_buf116_lane_101);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_103_pack, stg7_FIFO_buf116_lane_102);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_103_pack, stg7_FIFO_buf116_lane_103);
  auto res_stg8_update_0_sm146_61341 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_103_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_107_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_107_pack, stg7_FIFO_buf116_lane_104);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_107_pack, stg7_FIFO_buf116_lane_105);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_107_pack, stg7_FIFO_buf116_lane_106);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_107_pack, stg7_FIFO_buf116_lane_107);
  auto res_stg8_update_0_sm146_51339 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_107_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_111_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_111_pack, stg7_FIFO_buf116_lane_108);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_111_pack, stg7_FIFO_buf116_lane_109);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_111_pack, stg7_FIFO_buf116_lane_110);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_111_pack, stg7_FIFO_buf116_lane_111);
  auto res_stg8_update_0_sm146_41337 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_111_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_115_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_115_pack, stg7_FIFO_buf116_lane_112);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_115_pack, stg7_FIFO_buf116_lane_113);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_115_pack, stg7_FIFO_buf116_lane_114);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_115_pack, stg7_FIFO_buf116_lane_115);
  auto res_stg8_update_0_sm146_31335 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_115_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_119_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_119_pack, stg7_FIFO_buf116_lane_116);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_119_pack, stg7_FIFO_buf116_lane_117);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_119_pack, stg7_FIFO_buf116_lane_118);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_119_pack, stg7_FIFO_buf116_lane_119);
  auto res_stg8_update_0_sm146_21333 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_119_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_123_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_123_pack, stg7_FIFO_buf116_lane_120);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_123_pack, stg7_FIFO_buf116_lane_121);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_123_pack, stg7_FIFO_buf116_lane_122);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_123_pack, stg7_FIFO_buf116_lane_123);
  auto res_stg8_update_0_sm146_11331 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_123_pack);

  hw_uint<64 > stg7_FIFO_buf116_lane_127_pack;
  set_at<0, 64, 16>(stg7_FIFO_buf116_lane_127_pack, stg7_FIFO_buf116_lane_124);
  set_at<16, 64, 16>(stg7_FIFO_buf116_lane_127_pack, stg7_FIFO_buf116_lane_125);
  set_at<32, 64, 16>(stg7_FIFO_buf116_lane_127_pack, stg7_FIFO_buf116_lane_126);
  set_at<48, 64, 16>(stg7_FIFO_buf116_lane_127_pack, stg7_FIFO_buf116_lane_127);
  auto res_stg8_update_0_sm146_01329 = stg8_generated_compute_unrolled_1(stg7_FIFO_buf116_lane_127_pack);
  hw_uint<512 > return_value3359;
  set_at<0, 512, 16>(return_value3359, res_stg8_update_0_sm146_311391);
  set_at<16, 512, 16>(return_value3359, res_stg8_update_0_sm146_301389);
  set_at<32, 512, 16>(return_value3359, res_stg8_update_0_sm146_291387);
  set_at<48, 512, 16>(return_value3359, res_stg8_update_0_sm146_281385);
  set_at<64, 512, 16>(return_value3359, res_stg8_update_0_sm146_271383);
  set_at<80, 512, 16>(return_value3359, res_stg8_update_0_sm146_261381);
  set_at<96, 512, 16>(return_value3359, res_stg8_update_0_sm146_251379);
  set_at<112, 512, 16>(return_value3359, res_stg8_update_0_sm146_241377);
  set_at<128, 512, 16>(return_value3359, res_stg8_update_0_sm146_231375);
  set_at<144, 512, 16>(return_value3359, res_stg8_update_0_sm146_221373);
  set_at<160, 512, 16>(return_value3359, res_stg8_update_0_sm146_211371);
  set_at<176, 512, 16>(return_value3359, res_stg8_update_0_sm146_201369);
  set_at<192, 512, 16>(return_value3359, res_stg8_update_0_sm146_191367);
  set_at<208, 512, 16>(return_value3359, res_stg8_update_0_sm146_181365);
  set_at<224, 512, 16>(return_value3359, res_stg8_update_0_sm146_171363);
  set_at<240, 512, 16>(return_value3359, res_stg8_update_0_sm146_161361);
  set_at<256, 512, 16>(return_value3359, res_stg8_update_0_sm146_151359);
  set_at<272, 512, 16>(return_value3359, res_stg8_update_0_sm146_141357);
  set_at<288, 512, 16>(return_value3359, res_stg8_update_0_sm146_131355);
  set_at<304, 512, 16>(return_value3359, res_stg8_update_0_sm146_121353);
  set_at<320, 512, 16>(return_value3359, res_stg8_update_0_sm146_111351);
  set_at<336, 512, 16>(return_value3359, res_stg8_update_0_sm146_101349);
  set_at<352, 512, 16>(return_value3359, res_stg8_update_0_sm146_91347);
  set_at<368, 512, 16>(return_value3359, res_stg8_update_0_sm146_81345);
  set_at<384, 512, 16>(return_value3359, res_stg8_update_0_sm146_71343);
  set_at<400, 512, 16>(return_value3359, res_stg8_update_0_sm146_61341);
  set_at<416, 512, 16>(return_value3359, res_stg8_update_0_sm146_51339);
  set_at<432, 512, 16>(return_value3359, res_stg8_update_0_sm146_41337);
  set_at<448, 512, 16>(return_value3359, res_stg8_update_0_sm146_31335);
  set_at<464, 512, 16>(return_value3359, res_stg8_update_0_sm146_21333);
  set_at<480, 512, 16>(return_value3359, res_stg8_update_0_sm146_11331);
  set_at<496, 512, 16>(return_value3359, res_stg8_update_0_sm146_01329);
  return return_value3359;

}

hw_uint<512> stg9_1_cu3361(hw_uint<16*128>& stg8_FIFO_buf120) {
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
  hw_uint<16> stg8_FIFO_buf120_lane_64 = stg8_FIFO_buf120.extract<1024, 1039>();
  hw_uint<16> stg8_FIFO_buf120_lane_65 = stg8_FIFO_buf120.extract<1040, 1055>();
  hw_uint<16> stg8_FIFO_buf120_lane_66 = stg8_FIFO_buf120.extract<1056, 1071>();
  hw_uint<16> stg8_FIFO_buf120_lane_67 = stg8_FIFO_buf120.extract<1072, 1087>();
  hw_uint<16> stg8_FIFO_buf120_lane_68 = stg8_FIFO_buf120.extract<1088, 1103>();
  hw_uint<16> stg8_FIFO_buf120_lane_69 = stg8_FIFO_buf120.extract<1104, 1119>();
  hw_uint<16> stg8_FIFO_buf120_lane_70 = stg8_FIFO_buf120.extract<1120, 1135>();
  hw_uint<16> stg8_FIFO_buf120_lane_71 = stg8_FIFO_buf120.extract<1136, 1151>();
  hw_uint<16> stg8_FIFO_buf120_lane_72 = stg8_FIFO_buf120.extract<1152, 1167>();
  hw_uint<16> stg8_FIFO_buf120_lane_73 = stg8_FIFO_buf120.extract<1168, 1183>();
  hw_uint<16> stg8_FIFO_buf120_lane_74 = stg8_FIFO_buf120.extract<1184, 1199>();
  hw_uint<16> stg8_FIFO_buf120_lane_75 = stg8_FIFO_buf120.extract<1200, 1215>();
  hw_uint<16> stg8_FIFO_buf120_lane_76 = stg8_FIFO_buf120.extract<1216, 1231>();
  hw_uint<16> stg8_FIFO_buf120_lane_77 = stg8_FIFO_buf120.extract<1232, 1247>();
  hw_uint<16> stg8_FIFO_buf120_lane_78 = stg8_FIFO_buf120.extract<1248, 1263>();
  hw_uint<16> stg8_FIFO_buf120_lane_79 = stg8_FIFO_buf120.extract<1264, 1279>();
  hw_uint<16> stg8_FIFO_buf120_lane_80 = stg8_FIFO_buf120.extract<1280, 1295>();
  hw_uint<16> stg8_FIFO_buf120_lane_81 = stg8_FIFO_buf120.extract<1296, 1311>();
  hw_uint<16> stg8_FIFO_buf120_lane_82 = stg8_FIFO_buf120.extract<1312, 1327>();
  hw_uint<16> stg8_FIFO_buf120_lane_83 = stg8_FIFO_buf120.extract<1328, 1343>();
  hw_uint<16> stg8_FIFO_buf120_lane_84 = stg8_FIFO_buf120.extract<1344, 1359>();
  hw_uint<16> stg8_FIFO_buf120_lane_85 = stg8_FIFO_buf120.extract<1360, 1375>();
  hw_uint<16> stg8_FIFO_buf120_lane_86 = stg8_FIFO_buf120.extract<1376, 1391>();
  hw_uint<16> stg8_FIFO_buf120_lane_87 = stg8_FIFO_buf120.extract<1392, 1407>();
  hw_uint<16> stg8_FIFO_buf120_lane_88 = stg8_FIFO_buf120.extract<1408, 1423>();
  hw_uint<16> stg8_FIFO_buf120_lane_89 = stg8_FIFO_buf120.extract<1424, 1439>();
  hw_uint<16> stg8_FIFO_buf120_lane_90 = stg8_FIFO_buf120.extract<1440, 1455>();
  hw_uint<16> stg8_FIFO_buf120_lane_91 = stg8_FIFO_buf120.extract<1456, 1471>();
  hw_uint<16> stg8_FIFO_buf120_lane_92 = stg8_FIFO_buf120.extract<1472, 1487>();
  hw_uint<16> stg8_FIFO_buf120_lane_93 = stg8_FIFO_buf120.extract<1488, 1503>();
  hw_uint<16> stg8_FIFO_buf120_lane_94 = stg8_FIFO_buf120.extract<1504, 1519>();
  hw_uint<16> stg8_FIFO_buf120_lane_95 = stg8_FIFO_buf120.extract<1520, 1535>();
  hw_uint<16> stg8_FIFO_buf120_lane_96 = stg8_FIFO_buf120.extract<1536, 1551>();
  hw_uint<16> stg8_FIFO_buf120_lane_97 = stg8_FIFO_buf120.extract<1552, 1567>();
  hw_uint<16> stg8_FIFO_buf120_lane_98 = stg8_FIFO_buf120.extract<1568, 1583>();
  hw_uint<16> stg8_FIFO_buf120_lane_99 = stg8_FIFO_buf120.extract<1584, 1599>();
  hw_uint<16> stg8_FIFO_buf120_lane_100 = stg8_FIFO_buf120.extract<1600, 1615>();
  hw_uint<16> stg8_FIFO_buf120_lane_101 = stg8_FIFO_buf120.extract<1616, 1631>();
  hw_uint<16> stg8_FIFO_buf120_lane_102 = stg8_FIFO_buf120.extract<1632, 1647>();
  hw_uint<16> stg8_FIFO_buf120_lane_103 = stg8_FIFO_buf120.extract<1648, 1663>();
  hw_uint<16> stg8_FIFO_buf120_lane_104 = stg8_FIFO_buf120.extract<1664, 1679>();
  hw_uint<16> stg8_FIFO_buf120_lane_105 = stg8_FIFO_buf120.extract<1680, 1695>();
  hw_uint<16> stg8_FIFO_buf120_lane_106 = stg8_FIFO_buf120.extract<1696, 1711>();
  hw_uint<16> stg8_FIFO_buf120_lane_107 = stg8_FIFO_buf120.extract<1712, 1727>();
  hw_uint<16> stg8_FIFO_buf120_lane_108 = stg8_FIFO_buf120.extract<1728, 1743>();
  hw_uint<16> stg8_FIFO_buf120_lane_109 = stg8_FIFO_buf120.extract<1744, 1759>();
  hw_uint<16> stg8_FIFO_buf120_lane_110 = stg8_FIFO_buf120.extract<1760, 1775>();
  hw_uint<16> stg8_FIFO_buf120_lane_111 = stg8_FIFO_buf120.extract<1776, 1791>();
  hw_uint<16> stg8_FIFO_buf120_lane_112 = stg8_FIFO_buf120.extract<1792, 1807>();
  hw_uint<16> stg8_FIFO_buf120_lane_113 = stg8_FIFO_buf120.extract<1808, 1823>();
  hw_uint<16> stg8_FIFO_buf120_lane_114 = stg8_FIFO_buf120.extract<1824, 1839>();
  hw_uint<16> stg8_FIFO_buf120_lane_115 = stg8_FIFO_buf120.extract<1840, 1855>();
  hw_uint<16> stg8_FIFO_buf120_lane_116 = stg8_FIFO_buf120.extract<1856, 1871>();
  hw_uint<16> stg8_FIFO_buf120_lane_117 = stg8_FIFO_buf120.extract<1872, 1887>();
  hw_uint<16> stg8_FIFO_buf120_lane_118 = stg8_FIFO_buf120.extract<1888, 1903>();
  hw_uint<16> stg8_FIFO_buf120_lane_119 = stg8_FIFO_buf120.extract<1904, 1919>();
  hw_uint<16> stg8_FIFO_buf120_lane_120 = stg8_FIFO_buf120.extract<1920, 1935>();
  hw_uint<16> stg8_FIFO_buf120_lane_121 = stg8_FIFO_buf120.extract<1936, 1951>();
  hw_uint<16> stg8_FIFO_buf120_lane_122 = stg8_FIFO_buf120.extract<1952, 1967>();
  hw_uint<16> stg8_FIFO_buf120_lane_123 = stg8_FIFO_buf120.extract<1968, 1983>();
  hw_uint<16> stg8_FIFO_buf120_lane_124 = stg8_FIFO_buf120.extract<1984, 1999>();
  hw_uint<16> stg8_FIFO_buf120_lane_125 = stg8_FIFO_buf120.extract<2000, 2015>();
  hw_uint<16> stg8_FIFO_buf120_lane_126 = stg8_FIFO_buf120.extract<2016, 2031>();
  hw_uint<16> stg8_FIFO_buf120_lane_127 = stg8_FIFO_buf120.extract<2032, 2047>();

	
  hw_uint<64 > stg8_FIFO_buf120_lane_3_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_0);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_1);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_2);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_3_pack, stg8_FIFO_buf120_lane_3);
  auto res_stg9_update_0_sm147_311455 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_3_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_7_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_4);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_5);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_6);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_7_pack, stg8_FIFO_buf120_lane_7);
  auto res_stg9_update_0_sm147_301453 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_7_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_11_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_8);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_9);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_10);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_11_pack, stg8_FIFO_buf120_lane_11);
  auto res_stg9_update_0_sm147_291451 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_11_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_15_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_12);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_13);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_14);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_15_pack, stg8_FIFO_buf120_lane_15);
  auto res_stg9_update_0_sm147_281449 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_15_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_19_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_16);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_17);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_18);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_19_pack, stg8_FIFO_buf120_lane_19);
  auto res_stg9_update_0_sm147_271447 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_19_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_23_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_20);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_21);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_22);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_23_pack, stg8_FIFO_buf120_lane_23);
  auto res_stg9_update_0_sm147_261445 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_23_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_27_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_24);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_25);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_26);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_27_pack, stg8_FIFO_buf120_lane_27);
  auto res_stg9_update_0_sm147_251443 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_27_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_31_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_28);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_29);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_30);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_31_pack, stg8_FIFO_buf120_lane_31);
  auto res_stg9_update_0_sm147_241441 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_31_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_35_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_32);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_33);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_34);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_35_pack, stg8_FIFO_buf120_lane_35);
  auto res_stg9_update_0_sm147_231439 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_35_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_39_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_36);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_37);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_38);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_39_pack, stg8_FIFO_buf120_lane_39);
  auto res_stg9_update_0_sm147_221437 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_39_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_43_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_40);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_41);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_42);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_43_pack, stg8_FIFO_buf120_lane_43);
  auto res_stg9_update_0_sm147_211435 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_43_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_47_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_44);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_45);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_46);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_47_pack, stg8_FIFO_buf120_lane_47);
  auto res_stg9_update_0_sm147_201433 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_47_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_51_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_48);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_49);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_50);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_51_pack, stg8_FIFO_buf120_lane_51);
  auto res_stg9_update_0_sm147_191431 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_51_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_55_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_52);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_53);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_54);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_55_pack, stg8_FIFO_buf120_lane_55);
  auto res_stg9_update_0_sm147_181429 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_55_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_59_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_56);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_57);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_58);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_59_pack, stg8_FIFO_buf120_lane_59);
  auto res_stg9_update_0_sm147_171427 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_59_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_63_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_60);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_61);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_62);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_63_pack, stg8_FIFO_buf120_lane_63);
  auto res_stg9_update_0_sm147_161425 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_63_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_67_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_67_pack, stg8_FIFO_buf120_lane_64);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_67_pack, stg8_FIFO_buf120_lane_65);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_67_pack, stg8_FIFO_buf120_lane_66);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_67_pack, stg8_FIFO_buf120_lane_67);
  auto res_stg9_update_0_sm147_151423 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_67_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_71_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_71_pack, stg8_FIFO_buf120_lane_68);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_71_pack, stg8_FIFO_buf120_lane_69);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_71_pack, stg8_FIFO_buf120_lane_70);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_71_pack, stg8_FIFO_buf120_lane_71);
  auto res_stg9_update_0_sm147_141421 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_71_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_75_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_75_pack, stg8_FIFO_buf120_lane_72);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_75_pack, stg8_FIFO_buf120_lane_73);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_75_pack, stg8_FIFO_buf120_lane_74);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_75_pack, stg8_FIFO_buf120_lane_75);
  auto res_stg9_update_0_sm147_131419 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_75_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_79_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_79_pack, stg8_FIFO_buf120_lane_76);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_79_pack, stg8_FIFO_buf120_lane_77);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_79_pack, stg8_FIFO_buf120_lane_78);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_79_pack, stg8_FIFO_buf120_lane_79);
  auto res_stg9_update_0_sm147_121417 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_79_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_83_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_83_pack, stg8_FIFO_buf120_lane_80);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_83_pack, stg8_FIFO_buf120_lane_81);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_83_pack, stg8_FIFO_buf120_lane_82);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_83_pack, stg8_FIFO_buf120_lane_83);
  auto res_stg9_update_0_sm147_111415 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_83_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_87_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_87_pack, stg8_FIFO_buf120_lane_84);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_87_pack, stg8_FIFO_buf120_lane_85);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_87_pack, stg8_FIFO_buf120_lane_86);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_87_pack, stg8_FIFO_buf120_lane_87);
  auto res_stg9_update_0_sm147_101413 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_87_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_91_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_91_pack, stg8_FIFO_buf120_lane_88);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_91_pack, stg8_FIFO_buf120_lane_89);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_91_pack, stg8_FIFO_buf120_lane_90);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_91_pack, stg8_FIFO_buf120_lane_91);
  auto res_stg9_update_0_sm147_91411 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_91_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_95_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_95_pack, stg8_FIFO_buf120_lane_92);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_95_pack, stg8_FIFO_buf120_lane_93);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_95_pack, stg8_FIFO_buf120_lane_94);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_95_pack, stg8_FIFO_buf120_lane_95);
  auto res_stg9_update_0_sm147_81409 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_95_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_99_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_99_pack, stg8_FIFO_buf120_lane_96);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_99_pack, stg8_FIFO_buf120_lane_97);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_99_pack, stg8_FIFO_buf120_lane_98);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_99_pack, stg8_FIFO_buf120_lane_99);
  auto res_stg9_update_0_sm147_71407 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_99_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_103_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_103_pack, stg8_FIFO_buf120_lane_100);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_103_pack, stg8_FIFO_buf120_lane_101);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_103_pack, stg8_FIFO_buf120_lane_102);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_103_pack, stg8_FIFO_buf120_lane_103);
  auto res_stg9_update_0_sm147_61405 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_103_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_107_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_107_pack, stg8_FIFO_buf120_lane_104);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_107_pack, stg8_FIFO_buf120_lane_105);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_107_pack, stg8_FIFO_buf120_lane_106);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_107_pack, stg8_FIFO_buf120_lane_107);
  auto res_stg9_update_0_sm147_51403 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_107_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_111_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_111_pack, stg8_FIFO_buf120_lane_108);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_111_pack, stg8_FIFO_buf120_lane_109);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_111_pack, stg8_FIFO_buf120_lane_110);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_111_pack, stg8_FIFO_buf120_lane_111);
  auto res_stg9_update_0_sm147_41401 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_111_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_115_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_115_pack, stg8_FIFO_buf120_lane_112);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_115_pack, stg8_FIFO_buf120_lane_113);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_115_pack, stg8_FIFO_buf120_lane_114);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_115_pack, stg8_FIFO_buf120_lane_115);
  auto res_stg9_update_0_sm147_31399 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_115_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_119_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_119_pack, stg8_FIFO_buf120_lane_116);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_119_pack, stg8_FIFO_buf120_lane_117);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_119_pack, stg8_FIFO_buf120_lane_118);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_119_pack, stg8_FIFO_buf120_lane_119);
  auto res_stg9_update_0_sm147_21397 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_119_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_123_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_123_pack, stg8_FIFO_buf120_lane_120);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_123_pack, stg8_FIFO_buf120_lane_121);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_123_pack, stg8_FIFO_buf120_lane_122);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_123_pack, stg8_FIFO_buf120_lane_123);
  auto res_stg9_update_0_sm147_11395 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_123_pack);

  hw_uint<64 > stg8_FIFO_buf120_lane_127_pack;
  set_at<0, 64, 16>(stg8_FIFO_buf120_lane_127_pack, stg8_FIFO_buf120_lane_124);
  set_at<16, 64, 16>(stg8_FIFO_buf120_lane_127_pack, stg8_FIFO_buf120_lane_125);
  set_at<32, 64, 16>(stg8_FIFO_buf120_lane_127_pack, stg8_FIFO_buf120_lane_126);
  set_at<48, 64, 16>(stg8_FIFO_buf120_lane_127_pack, stg8_FIFO_buf120_lane_127);
  auto res_stg9_update_0_sm147_01393 = stg9_generated_compute_unrolled_1(stg8_FIFO_buf120_lane_127_pack);
  hw_uint<512 > return_value3362;
  set_at<0, 512, 16>(return_value3362, res_stg9_update_0_sm147_311455);
  set_at<16, 512, 16>(return_value3362, res_stg9_update_0_sm147_301453);
  set_at<32, 512, 16>(return_value3362, res_stg9_update_0_sm147_291451);
  set_at<48, 512, 16>(return_value3362, res_stg9_update_0_sm147_281449);
  set_at<64, 512, 16>(return_value3362, res_stg9_update_0_sm147_271447);
  set_at<80, 512, 16>(return_value3362, res_stg9_update_0_sm147_261445);
  set_at<96, 512, 16>(return_value3362, res_stg9_update_0_sm147_251443);
  set_at<112, 512, 16>(return_value3362, res_stg9_update_0_sm147_241441);
  set_at<128, 512, 16>(return_value3362, res_stg9_update_0_sm147_231439);
  set_at<144, 512, 16>(return_value3362, res_stg9_update_0_sm147_221437);
  set_at<160, 512, 16>(return_value3362, res_stg9_update_0_sm147_211435);
  set_at<176, 512, 16>(return_value3362, res_stg9_update_0_sm147_201433);
  set_at<192, 512, 16>(return_value3362, res_stg9_update_0_sm147_191431);
  set_at<208, 512, 16>(return_value3362, res_stg9_update_0_sm147_181429);
  set_at<224, 512, 16>(return_value3362, res_stg9_update_0_sm147_171427);
  set_at<240, 512, 16>(return_value3362, res_stg9_update_0_sm147_161425);
  set_at<256, 512, 16>(return_value3362, res_stg9_update_0_sm147_151423);
  set_at<272, 512, 16>(return_value3362, res_stg9_update_0_sm147_141421);
  set_at<288, 512, 16>(return_value3362, res_stg9_update_0_sm147_131419);
  set_at<304, 512, 16>(return_value3362, res_stg9_update_0_sm147_121417);
  set_at<320, 512, 16>(return_value3362, res_stg9_update_0_sm147_111415);
  set_at<336, 512, 16>(return_value3362, res_stg9_update_0_sm147_101413);
  set_at<352, 512, 16>(return_value3362, res_stg9_update_0_sm147_91411);
  set_at<368, 512, 16>(return_value3362, res_stg9_update_0_sm147_81409);
  set_at<384, 512, 16>(return_value3362, res_stg9_update_0_sm147_71407);
  set_at<400, 512, 16>(return_value3362, res_stg9_update_0_sm147_61405);
  set_at<416, 512, 16>(return_value3362, res_stg9_update_0_sm147_51403);
  set_at<432, 512, 16>(return_value3362, res_stg9_update_0_sm147_41401);
  set_at<448, 512, 16>(return_value3362, res_stg9_update_0_sm147_31399);
  set_at<464, 512, 16>(return_value3362, res_stg9_update_0_sm147_21397);
  set_at<480, 512, 16>(return_value3362, res_stg9_update_0_sm147_11395);
  set_at<496, 512, 16>(return_value3362, res_stg9_update_0_sm147_01393);
  return return_value3362;

}

hw_uint<512> stg10_1_cu3364(hw_uint<16*128>& stg9_FIFO_buf124) {
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
  auto res_stg10_update_0_sm148_311519 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_3_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_7_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_4);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_5);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_6);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_7_pack, stg9_FIFO_buf124_lane_7);
  auto res_stg10_update_0_sm148_301517 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_7_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_11_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_8);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_9);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_10);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_11_pack, stg9_FIFO_buf124_lane_11);
  auto res_stg10_update_0_sm148_291515 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_11_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_15_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_12);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_13);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_14);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_15_pack, stg9_FIFO_buf124_lane_15);
  auto res_stg10_update_0_sm148_281513 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_15_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_19_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_16);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_17);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_18);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_19_pack, stg9_FIFO_buf124_lane_19);
  auto res_stg10_update_0_sm148_271511 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_19_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_23_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_20);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_21);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_22);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_23_pack, stg9_FIFO_buf124_lane_23);
  auto res_stg10_update_0_sm148_261509 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_23_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_27_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_24);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_25);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_26);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_27_pack, stg9_FIFO_buf124_lane_27);
  auto res_stg10_update_0_sm148_251507 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_27_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_31_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_28);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_29);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_30);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_31_pack, stg9_FIFO_buf124_lane_31);
  auto res_stg10_update_0_sm148_241505 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_31_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_35_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_32);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_33);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_34);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_35_pack, stg9_FIFO_buf124_lane_35);
  auto res_stg10_update_0_sm148_231503 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_35_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_39_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_36);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_37);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_38);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_39_pack, stg9_FIFO_buf124_lane_39);
  auto res_stg10_update_0_sm148_221501 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_39_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_43_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_40);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_41);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_42);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_43_pack, stg9_FIFO_buf124_lane_43);
  auto res_stg10_update_0_sm148_211499 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_43_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_47_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_44);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_45);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_46);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_47_pack, stg9_FIFO_buf124_lane_47);
  auto res_stg10_update_0_sm148_201497 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_47_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_51_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_48);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_49);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_50);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_51_pack, stg9_FIFO_buf124_lane_51);
  auto res_stg10_update_0_sm148_191495 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_51_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_55_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_52);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_53);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_54);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_55_pack, stg9_FIFO_buf124_lane_55);
  auto res_stg10_update_0_sm148_181493 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_55_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_59_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_56);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_57);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_58);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_59_pack, stg9_FIFO_buf124_lane_59);
  auto res_stg10_update_0_sm148_171491 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_59_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_63_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_60);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_61);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_62);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_63_pack, stg9_FIFO_buf124_lane_63);
  auto res_stg10_update_0_sm148_161489 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_63_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_67_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_64);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_65);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_66);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_67_pack, stg9_FIFO_buf124_lane_67);
  auto res_stg10_update_0_sm148_151487 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_67_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_71_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_68);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_69);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_70);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_71_pack, stg9_FIFO_buf124_lane_71);
  auto res_stg10_update_0_sm148_141485 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_71_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_75_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_72);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_73);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_74);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_75_pack, stg9_FIFO_buf124_lane_75);
  auto res_stg10_update_0_sm148_131483 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_75_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_79_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_76);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_77);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_78);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_79_pack, stg9_FIFO_buf124_lane_79);
  auto res_stg10_update_0_sm148_121481 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_79_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_83_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_80);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_81);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_82);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_83_pack, stg9_FIFO_buf124_lane_83);
  auto res_stg10_update_0_sm148_111479 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_83_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_87_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_84);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_85);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_86);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_87_pack, stg9_FIFO_buf124_lane_87);
  auto res_stg10_update_0_sm148_101477 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_87_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_91_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_88);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_89);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_90);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_91_pack, stg9_FIFO_buf124_lane_91);
  auto res_stg10_update_0_sm148_91475 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_91_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_95_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_92);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_93);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_94);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_95_pack, stg9_FIFO_buf124_lane_95);
  auto res_stg10_update_0_sm148_81473 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_95_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_99_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_96);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_97);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_98);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_99_pack, stg9_FIFO_buf124_lane_99);
  auto res_stg10_update_0_sm148_71471 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_99_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_103_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_100);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_101);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_102);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_103_pack, stg9_FIFO_buf124_lane_103);
  auto res_stg10_update_0_sm148_61469 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_103_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_107_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_104);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_105);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_106);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_107_pack, stg9_FIFO_buf124_lane_107);
  auto res_stg10_update_0_sm148_51467 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_107_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_111_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_108);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_109);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_110);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_111_pack, stg9_FIFO_buf124_lane_111);
  auto res_stg10_update_0_sm148_41465 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_111_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_115_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_112);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_113);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_114);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_115_pack, stg9_FIFO_buf124_lane_115);
  auto res_stg10_update_0_sm148_31463 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_115_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_119_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_116);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_117);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_118);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_119_pack, stg9_FIFO_buf124_lane_119);
  auto res_stg10_update_0_sm148_21461 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_119_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_123_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_120);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_121);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_122);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_123_pack, stg9_FIFO_buf124_lane_123);
  auto res_stg10_update_0_sm148_11459 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_123_pack);

  hw_uint<64 > stg9_FIFO_buf124_lane_127_pack;
  set_at<0, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_124);
  set_at<16, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_125);
  set_at<32, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_126);
  set_at<48, 64, 16>(stg9_FIFO_buf124_lane_127_pack, stg9_FIFO_buf124_lane_127);
  auto res_stg10_update_0_sm148_01457 = stg10_generated_compute_unrolled_1(stg9_FIFO_buf124_lane_127_pack);
  hw_uint<512 > return_value3365;
  set_at<0, 512, 16>(return_value3365, res_stg10_update_0_sm148_311519);
  set_at<16, 512, 16>(return_value3365, res_stg10_update_0_sm148_301517);
  set_at<32, 512, 16>(return_value3365, res_stg10_update_0_sm148_291515);
  set_at<48, 512, 16>(return_value3365, res_stg10_update_0_sm148_281513);
  set_at<64, 512, 16>(return_value3365, res_stg10_update_0_sm148_271511);
  set_at<80, 512, 16>(return_value3365, res_stg10_update_0_sm148_261509);
  set_at<96, 512, 16>(return_value3365, res_stg10_update_0_sm148_251507);
  set_at<112, 512, 16>(return_value3365, res_stg10_update_0_sm148_241505);
  set_at<128, 512, 16>(return_value3365, res_stg10_update_0_sm148_231503);
  set_at<144, 512, 16>(return_value3365, res_stg10_update_0_sm148_221501);
  set_at<160, 512, 16>(return_value3365, res_stg10_update_0_sm148_211499);
  set_at<176, 512, 16>(return_value3365, res_stg10_update_0_sm148_201497);
  set_at<192, 512, 16>(return_value3365, res_stg10_update_0_sm148_191495);
  set_at<208, 512, 16>(return_value3365, res_stg10_update_0_sm148_181493);
  set_at<224, 512, 16>(return_value3365, res_stg10_update_0_sm148_171491);
  set_at<240, 512, 16>(return_value3365, res_stg10_update_0_sm148_161489);
  set_at<256, 512, 16>(return_value3365, res_stg10_update_0_sm148_151487);
  set_at<272, 512, 16>(return_value3365, res_stg10_update_0_sm148_141485);
  set_at<288, 512, 16>(return_value3365, res_stg10_update_0_sm148_131483);
  set_at<304, 512, 16>(return_value3365, res_stg10_update_0_sm148_121481);
  set_at<320, 512, 16>(return_value3365, res_stg10_update_0_sm148_111479);
  set_at<336, 512, 16>(return_value3365, res_stg10_update_0_sm148_101477);
  set_at<352, 512, 16>(return_value3365, res_stg10_update_0_sm148_91475);
  set_at<368, 512, 16>(return_value3365, res_stg10_update_0_sm148_81473);
  set_at<384, 512, 16>(return_value3365, res_stg10_update_0_sm148_71471);
  set_at<400, 512, 16>(return_value3365, res_stg10_update_0_sm148_61469);
  set_at<416, 512, 16>(return_value3365, res_stg10_update_0_sm148_51467);
  set_at<432, 512, 16>(return_value3365, res_stg10_update_0_sm148_41465);
  set_at<448, 512, 16>(return_value3365, res_stg10_update_0_sm148_31463);
  set_at<464, 512, 16>(return_value3365, res_stg10_update_0_sm148_21461);
  set_at<480, 512, 16>(return_value3365, res_stg10_update_0_sm148_11459);
  set_at<496, 512, 16>(return_value3365, res_stg10_update_0_sm148_01457);
  return return_value3365;

}

hw_uint<512> stg11_1_cu3367(hw_uint<16*128>& stg10_FIFO_buf76) {
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
  hw_uint<16> stg10_FIFO_buf76_lane_64 = stg10_FIFO_buf76.extract<1024, 1039>();
  hw_uint<16> stg10_FIFO_buf76_lane_65 = stg10_FIFO_buf76.extract<1040, 1055>();
  hw_uint<16> stg10_FIFO_buf76_lane_66 = stg10_FIFO_buf76.extract<1056, 1071>();
  hw_uint<16> stg10_FIFO_buf76_lane_67 = stg10_FIFO_buf76.extract<1072, 1087>();
  hw_uint<16> stg10_FIFO_buf76_lane_68 = stg10_FIFO_buf76.extract<1088, 1103>();
  hw_uint<16> stg10_FIFO_buf76_lane_69 = stg10_FIFO_buf76.extract<1104, 1119>();
  hw_uint<16> stg10_FIFO_buf76_lane_70 = stg10_FIFO_buf76.extract<1120, 1135>();
  hw_uint<16> stg10_FIFO_buf76_lane_71 = stg10_FIFO_buf76.extract<1136, 1151>();
  hw_uint<16> stg10_FIFO_buf76_lane_72 = stg10_FIFO_buf76.extract<1152, 1167>();
  hw_uint<16> stg10_FIFO_buf76_lane_73 = stg10_FIFO_buf76.extract<1168, 1183>();
  hw_uint<16> stg10_FIFO_buf76_lane_74 = stg10_FIFO_buf76.extract<1184, 1199>();
  hw_uint<16> stg10_FIFO_buf76_lane_75 = stg10_FIFO_buf76.extract<1200, 1215>();
  hw_uint<16> stg10_FIFO_buf76_lane_76 = stg10_FIFO_buf76.extract<1216, 1231>();
  hw_uint<16> stg10_FIFO_buf76_lane_77 = stg10_FIFO_buf76.extract<1232, 1247>();
  hw_uint<16> stg10_FIFO_buf76_lane_78 = stg10_FIFO_buf76.extract<1248, 1263>();
  hw_uint<16> stg10_FIFO_buf76_lane_79 = stg10_FIFO_buf76.extract<1264, 1279>();
  hw_uint<16> stg10_FIFO_buf76_lane_80 = stg10_FIFO_buf76.extract<1280, 1295>();
  hw_uint<16> stg10_FIFO_buf76_lane_81 = stg10_FIFO_buf76.extract<1296, 1311>();
  hw_uint<16> stg10_FIFO_buf76_lane_82 = stg10_FIFO_buf76.extract<1312, 1327>();
  hw_uint<16> stg10_FIFO_buf76_lane_83 = stg10_FIFO_buf76.extract<1328, 1343>();
  hw_uint<16> stg10_FIFO_buf76_lane_84 = stg10_FIFO_buf76.extract<1344, 1359>();
  hw_uint<16> stg10_FIFO_buf76_lane_85 = stg10_FIFO_buf76.extract<1360, 1375>();
  hw_uint<16> stg10_FIFO_buf76_lane_86 = stg10_FIFO_buf76.extract<1376, 1391>();
  hw_uint<16> stg10_FIFO_buf76_lane_87 = stg10_FIFO_buf76.extract<1392, 1407>();
  hw_uint<16> stg10_FIFO_buf76_lane_88 = stg10_FIFO_buf76.extract<1408, 1423>();
  hw_uint<16> stg10_FIFO_buf76_lane_89 = stg10_FIFO_buf76.extract<1424, 1439>();
  hw_uint<16> stg10_FIFO_buf76_lane_90 = stg10_FIFO_buf76.extract<1440, 1455>();
  hw_uint<16> stg10_FIFO_buf76_lane_91 = stg10_FIFO_buf76.extract<1456, 1471>();
  hw_uint<16> stg10_FIFO_buf76_lane_92 = stg10_FIFO_buf76.extract<1472, 1487>();
  hw_uint<16> stg10_FIFO_buf76_lane_93 = stg10_FIFO_buf76.extract<1488, 1503>();
  hw_uint<16> stg10_FIFO_buf76_lane_94 = stg10_FIFO_buf76.extract<1504, 1519>();
  hw_uint<16> stg10_FIFO_buf76_lane_95 = stg10_FIFO_buf76.extract<1520, 1535>();
  hw_uint<16> stg10_FIFO_buf76_lane_96 = stg10_FIFO_buf76.extract<1536, 1551>();
  hw_uint<16> stg10_FIFO_buf76_lane_97 = stg10_FIFO_buf76.extract<1552, 1567>();
  hw_uint<16> stg10_FIFO_buf76_lane_98 = stg10_FIFO_buf76.extract<1568, 1583>();
  hw_uint<16> stg10_FIFO_buf76_lane_99 = stg10_FIFO_buf76.extract<1584, 1599>();
  hw_uint<16> stg10_FIFO_buf76_lane_100 = stg10_FIFO_buf76.extract<1600, 1615>();
  hw_uint<16> stg10_FIFO_buf76_lane_101 = stg10_FIFO_buf76.extract<1616, 1631>();
  hw_uint<16> stg10_FIFO_buf76_lane_102 = stg10_FIFO_buf76.extract<1632, 1647>();
  hw_uint<16> stg10_FIFO_buf76_lane_103 = stg10_FIFO_buf76.extract<1648, 1663>();
  hw_uint<16> stg10_FIFO_buf76_lane_104 = stg10_FIFO_buf76.extract<1664, 1679>();
  hw_uint<16> stg10_FIFO_buf76_lane_105 = stg10_FIFO_buf76.extract<1680, 1695>();
  hw_uint<16> stg10_FIFO_buf76_lane_106 = stg10_FIFO_buf76.extract<1696, 1711>();
  hw_uint<16> stg10_FIFO_buf76_lane_107 = stg10_FIFO_buf76.extract<1712, 1727>();
  hw_uint<16> stg10_FIFO_buf76_lane_108 = stg10_FIFO_buf76.extract<1728, 1743>();
  hw_uint<16> stg10_FIFO_buf76_lane_109 = stg10_FIFO_buf76.extract<1744, 1759>();
  hw_uint<16> stg10_FIFO_buf76_lane_110 = stg10_FIFO_buf76.extract<1760, 1775>();
  hw_uint<16> stg10_FIFO_buf76_lane_111 = stg10_FIFO_buf76.extract<1776, 1791>();
  hw_uint<16> stg10_FIFO_buf76_lane_112 = stg10_FIFO_buf76.extract<1792, 1807>();
  hw_uint<16> stg10_FIFO_buf76_lane_113 = stg10_FIFO_buf76.extract<1808, 1823>();
  hw_uint<16> stg10_FIFO_buf76_lane_114 = stg10_FIFO_buf76.extract<1824, 1839>();
  hw_uint<16> stg10_FIFO_buf76_lane_115 = stg10_FIFO_buf76.extract<1840, 1855>();
  hw_uint<16> stg10_FIFO_buf76_lane_116 = stg10_FIFO_buf76.extract<1856, 1871>();
  hw_uint<16> stg10_FIFO_buf76_lane_117 = stg10_FIFO_buf76.extract<1872, 1887>();
  hw_uint<16> stg10_FIFO_buf76_lane_118 = stg10_FIFO_buf76.extract<1888, 1903>();
  hw_uint<16> stg10_FIFO_buf76_lane_119 = stg10_FIFO_buf76.extract<1904, 1919>();
  hw_uint<16> stg10_FIFO_buf76_lane_120 = stg10_FIFO_buf76.extract<1920, 1935>();
  hw_uint<16> stg10_FIFO_buf76_lane_121 = stg10_FIFO_buf76.extract<1936, 1951>();
  hw_uint<16> stg10_FIFO_buf76_lane_122 = stg10_FIFO_buf76.extract<1952, 1967>();
  hw_uint<16> stg10_FIFO_buf76_lane_123 = stg10_FIFO_buf76.extract<1968, 1983>();
  hw_uint<16> stg10_FIFO_buf76_lane_124 = stg10_FIFO_buf76.extract<1984, 1999>();
  hw_uint<16> stg10_FIFO_buf76_lane_125 = stg10_FIFO_buf76.extract<2000, 2015>();
  hw_uint<16> stg10_FIFO_buf76_lane_126 = stg10_FIFO_buf76.extract<2016, 2031>();
  hw_uint<16> stg10_FIFO_buf76_lane_127 = stg10_FIFO_buf76.extract<2032, 2047>();

	
  hw_uint<64 > stg10_FIFO_buf76_lane_3_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_0);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_1);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_2);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_3_pack, stg10_FIFO_buf76_lane_3);
  auto res_stg11_update_0_sm149_311583 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_3_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_7_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_4);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_5);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_6);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_7_pack, stg10_FIFO_buf76_lane_7);
  auto res_stg11_update_0_sm149_301581 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_7_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_11_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_8);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_9);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_10);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_11_pack, stg10_FIFO_buf76_lane_11);
  auto res_stg11_update_0_sm149_291579 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_11_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_15_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_12);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_13);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_14);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_15_pack, stg10_FIFO_buf76_lane_15);
  auto res_stg11_update_0_sm149_281577 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_15_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_19_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_16);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_17);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_18);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_19_pack, stg10_FIFO_buf76_lane_19);
  auto res_stg11_update_0_sm149_271575 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_19_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_23_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_20);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_21);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_22);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_23_pack, stg10_FIFO_buf76_lane_23);
  auto res_stg11_update_0_sm149_261573 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_23_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_27_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_24);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_25);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_26);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_27_pack, stg10_FIFO_buf76_lane_27);
  auto res_stg11_update_0_sm149_251571 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_27_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_31_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_28);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_29);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_30);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_31_pack, stg10_FIFO_buf76_lane_31);
  auto res_stg11_update_0_sm149_241569 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_31_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_35_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_32);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_33);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_34);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_35_pack, stg10_FIFO_buf76_lane_35);
  auto res_stg11_update_0_sm149_231567 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_35_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_39_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_36);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_37);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_38);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_39_pack, stg10_FIFO_buf76_lane_39);
  auto res_stg11_update_0_sm149_221565 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_39_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_43_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_40);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_41);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_42);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_43_pack, stg10_FIFO_buf76_lane_43);
  auto res_stg11_update_0_sm149_211563 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_43_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_47_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_44);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_45);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_46);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_47_pack, stg10_FIFO_buf76_lane_47);
  auto res_stg11_update_0_sm149_201561 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_47_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_51_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_48);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_49);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_50);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_51_pack, stg10_FIFO_buf76_lane_51);
  auto res_stg11_update_0_sm149_191559 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_51_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_55_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_52);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_53);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_54);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_55_pack, stg10_FIFO_buf76_lane_55);
  auto res_stg11_update_0_sm149_181557 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_55_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_59_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_56);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_57);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_58);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_59_pack, stg10_FIFO_buf76_lane_59);
  auto res_stg11_update_0_sm149_171555 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_59_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_63_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_60);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_61);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_62);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_63_pack, stg10_FIFO_buf76_lane_63);
  auto res_stg11_update_0_sm149_161553 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_63_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_67_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_67_pack, stg10_FIFO_buf76_lane_64);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_67_pack, stg10_FIFO_buf76_lane_65);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_67_pack, stg10_FIFO_buf76_lane_66);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_67_pack, stg10_FIFO_buf76_lane_67);
  auto res_stg11_update_0_sm149_151551 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_67_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_71_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_71_pack, stg10_FIFO_buf76_lane_68);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_71_pack, stg10_FIFO_buf76_lane_69);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_71_pack, stg10_FIFO_buf76_lane_70);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_71_pack, stg10_FIFO_buf76_lane_71);
  auto res_stg11_update_0_sm149_141549 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_71_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_75_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_75_pack, stg10_FIFO_buf76_lane_72);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_75_pack, stg10_FIFO_buf76_lane_73);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_75_pack, stg10_FIFO_buf76_lane_74);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_75_pack, stg10_FIFO_buf76_lane_75);
  auto res_stg11_update_0_sm149_131547 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_75_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_79_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_79_pack, stg10_FIFO_buf76_lane_76);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_79_pack, stg10_FIFO_buf76_lane_77);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_79_pack, stg10_FIFO_buf76_lane_78);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_79_pack, stg10_FIFO_buf76_lane_79);
  auto res_stg11_update_0_sm149_121545 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_79_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_83_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_83_pack, stg10_FIFO_buf76_lane_80);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_83_pack, stg10_FIFO_buf76_lane_81);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_83_pack, stg10_FIFO_buf76_lane_82);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_83_pack, stg10_FIFO_buf76_lane_83);
  auto res_stg11_update_0_sm149_111543 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_83_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_87_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_87_pack, stg10_FIFO_buf76_lane_84);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_87_pack, stg10_FIFO_buf76_lane_85);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_87_pack, stg10_FIFO_buf76_lane_86);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_87_pack, stg10_FIFO_buf76_lane_87);
  auto res_stg11_update_0_sm149_101541 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_87_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_91_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_91_pack, stg10_FIFO_buf76_lane_88);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_91_pack, stg10_FIFO_buf76_lane_89);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_91_pack, stg10_FIFO_buf76_lane_90);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_91_pack, stg10_FIFO_buf76_lane_91);
  auto res_stg11_update_0_sm149_91539 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_91_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_95_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_95_pack, stg10_FIFO_buf76_lane_92);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_95_pack, stg10_FIFO_buf76_lane_93);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_95_pack, stg10_FIFO_buf76_lane_94);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_95_pack, stg10_FIFO_buf76_lane_95);
  auto res_stg11_update_0_sm149_81537 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_95_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_99_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_99_pack, stg10_FIFO_buf76_lane_96);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_99_pack, stg10_FIFO_buf76_lane_97);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_99_pack, stg10_FIFO_buf76_lane_98);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_99_pack, stg10_FIFO_buf76_lane_99);
  auto res_stg11_update_0_sm149_71535 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_99_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_103_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_103_pack, stg10_FIFO_buf76_lane_100);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_103_pack, stg10_FIFO_buf76_lane_101);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_103_pack, stg10_FIFO_buf76_lane_102);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_103_pack, stg10_FIFO_buf76_lane_103);
  auto res_stg11_update_0_sm149_61533 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_103_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_107_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_107_pack, stg10_FIFO_buf76_lane_104);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_107_pack, stg10_FIFO_buf76_lane_105);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_107_pack, stg10_FIFO_buf76_lane_106);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_107_pack, stg10_FIFO_buf76_lane_107);
  auto res_stg11_update_0_sm149_51531 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_107_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_111_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_111_pack, stg10_FIFO_buf76_lane_108);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_111_pack, stg10_FIFO_buf76_lane_109);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_111_pack, stg10_FIFO_buf76_lane_110);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_111_pack, stg10_FIFO_buf76_lane_111);
  auto res_stg11_update_0_sm149_41529 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_111_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_115_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_115_pack, stg10_FIFO_buf76_lane_112);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_115_pack, stg10_FIFO_buf76_lane_113);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_115_pack, stg10_FIFO_buf76_lane_114);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_115_pack, stg10_FIFO_buf76_lane_115);
  auto res_stg11_update_0_sm149_31527 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_115_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_119_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_119_pack, stg10_FIFO_buf76_lane_116);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_119_pack, stg10_FIFO_buf76_lane_117);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_119_pack, stg10_FIFO_buf76_lane_118);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_119_pack, stg10_FIFO_buf76_lane_119);
  auto res_stg11_update_0_sm149_21525 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_119_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_123_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_123_pack, stg10_FIFO_buf76_lane_120);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_123_pack, stg10_FIFO_buf76_lane_121);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_123_pack, stg10_FIFO_buf76_lane_122);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_123_pack, stg10_FIFO_buf76_lane_123);
  auto res_stg11_update_0_sm149_11523 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_123_pack);

  hw_uint<64 > stg10_FIFO_buf76_lane_127_pack;
  set_at<0, 64, 16>(stg10_FIFO_buf76_lane_127_pack, stg10_FIFO_buf76_lane_124);
  set_at<16, 64, 16>(stg10_FIFO_buf76_lane_127_pack, stg10_FIFO_buf76_lane_125);
  set_at<32, 64, 16>(stg10_FIFO_buf76_lane_127_pack, stg10_FIFO_buf76_lane_126);
  set_at<48, 64, 16>(stg10_FIFO_buf76_lane_127_pack, stg10_FIFO_buf76_lane_127);
  auto res_stg11_update_0_sm149_01521 = stg11_generated_compute_unrolled_1(stg10_FIFO_buf76_lane_127_pack);
  hw_uint<512 > return_value3368;
  set_at<0, 512, 16>(return_value3368, res_stg11_update_0_sm149_311583);
  set_at<16, 512, 16>(return_value3368, res_stg11_update_0_sm149_301581);
  set_at<32, 512, 16>(return_value3368, res_stg11_update_0_sm149_291579);
  set_at<48, 512, 16>(return_value3368, res_stg11_update_0_sm149_281577);
  set_at<64, 512, 16>(return_value3368, res_stg11_update_0_sm149_271575);
  set_at<80, 512, 16>(return_value3368, res_stg11_update_0_sm149_261573);
  set_at<96, 512, 16>(return_value3368, res_stg11_update_0_sm149_251571);
  set_at<112, 512, 16>(return_value3368, res_stg11_update_0_sm149_241569);
  set_at<128, 512, 16>(return_value3368, res_stg11_update_0_sm149_231567);
  set_at<144, 512, 16>(return_value3368, res_stg11_update_0_sm149_221565);
  set_at<160, 512, 16>(return_value3368, res_stg11_update_0_sm149_211563);
  set_at<176, 512, 16>(return_value3368, res_stg11_update_0_sm149_201561);
  set_at<192, 512, 16>(return_value3368, res_stg11_update_0_sm149_191559);
  set_at<208, 512, 16>(return_value3368, res_stg11_update_0_sm149_181557);
  set_at<224, 512, 16>(return_value3368, res_stg11_update_0_sm149_171555);
  set_at<240, 512, 16>(return_value3368, res_stg11_update_0_sm149_161553);
  set_at<256, 512, 16>(return_value3368, res_stg11_update_0_sm149_151551);
  set_at<272, 512, 16>(return_value3368, res_stg11_update_0_sm149_141549);
  set_at<288, 512, 16>(return_value3368, res_stg11_update_0_sm149_131547);
  set_at<304, 512, 16>(return_value3368, res_stg11_update_0_sm149_121545);
  set_at<320, 512, 16>(return_value3368, res_stg11_update_0_sm149_111543);
  set_at<336, 512, 16>(return_value3368, res_stg11_update_0_sm149_101541);
  set_at<352, 512, 16>(return_value3368, res_stg11_update_0_sm149_91539);
  set_at<368, 512, 16>(return_value3368, res_stg11_update_0_sm149_81537);
  set_at<384, 512, 16>(return_value3368, res_stg11_update_0_sm149_71535);
  set_at<400, 512, 16>(return_value3368, res_stg11_update_0_sm149_61533);
  set_at<416, 512, 16>(return_value3368, res_stg11_update_0_sm149_51531);
  set_at<432, 512, 16>(return_value3368, res_stg11_update_0_sm149_41529);
  set_at<448, 512, 16>(return_value3368, res_stg11_update_0_sm149_31527);
  set_at<464, 512, 16>(return_value3368, res_stg11_update_0_sm149_21525);
  set_at<480, 512, 16>(return_value3368, res_stg11_update_0_sm149_11523);
  set_at<496, 512, 16>(return_value3368, res_stg11_update_0_sm149_01521);
  return return_value3368;

}

hw_uint<512> stg12_1_cu3370(hw_uint<16*128>& stg11_FIFO_buf80) {
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
  hw_uint<16> stg11_FIFO_buf80_lane_64 = stg11_FIFO_buf80.extract<1024, 1039>();
  hw_uint<16> stg11_FIFO_buf80_lane_65 = stg11_FIFO_buf80.extract<1040, 1055>();
  hw_uint<16> stg11_FIFO_buf80_lane_66 = stg11_FIFO_buf80.extract<1056, 1071>();
  hw_uint<16> stg11_FIFO_buf80_lane_67 = stg11_FIFO_buf80.extract<1072, 1087>();
  hw_uint<16> stg11_FIFO_buf80_lane_68 = stg11_FIFO_buf80.extract<1088, 1103>();
  hw_uint<16> stg11_FIFO_buf80_lane_69 = stg11_FIFO_buf80.extract<1104, 1119>();
  hw_uint<16> stg11_FIFO_buf80_lane_70 = stg11_FIFO_buf80.extract<1120, 1135>();
  hw_uint<16> stg11_FIFO_buf80_lane_71 = stg11_FIFO_buf80.extract<1136, 1151>();
  hw_uint<16> stg11_FIFO_buf80_lane_72 = stg11_FIFO_buf80.extract<1152, 1167>();
  hw_uint<16> stg11_FIFO_buf80_lane_73 = stg11_FIFO_buf80.extract<1168, 1183>();
  hw_uint<16> stg11_FIFO_buf80_lane_74 = stg11_FIFO_buf80.extract<1184, 1199>();
  hw_uint<16> stg11_FIFO_buf80_lane_75 = stg11_FIFO_buf80.extract<1200, 1215>();
  hw_uint<16> stg11_FIFO_buf80_lane_76 = stg11_FIFO_buf80.extract<1216, 1231>();
  hw_uint<16> stg11_FIFO_buf80_lane_77 = stg11_FIFO_buf80.extract<1232, 1247>();
  hw_uint<16> stg11_FIFO_buf80_lane_78 = stg11_FIFO_buf80.extract<1248, 1263>();
  hw_uint<16> stg11_FIFO_buf80_lane_79 = stg11_FIFO_buf80.extract<1264, 1279>();
  hw_uint<16> stg11_FIFO_buf80_lane_80 = stg11_FIFO_buf80.extract<1280, 1295>();
  hw_uint<16> stg11_FIFO_buf80_lane_81 = stg11_FIFO_buf80.extract<1296, 1311>();
  hw_uint<16> stg11_FIFO_buf80_lane_82 = stg11_FIFO_buf80.extract<1312, 1327>();
  hw_uint<16> stg11_FIFO_buf80_lane_83 = stg11_FIFO_buf80.extract<1328, 1343>();
  hw_uint<16> stg11_FIFO_buf80_lane_84 = stg11_FIFO_buf80.extract<1344, 1359>();
  hw_uint<16> stg11_FIFO_buf80_lane_85 = stg11_FIFO_buf80.extract<1360, 1375>();
  hw_uint<16> stg11_FIFO_buf80_lane_86 = stg11_FIFO_buf80.extract<1376, 1391>();
  hw_uint<16> stg11_FIFO_buf80_lane_87 = stg11_FIFO_buf80.extract<1392, 1407>();
  hw_uint<16> stg11_FIFO_buf80_lane_88 = stg11_FIFO_buf80.extract<1408, 1423>();
  hw_uint<16> stg11_FIFO_buf80_lane_89 = stg11_FIFO_buf80.extract<1424, 1439>();
  hw_uint<16> stg11_FIFO_buf80_lane_90 = stg11_FIFO_buf80.extract<1440, 1455>();
  hw_uint<16> stg11_FIFO_buf80_lane_91 = stg11_FIFO_buf80.extract<1456, 1471>();
  hw_uint<16> stg11_FIFO_buf80_lane_92 = stg11_FIFO_buf80.extract<1472, 1487>();
  hw_uint<16> stg11_FIFO_buf80_lane_93 = stg11_FIFO_buf80.extract<1488, 1503>();
  hw_uint<16> stg11_FIFO_buf80_lane_94 = stg11_FIFO_buf80.extract<1504, 1519>();
  hw_uint<16> stg11_FIFO_buf80_lane_95 = stg11_FIFO_buf80.extract<1520, 1535>();
  hw_uint<16> stg11_FIFO_buf80_lane_96 = stg11_FIFO_buf80.extract<1536, 1551>();
  hw_uint<16> stg11_FIFO_buf80_lane_97 = stg11_FIFO_buf80.extract<1552, 1567>();
  hw_uint<16> stg11_FIFO_buf80_lane_98 = stg11_FIFO_buf80.extract<1568, 1583>();
  hw_uint<16> stg11_FIFO_buf80_lane_99 = stg11_FIFO_buf80.extract<1584, 1599>();
  hw_uint<16> stg11_FIFO_buf80_lane_100 = stg11_FIFO_buf80.extract<1600, 1615>();
  hw_uint<16> stg11_FIFO_buf80_lane_101 = stg11_FIFO_buf80.extract<1616, 1631>();
  hw_uint<16> stg11_FIFO_buf80_lane_102 = stg11_FIFO_buf80.extract<1632, 1647>();
  hw_uint<16> stg11_FIFO_buf80_lane_103 = stg11_FIFO_buf80.extract<1648, 1663>();
  hw_uint<16> stg11_FIFO_buf80_lane_104 = stg11_FIFO_buf80.extract<1664, 1679>();
  hw_uint<16> stg11_FIFO_buf80_lane_105 = stg11_FIFO_buf80.extract<1680, 1695>();
  hw_uint<16> stg11_FIFO_buf80_lane_106 = stg11_FIFO_buf80.extract<1696, 1711>();
  hw_uint<16> stg11_FIFO_buf80_lane_107 = stg11_FIFO_buf80.extract<1712, 1727>();
  hw_uint<16> stg11_FIFO_buf80_lane_108 = stg11_FIFO_buf80.extract<1728, 1743>();
  hw_uint<16> stg11_FIFO_buf80_lane_109 = stg11_FIFO_buf80.extract<1744, 1759>();
  hw_uint<16> stg11_FIFO_buf80_lane_110 = stg11_FIFO_buf80.extract<1760, 1775>();
  hw_uint<16> stg11_FIFO_buf80_lane_111 = stg11_FIFO_buf80.extract<1776, 1791>();
  hw_uint<16> stg11_FIFO_buf80_lane_112 = stg11_FIFO_buf80.extract<1792, 1807>();
  hw_uint<16> stg11_FIFO_buf80_lane_113 = stg11_FIFO_buf80.extract<1808, 1823>();
  hw_uint<16> stg11_FIFO_buf80_lane_114 = stg11_FIFO_buf80.extract<1824, 1839>();
  hw_uint<16> stg11_FIFO_buf80_lane_115 = stg11_FIFO_buf80.extract<1840, 1855>();
  hw_uint<16> stg11_FIFO_buf80_lane_116 = stg11_FIFO_buf80.extract<1856, 1871>();
  hw_uint<16> stg11_FIFO_buf80_lane_117 = stg11_FIFO_buf80.extract<1872, 1887>();
  hw_uint<16> stg11_FIFO_buf80_lane_118 = stg11_FIFO_buf80.extract<1888, 1903>();
  hw_uint<16> stg11_FIFO_buf80_lane_119 = stg11_FIFO_buf80.extract<1904, 1919>();
  hw_uint<16> stg11_FIFO_buf80_lane_120 = stg11_FIFO_buf80.extract<1920, 1935>();
  hw_uint<16> stg11_FIFO_buf80_lane_121 = stg11_FIFO_buf80.extract<1936, 1951>();
  hw_uint<16> stg11_FIFO_buf80_lane_122 = stg11_FIFO_buf80.extract<1952, 1967>();
  hw_uint<16> stg11_FIFO_buf80_lane_123 = stg11_FIFO_buf80.extract<1968, 1983>();
  hw_uint<16> stg11_FIFO_buf80_lane_124 = stg11_FIFO_buf80.extract<1984, 1999>();
  hw_uint<16> stg11_FIFO_buf80_lane_125 = stg11_FIFO_buf80.extract<2000, 2015>();
  hw_uint<16> stg11_FIFO_buf80_lane_126 = stg11_FIFO_buf80.extract<2016, 2031>();
  hw_uint<16> stg11_FIFO_buf80_lane_127 = stg11_FIFO_buf80.extract<2032, 2047>();

	
  hw_uint<64 > stg11_FIFO_buf80_lane_3_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_0);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_1);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_2);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_3_pack, stg11_FIFO_buf80_lane_3);
  auto res_stg12_update_0_sm150_311647 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_3_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_7_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_4);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_5);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_6);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_7_pack, stg11_FIFO_buf80_lane_7);
  auto res_stg12_update_0_sm150_301645 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_7_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_11_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_8);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_9);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_10);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_11_pack, stg11_FIFO_buf80_lane_11);
  auto res_stg12_update_0_sm150_291643 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_11_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_15_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_12);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_13);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_14);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_15_pack, stg11_FIFO_buf80_lane_15);
  auto res_stg12_update_0_sm150_281641 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_15_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_19_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_16);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_17);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_18);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_19_pack, stg11_FIFO_buf80_lane_19);
  auto res_stg12_update_0_sm150_271639 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_19_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_23_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_20);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_21);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_22);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_23_pack, stg11_FIFO_buf80_lane_23);
  auto res_stg12_update_0_sm150_261637 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_23_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_27_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_24);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_25);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_26);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_27_pack, stg11_FIFO_buf80_lane_27);
  auto res_stg12_update_0_sm150_251635 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_27_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_31_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_28);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_29);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_30);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_31_pack, stg11_FIFO_buf80_lane_31);
  auto res_stg12_update_0_sm150_241633 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_31_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_35_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_32);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_33);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_34);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_35_pack, stg11_FIFO_buf80_lane_35);
  auto res_stg12_update_0_sm150_231631 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_35_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_39_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_36);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_37);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_38);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_39_pack, stg11_FIFO_buf80_lane_39);
  auto res_stg12_update_0_sm150_221629 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_39_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_43_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_40);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_41);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_42);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_43_pack, stg11_FIFO_buf80_lane_43);
  auto res_stg12_update_0_sm150_211627 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_43_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_47_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_44);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_45);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_46);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_47_pack, stg11_FIFO_buf80_lane_47);
  auto res_stg12_update_0_sm150_201625 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_47_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_51_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_48);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_49);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_50);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_51_pack, stg11_FIFO_buf80_lane_51);
  auto res_stg12_update_0_sm150_191623 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_51_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_55_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_52);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_53);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_54);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_55_pack, stg11_FIFO_buf80_lane_55);
  auto res_stg12_update_0_sm150_181621 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_55_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_59_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_56);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_57);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_58);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_59_pack, stg11_FIFO_buf80_lane_59);
  auto res_stg12_update_0_sm150_171619 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_59_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_63_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_60);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_61);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_62);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_63_pack, stg11_FIFO_buf80_lane_63);
  auto res_stg12_update_0_sm150_161617 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_63_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_67_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_67_pack, stg11_FIFO_buf80_lane_64);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_67_pack, stg11_FIFO_buf80_lane_65);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_67_pack, stg11_FIFO_buf80_lane_66);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_67_pack, stg11_FIFO_buf80_lane_67);
  auto res_stg12_update_0_sm150_151615 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_67_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_71_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_71_pack, stg11_FIFO_buf80_lane_68);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_71_pack, stg11_FIFO_buf80_lane_69);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_71_pack, stg11_FIFO_buf80_lane_70);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_71_pack, stg11_FIFO_buf80_lane_71);
  auto res_stg12_update_0_sm150_141613 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_71_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_75_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_75_pack, stg11_FIFO_buf80_lane_72);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_75_pack, stg11_FIFO_buf80_lane_73);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_75_pack, stg11_FIFO_buf80_lane_74);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_75_pack, stg11_FIFO_buf80_lane_75);
  auto res_stg12_update_0_sm150_131611 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_75_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_79_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_79_pack, stg11_FIFO_buf80_lane_76);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_79_pack, stg11_FIFO_buf80_lane_77);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_79_pack, stg11_FIFO_buf80_lane_78);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_79_pack, stg11_FIFO_buf80_lane_79);
  auto res_stg12_update_0_sm150_121609 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_79_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_83_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_83_pack, stg11_FIFO_buf80_lane_80);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_83_pack, stg11_FIFO_buf80_lane_81);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_83_pack, stg11_FIFO_buf80_lane_82);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_83_pack, stg11_FIFO_buf80_lane_83);
  auto res_stg12_update_0_sm150_111607 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_83_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_87_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_87_pack, stg11_FIFO_buf80_lane_84);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_87_pack, stg11_FIFO_buf80_lane_85);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_87_pack, stg11_FIFO_buf80_lane_86);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_87_pack, stg11_FIFO_buf80_lane_87);
  auto res_stg12_update_0_sm150_101605 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_87_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_91_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_91_pack, stg11_FIFO_buf80_lane_88);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_91_pack, stg11_FIFO_buf80_lane_89);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_91_pack, stg11_FIFO_buf80_lane_90);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_91_pack, stg11_FIFO_buf80_lane_91);
  auto res_stg12_update_0_sm150_91603 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_91_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_95_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_95_pack, stg11_FIFO_buf80_lane_92);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_95_pack, stg11_FIFO_buf80_lane_93);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_95_pack, stg11_FIFO_buf80_lane_94);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_95_pack, stg11_FIFO_buf80_lane_95);
  auto res_stg12_update_0_sm150_81601 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_95_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_99_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_99_pack, stg11_FIFO_buf80_lane_96);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_99_pack, stg11_FIFO_buf80_lane_97);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_99_pack, stg11_FIFO_buf80_lane_98);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_99_pack, stg11_FIFO_buf80_lane_99);
  auto res_stg12_update_0_sm150_71599 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_99_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_103_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_103_pack, stg11_FIFO_buf80_lane_100);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_103_pack, stg11_FIFO_buf80_lane_101);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_103_pack, stg11_FIFO_buf80_lane_102);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_103_pack, stg11_FIFO_buf80_lane_103);
  auto res_stg12_update_0_sm150_61597 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_103_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_107_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_107_pack, stg11_FIFO_buf80_lane_104);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_107_pack, stg11_FIFO_buf80_lane_105);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_107_pack, stg11_FIFO_buf80_lane_106);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_107_pack, stg11_FIFO_buf80_lane_107);
  auto res_stg12_update_0_sm150_51595 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_107_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_111_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_111_pack, stg11_FIFO_buf80_lane_108);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_111_pack, stg11_FIFO_buf80_lane_109);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_111_pack, stg11_FIFO_buf80_lane_110);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_111_pack, stg11_FIFO_buf80_lane_111);
  auto res_stg12_update_0_sm150_41593 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_111_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_115_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_115_pack, stg11_FIFO_buf80_lane_112);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_115_pack, stg11_FIFO_buf80_lane_113);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_115_pack, stg11_FIFO_buf80_lane_114);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_115_pack, stg11_FIFO_buf80_lane_115);
  auto res_stg12_update_0_sm150_31591 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_115_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_119_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_119_pack, stg11_FIFO_buf80_lane_116);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_119_pack, stg11_FIFO_buf80_lane_117);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_119_pack, stg11_FIFO_buf80_lane_118);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_119_pack, stg11_FIFO_buf80_lane_119);
  auto res_stg12_update_0_sm150_21589 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_119_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_123_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_123_pack, stg11_FIFO_buf80_lane_120);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_123_pack, stg11_FIFO_buf80_lane_121);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_123_pack, stg11_FIFO_buf80_lane_122);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_123_pack, stg11_FIFO_buf80_lane_123);
  auto res_stg12_update_0_sm150_11587 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_123_pack);

  hw_uint<64 > stg11_FIFO_buf80_lane_127_pack;
  set_at<0, 64, 16>(stg11_FIFO_buf80_lane_127_pack, stg11_FIFO_buf80_lane_124);
  set_at<16, 64, 16>(stg11_FIFO_buf80_lane_127_pack, stg11_FIFO_buf80_lane_125);
  set_at<32, 64, 16>(stg11_FIFO_buf80_lane_127_pack, stg11_FIFO_buf80_lane_126);
  set_at<48, 64, 16>(stg11_FIFO_buf80_lane_127_pack, stg11_FIFO_buf80_lane_127);
  auto res_stg12_update_0_sm150_01585 = stg12_generated_compute_unrolled_1(stg11_FIFO_buf80_lane_127_pack);
  hw_uint<512 > return_value3371;
  set_at<0, 512, 16>(return_value3371, res_stg12_update_0_sm150_311647);
  set_at<16, 512, 16>(return_value3371, res_stg12_update_0_sm150_301645);
  set_at<32, 512, 16>(return_value3371, res_stg12_update_0_sm150_291643);
  set_at<48, 512, 16>(return_value3371, res_stg12_update_0_sm150_281641);
  set_at<64, 512, 16>(return_value3371, res_stg12_update_0_sm150_271639);
  set_at<80, 512, 16>(return_value3371, res_stg12_update_0_sm150_261637);
  set_at<96, 512, 16>(return_value3371, res_stg12_update_0_sm150_251635);
  set_at<112, 512, 16>(return_value3371, res_stg12_update_0_sm150_241633);
  set_at<128, 512, 16>(return_value3371, res_stg12_update_0_sm150_231631);
  set_at<144, 512, 16>(return_value3371, res_stg12_update_0_sm150_221629);
  set_at<160, 512, 16>(return_value3371, res_stg12_update_0_sm150_211627);
  set_at<176, 512, 16>(return_value3371, res_stg12_update_0_sm150_201625);
  set_at<192, 512, 16>(return_value3371, res_stg12_update_0_sm150_191623);
  set_at<208, 512, 16>(return_value3371, res_stg12_update_0_sm150_181621);
  set_at<224, 512, 16>(return_value3371, res_stg12_update_0_sm150_171619);
  set_at<240, 512, 16>(return_value3371, res_stg12_update_0_sm150_161617);
  set_at<256, 512, 16>(return_value3371, res_stg12_update_0_sm150_151615);
  set_at<272, 512, 16>(return_value3371, res_stg12_update_0_sm150_141613);
  set_at<288, 512, 16>(return_value3371, res_stg12_update_0_sm150_131611);
  set_at<304, 512, 16>(return_value3371, res_stg12_update_0_sm150_121609);
  set_at<320, 512, 16>(return_value3371, res_stg12_update_0_sm150_111607);
  set_at<336, 512, 16>(return_value3371, res_stg12_update_0_sm150_101605);
  set_at<352, 512, 16>(return_value3371, res_stg12_update_0_sm150_91603);
  set_at<368, 512, 16>(return_value3371, res_stg12_update_0_sm150_81601);
  set_at<384, 512, 16>(return_value3371, res_stg12_update_0_sm150_71599);
  set_at<400, 512, 16>(return_value3371, res_stg12_update_0_sm150_61597);
  set_at<416, 512, 16>(return_value3371, res_stg12_update_0_sm150_51595);
  set_at<432, 512, 16>(return_value3371, res_stg12_update_0_sm150_41593);
  set_at<448, 512, 16>(return_value3371, res_stg12_update_0_sm150_31591);
  set_at<464, 512, 16>(return_value3371, res_stg12_update_0_sm150_21589);
  set_at<480, 512, 16>(return_value3371, res_stg12_update_0_sm150_11587);
  set_at<496, 512, 16>(return_value3371, res_stg12_update_0_sm150_01585);
  return return_value3371;

}

hw_uint<512> stg13_1_cu3373(hw_uint<16*128>& stg12_FIFO_buf84) {
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
  hw_uint<16> stg12_FIFO_buf84_lane_64 = stg12_FIFO_buf84.extract<1024, 1039>();
  hw_uint<16> stg12_FIFO_buf84_lane_65 = stg12_FIFO_buf84.extract<1040, 1055>();
  hw_uint<16> stg12_FIFO_buf84_lane_66 = stg12_FIFO_buf84.extract<1056, 1071>();
  hw_uint<16> stg12_FIFO_buf84_lane_67 = stg12_FIFO_buf84.extract<1072, 1087>();
  hw_uint<16> stg12_FIFO_buf84_lane_68 = stg12_FIFO_buf84.extract<1088, 1103>();
  hw_uint<16> stg12_FIFO_buf84_lane_69 = stg12_FIFO_buf84.extract<1104, 1119>();
  hw_uint<16> stg12_FIFO_buf84_lane_70 = stg12_FIFO_buf84.extract<1120, 1135>();
  hw_uint<16> stg12_FIFO_buf84_lane_71 = stg12_FIFO_buf84.extract<1136, 1151>();
  hw_uint<16> stg12_FIFO_buf84_lane_72 = stg12_FIFO_buf84.extract<1152, 1167>();
  hw_uint<16> stg12_FIFO_buf84_lane_73 = stg12_FIFO_buf84.extract<1168, 1183>();
  hw_uint<16> stg12_FIFO_buf84_lane_74 = stg12_FIFO_buf84.extract<1184, 1199>();
  hw_uint<16> stg12_FIFO_buf84_lane_75 = stg12_FIFO_buf84.extract<1200, 1215>();
  hw_uint<16> stg12_FIFO_buf84_lane_76 = stg12_FIFO_buf84.extract<1216, 1231>();
  hw_uint<16> stg12_FIFO_buf84_lane_77 = stg12_FIFO_buf84.extract<1232, 1247>();
  hw_uint<16> stg12_FIFO_buf84_lane_78 = stg12_FIFO_buf84.extract<1248, 1263>();
  hw_uint<16> stg12_FIFO_buf84_lane_79 = stg12_FIFO_buf84.extract<1264, 1279>();
  hw_uint<16> stg12_FIFO_buf84_lane_80 = stg12_FIFO_buf84.extract<1280, 1295>();
  hw_uint<16> stg12_FIFO_buf84_lane_81 = stg12_FIFO_buf84.extract<1296, 1311>();
  hw_uint<16> stg12_FIFO_buf84_lane_82 = stg12_FIFO_buf84.extract<1312, 1327>();
  hw_uint<16> stg12_FIFO_buf84_lane_83 = stg12_FIFO_buf84.extract<1328, 1343>();
  hw_uint<16> stg12_FIFO_buf84_lane_84 = stg12_FIFO_buf84.extract<1344, 1359>();
  hw_uint<16> stg12_FIFO_buf84_lane_85 = stg12_FIFO_buf84.extract<1360, 1375>();
  hw_uint<16> stg12_FIFO_buf84_lane_86 = stg12_FIFO_buf84.extract<1376, 1391>();
  hw_uint<16> stg12_FIFO_buf84_lane_87 = stg12_FIFO_buf84.extract<1392, 1407>();
  hw_uint<16> stg12_FIFO_buf84_lane_88 = stg12_FIFO_buf84.extract<1408, 1423>();
  hw_uint<16> stg12_FIFO_buf84_lane_89 = stg12_FIFO_buf84.extract<1424, 1439>();
  hw_uint<16> stg12_FIFO_buf84_lane_90 = stg12_FIFO_buf84.extract<1440, 1455>();
  hw_uint<16> stg12_FIFO_buf84_lane_91 = stg12_FIFO_buf84.extract<1456, 1471>();
  hw_uint<16> stg12_FIFO_buf84_lane_92 = stg12_FIFO_buf84.extract<1472, 1487>();
  hw_uint<16> stg12_FIFO_buf84_lane_93 = stg12_FIFO_buf84.extract<1488, 1503>();
  hw_uint<16> stg12_FIFO_buf84_lane_94 = stg12_FIFO_buf84.extract<1504, 1519>();
  hw_uint<16> stg12_FIFO_buf84_lane_95 = stg12_FIFO_buf84.extract<1520, 1535>();
  hw_uint<16> stg12_FIFO_buf84_lane_96 = stg12_FIFO_buf84.extract<1536, 1551>();
  hw_uint<16> stg12_FIFO_buf84_lane_97 = stg12_FIFO_buf84.extract<1552, 1567>();
  hw_uint<16> stg12_FIFO_buf84_lane_98 = stg12_FIFO_buf84.extract<1568, 1583>();
  hw_uint<16> stg12_FIFO_buf84_lane_99 = stg12_FIFO_buf84.extract<1584, 1599>();
  hw_uint<16> stg12_FIFO_buf84_lane_100 = stg12_FIFO_buf84.extract<1600, 1615>();
  hw_uint<16> stg12_FIFO_buf84_lane_101 = stg12_FIFO_buf84.extract<1616, 1631>();
  hw_uint<16> stg12_FIFO_buf84_lane_102 = stg12_FIFO_buf84.extract<1632, 1647>();
  hw_uint<16> stg12_FIFO_buf84_lane_103 = stg12_FIFO_buf84.extract<1648, 1663>();
  hw_uint<16> stg12_FIFO_buf84_lane_104 = stg12_FIFO_buf84.extract<1664, 1679>();
  hw_uint<16> stg12_FIFO_buf84_lane_105 = stg12_FIFO_buf84.extract<1680, 1695>();
  hw_uint<16> stg12_FIFO_buf84_lane_106 = stg12_FIFO_buf84.extract<1696, 1711>();
  hw_uint<16> stg12_FIFO_buf84_lane_107 = stg12_FIFO_buf84.extract<1712, 1727>();
  hw_uint<16> stg12_FIFO_buf84_lane_108 = stg12_FIFO_buf84.extract<1728, 1743>();
  hw_uint<16> stg12_FIFO_buf84_lane_109 = stg12_FIFO_buf84.extract<1744, 1759>();
  hw_uint<16> stg12_FIFO_buf84_lane_110 = stg12_FIFO_buf84.extract<1760, 1775>();
  hw_uint<16> stg12_FIFO_buf84_lane_111 = stg12_FIFO_buf84.extract<1776, 1791>();
  hw_uint<16> stg12_FIFO_buf84_lane_112 = stg12_FIFO_buf84.extract<1792, 1807>();
  hw_uint<16> stg12_FIFO_buf84_lane_113 = stg12_FIFO_buf84.extract<1808, 1823>();
  hw_uint<16> stg12_FIFO_buf84_lane_114 = stg12_FIFO_buf84.extract<1824, 1839>();
  hw_uint<16> stg12_FIFO_buf84_lane_115 = stg12_FIFO_buf84.extract<1840, 1855>();
  hw_uint<16> stg12_FIFO_buf84_lane_116 = stg12_FIFO_buf84.extract<1856, 1871>();
  hw_uint<16> stg12_FIFO_buf84_lane_117 = stg12_FIFO_buf84.extract<1872, 1887>();
  hw_uint<16> stg12_FIFO_buf84_lane_118 = stg12_FIFO_buf84.extract<1888, 1903>();
  hw_uint<16> stg12_FIFO_buf84_lane_119 = stg12_FIFO_buf84.extract<1904, 1919>();
  hw_uint<16> stg12_FIFO_buf84_lane_120 = stg12_FIFO_buf84.extract<1920, 1935>();
  hw_uint<16> stg12_FIFO_buf84_lane_121 = stg12_FIFO_buf84.extract<1936, 1951>();
  hw_uint<16> stg12_FIFO_buf84_lane_122 = stg12_FIFO_buf84.extract<1952, 1967>();
  hw_uint<16> stg12_FIFO_buf84_lane_123 = stg12_FIFO_buf84.extract<1968, 1983>();
  hw_uint<16> stg12_FIFO_buf84_lane_124 = stg12_FIFO_buf84.extract<1984, 1999>();
  hw_uint<16> stg12_FIFO_buf84_lane_125 = stg12_FIFO_buf84.extract<2000, 2015>();
  hw_uint<16> stg12_FIFO_buf84_lane_126 = stg12_FIFO_buf84.extract<2016, 2031>();
  hw_uint<16> stg12_FIFO_buf84_lane_127 = stg12_FIFO_buf84.extract<2032, 2047>();

	
  hw_uint<64 > stg12_FIFO_buf84_lane_3_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_0);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_1);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_2);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_3_pack, stg12_FIFO_buf84_lane_3);
  auto res_stg13_update_0_sm151_311711 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_3_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_7_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_4);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_5);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_6);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_7_pack, stg12_FIFO_buf84_lane_7);
  auto res_stg13_update_0_sm151_301709 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_7_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_11_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_8);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_9);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_10);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_11_pack, stg12_FIFO_buf84_lane_11);
  auto res_stg13_update_0_sm151_291707 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_11_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_15_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_12);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_13);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_14);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_15_pack, stg12_FIFO_buf84_lane_15);
  auto res_stg13_update_0_sm151_281705 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_15_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_19_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_16);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_17);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_18);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_19_pack, stg12_FIFO_buf84_lane_19);
  auto res_stg13_update_0_sm151_271703 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_19_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_23_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_20);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_21);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_22);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_23_pack, stg12_FIFO_buf84_lane_23);
  auto res_stg13_update_0_sm151_261701 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_23_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_27_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_24);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_25);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_26);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_27_pack, stg12_FIFO_buf84_lane_27);
  auto res_stg13_update_0_sm151_251699 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_27_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_31_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_28);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_29);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_30);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_31_pack, stg12_FIFO_buf84_lane_31);
  auto res_stg13_update_0_sm151_241697 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_31_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_35_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_32);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_33);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_34);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_35_pack, stg12_FIFO_buf84_lane_35);
  auto res_stg13_update_0_sm151_231695 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_35_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_39_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_36);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_37);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_38);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_39_pack, stg12_FIFO_buf84_lane_39);
  auto res_stg13_update_0_sm151_221693 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_39_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_43_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_40);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_41);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_42);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_43_pack, stg12_FIFO_buf84_lane_43);
  auto res_stg13_update_0_sm151_211691 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_43_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_47_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_44);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_45);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_46);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_47_pack, stg12_FIFO_buf84_lane_47);
  auto res_stg13_update_0_sm151_201689 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_47_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_51_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_48);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_49);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_50);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_51_pack, stg12_FIFO_buf84_lane_51);
  auto res_stg13_update_0_sm151_191687 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_51_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_55_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_52);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_53);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_54);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_55_pack, stg12_FIFO_buf84_lane_55);
  auto res_stg13_update_0_sm151_181685 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_55_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_59_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_56);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_57);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_58);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_59_pack, stg12_FIFO_buf84_lane_59);
  auto res_stg13_update_0_sm151_171683 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_59_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_63_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_60);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_61);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_62);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_63_pack, stg12_FIFO_buf84_lane_63);
  auto res_stg13_update_0_sm151_161681 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_63_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_67_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_67_pack, stg12_FIFO_buf84_lane_64);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_67_pack, stg12_FIFO_buf84_lane_65);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_67_pack, stg12_FIFO_buf84_lane_66);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_67_pack, stg12_FIFO_buf84_lane_67);
  auto res_stg13_update_0_sm151_151679 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_67_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_71_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_71_pack, stg12_FIFO_buf84_lane_68);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_71_pack, stg12_FIFO_buf84_lane_69);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_71_pack, stg12_FIFO_buf84_lane_70);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_71_pack, stg12_FIFO_buf84_lane_71);
  auto res_stg13_update_0_sm151_141677 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_71_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_75_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_75_pack, stg12_FIFO_buf84_lane_72);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_75_pack, stg12_FIFO_buf84_lane_73);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_75_pack, stg12_FIFO_buf84_lane_74);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_75_pack, stg12_FIFO_buf84_lane_75);
  auto res_stg13_update_0_sm151_131675 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_75_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_79_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_79_pack, stg12_FIFO_buf84_lane_76);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_79_pack, stg12_FIFO_buf84_lane_77);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_79_pack, stg12_FIFO_buf84_lane_78);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_79_pack, stg12_FIFO_buf84_lane_79);
  auto res_stg13_update_0_sm151_121673 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_79_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_83_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_83_pack, stg12_FIFO_buf84_lane_80);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_83_pack, stg12_FIFO_buf84_lane_81);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_83_pack, stg12_FIFO_buf84_lane_82);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_83_pack, stg12_FIFO_buf84_lane_83);
  auto res_stg13_update_0_sm151_111671 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_83_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_87_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_87_pack, stg12_FIFO_buf84_lane_84);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_87_pack, stg12_FIFO_buf84_lane_85);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_87_pack, stg12_FIFO_buf84_lane_86);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_87_pack, stg12_FIFO_buf84_lane_87);
  auto res_stg13_update_0_sm151_101669 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_87_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_91_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_91_pack, stg12_FIFO_buf84_lane_88);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_91_pack, stg12_FIFO_buf84_lane_89);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_91_pack, stg12_FIFO_buf84_lane_90);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_91_pack, stg12_FIFO_buf84_lane_91);
  auto res_stg13_update_0_sm151_91667 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_91_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_95_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_95_pack, stg12_FIFO_buf84_lane_92);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_95_pack, stg12_FIFO_buf84_lane_93);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_95_pack, stg12_FIFO_buf84_lane_94);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_95_pack, stg12_FIFO_buf84_lane_95);
  auto res_stg13_update_0_sm151_81665 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_95_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_99_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_99_pack, stg12_FIFO_buf84_lane_96);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_99_pack, stg12_FIFO_buf84_lane_97);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_99_pack, stg12_FIFO_buf84_lane_98);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_99_pack, stg12_FIFO_buf84_lane_99);
  auto res_stg13_update_0_sm151_71663 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_99_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_103_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_103_pack, stg12_FIFO_buf84_lane_100);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_103_pack, stg12_FIFO_buf84_lane_101);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_103_pack, stg12_FIFO_buf84_lane_102);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_103_pack, stg12_FIFO_buf84_lane_103);
  auto res_stg13_update_0_sm151_61661 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_103_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_107_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_107_pack, stg12_FIFO_buf84_lane_104);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_107_pack, stg12_FIFO_buf84_lane_105);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_107_pack, stg12_FIFO_buf84_lane_106);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_107_pack, stg12_FIFO_buf84_lane_107);
  auto res_stg13_update_0_sm151_51659 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_107_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_111_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_111_pack, stg12_FIFO_buf84_lane_108);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_111_pack, stg12_FIFO_buf84_lane_109);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_111_pack, stg12_FIFO_buf84_lane_110);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_111_pack, stg12_FIFO_buf84_lane_111);
  auto res_stg13_update_0_sm151_41657 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_111_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_115_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_115_pack, stg12_FIFO_buf84_lane_112);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_115_pack, stg12_FIFO_buf84_lane_113);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_115_pack, stg12_FIFO_buf84_lane_114);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_115_pack, stg12_FIFO_buf84_lane_115);
  auto res_stg13_update_0_sm151_31655 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_115_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_119_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_119_pack, stg12_FIFO_buf84_lane_116);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_119_pack, stg12_FIFO_buf84_lane_117);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_119_pack, stg12_FIFO_buf84_lane_118);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_119_pack, stg12_FIFO_buf84_lane_119);
  auto res_stg13_update_0_sm151_21653 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_119_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_123_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_123_pack, stg12_FIFO_buf84_lane_120);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_123_pack, stg12_FIFO_buf84_lane_121);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_123_pack, stg12_FIFO_buf84_lane_122);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_123_pack, stg12_FIFO_buf84_lane_123);
  auto res_stg13_update_0_sm151_11651 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_123_pack);

  hw_uint<64 > stg12_FIFO_buf84_lane_127_pack;
  set_at<0, 64, 16>(stg12_FIFO_buf84_lane_127_pack, stg12_FIFO_buf84_lane_124);
  set_at<16, 64, 16>(stg12_FIFO_buf84_lane_127_pack, stg12_FIFO_buf84_lane_125);
  set_at<32, 64, 16>(stg12_FIFO_buf84_lane_127_pack, stg12_FIFO_buf84_lane_126);
  set_at<48, 64, 16>(stg12_FIFO_buf84_lane_127_pack, stg12_FIFO_buf84_lane_127);
  auto res_stg13_update_0_sm151_01649 = stg13_generated_compute_unrolled_1(stg12_FIFO_buf84_lane_127_pack);
  hw_uint<512 > return_value3374;
  set_at<0, 512, 16>(return_value3374, res_stg13_update_0_sm151_311711);
  set_at<16, 512, 16>(return_value3374, res_stg13_update_0_sm151_301709);
  set_at<32, 512, 16>(return_value3374, res_stg13_update_0_sm151_291707);
  set_at<48, 512, 16>(return_value3374, res_stg13_update_0_sm151_281705);
  set_at<64, 512, 16>(return_value3374, res_stg13_update_0_sm151_271703);
  set_at<80, 512, 16>(return_value3374, res_stg13_update_0_sm151_261701);
  set_at<96, 512, 16>(return_value3374, res_stg13_update_0_sm151_251699);
  set_at<112, 512, 16>(return_value3374, res_stg13_update_0_sm151_241697);
  set_at<128, 512, 16>(return_value3374, res_stg13_update_0_sm151_231695);
  set_at<144, 512, 16>(return_value3374, res_stg13_update_0_sm151_221693);
  set_at<160, 512, 16>(return_value3374, res_stg13_update_0_sm151_211691);
  set_at<176, 512, 16>(return_value3374, res_stg13_update_0_sm151_201689);
  set_at<192, 512, 16>(return_value3374, res_stg13_update_0_sm151_191687);
  set_at<208, 512, 16>(return_value3374, res_stg13_update_0_sm151_181685);
  set_at<224, 512, 16>(return_value3374, res_stg13_update_0_sm151_171683);
  set_at<240, 512, 16>(return_value3374, res_stg13_update_0_sm151_161681);
  set_at<256, 512, 16>(return_value3374, res_stg13_update_0_sm151_151679);
  set_at<272, 512, 16>(return_value3374, res_stg13_update_0_sm151_141677);
  set_at<288, 512, 16>(return_value3374, res_stg13_update_0_sm151_131675);
  set_at<304, 512, 16>(return_value3374, res_stg13_update_0_sm151_121673);
  set_at<320, 512, 16>(return_value3374, res_stg13_update_0_sm151_111671);
  set_at<336, 512, 16>(return_value3374, res_stg13_update_0_sm151_101669);
  set_at<352, 512, 16>(return_value3374, res_stg13_update_0_sm151_91667);
  set_at<368, 512, 16>(return_value3374, res_stg13_update_0_sm151_81665);
  set_at<384, 512, 16>(return_value3374, res_stg13_update_0_sm151_71663);
  set_at<400, 512, 16>(return_value3374, res_stg13_update_0_sm151_61661);
  set_at<416, 512, 16>(return_value3374, res_stg13_update_0_sm151_51659);
  set_at<432, 512, 16>(return_value3374, res_stg13_update_0_sm151_41657);
  set_at<448, 512, 16>(return_value3374, res_stg13_update_0_sm151_31655);
  set_at<464, 512, 16>(return_value3374, res_stg13_update_0_sm151_21653);
  set_at<480, 512, 16>(return_value3374, res_stg13_update_0_sm151_11651);
  set_at<496, 512, 16>(return_value3374, res_stg13_update_0_sm151_01649);
  return return_value3374;

}

hw_uint<512> stg14_1_cu3376(hw_uint<16*128>& stg13_FIFO_buf88) {
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
  hw_uint<16> stg13_FIFO_buf88_lane_64 = stg13_FIFO_buf88.extract<1024, 1039>();
  hw_uint<16> stg13_FIFO_buf88_lane_65 = stg13_FIFO_buf88.extract<1040, 1055>();
  hw_uint<16> stg13_FIFO_buf88_lane_66 = stg13_FIFO_buf88.extract<1056, 1071>();
  hw_uint<16> stg13_FIFO_buf88_lane_67 = stg13_FIFO_buf88.extract<1072, 1087>();
  hw_uint<16> stg13_FIFO_buf88_lane_68 = stg13_FIFO_buf88.extract<1088, 1103>();
  hw_uint<16> stg13_FIFO_buf88_lane_69 = stg13_FIFO_buf88.extract<1104, 1119>();
  hw_uint<16> stg13_FIFO_buf88_lane_70 = stg13_FIFO_buf88.extract<1120, 1135>();
  hw_uint<16> stg13_FIFO_buf88_lane_71 = stg13_FIFO_buf88.extract<1136, 1151>();
  hw_uint<16> stg13_FIFO_buf88_lane_72 = stg13_FIFO_buf88.extract<1152, 1167>();
  hw_uint<16> stg13_FIFO_buf88_lane_73 = stg13_FIFO_buf88.extract<1168, 1183>();
  hw_uint<16> stg13_FIFO_buf88_lane_74 = stg13_FIFO_buf88.extract<1184, 1199>();
  hw_uint<16> stg13_FIFO_buf88_lane_75 = stg13_FIFO_buf88.extract<1200, 1215>();
  hw_uint<16> stg13_FIFO_buf88_lane_76 = stg13_FIFO_buf88.extract<1216, 1231>();
  hw_uint<16> stg13_FIFO_buf88_lane_77 = stg13_FIFO_buf88.extract<1232, 1247>();
  hw_uint<16> stg13_FIFO_buf88_lane_78 = stg13_FIFO_buf88.extract<1248, 1263>();
  hw_uint<16> stg13_FIFO_buf88_lane_79 = stg13_FIFO_buf88.extract<1264, 1279>();
  hw_uint<16> stg13_FIFO_buf88_lane_80 = stg13_FIFO_buf88.extract<1280, 1295>();
  hw_uint<16> stg13_FIFO_buf88_lane_81 = stg13_FIFO_buf88.extract<1296, 1311>();
  hw_uint<16> stg13_FIFO_buf88_lane_82 = stg13_FIFO_buf88.extract<1312, 1327>();
  hw_uint<16> stg13_FIFO_buf88_lane_83 = stg13_FIFO_buf88.extract<1328, 1343>();
  hw_uint<16> stg13_FIFO_buf88_lane_84 = stg13_FIFO_buf88.extract<1344, 1359>();
  hw_uint<16> stg13_FIFO_buf88_lane_85 = stg13_FIFO_buf88.extract<1360, 1375>();
  hw_uint<16> stg13_FIFO_buf88_lane_86 = stg13_FIFO_buf88.extract<1376, 1391>();
  hw_uint<16> stg13_FIFO_buf88_lane_87 = stg13_FIFO_buf88.extract<1392, 1407>();
  hw_uint<16> stg13_FIFO_buf88_lane_88 = stg13_FIFO_buf88.extract<1408, 1423>();
  hw_uint<16> stg13_FIFO_buf88_lane_89 = stg13_FIFO_buf88.extract<1424, 1439>();
  hw_uint<16> stg13_FIFO_buf88_lane_90 = stg13_FIFO_buf88.extract<1440, 1455>();
  hw_uint<16> stg13_FIFO_buf88_lane_91 = stg13_FIFO_buf88.extract<1456, 1471>();
  hw_uint<16> stg13_FIFO_buf88_lane_92 = stg13_FIFO_buf88.extract<1472, 1487>();
  hw_uint<16> stg13_FIFO_buf88_lane_93 = stg13_FIFO_buf88.extract<1488, 1503>();
  hw_uint<16> stg13_FIFO_buf88_lane_94 = stg13_FIFO_buf88.extract<1504, 1519>();
  hw_uint<16> stg13_FIFO_buf88_lane_95 = stg13_FIFO_buf88.extract<1520, 1535>();
  hw_uint<16> stg13_FIFO_buf88_lane_96 = stg13_FIFO_buf88.extract<1536, 1551>();
  hw_uint<16> stg13_FIFO_buf88_lane_97 = stg13_FIFO_buf88.extract<1552, 1567>();
  hw_uint<16> stg13_FIFO_buf88_lane_98 = stg13_FIFO_buf88.extract<1568, 1583>();
  hw_uint<16> stg13_FIFO_buf88_lane_99 = stg13_FIFO_buf88.extract<1584, 1599>();
  hw_uint<16> stg13_FIFO_buf88_lane_100 = stg13_FIFO_buf88.extract<1600, 1615>();
  hw_uint<16> stg13_FIFO_buf88_lane_101 = stg13_FIFO_buf88.extract<1616, 1631>();
  hw_uint<16> stg13_FIFO_buf88_lane_102 = stg13_FIFO_buf88.extract<1632, 1647>();
  hw_uint<16> stg13_FIFO_buf88_lane_103 = stg13_FIFO_buf88.extract<1648, 1663>();
  hw_uint<16> stg13_FIFO_buf88_lane_104 = stg13_FIFO_buf88.extract<1664, 1679>();
  hw_uint<16> stg13_FIFO_buf88_lane_105 = stg13_FIFO_buf88.extract<1680, 1695>();
  hw_uint<16> stg13_FIFO_buf88_lane_106 = stg13_FIFO_buf88.extract<1696, 1711>();
  hw_uint<16> stg13_FIFO_buf88_lane_107 = stg13_FIFO_buf88.extract<1712, 1727>();
  hw_uint<16> stg13_FIFO_buf88_lane_108 = stg13_FIFO_buf88.extract<1728, 1743>();
  hw_uint<16> stg13_FIFO_buf88_lane_109 = stg13_FIFO_buf88.extract<1744, 1759>();
  hw_uint<16> stg13_FIFO_buf88_lane_110 = stg13_FIFO_buf88.extract<1760, 1775>();
  hw_uint<16> stg13_FIFO_buf88_lane_111 = stg13_FIFO_buf88.extract<1776, 1791>();
  hw_uint<16> stg13_FIFO_buf88_lane_112 = stg13_FIFO_buf88.extract<1792, 1807>();
  hw_uint<16> stg13_FIFO_buf88_lane_113 = stg13_FIFO_buf88.extract<1808, 1823>();
  hw_uint<16> stg13_FIFO_buf88_lane_114 = stg13_FIFO_buf88.extract<1824, 1839>();
  hw_uint<16> stg13_FIFO_buf88_lane_115 = stg13_FIFO_buf88.extract<1840, 1855>();
  hw_uint<16> stg13_FIFO_buf88_lane_116 = stg13_FIFO_buf88.extract<1856, 1871>();
  hw_uint<16> stg13_FIFO_buf88_lane_117 = stg13_FIFO_buf88.extract<1872, 1887>();
  hw_uint<16> stg13_FIFO_buf88_lane_118 = stg13_FIFO_buf88.extract<1888, 1903>();
  hw_uint<16> stg13_FIFO_buf88_lane_119 = stg13_FIFO_buf88.extract<1904, 1919>();
  hw_uint<16> stg13_FIFO_buf88_lane_120 = stg13_FIFO_buf88.extract<1920, 1935>();
  hw_uint<16> stg13_FIFO_buf88_lane_121 = stg13_FIFO_buf88.extract<1936, 1951>();
  hw_uint<16> stg13_FIFO_buf88_lane_122 = stg13_FIFO_buf88.extract<1952, 1967>();
  hw_uint<16> stg13_FIFO_buf88_lane_123 = stg13_FIFO_buf88.extract<1968, 1983>();
  hw_uint<16> stg13_FIFO_buf88_lane_124 = stg13_FIFO_buf88.extract<1984, 1999>();
  hw_uint<16> stg13_FIFO_buf88_lane_125 = stg13_FIFO_buf88.extract<2000, 2015>();
  hw_uint<16> stg13_FIFO_buf88_lane_126 = stg13_FIFO_buf88.extract<2016, 2031>();
  hw_uint<16> stg13_FIFO_buf88_lane_127 = stg13_FIFO_buf88.extract<2032, 2047>();

	
  hw_uint<64 > stg13_FIFO_buf88_lane_3_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_0);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_1);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_2);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_3_pack, stg13_FIFO_buf88_lane_3);
  auto res_stg14_update_0_sm152_311775 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_3_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_7_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_4);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_5);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_6);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_7_pack, stg13_FIFO_buf88_lane_7);
  auto res_stg14_update_0_sm152_301773 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_7_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_11_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_8);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_9);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_10);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_11_pack, stg13_FIFO_buf88_lane_11);
  auto res_stg14_update_0_sm152_291771 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_11_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_15_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_12);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_13);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_14);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_15_pack, stg13_FIFO_buf88_lane_15);
  auto res_stg14_update_0_sm152_281769 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_15_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_19_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_16);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_17);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_18);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_19_pack, stg13_FIFO_buf88_lane_19);
  auto res_stg14_update_0_sm152_271767 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_19_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_23_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_20);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_21);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_22);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_23_pack, stg13_FIFO_buf88_lane_23);
  auto res_stg14_update_0_sm152_261765 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_23_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_27_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_24);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_25);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_26);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_27_pack, stg13_FIFO_buf88_lane_27);
  auto res_stg14_update_0_sm152_251763 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_27_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_31_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_28);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_29);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_30);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_31_pack, stg13_FIFO_buf88_lane_31);
  auto res_stg14_update_0_sm152_241761 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_31_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_35_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_32);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_33);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_34);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_35_pack, stg13_FIFO_buf88_lane_35);
  auto res_stg14_update_0_sm152_231759 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_35_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_39_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_36);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_37);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_38);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_39_pack, stg13_FIFO_buf88_lane_39);
  auto res_stg14_update_0_sm152_221757 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_39_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_43_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_40);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_41);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_42);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_43_pack, stg13_FIFO_buf88_lane_43);
  auto res_stg14_update_0_sm152_211755 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_43_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_47_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_44);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_45);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_46);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_47_pack, stg13_FIFO_buf88_lane_47);
  auto res_stg14_update_0_sm152_201753 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_47_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_51_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_48);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_49);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_50);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_51_pack, stg13_FIFO_buf88_lane_51);
  auto res_stg14_update_0_sm152_191751 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_51_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_55_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_52);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_53);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_54);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_55_pack, stg13_FIFO_buf88_lane_55);
  auto res_stg14_update_0_sm152_181749 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_55_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_59_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_56);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_57);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_58);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_59_pack, stg13_FIFO_buf88_lane_59);
  auto res_stg14_update_0_sm152_171747 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_59_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_63_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_60);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_61);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_62);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_63_pack, stg13_FIFO_buf88_lane_63);
  auto res_stg14_update_0_sm152_161745 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_63_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_67_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_67_pack, stg13_FIFO_buf88_lane_64);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_67_pack, stg13_FIFO_buf88_lane_65);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_67_pack, stg13_FIFO_buf88_lane_66);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_67_pack, stg13_FIFO_buf88_lane_67);
  auto res_stg14_update_0_sm152_151743 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_67_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_71_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_71_pack, stg13_FIFO_buf88_lane_68);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_71_pack, stg13_FIFO_buf88_lane_69);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_71_pack, stg13_FIFO_buf88_lane_70);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_71_pack, stg13_FIFO_buf88_lane_71);
  auto res_stg14_update_0_sm152_141741 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_71_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_75_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_75_pack, stg13_FIFO_buf88_lane_72);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_75_pack, stg13_FIFO_buf88_lane_73);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_75_pack, stg13_FIFO_buf88_lane_74);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_75_pack, stg13_FIFO_buf88_lane_75);
  auto res_stg14_update_0_sm152_131739 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_75_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_79_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_79_pack, stg13_FIFO_buf88_lane_76);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_79_pack, stg13_FIFO_buf88_lane_77);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_79_pack, stg13_FIFO_buf88_lane_78);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_79_pack, stg13_FIFO_buf88_lane_79);
  auto res_stg14_update_0_sm152_121737 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_79_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_83_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_83_pack, stg13_FIFO_buf88_lane_80);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_83_pack, stg13_FIFO_buf88_lane_81);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_83_pack, stg13_FIFO_buf88_lane_82);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_83_pack, stg13_FIFO_buf88_lane_83);
  auto res_stg14_update_0_sm152_111735 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_83_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_87_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_87_pack, stg13_FIFO_buf88_lane_84);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_87_pack, stg13_FIFO_buf88_lane_85);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_87_pack, stg13_FIFO_buf88_lane_86);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_87_pack, stg13_FIFO_buf88_lane_87);
  auto res_stg14_update_0_sm152_101733 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_87_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_91_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_91_pack, stg13_FIFO_buf88_lane_88);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_91_pack, stg13_FIFO_buf88_lane_89);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_91_pack, stg13_FIFO_buf88_lane_90);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_91_pack, stg13_FIFO_buf88_lane_91);
  auto res_stg14_update_0_sm152_91731 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_91_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_95_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_95_pack, stg13_FIFO_buf88_lane_92);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_95_pack, stg13_FIFO_buf88_lane_93);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_95_pack, stg13_FIFO_buf88_lane_94);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_95_pack, stg13_FIFO_buf88_lane_95);
  auto res_stg14_update_0_sm152_81729 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_95_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_99_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_99_pack, stg13_FIFO_buf88_lane_96);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_99_pack, stg13_FIFO_buf88_lane_97);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_99_pack, stg13_FIFO_buf88_lane_98);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_99_pack, stg13_FIFO_buf88_lane_99);
  auto res_stg14_update_0_sm152_71727 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_99_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_103_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_103_pack, stg13_FIFO_buf88_lane_100);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_103_pack, stg13_FIFO_buf88_lane_101);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_103_pack, stg13_FIFO_buf88_lane_102);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_103_pack, stg13_FIFO_buf88_lane_103);
  auto res_stg14_update_0_sm152_61725 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_103_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_107_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_107_pack, stg13_FIFO_buf88_lane_104);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_107_pack, stg13_FIFO_buf88_lane_105);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_107_pack, stg13_FIFO_buf88_lane_106);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_107_pack, stg13_FIFO_buf88_lane_107);
  auto res_stg14_update_0_sm152_51723 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_107_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_111_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_111_pack, stg13_FIFO_buf88_lane_108);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_111_pack, stg13_FIFO_buf88_lane_109);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_111_pack, stg13_FIFO_buf88_lane_110);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_111_pack, stg13_FIFO_buf88_lane_111);
  auto res_stg14_update_0_sm152_41721 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_111_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_115_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_115_pack, stg13_FIFO_buf88_lane_112);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_115_pack, stg13_FIFO_buf88_lane_113);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_115_pack, stg13_FIFO_buf88_lane_114);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_115_pack, stg13_FIFO_buf88_lane_115);
  auto res_stg14_update_0_sm152_31719 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_115_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_119_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_119_pack, stg13_FIFO_buf88_lane_116);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_119_pack, stg13_FIFO_buf88_lane_117);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_119_pack, stg13_FIFO_buf88_lane_118);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_119_pack, stg13_FIFO_buf88_lane_119);
  auto res_stg14_update_0_sm152_21717 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_119_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_123_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_123_pack, stg13_FIFO_buf88_lane_120);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_123_pack, stg13_FIFO_buf88_lane_121);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_123_pack, stg13_FIFO_buf88_lane_122);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_123_pack, stg13_FIFO_buf88_lane_123);
  auto res_stg14_update_0_sm152_11715 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_123_pack);

  hw_uint<64 > stg13_FIFO_buf88_lane_127_pack;
  set_at<0, 64, 16>(stg13_FIFO_buf88_lane_127_pack, stg13_FIFO_buf88_lane_124);
  set_at<16, 64, 16>(stg13_FIFO_buf88_lane_127_pack, stg13_FIFO_buf88_lane_125);
  set_at<32, 64, 16>(stg13_FIFO_buf88_lane_127_pack, stg13_FIFO_buf88_lane_126);
  set_at<48, 64, 16>(stg13_FIFO_buf88_lane_127_pack, stg13_FIFO_buf88_lane_127);
  auto res_stg14_update_0_sm152_01713 = stg14_generated_compute_unrolled_1(stg13_FIFO_buf88_lane_127_pack);
  hw_uint<512 > return_value3377;
  set_at<0, 512, 16>(return_value3377, res_stg14_update_0_sm152_311775);
  set_at<16, 512, 16>(return_value3377, res_stg14_update_0_sm152_301773);
  set_at<32, 512, 16>(return_value3377, res_stg14_update_0_sm152_291771);
  set_at<48, 512, 16>(return_value3377, res_stg14_update_0_sm152_281769);
  set_at<64, 512, 16>(return_value3377, res_stg14_update_0_sm152_271767);
  set_at<80, 512, 16>(return_value3377, res_stg14_update_0_sm152_261765);
  set_at<96, 512, 16>(return_value3377, res_stg14_update_0_sm152_251763);
  set_at<112, 512, 16>(return_value3377, res_stg14_update_0_sm152_241761);
  set_at<128, 512, 16>(return_value3377, res_stg14_update_0_sm152_231759);
  set_at<144, 512, 16>(return_value3377, res_stg14_update_0_sm152_221757);
  set_at<160, 512, 16>(return_value3377, res_stg14_update_0_sm152_211755);
  set_at<176, 512, 16>(return_value3377, res_stg14_update_0_sm152_201753);
  set_at<192, 512, 16>(return_value3377, res_stg14_update_0_sm152_191751);
  set_at<208, 512, 16>(return_value3377, res_stg14_update_0_sm152_181749);
  set_at<224, 512, 16>(return_value3377, res_stg14_update_0_sm152_171747);
  set_at<240, 512, 16>(return_value3377, res_stg14_update_0_sm152_161745);
  set_at<256, 512, 16>(return_value3377, res_stg14_update_0_sm152_151743);
  set_at<272, 512, 16>(return_value3377, res_stg14_update_0_sm152_141741);
  set_at<288, 512, 16>(return_value3377, res_stg14_update_0_sm152_131739);
  set_at<304, 512, 16>(return_value3377, res_stg14_update_0_sm152_121737);
  set_at<320, 512, 16>(return_value3377, res_stg14_update_0_sm152_111735);
  set_at<336, 512, 16>(return_value3377, res_stg14_update_0_sm152_101733);
  set_at<352, 512, 16>(return_value3377, res_stg14_update_0_sm152_91731);
  set_at<368, 512, 16>(return_value3377, res_stg14_update_0_sm152_81729);
  set_at<384, 512, 16>(return_value3377, res_stg14_update_0_sm152_71727);
  set_at<400, 512, 16>(return_value3377, res_stg14_update_0_sm152_61725);
  set_at<416, 512, 16>(return_value3377, res_stg14_update_0_sm152_51723);
  set_at<432, 512, 16>(return_value3377, res_stg14_update_0_sm152_41721);
  set_at<448, 512, 16>(return_value3377, res_stg14_update_0_sm152_31719);
  set_at<464, 512, 16>(return_value3377, res_stg14_update_0_sm152_21717);
  set_at<480, 512, 16>(return_value3377, res_stg14_update_0_sm152_11715);
  set_at<496, 512, 16>(return_value3377, res_stg14_update_0_sm152_01713);
  return return_value3377;

}

hw_uint<512> jac_d_32_1_cu3379(hw_uint<16*32>& stg14_FIFO_buf92) {
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
  hw_uint<16> stg14_FIFO_buf92_lane_16 = stg14_FIFO_buf92.extract<256, 271>();
  hw_uint<16> stg14_FIFO_buf92_lane_17 = stg14_FIFO_buf92.extract<272, 287>();
  hw_uint<16> stg14_FIFO_buf92_lane_18 = stg14_FIFO_buf92.extract<288, 303>();
  hw_uint<16> stg14_FIFO_buf92_lane_19 = stg14_FIFO_buf92.extract<304, 319>();
  hw_uint<16> stg14_FIFO_buf92_lane_20 = stg14_FIFO_buf92.extract<320, 335>();
  hw_uint<16> stg14_FIFO_buf92_lane_21 = stg14_FIFO_buf92.extract<336, 351>();
  hw_uint<16> stg14_FIFO_buf92_lane_22 = stg14_FIFO_buf92.extract<352, 367>();
  hw_uint<16> stg14_FIFO_buf92_lane_23 = stg14_FIFO_buf92.extract<368, 383>();
  hw_uint<16> stg14_FIFO_buf92_lane_24 = stg14_FIFO_buf92.extract<384, 399>();
  hw_uint<16> stg14_FIFO_buf92_lane_25 = stg14_FIFO_buf92.extract<400, 415>();
  hw_uint<16> stg14_FIFO_buf92_lane_26 = stg14_FIFO_buf92.extract<416, 431>();
  hw_uint<16> stg14_FIFO_buf92_lane_27 = stg14_FIFO_buf92.extract<432, 447>();
  hw_uint<16> stg14_FIFO_buf92_lane_28 = stg14_FIFO_buf92.extract<448, 463>();
  hw_uint<16> stg14_FIFO_buf92_lane_29 = stg14_FIFO_buf92.extract<464, 479>();
  hw_uint<16> stg14_FIFO_buf92_lane_30 = stg14_FIFO_buf92.extract<480, 495>();
  hw_uint<16> stg14_FIFO_buf92_lane_31 = stg14_FIFO_buf92.extract<496, 511>();

	
  hw_uint<16 > stg14_FIFO_buf92_lane_0_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_0_pack, stg14_FIFO_buf92_lane_0);
  auto res_jac_d_32_update_0_sm153_311839 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_0_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_1_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_1_pack, stg14_FIFO_buf92_lane_1);
  auto res_jac_d_32_update_0_sm153_301837 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_1_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_2_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_2_pack, stg14_FIFO_buf92_lane_2);
  auto res_jac_d_32_update_0_sm153_291835 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_2_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_3_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_3_pack, stg14_FIFO_buf92_lane_3);
  auto res_jac_d_32_update_0_sm153_281833 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_3_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_4_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_4_pack, stg14_FIFO_buf92_lane_4);
  auto res_jac_d_32_update_0_sm153_271831 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_4_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_5_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_5_pack, stg14_FIFO_buf92_lane_5);
  auto res_jac_d_32_update_0_sm153_261829 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_5_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_6_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_6_pack, stg14_FIFO_buf92_lane_6);
  auto res_jac_d_32_update_0_sm153_251827 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_6_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_7_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_7_pack, stg14_FIFO_buf92_lane_7);
  auto res_jac_d_32_update_0_sm153_241825 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_7_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_8_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_8_pack, stg14_FIFO_buf92_lane_8);
  auto res_jac_d_32_update_0_sm153_231823 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_8_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_9_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_9_pack, stg14_FIFO_buf92_lane_9);
  auto res_jac_d_32_update_0_sm153_221821 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_9_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_10_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_10_pack, stg14_FIFO_buf92_lane_10);
  auto res_jac_d_32_update_0_sm153_211819 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_10_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_11_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_11_pack, stg14_FIFO_buf92_lane_11);
  auto res_jac_d_32_update_0_sm153_201817 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_11_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_12_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_12_pack, stg14_FIFO_buf92_lane_12);
  auto res_jac_d_32_update_0_sm153_191815 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_12_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_13_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_13_pack, stg14_FIFO_buf92_lane_13);
  auto res_jac_d_32_update_0_sm153_181813 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_13_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_14_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_14_pack, stg14_FIFO_buf92_lane_14);
  auto res_jac_d_32_update_0_sm153_171811 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_14_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_15_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_15_pack, stg14_FIFO_buf92_lane_15);
  auto res_jac_d_32_update_0_sm153_161809 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_15_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_16_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_16_pack, stg14_FIFO_buf92_lane_16);
  auto res_jac_d_32_update_0_sm153_151807 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_16_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_17_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_17_pack, stg14_FIFO_buf92_lane_17);
  auto res_jac_d_32_update_0_sm153_141805 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_17_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_18_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_18_pack, stg14_FIFO_buf92_lane_18);
  auto res_jac_d_32_update_0_sm153_131803 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_18_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_19_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_19_pack, stg14_FIFO_buf92_lane_19);
  auto res_jac_d_32_update_0_sm153_121801 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_19_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_20_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_20_pack, stg14_FIFO_buf92_lane_20);
  auto res_jac_d_32_update_0_sm153_111799 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_20_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_21_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_21_pack, stg14_FIFO_buf92_lane_21);
  auto res_jac_d_32_update_0_sm153_101797 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_21_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_22_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_22_pack, stg14_FIFO_buf92_lane_22);
  auto res_jac_d_32_update_0_sm153_91795 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_22_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_23_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_23_pack, stg14_FIFO_buf92_lane_23);
  auto res_jac_d_32_update_0_sm153_81793 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_23_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_24_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_24_pack, stg14_FIFO_buf92_lane_24);
  auto res_jac_d_32_update_0_sm153_71791 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_24_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_25_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_25_pack, stg14_FIFO_buf92_lane_25);
  auto res_jac_d_32_update_0_sm153_61789 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_25_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_26_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_26_pack, stg14_FIFO_buf92_lane_26);
  auto res_jac_d_32_update_0_sm153_51787 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_26_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_27_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_27_pack, stg14_FIFO_buf92_lane_27);
  auto res_jac_d_32_update_0_sm153_41785 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_27_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_28_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_28_pack, stg14_FIFO_buf92_lane_28);
  auto res_jac_d_32_update_0_sm153_31783 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_28_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_29_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_29_pack, stg14_FIFO_buf92_lane_29);
  auto res_jac_d_32_update_0_sm153_21781 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_29_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_30_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_30_pack, stg14_FIFO_buf92_lane_30);
  auto res_jac_d_32_update_0_sm153_11779 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_30_pack);

  hw_uint<16 > stg14_FIFO_buf92_lane_31_pack;
  set_at<0, 16, 16>(stg14_FIFO_buf92_lane_31_pack, stg14_FIFO_buf92_lane_31);
  auto res_jac_d_32_update_0_sm153_01777 = jac_d_32_generated_compute_unrolled_1(stg14_FIFO_buf92_lane_31_pack);
  hw_uint<512 > return_value3380;
  set_at<0, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_311839);
  set_at<16, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_301837);
  set_at<32, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_291835);
  set_at<48, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_281833);
  set_at<64, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_271831);
  set_at<80, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_261829);
  set_at<96, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_251827);
  set_at<112, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_241825);
  set_at<128, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_231823);
  set_at<144, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_221821);
  set_at<160, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_211819);
  set_at<176, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_201817);
  set_at<192, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_191815);
  set_at<208, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_181813);
  set_at<224, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_171811);
  set_at<240, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_161809);
  set_at<256, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_151807);
  set_at<272, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_141805);
  set_at<288, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_131803);
  set_at<304, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_121801);
  set_at<320, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_111799);
  set_at<336, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_101797);
  set_at<352, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_91795);
  set_at<368, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_81793);
  set_at<384, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_71791);
  set_at<400, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_61789);
  set_at<416, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_51787);
  set_at<432, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_41785);
  set_at<448, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_31783);
  set_at<464, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_21781);
  set_at<480, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_11779);
  set_at<496, 512, 16>(return_value3380, res_jac_d_32_update_0_sm153_01777);
  return return_value3380;

}

hw_uint<512> stg3_to_gp_1136_ld101_cu3382(hw_uint<16*32>& stg3_to_gp_1136) {
  return stg3_to_gp_1136;
}

hw_uint<512> stg1_to_gp_98_ld73_cu3384(hw_uint<16*32>& stg1_to_gp_98) {
  return stg1_to_gp_98;
}

hw_uint<512> stg1_ld9_cu3386(hw_uint<16*32>& stg1) {
  return stg1;
}

hw_uint<512> stg13_ld25_cu3388(hw_uint<16*32>& stg13) {
  return stg13;
}

hw_uint<512> stg2_ld33_cu3390(hw_uint<16*32>& stg2) {
  return stg2;
}

hw_uint<512> stg3_ld37_cu3392(hw_uint<16*32>& stg3) {
  return stg3;
}

hw_uint<512> stg4_ld41_cu3394(hw_uint<16*32>& stg4) {
  return stg4;
}

hw_uint<512> stg8_ld57_cu3396(hw_uint<16*32>& stg8) {
  return stg8;
}

hw_uint<512> stg9_ld61_cu3398(hw_uint<16*32>& stg9) {
  return stg9;
}

hw_uint<512> stg12_to_gp_620_ld85_cu3400(hw_uint<16*32>& stg12_to_gp_620) {
  return stg12_to_gp_620;
}

hw_uint<512> stg13_to_gp_724_ld89_cu3402(hw_uint<16*32>& stg13_to_gp_724) {
  return stg13_to_gp_724;
}

hw_uint<512> stg2_to_gp_1032_ld97_cu3404(hw_uint<16*32>& stg2_to_gp_1032) {
  return stg2_to_gp_1032;
}

hw_uint<512> stg4_to_gp_1240_ld105_cu3406(hw_uint<16*32>& stg4_to_gp_1240) {
  return stg4_to_gp_1240;
}

hw_uint<512> stg0_ld5_cu3408(hw_uint<16*32>& stg0) {
  return stg0;
}

hw_uint<512> stg6_ld49_cu3410(hw_uint<16*32>& stg6) {
  return stg6;
}

hw_uint<512> stg7_ld53_cu3412(hw_uint<16*32>& stg7) {
  return stg7;
}

hw_uint<512> stg10_to_gp_412_ld77_cu3414(hw_uint<16*32>& stg10_to_gp_412) {
  return stg10_to_gp_412;
}

hw_uint<512> stg11_to_gp_516_ld81_cu3416(hw_uint<16*32>& stg11_to_gp_516) {
  return stg11_to_gp_516;
}

hw_uint<512> stg9_to_gp_360_ld125_cu3418(hw_uint<16*32>& stg9_to_gp_360) {
  return stg9_to_gp_360;
}

hw_uint<512> stg5_to_gp_1344_ld109_cu3420(hw_uint<16*32>& stg5_to_gp_1344) {
  return stg5_to_gp_1344;
}

hw_uint<512> stg6_to_gp_1448_ld113_cu3422(hw_uint<16*32>& stg6_to_gp_1448) {
  return stg6_to_gp_1448;
}

hw_uint<512> stg7_to_gp_1552_ld117_cu3424(hw_uint<16*32>& stg7_to_gp_1552) {
  return stg7_to_gp_1552;
}

hw_uint<512> stg8_to_gp_1656_ld121_cu3426(hw_uint<16*32>& stg8_to_gp_1656) {
  return stg8_to_gp_1656;
}

