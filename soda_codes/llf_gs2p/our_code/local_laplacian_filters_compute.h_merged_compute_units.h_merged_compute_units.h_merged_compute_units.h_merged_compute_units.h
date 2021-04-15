#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

hw_uint<64> oc_load_gray_in_oc02_cu3968(hw_uint<32*2>& gray_in_oc) {
  return gray_in_oc;
}

hw_uint<64> pw_math_gray_int46_cu3970(hw_uint<32*2>& gray_int_FIFO_buf2311) {
  hw_uint<32> gray_int_FIFO_buf2311_lane_0 = gray_int_FIFO_buf2311.extract<0, 31>();
  hw_uint<32> gray_int_FIFO_buf2311_lane_1 = gray_int_FIFO_buf2311.extract<32, 63>();

	
  hw_uint<32 > gray_int_FIFO_buf2311_lane_0_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_0_pack, gray_int_FIFO_buf2311_lane_0);
  auto res_pw_math_gray_int47_sm2490_13568 = llf_int_to_float(gray_int_FIFO_buf2311_lane_0_pack);

  hw_uint<32 > gray_int_FIFO_buf2311_lane_1_pack;
  set_at<0, 32, 32>(gray_int_FIFO_buf2311_lane_1_pack, gray_int_FIFO_buf2311_lane_1);
  auto res_pw_math_gray_int47_sm2490_03566 = llf_int_to_float(gray_int_FIFO_buf2311_lane_1_pack);
  hw_uint<64 > return_value3971;
  set_at<0, 64, 32>(return_value3971, res_pw_math_gray_int47_sm2490_13568);
  set_at<32, 64, 32>(return_value3971, res_pw_math_gray_int47_sm2490_03566);
  return return_value3971;

}

hw_uint<64> pw_math_gray911_cu3973(hw_uint<32*2>& gray_FIFO_buf2307) {
  hw_uint<32> gray_FIFO_buf2307_lane_0 = gray_FIFO_buf2307.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2307_lane_1 = gray_FIFO_buf2307.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2307_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_0_pack, gray_FIFO_buf2307_lane_0);
  auto res_pw_math_gray912_sm2491_13572 = llf_level_entry_0(gray_FIFO_buf2307_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2307_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2307_lane_1_pack, gray_FIFO_buf2307_lane_1);
  auto res_pw_math_gray912_sm2491_03570 = llf_level_entry_0(gray_FIFO_buf2307_lane_1_pack);
  hw_uint<64 > return_value3974;
  set_at<0, 64, 32>(return_value3974, res_pw_math_gray912_sm2491_13572);
  set_at<32, 64, 32>(return_value3974, res_pw_math_gray912_sm2491_03570);
  return return_value3974;

}

hw_uint<64> us_gp_level_table8_1_buf1355_cu3976(hw_uint<32*2>& gp_level_table8_1_buf13_FIFO_buf2231) {
  return gp_level_table8_1_buf13_FIFO_buf2231;
}

hw_uint<64> lp_level_table8_059_cu3978(hw_uint<32*2>& gp_level_table8_1_buf13_us53_FIFO_buf2235, hw_uint<32*2>& level_table8_FIFO_buf2387) {
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<0, 31>();
  hw_uint<32> gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1 = gp_level_table8_1_buf13_us53_FIFO_buf2235.extract<32, 63>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_0 = level_table8_FIFO_buf2387.extract<0, 31>();
  hw_uint<32> level_table8_FIFO_buf2387_lane_1 = level_table8_FIFO_buf2387.extract<32, 63>();

	
  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_0_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_0_pack, level_table8_FIFO_buf2387_lane_0);
  auto res_diff60_sm2500_13594 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_0_pack, level_table8_FIFO_buf2387_lane_0_pack);

  hw_uint<32 > gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1_pack, gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1);
  hw_uint<32 > level_table8_FIFO_buf2387_lane_1_pack;
  set_at<0, 32, 32>(level_table8_FIFO_buf2387_lane_1_pack, level_table8_FIFO_buf2387_lane_1);
  auto res_diff60_sm2500_03592 = llf_diff_float_32(gp_level_table8_1_buf13_us53_FIFO_buf2235_lane_1_pack, level_table8_FIFO_buf2387_lane_1_pack);
  hw_uint<64 > return_value3979;
  set_at<0, 64, 32>(return_value3979, res_diff60_sm2500_13594);
  set_at<32, 64, 32>(return_value3979, res_diff60_sm2500_03592);
  return return_value3979;

}

hw_uint<64> pw_math_gray6264_cu3981(hw_uint<32*2>& gray_FIFO_buf2303) {
  hw_uint<32> gray_FIFO_buf2303_lane_0 = gray_FIFO_buf2303.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2303_lane_1 = gray_FIFO_buf2303.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2303_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_0_pack, gray_FIFO_buf2303_lane_0);
  auto res_pw_math_gray6265_sm2501_13598 = llf_level_entry_1(gray_FIFO_buf2303_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2303_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2303_lane_1_pack, gray_FIFO_buf2303_lane_1);
  auto res_pw_math_gray6265_sm2501_03596 = llf_level_entry_1(gray_FIFO_buf2303_lane_1_pack);
  hw_uint<64 > return_value3982;
  set_at<0, 64, 32>(return_value3982, res_pw_math_gray6265_sm2501_13598);
  set_at<32, 64, 32>(return_value3982, res_pw_math_gray6265_sm2501_03596);
  return return_value3982;

}

hw_uint<64> pw_math_gray168170_cu3984(hw_uint<32*2>& gray_FIFO_buf2283) {
  hw_uint<32> gray_FIFO_buf2283_lane_0 = gray_FIFO_buf2283.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2283_lane_1 = gray_FIFO_buf2283.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2283_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_0_pack, gray_FIFO_buf2283_lane_0);
  auto res_pw_math_gray168171_sm2505_13608 = llf_level_entry_3(gray_FIFO_buf2283_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2283_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2283_lane_1_pack, gray_FIFO_buf2283_lane_1);
  auto res_pw_math_gray168171_sm2505_03606 = llf_level_entry_3(gray_FIFO_buf2283_lane_1_pack);
  hw_uint<64 > return_value3985;
  set_at<0, 64, 32>(return_value3985, res_pw_math_gray168171_sm2505_13608);
  set_at<32, 64, 32>(return_value3985, res_pw_math_gray168171_sm2505_03606);
  return return_value3985;

}

