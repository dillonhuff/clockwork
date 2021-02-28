#include "local_laplacian_filters_compute.h"

hw_uint<32> gp_level_table8_115_cu1158(hw_uint<32*9>& level_table8) {
  hw_uint<32> level_table8_lane_0 = level_table8.extract<0, 31>();
  hw_uint<32> level_table8_lane_1 = level_table8.extract<32, 63>();
  hw_uint<32> level_table8_lane_2 = level_table8.extract<64, 95>();
  hw_uint<32> level_table8_lane_3 = level_table8.extract<96, 127>();
  hw_uint<32> level_table8_lane_4 = level_table8.extract<128, 159>();
  hw_uint<32> level_table8_lane_5 = level_table8.extract<160, 191>();
  hw_uint<32> level_table8_lane_6 = level_table8.extract<192, 223>();
  hw_uint<32> level_table8_lane_7 = level_table8.extract<224, 255>();
  hw_uint<32> level_table8_lane_8 = level_table8.extract<256, 287>();

	
  auto res_init18 = llf_set_zero_float_32();

  hw_uint<32 > res_init18_pack;
  set_at<0, 32, 32>(res_init18_pack, res_init18);
  hw_uint<32 > level_table8_lane_0_pack;
  set_at<0, 32, 32>(level_table8_lane_0_pack, level_table8_lane_0);
  auto res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_11066 = llf_add_float_32(res_init18_pack, level_table8_lane_0_pack);

  hw_uint<32 > res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_11066_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_11066_pack, res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_11066);
  hw_uint<32 > level_table8_lane_1_pack;
  set_at<0, 32, 32>(level_table8_lane_1_pack, level_table8_lane_1);
  auto res_update19_gp_level_table8_117_0536_gp_level_table8_116_11064 = llf_add_float_32(res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_11066_pack, level_table8_lane_1_pack);

  hw_uint<32 > res_update19_gp_level_table8_117_0536_gp_level_table8_116_11064_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117_0536_gp_level_table8_116_11064_pack, res_update19_gp_level_table8_117_0536_gp_level_table8_116_11064);
  hw_uint<32 > level_table8_lane_2_pack;
  set_at<0, 32, 32>(level_table8_lane_2_pack, level_table8_lane_2);
  auto res_update19_gp_level_table8_117_1538_gp_level_table8_116_11062 = llf_add_float_32(res_update19_gp_level_table8_117_0536_gp_level_table8_116_11064_pack, level_table8_lane_2_pack);

  hw_uint<32 > res_update19_gp_level_table8_117_1538_gp_level_table8_116_11062_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117_1538_gp_level_table8_116_11062_pack, res_update19_gp_level_table8_117_1538_gp_level_table8_116_11062);
  hw_uint<32 > level_table8_lane_3_pack;
  set_at<0, 32, 32>(level_table8_lane_3_pack, level_table8_lane_3);
  auto res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_01060 = llf_add_float_32(res_update19_gp_level_table8_117_1538_gp_level_table8_116_11062_pack, level_table8_lane_3_pack);

  hw_uint<32 > res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_01060_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_01060_pack, res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_01060);
  hw_uint<32 > level_table8_lane_4_pack;
  set_at<0, 32, 32>(level_table8_lane_4_pack, level_table8_lane_4);
  auto res_update19_gp_level_table8_117_0536_gp_level_table8_116_01058 = llf_add_float_32(res_update19_gp_level_table8_117__m_1534_gp_level_table8_116_01060_pack, level_table8_lane_4_pack);

  hw_uint<32 > res_update19_gp_level_table8_117_0536_gp_level_table8_116_01058_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117_0536_gp_level_table8_116_01058_pack, res_update19_gp_level_table8_117_0536_gp_level_table8_116_01058);
  hw_uint<32 > level_table8_lane_5_pack;
  set_at<0, 32, 32>(level_table8_lane_5_pack, level_table8_lane_5);
  auto res_update19_gp_level_table8_117_1538_gp_level_table8_116_01056 = llf_add_float_32(res_update19_gp_level_table8_117_0536_gp_level_table8_116_01058_pack, level_table8_lane_5_pack);

  hw_uint<32 > res_update19_gp_level_table8_117_1538_gp_level_table8_116_01056_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117_1538_gp_level_table8_116_01056_pack, res_update19_gp_level_table8_117_1538_gp_level_table8_116_01056);
  hw_uint<32 > level_table8_lane_6_pack;
  set_at<0, 32, 32>(level_table8_lane_6_pack, level_table8_lane_6);
  auto res_update19_gp_level_table8_117__m_1534_gp_level_table8_116__m_11054 = llf_add_float_32(res_update19_gp_level_table8_117_1538_gp_level_table8_116_01056_pack, level_table8_lane_6_pack);

  hw_uint<32 > res_update19_gp_level_table8_117__m_1534_gp_level_table8_116__m_11054_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117__m_1534_gp_level_table8_116__m_11054_pack, res_update19_gp_level_table8_117__m_1534_gp_level_table8_116__m_11054);
  hw_uint<32 > level_table8_lane_7_pack;
  set_at<0, 32, 32>(level_table8_lane_7_pack, level_table8_lane_7);
  auto res_update19_gp_level_table8_117_0536_gp_level_table8_116__m_11052 = llf_add_float_32(res_update19_gp_level_table8_117__m_1534_gp_level_table8_116__m_11054_pack, level_table8_lane_7_pack);

  hw_uint<32 > res_update19_gp_level_table8_117_0536_gp_level_table8_116__m_11052_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117_0536_gp_level_table8_116__m_11052_pack, res_update19_gp_level_table8_117_0536_gp_level_table8_116__m_11052);
  hw_uint<32 > level_table8_lane_8_pack;
  set_at<0, 32, 32>(level_table8_lane_8_pack, level_table8_lane_8);
  auto res_update19_gp_level_table8_117_1538_gp_level_table8_116__m_11050 = llf_add_float_32(res_update19_gp_level_table8_117_0536_gp_level_table8_116__m_11052_pack, level_table8_lane_8_pack);

  hw_uint<32 > res_update19_gp_level_table8_117_1538_gp_level_table8_116__m_11050_pack;
  set_at<0, 32, 32>(res_update19_gp_level_table8_117_1538_gp_level_table8_116__m_11050_pack, res_update19_gp_level_table8_117_1538_gp_level_table8_116__m_11050);
  auto res_avg20 = avg_9_float(res_update19_gp_level_table8_117_1538_gp_level_table8_116__m_11050_pack);
  hw_uint<32 > return_value1159;
  set_at<0, 32, 32>(return_value1159, res_avg20);
  return return_value1159;

}

hw_uint<32> gp_level_table8_223_cu1161(hw_uint<32*9>& gp_level_table8_1_buf13) {
  hw_uint<32> gp_level_table8_1_buf13_lane_0 = gp_level_table8_1_buf13.extract<0, 31>();
  hw_uint<32> gp_level_table8_1_buf13_lane_1 = gp_level_table8_1_buf13.extract<32, 63>();
  hw_uint<32> gp_level_table8_1_buf13_lane_2 = gp_level_table8_1_buf13.extract<64, 95>();
  hw_uint<32> gp_level_table8_1_buf13_lane_3 = gp_level_table8_1_buf13.extract<96, 127>();
  hw_uint<32> gp_level_table8_1_buf13_lane_4 = gp_level_table8_1_buf13.extract<128, 159>();
  hw_uint<32> gp_level_table8_1_buf13_lane_5 = gp_level_table8_1_buf13.extract<160, 191>();
  hw_uint<32> gp_level_table8_1_buf13_lane_6 = gp_level_table8_1_buf13.extract<192, 223>();
  hw_uint<32> gp_level_table8_1_buf13_lane_7 = gp_level_table8_1_buf13.extract<224, 255>();
  hw_uint<32> gp_level_table8_1_buf13_lane_8 = gp_level_table8_1_buf13.extract<256, 287>();

	
  auto res_init26 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table8_1_buf13_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_0_pack, gp_level_table8_1_buf13_lane_0);
  hw_uint<32 > res_init26_pack;
  set_at<0, 32, 32>(res_init26_pack, res_init26);
  auto res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_11102 = llf_add_float_32(gp_level_table8_1_buf13_lane_0_pack, res_init26_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_1_pack, gp_level_table8_1_buf13_lane_1);
  hw_uint<32 > res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_11102_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_11102_pack, res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_11102);
  auto res_update27_gp_level_table8_225_0524_gp_level_table8_224_11100 = llf_add_float_32(gp_level_table8_1_buf13_lane_1_pack, res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_11102_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_2_pack, gp_level_table8_1_buf13_lane_2);
  hw_uint<32 > res_update27_gp_level_table8_225_0524_gp_level_table8_224_11100_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225_0524_gp_level_table8_224_11100_pack, res_update27_gp_level_table8_225_0524_gp_level_table8_224_11100);
  auto res_update27_gp_level_table8_225_1526_gp_level_table8_224_11098 = llf_add_float_32(gp_level_table8_1_buf13_lane_2_pack, res_update27_gp_level_table8_225_0524_gp_level_table8_224_11100_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_3_pack, gp_level_table8_1_buf13_lane_3);
  hw_uint<32 > res_update27_gp_level_table8_225_1526_gp_level_table8_224_11098_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225_1526_gp_level_table8_224_11098_pack, res_update27_gp_level_table8_225_1526_gp_level_table8_224_11098);
  auto res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_01096 = llf_add_float_32(gp_level_table8_1_buf13_lane_3_pack, res_update27_gp_level_table8_225_1526_gp_level_table8_224_11098_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_4_pack, gp_level_table8_1_buf13_lane_4);
  hw_uint<32 > res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_01096_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_01096_pack, res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_01096);
  auto res_update27_gp_level_table8_225_0524_gp_level_table8_224_01094 = llf_add_float_32(gp_level_table8_1_buf13_lane_4_pack, res_update27_gp_level_table8_225__m_1522_gp_level_table8_224_01096_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_5_pack, gp_level_table8_1_buf13_lane_5);
  hw_uint<32 > res_update27_gp_level_table8_225_0524_gp_level_table8_224_01094_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225_0524_gp_level_table8_224_01094_pack, res_update27_gp_level_table8_225_0524_gp_level_table8_224_01094);
  auto res_update27_gp_level_table8_225_1526_gp_level_table8_224_01092 = llf_add_float_32(gp_level_table8_1_buf13_lane_5_pack, res_update27_gp_level_table8_225_0524_gp_level_table8_224_01094_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_6_pack, gp_level_table8_1_buf13_lane_6);
  hw_uint<32 > res_update27_gp_level_table8_225_1526_gp_level_table8_224_01092_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225_1526_gp_level_table8_224_01092_pack, res_update27_gp_level_table8_225_1526_gp_level_table8_224_01092);
  auto res_update27_gp_level_table8_225__m_1522_gp_level_table8_224__m_11090 = llf_add_float_32(gp_level_table8_1_buf13_lane_6_pack, res_update27_gp_level_table8_225_1526_gp_level_table8_224_01092_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_7_pack, gp_level_table8_1_buf13_lane_7);
  hw_uint<32 > res_update27_gp_level_table8_225__m_1522_gp_level_table8_224__m_11090_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225__m_1522_gp_level_table8_224__m_11090_pack, res_update27_gp_level_table8_225__m_1522_gp_level_table8_224__m_11090);
  auto res_update27_gp_level_table8_225_0524_gp_level_table8_224__m_11088 = llf_add_float_32(gp_level_table8_1_buf13_lane_7_pack, res_update27_gp_level_table8_225__m_1522_gp_level_table8_224__m_11090_pack);

  hw_uint<32 > gp_level_table8_1_buf13_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table8_1_buf13_lane_8_pack, gp_level_table8_1_buf13_lane_8);
  hw_uint<32 > res_update27_gp_level_table8_225_0524_gp_level_table8_224__m_11088_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225_0524_gp_level_table8_224__m_11088_pack, res_update27_gp_level_table8_225_0524_gp_level_table8_224__m_11088);
  auto res_update27_gp_level_table8_225_1526_gp_level_table8_224__m_11086 = llf_add_float_32(gp_level_table8_1_buf13_lane_8_pack, res_update27_gp_level_table8_225_0524_gp_level_table8_224__m_11088_pack);

  hw_uint<32 > res_update27_gp_level_table8_225_1526_gp_level_table8_224__m_11086_pack;
  set_at<0, 32, 32>(res_update27_gp_level_table8_225_1526_gp_level_table8_224__m_11086_pack, res_update27_gp_level_table8_225_1526_gp_level_table8_224__m_11086);
  auto res_avg28 = avg_9_float(res_update27_gp_level_table8_225_1526_gp_level_table8_224__m_11086_pack);
  hw_uint<32 > return_value1162;
  set_at<0, 32, 32>(return_value1162, res_avg28);
  return return_value1162;

}

hw_uint<32> gp_level_table8_331_cu1164(hw_uint<32*9>& gp_level_table8_2_buf21) {
  hw_uint<32> gp_level_table8_2_buf21_lane_0 = gp_level_table8_2_buf21.extract<0, 31>();
  hw_uint<32> gp_level_table8_2_buf21_lane_1 = gp_level_table8_2_buf21.extract<32, 63>();
  hw_uint<32> gp_level_table8_2_buf21_lane_2 = gp_level_table8_2_buf21.extract<64, 95>();
  hw_uint<32> gp_level_table8_2_buf21_lane_3 = gp_level_table8_2_buf21.extract<96, 127>();
  hw_uint<32> gp_level_table8_2_buf21_lane_4 = gp_level_table8_2_buf21.extract<128, 159>();
  hw_uint<32> gp_level_table8_2_buf21_lane_5 = gp_level_table8_2_buf21.extract<160, 191>();
  hw_uint<32> gp_level_table8_2_buf21_lane_6 = gp_level_table8_2_buf21.extract<192, 223>();
  hw_uint<32> gp_level_table8_2_buf21_lane_7 = gp_level_table8_2_buf21.extract<224, 255>();
  hw_uint<32> gp_level_table8_2_buf21_lane_8 = gp_level_table8_2_buf21.extract<256, 287>();

	
  auto res_init34 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table8_2_buf21_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_0_pack, gp_level_table8_2_buf21_lane_0);
  hw_uint<32 > res_init34_pack;
  set_at<0, 32, 32>(res_init34_pack, res_init34);
  auto res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_11138 = llf_add_float_32(gp_level_table8_2_buf21_lane_0_pack, res_init34_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_1_pack, gp_level_table8_2_buf21_lane_1);
  hw_uint<32 > res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_11138_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_11138_pack, res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_11138);
  auto res_update35_gp_level_table8_333_0668_gp_level_table8_332_11136 = llf_add_float_32(gp_level_table8_2_buf21_lane_1_pack, res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_11138_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_2_pack, gp_level_table8_2_buf21_lane_2);
  hw_uint<32 > res_update35_gp_level_table8_333_0668_gp_level_table8_332_11136_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333_0668_gp_level_table8_332_11136_pack, res_update35_gp_level_table8_333_0668_gp_level_table8_332_11136);
  auto res_update35_gp_level_table8_333_1670_gp_level_table8_332_11134 = llf_add_float_32(gp_level_table8_2_buf21_lane_2_pack, res_update35_gp_level_table8_333_0668_gp_level_table8_332_11136_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_3_pack, gp_level_table8_2_buf21_lane_3);
  hw_uint<32 > res_update35_gp_level_table8_333_1670_gp_level_table8_332_11134_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333_1670_gp_level_table8_332_11134_pack, res_update35_gp_level_table8_333_1670_gp_level_table8_332_11134);
  auto res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_01132 = llf_add_float_32(gp_level_table8_2_buf21_lane_3_pack, res_update35_gp_level_table8_333_1670_gp_level_table8_332_11134_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_4_pack, gp_level_table8_2_buf21_lane_4);
  hw_uint<32 > res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_01132_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_01132_pack, res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_01132);
  auto res_update35_gp_level_table8_333_0668_gp_level_table8_332_01130 = llf_add_float_32(gp_level_table8_2_buf21_lane_4_pack, res_update35_gp_level_table8_333__m_1666_gp_level_table8_332_01132_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_5_pack, gp_level_table8_2_buf21_lane_5);
  hw_uint<32 > res_update35_gp_level_table8_333_0668_gp_level_table8_332_01130_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333_0668_gp_level_table8_332_01130_pack, res_update35_gp_level_table8_333_0668_gp_level_table8_332_01130);
  auto res_update35_gp_level_table8_333_1670_gp_level_table8_332_01128 = llf_add_float_32(gp_level_table8_2_buf21_lane_5_pack, res_update35_gp_level_table8_333_0668_gp_level_table8_332_01130_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_6_pack, gp_level_table8_2_buf21_lane_6);
  hw_uint<32 > res_update35_gp_level_table8_333_1670_gp_level_table8_332_01128_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333_1670_gp_level_table8_332_01128_pack, res_update35_gp_level_table8_333_1670_gp_level_table8_332_01128);
  auto res_update35_gp_level_table8_333__m_1666_gp_level_table8_332__m_11126 = llf_add_float_32(gp_level_table8_2_buf21_lane_6_pack, res_update35_gp_level_table8_333_1670_gp_level_table8_332_01128_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_7_pack, gp_level_table8_2_buf21_lane_7);
  hw_uint<32 > res_update35_gp_level_table8_333__m_1666_gp_level_table8_332__m_11126_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333__m_1666_gp_level_table8_332__m_11126_pack, res_update35_gp_level_table8_333__m_1666_gp_level_table8_332__m_11126);
  auto res_update35_gp_level_table8_333_0668_gp_level_table8_332__m_11124 = llf_add_float_32(gp_level_table8_2_buf21_lane_7_pack, res_update35_gp_level_table8_333__m_1666_gp_level_table8_332__m_11126_pack);

  hw_uint<32 > gp_level_table8_2_buf21_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table8_2_buf21_lane_8_pack, gp_level_table8_2_buf21_lane_8);
  hw_uint<32 > res_update35_gp_level_table8_333_0668_gp_level_table8_332__m_11124_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333_0668_gp_level_table8_332__m_11124_pack, res_update35_gp_level_table8_333_0668_gp_level_table8_332__m_11124);
  auto res_update35_gp_level_table8_333_1670_gp_level_table8_332__m_11122 = llf_add_float_32(gp_level_table8_2_buf21_lane_8_pack, res_update35_gp_level_table8_333_0668_gp_level_table8_332__m_11124_pack);

  hw_uint<32 > res_update35_gp_level_table8_333_1670_gp_level_table8_332__m_11122_pack;
  set_at<0, 32, 32>(res_update35_gp_level_table8_333_1670_gp_level_table8_332__m_11122_pack, res_update35_gp_level_table8_333_1670_gp_level_table8_332__m_11122);
  auto res_avg36 = avg_9_float(res_update35_gp_level_table8_333_1670_gp_level_table8_332__m_11122_pack);
  hw_uint<32 > return_value1165;
  set_at<0, 32, 32>(return_value1165, res_avg36);
  return return_value1165;

}

