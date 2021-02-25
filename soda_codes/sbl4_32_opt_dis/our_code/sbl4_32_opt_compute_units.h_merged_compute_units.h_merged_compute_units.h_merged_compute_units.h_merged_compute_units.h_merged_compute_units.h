#include "sbl4_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<512> img_to_gp_10_ld17_cu812(hw_uint<16*32>& img_to_gp_10) {
  return img_to_gp_10;
}

hw_uint<512> mag_y_to_gp_312_ld29_cu814(hw_uint<16*32>& mag_y_to_gp_312) {
  return mag_y_to_gp_312;
}

hw_uint<512> mag_y_ld13_cu816(hw_uint<16*32>& mag_y) {
  return mag_y;
}

hw_uint<512> img_ld5_cu818(hw_uint<16*32>& img) {
  return img;
}

hw_uint<512> img_ld1_cu820(hw_uint<16*32>& img) {
  return img;
}

hw_uint<512> mag_x_ld9_cu822(hw_uint<16*32>& mag_x) {
  return mag_x;
}

hw_uint<512> mag_x_to_gp_38_ld25_cu824(hw_uint<16*32>& mag_x_to_gp_38) {
  return mag_x_to_gp_38;
}

hw_uint<512> img_to_gp_24_ld21_cu826(hw_uint<16*32>& img_to_gp_24) {
  return img_to_gp_24;
}

hw_uint<512> img_1_cu828(hw_uint<16*32>& off_chip_img) {
  hw_uint<16> off_chip_img_lane_0 = off_chip_img.extract<0, 15>();
  hw_uint<16> off_chip_img_lane_1 = off_chip_img.extract<16, 31>();
  hw_uint<16> off_chip_img_lane_2 = off_chip_img.extract<32, 47>();
  hw_uint<16> off_chip_img_lane_3 = off_chip_img.extract<48, 63>();
  hw_uint<16> off_chip_img_lane_4 = off_chip_img.extract<64, 79>();
  hw_uint<16> off_chip_img_lane_5 = off_chip_img.extract<80, 95>();
  hw_uint<16> off_chip_img_lane_6 = off_chip_img.extract<96, 111>();
  hw_uint<16> off_chip_img_lane_7 = off_chip_img.extract<112, 127>();
  hw_uint<16> off_chip_img_lane_8 = off_chip_img.extract<128, 143>();
  hw_uint<16> off_chip_img_lane_9 = off_chip_img.extract<144, 159>();
  hw_uint<16> off_chip_img_lane_10 = off_chip_img.extract<160, 175>();
  hw_uint<16> off_chip_img_lane_11 = off_chip_img.extract<176, 191>();
  hw_uint<16> off_chip_img_lane_12 = off_chip_img.extract<192, 207>();
  hw_uint<16> off_chip_img_lane_13 = off_chip_img.extract<208, 223>();
  hw_uint<16> off_chip_img_lane_14 = off_chip_img.extract<224, 239>();
  hw_uint<16> off_chip_img_lane_15 = off_chip_img.extract<240, 255>();
  hw_uint<16> off_chip_img_lane_16 = off_chip_img.extract<256, 271>();
  hw_uint<16> off_chip_img_lane_17 = off_chip_img.extract<272, 287>();
  hw_uint<16> off_chip_img_lane_18 = off_chip_img.extract<288, 303>();
  hw_uint<16> off_chip_img_lane_19 = off_chip_img.extract<304, 319>();
  hw_uint<16> off_chip_img_lane_20 = off_chip_img.extract<320, 335>();
  hw_uint<16> off_chip_img_lane_21 = off_chip_img.extract<336, 351>();
  hw_uint<16> off_chip_img_lane_22 = off_chip_img.extract<352, 367>();
  hw_uint<16> off_chip_img_lane_23 = off_chip_img.extract<368, 383>();
  hw_uint<16> off_chip_img_lane_24 = off_chip_img.extract<384, 399>();
  hw_uint<16> off_chip_img_lane_25 = off_chip_img.extract<400, 415>();
  hw_uint<16> off_chip_img_lane_26 = off_chip_img.extract<416, 431>();
  hw_uint<16> off_chip_img_lane_27 = off_chip_img.extract<432, 447>();
  hw_uint<16> off_chip_img_lane_28 = off_chip_img.extract<448, 463>();
  hw_uint<16> off_chip_img_lane_29 = off_chip_img.extract<464, 479>();
  hw_uint<16> off_chip_img_lane_30 = off_chip_img.extract<480, 495>();
  hw_uint<16> off_chip_img_lane_31 = off_chip_img.extract<496, 511>();

	
  hw_uint<16 > off_chip_img_lane_0_pack;
  set_at<0, 16, 16>(off_chip_img_lane_0_pack, off_chip_img_lane_0);
  auto res_img_update_0_sm40_31234 = img_generated_compute_unrolled_1(off_chip_img_lane_0_pack);

  hw_uint<16 > off_chip_img_lane_1_pack;
  set_at<0, 16, 16>(off_chip_img_lane_1_pack, off_chip_img_lane_1);
  auto res_img_update_0_sm40_30232 = img_generated_compute_unrolled_1(off_chip_img_lane_1_pack);

  hw_uint<16 > off_chip_img_lane_2_pack;
  set_at<0, 16, 16>(off_chip_img_lane_2_pack, off_chip_img_lane_2);
  auto res_img_update_0_sm40_29230 = img_generated_compute_unrolled_1(off_chip_img_lane_2_pack);

  hw_uint<16 > off_chip_img_lane_3_pack;
  set_at<0, 16, 16>(off_chip_img_lane_3_pack, off_chip_img_lane_3);
  auto res_img_update_0_sm40_28228 = img_generated_compute_unrolled_1(off_chip_img_lane_3_pack);

  hw_uint<16 > off_chip_img_lane_4_pack;
  set_at<0, 16, 16>(off_chip_img_lane_4_pack, off_chip_img_lane_4);
  auto res_img_update_0_sm40_27226 = img_generated_compute_unrolled_1(off_chip_img_lane_4_pack);

  hw_uint<16 > off_chip_img_lane_5_pack;
  set_at<0, 16, 16>(off_chip_img_lane_5_pack, off_chip_img_lane_5);
  auto res_img_update_0_sm40_26224 = img_generated_compute_unrolled_1(off_chip_img_lane_5_pack);

  hw_uint<16 > off_chip_img_lane_6_pack;
  set_at<0, 16, 16>(off_chip_img_lane_6_pack, off_chip_img_lane_6);
  auto res_img_update_0_sm40_25222 = img_generated_compute_unrolled_1(off_chip_img_lane_6_pack);

  hw_uint<16 > off_chip_img_lane_7_pack;
  set_at<0, 16, 16>(off_chip_img_lane_7_pack, off_chip_img_lane_7);
  auto res_img_update_0_sm40_24220 = img_generated_compute_unrolled_1(off_chip_img_lane_7_pack);

  hw_uint<16 > off_chip_img_lane_8_pack;
  set_at<0, 16, 16>(off_chip_img_lane_8_pack, off_chip_img_lane_8);
  auto res_img_update_0_sm40_23218 = img_generated_compute_unrolled_1(off_chip_img_lane_8_pack);

  hw_uint<16 > off_chip_img_lane_9_pack;
  set_at<0, 16, 16>(off_chip_img_lane_9_pack, off_chip_img_lane_9);
  auto res_img_update_0_sm40_22216 = img_generated_compute_unrolled_1(off_chip_img_lane_9_pack);

  hw_uint<16 > off_chip_img_lane_10_pack;
  set_at<0, 16, 16>(off_chip_img_lane_10_pack, off_chip_img_lane_10);
  auto res_img_update_0_sm40_21214 = img_generated_compute_unrolled_1(off_chip_img_lane_10_pack);

  hw_uint<16 > off_chip_img_lane_11_pack;
  set_at<0, 16, 16>(off_chip_img_lane_11_pack, off_chip_img_lane_11);
  auto res_img_update_0_sm40_20212 = img_generated_compute_unrolled_1(off_chip_img_lane_11_pack);

  hw_uint<16 > off_chip_img_lane_12_pack;
  set_at<0, 16, 16>(off_chip_img_lane_12_pack, off_chip_img_lane_12);
  auto res_img_update_0_sm40_19210 = img_generated_compute_unrolled_1(off_chip_img_lane_12_pack);

  hw_uint<16 > off_chip_img_lane_13_pack;
  set_at<0, 16, 16>(off_chip_img_lane_13_pack, off_chip_img_lane_13);
  auto res_img_update_0_sm40_18208 = img_generated_compute_unrolled_1(off_chip_img_lane_13_pack);

  hw_uint<16 > off_chip_img_lane_14_pack;
  set_at<0, 16, 16>(off_chip_img_lane_14_pack, off_chip_img_lane_14);
  auto res_img_update_0_sm40_17206 = img_generated_compute_unrolled_1(off_chip_img_lane_14_pack);

  hw_uint<16 > off_chip_img_lane_15_pack;
  set_at<0, 16, 16>(off_chip_img_lane_15_pack, off_chip_img_lane_15);
  auto res_img_update_0_sm40_16204 = img_generated_compute_unrolled_1(off_chip_img_lane_15_pack);

  hw_uint<16 > off_chip_img_lane_16_pack;
  set_at<0, 16, 16>(off_chip_img_lane_16_pack, off_chip_img_lane_16);
  auto res_img_update_0_sm40_15202 = img_generated_compute_unrolled_1(off_chip_img_lane_16_pack);

  hw_uint<16 > off_chip_img_lane_17_pack;
  set_at<0, 16, 16>(off_chip_img_lane_17_pack, off_chip_img_lane_17);
  auto res_img_update_0_sm40_14200 = img_generated_compute_unrolled_1(off_chip_img_lane_17_pack);

  hw_uint<16 > off_chip_img_lane_18_pack;
  set_at<0, 16, 16>(off_chip_img_lane_18_pack, off_chip_img_lane_18);
  auto res_img_update_0_sm40_13198 = img_generated_compute_unrolled_1(off_chip_img_lane_18_pack);

  hw_uint<16 > off_chip_img_lane_19_pack;
  set_at<0, 16, 16>(off_chip_img_lane_19_pack, off_chip_img_lane_19);
  auto res_img_update_0_sm40_12196 = img_generated_compute_unrolled_1(off_chip_img_lane_19_pack);

  hw_uint<16 > off_chip_img_lane_20_pack;
  set_at<0, 16, 16>(off_chip_img_lane_20_pack, off_chip_img_lane_20);
  auto res_img_update_0_sm40_11194 = img_generated_compute_unrolled_1(off_chip_img_lane_20_pack);

  hw_uint<16 > off_chip_img_lane_21_pack;
  set_at<0, 16, 16>(off_chip_img_lane_21_pack, off_chip_img_lane_21);
  auto res_img_update_0_sm40_10192 = img_generated_compute_unrolled_1(off_chip_img_lane_21_pack);

  hw_uint<16 > off_chip_img_lane_22_pack;
  set_at<0, 16, 16>(off_chip_img_lane_22_pack, off_chip_img_lane_22);
  auto res_img_update_0_sm40_9190 = img_generated_compute_unrolled_1(off_chip_img_lane_22_pack);

  hw_uint<16 > off_chip_img_lane_23_pack;
  set_at<0, 16, 16>(off_chip_img_lane_23_pack, off_chip_img_lane_23);
  auto res_img_update_0_sm40_8188 = img_generated_compute_unrolled_1(off_chip_img_lane_23_pack);

  hw_uint<16 > off_chip_img_lane_24_pack;
  set_at<0, 16, 16>(off_chip_img_lane_24_pack, off_chip_img_lane_24);
  auto res_img_update_0_sm40_7186 = img_generated_compute_unrolled_1(off_chip_img_lane_24_pack);

  hw_uint<16 > off_chip_img_lane_25_pack;
  set_at<0, 16, 16>(off_chip_img_lane_25_pack, off_chip_img_lane_25);
  auto res_img_update_0_sm40_6184 = img_generated_compute_unrolled_1(off_chip_img_lane_25_pack);

  hw_uint<16 > off_chip_img_lane_26_pack;
  set_at<0, 16, 16>(off_chip_img_lane_26_pack, off_chip_img_lane_26);
  auto res_img_update_0_sm40_5182 = img_generated_compute_unrolled_1(off_chip_img_lane_26_pack);

  hw_uint<16 > off_chip_img_lane_27_pack;
  set_at<0, 16, 16>(off_chip_img_lane_27_pack, off_chip_img_lane_27);
  auto res_img_update_0_sm40_4180 = img_generated_compute_unrolled_1(off_chip_img_lane_27_pack);

  hw_uint<16 > off_chip_img_lane_28_pack;
  set_at<0, 16, 16>(off_chip_img_lane_28_pack, off_chip_img_lane_28);
  auto res_img_update_0_sm40_3178 = img_generated_compute_unrolled_1(off_chip_img_lane_28_pack);

  hw_uint<16 > off_chip_img_lane_29_pack;
  set_at<0, 16, 16>(off_chip_img_lane_29_pack, off_chip_img_lane_29);
  auto res_img_update_0_sm40_2176 = img_generated_compute_unrolled_1(off_chip_img_lane_29_pack);

  hw_uint<16 > off_chip_img_lane_30_pack;
  set_at<0, 16, 16>(off_chip_img_lane_30_pack, off_chip_img_lane_30);
  auto res_img_update_0_sm40_1174 = img_generated_compute_unrolled_1(off_chip_img_lane_30_pack);

  hw_uint<16 > off_chip_img_lane_31_pack;
  set_at<0, 16, 16>(off_chip_img_lane_31_pack, off_chip_img_lane_31);
  auto res_img_update_0_sm40_0172 = img_generated_compute_unrolled_1(off_chip_img_lane_31_pack);
  hw_uint<512 > return_value829;
  set_at<0, 512, 16>(return_value829, res_img_update_0_sm40_31234);
  set_at<16, 512, 16>(return_value829, res_img_update_0_sm40_30232);
  set_at<32, 512, 16>(return_value829, res_img_update_0_sm40_29230);
  set_at<48, 512, 16>(return_value829, res_img_update_0_sm40_28228);
  set_at<64, 512, 16>(return_value829, res_img_update_0_sm40_27226);
  set_at<80, 512, 16>(return_value829, res_img_update_0_sm40_26224);
  set_at<96, 512, 16>(return_value829, res_img_update_0_sm40_25222);
  set_at<112, 512, 16>(return_value829, res_img_update_0_sm40_24220);
  set_at<128, 512, 16>(return_value829, res_img_update_0_sm40_23218);
  set_at<144, 512, 16>(return_value829, res_img_update_0_sm40_22216);
  set_at<160, 512, 16>(return_value829, res_img_update_0_sm40_21214);
  set_at<176, 512, 16>(return_value829, res_img_update_0_sm40_20212);
  set_at<192, 512, 16>(return_value829, res_img_update_0_sm40_19210);
  set_at<208, 512, 16>(return_value829, res_img_update_0_sm40_18208);
  set_at<224, 512, 16>(return_value829, res_img_update_0_sm40_17206);
  set_at<240, 512, 16>(return_value829, res_img_update_0_sm40_16204);
  set_at<256, 512, 16>(return_value829, res_img_update_0_sm40_15202);
  set_at<272, 512, 16>(return_value829, res_img_update_0_sm40_14200);
  set_at<288, 512, 16>(return_value829, res_img_update_0_sm40_13198);
  set_at<304, 512, 16>(return_value829, res_img_update_0_sm40_12196);
  set_at<320, 512, 16>(return_value829, res_img_update_0_sm40_11194);
  set_at<336, 512, 16>(return_value829, res_img_update_0_sm40_10192);
  set_at<352, 512, 16>(return_value829, res_img_update_0_sm40_9190);
  set_at<368, 512, 16>(return_value829, res_img_update_0_sm40_8188);
  set_at<384, 512, 16>(return_value829, res_img_update_0_sm40_7186);
  set_at<400, 512, 16>(return_value829, res_img_update_0_sm40_6184);
  set_at<416, 512, 16>(return_value829, res_img_update_0_sm40_5182);
  set_at<432, 512, 16>(return_value829, res_img_update_0_sm40_4180);
  set_at<448, 512, 16>(return_value829, res_img_update_0_sm40_3178);
  set_at<464, 512, 16>(return_value829, res_img_update_0_sm40_2176);
  set_at<480, 512, 16>(return_value829, res_img_update_0_sm40_1174);
  set_at<496, 512, 16>(return_value829, res_img_update_0_sm40_0172);
  return return_value829;

}