hw_uint<64> us_gp_level_table61_1_buf66108_cu3987(hw_uint<32*2>& gp_level_table61_1_buf66_FIFO_buf2187) {
  return gp_level_table61_1_buf66_FIFO_buf2187;
}

hw_uint<64> lp_level_table61_0112_cu3989(hw_uint<32*2>& gp_level_table61_1_buf66_us106_FIFO_buf2191, hw_uint<32*2>& level_table61_FIFO_buf2379) {
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<0, 31>();
  hw_uint<32> gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1 = gp_level_table61_1_buf66_us106_FIFO_buf2191.extract<32, 63>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_0 = level_table61_FIFO_buf2379.extract<0, 31>();
  hw_uint<32> level_table61_FIFO_buf2379_lane_1 = level_table61_FIFO_buf2379.extract<32, 63>();

	
  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_0_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_0_pack, level_table61_FIFO_buf2379_lane_0);
  auto res_diff113_sm2511_13624 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_0_pack, level_table61_FIFO_buf2379_lane_0_pack);

  hw_uint<32 > gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1_pack, gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1);
  hw_uint<32 > level_table61_FIFO_buf2379_lane_1_pack;
  set_at<0, 32, 32>(level_table61_FIFO_buf2379_lane_1_pack, level_table61_FIFO_buf2379_lane_1);
  auto res_diff113_sm2511_03622 = llf_diff_float_32(gp_level_table61_1_buf66_us106_FIFO_buf2191_lane_1_pack, level_table61_FIFO_buf2379_lane_1_pack);
  hw_uint<64 > return_value3990;
  set_at<0, 64, 32>(return_value3990, res_diff113_sm2511_13624);
  set_at<32, 64, 32>(return_value3990, res_diff113_sm2511_03622);
  return return_value3990;

}

hw_uint<64> pw_math_gray115117_cu3992(hw_uint<32*2>& gray_FIFO_buf2279) {
  hw_uint<32> gray_FIFO_buf2279_lane_0 = gray_FIFO_buf2279.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2279_lane_1 = gray_FIFO_buf2279.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2279_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_0_pack, gray_FIFO_buf2279_lane_0);
  auto res_pw_math_gray115118_sm2512_13628 = llf_level_entry_2(gray_FIFO_buf2279_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2279_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2279_lane_1_pack, gray_FIFO_buf2279_lane_1);
  auto res_pw_math_gray115118_sm2512_03626 = llf_level_entry_2(gray_FIFO_buf2279_lane_1_pack);
  hw_uint<64 > return_value3993;
  set_at<0, 64, 32>(return_value3993, res_pw_math_gray115118_sm2512_13628);
  set_at<32, 64, 32>(return_value3993, res_pw_math_gray115118_sm2512_03626);
  return return_value3993;

}

hw_uint<64> us_gp_level_table114_1_buf119161_cu3995(hw_uint<32*2>& gp_level_table114_1_buf119_FIFO_buf1919) {
  return gp_level_table114_1_buf119_FIFO_buf1919;
}

hw_uint<64> lp_level_table114_0165_cu3997(hw_uint<32*2>& gp_level_table114_1_buf119_us159_FIFO_buf1927, hw_uint<32*2>& level_table114_FIFO_buf2327) {
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<0, 31>();
  hw_uint<32> gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1 = gp_level_table114_1_buf119_us159_FIFO_buf1927.extract<32, 63>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_0 = level_table114_FIFO_buf2327.extract<0, 31>();
  hw_uint<32> level_table114_FIFO_buf2327_lane_1 = level_table114_FIFO_buf2327.extract<32, 63>();

	
  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_0_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_0_pack, level_table114_FIFO_buf2327_lane_0);
  auto res_diff166_sm2521_13650 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_0_pack, level_table114_FIFO_buf2327_lane_0_pack);

  hw_uint<32 > gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1_pack, gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1);
  hw_uint<32 > level_table114_FIFO_buf2327_lane_1_pack;
  set_at<0, 32, 32>(level_table114_FIFO_buf2327_lane_1_pack, level_table114_FIFO_buf2327_lane_1);
  auto res_diff166_sm2521_03648 = llf_diff_float_32(gp_level_table114_1_buf119_us159_FIFO_buf1927_lane_1_pack, level_table114_FIFO_buf2327_lane_1_pack);
  hw_uint<64 > return_value3998;
  set_at<0, 64, 32>(return_value3998, res_diff166_sm2521_13650);
  set_at<32, 64, 32>(return_value3998, res_diff166_sm2521_03648);
  return return_value3998;

}

hw_uint<64> us_gp_level_table167_1_buf172214_cu4000(hw_uint<32*2>& gp_level_table167_1_buf172_FIFO_buf1967) {
  return gp_level_table167_1_buf172_FIFO_buf1967;
}

hw_uint<64> lp_level_table167_0218_cu4002(hw_uint<32*2>& gp_level_table167_1_buf172_us212_FIFO_buf1971, hw_uint<32*2>& level_table167_FIFO_buf2339) {
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<0, 31>();
  hw_uint<32> gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1 = gp_level_table167_1_buf172_us212_FIFO_buf1971.extract<32, 63>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_0 = level_table167_FIFO_buf2339.extract<0, 31>();
  hw_uint<32> level_table167_FIFO_buf2339_lane_1 = level_table167_FIFO_buf2339.extract<32, 63>();

	
  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_0_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_0_pack, level_table167_FIFO_buf2339_lane_0);
  auto res_diff219_sm2531_13674 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_0_pack, level_table167_FIFO_buf2339_lane_0_pack);

  hw_uint<32 > gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1_pack, gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1);
  hw_uint<32 > level_table167_FIFO_buf2339_lane_1_pack;
  set_at<0, 32, 32>(level_table167_FIFO_buf2339_lane_1_pack, level_table167_FIFO_buf2339_lane_1);
  auto res_diff219_sm2531_03672 = llf_diff_float_32(gp_level_table167_1_buf172_us212_FIFO_buf1971_lane_1_pack, level_table167_FIFO_buf2339_lane_1_pack);
  hw_uint<64 > return_value4003;
  set_at<0, 64, 32>(return_value4003, res_diff219_sm2531_13674);
  set_at<32, 64, 32>(return_value4003, res_diff219_sm2531_03672);
  return return_value4003;

}