hw_uint<32> gp_level_table61_168_cu1167(hw_uint<32*9>& level_table61) {
  hw_uint<32> level_table61_lane_0 = level_table61.extract<0, 31>();
  hw_uint<32> level_table61_lane_1 = level_table61.extract<32, 63>();
  hw_uint<32> level_table61_lane_2 = level_table61.extract<64, 95>();
  hw_uint<32> level_table61_lane_3 = level_table61.extract<96, 127>();
  hw_uint<32> level_table61_lane_4 = level_table61.extract<128, 159>();
  hw_uint<32> level_table61_lane_5 = level_table61.extract<160, 191>();
  hw_uint<32> level_table61_lane_6 = level_table61.extract<192, 223>();
  hw_uint<32> level_table61_lane_7 = level_table61.extract<224, 255>();
  hw_uint<32> level_table61_lane_8 = level_table61.extract<256, 287>();

	
  auto res_init71 = llf_set_zero_float_32();

  hw_uint<32 > res_init71_pack;
  set_at<0, 32, 32>(res_init71_pack, res_init71);
  hw_uint<32 > level_table61_lane_0_pack;
  set_at<0, 32, 32>(level_table61_lane_0_pack, level_table61_lane_0);
  auto res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_1958 = llf_add_float_32(res_init71_pack, level_table61_lane_0_pack);

  hw_uint<32 > res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_1958_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_1958_pack, res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_1958);
  hw_uint<32 > level_table61_lane_1_pack;
  set_at<0, 32, 32>(level_table61_lane_1_pack, level_table61_lane_1);
  auto res_update72_gp_level_table61_170_0572_gp_level_table61_169_1956 = llf_add_float_32(res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_1958_pack, level_table61_lane_1_pack);

  hw_uint<32 > res_update72_gp_level_table61_170_0572_gp_level_table61_169_1956_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170_0572_gp_level_table61_169_1956_pack, res_update72_gp_level_table61_170_0572_gp_level_table61_169_1956);
  hw_uint<32 > level_table61_lane_2_pack;
  set_at<0, 32, 32>(level_table61_lane_2_pack, level_table61_lane_2);
  auto res_update72_gp_level_table61_170_1574_gp_level_table61_169_1954 = llf_add_float_32(res_update72_gp_level_table61_170_0572_gp_level_table61_169_1956_pack, level_table61_lane_2_pack);

  hw_uint<32 > res_update72_gp_level_table61_170_1574_gp_level_table61_169_1954_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170_1574_gp_level_table61_169_1954_pack, res_update72_gp_level_table61_170_1574_gp_level_table61_169_1954);
  hw_uint<32 > level_table61_lane_3_pack;
  set_at<0, 32, 32>(level_table61_lane_3_pack, level_table61_lane_3);
  auto res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_0952 = llf_add_float_32(res_update72_gp_level_table61_170_1574_gp_level_table61_169_1954_pack, level_table61_lane_3_pack);

  hw_uint<32 > res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_0952_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_0952_pack, res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_0952);
  hw_uint<32 > level_table61_lane_4_pack;
  set_at<0, 32, 32>(level_table61_lane_4_pack, level_table61_lane_4);
  auto res_update72_gp_level_table61_170_0572_gp_level_table61_169_0950 = llf_add_float_32(res_update72_gp_level_table61_170__m_1570_gp_level_table61_169_0952_pack, level_table61_lane_4_pack);

  hw_uint<32 > res_update72_gp_level_table61_170_0572_gp_level_table61_169_0950_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170_0572_gp_level_table61_169_0950_pack, res_update72_gp_level_table61_170_0572_gp_level_table61_169_0950);
  hw_uint<32 > level_table61_lane_5_pack;
  set_at<0, 32, 32>(level_table61_lane_5_pack, level_table61_lane_5);
  auto res_update72_gp_level_table61_170_1574_gp_level_table61_169_0948 = llf_add_float_32(res_update72_gp_level_table61_170_0572_gp_level_table61_169_0950_pack, level_table61_lane_5_pack);

  hw_uint<32 > res_update72_gp_level_table61_170_1574_gp_level_table61_169_0948_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170_1574_gp_level_table61_169_0948_pack, res_update72_gp_level_table61_170_1574_gp_level_table61_169_0948);
  hw_uint<32 > level_table61_lane_6_pack;
  set_at<0, 32, 32>(level_table61_lane_6_pack, level_table61_lane_6);
  auto res_update72_gp_level_table61_170__m_1570_gp_level_table61_169__m_1946 = llf_add_float_32(res_update72_gp_level_table61_170_1574_gp_level_table61_169_0948_pack, level_table61_lane_6_pack);

  hw_uint<32 > res_update72_gp_level_table61_170__m_1570_gp_level_table61_169__m_1946_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170__m_1570_gp_level_table61_169__m_1946_pack, res_update72_gp_level_table61_170__m_1570_gp_level_table61_169__m_1946);
  hw_uint<32 > level_table61_lane_7_pack;
  set_at<0, 32, 32>(level_table61_lane_7_pack, level_table61_lane_7);
  auto res_update72_gp_level_table61_170_0572_gp_level_table61_169__m_1944 = llf_add_float_32(res_update72_gp_level_table61_170__m_1570_gp_level_table61_169__m_1946_pack, level_table61_lane_7_pack);

  hw_uint<32 > res_update72_gp_level_table61_170_0572_gp_level_table61_169__m_1944_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170_0572_gp_level_table61_169__m_1944_pack, res_update72_gp_level_table61_170_0572_gp_level_table61_169__m_1944);
  hw_uint<32 > level_table61_lane_8_pack;
  set_at<0, 32, 32>(level_table61_lane_8_pack, level_table61_lane_8);
  auto res_update72_gp_level_table61_170_1574_gp_level_table61_169__m_1942 = llf_add_float_32(res_update72_gp_level_table61_170_0572_gp_level_table61_169__m_1944_pack, level_table61_lane_8_pack);

  hw_uint<32 > res_update72_gp_level_table61_170_1574_gp_level_table61_169__m_1942_pack;
  set_at<0, 32, 32>(res_update72_gp_level_table61_170_1574_gp_level_table61_169__m_1942_pack, res_update72_gp_level_table61_170_1574_gp_level_table61_169__m_1942);
  auto res_avg73 = avg_9_float(res_update72_gp_level_table61_170_1574_gp_level_table61_169__m_1942_pack);
  hw_uint<32 > return_value1168;
  set_at<0, 32, 32>(return_value1168, res_avg73);
  return return_value1168;

}

hw_uint<32> gp_level_table61_276_cu1170(hw_uint<32*9>& gp_level_table61_1_buf66) {
  hw_uint<32> gp_level_table61_1_buf66_lane_0 = gp_level_table61_1_buf66.extract<0, 31>();
  hw_uint<32> gp_level_table61_1_buf66_lane_1 = gp_level_table61_1_buf66.extract<32, 63>();
  hw_uint<32> gp_level_table61_1_buf66_lane_2 = gp_level_table61_1_buf66.extract<64, 95>();
  hw_uint<32> gp_level_table61_1_buf66_lane_3 = gp_level_table61_1_buf66.extract<96, 127>();
  hw_uint<32> gp_level_table61_1_buf66_lane_4 = gp_level_table61_1_buf66.extract<128, 159>();
  hw_uint<32> gp_level_table61_1_buf66_lane_5 = gp_level_table61_1_buf66.extract<160, 191>();
  hw_uint<32> gp_level_table61_1_buf66_lane_6 = gp_level_table61_1_buf66.extract<192, 223>();
  hw_uint<32> gp_level_table61_1_buf66_lane_7 = gp_level_table61_1_buf66.extract<224, 255>();
  hw_uint<32> gp_level_table61_1_buf66_lane_8 = gp_level_table61_1_buf66.extract<256, 287>();

	
  auto res_init79 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table61_1_buf66_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_0_pack, gp_level_table61_1_buf66_lane_0);
  hw_uint<32 > res_init79_pack;
  set_at<0, 32, 32>(res_init79_pack, res_init79);
  auto res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_1994 = llf_add_float_32(gp_level_table61_1_buf66_lane_0_pack, res_init79_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_1_pack, gp_level_table61_1_buf66_lane_1);
  hw_uint<32 > res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_1994_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_1994_pack, res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_1994);
  auto res_update80_gp_level_table61_278_0560_gp_level_table61_277_1992 = llf_add_float_32(gp_level_table61_1_buf66_lane_1_pack, res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_1994_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_2_pack, gp_level_table61_1_buf66_lane_2);
  hw_uint<32 > res_update80_gp_level_table61_278_0560_gp_level_table61_277_1992_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278_0560_gp_level_table61_277_1992_pack, res_update80_gp_level_table61_278_0560_gp_level_table61_277_1992);
  auto res_update80_gp_level_table61_278_1562_gp_level_table61_277_1990 = llf_add_float_32(gp_level_table61_1_buf66_lane_2_pack, res_update80_gp_level_table61_278_0560_gp_level_table61_277_1992_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_3_pack, gp_level_table61_1_buf66_lane_3);
  hw_uint<32 > res_update80_gp_level_table61_278_1562_gp_level_table61_277_1990_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278_1562_gp_level_table61_277_1990_pack, res_update80_gp_level_table61_278_1562_gp_level_table61_277_1990);
  auto res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_0988 = llf_add_float_32(gp_level_table61_1_buf66_lane_3_pack, res_update80_gp_level_table61_278_1562_gp_level_table61_277_1990_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_4_pack, gp_level_table61_1_buf66_lane_4);
  hw_uint<32 > res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_0988_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_0988_pack, res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_0988);
  auto res_update80_gp_level_table61_278_0560_gp_level_table61_277_0986 = llf_add_float_32(gp_level_table61_1_buf66_lane_4_pack, res_update80_gp_level_table61_278__m_1558_gp_level_table61_277_0988_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_5_pack, gp_level_table61_1_buf66_lane_5);
  hw_uint<32 > res_update80_gp_level_table61_278_0560_gp_level_table61_277_0986_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278_0560_gp_level_table61_277_0986_pack, res_update80_gp_level_table61_278_0560_gp_level_table61_277_0986);
  auto res_update80_gp_level_table61_278_1562_gp_level_table61_277_0984 = llf_add_float_32(gp_level_table61_1_buf66_lane_5_pack, res_update80_gp_level_table61_278_0560_gp_level_table61_277_0986_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_6_pack, gp_level_table61_1_buf66_lane_6);
  hw_uint<32 > res_update80_gp_level_table61_278_1562_gp_level_table61_277_0984_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278_1562_gp_level_table61_277_0984_pack, res_update80_gp_level_table61_278_1562_gp_level_table61_277_0984);
  auto res_update80_gp_level_table61_278__m_1558_gp_level_table61_277__m_1982 = llf_add_float_32(gp_level_table61_1_buf66_lane_6_pack, res_update80_gp_level_table61_278_1562_gp_level_table61_277_0984_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_7_pack, gp_level_table61_1_buf66_lane_7);
  hw_uint<32 > res_update80_gp_level_table61_278__m_1558_gp_level_table61_277__m_1982_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278__m_1558_gp_level_table61_277__m_1982_pack, res_update80_gp_level_table61_278__m_1558_gp_level_table61_277__m_1982);
  auto res_update80_gp_level_table61_278_0560_gp_level_table61_277__m_1980 = llf_add_float_32(gp_level_table61_1_buf66_lane_7_pack, res_update80_gp_level_table61_278__m_1558_gp_level_table61_277__m_1982_pack);

  hw_uint<32 > gp_level_table61_1_buf66_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table61_1_buf66_lane_8_pack, gp_level_table61_1_buf66_lane_8);
  hw_uint<32 > res_update80_gp_level_table61_278_0560_gp_level_table61_277__m_1980_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278_0560_gp_level_table61_277__m_1980_pack, res_update80_gp_level_table61_278_0560_gp_level_table61_277__m_1980);
  auto res_update80_gp_level_table61_278_1562_gp_level_table61_277__m_1978 = llf_add_float_32(gp_level_table61_1_buf66_lane_8_pack, res_update80_gp_level_table61_278_0560_gp_level_table61_277__m_1980_pack);

  hw_uint<32 > res_update80_gp_level_table61_278_1562_gp_level_table61_277__m_1978_pack;
  set_at<0, 32, 32>(res_update80_gp_level_table61_278_1562_gp_level_table61_277__m_1978_pack, res_update80_gp_level_table61_278_1562_gp_level_table61_277__m_1978);
  auto res_avg81 = avg_9_float(res_update80_gp_level_table61_278_1562_gp_level_table61_277__m_1978_pack);
  hw_uint<32 > return_value1171;
  set_at<0, 32, 32>(return_value1171, res_avg81);
  return return_value1171;

}

hw_uint<32> gp_level_table61_384_cu1173(hw_uint<32*9>& gp_level_table61_2_buf74) {
  hw_uint<32> gp_level_table61_2_buf74_lane_0 = gp_level_table61_2_buf74.extract<0, 31>();
  hw_uint<32> gp_level_table61_2_buf74_lane_1 = gp_level_table61_2_buf74.extract<32, 63>();
  hw_uint<32> gp_level_table61_2_buf74_lane_2 = gp_level_table61_2_buf74.extract<64, 95>();
  hw_uint<32> gp_level_table61_2_buf74_lane_3 = gp_level_table61_2_buf74.extract<96, 127>();
  hw_uint<32> gp_level_table61_2_buf74_lane_4 = gp_level_table61_2_buf74.extract<128, 159>();
  hw_uint<32> gp_level_table61_2_buf74_lane_5 = gp_level_table61_2_buf74.extract<160, 191>();
  hw_uint<32> gp_level_table61_2_buf74_lane_6 = gp_level_table61_2_buf74.extract<192, 223>();
  hw_uint<32> gp_level_table61_2_buf74_lane_7 = gp_level_table61_2_buf74.extract<224, 255>();
  hw_uint<32> gp_level_table61_2_buf74_lane_8 = gp_level_table61_2_buf74.extract<256, 287>();

	
  auto res_init87 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table61_2_buf74_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_0_pack, gp_level_table61_2_buf74_lane_0);
  hw_uint<32 > res_init87_pack;
  set_at<0, 32, 32>(res_init87_pack, res_init87);
  auto res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_11030 = llf_add_float_32(gp_level_table61_2_buf74_lane_0_pack, res_init87_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_1_pack, gp_level_table61_2_buf74_lane_1);
  hw_uint<32 > res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_11030_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_11030_pack, res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_11030);
  auto res_update88_gp_level_table61_386_0548_gp_level_table61_385_11028 = llf_add_float_32(gp_level_table61_2_buf74_lane_1_pack, res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_11030_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_2_pack, gp_level_table61_2_buf74_lane_2);
  hw_uint<32 > res_update88_gp_level_table61_386_0548_gp_level_table61_385_11028_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386_0548_gp_level_table61_385_11028_pack, res_update88_gp_level_table61_386_0548_gp_level_table61_385_11028);
  auto res_update88_gp_level_table61_386_1550_gp_level_table61_385_11026 = llf_add_float_32(gp_level_table61_2_buf74_lane_2_pack, res_update88_gp_level_table61_386_0548_gp_level_table61_385_11028_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_3_pack, gp_level_table61_2_buf74_lane_3);
  hw_uint<32 > res_update88_gp_level_table61_386_1550_gp_level_table61_385_11026_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386_1550_gp_level_table61_385_11026_pack, res_update88_gp_level_table61_386_1550_gp_level_table61_385_11026);
  auto res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_01024 = llf_add_float_32(gp_level_table61_2_buf74_lane_3_pack, res_update88_gp_level_table61_386_1550_gp_level_table61_385_11026_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_4_pack, gp_level_table61_2_buf74_lane_4);
  hw_uint<32 > res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_01024_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_01024_pack, res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_01024);
  auto res_update88_gp_level_table61_386_0548_gp_level_table61_385_01022 = llf_add_float_32(gp_level_table61_2_buf74_lane_4_pack, res_update88_gp_level_table61_386__m_1546_gp_level_table61_385_01024_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_5_pack, gp_level_table61_2_buf74_lane_5);
  hw_uint<32 > res_update88_gp_level_table61_386_0548_gp_level_table61_385_01022_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386_0548_gp_level_table61_385_01022_pack, res_update88_gp_level_table61_386_0548_gp_level_table61_385_01022);
  auto res_update88_gp_level_table61_386_1550_gp_level_table61_385_01020 = llf_add_float_32(gp_level_table61_2_buf74_lane_5_pack, res_update88_gp_level_table61_386_0548_gp_level_table61_385_01022_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_6_pack, gp_level_table61_2_buf74_lane_6);
  hw_uint<32 > res_update88_gp_level_table61_386_1550_gp_level_table61_385_01020_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386_1550_gp_level_table61_385_01020_pack, res_update88_gp_level_table61_386_1550_gp_level_table61_385_01020);
  auto res_update88_gp_level_table61_386__m_1546_gp_level_table61_385__m_11018 = llf_add_float_32(gp_level_table61_2_buf74_lane_6_pack, res_update88_gp_level_table61_386_1550_gp_level_table61_385_01020_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_7_pack, gp_level_table61_2_buf74_lane_7);
  hw_uint<32 > res_update88_gp_level_table61_386__m_1546_gp_level_table61_385__m_11018_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386__m_1546_gp_level_table61_385__m_11018_pack, res_update88_gp_level_table61_386__m_1546_gp_level_table61_385__m_11018);
  auto res_update88_gp_level_table61_386_0548_gp_level_table61_385__m_11016 = llf_add_float_32(gp_level_table61_2_buf74_lane_7_pack, res_update88_gp_level_table61_386__m_1546_gp_level_table61_385__m_11018_pack);

  hw_uint<32 > gp_level_table61_2_buf74_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table61_2_buf74_lane_8_pack, gp_level_table61_2_buf74_lane_8);
  hw_uint<32 > res_update88_gp_level_table61_386_0548_gp_level_table61_385__m_11016_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386_0548_gp_level_table61_385__m_11016_pack, res_update88_gp_level_table61_386_0548_gp_level_table61_385__m_11016);
  auto res_update88_gp_level_table61_386_1550_gp_level_table61_385__m_11014 = llf_add_float_32(gp_level_table61_2_buf74_lane_8_pack, res_update88_gp_level_table61_386_0548_gp_level_table61_385__m_11016_pack);

  hw_uint<32 > res_update88_gp_level_table61_386_1550_gp_level_table61_385__m_11014_pack;
  set_at<0, 32, 32>(res_update88_gp_level_table61_386_1550_gp_level_table61_385__m_11014_pack, res_update88_gp_level_table61_386_1550_gp_level_table61_385__m_11014);
  auto res_avg89 = avg_9_float(res_update88_gp_level_table61_386_1550_gp_level_table61_385__m_11014_pack);
  hw_uint<32 > return_value1174;
  set_at<0, 32, 32>(return_value1174, res_avg89);
  return return_value1174;

}

