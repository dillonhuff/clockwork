#include "sbl7_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<256> img_1_cu132(hw_uint<16*16>& off_chip_img) {
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

	
  hw_uint<16 > off_chip_img_lane_0_pack;
  set_at<0, 16, 16>(off_chip_img_lane_0_pack, off_chip_img_lane_0);
  auto res_img_update_0_sm0_04 = img_generated_compute_unrolled_1(off_chip_img_lane_0_pack);

  hw_uint<16 > off_chip_img_lane_1_pack;
  set_at<0, 16, 16>(off_chip_img_lane_1_pack, off_chip_img_lane_1);
  auto res_img_update_0_sm0_16 = img_generated_compute_unrolled_1(off_chip_img_lane_1_pack);

  hw_uint<16 > off_chip_img_lane_2_pack;
  set_at<0, 16, 16>(off_chip_img_lane_2_pack, off_chip_img_lane_2);
  auto res_img_update_0_sm0_28 = img_generated_compute_unrolled_1(off_chip_img_lane_2_pack);

  hw_uint<16 > off_chip_img_lane_3_pack;
  set_at<0, 16, 16>(off_chip_img_lane_3_pack, off_chip_img_lane_3);
  auto res_img_update_0_sm0_310 = img_generated_compute_unrolled_1(off_chip_img_lane_3_pack);

  hw_uint<16 > off_chip_img_lane_4_pack;
  set_at<0, 16, 16>(off_chip_img_lane_4_pack, off_chip_img_lane_4);
  auto res_img_update_0_sm0_412 = img_generated_compute_unrolled_1(off_chip_img_lane_4_pack);

  hw_uint<16 > off_chip_img_lane_5_pack;
  set_at<0, 16, 16>(off_chip_img_lane_5_pack, off_chip_img_lane_5);
  auto res_img_update_0_sm0_514 = img_generated_compute_unrolled_1(off_chip_img_lane_5_pack);

  hw_uint<16 > off_chip_img_lane_6_pack;
  set_at<0, 16, 16>(off_chip_img_lane_6_pack, off_chip_img_lane_6);
  auto res_img_update_0_sm0_616 = img_generated_compute_unrolled_1(off_chip_img_lane_6_pack);

  hw_uint<16 > off_chip_img_lane_7_pack;
  set_at<0, 16, 16>(off_chip_img_lane_7_pack, off_chip_img_lane_7);
  auto res_img_update_0_sm0_718 = img_generated_compute_unrolled_1(off_chip_img_lane_7_pack);

  hw_uint<16 > off_chip_img_lane_8_pack;
  set_at<0, 16, 16>(off_chip_img_lane_8_pack, off_chip_img_lane_8);
  auto res_img_update_0_sm0_820 = img_generated_compute_unrolled_1(off_chip_img_lane_8_pack);

  hw_uint<16 > off_chip_img_lane_9_pack;
  set_at<0, 16, 16>(off_chip_img_lane_9_pack, off_chip_img_lane_9);
  auto res_img_update_0_sm0_922 = img_generated_compute_unrolled_1(off_chip_img_lane_9_pack);

  hw_uint<16 > off_chip_img_lane_10_pack;
  set_at<0, 16, 16>(off_chip_img_lane_10_pack, off_chip_img_lane_10);
  auto res_img_update_0_sm0_1024 = img_generated_compute_unrolled_1(off_chip_img_lane_10_pack);

  hw_uint<16 > off_chip_img_lane_11_pack;
  set_at<0, 16, 16>(off_chip_img_lane_11_pack, off_chip_img_lane_11);
  auto res_img_update_0_sm0_1126 = img_generated_compute_unrolled_1(off_chip_img_lane_11_pack);

  hw_uint<16 > off_chip_img_lane_12_pack;
  set_at<0, 16, 16>(off_chip_img_lane_12_pack, off_chip_img_lane_12);
  auto res_img_update_0_sm0_1228 = img_generated_compute_unrolled_1(off_chip_img_lane_12_pack);

  hw_uint<16 > off_chip_img_lane_13_pack;
  set_at<0, 16, 16>(off_chip_img_lane_13_pack, off_chip_img_lane_13);
  auto res_img_update_0_sm0_1330 = img_generated_compute_unrolled_1(off_chip_img_lane_13_pack);

  hw_uint<16 > off_chip_img_lane_14_pack;
  set_at<0, 16, 16>(off_chip_img_lane_14_pack, off_chip_img_lane_14);
  auto res_img_update_0_sm0_1432 = img_generated_compute_unrolled_1(off_chip_img_lane_14_pack);

  hw_uint<16 > off_chip_img_lane_15_pack;
  set_at<0, 16, 16>(off_chip_img_lane_15_pack, off_chip_img_lane_15);
  auto res_img_update_0_sm0_1534 = img_generated_compute_unrolled_1(off_chip_img_lane_15_pack);
  hw_uint<256 > return_value133;
  set_at<0, 256, 16>(return_value133, res_img_update_0_sm0_04);
  set_at<16, 256, 16>(return_value133, res_img_update_0_sm0_16);
  set_at<32, 256, 16>(return_value133, res_img_update_0_sm0_28);
  set_at<48, 256, 16>(return_value133, res_img_update_0_sm0_310);
  set_at<64, 256, 16>(return_value133, res_img_update_0_sm0_412);
  set_at<80, 256, 16>(return_value133, res_img_update_0_sm0_514);
  set_at<96, 256, 16>(return_value133, res_img_update_0_sm0_616);
  set_at<112, 256, 16>(return_value133, res_img_update_0_sm0_718);
  set_at<128, 256, 16>(return_value133, res_img_update_0_sm0_820);
  set_at<144, 256, 16>(return_value133, res_img_update_0_sm0_922);
  set_at<160, 256, 16>(return_value133, res_img_update_0_sm0_1024);
  set_at<176, 256, 16>(return_value133, res_img_update_0_sm0_1126);
  set_at<192, 256, 16>(return_value133, res_img_update_0_sm0_1228);
  set_at<208, 256, 16>(return_value133, res_img_update_0_sm0_1330);
  set_at<224, 256, 16>(return_value133, res_img_update_0_sm0_1432);
  set_at<240, 256, 16>(return_value133, res_img_update_0_sm0_1534);
  return return_value133;

}