hw_uint<64> pw_math_gray221223_cu4005(hw_uint<32*2>& gray_FIFO_buf2287) {
  hw_uint<32> gray_FIFO_buf2287_lane_0 = gray_FIFO_buf2287.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2287_lane_1 = gray_FIFO_buf2287.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2287_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_0_pack, gray_FIFO_buf2287_lane_0);
  auto res_pw_math_gray221224_sm2532_13678 = llf_level_entry_4(gray_FIFO_buf2287_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2287_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2287_lane_1_pack, gray_FIFO_buf2287_lane_1);
  auto res_pw_math_gray221224_sm2532_03676 = llf_level_entry_4(gray_FIFO_buf2287_lane_1_pack);
  hw_uint<64 > return_value4006;
  set_at<0, 64, 32>(return_value4006, res_pw_math_gray221224_sm2532_13678);
  set_at<32, 64, 32>(return_value4006, res_pw_math_gray221224_sm2532_03676);
  return return_value4006;

}

hw_uint<64> us_gp_level_table220_1_buf225267_cu4008(hw_uint<32*2>& gp_level_table220_1_buf225_FIFO_buf2011) {
  return gp_level_table220_1_buf225_FIFO_buf2011;
}

hw_uint<64> lp_level_table220_0271_cu4010(hw_uint<32*2>& gp_level_table220_1_buf225_us265_FIFO_buf2015, hw_uint<32*2>& level_table220_FIFO_buf2347) {
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<0, 31>();
  hw_uint<32> gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1 = gp_level_table220_1_buf225_us265_FIFO_buf2015.extract<32, 63>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_0 = level_table220_FIFO_buf2347.extract<0, 31>();
  hw_uint<32> level_table220_FIFO_buf2347_lane_1 = level_table220_FIFO_buf2347.extract<32, 63>();

	
  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_0_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_0_pack, level_table220_FIFO_buf2347_lane_0);
  auto res_diff272_sm2541_13700 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_0_pack, level_table220_FIFO_buf2347_lane_0_pack);

  hw_uint<32 > gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1_pack, gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1);
  hw_uint<32 > level_table220_FIFO_buf2347_lane_1_pack;
  set_at<0, 32, 32>(level_table220_FIFO_buf2347_lane_1_pack, level_table220_FIFO_buf2347_lane_1);
  auto res_diff272_sm2541_03698 = llf_diff_float_32(gp_level_table220_1_buf225_us265_FIFO_buf2015_lane_1_pack, level_table220_FIFO_buf2347_lane_1_pack);
  hw_uint<64 > return_value4011;
  set_at<0, 64, 32>(return_value4011, res_diff272_sm2541_13700);
  set_at<32, 64, 32>(return_value4011, res_diff272_sm2541_03698);
  return return_value4011;

}

hw_uint<64> pw_math_gray274276_cu4013(hw_uint<32*2>& gray_FIFO_buf2291) {
  hw_uint<32> gray_FIFO_buf2291_lane_0 = gray_FIFO_buf2291.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2291_lane_1 = gray_FIFO_buf2291.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2291_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_0_pack, gray_FIFO_buf2291_lane_0);
  auto res_pw_math_gray274277_sm2542_13704 = llf_level_entry_5(gray_FIFO_buf2291_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2291_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2291_lane_1_pack, gray_FIFO_buf2291_lane_1);
  auto res_pw_math_gray274277_sm2542_03702 = llf_level_entry_5(gray_FIFO_buf2291_lane_1_pack);
  hw_uint<64 > return_value4014;
  set_at<0, 64, 32>(return_value4014, res_pw_math_gray274277_sm2542_13704);
  set_at<32, 64, 32>(return_value4014, res_pw_math_gray274277_sm2542_03702);
  return return_value4014;

}

hw_uint<64> us_gp_level_table273_1_buf278320_cu4016(hw_uint<32*2>& gp_level_table273_1_buf278_FIFO_buf2055) {
  return gp_level_table273_1_buf278_FIFO_buf2055;
}

hw_uint<64> lp_level_table273_0324_cu4018(hw_uint<32*2>& gp_level_table273_1_buf278_us318_FIFO_buf2059, hw_uint<32*2>& level_table273_FIFO_buf2355) {
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<0, 31>();
  hw_uint<32> gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1 = gp_level_table273_1_buf278_us318_FIFO_buf2059.extract<32, 63>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_0 = level_table273_FIFO_buf2355.extract<0, 31>();
  hw_uint<32> level_table273_FIFO_buf2355_lane_1 = level_table273_FIFO_buf2355.extract<32, 63>();

	
  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_0_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_0_pack, level_table273_FIFO_buf2355_lane_0);
  auto res_diff325_sm2551_12898 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_0_pack, level_table273_FIFO_buf2355_lane_0_pack);

  hw_uint<32 > gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1_pack, gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1);
  hw_uint<32 > level_table273_FIFO_buf2355_lane_1_pack;
  set_at<0, 32, 32>(level_table273_FIFO_buf2355_lane_1_pack, level_table273_FIFO_buf2355_lane_1);
  auto res_diff325_sm2551_02896 = llf_diff_float_32(gp_level_table273_1_buf278_us318_FIFO_buf2059_lane_1_pack, level_table273_FIFO_buf2355_lane_1_pack);
  hw_uint<64 > return_value4019;
  set_at<0, 64, 32>(return_value4019, res_diff325_sm2551_12898);
  set_at<32, 64, 32>(return_value4019, res_diff325_sm2551_02896);
  return return_value4019;

}

hw_uint<64> pw_math_gray327329_cu4021(hw_uint<32*2>& gray_FIFO_buf2295) {
  hw_uint<32> gray_FIFO_buf2295_lane_0 = gray_FIFO_buf2295.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2295_lane_1 = gray_FIFO_buf2295.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2295_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_0_pack, gray_FIFO_buf2295_lane_0);
  auto res_pw_math_gray327330_sm2552_12902 = llf_level_entry_6(gray_FIFO_buf2295_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2295_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2295_lane_1_pack, gray_FIFO_buf2295_lane_1);
  auto res_pw_math_gray327330_sm2552_02900 = llf_level_entry_6(gray_FIFO_buf2295_lane_1_pack);
  hw_uint<64 > return_value4022;
  set_at<0, 64, 32>(return_value4022, res_pw_math_gray327330_sm2552_12902);
  set_at<32, 64, 32>(return_value4022, res_pw_math_gray327330_sm2552_02900);
  return return_value4022;

}