hw_uint<32> gp_level_table114_1121_cu1176(hw_uint<32*9>& level_table114) {
  hw_uint<32> level_table114_lane_0 = level_table114.extract<0, 31>();
  hw_uint<32> level_table114_lane_1 = level_table114.extract<32, 63>();
  hw_uint<32> level_table114_lane_2 = level_table114.extract<64, 95>();
  hw_uint<32> level_table114_lane_3 = level_table114.extract<96, 127>();
  hw_uint<32> level_table114_lane_4 = level_table114.extract<128, 159>();
  hw_uint<32> level_table114_lane_5 = level_table114.extract<160, 191>();
  hw_uint<32> level_table114_lane_6 = level_table114.extract<192, 223>();
  hw_uint<32> level_table114_lane_7 = level_table114.extract<224, 255>();
  hw_uint<32> level_table114_lane_8 = level_table114.extract<256, 287>();

	
  auto res_init124 = llf_set_zero_float_32();

  hw_uint<32 > res_init124_pack;
  set_at<0, 32, 32>(res_init124_pack, res_init124);
  hw_uint<32 > level_table114_lane_0_pack;
  set_at<0, 32, 32>(level_table114_lane_0_pack, level_table114_lane_0);
  auto res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_11048 = llf_add_float_32(res_init124_pack, level_table114_lane_0_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_11048_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_11048_pack, res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_11048);
  hw_uint<32 > level_table114_lane_1_pack;
  set_at<0, 32, 32>(level_table114_lane_1_pack, level_table114_lane_1);
  auto res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_11046 = llf_add_float_32(res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_11048_pack, level_table114_lane_1_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_11046_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_11046_pack, res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_11046);
  hw_uint<32 > level_table114_lane_2_pack;
  set_at<0, 32, 32>(level_table114_lane_2_pack, level_table114_lane_2);
  auto res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_11044 = llf_add_float_32(res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_11046_pack, level_table114_lane_2_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_11044_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_11044_pack, res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_11044);
  hw_uint<32 > level_table114_lane_3_pack;
  set_at<0, 32, 32>(level_table114_lane_3_pack, level_table114_lane_3);
  auto res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_01042 = llf_add_float_32(res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_11044_pack, level_table114_lane_3_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_01042_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_01042_pack, res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_01042);
  hw_uint<32 > level_table114_lane_4_pack;
  set_at<0, 32, 32>(level_table114_lane_4_pack, level_table114_lane_4);
  auto res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_01040 = llf_add_float_32(res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122_01042_pack, level_table114_lane_4_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_01040_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_01040_pack, res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_01040);
  hw_uint<32 > level_table114_lane_5_pack;
  set_at<0, 32, 32>(level_table114_lane_5_pack, level_table114_lane_5);
  auto res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_01038 = llf_add_float_32(res_update125_gp_level_table114_1123_0554_gp_level_table114_1122_01040_pack, level_table114_lane_5_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_01038_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_01038_pack, res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_01038);
  hw_uint<32 > level_table114_lane_6_pack;
  set_at<0, 32, 32>(level_table114_lane_6_pack, level_table114_lane_6);
  auto res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122__m_11036 = llf_add_float_32(res_update125_gp_level_table114_1123_1556_gp_level_table114_1122_01038_pack, level_table114_lane_6_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122__m_11036_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122__m_11036_pack, res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122__m_11036);
  hw_uint<32 > level_table114_lane_7_pack;
  set_at<0, 32, 32>(level_table114_lane_7_pack, level_table114_lane_7);
  auto res_update125_gp_level_table114_1123_0554_gp_level_table114_1122__m_11034 = llf_add_float_32(res_update125_gp_level_table114_1123__m_1552_gp_level_table114_1122__m_11036_pack, level_table114_lane_7_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123_0554_gp_level_table114_1122__m_11034_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123_0554_gp_level_table114_1122__m_11034_pack, res_update125_gp_level_table114_1123_0554_gp_level_table114_1122__m_11034);
  hw_uint<32 > level_table114_lane_8_pack;
  set_at<0, 32, 32>(level_table114_lane_8_pack, level_table114_lane_8);
  auto res_update125_gp_level_table114_1123_1556_gp_level_table114_1122__m_11032 = llf_add_float_32(res_update125_gp_level_table114_1123_0554_gp_level_table114_1122__m_11034_pack, level_table114_lane_8_pack);

  hw_uint<32 > res_update125_gp_level_table114_1123_1556_gp_level_table114_1122__m_11032_pack;
  set_at<0, 32, 32>(res_update125_gp_level_table114_1123_1556_gp_level_table114_1122__m_11032_pack, res_update125_gp_level_table114_1123_1556_gp_level_table114_1122__m_11032);
  auto res_avg126 = avg_9_float(res_update125_gp_level_table114_1123_1556_gp_level_table114_1122__m_11032_pack);
  hw_uint<32 > return_value1177;
  set_at<0, 32, 32>(return_value1177, res_avg126);
  return return_value1177;

}

hw_uint<32> gp_level_table114_2129_cu1179(hw_uint<32*9>& gp_level_table114_1_buf119) {
  hw_uint<32> gp_level_table114_1_buf119_lane_0 = gp_level_table114_1_buf119.extract<0, 31>();
  hw_uint<32> gp_level_table114_1_buf119_lane_1 = gp_level_table114_1_buf119.extract<32, 63>();
  hw_uint<32> gp_level_table114_1_buf119_lane_2 = gp_level_table114_1_buf119.extract<64, 95>();
  hw_uint<32> gp_level_table114_1_buf119_lane_3 = gp_level_table114_1_buf119.extract<96, 127>();
  hw_uint<32> gp_level_table114_1_buf119_lane_4 = gp_level_table114_1_buf119.extract<128, 159>();
  hw_uint<32> gp_level_table114_1_buf119_lane_5 = gp_level_table114_1_buf119.extract<160, 191>();
  hw_uint<32> gp_level_table114_1_buf119_lane_6 = gp_level_table114_1_buf119.extract<192, 223>();
  hw_uint<32> gp_level_table114_1_buf119_lane_7 = gp_level_table114_1_buf119.extract<224, 255>();
  hw_uint<32> gp_level_table114_1_buf119_lane_8 = gp_level_table114_1_buf119.extract<256, 287>();

	
  auto res_init132 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table114_1_buf119_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_0_pack, gp_level_table114_1_buf119_lane_0);
  hw_uint<32 > res_init132_pack;
  set_at<0, 32, 32>(res_init132_pack, res_init132);
  auto res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_11012 = llf_add_float_32(gp_level_table114_1_buf119_lane_0_pack, res_init132_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_1_pack, gp_level_table114_1_buf119_lane_1);
  hw_uint<32 > res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_11012_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_11012_pack, res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_11012);
  auto res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_11010 = llf_add_float_32(gp_level_table114_1_buf119_lane_1_pack, res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_11012_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_2_pack, gp_level_table114_1_buf119_lane_2);
  hw_uint<32 > res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_11010_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_11010_pack, res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_11010);
  auto res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_11008 = llf_add_float_32(gp_level_table114_1_buf119_lane_2_pack, res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_11010_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_3_pack, gp_level_table114_1_buf119_lane_3);
  hw_uint<32 > res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_11008_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_11008_pack, res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_11008);
  auto res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_01006 = llf_add_float_32(gp_level_table114_1_buf119_lane_3_pack, res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_11008_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_4_pack, gp_level_table114_1_buf119_lane_4);
  hw_uint<32 > res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_01006_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_01006_pack, res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_01006);
  auto res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_01004 = llf_add_float_32(gp_level_table114_1_buf119_lane_4_pack, res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130_01006_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_5_pack, gp_level_table114_1_buf119_lane_5);
  hw_uint<32 > res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_01004_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_01004_pack, res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_01004);
  auto res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_01002 = llf_add_float_32(gp_level_table114_1_buf119_lane_5_pack, res_update133_gp_level_table114_2131_0566_gp_level_table114_2130_01004_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_6_pack, gp_level_table114_1_buf119_lane_6);
  hw_uint<32 > res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_01002_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_01002_pack, res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_01002);
  auto res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130__m_11000 = llf_add_float_32(gp_level_table114_1_buf119_lane_6_pack, res_update133_gp_level_table114_2131_1568_gp_level_table114_2130_01002_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_7_pack, gp_level_table114_1_buf119_lane_7);
  hw_uint<32 > res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130__m_11000_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130__m_11000_pack, res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130__m_11000);
  auto res_update133_gp_level_table114_2131_0566_gp_level_table114_2130__m_1998 = llf_add_float_32(gp_level_table114_1_buf119_lane_7_pack, res_update133_gp_level_table114_2131__m_1564_gp_level_table114_2130__m_11000_pack);

  hw_uint<32 > gp_level_table114_1_buf119_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table114_1_buf119_lane_8_pack, gp_level_table114_1_buf119_lane_8);
  hw_uint<32 > res_update133_gp_level_table114_2131_0566_gp_level_table114_2130__m_1998_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131_0566_gp_level_table114_2130__m_1998_pack, res_update133_gp_level_table114_2131_0566_gp_level_table114_2130__m_1998);
  auto res_update133_gp_level_table114_2131_1568_gp_level_table114_2130__m_1996 = llf_add_float_32(gp_level_table114_1_buf119_lane_8_pack, res_update133_gp_level_table114_2131_0566_gp_level_table114_2130__m_1998_pack);

  hw_uint<32 > res_update133_gp_level_table114_2131_1568_gp_level_table114_2130__m_1996_pack;
  set_at<0, 32, 32>(res_update133_gp_level_table114_2131_1568_gp_level_table114_2130__m_1996_pack, res_update133_gp_level_table114_2131_1568_gp_level_table114_2130__m_1996);
  auto res_avg134 = avg_9_float(res_update133_gp_level_table114_2131_1568_gp_level_table114_2130__m_1996_pack);
  hw_uint<32 > return_value1180;
  set_at<0, 32, 32>(return_value1180, res_avg134);
  return return_value1180;

}

hw_uint<32> gp_level_table114_3137_cu1182(hw_uint<32*9>& gp_level_table114_2_buf127) {
  hw_uint<32> gp_level_table114_2_buf127_lane_0 = gp_level_table114_2_buf127.extract<0, 31>();
  hw_uint<32> gp_level_table114_2_buf127_lane_1 = gp_level_table114_2_buf127.extract<32, 63>();
  hw_uint<32> gp_level_table114_2_buf127_lane_2 = gp_level_table114_2_buf127.extract<64, 95>();
  hw_uint<32> gp_level_table114_2_buf127_lane_3 = gp_level_table114_2_buf127.extract<96, 127>();
  hw_uint<32> gp_level_table114_2_buf127_lane_4 = gp_level_table114_2_buf127.extract<128, 159>();
  hw_uint<32> gp_level_table114_2_buf127_lane_5 = gp_level_table114_2_buf127.extract<160, 191>();
  hw_uint<32> gp_level_table114_2_buf127_lane_6 = gp_level_table114_2_buf127.extract<192, 223>();
  hw_uint<32> gp_level_table114_2_buf127_lane_7 = gp_level_table114_2_buf127.extract<224, 255>();
  hw_uint<32> gp_level_table114_2_buf127_lane_8 = gp_level_table114_2_buf127.extract<256, 287>();

	
  auto res_init140 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table114_2_buf127_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_0_pack, gp_level_table114_2_buf127_lane_0);
  hw_uint<32 > res_init140_pack;
  set_at<0, 32, 32>(res_init140_pack, res_init140);
  auto res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_1976 = llf_add_float_32(gp_level_table114_2_buf127_lane_0_pack, res_init140_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_1_pack, gp_level_table114_2_buf127_lane_1);
  hw_uint<32 > res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_1976_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_1976_pack, res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_1976);
  auto res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_1974 = llf_add_float_32(gp_level_table114_2_buf127_lane_1_pack, res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_1976_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_2_pack, gp_level_table114_2_buf127_lane_2);
  hw_uint<32 > res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_1974_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_1974_pack, res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_1974);
  auto res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_1972 = llf_add_float_32(gp_level_table114_2_buf127_lane_2_pack, res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_1974_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_3_pack, gp_level_table114_2_buf127_lane_3);
  hw_uint<32 > res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_1972_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_1972_pack, res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_1972);
  auto res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_0970 = llf_add_float_32(gp_level_table114_2_buf127_lane_3_pack, res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_1972_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_4_pack, gp_level_table114_2_buf127_lane_4);
  hw_uint<32 > res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_0970_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_0970_pack, res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_0970);
  auto res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_0968 = llf_add_float_32(gp_level_table114_2_buf127_lane_4_pack, res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138_0970_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_5_pack, gp_level_table114_2_buf127_lane_5);
  hw_uint<32 > res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_0968_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_0968_pack, res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_0968);
  auto res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_0966 = llf_add_float_32(gp_level_table114_2_buf127_lane_5_pack, res_update141_gp_level_table114_3139_0578_gp_level_table114_3138_0968_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_6_pack, gp_level_table114_2_buf127_lane_6);
  hw_uint<32 > res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_0966_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_0966_pack, res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_0966);
  auto res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138__m_1964 = llf_add_float_32(gp_level_table114_2_buf127_lane_6_pack, res_update141_gp_level_table114_3139_1580_gp_level_table114_3138_0966_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_7_pack, gp_level_table114_2_buf127_lane_7);
  hw_uint<32 > res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138__m_1964_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138__m_1964_pack, res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138__m_1964);
  auto res_update141_gp_level_table114_3139_0578_gp_level_table114_3138__m_1962 = llf_add_float_32(gp_level_table114_2_buf127_lane_7_pack, res_update141_gp_level_table114_3139__m_1576_gp_level_table114_3138__m_1964_pack);

  hw_uint<32 > gp_level_table114_2_buf127_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table114_2_buf127_lane_8_pack, gp_level_table114_2_buf127_lane_8);
  hw_uint<32 > res_update141_gp_level_table114_3139_0578_gp_level_table114_3138__m_1962_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139_0578_gp_level_table114_3138__m_1962_pack, res_update141_gp_level_table114_3139_0578_gp_level_table114_3138__m_1962);
  auto res_update141_gp_level_table114_3139_1580_gp_level_table114_3138__m_1960 = llf_add_float_32(gp_level_table114_2_buf127_lane_8_pack, res_update141_gp_level_table114_3139_0578_gp_level_table114_3138__m_1962_pack);

  hw_uint<32 > res_update141_gp_level_table114_3139_1580_gp_level_table114_3138__m_1960_pack;
  set_at<0, 32, 32>(res_update141_gp_level_table114_3139_1580_gp_level_table114_3138__m_1960_pack, res_update141_gp_level_table114_3139_1580_gp_level_table114_3138__m_1960);
  auto res_avg142 = avg_9_float(res_update141_gp_level_table114_3139_1580_gp_level_table114_3138__m_1960_pack);
  hw_uint<32 > return_value1183;
  set_at<0, 32, 32>(return_value1183, res_avg142);
  return return_value1183;

}

