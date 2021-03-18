#include "blur9_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> input_1_cu99(hw_uint<16*16>& input_arg) {
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
  auto res_input_update_0_sm0_03 = input_generated_compute_unrolled_1(input_arg_lane_0_pack);

  hw_uint<16 > input_arg_lane_1_pack;
  set_at<0, 16, 16>(input_arg_lane_1_pack, input_arg_lane_1);
  auto res_input_update_0_sm0_15 = input_generated_compute_unrolled_1(input_arg_lane_1_pack);

  hw_uint<16 > input_arg_lane_2_pack;
  set_at<0, 16, 16>(input_arg_lane_2_pack, input_arg_lane_2);
  auto res_input_update_0_sm0_27 = input_generated_compute_unrolled_1(input_arg_lane_2_pack);

  hw_uint<16 > input_arg_lane_3_pack;
  set_at<0, 16, 16>(input_arg_lane_3_pack, input_arg_lane_3);
  auto res_input_update_0_sm0_39 = input_generated_compute_unrolled_1(input_arg_lane_3_pack);

  hw_uint<16 > input_arg_lane_4_pack;
  set_at<0, 16, 16>(input_arg_lane_4_pack, input_arg_lane_4);
  auto res_input_update_0_sm0_411 = input_generated_compute_unrolled_1(input_arg_lane_4_pack);

  hw_uint<16 > input_arg_lane_5_pack;
  set_at<0, 16, 16>(input_arg_lane_5_pack, input_arg_lane_5);
  auto res_input_update_0_sm0_513 = input_generated_compute_unrolled_1(input_arg_lane_5_pack);

  hw_uint<16 > input_arg_lane_6_pack;
  set_at<0, 16, 16>(input_arg_lane_6_pack, input_arg_lane_6);
  auto res_input_update_0_sm0_615 = input_generated_compute_unrolled_1(input_arg_lane_6_pack);

  hw_uint<16 > input_arg_lane_7_pack;
  set_at<0, 16, 16>(input_arg_lane_7_pack, input_arg_lane_7);
  auto res_input_update_0_sm0_717 = input_generated_compute_unrolled_1(input_arg_lane_7_pack);

  hw_uint<16 > input_arg_lane_8_pack;
  set_at<0, 16, 16>(input_arg_lane_8_pack, input_arg_lane_8);
  auto res_input_update_0_sm0_819 = input_generated_compute_unrolled_1(input_arg_lane_8_pack);

  hw_uint<16 > input_arg_lane_9_pack;
  set_at<0, 16, 16>(input_arg_lane_9_pack, input_arg_lane_9);
  auto res_input_update_0_sm0_921 = input_generated_compute_unrolled_1(input_arg_lane_9_pack);

  hw_uint<16 > input_arg_lane_10_pack;
  set_at<0, 16, 16>(input_arg_lane_10_pack, input_arg_lane_10);
  auto res_input_update_0_sm0_1023 = input_generated_compute_unrolled_1(input_arg_lane_10_pack);

  hw_uint<16 > input_arg_lane_11_pack;
  set_at<0, 16, 16>(input_arg_lane_11_pack, input_arg_lane_11);
  auto res_input_update_0_sm0_1125 = input_generated_compute_unrolled_1(input_arg_lane_11_pack);

  hw_uint<16 > input_arg_lane_12_pack;
  set_at<0, 16, 16>(input_arg_lane_12_pack, input_arg_lane_12);
  auto res_input_update_0_sm0_1227 = input_generated_compute_unrolled_1(input_arg_lane_12_pack);

  hw_uint<16 > input_arg_lane_13_pack;
  set_at<0, 16, 16>(input_arg_lane_13_pack, input_arg_lane_13);
  auto res_input_update_0_sm0_1329 = input_generated_compute_unrolled_1(input_arg_lane_13_pack);

  hw_uint<16 > input_arg_lane_14_pack;
  set_at<0, 16, 16>(input_arg_lane_14_pack, input_arg_lane_14);
  auto res_input_update_0_sm0_1431 = input_generated_compute_unrolled_1(input_arg_lane_14_pack);

  hw_uint<16 > input_arg_lane_15_pack;
  set_at<0, 16, 16>(input_arg_lane_15_pack, input_arg_lane_15);
  auto res_input_update_0_sm0_1533 = input_generated_compute_unrolled_1(input_arg_lane_15_pack);
  hw_uint<256 > return_value100;
  set_at<0, 256, 16>(return_value100, res_input_update_0_sm0_03);
  set_at<16, 256, 16>(return_value100, res_input_update_0_sm0_15);
  set_at<32, 256, 16>(return_value100, res_input_update_0_sm0_27);
  set_at<48, 256, 16>(return_value100, res_input_update_0_sm0_39);
  set_at<64, 256, 16>(return_value100, res_input_update_0_sm0_411);
  set_at<80, 256, 16>(return_value100, res_input_update_0_sm0_513);
  set_at<96, 256, 16>(return_value100, res_input_update_0_sm0_615);
  set_at<112, 256, 16>(return_value100, res_input_update_0_sm0_717);
  set_at<128, 256, 16>(return_value100, res_input_update_0_sm0_819);
  set_at<144, 256, 16>(return_value100, res_input_update_0_sm0_921);
  set_at<160, 256, 16>(return_value100, res_input_update_0_sm0_1023);
  set_at<176, 256, 16>(return_value100, res_input_update_0_sm0_1125);
  set_at<192, 256, 16>(return_value100, res_input_update_0_sm0_1227);
  set_at<208, 256, 16>(return_value100, res_input_update_0_sm0_1329);
  set_at<224, 256, 16>(return_value100, res_input_update_0_sm0_1431);
  set_at<240, 256, 16>(return_value100, res_input_update_0_sm0_1533);
  return return_value100;

}

