#include "blur4_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> blurx_ld1_cu247(hw_uint<16*16>& blurx) {
  return blurx;
}

hw_uint<256> input_1_cu249(hw_uint<16*16>& input_arg) {
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
  auto res_input_update_0_sm17_1585 = input_generated_compute_unrolled_1(input_arg_lane_0_pack);

  hw_uint<16 > input_arg_lane_1_pack;
  set_at<0, 16, 16>(input_arg_lane_1_pack, input_arg_lane_1);
  auto res_input_update_0_sm17_1483 = input_generated_compute_unrolled_1(input_arg_lane_1_pack);

  hw_uint<16 > input_arg_lane_2_pack;
  set_at<0, 16, 16>(input_arg_lane_2_pack, input_arg_lane_2);
  auto res_input_update_0_sm17_1381 = input_generated_compute_unrolled_1(input_arg_lane_2_pack);

  hw_uint<16 > input_arg_lane_3_pack;
  set_at<0, 16, 16>(input_arg_lane_3_pack, input_arg_lane_3);
  auto res_input_update_0_sm17_1279 = input_generated_compute_unrolled_1(input_arg_lane_3_pack);

  hw_uint<16 > input_arg_lane_4_pack;
  set_at<0, 16, 16>(input_arg_lane_4_pack, input_arg_lane_4);
  auto res_input_update_0_sm17_1177 = input_generated_compute_unrolled_1(input_arg_lane_4_pack);

  hw_uint<16 > input_arg_lane_5_pack;
  set_at<0, 16, 16>(input_arg_lane_5_pack, input_arg_lane_5);
  auto res_input_update_0_sm17_1075 = input_generated_compute_unrolled_1(input_arg_lane_5_pack);

  hw_uint<16 > input_arg_lane_6_pack;
  set_at<0, 16, 16>(input_arg_lane_6_pack, input_arg_lane_6);
  auto res_input_update_0_sm17_973 = input_generated_compute_unrolled_1(input_arg_lane_6_pack);

  hw_uint<16 > input_arg_lane_7_pack;
  set_at<0, 16, 16>(input_arg_lane_7_pack, input_arg_lane_7);
  auto res_input_update_0_sm17_871 = input_generated_compute_unrolled_1(input_arg_lane_7_pack);

  hw_uint<16 > input_arg_lane_8_pack;
  set_at<0, 16, 16>(input_arg_lane_8_pack, input_arg_lane_8);
  auto res_input_update_0_sm17_769 = input_generated_compute_unrolled_1(input_arg_lane_8_pack);

  hw_uint<16 > input_arg_lane_9_pack;
  set_at<0, 16, 16>(input_arg_lane_9_pack, input_arg_lane_9);
  auto res_input_update_0_sm17_667 = input_generated_compute_unrolled_1(input_arg_lane_9_pack);

  hw_uint<16 > input_arg_lane_10_pack;
  set_at<0, 16, 16>(input_arg_lane_10_pack, input_arg_lane_10);
  auto res_input_update_0_sm17_565 = input_generated_compute_unrolled_1(input_arg_lane_10_pack);

  hw_uint<16 > input_arg_lane_11_pack;
  set_at<0, 16, 16>(input_arg_lane_11_pack, input_arg_lane_11);
  auto res_input_update_0_sm17_463 = input_generated_compute_unrolled_1(input_arg_lane_11_pack);

  hw_uint<16 > input_arg_lane_12_pack;
  set_at<0, 16, 16>(input_arg_lane_12_pack, input_arg_lane_12);
  auto res_input_update_0_sm17_361 = input_generated_compute_unrolled_1(input_arg_lane_12_pack);

  hw_uint<16 > input_arg_lane_13_pack;
  set_at<0, 16, 16>(input_arg_lane_13_pack, input_arg_lane_13);
  auto res_input_update_0_sm17_259 = input_generated_compute_unrolled_1(input_arg_lane_13_pack);

  hw_uint<16 > input_arg_lane_14_pack;
  set_at<0, 16, 16>(input_arg_lane_14_pack, input_arg_lane_14);
  auto res_input_update_0_sm17_157 = input_generated_compute_unrolled_1(input_arg_lane_14_pack);

  hw_uint<16 > input_arg_lane_15_pack;
  set_at<0, 16, 16>(input_arg_lane_15_pack, input_arg_lane_15);
  auto res_input_update_0_sm17_055 = input_generated_compute_unrolled_1(input_arg_lane_15_pack);
  hw_uint<256 > return_value250;
  set_at<0, 256, 16>(return_value250, res_input_update_0_sm17_1585);
  set_at<16, 256, 16>(return_value250, res_input_update_0_sm17_1483);
  set_at<32, 256, 16>(return_value250, res_input_update_0_sm17_1381);
  set_at<48, 256, 16>(return_value250, res_input_update_0_sm17_1279);
  set_at<64, 256, 16>(return_value250, res_input_update_0_sm17_1177);
  set_at<80, 256, 16>(return_value250, res_input_update_0_sm17_1075);
  set_at<96, 256, 16>(return_value250, res_input_update_0_sm17_973);
  set_at<112, 256, 16>(return_value250, res_input_update_0_sm17_871);
  set_at<128, 256, 16>(return_value250, res_input_update_0_sm17_769);
  set_at<144, 256, 16>(return_value250, res_input_update_0_sm17_667);
  set_at<160, 256, 16>(return_value250, res_input_update_0_sm17_565);
  set_at<176, 256, 16>(return_value250, res_input_update_0_sm17_463);
  set_at<192, 256, 16>(return_value250, res_input_update_0_sm17_361);
  set_at<208, 256, 16>(return_value250, res_input_update_0_sm17_259);
  set_at<224, 256, 16>(return_value250, res_input_update_0_sm17_157);
  set_at<240, 256, 16>(return_value250, res_input_update_0_sm17_055);
  return return_value250;

}