hw_uint<32> gp_level_table326_2341_cu1185(hw_uint<32*9>& gp_level_table326_1_buf331) {
  hw_uint<32> gp_level_table326_1_buf331_lane_0 = gp_level_table326_1_buf331.extract<0, 31>();
  hw_uint<32> gp_level_table326_1_buf331_lane_1 = gp_level_table326_1_buf331.extract<32, 63>();
  hw_uint<32> gp_level_table326_1_buf331_lane_2 = gp_level_table326_1_buf331.extract<64, 95>();
  hw_uint<32> gp_level_table326_1_buf331_lane_3 = gp_level_table326_1_buf331.extract<96, 127>();
  hw_uint<32> gp_level_table326_1_buf331_lane_4 = gp_level_table326_1_buf331.extract<128, 159>();
  hw_uint<32> gp_level_table326_1_buf331_lane_5 = gp_level_table326_1_buf331.extract<160, 191>();
  hw_uint<32> gp_level_table326_1_buf331_lane_6 = gp_level_table326_1_buf331.extract<192, 223>();
  hw_uint<32> gp_level_table326_1_buf331_lane_7 = gp_level_table326_1_buf331.extract<224, 255>();
  hw_uint<32> gp_level_table326_1_buf331_lane_8 = gp_level_table326_1_buf331.extract<256, 287>();

	
  auto res_init344 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table326_1_buf331_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_0_pack, gp_level_table326_1_buf331_lane_0);
  hw_uint<32 > res_init344_pack;
  set_at<0, 32, 32>(res_init344_pack, res_init344);
  auto res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_1778 = llf_add_float_32(gp_level_table326_1_buf331_lane_0_pack, res_init344_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_1_pack, gp_level_table326_1_buf331_lane_1);
  hw_uint<32 > res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_1778_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_1778_pack, res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_1778);
  auto res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_1776 = llf_add_float_32(gp_level_table326_1_buf331_lane_1_pack, res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_1778_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_2_pack, gp_level_table326_1_buf331_lane_2);
  hw_uint<32 > res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_1776_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_1776_pack, res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_1776);
  auto res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_1774 = llf_add_float_32(gp_level_table326_1_buf331_lane_2_pack, res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_1776_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_3_pack, gp_level_table326_1_buf331_lane_3);
  hw_uint<32 > res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_1774_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_1774_pack, res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_1774);
  auto res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_0772 = llf_add_float_32(gp_level_table326_1_buf331_lane_3_pack, res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_1774_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_4_pack, gp_level_table326_1_buf331_lane_4);
  hw_uint<32 > res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_0772_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_0772_pack, res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_0772);
  auto res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_0770 = llf_add_float_32(gp_level_table326_1_buf331_lane_4_pack, res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342_0772_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_5_pack, gp_level_table326_1_buf331_lane_5);
  hw_uint<32 > res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_0770_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_0770_pack, res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_0770);
  auto res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_0768 = llf_add_float_32(gp_level_table326_1_buf331_lane_5_pack, res_update345_gp_level_table326_2343_0632_gp_level_table326_2342_0770_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_6_pack, gp_level_table326_1_buf331_lane_6);
  hw_uint<32 > res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_0768_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_0768_pack, res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_0768);
  auto res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342__m_1766 = llf_add_float_32(gp_level_table326_1_buf331_lane_6_pack, res_update345_gp_level_table326_2343_1634_gp_level_table326_2342_0768_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_7_pack, gp_level_table326_1_buf331_lane_7);
  hw_uint<32 > res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342__m_1766_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342__m_1766_pack, res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342__m_1766);
  auto res_update345_gp_level_table326_2343_0632_gp_level_table326_2342__m_1764 = llf_add_float_32(gp_level_table326_1_buf331_lane_7_pack, res_update345_gp_level_table326_2343__m_1630_gp_level_table326_2342__m_1766_pack);

  hw_uint<32 > gp_level_table326_1_buf331_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table326_1_buf331_lane_8_pack, gp_level_table326_1_buf331_lane_8);
  hw_uint<32 > res_update345_gp_level_table326_2343_0632_gp_level_table326_2342__m_1764_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343_0632_gp_level_table326_2342__m_1764_pack, res_update345_gp_level_table326_2343_0632_gp_level_table326_2342__m_1764);
  auto res_update345_gp_level_table326_2343_1634_gp_level_table326_2342__m_1762 = llf_add_float_32(gp_level_table326_1_buf331_lane_8_pack, res_update345_gp_level_table326_2343_0632_gp_level_table326_2342__m_1764_pack);

  hw_uint<32 > res_update345_gp_level_table326_2343_1634_gp_level_table326_2342__m_1762_pack;
  set_at<0, 32, 32>(res_update345_gp_level_table326_2343_1634_gp_level_table326_2342__m_1762_pack, res_update345_gp_level_table326_2343_1634_gp_level_table326_2342__m_1762);
  auto res_avg346 = avg_9_float(res_update345_gp_level_table326_2343_1634_gp_level_table326_2342__m_1762_pack);
  hw_uint<32 > return_value1186;
  set_at<0, 32, 32>(return_value1186, res_avg346);
  return return_value1186;

}

hw_uint<32> gp_level_table167_1174_cu1188(hw_uint<32*9>& level_table167) {
  hw_uint<32> level_table167_lane_0 = level_table167.extract<0, 31>();
  hw_uint<32> level_table167_lane_1 = level_table167.extract<32, 63>();
  hw_uint<32> level_table167_lane_2 = level_table167.extract<64, 95>();
  hw_uint<32> level_table167_lane_3 = level_table167.extract<96, 127>();
  hw_uint<32> level_table167_lane_4 = level_table167.extract<128, 159>();
  hw_uint<32> level_table167_lane_5 = level_table167.extract<160, 191>();
  hw_uint<32> level_table167_lane_6 = level_table167.extract<192, 223>();
  hw_uint<32> level_table167_lane_7 = level_table167.extract<224, 255>();
  hw_uint<32> level_table167_lane_8 = level_table167.extract<256, 287>();

	
  auto res_init177 = llf_set_zero_float_32();

  hw_uint<32 > res_init177_pack;
  set_at<0, 32, 32>(res_init177_pack, res_init177);
  hw_uint<32 > level_table167_lane_0_pack;
  set_at<0, 32, 32>(level_table167_lane_0_pack, level_table167_lane_0);
  auto res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_1940 = llf_add_float_32(res_init177_pack, level_table167_lane_0_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_1940_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_1940_pack, res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_1940);
  hw_uint<32 > level_table167_lane_1_pack;
  set_at<0, 32, 32>(level_table167_lane_1_pack, level_table167_lane_1);
  auto res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_1938 = llf_add_float_32(res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_1940_pack, level_table167_lane_1_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_1938_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_1938_pack, res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_1938);
  hw_uint<32 > level_table167_lane_2_pack;
  set_at<0, 32, 32>(level_table167_lane_2_pack, level_table167_lane_2);
  auto res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_1936 = llf_add_float_32(res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_1938_pack, level_table167_lane_2_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_1936_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_1936_pack, res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_1936);
  hw_uint<32 > level_table167_lane_3_pack;
  set_at<0, 32, 32>(level_table167_lane_3_pack, level_table167_lane_3);
  auto res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_0934 = llf_add_float_32(res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_1936_pack, level_table167_lane_3_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_0934_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_0934_pack, res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_0934);
  hw_uint<32 > level_table167_lane_4_pack;
  set_at<0, 32, 32>(level_table167_lane_4_pack, level_table167_lane_4);
  auto res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_0932 = llf_add_float_32(res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175_0934_pack, level_table167_lane_4_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_0932_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_0932_pack, res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_0932);
  hw_uint<32 > level_table167_lane_5_pack;
  set_at<0, 32, 32>(level_table167_lane_5_pack, level_table167_lane_5);
  auto res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_0930 = llf_add_float_32(res_update178_gp_level_table167_1176_0590_gp_level_table167_1175_0932_pack, level_table167_lane_5_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_0930_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_0930_pack, res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_0930);
  hw_uint<32 > level_table167_lane_6_pack;
  set_at<0, 32, 32>(level_table167_lane_6_pack, level_table167_lane_6);
  auto res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175__m_1928 = llf_add_float_32(res_update178_gp_level_table167_1176_1592_gp_level_table167_1175_0930_pack, level_table167_lane_6_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175__m_1928_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175__m_1928_pack, res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175__m_1928);
  hw_uint<32 > level_table167_lane_7_pack;
  set_at<0, 32, 32>(level_table167_lane_7_pack, level_table167_lane_7);
  auto res_update178_gp_level_table167_1176_0590_gp_level_table167_1175__m_1926 = llf_add_float_32(res_update178_gp_level_table167_1176__m_1588_gp_level_table167_1175__m_1928_pack, level_table167_lane_7_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176_0590_gp_level_table167_1175__m_1926_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176_0590_gp_level_table167_1175__m_1926_pack, res_update178_gp_level_table167_1176_0590_gp_level_table167_1175__m_1926);
  hw_uint<32 > level_table167_lane_8_pack;
  set_at<0, 32, 32>(level_table167_lane_8_pack, level_table167_lane_8);
  auto res_update178_gp_level_table167_1176_1592_gp_level_table167_1175__m_1924 = llf_add_float_32(res_update178_gp_level_table167_1176_0590_gp_level_table167_1175__m_1926_pack, level_table167_lane_8_pack);

  hw_uint<32 > res_update178_gp_level_table167_1176_1592_gp_level_table167_1175__m_1924_pack;
  set_at<0, 32, 32>(res_update178_gp_level_table167_1176_1592_gp_level_table167_1175__m_1924_pack, res_update178_gp_level_table167_1176_1592_gp_level_table167_1175__m_1924);
  auto res_avg179 = avg_9_float(res_update178_gp_level_table167_1176_1592_gp_level_table167_1175__m_1924_pack);
  hw_uint<32 > return_value1189;
  set_at<0, 32, 32>(return_value1189, res_avg179);
  return return_value1189;

}

hw_uint<32> gp_level_table167_2182_cu1191(hw_uint<32*9>& gp_level_table167_1_buf172) {
  hw_uint<32> gp_level_table167_1_buf172_lane_0 = gp_level_table167_1_buf172.extract<0, 31>();
  hw_uint<32> gp_level_table167_1_buf172_lane_1 = gp_level_table167_1_buf172.extract<32, 63>();
  hw_uint<32> gp_level_table167_1_buf172_lane_2 = gp_level_table167_1_buf172.extract<64, 95>();
  hw_uint<32> gp_level_table167_1_buf172_lane_3 = gp_level_table167_1_buf172.extract<96, 127>();
  hw_uint<32> gp_level_table167_1_buf172_lane_4 = gp_level_table167_1_buf172.extract<128, 159>();
  hw_uint<32> gp_level_table167_1_buf172_lane_5 = gp_level_table167_1_buf172.extract<160, 191>();
  hw_uint<32> gp_level_table167_1_buf172_lane_6 = gp_level_table167_1_buf172.extract<192, 223>();
  hw_uint<32> gp_level_table167_1_buf172_lane_7 = gp_level_table167_1_buf172.extract<224, 255>();
  hw_uint<32> gp_level_table167_1_buf172_lane_8 = gp_level_table167_1_buf172.extract<256, 287>();

	
  auto res_init185 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table167_1_buf172_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_0_pack, gp_level_table167_1_buf172_lane_0);
  hw_uint<32 > res_init185_pack;
  set_at<0, 32, 32>(res_init185_pack, res_init185);
  auto res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_1904 = llf_add_float_32(gp_level_table167_1_buf172_lane_0_pack, res_init185_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_1_pack, gp_level_table167_1_buf172_lane_1);
  hw_uint<32 > res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_1904_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_1904_pack, res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_1904);
  auto res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_1902 = llf_add_float_32(gp_level_table167_1_buf172_lane_1_pack, res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_1904_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_2_pack, gp_level_table167_1_buf172_lane_2);
  hw_uint<32 > res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_1902_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_1902_pack, res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_1902);
  auto res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_1900 = llf_add_float_32(gp_level_table167_1_buf172_lane_2_pack, res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_1902_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_3_pack, gp_level_table167_1_buf172_lane_3);
  hw_uint<32 > res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_1900_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_1900_pack, res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_1900);
  auto res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_0898 = llf_add_float_32(gp_level_table167_1_buf172_lane_3_pack, res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_1900_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_4_pack, gp_level_table167_1_buf172_lane_4);
  hw_uint<32 > res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_0898_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_0898_pack, res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_0898);
  auto res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_0896 = llf_add_float_32(gp_level_table167_1_buf172_lane_4_pack, res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183_0898_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_5_pack, gp_level_table167_1_buf172_lane_5);
  hw_uint<32 > res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_0896_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_0896_pack, res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_0896);
  auto res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_0894 = llf_add_float_32(gp_level_table167_1_buf172_lane_5_pack, res_update186_gp_level_table167_2184_0602_gp_level_table167_2183_0896_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_6_pack, gp_level_table167_1_buf172_lane_6);
  hw_uint<32 > res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_0894_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_0894_pack, res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_0894);
  auto res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183__m_1892 = llf_add_float_32(gp_level_table167_1_buf172_lane_6_pack, res_update186_gp_level_table167_2184_1604_gp_level_table167_2183_0894_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_7_pack, gp_level_table167_1_buf172_lane_7);
  hw_uint<32 > res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183__m_1892_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183__m_1892_pack, res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183__m_1892);
  auto res_update186_gp_level_table167_2184_0602_gp_level_table167_2183__m_1890 = llf_add_float_32(gp_level_table167_1_buf172_lane_7_pack, res_update186_gp_level_table167_2184__m_1600_gp_level_table167_2183__m_1892_pack);

  hw_uint<32 > gp_level_table167_1_buf172_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table167_1_buf172_lane_8_pack, gp_level_table167_1_buf172_lane_8);
  hw_uint<32 > res_update186_gp_level_table167_2184_0602_gp_level_table167_2183__m_1890_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184_0602_gp_level_table167_2183__m_1890_pack, res_update186_gp_level_table167_2184_0602_gp_level_table167_2183__m_1890);
  auto res_update186_gp_level_table167_2184_1604_gp_level_table167_2183__m_1888 = llf_add_float_32(gp_level_table167_1_buf172_lane_8_pack, res_update186_gp_level_table167_2184_0602_gp_level_table167_2183__m_1890_pack);

  hw_uint<32 > res_update186_gp_level_table167_2184_1604_gp_level_table167_2183__m_1888_pack;
  set_at<0, 32, 32>(res_update186_gp_level_table167_2184_1604_gp_level_table167_2183__m_1888_pack, res_update186_gp_level_table167_2184_1604_gp_level_table167_2183__m_1888);
  auto res_avg187 = avg_9_float(res_update186_gp_level_table167_2184_1604_gp_level_table167_2183__m_1888_pack);
  hw_uint<32 > return_value1192;
  set_at<0, 32, 32>(return_value1192, res_avg187);
  return return_value1192;

}

hw_uint<32> gp_level_table167_3190_cu1194(hw_uint<32*9>& gp_level_table167_2_buf180) {
  hw_uint<32> gp_level_table167_2_buf180_lane_0 = gp_level_table167_2_buf180.extract<0, 31>();
  hw_uint<32> gp_level_table167_2_buf180_lane_1 = gp_level_table167_2_buf180.extract<32, 63>();
  hw_uint<32> gp_level_table167_2_buf180_lane_2 = gp_level_table167_2_buf180.extract<64, 95>();
  hw_uint<32> gp_level_table167_2_buf180_lane_3 = gp_level_table167_2_buf180.extract<96, 127>();
  hw_uint<32> gp_level_table167_2_buf180_lane_4 = gp_level_table167_2_buf180.extract<128, 159>();
  hw_uint<32> gp_level_table167_2_buf180_lane_5 = gp_level_table167_2_buf180.extract<160, 191>();
  hw_uint<32> gp_level_table167_2_buf180_lane_6 = gp_level_table167_2_buf180.extract<192, 223>();
  hw_uint<32> gp_level_table167_2_buf180_lane_7 = gp_level_table167_2_buf180.extract<224, 255>();
  hw_uint<32> gp_level_table167_2_buf180_lane_8 = gp_level_table167_2_buf180.extract<256, 287>();

	
  auto res_init193 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table167_2_buf180_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_0_pack, gp_level_table167_2_buf180_lane_0);
  hw_uint<32 > res_init193_pack;
  set_at<0, 32, 32>(res_init193_pack, res_init193);
  auto res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_1868 = llf_add_float_32(gp_level_table167_2_buf180_lane_0_pack, res_init193_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_1_pack, gp_level_table167_2_buf180_lane_1);
  hw_uint<32 > res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_1868_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_1868_pack, res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_1868);
  auto res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_1866 = llf_add_float_32(gp_level_table167_2_buf180_lane_1_pack, res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_1868_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_2_pack, gp_level_table167_2_buf180_lane_2);
  hw_uint<32 > res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_1866_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_1866_pack, res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_1866);
  auto res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_1864 = llf_add_float_32(gp_level_table167_2_buf180_lane_2_pack, res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_1866_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_3_pack, gp_level_table167_2_buf180_lane_3);
  hw_uint<32 > res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_1864_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_1864_pack, res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_1864);
  auto res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_0862 = llf_add_float_32(gp_level_table167_2_buf180_lane_3_pack, res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_1864_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_4_pack, gp_level_table167_2_buf180_lane_4);
  hw_uint<32 > res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_0862_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_0862_pack, res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_0862);
  auto res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_0860 = llf_add_float_32(gp_level_table167_2_buf180_lane_4_pack, res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191_0862_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_5_pack, gp_level_table167_2_buf180_lane_5);
  hw_uint<32 > res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_0860_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_0860_pack, res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_0860);
  auto res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_0858 = llf_add_float_32(gp_level_table167_2_buf180_lane_5_pack, res_update194_gp_level_table167_3192_0614_gp_level_table167_3191_0860_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_6_pack, gp_level_table167_2_buf180_lane_6);
  hw_uint<32 > res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_0858_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_0858_pack, res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_0858);
  auto res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191__m_1856 = llf_add_float_32(gp_level_table167_2_buf180_lane_6_pack, res_update194_gp_level_table167_3192_1616_gp_level_table167_3191_0858_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_7_pack, gp_level_table167_2_buf180_lane_7);
  hw_uint<32 > res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191__m_1856_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191__m_1856_pack, res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191__m_1856);
  auto res_update194_gp_level_table167_3192_0614_gp_level_table167_3191__m_1854 = llf_add_float_32(gp_level_table167_2_buf180_lane_7_pack, res_update194_gp_level_table167_3192__m_1612_gp_level_table167_3191__m_1856_pack);

  hw_uint<32 > gp_level_table167_2_buf180_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table167_2_buf180_lane_8_pack, gp_level_table167_2_buf180_lane_8);
  hw_uint<32 > res_update194_gp_level_table167_3192_0614_gp_level_table167_3191__m_1854_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192_0614_gp_level_table167_3191__m_1854_pack, res_update194_gp_level_table167_3192_0614_gp_level_table167_3191__m_1854);
  auto res_update194_gp_level_table167_3192_1616_gp_level_table167_3191__m_1852 = llf_add_float_32(gp_level_table167_2_buf180_lane_8_pack, res_update194_gp_level_table167_3192_0614_gp_level_table167_3191__m_1854_pack);

  hw_uint<32 > res_update194_gp_level_table167_3192_1616_gp_level_table167_3191__m_1852_pack;
  set_at<0, 32, 32>(res_update194_gp_level_table167_3192_1616_gp_level_table167_3191__m_1852_pack, res_update194_gp_level_table167_3192_1616_gp_level_table167_3191__m_1852);
  auto res_avg195 = avg_9_float(res_update194_gp_level_table167_3192_1616_gp_level_table167_3191__m_1852_pack);
  hw_uint<32 > return_value1195;
  set_at<0, 32, 32>(return_value1195, res_avg195);
  return return_value1195;

}