hw_uint<256> blurx_1_cu102(hw_uint<16*48>& input) {
  hw_uint<16> input_lane_0 = input.extract<0, 15>();
  hw_uint<16> input_lane_1 = input.extract<16, 31>();
  hw_uint<16> input_lane_2 = input.extract<32, 47>();
  hw_uint<16> input_lane_3 = input.extract<48, 63>();
  hw_uint<16> input_lane_4 = input.extract<64, 79>();
  hw_uint<16> input_lane_5 = input.extract<80, 95>();
  hw_uint<16> input_lane_6 = input.extract<96, 111>();
  hw_uint<16> input_lane_7 = input.extract<112, 127>();
  hw_uint<16> input_lane_8 = input.extract<128, 143>();
  hw_uint<16> input_lane_9 = input.extract<144, 159>();
  hw_uint<16> input_lane_10 = input.extract<160, 175>();
  hw_uint<16> input_lane_11 = input.extract<176, 191>();
  hw_uint<16> input_lane_12 = input.extract<192, 207>();
  hw_uint<16> input_lane_13 = input.extract<208, 223>();
  hw_uint<16> input_lane_14 = input.extract<224, 239>();
  hw_uint<16> input_lane_15 = input.extract<240, 255>();
  hw_uint<16> input_lane_16 = input.extract<256, 271>();
  hw_uint<16> input_lane_17 = input.extract<272, 287>();
  hw_uint<16> input_lane_18 = input.extract<288, 303>();
  hw_uint<16> input_lane_19 = input.extract<304, 319>();
  hw_uint<16> input_lane_20 = input.extract<320, 335>();
  hw_uint<16> input_lane_21 = input.extract<336, 351>();
  hw_uint<16> input_lane_22 = input.extract<352, 367>();
  hw_uint<16> input_lane_23 = input.extract<368, 383>();
  hw_uint<16> input_lane_24 = input.extract<384, 399>();
  hw_uint<16> input_lane_25 = input.extract<400, 415>();
  hw_uint<16> input_lane_26 = input.extract<416, 431>();
  hw_uint<16> input_lane_27 = input.extract<432, 447>();
  hw_uint<16> input_lane_28 = input.extract<448, 463>();
  hw_uint<16> input_lane_29 = input.extract<464, 479>();
  hw_uint<16> input_lane_30 = input.extract<480, 495>();
  hw_uint<16> input_lane_31 = input.extract<496, 511>();
  hw_uint<16> input_lane_32 = input.extract<512, 527>();
  hw_uint<16> input_lane_33 = input.extract<528, 543>();
  hw_uint<16> input_lane_34 = input.extract<544, 559>();
  hw_uint<16> input_lane_35 = input.extract<560, 575>();
  hw_uint<16> input_lane_36 = input.extract<576, 591>();
  hw_uint<16> input_lane_37 = input.extract<592, 607>();
  hw_uint<16> input_lane_38 = input.extract<608, 623>();
  hw_uint<16> input_lane_39 = input.extract<624, 639>();
  hw_uint<16> input_lane_40 = input.extract<640, 655>();
  hw_uint<16> input_lane_41 = input.extract<656, 671>();
  hw_uint<16> input_lane_42 = input.extract<672, 687>();
  hw_uint<16> input_lane_43 = input.extract<688, 703>();
  hw_uint<16> input_lane_44 = input.extract<704, 719>();
  hw_uint<16> input_lane_45 = input.extract<720, 735>();
  hw_uint<16> input_lane_46 = input.extract<736, 751>();
  hw_uint<16> input_lane_47 = input.extract<752, 767>();

	
  hw_uint<48 > input_lane_2_pack;
  set_at<0, 48, 16>(input_lane_2_pack, input_lane_0);
  set_at<16, 48, 16>(input_lane_2_pack, input_lane_1);
  set_at<32, 48, 16>(input_lane_2_pack, input_lane_2);
  auto res_blurx_update_0_sm1_035 = blurx_generated_compute_unrolled_1(input_lane_2_pack);

  hw_uint<48 > input_lane_5_pack;
  set_at<0, 48, 16>(input_lane_5_pack, input_lane_3);
  set_at<16, 48, 16>(input_lane_5_pack, input_lane_4);
  set_at<32, 48, 16>(input_lane_5_pack, input_lane_5);
  auto res_blurx_update_0_sm1_137 = blurx_generated_compute_unrolled_1(input_lane_5_pack);

  hw_uint<48 > input_lane_8_pack;
  set_at<0, 48, 16>(input_lane_8_pack, input_lane_6);
  set_at<16, 48, 16>(input_lane_8_pack, input_lane_7);
  set_at<32, 48, 16>(input_lane_8_pack, input_lane_8);
  auto res_blurx_update_0_sm1_239 = blurx_generated_compute_unrolled_1(input_lane_8_pack);

  hw_uint<48 > input_lane_11_pack;
  set_at<0, 48, 16>(input_lane_11_pack, input_lane_9);
  set_at<16, 48, 16>(input_lane_11_pack, input_lane_10);
  set_at<32, 48, 16>(input_lane_11_pack, input_lane_11);
  auto res_blurx_update_0_sm1_341 = blurx_generated_compute_unrolled_1(input_lane_11_pack);

  hw_uint<48 > input_lane_14_pack;
  set_at<0, 48, 16>(input_lane_14_pack, input_lane_12);
  set_at<16, 48, 16>(input_lane_14_pack, input_lane_13);
  set_at<32, 48, 16>(input_lane_14_pack, input_lane_14);
  auto res_blurx_update_0_sm1_443 = blurx_generated_compute_unrolled_1(input_lane_14_pack);

  hw_uint<48 > input_lane_17_pack;
  set_at<0, 48, 16>(input_lane_17_pack, input_lane_15);
  set_at<16, 48, 16>(input_lane_17_pack, input_lane_16);
  set_at<32, 48, 16>(input_lane_17_pack, input_lane_17);
  auto res_blurx_update_0_sm1_545 = blurx_generated_compute_unrolled_1(input_lane_17_pack);

  hw_uint<48 > input_lane_20_pack;
  set_at<0, 48, 16>(input_lane_20_pack, input_lane_18);
  set_at<16, 48, 16>(input_lane_20_pack, input_lane_19);
  set_at<32, 48, 16>(input_lane_20_pack, input_lane_20);
  auto res_blurx_update_0_sm1_647 = blurx_generated_compute_unrolled_1(input_lane_20_pack);

  hw_uint<48 > input_lane_23_pack;
  set_at<0, 48, 16>(input_lane_23_pack, input_lane_21);
  set_at<16, 48, 16>(input_lane_23_pack, input_lane_22);
  set_at<32, 48, 16>(input_lane_23_pack, input_lane_23);
  auto res_blurx_update_0_sm1_749 = blurx_generated_compute_unrolled_1(input_lane_23_pack);

  hw_uint<48 > input_lane_26_pack;
  set_at<0, 48, 16>(input_lane_26_pack, input_lane_24);
  set_at<16, 48, 16>(input_lane_26_pack, input_lane_25);
  set_at<32, 48, 16>(input_lane_26_pack, input_lane_26);
  auto res_blurx_update_0_sm1_851 = blurx_generated_compute_unrolled_1(input_lane_26_pack);

  hw_uint<48 > input_lane_29_pack;
  set_at<0, 48, 16>(input_lane_29_pack, input_lane_27);
  set_at<16, 48, 16>(input_lane_29_pack, input_lane_28);
  set_at<32, 48, 16>(input_lane_29_pack, input_lane_29);
  auto res_blurx_update_0_sm1_953 = blurx_generated_compute_unrolled_1(input_lane_29_pack);

  hw_uint<48 > input_lane_32_pack;
  set_at<0, 48, 16>(input_lane_32_pack, input_lane_30);
  set_at<16, 48, 16>(input_lane_32_pack, input_lane_31);
  set_at<32, 48, 16>(input_lane_32_pack, input_lane_32);
  auto res_blurx_update_0_sm1_1055 = blurx_generated_compute_unrolled_1(input_lane_32_pack);

  hw_uint<48 > input_lane_35_pack;
  set_at<0, 48, 16>(input_lane_35_pack, input_lane_33);
  set_at<16, 48, 16>(input_lane_35_pack, input_lane_34);
  set_at<32, 48, 16>(input_lane_35_pack, input_lane_35);
  auto res_blurx_update_0_sm1_1157 = blurx_generated_compute_unrolled_1(input_lane_35_pack);

  hw_uint<48 > input_lane_38_pack;
  set_at<0, 48, 16>(input_lane_38_pack, input_lane_36);
  set_at<16, 48, 16>(input_lane_38_pack, input_lane_37);
  set_at<32, 48, 16>(input_lane_38_pack, input_lane_38);
  auto res_blurx_update_0_sm1_1259 = blurx_generated_compute_unrolled_1(input_lane_38_pack);

  hw_uint<48 > input_lane_41_pack;
  set_at<0, 48, 16>(input_lane_41_pack, input_lane_39);
  set_at<16, 48, 16>(input_lane_41_pack, input_lane_40);
  set_at<32, 48, 16>(input_lane_41_pack, input_lane_41);
  auto res_blurx_update_0_sm1_1361 = blurx_generated_compute_unrolled_1(input_lane_41_pack);

  hw_uint<48 > input_lane_44_pack;
  set_at<0, 48, 16>(input_lane_44_pack, input_lane_42);
  set_at<16, 48, 16>(input_lane_44_pack, input_lane_43);
  set_at<32, 48, 16>(input_lane_44_pack, input_lane_44);
  auto res_blurx_update_0_sm1_1463 = blurx_generated_compute_unrolled_1(input_lane_44_pack);

  hw_uint<48 > input_lane_47_pack;
  set_at<0, 48, 16>(input_lane_47_pack, input_lane_45);
  set_at<16, 48, 16>(input_lane_47_pack, input_lane_46);
  set_at<32, 48, 16>(input_lane_47_pack, input_lane_47);
  auto res_blurx_update_0_sm1_1565 = blurx_generated_compute_unrolled_1(input_lane_47_pack);
  hw_uint<256 > return_value103;
  set_at<0, 256, 16>(return_value103, res_blurx_update_0_sm1_035);
  set_at<16, 256, 16>(return_value103, res_blurx_update_0_sm1_137);
  set_at<32, 256, 16>(return_value103, res_blurx_update_0_sm1_239);
  set_at<48, 256, 16>(return_value103, res_blurx_update_0_sm1_341);
  set_at<64, 256, 16>(return_value103, res_blurx_update_0_sm1_443);
  set_at<80, 256, 16>(return_value103, res_blurx_update_0_sm1_545);
  set_at<96, 256, 16>(return_value103, res_blurx_update_0_sm1_647);
  set_at<112, 256, 16>(return_value103, res_blurx_update_0_sm1_749);
  set_at<128, 256, 16>(return_value103, res_blurx_update_0_sm1_851);
  set_at<144, 256, 16>(return_value103, res_blurx_update_0_sm1_953);
  set_at<160, 256, 16>(return_value103, res_blurx_update_0_sm1_1055);
  set_at<176, 256, 16>(return_value103, res_blurx_update_0_sm1_1157);
  set_at<192, 256, 16>(return_value103, res_blurx_update_0_sm1_1259);
  set_at<208, 256, 16>(return_value103, res_blurx_update_0_sm1_1361);
  set_at<224, 256, 16>(return_value103, res_blurx_update_0_sm1_1463);
  set_at<240, 256, 16>(return_value103, res_blurx_update_0_sm1_1565);
  return return_value103;

}

