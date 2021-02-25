#include "blur4_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> blurx_to_gp_00_ld9_cu471(hw_uint<16*32>& blurx_to_gp_00) {
  return blurx_to_gp_00;
}

hw_uint<512> blurx_ld1_cu473(hw_uint<16*32>& blurx) {
  return blurx;
}

hw_uint<512> input_to_gp_14_ld13_cu475(hw_uint<16*32>& input_to_gp_14) {
  return input_to_gp_14;
}

hw_uint<512> input_ld5_cu477(hw_uint<16*32>& input) {
  return input;
}

hw_uint<512> input_1_cu479(hw_uint<16*32>& input_arg) {
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
  hw_uint<16> input_arg_lane_16 = input_arg.extract<256, 271>();
  hw_uint<16> input_arg_lane_17 = input_arg.extract<272, 287>();
  hw_uint<16> input_arg_lane_18 = input_arg.extract<288, 303>();
  hw_uint<16> input_arg_lane_19 = input_arg.extract<304, 319>();
  hw_uint<16> input_arg_lane_20 = input_arg.extract<320, 335>();
  hw_uint<16> input_arg_lane_21 = input_arg.extract<336, 351>();
  hw_uint<16> input_arg_lane_22 = input_arg.extract<352, 367>();
  hw_uint<16> input_arg_lane_23 = input_arg.extract<368, 383>();
  hw_uint<16> input_arg_lane_24 = input_arg.extract<384, 399>();
  hw_uint<16> input_arg_lane_25 = input_arg.extract<400, 415>();
  hw_uint<16> input_arg_lane_26 = input_arg.extract<416, 431>();
  hw_uint<16> input_arg_lane_27 = input_arg.extract<432, 447>();
  hw_uint<16> input_arg_lane_28 = input_arg.extract<448, 463>();
  hw_uint<16> input_arg_lane_29 = input_arg.extract<464, 479>();
  hw_uint<16> input_arg_lane_30 = input_arg.extract<480, 495>();
  hw_uint<16> input_arg_lane_31 = input_arg.extract<496, 511>();

	
  hw_uint<16 > input_arg_lane_0_pack;
  set_at<0, 16, 16>(input_arg_lane_0_pack, input_arg_lane_0);
  auto res_input_update_0_sm20_31341 = input_generated_compute_unrolled_1(input_arg_lane_0_pack);

  hw_uint<16 > input_arg_lane_1_pack;
  set_at<0, 16, 16>(input_arg_lane_1_pack, input_arg_lane_1);
  auto res_input_update_0_sm20_30339 = input_generated_compute_unrolled_1(input_arg_lane_1_pack);

  hw_uint<16 > input_arg_lane_2_pack;
  set_at<0, 16, 16>(input_arg_lane_2_pack, input_arg_lane_2);
  auto res_input_update_0_sm20_29337 = input_generated_compute_unrolled_1(input_arg_lane_2_pack);

  hw_uint<16 > input_arg_lane_3_pack;
  set_at<0, 16, 16>(input_arg_lane_3_pack, input_arg_lane_3);
  auto res_input_update_0_sm20_28335 = input_generated_compute_unrolled_1(input_arg_lane_3_pack);

  hw_uint<16 > input_arg_lane_4_pack;
  set_at<0, 16, 16>(input_arg_lane_4_pack, input_arg_lane_4);
  auto res_input_update_0_sm20_27333 = input_generated_compute_unrolled_1(input_arg_lane_4_pack);

  hw_uint<16 > input_arg_lane_5_pack;
  set_at<0, 16, 16>(input_arg_lane_5_pack, input_arg_lane_5);
  auto res_input_update_0_sm20_26331 = input_generated_compute_unrolled_1(input_arg_lane_5_pack);

  hw_uint<16 > input_arg_lane_6_pack;
  set_at<0, 16, 16>(input_arg_lane_6_pack, input_arg_lane_6);
  auto res_input_update_0_sm20_25329 = input_generated_compute_unrolled_1(input_arg_lane_6_pack);

  hw_uint<16 > input_arg_lane_7_pack;
  set_at<0, 16, 16>(input_arg_lane_7_pack, input_arg_lane_7);
  auto res_input_update_0_sm20_24327 = input_generated_compute_unrolled_1(input_arg_lane_7_pack);

  hw_uint<16 > input_arg_lane_8_pack;
  set_at<0, 16, 16>(input_arg_lane_8_pack, input_arg_lane_8);
  auto res_input_update_0_sm20_23325 = input_generated_compute_unrolled_1(input_arg_lane_8_pack);

  hw_uint<16 > input_arg_lane_9_pack;
  set_at<0, 16, 16>(input_arg_lane_9_pack, input_arg_lane_9);
  auto res_input_update_0_sm20_22323 = input_generated_compute_unrolled_1(input_arg_lane_9_pack);

  hw_uint<16 > input_arg_lane_10_pack;
  set_at<0, 16, 16>(input_arg_lane_10_pack, input_arg_lane_10);
  auto res_input_update_0_sm20_21321 = input_generated_compute_unrolled_1(input_arg_lane_10_pack);

  hw_uint<16 > input_arg_lane_11_pack;
  set_at<0, 16, 16>(input_arg_lane_11_pack, input_arg_lane_11);
  auto res_input_update_0_sm20_20319 = input_generated_compute_unrolled_1(input_arg_lane_11_pack);

  hw_uint<16 > input_arg_lane_12_pack;
  set_at<0, 16, 16>(input_arg_lane_12_pack, input_arg_lane_12);
  auto res_input_update_0_sm20_19317 = input_generated_compute_unrolled_1(input_arg_lane_12_pack);

  hw_uint<16 > input_arg_lane_13_pack;
  set_at<0, 16, 16>(input_arg_lane_13_pack, input_arg_lane_13);
  auto res_input_update_0_sm20_18315 = input_generated_compute_unrolled_1(input_arg_lane_13_pack);

  hw_uint<16 > input_arg_lane_14_pack;
  set_at<0, 16, 16>(input_arg_lane_14_pack, input_arg_lane_14);
  auto res_input_update_0_sm20_17313 = input_generated_compute_unrolled_1(input_arg_lane_14_pack);

  hw_uint<16 > input_arg_lane_15_pack;
  set_at<0, 16, 16>(input_arg_lane_15_pack, input_arg_lane_15);
  auto res_input_update_0_sm20_16311 = input_generated_compute_unrolled_1(input_arg_lane_15_pack);

  hw_uint<16 > input_arg_lane_16_pack;
  set_at<0, 16, 16>(input_arg_lane_16_pack, input_arg_lane_16);
  auto res_input_update_0_sm20_15309 = input_generated_compute_unrolled_1(input_arg_lane_16_pack);

  hw_uint<16 > input_arg_lane_17_pack;
  set_at<0, 16, 16>(input_arg_lane_17_pack, input_arg_lane_17);
  auto res_input_update_0_sm20_14307 = input_generated_compute_unrolled_1(input_arg_lane_17_pack);

  hw_uint<16 > input_arg_lane_18_pack;
  set_at<0, 16, 16>(input_arg_lane_18_pack, input_arg_lane_18);
  auto res_input_update_0_sm20_13305 = input_generated_compute_unrolled_1(input_arg_lane_18_pack);

  hw_uint<16 > input_arg_lane_19_pack;
  set_at<0, 16, 16>(input_arg_lane_19_pack, input_arg_lane_19);
  auto res_input_update_0_sm20_12303 = input_generated_compute_unrolled_1(input_arg_lane_19_pack);

  hw_uint<16 > input_arg_lane_20_pack;
  set_at<0, 16, 16>(input_arg_lane_20_pack, input_arg_lane_20);
  auto res_input_update_0_sm20_11301 = input_generated_compute_unrolled_1(input_arg_lane_20_pack);

  hw_uint<16 > input_arg_lane_21_pack;
  set_at<0, 16, 16>(input_arg_lane_21_pack, input_arg_lane_21);
  auto res_input_update_0_sm20_10299 = input_generated_compute_unrolled_1(input_arg_lane_21_pack);

  hw_uint<16 > input_arg_lane_22_pack;
  set_at<0, 16, 16>(input_arg_lane_22_pack, input_arg_lane_22);
  auto res_input_update_0_sm20_9297 = input_generated_compute_unrolled_1(input_arg_lane_22_pack);

  hw_uint<16 > input_arg_lane_23_pack;
  set_at<0, 16, 16>(input_arg_lane_23_pack, input_arg_lane_23);
  auto res_input_update_0_sm20_8295 = input_generated_compute_unrolled_1(input_arg_lane_23_pack);

  hw_uint<16 > input_arg_lane_24_pack;
  set_at<0, 16, 16>(input_arg_lane_24_pack, input_arg_lane_24);
  auto res_input_update_0_sm20_7293 = input_generated_compute_unrolled_1(input_arg_lane_24_pack);

  hw_uint<16 > input_arg_lane_25_pack;
  set_at<0, 16, 16>(input_arg_lane_25_pack, input_arg_lane_25);
  auto res_input_update_0_sm20_6291 = input_generated_compute_unrolled_1(input_arg_lane_25_pack);

  hw_uint<16 > input_arg_lane_26_pack;
  set_at<0, 16, 16>(input_arg_lane_26_pack, input_arg_lane_26);
  auto res_input_update_0_sm20_5289 = input_generated_compute_unrolled_1(input_arg_lane_26_pack);

  hw_uint<16 > input_arg_lane_27_pack;
  set_at<0, 16, 16>(input_arg_lane_27_pack, input_arg_lane_27);
  auto res_input_update_0_sm20_4287 = input_generated_compute_unrolled_1(input_arg_lane_27_pack);

  hw_uint<16 > input_arg_lane_28_pack;
  set_at<0, 16, 16>(input_arg_lane_28_pack, input_arg_lane_28);
  auto res_input_update_0_sm20_3285 = input_generated_compute_unrolled_1(input_arg_lane_28_pack);

  hw_uint<16 > input_arg_lane_29_pack;
  set_at<0, 16, 16>(input_arg_lane_29_pack, input_arg_lane_29);
  auto res_input_update_0_sm20_2283 = input_generated_compute_unrolled_1(input_arg_lane_29_pack);

  hw_uint<16 > input_arg_lane_30_pack;
  set_at<0, 16, 16>(input_arg_lane_30_pack, input_arg_lane_30);
  auto res_input_update_0_sm20_1281 = input_generated_compute_unrolled_1(input_arg_lane_30_pack);

  hw_uint<16 > input_arg_lane_31_pack;
  set_at<0, 16, 16>(input_arg_lane_31_pack, input_arg_lane_31);
  auto res_input_update_0_sm20_0279 = input_generated_compute_unrolled_1(input_arg_lane_31_pack);
  hw_uint<512 > return_value480;
  set_at<0, 512, 16>(return_value480, res_input_update_0_sm20_31341);
  set_at<16, 512, 16>(return_value480, res_input_update_0_sm20_30339);
  set_at<32, 512, 16>(return_value480, res_input_update_0_sm20_29337);
  set_at<48, 512, 16>(return_value480, res_input_update_0_sm20_28335);
  set_at<64, 512, 16>(return_value480, res_input_update_0_sm20_27333);
  set_at<80, 512, 16>(return_value480, res_input_update_0_sm20_26331);
  set_at<96, 512, 16>(return_value480, res_input_update_0_sm20_25329);
  set_at<112, 512, 16>(return_value480, res_input_update_0_sm20_24327);
  set_at<128, 512, 16>(return_value480, res_input_update_0_sm20_23325);
  set_at<144, 512, 16>(return_value480, res_input_update_0_sm20_22323);
  set_at<160, 512, 16>(return_value480, res_input_update_0_sm20_21321);
  set_at<176, 512, 16>(return_value480, res_input_update_0_sm20_20319);
  set_at<192, 512, 16>(return_value480, res_input_update_0_sm20_19317);
  set_at<208, 512, 16>(return_value480, res_input_update_0_sm20_18315);
  set_at<224, 512, 16>(return_value480, res_input_update_0_sm20_17313);
  set_at<240, 512, 16>(return_value480, res_input_update_0_sm20_16311);
  set_at<256, 512, 16>(return_value480, res_input_update_0_sm20_15309);
  set_at<272, 512, 16>(return_value480, res_input_update_0_sm20_14307);
  set_at<288, 512, 16>(return_value480, res_input_update_0_sm20_13305);
  set_at<304, 512, 16>(return_value480, res_input_update_0_sm20_12303);
  set_at<320, 512, 16>(return_value480, res_input_update_0_sm20_11301);
  set_at<336, 512, 16>(return_value480, res_input_update_0_sm20_10299);
  set_at<352, 512, 16>(return_value480, res_input_update_0_sm20_9297);
  set_at<368, 512, 16>(return_value480, res_input_update_0_sm20_8295);
  set_at<384, 512, 16>(return_value480, res_input_update_0_sm20_7293);
  set_at<400, 512, 16>(return_value480, res_input_update_0_sm20_6291);
  set_at<416, 512, 16>(return_value480, res_input_update_0_sm20_5289);
  set_at<432, 512, 16>(return_value480, res_input_update_0_sm20_4287);
  set_at<448, 512, 16>(return_value480, res_input_update_0_sm20_3285);
  set_at<464, 512, 16>(return_value480, res_input_update_0_sm20_2283);
  set_at<480, 512, 16>(return_value480, res_input_update_0_sm20_1281);
  set_at<496, 512, 16>(return_value480, res_input_update_0_sm20_0279);
  return return_value480;

}