hw_uint<32> gp_level_table220_1227_cu1197(hw_uint<32*9>& level_table220) {
  hw_uint<32> level_table220_lane_0 = level_table220.extract<0, 31>();
  hw_uint<32> level_table220_lane_1 = level_table220.extract<32, 63>();
  hw_uint<32> level_table220_lane_2 = level_table220.extract<64, 95>();
  hw_uint<32> level_table220_lane_3 = level_table220.extract<96, 127>();
  hw_uint<32> level_table220_lane_4 = level_table220.extract<128, 159>();
  hw_uint<32> level_table220_lane_5 = level_table220.extract<160, 191>();
  hw_uint<32> level_table220_lane_6 = level_table220.extract<192, 223>();
  hw_uint<32> level_table220_lane_7 = level_table220.extract<224, 255>();
  hw_uint<32> level_table220_lane_8 = level_table220.extract<256, 287>();

	
  auto res_init230 = llf_set_zero_float_32();

  hw_uint<32 > res_init230_pack;
  set_at<0, 32, 32>(res_init230_pack, res_init230);
  hw_uint<32 > level_table220_lane_0_pack;
  set_at<0, 32, 32>(level_table220_lane_0_pack, level_table220_lane_0);
  auto res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_1832 = llf_add_float_32(res_init230_pack, level_table220_lane_0_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_1832_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_1832_pack, res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_1832);
  hw_uint<32 > level_table220_lane_1_pack;
  set_at<0, 32, 32>(level_table220_lane_1_pack, level_table220_lane_1);
  auto res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_1830 = llf_add_float_32(res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_1832_pack, level_table220_lane_1_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_1830_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_1830_pack, res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_1830);
  hw_uint<32 > level_table220_lane_2_pack;
  set_at<0, 32, 32>(level_table220_lane_2_pack, level_table220_lane_2);
  auto res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_1828 = llf_add_float_32(res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_1830_pack, level_table220_lane_2_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_1828_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_1828_pack, res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_1828);
  hw_uint<32 > level_table220_lane_3_pack;
  set_at<0, 32, 32>(level_table220_lane_3_pack, level_table220_lane_3);
  auto res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_0826 = llf_add_float_32(res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_1828_pack, level_table220_lane_3_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_0826_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_0826_pack, res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_0826);
  hw_uint<32 > level_table220_lane_4_pack;
  set_at<0, 32, 32>(level_table220_lane_4_pack, level_table220_lane_4);
  auto res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_0824 = llf_add_float_32(res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228_0826_pack, level_table220_lane_4_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_0824_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_0824_pack, res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_0824);
  hw_uint<32 > level_table220_lane_5_pack;
  set_at<0, 32, 32>(level_table220_lane_5_pack, level_table220_lane_5);
  auto res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_0822 = llf_add_float_32(res_update231_gp_level_table220_1229_0626_gp_level_table220_1228_0824_pack, level_table220_lane_5_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_0822_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_0822_pack, res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_0822);
  hw_uint<32 > level_table220_lane_6_pack;
  set_at<0, 32, 32>(level_table220_lane_6_pack, level_table220_lane_6);
  auto res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228__m_1820 = llf_add_float_32(res_update231_gp_level_table220_1229_1628_gp_level_table220_1228_0822_pack, level_table220_lane_6_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228__m_1820_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228__m_1820_pack, res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228__m_1820);
  hw_uint<32 > level_table220_lane_7_pack;
  set_at<0, 32, 32>(level_table220_lane_7_pack, level_table220_lane_7);
  auto res_update231_gp_level_table220_1229_0626_gp_level_table220_1228__m_1818 = llf_add_float_32(res_update231_gp_level_table220_1229__m_1624_gp_level_table220_1228__m_1820_pack, level_table220_lane_7_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229_0626_gp_level_table220_1228__m_1818_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229_0626_gp_level_table220_1228__m_1818_pack, res_update231_gp_level_table220_1229_0626_gp_level_table220_1228__m_1818);
  hw_uint<32 > level_table220_lane_8_pack;
  set_at<0, 32, 32>(level_table220_lane_8_pack, level_table220_lane_8);
  auto res_update231_gp_level_table220_1229_1628_gp_level_table220_1228__m_1816 = llf_add_float_32(res_update231_gp_level_table220_1229_0626_gp_level_table220_1228__m_1818_pack, level_table220_lane_8_pack);

  hw_uint<32 > res_update231_gp_level_table220_1229_1628_gp_level_table220_1228__m_1816_pack;
  set_at<0, 32, 32>(res_update231_gp_level_table220_1229_1628_gp_level_table220_1228__m_1816_pack, res_update231_gp_level_table220_1229_1628_gp_level_table220_1228__m_1816);
  auto res_avg232 = avg_9_float(res_update231_gp_level_table220_1229_1628_gp_level_table220_1228__m_1816_pack);
  hw_uint<32 > return_value1198;
  set_at<0, 32, 32>(return_value1198, res_avg232);
  return return_value1198;

}

hw_uint<32> gp_level_table220_2235_cu1200(hw_uint<32*9>& gp_level_table220_1_buf225) {
  hw_uint<32> gp_level_table220_1_buf225_lane_0 = gp_level_table220_1_buf225.extract<0, 31>();
  hw_uint<32> gp_level_table220_1_buf225_lane_1 = gp_level_table220_1_buf225.extract<32, 63>();
  hw_uint<32> gp_level_table220_1_buf225_lane_2 = gp_level_table220_1_buf225.extract<64, 95>();
  hw_uint<32> gp_level_table220_1_buf225_lane_3 = gp_level_table220_1_buf225.extract<96, 127>();
  hw_uint<32> gp_level_table220_1_buf225_lane_4 = gp_level_table220_1_buf225.extract<128, 159>();
  hw_uint<32> gp_level_table220_1_buf225_lane_5 = gp_level_table220_1_buf225.extract<160, 191>();
  hw_uint<32> gp_level_table220_1_buf225_lane_6 = gp_level_table220_1_buf225.extract<192, 223>();
  hw_uint<32> gp_level_table220_1_buf225_lane_7 = gp_level_table220_1_buf225.extract<224, 255>();
  hw_uint<32> gp_level_table220_1_buf225_lane_8 = gp_level_table220_1_buf225.extract<256, 287>();

	
  auto res_init238 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table220_1_buf225_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_0_pack, gp_level_table220_1_buf225_lane_0);
  hw_uint<32 > res_init238_pack;
  set_at<0, 32, 32>(res_init238_pack, res_init238);
  auto res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_1796 = llf_add_float_32(gp_level_table220_1_buf225_lane_0_pack, res_init238_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_1_pack, gp_level_table220_1_buf225_lane_1);
  hw_uint<32 > res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_1796_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_1796_pack, res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_1796);
  auto res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_1794 = llf_add_float_32(gp_level_table220_1_buf225_lane_1_pack, res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_1796_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_2_pack, gp_level_table220_1_buf225_lane_2);
  hw_uint<32 > res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_1794_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_1794_pack, res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_1794);
  auto res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_1792 = llf_add_float_32(gp_level_table220_1_buf225_lane_2_pack, res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_1794_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_3_pack, gp_level_table220_1_buf225_lane_3);
  hw_uint<32 > res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_1792_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_1792_pack, res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_1792);
  auto res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_0790 = llf_add_float_32(gp_level_table220_1_buf225_lane_3_pack, res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_1792_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_4_pack, gp_level_table220_1_buf225_lane_4);
  hw_uint<32 > res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_0790_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_0790_pack, res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_0790);
  auto res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_0788 = llf_add_float_32(gp_level_table220_1_buf225_lane_4_pack, res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236_0790_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_5_pack, gp_level_table220_1_buf225_lane_5);
  hw_uint<32 > res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_0788_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_0788_pack, res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_0788);
  auto res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_0786 = llf_add_float_32(gp_level_table220_1_buf225_lane_5_pack, res_update239_gp_level_table220_2237_0638_gp_level_table220_2236_0788_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_6_pack, gp_level_table220_1_buf225_lane_6);
  hw_uint<32 > res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_0786_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_0786_pack, res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_0786);
  auto res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236__m_1784 = llf_add_float_32(gp_level_table220_1_buf225_lane_6_pack, res_update239_gp_level_table220_2237_1640_gp_level_table220_2236_0786_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_7_pack, gp_level_table220_1_buf225_lane_7);
  hw_uint<32 > res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236__m_1784_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236__m_1784_pack, res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236__m_1784);
  auto res_update239_gp_level_table220_2237_0638_gp_level_table220_2236__m_1782 = llf_add_float_32(gp_level_table220_1_buf225_lane_7_pack, res_update239_gp_level_table220_2237__m_1636_gp_level_table220_2236__m_1784_pack);

  hw_uint<32 > gp_level_table220_1_buf225_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table220_1_buf225_lane_8_pack, gp_level_table220_1_buf225_lane_8);
  hw_uint<32 > res_update239_gp_level_table220_2237_0638_gp_level_table220_2236__m_1782_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237_0638_gp_level_table220_2236__m_1782_pack, res_update239_gp_level_table220_2237_0638_gp_level_table220_2236__m_1782);
  auto res_update239_gp_level_table220_2237_1640_gp_level_table220_2236__m_1780 = llf_add_float_32(gp_level_table220_1_buf225_lane_8_pack, res_update239_gp_level_table220_2237_0638_gp_level_table220_2236__m_1782_pack);

  hw_uint<32 > res_update239_gp_level_table220_2237_1640_gp_level_table220_2236__m_1780_pack;
  set_at<0, 32, 32>(res_update239_gp_level_table220_2237_1640_gp_level_table220_2236__m_1780_pack, res_update239_gp_level_table220_2237_1640_gp_level_table220_2236__m_1780);
  auto res_avg240 = avg_9_float(res_update239_gp_level_table220_2237_1640_gp_level_table220_2236__m_1780_pack);
  hw_uint<32 > return_value1201;
  set_at<0, 32, 32>(return_value1201, res_avg240);
  return return_value1201;

}

hw_uint<32> gp_level_table220_3243_cu1203(hw_uint<32*9>& gp_level_table220_2_buf233) {
  hw_uint<32> gp_level_table220_2_buf233_lane_0 = gp_level_table220_2_buf233.extract<0, 31>();
  hw_uint<32> gp_level_table220_2_buf233_lane_1 = gp_level_table220_2_buf233.extract<32, 63>();
  hw_uint<32> gp_level_table220_2_buf233_lane_2 = gp_level_table220_2_buf233.extract<64, 95>();
  hw_uint<32> gp_level_table220_2_buf233_lane_3 = gp_level_table220_2_buf233.extract<96, 127>();
  hw_uint<32> gp_level_table220_2_buf233_lane_4 = gp_level_table220_2_buf233.extract<128, 159>();
  hw_uint<32> gp_level_table220_2_buf233_lane_5 = gp_level_table220_2_buf233.extract<160, 191>();
  hw_uint<32> gp_level_table220_2_buf233_lane_6 = gp_level_table220_2_buf233.extract<192, 223>();
  hw_uint<32> gp_level_table220_2_buf233_lane_7 = gp_level_table220_2_buf233.extract<224, 255>();
  hw_uint<32> gp_level_table220_2_buf233_lane_8 = gp_level_table220_2_buf233.extract<256, 287>();

	
  auto res_init246 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table220_2_buf233_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_0_pack, gp_level_table220_2_buf233_lane_0);
  hw_uint<32 > res_init246_pack;
  set_at<0, 32, 32>(res_init246_pack, res_init246);
  auto res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_1760 = llf_add_float_32(gp_level_table220_2_buf233_lane_0_pack, res_init246_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_1_pack, gp_level_table220_2_buf233_lane_1);
  hw_uint<32 > res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_1760_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_1760_pack, res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_1760);
  auto res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_1758 = llf_add_float_32(gp_level_table220_2_buf233_lane_1_pack, res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_1760_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_2_pack, gp_level_table220_2_buf233_lane_2);
  hw_uint<32 > res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_1758_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_1758_pack, res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_1758);
  auto res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_1756 = llf_add_float_32(gp_level_table220_2_buf233_lane_2_pack, res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_1758_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_3_pack, gp_level_table220_2_buf233_lane_3);
  hw_uint<32 > res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_1756_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_1756_pack, res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_1756);
  auto res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_0754 = llf_add_float_32(gp_level_table220_2_buf233_lane_3_pack, res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_1756_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_4_pack, gp_level_table220_2_buf233_lane_4);
  hw_uint<32 > res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_0754_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_0754_pack, res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_0754);
  auto res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_0752 = llf_add_float_32(gp_level_table220_2_buf233_lane_4_pack, res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244_0754_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_5_pack, gp_level_table220_2_buf233_lane_5);
  hw_uint<32 > res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_0752_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_0752_pack, res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_0752);
  auto res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_0750 = llf_add_float_32(gp_level_table220_2_buf233_lane_5_pack, res_update247_gp_level_table220_3245_0650_gp_level_table220_3244_0752_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_6_pack, gp_level_table220_2_buf233_lane_6);
  hw_uint<32 > res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_0750_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_0750_pack, res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_0750);
  auto res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244__m_1748 = llf_add_float_32(gp_level_table220_2_buf233_lane_6_pack, res_update247_gp_level_table220_3245_1652_gp_level_table220_3244_0750_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_7_pack, gp_level_table220_2_buf233_lane_7);
  hw_uint<32 > res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244__m_1748_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244__m_1748_pack, res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244__m_1748);
  auto res_update247_gp_level_table220_3245_0650_gp_level_table220_3244__m_1746 = llf_add_float_32(gp_level_table220_2_buf233_lane_7_pack, res_update247_gp_level_table220_3245__m_1648_gp_level_table220_3244__m_1748_pack);

  hw_uint<32 > gp_level_table220_2_buf233_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table220_2_buf233_lane_8_pack, gp_level_table220_2_buf233_lane_8);
  hw_uint<32 > res_update247_gp_level_table220_3245_0650_gp_level_table220_3244__m_1746_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245_0650_gp_level_table220_3244__m_1746_pack, res_update247_gp_level_table220_3245_0650_gp_level_table220_3244__m_1746);
  auto res_update247_gp_level_table220_3245_1652_gp_level_table220_3244__m_1744 = llf_add_float_32(gp_level_table220_2_buf233_lane_8_pack, res_update247_gp_level_table220_3245_0650_gp_level_table220_3244__m_1746_pack);

  hw_uint<32 > res_update247_gp_level_table220_3245_1652_gp_level_table220_3244__m_1744_pack;
  set_at<0, 32, 32>(res_update247_gp_level_table220_3245_1652_gp_level_table220_3244__m_1744_pack, res_update247_gp_level_table220_3245_1652_gp_level_table220_3244__m_1744);
  auto res_avg248 = avg_9_float(res_update247_gp_level_table220_3245_1652_gp_level_table220_3244__m_1744_pack);
  hw_uint<32 > return_value1204;
  set_at<0, 32, 32>(return_value1204, res_avg248);
  return return_value1204;

}

hw_uint<32> gp_level_table273_1280_cu1206(hw_uint<32*9>& level_table273) {
  hw_uint<32> level_table273_lane_0 = level_table273.extract<0, 31>();
  hw_uint<32> level_table273_lane_1 = level_table273.extract<32, 63>();
  hw_uint<32> level_table273_lane_2 = level_table273.extract<64, 95>();
  hw_uint<32> level_table273_lane_3 = level_table273.extract<96, 127>();
  hw_uint<32> level_table273_lane_4 = level_table273.extract<128, 159>();
  hw_uint<32> level_table273_lane_5 = level_table273.extract<160, 191>();
  hw_uint<32> level_table273_lane_6 = level_table273.extract<192, 223>();
  hw_uint<32> level_table273_lane_7 = level_table273.extract<224, 255>();
  hw_uint<32> level_table273_lane_8 = level_table273.extract<256, 287>();

	
  auto res_init283 = llf_set_zero_float_32();

  hw_uint<32 > res_init283_pack;
  set_at<0, 32, 32>(res_init283_pack, res_init283);
  hw_uint<32 > level_table273_lane_0_pack;
  set_at<0, 32, 32>(level_table273_lane_0_pack, level_table273_lane_0);
  auto res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_1724 = llf_add_float_32(res_init283_pack, level_table273_lane_0_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_1724_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_1724_pack, res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_1724);
  hw_uint<32 > level_table273_lane_1_pack;
  set_at<0, 32, 32>(level_table273_lane_1_pack, level_table273_lane_1);
  auto res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_1722 = llf_add_float_32(res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_1724_pack, level_table273_lane_1_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_1722_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_1722_pack, res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_1722);
  hw_uint<32 > level_table273_lane_2_pack;
  set_at<0, 32, 32>(level_table273_lane_2_pack, level_table273_lane_2);
  auto res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_1720 = llf_add_float_32(res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_1722_pack, level_table273_lane_2_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_1720_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_1720_pack, res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_1720);
  hw_uint<32 > level_table273_lane_3_pack;
  set_at<0, 32, 32>(level_table273_lane_3_pack, level_table273_lane_3);
  auto res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_0718 = llf_add_float_32(res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_1720_pack, level_table273_lane_3_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_0718_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_0718_pack, res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_0718);
  hw_uint<32 > level_table273_lane_4_pack;
  set_at<0, 32, 32>(level_table273_lane_4_pack, level_table273_lane_4);
  auto res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_0716 = llf_add_float_32(res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281_0718_pack, level_table273_lane_4_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_0716_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_0716_pack, res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_0716);
  hw_uint<32 > level_table273_lane_5_pack;
  set_at<0, 32, 32>(level_table273_lane_5_pack, level_table273_lane_5);
  auto res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_0714 = llf_add_float_32(res_update284_gp_level_table273_1282_0662_gp_level_table273_1281_0716_pack, level_table273_lane_5_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_0714_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_0714_pack, res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_0714);
  hw_uint<32 > level_table273_lane_6_pack;
  set_at<0, 32, 32>(level_table273_lane_6_pack, level_table273_lane_6);
  auto res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281__m_1712 = llf_add_float_32(res_update284_gp_level_table273_1282_1664_gp_level_table273_1281_0714_pack, level_table273_lane_6_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281__m_1712_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281__m_1712_pack, res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281__m_1712);
  hw_uint<32 > level_table273_lane_7_pack;
  set_at<0, 32, 32>(level_table273_lane_7_pack, level_table273_lane_7);
  auto res_update284_gp_level_table273_1282_0662_gp_level_table273_1281__m_1710 = llf_add_float_32(res_update284_gp_level_table273_1282__m_1660_gp_level_table273_1281__m_1712_pack, level_table273_lane_7_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282_0662_gp_level_table273_1281__m_1710_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282_0662_gp_level_table273_1281__m_1710_pack, res_update284_gp_level_table273_1282_0662_gp_level_table273_1281__m_1710);
  hw_uint<32 > level_table273_lane_8_pack;
  set_at<0, 32, 32>(level_table273_lane_8_pack, level_table273_lane_8);
  auto res_update284_gp_level_table273_1282_1664_gp_level_table273_1281__m_1708 = llf_add_float_32(res_update284_gp_level_table273_1282_0662_gp_level_table273_1281__m_1710_pack, level_table273_lane_8_pack);

  hw_uint<32 > res_update284_gp_level_table273_1282_1664_gp_level_table273_1281__m_1708_pack;
  set_at<0, 32, 32>(res_update284_gp_level_table273_1282_1664_gp_level_table273_1281__m_1708_pack, res_update284_gp_level_table273_1282_1664_gp_level_table273_1281__m_1708);
  auto res_avg285 = avg_9_float(res_update284_gp_level_table273_1282_1664_gp_level_table273_1281__m_1708_pack);
  hw_uint<32 > return_value1207;
  set_at<0, 32, 32>(return_value1207, res_avg285);
  return return_value1207;

}