hw_uint<64> us_gp_level_table326_1_buf331373_cu4024(hw_uint<32*2>& gp_level_table326_1_buf331_FIFO_buf2099) {
  return gp_level_table326_1_buf331_FIFO_buf2099;
}

hw_uint<64> lp_level_table326_0377_cu4026(hw_uint<32*2>& gp_level_table326_1_buf331_us371_FIFO_buf2103, hw_uint<32*2>& level_table326_FIFO_buf2363) {
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<0, 31>();
  hw_uint<32> gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1 = gp_level_table326_1_buf331_us371_FIFO_buf2103.extract<32, 63>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_0 = level_table326_FIFO_buf2363.extract<0, 31>();
  hw_uint<32> level_table326_FIFO_buf2363_lane_1 = level_table326_FIFO_buf2363.extract<32, 63>();

	
  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_0_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_0_pack, level_table326_FIFO_buf2363_lane_0);
  auto res_diff378_sm2560_12922 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_0_pack, level_table326_FIFO_buf2363_lane_0_pack);

  hw_uint<32 > gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1_pack, gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1);
  hw_uint<32 > level_table326_FIFO_buf2363_lane_1_pack;
  set_at<0, 32, 32>(level_table326_FIFO_buf2363_lane_1_pack, level_table326_FIFO_buf2363_lane_1);
  auto res_diff378_sm2560_02920 = llf_diff_float_32(gp_level_table326_1_buf331_us371_FIFO_buf2103_lane_1_pack, level_table326_FIFO_buf2363_lane_1_pack);
  hw_uint<64 > return_value4027;
  set_at<0, 64, 32>(return_value4027, res_diff378_sm2560_12922);
  set_at<32, 64, 32>(return_value4027, res_diff378_sm2560_02920);
  return return_value4027;

}

hw_uint<64> pw_math_gray380382_cu4029(hw_uint<32*2>& gray_FIFO_buf2299) {
  hw_uint<32> gray_FIFO_buf2299_lane_0 = gray_FIFO_buf2299.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2299_lane_1 = gray_FIFO_buf2299.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2299_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_0_pack, gray_FIFO_buf2299_lane_0);
  auto res_pw_math_gray380383_sm2561_12926 = llf_level_entry_7(gray_FIFO_buf2299_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2299_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2299_lane_1_pack, gray_FIFO_buf2299_lane_1);
  auto res_pw_math_gray380383_sm2561_02924 = llf_level_entry_7(gray_FIFO_buf2299_lane_1_pack);
  hw_uint<64 > return_value4030;
  set_at<0, 64, 32>(return_value4030, res_pw_math_gray380383_sm2561_12926);
  set_at<32, 64, 32>(return_value4030, res_pw_math_gray380383_sm2561_02924);
  return return_value4030;

}

hw_uint<64> us_gp_level_table379_1_buf384426_cu4032(hw_uint<32*2>& gp_level_table379_1_buf384_FIFO_buf2143) {
  return gp_level_table379_1_buf384_FIFO_buf2143;
}

hw_uint<64> lp_level_table379_0430_cu4034(hw_uint<32*2>& gp_level_table379_1_buf384_us424_FIFO_buf2147, hw_uint<32*2>& level_table379_FIFO_buf2371) {
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<0, 31>();
  hw_uint<32> gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1 = gp_level_table379_1_buf384_us424_FIFO_buf2147.extract<32, 63>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_0 = level_table379_FIFO_buf2371.extract<0, 31>();
  hw_uint<32> level_table379_FIFO_buf2371_lane_1 = level_table379_FIFO_buf2371.extract<32, 63>();

	
  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_0_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_0_pack, level_table379_FIFO_buf2371_lane_0);
  auto res_diff431_sm2570_12948 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_0_pack, level_table379_FIFO_buf2371_lane_0_pack);

  hw_uint<32 > gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1_pack, gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1);
  hw_uint<32 > level_table379_FIFO_buf2371_lane_1_pack;
  set_at<0, 32, 32>(level_table379_FIFO_buf2371_lane_1_pack, level_table379_FIFO_buf2371_lane_1);
  auto res_diff431_sm2570_02946 = llf_diff_float_32(gp_level_table379_1_buf384_us424_FIFO_buf2147_lane_1_pack, level_table379_FIFO_buf2371_lane_1_pack);
  hw_uint<64 > return_value4035;
  set_at<0, 64, 32>(return_value4035, res_diff431_sm2570_12948);
  set_at<32, 64, 32>(return_value4035, res_diff431_sm2570_02946);
  return return_value4035;

}