hw_uint<256> mag_y_1_cu135(hw_uint<16*96>& img) {
  hw_uint<16> img_lane_0 = img.extract<0, 15>();
  hw_uint<16> img_lane_1 = img.extract<16, 31>();
  hw_uint<16> img_lane_2 = img.extract<32, 47>();
  hw_uint<16> img_lane_3 = img.extract<48, 63>();
  hw_uint<16> img_lane_4 = img.extract<64, 79>();
  hw_uint<16> img_lane_5 = img.extract<80, 95>();
  hw_uint<16> img_lane_6 = img.extract<96, 111>();
  hw_uint<16> img_lane_7 = img.extract<112, 127>();
  hw_uint<16> img_lane_8 = img.extract<128, 143>();
  hw_uint<16> img_lane_9 = img.extract<144, 159>();
  hw_uint<16> img_lane_10 = img.extract<160, 175>();
  hw_uint<16> img_lane_11 = img.extract<176, 191>();
  hw_uint<16> img_lane_12 = img.extract<192, 207>();
  hw_uint<16> img_lane_13 = img.extract<208, 223>();
  hw_uint<16> img_lane_14 = img.extract<224, 239>();
  hw_uint<16> img_lane_15 = img.extract<240, 255>();
  hw_uint<16> img_lane_16 = img.extract<256, 271>();
  hw_uint<16> img_lane_17 = img.extract<272, 287>();
  hw_uint<16> img_lane_18 = img.extract<288, 303>();
  hw_uint<16> img_lane_19 = img.extract<304, 319>();
  hw_uint<16> img_lane_20 = img.extract<320, 335>();
  hw_uint<16> img_lane_21 = img.extract<336, 351>();
  hw_uint<16> img_lane_22 = img.extract<352, 367>();
  hw_uint<16> img_lane_23 = img.extract<368, 383>();
  hw_uint<16> img_lane_24 = img.extract<384, 399>();
  hw_uint<16> img_lane_25 = img.extract<400, 415>();
  hw_uint<16> img_lane_26 = img.extract<416, 431>();
  hw_uint<16> img_lane_27 = img.extract<432, 447>();
  hw_uint<16> img_lane_28 = img.extract<448, 463>();
  hw_uint<16> img_lane_29 = img.extract<464, 479>();
  hw_uint<16> img_lane_30 = img.extract<480, 495>();
  hw_uint<16> img_lane_31 = img.extract<496, 511>();
  hw_uint<16> img_lane_32 = img.extract<512, 527>();
  hw_uint<16> img_lane_33 = img.extract<528, 543>();
  hw_uint<16> img_lane_34 = img.extract<544, 559>();
  hw_uint<16> img_lane_35 = img.extract<560, 575>();
  hw_uint<16> img_lane_36 = img.extract<576, 591>();
  hw_uint<16> img_lane_37 = img.extract<592, 607>();
  hw_uint<16> img_lane_38 = img.extract<608, 623>();
  hw_uint<16> img_lane_39 = img.extract<624, 639>();
  hw_uint<16> img_lane_40 = img.extract<640, 655>();
  hw_uint<16> img_lane_41 = img.extract<656, 671>();
  hw_uint<16> img_lane_42 = img.extract<672, 687>();
  hw_uint<16> img_lane_43 = img.extract<688, 703>();
  hw_uint<16> img_lane_44 = img.extract<704, 719>();
  hw_uint<16> img_lane_45 = img.extract<720, 735>();
  hw_uint<16> img_lane_46 = img.extract<736, 751>();
  hw_uint<16> img_lane_47 = img.extract<752, 767>();
  hw_uint<16> img_lane_48 = img.extract<768, 783>();
  hw_uint<16> img_lane_49 = img.extract<784, 799>();
  hw_uint<16> img_lane_50 = img.extract<800, 815>();
  hw_uint<16> img_lane_51 = img.extract<816, 831>();
  hw_uint<16> img_lane_52 = img.extract<832, 847>();
  hw_uint<16> img_lane_53 = img.extract<848, 863>();
  hw_uint<16> img_lane_54 = img.extract<864, 879>();
  hw_uint<16> img_lane_55 = img.extract<880, 895>();
  hw_uint<16> img_lane_56 = img.extract<896, 911>();
  hw_uint<16> img_lane_57 = img.extract<912, 927>();
  hw_uint<16> img_lane_58 = img.extract<928, 943>();
  hw_uint<16> img_lane_59 = img.extract<944, 959>();
  hw_uint<16> img_lane_60 = img.extract<960, 975>();
  hw_uint<16> img_lane_61 = img.extract<976, 991>();
  hw_uint<16> img_lane_62 = img.extract<992, 1007>();
  hw_uint<16> img_lane_63 = img.extract<1008, 1023>();
  hw_uint<16> img_lane_64 = img.extract<1024, 1039>();
  hw_uint<16> img_lane_65 = img.extract<1040, 1055>();
  hw_uint<16> img_lane_66 = img.extract<1056, 1071>();
  hw_uint<16> img_lane_67 = img.extract<1072, 1087>();
  hw_uint<16> img_lane_68 = img.extract<1088, 1103>();
  hw_uint<16> img_lane_69 = img.extract<1104, 1119>();
  hw_uint<16> img_lane_70 = img.extract<1120, 1135>();
  hw_uint<16> img_lane_71 = img.extract<1136, 1151>();
  hw_uint<16> img_lane_72 = img.extract<1152, 1167>();
  hw_uint<16> img_lane_73 = img.extract<1168, 1183>();
  hw_uint<16> img_lane_74 = img.extract<1184, 1199>();
  hw_uint<16> img_lane_75 = img.extract<1200, 1215>();
  hw_uint<16> img_lane_76 = img.extract<1216, 1231>();
  hw_uint<16> img_lane_77 = img.extract<1232, 1247>();
  hw_uint<16> img_lane_78 = img.extract<1248, 1263>();
  hw_uint<16> img_lane_79 = img.extract<1264, 1279>();
  hw_uint<16> img_lane_80 = img.extract<1280, 1295>();
  hw_uint<16> img_lane_81 = img.extract<1296, 1311>();
  hw_uint<16> img_lane_82 = img.extract<1312, 1327>();
  hw_uint<16> img_lane_83 = img.extract<1328, 1343>();
  hw_uint<16> img_lane_84 = img.extract<1344, 1359>();
  hw_uint<16> img_lane_85 = img.extract<1360, 1375>();
  hw_uint<16> img_lane_86 = img.extract<1376, 1391>();
  hw_uint<16> img_lane_87 = img.extract<1392, 1407>();
  hw_uint<16> img_lane_88 = img.extract<1408, 1423>();
  hw_uint<16> img_lane_89 = img.extract<1424, 1439>();
  hw_uint<16> img_lane_90 = img.extract<1440, 1455>();
  hw_uint<16> img_lane_91 = img.extract<1456, 1471>();
  hw_uint<16> img_lane_92 = img.extract<1472, 1487>();
  hw_uint<16> img_lane_93 = img.extract<1488, 1503>();
  hw_uint<16> img_lane_94 = img.extract<1504, 1519>();
  hw_uint<16> img_lane_95 = img.extract<1520, 1535>();

	
  hw_uint<96 > img_lane_5_pack;
  set_at<0, 96, 16>(img_lane_5_pack, img_lane_0);
  set_at<16, 96, 16>(img_lane_5_pack, img_lane_1);
  set_at<32, 96, 16>(img_lane_5_pack, img_lane_2);
  set_at<48, 96, 16>(img_lane_5_pack, img_lane_3);
  set_at<64, 96, 16>(img_lane_5_pack, img_lane_4);
  set_at<80, 96, 16>(img_lane_5_pack, img_lane_5);
  auto res_mag_y_update_0_sm1_036 = mag_y_generated_compute_unrolled_1(img_lane_5_pack);

  hw_uint<96 > img_lane_11_pack;
  set_at<0, 96, 16>(img_lane_11_pack, img_lane_6);
  set_at<16, 96, 16>(img_lane_11_pack, img_lane_7);
  set_at<32, 96, 16>(img_lane_11_pack, img_lane_8);
  set_at<48, 96, 16>(img_lane_11_pack, img_lane_9);
  set_at<64, 96, 16>(img_lane_11_pack, img_lane_10);
  set_at<80, 96, 16>(img_lane_11_pack, img_lane_11);
  auto res_mag_y_update_0_sm1_138 = mag_y_generated_compute_unrolled_1(img_lane_11_pack);

  hw_uint<96 > img_lane_17_pack;
  set_at<0, 96, 16>(img_lane_17_pack, img_lane_12);
  set_at<16, 96, 16>(img_lane_17_pack, img_lane_13);
  set_at<32, 96, 16>(img_lane_17_pack, img_lane_14);
  set_at<48, 96, 16>(img_lane_17_pack, img_lane_15);
  set_at<64, 96, 16>(img_lane_17_pack, img_lane_16);
  set_at<80, 96, 16>(img_lane_17_pack, img_lane_17);
  auto res_mag_y_update_0_sm1_240 = mag_y_generated_compute_unrolled_1(img_lane_17_pack);

  hw_uint<96 > img_lane_23_pack;
  set_at<0, 96, 16>(img_lane_23_pack, img_lane_18);
  set_at<16, 96, 16>(img_lane_23_pack, img_lane_19);
  set_at<32, 96, 16>(img_lane_23_pack, img_lane_20);
  set_at<48, 96, 16>(img_lane_23_pack, img_lane_21);
  set_at<64, 96, 16>(img_lane_23_pack, img_lane_22);
  set_at<80, 96, 16>(img_lane_23_pack, img_lane_23);
  auto res_mag_y_update_0_sm1_342 = mag_y_generated_compute_unrolled_1(img_lane_23_pack);

  hw_uint<96 > img_lane_29_pack;
  set_at<0, 96, 16>(img_lane_29_pack, img_lane_24);
  set_at<16, 96, 16>(img_lane_29_pack, img_lane_25);
  set_at<32, 96, 16>(img_lane_29_pack, img_lane_26);
  set_at<48, 96, 16>(img_lane_29_pack, img_lane_27);
  set_at<64, 96, 16>(img_lane_29_pack, img_lane_28);
  set_at<80, 96, 16>(img_lane_29_pack, img_lane_29);
  auto res_mag_y_update_0_sm1_444 = mag_y_generated_compute_unrolled_1(img_lane_29_pack);

  hw_uint<96 > img_lane_35_pack;
  set_at<0, 96, 16>(img_lane_35_pack, img_lane_30);
  set_at<16, 96, 16>(img_lane_35_pack, img_lane_31);
  set_at<32, 96, 16>(img_lane_35_pack, img_lane_32);
  set_at<48, 96, 16>(img_lane_35_pack, img_lane_33);
  set_at<64, 96, 16>(img_lane_35_pack, img_lane_34);
  set_at<80, 96, 16>(img_lane_35_pack, img_lane_35);
  auto res_mag_y_update_0_sm1_546 = mag_y_generated_compute_unrolled_1(img_lane_35_pack);

  hw_uint<96 > img_lane_41_pack;
  set_at<0, 96, 16>(img_lane_41_pack, img_lane_36);
  set_at<16, 96, 16>(img_lane_41_pack, img_lane_37);
  set_at<32, 96, 16>(img_lane_41_pack, img_lane_38);
  set_at<48, 96, 16>(img_lane_41_pack, img_lane_39);
  set_at<64, 96, 16>(img_lane_41_pack, img_lane_40);
  set_at<80, 96, 16>(img_lane_41_pack, img_lane_41);
  auto res_mag_y_update_0_sm1_648 = mag_y_generated_compute_unrolled_1(img_lane_41_pack);

  hw_uint<96 > img_lane_47_pack;
  set_at<0, 96, 16>(img_lane_47_pack, img_lane_42);
  set_at<16, 96, 16>(img_lane_47_pack, img_lane_43);
  set_at<32, 96, 16>(img_lane_47_pack, img_lane_44);
  set_at<48, 96, 16>(img_lane_47_pack, img_lane_45);
  set_at<64, 96, 16>(img_lane_47_pack, img_lane_46);
  set_at<80, 96, 16>(img_lane_47_pack, img_lane_47);
  auto res_mag_y_update_0_sm1_750 = mag_y_generated_compute_unrolled_1(img_lane_47_pack);

  hw_uint<96 > img_lane_53_pack;
  set_at<0, 96, 16>(img_lane_53_pack, img_lane_48);
  set_at<16, 96, 16>(img_lane_53_pack, img_lane_49);
  set_at<32, 96, 16>(img_lane_53_pack, img_lane_50);
  set_at<48, 96, 16>(img_lane_53_pack, img_lane_51);
  set_at<64, 96, 16>(img_lane_53_pack, img_lane_52);
  set_at<80, 96, 16>(img_lane_53_pack, img_lane_53);
  auto res_mag_y_update_0_sm1_852 = mag_y_generated_compute_unrolled_1(img_lane_53_pack);

  hw_uint<96 > img_lane_59_pack;
  set_at<0, 96, 16>(img_lane_59_pack, img_lane_54);
  set_at<16, 96, 16>(img_lane_59_pack, img_lane_55);
  set_at<32, 96, 16>(img_lane_59_pack, img_lane_56);
  set_at<48, 96, 16>(img_lane_59_pack, img_lane_57);
  set_at<64, 96, 16>(img_lane_59_pack, img_lane_58);
  set_at<80, 96, 16>(img_lane_59_pack, img_lane_59);
  auto res_mag_y_update_0_sm1_954 = mag_y_generated_compute_unrolled_1(img_lane_59_pack);

  hw_uint<96 > img_lane_65_pack;
  set_at<0, 96, 16>(img_lane_65_pack, img_lane_60);
  set_at<16, 96, 16>(img_lane_65_pack, img_lane_61);
  set_at<32, 96, 16>(img_lane_65_pack, img_lane_62);
  set_at<48, 96, 16>(img_lane_65_pack, img_lane_63);
  set_at<64, 96, 16>(img_lane_65_pack, img_lane_64);
  set_at<80, 96, 16>(img_lane_65_pack, img_lane_65);
  auto res_mag_y_update_0_sm1_1056 = mag_y_generated_compute_unrolled_1(img_lane_65_pack);

  hw_uint<96 > img_lane_71_pack;
  set_at<0, 96, 16>(img_lane_71_pack, img_lane_66);
  set_at<16, 96, 16>(img_lane_71_pack, img_lane_67);
  set_at<32, 96, 16>(img_lane_71_pack, img_lane_68);
  set_at<48, 96, 16>(img_lane_71_pack, img_lane_69);
  set_at<64, 96, 16>(img_lane_71_pack, img_lane_70);
  set_at<80, 96, 16>(img_lane_71_pack, img_lane_71);
  auto res_mag_y_update_0_sm1_1158 = mag_y_generated_compute_unrolled_1(img_lane_71_pack);

  hw_uint<96 > img_lane_77_pack;
  set_at<0, 96, 16>(img_lane_77_pack, img_lane_72);
  set_at<16, 96, 16>(img_lane_77_pack, img_lane_73);
  set_at<32, 96, 16>(img_lane_77_pack, img_lane_74);
  set_at<48, 96, 16>(img_lane_77_pack, img_lane_75);
  set_at<64, 96, 16>(img_lane_77_pack, img_lane_76);
  set_at<80, 96, 16>(img_lane_77_pack, img_lane_77);
  auto res_mag_y_update_0_sm1_1260 = mag_y_generated_compute_unrolled_1(img_lane_77_pack);

  hw_uint<96 > img_lane_83_pack;
  set_at<0, 96, 16>(img_lane_83_pack, img_lane_78);
  set_at<16, 96, 16>(img_lane_83_pack, img_lane_79);
  set_at<32, 96, 16>(img_lane_83_pack, img_lane_80);
  set_at<48, 96, 16>(img_lane_83_pack, img_lane_81);
  set_at<64, 96, 16>(img_lane_83_pack, img_lane_82);
  set_at<80, 96, 16>(img_lane_83_pack, img_lane_83);
  auto res_mag_y_update_0_sm1_1362 = mag_y_generated_compute_unrolled_1(img_lane_83_pack);

  hw_uint<96 > img_lane_89_pack;
  set_at<0, 96, 16>(img_lane_89_pack, img_lane_84);
  set_at<16, 96, 16>(img_lane_89_pack, img_lane_85);
  set_at<32, 96, 16>(img_lane_89_pack, img_lane_86);
  set_at<48, 96, 16>(img_lane_89_pack, img_lane_87);
  set_at<64, 96, 16>(img_lane_89_pack, img_lane_88);
  set_at<80, 96, 16>(img_lane_89_pack, img_lane_89);
  auto res_mag_y_update_0_sm1_1464 = mag_y_generated_compute_unrolled_1(img_lane_89_pack);

  hw_uint<96 > img_lane_95_pack;
  set_at<0, 96, 16>(img_lane_95_pack, img_lane_90);
  set_at<16, 96, 16>(img_lane_95_pack, img_lane_91);
  set_at<32, 96, 16>(img_lane_95_pack, img_lane_92);
  set_at<48, 96, 16>(img_lane_95_pack, img_lane_93);
  set_at<64, 96, 16>(img_lane_95_pack, img_lane_94);
  set_at<80, 96, 16>(img_lane_95_pack, img_lane_95);
  auto res_mag_y_update_0_sm1_1566 = mag_y_generated_compute_unrolled_1(img_lane_95_pack);
  hw_uint<256 > return_value136;
  set_at<0, 256, 16>(return_value136, res_mag_y_update_0_sm1_036);
  set_at<16, 256, 16>(return_value136, res_mag_y_update_0_sm1_138);
  set_at<32, 256, 16>(return_value136, res_mag_y_update_0_sm1_240);
  set_at<48, 256, 16>(return_value136, res_mag_y_update_0_sm1_342);
  set_at<64, 256, 16>(return_value136, res_mag_y_update_0_sm1_444);
  set_at<80, 256, 16>(return_value136, res_mag_y_update_0_sm1_546);
  set_at<96, 256, 16>(return_value136, res_mag_y_update_0_sm1_648);
  set_at<112, 256, 16>(return_value136, res_mag_y_update_0_sm1_750);
  set_at<128, 256, 16>(return_value136, res_mag_y_update_0_sm1_852);
  set_at<144, 256, 16>(return_value136, res_mag_y_update_0_sm1_954);
  set_at<160, 256, 16>(return_value136, res_mag_y_update_0_sm1_1056);
  set_at<176, 256, 16>(return_value136, res_mag_y_update_0_sm1_1158);
  set_at<192, 256, 16>(return_value136, res_mag_y_update_0_sm1_1260);
  set_at<208, 256, 16>(return_value136, res_mag_y_update_0_sm1_1362);
  set_at<224, 256, 16>(return_value136, res_mag_y_update_0_sm1_1464);
  set_at<240, 256, 16>(return_value136, res_mag_y_update_0_sm1_1566);
  return return_value136;

}