hw_uint<32> gp_level_table273_2288_cu1209(hw_uint<32*9>& gp_level_table273_1_buf278) {
  hw_uint<32> gp_level_table273_1_buf278_lane_0 = gp_level_table273_1_buf278.extract<0, 31>();
  hw_uint<32> gp_level_table273_1_buf278_lane_1 = gp_level_table273_1_buf278.extract<32, 63>();
  hw_uint<32> gp_level_table273_1_buf278_lane_2 = gp_level_table273_1_buf278.extract<64, 95>();
  hw_uint<32> gp_level_table273_1_buf278_lane_3 = gp_level_table273_1_buf278.extract<96, 127>();
  hw_uint<32> gp_level_table273_1_buf278_lane_4 = gp_level_table273_1_buf278.extract<128, 159>();
  hw_uint<32> gp_level_table273_1_buf278_lane_5 = gp_level_table273_1_buf278.extract<160, 191>();
  hw_uint<32> gp_level_table273_1_buf278_lane_6 = gp_level_table273_1_buf278.extract<192, 223>();
  hw_uint<32> gp_level_table273_1_buf278_lane_7 = gp_level_table273_1_buf278.extract<224, 255>();
  hw_uint<32> gp_level_table273_1_buf278_lane_8 = gp_level_table273_1_buf278.extract<256, 287>();

	
  auto res_init291 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table273_1_buf278_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_0_pack, gp_level_table273_1_buf278_lane_0);
  hw_uint<32 > res_init291_pack;
  set_at<0, 32, 32>(res_init291_pack, res_init291);
  auto res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_1688 = llf_add_float_32(gp_level_table273_1_buf278_lane_0_pack, res_init291_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_1_pack, gp_level_table273_1_buf278_lane_1);
  hw_uint<32 > res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_1688_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_1688_pack, res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_1688);
  auto res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_1686 = llf_add_float_32(gp_level_table273_1_buf278_lane_1_pack, res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_1688_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_2_pack, gp_level_table273_1_buf278_lane_2);
  hw_uint<32 > res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_1686_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_1686_pack, res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_1686);
  auto res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_1684 = llf_add_float_32(gp_level_table273_1_buf278_lane_2_pack, res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_1686_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_3_pack, gp_level_table273_1_buf278_lane_3);
  hw_uint<32 > res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_1684_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_1684_pack, res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_1684);
  auto res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_0682 = llf_add_float_32(gp_level_table273_1_buf278_lane_3_pack, res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_1684_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_4_pack, gp_level_table273_1_buf278_lane_4);
  hw_uint<32 > res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_0682_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_0682_pack, res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_0682);
  auto res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_0680 = llf_add_float_32(gp_level_table273_1_buf278_lane_4_pack, res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289_0682_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_5_pack, gp_level_table273_1_buf278_lane_5);
  hw_uint<32 > res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_0680_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_0680_pack, res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_0680);
  auto res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_0678 = llf_add_float_32(gp_level_table273_1_buf278_lane_5_pack, res_update292_gp_level_table273_2290_0512_gp_level_table273_2289_0680_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_6_pack, gp_level_table273_1_buf278_lane_6);
  hw_uint<32 > res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_0678_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_0678_pack, res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_0678);
  auto res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289__m_1676 = llf_add_float_32(gp_level_table273_1_buf278_lane_6_pack, res_update292_gp_level_table273_2290_1514_gp_level_table273_2289_0678_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_7_pack, gp_level_table273_1_buf278_lane_7);
  hw_uint<32 > res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289__m_1676_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289__m_1676_pack, res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289__m_1676);
  auto res_update292_gp_level_table273_2290_0512_gp_level_table273_2289__m_1674 = llf_add_float_32(gp_level_table273_1_buf278_lane_7_pack, res_update292_gp_level_table273_2290__m_1510_gp_level_table273_2289__m_1676_pack);

  hw_uint<32 > gp_level_table273_1_buf278_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table273_1_buf278_lane_8_pack, gp_level_table273_1_buf278_lane_8);
  hw_uint<32 > res_update292_gp_level_table273_2290_0512_gp_level_table273_2289__m_1674_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290_0512_gp_level_table273_2289__m_1674_pack, res_update292_gp_level_table273_2290_0512_gp_level_table273_2289__m_1674);
  auto res_update292_gp_level_table273_2290_1514_gp_level_table273_2289__m_1672 = llf_add_float_32(gp_level_table273_1_buf278_lane_8_pack, res_update292_gp_level_table273_2290_0512_gp_level_table273_2289__m_1674_pack);

  hw_uint<32 > res_update292_gp_level_table273_2290_1514_gp_level_table273_2289__m_1672_pack;
  set_at<0, 32, 32>(res_update292_gp_level_table273_2290_1514_gp_level_table273_2289__m_1672_pack, res_update292_gp_level_table273_2290_1514_gp_level_table273_2289__m_1672);
  auto res_avg293 = avg_9_float(res_update292_gp_level_table273_2290_1514_gp_level_table273_2289__m_1672_pack);
  hw_uint<32 > return_value1210;
  set_at<0, 32, 32>(return_value1210, res_avg293);
  return return_value1210;

}

hw_uint<32> gp_level_table273_3296_cu1212(hw_uint<32*9>& gp_level_table273_2_buf286) {
  hw_uint<32> gp_level_table273_2_buf286_lane_0 = gp_level_table273_2_buf286.extract<0, 31>();
  hw_uint<32> gp_level_table273_2_buf286_lane_1 = gp_level_table273_2_buf286.extract<32, 63>();
  hw_uint<32> gp_level_table273_2_buf286_lane_2 = gp_level_table273_2_buf286.extract<64, 95>();
  hw_uint<32> gp_level_table273_2_buf286_lane_3 = gp_level_table273_2_buf286.extract<96, 127>();
  hw_uint<32> gp_level_table273_2_buf286_lane_4 = gp_level_table273_2_buf286.extract<128, 159>();
  hw_uint<32> gp_level_table273_2_buf286_lane_5 = gp_level_table273_2_buf286.extract<160, 191>();
  hw_uint<32> gp_level_table273_2_buf286_lane_6 = gp_level_table273_2_buf286.extract<192, 223>();
  hw_uint<32> gp_level_table273_2_buf286_lane_7 = gp_level_table273_2_buf286.extract<224, 255>();
  hw_uint<32> gp_level_table273_2_buf286_lane_8 = gp_level_table273_2_buf286.extract<256, 287>();

	
  auto res_init299 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table273_2_buf286_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_0_pack, gp_level_table273_2_buf286_lane_0);
  hw_uint<32 > res_init299_pack;
  set_at<0, 32, 32>(res_init299_pack, res_init299);
  auto res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_1706 = llf_add_float_32(gp_level_table273_2_buf286_lane_0_pack, res_init299_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_1_pack, gp_level_table273_2_buf286_lane_1);
  hw_uint<32 > res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_1706_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_1706_pack, res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_1706);
  auto res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_1704 = llf_add_float_32(gp_level_table273_2_buf286_lane_1_pack, res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_1706_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_2_pack, gp_level_table273_2_buf286_lane_2);
  hw_uint<32 > res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_1704_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_1704_pack, res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_1704);
  auto res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_1702 = llf_add_float_32(gp_level_table273_2_buf286_lane_2_pack, res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_1704_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_3_pack, gp_level_table273_2_buf286_lane_3);
  hw_uint<32 > res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_1702_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_1702_pack, res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_1702);
  auto res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_0700 = llf_add_float_32(gp_level_table273_2_buf286_lane_3_pack, res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_1702_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_4_pack, gp_level_table273_2_buf286_lane_4);
  hw_uint<32 > res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_0700_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_0700_pack, res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_0700);
  auto res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_0698 = llf_add_float_32(gp_level_table273_2_buf286_lane_4_pack, res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297_0700_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_5_pack, gp_level_table273_2_buf286_lane_5);
  hw_uint<32 > res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_0698_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_0698_pack, res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_0698);
  auto res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_0696 = llf_add_float_32(gp_level_table273_2_buf286_lane_5_pack, res_update300_gp_level_table273_3298_0656_gp_level_table273_3297_0698_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_6_pack, gp_level_table273_2_buf286_lane_6);
  hw_uint<32 > res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_0696_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_0696_pack, res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_0696);
  auto res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297__m_1694 = llf_add_float_32(gp_level_table273_2_buf286_lane_6_pack, res_update300_gp_level_table273_3298_1658_gp_level_table273_3297_0696_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_7_pack, gp_level_table273_2_buf286_lane_7);
  hw_uint<32 > res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297__m_1694_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297__m_1694_pack, res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297__m_1694);
  auto res_update300_gp_level_table273_3298_0656_gp_level_table273_3297__m_1692 = llf_add_float_32(gp_level_table273_2_buf286_lane_7_pack, res_update300_gp_level_table273_3298__m_1654_gp_level_table273_3297__m_1694_pack);

  hw_uint<32 > gp_level_table273_2_buf286_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table273_2_buf286_lane_8_pack, gp_level_table273_2_buf286_lane_8);
  hw_uint<32 > res_update300_gp_level_table273_3298_0656_gp_level_table273_3297__m_1692_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298_0656_gp_level_table273_3297__m_1692_pack, res_update300_gp_level_table273_3298_0656_gp_level_table273_3297__m_1692);
  auto res_update300_gp_level_table273_3298_1658_gp_level_table273_3297__m_1690 = llf_add_float_32(gp_level_table273_2_buf286_lane_8_pack, res_update300_gp_level_table273_3298_0656_gp_level_table273_3297__m_1692_pack);

  hw_uint<32 > res_update300_gp_level_table273_3298_1658_gp_level_table273_3297__m_1690_pack;
  set_at<0, 32, 32>(res_update300_gp_level_table273_3298_1658_gp_level_table273_3297__m_1690_pack, res_update300_gp_level_table273_3298_1658_gp_level_table273_3297__m_1690);
  auto res_avg301 = avg_9_float(res_update300_gp_level_table273_3298_1658_gp_level_table273_3297__m_1690_pack);
  hw_uint<32 > return_value1213;
  set_at<0, 32, 32>(return_value1213, res_avg301);
  return return_value1213;

}

hw_uint<32> gp_level_table326_1333_cu1215(hw_uint<32*9>& level_table326) {
  hw_uint<32> level_table326_lane_0 = level_table326.extract<0, 31>();
  hw_uint<32> level_table326_lane_1 = level_table326.extract<32, 63>();
  hw_uint<32> level_table326_lane_2 = level_table326.extract<64, 95>();
  hw_uint<32> level_table326_lane_3 = level_table326.extract<96, 127>();
  hw_uint<32> level_table326_lane_4 = level_table326.extract<128, 159>();
  hw_uint<32> level_table326_lane_5 = level_table326.extract<160, 191>();
  hw_uint<32> level_table326_lane_6 = level_table326.extract<192, 223>();
  hw_uint<32> level_table326_lane_7 = level_table326.extract<224, 255>();
  hw_uint<32> level_table326_lane_8 = level_table326.extract<256, 287>();

	
  auto res_init336 = llf_set_zero_float_32();

  hw_uint<32 > res_init336_pack;
  set_at<0, 32, 32>(res_init336_pack, res_init336);
  hw_uint<32 > level_table326_lane_0_pack;
  set_at<0, 32, 32>(level_table326_lane_0_pack, level_table326_lane_0);
  auto res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_1742 = llf_add_float_32(res_init336_pack, level_table326_lane_0_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_1742_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_1742_pack, res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_1742);
  hw_uint<32 > level_table326_lane_1_pack;
  set_at<0, 32, 32>(level_table326_lane_1_pack, level_table326_lane_1);
  auto res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_1740 = llf_add_float_32(res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_1742_pack, level_table326_lane_1_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_1740_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_1740_pack, res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_1740);
  hw_uint<32 > level_table326_lane_2_pack;
  set_at<0, 32, 32>(level_table326_lane_2_pack, level_table326_lane_2);
  auto res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_1738 = llf_add_float_32(res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_1740_pack, level_table326_lane_2_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_1738_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_1738_pack, res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_1738);
  hw_uint<32 > level_table326_lane_3_pack;
  set_at<0, 32, 32>(level_table326_lane_3_pack, level_table326_lane_3);
  auto res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_0736 = llf_add_float_32(res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_1738_pack, level_table326_lane_3_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_0736_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_0736_pack, res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_0736);
  hw_uint<32 > level_table326_lane_4_pack;
  set_at<0, 32, 32>(level_table326_lane_4_pack, level_table326_lane_4);
  auto res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_0734 = llf_add_float_32(res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334_0736_pack, level_table326_lane_4_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_0734_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_0734_pack, res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_0734);
  hw_uint<32 > level_table326_lane_5_pack;
  set_at<0, 32, 32>(level_table326_lane_5_pack, level_table326_lane_5);
  auto res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_0732 = llf_add_float_32(res_update337_gp_level_table326_1335_0644_gp_level_table326_1334_0734_pack, level_table326_lane_5_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_0732_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_0732_pack, res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_0732);
  hw_uint<32 > level_table326_lane_6_pack;
  set_at<0, 32, 32>(level_table326_lane_6_pack, level_table326_lane_6);
  auto res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334__m_1730 = llf_add_float_32(res_update337_gp_level_table326_1335_1646_gp_level_table326_1334_0732_pack, level_table326_lane_6_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334__m_1730_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334__m_1730_pack, res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334__m_1730);
  hw_uint<32 > level_table326_lane_7_pack;
  set_at<0, 32, 32>(level_table326_lane_7_pack, level_table326_lane_7);
  auto res_update337_gp_level_table326_1335_0644_gp_level_table326_1334__m_1728 = llf_add_float_32(res_update337_gp_level_table326_1335__m_1642_gp_level_table326_1334__m_1730_pack, level_table326_lane_7_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335_0644_gp_level_table326_1334__m_1728_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335_0644_gp_level_table326_1334__m_1728_pack, res_update337_gp_level_table326_1335_0644_gp_level_table326_1334__m_1728);
  hw_uint<32 > level_table326_lane_8_pack;
  set_at<0, 32, 32>(level_table326_lane_8_pack, level_table326_lane_8);
  auto res_update337_gp_level_table326_1335_1646_gp_level_table326_1334__m_1726 = llf_add_float_32(res_update337_gp_level_table326_1335_0644_gp_level_table326_1334__m_1728_pack, level_table326_lane_8_pack);

  hw_uint<32 > res_update337_gp_level_table326_1335_1646_gp_level_table326_1334__m_1726_pack;
  set_at<0, 32, 32>(res_update337_gp_level_table326_1335_1646_gp_level_table326_1334__m_1726_pack, res_update337_gp_level_table326_1335_1646_gp_level_table326_1334__m_1726);
  auto res_avg338 = avg_9_float(res_update337_gp_level_table326_1335_1646_gp_level_table326_1334__m_1726_pack);
  hw_uint<32 > return_value1216;
  set_at<0, 32, 32>(return_value1216, res_avg338);
  return return_value1216;

}

hw_uint<32> gp_level_table326_3349_cu1218(hw_uint<32*9>& gp_level_table326_2_buf339) {
  hw_uint<32> gp_level_table326_2_buf339_lane_0 = gp_level_table326_2_buf339.extract<0, 31>();
  hw_uint<32> gp_level_table326_2_buf339_lane_1 = gp_level_table326_2_buf339.extract<32, 63>();
  hw_uint<32> gp_level_table326_2_buf339_lane_2 = gp_level_table326_2_buf339.extract<64, 95>();
  hw_uint<32> gp_level_table326_2_buf339_lane_3 = gp_level_table326_2_buf339.extract<96, 127>();
  hw_uint<32> gp_level_table326_2_buf339_lane_4 = gp_level_table326_2_buf339.extract<128, 159>();
  hw_uint<32> gp_level_table326_2_buf339_lane_5 = gp_level_table326_2_buf339.extract<160, 191>();
  hw_uint<32> gp_level_table326_2_buf339_lane_6 = gp_level_table326_2_buf339.extract<192, 223>();
  hw_uint<32> gp_level_table326_2_buf339_lane_7 = gp_level_table326_2_buf339.extract<224, 255>();
  hw_uint<32> gp_level_table326_2_buf339_lane_8 = gp_level_table326_2_buf339.extract<256, 287>();

	
  auto res_init352 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table326_2_buf339_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_0_pack, gp_level_table326_2_buf339_lane_0);
  hw_uint<32 > res_init352_pack;
  set_at<0, 32, 32>(res_init352_pack, res_init352);
  auto res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_1814 = llf_add_float_32(gp_level_table326_2_buf339_lane_0_pack, res_init352_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_1_pack, gp_level_table326_2_buf339_lane_1);
  hw_uint<32 > res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_1814_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_1814_pack, res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_1814);
  auto res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_1812 = llf_add_float_32(gp_level_table326_2_buf339_lane_1_pack, res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_1814_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_2_pack, gp_level_table326_2_buf339_lane_2);
  hw_uint<32 > res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_1812_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_1812_pack, res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_1812);
  auto res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_1810 = llf_add_float_32(gp_level_table326_2_buf339_lane_2_pack, res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_1812_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_3_pack, gp_level_table326_2_buf339_lane_3);
  hw_uint<32 > res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_1810_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_1810_pack, res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_1810);
  auto res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_0808 = llf_add_float_32(gp_level_table326_2_buf339_lane_3_pack, res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_1810_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_4_pack, gp_level_table326_2_buf339_lane_4);
  hw_uint<32 > res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_0808_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_0808_pack, res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_0808);
  auto res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_0806 = llf_add_float_32(gp_level_table326_2_buf339_lane_4_pack, res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350_0808_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_5_pack, gp_level_table326_2_buf339_lane_5);
  hw_uint<32 > res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_0806_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_0806_pack, res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_0806);
  auto res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_0804 = llf_add_float_32(gp_level_table326_2_buf339_lane_5_pack, res_update353_gp_level_table326_3351_0620_gp_level_table326_3350_0806_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_6_pack, gp_level_table326_2_buf339_lane_6);
  hw_uint<32 > res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_0804_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_0804_pack, res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_0804);
  auto res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350__m_1802 = llf_add_float_32(gp_level_table326_2_buf339_lane_6_pack, res_update353_gp_level_table326_3351_1622_gp_level_table326_3350_0804_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_7_pack, gp_level_table326_2_buf339_lane_7);
  hw_uint<32 > res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350__m_1802_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350__m_1802_pack, res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350__m_1802);
  auto res_update353_gp_level_table326_3351_0620_gp_level_table326_3350__m_1800 = llf_add_float_32(gp_level_table326_2_buf339_lane_7_pack, res_update353_gp_level_table326_3351__m_1618_gp_level_table326_3350__m_1802_pack);

  hw_uint<32 > gp_level_table326_2_buf339_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table326_2_buf339_lane_8_pack, gp_level_table326_2_buf339_lane_8);
  hw_uint<32 > res_update353_gp_level_table326_3351_0620_gp_level_table326_3350__m_1800_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351_0620_gp_level_table326_3350__m_1800_pack, res_update353_gp_level_table326_3351_0620_gp_level_table326_3350__m_1800);
  auto res_update353_gp_level_table326_3351_1622_gp_level_table326_3350__m_1798 = llf_add_float_32(gp_level_table326_2_buf339_lane_8_pack, res_update353_gp_level_table326_3351_0620_gp_level_table326_3350__m_1800_pack);

  hw_uint<32 > res_update353_gp_level_table326_3351_1622_gp_level_table326_3350__m_1798_pack;
  set_at<0, 32, 32>(res_update353_gp_level_table326_3351_1622_gp_level_table326_3350__m_1798_pack, res_update353_gp_level_table326_3351_1622_gp_level_table326_3350__m_1798);
  auto res_avg354 = avg_9_float(res_update353_gp_level_table326_3351_1622_gp_level_table326_3350__m_1798_pack);
  hw_uint<32 > return_value1219;
  set_at<0, 32, 32>(return_value1219, res_avg354);
  return return_value1219;

}