hw_uint<256> blur4_16_1_cu252(hw_uint<16*48>& blurx_FIFO_buf8) {
  hw_uint<16> blurx_FIFO_buf8_lane_0 = blurx_FIFO_buf8.extract<0, 15>();
  hw_uint<16> blurx_FIFO_buf8_lane_1 = blurx_FIFO_buf8.extract<16, 31>();
  hw_uint<16> blurx_FIFO_buf8_lane_2 = blurx_FIFO_buf8.extract<32, 47>();
  hw_uint<16> blurx_FIFO_buf8_lane_3 = blurx_FIFO_buf8.extract<48, 63>();
  hw_uint<16> blurx_FIFO_buf8_lane_4 = blurx_FIFO_buf8.extract<64, 79>();
  hw_uint<16> blurx_FIFO_buf8_lane_5 = blurx_FIFO_buf8.extract<80, 95>();
  hw_uint<16> blurx_FIFO_buf8_lane_6 = blurx_FIFO_buf8.extract<96, 111>();
  hw_uint<16> blurx_FIFO_buf8_lane_7 = blurx_FIFO_buf8.extract<112, 127>();
  hw_uint<16> blurx_FIFO_buf8_lane_8 = blurx_FIFO_buf8.extract<128, 143>();
  hw_uint<16> blurx_FIFO_buf8_lane_9 = blurx_FIFO_buf8.extract<144, 159>();
  hw_uint<16> blurx_FIFO_buf8_lane_10 = blurx_FIFO_buf8.extract<160, 175>();
  hw_uint<16> blurx_FIFO_buf8_lane_11 = blurx_FIFO_buf8.extract<176, 191>();
  hw_uint<16> blurx_FIFO_buf8_lane_12 = blurx_FIFO_buf8.extract<192, 207>();
  hw_uint<16> blurx_FIFO_buf8_lane_13 = blurx_FIFO_buf8.extract<208, 223>();
  hw_uint<16> blurx_FIFO_buf8_lane_14 = blurx_FIFO_buf8.extract<224, 239>();
  hw_uint<16> blurx_FIFO_buf8_lane_15 = blurx_FIFO_buf8.extract<240, 255>();
  hw_uint<16> blurx_FIFO_buf8_lane_16 = blurx_FIFO_buf8.extract<256, 271>();
  hw_uint<16> blurx_FIFO_buf8_lane_17 = blurx_FIFO_buf8.extract<272, 287>();
  hw_uint<16> blurx_FIFO_buf8_lane_18 = blurx_FIFO_buf8.extract<288, 303>();
  hw_uint<16> blurx_FIFO_buf8_lane_19 = blurx_FIFO_buf8.extract<304, 319>();
  hw_uint<16> blurx_FIFO_buf8_lane_20 = blurx_FIFO_buf8.extract<320, 335>();
  hw_uint<16> blurx_FIFO_buf8_lane_21 = blurx_FIFO_buf8.extract<336, 351>();
  hw_uint<16> blurx_FIFO_buf8_lane_22 = blurx_FIFO_buf8.extract<352, 367>();
  hw_uint<16> blurx_FIFO_buf8_lane_23 = blurx_FIFO_buf8.extract<368, 383>();
  hw_uint<16> blurx_FIFO_buf8_lane_24 = blurx_FIFO_buf8.extract<384, 399>();
  hw_uint<16> blurx_FIFO_buf8_lane_25 = blurx_FIFO_buf8.extract<400, 415>();
  hw_uint<16> blurx_FIFO_buf8_lane_26 = blurx_FIFO_buf8.extract<416, 431>();
  hw_uint<16> blurx_FIFO_buf8_lane_27 = blurx_FIFO_buf8.extract<432, 447>();
  hw_uint<16> blurx_FIFO_buf8_lane_28 = blurx_FIFO_buf8.extract<448, 463>();
  hw_uint<16> blurx_FIFO_buf8_lane_29 = blurx_FIFO_buf8.extract<464, 479>();
  hw_uint<16> blurx_FIFO_buf8_lane_30 = blurx_FIFO_buf8.extract<480, 495>();
  hw_uint<16> blurx_FIFO_buf8_lane_31 = blurx_FIFO_buf8.extract<496, 511>();
  hw_uint<16> blurx_FIFO_buf8_lane_32 = blurx_FIFO_buf8.extract<512, 527>();
  hw_uint<16> blurx_FIFO_buf8_lane_33 = blurx_FIFO_buf8.extract<528, 543>();
  hw_uint<16> blurx_FIFO_buf8_lane_34 = blurx_FIFO_buf8.extract<544, 559>();
  hw_uint<16> blurx_FIFO_buf8_lane_35 = blurx_FIFO_buf8.extract<560, 575>();
  hw_uint<16> blurx_FIFO_buf8_lane_36 = blurx_FIFO_buf8.extract<576, 591>();
  hw_uint<16> blurx_FIFO_buf8_lane_37 = blurx_FIFO_buf8.extract<592, 607>();
  hw_uint<16> blurx_FIFO_buf8_lane_38 = blurx_FIFO_buf8.extract<608, 623>();
  hw_uint<16> blurx_FIFO_buf8_lane_39 = blurx_FIFO_buf8.extract<624, 639>();
  hw_uint<16> blurx_FIFO_buf8_lane_40 = blurx_FIFO_buf8.extract<640, 655>();
  hw_uint<16> blurx_FIFO_buf8_lane_41 = blurx_FIFO_buf8.extract<656, 671>();
  hw_uint<16> blurx_FIFO_buf8_lane_42 = blurx_FIFO_buf8.extract<672, 687>();
  hw_uint<16> blurx_FIFO_buf8_lane_43 = blurx_FIFO_buf8.extract<688, 703>();
  hw_uint<16> blurx_FIFO_buf8_lane_44 = blurx_FIFO_buf8.extract<704, 719>();
  hw_uint<16> blurx_FIFO_buf8_lane_45 = blurx_FIFO_buf8.extract<720, 735>();
  hw_uint<16> blurx_FIFO_buf8_lane_46 = blurx_FIFO_buf8.extract<736, 751>();
  hw_uint<16> blurx_FIFO_buf8_lane_47 = blurx_FIFO_buf8.extract<752, 767>();

	
  hw_uint<48 > blurx_FIFO_buf8_lane_2_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_2_pack, blurx_FIFO_buf8_lane_0);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_2_pack, blurx_FIFO_buf8_lane_1);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_2_pack, blurx_FIFO_buf8_lane_2);
  auto res_blur4_16_update_0_sm18_15117 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_2_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_5_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_5_pack, blurx_FIFO_buf8_lane_3);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_5_pack, blurx_FIFO_buf8_lane_4);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_5_pack, blurx_FIFO_buf8_lane_5);
  auto res_blur4_16_update_0_sm18_14115 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_5_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_8_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_8_pack, blurx_FIFO_buf8_lane_6);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_8_pack, blurx_FIFO_buf8_lane_7);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_8_pack, blurx_FIFO_buf8_lane_8);
  auto res_blur4_16_update_0_sm18_13113 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_8_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_11_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_11_pack, blurx_FIFO_buf8_lane_9);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_11_pack, blurx_FIFO_buf8_lane_10);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_11_pack, blurx_FIFO_buf8_lane_11);
  auto res_blur4_16_update_0_sm18_12111 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_11_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_14_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_14_pack, blurx_FIFO_buf8_lane_12);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_14_pack, blurx_FIFO_buf8_lane_13);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_14_pack, blurx_FIFO_buf8_lane_14);
  auto res_blur4_16_update_0_sm18_11109 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_14_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_17_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_17_pack, blurx_FIFO_buf8_lane_15);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_17_pack, blurx_FIFO_buf8_lane_16);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_17_pack, blurx_FIFO_buf8_lane_17);
  auto res_blur4_16_update_0_sm18_10107 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_17_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_20_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_20_pack, blurx_FIFO_buf8_lane_18);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_20_pack, blurx_FIFO_buf8_lane_19);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_20_pack, blurx_FIFO_buf8_lane_20);
  auto res_blur4_16_update_0_sm18_9105 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_20_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_23_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_23_pack, blurx_FIFO_buf8_lane_21);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_23_pack, blurx_FIFO_buf8_lane_22);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_23_pack, blurx_FIFO_buf8_lane_23);
  auto res_blur4_16_update_0_sm18_8103 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_23_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_26_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_26_pack, blurx_FIFO_buf8_lane_24);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_26_pack, blurx_FIFO_buf8_lane_25);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_26_pack, blurx_FIFO_buf8_lane_26);
  auto res_blur4_16_update_0_sm18_7101 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_26_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_29_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_29_pack, blurx_FIFO_buf8_lane_27);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_29_pack, blurx_FIFO_buf8_lane_28);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_29_pack, blurx_FIFO_buf8_lane_29);
  auto res_blur4_16_update_0_sm18_699 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_29_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_32_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_32_pack, blurx_FIFO_buf8_lane_30);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_32_pack, blurx_FIFO_buf8_lane_31);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_32_pack, blurx_FIFO_buf8_lane_32);
  auto res_blur4_16_update_0_sm18_597 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_32_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_35_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_35_pack, blurx_FIFO_buf8_lane_33);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_35_pack, blurx_FIFO_buf8_lane_34);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_35_pack, blurx_FIFO_buf8_lane_35);
  auto res_blur4_16_update_0_sm18_495 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_35_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_38_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_38_pack, blurx_FIFO_buf8_lane_36);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_38_pack, blurx_FIFO_buf8_lane_37);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_38_pack, blurx_FIFO_buf8_lane_38);
  auto res_blur4_16_update_0_sm18_393 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_38_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_41_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_41_pack, blurx_FIFO_buf8_lane_39);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_41_pack, blurx_FIFO_buf8_lane_40);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_41_pack, blurx_FIFO_buf8_lane_41);
  auto res_blur4_16_update_0_sm18_291 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_41_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_44_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_44_pack, blurx_FIFO_buf8_lane_42);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_44_pack, blurx_FIFO_buf8_lane_43);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_44_pack, blurx_FIFO_buf8_lane_44);
  auto res_blur4_16_update_0_sm18_189 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_44_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_47_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_47_pack, blurx_FIFO_buf8_lane_45);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_47_pack, blurx_FIFO_buf8_lane_46);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_47_pack, blurx_FIFO_buf8_lane_47);
  auto res_blur4_16_update_0_sm18_087 = blur4_16_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_47_pack);
  hw_uint<256 > return_value253;
  set_at<0, 256, 16>(return_value253, res_blur4_16_update_0_sm18_15117);
  set_at<16, 256, 16>(return_value253, res_blur4_16_update_0_sm18_14115);
  set_at<32, 256, 16>(return_value253, res_blur4_16_update_0_sm18_13113);
  set_at<48, 256, 16>(return_value253, res_blur4_16_update_0_sm18_12111);
  set_at<64, 256, 16>(return_value253, res_blur4_16_update_0_sm18_11109);
  set_at<80, 256, 16>(return_value253, res_blur4_16_update_0_sm18_10107);
  set_at<96, 256, 16>(return_value253, res_blur4_16_update_0_sm18_9105);
  set_at<112, 256, 16>(return_value253, res_blur4_16_update_0_sm18_8103);
  set_at<128, 256, 16>(return_value253, res_blur4_16_update_0_sm18_7101);
  set_at<144, 256, 16>(return_value253, res_blur4_16_update_0_sm18_699);
  set_at<160, 256, 16>(return_value253, res_blur4_16_update_0_sm18_597);
  set_at<176, 256, 16>(return_value253, res_blur4_16_update_0_sm18_495);
  set_at<192, 256, 16>(return_value253, res_blur4_16_update_0_sm18_393);
  set_at<208, 256, 16>(return_value253, res_blur4_16_update_0_sm18_291);
  set_at<224, 256, 16>(return_value253, res_blur4_16_update_0_sm18_189);
  set_at<240, 256, 16>(return_value253, res_blur4_16_update_0_sm18_087);
  return return_value253;

}

