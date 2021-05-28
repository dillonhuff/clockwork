#include "blurx7_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> blurx7_16_1_cu140(hw_uint<16*48>& input_FIFO_buf4) {
  hw_uint<16> input_FIFO_buf4_lane_0 = input_FIFO_buf4.extract<0, 15>();
  hw_uint<16> input_FIFO_buf4_lane_1 = input_FIFO_buf4.extract<16, 31>();
  hw_uint<16> input_FIFO_buf4_lane_2 = input_FIFO_buf4.extract<32, 47>();
  hw_uint<16> input_FIFO_buf4_lane_3 = input_FIFO_buf4.extract<48, 63>();
  hw_uint<16> input_FIFO_buf4_lane_4 = input_FIFO_buf4.extract<64, 79>();
  hw_uint<16> input_FIFO_buf4_lane_5 = input_FIFO_buf4.extract<80, 95>();
  hw_uint<16> input_FIFO_buf4_lane_6 = input_FIFO_buf4.extract<96, 111>();
  hw_uint<16> input_FIFO_buf4_lane_7 = input_FIFO_buf4.extract<112, 127>();
  hw_uint<16> input_FIFO_buf4_lane_8 = input_FIFO_buf4.extract<128, 143>();
  hw_uint<16> input_FIFO_buf4_lane_9 = input_FIFO_buf4.extract<144, 159>();
  hw_uint<16> input_FIFO_buf4_lane_10 = input_FIFO_buf4.extract<160, 175>();
  hw_uint<16> input_FIFO_buf4_lane_11 = input_FIFO_buf4.extract<176, 191>();
  hw_uint<16> input_FIFO_buf4_lane_12 = input_FIFO_buf4.extract<192, 207>();
  hw_uint<16> input_FIFO_buf4_lane_13 = input_FIFO_buf4.extract<208, 223>();
  hw_uint<16> input_FIFO_buf4_lane_14 = input_FIFO_buf4.extract<224, 239>();
  hw_uint<16> input_FIFO_buf4_lane_15 = input_FIFO_buf4.extract<240, 255>();
  hw_uint<16> input_FIFO_buf4_lane_16 = input_FIFO_buf4.extract<256, 271>();
  hw_uint<16> input_FIFO_buf4_lane_17 = input_FIFO_buf4.extract<272, 287>();
  hw_uint<16> input_FIFO_buf4_lane_18 = input_FIFO_buf4.extract<288, 303>();
  hw_uint<16> input_FIFO_buf4_lane_19 = input_FIFO_buf4.extract<304, 319>();
  hw_uint<16> input_FIFO_buf4_lane_20 = input_FIFO_buf4.extract<320, 335>();
  hw_uint<16> input_FIFO_buf4_lane_21 = input_FIFO_buf4.extract<336, 351>();
  hw_uint<16> input_FIFO_buf4_lane_22 = input_FIFO_buf4.extract<352, 367>();
  hw_uint<16> input_FIFO_buf4_lane_23 = input_FIFO_buf4.extract<368, 383>();
  hw_uint<16> input_FIFO_buf4_lane_24 = input_FIFO_buf4.extract<384, 399>();
  hw_uint<16> input_FIFO_buf4_lane_25 = input_FIFO_buf4.extract<400, 415>();
  hw_uint<16> input_FIFO_buf4_lane_26 = input_FIFO_buf4.extract<416, 431>();
  hw_uint<16> input_FIFO_buf4_lane_27 = input_FIFO_buf4.extract<432, 447>();
  hw_uint<16> input_FIFO_buf4_lane_28 = input_FIFO_buf4.extract<448, 463>();
  hw_uint<16> input_FIFO_buf4_lane_29 = input_FIFO_buf4.extract<464, 479>();
  hw_uint<16> input_FIFO_buf4_lane_30 = input_FIFO_buf4.extract<480, 495>();
  hw_uint<16> input_FIFO_buf4_lane_31 = input_FIFO_buf4.extract<496, 511>();
  hw_uint<16> input_FIFO_buf4_lane_32 = input_FIFO_buf4.extract<512, 527>();
  hw_uint<16> input_FIFO_buf4_lane_33 = input_FIFO_buf4.extract<528, 543>();
  hw_uint<16> input_FIFO_buf4_lane_34 = input_FIFO_buf4.extract<544, 559>();
  hw_uint<16> input_FIFO_buf4_lane_35 = input_FIFO_buf4.extract<560, 575>();
  hw_uint<16> input_FIFO_buf4_lane_36 = input_FIFO_buf4.extract<576, 591>();
  hw_uint<16> input_FIFO_buf4_lane_37 = input_FIFO_buf4.extract<592, 607>();
  hw_uint<16> input_FIFO_buf4_lane_38 = input_FIFO_buf4.extract<608, 623>();
  hw_uint<16> input_FIFO_buf4_lane_39 = input_FIFO_buf4.extract<624, 639>();
  hw_uint<16> input_FIFO_buf4_lane_40 = input_FIFO_buf4.extract<640, 655>();
  hw_uint<16> input_FIFO_buf4_lane_41 = input_FIFO_buf4.extract<656, 671>();
  hw_uint<16> input_FIFO_buf4_lane_42 = input_FIFO_buf4.extract<672, 687>();
  hw_uint<16> input_FIFO_buf4_lane_43 = input_FIFO_buf4.extract<688, 703>();
  hw_uint<16> input_FIFO_buf4_lane_44 = input_FIFO_buf4.extract<704, 719>();
  hw_uint<16> input_FIFO_buf4_lane_45 = input_FIFO_buf4.extract<720, 735>();
  hw_uint<16> input_FIFO_buf4_lane_46 = input_FIFO_buf4.extract<736, 751>();
  hw_uint<16> input_FIFO_buf4_lane_47 = input_FIFO_buf4.extract<752, 767>();

	
  hw_uint<48 > input_FIFO_buf4_lane_2_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_2_pack, input_FIFO_buf4_lane_0);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_2_pack, input_FIFO_buf4_lane_1);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_2_pack, input_FIFO_buf4_lane_2);
  auto res_blurx7_16_update_0_sm8_012 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_2_pack);

  hw_uint<48 > input_FIFO_buf4_lane_5_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_5_pack, input_FIFO_buf4_lane_3);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_5_pack, input_FIFO_buf4_lane_4);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_5_pack, input_FIFO_buf4_lane_5);
  auto res_blurx7_16_update_0_sm8_114 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_5_pack);

  hw_uint<48 > input_FIFO_buf4_lane_8_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_8_pack, input_FIFO_buf4_lane_6);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_8_pack, input_FIFO_buf4_lane_7);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_8_pack, input_FIFO_buf4_lane_8);
  auto res_blurx7_16_update_0_sm8_216 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_8_pack);

  hw_uint<48 > input_FIFO_buf4_lane_11_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_11_pack, input_FIFO_buf4_lane_9);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_11_pack, input_FIFO_buf4_lane_10);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_11_pack, input_FIFO_buf4_lane_11);
  auto res_blurx7_16_update_0_sm8_318 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_11_pack);

  hw_uint<48 > input_FIFO_buf4_lane_14_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_14_pack, input_FIFO_buf4_lane_12);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_14_pack, input_FIFO_buf4_lane_13);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_14_pack, input_FIFO_buf4_lane_14);
  auto res_blurx7_16_update_0_sm8_420 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_14_pack);

  hw_uint<48 > input_FIFO_buf4_lane_17_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_17_pack, input_FIFO_buf4_lane_15);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_17_pack, input_FIFO_buf4_lane_16);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_17_pack, input_FIFO_buf4_lane_17);
  auto res_blurx7_16_update_0_sm8_522 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_17_pack);

  hw_uint<48 > input_FIFO_buf4_lane_20_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_20_pack, input_FIFO_buf4_lane_18);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_20_pack, input_FIFO_buf4_lane_19);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_20_pack, input_FIFO_buf4_lane_20);
  auto res_blurx7_16_update_0_sm8_624 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_20_pack);

  hw_uint<48 > input_FIFO_buf4_lane_23_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_23_pack, input_FIFO_buf4_lane_21);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_23_pack, input_FIFO_buf4_lane_22);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_23_pack, input_FIFO_buf4_lane_23);
  auto res_blurx7_16_update_0_sm8_726 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_23_pack);

  hw_uint<48 > input_FIFO_buf4_lane_26_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_26_pack, input_FIFO_buf4_lane_24);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_26_pack, input_FIFO_buf4_lane_25);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_26_pack, input_FIFO_buf4_lane_26);
  auto res_blurx7_16_update_0_sm8_828 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_26_pack);

  hw_uint<48 > input_FIFO_buf4_lane_29_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_29_pack, input_FIFO_buf4_lane_27);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_29_pack, input_FIFO_buf4_lane_28);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_29_pack, input_FIFO_buf4_lane_29);
  auto res_blurx7_16_update_0_sm8_930 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_29_pack);

  hw_uint<48 > input_FIFO_buf4_lane_32_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_32_pack, input_FIFO_buf4_lane_30);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_32_pack, input_FIFO_buf4_lane_31);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_32_pack, input_FIFO_buf4_lane_32);
  auto res_blurx7_16_update_0_sm8_1032 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_32_pack);

  hw_uint<48 > input_FIFO_buf4_lane_35_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_35_pack, input_FIFO_buf4_lane_33);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_35_pack, input_FIFO_buf4_lane_34);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_35_pack, input_FIFO_buf4_lane_35);
  auto res_blurx7_16_update_0_sm8_1134 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_35_pack);

  hw_uint<48 > input_FIFO_buf4_lane_38_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_38_pack, input_FIFO_buf4_lane_36);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_38_pack, input_FIFO_buf4_lane_37);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_38_pack, input_FIFO_buf4_lane_38);
  auto res_blurx7_16_update_0_sm8_1236 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_38_pack);

  hw_uint<48 > input_FIFO_buf4_lane_41_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_41_pack, input_FIFO_buf4_lane_39);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_41_pack, input_FIFO_buf4_lane_40);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_41_pack, input_FIFO_buf4_lane_41);
  auto res_blurx7_16_update_0_sm8_1338 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_41_pack);

  hw_uint<48 > input_FIFO_buf4_lane_44_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_44_pack, input_FIFO_buf4_lane_42);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_44_pack, input_FIFO_buf4_lane_43);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_44_pack, input_FIFO_buf4_lane_44);
  auto res_blurx7_16_update_0_sm8_1440 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_44_pack);

  hw_uint<48 > input_FIFO_buf4_lane_47_pack;
  set_at<0, 48, 16>(input_FIFO_buf4_lane_47_pack, input_FIFO_buf4_lane_45);
  set_at<16, 48, 16>(input_FIFO_buf4_lane_47_pack, input_FIFO_buf4_lane_46);
  set_at<32, 48, 16>(input_FIFO_buf4_lane_47_pack, input_FIFO_buf4_lane_47);
  auto res_blurx7_16_update_0_sm8_1542 = blurx7_16_generated_compute_unrolled_1(input_FIFO_buf4_lane_47_pack);
  hw_uint<256 > return_value141;
  set_at<0, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_012);
  set_at<16, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_114);
  set_at<32, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_216);
  set_at<48, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_318);
  set_at<64, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_420);
  set_at<80, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_522);
  set_at<96, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_624);
  set_at<112, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_726);
  set_at<128, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_828);
  set_at<144, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_930);
  set_at<160, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_1032);
  set_at<176, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_1134);
  set_at<192, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_1236);
  set_at<208, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_1338);
  set_at<224, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_1440);
  set_at<240, 256, 16>(return_value141, res_blurx7_16_update_0_sm8_1542);
  return return_value141;

}