hw_uint<32> gp_level_table379_1386_cu1221(hw_uint<32*9>& level_table379) {
  hw_uint<32> level_table379_lane_0 = level_table379.extract<0, 31>();
  hw_uint<32> level_table379_lane_1 = level_table379.extract<32, 63>();
  hw_uint<32> level_table379_lane_2 = level_table379.extract<64, 95>();
  hw_uint<32> level_table379_lane_3 = level_table379.extract<96, 127>();
  hw_uint<32> level_table379_lane_4 = level_table379.extract<128, 159>();
  hw_uint<32> level_table379_lane_5 = level_table379.extract<160, 191>();
  hw_uint<32> level_table379_lane_6 = level_table379.extract<192, 223>();
  hw_uint<32> level_table379_lane_7 = level_table379.extract<224, 255>();
  hw_uint<32> level_table379_lane_8 = level_table379.extract<256, 287>();

	
  auto res_init389 = llf_set_zero_float_32();

  hw_uint<32 > res_init389_pack;
  set_at<0, 32, 32>(res_init389_pack, res_init389);
  hw_uint<32 > level_table379_lane_0_pack;
  set_at<0, 32, 32>(level_table379_lane_0_pack, level_table379_lane_0);
  auto res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_1850 = llf_add_float_32(res_init389_pack, level_table379_lane_0_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_1850_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_1850_pack, res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_1850);
  hw_uint<32 > level_table379_lane_1_pack;
  set_at<0, 32, 32>(level_table379_lane_1_pack, level_table379_lane_1);
  auto res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_1848 = llf_add_float_32(res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_1850_pack, level_table379_lane_1_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_1848_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_1848_pack, res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_1848);
  hw_uint<32 > level_table379_lane_2_pack;
  set_at<0, 32, 32>(level_table379_lane_2_pack, level_table379_lane_2);
  auto res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_1846 = llf_add_float_32(res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_1848_pack, level_table379_lane_2_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_1846_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_1846_pack, res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_1846);
  hw_uint<32 > level_table379_lane_3_pack;
  set_at<0, 32, 32>(level_table379_lane_3_pack, level_table379_lane_3);
  auto res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_0844 = llf_add_float_32(res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_1846_pack, level_table379_lane_3_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_0844_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_0844_pack, res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_0844);
  hw_uint<32 > level_table379_lane_4_pack;
  set_at<0, 32, 32>(level_table379_lane_4_pack, level_table379_lane_4);
  auto res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_0842 = llf_add_float_32(res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387_0844_pack, level_table379_lane_4_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_0842_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_0842_pack, res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_0842);
  hw_uint<32 > level_table379_lane_5_pack;
  set_at<0, 32, 32>(level_table379_lane_5_pack, level_table379_lane_5);
  auto res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_0840 = llf_add_float_32(res_update390_gp_level_table379_1388_0608_gp_level_table379_1387_0842_pack, level_table379_lane_5_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_0840_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_0840_pack, res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_0840);
  hw_uint<32 > level_table379_lane_6_pack;
  set_at<0, 32, 32>(level_table379_lane_6_pack, level_table379_lane_6);
  auto res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387__m_1838 = llf_add_float_32(res_update390_gp_level_table379_1388_1610_gp_level_table379_1387_0840_pack, level_table379_lane_6_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387__m_1838_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387__m_1838_pack, res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387__m_1838);
  hw_uint<32 > level_table379_lane_7_pack;
  set_at<0, 32, 32>(level_table379_lane_7_pack, level_table379_lane_7);
  auto res_update390_gp_level_table379_1388_0608_gp_level_table379_1387__m_1836 = llf_add_float_32(res_update390_gp_level_table379_1388__m_1606_gp_level_table379_1387__m_1838_pack, level_table379_lane_7_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388_0608_gp_level_table379_1387__m_1836_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388_0608_gp_level_table379_1387__m_1836_pack, res_update390_gp_level_table379_1388_0608_gp_level_table379_1387__m_1836);
  hw_uint<32 > level_table379_lane_8_pack;
  set_at<0, 32, 32>(level_table379_lane_8_pack, level_table379_lane_8);
  auto res_update390_gp_level_table379_1388_1610_gp_level_table379_1387__m_1834 = llf_add_float_32(res_update390_gp_level_table379_1388_0608_gp_level_table379_1387__m_1836_pack, level_table379_lane_8_pack);

  hw_uint<32 > res_update390_gp_level_table379_1388_1610_gp_level_table379_1387__m_1834_pack;
  set_at<0, 32, 32>(res_update390_gp_level_table379_1388_1610_gp_level_table379_1387__m_1834_pack, res_update390_gp_level_table379_1388_1610_gp_level_table379_1387__m_1834);
  auto res_avg391 = avg_9_float(res_update390_gp_level_table379_1388_1610_gp_level_table379_1387__m_1834_pack);
  hw_uint<32 > return_value1222;
  set_at<0, 32, 32>(return_value1222, res_avg391);
  return return_value1222;

}

hw_uint<32> gp_level_table379_2394_cu1224(hw_uint<32*9>& gp_level_table379_1_buf384) {
  hw_uint<32> gp_level_table379_1_buf384_lane_0 = gp_level_table379_1_buf384.extract<0, 31>();
  hw_uint<32> gp_level_table379_1_buf384_lane_1 = gp_level_table379_1_buf384.extract<32, 63>();
  hw_uint<32> gp_level_table379_1_buf384_lane_2 = gp_level_table379_1_buf384.extract<64, 95>();
  hw_uint<32> gp_level_table379_1_buf384_lane_3 = gp_level_table379_1_buf384.extract<96, 127>();
  hw_uint<32> gp_level_table379_1_buf384_lane_4 = gp_level_table379_1_buf384.extract<128, 159>();
  hw_uint<32> gp_level_table379_1_buf384_lane_5 = gp_level_table379_1_buf384.extract<160, 191>();
  hw_uint<32> gp_level_table379_1_buf384_lane_6 = gp_level_table379_1_buf384.extract<192, 223>();
  hw_uint<32> gp_level_table379_1_buf384_lane_7 = gp_level_table379_1_buf384.extract<224, 255>();
  hw_uint<32> gp_level_table379_1_buf384_lane_8 = gp_level_table379_1_buf384.extract<256, 287>();

	
  auto res_init397 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table379_1_buf384_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_0_pack, gp_level_table379_1_buf384_lane_0);
  hw_uint<32 > res_init397_pack;
  set_at<0, 32, 32>(res_init397_pack, res_init397);
  auto res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_1886 = llf_add_float_32(gp_level_table379_1_buf384_lane_0_pack, res_init397_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_1_pack, gp_level_table379_1_buf384_lane_1);
  hw_uint<32 > res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_1886_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_1886_pack, res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_1886);
  auto res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_1884 = llf_add_float_32(gp_level_table379_1_buf384_lane_1_pack, res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_1886_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_2_pack, gp_level_table379_1_buf384_lane_2);
  hw_uint<32 > res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_1884_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_1884_pack, res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_1884);
  auto res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_1882 = llf_add_float_32(gp_level_table379_1_buf384_lane_2_pack, res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_1884_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_3_pack, gp_level_table379_1_buf384_lane_3);
  hw_uint<32 > res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_1882_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_1882_pack, res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_1882);
  auto res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_0880 = llf_add_float_32(gp_level_table379_1_buf384_lane_3_pack, res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_1882_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_4_pack, gp_level_table379_1_buf384_lane_4);
  hw_uint<32 > res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_0880_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_0880_pack, res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_0880);
  auto res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_0878 = llf_add_float_32(gp_level_table379_1_buf384_lane_4_pack, res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395_0880_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_5_pack, gp_level_table379_1_buf384_lane_5);
  hw_uint<32 > res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_0878_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_0878_pack, res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_0878);
  auto res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_0876 = llf_add_float_32(gp_level_table379_1_buf384_lane_5_pack, res_update398_gp_level_table379_2396_0596_gp_level_table379_2395_0878_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_6_pack, gp_level_table379_1_buf384_lane_6);
  hw_uint<32 > res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_0876_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_0876_pack, res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_0876);
  auto res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395__m_1874 = llf_add_float_32(gp_level_table379_1_buf384_lane_6_pack, res_update398_gp_level_table379_2396_1598_gp_level_table379_2395_0876_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_7_pack, gp_level_table379_1_buf384_lane_7);
  hw_uint<32 > res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395__m_1874_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395__m_1874_pack, res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395__m_1874);
  auto res_update398_gp_level_table379_2396_0596_gp_level_table379_2395__m_1872 = llf_add_float_32(gp_level_table379_1_buf384_lane_7_pack, res_update398_gp_level_table379_2396__m_1594_gp_level_table379_2395__m_1874_pack);

  hw_uint<32 > gp_level_table379_1_buf384_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table379_1_buf384_lane_8_pack, gp_level_table379_1_buf384_lane_8);
  hw_uint<32 > res_update398_gp_level_table379_2396_0596_gp_level_table379_2395__m_1872_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396_0596_gp_level_table379_2395__m_1872_pack, res_update398_gp_level_table379_2396_0596_gp_level_table379_2395__m_1872);
  auto res_update398_gp_level_table379_2396_1598_gp_level_table379_2395__m_1870 = llf_add_float_32(gp_level_table379_1_buf384_lane_8_pack, res_update398_gp_level_table379_2396_0596_gp_level_table379_2395__m_1872_pack);

  hw_uint<32 > res_update398_gp_level_table379_2396_1598_gp_level_table379_2395__m_1870_pack;
  set_at<0, 32, 32>(res_update398_gp_level_table379_2396_1598_gp_level_table379_2395__m_1870_pack, res_update398_gp_level_table379_2396_1598_gp_level_table379_2395__m_1870);
  auto res_avg399 = avg_9_float(res_update398_gp_level_table379_2396_1598_gp_level_table379_2395__m_1870_pack);
  hw_uint<32 > return_value1225;
  set_at<0, 32, 32>(return_value1225, res_avg399);
  return return_value1225;

}

hw_uint<32> gp_level_table379_3402_cu1227(hw_uint<32*9>& gp_level_table379_2_buf392) {
  hw_uint<32> gp_level_table379_2_buf392_lane_0 = gp_level_table379_2_buf392.extract<0, 31>();
  hw_uint<32> gp_level_table379_2_buf392_lane_1 = gp_level_table379_2_buf392.extract<32, 63>();
  hw_uint<32> gp_level_table379_2_buf392_lane_2 = gp_level_table379_2_buf392.extract<64, 95>();
  hw_uint<32> gp_level_table379_2_buf392_lane_3 = gp_level_table379_2_buf392.extract<96, 127>();
  hw_uint<32> gp_level_table379_2_buf392_lane_4 = gp_level_table379_2_buf392.extract<128, 159>();
  hw_uint<32> gp_level_table379_2_buf392_lane_5 = gp_level_table379_2_buf392.extract<160, 191>();
  hw_uint<32> gp_level_table379_2_buf392_lane_6 = gp_level_table379_2_buf392.extract<192, 223>();
  hw_uint<32> gp_level_table379_2_buf392_lane_7 = gp_level_table379_2_buf392.extract<224, 255>();
  hw_uint<32> gp_level_table379_2_buf392_lane_8 = gp_level_table379_2_buf392.extract<256, 287>();

	
  auto res_init405 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table379_2_buf392_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_0_pack, gp_level_table379_2_buf392_lane_0);
  hw_uint<32 > res_init405_pack;
  set_at<0, 32, 32>(res_init405_pack, res_init405);
  auto res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_1922 = llf_add_float_32(gp_level_table379_2_buf392_lane_0_pack, res_init405_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_1_pack, gp_level_table379_2_buf392_lane_1);
  hw_uint<32 > res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_1922_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_1922_pack, res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_1922);
  auto res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_1920 = llf_add_float_32(gp_level_table379_2_buf392_lane_1_pack, res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_1922_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_2_pack, gp_level_table379_2_buf392_lane_2);
  hw_uint<32 > res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_1920_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_1920_pack, res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_1920);
  auto res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_1918 = llf_add_float_32(gp_level_table379_2_buf392_lane_2_pack, res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_1920_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_3_pack, gp_level_table379_2_buf392_lane_3);
  hw_uint<32 > res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_1918_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_1918_pack, res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_1918);
  auto res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_0916 = llf_add_float_32(gp_level_table379_2_buf392_lane_3_pack, res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_1918_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_4_pack, gp_level_table379_2_buf392_lane_4);
  hw_uint<32 > res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_0916_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_0916_pack, res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_0916);
  auto res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_0914 = llf_add_float_32(gp_level_table379_2_buf392_lane_4_pack, res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403_0916_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_5_pack, gp_level_table379_2_buf392_lane_5);
  hw_uint<32 > res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_0914_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_0914_pack, res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_0914);
  auto res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_0912 = llf_add_float_32(gp_level_table379_2_buf392_lane_5_pack, res_update406_gp_level_table379_3404_0584_gp_level_table379_3403_0914_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_6_pack, gp_level_table379_2_buf392_lane_6);
  hw_uint<32 > res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_0912_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_0912_pack, res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_0912);
  auto res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403__m_1910 = llf_add_float_32(gp_level_table379_2_buf392_lane_6_pack, res_update406_gp_level_table379_3404_1586_gp_level_table379_3403_0912_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_7_pack, gp_level_table379_2_buf392_lane_7);
  hw_uint<32 > res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403__m_1910_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403__m_1910_pack, res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403__m_1910);
  auto res_update406_gp_level_table379_3404_0584_gp_level_table379_3403__m_1908 = llf_add_float_32(gp_level_table379_2_buf392_lane_7_pack, res_update406_gp_level_table379_3404__m_1582_gp_level_table379_3403__m_1910_pack);

  hw_uint<32 > gp_level_table379_2_buf392_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table379_2_buf392_lane_8_pack, gp_level_table379_2_buf392_lane_8);
  hw_uint<32 > res_update406_gp_level_table379_3404_0584_gp_level_table379_3403__m_1908_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404_0584_gp_level_table379_3403__m_1908_pack, res_update406_gp_level_table379_3404_0584_gp_level_table379_3403__m_1908);
  auto res_update406_gp_level_table379_3404_1586_gp_level_table379_3403__m_1906 = llf_add_float_32(gp_level_table379_2_buf392_lane_8_pack, res_update406_gp_level_table379_3404_0584_gp_level_table379_3403__m_1908_pack);

  hw_uint<32 > res_update406_gp_level_table379_3404_1586_gp_level_table379_3403__m_1906_pack;
  set_at<0, 32, 32>(res_update406_gp_level_table379_3404_1586_gp_level_table379_3403__m_1906_pack, res_update406_gp_level_table379_3404_1586_gp_level_table379_3403__m_1906);
  auto res_avg407 = avg_9_float(res_update406_gp_level_table379_3404_1586_gp_level_table379_3403__m_1906_pack);
  hw_uint<32 > return_value1228;
  set_at<0, 32, 32>(return_value1228, res_avg407);
  return return_value1228;

}