hw_uint<512> mag_y_1_cu831(hw_uint<16*192>& img_FIFO_buf20) {
  hw_uint<16> img_FIFO_buf20_lane_0 = img_FIFO_buf20.extract<0, 15>();
  hw_uint<16> img_FIFO_buf20_lane_1 = img_FIFO_buf20.extract<16, 31>();
  hw_uint<16> img_FIFO_buf20_lane_2 = img_FIFO_buf20.extract<32, 47>();
  hw_uint<16> img_FIFO_buf20_lane_3 = img_FIFO_buf20.extract<48, 63>();
  hw_uint<16> img_FIFO_buf20_lane_4 = img_FIFO_buf20.extract<64, 79>();
  hw_uint<16> img_FIFO_buf20_lane_5 = img_FIFO_buf20.extract<80, 95>();
  hw_uint<16> img_FIFO_buf20_lane_6 = img_FIFO_buf20.extract<96, 111>();
  hw_uint<16> img_FIFO_buf20_lane_7 = img_FIFO_buf20.extract<112, 127>();
  hw_uint<16> img_FIFO_buf20_lane_8 = img_FIFO_buf20.extract<128, 143>();
  hw_uint<16> img_FIFO_buf20_lane_9 = img_FIFO_buf20.extract<144, 159>();
  hw_uint<16> img_FIFO_buf20_lane_10 = img_FIFO_buf20.extract<160, 175>();
  hw_uint<16> img_FIFO_buf20_lane_11 = img_FIFO_buf20.extract<176, 191>();
  hw_uint<16> img_FIFO_buf20_lane_12 = img_FIFO_buf20.extract<192, 207>();
  hw_uint<16> img_FIFO_buf20_lane_13 = img_FIFO_buf20.extract<208, 223>();
  hw_uint<16> img_FIFO_buf20_lane_14 = img_FIFO_buf20.extract<224, 239>();
  hw_uint<16> img_FIFO_buf20_lane_15 = img_FIFO_buf20.extract<240, 255>();
  hw_uint<16> img_FIFO_buf20_lane_16 = img_FIFO_buf20.extract<256, 271>();
  hw_uint<16> img_FIFO_buf20_lane_17 = img_FIFO_buf20.extract<272, 287>();
  hw_uint<16> img_FIFO_buf20_lane_18 = img_FIFO_buf20.extract<288, 303>();
  hw_uint<16> img_FIFO_buf20_lane_19 = img_FIFO_buf20.extract<304, 319>();
  hw_uint<16> img_FIFO_buf20_lane_20 = img_FIFO_buf20.extract<320, 335>();
  hw_uint<16> img_FIFO_buf20_lane_21 = img_FIFO_buf20.extract<336, 351>();
  hw_uint<16> img_FIFO_buf20_lane_22 = img_FIFO_buf20.extract<352, 367>();
  hw_uint<16> img_FIFO_buf20_lane_23 = img_FIFO_buf20.extract<368, 383>();
  hw_uint<16> img_FIFO_buf20_lane_24 = img_FIFO_buf20.extract<384, 399>();
  hw_uint<16> img_FIFO_buf20_lane_25 = img_FIFO_buf20.extract<400, 415>();
  hw_uint<16> img_FIFO_buf20_lane_26 = img_FIFO_buf20.extract<416, 431>();
  hw_uint<16> img_FIFO_buf20_lane_27 = img_FIFO_buf20.extract<432, 447>();
  hw_uint<16> img_FIFO_buf20_lane_28 = img_FIFO_buf20.extract<448, 463>();
  hw_uint<16> img_FIFO_buf20_lane_29 = img_FIFO_buf20.extract<464, 479>();
  hw_uint<16> img_FIFO_buf20_lane_30 = img_FIFO_buf20.extract<480, 495>();
  hw_uint<16> img_FIFO_buf20_lane_31 = img_FIFO_buf20.extract<496, 511>();
  hw_uint<16> img_FIFO_buf20_lane_32 = img_FIFO_buf20.extract<512, 527>();
  hw_uint<16> img_FIFO_buf20_lane_33 = img_FIFO_buf20.extract<528, 543>();
  hw_uint<16> img_FIFO_buf20_lane_34 = img_FIFO_buf20.extract<544, 559>();
  hw_uint<16> img_FIFO_buf20_lane_35 = img_FIFO_buf20.extract<560, 575>();
  hw_uint<16> img_FIFO_buf20_lane_36 = img_FIFO_buf20.extract<576, 591>();
  hw_uint<16> img_FIFO_buf20_lane_37 = img_FIFO_buf20.extract<592, 607>();
  hw_uint<16> img_FIFO_buf20_lane_38 = img_FIFO_buf20.extract<608, 623>();
  hw_uint<16> img_FIFO_buf20_lane_39 = img_FIFO_buf20.extract<624, 639>();
  hw_uint<16> img_FIFO_buf20_lane_40 = img_FIFO_buf20.extract<640, 655>();
  hw_uint<16> img_FIFO_buf20_lane_41 = img_FIFO_buf20.extract<656, 671>();
  hw_uint<16> img_FIFO_buf20_lane_42 = img_FIFO_buf20.extract<672, 687>();
  hw_uint<16> img_FIFO_buf20_lane_43 = img_FIFO_buf20.extract<688, 703>();
  hw_uint<16> img_FIFO_buf20_lane_44 = img_FIFO_buf20.extract<704, 719>();
  hw_uint<16> img_FIFO_buf20_lane_45 = img_FIFO_buf20.extract<720, 735>();
  hw_uint<16> img_FIFO_buf20_lane_46 = img_FIFO_buf20.extract<736, 751>();
  hw_uint<16> img_FIFO_buf20_lane_47 = img_FIFO_buf20.extract<752, 767>();
  hw_uint<16> img_FIFO_buf20_lane_48 = img_FIFO_buf20.extract<768, 783>();
  hw_uint<16> img_FIFO_buf20_lane_49 = img_FIFO_buf20.extract<784, 799>();
  hw_uint<16> img_FIFO_buf20_lane_50 = img_FIFO_buf20.extract<800, 815>();
  hw_uint<16> img_FIFO_buf20_lane_51 = img_FIFO_buf20.extract<816, 831>();
  hw_uint<16> img_FIFO_buf20_lane_52 = img_FIFO_buf20.extract<832, 847>();
  hw_uint<16> img_FIFO_buf20_lane_53 = img_FIFO_buf20.extract<848, 863>();
  hw_uint<16> img_FIFO_buf20_lane_54 = img_FIFO_buf20.extract<864, 879>();
  hw_uint<16> img_FIFO_buf20_lane_55 = img_FIFO_buf20.extract<880, 895>();
  hw_uint<16> img_FIFO_buf20_lane_56 = img_FIFO_buf20.extract<896, 911>();
  hw_uint<16> img_FIFO_buf20_lane_57 = img_FIFO_buf20.extract<912, 927>();
  hw_uint<16> img_FIFO_buf20_lane_58 = img_FIFO_buf20.extract<928, 943>();
  hw_uint<16> img_FIFO_buf20_lane_59 = img_FIFO_buf20.extract<944, 959>();
  hw_uint<16> img_FIFO_buf20_lane_60 = img_FIFO_buf20.extract<960, 975>();
  hw_uint<16> img_FIFO_buf20_lane_61 = img_FIFO_buf20.extract<976, 991>();
  hw_uint<16> img_FIFO_buf20_lane_62 = img_FIFO_buf20.extract<992, 1007>();
  hw_uint<16> img_FIFO_buf20_lane_63 = img_FIFO_buf20.extract<1008, 1023>();
  hw_uint<16> img_FIFO_buf20_lane_64 = img_FIFO_buf20.extract<1024, 1039>();
  hw_uint<16> img_FIFO_buf20_lane_65 = img_FIFO_buf20.extract<1040, 1055>();
  hw_uint<16> img_FIFO_buf20_lane_66 = img_FIFO_buf20.extract<1056, 1071>();
  hw_uint<16> img_FIFO_buf20_lane_67 = img_FIFO_buf20.extract<1072, 1087>();
  hw_uint<16> img_FIFO_buf20_lane_68 = img_FIFO_buf20.extract<1088, 1103>();
  hw_uint<16> img_FIFO_buf20_lane_69 = img_FIFO_buf20.extract<1104, 1119>();
  hw_uint<16> img_FIFO_buf20_lane_70 = img_FIFO_buf20.extract<1120, 1135>();
  hw_uint<16> img_FIFO_buf20_lane_71 = img_FIFO_buf20.extract<1136, 1151>();
  hw_uint<16> img_FIFO_buf20_lane_72 = img_FIFO_buf20.extract<1152, 1167>();
  hw_uint<16> img_FIFO_buf20_lane_73 = img_FIFO_buf20.extract<1168, 1183>();
  hw_uint<16> img_FIFO_buf20_lane_74 = img_FIFO_buf20.extract<1184, 1199>();
  hw_uint<16> img_FIFO_buf20_lane_75 = img_FIFO_buf20.extract<1200, 1215>();
  hw_uint<16> img_FIFO_buf20_lane_76 = img_FIFO_buf20.extract<1216, 1231>();
  hw_uint<16> img_FIFO_buf20_lane_77 = img_FIFO_buf20.extract<1232, 1247>();
  hw_uint<16> img_FIFO_buf20_lane_78 = img_FIFO_buf20.extract<1248, 1263>();
  hw_uint<16> img_FIFO_buf20_lane_79 = img_FIFO_buf20.extract<1264, 1279>();
  hw_uint<16> img_FIFO_buf20_lane_80 = img_FIFO_buf20.extract<1280, 1295>();
  hw_uint<16> img_FIFO_buf20_lane_81 = img_FIFO_buf20.extract<1296, 1311>();
  hw_uint<16> img_FIFO_buf20_lane_82 = img_FIFO_buf20.extract<1312, 1327>();
  hw_uint<16> img_FIFO_buf20_lane_83 = img_FIFO_buf20.extract<1328, 1343>();
  hw_uint<16> img_FIFO_buf20_lane_84 = img_FIFO_buf20.extract<1344, 1359>();
  hw_uint<16> img_FIFO_buf20_lane_85 = img_FIFO_buf20.extract<1360, 1375>();
  hw_uint<16> img_FIFO_buf20_lane_86 = img_FIFO_buf20.extract<1376, 1391>();
  hw_uint<16> img_FIFO_buf20_lane_87 = img_FIFO_buf20.extract<1392, 1407>();
  hw_uint<16> img_FIFO_buf20_lane_88 = img_FIFO_buf20.extract<1408, 1423>();
  hw_uint<16> img_FIFO_buf20_lane_89 = img_FIFO_buf20.extract<1424, 1439>();
  hw_uint<16> img_FIFO_buf20_lane_90 = img_FIFO_buf20.extract<1440, 1455>();
  hw_uint<16> img_FIFO_buf20_lane_91 = img_FIFO_buf20.extract<1456, 1471>();
  hw_uint<16> img_FIFO_buf20_lane_92 = img_FIFO_buf20.extract<1472, 1487>();
  hw_uint<16> img_FIFO_buf20_lane_93 = img_FIFO_buf20.extract<1488, 1503>();
  hw_uint<16> img_FIFO_buf20_lane_94 = img_FIFO_buf20.extract<1504, 1519>();
  hw_uint<16> img_FIFO_buf20_lane_95 = img_FIFO_buf20.extract<1520, 1535>();
  hw_uint<16> img_FIFO_buf20_lane_96 = img_FIFO_buf20.extract<1536, 1551>();
  hw_uint<16> img_FIFO_buf20_lane_97 = img_FIFO_buf20.extract<1552, 1567>();
  hw_uint<16> img_FIFO_buf20_lane_98 = img_FIFO_buf20.extract<1568, 1583>();
  hw_uint<16> img_FIFO_buf20_lane_99 = img_FIFO_buf20.extract<1584, 1599>();
  hw_uint<16> img_FIFO_buf20_lane_100 = img_FIFO_buf20.extract<1600, 1615>();
  hw_uint<16> img_FIFO_buf20_lane_101 = img_FIFO_buf20.extract<1616, 1631>();
  hw_uint<16> img_FIFO_buf20_lane_102 = img_FIFO_buf20.extract<1632, 1647>();
  hw_uint<16> img_FIFO_buf20_lane_103 = img_FIFO_buf20.extract<1648, 1663>();
  hw_uint<16> img_FIFO_buf20_lane_104 = img_FIFO_buf20.extract<1664, 1679>();
  hw_uint<16> img_FIFO_buf20_lane_105 = img_FIFO_buf20.extract<1680, 1695>();
  hw_uint<16> img_FIFO_buf20_lane_106 = img_FIFO_buf20.extract<1696, 1711>();
  hw_uint<16> img_FIFO_buf20_lane_107 = img_FIFO_buf20.extract<1712, 1727>();
  hw_uint<16> img_FIFO_buf20_lane_108 = img_FIFO_buf20.extract<1728, 1743>();
  hw_uint<16> img_FIFO_buf20_lane_109 = img_FIFO_buf20.extract<1744, 1759>();
  hw_uint<16> img_FIFO_buf20_lane_110 = img_FIFO_buf20.extract<1760, 1775>();
  hw_uint<16> img_FIFO_buf20_lane_111 = img_FIFO_buf20.extract<1776, 1791>();
  hw_uint<16> img_FIFO_buf20_lane_112 = img_FIFO_buf20.extract<1792, 1807>();
  hw_uint<16> img_FIFO_buf20_lane_113 = img_FIFO_buf20.extract<1808, 1823>();
  hw_uint<16> img_FIFO_buf20_lane_114 = img_FIFO_buf20.extract<1824, 1839>();
  hw_uint<16> img_FIFO_buf20_lane_115 = img_FIFO_buf20.extract<1840, 1855>();
  hw_uint<16> img_FIFO_buf20_lane_116 = img_FIFO_buf20.extract<1856, 1871>();
  hw_uint<16> img_FIFO_buf20_lane_117 = img_FIFO_buf20.extract<1872, 1887>();
  hw_uint<16> img_FIFO_buf20_lane_118 = img_FIFO_buf20.extract<1888, 1903>();
  hw_uint<16> img_FIFO_buf20_lane_119 = img_FIFO_buf20.extract<1904, 1919>();
  hw_uint<16> img_FIFO_buf20_lane_120 = img_FIFO_buf20.extract<1920, 1935>();
  hw_uint<16> img_FIFO_buf20_lane_121 = img_FIFO_buf20.extract<1936, 1951>();
  hw_uint<16> img_FIFO_buf20_lane_122 = img_FIFO_buf20.extract<1952, 1967>();
  hw_uint<16> img_FIFO_buf20_lane_123 = img_FIFO_buf20.extract<1968, 1983>();
  hw_uint<16> img_FIFO_buf20_lane_124 = img_FIFO_buf20.extract<1984, 1999>();
  hw_uint<16> img_FIFO_buf20_lane_125 = img_FIFO_buf20.extract<2000, 2015>();
  hw_uint<16> img_FIFO_buf20_lane_126 = img_FIFO_buf20.extract<2016, 2031>();
  hw_uint<16> img_FIFO_buf20_lane_127 = img_FIFO_buf20.extract<2032, 2047>();
  hw_uint<16> img_FIFO_buf20_lane_128 = img_FIFO_buf20.extract<2048, 2063>();
  hw_uint<16> img_FIFO_buf20_lane_129 = img_FIFO_buf20.extract<2064, 2079>();
  hw_uint<16> img_FIFO_buf20_lane_130 = img_FIFO_buf20.extract<2080, 2095>();
  hw_uint<16> img_FIFO_buf20_lane_131 = img_FIFO_buf20.extract<2096, 2111>();
  hw_uint<16> img_FIFO_buf20_lane_132 = img_FIFO_buf20.extract<2112, 2127>();
  hw_uint<16> img_FIFO_buf20_lane_133 = img_FIFO_buf20.extract<2128, 2143>();
  hw_uint<16> img_FIFO_buf20_lane_134 = img_FIFO_buf20.extract<2144, 2159>();
  hw_uint<16> img_FIFO_buf20_lane_135 = img_FIFO_buf20.extract<2160, 2175>();
  hw_uint<16> img_FIFO_buf20_lane_136 = img_FIFO_buf20.extract<2176, 2191>();
  hw_uint<16> img_FIFO_buf20_lane_137 = img_FIFO_buf20.extract<2192, 2207>();
  hw_uint<16> img_FIFO_buf20_lane_138 = img_FIFO_buf20.extract<2208, 2223>();
  hw_uint<16> img_FIFO_buf20_lane_139 = img_FIFO_buf20.extract<2224, 2239>();
  hw_uint<16> img_FIFO_buf20_lane_140 = img_FIFO_buf20.extract<2240, 2255>();
  hw_uint<16> img_FIFO_buf20_lane_141 = img_FIFO_buf20.extract<2256, 2271>();
  hw_uint<16> img_FIFO_buf20_lane_142 = img_FIFO_buf20.extract<2272, 2287>();
  hw_uint<16> img_FIFO_buf20_lane_143 = img_FIFO_buf20.extract<2288, 2303>();
  hw_uint<16> img_FIFO_buf20_lane_144 = img_FIFO_buf20.extract<2304, 2319>();
  hw_uint<16> img_FIFO_buf20_lane_145 = img_FIFO_buf20.extract<2320, 2335>();
  hw_uint<16> img_FIFO_buf20_lane_146 = img_FIFO_buf20.extract<2336, 2351>();
  hw_uint<16> img_FIFO_buf20_lane_147 = img_FIFO_buf20.extract<2352, 2367>();
  hw_uint<16> img_FIFO_buf20_lane_148 = img_FIFO_buf20.extract<2368, 2383>();
  hw_uint<16> img_FIFO_buf20_lane_149 = img_FIFO_buf20.extract<2384, 2399>();
  hw_uint<16> img_FIFO_buf20_lane_150 = img_FIFO_buf20.extract<2400, 2415>();
  hw_uint<16> img_FIFO_buf20_lane_151 = img_FIFO_buf20.extract<2416, 2431>();
  hw_uint<16> img_FIFO_buf20_lane_152 = img_FIFO_buf20.extract<2432, 2447>();
  hw_uint<16> img_FIFO_buf20_lane_153 = img_FIFO_buf20.extract<2448, 2463>();
  hw_uint<16> img_FIFO_buf20_lane_154 = img_FIFO_buf20.extract<2464, 2479>();
  hw_uint<16> img_FIFO_buf20_lane_155 = img_FIFO_buf20.extract<2480, 2495>();
  hw_uint<16> img_FIFO_buf20_lane_156 = img_FIFO_buf20.extract<2496, 2511>();
  hw_uint<16> img_FIFO_buf20_lane_157 = img_FIFO_buf20.extract<2512, 2527>();
  hw_uint<16> img_FIFO_buf20_lane_158 = img_FIFO_buf20.extract<2528, 2543>();
  hw_uint<16> img_FIFO_buf20_lane_159 = img_FIFO_buf20.extract<2544, 2559>();
  hw_uint<16> img_FIFO_buf20_lane_160 = img_FIFO_buf20.extract<2560, 2575>();
  hw_uint<16> img_FIFO_buf20_lane_161 = img_FIFO_buf20.extract<2576, 2591>();
  hw_uint<16> img_FIFO_buf20_lane_162 = img_FIFO_buf20.extract<2592, 2607>();
  hw_uint<16> img_FIFO_buf20_lane_163 = img_FIFO_buf20.extract<2608, 2623>();
  hw_uint<16> img_FIFO_buf20_lane_164 = img_FIFO_buf20.extract<2624, 2639>();
  hw_uint<16> img_FIFO_buf20_lane_165 = img_FIFO_buf20.extract<2640, 2655>();
  hw_uint<16> img_FIFO_buf20_lane_166 = img_FIFO_buf20.extract<2656, 2671>();
  hw_uint<16> img_FIFO_buf20_lane_167 = img_FIFO_buf20.extract<2672, 2687>();
  hw_uint<16> img_FIFO_buf20_lane_168 = img_FIFO_buf20.extract<2688, 2703>();
  hw_uint<16> img_FIFO_buf20_lane_169 = img_FIFO_buf20.extract<2704, 2719>();
  hw_uint<16> img_FIFO_buf20_lane_170 = img_FIFO_buf20.extract<2720, 2735>();
  hw_uint<16> img_FIFO_buf20_lane_171 = img_FIFO_buf20.extract<2736, 2751>();
  hw_uint<16> img_FIFO_buf20_lane_172 = img_FIFO_buf20.extract<2752, 2767>();
  hw_uint<16> img_FIFO_buf20_lane_173 = img_FIFO_buf20.extract<2768, 2783>();
  hw_uint<16> img_FIFO_buf20_lane_174 = img_FIFO_buf20.extract<2784, 2799>();
  hw_uint<16> img_FIFO_buf20_lane_175 = img_FIFO_buf20.extract<2800, 2815>();
  hw_uint<16> img_FIFO_buf20_lane_176 = img_FIFO_buf20.extract<2816, 2831>();
  hw_uint<16> img_FIFO_buf20_lane_177 = img_FIFO_buf20.extract<2832, 2847>();
  hw_uint<16> img_FIFO_buf20_lane_178 = img_FIFO_buf20.extract<2848, 2863>();
  hw_uint<16> img_FIFO_buf20_lane_179 = img_FIFO_buf20.extract<2864, 2879>();
  hw_uint<16> img_FIFO_buf20_lane_180 = img_FIFO_buf20.extract<2880, 2895>();
  hw_uint<16> img_FIFO_buf20_lane_181 = img_FIFO_buf20.extract<2896, 2911>();
  hw_uint<16> img_FIFO_buf20_lane_182 = img_FIFO_buf20.extract<2912, 2927>();
  hw_uint<16> img_FIFO_buf20_lane_183 = img_FIFO_buf20.extract<2928, 2943>();
  hw_uint<16> img_FIFO_buf20_lane_184 = img_FIFO_buf20.extract<2944, 2959>();
  hw_uint<16> img_FIFO_buf20_lane_185 = img_FIFO_buf20.extract<2960, 2975>();
  hw_uint<16> img_FIFO_buf20_lane_186 = img_FIFO_buf20.extract<2976, 2991>();
  hw_uint<16> img_FIFO_buf20_lane_187 = img_FIFO_buf20.extract<2992, 3007>();
  hw_uint<16> img_FIFO_buf20_lane_188 = img_FIFO_buf20.extract<3008, 3023>();
  hw_uint<16> img_FIFO_buf20_lane_189 = img_FIFO_buf20.extract<3024, 3039>();
  hw_uint<16> img_FIFO_buf20_lane_190 = img_FIFO_buf20.extract<3040, 3055>();
  hw_uint<16> img_FIFO_buf20_lane_191 = img_FIFO_buf20.extract<3056, 3071>();

	
  hw_uint<96 > img_FIFO_buf20_lane_5_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_5_pack, img_FIFO_buf20_lane_0);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_5_pack, img_FIFO_buf20_lane_1);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_5_pack, img_FIFO_buf20_lane_2);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_5_pack, img_FIFO_buf20_lane_3);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_5_pack, img_FIFO_buf20_lane_4);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_5_pack, img_FIFO_buf20_lane_5);
  auto res_mag_y_update_0_sm41_31298 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_5_pack);

  hw_uint<96 > img_FIFO_buf20_lane_11_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_11_pack, img_FIFO_buf20_lane_6);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_11_pack, img_FIFO_buf20_lane_7);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_11_pack, img_FIFO_buf20_lane_8);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_11_pack, img_FIFO_buf20_lane_9);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_11_pack, img_FIFO_buf20_lane_10);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_11_pack, img_FIFO_buf20_lane_11);
  auto res_mag_y_update_0_sm41_30296 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_11_pack);

  hw_uint<96 > img_FIFO_buf20_lane_17_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_17_pack, img_FIFO_buf20_lane_12);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_17_pack, img_FIFO_buf20_lane_13);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_17_pack, img_FIFO_buf20_lane_14);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_17_pack, img_FIFO_buf20_lane_15);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_17_pack, img_FIFO_buf20_lane_16);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_17_pack, img_FIFO_buf20_lane_17);
  auto res_mag_y_update_0_sm41_29294 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_17_pack);

  hw_uint<96 > img_FIFO_buf20_lane_23_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_23_pack, img_FIFO_buf20_lane_18);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_23_pack, img_FIFO_buf20_lane_19);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_23_pack, img_FIFO_buf20_lane_20);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_23_pack, img_FIFO_buf20_lane_21);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_23_pack, img_FIFO_buf20_lane_22);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_23_pack, img_FIFO_buf20_lane_23);
  auto res_mag_y_update_0_sm41_28292 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_23_pack);

  hw_uint<96 > img_FIFO_buf20_lane_29_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_29_pack, img_FIFO_buf20_lane_24);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_29_pack, img_FIFO_buf20_lane_25);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_29_pack, img_FIFO_buf20_lane_26);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_29_pack, img_FIFO_buf20_lane_27);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_29_pack, img_FIFO_buf20_lane_28);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_29_pack, img_FIFO_buf20_lane_29);
  auto res_mag_y_update_0_sm41_27290 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_29_pack);

  hw_uint<96 > img_FIFO_buf20_lane_35_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_35_pack, img_FIFO_buf20_lane_30);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_35_pack, img_FIFO_buf20_lane_31);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_35_pack, img_FIFO_buf20_lane_32);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_35_pack, img_FIFO_buf20_lane_33);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_35_pack, img_FIFO_buf20_lane_34);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_35_pack, img_FIFO_buf20_lane_35);
  auto res_mag_y_update_0_sm41_26288 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_35_pack);

  hw_uint<96 > img_FIFO_buf20_lane_41_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_41_pack, img_FIFO_buf20_lane_36);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_41_pack, img_FIFO_buf20_lane_37);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_41_pack, img_FIFO_buf20_lane_38);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_41_pack, img_FIFO_buf20_lane_39);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_41_pack, img_FIFO_buf20_lane_40);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_41_pack, img_FIFO_buf20_lane_41);
  auto res_mag_y_update_0_sm41_25286 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_41_pack);

  hw_uint<96 > img_FIFO_buf20_lane_47_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_47_pack, img_FIFO_buf20_lane_42);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_47_pack, img_FIFO_buf20_lane_43);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_47_pack, img_FIFO_buf20_lane_44);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_47_pack, img_FIFO_buf20_lane_45);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_47_pack, img_FIFO_buf20_lane_46);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_47_pack, img_FIFO_buf20_lane_47);
  auto res_mag_y_update_0_sm41_24284 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_47_pack);

  hw_uint<96 > img_FIFO_buf20_lane_53_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_53_pack, img_FIFO_buf20_lane_48);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_53_pack, img_FIFO_buf20_lane_49);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_53_pack, img_FIFO_buf20_lane_50);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_53_pack, img_FIFO_buf20_lane_51);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_53_pack, img_FIFO_buf20_lane_52);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_53_pack, img_FIFO_buf20_lane_53);
  auto res_mag_y_update_0_sm41_23282 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_53_pack);

  hw_uint<96 > img_FIFO_buf20_lane_59_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_59_pack, img_FIFO_buf20_lane_54);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_59_pack, img_FIFO_buf20_lane_55);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_59_pack, img_FIFO_buf20_lane_56);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_59_pack, img_FIFO_buf20_lane_57);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_59_pack, img_FIFO_buf20_lane_58);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_59_pack, img_FIFO_buf20_lane_59);
  auto res_mag_y_update_0_sm41_22280 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_59_pack);

  hw_uint<96 > img_FIFO_buf20_lane_65_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_65_pack, img_FIFO_buf20_lane_60);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_65_pack, img_FIFO_buf20_lane_61);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_65_pack, img_FIFO_buf20_lane_62);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_65_pack, img_FIFO_buf20_lane_63);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_65_pack, img_FIFO_buf20_lane_64);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_65_pack, img_FIFO_buf20_lane_65);
  auto res_mag_y_update_0_sm41_21278 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_65_pack);

  hw_uint<96 > img_FIFO_buf20_lane_71_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_71_pack, img_FIFO_buf20_lane_66);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_71_pack, img_FIFO_buf20_lane_67);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_71_pack, img_FIFO_buf20_lane_68);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_71_pack, img_FIFO_buf20_lane_69);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_71_pack, img_FIFO_buf20_lane_70);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_71_pack, img_FIFO_buf20_lane_71);
  auto res_mag_y_update_0_sm41_20276 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_71_pack);

  hw_uint<96 > img_FIFO_buf20_lane_77_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_77_pack, img_FIFO_buf20_lane_72);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_77_pack, img_FIFO_buf20_lane_73);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_77_pack, img_FIFO_buf20_lane_74);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_77_pack, img_FIFO_buf20_lane_75);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_77_pack, img_FIFO_buf20_lane_76);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_77_pack, img_FIFO_buf20_lane_77);
  auto res_mag_y_update_0_sm41_19274 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_77_pack);

  hw_uint<96 > img_FIFO_buf20_lane_83_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_83_pack, img_FIFO_buf20_lane_78);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_83_pack, img_FIFO_buf20_lane_79);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_83_pack, img_FIFO_buf20_lane_80);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_83_pack, img_FIFO_buf20_lane_81);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_83_pack, img_FIFO_buf20_lane_82);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_83_pack, img_FIFO_buf20_lane_83);
  auto res_mag_y_update_0_sm41_18272 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_83_pack);

  hw_uint<96 > img_FIFO_buf20_lane_89_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_89_pack, img_FIFO_buf20_lane_84);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_89_pack, img_FIFO_buf20_lane_85);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_89_pack, img_FIFO_buf20_lane_86);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_89_pack, img_FIFO_buf20_lane_87);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_89_pack, img_FIFO_buf20_lane_88);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_89_pack, img_FIFO_buf20_lane_89);
  auto res_mag_y_update_0_sm41_17270 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_89_pack);

  hw_uint<96 > img_FIFO_buf20_lane_95_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_95_pack, img_FIFO_buf20_lane_90);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_95_pack, img_FIFO_buf20_lane_91);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_95_pack, img_FIFO_buf20_lane_92);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_95_pack, img_FIFO_buf20_lane_93);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_95_pack, img_FIFO_buf20_lane_94);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_95_pack, img_FIFO_buf20_lane_95);
  auto res_mag_y_update_0_sm41_16268 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_95_pack);

  hw_uint<96 > img_FIFO_buf20_lane_101_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_101_pack, img_FIFO_buf20_lane_96);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_101_pack, img_FIFO_buf20_lane_97);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_101_pack, img_FIFO_buf20_lane_98);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_101_pack, img_FIFO_buf20_lane_99);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_101_pack, img_FIFO_buf20_lane_100);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_101_pack, img_FIFO_buf20_lane_101);
  auto res_mag_y_update_0_sm41_15266 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_101_pack);

  hw_uint<96 > img_FIFO_buf20_lane_107_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_107_pack, img_FIFO_buf20_lane_102);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_107_pack, img_FIFO_buf20_lane_103);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_107_pack, img_FIFO_buf20_lane_104);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_107_pack, img_FIFO_buf20_lane_105);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_107_pack, img_FIFO_buf20_lane_106);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_107_pack, img_FIFO_buf20_lane_107);
  auto res_mag_y_update_0_sm41_14264 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_107_pack);

  hw_uint<96 > img_FIFO_buf20_lane_113_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_113_pack, img_FIFO_buf20_lane_108);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_113_pack, img_FIFO_buf20_lane_109);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_113_pack, img_FIFO_buf20_lane_110);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_113_pack, img_FIFO_buf20_lane_111);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_113_pack, img_FIFO_buf20_lane_112);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_113_pack, img_FIFO_buf20_lane_113);
  auto res_mag_y_update_0_sm41_13262 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_113_pack);

  hw_uint<96 > img_FIFO_buf20_lane_119_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_119_pack, img_FIFO_buf20_lane_114);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_119_pack, img_FIFO_buf20_lane_115);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_119_pack, img_FIFO_buf20_lane_116);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_119_pack, img_FIFO_buf20_lane_117);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_119_pack, img_FIFO_buf20_lane_118);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_119_pack, img_FIFO_buf20_lane_119);
  auto res_mag_y_update_0_sm41_12260 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_119_pack);

  hw_uint<96 > img_FIFO_buf20_lane_125_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_125_pack, img_FIFO_buf20_lane_120);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_125_pack, img_FIFO_buf20_lane_121);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_125_pack, img_FIFO_buf20_lane_122);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_125_pack, img_FIFO_buf20_lane_123);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_125_pack, img_FIFO_buf20_lane_124);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_125_pack, img_FIFO_buf20_lane_125);
  auto res_mag_y_update_0_sm41_11258 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_125_pack);

  hw_uint<96 > img_FIFO_buf20_lane_131_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_131_pack, img_FIFO_buf20_lane_126);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_131_pack, img_FIFO_buf20_lane_127);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_131_pack, img_FIFO_buf20_lane_128);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_131_pack, img_FIFO_buf20_lane_129);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_131_pack, img_FIFO_buf20_lane_130);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_131_pack, img_FIFO_buf20_lane_131);
  auto res_mag_y_update_0_sm41_10256 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_131_pack);

  hw_uint<96 > img_FIFO_buf20_lane_137_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_137_pack, img_FIFO_buf20_lane_132);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_137_pack, img_FIFO_buf20_lane_133);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_137_pack, img_FIFO_buf20_lane_134);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_137_pack, img_FIFO_buf20_lane_135);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_137_pack, img_FIFO_buf20_lane_136);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_137_pack, img_FIFO_buf20_lane_137);
  auto res_mag_y_update_0_sm41_9254 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_137_pack);

  hw_uint<96 > img_FIFO_buf20_lane_143_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_143_pack, img_FIFO_buf20_lane_138);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_143_pack, img_FIFO_buf20_lane_139);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_143_pack, img_FIFO_buf20_lane_140);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_143_pack, img_FIFO_buf20_lane_141);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_143_pack, img_FIFO_buf20_lane_142);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_143_pack, img_FIFO_buf20_lane_143);
  auto res_mag_y_update_0_sm41_8252 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_143_pack);

  hw_uint<96 > img_FIFO_buf20_lane_149_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_149_pack, img_FIFO_buf20_lane_144);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_149_pack, img_FIFO_buf20_lane_145);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_149_pack, img_FIFO_buf20_lane_146);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_149_pack, img_FIFO_buf20_lane_147);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_149_pack, img_FIFO_buf20_lane_148);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_149_pack, img_FIFO_buf20_lane_149);
  auto res_mag_y_update_0_sm41_7250 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_149_pack);

  hw_uint<96 > img_FIFO_buf20_lane_155_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_155_pack, img_FIFO_buf20_lane_150);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_155_pack, img_FIFO_buf20_lane_151);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_155_pack, img_FIFO_buf20_lane_152);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_155_pack, img_FIFO_buf20_lane_153);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_155_pack, img_FIFO_buf20_lane_154);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_155_pack, img_FIFO_buf20_lane_155);
  auto res_mag_y_update_0_sm41_6248 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_155_pack);

  hw_uint<96 > img_FIFO_buf20_lane_161_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_161_pack, img_FIFO_buf20_lane_156);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_161_pack, img_FIFO_buf20_lane_157);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_161_pack, img_FIFO_buf20_lane_158);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_161_pack, img_FIFO_buf20_lane_159);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_161_pack, img_FIFO_buf20_lane_160);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_161_pack, img_FIFO_buf20_lane_161);
  auto res_mag_y_update_0_sm41_5246 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_161_pack);

  hw_uint<96 > img_FIFO_buf20_lane_167_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_167_pack, img_FIFO_buf20_lane_162);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_167_pack, img_FIFO_buf20_lane_163);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_167_pack, img_FIFO_buf20_lane_164);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_167_pack, img_FIFO_buf20_lane_165);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_167_pack, img_FIFO_buf20_lane_166);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_167_pack, img_FIFO_buf20_lane_167);
  auto res_mag_y_update_0_sm41_4244 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_167_pack);

  hw_uint<96 > img_FIFO_buf20_lane_173_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_173_pack, img_FIFO_buf20_lane_168);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_173_pack, img_FIFO_buf20_lane_169);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_173_pack, img_FIFO_buf20_lane_170);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_173_pack, img_FIFO_buf20_lane_171);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_173_pack, img_FIFO_buf20_lane_172);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_173_pack, img_FIFO_buf20_lane_173);
  auto res_mag_y_update_0_sm41_3242 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_173_pack);

  hw_uint<96 > img_FIFO_buf20_lane_179_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_179_pack, img_FIFO_buf20_lane_174);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_179_pack, img_FIFO_buf20_lane_175);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_179_pack, img_FIFO_buf20_lane_176);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_179_pack, img_FIFO_buf20_lane_177);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_179_pack, img_FIFO_buf20_lane_178);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_179_pack, img_FIFO_buf20_lane_179);
  auto res_mag_y_update_0_sm41_2240 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_179_pack);

  hw_uint<96 > img_FIFO_buf20_lane_185_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_185_pack, img_FIFO_buf20_lane_180);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_185_pack, img_FIFO_buf20_lane_181);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_185_pack, img_FIFO_buf20_lane_182);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_185_pack, img_FIFO_buf20_lane_183);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_185_pack, img_FIFO_buf20_lane_184);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_185_pack, img_FIFO_buf20_lane_185);
  auto res_mag_y_update_0_sm41_1238 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_185_pack);

  hw_uint<96 > img_FIFO_buf20_lane_191_pack;
  set_at<0, 96, 16>(img_FIFO_buf20_lane_191_pack, img_FIFO_buf20_lane_186);
  set_at<16, 96, 16>(img_FIFO_buf20_lane_191_pack, img_FIFO_buf20_lane_187);
  set_at<32, 96, 16>(img_FIFO_buf20_lane_191_pack, img_FIFO_buf20_lane_188);
  set_at<48, 96, 16>(img_FIFO_buf20_lane_191_pack, img_FIFO_buf20_lane_189);
  set_at<64, 96, 16>(img_FIFO_buf20_lane_191_pack, img_FIFO_buf20_lane_190);
  set_at<80, 96, 16>(img_FIFO_buf20_lane_191_pack, img_FIFO_buf20_lane_191);
  auto res_mag_y_update_0_sm41_0236 = mag_y_generated_compute_unrolled_1(img_FIFO_buf20_lane_191_pack);
  hw_uint<512 > return_value832;
  set_at<0, 512, 16>(return_value832, res_mag_y_update_0_sm41_31298);
  set_at<16, 512, 16>(return_value832, res_mag_y_update_0_sm41_30296);
  set_at<32, 512, 16>(return_value832, res_mag_y_update_0_sm41_29294);
  set_at<48, 512, 16>(return_value832, res_mag_y_update_0_sm41_28292);
  set_at<64, 512, 16>(return_value832, res_mag_y_update_0_sm41_27290);
  set_at<80, 512, 16>(return_value832, res_mag_y_update_0_sm41_26288);
  set_at<96, 512, 16>(return_value832, res_mag_y_update_0_sm41_25286);
  set_at<112, 512, 16>(return_value832, res_mag_y_update_0_sm41_24284);
  set_at<128, 512, 16>(return_value832, res_mag_y_update_0_sm41_23282);
  set_at<144, 512, 16>(return_value832, res_mag_y_update_0_sm41_22280);
  set_at<160, 512, 16>(return_value832, res_mag_y_update_0_sm41_21278);
  set_at<176, 512, 16>(return_value832, res_mag_y_update_0_sm41_20276);
  set_at<192, 512, 16>(return_value832, res_mag_y_update_0_sm41_19274);
  set_at<208, 512, 16>(return_value832, res_mag_y_update_0_sm41_18272);
  set_at<224, 512, 16>(return_value832, res_mag_y_update_0_sm41_17270);
  set_at<240, 512, 16>(return_value832, res_mag_y_update_0_sm41_16268);
  set_at<256, 512, 16>(return_value832, res_mag_y_update_0_sm41_15266);
  set_at<272, 512, 16>(return_value832, res_mag_y_update_0_sm41_14264);
  set_at<288, 512, 16>(return_value832, res_mag_y_update_0_sm41_13262);
  set_at<304, 512, 16>(return_value832, res_mag_y_update_0_sm41_12260);
  set_at<320, 512, 16>(return_value832, res_mag_y_update_0_sm41_11258);
  set_at<336, 512, 16>(return_value832, res_mag_y_update_0_sm41_10256);
  set_at<352, 512, 16>(return_value832, res_mag_y_update_0_sm41_9254);
  set_at<368, 512, 16>(return_value832, res_mag_y_update_0_sm41_8252);
  set_at<384, 512, 16>(return_value832, res_mag_y_update_0_sm41_7250);
  set_at<400, 512, 16>(return_value832, res_mag_y_update_0_sm41_6248);
  set_at<416, 512, 16>(return_value832, res_mag_y_update_0_sm41_5246);
  set_at<432, 512, 16>(return_value832, res_mag_y_update_0_sm41_4244);
  set_at<448, 512, 16>(return_value832, res_mag_y_update_0_sm41_3242);
  set_at<464, 512, 16>(return_value832, res_mag_y_update_0_sm41_2240);
  set_at<480, 512, 16>(return_value832, res_mag_y_update_0_sm41_1238);
  set_at<496, 512, 16>(return_value832, res_mag_y_update_0_sm41_0236);
  return return_value832;

}