hw_uint<64> gray_interpolate_lp457459_cu4037(hw_uint<32*2>& gray_FIFO_buf2271, hw_uint<32*2>& lp_level_table114_0_buf163_FIFO_buf2391, hw_uint<32*2>& lp_level_table167_0_buf216_FIFO_buf2403, hw_uint<32*2>& lp_level_table220_0_buf269_FIFO_buf2415, hw_uint<32*2>& lp_level_table273_0_buf322_FIFO_buf2427, hw_uint<32*2>& lp_level_table326_0_buf375_FIFO_buf2439, hw_uint<32*2>& lp_level_table379_0_buf428_FIFO_buf2451, hw_uint<32*2>& lp_level_table61_0_buf110_FIFO_buf2463, hw_uint<32*2>& lp_level_table8_0_buf57_FIFO_buf2475) {
  hw_uint<32> gray_FIFO_buf2271_lane_0 = gray_FIFO_buf2271.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2271_lane_1 = gray_FIFO_buf2271.extract<32, 63>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_0 = lp_level_table114_0_buf163_FIFO_buf2391.extract<0, 31>();
  hw_uint<32> lp_level_table114_0_buf163_FIFO_buf2391_lane_1 = lp_level_table114_0_buf163_FIFO_buf2391.extract<32, 63>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_0 = lp_level_table167_0_buf216_FIFO_buf2403.extract<0, 31>();
  hw_uint<32> lp_level_table167_0_buf216_FIFO_buf2403_lane_1 = lp_level_table167_0_buf216_FIFO_buf2403.extract<32, 63>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_0 = lp_level_table220_0_buf269_FIFO_buf2415.extract<0, 31>();
  hw_uint<32> lp_level_table220_0_buf269_FIFO_buf2415_lane_1 = lp_level_table220_0_buf269_FIFO_buf2415.extract<32, 63>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_0 = lp_level_table273_0_buf322_FIFO_buf2427.extract<0, 31>();
  hw_uint<32> lp_level_table273_0_buf322_FIFO_buf2427_lane_1 = lp_level_table273_0_buf322_FIFO_buf2427.extract<32, 63>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_0 = lp_level_table326_0_buf375_FIFO_buf2439.extract<0, 31>();
  hw_uint<32> lp_level_table326_0_buf375_FIFO_buf2439_lane_1 = lp_level_table326_0_buf375_FIFO_buf2439.extract<32, 63>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_0 = lp_level_table379_0_buf428_FIFO_buf2451.extract<0, 31>();
  hw_uint<32> lp_level_table379_0_buf428_FIFO_buf2451_lane_1 = lp_level_table379_0_buf428_FIFO_buf2451.extract<32, 63>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_0 = lp_level_table61_0_buf110_FIFO_buf2463.extract<0, 31>();
  hw_uint<32> lp_level_table61_0_buf110_FIFO_buf2463_lane_1 = lp_level_table61_0_buf110_FIFO_buf2463.extract<32, 63>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_0 = lp_level_table8_0_buf57_FIFO_buf2475.extract<0, 31>();
  hw_uint<32> lp_level_table8_0_buf57_FIFO_buf2475_lane_1 = lp_level_table8_0_buf57_FIFO_buf2475.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2271_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_0_pack, gray_FIFO_buf2271_lane_0);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_0_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_0);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_0_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_0);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_0_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_0);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_0_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_0);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_0_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_0);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_0_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_0);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_0_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_0);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_0_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_0_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_0);
  auto res_interp460_sm2574_12958 = llf_interpolate_float(gray_FIFO_buf2271_lane_0_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_0_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_0_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_0_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_0_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_0_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_0_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_0_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2271_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2271_lane_1_pack, gray_FIFO_buf2271_lane_1);
  hw_uint<32 > lp_level_table114_0_buf163_FIFO_buf2391_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table114_0_buf163_FIFO_buf2391_lane_1_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_1);
  hw_uint<32 > lp_level_table167_0_buf216_FIFO_buf2403_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table167_0_buf216_FIFO_buf2403_lane_1_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_1);
  hw_uint<32 > lp_level_table220_0_buf269_FIFO_buf2415_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table220_0_buf269_FIFO_buf2415_lane_1_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_1);
  hw_uint<32 > lp_level_table273_0_buf322_FIFO_buf2427_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table273_0_buf322_FIFO_buf2427_lane_1_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_1);
  hw_uint<32 > lp_level_table326_0_buf375_FIFO_buf2439_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table326_0_buf375_FIFO_buf2439_lane_1_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_1);
  hw_uint<32 > lp_level_table379_0_buf428_FIFO_buf2451_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table379_0_buf428_FIFO_buf2451_lane_1_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_1);
  hw_uint<32 > lp_level_table61_0_buf110_FIFO_buf2463_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table61_0_buf110_FIFO_buf2463_lane_1_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_1);
  hw_uint<32 > lp_level_table8_0_buf57_FIFO_buf2475_lane_1_pack;
  set_at<0, 32, 32>(lp_level_table8_0_buf57_FIFO_buf2475_lane_1_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_1);
  auto res_interp460_sm2574_02956 = llf_interpolate_float(gray_FIFO_buf2271_lane_1_pack, lp_level_table114_0_buf163_FIFO_buf2391_lane_1_pack, lp_level_table167_0_buf216_FIFO_buf2403_lane_1_pack, lp_level_table220_0_buf269_FIFO_buf2415_lane_1_pack, lp_level_table273_0_buf322_FIFO_buf2427_lane_1_pack, lp_level_table326_0_buf375_FIFO_buf2439_lane_1_pack, lp_level_table379_0_buf428_FIFO_buf2451_lane_1_pack, lp_level_table61_0_buf110_FIFO_buf2463_lane_1_pack, lp_level_table8_0_buf57_FIFO_buf2475_lane_1_pack);
  hw_uint<64 > return_value4038;
  set_at<0, 64, 32>(return_value4038, res_interp460_sm2574_12958);
  set_at<32, 64, 32>(return_value4038, res_interp460_sm2574_02956);
  return return_value4038;

}

hw_uint<64> us_gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488500_cu4040(hw_uint<32*2>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_FIFO_buf1875) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_FIFO_buf1875;
}

hw_uint<64> gray_interpolated456_reconstruct_lp494496_cu4042(hw_uint<32*2>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879, hw_uint<32*2>& gray_interpolated456_FIFO_buf2315) {
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1 = gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879.extract<32, 63>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_0 = gray_interpolated456_FIFO_buf2315.extract<0, 31>();
  hw_uint<32> gray_interpolated456_FIFO_buf2315_lane_1 = gray_interpolated456_FIFO_buf2315.extract<32, 63>();

	
  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_0_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_0_pack, gray_interpolated456_FIFO_buf2315_lane_0);
  auto res_rc502_sm2583_12980 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_0_pack, gray_interpolated456_FIFO_buf2315_lane_0_pack);

  hw_uint<32 > gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1_pack, gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1);
  hw_uint<32 > gray_interpolated456_FIFO_buf2315_lane_1_pack;
  set_at<0, 32, 32>(gray_interpolated456_FIFO_buf2315_lane_1_pack, gray_interpolated456_FIFO_buf2315_lane_1);
  auto res_rc502_sm2583_02978 = llf_add_float_32(gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_FIFO_buf1879_lane_1_pack, gray_interpolated456_FIFO_buf2315_lane_1_pack);
  hw_uint<64 > return_value4043;
  set_at<0, 64, 32>(return_value4043, res_rc502_sm2583_12980);
  set_at<32, 64, 32>(return_value4043, res_rc502_sm2583_02978);
  return return_value4043;

}