hw_uint<32> gp_gray_1434_cu1230(hw_uint<32*9>& gray) {
  hw_uint<32> gray_lane_0 = gray.extract<0, 31>();
  hw_uint<32> gray_lane_1 = gray.extract<32, 63>();
  hw_uint<32> gray_lane_2 = gray.extract<64, 95>();
  hw_uint<32> gray_lane_3 = gray.extract<96, 127>();
  hw_uint<32> gray_lane_4 = gray.extract<128, 159>();
  hw_uint<32> gray_lane_5 = gray.extract<160, 191>();
  hw_uint<32> gray_lane_6 = gray.extract<192, 223>();
  hw_uint<32> gray_lane_7 = gray.extract<224, 255>();
  hw_uint<32> gray_lane_8 = gray.extract<256, 287>();

	
  auto res_init437 = llf_set_zero_float_32();

  hw_uint<32 > res_init437_pack;
  set_at<0, 32, 32>(res_init437_pack, res_init437);
  hw_uint<32 > gray_lane_0_pack;
  set_at<0, 32, 32>(gray_lane_0_pack, gray_lane_0);
  auto res_update438_gp_gray_1436__m_1516_gp_gray_1435_11156 = llf_add_float_32(res_init437_pack, gray_lane_0_pack);

  hw_uint<32 > res_update438_gp_gray_1436__m_1516_gp_gray_1435_11156_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436__m_1516_gp_gray_1435_11156_pack, res_update438_gp_gray_1436__m_1516_gp_gray_1435_11156);
  hw_uint<32 > gray_lane_1_pack;
  set_at<0, 32, 32>(gray_lane_1_pack, gray_lane_1);
  auto res_update438_gp_gray_1436_0518_gp_gray_1435_11154 = llf_add_float_32(res_update438_gp_gray_1436__m_1516_gp_gray_1435_11156_pack, gray_lane_1_pack);

  hw_uint<32 > res_update438_gp_gray_1436_0518_gp_gray_1435_11154_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436_0518_gp_gray_1435_11154_pack, res_update438_gp_gray_1436_0518_gp_gray_1435_11154);
  hw_uint<32 > gray_lane_2_pack;
  set_at<0, 32, 32>(gray_lane_2_pack, gray_lane_2);
  auto res_update438_gp_gray_1436_1520_gp_gray_1435_11152 = llf_add_float_32(res_update438_gp_gray_1436_0518_gp_gray_1435_11154_pack, gray_lane_2_pack);

  hw_uint<32 > res_update438_gp_gray_1436_1520_gp_gray_1435_11152_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436_1520_gp_gray_1435_11152_pack, res_update438_gp_gray_1436_1520_gp_gray_1435_11152);
  hw_uint<32 > gray_lane_3_pack;
  set_at<0, 32, 32>(gray_lane_3_pack, gray_lane_3);
  auto res_update438_gp_gray_1436__m_1516_gp_gray_1435_01150 = llf_add_float_32(res_update438_gp_gray_1436_1520_gp_gray_1435_11152_pack, gray_lane_3_pack);

  hw_uint<32 > res_update438_gp_gray_1436__m_1516_gp_gray_1435_01150_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436__m_1516_gp_gray_1435_01150_pack, res_update438_gp_gray_1436__m_1516_gp_gray_1435_01150);
  hw_uint<32 > gray_lane_4_pack;
  set_at<0, 32, 32>(gray_lane_4_pack, gray_lane_4);
  auto res_update438_gp_gray_1436_0518_gp_gray_1435_01148 = llf_add_float_32(res_update438_gp_gray_1436__m_1516_gp_gray_1435_01150_pack, gray_lane_4_pack);

  hw_uint<32 > res_update438_gp_gray_1436_0518_gp_gray_1435_01148_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436_0518_gp_gray_1435_01148_pack, res_update438_gp_gray_1436_0518_gp_gray_1435_01148);
  hw_uint<32 > gray_lane_5_pack;
  set_at<0, 32, 32>(gray_lane_5_pack, gray_lane_5);
  auto res_update438_gp_gray_1436_1520_gp_gray_1435_01146 = llf_add_float_32(res_update438_gp_gray_1436_0518_gp_gray_1435_01148_pack, gray_lane_5_pack);

  hw_uint<32 > res_update438_gp_gray_1436_1520_gp_gray_1435_01146_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436_1520_gp_gray_1435_01146_pack, res_update438_gp_gray_1436_1520_gp_gray_1435_01146);
  hw_uint<32 > gray_lane_6_pack;
  set_at<0, 32, 32>(gray_lane_6_pack, gray_lane_6);
  auto res_update438_gp_gray_1436__m_1516_gp_gray_1435__m_11144 = llf_add_float_32(res_update438_gp_gray_1436_1520_gp_gray_1435_01146_pack, gray_lane_6_pack);

  hw_uint<32 > res_update438_gp_gray_1436__m_1516_gp_gray_1435__m_11144_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436__m_1516_gp_gray_1435__m_11144_pack, res_update438_gp_gray_1436__m_1516_gp_gray_1435__m_11144);
  hw_uint<32 > gray_lane_7_pack;
  set_at<0, 32, 32>(gray_lane_7_pack, gray_lane_7);
  auto res_update438_gp_gray_1436_0518_gp_gray_1435__m_11142 = llf_add_float_32(res_update438_gp_gray_1436__m_1516_gp_gray_1435__m_11144_pack, gray_lane_7_pack);

  hw_uint<32 > res_update438_gp_gray_1436_0518_gp_gray_1435__m_11142_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436_0518_gp_gray_1435__m_11142_pack, res_update438_gp_gray_1436_0518_gp_gray_1435__m_11142);
  hw_uint<32 > gray_lane_8_pack;
  set_at<0, 32, 32>(gray_lane_8_pack, gray_lane_8);
  auto res_update438_gp_gray_1436_1520_gp_gray_1435__m_11140 = llf_add_float_32(res_update438_gp_gray_1436_0518_gp_gray_1435__m_11142_pack, gray_lane_8_pack);

  hw_uint<32 > res_update438_gp_gray_1436_1520_gp_gray_1435__m_11140_pack;
  set_at<0, 32, 32>(res_update438_gp_gray_1436_1520_gp_gray_1435__m_11140_pack, res_update438_gp_gray_1436_1520_gp_gray_1435__m_11140);
  auto res_avg439 = avg_9_float(res_update438_gp_gray_1436_1520_gp_gray_1435__m_11140_pack);
  hw_uint<32 > return_value1231;
  set_at<0, 32, 32>(return_value1231, res_avg439);
  return return_value1231;

}

hw_uint<32> gp_gray_2442_cu1233(hw_uint<32*9>& gp_gray_1_buf432) {
  hw_uint<32> gp_gray_1_buf432_lane_0 = gp_gray_1_buf432.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf432_lane_1 = gp_gray_1_buf432.extract<32, 63>();
  hw_uint<32> gp_gray_1_buf432_lane_2 = gp_gray_1_buf432.extract<64, 95>();
  hw_uint<32> gp_gray_1_buf432_lane_3 = gp_gray_1_buf432.extract<96, 127>();
  hw_uint<32> gp_gray_1_buf432_lane_4 = gp_gray_1_buf432.extract<128, 159>();
  hw_uint<32> gp_gray_1_buf432_lane_5 = gp_gray_1_buf432.extract<160, 191>();
  hw_uint<32> gp_gray_1_buf432_lane_6 = gp_gray_1_buf432.extract<192, 223>();
  hw_uint<32> gp_gray_1_buf432_lane_7 = gp_gray_1_buf432.extract<224, 255>();
  hw_uint<32> gp_gray_1_buf432_lane_8 = gp_gray_1_buf432.extract<256, 287>();

	
  auto res_init445 = llf_set_zero_float_32();

  hw_uint<32 > gp_gray_1_buf432_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_0_pack, gp_gray_1_buf432_lane_0);
  hw_uint<32 > res_init445_pack;
  set_at<0, 32, 32>(res_init445_pack, res_init445);
  auto res_update446_gp_gray_2444__m_1528_gp_gray_2443_11120 = llf_add_float_32(gp_gray_1_buf432_lane_0_pack, res_init445_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_1_pack, gp_gray_1_buf432_lane_1);
  hw_uint<32 > res_update446_gp_gray_2444__m_1528_gp_gray_2443_11120_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444__m_1528_gp_gray_2443_11120_pack, res_update446_gp_gray_2444__m_1528_gp_gray_2443_11120);
  auto res_update446_gp_gray_2444_0530_gp_gray_2443_11118 = llf_add_float_32(gp_gray_1_buf432_lane_1_pack, res_update446_gp_gray_2444__m_1528_gp_gray_2443_11120_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_2_pack, gp_gray_1_buf432_lane_2);
  hw_uint<32 > res_update446_gp_gray_2444_0530_gp_gray_2443_11118_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444_0530_gp_gray_2443_11118_pack, res_update446_gp_gray_2444_0530_gp_gray_2443_11118);
  auto res_update446_gp_gray_2444_1532_gp_gray_2443_11116 = llf_add_float_32(gp_gray_1_buf432_lane_2_pack, res_update446_gp_gray_2444_0530_gp_gray_2443_11118_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_3_pack, gp_gray_1_buf432_lane_3);
  hw_uint<32 > res_update446_gp_gray_2444_1532_gp_gray_2443_11116_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444_1532_gp_gray_2443_11116_pack, res_update446_gp_gray_2444_1532_gp_gray_2443_11116);
  auto res_update446_gp_gray_2444__m_1528_gp_gray_2443_01114 = llf_add_float_32(gp_gray_1_buf432_lane_3_pack, res_update446_gp_gray_2444_1532_gp_gray_2443_11116_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_4_pack, gp_gray_1_buf432_lane_4);
  hw_uint<32 > res_update446_gp_gray_2444__m_1528_gp_gray_2443_01114_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444__m_1528_gp_gray_2443_01114_pack, res_update446_gp_gray_2444__m_1528_gp_gray_2443_01114);
  auto res_update446_gp_gray_2444_0530_gp_gray_2443_01112 = llf_add_float_32(gp_gray_1_buf432_lane_4_pack, res_update446_gp_gray_2444__m_1528_gp_gray_2443_01114_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_5_pack, gp_gray_1_buf432_lane_5);
  hw_uint<32 > res_update446_gp_gray_2444_0530_gp_gray_2443_01112_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444_0530_gp_gray_2443_01112_pack, res_update446_gp_gray_2444_0530_gp_gray_2443_01112);
  auto res_update446_gp_gray_2444_1532_gp_gray_2443_01110 = llf_add_float_32(gp_gray_1_buf432_lane_5_pack, res_update446_gp_gray_2444_0530_gp_gray_2443_01112_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_6_pack, gp_gray_1_buf432_lane_6);
  hw_uint<32 > res_update446_gp_gray_2444_1532_gp_gray_2443_01110_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444_1532_gp_gray_2443_01110_pack, res_update446_gp_gray_2444_1532_gp_gray_2443_01110);
  auto res_update446_gp_gray_2444__m_1528_gp_gray_2443__m_11108 = llf_add_float_32(gp_gray_1_buf432_lane_6_pack, res_update446_gp_gray_2444_1532_gp_gray_2443_01110_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_7_pack, gp_gray_1_buf432_lane_7);
  hw_uint<32 > res_update446_gp_gray_2444__m_1528_gp_gray_2443__m_11108_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444__m_1528_gp_gray_2443__m_11108_pack, res_update446_gp_gray_2444__m_1528_gp_gray_2443__m_11108);
  auto res_update446_gp_gray_2444_0530_gp_gray_2443__m_11106 = llf_add_float_32(gp_gray_1_buf432_lane_7_pack, res_update446_gp_gray_2444__m_1528_gp_gray_2443__m_11108_pack);

  hw_uint<32 > gp_gray_1_buf432_lane_8_pack;
  set_at<0, 32, 32>(gp_gray_1_buf432_lane_8_pack, gp_gray_1_buf432_lane_8);
  hw_uint<32 > res_update446_gp_gray_2444_0530_gp_gray_2443__m_11106_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444_0530_gp_gray_2443__m_11106_pack, res_update446_gp_gray_2444_0530_gp_gray_2443__m_11106);
  auto res_update446_gp_gray_2444_1532_gp_gray_2443__m_11104 = llf_add_float_32(gp_gray_1_buf432_lane_8_pack, res_update446_gp_gray_2444_0530_gp_gray_2443__m_11106_pack);

  hw_uint<32 > res_update446_gp_gray_2444_1532_gp_gray_2443__m_11104_pack;
  set_at<0, 32, 32>(res_update446_gp_gray_2444_1532_gp_gray_2443__m_11104_pack, res_update446_gp_gray_2444_1532_gp_gray_2443__m_11104);
  auto res_avg447 = avg_9_float(res_update446_gp_gray_2444_1532_gp_gray_2443__m_11104_pack);
  hw_uint<32 > return_value1234;
  set_at<0, 32, 32>(return_value1234, res_avg447);
  return return_value1234;

}

hw_uint<32> gp_gray_3450_cu1236(hw_uint<32*9>& gp_gray_2_buf440) {
  hw_uint<32> gp_gray_2_buf440_lane_0 = gp_gray_2_buf440.extract<0, 31>();
  hw_uint<32> gp_gray_2_buf440_lane_1 = gp_gray_2_buf440.extract<32, 63>();
  hw_uint<32> gp_gray_2_buf440_lane_2 = gp_gray_2_buf440.extract<64, 95>();
  hw_uint<32> gp_gray_2_buf440_lane_3 = gp_gray_2_buf440.extract<96, 127>();
  hw_uint<32> gp_gray_2_buf440_lane_4 = gp_gray_2_buf440.extract<128, 159>();
  hw_uint<32> gp_gray_2_buf440_lane_5 = gp_gray_2_buf440.extract<160, 191>();
  hw_uint<32> gp_gray_2_buf440_lane_6 = gp_gray_2_buf440.extract<192, 223>();
  hw_uint<32> gp_gray_2_buf440_lane_7 = gp_gray_2_buf440.extract<224, 255>();
  hw_uint<32> gp_gray_2_buf440_lane_8 = gp_gray_2_buf440.extract<256, 287>();

	
  auto res_init453 = llf_set_zero_float_32();

  hw_uint<32 > gp_gray_2_buf440_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_0_pack, gp_gray_2_buf440_lane_0);
  hw_uint<32 > res_init453_pack;
  set_at<0, 32, 32>(res_init453_pack, res_init453);
  auto res_update454_gp_gray_3452__m_1540_gp_gray_3451_11084 = llf_add_float_32(gp_gray_2_buf440_lane_0_pack, res_init453_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_1_pack, gp_gray_2_buf440_lane_1);
  hw_uint<32 > res_update454_gp_gray_3452__m_1540_gp_gray_3451_11084_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452__m_1540_gp_gray_3451_11084_pack, res_update454_gp_gray_3452__m_1540_gp_gray_3451_11084);
  auto res_update454_gp_gray_3452_0542_gp_gray_3451_11082 = llf_add_float_32(gp_gray_2_buf440_lane_1_pack, res_update454_gp_gray_3452__m_1540_gp_gray_3451_11084_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_2_pack, gp_gray_2_buf440_lane_2);
  hw_uint<32 > res_update454_gp_gray_3452_0542_gp_gray_3451_11082_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452_0542_gp_gray_3451_11082_pack, res_update454_gp_gray_3452_0542_gp_gray_3451_11082);
  auto res_update454_gp_gray_3452_1544_gp_gray_3451_11080 = llf_add_float_32(gp_gray_2_buf440_lane_2_pack, res_update454_gp_gray_3452_0542_gp_gray_3451_11082_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_3_pack, gp_gray_2_buf440_lane_3);
  hw_uint<32 > res_update454_gp_gray_3452_1544_gp_gray_3451_11080_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452_1544_gp_gray_3451_11080_pack, res_update454_gp_gray_3452_1544_gp_gray_3451_11080);
  auto res_update454_gp_gray_3452__m_1540_gp_gray_3451_01078 = llf_add_float_32(gp_gray_2_buf440_lane_3_pack, res_update454_gp_gray_3452_1544_gp_gray_3451_11080_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_4_pack, gp_gray_2_buf440_lane_4);
  hw_uint<32 > res_update454_gp_gray_3452__m_1540_gp_gray_3451_01078_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452__m_1540_gp_gray_3451_01078_pack, res_update454_gp_gray_3452__m_1540_gp_gray_3451_01078);
  auto res_update454_gp_gray_3452_0542_gp_gray_3451_01076 = llf_add_float_32(gp_gray_2_buf440_lane_4_pack, res_update454_gp_gray_3452__m_1540_gp_gray_3451_01078_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_5_pack, gp_gray_2_buf440_lane_5);
  hw_uint<32 > res_update454_gp_gray_3452_0542_gp_gray_3451_01076_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452_0542_gp_gray_3451_01076_pack, res_update454_gp_gray_3452_0542_gp_gray_3451_01076);
  auto res_update454_gp_gray_3452_1544_gp_gray_3451_01074 = llf_add_float_32(gp_gray_2_buf440_lane_5_pack, res_update454_gp_gray_3452_0542_gp_gray_3451_01076_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_6_pack, gp_gray_2_buf440_lane_6);
  hw_uint<32 > res_update454_gp_gray_3452_1544_gp_gray_3451_01074_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452_1544_gp_gray_3451_01074_pack, res_update454_gp_gray_3452_1544_gp_gray_3451_01074);
  auto res_update454_gp_gray_3452__m_1540_gp_gray_3451__m_11072 = llf_add_float_32(gp_gray_2_buf440_lane_6_pack, res_update454_gp_gray_3452_1544_gp_gray_3451_01074_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_7_pack, gp_gray_2_buf440_lane_7);
  hw_uint<32 > res_update454_gp_gray_3452__m_1540_gp_gray_3451__m_11072_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452__m_1540_gp_gray_3451__m_11072_pack, res_update454_gp_gray_3452__m_1540_gp_gray_3451__m_11072);
  auto res_update454_gp_gray_3452_0542_gp_gray_3451__m_11070 = llf_add_float_32(gp_gray_2_buf440_lane_7_pack, res_update454_gp_gray_3452__m_1540_gp_gray_3451__m_11072_pack);

  hw_uint<32 > gp_gray_2_buf440_lane_8_pack;
  set_at<0, 32, 32>(gp_gray_2_buf440_lane_8_pack, gp_gray_2_buf440_lane_8);
  hw_uint<32 > res_update454_gp_gray_3452_0542_gp_gray_3451__m_11070_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452_0542_gp_gray_3451__m_11070_pack, res_update454_gp_gray_3452_0542_gp_gray_3451__m_11070);
  auto res_update454_gp_gray_3452_1544_gp_gray_3451__m_11068 = llf_add_float_32(gp_gray_2_buf440_lane_8_pack, res_update454_gp_gray_3452_0542_gp_gray_3451__m_11070_pack);

  hw_uint<32 > res_update454_gp_gray_3452_1544_gp_gray_3451__m_11068_pack;
  set_at<0, 32, 32>(res_update454_gp_gray_3452_1544_gp_gray_3451__m_11068_pack, res_update454_gp_gray_3452_1544_gp_gray_3451__m_11068);
  auto res_avg455 = avg_9_float(res_update454_gp_gray_3452_1544_gp_gray_3451__m_11068_pack);
  hw_uint<32 > return_value1237;
  set_at<0, 32, 32>(return_value1237, res_avg455);
  return return_value1237;

}