hw_uint<256> mag_x_1_cu138(hw_uint<16*96>& img) {
  hw_uint<16> img_lane_0 = img.extract<0, 15>();
  hw_uint<16> img_lane_1 = img.extract<16, 31>();
  hw_uint<16> img_lane_2 = img.extract<32, 47>();
  hw_uint<16> img_lane_3 = img.extract<48, 63>();
  hw_uint<16> img_lane_4 = img.extract<64, 79>();
  hw_uint<16> img_lane_5 = img.extract<80, 95>();
  hw_uint<16> img_lane_6 = img.extract<96, 111>();
  hw_uint<16> img_lane_7 = img.extract<112, 127>();
  hw_uint<16> img_lane_8 = img.extract<128, 143>();
  hw_uint<16> img_lane_9 = img.extract<144, 159>();
  hw_uint<16> img_lane_10 = img.extract<160, 175>();
  hw_uint<16> img_lane_11 = img.extract<176, 191>();
  hw_uint<16> img_lane_12 = img.extract<192, 207>();
  hw_uint<16> img_lane_13 = img.extract<208, 223>();
  hw_uint<16> img_lane_14 = img.extract<224, 239>();
  hw_uint<16> img_lane_15 = img.extract<240, 255>();
  hw_uint<16> img_lane_16 = img.extract<256, 271>();
  hw_uint<16> img_lane_17 = img.extract<272, 287>();
  hw_uint<16> img_lane_18 = img.extract<288, 303>();
  hw_uint<16> img_lane_19 = img.extract<304, 319>();
  hw_uint<16> img_lane_20 = img.extract<320, 335>();
  hw_uint<16> img_lane_21 = img.extract<336, 351>();
  hw_uint<16> img_lane_22 = img.extract<352, 367>();
  hw_uint<16> img_lane_23 = img.extract<368, 383>();
  hw_uint<16> img_lane_24 = img.extract<384, 399>();
  hw_uint<16> img_lane_25 = img.extract<400, 415>();
  hw_uint<16> img_lane_26 = img.extract<416, 431>();
  hw_uint<16> img_lane_27 = img.extract<432, 447>();
  hw_uint<16> img_lane_28 = img.extract<448, 463>();
  hw_uint<16> img_lane_29 = img.extract<464, 479>();
  hw_uint<16> img_lane_30 = img.extract<480, 495>();
  hw_uint<16> img_lane_31 = img.extract<496, 511>();
  hw_uint<16> img_lane_32 = img.extract<512, 527>();
  hw_uint<16> img_lane_33 = img.extract<528, 543>();
  hw_uint<16> img_lane_34 = img.extract<544, 559>();
  hw_uint<16> img_lane_35 = img.extract<560, 575>();
  hw_uint<16> img_lane_36 = img.extract<576, 591>();
  hw_uint<16> img_lane_37 = img.extract<592, 607>();
  hw_uint<16> img_lane_38 = img.extract<608, 623>();
  hw_uint<16> img_lane_39 = img.extract<624, 639>();
  hw_uint<16> img_lane_40 = img.extract<640, 655>();
  hw_uint<16> img_lane_41 = img.extract<656, 671>();
  hw_uint<16> img_lane_42 = img.extract<672, 687>();
  hw_uint<16> img_lane_43 = img.extract<688, 703>();
  hw_uint<16> img_lane_44 = img.extract<704, 719>();
  hw_uint<16> img_lane_45 = img.extract<720, 735>();
  hw_uint<16> img_lane_46 = img.extract<736, 751>();
  hw_uint<16> img_lane_47 = img.extract<752, 767>();
  hw_uint<16> img_lane_48 = img.extract<768, 783>();
  hw_uint<16> img_lane_49 = img.extract<784, 799>();
  hw_uint<16> img_lane_50 = img.extract<800, 815>();
  hw_uint<16> img_lane_51 = img.extract<816, 831>();
  hw_uint<16> img_lane_52 = img.extract<832, 847>();
  hw_uint<16> img_lane_53 = img.extract<848, 863>();
  hw_uint<16> img_lane_54 = img.extract<864, 879>();
  hw_uint<16> img_lane_55 = img.extract<880, 895>();
  hw_uint<16> img_lane_56 = img.extract<896, 911>();
  hw_uint<16> img_lane_57 = img.extract<912, 927>();
  hw_uint<16> img_lane_58 = img.extract<928, 943>();
  hw_uint<16> img_lane_59 = img.extract<944, 959>();
  hw_uint<16> img_lane_60 = img.extract<960, 975>();
  hw_uint<16> img_lane_61 = img.extract<976, 991>();
  hw_uint<16> img_lane_62 = img.extract<992, 1007>();
  hw_uint<16> img_lane_63 = img.extract<1008, 1023>();
  hw_uint<16> img_lane_64 = img.extract<1024, 1039>();
  hw_uint<16> img_lane_65 = img.extract<1040, 1055>();
  hw_uint<16> img_lane_66 = img.extract<1056, 1071>();
  hw_uint<16> img_lane_67 = img.extract<1072, 1087>();
  hw_uint<16> img_lane_68 = img.extract<1088, 1103>();
  hw_uint<16> img_lane_69 = img.extract<1104, 1119>();
  hw_uint<16> img_lane_70 = img.extract<1120, 1135>();
  hw_uint<16> img_lane_71 = img.extract<1136, 1151>();
  hw_uint<16> img_lane_72 = img.extract<1152, 1167>();
  hw_uint<16> img_lane_73 = img.extract<1168, 1183>();
  hw_uint<16> img_lane_74 = img.extract<1184, 1199>();
  hw_uint<16> img_lane_75 = img.extract<1200, 1215>();
  hw_uint<16> img_lane_76 = img.extract<1216, 1231>();
  hw_uint<16> img_lane_77 = img.extract<1232, 1247>();
  hw_uint<16> img_lane_78 = img.extract<1248, 1263>();
  hw_uint<16> img_lane_79 = img.extract<1264, 1279>();
  hw_uint<16> img_lane_80 = img.extract<1280, 1295>();
  hw_uint<16> img_lane_81 = img.extract<1296, 1311>();
  hw_uint<16> img_lane_82 = img.extract<1312, 1327>();
  hw_uint<16> img_lane_83 = img.extract<1328, 1343>();
  hw_uint<16> img_lane_84 = img.extract<1344, 1359>();
  hw_uint<16> img_lane_85 = img.extract<1360, 1375>();
  hw_uint<16> img_lane_86 = img.extract<1376, 1391>();
  hw_uint<16> img_lane_87 = img.extract<1392, 1407>();
  hw_uint<16> img_lane_88 = img.extract<1408, 1423>();
  hw_uint<16> img_lane_89 = img.extract<1424, 1439>();
  hw_uint<16> img_lane_90 = img.extract<1440, 1455>();
  hw_uint<16> img_lane_91 = img.extract<1456, 1471>();
  hw_uint<16> img_lane_92 = img.extract<1472, 1487>();
  hw_uint<16> img_lane_93 = img.extract<1488, 1503>();
  hw_uint<16> img_lane_94 = img.extract<1504, 1519>();
  hw_uint<16> img_lane_95 = img.extract<1520, 1535>();

	
  hw_uint<96 > img_lane_5_pack;
  set_at<0, 96, 16>(img_lane_5_pack, img_lane_0);
  set_at<16, 96, 16>(img_lane_5_pack, img_lane_1);
  set_at<32, 96, 16>(img_lane_5_pack, img_lane_2);
  set_at<48, 96, 16>(img_lane_5_pack, img_lane_3);
  set_at<64, 96, 16>(img_lane_5_pack, img_lane_4);
  set_at<80, 96, 16>(img_lane_5_pack, img_lane_5);
  auto res_mag_x_update_0_sm2_068 = mag_x_generated_compute_unrolled_1(img_lane_5_pack);

  hw_uint<96 > img_lane_11_pack;
  set_at<0, 96, 16>(img_lane_11_pack, img_lane_6);
  set_at<16, 96, 16>(img_lane_11_pack, img_lane_7);
  set_at<32, 96, 16>(img_lane_11_pack, img_lane_8);
  set_at<48, 96, 16>(img_lane_11_pack, img_lane_9);
  set_at<64, 96, 16>(img_lane_11_pack, img_lane_10);
  set_at<80, 96, 16>(img_lane_11_pack, img_lane_11);
  auto res_mag_x_update_0_sm2_170 = mag_x_generated_compute_unrolled_1(img_lane_11_pack);

  hw_uint<96 > img_lane_17_pack;
  set_at<0, 96, 16>(img_lane_17_pack, img_lane_12);
  set_at<16, 96, 16>(img_lane_17_pack, img_lane_13);
  set_at<32, 96, 16>(img_lane_17_pack, img_lane_14);
  set_at<48, 96, 16>(img_lane_17_pack, img_lane_15);
  set_at<64, 96, 16>(img_lane_17_pack, img_lane_16);
  set_at<80, 96, 16>(img_lane_17_pack, img_lane_17);
  auto res_mag_x_update_0_sm2_272 = mag_x_generated_compute_unrolled_1(img_lane_17_pack);

  hw_uint<96 > img_lane_23_pack;
  set_at<0, 96, 16>(img_lane_23_pack, img_lane_18);
  set_at<16, 96, 16>(img_lane_23_pack, img_lane_19);
  set_at<32, 96, 16>(img_lane_23_pack, img_lane_20);
  set_at<48, 96, 16>(img_lane_23_pack, img_lane_21);
  set_at<64, 96, 16>(img_lane_23_pack, img_lane_22);
  set_at<80, 96, 16>(img_lane_23_pack, img_lane_23);
  auto res_mag_x_update_0_sm2_374 = mag_x_generated_compute_unrolled_1(img_lane_23_pack);

  hw_uint<96 > img_lane_29_pack;
  set_at<0, 96, 16>(img_lane_29_pack, img_lane_24);
  set_at<16, 96, 16>(img_lane_29_pack, img_lane_25);
  set_at<32, 96, 16>(img_lane_29_pack, img_lane_26);
  set_at<48, 96, 16>(img_lane_29_pack, img_lane_27);
  set_at<64, 96, 16>(img_lane_29_pack, img_lane_28);
  set_at<80, 96, 16>(img_lane_29_pack, img_lane_29);
  auto res_mag_x_update_0_sm2_476 = mag_x_generated_compute_unrolled_1(img_lane_29_pack);

  hw_uint<96 > img_lane_35_pack;
  set_at<0, 96, 16>(img_lane_35_pack, img_lane_30);
  set_at<16, 96, 16>(img_lane_35_pack, img_lane_31);
  set_at<32, 96, 16>(img_lane_35_pack, img_lane_32);
  set_at<48, 96, 16>(img_lane_35_pack, img_lane_33);
  set_at<64, 96, 16>(img_lane_35_pack, img_lane_34);
  set_at<80, 96, 16>(img_lane_35_pack, img_lane_35);
  auto res_mag_x_update_0_sm2_578 = mag_x_generated_compute_unrolled_1(img_lane_35_pack);

  hw_uint<96 > img_lane_41_pack;
  set_at<0, 96, 16>(img_lane_41_pack, img_lane_36);
  set_at<16, 96, 16>(img_lane_41_pack, img_lane_37);
  set_at<32, 96, 16>(img_lane_41_pack, img_lane_38);
  set_at<48, 96, 16>(img_lane_41_pack, img_lane_39);
  set_at<64, 96, 16>(img_lane_41_pack, img_lane_40);
  set_at<80, 96, 16>(img_lane_41_pack, img_lane_41);
  auto res_mag_x_update_0_sm2_680 = mag_x_generated_compute_unrolled_1(img_lane_41_pack);

  hw_uint<96 > img_lane_47_pack;
  set_at<0, 96, 16>(img_lane_47_pack, img_lane_42);
  set_at<16, 96, 16>(img_lane_47_pack, img_lane_43);
  set_at<32, 96, 16>(img_lane_47_pack, img_lane_44);
  set_at<48, 96, 16>(img_lane_47_pack, img_lane_45);
  set_at<64, 96, 16>(img_lane_47_pack, img_lane_46);
  set_at<80, 96, 16>(img_lane_47_pack, img_lane_47);
  auto res_mag_x_update_0_sm2_782 = mag_x_generated_compute_unrolled_1(img_lane_47_pack);

  hw_uint<96 > img_lane_53_pack;
  set_at<0, 96, 16>(img_lane_53_pack, img_lane_48);
  set_at<16, 96, 16>(img_lane_53_pack, img_lane_49);
  set_at<32, 96, 16>(img_lane_53_pack, img_lane_50);
  set_at<48, 96, 16>(img_lane_53_pack, img_lane_51);
  set_at<64, 96, 16>(img_lane_53_pack, img_lane_52);
  set_at<80, 96, 16>(img_lane_53_pack, img_lane_53);
  auto res_mag_x_update_0_sm2_884 = mag_x_generated_compute_unrolled_1(img_lane_53_pack);

  hw_uint<96 > img_lane_59_pack;
  set_at<0, 96, 16>(img_lane_59_pack, img_lane_54);
  set_at<16, 96, 16>(img_lane_59_pack, img_lane_55);
  set_at<32, 96, 16>(img_lane_59_pack, img_lane_56);
  set_at<48, 96, 16>(img_lane_59_pack, img_lane_57);
  set_at<64, 96, 16>(img_lane_59_pack, img_lane_58);
  set_at<80, 96, 16>(img_lane_59_pack, img_lane_59);
  auto res_mag_x_update_0_sm2_986 = mag_x_generated_compute_unrolled_1(img_lane_59_pack);

  hw_uint<96 > img_lane_65_pack;
  set_at<0, 96, 16>(img_lane_65_pack, img_lane_60);
  set_at<16, 96, 16>(img_lane_65_pack, img_lane_61);
  set_at<32, 96, 16>(img_lane_65_pack, img_lane_62);
  set_at<48, 96, 16>(img_lane_65_pack, img_lane_63);
  set_at<64, 96, 16>(img_lane_65_pack, img_lane_64);
  set_at<80, 96, 16>(img_lane_65_pack, img_lane_65);
  auto res_mag_x_update_0_sm2_1088 = mag_x_generated_compute_unrolled_1(img_lane_65_pack);

  hw_uint<96 > img_lane_71_pack;
  set_at<0, 96, 16>(img_lane_71_pack, img_lane_66);
  set_at<16, 96, 16>(img_lane_71_pack, img_lane_67);
  set_at<32, 96, 16>(img_lane_71_pack, img_lane_68);
  set_at<48, 96, 16>(img_lane_71_pack, img_lane_69);
  set_at<64, 96, 16>(img_lane_71_pack, img_lane_70);
  set_at<80, 96, 16>(img_lane_71_pack, img_lane_71);
  auto res_mag_x_update_0_sm2_1190 = mag_x_generated_compute_unrolled_1(img_lane_71_pack);

  hw_uint<96 > img_lane_77_pack;
  set_at<0, 96, 16>(img_lane_77_pack, img_lane_72);
  set_at<16, 96, 16>(img_lane_77_pack, img_lane_73);
  set_at<32, 96, 16>(img_lane_77_pack, img_lane_74);
  set_at<48, 96, 16>(img_lane_77_pack, img_lane_75);
  set_at<64, 96, 16>(img_lane_77_pack, img_lane_76);
  set_at<80, 96, 16>(img_lane_77_pack, img_lane_77);
  auto res_mag_x_update_0_sm2_1292 = mag_x_generated_compute_unrolled_1(img_lane_77_pack);

  hw_uint<96 > img_lane_83_pack;
  set_at<0, 96, 16>(img_lane_83_pack, img_lane_78);
  set_at<16, 96, 16>(img_lane_83_pack, img_lane_79);
  set_at<32, 96, 16>(img_lane_83_pack, img_lane_80);
  set_at<48, 96, 16>(img_lane_83_pack, img_lane_81);
  set_at<64, 96, 16>(img_lane_83_pack, img_lane_82);
  set_at<80, 96, 16>(img_lane_83_pack, img_lane_83);
  auto res_mag_x_update_0_sm2_1394 = mag_x_generated_compute_unrolled_1(img_lane_83_pack);

  hw_uint<96 > img_lane_89_pack;
  set_at<0, 96, 16>(img_lane_89_pack, img_lane_84);
  set_at<16, 96, 16>(img_lane_89_pack, img_lane_85);
  set_at<32, 96, 16>(img_lane_89_pack, img_lane_86);
  set_at<48, 96, 16>(img_lane_89_pack, img_lane_87);
  set_at<64, 96, 16>(img_lane_89_pack, img_lane_88);
  set_at<80, 96, 16>(img_lane_89_pack, img_lane_89);
  auto res_mag_x_update_0_sm2_1496 = mag_x_generated_compute_unrolled_1(img_lane_89_pack);

  hw_uint<96 > img_lane_95_pack;
  set_at<0, 96, 16>(img_lane_95_pack, img_lane_90);
  set_at<16, 96, 16>(img_lane_95_pack, img_lane_91);
  set_at<32, 96, 16>(img_lane_95_pack, img_lane_92);
  set_at<48, 96, 16>(img_lane_95_pack, img_lane_93);
  set_at<64, 96, 16>(img_lane_95_pack, img_lane_94);
  set_at<80, 96, 16>(img_lane_95_pack, img_lane_95);
  auto res_mag_x_update_0_sm2_1598 = mag_x_generated_compute_unrolled_1(img_lane_95_pack);
  hw_uint<256 > return_value139;
  set_at<0, 256, 16>(return_value139, res_mag_x_update_0_sm2_068);
  set_at<16, 256, 16>(return_value139, res_mag_x_update_0_sm2_170);
  set_at<32, 256, 16>(return_value139, res_mag_x_update_0_sm2_272);
  set_at<48, 256, 16>(return_value139, res_mag_x_update_0_sm2_374);
  set_at<64, 256, 16>(return_value139, res_mag_x_update_0_sm2_476);
  set_at<80, 256, 16>(return_value139, res_mag_x_update_0_sm2_578);
  set_at<96, 256, 16>(return_value139, res_mag_x_update_0_sm2_680);
  set_at<112, 256, 16>(return_value139, res_mag_x_update_0_sm2_782);
  set_at<128, 256, 16>(return_value139, res_mag_x_update_0_sm2_884);
  set_at<144, 256, 16>(return_value139, res_mag_x_update_0_sm2_986);
  set_at<160, 256, 16>(return_value139, res_mag_x_update_0_sm2_1088);
  set_at<176, 256, 16>(return_value139, res_mag_x_update_0_sm2_1190);
  set_at<192, 256, 16>(return_value139, res_mag_x_update_0_sm2_1292);
  set_at<208, 256, 16>(return_value139, res_mag_x_update_0_sm2_1394);
  set_at<224, 256, 16>(return_value139, res_mag_x_update_0_sm2_1496);
  set_at<240, 256, 16>(return_value139, res_mag_x_update_0_sm2_1598);
  return return_value139;

}