hw_uint<64> gray_out_float_rescale_gray504_cu4045(hw_uint<32*2>& gray_FIFO_buf2275, hw_uint<32*2>& gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319) {
  hw_uint<32> gray_FIFO_buf2275_lane_0 = gray_FIFO_buf2275.extract<0, 31>();
  hw_uint<32> gray_FIFO_buf2275_lane_1 = gray_FIFO_buf2275.extract<32, 63>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<0, 31>();
  hw_uint<32> gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1 = gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319.extract<32, 63>();

	
  hw_uint<32 > gray_FIFO_buf2275_lane_0_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_0_pack, gray_FIFO_buf2275_lane_0);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0);
  auto res_cc505_sm2584_12984 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_0_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_0_pack);

  hw_uint<32 > gray_FIFO_buf2275_lane_1_pack;
  set_at<0, 32, 32>(gray_FIFO_buf2275_lane_1_pack, gray_FIFO_buf2275_lane_1);
  hw_uint<32 > gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1_pack;
  set_at<0, 32, 32>(gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1);
  auto res_cc505_sm2584_02982 = llf_rescale_gray_float(gray_FIFO_buf2275_lane_1_pack, gray_interpolated456_reconstruct_lp494_buf497_FIFO_buf2319_lane_1_pack);
  hw_uint<64 > return_value4046;
  set_at<0, 64, 32>(return_value4046, res_cc505_sm2584_12984);
  set_at<32, 64, 32>(return_value4046, res_cc505_sm2584_02982);
  return return_value4046;

}

hw_uint<64> pw_math_gray_out_float506508_cu4048(hw_uint<32*2>& gray_out_float_FIFO_buf2323) {
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_0 = gray_out_float_FIFO_buf2323.extract<0, 31>();
  hw_uint<32> gray_out_float_FIFO_buf2323_lane_1 = gray_out_float_FIFO_buf2323.extract<32, 63>();

	
  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_0_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_0_pack, gray_out_float_FIFO_buf2323_lane_0);
  auto res_pw_math_gray_out_float506509_sm2585_12988 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_0_pack);

  hw_uint<32 > gray_out_float_FIFO_buf2323_lane_1_pack;
  set_at<0, 32, 32>(gray_out_float_FIFO_buf2323_lane_1_pack, gray_out_float_FIFO_buf2323_lane_1);
  auto res_pw_math_gray_out_float506509_sm2585_02986 = llf_float_to_int(gray_out_float_FIFO_buf2323_lane_1_pack);
  hw_uint<64 > return_value4049;
  set_at<0, 64, 32>(return_value4049, res_pw_math_gray_out_float506509_sm2585_12988);
  set_at<32, 64, 32>(return_value4049, res_pw_math_gray_out_float506509_sm2585_02986);
  return return_value4049;

}