hw_uint<256> blur9_16_1_cu105(hw_uint<16*48>& blurx) {
  hw_uint<16> blurx_lane_0 = blurx.extract<0, 15>();
  hw_uint<16> blurx_lane_1 = blurx.extract<16, 31>();
  hw_uint<16> blurx_lane_2 = blurx.extract<32, 47>();
  hw_uint<16> blurx_lane_3 = blurx.extract<48, 63>();
  hw_uint<16> blurx_lane_4 = blurx.extract<64, 79>();
  hw_uint<16> blurx_lane_5 = blurx.extract<80, 95>();
  hw_uint<16> blurx_lane_6 = blurx.extract<96, 111>();
  hw_uint<16> blurx_lane_7 = blurx.extract<112, 127>();
  hw_uint<16> blurx_lane_8 = blurx.extract<128, 143>();
  hw_uint<16> blurx_lane_9 = blurx.extract<144, 159>();
  hw_uint<16> blurx_lane_10 = blurx.extract<160, 175>();
  hw_uint<16> blurx_lane_11 = blurx.extract<176, 191>();
  hw_uint<16> blurx_lane_12 = blurx.extract<192, 207>();
  hw_uint<16> blurx_lane_13 = blurx.extract<208, 223>();
  hw_uint<16> blurx_lane_14 = blurx.extract<224, 239>();
  hw_uint<16> blurx_lane_15 = blurx.extract<240, 255>();
  hw_uint<16> blurx_lane_16 = blurx.extract<256, 271>();
  hw_uint<16> blurx_lane_17 = blurx.extract<272, 287>();
  hw_uint<16> blurx_lane_18 = blurx.extract<288, 303>();
  hw_uint<16> blurx_lane_19 = blurx.extract<304, 319>();
  hw_uint<16> blurx_lane_20 = blurx.extract<320, 335>();
  hw_uint<16> blurx_lane_21 = blurx.extract<336, 351>();
  hw_uint<16> blurx_lane_22 = blurx.extract<352, 367>();
  hw_uint<16> blurx_lane_23 = blurx.extract<368, 383>();
  hw_uint<16> blurx_lane_24 = blurx.extract<384, 399>();
  hw_uint<16> blurx_lane_25 = blurx.extract<400, 415>();
  hw_uint<16> blurx_lane_26 = blurx.extract<416, 431>();
  hw_uint<16> blurx_lane_27 = blurx.extract<432, 447>();
  hw_uint<16> blurx_lane_28 = blurx.extract<448, 463>();
  hw_uint<16> blurx_lane_29 = blurx.extract<464, 479>();
  hw_uint<16> blurx_lane_30 = blurx.extract<480, 495>();
  hw_uint<16> blurx_lane_31 = blurx.extract<496, 511>();
  hw_uint<16> blurx_lane_32 = blurx.extract<512, 527>();
  hw_uint<16> blurx_lane_33 = blurx.extract<528, 543>();
  hw_uint<16> blurx_lane_34 = blurx.extract<544, 559>();
  hw_uint<16> blurx_lane_35 = blurx.extract<560, 575>();
  hw_uint<16> blurx_lane_36 = blurx.extract<576, 591>();
  hw_uint<16> blurx_lane_37 = blurx.extract<592, 607>();
  hw_uint<16> blurx_lane_38 = blurx.extract<608, 623>();
  hw_uint<16> blurx_lane_39 = blurx.extract<624, 639>();
  hw_uint<16> blurx_lane_40 = blurx.extract<640, 655>();
  hw_uint<16> blurx_lane_41 = blurx.extract<656, 671>();
  hw_uint<16> blurx_lane_42 = blurx.extract<672, 687>();
  hw_uint<16> blurx_lane_43 = blurx.extract<688, 703>();
  hw_uint<16> blurx_lane_44 = blurx.extract<704, 719>();
  hw_uint<16> blurx_lane_45 = blurx.extract<720, 735>();
  hw_uint<16> blurx_lane_46 = blurx.extract<736, 751>();
  hw_uint<16> blurx_lane_47 = blurx.extract<752, 767>();

	
  hw_uint<48 > blurx_lane_2_pack;
  set_at<0, 48, 16>(blurx_lane_2_pack, blurx_lane_0);
  set_at<16, 48, 16>(blurx_lane_2_pack, blurx_lane_1);
  set_at<32, 48, 16>(blurx_lane_2_pack, blurx_lane_2);
  auto res_blur9_16_update_0_sm2_067 = blur9_16_generated_compute_unrolled_1(blurx_lane_2_pack);

  hw_uint<48 > blurx_lane_5_pack;
  set_at<0, 48, 16>(blurx_lane_5_pack, blurx_lane_3);
  set_at<16, 48, 16>(blurx_lane_5_pack, blurx_lane_4);
  set_at<32, 48, 16>(blurx_lane_5_pack, blurx_lane_5);
  auto res_blur9_16_update_0_sm2_169 = blur9_16_generated_compute_unrolled_1(blurx_lane_5_pack);

  hw_uint<48 > blurx_lane_8_pack;
  set_at<0, 48, 16>(blurx_lane_8_pack, blurx_lane_6);
  set_at<16, 48, 16>(blurx_lane_8_pack, blurx_lane_7);
  set_at<32, 48, 16>(blurx_lane_8_pack, blurx_lane_8);
  auto res_blur9_16_update_0_sm2_271 = blur9_16_generated_compute_unrolled_1(blurx_lane_8_pack);

  hw_uint<48 > blurx_lane_11_pack;
  set_at<0, 48, 16>(blurx_lane_11_pack, blurx_lane_9);
  set_at<16, 48, 16>(blurx_lane_11_pack, blurx_lane_10);
  set_at<32, 48, 16>(blurx_lane_11_pack, blurx_lane_11);
  auto res_blur9_16_update_0_sm2_373 = blur9_16_generated_compute_unrolled_1(blurx_lane_11_pack);

  hw_uint<48 > blurx_lane_14_pack;
  set_at<0, 48, 16>(blurx_lane_14_pack, blurx_lane_12);
  set_at<16, 48, 16>(blurx_lane_14_pack, blurx_lane_13);
  set_at<32, 48, 16>(blurx_lane_14_pack, blurx_lane_14);
  auto res_blur9_16_update_0_sm2_475 = blur9_16_generated_compute_unrolled_1(blurx_lane_14_pack);

  hw_uint<48 > blurx_lane_17_pack;
  set_at<0, 48, 16>(blurx_lane_17_pack, blurx_lane_15);
  set_at<16, 48, 16>(blurx_lane_17_pack, blurx_lane_16);
  set_at<32, 48, 16>(blurx_lane_17_pack, blurx_lane_17);
  auto res_blur9_16_update_0_sm2_577 = blur9_16_generated_compute_unrolled_1(blurx_lane_17_pack);

  hw_uint<48 > blurx_lane_20_pack;
  set_at<0, 48, 16>(blurx_lane_20_pack, blurx_lane_18);
  set_at<16, 48, 16>(blurx_lane_20_pack, blurx_lane_19);
  set_at<32, 48, 16>(blurx_lane_20_pack, blurx_lane_20);
  auto res_blur9_16_update_0_sm2_679 = blur9_16_generated_compute_unrolled_1(blurx_lane_20_pack);

  hw_uint<48 > blurx_lane_23_pack;
  set_at<0, 48, 16>(blurx_lane_23_pack, blurx_lane_21);
  set_at<16, 48, 16>(blurx_lane_23_pack, blurx_lane_22);
  set_at<32, 48, 16>(blurx_lane_23_pack, blurx_lane_23);
  auto res_blur9_16_update_0_sm2_781 = blur9_16_generated_compute_unrolled_1(blurx_lane_23_pack);

  hw_uint<48 > blurx_lane_26_pack;
  set_at<0, 48, 16>(blurx_lane_26_pack, blurx_lane_24);
  set_at<16, 48, 16>(blurx_lane_26_pack, blurx_lane_25);
  set_at<32, 48, 16>(blurx_lane_26_pack, blurx_lane_26);
  auto res_blur9_16_update_0_sm2_883 = blur9_16_generated_compute_unrolled_1(blurx_lane_26_pack);

  hw_uint<48 > blurx_lane_29_pack;
  set_at<0, 48, 16>(blurx_lane_29_pack, blurx_lane_27);
  set_at<16, 48, 16>(blurx_lane_29_pack, blurx_lane_28);
  set_at<32, 48, 16>(blurx_lane_29_pack, blurx_lane_29);
  auto res_blur9_16_update_0_sm2_985 = blur9_16_generated_compute_unrolled_1(blurx_lane_29_pack);

  hw_uint<48 > blurx_lane_32_pack;
  set_at<0, 48, 16>(blurx_lane_32_pack, blurx_lane_30);
  set_at<16, 48, 16>(blurx_lane_32_pack, blurx_lane_31);
  set_at<32, 48, 16>(blurx_lane_32_pack, blurx_lane_32);
  auto res_blur9_16_update_0_sm2_1087 = blur9_16_generated_compute_unrolled_1(blurx_lane_32_pack);

  hw_uint<48 > blurx_lane_35_pack;
  set_at<0, 48, 16>(blurx_lane_35_pack, blurx_lane_33);
  set_at<16, 48, 16>(blurx_lane_35_pack, blurx_lane_34);
  set_at<32, 48, 16>(blurx_lane_35_pack, blurx_lane_35);
  auto res_blur9_16_update_0_sm2_1189 = blur9_16_generated_compute_unrolled_1(blurx_lane_35_pack);

  hw_uint<48 > blurx_lane_38_pack;
  set_at<0, 48, 16>(blurx_lane_38_pack, blurx_lane_36);
  set_at<16, 48, 16>(blurx_lane_38_pack, blurx_lane_37);
  set_at<32, 48, 16>(blurx_lane_38_pack, blurx_lane_38);
  auto res_blur9_16_update_0_sm2_1291 = blur9_16_generated_compute_unrolled_1(blurx_lane_38_pack);

  hw_uint<48 > blurx_lane_41_pack;
  set_at<0, 48, 16>(blurx_lane_41_pack, blurx_lane_39);
  set_at<16, 48, 16>(blurx_lane_41_pack, blurx_lane_40);
  set_at<32, 48, 16>(blurx_lane_41_pack, blurx_lane_41);
  auto res_blur9_16_update_0_sm2_1393 = blur9_16_generated_compute_unrolled_1(blurx_lane_41_pack);

  hw_uint<48 > blurx_lane_44_pack;
  set_at<0, 48, 16>(blurx_lane_44_pack, blurx_lane_42);
  set_at<16, 48, 16>(blurx_lane_44_pack, blurx_lane_43);
  set_at<32, 48, 16>(blurx_lane_44_pack, blurx_lane_44);
  auto res_blur9_16_update_0_sm2_1495 = blur9_16_generated_compute_unrolled_1(blurx_lane_44_pack);

  hw_uint<48 > blurx_lane_47_pack;
  set_at<0, 48, 16>(blurx_lane_47_pack, blurx_lane_45);
  set_at<16, 48, 16>(blurx_lane_47_pack, blurx_lane_46);
  set_at<32, 48, 16>(blurx_lane_47_pack, blurx_lane_47);
  auto res_blur9_16_update_0_sm2_1597 = blur9_16_generated_compute_unrolled_1(blurx_lane_47_pack);
  hw_uint<256 > return_value106;
  set_at<0, 256, 16>(return_value106, res_blur9_16_update_0_sm2_067);
  set_at<16, 256, 16>(return_value106, res_blur9_16_update_0_sm2_169);
  set_at<32, 256, 16>(return_value106, res_blur9_16_update_0_sm2_271);
  set_at<48, 256, 16>(return_value106, res_blur9_16_update_0_sm2_373);
  set_at<64, 256, 16>(return_value106, res_blur9_16_update_0_sm2_475);
  set_at<80, 256, 16>(return_value106, res_blur9_16_update_0_sm2_577);
  set_at<96, 256, 16>(return_value106, res_blur9_16_update_0_sm2_679);
  set_at<112, 256, 16>(return_value106, res_blur9_16_update_0_sm2_781);
  set_at<128, 256, 16>(return_value106, res_blur9_16_update_0_sm2_883);
  set_at<144, 256, 16>(return_value106, res_blur9_16_update_0_sm2_985);
  set_at<160, 256, 16>(return_value106, res_blur9_16_update_0_sm2_1087);
  set_at<176, 256, 16>(return_value106, res_blur9_16_update_0_sm2_1189);
  set_at<192, 256, 16>(return_value106, res_blur9_16_update_0_sm2_1291);
  set_at<208, 256, 16>(return_value106, res_blur9_16_update_0_sm2_1393);
  set_at<224, 256, 16>(return_value106, res_blur9_16_update_0_sm2_1495);
  set_at<240, 256, 16>(return_value106, res_blur9_16_update_0_sm2_1597);
  return return_value106;

}