hw_uint<256> input_1_cu143(hw_uint<16*16>& input_arg) {
  hw_uint<16> input_arg_lane_0 = input_arg.extract<0, 15>();
  hw_uint<16> input_arg_lane_1 = input_arg.extract<16, 31>();
  hw_uint<16> input_arg_lane_2 = input_arg.extract<32, 47>();
  hw_uint<16> input_arg_lane_3 = input_arg.extract<48, 63>();
  hw_uint<16> input_arg_lane_4 = input_arg.extract<64, 79>();
  hw_uint<16> input_arg_lane_5 = input_arg.extract<80, 95>();
  hw_uint<16> input_arg_lane_6 = input_arg.extract<96, 111>();
  hw_uint<16> input_arg_lane_7 = input_arg.extract<112, 127>();
  hw_uint<16> input_arg_lane_8 = input_arg.extract<128, 143>();
  hw_uint<16> input_arg_lane_9 = input_arg.extract<144, 159>();
  hw_uint<16> input_arg_lane_10 = input_arg.extract<160, 175>();
  hw_uint<16> input_arg_lane_11 = input_arg.extract<176, 191>();
  hw_uint<16> input_arg_lane_12 = input_arg.extract<192, 207>();
  hw_uint<16> input_arg_lane_13 = input_arg.extract<208, 223>();
  hw_uint<16> input_arg_lane_14 = input_arg.extract<224, 239>();
  hw_uint<16> input_arg_lane_15 = input_arg.extract<240, 255>();

	
  hw_uint<16 > input_arg_lane_0_pack;
  set_at<0, 16, 16>(input_arg_lane_0_pack, input_arg_lane_0);
  auto res_input_update_0_sm9_044 = input_generated_compute_unrolled_1(input_arg_lane_0_pack);

  hw_uint<16 > input_arg_lane_1_pack;
  set_at<0, 16, 16>(input_arg_lane_1_pack, input_arg_lane_1);
  auto res_input_update_0_sm9_146 = input_generated_compute_unrolled_1(input_arg_lane_1_pack);

  hw_uint<16 > input_arg_lane_2_pack;
  set_at<0, 16, 16>(input_arg_lane_2_pack, input_arg_lane_2);
  auto res_input_update_0_sm9_248 = input_generated_compute_unrolled_1(input_arg_lane_2_pack);

  hw_uint<16 > input_arg_lane_3_pack;
  set_at<0, 16, 16>(input_arg_lane_3_pack, input_arg_lane_3);
  auto res_input_update_0_sm9_350 = input_generated_compute_unrolled_1(input_arg_lane_3_pack);

  hw_uint<16 > input_arg_lane_4_pack;
  set_at<0, 16, 16>(input_arg_lane_4_pack, input_arg_lane_4);
  auto res_input_update_0_sm9_452 = input_generated_compute_unrolled_1(input_arg_lane_4_pack);

  hw_uint<16 > input_arg_lane_5_pack;
  set_at<0, 16, 16>(input_arg_lane_5_pack, input_arg_lane_5);
  auto res_input_update_0_sm9_554 = input_generated_compute_unrolled_1(input_arg_lane_5_pack);

  hw_uint<16 > input_arg_lane_6_pack;
  set_at<0, 16, 16>(input_arg_lane_6_pack, input_arg_lane_6);
  auto res_input_update_0_sm9_656 = input_generated_compute_unrolled_1(input_arg_lane_6_pack);

  hw_uint<16 > input_arg_lane_7_pack;
  set_at<0, 16, 16>(input_arg_lane_7_pack, input_arg_lane_7);
  auto res_input_update_0_sm9_758 = input_generated_compute_unrolled_1(input_arg_lane_7_pack);

  hw_uint<16 > input_arg_lane_8_pack;
  set_at<0, 16, 16>(input_arg_lane_8_pack, input_arg_lane_8);
  auto res_input_update_0_sm9_860 = input_generated_compute_unrolled_1(input_arg_lane_8_pack);

  hw_uint<16 > input_arg_lane_9_pack;
  set_at<0, 16, 16>(input_arg_lane_9_pack, input_arg_lane_9);
  auto res_input_update_0_sm9_962 = input_generated_compute_unrolled_1(input_arg_lane_9_pack);

  hw_uint<16 > input_arg_lane_10_pack;
  set_at<0, 16, 16>(input_arg_lane_10_pack, input_arg_lane_10);
  auto res_input_update_0_sm9_1064 = input_generated_compute_unrolled_1(input_arg_lane_10_pack);

  hw_uint<16 > input_arg_lane_11_pack;
  set_at<0, 16, 16>(input_arg_lane_11_pack, input_arg_lane_11);
  auto res_input_update_0_sm9_1166 = input_generated_compute_unrolled_1(input_arg_lane_11_pack);

  hw_uint<16 > input_arg_lane_12_pack;
  set_at<0, 16, 16>(input_arg_lane_12_pack, input_arg_lane_12);
  auto res_input_update_0_sm9_1268 = input_generated_compute_unrolled_1(input_arg_lane_12_pack);

  hw_uint<16 > input_arg_lane_13_pack;
  set_at<0, 16, 16>(input_arg_lane_13_pack, input_arg_lane_13);
  auto res_input_update_0_sm9_1370 = input_generated_compute_unrolled_1(input_arg_lane_13_pack);

  hw_uint<16 > input_arg_lane_14_pack;
  set_at<0, 16, 16>(input_arg_lane_14_pack, input_arg_lane_14);
  auto res_input_update_0_sm9_1472 = input_generated_compute_unrolled_1(input_arg_lane_14_pack);

  hw_uint<16 > input_arg_lane_15_pack;
  set_at<0, 16, 16>(input_arg_lane_15_pack, input_arg_lane_15);
  auto res_input_update_0_sm9_1574 = input_generated_compute_unrolled_1(input_arg_lane_15_pack);
  hw_uint<256 > return_value144;
  set_at<0, 256, 16>(return_value144, res_input_update_0_sm9_044);
  set_at<16, 256, 16>(return_value144, res_input_update_0_sm9_146);
  set_at<32, 256, 16>(return_value144, res_input_update_0_sm9_248);
  set_at<48, 256, 16>(return_value144, res_input_update_0_sm9_350);
  set_at<64, 256, 16>(return_value144, res_input_update_0_sm9_452);
  set_at<80, 256, 16>(return_value144, res_input_update_0_sm9_554);
  set_at<96, 256, 16>(return_value144, res_input_update_0_sm9_656);
  set_at<112, 256, 16>(return_value144, res_input_update_0_sm9_758);
  set_at<128, 256, 16>(return_value144, res_input_update_0_sm9_860);
  set_at<144, 256, 16>(return_value144, res_input_update_0_sm9_962);
  set_at<160, 256, 16>(return_value144, res_input_update_0_sm9_1064);
  set_at<176, 256, 16>(return_value144, res_input_update_0_sm9_1166);
  set_at<192, 256, 16>(return_value144, res_input_update_0_sm9_1268);
  set_at<208, 256, 16>(return_value144, res_input_update_0_sm9_1370);
  set_at<224, 256, 16>(return_value144, res_input_update_0_sm9_1472);
  set_at<240, 256, 16>(return_value144, res_input_update_0_sm9_1574);
  return return_value144;

}

hw_uint<256> input_ld1_cu146(hw_uint<16*16>& input) {
  return input;
}

hw_uint<256> input_to_gp_00_ld5_cu148(hw_uint<16*16>& input_to_gp_00) {
  return input_to_gp_00;
}