hw_uint<64> gray_ld1672_cu4051(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_ld1256_cu4053(hw_uint<32*2>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498;
}

hw_uint<64> gp_level_table167_1_buf172_us212_ld1348_cu4055(hw_uint<32*2>& gp_level_table167_1_buf172_us212) {
  return gp_level_table167_1_buf172_us212;
}

hw_uint<64> gp_level_table220_1_buf225_us265_ld1392_cu4057(hw_uint<32*2>& gp_level_table220_1_buf225_us265) {
  return gp_level_table220_1_buf225_us265;
}

hw_uint<64> gp_level_table326_1_buf331_us371_ld1480_cu4059(hw_uint<32*2>& gp_level_table326_1_buf331_us371) {
  return gp_level_table326_1_buf331_us371;
}

hw_uint<64> gray_to_gp_321647_ld2272_cu4061(hw_uint<32*2>& gray_to_gp_321647) {
  return gray_to_gp_321647;
}

hw_uint<64> level_table326_to_gp_471739_ld2364_cu4063(hw_uint<32*2>& level_table326_to_gp_471739) {
  return level_table326_to_gp_471739;
}

hw_uint<64> gp_level_table114_1_buf119_us159_ld1304_cu4065(hw_uint<32*2>& gp_level_table114_1_buf119_us159) {
  return gp_level_table114_1_buf119_us159;
}

hw_uint<64> gp_level_table273_1_buf278_us318_ld1436_cu4067(hw_uint<32*2>& gp_level_table273_1_buf278_us318) {
  return gp_level_table273_1_buf278_us318;
}

hw_uint<64> gp_level_table61_1_buf66_us106_ld1568_cu4069(hw_uint<32*2>& gp_level_table61_1_buf66_us106) {
  return gp_level_table61_1_buf66_us106;
}

hw_uint<64> gp_level_table379_1_buf384_us424_ld1524_cu4071(hw_uint<32*2>& gp_level_table379_1_buf384_us424) {
  return gp_level_table379_1_buf384_us424;
}

hw_uint<64> gray_ld1648_cu4073(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> level_table220_ld1720_cu4075(hw_uint<32*2>& level_table220) {
  return level_table220;
}

hw_uint<64> level_table379_ld1744_cu4077(hw_uint<32*2>& level_table379) {
  return level_table379;
}

hw_uint<64> gp_level_table8_1_buf13_us53_ld1612_cu4079(hw_uint<32*2>& gp_level_table8_1_buf13_us53) {
  return gp_level_table8_1_buf13_us53;
}

hw_uint<64> gray_ld1644_cu4081(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gray_ld1656_cu4083(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gray_ld1660_cu4085(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gray_ld1676_cu4087(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> level_table326_ld1740_cu4089(hw_uint<32*2>& level_table326) {
  return level_table326;
}

hw_uint<64> gray_ld1664_cu4091(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gray_ld1680_cu4093(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gray_ld1684_cu4095(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gray_int_ld1688_cu4097(hw_uint<32*2>& gray_int) {
  return gray_int;
}

hw_uint<64> level_table114_ld1708_cu4099(hw_uint<32*2>& level_table114) {
  return level_table114;
}

hw_uint<64> level_table61_ld1752_cu4101(hw_uint<32*2>& level_table61) {
  return level_table61;
}

hw_uint<64> level_table114_ld1704_cu4103(hw_uint<32*2>& level_table114) {
  return level_table114;
}

hw_uint<64> gray_out_float_ld1700_cu4105(hw_uint<32*2>& gray_out_float) {
  return gray_out_float;
}

hw_uint<64> gray_ld1668_cu4107(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> gray_ld1652_cu4109(hw_uint<32*2>& gray) {
  return gray;
}

hw_uint<64> level_table61_ld1756_cu4111(hw_uint<32*2>& level_table61) {
  return level_table61;
}

hw_uint<64> gray_interpolated456_reconstruct_lp494_buf497_ld1696_cu4113(hw_uint<32*2>& gray_interpolated456_reconstruct_lp494_buf497) {
  return gray_interpolated456_reconstruct_lp494_buf497;
}

hw_uint<64> level_table167_ld1712_cu4115(hw_uint<32*2>& level_table167) {
  return level_table167;
}

hw_uint<64> level_table167_ld1716_cu4117(hw_uint<32*2>& level_table167) {
  return level_table167;
}

hw_uint<64> level_table273_ld1728_cu4119(hw_uint<32*2>& level_table273) {
  return level_table273;
}

hw_uint<64> level_table273_ld1732_cu4121(hw_uint<32*2>& level_table273) {
  return level_table273;
}

hw_uint<64> level_table326_ld1736_cu4123(hw_uint<32*2>& level_table326) {
  return level_table326;
}

hw_uint<64> level_table379_ld1748_cu4125(hw_uint<32*2>& level_table379) {
  return level_table379;
}

hw_uint<64> lp_level_table114_0_buf163_ld1768_cu4127(hw_uint<32*2>& lp_level_table114_0_buf163) {
  return lp_level_table114_0_buf163;
}

hw_uint<64> lp_level_table379_0_buf428_ld1828_cu4129(hw_uint<32*2>& lp_level_table379_0_buf428) {
  return lp_level_table379_0_buf428;
}

hw_uint<64> gray_interpolated456_ld1692_cu4131(hw_uint<32*2>& gray_interpolated456) {
  return gray_interpolated456;
}

hw_uint<64> level_table220_ld1724_cu4133(hw_uint<32*2>& level_table220) {
  return level_table220;
}

hw_uint<64> lp_level_table273_0_buf322_ld1804_cu4135(hw_uint<32*2>& lp_level_table273_0_buf322) {
  return lp_level_table273_0_buf322;
}

hw_uint<64> lp_level_table167_0_buf216_ld1780_cu4137(hw_uint<32*2>& lp_level_table167_0_buf216) {
  return lp_level_table167_0_buf216;
}

hw_uint<64> level_table8_ld1760_cu4139(hw_uint<32*2>& level_table8) {
  return level_table8;
}

hw_uint<64> level_table8_ld1764_cu4141(hw_uint<32*2>& level_table8) {
  return level_table8;
}

hw_uint<64> lp_level_table220_0_buf269_ld1792_cu4143(hw_uint<32*2>& lp_level_table220_0_buf269) {
  return lp_level_table220_0_buf269;
}

hw_uint<64> gray_to_gp_671683_ld2308_cu4145(hw_uint<32*2>& gray_to_gp_671683) {
  return gray_to_gp_671683;
}

hw_uint<64> lp_level_table326_0_buf375_ld1816_cu4147(hw_uint<32*2>& lp_level_table326_0_buf375) {
  return lp_level_table326_0_buf375;
}

hw_uint<64> lp_level_table61_0_buf110_ld1840_cu4149(hw_uint<32*2>& lp_level_table61_0_buf110) {
  return lp_level_table61_0_buf110;
}

hw_uint<64> gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_to_gp_331255_ld1880_cu4151(hw_uint<32*2>& gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_to_gp_331255) {
  return gp_gray_1_buf432_interpolated461_reconstruct_lp485_buf488_us498_to_gp_331255;
}

hw_uint<64> lp_level_table8_0_buf57_ld1852_cu4153(hw_uint<32*2>& lp_level_table8_0_buf57) {
  return lp_level_table8_0_buf57;
}

hw_uint<64> gp_level_table379_1_buf384_us424_to_gp_501523_ld2148_cu4155(hw_uint<32*2>& gp_level_table379_1_buf384_us424_to_gp_501523) {
  return gp_level_table379_1_buf384_us424_to_gp_501523;
}

hw_uint<64> gp_level_table114_1_buf119_us159_to_gp_351303_ld1928_cu4157(hw_uint<32*2>& gp_level_table114_1_buf119_us159_to_gp_351303) {
  return gp_level_table114_1_buf119_us159_to_gp_351303;
}

hw_uint<64> gp_level_table167_1_buf172_us212_to_gp_381347_ld1972_cu4159(hw_uint<32*2>& gp_level_table167_1_buf172_us212_to_gp_381347) {
  return gp_level_table167_1_buf172_us212_to_gp_381347;
}

hw_uint<64> gp_level_table220_1_buf225_us265_to_gp_411391_ld2016_cu4161(hw_uint<32*2>& gp_level_table220_1_buf225_us265_to_gp_411391) {
  return gp_level_table220_1_buf225_us265_to_gp_411391;
}

hw_uint<64> gp_level_table61_1_buf66_us106_to_gp_531567_ld2192_cu4163(hw_uint<32*2>& gp_level_table61_1_buf66_us106_to_gp_531567) {
  return gp_level_table61_1_buf66_us106_to_gp_531567;
}

hw_uint<64> gray_to_gp_651675_ld2300_cu4165(hw_uint<32*2>& gray_to_gp_651675) {
  return gray_to_gp_651675;
}

hw_uint<64> gray_to_gp_341651_ld2276_cu4167(hw_uint<32*2>& gray_to_gp_341651) {
  return gray_to_gp_341651;
}

hw_uint<64> gray_to_gp_01643_ld2268_cu4169(hw_uint<32*2>& gray_to_gp_01643) {
  return gray_to_gp_01643;
}

hw_uint<64> gray_out_float_to_gp_691699_ld2324_cu4171(hw_uint<32*2>& gray_out_float_to_gp_691699) {
  return gray_out_float_to_gp_691699;
}

hw_uint<64> gp_level_table273_1_buf278_us318_to_gp_441435_ld2060_cu4173(hw_uint<32*2>& gp_level_table273_1_buf278_us318_to_gp_441435) {
  return gp_level_table273_1_buf278_us318_to_gp_441435;
}

hw_uint<64> level_table167_to_gp_381715_ld2340_cu4175(hw_uint<32*2>& level_table167_to_gp_381715) {
  return level_table167_to_gp_381715;
}

hw_uint<64> gp_level_table326_1_buf331_us371_to_gp_471479_ld2104_cu4177(hw_uint<32*2>& gp_level_table326_1_buf331_us371_to_gp_471479) {
  return gp_level_table326_1_buf331_us371_to_gp_471479;
}

hw_uint<64> gray_to_gp_601655_ld2280_cu4179(hw_uint<32*2>& gray_to_gp_601655) {
  return gray_to_gp_601655;
}

hw_uint<64> gray_interpolated456_to_gp_331691_ld2316_cu4181(hw_uint<32*2>& gray_interpolated456_to_gp_331691) {
  return gray_interpolated456_to_gp_331691;
}

hw_uint<64> gray_to_gp_631667_ld2292_cu4183(hw_uint<32*2>& gray_to_gp_631667) {
  return gray_to_gp_631667;
}

hw_uint<64> level_table114_to_gp_351703_ld2328_cu4185(hw_uint<32*2>& level_table114_to_gp_351703) {
  return level_table114_to_gp_351703;
}

hw_uint<64> level_table114_to_gp_81707_ld2332_cu4187(hw_uint<32*2>& level_table114_to_gp_81707) {
  return level_table114_to_gp_81707;
}

hw_uint<64> gray_to_gp_641671_ld2296_cu4189(hw_uint<32*2>& gray_to_gp_641671) {
  return gray_to_gp_641671;
}

hw_uint<64> level_table379_to_gp_501747_ld2372_cu4191(hw_uint<32*2>& level_table379_to_gp_501747) {
  return level_table379_to_gp_501747;
}

hw_uint<64> level_table8_to_gp_291759_ld2384_cu4193(hw_uint<32*2>& level_table8_to_gp_291759) {
  return level_table8_to_gp_291759;
}

hw_uint<64> gp_level_table8_1_buf13_us53_to_gp_561611_ld2236_cu4195(hw_uint<32*2>& gp_level_table8_1_buf13_us53_to_gp_561611) {
  return gp_level_table8_1_buf13_us53_to_gp_561611;
}

hw_uint<64> lp_level_table220_0_buf269_to_gp_321791_ld2416_cu4197(hw_uint<32*2>& lp_level_table220_0_buf269_to_gp_321791) {
  return lp_level_table220_0_buf269_to_gp_321791;
}

hw_uint<64> gray_to_gp_661679_ld2304_cu4199(hw_uint<32*2>& gray_to_gp_661679) {
  return gray_to_gp_661679;
}

hw_uint<64> gray_to_gp_621663_ld2288_cu4201(hw_uint<32*2>& gray_to_gp_621663) {
  return gray_to_gp_621663;
}

hw_uint<64> level_table220_to_gp_411723_ld2348_cu4203(hw_uint<32*2>& level_table220_to_gp_411723) {
  return level_table220_to_gp_411723;
}

hw_uint<64> gray_to_gp_611659_ld2284_cu4205(hw_uint<32*2>& gray_to_gp_611659) {
  return gray_to_gp_611659;
}

hw_uint<64> level_table273_to_gp_441731_ld2356_cu4207(hw_uint<32*2>& level_table273_to_gp_441731) {
  return level_table273_to_gp_441731;
}

hw_uint<64> gray_int_to_gp_681687_ld2312_cu4209(hw_uint<32*2>& gray_int_to_gp_681687) {
  return gray_int_to_gp_681687;
}

hw_uint<64> gray_interpolated456_reconstruct_lp494_buf497_to_gp_341695_ld2320_cu4211(hw_uint<32*2>& gray_interpolated456_reconstruct_lp494_buf497_to_gp_341695) {
  return gray_interpolated456_reconstruct_lp494_buf497_to_gp_341695;
}

hw_uint<64> level_table167_to_gp_111711_ld2336_cu4213(hw_uint<32*2>& level_table167_to_gp_111711) {
  return level_table167_to_gp_111711;
}

hw_uint<64> level_table220_to_gp_141719_ld2344_cu4215(hw_uint<32*2>& level_table220_to_gp_141719) {
  return level_table220_to_gp_141719;
}

hw_uint<64> level_table379_to_gp_231743_ld2368_cu4217(hw_uint<32*2>& level_table379_to_gp_231743) {
  return level_table379_to_gp_231743;
}

hw_uint<64> level_table326_to_gp_201735_ld2360_cu4219(hw_uint<32*2>& level_table326_to_gp_201735) {
  return level_table326_to_gp_201735;
}

hw_uint<64> lp_level_table167_0_buf216_to_gp_321779_ld2404_cu4221(hw_uint<32*2>& lp_level_table167_0_buf216_to_gp_321779) {
  return lp_level_table167_0_buf216_to_gp_321779;
}

hw_uint<64> level_table61_to_gp_261751_ld2376_cu4223(hw_uint<32*2>& level_table61_to_gp_261751) {
  return level_table61_to_gp_261751;
}

hw_uint<64> level_table273_to_gp_171727_ld2352_cu4225(hw_uint<32*2>& level_table273_to_gp_171727) {
  return level_table273_to_gp_171727;
}

hw_uint<64> level_table61_to_gp_531755_ld2380_cu4227(hw_uint<32*2>& level_table61_to_gp_531755) {
  return level_table61_to_gp_531755;
}

hw_uint<64> lp_level_table61_0_buf110_to_gp_321839_ld2464_cu4229(hw_uint<32*2>& lp_level_table61_0_buf110_to_gp_321839) {
  return lp_level_table61_0_buf110_to_gp_321839;
}

hw_uint<64> level_table8_to_gp_561763_ld2388_cu4231(hw_uint<32*2>& level_table8_to_gp_561763) {
  return level_table8_to_gp_561763;
}

hw_uint<64> lp_level_table379_0_buf428_to_gp_321827_ld2452_cu4233(hw_uint<32*2>& lp_level_table379_0_buf428_to_gp_321827) {
  return lp_level_table379_0_buf428_to_gp_321827;
}

hw_uint<64> lp_level_table114_0_buf163_to_gp_321767_ld2392_cu4235(hw_uint<32*2>& lp_level_table114_0_buf163_to_gp_321767) {
  return lp_level_table114_0_buf163_to_gp_321767;
}

hw_uint<64> lp_level_table8_0_buf57_to_gp_321851_ld2476_cu4237(hw_uint<32*2>& lp_level_table8_0_buf57_to_gp_321851) {
  return lp_level_table8_0_buf57_to_gp_321851;
}

hw_uint<64> lp_level_table273_0_buf322_to_gp_321803_ld2428_cu4239(hw_uint<32*2>& lp_level_table273_0_buf322_to_gp_321803) {
  return lp_level_table273_0_buf322_to_gp_321803;
}

hw_uint<64> lp_level_table326_0_buf375_to_gp_321815_ld2440_cu4241(hw_uint<32*2>& lp_level_table326_0_buf375_to_gp_321815) {
  return lp_level_table326_0_buf375_to_gp_321815;
}