hw_uint<256> sbl7_16_1_cu141(hw_uint<16*16>& mag_x, hw_uint<16*16>& mag_y) {
  hw_uint<16> mag_x_lane_0 = mag_x.extract<0, 15>();
  hw_uint<16> mag_x_lane_1 = mag_x.extract<16, 31>();
  hw_uint<16> mag_x_lane_2 = mag_x.extract<32, 47>();
  hw_uint<16> mag_x_lane_3 = mag_x.extract<48, 63>();
  hw_uint<16> mag_x_lane_4 = mag_x.extract<64, 79>();
  hw_uint<16> mag_x_lane_5 = mag_x.extract<80, 95>();
  hw_uint<16> mag_x_lane_6 = mag_x.extract<96, 111>();
  hw_uint<16> mag_x_lane_7 = mag_x.extract<112, 127>();
  hw_uint<16> mag_x_lane_8 = mag_x.extract<128, 143>();
  hw_uint<16> mag_x_lane_9 = mag_x.extract<144, 159>();
  hw_uint<16> mag_x_lane_10 = mag_x.extract<160, 175>();
  hw_uint<16> mag_x_lane_11 = mag_x.extract<176, 191>();
  hw_uint<16> mag_x_lane_12 = mag_x.extract<192, 207>();
  hw_uint<16> mag_x_lane_13 = mag_x.extract<208, 223>();
  hw_uint<16> mag_x_lane_14 = mag_x.extract<224, 239>();
  hw_uint<16> mag_x_lane_15 = mag_x.extract<240, 255>();
  hw_uint<16> mag_y_lane_0 = mag_y.extract<0, 15>();
  hw_uint<16> mag_y_lane_1 = mag_y.extract<16, 31>();
  hw_uint<16> mag_y_lane_2 = mag_y.extract<32, 47>();
  hw_uint<16> mag_y_lane_3 = mag_y.extract<48, 63>();
  hw_uint<16> mag_y_lane_4 = mag_y.extract<64, 79>();
  hw_uint<16> mag_y_lane_5 = mag_y.extract<80, 95>();
  hw_uint<16> mag_y_lane_6 = mag_y.extract<96, 111>();
  hw_uint<16> mag_y_lane_7 = mag_y.extract<112, 127>();
  hw_uint<16> mag_y_lane_8 = mag_y.extract<128, 143>();
  hw_uint<16> mag_y_lane_9 = mag_y.extract<144, 159>();
  hw_uint<16> mag_y_lane_10 = mag_y.extract<160, 175>();
  hw_uint<16> mag_y_lane_11 = mag_y.extract<176, 191>();
  hw_uint<16> mag_y_lane_12 = mag_y.extract<192, 207>();
  hw_uint<16> mag_y_lane_13 = mag_y.extract<208, 223>();
  hw_uint<16> mag_y_lane_14 = mag_y.extract<224, 239>();
  hw_uint<16> mag_y_lane_15 = mag_y.extract<240, 255>();

	
  hw_uint<16 > mag_x_lane_0_pack;
  set_at<0, 16, 16>(mag_x_lane_0_pack, mag_x_lane_0);
  hw_uint<16 > mag_y_lane_0_pack;
  set_at<0, 16, 16>(mag_y_lane_0_pack, mag_y_lane_0);
  auto res_sbl7_16_update_0_sm3_0100 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_0_pack, mag_y_lane_0_pack);

  hw_uint<16 > mag_x_lane_1_pack;
  set_at<0, 16, 16>(mag_x_lane_1_pack, mag_x_lane_1);
  hw_uint<16 > mag_y_lane_1_pack;
  set_at<0, 16, 16>(mag_y_lane_1_pack, mag_y_lane_1);
  auto res_sbl7_16_update_0_sm3_1102 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_1_pack, mag_y_lane_1_pack);

  hw_uint<16 > mag_x_lane_2_pack;
  set_at<0, 16, 16>(mag_x_lane_2_pack, mag_x_lane_2);
  hw_uint<16 > mag_y_lane_2_pack;
  set_at<0, 16, 16>(mag_y_lane_2_pack, mag_y_lane_2);
  auto res_sbl7_16_update_0_sm3_2104 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_2_pack, mag_y_lane_2_pack);

  hw_uint<16 > mag_x_lane_3_pack;
  set_at<0, 16, 16>(mag_x_lane_3_pack, mag_x_lane_3);
  hw_uint<16 > mag_y_lane_3_pack;
  set_at<0, 16, 16>(mag_y_lane_3_pack, mag_y_lane_3);
  auto res_sbl7_16_update_0_sm3_3106 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_3_pack, mag_y_lane_3_pack);

  hw_uint<16 > mag_x_lane_4_pack;
  set_at<0, 16, 16>(mag_x_lane_4_pack, mag_x_lane_4);
  hw_uint<16 > mag_y_lane_4_pack;
  set_at<0, 16, 16>(mag_y_lane_4_pack, mag_y_lane_4);
  auto res_sbl7_16_update_0_sm3_4108 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_4_pack, mag_y_lane_4_pack);

  hw_uint<16 > mag_x_lane_5_pack;
  set_at<0, 16, 16>(mag_x_lane_5_pack, mag_x_lane_5);
  hw_uint<16 > mag_y_lane_5_pack;
  set_at<0, 16, 16>(mag_y_lane_5_pack, mag_y_lane_5);
  auto res_sbl7_16_update_0_sm3_5110 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_5_pack, mag_y_lane_5_pack);

  hw_uint<16 > mag_x_lane_6_pack;
  set_at<0, 16, 16>(mag_x_lane_6_pack, mag_x_lane_6);
  hw_uint<16 > mag_y_lane_6_pack;
  set_at<0, 16, 16>(mag_y_lane_6_pack, mag_y_lane_6);
  auto res_sbl7_16_update_0_sm3_6112 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_6_pack, mag_y_lane_6_pack);

  hw_uint<16 > mag_x_lane_7_pack;
  set_at<0, 16, 16>(mag_x_lane_7_pack, mag_x_lane_7);
  hw_uint<16 > mag_y_lane_7_pack;
  set_at<0, 16, 16>(mag_y_lane_7_pack, mag_y_lane_7);
  auto res_sbl7_16_update_0_sm3_7114 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_7_pack, mag_y_lane_7_pack);

  hw_uint<16 > mag_x_lane_8_pack;
  set_at<0, 16, 16>(mag_x_lane_8_pack, mag_x_lane_8);
  hw_uint<16 > mag_y_lane_8_pack;
  set_at<0, 16, 16>(mag_y_lane_8_pack, mag_y_lane_8);
  auto res_sbl7_16_update_0_sm3_8116 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_8_pack, mag_y_lane_8_pack);

  hw_uint<16 > mag_x_lane_9_pack;
  set_at<0, 16, 16>(mag_x_lane_9_pack, mag_x_lane_9);
  hw_uint<16 > mag_y_lane_9_pack;
  set_at<0, 16, 16>(mag_y_lane_9_pack, mag_y_lane_9);
  auto res_sbl7_16_update_0_sm3_9118 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_9_pack, mag_y_lane_9_pack);

  hw_uint<16 > mag_x_lane_10_pack;
  set_at<0, 16, 16>(mag_x_lane_10_pack, mag_x_lane_10);
  hw_uint<16 > mag_y_lane_10_pack;
  set_at<0, 16, 16>(mag_y_lane_10_pack, mag_y_lane_10);
  auto res_sbl7_16_update_0_sm3_10120 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_10_pack, mag_y_lane_10_pack);

  hw_uint<16 > mag_x_lane_11_pack;
  set_at<0, 16, 16>(mag_x_lane_11_pack, mag_x_lane_11);
  hw_uint<16 > mag_y_lane_11_pack;
  set_at<0, 16, 16>(mag_y_lane_11_pack, mag_y_lane_11);
  auto res_sbl7_16_update_0_sm3_11122 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_11_pack, mag_y_lane_11_pack);

  hw_uint<16 > mag_x_lane_12_pack;
  set_at<0, 16, 16>(mag_x_lane_12_pack, mag_x_lane_12);
  hw_uint<16 > mag_y_lane_12_pack;
  set_at<0, 16, 16>(mag_y_lane_12_pack, mag_y_lane_12);
  auto res_sbl7_16_update_0_sm3_12124 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_12_pack, mag_y_lane_12_pack);

  hw_uint<16 > mag_x_lane_13_pack;
  set_at<0, 16, 16>(mag_x_lane_13_pack, mag_x_lane_13);
  hw_uint<16 > mag_y_lane_13_pack;
  set_at<0, 16, 16>(mag_y_lane_13_pack, mag_y_lane_13);
  auto res_sbl7_16_update_0_sm3_13126 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_13_pack, mag_y_lane_13_pack);

  hw_uint<16 > mag_x_lane_14_pack;
  set_at<0, 16, 16>(mag_x_lane_14_pack, mag_x_lane_14);
  hw_uint<16 > mag_y_lane_14_pack;
  set_at<0, 16, 16>(mag_y_lane_14_pack, mag_y_lane_14);
  auto res_sbl7_16_update_0_sm3_14128 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_14_pack, mag_y_lane_14_pack);

  hw_uint<16 > mag_x_lane_15_pack;
  set_at<0, 16, 16>(mag_x_lane_15_pack, mag_x_lane_15);
  hw_uint<16 > mag_y_lane_15_pack;
  set_at<0, 16, 16>(mag_y_lane_15_pack, mag_y_lane_15);
  auto res_sbl7_16_update_0_sm3_15130 = sbl7_16_generated_compute_unrolled_1(mag_x_lane_15_pack, mag_y_lane_15_pack);
  hw_uint<256 > return_value142;
  set_at<0, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_0100);
  set_at<16, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_1102);
  set_at<32, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_2104);
  set_at<48, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_3106);
  set_at<64, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_4108);
  set_at<80, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_5110);
  set_at<96, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_6112);
  set_at<112, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_7114);
  set_at<128, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_8116);
  set_at<144, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_9118);
  set_at<160, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_10120);
  set_at<176, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_11122);
  set_at<192, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_12124);
  set_at<208, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_13126);
  set_at<224, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_14128);
  set_at<240, 256, 16>(return_value142, res_sbl7_16_update_0_sm3_15130);
  return return_value142;

}