hw_uint<512> blurx_1_cu482(hw_uint<16*96>& input_FIFO_buf12) {
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
  hw_uint<16> input_FIFO_buf12_lane_48 = input_FIFO_buf12.extract<768, 783>();
  hw_uint<16> input_FIFO_buf12_lane_49 = input_FIFO_buf12.extract<784, 799>();
  hw_uint<16> input_FIFO_buf12_lane_50 = input_FIFO_buf12.extract<800, 815>();
  hw_uint<16> input_FIFO_buf12_lane_51 = input_FIFO_buf12.extract<816, 831>();
  hw_uint<16> input_FIFO_buf12_lane_52 = input_FIFO_buf12.extract<832, 847>();
  hw_uint<16> input_FIFO_buf12_lane_53 = input_FIFO_buf12.extract<848, 863>();
  hw_uint<16> input_FIFO_buf12_lane_54 = input_FIFO_buf12.extract<864, 879>();
  hw_uint<16> input_FIFO_buf12_lane_55 = input_FIFO_buf12.extract<880, 895>();
  hw_uint<16> input_FIFO_buf12_lane_56 = input_FIFO_buf12.extract<896, 911>();
  hw_uint<16> input_FIFO_buf12_lane_57 = input_FIFO_buf12.extract<912, 927>();
  hw_uint<16> input_FIFO_buf12_lane_58 = input_FIFO_buf12.extract<928, 943>();
  hw_uint<16> input_FIFO_buf12_lane_59 = input_FIFO_buf12.extract<944, 959>();
  hw_uint<16> input_FIFO_buf12_lane_60 = input_FIFO_buf12.extract<960, 975>();
  hw_uint<16> input_FIFO_buf12_lane_61 = input_FIFO_buf12.extract<976, 991>();
  hw_uint<16> input_FIFO_buf12_lane_62 = input_FIFO_buf12.extract<992, 1007>();
  hw_uint<16> input_FIFO_buf12_lane_63 = input_FIFO_buf12.extract<1008, 1023>();
  hw_uint<16> input_FIFO_buf12_lane_64 = input_FIFO_buf12.extract<1024, 1039>();
  hw_uint<16> input_FIFO_buf12_lane_65 = input_FIFO_buf12.extract<1040, 1055>();
  hw_uint<16> input_FIFO_buf12_lane_66 = input_FIFO_buf12.extract<1056, 1071>();
  hw_uint<16> input_FIFO_buf12_lane_67 = input_FIFO_buf12.extract<1072, 1087>();
  hw_uint<16> input_FIFO_buf12_lane_68 = input_FIFO_buf12.extract<1088, 1103>();
  hw_uint<16> input_FIFO_buf12_lane_69 = input_FIFO_buf12.extract<1104, 1119>();
  hw_uint<16> input_FIFO_buf12_lane_70 = input_FIFO_buf12.extract<1120, 1135>();
  hw_uint<16> input_FIFO_buf12_lane_71 = input_FIFO_buf12.extract<1136, 1151>();
  hw_uint<16> input_FIFO_buf12_lane_72 = input_FIFO_buf12.extract<1152, 1167>();
  hw_uint<16> input_FIFO_buf12_lane_73 = input_FIFO_buf12.extract<1168, 1183>();
  hw_uint<16> input_FIFO_buf12_lane_74 = input_FIFO_buf12.extract<1184, 1199>();
  hw_uint<16> input_FIFO_buf12_lane_75 = input_FIFO_buf12.extract<1200, 1215>();
  hw_uint<16> input_FIFO_buf12_lane_76 = input_FIFO_buf12.extract<1216, 1231>();
  hw_uint<16> input_FIFO_buf12_lane_77 = input_FIFO_buf12.extract<1232, 1247>();
  hw_uint<16> input_FIFO_buf12_lane_78 = input_FIFO_buf12.extract<1248, 1263>();
  hw_uint<16> input_FIFO_buf12_lane_79 = input_FIFO_buf12.extract<1264, 1279>();
  hw_uint<16> input_FIFO_buf12_lane_80 = input_FIFO_buf12.extract<1280, 1295>();
  hw_uint<16> input_FIFO_buf12_lane_81 = input_FIFO_buf12.extract<1296, 1311>();
  hw_uint<16> input_FIFO_buf12_lane_82 = input_FIFO_buf12.extract<1312, 1327>();
  hw_uint<16> input_FIFO_buf12_lane_83 = input_FIFO_buf12.extract<1328, 1343>();
  hw_uint<16> input_FIFO_buf12_lane_84 = input_FIFO_buf12.extract<1344, 1359>();
  hw_uint<16> input_FIFO_buf12_lane_85 = input_FIFO_buf12.extract<1360, 1375>();
  hw_uint<16> input_FIFO_buf12_lane_86 = input_FIFO_buf12.extract<1376, 1391>();
  hw_uint<16> input_FIFO_buf12_lane_87 = input_FIFO_buf12.extract<1392, 1407>();
  hw_uint<16> input_FIFO_buf12_lane_88 = input_FIFO_buf12.extract<1408, 1423>();
  hw_uint<16> input_FIFO_buf12_lane_89 = input_FIFO_buf12.extract<1424, 1439>();
  hw_uint<16> input_FIFO_buf12_lane_90 = input_FIFO_buf12.extract<1440, 1455>();
  hw_uint<16> input_FIFO_buf12_lane_91 = input_FIFO_buf12.extract<1456, 1471>();
  hw_uint<16> input_FIFO_buf12_lane_92 = input_FIFO_buf12.extract<1472, 1487>();
  hw_uint<16> input_FIFO_buf12_lane_93 = input_FIFO_buf12.extract<1488, 1503>();
  hw_uint<16> input_FIFO_buf12_lane_94 = input_FIFO_buf12.extract<1504, 1519>();
  hw_uint<16> input_FIFO_buf12_lane_95 = input_FIFO_buf12.extract<1520, 1535>();

	
  hw_uint<48 > input_FIFO_buf12_lane_2_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_2_pack, input_FIFO_buf12_lane_0);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_2_pack, input_FIFO_buf12_lane_1);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_2_pack, input_FIFO_buf12_lane_2);
  auto res_blurx_update_0_sm21_31405 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_2_pack);

  hw_uint<48 > input_FIFO_buf12_lane_5_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_5_pack, input_FIFO_buf12_lane_3);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_5_pack, input_FIFO_buf12_lane_4);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_5_pack, input_FIFO_buf12_lane_5);
  auto res_blurx_update_0_sm21_30403 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_5_pack);

  hw_uint<48 > input_FIFO_buf12_lane_8_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_8_pack, input_FIFO_buf12_lane_6);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_8_pack, input_FIFO_buf12_lane_7);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_8_pack, input_FIFO_buf12_lane_8);
  auto res_blurx_update_0_sm21_29401 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_8_pack);

  hw_uint<48 > input_FIFO_buf12_lane_11_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_11_pack, input_FIFO_buf12_lane_9);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_11_pack, input_FIFO_buf12_lane_10);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_11_pack, input_FIFO_buf12_lane_11);
  auto res_blurx_update_0_sm21_28399 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_11_pack);

  hw_uint<48 > input_FIFO_buf12_lane_14_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_14_pack, input_FIFO_buf12_lane_12);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_14_pack, input_FIFO_buf12_lane_13);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_14_pack, input_FIFO_buf12_lane_14);
  auto res_blurx_update_0_sm21_27397 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_14_pack);

  hw_uint<48 > input_FIFO_buf12_lane_17_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_17_pack, input_FIFO_buf12_lane_15);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_17_pack, input_FIFO_buf12_lane_16);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_17_pack, input_FIFO_buf12_lane_17);
  auto res_blurx_update_0_sm21_26395 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_17_pack);

  hw_uint<48 > input_FIFO_buf12_lane_20_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_20_pack, input_FIFO_buf12_lane_18);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_20_pack, input_FIFO_buf12_lane_19);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_20_pack, input_FIFO_buf12_lane_20);
  auto res_blurx_update_0_sm21_25393 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_20_pack);

  hw_uint<48 > input_FIFO_buf12_lane_23_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_23_pack, input_FIFO_buf12_lane_21);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_23_pack, input_FIFO_buf12_lane_22);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_23_pack, input_FIFO_buf12_lane_23);
  auto res_blurx_update_0_sm21_24391 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_23_pack);

  hw_uint<48 > input_FIFO_buf12_lane_26_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_26_pack, input_FIFO_buf12_lane_24);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_26_pack, input_FIFO_buf12_lane_25);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_26_pack, input_FIFO_buf12_lane_26);
  auto res_blurx_update_0_sm21_23389 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_26_pack);

  hw_uint<48 > input_FIFO_buf12_lane_29_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_29_pack, input_FIFO_buf12_lane_27);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_29_pack, input_FIFO_buf12_lane_28);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_29_pack, input_FIFO_buf12_lane_29);
  auto res_blurx_update_0_sm21_22387 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_29_pack);

  hw_uint<48 > input_FIFO_buf12_lane_32_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_32_pack, input_FIFO_buf12_lane_30);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_32_pack, input_FIFO_buf12_lane_31);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_32_pack, input_FIFO_buf12_lane_32);
  auto res_blurx_update_0_sm21_21385 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_32_pack);

  hw_uint<48 > input_FIFO_buf12_lane_35_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_35_pack, input_FIFO_buf12_lane_33);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_35_pack, input_FIFO_buf12_lane_34);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_35_pack, input_FIFO_buf12_lane_35);
  auto res_blurx_update_0_sm21_20383 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_35_pack);

  hw_uint<48 > input_FIFO_buf12_lane_38_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_38_pack, input_FIFO_buf12_lane_36);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_38_pack, input_FIFO_buf12_lane_37);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_38_pack, input_FIFO_buf12_lane_38);
  auto res_blurx_update_0_sm21_19381 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_38_pack);

  hw_uint<48 > input_FIFO_buf12_lane_41_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_41_pack, input_FIFO_buf12_lane_39);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_41_pack, input_FIFO_buf12_lane_40);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_41_pack, input_FIFO_buf12_lane_41);
  auto res_blurx_update_0_sm21_18379 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_41_pack);

  hw_uint<48 > input_FIFO_buf12_lane_44_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_44_pack, input_FIFO_buf12_lane_42);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_44_pack, input_FIFO_buf12_lane_43);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_44_pack, input_FIFO_buf12_lane_44);
  auto res_blurx_update_0_sm21_17377 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_44_pack);

  hw_uint<48 > input_FIFO_buf12_lane_47_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_47_pack, input_FIFO_buf12_lane_45);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_47_pack, input_FIFO_buf12_lane_46);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_47_pack, input_FIFO_buf12_lane_47);
  auto res_blurx_update_0_sm21_16375 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_47_pack);

  hw_uint<48 > input_FIFO_buf12_lane_50_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_50_pack, input_FIFO_buf12_lane_48);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_50_pack, input_FIFO_buf12_lane_49);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_50_pack, input_FIFO_buf12_lane_50);
  auto res_blurx_update_0_sm21_15373 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_50_pack);

  hw_uint<48 > input_FIFO_buf12_lane_53_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_53_pack, input_FIFO_buf12_lane_51);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_53_pack, input_FIFO_buf12_lane_52);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_53_pack, input_FIFO_buf12_lane_53);
  auto res_blurx_update_0_sm21_14371 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_53_pack);

  hw_uint<48 > input_FIFO_buf12_lane_56_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_56_pack, input_FIFO_buf12_lane_54);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_56_pack, input_FIFO_buf12_lane_55);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_56_pack, input_FIFO_buf12_lane_56);
  auto res_blurx_update_0_sm21_13369 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_56_pack);

  hw_uint<48 > input_FIFO_buf12_lane_59_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_59_pack, input_FIFO_buf12_lane_57);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_59_pack, input_FIFO_buf12_lane_58);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_59_pack, input_FIFO_buf12_lane_59);
  auto res_blurx_update_0_sm21_12367 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_59_pack);

  hw_uint<48 > input_FIFO_buf12_lane_62_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_62_pack, input_FIFO_buf12_lane_60);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_62_pack, input_FIFO_buf12_lane_61);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_62_pack, input_FIFO_buf12_lane_62);
  auto res_blurx_update_0_sm21_11365 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_62_pack);

  hw_uint<48 > input_FIFO_buf12_lane_65_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_65_pack, input_FIFO_buf12_lane_63);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_65_pack, input_FIFO_buf12_lane_64);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_65_pack, input_FIFO_buf12_lane_65);
  auto res_blurx_update_0_sm21_10363 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_65_pack);

  hw_uint<48 > input_FIFO_buf12_lane_68_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_68_pack, input_FIFO_buf12_lane_66);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_68_pack, input_FIFO_buf12_lane_67);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_68_pack, input_FIFO_buf12_lane_68);
  auto res_blurx_update_0_sm21_9361 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_68_pack);

  hw_uint<48 > input_FIFO_buf12_lane_71_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_71_pack, input_FIFO_buf12_lane_69);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_71_pack, input_FIFO_buf12_lane_70);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_71_pack, input_FIFO_buf12_lane_71);
  auto res_blurx_update_0_sm21_8359 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_71_pack);

  hw_uint<48 > input_FIFO_buf12_lane_74_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_74_pack, input_FIFO_buf12_lane_72);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_74_pack, input_FIFO_buf12_lane_73);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_74_pack, input_FIFO_buf12_lane_74);
  auto res_blurx_update_0_sm21_7357 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_74_pack);

  hw_uint<48 > input_FIFO_buf12_lane_77_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_77_pack, input_FIFO_buf12_lane_75);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_77_pack, input_FIFO_buf12_lane_76);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_77_pack, input_FIFO_buf12_lane_77);
  auto res_blurx_update_0_sm21_6355 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_77_pack);

  hw_uint<48 > input_FIFO_buf12_lane_80_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_80_pack, input_FIFO_buf12_lane_78);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_80_pack, input_FIFO_buf12_lane_79);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_80_pack, input_FIFO_buf12_lane_80);
  auto res_blurx_update_0_sm21_5353 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_80_pack);

  hw_uint<48 > input_FIFO_buf12_lane_83_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_83_pack, input_FIFO_buf12_lane_81);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_83_pack, input_FIFO_buf12_lane_82);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_83_pack, input_FIFO_buf12_lane_83);
  auto res_blurx_update_0_sm21_4351 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_83_pack);

  hw_uint<48 > input_FIFO_buf12_lane_86_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_86_pack, input_FIFO_buf12_lane_84);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_86_pack, input_FIFO_buf12_lane_85);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_86_pack, input_FIFO_buf12_lane_86);
  auto res_blurx_update_0_sm21_3349 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_86_pack);

  hw_uint<48 > input_FIFO_buf12_lane_89_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_89_pack, input_FIFO_buf12_lane_87);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_89_pack, input_FIFO_buf12_lane_88);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_89_pack, input_FIFO_buf12_lane_89);
  auto res_blurx_update_0_sm21_2347 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_89_pack);

  hw_uint<48 > input_FIFO_buf12_lane_92_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_92_pack, input_FIFO_buf12_lane_90);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_92_pack, input_FIFO_buf12_lane_91);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_92_pack, input_FIFO_buf12_lane_92);
  auto res_blurx_update_0_sm21_1345 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_92_pack);

  hw_uint<48 > input_FIFO_buf12_lane_95_pack;
  set_at<0, 48, 16>(input_FIFO_buf12_lane_95_pack, input_FIFO_buf12_lane_93);
  set_at<16, 48, 16>(input_FIFO_buf12_lane_95_pack, input_FIFO_buf12_lane_94);
  set_at<32, 48, 16>(input_FIFO_buf12_lane_95_pack, input_FIFO_buf12_lane_95);
  auto res_blurx_update_0_sm21_0343 = blurx_generated_compute_unrolled_1(input_FIFO_buf12_lane_95_pack);
  hw_uint<512 > return_value483;
  set_at<0, 512, 16>(return_value483, res_blurx_update_0_sm21_31405);
  set_at<16, 512, 16>(return_value483, res_blurx_update_0_sm21_30403);
  set_at<32, 512, 16>(return_value483, res_blurx_update_0_sm21_29401);
  set_at<48, 512, 16>(return_value483, res_blurx_update_0_sm21_28399);
  set_at<64, 512, 16>(return_value483, res_blurx_update_0_sm21_27397);
  set_at<80, 512, 16>(return_value483, res_blurx_update_0_sm21_26395);
  set_at<96, 512, 16>(return_value483, res_blurx_update_0_sm21_25393);
  set_at<112, 512, 16>(return_value483, res_blurx_update_0_sm21_24391);
  set_at<128, 512, 16>(return_value483, res_blurx_update_0_sm21_23389);
  set_at<144, 512, 16>(return_value483, res_blurx_update_0_sm21_22387);
  set_at<160, 512, 16>(return_value483, res_blurx_update_0_sm21_21385);
  set_at<176, 512, 16>(return_value483, res_blurx_update_0_sm21_20383);
  set_at<192, 512, 16>(return_value483, res_blurx_update_0_sm21_19381);
  set_at<208, 512, 16>(return_value483, res_blurx_update_0_sm21_18379);
  set_at<224, 512, 16>(return_value483, res_blurx_update_0_sm21_17377);
  set_at<240, 512, 16>(return_value483, res_blurx_update_0_sm21_16375);
  set_at<256, 512, 16>(return_value483, res_blurx_update_0_sm21_15373);
  set_at<272, 512, 16>(return_value483, res_blurx_update_0_sm21_14371);
  set_at<288, 512, 16>(return_value483, res_blurx_update_0_sm21_13369);
  set_at<304, 512, 16>(return_value483, res_blurx_update_0_sm21_12367);
  set_at<320, 512, 16>(return_value483, res_blurx_update_0_sm21_11365);
  set_at<336, 512, 16>(return_value483, res_blurx_update_0_sm21_10363);
  set_at<352, 512, 16>(return_value483, res_blurx_update_0_sm21_9361);
  set_at<368, 512, 16>(return_value483, res_blurx_update_0_sm21_8359);
  set_at<384, 512, 16>(return_value483, res_blurx_update_0_sm21_7357);
  set_at<400, 512, 16>(return_value483, res_blurx_update_0_sm21_6355);
  set_at<416, 512, 16>(return_value483, res_blurx_update_0_sm21_5353);
  set_at<432, 512, 16>(return_value483, res_blurx_update_0_sm21_4351);
  set_at<448, 512, 16>(return_value483, res_blurx_update_0_sm21_3349);
  set_at<464, 512, 16>(return_value483, res_blurx_update_0_sm21_2347);
  set_at<480, 512, 16>(return_value483, res_blurx_update_0_sm21_1345);
  set_at<496, 512, 16>(return_value483, res_blurx_update_0_sm21_0343);
  return return_value483;

}