hw_uint<512> mag_x_1_cu834(hw_uint<16*192>& img_FIFO_buf16) {
  hw_uint<16> img_FIFO_buf16_lane_0 = img_FIFO_buf16.extract<0, 15>();
  hw_uint<16> img_FIFO_buf16_lane_1 = img_FIFO_buf16.extract<16, 31>();
  hw_uint<16> img_FIFO_buf16_lane_2 = img_FIFO_buf16.extract<32, 47>();
  hw_uint<16> img_FIFO_buf16_lane_3 = img_FIFO_buf16.extract<48, 63>();
  hw_uint<16> img_FIFO_buf16_lane_4 = img_FIFO_buf16.extract<64, 79>();
  hw_uint<16> img_FIFO_buf16_lane_5 = img_FIFO_buf16.extract<80, 95>();
  hw_uint<16> img_FIFO_buf16_lane_6 = img_FIFO_buf16.extract<96, 111>();
  hw_uint<16> img_FIFO_buf16_lane_7 = img_FIFO_buf16.extract<112, 127>();
  hw_uint<16> img_FIFO_buf16_lane_8 = img_FIFO_buf16.extract<128, 143>();
  hw_uint<16> img_FIFO_buf16_lane_9 = img_FIFO_buf16.extract<144, 159>();
  hw_uint<16> img_FIFO_buf16_lane_10 = img_FIFO_buf16.extract<160, 175>();
  hw_uint<16> img_FIFO_buf16_lane_11 = img_FIFO_buf16.extract<176, 191>();
  hw_uint<16> img_FIFO_buf16_lane_12 = img_FIFO_buf16.extract<192, 207>();
  hw_uint<16> img_FIFO_buf16_lane_13 = img_FIFO_buf16.extract<208, 223>();
  hw_uint<16> img_FIFO_buf16_lane_14 = img_FIFO_buf16.extract<224, 239>();
  hw_uint<16> img_FIFO_buf16_lane_15 = img_FIFO_buf16.extract<240, 255>();
  hw_uint<16> img_FIFO_buf16_lane_16 = img_FIFO_buf16.extract<256, 271>();
  hw_uint<16> img_FIFO_buf16_lane_17 = img_FIFO_buf16.extract<272, 287>();
  hw_uint<16> img_FIFO_buf16_lane_18 = img_FIFO_buf16.extract<288, 303>();
  hw_uint<16> img_FIFO_buf16_lane_19 = img_FIFO_buf16.extract<304, 319>();
  hw_uint<16> img_FIFO_buf16_lane_20 = img_FIFO_buf16.extract<320, 335>();
  hw_uint<16> img_FIFO_buf16_lane_21 = img_FIFO_buf16.extract<336, 351>();
  hw_uint<16> img_FIFO_buf16_lane_22 = img_FIFO_buf16.extract<352, 367>();
  hw_uint<16> img_FIFO_buf16_lane_23 = img_FIFO_buf16.extract<368, 383>();
  hw_uint<16> img_FIFO_buf16_lane_24 = img_FIFO_buf16.extract<384, 399>();
  hw_uint<16> img_FIFO_buf16_lane_25 = img_FIFO_buf16.extract<400, 415>();
  hw_uint<16> img_FIFO_buf16_lane_26 = img_FIFO_buf16.extract<416, 431>();
  hw_uint<16> img_FIFO_buf16_lane_27 = img_FIFO_buf16.extract<432, 447>();
  hw_uint<16> img_FIFO_buf16_lane_28 = img_FIFO_buf16.extract<448, 463>();
  hw_uint<16> img_FIFO_buf16_lane_29 = img_FIFO_buf16.extract<464, 479>();
  hw_uint<16> img_FIFO_buf16_lane_30 = img_FIFO_buf16.extract<480, 495>();
  hw_uint<16> img_FIFO_buf16_lane_31 = img_FIFO_buf16.extract<496, 511>();
  hw_uint<16> img_FIFO_buf16_lane_32 = img_FIFO_buf16.extract<512, 527>();
  hw_uint<16> img_FIFO_buf16_lane_33 = img_FIFO_buf16.extract<528, 543>();
  hw_uint<16> img_FIFO_buf16_lane_34 = img_FIFO_buf16.extract<544, 559>();
  hw_uint<16> img_FIFO_buf16_lane_35 = img_FIFO_buf16.extract<560, 575>();
  hw_uint<16> img_FIFO_buf16_lane_36 = img_FIFO_buf16.extract<576, 591>();
  hw_uint<16> img_FIFO_buf16_lane_37 = img_FIFO_buf16.extract<592, 607>();
  hw_uint<16> img_FIFO_buf16_lane_38 = img_FIFO_buf16.extract<608, 623>();
  hw_uint<16> img_FIFO_buf16_lane_39 = img_FIFO_buf16.extract<624, 639>();
  hw_uint<16> img_FIFO_buf16_lane_40 = img_FIFO_buf16.extract<640, 655>();
  hw_uint<16> img_FIFO_buf16_lane_41 = img_FIFO_buf16.extract<656, 671>();
  hw_uint<16> img_FIFO_buf16_lane_42 = img_FIFO_buf16.extract<672, 687>();
  hw_uint<16> img_FIFO_buf16_lane_43 = img_FIFO_buf16.extract<688, 703>();
  hw_uint<16> img_FIFO_buf16_lane_44 = img_FIFO_buf16.extract<704, 719>();
  hw_uint<16> img_FIFO_buf16_lane_45 = img_FIFO_buf16.extract<720, 735>();
  hw_uint<16> img_FIFO_buf16_lane_46 = img_FIFO_buf16.extract<736, 751>();
  hw_uint<16> img_FIFO_buf16_lane_47 = img_FIFO_buf16.extract<752, 767>();
  hw_uint<16> img_FIFO_buf16_lane_48 = img_FIFO_buf16.extract<768, 783>();
  hw_uint<16> img_FIFO_buf16_lane_49 = img_FIFO_buf16.extract<784, 799>();
  hw_uint<16> img_FIFO_buf16_lane_50 = img_FIFO_buf16.extract<800, 815>();
  hw_uint<16> img_FIFO_buf16_lane_51 = img_FIFO_buf16.extract<816, 831>();
  hw_uint<16> img_FIFO_buf16_lane_52 = img_FIFO_buf16.extract<832, 847>();
  hw_uint<16> img_FIFO_buf16_lane_53 = img_FIFO_buf16.extract<848, 863>();
  hw_uint<16> img_FIFO_buf16_lane_54 = img_FIFO_buf16.extract<864, 879>();
  hw_uint<16> img_FIFO_buf16_lane_55 = img_FIFO_buf16.extract<880, 895>();
  hw_uint<16> img_FIFO_buf16_lane_56 = img_FIFO_buf16.extract<896, 911>();
  hw_uint<16> img_FIFO_buf16_lane_57 = img_FIFO_buf16.extract<912, 927>();
  hw_uint<16> img_FIFO_buf16_lane_58 = img_FIFO_buf16.extract<928, 943>();
  hw_uint<16> img_FIFO_buf16_lane_59 = img_FIFO_buf16.extract<944, 959>();
  hw_uint<16> img_FIFO_buf16_lane_60 = img_FIFO_buf16.extract<960, 975>();
  hw_uint<16> img_FIFO_buf16_lane_61 = img_FIFO_buf16.extract<976, 991>();
  hw_uint<16> img_FIFO_buf16_lane_62 = img_FIFO_buf16.extract<992, 1007>();
  hw_uint<16> img_FIFO_buf16_lane_63 = img_FIFO_buf16.extract<1008, 1023>();
  hw_uint<16> img_FIFO_buf16_lane_64 = img_FIFO_buf16.extract<1024, 1039>();
  hw_uint<16> img_FIFO_buf16_lane_65 = img_FIFO_buf16.extract<1040, 1055>();
  hw_uint<16> img_FIFO_buf16_lane_66 = img_FIFO_buf16.extract<1056, 1071>();
  hw_uint<16> img_FIFO_buf16_lane_67 = img_FIFO_buf16.extract<1072, 1087>();
  hw_uint<16> img_FIFO_buf16_lane_68 = img_FIFO_buf16.extract<1088, 1103>();
  hw_uint<16> img_FIFO_buf16_lane_69 = img_FIFO_buf16.extract<1104, 1119>();
  hw_uint<16> img_FIFO_buf16_lane_70 = img_FIFO_buf16.extract<1120, 1135>();
  hw_uint<16> img_FIFO_buf16_lane_71 = img_FIFO_buf16.extract<1136, 1151>();
  hw_uint<16> img_FIFO_buf16_lane_72 = img_FIFO_buf16.extract<1152, 1167>();
  hw_uint<16> img_FIFO_buf16_lane_73 = img_FIFO_buf16.extract<1168, 1183>();
  hw_uint<16> img_FIFO_buf16_lane_74 = img_FIFO_buf16.extract<1184, 1199>();
  hw_uint<16> img_FIFO_buf16_lane_75 = img_FIFO_buf16.extract<1200, 1215>();
  hw_uint<16> img_FIFO_buf16_lane_76 = img_FIFO_buf16.extract<1216, 1231>();
  hw_uint<16> img_FIFO_buf16_lane_77 = img_FIFO_buf16.extract<1232, 1247>();
  hw_uint<16> img_FIFO_buf16_lane_78 = img_FIFO_buf16.extract<1248, 1263>();
  hw_uint<16> img_FIFO_buf16_lane_79 = img_FIFO_buf16.extract<1264, 1279>();
  hw_uint<16> img_FIFO_buf16_lane_80 = img_FIFO_buf16.extract<1280, 1295>();
  hw_uint<16> img_FIFO_buf16_lane_81 = img_FIFO_buf16.extract<1296, 1311>();
  hw_uint<16> img_FIFO_buf16_lane_82 = img_FIFO_buf16.extract<1312, 1327>();
  hw_uint<16> img_FIFO_buf16_lane_83 = img_FIFO_buf16.extract<1328, 1343>();
  hw_uint<16> img_FIFO_buf16_lane_84 = img_FIFO_buf16.extract<1344, 1359>();
  hw_uint<16> img_FIFO_buf16_lane_85 = img_FIFO_buf16.extract<1360, 1375>();
  hw_uint<16> img_FIFO_buf16_lane_86 = img_FIFO_buf16.extract<1376, 1391>();
  hw_uint<16> img_FIFO_buf16_lane_87 = img_FIFO_buf16.extract<1392, 1407>();
  hw_uint<16> img_FIFO_buf16_lane_88 = img_FIFO_buf16.extract<1408, 1423>();
  hw_uint<16> img_FIFO_buf16_lane_89 = img_FIFO_buf16.extract<1424, 1439>();
  hw_uint<16> img_FIFO_buf16_lane_90 = img_FIFO_buf16.extract<1440, 1455>();
  hw_uint<16> img_FIFO_buf16_lane_91 = img_FIFO_buf16.extract<1456, 1471>();
  hw_uint<16> img_FIFO_buf16_lane_92 = img_FIFO_buf16.extract<1472, 1487>();
  hw_uint<16> img_FIFO_buf16_lane_93 = img_FIFO_buf16.extract<1488, 1503>();
  hw_uint<16> img_FIFO_buf16_lane_94 = img_FIFO_buf16.extract<1504, 1519>();
  hw_uint<16> img_FIFO_buf16_lane_95 = img_FIFO_buf16.extract<1520, 1535>();
  hw_uint<16> img_FIFO_buf16_lane_96 = img_FIFO_buf16.extract<1536, 1551>();
  hw_uint<16> img_FIFO_buf16_lane_97 = img_FIFO_buf16.extract<1552, 1567>();
  hw_uint<16> img_FIFO_buf16_lane_98 = img_FIFO_buf16.extract<1568, 1583>();
  hw_uint<16> img_FIFO_buf16_lane_99 = img_FIFO_buf16.extract<1584, 1599>();
  hw_uint<16> img_FIFO_buf16_lane_100 = img_FIFO_buf16.extract<1600, 1615>();
  hw_uint<16> img_FIFO_buf16_lane_101 = img_FIFO_buf16.extract<1616, 1631>();
  hw_uint<16> img_FIFO_buf16_lane_102 = img_FIFO_buf16.extract<1632, 1647>();
  hw_uint<16> img_FIFO_buf16_lane_103 = img_FIFO_buf16.extract<1648, 1663>();
  hw_uint<16> img_FIFO_buf16_lane_104 = img_FIFO_buf16.extract<1664, 1679>();
  hw_uint<16> img_FIFO_buf16_lane_105 = img_FIFO_buf16.extract<1680, 1695>();
  hw_uint<16> img_FIFO_buf16_lane_106 = img_FIFO_buf16.extract<1696, 1711>();
  hw_uint<16> img_FIFO_buf16_lane_107 = img_FIFO_buf16.extract<1712, 1727>();
  hw_uint<16> img_FIFO_buf16_lane_108 = img_FIFO_buf16.extract<1728, 1743>();
  hw_uint<16> img_FIFO_buf16_lane_109 = img_FIFO_buf16.extract<1744, 1759>();
  hw_uint<16> img_FIFO_buf16_lane_110 = img_FIFO_buf16.extract<1760, 1775>();
  hw_uint<16> img_FIFO_buf16_lane_111 = img_FIFO_buf16.extract<1776, 1791>();
  hw_uint<16> img_FIFO_buf16_lane_112 = img_FIFO_buf16.extract<1792, 1807>();
  hw_uint<16> img_FIFO_buf16_lane_113 = img_FIFO_buf16.extract<1808, 1823>();
  hw_uint<16> img_FIFO_buf16_lane_114 = img_FIFO_buf16.extract<1824, 1839>();
  hw_uint<16> img_FIFO_buf16_lane_115 = img_FIFO_buf16.extract<1840, 1855>();
  hw_uint<16> img_FIFO_buf16_lane_116 = img_FIFO_buf16.extract<1856, 1871>();
  hw_uint<16> img_FIFO_buf16_lane_117 = img_FIFO_buf16.extract<1872, 1887>();
  hw_uint<16> img_FIFO_buf16_lane_118 = img_FIFO_buf16.extract<1888, 1903>();
  hw_uint<16> img_FIFO_buf16_lane_119 = img_FIFO_buf16.extract<1904, 1919>();
  hw_uint<16> img_FIFO_buf16_lane_120 = img_FIFO_buf16.extract<1920, 1935>();
  hw_uint<16> img_FIFO_buf16_lane_121 = img_FIFO_buf16.extract<1936, 1951>();
  hw_uint<16> img_FIFO_buf16_lane_122 = img_FIFO_buf16.extract<1952, 1967>();
  hw_uint<16> img_FIFO_buf16_lane_123 = img_FIFO_buf16.extract<1968, 1983>();
  hw_uint<16> img_FIFO_buf16_lane_124 = img_FIFO_buf16.extract<1984, 1999>();
  hw_uint<16> img_FIFO_buf16_lane_125 = img_FIFO_buf16.extract<2000, 2015>();
  hw_uint<16> img_FIFO_buf16_lane_126 = img_FIFO_buf16.extract<2016, 2031>();
  hw_uint<16> img_FIFO_buf16_lane_127 = img_FIFO_buf16.extract<2032, 2047>();
  hw_uint<16> img_FIFO_buf16_lane_128 = img_FIFO_buf16.extract<2048, 2063>();
  hw_uint<16> img_FIFO_buf16_lane_129 = img_FIFO_buf16.extract<2064, 2079>();
  hw_uint<16> img_FIFO_buf16_lane_130 = img_FIFO_buf16.extract<2080, 2095>();
  hw_uint<16> img_FIFO_buf16_lane_131 = img_FIFO_buf16.extract<2096, 2111>();
  hw_uint<16> img_FIFO_buf16_lane_132 = img_FIFO_buf16.extract<2112, 2127>();
  hw_uint<16> img_FIFO_buf16_lane_133 = img_FIFO_buf16.extract<2128, 2143>();
  hw_uint<16> img_FIFO_buf16_lane_134 = img_FIFO_buf16.extract<2144, 2159>();
  hw_uint<16> img_FIFO_buf16_lane_135 = img_FIFO_buf16.extract<2160, 2175>();
  hw_uint<16> img_FIFO_buf16_lane_136 = img_FIFO_buf16.extract<2176, 2191>();
  hw_uint<16> img_FIFO_buf16_lane_137 = img_FIFO_buf16.extract<2192, 2207>();
  hw_uint<16> img_FIFO_buf16_lane_138 = img_FIFO_buf16.extract<2208, 2223>();
  hw_uint<16> img_FIFO_buf16_lane_139 = img_FIFO_buf16.extract<2224, 2239>();
  hw_uint<16> img_FIFO_buf16_lane_140 = img_FIFO_buf16.extract<2240, 2255>();
  hw_uint<16> img_FIFO_buf16_lane_141 = img_FIFO_buf16.extract<2256, 2271>();
  hw_uint<16> img_FIFO_buf16_lane_142 = img_FIFO_buf16.extract<2272, 2287>();
  hw_uint<16> img_FIFO_buf16_lane_143 = img_FIFO_buf16.extract<2288, 2303>();
  hw_uint<16> img_FIFO_buf16_lane_144 = img_FIFO_buf16.extract<2304, 2319>();
  hw_uint<16> img_FIFO_buf16_lane_145 = img_FIFO_buf16.extract<2320, 2335>();
  hw_uint<16> img_FIFO_buf16_lane_146 = img_FIFO_buf16.extract<2336, 2351>();
  hw_uint<16> img_FIFO_buf16_lane_147 = img_FIFO_buf16.extract<2352, 2367>();
  hw_uint<16> img_FIFO_buf16_lane_148 = img_FIFO_buf16.extract<2368, 2383>();
  hw_uint<16> img_FIFO_buf16_lane_149 = img_FIFO_buf16.extract<2384, 2399>();
  hw_uint<16> img_FIFO_buf16_lane_150 = img_FIFO_buf16.extract<2400, 2415>();
  hw_uint<16> img_FIFO_buf16_lane_151 = img_FIFO_buf16.extract<2416, 2431>();
  hw_uint<16> img_FIFO_buf16_lane_152 = img_FIFO_buf16.extract<2432, 2447>();
  hw_uint<16> img_FIFO_buf16_lane_153 = img_FIFO_buf16.extract<2448, 2463>();
  hw_uint<16> img_FIFO_buf16_lane_154 = img_FIFO_buf16.extract<2464, 2479>();
  hw_uint<16> img_FIFO_buf16_lane_155 = img_FIFO_buf16.extract<2480, 2495>();
  hw_uint<16> img_FIFO_buf16_lane_156 = img_FIFO_buf16.extract<2496, 2511>();
  hw_uint<16> img_FIFO_buf16_lane_157 = img_FIFO_buf16.extract<2512, 2527>();
  hw_uint<16> img_FIFO_buf16_lane_158 = img_FIFO_buf16.extract<2528, 2543>();
  hw_uint<16> img_FIFO_buf16_lane_159 = img_FIFO_buf16.extract<2544, 2559>();
  hw_uint<16> img_FIFO_buf16_lane_160 = img_FIFO_buf16.extract<2560, 2575>();
  hw_uint<16> img_FIFO_buf16_lane_161 = img_FIFO_buf16.extract<2576, 2591>();
  hw_uint<16> img_FIFO_buf16_lane_162 = img_FIFO_buf16.extract<2592, 2607>();
  hw_uint<16> img_FIFO_buf16_lane_163 = img_FIFO_buf16.extract<2608, 2623>();
  hw_uint<16> img_FIFO_buf16_lane_164 = img_FIFO_buf16.extract<2624, 2639>();
  hw_uint<16> img_FIFO_buf16_lane_165 = img_FIFO_buf16.extract<2640, 2655>();
  hw_uint<16> img_FIFO_buf16_lane_166 = img_FIFO_buf16.extract<2656, 2671>();
  hw_uint<16> img_FIFO_buf16_lane_167 = img_FIFO_buf16.extract<2672, 2687>();
  hw_uint<16> img_FIFO_buf16_lane_168 = img_FIFO_buf16.extract<2688, 2703>();
  hw_uint<16> img_FIFO_buf16_lane_169 = img_FIFO_buf16.extract<2704, 2719>();
  hw_uint<16> img_FIFO_buf16_lane_170 = img_FIFO_buf16.extract<2720, 2735>();
  hw_uint<16> img_FIFO_buf16_lane_171 = img_FIFO_buf16.extract<2736, 2751>();
  hw_uint<16> img_FIFO_buf16_lane_172 = img_FIFO_buf16.extract<2752, 2767>();
  hw_uint<16> img_FIFO_buf16_lane_173 = img_FIFO_buf16.extract<2768, 2783>();
  hw_uint<16> img_FIFO_buf16_lane_174 = img_FIFO_buf16.extract<2784, 2799>();
  hw_uint<16> img_FIFO_buf16_lane_175 = img_FIFO_buf16.extract<2800, 2815>();
  hw_uint<16> img_FIFO_buf16_lane_176 = img_FIFO_buf16.extract<2816, 2831>();
  hw_uint<16> img_FIFO_buf16_lane_177 = img_FIFO_buf16.extract<2832, 2847>();
  hw_uint<16> img_FIFO_buf16_lane_178 = img_FIFO_buf16.extract<2848, 2863>();
  hw_uint<16> img_FIFO_buf16_lane_179 = img_FIFO_buf16.extract<2864, 2879>();
  hw_uint<16> img_FIFO_buf16_lane_180 = img_FIFO_buf16.extract<2880, 2895>();
  hw_uint<16> img_FIFO_buf16_lane_181 = img_FIFO_buf16.extract<2896, 2911>();
  hw_uint<16> img_FIFO_buf16_lane_182 = img_FIFO_buf16.extract<2912, 2927>();
  hw_uint<16> img_FIFO_buf16_lane_183 = img_FIFO_buf16.extract<2928, 2943>();
  hw_uint<16> img_FIFO_buf16_lane_184 = img_FIFO_buf16.extract<2944, 2959>();
  hw_uint<16> img_FIFO_buf16_lane_185 = img_FIFO_buf16.extract<2960, 2975>();
  hw_uint<16> img_FIFO_buf16_lane_186 = img_FIFO_buf16.extract<2976, 2991>();
  hw_uint<16> img_FIFO_buf16_lane_187 = img_FIFO_buf16.extract<2992, 3007>();
  hw_uint<16> img_FIFO_buf16_lane_188 = img_FIFO_buf16.extract<3008, 3023>();
  hw_uint<16> img_FIFO_buf16_lane_189 = img_FIFO_buf16.extract<3024, 3039>();
  hw_uint<16> img_FIFO_buf16_lane_190 = img_FIFO_buf16.extract<3040, 3055>();
  hw_uint<16> img_FIFO_buf16_lane_191 = img_FIFO_buf16.extract<3056, 3071>();

	
  hw_uint<96 > img_FIFO_buf16_lane_5_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_5_pack, img_FIFO_buf16_lane_0);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_5_pack, img_FIFO_buf16_lane_1);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_5_pack, img_FIFO_buf16_lane_2);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_5_pack, img_FIFO_buf16_lane_3);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_5_pack, img_FIFO_buf16_lane_4);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_5_pack, img_FIFO_buf16_lane_5);
  auto res_mag_x_update_0_sm42_31170 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_5_pack);

  hw_uint<96 > img_FIFO_buf16_lane_11_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_11_pack, img_FIFO_buf16_lane_6);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_11_pack, img_FIFO_buf16_lane_7);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_11_pack, img_FIFO_buf16_lane_8);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_11_pack, img_FIFO_buf16_lane_9);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_11_pack, img_FIFO_buf16_lane_10);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_11_pack, img_FIFO_buf16_lane_11);
  auto res_mag_x_update_0_sm42_30168 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_11_pack);

  hw_uint<96 > img_FIFO_buf16_lane_17_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_17_pack, img_FIFO_buf16_lane_12);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_17_pack, img_FIFO_buf16_lane_13);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_17_pack, img_FIFO_buf16_lane_14);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_17_pack, img_FIFO_buf16_lane_15);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_17_pack, img_FIFO_buf16_lane_16);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_17_pack, img_FIFO_buf16_lane_17);
  auto res_mag_x_update_0_sm42_29166 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_17_pack);

  hw_uint<96 > img_FIFO_buf16_lane_23_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_23_pack, img_FIFO_buf16_lane_18);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_23_pack, img_FIFO_buf16_lane_19);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_23_pack, img_FIFO_buf16_lane_20);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_23_pack, img_FIFO_buf16_lane_21);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_23_pack, img_FIFO_buf16_lane_22);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_23_pack, img_FIFO_buf16_lane_23);
  auto res_mag_x_update_0_sm42_28164 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_23_pack);

  hw_uint<96 > img_FIFO_buf16_lane_29_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_29_pack, img_FIFO_buf16_lane_24);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_29_pack, img_FIFO_buf16_lane_25);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_29_pack, img_FIFO_buf16_lane_26);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_29_pack, img_FIFO_buf16_lane_27);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_29_pack, img_FIFO_buf16_lane_28);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_29_pack, img_FIFO_buf16_lane_29);
  auto res_mag_x_update_0_sm42_27162 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_29_pack);

  hw_uint<96 > img_FIFO_buf16_lane_35_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_35_pack, img_FIFO_buf16_lane_30);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_35_pack, img_FIFO_buf16_lane_31);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_35_pack, img_FIFO_buf16_lane_32);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_35_pack, img_FIFO_buf16_lane_33);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_35_pack, img_FIFO_buf16_lane_34);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_35_pack, img_FIFO_buf16_lane_35);
  auto res_mag_x_update_0_sm42_26160 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_35_pack);

  hw_uint<96 > img_FIFO_buf16_lane_41_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_41_pack, img_FIFO_buf16_lane_36);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_41_pack, img_FIFO_buf16_lane_37);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_41_pack, img_FIFO_buf16_lane_38);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_41_pack, img_FIFO_buf16_lane_39);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_41_pack, img_FIFO_buf16_lane_40);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_41_pack, img_FIFO_buf16_lane_41);
  auto res_mag_x_update_0_sm42_25158 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_41_pack);

  hw_uint<96 > img_FIFO_buf16_lane_47_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_47_pack, img_FIFO_buf16_lane_42);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_47_pack, img_FIFO_buf16_lane_43);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_47_pack, img_FIFO_buf16_lane_44);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_47_pack, img_FIFO_buf16_lane_45);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_47_pack, img_FIFO_buf16_lane_46);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_47_pack, img_FIFO_buf16_lane_47);
  auto res_mag_x_update_0_sm42_24156 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_47_pack);

  hw_uint<96 > img_FIFO_buf16_lane_53_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_53_pack, img_FIFO_buf16_lane_48);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_53_pack, img_FIFO_buf16_lane_49);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_53_pack, img_FIFO_buf16_lane_50);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_53_pack, img_FIFO_buf16_lane_51);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_53_pack, img_FIFO_buf16_lane_52);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_53_pack, img_FIFO_buf16_lane_53);
  auto res_mag_x_update_0_sm42_23154 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_53_pack);

  hw_uint<96 > img_FIFO_buf16_lane_59_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_59_pack, img_FIFO_buf16_lane_54);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_59_pack, img_FIFO_buf16_lane_55);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_59_pack, img_FIFO_buf16_lane_56);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_59_pack, img_FIFO_buf16_lane_57);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_59_pack, img_FIFO_buf16_lane_58);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_59_pack, img_FIFO_buf16_lane_59);
  auto res_mag_x_update_0_sm42_22152 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_59_pack);

  hw_uint<96 > img_FIFO_buf16_lane_65_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_65_pack, img_FIFO_buf16_lane_60);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_65_pack, img_FIFO_buf16_lane_61);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_65_pack, img_FIFO_buf16_lane_62);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_65_pack, img_FIFO_buf16_lane_63);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_65_pack, img_FIFO_buf16_lane_64);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_65_pack, img_FIFO_buf16_lane_65);
  auto res_mag_x_update_0_sm42_21150 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_65_pack);

  hw_uint<96 > img_FIFO_buf16_lane_71_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_71_pack, img_FIFO_buf16_lane_66);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_71_pack, img_FIFO_buf16_lane_67);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_71_pack, img_FIFO_buf16_lane_68);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_71_pack, img_FIFO_buf16_lane_69);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_71_pack, img_FIFO_buf16_lane_70);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_71_pack, img_FIFO_buf16_lane_71);
  auto res_mag_x_update_0_sm42_20148 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_71_pack);

  hw_uint<96 > img_FIFO_buf16_lane_77_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_77_pack, img_FIFO_buf16_lane_72);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_77_pack, img_FIFO_buf16_lane_73);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_77_pack, img_FIFO_buf16_lane_74);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_77_pack, img_FIFO_buf16_lane_75);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_77_pack, img_FIFO_buf16_lane_76);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_77_pack, img_FIFO_buf16_lane_77);
  auto res_mag_x_update_0_sm42_19146 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_77_pack);

  hw_uint<96 > img_FIFO_buf16_lane_83_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_83_pack, img_FIFO_buf16_lane_78);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_83_pack, img_FIFO_buf16_lane_79);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_83_pack, img_FIFO_buf16_lane_80);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_83_pack, img_FIFO_buf16_lane_81);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_83_pack, img_FIFO_buf16_lane_82);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_83_pack, img_FIFO_buf16_lane_83);
  auto res_mag_x_update_0_sm42_18144 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_83_pack);

  hw_uint<96 > img_FIFO_buf16_lane_89_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_89_pack, img_FIFO_buf16_lane_84);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_89_pack, img_FIFO_buf16_lane_85);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_89_pack, img_FIFO_buf16_lane_86);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_89_pack, img_FIFO_buf16_lane_87);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_89_pack, img_FIFO_buf16_lane_88);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_89_pack, img_FIFO_buf16_lane_89);
  auto res_mag_x_update_0_sm42_17142 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_89_pack);

  hw_uint<96 > img_FIFO_buf16_lane_95_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_95_pack, img_FIFO_buf16_lane_90);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_95_pack, img_FIFO_buf16_lane_91);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_95_pack, img_FIFO_buf16_lane_92);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_95_pack, img_FIFO_buf16_lane_93);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_95_pack, img_FIFO_buf16_lane_94);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_95_pack, img_FIFO_buf16_lane_95);
  auto res_mag_x_update_0_sm42_16140 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_95_pack);

  hw_uint<96 > img_FIFO_buf16_lane_101_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_101_pack, img_FIFO_buf16_lane_96);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_101_pack, img_FIFO_buf16_lane_97);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_101_pack, img_FIFO_buf16_lane_98);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_101_pack, img_FIFO_buf16_lane_99);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_101_pack, img_FIFO_buf16_lane_100);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_101_pack, img_FIFO_buf16_lane_101);
  auto res_mag_x_update_0_sm42_15138 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_101_pack);

  hw_uint<96 > img_FIFO_buf16_lane_107_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_107_pack, img_FIFO_buf16_lane_102);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_107_pack, img_FIFO_buf16_lane_103);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_107_pack, img_FIFO_buf16_lane_104);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_107_pack, img_FIFO_buf16_lane_105);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_107_pack, img_FIFO_buf16_lane_106);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_107_pack, img_FIFO_buf16_lane_107);
  auto res_mag_x_update_0_sm42_14136 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_107_pack);

  hw_uint<96 > img_FIFO_buf16_lane_113_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_113_pack, img_FIFO_buf16_lane_108);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_113_pack, img_FIFO_buf16_lane_109);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_113_pack, img_FIFO_buf16_lane_110);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_113_pack, img_FIFO_buf16_lane_111);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_113_pack, img_FIFO_buf16_lane_112);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_113_pack, img_FIFO_buf16_lane_113);
  auto res_mag_x_update_0_sm42_13134 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_113_pack);

  hw_uint<96 > img_FIFO_buf16_lane_119_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_119_pack, img_FIFO_buf16_lane_114);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_119_pack, img_FIFO_buf16_lane_115);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_119_pack, img_FIFO_buf16_lane_116);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_119_pack, img_FIFO_buf16_lane_117);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_119_pack, img_FIFO_buf16_lane_118);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_119_pack, img_FIFO_buf16_lane_119);
  auto res_mag_x_update_0_sm42_12132 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_119_pack);

  hw_uint<96 > img_FIFO_buf16_lane_125_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_125_pack, img_FIFO_buf16_lane_120);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_125_pack, img_FIFO_buf16_lane_121);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_125_pack, img_FIFO_buf16_lane_122);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_125_pack, img_FIFO_buf16_lane_123);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_125_pack, img_FIFO_buf16_lane_124);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_125_pack, img_FIFO_buf16_lane_125);
  auto res_mag_x_update_0_sm42_11130 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_125_pack);

  hw_uint<96 > img_FIFO_buf16_lane_131_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_131_pack, img_FIFO_buf16_lane_126);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_131_pack, img_FIFO_buf16_lane_127);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_131_pack, img_FIFO_buf16_lane_128);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_131_pack, img_FIFO_buf16_lane_129);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_131_pack, img_FIFO_buf16_lane_130);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_131_pack, img_FIFO_buf16_lane_131);
  auto res_mag_x_update_0_sm42_10128 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_131_pack);

  hw_uint<96 > img_FIFO_buf16_lane_137_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_137_pack, img_FIFO_buf16_lane_132);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_137_pack, img_FIFO_buf16_lane_133);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_137_pack, img_FIFO_buf16_lane_134);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_137_pack, img_FIFO_buf16_lane_135);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_137_pack, img_FIFO_buf16_lane_136);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_137_pack, img_FIFO_buf16_lane_137);
  auto res_mag_x_update_0_sm42_9126 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_137_pack);

  hw_uint<96 > img_FIFO_buf16_lane_143_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_143_pack, img_FIFO_buf16_lane_138);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_143_pack, img_FIFO_buf16_lane_139);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_143_pack, img_FIFO_buf16_lane_140);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_143_pack, img_FIFO_buf16_lane_141);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_143_pack, img_FIFO_buf16_lane_142);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_143_pack, img_FIFO_buf16_lane_143);
  auto res_mag_x_update_0_sm42_8124 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_143_pack);

  hw_uint<96 > img_FIFO_buf16_lane_149_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_149_pack, img_FIFO_buf16_lane_144);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_149_pack, img_FIFO_buf16_lane_145);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_149_pack, img_FIFO_buf16_lane_146);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_149_pack, img_FIFO_buf16_lane_147);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_149_pack, img_FIFO_buf16_lane_148);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_149_pack, img_FIFO_buf16_lane_149);
  auto res_mag_x_update_0_sm42_7122 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_149_pack);

  hw_uint<96 > img_FIFO_buf16_lane_155_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_155_pack, img_FIFO_buf16_lane_150);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_155_pack, img_FIFO_buf16_lane_151);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_155_pack, img_FIFO_buf16_lane_152);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_155_pack, img_FIFO_buf16_lane_153);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_155_pack, img_FIFO_buf16_lane_154);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_155_pack, img_FIFO_buf16_lane_155);
  auto res_mag_x_update_0_sm42_6120 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_155_pack);

  hw_uint<96 > img_FIFO_buf16_lane_161_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_161_pack, img_FIFO_buf16_lane_156);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_161_pack, img_FIFO_buf16_lane_157);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_161_pack, img_FIFO_buf16_lane_158);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_161_pack, img_FIFO_buf16_lane_159);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_161_pack, img_FIFO_buf16_lane_160);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_161_pack, img_FIFO_buf16_lane_161);
  auto res_mag_x_update_0_sm42_5118 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_161_pack);

  hw_uint<96 > img_FIFO_buf16_lane_167_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_167_pack, img_FIFO_buf16_lane_162);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_167_pack, img_FIFO_buf16_lane_163);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_167_pack, img_FIFO_buf16_lane_164);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_167_pack, img_FIFO_buf16_lane_165);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_167_pack, img_FIFO_buf16_lane_166);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_167_pack, img_FIFO_buf16_lane_167);
  auto res_mag_x_update_0_sm42_4116 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_167_pack);

  hw_uint<96 > img_FIFO_buf16_lane_173_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_173_pack, img_FIFO_buf16_lane_168);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_173_pack, img_FIFO_buf16_lane_169);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_173_pack, img_FIFO_buf16_lane_170);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_173_pack, img_FIFO_buf16_lane_171);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_173_pack, img_FIFO_buf16_lane_172);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_173_pack, img_FIFO_buf16_lane_173);
  auto res_mag_x_update_0_sm42_3114 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_173_pack);

  hw_uint<96 > img_FIFO_buf16_lane_179_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_179_pack, img_FIFO_buf16_lane_174);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_179_pack, img_FIFO_buf16_lane_175);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_179_pack, img_FIFO_buf16_lane_176);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_179_pack, img_FIFO_buf16_lane_177);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_179_pack, img_FIFO_buf16_lane_178);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_179_pack, img_FIFO_buf16_lane_179);
  auto res_mag_x_update_0_sm42_2112 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_179_pack);

  hw_uint<96 > img_FIFO_buf16_lane_185_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_185_pack, img_FIFO_buf16_lane_180);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_185_pack, img_FIFO_buf16_lane_181);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_185_pack, img_FIFO_buf16_lane_182);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_185_pack, img_FIFO_buf16_lane_183);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_185_pack, img_FIFO_buf16_lane_184);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_185_pack, img_FIFO_buf16_lane_185);
  auto res_mag_x_update_0_sm42_1110 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_185_pack);

  hw_uint<96 > img_FIFO_buf16_lane_191_pack;
  set_at<0, 96, 16>(img_FIFO_buf16_lane_191_pack, img_FIFO_buf16_lane_186);
  set_at<16, 96, 16>(img_FIFO_buf16_lane_191_pack, img_FIFO_buf16_lane_187);
  set_at<32, 96, 16>(img_FIFO_buf16_lane_191_pack, img_FIFO_buf16_lane_188);
  set_at<48, 96, 16>(img_FIFO_buf16_lane_191_pack, img_FIFO_buf16_lane_189);
  set_at<64, 96, 16>(img_FIFO_buf16_lane_191_pack, img_FIFO_buf16_lane_190);
  set_at<80, 96, 16>(img_FIFO_buf16_lane_191_pack, img_FIFO_buf16_lane_191);
  auto res_mag_x_update_0_sm42_0108 = mag_x_generated_compute_unrolled_1(img_FIFO_buf16_lane_191_pack);
  hw_uint<512 > return_value835;
  set_at<0, 512, 16>(return_value835, res_mag_x_update_0_sm42_31170);
  set_at<16, 512, 16>(return_value835, res_mag_x_update_0_sm42_30168);
  set_at<32, 512, 16>(return_value835, res_mag_x_update_0_sm42_29166);
  set_at<48, 512, 16>(return_value835, res_mag_x_update_0_sm42_28164);
  set_at<64, 512, 16>(return_value835, res_mag_x_update_0_sm42_27162);
  set_at<80, 512, 16>(return_value835, res_mag_x_update_0_sm42_26160);
  set_at<96, 512, 16>(return_value835, res_mag_x_update_0_sm42_25158);
  set_at<112, 512, 16>(return_value835, res_mag_x_update_0_sm42_24156);
  set_at<128, 512, 16>(return_value835, res_mag_x_update_0_sm42_23154);
  set_at<144, 512, 16>(return_value835, res_mag_x_update_0_sm42_22152);
  set_at<160, 512, 16>(return_value835, res_mag_x_update_0_sm42_21150);
  set_at<176, 512, 16>(return_value835, res_mag_x_update_0_sm42_20148);
  set_at<192, 512, 16>(return_value835, res_mag_x_update_0_sm42_19146);
  set_at<208, 512, 16>(return_value835, res_mag_x_update_0_sm42_18144);
  set_at<224, 512, 16>(return_value835, res_mag_x_update_0_sm42_17142);
  set_at<240, 512, 16>(return_value835, res_mag_x_update_0_sm42_16140);
  set_at<256, 512, 16>(return_value835, res_mag_x_update_0_sm42_15138);
  set_at<272, 512, 16>(return_value835, res_mag_x_update_0_sm42_14136);
  set_at<288, 512, 16>(return_value835, res_mag_x_update_0_sm42_13134);
  set_at<304, 512, 16>(return_value835, res_mag_x_update_0_sm42_12132);
  set_at<320, 512, 16>(return_value835, res_mag_x_update_0_sm42_11130);
  set_at<336, 512, 16>(return_value835, res_mag_x_update_0_sm42_10128);
  set_at<352, 512, 16>(return_value835, res_mag_x_update_0_sm42_9126);
  set_at<368, 512, 16>(return_value835, res_mag_x_update_0_sm42_8124);
  set_at<384, 512, 16>(return_value835, res_mag_x_update_0_sm42_7122);
  set_at<400, 512, 16>(return_value835, res_mag_x_update_0_sm42_6120);
  set_at<416, 512, 16>(return_value835, res_mag_x_update_0_sm42_5118);
  set_at<432, 512, 16>(return_value835, res_mag_x_update_0_sm42_4116);
  set_at<448, 512, 16>(return_value835, res_mag_x_update_0_sm42_3114);
  set_at<464, 512, 16>(return_value835, res_mag_x_update_0_sm42_2112);
  set_at<480, 512, 16>(return_value835, res_mag_x_update_0_sm42_1110);
  set_at<496, 512, 16>(return_value835, res_mag_x_update_0_sm42_0108);
  return return_value835;

}