hw_uint<256> blurx_1_cu255(hw_uint<16*48>& input_FIFO_buf12) {
  hw_uint<16> input_FIFO_buf12_lane_0 = input_FIFO_buf12.extract<0, 15>();
  hw_uint<16> input_FIFO_buf12_lane_1 = input_FIFO_buf12.extract<16, 31>();
  hw_uint<16> input_FIFO_buf12_lane_2 = input_FIFO_buf12.extract<32, 47>();
  hw_uint<16> input_FIFO_buf12_lane_3 = input_FIFO_buf12.extract<48, 63>();
  hw_uint<16> input_FIFO_buf12_lane_4 = input_FIFO_buf12.extract<64, 79>();
  hw_uint<16> input_FIFO_buf12_lane_5 = input_FIFO_buf12.extract<80, 95>();
  hw_uint<16> input_FIFO_buf12_lane_6 = input_FIFO_buf12.extract<96, 111>();
  hw_uint<16> input_FIFO_buf12_lane_7 = input_FIFO_buf12.extract<112, 127>();
  hw_uint<16> input_FIFO_buf12_lane_8 = input_FIFO_buf12.extract<128, 143>();
  hw_uint<16> input_FIFO_buf12_lane_9 = input_FIFO_buf12.extract<144, 159>();
  hw_uint<16> input_FIFO_buf12_lane_10 = input_FIFO_buf12.extract<160, 175>();
  hw_uint<16> input_FIFO_buf12_lane_11 = input_FIFO_buf12.extract<176, 191>();
  hw_uint<16> input_FIFO_buf12_lane_12 = input_FIFO_buf12.extract<192, 207>();
  hw_uint<16> input_FIFO_buf12_lane_13 = input_FIFO_buf12.extract<208, 223>();
  hw_uint<16> input_FIFO_buf12_lane_14 = input_FIFO_buf12.extract<224, 239>();
  hw_uint<16> input_FIFO_buf12_lane_15 = input_FIFO_buf12.extract<240, 255>();
  hw_uint<16> input_FIFO_buf12_lane_16 = input_FIFO_buf12.extract<256, 271>();
  hw_uint<16> input_FIFO_buf12_lane_17 = input_FIFO_buf12.extract<272, 287>();
  hw_uint<16> input_FIFO_buf12_lane_18 = input_FIFO_buf12.extract<288, 303>();
  hw_uint<16> input_FIFO_buf12_lane_19 = input_FIFO_buf12.extract<304, 319>();
  hw_uint<16> input_FIFO_buf12_lane_20 = input_FIFO_buf12.extract<320, 335>();
  hw_uint<16> input_FIFO_buf12_lane_21 = input_FIFO_buf12.extract<336, 351>();
  hw_uint<16> input_FIFO_buf12_lane_22 = input_FIFO_buf12.extract<352, 367>();
  hw_uint<16> input_FIFO_buf12_lane_23 = input_FIFO_buf12.extract<368, 383>();
  hw_uint<16> input_FIFO_buf12_lane_24 = input_FIFO_buf12.extract<384, 399>();
  hw_uint<16> input_FIFO_buf12_lane_25 = input_FIFO_buf12.extract<400, 415>();
  hw_uint<16> input_FIFO_buf12_lane_26 = input_FIFO_buf12.extract<416, 431>();
  hw_uint<16> input_FIFO_buf12_lane_27 = input_FIFO_buf12.extract<432, 447>();
  hw_uint<16> input_FIFO_buf12_lane_28 = input_FIFO_buf12.extract<448, 463>();
  hw_uint<16> input_FIFO_buf12_lane_29 = input_FIFO_buf12.extract<464, 479>();
  hw_uint<16> input_FIFO_buf12_lane_30 = input_FIFO_buf12.extract<480, 495>();
  hw_uint<16> input_FIFO_buf12_lane_31 = input_FIFO_buf12.extract<496, 511>();
  hw_uint<16> input_FIFO_buf12_lane_32 = input_FIFO_buf12.extract<512, 527>();
  hw_uint<16> input_FIFO_buf12_lane_33 = input_FIFO_buf12.extract<528, 543>();
  hw_uint<16> input_FIFO_buf12_lane_34 = input_FIFO_buf12.extract<544, 559>();
  hw_uint<16> input_FIFO_buf12_lane_35 = input_FIFO_buf12.extract<560, 575>();
  hw_uint<16> input_FIFO_buf12_lane_36 = input_FIFO_buf12.extract<576, 591>();
  hw_uint<16> input_FIFO_buf12_lane_37 = input_FIFO_buf12.extract<592, 607>();
  hw_uint<16> input_FIFO_buf12_lane_38 = input_FIFO_buf12.extract<608, 623>();
  hw_uint<16> input_FIFO_buf12_lane_39 = input_FIFO_buf12.extract<624, 639>();
  hw_uint<16> input_FIFO_buf12_lane_40 = input_FIFO_buf12.extract<640, 655>();
  hw_uint<16> input_FIFO_buf12_lane_41 = input_FIFO_buf12.extract<656, 671>();
  hw_uint<16> input_FIFO_buf12_lane_42 = input_FIFO_buf12.extract<672, 687>();
  hw_uint<16> input_FIFO_buf12_lane_43 = input_FIFO_buf12.extract<688, 703>();
  hw_uint<16> input_FIFO_buf12_lane_44 = input_FIFO_buf12.extract<704, 719>();
  hw_uint<16> input_FIFO_buf12_lane_45 = input_FIFO_buf12.extract<720, 735>();
  hw_uint<16> input_FIFO_buf12_lane_46 = input_FIFO_buf12.extract<736, 751>();
  hw_uint<16> input_FIFO_buf12_lane_47 = input_FIFO_buf12.extract<752, 767>();

	
  hw_uint<48 > input_FIFO_buf12_lane_2_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_2_pack, input_FIFO_buf12_lane_0);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_2_pack, input_FIFO_buf12_lane_1);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_2_pack, input_FIFO_buf12_lane_2);
  auto res_blurx_update_0_sm19_15149 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_2_pack);

  hw_uint<48 > input_FIFO_buf12_lane_5_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_5_pack, input_FIFO_buf12_lane_3);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_5_pack, input_FIFO_buf12_lane_4);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_5_pack, input_FIFO_buf12_lane_5);
  auto res_blurx_update_0_sm19_14147 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_5_pack);

  hw_uint<48 > input_FIFO_buf12_lane_8_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_8_pack, input_FIFO_buf12_lane_6);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_8_pack, input_FIFO_buf12_lane_7);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_8_pack, input_FIFO_buf12_lane_8);
  auto res_blurx_update_0_sm19_13145 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_8_pack);

  hw_uint<48 > input_FIFO_buf12_lane_11_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_11_pack, input_FIFO_buf12_lane_9);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_11_pack, input_FIFO_buf12_lane_10);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_11_pack, input_FIFO_buf12_lane_11);
  auto res_blurx_update_0_sm19_12143 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_11_pack);

  hw_uint<48 > input_FIFO_buf12_lane_14_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_14_pack, input_FIFO_buf12_lane_12);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_14_pack, input_FIFO_buf12_lane_13);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_14_pack, input_FIFO_buf12_lane_14);
  auto res_blurx_update_0_sm19_11141 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_14_pack);

  hw_uint<48 > input_FIFO_buf12_lane_17_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_17_pack, input_FIFO_buf12_lane_15);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_17_pack, input_FIFO_buf12_lane_16);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_17_pack, input_FIFO_buf12_lane_17);
  auto res_blurx_update_0_sm19_10139 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_17_pack);

  hw_uint<48 > input_FIFO_buf12_lane_20_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_20_pack, input_FIFO_buf12_lane_18);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_20_pack, input_FIFO_buf12_lane_19);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_20_pack, input_FIFO_buf12_lane_20);
  auto res_blurx_update_0_sm19_9137 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_20_pack);

  hw_uint<48 > input_FIFO_buf12_lane_23_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_23_pack, input_FIFO_buf12_lane_21);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_23_pack, input_FIFO_buf12_lane_22);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_23_pack, input_FIFO_buf12_lane_23);
  auto res_blurx_update_0_sm19_8135 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_23_pack);

  hw_uint<48 > input_FIFO_buf12_lane_26_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_26_pack, input_FIFO_buf12_lane_24);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_26_pack, input_FIFO_buf12_lane_25);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_26_pack, input_FIFO_buf12_lane_26);
  auto res_blurx_update_0_sm19_7133 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_26_pack);

  hw_uint<48 > input_FIFO_buf12_lane_29_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_29_pack, input_FIFO_buf12_lane_27);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_29_pack, input_FIFO_buf12_lane_28);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_29_pack, input_FIFO_buf12_lane_29);
  auto res_blurx_update_0_sm19_6131 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_29_pack);

  hw_uint<48 > input_FIFO_buf12_lane_32_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_32_pack, input_FIFO_buf12_lane_30);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_32_pack, input_FIFO_buf12_lane_31);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_32_pack, input_FIFO_buf12_lane_32);
  auto res_blurx_update_0_sm19_5129 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_32_pack);

  hw_uint<48 > input_FIFO_buf12_lane_35_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_35_pack, input_FIFO_buf12_lane_33);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_35_pack, input_FIFO_buf12_lane_34);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_35_pack, input_FIFO_buf12_lane_35);
  auto res_blurx_update_0_sm19_4127 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_35_pack);

  hw_uint<48 > input_FIFO_buf12_lane_38_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_38_pack, input_FIFO_buf12_lane_36);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_38_pack, input_FIFO_buf12_lane_37);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_38_pack, input_FIFO_buf12_lane_38);
  auto res_blurx_update_0_sm19_3125 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_38_pack);

  hw_uint<48 > input_FIFO_buf12_lane_41_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_41_pack, input_FIFO_buf12_lane_39);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_41_pack, input_FIFO_buf12_lane_40);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_41_pack, input_FIFO_buf12_lane_41);
  auto res_blurx_update_0_sm19_2123 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_41_pack);

  hw_uint<48 > input_FIFO_buf12_lane_44_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_44_pack, input_FIFO_buf12_lane_42);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_44_pack, input_FIFO_buf12_lane_43);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_44_pack, input_FIFO_buf12_lane_44);
  auto res_blurx_update_0_sm19_1121 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_44_pack);

  hw_uint<48 > input_FIFO_buf12_lane_47_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_47_pack, input_FIFO_buf12_lane_45);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_47_pack, input_FIFO_buf12_lane_46);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_47_pack, input_FIFO_buf12_lane_47);
  auto res_blurx_update_0_sm19_0119 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_47_pack);
  hw_uint<256 > return_value256;
  set_at<0, 256, 16>(return_value256, res_blurx_update_0_sm19_15149);
  set_at<16, 256, 16>(return_value256, res_blurx_update_0_sm19_14147);
  set_at<32, 256, 16>(return_value256, res_blurx_update_0_sm19_13145);
  set_at<48, 256, 16>(return_value256, res_blurx_update_0_sm19_12143);
  set_at<64, 256, 16>(return_value256, res_blurx_update_0_sm19_11141);
  set_at<80, 256, 16>(return_value256, res_blurx_update_0_sm19_10139);
  set_at<96, 256, 16>(return_value256, res_blurx_update_0_sm19_9137);
  set_at<112, 256, 16>(return_value256, res_blurx_update_0_sm19_8135);
  set_at<128, 256, 16>(return_value256, res_blurx_update_0_sm19_7133);
  set_at<144, 256, 16>(return_value256, res_blurx_update_0_sm19_6131);
  set_at<160, 256, 16>(return_value256, res_blurx_update_0_sm19_5129);
  set_at<176, 256, 16>(return_value256, res_blurx_update_0_sm19_4127);
  set_at<192, 256, 16>(return_value256, res_blurx_update_0_sm19_3125);
  set_at<208, 256, 16>(return_value256, res_blurx_update_0_sm19_2123);
  set_at<224, 256, 16>(return_value256, res_blurx_update_0_sm19_1121);
  set_at<240, 256, 16>(return_value256, res_blurx_update_0_sm19_0119);
  return return_value256;

}

hw_uint<256> input_ld5_cu258(hw_uint<16*16>& input) {
  return input;
}

hw_uint<256> blurx_to_gp_00_ld9_cu260(hw_uint<16*16>& blurx_to_gp_00) {
  return blurx_to_gp_00;
}

hw_uint<256> input_to_gp_14_ld13_cu262(hw_uint<16*16>& input_to_gp_14) {
  return input_to_gp_14;
}