hw_uint<512> blur4_32_1_cu485(hw_uint<16*96>& blurx_FIFO_buf8) {
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
  hw_uint<16> blurx_FIFO_buf8_lane_48 = blurx_FIFO_buf8.extract<768, 783>();
  hw_uint<16> blurx_FIFO_buf8_lane_49 = blurx_FIFO_buf8.extract<784, 799>();
  hw_uint<16> blurx_FIFO_buf8_lane_50 = blurx_FIFO_buf8.extract<800, 815>();
  hw_uint<16> blurx_FIFO_buf8_lane_51 = blurx_FIFO_buf8.extract<816, 831>();
  hw_uint<16> blurx_FIFO_buf8_lane_52 = blurx_FIFO_buf8.extract<832, 847>();
  hw_uint<16> blurx_FIFO_buf8_lane_53 = blurx_FIFO_buf8.extract<848, 863>();
  hw_uint<16> blurx_FIFO_buf8_lane_54 = blurx_FIFO_buf8.extract<864, 879>();
  hw_uint<16> blurx_FIFO_buf8_lane_55 = blurx_FIFO_buf8.extract<880, 895>();
  hw_uint<16> blurx_FIFO_buf8_lane_56 = blurx_FIFO_buf8.extract<896, 911>();
  hw_uint<16> blurx_FIFO_buf8_lane_57 = blurx_FIFO_buf8.extract<912, 927>();
  hw_uint<16> blurx_FIFO_buf8_lane_58 = blurx_FIFO_buf8.extract<928, 943>();
  hw_uint<16> blurx_FIFO_buf8_lane_59 = blurx_FIFO_buf8.extract<944, 959>();
  hw_uint<16> blurx_FIFO_buf8_lane_60 = blurx_FIFO_buf8.extract<960, 975>();
  hw_uint<16> blurx_FIFO_buf8_lane_61 = blurx_FIFO_buf8.extract<976, 991>();
  hw_uint<16> blurx_FIFO_buf8_lane_62 = blurx_FIFO_buf8.extract<992, 1007>();
  hw_uint<16> blurx_FIFO_buf8_lane_63 = blurx_FIFO_buf8.extract<1008, 1023>();
  hw_uint<16> blurx_FIFO_buf8_lane_64 = blurx_FIFO_buf8.extract<1024, 1039>();
  hw_uint<16> blurx_FIFO_buf8_lane_65 = blurx_FIFO_buf8.extract<1040, 1055>();
  hw_uint<16> blurx_FIFO_buf8_lane_66 = blurx_FIFO_buf8.extract<1056, 1071>();
  hw_uint<16> blurx_FIFO_buf8_lane_67 = blurx_FIFO_buf8.extract<1072, 1087>();
  hw_uint<16> blurx_FIFO_buf8_lane_68 = blurx_FIFO_buf8.extract<1088, 1103>();
  hw_uint<16> blurx_FIFO_buf8_lane_69 = blurx_FIFO_buf8.extract<1104, 1119>();
  hw_uint<16> blurx_FIFO_buf8_lane_70 = blurx_FIFO_buf8.extract<1120, 1135>();
  hw_uint<16> blurx_FIFO_buf8_lane_71 = blurx_FIFO_buf8.extract<1136, 1151>();
  hw_uint<16> blurx_FIFO_buf8_lane_72 = blurx_FIFO_buf8.extract<1152, 1167>();
  hw_uint<16> blurx_FIFO_buf8_lane_73 = blurx_FIFO_buf8.extract<1168, 1183>();
  hw_uint<16> blurx_FIFO_buf8_lane_74 = blurx_FIFO_buf8.extract<1184, 1199>();
  hw_uint<16> blurx_FIFO_buf8_lane_75 = blurx_FIFO_buf8.extract<1200, 1215>();
  hw_uint<16> blurx_FIFO_buf8_lane_76 = blurx_FIFO_buf8.extract<1216, 1231>();
  hw_uint<16> blurx_FIFO_buf8_lane_77 = blurx_FIFO_buf8.extract<1232, 1247>();
  hw_uint<16> blurx_FIFO_buf8_lane_78 = blurx_FIFO_buf8.extract<1248, 1263>();
  hw_uint<16> blurx_FIFO_buf8_lane_79 = blurx_FIFO_buf8.extract<1264, 1279>();
  hw_uint<16> blurx_FIFO_buf8_lane_80 = blurx_FIFO_buf8.extract<1280, 1295>();
  hw_uint<16> blurx_FIFO_buf8_lane_81 = blurx_FIFO_buf8.extract<1296, 1311>();
  hw_uint<16> blurx_FIFO_buf8_lane_82 = blurx_FIFO_buf8.extract<1312, 1327>();
  hw_uint<16> blurx_FIFO_buf8_lane_83 = blurx_FIFO_buf8.extract<1328, 1343>();
  hw_uint<16> blurx_FIFO_buf8_lane_84 = blurx_FIFO_buf8.extract<1344, 1359>();
  hw_uint<16> blurx_FIFO_buf8_lane_85 = blurx_FIFO_buf8.extract<1360, 1375>();
  hw_uint<16> blurx_FIFO_buf8_lane_86 = blurx_FIFO_buf8.extract<1376, 1391>();
  hw_uint<16> blurx_FIFO_buf8_lane_87 = blurx_FIFO_buf8.extract<1392, 1407>();
  hw_uint<16> blurx_FIFO_buf8_lane_88 = blurx_FIFO_buf8.extract<1408, 1423>();
  hw_uint<16> blurx_FIFO_buf8_lane_89 = blurx_FIFO_buf8.extract<1424, 1439>();
  hw_uint<16> blurx_FIFO_buf8_lane_90 = blurx_FIFO_buf8.extract<1440, 1455>();
  hw_uint<16> blurx_FIFO_buf8_lane_91 = blurx_FIFO_buf8.extract<1456, 1471>();
  hw_uint<16> blurx_FIFO_buf8_lane_92 = blurx_FIFO_buf8.extract<1472, 1487>();
  hw_uint<16> blurx_FIFO_buf8_lane_93 = blurx_FIFO_buf8.extract<1488, 1503>();
  hw_uint<16> blurx_FIFO_buf8_lane_94 = blurx_FIFO_buf8.extract<1504, 1519>();
  hw_uint<16> blurx_FIFO_buf8_lane_95 = blurx_FIFO_buf8.extract<1520, 1535>();

	
  hw_uint<48 > blurx_FIFO_buf8_lane_2_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_2_pack, blurx_FIFO_buf8_lane_0);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_2_pack, blurx_FIFO_buf8_lane_1);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_2_pack, blurx_FIFO_buf8_lane_2);
  auto res_blur4_32_update_0_sm22_31469 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_2_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_5_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_5_pack, blurx_FIFO_buf8_lane_3);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_5_pack, blurx_FIFO_buf8_lane_4);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_5_pack, blurx_FIFO_buf8_lane_5);
  auto res_blur4_32_update_0_sm22_30467 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_5_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_8_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_8_pack, blurx_FIFO_buf8_lane_6);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_8_pack, blurx_FIFO_buf8_lane_7);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_8_pack, blurx_FIFO_buf8_lane_8);
  auto res_blur4_32_update_0_sm22_29465 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_8_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_11_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_11_pack, blurx_FIFO_buf8_lane_9);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_11_pack, blurx_FIFO_buf8_lane_10);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_11_pack, blurx_FIFO_buf8_lane_11);
  auto res_blur4_32_update_0_sm22_28463 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_11_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_14_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_14_pack, blurx_FIFO_buf8_lane_12);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_14_pack, blurx_FIFO_buf8_lane_13);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_14_pack, blurx_FIFO_buf8_lane_14);
  auto res_blur4_32_update_0_sm22_27461 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_14_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_17_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_17_pack, blurx_FIFO_buf8_lane_15);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_17_pack, blurx_FIFO_buf8_lane_16);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_17_pack, blurx_FIFO_buf8_lane_17);
  auto res_blur4_32_update_0_sm22_26459 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_17_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_20_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_20_pack, blurx_FIFO_buf8_lane_18);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_20_pack, blurx_FIFO_buf8_lane_19);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_20_pack, blurx_FIFO_buf8_lane_20);
  auto res_blur4_32_update_0_sm22_25457 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_20_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_23_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_23_pack, blurx_FIFO_buf8_lane_21);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_23_pack, blurx_FIFO_buf8_lane_22);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_23_pack, blurx_FIFO_buf8_lane_23);
  auto res_blur4_32_update_0_sm22_24455 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_23_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_26_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_26_pack, blurx_FIFO_buf8_lane_24);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_26_pack, blurx_FIFO_buf8_lane_25);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_26_pack, blurx_FIFO_buf8_lane_26);
  auto res_blur4_32_update_0_sm22_23453 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_26_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_29_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_29_pack, blurx_FIFO_buf8_lane_27);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_29_pack, blurx_FIFO_buf8_lane_28);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_29_pack, blurx_FIFO_buf8_lane_29);
  auto res_blur4_32_update_0_sm22_22451 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_29_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_32_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_32_pack, blurx_FIFO_buf8_lane_30);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_32_pack, blurx_FIFO_buf8_lane_31);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_32_pack, blurx_FIFO_buf8_lane_32);
  auto res_blur4_32_update_0_sm22_21449 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_32_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_35_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_35_pack, blurx_FIFO_buf8_lane_33);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_35_pack, blurx_FIFO_buf8_lane_34);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_35_pack, blurx_FIFO_buf8_lane_35);
  auto res_blur4_32_update_0_sm22_20447 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_35_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_38_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_38_pack, blurx_FIFO_buf8_lane_36);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_38_pack, blurx_FIFO_buf8_lane_37);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_38_pack, blurx_FIFO_buf8_lane_38);
  auto res_blur4_32_update_0_sm22_19445 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_38_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_41_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_41_pack, blurx_FIFO_buf8_lane_39);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_41_pack, blurx_FIFO_buf8_lane_40);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_41_pack, blurx_FIFO_buf8_lane_41);
  auto res_blur4_32_update_0_sm22_18443 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_41_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_44_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_44_pack, blurx_FIFO_buf8_lane_42);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_44_pack, blurx_FIFO_buf8_lane_43);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_44_pack, blurx_FIFO_buf8_lane_44);
  auto res_blur4_32_update_0_sm22_17441 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_44_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_47_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_47_pack, blurx_FIFO_buf8_lane_45);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_47_pack, blurx_FIFO_buf8_lane_46);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_47_pack, blurx_FIFO_buf8_lane_47);
  auto res_blur4_32_update_0_sm22_16439 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_47_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_50_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_50_pack, blurx_FIFO_buf8_lane_48);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_50_pack, blurx_FIFO_buf8_lane_49);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_50_pack, blurx_FIFO_buf8_lane_50);
  auto res_blur4_32_update_0_sm22_15437 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_50_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_53_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_53_pack, blurx_FIFO_buf8_lane_51);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_53_pack, blurx_FIFO_buf8_lane_52);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_53_pack, blurx_FIFO_buf8_lane_53);
  auto res_blur4_32_update_0_sm22_14435 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_53_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_56_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_56_pack, blurx_FIFO_buf8_lane_54);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_56_pack, blurx_FIFO_buf8_lane_55);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_56_pack, blurx_FIFO_buf8_lane_56);
  auto res_blur4_32_update_0_sm22_13433 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_56_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_59_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_59_pack, blurx_FIFO_buf8_lane_57);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_59_pack, blurx_FIFO_buf8_lane_58);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_59_pack, blurx_FIFO_buf8_lane_59);
  auto res_blur4_32_update_0_sm22_12431 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_59_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_62_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_62_pack, blurx_FIFO_buf8_lane_60);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_62_pack, blurx_FIFO_buf8_lane_61);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_62_pack, blurx_FIFO_buf8_lane_62);
  auto res_blur4_32_update_0_sm22_11429 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_62_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_65_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_65_pack, blurx_FIFO_buf8_lane_63);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_65_pack, blurx_FIFO_buf8_lane_64);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_65_pack, blurx_FIFO_buf8_lane_65);
  auto res_blur4_32_update_0_sm22_10427 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_65_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_68_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_68_pack, blurx_FIFO_buf8_lane_66);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_68_pack, blurx_FIFO_buf8_lane_67);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_68_pack, blurx_FIFO_buf8_lane_68);
  auto res_blur4_32_update_0_sm22_9425 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_68_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_71_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_71_pack, blurx_FIFO_buf8_lane_69);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_71_pack, blurx_FIFO_buf8_lane_70);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_71_pack, blurx_FIFO_buf8_lane_71);
  auto res_blur4_32_update_0_sm22_8423 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_71_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_74_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_74_pack, blurx_FIFO_buf8_lane_72);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_74_pack, blurx_FIFO_buf8_lane_73);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_74_pack, blurx_FIFO_buf8_lane_74);
  auto res_blur4_32_update_0_sm22_7421 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_74_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_77_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_77_pack, blurx_FIFO_buf8_lane_75);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_77_pack, blurx_FIFO_buf8_lane_76);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_77_pack, blurx_FIFO_buf8_lane_77);
  auto res_blur4_32_update_0_sm22_6419 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_77_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_80_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_80_pack, blurx_FIFO_buf8_lane_78);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_80_pack, blurx_FIFO_buf8_lane_79);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_80_pack, blurx_FIFO_buf8_lane_80);
  auto res_blur4_32_update_0_sm22_5417 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_80_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_83_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_83_pack, blurx_FIFO_buf8_lane_81);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_83_pack, blurx_FIFO_buf8_lane_82);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_83_pack, blurx_FIFO_buf8_lane_83);
  auto res_blur4_32_update_0_sm22_4415 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_83_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_86_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_86_pack, blurx_FIFO_buf8_lane_84);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_86_pack, blurx_FIFO_buf8_lane_85);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_86_pack, blurx_FIFO_buf8_lane_86);
  auto res_blur4_32_update_0_sm22_3413 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_86_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_89_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_89_pack, blurx_FIFO_buf8_lane_87);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_89_pack, blurx_FIFO_buf8_lane_88);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_89_pack, blurx_FIFO_buf8_lane_89);
  auto res_blur4_32_update_0_sm22_2411 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_89_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_92_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_92_pack, blurx_FIFO_buf8_lane_90);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_92_pack, blurx_FIFO_buf8_lane_91);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_92_pack, blurx_FIFO_buf8_lane_92);
  auto res_blur4_32_update_0_sm22_1409 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_92_pack);

  hw_uint<48 > blurx_FIFO_buf8_lane_95_pack;
  set_at<0, 48, 16>(blurx_FIFO_buf8_lane_95_pack, blurx_FIFO_buf8_lane_93);
  set_at<16, 48, 16>(blurx_FIFO_buf8_lane_95_pack, blurx_FIFO_buf8_lane_94);
  set_at<32, 48, 16>(blurx_FIFO_buf8_lane_95_pack, blurx_FIFO_buf8_lane_95);
  auto res_blur4_32_update_0_sm22_0407 = blur4_32_generated_compute_unrolled_1(blurx_FIFO_buf8_lane_95_pack);
  hw_uint<512 > return_value486;
  set_at<0, 512, 16>(return_value486, res_blur4_32_update_0_sm22_31469);
  set_at<16, 512, 16>(return_value486, res_blur4_32_update_0_sm22_30467);
  set_at<32, 512, 16>(return_value486, res_blur4_32_update_0_sm22_29465);
  set_at<48, 512, 16>(return_value486, res_blur4_32_update_0_sm22_28463);
  set_at<64, 512, 16>(return_value486, res_blur4_32_update_0_sm22_27461);
  set_at<80, 512, 16>(return_value486, res_blur4_32_update_0_sm22_26459);
  set_at<96, 512, 16>(return_value486, res_blur4_32_update_0_sm22_25457);
  set_at<112, 512, 16>(return_value486, res_blur4_32_update_0_sm22_24455);
  set_at<128, 512, 16>(return_value486, res_blur4_32_update_0_sm22_23453);
  set_at<144, 512, 16>(return_value486, res_blur4_32_update_0_sm22_22451);
  set_at<160, 512, 16>(return_value486, res_blur4_32_update_0_sm22_21449);
  set_at<176, 512, 16>(return_value486, res_blur4_32_update_0_sm22_20447);
  set_at<192, 512, 16>(return_value486, res_blur4_32_update_0_sm22_19445);
  set_at<208, 512, 16>(return_value486, res_blur4_32_update_0_sm22_18443);
  set_at<224, 512, 16>(return_value486, res_blur4_32_update_0_sm22_17441);
  set_at<240, 512, 16>(return_value486, res_blur4_32_update_0_sm22_16439);
  set_at<256, 512, 16>(return_value486, res_blur4_32_update_0_sm22_15437);
  set_at<272, 512, 16>(return_value486, res_blur4_32_update_0_sm22_14435);
  set_at<288, 512, 16>(return_value486, res_blur4_32_update_0_sm22_13433);
  set_at<304, 512, 16>(return_value486, res_blur4_32_update_0_sm22_12431);
  set_at<320, 512, 16>(return_value486, res_blur4_32_update_0_sm22_11429);
  set_at<336, 512, 16>(return_value486, res_blur4_32_update_0_sm22_10427);
  set_at<352, 512, 16>(return_value486, res_blur4_32_update_0_sm22_9425);
  set_at<368, 512, 16>(return_value486, res_blur4_32_update_0_sm22_8423);
  set_at<384, 512, 16>(return_value486, res_blur4_32_update_0_sm22_7421);
  set_at<400, 512, 16>(return_value486, res_blur4_32_update_0_sm22_6419);
  set_at<416, 512, 16>(return_value486, res_blur4_32_update_0_sm22_5417);
  set_at<432, 512, 16>(return_value486, res_blur4_32_update_0_sm22_4415);
  set_at<448, 512, 16>(return_value486, res_blur4_32_update_0_sm22_3413);
  set_at<464, 512, 16>(return_value486, res_blur4_32_update_0_sm22_2411);
  set_at<480, 512, 16>(return_value486, res_blur4_32_update_0_sm22_1409);
  set_at<496, 512, 16>(return_value486, res_blur4_32_update_0_sm22_0407);
  return return_value486;

}