hw_uint<512> sbl4_32_1_cu837(hw_uint<16*32>& mag_x_FIFO_buf24, hw_uint<16*32>& mag_y_FIFO_buf28) {
  hw_uint<16> mag_x_FIFO_buf24_lane_0 = mag_x_FIFO_buf24.extract<0, 15>();
  hw_uint<16> mag_x_FIFO_buf24_lane_1 = mag_x_FIFO_buf24.extract<16, 31>();
  hw_uint<16> mag_x_FIFO_buf24_lane_2 = mag_x_FIFO_buf24.extract<32, 47>();
  hw_uint<16> mag_x_FIFO_buf24_lane_3 = mag_x_FIFO_buf24.extract<48, 63>();
  hw_uint<16> mag_x_FIFO_buf24_lane_4 = mag_x_FIFO_buf24.extract<64, 79>();
  hw_uint<16> mag_x_FIFO_buf24_lane_5 = mag_x_FIFO_buf24.extract<80, 95>();
  hw_uint<16> mag_x_FIFO_buf24_lane_6 = mag_x_FIFO_buf24.extract<96, 111>();
  hw_uint<16> mag_x_FIFO_buf24_lane_7 = mag_x_FIFO_buf24.extract<112, 127>();
  hw_uint<16> mag_x_FIFO_buf24_lane_8 = mag_x_FIFO_buf24.extract<128, 143>();
  hw_uint<16> mag_x_FIFO_buf24_lane_9 = mag_x_FIFO_buf24.extract<144, 159>();
  hw_uint<16> mag_x_FIFO_buf24_lane_10 = mag_x_FIFO_buf24.extract<160, 175>();
  hw_uint<16> mag_x_FIFO_buf24_lane_11 = mag_x_FIFO_buf24.extract<176, 191>();
  hw_uint<16> mag_x_FIFO_buf24_lane_12 = mag_x_FIFO_buf24.extract<192, 207>();
  hw_uint<16> mag_x_FIFO_buf24_lane_13 = mag_x_FIFO_buf24.extract<208, 223>();
  hw_uint<16> mag_x_FIFO_buf24_lane_14 = mag_x_FIFO_buf24.extract<224, 239>();
  hw_uint<16> mag_x_FIFO_buf24_lane_15 = mag_x_FIFO_buf24.extract<240, 255>();
  hw_uint<16> mag_x_FIFO_buf24_lane_16 = mag_x_FIFO_buf24.extract<256, 271>();
  hw_uint<16> mag_x_FIFO_buf24_lane_17 = mag_x_FIFO_buf24.extract<272, 287>();
  hw_uint<16> mag_x_FIFO_buf24_lane_18 = mag_x_FIFO_buf24.extract<288, 303>();
  hw_uint<16> mag_x_FIFO_buf24_lane_19 = mag_x_FIFO_buf24.extract<304, 319>();
  hw_uint<16> mag_x_FIFO_buf24_lane_20 = mag_x_FIFO_buf24.extract<320, 335>();
  hw_uint<16> mag_x_FIFO_buf24_lane_21 = mag_x_FIFO_buf24.extract<336, 351>();
  hw_uint<16> mag_x_FIFO_buf24_lane_22 = mag_x_FIFO_buf24.extract<352, 367>();
  hw_uint<16> mag_x_FIFO_buf24_lane_23 = mag_x_FIFO_buf24.extract<368, 383>();
  hw_uint<16> mag_x_FIFO_buf24_lane_24 = mag_x_FIFO_buf24.extract<384, 399>();
  hw_uint<16> mag_x_FIFO_buf24_lane_25 = mag_x_FIFO_buf24.extract<400, 415>();
  hw_uint<16> mag_x_FIFO_buf24_lane_26 = mag_x_FIFO_buf24.extract<416, 431>();
  hw_uint<16> mag_x_FIFO_buf24_lane_27 = mag_x_FIFO_buf24.extract<432, 447>();
  hw_uint<16> mag_x_FIFO_buf24_lane_28 = mag_x_FIFO_buf24.extract<448, 463>();
  hw_uint<16> mag_x_FIFO_buf24_lane_29 = mag_x_FIFO_buf24.extract<464, 479>();
  hw_uint<16> mag_x_FIFO_buf24_lane_30 = mag_x_FIFO_buf24.extract<480, 495>();
  hw_uint<16> mag_x_FIFO_buf24_lane_31 = mag_x_FIFO_buf24.extract<496, 511>();
  hw_uint<16> mag_y_FIFO_buf28_lane_0 = mag_y_FIFO_buf28.extract<0, 15>();
  hw_uint<16> mag_y_FIFO_buf28_lane_1 = mag_y_FIFO_buf28.extract<16, 31>();
  hw_uint<16> mag_y_FIFO_buf28_lane_2 = mag_y_FIFO_buf28.extract<32, 47>();
  hw_uint<16> mag_y_FIFO_buf28_lane_3 = mag_y_FIFO_buf28.extract<48, 63>();
  hw_uint<16> mag_y_FIFO_buf28_lane_4 = mag_y_FIFO_buf28.extract<64, 79>();
  hw_uint<16> mag_y_FIFO_buf28_lane_5 = mag_y_FIFO_buf28.extract<80, 95>();
  hw_uint<16> mag_y_FIFO_buf28_lane_6 = mag_y_FIFO_buf28.extract<96, 111>();
  hw_uint<16> mag_y_FIFO_buf28_lane_7 = mag_y_FIFO_buf28.extract<112, 127>();
  hw_uint<16> mag_y_FIFO_buf28_lane_8 = mag_y_FIFO_buf28.extract<128, 143>();
  hw_uint<16> mag_y_FIFO_buf28_lane_9 = mag_y_FIFO_buf28.extract<144, 159>();
  hw_uint<16> mag_y_FIFO_buf28_lane_10 = mag_y_FIFO_buf28.extract<160, 175>();
  hw_uint<16> mag_y_FIFO_buf28_lane_11 = mag_y_FIFO_buf28.extract<176, 191>();
  hw_uint<16> mag_y_FIFO_buf28_lane_12 = mag_y_FIFO_buf28.extract<192, 207>();
  hw_uint<16> mag_y_FIFO_buf28_lane_13 = mag_y_FIFO_buf28.extract<208, 223>();
  hw_uint<16> mag_y_FIFO_buf28_lane_14 = mag_y_FIFO_buf28.extract<224, 239>();
  hw_uint<16> mag_y_FIFO_buf28_lane_15 = mag_y_FIFO_buf28.extract<240, 255>();
  hw_uint<16> mag_y_FIFO_buf28_lane_16 = mag_y_FIFO_buf28.extract<256, 271>();
  hw_uint<16> mag_y_FIFO_buf28_lane_17 = mag_y_FIFO_buf28.extract<272, 287>();
  hw_uint<16> mag_y_FIFO_buf28_lane_18 = mag_y_FIFO_buf28.extract<288, 303>();
  hw_uint<16> mag_y_FIFO_buf28_lane_19 = mag_y_FIFO_buf28.extract<304, 319>();
  hw_uint<16> mag_y_FIFO_buf28_lane_20 = mag_y_FIFO_buf28.extract<320, 335>();
  hw_uint<16> mag_y_FIFO_buf28_lane_21 = mag_y_FIFO_buf28.extract<336, 351>();
  hw_uint<16> mag_y_FIFO_buf28_lane_22 = mag_y_FIFO_buf28.extract<352, 367>();
  hw_uint<16> mag_y_FIFO_buf28_lane_23 = mag_y_FIFO_buf28.extract<368, 383>();
  hw_uint<16> mag_y_FIFO_buf28_lane_24 = mag_y_FIFO_buf28.extract<384, 399>();
  hw_uint<16> mag_y_FIFO_buf28_lane_25 = mag_y_FIFO_buf28.extract<400, 415>();
  hw_uint<16> mag_y_FIFO_buf28_lane_26 = mag_y_FIFO_buf28.extract<416, 431>();
  hw_uint<16> mag_y_FIFO_buf28_lane_27 = mag_y_FIFO_buf28.extract<432, 447>();
  hw_uint<16> mag_y_FIFO_buf28_lane_28 = mag_y_FIFO_buf28.extract<448, 463>();
  hw_uint<16> mag_y_FIFO_buf28_lane_29 = mag_y_FIFO_buf28.extract<464, 479>();
  hw_uint<16> mag_y_FIFO_buf28_lane_30 = mag_y_FIFO_buf28.extract<480, 495>();
  hw_uint<16> mag_y_FIFO_buf28_lane_31 = mag_y_FIFO_buf28.extract<496, 511>();

	
  hw_uint<16 > mag_x_FIFO_buf24_lane_0_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_0_pack, mag_x_FIFO_buf24_lane_0);
  hw_uint<16 > mag_y_FIFO_buf28_lane_0_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_0_pack, mag_y_FIFO_buf28_lane_0);
  auto res_sbl4_32_update_0_sm43_31106 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_0_pack, mag_y_FIFO_buf28_lane_0_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_1_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_1_pack, mag_x_FIFO_buf24_lane_1);
  hw_uint<16 > mag_y_FIFO_buf28_lane_1_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_1_pack, mag_y_FIFO_buf28_lane_1);
  auto res_sbl4_32_update_0_sm43_30104 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_1_pack, mag_y_FIFO_buf28_lane_1_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_2_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_2_pack, mag_x_FIFO_buf24_lane_2);
  hw_uint<16 > mag_y_FIFO_buf28_lane_2_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_2_pack, mag_y_FIFO_buf28_lane_2);
  auto res_sbl4_32_update_0_sm43_29102 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_2_pack, mag_y_FIFO_buf28_lane_2_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_3_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_3_pack, mag_x_FIFO_buf24_lane_3);
  hw_uint<16 > mag_y_FIFO_buf28_lane_3_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_3_pack, mag_y_FIFO_buf28_lane_3);
  auto res_sbl4_32_update_0_sm43_28100 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_3_pack, mag_y_FIFO_buf28_lane_3_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_4_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_4_pack, mag_x_FIFO_buf24_lane_4);
  hw_uint<16 > mag_y_FIFO_buf28_lane_4_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_4_pack, mag_y_FIFO_buf28_lane_4);
  auto res_sbl4_32_update_0_sm43_2798 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_4_pack, mag_y_FIFO_buf28_lane_4_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_5_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_5_pack, mag_x_FIFO_buf24_lane_5);
  hw_uint<16 > mag_y_FIFO_buf28_lane_5_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_5_pack, mag_y_FIFO_buf28_lane_5);
  auto res_sbl4_32_update_0_sm43_2696 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_5_pack, mag_y_FIFO_buf28_lane_5_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_6_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_6_pack, mag_x_FIFO_buf24_lane_6);
  hw_uint<16 > mag_y_FIFO_buf28_lane_6_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_6_pack, mag_y_FIFO_buf28_lane_6);
  auto res_sbl4_32_update_0_sm43_2594 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_6_pack, mag_y_FIFO_buf28_lane_6_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_7_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_7_pack, mag_x_FIFO_buf24_lane_7);
  hw_uint<16 > mag_y_FIFO_buf28_lane_7_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_7_pack, mag_y_FIFO_buf28_lane_7);
  auto res_sbl4_32_update_0_sm43_2492 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_7_pack, mag_y_FIFO_buf28_lane_7_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_8_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_8_pack, mag_x_FIFO_buf24_lane_8);
  hw_uint<16 > mag_y_FIFO_buf28_lane_8_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_8_pack, mag_y_FIFO_buf28_lane_8);
  auto res_sbl4_32_update_0_sm43_2390 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_8_pack, mag_y_FIFO_buf28_lane_8_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_9_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_9_pack, mag_x_FIFO_buf24_lane_9);
  hw_uint<16 > mag_y_FIFO_buf28_lane_9_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_9_pack, mag_y_FIFO_buf28_lane_9);
  auto res_sbl4_32_update_0_sm43_2288 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_9_pack, mag_y_FIFO_buf28_lane_9_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_10_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_10_pack, mag_x_FIFO_buf24_lane_10);
  hw_uint<16 > mag_y_FIFO_buf28_lane_10_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_10_pack, mag_y_FIFO_buf28_lane_10);
  auto res_sbl4_32_update_0_sm43_2186 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_10_pack, mag_y_FIFO_buf28_lane_10_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_11_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_11_pack, mag_x_FIFO_buf24_lane_11);
  hw_uint<16 > mag_y_FIFO_buf28_lane_11_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_11_pack, mag_y_FIFO_buf28_lane_11);
  auto res_sbl4_32_update_0_sm43_2084 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_11_pack, mag_y_FIFO_buf28_lane_11_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_12_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_12_pack, mag_x_FIFO_buf24_lane_12);
  hw_uint<16 > mag_y_FIFO_buf28_lane_12_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_12_pack, mag_y_FIFO_buf28_lane_12);
  auto res_sbl4_32_update_0_sm43_1982 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_12_pack, mag_y_FIFO_buf28_lane_12_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_13_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_13_pack, mag_x_FIFO_buf24_lane_13);
  hw_uint<16 > mag_y_FIFO_buf28_lane_13_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_13_pack, mag_y_FIFO_buf28_lane_13);
  auto res_sbl4_32_update_0_sm43_1880 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_13_pack, mag_y_FIFO_buf28_lane_13_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_14_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_14_pack, mag_x_FIFO_buf24_lane_14);
  hw_uint<16 > mag_y_FIFO_buf28_lane_14_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_14_pack, mag_y_FIFO_buf28_lane_14);
  auto res_sbl4_32_update_0_sm43_1778 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_14_pack, mag_y_FIFO_buf28_lane_14_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_15_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_15_pack, mag_x_FIFO_buf24_lane_15);
  hw_uint<16 > mag_y_FIFO_buf28_lane_15_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_15_pack, mag_y_FIFO_buf28_lane_15);
  auto res_sbl4_32_update_0_sm43_1676 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_15_pack, mag_y_FIFO_buf28_lane_15_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_16_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_16_pack, mag_x_FIFO_buf24_lane_16);
  hw_uint<16 > mag_y_FIFO_buf28_lane_16_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_16_pack, mag_y_FIFO_buf28_lane_16);
  auto res_sbl4_32_update_0_sm43_1574 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_16_pack, mag_y_FIFO_buf28_lane_16_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_17_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_17_pack, mag_x_FIFO_buf24_lane_17);
  hw_uint<16 > mag_y_FIFO_buf28_lane_17_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_17_pack, mag_y_FIFO_buf28_lane_17);
  auto res_sbl4_32_update_0_sm43_1472 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_17_pack, mag_y_FIFO_buf28_lane_17_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_18_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_18_pack, mag_x_FIFO_buf24_lane_18);
  hw_uint<16 > mag_y_FIFO_buf28_lane_18_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_18_pack, mag_y_FIFO_buf28_lane_18);
  auto res_sbl4_32_update_0_sm43_1370 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_18_pack, mag_y_FIFO_buf28_lane_18_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_19_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_19_pack, mag_x_FIFO_buf24_lane_19);
  hw_uint<16 > mag_y_FIFO_buf28_lane_19_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_19_pack, mag_y_FIFO_buf28_lane_19);
  auto res_sbl4_32_update_0_sm43_1268 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_19_pack, mag_y_FIFO_buf28_lane_19_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_20_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_20_pack, mag_x_FIFO_buf24_lane_20);
  hw_uint<16 > mag_y_FIFO_buf28_lane_20_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_20_pack, mag_y_FIFO_buf28_lane_20);
  auto res_sbl4_32_update_0_sm43_1166 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_20_pack, mag_y_FIFO_buf28_lane_20_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_21_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_21_pack, mag_x_FIFO_buf24_lane_21);
  hw_uint<16 > mag_y_FIFO_buf28_lane_21_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_21_pack, mag_y_FIFO_buf28_lane_21);
  auto res_sbl4_32_update_0_sm43_1064 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_21_pack, mag_y_FIFO_buf28_lane_21_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_22_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_22_pack, mag_x_FIFO_buf24_lane_22);
  hw_uint<16 > mag_y_FIFO_buf28_lane_22_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_22_pack, mag_y_FIFO_buf28_lane_22);
  auto res_sbl4_32_update_0_sm43_962 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_22_pack, mag_y_FIFO_buf28_lane_22_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_23_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_23_pack, mag_x_FIFO_buf24_lane_23);
  hw_uint<16 > mag_y_FIFO_buf28_lane_23_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_23_pack, mag_y_FIFO_buf28_lane_23);
  auto res_sbl4_32_update_0_sm43_860 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_23_pack, mag_y_FIFO_buf28_lane_23_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_24_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_24_pack, mag_x_FIFO_buf24_lane_24);
  hw_uint<16 > mag_y_FIFO_buf28_lane_24_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_24_pack, mag_y_FIFO_buf28_lane_24);
  auto res_sbl4_32_update_0_sm43_758 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_24_pack, mag_y_FIFO_buf28_lane_24_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_25_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_25_pack, mag_x_FIFO_buf24_lane_25);
  hw_uint<16 > mag_y_FIFO_buf28_lane_25_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_25_pack, mag_y_FIFO_buf28_lane_25);
  auto res_sbl4_32_update_0_sm43_656 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_25_pack, mag_y_FIFO_buf28_lane_25_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_26_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_26_pack, mag_x_FIFO_buf24_lane_26);
  hw_uint<16 > mag_y_FIFO_buf28_lane_26_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_26_pack, mag_y_FIFO_buf28_lane_26);
  auto res_sbl4_32_update_0_sm43_554 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_26_pack, mag_y_FIFO_buf28_lane_26_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_27_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_27_pack, mag_x_FIFO_buf24_lane_27);
  hw_uint<16 > mag_y_FIFO_buf28_lane_27_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_27_pack, mag_y_FIFO_buf28_lane_27);
  auto res_sbl4_32_update_0_sm43_452 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_27_pack, mag_y_FIFO_buf28_lane_27_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_28_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_28_pack, mag_x_FIFO_buf24_lane_28);
  hw_uint<16 > mag_y_FIFO_buf28_lane_28_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_28_pack, mag_y_FIFO_buf28_lane_28);
  auto res_sbl4_32_update_0_sm43_350 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_28_pack, mag_y_FIFO_buf28_lane_28_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_29_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_29_pack, mag_x_FIFO_buf24_lane_29);
  hw_uint<16 > mag_y_FIFO_buf28_lane_29_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_29_pack, mag_y_FIFO_buf28_lane_29);
  auto res_sbl4_32_update_0_sm43_248 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_29_pack, mag_y_FIFO_buf28_lane_29_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_30_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_30_pack, mag_x_FIFO_buf24_lane_30);
  hw_uint<16 > mag_y_FIFO_buf28_lane_30_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_30_pack, mag_y_FIFO_buf28_lane_30);
  auto res_sbl4_32_update_0_sm43_146 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_30_pack, mag_y_FIFO_buf28_lane_30_pack);

  hw_uint<16 > mag_x_FIFO_buf24_lane_31_pack;
  set_at<0, 16, 16>(mag_x_FIFO_buf24_lane_31_pack, mag_x_FIFO_buf24_lane_31);
  hw_uint<16 > mag_y_FIFO_buf28_lane_31_pack;
  set_at<0, 16, 16>(mag_y_FIFO_buf28_lane_31_pack, mag_y_FIFO_buf28_lane_31);
  auto res_sbl4_32_update_0_sm43_044 = sbl4_32_generated_compute_unrolled_1(mag_x_FIFO_buf24_lane_31_pack, mag_y_FIFO_buf28_lane_31_pack);
  hw_uint<512 > return_value838;
  set_at<0, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_31106);
  set_at<16, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_30104);
  set_at<32, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_29102);
  set_at<48, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_28100);
  set_at<64, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2798);
  set_at<80, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2696);
  set_at<96, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2594);
  set_at<112, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2492);
  set_at<128, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2390);
  set_at<144, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2288);
  set_at<160, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2186);
  set_at<176, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_2084);
  set_at<192, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1982);
  set_at<208, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1880);
  set_at<224, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1778);
  set_at<240, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1676);
  set_at<256, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1574);
  set_at<272, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1472);
  set_at<288, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1370);
  set_at<304, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1268);
  set_at<320, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1166);
  set_at<336, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_1064);
  set_at<352, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_962);
  set_at<368, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_860);
  set_at<384, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_758);
  set_at<400, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_656);
  set_at<416, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_554);
  set_at<432, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_452);
  set_at<448, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_350);
  set_at<464, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_248);
  set_at<480, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_146);
  set_at<496, 512, 16>(return_value838, res_sbl4_32_update_0_sm43_044);
  return return_value838;

}

