#include "local_laplacian_filters_compute.h"

hw_uint<32> gp_level_table4_111_cu1154(hw_uint<32*9>& level_table4) {
  hw_uint<32> level_table4_lane_0 = level_table4.extract<0, 31>();
  hw_uint<32> level_table4_lane_1 = level_table4.extract<32, 63>();
  hw_uint<32> level_table4_lane_2 = level_table4.extract<64, 95>();
  hw_uint<32> level_table4_lane_3 = level_table4.extract<96, 127>();
  hw_uint<32> level_table4_lane_4 = level_table4.extract<128, 159>();
  hw_uint<32> level_table4_lane_5 = level_table4.extract<160, 191>();
  hw_uint<32> level_table4_lane_6 = level_table4.extract<192, 223>();
  hw_uint<32> level_table4_lane_7 = level_table4.extract<224, 255>();
  hw_uint<32> level_table4_lane_8 = level_table4.extract<256, 287>();

	
  auto res_init14 = llf_set_zero_float_32();

  hw_uint<32 > res_init14_pack;
  set_at<0, 32, 32>(res_init14_pack, res_init14);
  hw_uint<32 > level_table4_lane_0_pack;
  set_at<0, 32, 32>(level_table4_lane_0_pack, level_table4_lane_0);
  auto res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_1954 = llf_add_float_32(res_init14_pack, level_table4_lane_0_pack);

  hw_uint<32 > res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_1954_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_1954_pack, res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_1954);
  hw_uint<32 > level_table4_lane_1_pack;
  set_at<0, 32, 32>(level_table4_lane_1_pack, level_table4_lane_1);
  auto res_update15_gp_level_table4_113_0568_gp_level_table4_112_1952 = llf_add_float_32(res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_1954_pack, level_table4_lane_1_pack);

  hw_uint<32 > res_update15_gp_level_table4_113_0568_gp_level_table4_112_1952_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113_0568_gp_level_table4_112_1952_pack, res_update15_gp_level_table4_113_0568_gp_level_table4_112_1952);
  hw_uint<32 > level_table4_lane_2_pack;
  set_at<0, 32, 32>(level_table4_lane_2_pack, level_table4_lane_2);
  auto res_update15_gp_level_table4_113_1570_gp_level_table4_112_1950 = llf_add_float_32(res_update15_gp_level_table4_113_0568_gp_level_table4_112_1952_pack, level_table4_lane_2_pack);

  hw_uint<32 > res_update15_gp_level_table4_113_1570_gp_level_table4_112_1950_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113_1570_gp_level_table4_112_1950_pack, res_update15_gp_level_table4_113_1570_gp_level_table4_112_1950);
  hw_uint<32 > level_table4_lane_3_pack;
  set_at<0, 32, 32>(level_table4_lane_3_pack, level_table4_lane_3);
  auto res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_0948 = llf_add_float_32(res_update15_gp_level_table4_113_1570_gp_level_table4_112_1950_pack, level_table4_lane_3_pack);

  hw_uint<32 > res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_0948_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_0948_pack, res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_0948);
  hw_uint<32 > level_table4_lane_4_pack;
  set_at<0, 32, 32>(level_table4_lane_4_pack, level_table4_lane_4);
  auto res_update15_gp_level_table4_113_0568_gp_level_table4_112_0946 = llf_add_float_32(res_update15_gp_level_table4_113__m_1566_gp_level_table4_112_0948_pack, level_table4_lane_4_pack);

  hw_uint<32 > res_update15_gp_level_table4_113_0568_gp_level_table4_112_0946_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113_0568_gp_level_table4_112_0946_pack, res_update15_gp_level_table4_113_0568_gp_level_table4_112_0946);
  hw_uint<32 > level_table4_lane_5_pack;
  set_at<0, 32, 32>(level_table4_lane_5_pack, level_table4_lane_5);
  auto res_update15_gp_level_table4_113_1570_gp_level_table4_112_0944 = llf_add_float_32(res_update15_gp_level_table4_113_0568_gp_level_table4_112_0946_pack, level_table4_lane_5_pack);

  hw_uint<32 > res_update15_gp_level_table4_113_1570_gp_level_table4_112_0944_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113_1570_gp_level_table4_112_0944_pack, res_update15_gp_level_table4_113_1570_gp_level_table4_112_0944);
  hw_uint<32 > level_table4_lane_6_pack;
  set_at<0, 32, 32>(level_table4_lane_6_pack, level_table4_lane_6);
  auto res_update15_gp_level_table4_113__m_1566_gp_level_table4_112__m_1942 = llf_add_float_32(res_update15_gp_level_table4_113_1570_gp_level_table4_112_0944_pack, level_table4_lane_6_pack);

  hw_uint<32 > res_update15_gp_level_table4_113__m_1566_gp_level_table4_112__m_1942_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113__m_1566_gp_level_table4_112__m_1942_pack, res_update15_gp_level_table4_113__m_1566_gp_level_table4_112__m_1942);
  hw_uint<32 > level_table4_lane_7_pack;
  set_at<0, 32, 32>(level_table4_lane_7_pack, level_table4_lane_7);
  auto res_update15_gp_level_table4_113_0568_gp_level_table4_112__m_1940 = llf_add_float_32(res_update15_gp_level_table4_113__m_1566_gp_level_table4_112__m_1942_pack, level_table4_lane_7_pack);

  hw_uint<32 > res_update15_gp_level_table4_113_0568_gp_level_table4_112__m_1940_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113_0568_gp_level_table4_112__m_1940_pack, res_update15_gp_level_table4_113_0568_gp_level_table4_112__m_1940);
  hw_uint<32 > level_table4_lane_8_pack;
  set_at<0, 32, 32>(level_table4_lane_8_pack, level_table4_lane_8);
  auto res_update15_gp_level_table4_113_1570_gp_level_table4_112__m_1938 = llf_add_float_32(res_update15_gp_level_table4_113_0568_gp_level_table4_112__m_1940_pack, level_table4_lane_8_pack);

  hw_uint<32 > res_update15_gp_level_table4_113_1570_gp_level_table4_112__m_1938_pack;
  set_at<0, 32, 32>(res_update15_gp_level_table4_113_1570_gp_level_table4_112__m_1938_pack, res_update15_gp_level_table4_113_1570_gp_level_table4_112__m_1938);
  auto res_avg16 = avg_9_float(res_update15_gp_level_table4_113_1570_gp_level_table4_112__m_1938_pack);
  hw_uint<32 > return_value1155;
  set_at<0, 32, 32>(return_value1155, res_avg16);
  return return_value1155;

}

hw_uint<32> gp_level_table4_219_cu1157(hw_uint<32*9>& gp_level_table4_1_buf9) {
  hw_uint<32> gp_level_table4_1_buf9_lane_0 = gp_level_table4_1_buf9.extract<0, 31>();
  hw_uint<32> gp_level_table4_1_buf9_lane_1 = gp_level_table4_1_buf9.extract<32, 63>();
  hw_uint<32> gp_level_table4_1_buf9_lane_2 = gp_level_table4_1_buf9.extract<64, 95>();
  hw_uint<32> gp_level_table4_1_buf9_lane_3 = gp_level_table4_1_buf9.extract<96, 127>();
  hw_uint<32> gp_level_table4_1_buf9_lane_4 = gp_level_table4_1_buf9.extract<128, 159>();
  hw_uint<32> gp_level_table4_1_buf9_lane_5 = gp_level_table4_1_buf9.extract<160, 191>();
  hw_uint<32> gp_level_table4_1_buf9_lane_6 = gp_level_table4_1_buf9.extract<192, 223>();
  hw_uint<32> gp_level_table4_1_buf9_lane_7 = gp_level_table4_1_buf9.extract<224, 255>();
  hw_uint<32> gp_level_table4_1_buf9_lane_8 = gp_level_table4_1_buf9.extract<256, 287>();

	
  auto res_init22 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table4_1_buf9_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_0_pack, gp_level_table4_1_buf9_lane_0);
  hw_uint<32 > res_init22_pack;
  set_at<0, 32, 32>(res_init22_pack, res_init22);
  auto res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_1990 = llf_add_float_32(gp_level_table4_1_buf9_lane_0_pack, res_init22_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_1_pack, gp_level_table4_1_buf9_lane_1);
  hw_uint<32 > res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_1990_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_1990_pack, res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_1990);
  auto res_update23_gp_level_table4_221_0556_gp_level_table4_220_1988 = llf_add_float_32(gp_level_table4_1_buf9_lane_1_pack, res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_1990_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_2_pack, gp_level_table4_1_buf9_lane_2);
  hw_uint<32 > res_update23_gp_level_table4_221_0556_gp_level_table4_220_1988_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221_0556_gp_level_table4_220_1988_pack, res_update23_gp_level_table4_221_0556_gp_level_table4_220_1988);
  auto res_update23_gp_level_table4_221_1558_gp_level_table4_220_1986 = llf_add_float_32(gp_level_table4_1_buf9_lane_2_pack, res_update23_gp_level_table4_221_0556_gp_level_table4_220_1988_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_3_pack, gp_level_table4_1_buf9_lane_3);
  hw_uint<32 > res_update23_gp_level_table4_221_1558_gp_level_table4_220_1986_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221_1558_gp_level_table4_220_1986_pack, res_update23_gp_level_table4_221_1558_gp_level_table4_220_1986);
  auto res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_0984 = llf_add_float_32(gp_level_table4_1_buf9_lane_3_pack, res_update23_gp_level_table4_221_1558_gp_level_table4_220_1986_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_4_pack, gp_level_table4_1_buf9_lane_4);
  hw_uint<32 > res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_0984_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_0984_pack, res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_0984);
  auto res_update23_gp_level_table4_221_0556_gp_level_table4_220_0982 = llf_add_float_32(gp_level_table4_1_buf9_lane_4_pack, res_update23_gp_level_table4_221__m_1554_gp_level_table4_220_0984_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_5_pack, gp_level_table4_1_buf9_lane_5);
  hw_uint<32 > res_update23_gp_level_table4_221_0556_gp_level_table4_220_0982_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221_0556_gp_level_table4_220_0982_pack, res_update23_gp_level_table4_221_0556_gp_level_table4_220_0982);
  auto res_update23_gp_level_table4_221_1558_gp_level_table4_220_0980 = llf_add_float_32(gp_level_table4_1_buf9_lane_5_pack, res_update23_gp_level_table4_221_0556_gp_level_table4_220_0982_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_6_pack, gp_level_table4_1_buf9_lane_6);
  hw_uint<32 > res_update23_gp_level_table4_221_1558_gp_level_table4_220_0980_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221_1558_gp_level_table4_220_0980_pack, res_update23_gp_level_table4_221_1558_gp_level_table4_220_0980);
  auto res_update23_gp_level_table4_221__m_1554_gp_level_table4_220__m_1978 = llf_add_float_32(gp_level_table4_1_buf9_lane_6_pack, res_update23_gp_level_table4_221_1558_gp_level_table4_220_0980_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_7_pack, gp_level_table4_1_buf9_lane_7);
  hw_uint<32 > res_update23_gp_level_table4_221__m_1554_gp_level_table4_220__m_1978_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221__m_1554_gp_level_table4_220__m_1978_pack, res_update23_gp_level_table4_221__m_1554_gp_level_table4_220__m_1978);
  auto res_update23_gp_level_table4_221_0556_gp_level_table4_220__m_1976 = llf_add_float_32(gp_level_table4_1_buf9_lane_7_pack, res_update23_gp_level_table4_221__m_1554_gp_level_table4_220__m_1978_pack);

  hw_uint<32 > gp_level_table4_1_buf9_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table4_1_buf9_lane_8_pack, gp_level_table4_1_buf9_lane_8);
  hw_uint<32 > res_update23_gp_level_table4_221_0556_gp_level_table4_220__m_1976_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221_0556_gp_level_table4_220__m_1976_pack, res_update23_gp_level_table4_221_0556_gp_level_table4_220__m_1976);
  auto res_update23_gp_level_table4_221_1558_gp_level_table4_220__m_1974 = llf_add_float_32(gp_level_table4_1_buf9_lane_8_pack, res_update23_gp_level_table4_221_0556_gp_level_table4_220__m_1976_pack);

  hw_uint<32 > res_update23_gp_level_table4_221_1558_gp_level_table4_220__m_1974_pack;
  set_at<0, 32, 32>(res_update23_gp_level_table4_221_1558_gp_level_table4_220__m_1974_pack, res_update23_gp_level_table4_221_1558_gp_level_table4_220__m_1974);
  auto res_avg24 = avg_9_float(res_update23_gp_level_table4_221_1558_gp_level_table4_220__m_1974_pack);
  hw_uint<32 > return_value1158;
  set_at<0, 32, 32>(return_value1158, res_avg24);
  return return_value1158;

}

hw_uint<32> gp_level_table4_327_cu1160(hw_uint<32*9>& gp_level_table4_2_buf17) {
  hw_uint<32> gp_level_table4_2_buf17_lane_0 = gp_level_table4_2_buf17.extract<0, 31>();
  hw_uint<32> gp_level_table4_2_buf17_lane_1 = gp_level_table4_2_buf17.extract<32, 63>();
  hw_uint<32> gp_level_table4_2_buf17_lane_2 = gp_level_table4_2_buf17.extract<64, 95>();
  hw_uint<32> gp_level_table4_2_buf17_lane_3 = gp_level_table4_2_buf17.extract<96, 127>();
  hw_uint<32> gp_level_table4_2_buf17_lane_4 = gp_level_table4_2_buf17.extract<128, 159>();
  hw_uint<32> gp_level_table4_2_buf17_lane_5 = gp_level_table4_2_buf17.extract<160, 191>();
  hw_uint<32> gp_level_table4_2_buf17_lane_6 = gp_level_table4_2_buf17.extract<192, 223>();
  hw_uint<32> gp_level_table4_2_buf17_lane_7 = gp_level_table4_2_buf17.extract<224, 255>();
  hw_uint<32> gp_level_table4_2_buf17_lane_8 = gp_level_table4_2_buf17.extract<256, 287>();

	
  auto res_init30 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table4_2_buf17_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_0_pack, gp_level_table4_2_buf17_lane_0);
  hw_uint<32 > res_init30_pack;
  set_at<0, 32, 32>(res_init30_pack, res_init30);
  auto res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_11026 = llf_add_float_32(gp_level_table4_2_buf17_lane_0_pack, res_init30_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_1_pack, gp_level_table4_2_buf17_lane_1);
  hw_uint<32 > res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_11026_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_11026_pack, res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_11026);
  auto res_update31_gp_level_table4_329_0544_gp_level_table4_328_11024 = llf_add_float_32(gp_level_table4_2_buf17_lane_1_pack, res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_11026_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_2_pack, gp_level_table4_2_buf17_lane_2);
  hw_uint<32 > res_update31_gp_level_table4_329_0544_gp_level_table4_328_11024_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329_0544_gp_level_table4_328_11024_pack, res_update31_gp_level_table4_329_0544_gp_level_table4_328_11024);
  auto res_update31_gp_level_table4_329_1546_gp_level_table4_328_11022 = llf_add_float_32(gp_level_table4_2_buf17_lane_2_pack, res_update31_gp_level_table4_329_0544_gp_level_table4_328_11024_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_3_pack, gp_level_table4_2_buf17_lane_3);
  hw_uint<32 > res_update31_gp_level_table4_329_1546_gp_level_table4_328_11022_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329_1546_gp_level_table4_328_11022_pack, res_update31_gp_level_table4_329_1546_gp_level_table4_328_11022);
  auto res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_01020 = llf_add_float_32(gp_level_table4_2_buf17_lane_3_pack, res_update31_gp_level_table4_329_1546_gp_level_table4_328_11022_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_4_pack, gp_level_table4_2_buf17_lane_4);
  hw_uint<32 > res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_01020_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_01020_pack, res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_01020);
  auto res_update31_gp_level_table4_329_0544_gp_level_table4_328_01018 = llf_add_float_32(gp_level_table4_2_buf17_lane_4_pack, res_update31_gp_level_table4_329__m_1542_gp_level_table4_328_01020_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_5_pack, gp_level_table4_2_buf17_lane_5);
  hw_uint<32 > res_update31_gp_level_table4_329_0544_gp_level_table4_328_01018_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329_0544_gp_level_table4_328_01018_pack, res_update31_gp_level_table4_329_0544_gp_level_table4_328_01018);
  auto res_update31_gp_level_table4_329_1546_gp_level_table4_328_01016 = llf_add_float_32(gp_level_table4_2_buf17_lane_5_pack, res_update31_gp_level_table4_329_0544_gp_level_table4_328_01018_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_6_pack, gp_level_table4_2_buf17_lane_6);
  hw_uint<32 > res_update31_gp_level_table4_329_1546_gp_level_table4_328_01016_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329_1546_gp_level_table4_328_01016_pack, res_update31_gp_level_table4_329_1546_gp_level_table4_328_01016);
  auto res_update31_gp_level_table4_329__m_1542_gp_level_table4_328__m_11014 = llf_add_float_32(gp_level_table4_2_buf17_lane_6_pack, res_update31_gp_level_table4_329_1546_gp_level_table4_328_01016_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_7_pack, gp_level_table4_2_buf17_lane_7);
  hw_uint<32 > res_update31_gp_level_table4_329__m_1542_gp_level_table4_328__m_11014_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329__m_1542_gp_level_table4_328__m_11014_pack, res_update31_gp_level_table4_329__m_1542_gp_level_table4_328__m_11014);
  auto res_update31_gp_level_table4_329_0544_gp_level_table4_328__m_11012 = llf_add_float_32(gp_level_table4_2_buf17_lane_7_pack, res_update31_gp_level_table4_329__m_1542_gp_level_table4_328__m_11014_pack);

  hw_uint<32 > gp_level_table4_2_buf17_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table4_2_buf17_lane_8_pack, gp_level_table4_2_buf17_lane_8);
  hw_uint<32 > res_update31_gp_level_table4_329_0544_gp_level_table4_328__m_11012_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329_0544_gp_level_table4_328__m_11012_pack, res_update31_gp_level_table4_329_0544_gp_level_table4_328__m_11012);
  auto res_update31_gp_level_table4_329_1546_gp_level_table4_328__m_11010 = llf_add_float_32(gp_level_table4_2_buf17_lane_8_pack, res_update31_gp_level_table4_329_0544_gp_level_table4_328__m_11012_pack);

  hw_uint<32 > res_update31_gp_level_table4_329_1546_gp_level_table4_328__m_11010_pack;
  set_at<0, 32, 32>(res_update31_gp_level_table4_329_1546_gp_level_table4_328__m_11010_pack, res_update31_gp_level_table4_329_1546_gp_level_table4_328__m_11010);
  auto res_avg32 = avg_9_float(res_update31_gp_level_table4_329_1546_gp_level_table4_328__m_11010_pack);
  hw_uint<32 > return_value1161;
  set_at<0, 32, 32>(return_value1161, res_avg32);
  return return_value1161;

}

hw_uint<32> gp_level_table57_164_cu1163(hw_uint<32*9>& level_table57) {
  hw_uint<32> level_table57_lane_0 = level_table57.extract<0, 31>();
  hw_uint<32> level_table57_lane_1 = level_table57.extract<32, 63>();
  hw_uint<32> level_table57_lane_2 = level_table57.extract<64, 95>();
  hw_uint<32> level_table57_lane_3 = level_table57.extract<96, 127>();
  hw_uint<32> level_table57_lane_4 = level_table57.extract<128, 159>();
  hw_uint<32> level_table57_lane_5 = level_table57.extract<160, 191>();
  hw_uint<32> level_table57_lane_6 = level_table57.extract<192, 223>();
  hw_uint<32> level_table57_lane_7 = level_table57.extract<224, 255>();
  hw_uint<32> level_table57_lane_8 = level_table57.extract<256, 287>();

	
  auto res_init67 = llf_set_zero_float_32();

  hw_uint<32 > res_init67_pack;
  set_at<0, 32, 32>(res_init67_pack, res_init67);
  hw_uint<32 > level_table57_lane_0_pack;
  set_at<0, 32, 32>(level_table57_lane_0_pack, level_table57_lane_0);
  auto res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_11062 = llf_add_float_32(res_init67_pack, level_table57_lane_0_pack);

  hw_uint<32 > res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_11062_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_11062_pack, res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_11062);
  hw_uint<32 > level_table57_lane_1_pack;
  set_at<0, 32, 32>(level_table57_lane_1_pack, level_table57_lane_1);
  auto res_update68_gp_level_table57_166_0532_gp_level_table57_165_11060 = llf_add_float_32(res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_11062_pack, level_table57_lane_1_pack);

  hw_uint<32 > res_update68_gp_level_table57_166_0532_gp_level_table57_165_11060_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166_0532_gp_level_table57_165_11060_pack, res_update68_gp_level_table57_166_0532_gp_level_table57_165_11060);
  hw_uint<32 > level_table57_lane_2_pack;
  set_at<0, 32, 32>(level_table57_lane_2_pack, level_table57_lane_2);
  auto res_update68_gp_level_table57_166_1534_gp_level_table57_165_11058 = llf_add_float_32(res_update68_gp_level_table57_166_0532_gp_level_table57_165_11060_pack, level_table57_lane_2_pack);

  hw_uint<32 > res_update68_gp_level_table57_166_1534_gp_level_table57_165_11058_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166_1534_gp_level_table57_165_11058_pack, res_update68_gp_level_table57_166_1534_gp_level_table57_165_11058);
  hw_uint<32 > level_table57_lane_3_pack;
  set_at<0, 32, 32>(level_table57_lane_3_pack, level_table57_lane_3);
  auto res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_01056 = llf_add_float_32(res_update68_gp_level_table57_166_1534_gp_level_table57_165_11058_pack, level_table57_lane_3_pack);

  hw_uint<32 > res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_01056_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_01056_pack, res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_01056);
  hw_uint<32 > level_table57_lane_4_pack;
  set_at<0, 32, 32>(level_table57_lane_4_pack, level_table57_lane_4);
  auto res_update68_gp_level_table57_166_0532_gp_level_table57_165_01054 = llf_add_float_32(res_update68_gp_level_table57_166__m_1530_gp_level_table57_165_01056_pack, level_table57_lane_4_pack);

  hw_uint<32 > res_update68_gp_level_table57_166_0532_gp_level_table57_165_01054_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166_0532_gp_level_table57_165_01054_pack, res_update68_gp_level_table57_166_0532_gp_level_table57_165_01054);
  hw_uint<32 > level_table57_lane_5_pack;
  set_at<0, 32, 32>(level_table57_lane_5_pack, level_table57_lane_5);
  auto res_update68_gp_level_table57_166_1534_gp_level_table57_165_01052 = llf_add_float_32(res_update68_gp_level_table57_166_0532_gp_level_table57_165_01054_pack, level_table57_lane_5_pack);

  hw_uint<32 > res_update68_gp_level_table57_166_1534_gp_level_table57_165_01052_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166_1534_gp_level_table57_165_01052_pack, res_update68_gp_level_table57_166_1534_gp_level_table57_165_01052);
  hw_uint<32 > level_table57_lane_6_pack;
  set_at<0, 32, 32>(level_table57_lane_6_pack, level_table57_lane_6);
  auto res_update68_gp_level_table57_166__m_1530_gp_level_table57_165__m_11050 = llf_add_float_32(res_update68_gp_level_table57_166_1534_gp_level_table57_165_01052_pack, level_table57_lane_6_pack);

  hw_uint<32 > res_update68_gp_level_table57_166__m_1530_gp_level_table57_165__m_11050_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166__m_1530_gp_level_table57_165__m_11050_pack, res_update68_gp_level_table57_166__m_1530_gp_level_table57_165__m_11050);
  hw_uint<32 > level_table57_lane_7_pack;
  set_at<0, 32, 32>(level_table57_lane_7_pack, level_table57_lane_7);
  auto res_update68_gp_level_table57_166_0532_gp_level_table57_165__m_11048 = llf_add_float_32(res_update68_gp_level_table57_166__m_1530_gp_level_table57_165__m_11050_pack, level_table57_lane_7_pack);

  hw_uint<32 > res_update68_gp_level_table57_166_0532_gp_level_table57_165__m_11048_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166_0532_gp_level_table57_165__m_11048_pack, res_update68_gp_level_table57_166_0532_gp_level_table57_165__m_11048);
  hw_uint<32 > level_table57_lane_8_pack;
  set_at<0, 32, 32>(level_table57_lane_8_pack, level_table57_lane_8);
  auto res_update68_gp_level_table57_166_1534_gp_level_table57_165__m_11046 = llf_add_float_32(res_update68_gp_level_table57_166_0532_gp_level_table57_165__m_11048_pack, level_table57_lane_8_pack);

  hw_uint<32 > res_update68_gp_level_table57_166_1534_gp_level_table57_165__m_11046_pack;
  set_at<0, 32, 32>(res_update68_gp_level_table57_166_1534_gp_level_table57_165__m_11046_pack, res_update68_gp_level_table57_166_1534_gp_level_table57_165__m_11046);
  auto res_avg69 = avg_9_float(res_update68_gp_level_table57_166_1534_gp_level_table57_165__m_11046_pack);
  hw_uint<32 > return_value1164;
  set_at<0, 32, 32>(return_value1164, res_avg69);
  return return_value1164;

}

hw_uint<32> gp_level_table57_272_cu1166(hw_uint<32*9>& gp_level_table57_1_buf62) {
  hw_uint<32> gp_level_table57_1_buf62_lane_0 = gp_level_table57_1_buf62.extract<0, 31>();
  hw_uint<32> gp_level_table57_1_buf62_lane_1 = gp_level_table57_1_buf62.extract<32, 63>();
  hw_uint<32> gp_level_table57_1_buf62_lane_2 = gp_level_table57_1_buf62.extract<64, 95>();
  hw_uint<32> gp_level_table57_1_buf62_lane_3 = gp_level_table57_1_buf62.extract<96, 127>();
  hw_uint<32> gp_level_table57_1_buf62_lane_4 = gp_level_table57_1_buf62.extract<128, 159>();
  hw_uint<32> gp_level_table57_1_buf62_lane_5 = gp_level_table57_1_buf62.extract<160, 191>();
  hw_uint<32> gp_level_table57_1_buf62_lane_6 = gp_level_table57_1_buf62.extract<192, 223>();
  hw_uint<32> gp_level_table57_1_buf62_lane_7 = gp_level_table57_1_buf62.extract<224, 255>();
  hw_uint<32> gp_level_table57_1_buf62_lane_8 = gp_level_table57_1_buf62.extract<256, 287>();

	
  auto res_init75 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table57_1_buf62_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_0_pack, gp_level_table57_1_buf62_lane_0);
  hw_uint<32 > res_init75_pack;
  set_at<0, 32, 32>(res_init75_pack, res_init75);
  auto res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_11098 = llf_add_float_32(gp_level_table57_1_buf62_lane_0_pack, res_init75_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_1_pack, gp_level_table57_1_buf62_lane_1);
  hw_uint<32 > res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_11098_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_11098_pack, res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_11098);
  auto res_update76_gp_level_table57_274_0520_gp_level_table57_273_11096 = llf_add_float_32(gp_level_table57_1_buf62_lane_1_pack, res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_11098_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_2_pack, gp_level_table57_1_buf62_lane_2);
  hw_uint<32 > res_update76_gp_level_table57_274_0520_gp_level_table57_273_11096_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274_0520_gp_level_table57_273_11096_pack, res_update76_gp_level_table57_274_0520_gp_level_table57_273_11096);
  auto res_update76_gp_level_table57_274_1522_gp_level_table57_273_11094 = llf_add_float_32(gp_level_table57_1_buf62_lane_2_pack, res_update76_gp_level_table57_274_0520_gp_level_table57_273_11096_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_3_pack, gp_level_table57_1_buf62_lane_3);
  hw_uint<32 > res_update76_gp_level_table57_274_1522_gp_level_table57_273_11094_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274_1522_gp_level_table57_273_11094_pack, res_update76_gp_level_table57_274_1522_gp_level_table57_273_11094);
  auto res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_01092 = llf_add_float_32(gp_level_table57_1_buf62_lane_3_pack, res_update76_gp_level_table57_274_1522_gp_level_table57_273_11094_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_4_pack, gp_level_table57_1_buf62_lane_4);
  hw_uint<32 > res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_01092_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_01092_pack, res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_01092);
  auto res_update76_gp_level_table57_274_0520_gp_level_table57_273_01090 = llf_add_float_32(gp_level_table57_1_buf62_lane_4_pack, res_update76_gp_level_table57_274__m_1518_gp_level_table57_273_01092_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_5_pack, gp_level_table57_1_buf62_lane_5);
  hw_uint<32 > res_update76_gp_level_table57_274_0520_gp_level_table57_273_01090_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274_0520_gp_level_table57_273_01090_pack, res_update76_gp_level_table57_274_0520_gp_level_table57_273_01090);
  auto res_update76_gp_level_table57_274_1522_gp_level_table57_273_01088 = llf_add_float_32(gp_level_table57_1_buf62_lane_5_pack, res_update76_gp_level_table57_274_0520_gp_level_table57_273_01090_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_6_pack, gp_level_table57_1_buf62_lane_6);
  hw_uint<32 > res_update76_gp_level_table57_274_1522_gp_level_table57_273_01088_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274_1522_gp_level_table57_273_01088_pack, res_update76_gp_level_table57_274_1522_gp_level_table57_273_01088);
  auto res_update76_gp_level_table57_274__m_1518_gp_level_table57_273__m_11086 = llf_add_float_32(gp_level_table57_1_buf62_lane_6_pack, res_update76_gp_level_table57_274_1522_gp_level_table57_273_01088_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_7_pack, gp_level_table57_1_buf62_lane_7);
  hw_uint<32 > res_update76_gp_level_table57_274__m_1518_gp_level_table57_273__m_11086_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274__m_1518_gp_level_table57_273__m_11086_pack, res_update76_gp_level_table57_274__m_1518_gp_level_table57_273__m_11086);
  auto res_update76_gp_level_table57_274_0520_gp_level_table57_273__m_11084 = llf_add_float_32(gp_level_table57_1_buf62_lane_7_pack, res_update76_gp_level_table57_274__m_1518_gp_level_table57_273__m_11086_pack);

  hw_uint<32 > gp_level_table57_1_buf62_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table57_1_buf62_lane_8_pack, gp_level_table57_1_buf62_lane_8);
  hw_uint<32 > res_update76_gp_level_table57_274_0520_gp_level_table57_273__m_11084_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274_0520_gp_level_table57_273__m_11084_pack, res_update76_gp_level_table57_274_0520_gp_level_table57_273__m_11084);
  auto res_update76_gp_level_table57_274_1522_gp_level_table57_273__m_11082 = llf_add_float_32(gp_level_table57_1_buf62_lane_8_pack, res_update76_gp_level_table57_274_0520_gp_level_table57_273__m_11084_pack);

  hw_uint<32 > res_update76_gp_level_table57_274_1522_gp_level_table57_273__m_11082_pack;
  set_at<0, 32, 32>(res_update76_gp_level_table57_274_1522_gp_level_table57_273__m_11082_pack, res_update76_gp_level_table57_274_1522_gp_level_table57_273__m_11082);
  auto res_avg77 = avg_9_float(res_update76_gp_level_table57_274_1522_gp_level_table57_273__m_11082_pack);
  hw_uint<32 > return_value1167;
  set_at<0, 32, 32>(return_value1167, res_avg77);
  return return_value1167;

}

hw_uint<32> gp_level_table57_380_cu1169(hw_uint<32*9>& gp_level_table57_2_buf70) {
  hw_uint<32> gp_level_table57_2_buf70_lane_0 = gp_level_table57_2_buf70.extract<0, 31>();
  hw_uint<32> gp_level_table57_2_buf70_lane_1 = gp_level_table57_2_buf70.extract<32, 63>();
  hw_uint<32> gp_level_table57_2_buf70_lane_2 = gp_level_table57_2_buf70.extract<64, 95>();
  hw_uint<32> gp_level_table57_2_buf70_lane_3 = gp_level_table57_2_buf70.extract<96, 127>();
  hw_uint<32> gp_level_table57_2_buf70_lane_4 = gp_level_table57_2_buf70.extract<128, 159>();
  hw_uint<32> gp_level_table57_2_buf70_lane_5 = gp_level_table57_2_buf70.extract<160, 191>();
  hw_uint<32> gp_level_table57_2_buf70_lane_6 = gp_level_table57_2_buf70.extract<192, 223>();
  hw_uint<32> gp_level_table57_2_buf70_lane_7 = gp_level_table57_2_buf70.extract<224, 255>();
  hw_uint<32> gp_level_table57_2_buf70_lane_8 = gp_level_table57_2_buf70.extract<256, 287>();

	
  auto res_init83 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table57_2_buf70_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_0_pack, gp_level_table57_2_buf70_lane_0);
  hw_uint<32 > res_init83_pack;
  set_at<0, 32, 32>(res_init83_pack, res_init83);
  auto res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_11134 = llf_add_float_32(gp_level_table57_2_buf70_lane_0_pack, res_init83_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_1_pack, gp_level_table57_2_buf70_lane_1);
  hw_uint<32 > res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_11134_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_11134_pack, res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_11134);
  auto res_update84_gp_level_table57_382_0664_gp_level_table57_381_11132 = llf_add_float_32(gp_level_table57_2_buf70_lane_1_pack, res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_11134_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_2_pack, gp_level_table57_2_buf70_lane_2);
  hw_uint<32 > res_update84_gp_level_table57_382_0664_gp_level_table57_381_11132_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382_0664_gp_level_table57_381_11132_pack, res_update84_gp_level_table57_382_0664_gp_level_table57_381_11132);
  auto res_update84_gp_level_table57_382_1666_gp_level_table57_381_11130 = llf_add_float_32(gp_level_table57_2_buf70_lane_2_pack, res_update84_gp_level_table57_382_0664_gp_level_table57_381_11132_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_3_pack, gp_level_table57_2_buf70_lane_3);
  hw_uint<32 > res_update84_gp_level_table57_382_1666_gp_level_table57_381_11130_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382_1666_gp_level_table57_381_11130_pack, res_update84_gp_level_table57_382_1666_gp_level_table57_381_11130);
  auto res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_01128 = llf_add_float_32(gp_level_table57_2_buf70_lane_3_pack, res_update84_gp_level_table57_382_1666_gp_level_table57_381_11130_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_4_pack, gp_level_table57_2_buf70_lane_4);
  hw_uint<32 > res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_01128_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_01128_pack, res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_01128);
  auto res_update84_gp_level_table57_382_0664_gp_level_table57_381_01126 = llf_add_float_32(gp_level_table57_2_buf70_lane_4_pack, res_update84_gp_level_table57_382__m_1662_gp_level_table57_381_01128_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_5_pack, gp_level_table57_2_buf70_lane_5);
  hw_uint<32 > res_update84_gp_level_table57_382_0664_gp_level_table57_381_01126_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382_0664_gp_level_table57_381_01126_pack, res_update84_gp_level_table57_382_0664_gp_level_table57_381_01126);
  auto res_update84_gp_level_table57_382_1666_gp_level_table57_381_01124 = llf_add_float_32(gp_level_table57_2_buf70_lane_5_pack, res_update84_gp_level_table57_382_0664_gp_level_table57_381_01126_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_6_pack, gp_level_table57_2_buf70_lane_6);
  hw_uint<32 > res_update84_gp_level_table57_382_1666_gp_level_table57_381_01124_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382_1666_gp_level_table57_381_01124_pack, res_update84_gp_level_table57_382_1666_gp_level_table57_381_01124);
  auto res_update84_gp_level_table57_382__m_1662_gp_level_table57_381__m_11122 = llf_add_float_32(gp_level_table57_2_buf70_lane_6_pack, res_update84_gp_level_table57_382_1666_gp_level_table57_381_01124_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_7_pack, gp_level_table57_2_buf70_lane_7);
  hw_uint<32 > res_update84_gp_level_table57_382__m_1662_gp_level_table57_381__m_11122_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382__m_1662_gp_level_table57_381__m_11122_pack, res_update84_gp_level_table57_382__m_1662_gp_level_table57_381__m_11122);
  auto res_update84_gp_level_table57_382_0664_gp_level_table57_381__m_11120 = llf_add_float_32(gp_level_table57_2_buf70_lane_7_pack, res_update84_gp_level_table57_382__m_1662_gp_level_table57_381__m_11122_pack);

  hw_uint<32 > gp_level_table57_2_buf70_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table57_2_buf70_lane_8_pack, gp_level_table57_2_buf70_lane_8);
  hw_uint<32 > res_update84_gp_level_table57_382_0664_gp_level_table57_381__m_11120_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382_0664_gp_level_table57_381__m_11120_pack, res_update84_gp_level_table57_382_0664_gp_level_table57_381__m_11120);
  auto res_update84_gp_level_table57_382_1666_gp_level_table57_381__m_11118 = llf_add_float_32(gp_level_table57_2_buf70_lane_8_pack, res_update84_gp_level_table57_382_0664_gp_level_table57_381__m_11120_pack);

  hw_uint<32 > res_update84_gp_level_table57_382_1666_gp_level_table57_381__m_11118_pack;
  set_at<0, 32, 32>(res_update84_gp_level_table57_382_1666_gp_level_table57_381__m_11118_pack, res_update84_gp_level_table57_382_1666_gp_level_table57_381__m_11118);
  auto res_avg85 = avg_9_float(res_update84_gp_level_table57_382_1666_gp_level_table57_381__m_11118_pack);
  hw_uint<32 > return_value1170;
  set_at<0, 32, 32>(return_value1170, res_avg85);
  return return_value1170;

}

hw_uint<32> gp_level_table163_1170_cu1172(hw_uint<32*9>& level_table163) {
  hw_uint<32> level_table163_lane_0 = level_table163.extract<0, 31>();
  hw_uint<32> level_table163_lane_1 = level_table163.extract<32, 63>();
  hw_uint<32> level_table163_lane_2 = level_table163.extract<64, 95>();
  hw_uint<32> level_table163_lane_3 = level_table163.extract<96, 127>();
  hw_uint<32> level_table163_lane_4 = level_table163.extract<128, 159>();
  hw_uint<32> level_table163_lane_5 = level_table163.extract<160, 191>();
  hw_uint<32> level_table163_lane_6 = level_table163.extract<192, 223>();
  hw_uint<32> level_table163_lane_7 = level_table163.extract<224, 255>();
  hw_uint<32> level_table163_lane_8 = level_table163.extract<256, 287>();

	
  auto res_init173 = llf_set_zero_float_32();

  hw_uint<32 > res_init173_pack;
  set_at<0, 32, 32>(res_init173_pack, res_init173);
  hw_uint<32 > level_table163_lane_0_pack;
  set_at<0, 32, 32>(level_table163_lane_0_pack, level_table163_lane_0);
  auto res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_1936 = llf_add_float_32(res_init173_pack, level_table163_lane_0_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_1936_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_1936_pack, res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_1936);
  hw_uint<32 > level_table163_lane_1_pack;
  set_at<0, 32, 32>(level_table163_lane_1_pack, level_table163_lane_1);
  auto res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_1934 = llf_add_float_32(res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_1936_pack, level_table163_lane_1_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_1934_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_1934_pack, res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_1934);
  hw_uint<32 > level_table163_lane_2_pack;
  set_at<0, 32, 32>(level_table163_lane_2_pack, level_table163_lane_2);
  auto res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_1932 = llf_add_float_32(res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_1934_pack, level_table163_lane_2_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_1932_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_1932_pack, res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_1932);
  hw_uint<32 > level_table163_lane_3_pack;
  set_at<0, 32, 32>(level_table163_lane_3_pack, level_table163_lane_3);
  auto res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_0930 = llf_add_float_32(res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_1932_pack, level_table163_lane_3_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_0930_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_0930_pack, res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_0930);
  hw_uint<32 > level_table163_lane_4_pack;
  set_at<0, 32, 32>(level_table163_lane_4_pack, level_table163_lane_4);
  auto res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_0928 = llf_add_float_32(res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171_0930_pack, level_table163_lane_4_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_0928_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_0928_pack, res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_0928);
  hw_uint<32 > level_table163_lane_5_pack;
  set_at<0, 32, 32>(level_table163_lane_5_pack, level_table163_lane_5);
  auto res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_0926 = llf_add_float_32(res_update174_gp_level_table163_1172_0586_gp_level_table163_1171_0928_pack, level_table163_lane_5_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_0926_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_0926_pack, res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_0926);
  hw_uint<32 > level_table163_lane_6_pack;
  set_at<0, 32, 32>(level_table163_lane_6_pack, level_table163_lane_6);
  auto res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171__m_1924 = llf_add_float_32(res_update174_gp_level_table163_1172_1588_gp_level_table163_1171_0926_pack, level_table163_lane_6_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171__m_1924_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171__m_1924_pack, res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171__m_1924);
  hw_uint<32 > level_table163_lane_7_pack;
  set_at<0, 32, 32>(level_table163_lane_7_pack, level_table163_lane_7);
  auto res_update174_gp_level_table163_1172_0586_gp_level_table163_1171__m_1922 = llf_add_float_32(res_update174_gp_level_table163_1172__m_1584_gp_level_table163_1171__m_1924_pack, level_table163_lane_7_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172_0586_gp_level_table163_1171__m_1922_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172_0586_gp_level_table163_1171__m_1922_pack, res_update174_gp_level_table163_1172_0586_gp_level_table163_1171__m_1922);
  hw_uint<32 > level_table163_lane_8_pack;
  set_at<0, 32, 32>(level_table163_lane_8_pack, level_table163_lane_8);
  auto res_update174_gp_level_table163_1172_1588_gp_level_table163_1171__m_1920 = llf_add_float_32(res_update174_gp_level_table163_1172_0586_gp_level_table163_1171__m_1922_pack, level_table163_lane_8_pack);

  hw_uint<32 > res_update174_gp_level_table163_1172_1588_gp_level_table163_1171__m_1920_pack;
  set_at<0, 32, 32>(res_update174_gp_level_table163_1172_1588_gp_level_table163_1171__m_1920_pack, res_update174_gp_level_table163_1172_1588_gp_level_table163_1171__m_1920);
  auto res_avg175 = avg_9_float(res_update174_gp_level_table163_1172_1588_gp_level_table163_1171__m_1920_pack);
  hw_uint<32 > return_value1173;
  set_at<0, 32, 32>(return_value1173, res_avg175);
  return return_value1173;

}

hw_uint<32> gp_level_table110_1117_cu1175(hw_uint<32*9>& level_table110) {
  hw_uint<32> level_table110_lane_0 = level_table110.extract<0, 31>();
  hw_uint<32> level_table110_lane_1 = level_table110.extract<32, 63>();
  hw_uint<32> level_table110_lane_2 = level_table110.extract<64, 95>();
  hw_uint<32> level_table110_lane_3 = level_table110.extract<96, 127>();
  hw_uint<32> level_table110_lane_4 = level_table110.extract<128, 159>();
  hw_uint<32> level_table110_lane_5 = level_table110.extract<160, 191>();
  hw_uint<32> level_table110_lane_6 = level_table110.extract<192, 223>();
  hw_uint<32> level_table110_lane_7 = level_table110.extract<224, 255>();
  hw_uint<32> level_table110_lane_8 = level_table110.extract<256, 287>();

	
  auto res_init120 = llf_set_zero_float_32();

  hw_uint<32 > res_init120_pack;
  set_at<0, 32, 32>(res_init120_pack, res_init120);
  hw_uint<32 > level_table110_lane_0_pack;
  set_at<0, 32, 32>(level_table110_lane_0_pack, level_table110_lane_0);
  auto res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_11044 = llf_add_float_32(res_init120_pack, level_table110_lane_0_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_11044_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_11044_pack, res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_11044);
  hw_uint<32 > level_table110_lane_1_pack;
  set_at<0, 32, 32>(level_table110_lane_1_pack, level_table110_lane_1);
  auto res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_11042 = llf_add_float_32(res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_11044_pack, level_table110_lane_1_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_11042_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_11042_pack, res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_11042);
  hw_uint<32 > level_table110_lane_2_pack;
  set_at<0, 32, 32>(level_table110_lane_2_pack, level_table110_lane_2);
  auto res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_11040 = llf_add_float_32(res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_11042_pack, level_table110_lane_2_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_11040_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_11040_pack, res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_11040);
  hw_uint<32 > level_table110_lane_3_pack;
  set_at<0, 32, 32>(level_table110_lane_3_pack, level_table110_lane_3);
  auto res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_01038 = llf_add_float_32(res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_11040_pack, level_table110_lane_3_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_01038_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_01038_pack, res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_01038);
  hw_uint<32 > level_table110_lane_4_pack;
  set_at<0, 32, 32>(level_table110_lane_4_pack, level_table110_lane_4);
  auto res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_01036 = llf_add_float_32(res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118_01038_pack, level_table110_lane_4_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_01036_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_01036_pack, res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_01036);
  hw_uint<32 > level_table110_lane_5_pack;
  set_at<0, 32, 32>(level_table110_lane_5_pack, level_table110_lane_5);
  auto res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_01034 = llf_add_float_32(res_update121_gp_level_table110_1119_0550_gp_level_table110_1118_01036_pack, level_table110_lane_5_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_01034_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_01034_pack, res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_01034);
  hw_uint<32 > level_table110_lane_6_pack;
  set_at<0, 32, 32>(level_table110_lane_6_pack, level_table110_lane_6);
  auto res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118__m_11032 = llf_add_float_32(res_update121_gp_level_table110_1119_1552_gp_level_table110_1118_01034_pack, level_table110_lane_6_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118__m_11032_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118__m_11032_pack, res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118__m_11032);
  hw_uint<32 > level_table110_lane_7_pack;
  set_at<0, 32, 32>(level_table110_lane_7_pack, level_table110_lane_7);
  auto res_update121_gp_level_table110_1119_0550_gp_level_table110_1118__m_11030 = llf_add_float_32(res_update121_gp_level_table110_1119__m_1548_gp_level_table110_1118__m_11032_pack, level_table110_lane_7_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119_0550_gp_level_table110_1118__m_11030_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119_0550_gp_level_table110_1118__m_11030_pack, res_update121_gp_level_table110_1119_0550_gp_level_table110_1118__m_11030);
  hw_uint<32 > level_table110_lane_8_pack;
  set_at<0, 32, 32>(level_table110_lane_8_pack, level_table110_lane_8);
  auto res_update121_gp_level_table110_1119_1552_gp_level_table110_1118__m_11028 = llf_add_float_32(res_update121_gp_level_table110_1119_0550_gp_level_table110_1118__m_11030_pack, level_table110_lane_8_pack);

  hw_uint<32 > res_update121_gp_level_table110_1119_1552_gp_level_table110_1118__m_11028_pack;
  set_at<0, 32, 32>(res_update121_gp_level_table110_1119_1552_gp_level_table110_1118__m_11028_pack, res_update121_gp_level_table110_1119_1552_gp_level_table110_1118__m_11028);
  auto res_avg122 = avg_9_float(res_update121_gp_level_table110_1119_1552_gp_level_table110_1118__m_11028_pack);
  hw_uint<32 > return_value1176;
  set_at<0, 32, 32>(return_value1176, res_avg122);
  return return_value1176;

}

hw_uint<32> gp_level_table110_2125_cu1178(hw_uint<32*9>& gp_level_table110_1_buf115) {
  hw_uint<32> gp_level_table110_1_buf115_lane_0 = gp_level_table110_1_buf115.extract<0, 31>();
  hw_uint<32> gp_level_table110_1_buf115_lane_1 = gp_level_table110_1_buf115.extract<32, 63>();
  hw_uint<32> gp_level_table110_1_buf115_lane_2 = gp_level_table110_1_buf115.extract<64, 95>();
  hw_uint<32> gp_level_table110_1_buf115_lane_3 = gp_level_table110_1_buf115.extract<96, 127>();
  hw_uint<32> gp_level_table110_1_buf115_lane_4 = gp_level_table110_1_buf115.extract<128, 159>();
  hw_uint<32> gp_level_table110_1_buf115_lane_5 = gp_level_table110_1_buf115.extract<160, 191>();
  hw_uint<32> gp_level_table110_1_buf115_lane_6 = gp_level_table110_1_buf115.extract<192, 223>();
  hw_uint<32> gp_level_table110_1_buf115_lane_7 = gp_level_table110_1_buf115.extract<224, 255>();
  hw_uint<32> gp_level_table110_1_buf115_lane_8 = gp_level_table110_1_buf115.extract<256, 287>();

	
  auto res_init128 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table110_1_buf115_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_0_pack, gp_level_table110_1_buf115_lane_0);
  hw_uint<32 > res_init128_pack;
  set_at<0, 32, 32>(res_init128_pack, res_init128);
  auto res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_11008 = llf_add_float_32(gp_level_table110_1_buf115_lane_0_pack, res_init128_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_1_pack, gp_level_table110_1_buf115_lane_1);
  hw_uint<32 > res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_11008_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_11008_pack, res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_11008);
  auto res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_11006 = llf_add_float_32(gp_level_table110_1_buf115_lane_1_pack, res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_11008_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_2_pack, gp_level_table110_1_buf115_lane_2);
  hw_uint<32 > res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_11006_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_11006_pack, res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_11006);
  auto res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_11004 = llf_add_float_32(gp_level_table110_1_buf115_lane_2_pack, res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_11006_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_3_pack, gp_level_table110_1_buf115_lane_3);
  hw_uint<32 > res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_11004_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_11004_pack, res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_11004);
  auto res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_01002 = llf_add_float_32(gp_level_table110_1_buf115_lane_3_pack, res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_11004_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_4_pack, gp_level_table110_1_buf115_lane_4);
  hw_uint<32 > res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_01002_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_01002_pack, res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_01002);
  auto res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_01000 = llf_add_float_32(gp_level_table110_1_buf115_lane_4_pack, res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126_01002_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_5_pack, gp_level_table110_1_buf115_lane_5);
  hw_uint<32 > res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_01000_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_01000_pack, res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_01000);
  auto res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_0998 = llf_add_float_32(gp_level_table110_1_buf115_lane_5_pack, res_update129_gp_level_table110_2127_0562_gp_level_table110_2126_01000_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_6_pack, gp_level_table110_1_buf115_lane_6);
  hw_uint<32 > res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_0998_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_0998_pack, res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_0998);
  auto res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126__m_1996 = llf_add_float_32(gp_level_table110_1_buf115_lane_6_pack, res_update129_gp_level_table110_2127_1564_gp_level_table110_2126_0998_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_7_pack, gp_level_table110_1_buf115_lane_7);
  hw_uint<32 > res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126__m_1996_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126__m_1996_pack, res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126__m_1996);
  auto res_update129_gp_level_table110_2127_0562_gp_level_table110_2126__m_1994 = llf_add_float_32(gp_level_table110_1_buf115_lane_7_pack, res_update129_gp_level_table110_2127__m_1560_gp_level_table110_2126__m_1996_pack);

  hw_uint<32 > gp_level_table110_1_buf115_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table110_1_buf115_lane_8_pack, gp_level_table110_1_buf115_lane_8);
  hw_uint<32 > res_update129_gp_level_table110_2127_0562_gp_level_table110_2126__m_1994_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127_0562_gp_level_table110_2126__m_1994_pack, res_update129_gp_level_table110_2127_0562_gp_level_table110_2126__m_1994);
  auto res_update129_gp_level_table110_2127_1564_gp_level_table110_2126__m_1992 = llf_add_float_32(gp_level_table110_1_buf115_lane_8_pack, res_update129_gp_level_table110_2127_0562_gp_level_table110_2126__m_1994_pack);

  hw_uint<32 > res_update129_gp_level_table110_2127_1564_gp_level_table110_2126__m_1992_pack;
  set_at<0, 32, 32>(res_update129_gp_level_table110_2127_1564_gp_level_table110_2126__m_1992_pack, res_update129_gp_level_table110_2127_1564_gp_level_table110_2126__m_1992);
  auto res_avg130 = avg_9_float(res_update129_gp_level_table110_2127_1564_gp_level_table110_2126__m_1992_pack);
  hw_uint<32 > return_value1179;
  set_at<0, 32, 32>(return_value1179, res_avg130);
  return return_value1179;

}

hw_uint<32> gp_level_table110_3133_cu1181(hw_uint<32*9>& gp_level_table110_2_buf123) {
  hw_uint<32> gp_level_table110_2_buf123_lane_0 = gp_level_table110_2_buf123.extract<0, 31>();
  hw_uint<32> gp_level_table110_2_buf123_lane_1 = gp_level_table110_2_buf123.extract<32, 63>();
  hw_uint<32> gp_level_table110_2_buf123_lane_2 = gp_level_table110_2_buf123.extract<64, 95>();
  hw_uint<32> gp_level_table110_2_buf123_lane_3 = gp_level_table110_2_buf123.extract<96, 127>();
  hw_uint<32> gp_level_table110_2_buf123_lane_4 = gp_level_table110_2_buf123.extract<128, 159>();
  hw_uint<32> gp_level_table110_2_buf123_lane_5 = gp_level_table110_2_buf123.extract<160, 191>();
  hw_uint<32> gp_level_table110_2_buf123_lane_6 = gp_level_table110_2_buf123.extract<192, 223>();
  hw_uint<32> gp_level_table110_2_buf123_lane_7 = gp_level_table110_2_buf123.extract<224, 255>();
  hw_uint<32> gp_level_table110_2_buf123_lane_8 = gp_level_table110_2_buf123.extract<256, 287>();

	
  auto res_init136 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table110_2_buf123_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_0_pack, gp_level_table110_2_buf123_lane_0);
  hw_uint<32 > res_init136_pack;
  set_at<0, 32, 32>(res_init136_pack, res_init136);
  auto res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_1972 = llf_add_float_32(gp_level_table110_2_buf123_lane_0_pack, res_init136_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_1_pack, gp_level_table110_2_buf123_lane_1);
  hw_uint<32 > res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_1972_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_1972_pack, res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_1972);
  auto res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_1970 = llf_add_float_32(gp_level_table110_2_buf123_lane_1_pack, res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_1972_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_2_pack, gp_level_table110_2_buf123_lane_2);
  hw_uint<32 > res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_1970_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_1970_pack, res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_1970);
  auto res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_1968 = llf_add_float_32(gp_level_table110_2_buf123_lane_2_pack, res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_1970_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_3_pack, gp_level_table110_2_buf123_lane_3);
  hw_uint<32 > res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_1968_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_1968_pack, res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_1968);
  auto res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_0966 = llf_add_float_32(gp_level_table110_2_buf123_lane_3_pack, res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_1968_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_4_pack, gp_level_table110_2_buf123_lane_4);
  hw_uint<32 > res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_0966_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_0966_pack, res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_0966);
  auto res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_0964 = llf_add_float_32(gp_level_table110_2_buf123_lane_4_pack, res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134_0966_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_5_pack, gp_level_table110_2_buf123_lane_5);
  hw_uint<32 > res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_0964_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_0964_pack, res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_0964);
  auto res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_0962 = llf_add_float_32(gp_level_table110_2_buf123_lane_5_pack, res_update137_gp_level_table110_3135_0574_gp_level_table110_3134_0964_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_6_pack, gp_level_table110_2_buf123_lane_6);
  hw_uint<32 > res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_0962_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_0962_pack, res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_0962);
  auto res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134__m_1960 = llf_add_float_32(gp_level_table110_2_buf123_lane_6_pack, res_update137_gp_level_table110_3135_1576_gp_level_table110_3134_0962_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_7_pack, gp_level_table110_2_buf123_lane_7);
  hw_uint<32 > res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134__m_1960_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134__m_1960_pack, res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134__m_1960);
  auto res_update137_gp_level_table110_3135_0574_gp_level_table110_3134__m_1958 = llf_add_float_32(gp_level_table110_2_buf123_lane_7_pack, res_update137_gp_level_table110_3135__m_1572_gp_level_table110_3134__m_1960_pack);

  hw_uint<32 > gp_level_table110_2_buf123_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table110_2_buf123_lane_8_pack, gp_level_table110_2_buf123_lane_8);
  hw_uint<32 > res_update137_gp_level_table110_3135_0574_gp_level_table110_3134__m_1958_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135_0574_gp_level_table110_3134__m_1958_pack, res_update137_gp_level_table110_3135_0574_gp_level_table110_3134__m_1958);
  auto res_update137_gp_level_table110_3135_1576_gp_level_table110_3134__m_1956 = llf_add_float_32(gp_level_table110_2_buf123_lane_8_pack, res_update137_gp_level_table110_3135_0574_gp_level_table110_3134__m_1958_pack);

  hw_uint<32 > res_update137_gp_level_table110_3135_1576_gp_level_table110_3134__m_1956_pack;
  set_at<0, 32, 32>(res_update137_gp_level_table110_3135_1576_gp_level_table110_3134__m_1956_pack, res_update137_gp_level_table110_3135_1576_gp_level_table110_3134__m_1956);
  auto res_avg138 = avg_9_float(res_update137_gp_level_table110_3135_1576_gp_level_table110_3134__m_1956_pack);
  hw_uint<32 > return_value1182;
  set_at<0, 32, 32>(return_value1182, res_avg138);
  return return_value1182;

}

hw_uint<32> gp_level_table322_3345_cu1184(hw_uint<32*9>& gp_level_table322_2_buf335) {
  hw_uint<32> gp_level_table322_2_buf335_lane_0 = gp_level_table322_2_buf335.extract<0, 31>();
  hw_uint<32> gp_level_table322_2_buf335_lane_1 = gp_level_table322_2_buf335.extract<32, 63>();
  hw_uint<32> gp_level_table322_2_buf335_lane_2 = gp_level_table322_2_buf335.extract<64, 95>();
  hw_uint<32> gp_level_table322_2_buf335_lane_3 = gp_level_table322_2_buf335.extract<96, 127>();
  hw_uint<32> gp_level_table322_2_buf335_lane_4 = gp_level_table322_2_buf335.extract<128, 159>();
  hw_uint<32> gp_level_table322_2_buf335_lane_5 = gp_level_table322_2_buf335.extract<160, 191>();
  hw_uint<32> gp_level_table322_2_buf335_lane_6 = gp_level_table322_2_buf335.extract<192, 223>();
  hw_uint<32> gp_level_table322_2_buf335_lane_7 = gp_level_table322_2_buf335.extract<224, 255>();
  hw_uint<32> gp_level_table322_2_buf335_lane_8 = gp_level_table322_2_buf335.extract<256, 287>();

	
  auto res_init348 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table322_2_buf335_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_0_pack, gp_level_table322_2_buf335_lane_0);
  hw_uint<32 > res_init348_pack;
  set_at<0, 32, 32>(res_init348_pack, res_init348);
  auto res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_1810 = llf_add_float_32(gp_level_table322_2_buf335_lane_0_pack, res_init348_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_1_pack, gp_level_table322_2_buf335_lane_1);
  hw_uint<32 > res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_1810_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_1810_pack, res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_1810);
  auto res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_1808 = llf_add_float_32(gp_level_table322_2_buf335_lane_1_pack, res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_1810_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_2_pack, gp_level_table322_2_buf335_lane_2);
  hw_uint<32 > res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_1808_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_1808_pack, res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_1808);
  auto res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_1806 = llf_add_float_32(gp_level_table322_2_buf335_lane_2_pack, res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_1808_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_3_pack, gp_level_table322_2_buf335_lane_3);
  hw_uint<32 > res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_1806_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_1806_pack, res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_1806);
  auto res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_0804 = llf_add_float_32(gp_level_table322_2_buf335_lane_3_pack, res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_1806_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_4_pack, gp_level_table322_2_buf335_lane_4);
  hw_uint<32 > res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_0804_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_0804_pack, res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_0804);
  auto res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_0802 = llf_add_float_32(gp_level_table322_2_buf335_lane_4_pack, res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346_0804_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_5_pack, gp_level_table322_2_buf335_lane_5);
  hw_uint<32 > res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_0802_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_0802_pack, res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_0802);
  auto res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_0800 = llf_add_float_32(gp_level_table322_2_buf335_lane_5_pack, res_update349_gp_level_table322_3347_0616_gp_level_table322_3346_0802_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_6_pack, gp_level_table322_2_buf335_lane_6);
  hw_uint<32 > res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_0800_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_0800_pack, res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_0800);
  auto res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346__m_1798 = llf_add_float_32(gp_level_table322_2_buf335_lane_6_pack, res_update349_gp_level_table322_3347_1618_gp_level_table322_3346_0800_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_7_pack, gp_level_table322_2_buf335_lane_7);
  hw_uint<32 > res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346__m_1798_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346__m_1798_pack, res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346__m_1798);
  auto res_update349_gp_level_table322_3347_0616_gp_level_table322_3346__m_1796 = llf_add_float_32(gp_level_table322_2_buf335_lane_7_pack, res_update349_gp_level_table322_3347__m_1614_gp_level_table322_3346__m_1798_pack);

  hw_uint<32 > gp_level_table322_2_buf335_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table322_2_buf335_lane_8_pack, gp_level_table322_2_buf335_lane_8);
  hw_uint<32 > res_update349_gp_level_table322_3347_0616_gp_level_table322_3346__m_1796_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347_0616_gp_level_table322_3346__m_1796_pack, res_update349_gp_level_table322_3347_0616_gp_level_table322_3346__m_1796);
  auto res_update349_gp_level_table322_3347_1618_gp_level_table322_3346__m_1794 = llf_add_float_32(gp_level_table322_2_buf335_lane_8_pack, res_update349_gp_level_table322_3347_0616_gp_level_table322_3346__m_1796_pack);

  hw_uint<32 > res_update349_gp_level_table322_3347_1618_gp_level_table322_3346__m_1794_pack;
  set_at<0, 32, 32>(res_update349_gp_level_table322_3347_1618_gp_level_table322_3346__m_1794_pack, res_update349_gp_level_table322_3347_1618_gp_level_table322_3346__m_1794);
  auto res_avg350 = avg_9_float(res_update349_gp_level_table322_3347_1618_gp_level_table322_3346__m_1794_pack);
  hw_uint<32 > return_value1185;
  set_at<0, 32, 32>(return_value1185, res_avg350);
  return return_value1185;

}

hw_uint<32> gp_level_table163_2178_cu1187(hw_uint<32*9>& gp_level_table163_1_buf168) {
  hw_uint<32> gp_level_table163_1_buf168_lane_0 = gp_level_table163_1_buf168.extract<0, 31>();
  hw_uint<32> gp_level_table163_1_buf168_lane_1 = gp_level_table163_1_buf168.extract<32, 63>();
  hw_uint<32> gp_level_table163_1_buf168_lane_2 = gp_level_table163_1_buf168.extract<64, 95>();
  hw_uint<32> gp_level_table163_1_buf168_lane_3 = gp_level_table163_1_buf168.extract<96, 127>();
  hw_uint<32> gp_level_table163_1_buf168_lane_4 = gp_level_table163_1_buf168.extract<128, 159>();
  hw_uint<32> gp_level_table163_1_buf168_lane_5 = gp_level_table163_1_buf168.extract<160, 191>();
  hw_uint<32> gp_level_table163_1_buf168_lane_6 = gp_level_table163_1_buf168.extract<192, 223>();
  hw_uint<32> gp_level_table163_1_buf168_lane_7 = gp_level_table163_1_buf168.extract<224, 255>();
  hw_uint<32> gp_level_table163_1_buf168_lane_8 = gp_level_table163_1_buf168.extract<256, 287>();

	
  auto res_init181 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table163_1_buf168_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_0_pack, gp_level_table163_1_buf168_lane_0);
  hw_uint<32 > res_init181_pack;
  set_at<0, 32, 32>(res_init181_pack, res_init181);
  auto res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_1900 = llf_add_float_32(gp_level_table163_1_buf168_lane_0_pack, res_init181_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_1_pack, gp_level_table163_1_buf168_lane_1);
  hw_uint<32 > res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_1900_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_1900_pack, res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_1900);
  auto res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_1898 = llf_add_float_32(gp_level_table163_1_buf168_lane_1_pack, res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_1900_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_2_pack, gp_level_table163_1_buf168_lane_2);
  hw_uint<32 > res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_1898_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_1898_pack, res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_1898);
  auto res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_1896 = llf_add_float_32(gp_level_table163_1_buf168_lane_2_pack, res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_1898_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_3_pack, gp_level_table163_1_buf168_lane_3);
  hw_uint<32 > res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_1896_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_1896_pack, res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_1896);
  auto res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_0894 = llf_add_float_32(gp_level_table163_1_buf168_lane_3_pack, res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_1896_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_4_pack, gp_level_table163_1_buf168_lane_4);
  hw_uint<32 > res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_0894_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_0894_pack, res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_0894);
  auto res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_0892 = llf_add_float_32(gp_level_table163_1_buf168_lane_4_pack, res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179_0894_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_5_pack, gp_level_table163_1_buf168_lane_5);
  hw_uint<32 > res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_0892_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_0892_pack, res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_0892);
  auto res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_0890 = llf_add_float_32(gp_level_table163_1_buf168_lane_5_pack, res_update182_gp_level_table163_2180_0598_gp_level_table163_2179_0892_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_6_pack, gp_level_table163_1_buf168_lane_6);
  hw_uint<32 > res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_0890_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_0890_pack, res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_0890);
  auto res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179__m_1888 = llf_add_float_32(gp_level_table163_1_buf168_lane_6_pack, res_update182_gp_level_table163_2180_1600_gp_level_table163_2179_0890_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_7_pack, gp_level_table163_1_buf168_lane_7);
  hw_uint<32 > res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179__m_1888_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179__m_1888_pack, res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179__m_1888);
  auto res_update182_gp_level_table163_2180_0598_gp_level_table163_2179__m_1886 = llf_add_float_32(gp_level_table163_1_buf168_lane_7_pack, res_update182_gp_level_table163_2180__m_1596_gp_level_table163_2179__m_1888_pack);

  hw_uint<32 > gp_level_table163_1_buf168_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table163_1_buf168_lane_8_pack, gp_level_table163_1_buf168_lane_8);
  hw_uint<32 > res_update182_gp_level_table163_2180_0598_gp_level_table163_2179__m_1886_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180_0598_gp_level_table163_2179__m_1886_pack, res_update182_gp_level_table163_2180_0598_gp_level_table163_2179__m_1886);
  auto res_update182_gp_level_table163_2180_1600_gp_level_table163_2179__m_1884 = llf_add_float_32(gp_level_table163_1_buf168_lane_8_pack, res_update182_gp_level_table163_2180_0598_gp_level_table163_2179__m_1886_pack);

  hw_uint<32 > res_update182_gp_level_table163_2180_1600_gp_level_table163_2179__m_1884_pack;
  set_at<0, 32, 32>(res_update182_gp_level_table163_2180_1600_gp_level_table163_2179__m_1884_pack, res_update182_gp_level_table163_2180_1600_gp_level_table163_2179__m_1884);
  auto res_avg183 = avg_9_float(res_update182_gp_level_table163_2180_1600_gp_level_table163_2179__m_1884_pack);
  hw_uint<32 > return_value1188;
  set_at<0, 32, 32>(return_value1188, res_avg183);
  return return_value1188;

}

hw_uint<32> gp_level_table163_3186_cu1190(hw_uint<32*9>& gp_level_table163_2_buf176) {
  hw_uint<32> gp_level_table163_2_buf176_lane_0 = gp_level_table163_2_buf176.extract<0, 31>();
  hw_uint<32> gp_level_table163_2_buf176_lane_1 = gp_level_table163_2_buf176.extract<32, 63>();
  hw_uint<32> gp_level_table163_2_buf176_lane_2 = gp_level_table163_2_buf176.extract<64, 95>();
  hw_uint<32> gp_level_table163_2_buf176_lane_3 = gp_level_table163_2_buf176.extract<96, 127>();
  hw_uint<32> gp_level_table163_2_buf176_lane_4 = gp_level_table163_2_buf176.extract<128, 159>();
  hw_uint<32> gp_level_table163_2_buf176_lane_5 = gp_level_table163_2_buf176.extract<160, 191>();
  hw_uint<32> gp_level_table163_2_buf176_lane_6 = gp_level_table163_2_buf176.extract<192, 223>();
  hw_uint<32> gp_level_table163_2_buf176_lane_7 = gp_level_table163_2_buf176.extract<224, 255>();
  hw_uint<32> gp_level_table163_2_buf176_lane_8 = gp_level_table163_2_buf176.extract<256, 287>();

	
  auto res_init189 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table163_2_buf176_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_0_pack, gp_level_table163_2_buf176_lane_0);
  hw_uint<32 > res_init189_pack;
  set_at<0, 32, 32>(res_init189_pack, res_init189);
  auto res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_1864 = llf_add_float_32(gp_level_table163_2_buf176_lane_0_pack, res_init189_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_1_pack, gp_level_table163_2_buf176_lane_1);
  hw_uint<32 > res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_1864_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_1864_pack, res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_1864);
  auto res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_1862 = llf_add_float_32(gp_level_table163_2_buf176_lane_1_pack, res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_1864_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_2_pack, gp_level_table163_2_buf176_lane_2);
  hw_uint<32 > res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_1862_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_1862_pack, res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_1862);
  auto res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_1860 = llf_add_float_32(gp_level_table163_2_buf176_lane_2_pack, res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_1862_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_3_pack, gp_level_table163_2_buf176_lane_3);
  hw_uint<32 > res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_1860_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_1860_pack, res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_1860);
  auto res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_0858 = llf_add_float_32(gp_level_table163_2_buf176_lane_3_pack, res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_1860_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_4_pack, gp_level_table163_2_buf176_lane_4);
  hw_uint<32 > res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_0858_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_0858_pack, res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_0858);
  auto res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_0856 = llf_add_float_32(gp_level_table163_2_buf176_lane_4_pack, res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187_0858_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_5_pack, gp_level_table163_2_buf176_lane_5);
  hw_uint<32 > res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_0856_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_0856_pack, res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_0856);
  auto res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_0854 = llf_add_float_32(gp_level_table163_2_buf176_lane_5_pack, res_update190_gp_level_table163_3188_0610_gp_level_table163_3187_0856_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_6_pack, gp_level_table163_2_buf176_lane_6);
  hw_uint<32 > res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_0854_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_0854_pack, res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_0854);
  auto res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187__m_1852 = llf_add_float_32(gp_level_table163_2_buf176_lane_6_pack, res_update190_gp_level_table163_3188_1612_gp_level_table163_3187_0854_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_7_pack, gp_level_table163_2_buf176_lane_7);
  hw_uint<32 > res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187__m_1852_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187__m_1852_pack, res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187__m_1852);
  auto res_update190_gp_level_table163_3188_0610_gp_level_table163_3187__m_1850 = llf_add_float_32(gp_level_table163_2_buf176_lane_7_pack, res_update190_gp_level_table163_3188__m_1608_gp_level_table163_3187__m_1852_pack);

  hw_uint<32 > gp_level_table163_2_buf176_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table163_2_buf176_lane_8_pack, gp_level_table163_2_buf176_lane_8);
  hw_uint<32 > res_update190_gp_level_table163_3188_0610_gp_level_table163_3187__m_1850_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188_0610_gp_level_table163_3187__m_1850_pack, res_update190_gp_level_table163_3188_0610_gp_level_table163_3187__m_1850);
  auto res_update190_gp_level_table163_3188_1612_gp_level_table163_3187__m_1848 = llf_add_float_32(gp_level_table163_2_buf176_lane_8_pack, res_update190_gp_level_table163_3188_0610_gp_level_table163_3187__m_1850_pack);

  hw_uint<32 > res_update190_gp_level_table163_3188_1612_gp_level_table163_3187__m_1848_pack;
  set_at<0, 32, 32>(res_update190_gp_level_table163_3188_1612_gp_level_table163_3187__m_1848_pack, res_update190_gp_level_table163_3188_1612_gp_level_table163_3187__m_1848);
  auto res_avg191 = avg_9_float(res_update190_gp_level_table163_3188_1612_gp_level_table163_3187__m_1848_pack);
  hw_uint<32 > return_value1191;
  set_at<0, 32, 32>(return_value1191, res_avg191);
  return return_value1191;

}

hw_uint<32> gp_level_table216_1223_cu1193(hw_uint<32*9>& level_table216) {
  hw_uint<32> level_table216_lane_0 = level_table216.extract<0, 31>();
  hw_uint<32> level_table216_lane_1 = level_table216.extract<32, 63>();
  hw_uint<32> level_table216_lane_2 = level_table216.extract<64, 95>();
  hw_uint<32> level_table216_lane_3 = level_table216.extract<96, 127>();
  hw_uint<32> level_table216_lane_4 = level_table216.extract<128, 159>();
  hw_uint<32> level_table216_lane_5 = level_table216.extract<160, 191>();
  hw_uint<32> level_table216_lane_6 = level_table216.extract<192, 223>();
  hw_uint<32> level_table216_lane_7 = level_table216.extract<224, 255>();
  hw_uint<32> level_table216_lane_8 = level_table216.extract<256, 287>();

	
  auto res_init226 = llf_set_zero_float_32();

  hw_uint<32 > res_init226_pack;
  set_at<0, 32, 32>(res_init226_pack, res_init226);
  hw_uint<32 > level_table216_lane_0_pack;
  set_at<0, 32, 32>(level_table216_lane_0_pack, level_table216_lane_0);
  auto res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_1828 = llf_add_float_32(res_init226_pack, level_table216_lane_0_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_1828_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_1828_pack, res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_1828);
  hw_uint<32 > level_table216_lane_1_pack;
  set_at<0, 32, 32>(level_table216_lane_1_pack, level_table216_lane_1);
  auto res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_1826 = llf_add_float_32(res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_1828_pack, level_table216_lane_1_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_1826_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_1826_pack, res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_1826);
  hw_uint<32 > level_table216_lane_2_pack;
  set_at<0, 32, 32>(level_table216_lane_2_pack, level_table216_lane_2);
  auto res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_1824 = llf_add_float_32(res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_1826_pack, level_table216_lane_2_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_1824_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_1824_pack, res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_1824);
  hw_uint<32 > level_table216_lane_3_pack;
  set_at<0, 32, 32>(level_table216_lane_3_pack, level_table216_lane_3);
  auto res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_0822 = llf_add_float_32(res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_1824_pack, level_table216_lane_3_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_0822_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_0822_pack, res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_0822);
  hw_uint<32 > level_table216_lane_4_pack;
  set_at<0, 32, 32>(level_table216_lane_4_pack, level_table216_lane_4);
  auto res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_0820 = llf_add_float_32(res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224_0822_pack, level_table216_lane_4_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_0820_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_0820_pack, res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_0820);
  hw_uint<32 > level_table216_lane_5_pack;
  set_at<0, 32, 32>(level_table216_lane_5_pack, level_table216_lane_5);
  auto res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_0818 = llf_add_float_32(res_update227_gp_level_table216_1225_0622_gp_level_table216_1224_0820_pack, level_table216_lane_5_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_0818_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_0818_pack, res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_0818);
  hw_uint<32 > level_table216_lane_6_pack;
  set_at<0, 32, 32>(level_table216_lane_6_pack, level_table216_lane_6);
  auto res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224__m_1816 = llf_add_float_32(res_update227_gp_level_table216_1225_1624_gp_level_table216_1224_0818_pack, level_table216_lane_6_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224__m_1816_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224__m_1816_pack, res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224__m_1816);
  hw_uint<32 > level_table216_lane_7_pack;
  set_at<0, 32, 32>(level_table216_lane_7_pack, level_table216_lane_7);
  auto res_update227_gp_level_table216_1225_0622_gp_level_table216_1224__m_1814 = llf_add_float_32(res_update227_gp_level_table216_1225__m_1620_gp_level_table216_1224__m_1816_pack, level_table216_lane_7_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225_0622_gp_level_table216_1224__m_1814_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225_0622_gp_level_table216_1224__m_1814_pack, res_update227_gp_level_table216_1225_0622_gp_level_table216_1224__m_1814);
  hw_uint<32 > level_table216_lane_8_pack;
  set_at<0, 32, 32>(level_table216_lane_8_pack, level_table216_lane_8);
  auto res_update227_gp_level_table216_1225_1624_gp_level_table216_1224__m_1812 = llf_add_float_32(res_update227_gp_level_table216_1225_0622_gp_level_table216_1224__m_1814_pack, level_table216_lane_8_pack);

  hw_uint<32 > res_update227_gp_level_table216_1225_1624_gp_level_table216_1224__m_1812_pack;
  set_at<0, 32, 32>(res_update227_gp_level_table216_1225_1624_gp_level_table216_1224__m_1812_pack, res_update227_gp_level_table216_1225_1624_gp_level_table216_1224__m_1812);
  auto res_avg228 = avg_9_float(res_update227_gp_level_table216_1225_1624_gp_level_table216_1224__m_1812_pack);
  hw_uint<32 > return_value1194;
  set_at<0, 32, 32>(return_value1194, res_avg228);
  return return_value1194;

}

hw_uint<32> gp_level_table216_2231_cu1196(hw_uint<32*9>& gp_level_table216_1_buf221) {
  hw_uint<32> gp_level_table216_1_buf221_lane_0 = gp_level_table216_1_buf221.extract<0, 31>();
  hw_uint<32> gp_level_table216_1_buf221_lane_1 = gp_level_table216_1_buf221.extract<32, 63>();
  hw_uint<32> gp_level_table216_1_buf221_lane_2 = gp_level_table216_1_buf221.extract<64, 95>();
  hw_uint<32> gp_level_table216_1_buf221_lane_3 = gp_level_table216_1_buf221.extract<96, 127>();
  hw_uint<32> gp_level_table216_1_buf221_lane_4 = gp_level_table216_1_buf221.extract<128, 159>();
  hw_uint<32> gp_level_table216_1_buf221_lane_5 = gp_level_table216_1_buf221.extract<160, 191>();
  hw_uint<32> gp_level_table216_1_buf221_lane_6 = gp_level_table216_1_buf221.extract<192, 223>();
  hw_uint<32> gp_level_table216_1_buf221_lane_7 = gp_level_table216_1_buf221.extract<224, 255>();
  hw_uint<32> gp_level_table216_1_buf221_lane_8 = gp_level_table216_1_buf221.extract<256, 287>();

	
  auto res_init234 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table216_1_buf221_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_0_pack, gp_level_table216_1_buf221_lane_0);
  hw_uint<32 > res_init234_pack;
  set_at<0, 32, 32>(res_init234_pack, res_init234);
  auto res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_1792 = llf_add_float_32(gp_level_table216_1_buf221_lane_0_pack, res_init234_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_1_pack, gp_level_table216_1_buf221_lane_1);
  hw_uint<32 > res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_1792_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_1792_pack, res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_1792);
  auto res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_1790 = llf_add_float_32(gp_level_table216_1_buf221_lane_1_pack, res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_1792_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_2_pack, gp_level_table216_1_buf221_lane_2);
  hw_uint<32 > res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_1790_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_1790_pack, res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_1790);
  auto res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_1788 = llf_add_float_32(gp_level_table216_1_buf221_lane_2_pack, res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_1790_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_3_pack, gp_level_table216_1_buf221_lane_3);
  hw_uint<32 > res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_1788_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_1788_pack, res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_1788);
  auto res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_0786 = llf_add_float_32(gp_level_table216_1_buf221_lane_3_pack, res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_1788_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_4_pack, gp_level_table216_1_buf221_lane_4);
  hw_uint<32 > res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_0786_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_0786_pack, res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_0786);
  auto res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_0784 = llf_add_float_32(gp_level_table216_1_buf221_lane_4_pack, res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232_0786_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_5_pack, gp_level_table216_1_buf221_lane_5);
  hw_uint<32 > res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_0784_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_0784_pack, res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_0784);
  auto res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_0782 = llf_add_float_32(gp_level_table216_1_buf221_lane_5_pack, res_update235_gp_level_table216_2233_0634_gp_level_table216_2232_0784_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_6_pack, gp_level_table216_1_buf221_lane_6);
  hw_uint<32 > res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_0782_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_0782_pack, res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_0782);
  auto res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232__m_1780 = llf_add_float_32(gp_level_table216_1_buf221_lane_6_pack, res_update235_gp_level_table216_2233_1636_gp_level_table216_2232_0782_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_7_pack, gp_level_table216_1_buf221_lane_7);
  hw_uint<32 > res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232__m_1780_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232__m_1780_pack, res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232__m_1780);
  auto res_update235_gp_level_table216_2233_0634_gp_level_table216_2232__m_1778 = llf_add_float_32(gp_level_table216_1_buf221_lane_7_pack, res_update235_gp_level_table216_2233__m_1632_gp_level_table216_2232__m_1780_pack);

  hw_uint<32 > gp_level_table216_1_buf221_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table216_1_buf221_lane_8_pack, gp_level_table216_1_buf221_lane_8);
  hw_uint<32 > res_update235_gp_level_table216_2233_0634_gp_level_table216_2232__m_1778_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233_0634_gp_level_table216_2232__m_1778_pack, res_update235_gp_level_table216_2233_0634_gp_level_table216_2232__m_1778);
  auto res_update235_gp_level_table216_2233_1636_gp_level_table216_2232__m_1776 = llf_add_float_32(gp_level_table216_1_buf221_lane_8_pack, res_update235_gp_level_table216_2233_0634_gp_level_table216_2232__m_1778_pack);

  hw_uint<32 > res_update235_gp_level_table216_2233_1636_gp_level_table216_2232__m_1776_pack;
  set_at<0, 32, 32>(res_update235_gp_level_table216_2233_1636_gp_level_table216_2232__m_1776_pack, res_update235_gp_level_table216_2233_1636_gp_level_table216_2232__m_1776);
  auto res_avg236 = avg_9_float(res_update235_gp_level_table216_2233_1636_gp_level_table216_2232__m_1776_pack);
  hw_uint<32 > return_value1197;
  set_at<0, 32, 32>(return_value1197, res_avg236);
  return return_value1197;

}

hw_uint<32> gp_level_table216_3239_cu1199(hw_uint<32*9>& gp_level_table216_2_buf229) {
  hw_uint<32> gp_level_table216_2_buf229_lane_0 = gp_level_table216_2_buf229.extract<0, 31>();
  hw_uint<32> gp_level_table216_2_buf229_lane_1 = gp_level_table216_2_buf229.extract<32, 63>();
  hw_uint<32> gp_level_table216_2_buf229_lane_2 = gp_level_table216_2_buf229.extract<64, 95>();
  hw_uint<32> gp_level_table216_2_buf229_lane_3 = gp_level_table216_2_buf229.extract<96, 127>();
  hw_uint<32> gp_level_table216_2_buf229_lane_4 = gp_level_table216_2_buf229.extract<128, 159>();
  hw_uint<32> gp_level_table216_2_buf229_lane_5 = gp_level_table216_2_buf229.extract<160, 191>();
  hw_uint<32> gp_level_table216_2_buf229_lane_6 = gp_level_table216_2_buf229.extract<192, 223>();
  hw_uint<32> gp_level_table216_2_buf229_lane_7 = gp_level_table216_2_buf229.extract<224, 255>();
  hw_uint<32> gp_level_table216_2_buf229_lane_8 = gp_level_table216_2_buf229.extract<256, 287>();

	
  auto res_init242 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table216_2_buf229_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_0_pack, gp_level_table216_2_buf229_lane_0);
  hw_uint<32 > res_init242_pack;
  set_at<0, 32, 32>(res_init242_pack, res_init242);
  auto res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_1756 = llf_add_float_32(gp_level_table216_2_buf229_lane_0_pack, res_init242_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_1_pack, gp_level_table216_2_buf229_lane_1);
  hw_uint<32 > res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_1756_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_1756_pack, res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_1756);
  auto res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_1754 = llf_add_float_32(gp_level_table216_2_buf229_lane_1_pack, res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_1756_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_2_pack, gp_level_table216_2_buf229_lane_2);
  hw_uint<32 > res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_1754_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_1754_pack, res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_1754);
  auto res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_1752 = llf_add_float_32(gp_level_table216_2_buf229_lane_2_pack, res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_1754_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_3_pack, gp_level_table216_2_buf229_lane_3);
  hw_uint<32 > res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_1752_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_1752_pack, res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_1752);
  auto res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_0750 = llf_add_float_32(gp_level_table216_2_buf229_lane_3_pack, res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_1752_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_4_pack, gp_level_table216_2_buf229_lane_4);
  hw_uint<32 > res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_0750_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_0750_pack, res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_0750);
  auto res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_0748 = llf_add_float_32(gp_level_table216_2_buf229_lane_4_pack, res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240_0750_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_5_pack, gp_level_table216_2_buf229_lane_5);
  hw_uint<32 > res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_0748_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_0748_pack, res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_0748);
  auto res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_0746 = llf_add_float_32(gp_level_table216_2_buf229_lane_5_pack, res_update243_gp_level_table216_3241_0646_gp_level_table216_3240_0748_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_6_pack, gp_level_table216_2_buf229_lane_6);
  hw_uint<32 > res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_0746_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_0746_pack, res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_0746);
  auto res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240__m_1744 = llf_add_float_32(gp_level_table216_2_buf229_lane_6_pack, res_update243_gp_level_table216_3241_1648_gp_level_table216_3240_0746_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_7_pack, gp_level_table216_2_buf229_lane_7);
  hw_uint<32 > res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240__m_1744_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240__m_1744_pack, res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240__m_1744);
  auto res_update243_gp_level_table216_3241_0646_gp_level_table216_3240__m_1742 = llf_add_float_32(gp_level_table216_2_buf229_lane_7_pack, res_update243_gp_level_table216_3241__m_1644_gp_level_table216_3240__m_1744_pack);

  hw_uint<32 > gp_level_table216_2_buf229_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table216_2_buf229_lane_8_pack, gp_level_table216_2_buf229_lane_8);
  hw_uint<32 > res_update243_gp_level_table216_3241_0646_gp_level_table216_3240__m_1742_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241_0646_gp_level_table216_3240__m_1742_pack, res_update243_gp_level_table216_3241_0646_gp_level_table216_3240__m_1742);
  auto res_update243_gp_level_table216_3241_1648_gp_level_table216_3240__m_1740 = llf_add_float_32(gp_level_table216_2_buf229_lane_8_pack, res_update243_gp_level_table216_3241_0646_gp_level_table216_3240__m_1742_pack);

  hw_uint<32 > res_update243_gp_level_table216_3241_1648_gp_level_table216_3240__m_1740_pack;
  set_at<0, 32, 32>(res_update243_gp_level_table216_3241_1648_gp_level_table216_3240__m_1740_pack, res_update243_gp_level_table216_3241_1648_gp_level_table216_3240__m_1740);
  auto res_avg244 = avg_9_float(res_update243_gp_level_table216_3241_1648_gp_level_table216_3240__m_1740_pack);
  hw_uint<32 > return_value1200;
  set_at<0, 32, 32>(return_value1200, res_avg244);
  return return_value1200;

}

hw_uint<32> gp_level_table269_1276_cu1202(hw_uint<32*9>& level_table269) {
  hw_uint<32> level_table269_lane_0 = level_table269.extract<0, 31>();
  hw_uint<32> level_table269_lane_1 = level_table269.extract<32, 63>();
  hw_uint<32> level_table269_lane_2 = level_table269.extract<64, 95>();
  hw_uint<32> level_table269_lane_3 = level_table269.extract<96, 127>();
  hw_uint<32> level_table269_lane_4 = level_table269.extract<128, 159>();
  hw_uint<32> level_table269_lane_5 = level_table269.extract<160, 191>();
  hw_uint<32> level_table269_lane_6 = level_table269.extract<192, 223>();
  hw_uint<32> level_table269_lane_7 = level_table269.extract<224, 255>();
  hw_uint<32> level_table269_lane_8 = level_table269.extract<256, 287>();

	
  auto res_init279 = llf_set_zero_float_32();

  hw_uint<32 > res_init279_pack;
  set_at<0, 32, 32>(res_init279_pack, res_init279);
  hw_uint<32 > level_table269_lane_0_pack;
  set_at<0, 32, 32>(level_table269_lane_0_pack, level_table269_lane_0);
  auto res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_1720 = llf_add_float_32(res_init279_pack, level_table269_lane_0_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_1720_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_1720_pack, res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_1720);
  hw_uint<32 > level_table269_lane_1_pack;
  set_at<0, 32, 32>(level_table269_lane_1_pack, level_table269_lane_1);
  auto res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_1718 = llf_add_float_32(res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_1720_pack, level_table269_lane_1_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_1718_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_1718_pack, res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_1718);
  hw_uint<32 > level_table269_lane_2_pack;
  set_at<0, 32, 32>(level_table269_lane_2_pack, level_table269_lane_2);
  auto res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_1716 = llf_add_float_32(res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_1718_pack, level_table269_lane_2_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_1716_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_1716_pack, res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_1716);
  hw_uint<32 > level_table269_lane_3_pack;
  set_at<0, 32, 32>(level_table269_lane_3_pack, level_table269_lane_3);
  auto res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_0714 = llf_add_float_32(res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_1716_pack, level_table269_lane_3_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_0714_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_0714_pack, res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_0714);
  hw_uint<32 > level_table269_lane_4_pack;
  set_at<0, 32, 32>(level_table269_lane_4_pack, level_table269_lane_4);
  auto res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_0712 = llf_add_float_32(res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277_0714_pack, level_table269_lane_4_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_0712_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_0712_pack, res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_0712);
  hw_uint<32 > level_table269_lane_5_pack;
  set_at<0, 32, 32>(level_table269_lane_5_pack, level_table269_lane_5);
  auto res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_0710 = llf_add_float_32(res_update280_gp_level_table269_1278_0658_gp_level_table269_1277_0712_pack, level_table269_lane_5_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_0710_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_0710_pack, res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_0710);
  hw_uint<32 > level_table269_lane_6_pack;
  set_at<0, 32, 32>(level_table269_lane_6_pack, level_table269_lane_6);
  auto res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277__m_1708 = llf_add_float_32(res_update280_gp_level_table269_1278_1660_gp_level_table269_1277_0710_pack, level_table269_lane_6_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277__m_1708_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277__m_1708_pack, res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277__m_1708);
  hw_uint<32 > level_table269_lane_7_pack;
  set_at<0, 32, 32>(level_table269_lane_7_pack, level_table269_lane_7);
  auto res_update280_gp_level_table269_1278_0658_gp_level_table269_1277__m_1706 = llf_add_float_32(res_update280_gp_level_table269_1278__m_1656_gp_level_table269_1277__m_1708_pack, level_table269_lane_7_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278_0658_gp_level_table269_1277__m_1706_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278_0658_gp_level_table269_1277__m_1706_pack, res_update280_gp_level_table269_1278_0658_gp_level_table269_1277__m_1706);
  hw_uint<32 > level_table269_lane_8_pack;
  set_at<0, 32, 32>(level_table269_lane_8_pack, level_table269_lane_8);
  auto res_update280_gp_level_table269_1278_1660_gp_level_table269_1277__m_1704 = llf_add_float_32(res_update280_gp_level_table269_1278_0658_gp_level_table269_1277__m_1706_pack, level_table269_lane_8_pack);

  hw_uint<32 > res_update280_gp_level_table269_1278_1660_gp_level_table269_1277__m_1704_pack;
  set_at<0, 32, 32>(res_update280_gp_level_table269_1278_1660_gp_level_table269_1277__m_1704_pack, res_update280_gp_level_table269_1278_1660_gp_level_table269_1277__m_1704);
  auto res_avg281 = avg_9_float(res_update280_gp_level_table269_1278_1660_gp_level_table269_1277__m_1704_pack);
  hw_uint<32 > return_value1203;
  set_at<0, 32, 32>(return_value1203, res_avg281);
  return return_value1203;

}

hw_uint<32> gp_level_table269_2284_cu1205(hw_uint<32*9>& gp_level_table269_1_buf274) {
  hw_uint<32> gp_level_table269_1_buf274_lane_0 = gp_level_table269_1_buf274.extract<0, 31>();
  hw_uint<32> gp_level_table269_1_buf274_lane_1 = gp_level_table269_1_buf274.extract<32, 63>();
  hw_uint<32> gp_level_table269_1_buf274_lane_2 = gp_level_table269_1_buf274.extract<64, 95>();
  hw_uint<32> gp_level_table269_1_buf274_lane_3 = gp_level_table269_1_buf274.extract<96, 127>();
  hw_uint<32> gp_level_table269_1_buf274_lane_4 = gp_level_table269_1_buf274.extract<128, 159>();
  hw_uint<32> gp_level_table269_1_buf274_lane_5 = gp_level_table269_1_buf274.extract<160, 191>();
  hw_uint<32> gp_level_table269_1_buf274_lane_6 = gp_level_table269_1_buf274.extract<192, 223>();
  hw_uint<32> gp_level_table269_1_buf274_lane_7 = gp_level_table269_1_buf274.extract<224, 255>();
  hw_uint<32> gp_level_table269_1_buf274_lane_8 = gp_level_table269_1_buf274.extract<256, 287>();

	
  auto res_init287 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table269_1_buf274_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_0_pack, gp_level_table269_1_buf274_lane_0);
  hw_uint<32 > res_init287_pack;
  set_at<0, 32, 32>(res_init287_pack, res_init287);
  auto res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_1684 = llf_add_float_32(gp_level_table269_1_buf274_lane_0_pack, res_init287_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_1_pack, gp_level_table269_1_buf274_lane_1);
  hw_uint<32 > res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_1684_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_1684_pack, res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_1684);
  auto res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_1682 = llf_add_float_32(gp_level_table269_1_buf274_lane_1_pack, res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_1684_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_2_pack, gp_level_table269_1_buf274_lane_2);
  hw_uint<32 > res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_1682_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_1682_pack, res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_1682);
  auto res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_1680 = llf_add_float_32(gp_level_table269_1_buf274_lane_2_pack, res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_1682_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_3_pack, gp_level_table269_1_buf274_lane_3);
  hw_uint<32 > res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_1680_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_1680_pack, res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_1680);
  auto res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_0678 = llf_add_float_32(gp_level_table269_1_buf274_lane_3_pack, res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_1680_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_4_pack, gp_level_table269_1_buf274_lane_4);
  hw_uint<32 > res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_0678_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_0678_pack, res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_0678);
  auto res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_0676 = llf_add_float_32(gp_level_table269_1_buf274_lane_4_pack, res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285_0678_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_5_pack, gp_level_table269_1_buf274_lane_5);
  hw_uint<32 > res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_0676_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_0676_pack, res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_0676);
  auto res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_0674 = llf_add_float_32(gp_level_table269_1_buf274_lane_5_pack, res_update288_gp_level_table269_2286_0508_gp_level_table269_2285_0676_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_6_pack, gp_level_table269_1_buf274_lane_6);
  hw_uint<32 > res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_0674_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_0674_pack, res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_0674);
  auto res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285__m_1672 = llf_add_float_32(gp_level_table269_1_buf274_lane_6_pack, res_update288_gp_level_table269_2286_1510_gp_level_table269_2285_0674_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_7_pack, gp_level_table269_1_buf274_lane_7);
  hw_uint<32 > res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285__m_1672_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285__m_1672_pack, res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285__m_1672);
  auto res_update288_gp_level_table269_2286_0508_gp_level_table269_2285__m_1670 = llf_add_float_32(gp_level_table269_1_buf274_lane_7_pack, res_update288_gp_level_table269_2286__m_1506_gp_level_table269_2285__m_1672_pack);

  hw_uint<32 > gp_level_table269_1_buf274_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table269_1_buf274_lane_8_pack, gp_level_table269_1_buf274_lane_8);
  hw_uint<32 > res_update288_gp_level_table269_2286_0508_gp_level_table269_2285__m_1670_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286_0508_gp_level_table269_2285__m_1670_pack, res_update288_gp_level_table269_2286_0508_gp_level_table269_2285__m_1670);
  auto res_update288_gp_level_table269_2286_1510_gp_level_table269_2285__m_1668 = llf_add_float_32(gp_level_table269_1_buf274_lane_8_pack, res_update288_gp_level_table269_2286_0508_gp_level_table269_2285__m_1670_pack);

  hw_uint<32 > res_update288_gp_level_table269_2286_1510_gp_level_table269_2285__m_1668_pack;
  set_at<0, 32, 32>(res_update288_gp_level_table269_2286_1510_gp_level_table269_2285__m_1668_pack, res_update288_gp_level_table269_2286_1510_gp_level_table269_2285__m_1668);
  auto res_avg289 = avg_9_float(res_update288_gp_level_table269_2286_1510_gp_level_table269_2285__m_1668_pack);
  hw_uint<32 > return_value1206;
  set_at<0, 32, 32>(return_value1206, res_avg289);
  return return_value1206;

}

hw_uint<32> gp_level_table269_3292_cu1208(hw_uint<32*9>& gp_level_table269_2_buf282) {
  hw_uint<32> gp_level_table269_2_buf282_lane_0 = gp_level_table269_2_buf282.extract<0, 31>();
  hw_uint<32> gp_level_table269_2_buf282_lane_1 = gp_level_table269_2_buf282.extract<32, 63>();
  hw_uint<32> gp_level_table269_2_buf282_lane_2 = gp_level_table269_2_buf282.extract<64, 95>();
  hw_uint<32> gp_level_table269_2_buf282_lane_3 = gp_level_table269_2_buf282.extract<96, 127>();
  hw_uint<32> gp_level_table269_2_buf282_lane_4 = gp_level_table269_2_buf282.extract<128, 159>();
  hw_uint<32> gp_level_table269_2_buf282_lane_5 = gp_level_table269_2_buf282.extract<160, 191>();
  hw_uint<32> gp_level_table269_2_buf282_lane_6 = gp_level_table269_2_buf282.extract<192, 223>();
  hw_uint<32> gp_level_table269_2_buf282_lane_7 = gp_level_table269_2_buf282.extract<224, 255>();
  hw_uint<32> gp_level_table269_2_buf282_lane_8 = gp_level_table269_2_buf282.extract<256, 287>();

	
  auto res_init295 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table269_2_buf282_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_0_pack, gp_level_table269_2_buf282_lane_0);
  hw_uint<32 > res_init295_pack;
  set_at<0, 32, 32>(res_init295_pack, res_init295);
  auto res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_1702 = llf_add_float_32(gp_level_table269_2_buf282_lane_0_pack, res_init295_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_1_pack, gp_level_table269_2_buf282_lane_1);
  hw_uint<32 > res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_1702_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_1702_pack, res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_1702);
  auto res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_1700 = llf_add_float_32(gp_level_table269_2_buf282_lane_1_pack, res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_1702_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_2_pack, gp_level_table269_2_buf282_lane_2);
  hw_uint<32 > res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_1700_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_1700_pack, res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_1700);
  auto res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_1698 = llf_add_float_32(gp_level_table269_2_buf282_lane_2_pack, res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_1700_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_3_pack, gp_level_table269_2_buf282_lane_3);
  hw_uint<32 > res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_1698_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_1698_pack, res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_1698);
  auto res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_0696 = llf_add_float_32(gp_level_table269_2_buf282_lane_3_pack, res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_1698_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_4_pack, gp_level_table269_2_buf282_lane_4);
  hw_uint<32 > res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_0696_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_0696_pack, res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_0696);
  auto res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_0694 = llf_add_float_32(gp_level_table269_2_buf282_lane_4_pack, res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293_0696_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_5_pack, gp_level_table269_2_buf282_lane_5);
  hw_uint<32 > res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_0694_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_0694_pack, res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_0694);
  auto res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_0692 = llf_add_float_32(gp_level_table269_2_buf282_lane_5_pack, res_update296_gp_level_table269_3294_0652_gp_level_table269_3293_0694_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_6_pack, gp_level_table269_2_buf282_lane_6);
  hw_uint<32 > res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_0692_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_0692_pack, res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_0692);
  auto res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293__m_1690 = llf_add_float_32(gp_level_table269_2_buf282_lane_6_pack, res_update296_gp_level_table269_3294_1654_gp_level_table269_3293_0692_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_7_pack, gp_level_table269_2_buf282_lane_7);
  hw_uint<32 > res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293__m_1690_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293__m_1690_pack, res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293__m_1690);
  auto res_update296_gp_level_table269_3294_0652_gp_level_table269_3293__m_1688 = llf_add_float_32(gp_level_table269_2_buf282_lane_7_pack, res_update296_gp_level_table269_3294__m_1650_gp_level_table269_3293__m_1690_pack);

  hw_uint<32 > gp_level_table269_2_buf282_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table269_2_buf282_lane_8_pack, gp_level_table269_2_buf282_lane_8);
  hw_uint<32 > res_update296_gp_level_table269_3294_0652_gp_level_table269_3293__m_1688_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294_0652_gp_level_table269_3293__m_1688_pack, res_update296_gp_level_table269_3294_0652_gp_level_table269_3293__m_1688);
  auto res_update296_gp_level_table269_3294_1654_gp_level_table269_3293__m_1686 = llf_add_float_32(gp_level_table269_2_buf282_lane_8_pack, res_update296_gp_level_table269_3294_0652_gp_level_table269_3293__m_1688_pack);

  hw_uint<32 > res_update296_gp_level_table269_3294_1654_gp_level_table269_3293__m_1686_pack;
  set_at<0, 32, 32>(res_update296_gp_level_table269_3294_1654_gp_level_table269_3293__m_1686_pack, res_update296_gp_level_table269_3294_1654_gp_level_table269_3293__m_1686);
  auto res_avg297 = avg_9_float(res_update296_gp_level_table269_3294_1654_gp_level_table269_3293__m_1686_pack);
  hw_uint<32 > return_value1209;
  set_at<0, 32, 32>(return_value1209, res_avg297);
  return return_value1209;

}

hw_uint<32> gp_level_table322_1329_cu1211(hw_uint<32*9>& level_table322) {
  hw_uint<32> level_table322_lane_0 = level_table322.extract<0, 31>();
  hw_uint<32> level_table322_lane_1 = level_table322.extract<32, 63>();
  hw_uint<32> level_table322_lane_2 = level_table322.extract<64, 95>();
  hw_uint<32> level_table322_lane_3 = level_table322.extract<96, 127>();
  hw_uint<32> level_table322_lane_4 = level_table322.extract<128, 159>();
  hw_uint<32> level_table322_lane_5 = level_table322.extract<160, 191>();
  hw_uint<32> level_table322_lane_6 = level_table322.extract<192, 223>();
  hw_uint<32> level_table322_lane_7 = level_table322.extract<224, 255>();
  hw_uint<32> level_table322_lane_8 = level_table322.extract<256, 287>();

	
  auto res_init332 = llf_set_zero_float_32();

  hw_uint<32 > res_init332_pack;
  set_at<0, 32, 32>(res_init332_pack, res_init332);
  hw_uint<32 > level_table322_lane_0_pack;
  set_at<0, 32, 32>(level_table322_lane_0_pack, level_table322_lane_0);
  auto res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_1738 = llf_add_float_32(res_init332_pack, level_table322_lane_0_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_1738_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_1738_pack, res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_1738);
  hw_uint<32 > level_table322_lane_1_pack;
  set_at<0, 32, 32>(level_table322_lane_1_pack, level_table322_lane_1);
  auto res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_1736 = llf_add_float_32(res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_1738_pack, level_table322_lane_1_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_1736_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_1736_pack, res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_1736);
  hw_uint<32 > level_table322_lane_2_pack;
  set_at<0, 32, 32>(level_table322_lane_2_pack, level_table322_lane_2);
  auto res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_1734 = llf_add_float_32(res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_1736_pack, level_table322_lane_2_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_1734_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_1734_pack, res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_1734);
  hw_uint<32 > level_table322_lane_3_pack;
  set_at<0, 32, 32>(level_table322_lane_3_pack, level_table322_lane_3);
  auto res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_0732 = llf_add_float_32(res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_1734_pack, level_table322_lane_3_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_0732_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_0732_pack, res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_0732);
  hw_uint<32 > level_table322_lane_4_pack;
  set_at<0, 32, 32>(level_table322_lane_4_pack, level_table322_lane_4);
  auto res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_0730 = llf_add_float_32(res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330_0732_pack, level_table322_lane_4_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_0730_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_0730_pack, res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_0730);
  hw_uint<32 > level_table322_lane_5_pack;
  set_at<0, 32, 32>(level_table322_lane_5_pack, level_table322_lane_5);
  auto res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_0728 = llf_add_float_32(res_update333_gp_level_table322_1331_0640_gp_level_table322_1330_0730_pack, level_table322_lane_5_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_0728_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_0728_pack, res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_0728);
  hw_uint<32 > level_table322_lane_6_pack;
  set_at<0, 32, 32>(level_table322_lane_6_pack, level_table322_lane_6);
  auto res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330__m_1726 = llf_add_float_32(res_update333_gp_level_table322_1331_1642_gp_level_table322_1330_0728_pack, level_table322_lane_6_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330__m_1726_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330__m_1726_pack, res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330__m_1726);
  hw_uint<32 > level_table322_lane_7_pack;
  set_at<0, 32, 32>(level_table322_lane_7_pack, level_table322_lane_7);
  auto res_update333_gp_level_table322_1331_0640_gp_level_table322_1330__m_1724 = llf_add_float_32(res_update333_gp_level_table322_1331__m_1638_gp_level_table322_1330__m_1726_pack, level_table322_lane_7_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331_0640_gp_level_table322_1330__m_1724_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331_0640_gp_level_table322_1330__m_1724_pack, res_update333_gp_level_table322_1331_0640_gp_level_table322_1330__m_1724);
  hw_uint<32 > level_table322_lane_8_pack;
  set_at<0, 32, 32>(level_table322_lane_8_pack, level_table322_lane_8);
  auto res_update333_gp_level_table322_1331_1642_gp_level_table322_1330__m_1722 = llf_add_float_32(res_update333_gp_level_table322_1331_0640_gp_level_table322_1330__m_1724_pack, level_table322_lane_8_pack);

  hw_uint<32 > res_update333_gp_level_table322_1331_1642_gp_level_table322_1330__m_1722_pack;
  set_at<0, 32, 32>(res_update333_gp_level_table322_1331_1642_gp_level_table322_1330__m_1722_pack, res_update333_gp_level_table322_1331_1642_gp_level_table322_1330__m_1722);
  auto res_avg334 = avg_9_float(res_update333_gp_level_table322_1331_1642_gp_level_table322_1330__m_1722_pack);
  hw_uint<32 > return_value1212;
  set_at<0, 32, 32>(return_value1212, res_avg334);
  return return_value1212;

}

hw_uint<32> gp_level_table322_2337_cu1214(hw_uint<32*9>& gp_level_table322_1_buf327) {
  hw_uint<32> gp_level_table322_1_buf327_lane_0 = gp_level_table322_1_buf327.extract<0, 31>();
  hw_uint<32> gp_level_table322_1_buf327_lane_1 = gp_level_table322_1_buf327.extract<32, 63>();
  hw_uint<32> gp_level_table322_1_buf327_lane_2 = gp_level_table322_1_buf327.extract<64, 95>();
  hw_uint<32> gp_level_table322_1_buf327_lane_3 = gp_level_table322_1_buf327.extract<96, 127>();
  hw_uint<32> gp_level_table322_1_buf327_lane_4 = gp_level_table322_1_buf327.extract<128, 159>();
  hw_uint<32> gp_level_table322_1_buf327_lane_5 = gp_level_table322_1_buf327.extract<160, 191>();
  hw_uint<32> gp_level_table322_1_buf327_lane_6 = gp_level_table322_1_buf327.extract<192, 223>();
  hw_uint<32> gp_level_table322_1_buf327_lane_7 = gp_level_table322_1_buf327.extract<224, 255>();
  hw_uint<32> gp_level_table322_1_buf327_lane_8 = gp_level_table322_1_buf327.extract<256, 287>();

	
  auto res_init340 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table322_1_buf327_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_0_pack, gp_level_table322_1_buf327_lane_0);
  hw_uint<32 > res_init340_pack;
  set_at<0, 32, 32>(res_init340_pack, res_init340);
  auto res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_1774 = llf_add_float_32(gp_level_table322_1_buf327_lane_0_pack, res_init340_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_1_pack, gp_level_table322_1_buf327_lane_1);
  hw_uint<32 > res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_1774_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_1774_pack, res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_1774);
  auto res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_1772 = llf_add_float_32(gp_level_table322_1_buf327_lane_1_pack, res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_1774_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_2_pack, gp_level_table322_1_buf327_lane_2);
  hw_uint<32 > res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_1772_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_1772_pack, res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_1772);
  auto res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_1770 = llf_add_float_32(gp_level_table322_1_buf327_lane_2_pack, res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_1772_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_3_pack, gp_level_table322_1_buf327_lane_3);
  hw_uint<32 > res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_1770_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_1770_pack, res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_1770);
  auto res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_0768 = llf_add_float_32(gp_level_table322_1_buf327_lane_3_pack, res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_1770_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_4_pack, gp_level_table322_1_buf327_lane_4);
  hw_uint<32 > res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_0768_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_0768_pack, res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_0768);
  auto res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_0766 = llf_add_float_32(gp_level_table322_1_buf327_lane_4_pack, res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338_0768_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_5_pack, gp_level_table322_1_buf327_lane_5);
  hw_uint<32 > res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_0766_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_0766_pack, res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_0766);
  auto res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_0764 = llf_add_float_32(gp_level_table322_1_buf327_lane_5_pack, res_update341_gp_level_table322_2339_0628_gp_level_table322_2338_0766_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_6_pack, gp_level_table322_1_buf327_lane_6);
  hw_uint<32 > res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_0764_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_0764_pack, res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_0764);
  auto res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338__m_1762 = llf_add_float_32(gp_level_table322_1_buf327_lane_6_pack, res_update341_gp_level_table322_2339_1630_gp_level_table322_2338_0764_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_7_pack, gp_level_table322_1_buf327_lane_7);
  hw_uint<32 > res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338__m_1762_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338__m_1762_pack, res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338__m_1762);
  auto res_update341_gp_level_table322_2339_0628_gp_level_table322_2338__m_1760 = llf_add_float_32(gp_level_table322_1_buf327_lane_7_pack, res_update341_gp_level_table322_2339__m_1626_gp_level_table322_2338__m_1762_pack);

  hw_uint<32 > gp_level_table322_1_buf327_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table322_1_buf327_lane_8_pack, gp_level_table322_1_buf327_lane_8);
  hw_uint<32 > res_update341_gp_level_table322_2339_0628_gp_level_table322_2338__m_1760_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339_0628_gp_level_table322_2338__m_1760_pack, res_update341_gp_level_table322_2339_0628_gp_level_table322_2338__m_1760);
  auto res_update341_gp_level_table322_2339_1630_gp_level_table322_2338__m_1758 = llf_add_float_32(gp_level_table322_1_buf327_lane_8_pack, res_update341_gp_level_table322_2339_0628_gp_level_table322_2338__m_1760_pack);

  hw_uint<32 > res_update341_gp_level_table322_2339_1630_gp_level_table322_2338__m_1758_pack;
  set_at<0, 32, 32>(res_update341_gp_level_table322_2339_1630_gp_level_table322_2338__m_1758_pack, res_update341_gp_level_table322_2339_1630_gp_level_table322_2338__m_1758);
  auto res_avg342 = avg_9_float(res_update341_gp_level_table322_2339_1630_gp_level_table322_2338__m_1758_pack);
  hw_uint<32 > return_value1215;
  set_at<0, 32, 32>(return_value1215, res_avg342);
  return return_value1215;

}

hw_uint<32> gp_level_table375_1382_cu1217(hw_uint<32*9>& level_table375) {
  hw_uint<32> level_table375_lane_0 = level_table375.extract<0, 31>();
  hw_uint<32> level_table375_lane_1 = level_table375.extract<32, 63>();
  hw_uint<32> level_table375_lane_2 = level_table375.extract<64, 95>();
  hw_uint<32> level_table375_lane_3 = level_table375.extract<96, 127>();
  hw_uint<32> level_table375_lane_4 = level_table375.extract<128, 159>();
  hw_uint<32> level_table375_lane_5 = level_table375.extract<160, 191>();
  hw_uint<32> level_table375_lane_6 = level_table375.extract<192, 223>();
  hw_uint<32> level_table375_lane_7 = level_table375.extract<224, 255>();
  hw_uint<32> level_table375_lane_8 = level_table375.extract<256, 287>();

	
  auto res_init385 = llf_set_zero_float_32();

  hw_uint<32 > res_init385_pack;
  set_at<0, 32, 32>(res_init385_pack, res_init385);
  hw_uint<32 > level_table375_lane_0_pack;
  set_at<0, 32, 32>(level_table375_lane_0_pack, level_table375_lane_0);
  auto res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_1846 = llf_add_float_32(res_init385_pack, level_table375_lane_0_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_1846_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_1846_pack, res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_1846);
  hw_uint<32 > level_table375_lane_1_pack;
  set_at<0, 32, 32>(level_table375_lane_1_pack, level_table375_lane_1);
  auto res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_1844 = llf_add_float_32(res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_1846_pack, level_table375_lane_1_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_1844_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_1844_pack, res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_1844);
  hw_uint<32 > level_table375_lane_2_pack;
  set_at<0, 32, 32>(level_table375_lane_2_pack, level_table375_lane_2);
  auto res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_1842 = llf_add_float_32(res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_1844_pack, level_table375_lane_2_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_1842_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_1842_pack, res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_1842);
  hw_uint<32 > level_table375_lane_3_pack;
  set_at<0, 32, 32>(level_table375_lane_3_pack, level_table375_lane_3);
  auto res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_0840 = llf_add_float_32(res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_1842_pack, level_table375_lane_3_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_0840_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_0840_pack, res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_0840);
  hw_uint<32 > level_table375_lane_4_pack;
  set_at<0, 32, 32>(level_table375_lane_4_pack, level_table375_lane_4);
  auto res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_0838 = llf_add_float_32(res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383_0840_pack, level_table375_lane_4_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_0838_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_0838_pack, res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_0838);
  hw_uint<32 > level_table375_lane_5_pack;
  set_at<0, 32, 32>(level_table375_lane_5_pack, level_table375_lane_5);
  auto res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_0836 = llf_add_float_32(res_update386_gp_level_table375_1384_0604_gp_level_table375_1383_0838_pack, level_table375_lane_5_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_0836_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_0836_pack, res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_0836);
  hw_uint<32 > level_table375_lane_6_pack;
  set_at<0, 32, 32>(level_table375_lane_6_pack, level_table375_lane_6);
  auto res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383__m_1834 = llf_add_float_32(res_update386_gp_level_table375_1384_1606_gp_level_table375_1383_0836_pack, level_table375_lane_6_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383__m_1834_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383__m_1834_pack, res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383__m_1834);
  hw_uint<32 > level_table375_lane_7_pack;
  set_at<0, 32, 32>(level_table375_lane_7_pack, level_table375_lane_7);
  auto res_update386_gp_level_table375_1384_0604_gp_level_table375_1383__m_1832 = llf_add_float_32(res_update386_gp_level_table375_1384__m_1602_gp_level_table375_1383__m_1834_pack, level_table375_lane_7_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384_0604_gp_level_table375_1383__m_1832_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384_0604_gp_level_table375_1383__m_1832_pack, res_update386_gp_level_table375_1384_0604_gp_level_table375_1383__m_1832);
  hw_uint<32 > level_table375_lane_8_pack;
  set_at<0, 32, 32>(level_table375_lane_8_pack, level_table375_lane_8);
  auto res_update386_gp_level_table375_1384_1606_gp_level_table375_1383__m_1830 = llf_add_float_32(res_update386_gp_level_table375_1384_0604_gp_level_table375_1383__m_1832_pack, level_table375_lane_8_pack);

  hw_uint<32 > res_update386_gp_level_table375_1384_1606_gp_level_table375_1383__m_1830_pack;
  set_at<0, 32, 32>(res_update386_gp_level_table375_1384_1606_gp_level_table375_1383__m_1830_pack, res_update386_gp_level_table375_1384_1606_gp_level_table375_1383__m_1830);
  auto res_avg387 = avg_9_float(res_update386_gp_level_table375_1384_1606_gp_level_table375_1383__m_1830_pack);
  hw_uint<32 > return_value1218;
  set_at<0, 32, 32>(return_value1218, res_avg387);
  return return_value1218;

}

hw_uint<32> gp_level_table375_2390_cu1220(hw_uint<32*9>& gp_level_table375_1_buf380) {
  hw_uint<32> gp_level_table375_1_buf380_lane_0 = gp_level_table375_1_buf380.extract<0, 31>();
  hw_uint<32> gp_level_table375_1_buf380_lane_1 = gp_level_table375_1_buf380.extract<32, 63>();
  hw_uint<32> gp_level_table375_1_buf380_lane_2 = gp_level_table375_1_buf380.extract<64, 95>();
  hw_uint<32> gp_level_table375_1_buf380_lane_3 = gp_level_table375_1_buf380.extract<96, 127>();
  hw_uint<32> gp_level_table375_1_buf380_lane_4 = gp_level_table375_1_buf380.extract<128, 159>();
  hw_uint<32> gp_level_table375_1_buf380_lane_5 = gp_level_table375_1_buf380.extract<160, 191>();
  hw_uint<32> gp_level_table375_1_buf380_lane_6 = gp_level_table375_1_buf380.extract<192, 223>();
  hw_uint<32> gp_level_table375_1_buf380_lane_7 = gp_level_table375_1_buf380.extract<224, 255>();
  hw_uint<32> gp_level_table375_1_buf380_lane_8 = gp_level_table375_1_buf380.extract<256, 287>();

	
  auto res_init393 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table375_1_buf380_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_0_pack, gp_level_table375_1_buf380_lane_0);
  hw_uint<32 > res_init393_pack;
  set_at<0, 32, 32>(res_init393_pack, res_init393);
  auto res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_1882 = llf_add_float_32(gp_level_table375_1_buf380_lane_0_pack, res_init393_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_1_pack, gp_level_table375_1_buf380_lane_1);
  hw_uint<32 > res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_1882_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_1882_pack, res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_1882);
  auto res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_1880 = llf_add_float_32(gp_level_table375_1_buf380_lane_1_pack, res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_1882_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_2_pack, gp_level_table375_1_buf380_lane_2);
  hw_uint<32 > res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_1880_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_1880_pack, res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_1880);
  auto res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_1878 = llf_add_float_32(gp_level_table375_1_buf380_lane_2_pack, res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_1880_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_3_pack, gp_level_table375_1_buf380_lane_3);
  hw_uint<32 > res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_1878_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_1878_pack, res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_1878);
  auto res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_0876 = llf_add_float_32(gp_level_table375_1_buf380_lane_3_pack, res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_1878_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_4_pack, gp_level_table375_1_buf380_lane_4);
  hw_uint<32 > res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_0876_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_0876_pack, res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_0876);
  auto res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_0874 = llf_add_float_32(gp_level_table375_1_buf380_lane_4_pack, res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391_0876_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_5_pack, gp_level_table375_1_buf380_lane_5);
  hw_uint<32 > res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_0874_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_0874_pack, res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_0874);
  auto res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_0872 = llf_add_float_32(gp_level_table375_1_buf380_lane_5_pack, res_update394_gp_level_table375_2392_0592_gp_level_table375_2391_0874_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_6_pack, gp_level_table375_1_buf380_lane_6);
  hw_uint<32 > res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_0872_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_0872_pack, res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_0872);
  auto res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391__m_1870 = llf_add_float_32(gp_level_table375_1_buf380_lane_6_pack, res_update394_gp_level_table375_2392_1594_gp_level_table375_2391_0872_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_7_pack, gp_level_table375_1_buf380_lane_7);
  hw_uint<32 > res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391__m_1870_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391__m_1870_pack, res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391__m_1870);
  auto res_update394_gp_level_table375_2392_0592_gp_level_table375_2391__m_1868 = llf_add_float_32(gp_level_table375_1_buf380_lane_7_pack, res_update394_gp_level_table375_2392__m_1590_gp_level_table375_2391__m_1870_pack);

  hw_uint<32 > gp_level_table375_1_buf380_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table375_1_buf380_lane_8_pack, gp_level_table375_1_buf380_lane_8);
  hw_uint<32 > res_update394_gp_level_table375_2392_0592_gp_level_table375_2391__m_1868_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392_0592_gp_level_table375_2391__m_1868_pack, res_update394_gp_level_table375_2392_0592_gp_level_table375_2391__m_1868);
  auto res_update394_gp_level_table375_2392_1594_gp_level_table375_2391__m_1866 = llf_add_float_32(gp_level_table375_1_buf380_lane_8_pack, res_update394_gp_level_table375_2392_0592_gp_level_table375_2391__m_1868_pack);

  hw_uint<32 > res_update394_gp_level_table375_2392_1594_gp_level_table375_2391__m_1866_pack;
  set_at<0, 32, 32>(res_update394_gp_level_table375_2392_1594_gp_level_table375_2391__m_1866_pack, res_update394_gp_level_table375_2392_1594_gp_level_table375_2391__m_1866);
  auto res_avg395 = avg_9_float(res_update394_gp_level_table375_2392_1594_gp_level_table375_2391__m_1866_pack);
  hw_uint<32 > return_value1221;
  set_at<0, 32, 32>(return_value1221, res_avg395);
  return return_value1221;

}

hw_uint<32> gp_level_table375_3398_cu1223(hw_uint<32*9>& gp_level_table375_2_buf388) {
  hw_uint<32> gp_level_table375_2_buf388_lane_0 = gp_level_table375_2_buf388.extract<0, 31>();
  hw_uint<32> gp_level_table375_2_buf388_lane_1 = gp_level_table375_2_buf388.extract<32, 63>();
  hw_uint<32> gp_level_table375_2_buf388_lane_2 = gp_level_table375_2_buf388.extract<64, 95>();
  hw_uint<32> gp_level_table375_2_buf388_lane_3 = gp_level_table375_2_buf388.extract<96, 127>();
  hw_uint<32> gp_level_table375_2_buf388_lane_4 = gp_level_table375_2_buf388.extract<128, 159>();
  hw_uint<32> gp_level_table375_2_buf388_lane_5 = gp_level_table375_2_buf388.extract<160, 191>();
  hw_uint<32> gp_level_table375_2_buf388_lane_6 = gp_level_table375_2_buf388.extract<192, 223>();
  hw_uint<32> gp_level_table375_2_buf388_lane_7 = gp_level_table375_2_buf388.extract<224, 255>();
  hw_uint<32> gp_level_table375_2_buf388_lane_8 = gp_level_table375_2_buf388.extract<256, 287>();

	
  auto res_init401 = llf_set_zero_float_32();

  hw_uint<32 > gp_level_table375_2_buf388_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_0_pack, gp_level_table375_2_buf388_lane_0);
  hw_uint<32 > res_init401_pack;
  set_at<0, 32, 32>(res_init401_pack, res_init401);
  auto res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_1918 = llf_add_float_32(gp_level_table375_2_buf388_lane_0_pack, res_init401_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_1_pack, gp_level_table375_2_buf388_lane_1);
  hw_uint<32 > res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_1918_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_1918_pack, res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_1918);
  auto res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_1916 = llf_add_float_32(gp_level_table375_2_buf388_lane_1_pack, res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_1918_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_2_pack, gp_level_table375_2_buf388_lane_2);
  hw_uint<32 > res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_1916_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_1916_pack, res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_1916);
  auto res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_1914 = llf_add_float_32(gp_level_table375_2_buf388_lane_2_pack, res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_1916_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_3_pack, gp_level_table375_2_buf388_lane_3);
  hw_uint<32 > res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_1914_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_1914_pack, res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_1914);
  auto res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_0912 = llf_add_float_32(gp_level_table375_2_buf388_lane_3_pack, res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_1914_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_4_pack, gp_level_table375_2_buf388_lane_4);
  hw_uint<32 > res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_0912_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_0912_pack, res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_0912);
  auto res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_0910 = llf_add_float_32(gp_level_table375_2_buf388_lane_4_pack, res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399_0912_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_5_pack, gp_level_table375_2_buf388_lane_5);
  hw_uint<32 > res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_0910_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_0910_pack, res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_0910);
  auto res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_0908 = llf_add_float_32(gp_level_table375_2_buf388_lane_5_pack, res_update402_gp_level_table375_3400_0580_gp_level_table375_3399_0910_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_6_pack, gp_level_table375_2_buf388_lane_6);
  hw_uint<32 > res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_0908_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_0908_pack, res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_0908);
  auto res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399__m_1906 = llf_add_float_32(gp_level_table375_2_buf388_lane_6_pack, res_update402_gp_level_table375_3400_1582_gp_level_table375_3399_0908_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_7_pack, gp_level_table375_2_buf388_lane_7);
  hw_uint<32 > res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399__m_1906_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399__m_1906_pack, res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399__m_1906);
  auto res_update402_gp_level_table375_3400_0580_gp_level_table375_3399__m_1904 = llf_add_float_32(gp_level_table375_2_buf388_lane_7_pack, res_update402_gp_level_table375_3400__m_1578_gp_level_table375_3399__m_1906_pack);

  hw_uint<32 > gp_level_table375_2_buf388_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table375_2_buf388_lane_8_pack, gp_level_table375_2_buf388_lane_8);
  hw_uint<32 > res_update402_gp_level_table375_3400_0580_gp_level_table375_3399__m_1904_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400_0580_gp_level_table375_3399__m_1904_pack, res_update402_gp_level_table375_3400_0580_gp_level_table375_3399__m_1904);
  auto res_update402_gp_level_table375_3400_1582_gp_level_table375_3399__m_1902 = llf_add_float_32(gp_level_table375_2_buf388_lane_8_pack, res_update402_gp_level_table375_3400_0580_gp_level_table375_3399__m_1904_pack);

  hw_uint<32 > res_update402_gp_level_table375_3400_1582_gp_level_table375_3399__m_1902_pack;
  set_at<0, 32, 32>(res_update402_gp_level_table375_3400_1582_gp_level_table375_3399__m_1902_pack, res_update402_gp_level_table375_3400_1582_gp_level_table375_3399__m_1902);
  auto res_avg403 = avg_9_float(res_update402_gp_level_table375_3400_1582_gp_level_table375_3399__m_1902_pack);
  hw_uint<32 > return_value1224;
  set_at<0, 32, 32>(return_value1224, res_avg403);
  return return_value1224;

}

hw_uint<32> gp_gray_1430_cu1226(hw_uint<32*9>& gray) {
  hw_uint<32> gray_lane_0 = gray.extract<0, 31>();
  hw_uint<32> gray_lane_1 = gray.extract<32, 63>();
  hw_uint<32> gray_lane_2 = gray.extract<64, 95>();
  hw_uint<32> gray_lane_3 = gray.extract<96, 127>();
  hw_uint<32> gray_lane_4 = gray.extract<128, 159>();
  hw_uint<32> gray_lane_5 = gray.extract<160, 191>();
  hw_uint<32> gray_lane_6 = gray.extract<192, 223>();
  hw_uint<32> gray_lane_7 = gray.extract<224, 255>();
  hw_uint<32> gray_lane_8 = gray.extract<256, 287>();

	
  auto res_init433 = llf_set_zero_float_32();

  hw_uint<32 > res_init433_pack;
  set_at<0, 32, 32>(res_init433_pack, res_init433);
  hw_uint<32 > gray_lane_0_pack;
  set_at<0, 32, 32>(gray_lane_0_pack, gray_lane_0);
  auto res_update434_gp_gray_1432__m_1512_gp_gray_1431_11152 = llf_add_float_32(res_init433_pack, gray_lane_0_pack);

  hw_uint<32 > res_update434_gp_gray_1432__m_1512_gp_gray_1431_11152_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432__m_1512_gp_gray_1431_11152_pack, res_update434_gp_gray_1432__m_1512_gp_gray_1431_11152);
  hw_uint<32 > gray_lane_1_pack;
  set_at<0, 32, 32>(gray_lane_1_pack, gray_lane_1);
  auto res_update434_gp_gray_1432_0514_gp_gray_1431_11150 = llf_add_float_32(res_update434_gp_gray_1432__m_1512_gp_gray_1431_11152_pack, gray_lane_1_pack);

  hw_uint<32 > res_update434_gp_gray_1432_0514_gp_gray_1431_11150_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432_0514_gp_gray_1431_11150_pack, res_update434_gp_gray_1432_0514_gp_gray_1431_11150);
  hw_uint<32 > gray_lane_2_pack;
  set_at<0, 32, 32>(gray_lane_2_pack, gray_lane_2);
  auto res_update434_gp_gray_1432_1516_gp_gray_1431_11148 = llf_add_float_32(res_update434_gp_gray_1432_0514_gp_gray_1431_11150_pack, gray_lane_2_pack);

  hw_uint<32 > res_update434_gp_gray_1432_1516_gp_gray_1431_11148_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432_1516_gp_gray_1431_11148_pack, res_update434_gp_gray_1432_1516_gp_gray_1431_11148);
  hw_uint<32 > gray_lane_3_pack;
  set_at<0, 32, 32>(gray_lane_3_pack, gray_lane_3);
  auto res_update434_gp_gray_1432__m_1512_gp_gray_1431_01146 = llf_add_float_32(res_update434_gp_gray_1432_1516_gp_gray_1431_11148_pack, gray_lane_3_pack);

  hw_uint<32 > res_update434_gp_gray_1432__m_1512_gp_gray_1431_01146_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432__m_1512_gp_gray_1431_01146_pack, res_update434_gp_gray_1432__m_1512_gp_gray_1431_01146);
  hw_uint<32 > gray_lane_4_pack;
  set_at<0, 32, 32>(gray_lane_4_pack, gray_lane_4);
  auto res_update434_gp_gray_1432_0514_gp_gray_1431_01144 = llf_add_float_32(res_update434_gp_gray_1432__m_1512_gp_gray_1431_01146_pack, gray_lane_4_pack);

  hw_uint<32 > res_update434_gp_gray_1432_0514_gp_gray_1431_01144_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432_0514_gp_gray_1431_01144_pack, res_update434_gp_gray_1432_0514_gp_gray_1431_01144);
  hw_uint<32 > gray_lane_5_pack;
  set_at<0, 32, 32>(gray_lane_5_pack, gray_lane_5);
  auto res_update434_gp_gray_1432_1516_gp_gray_1431_01142 = llf_add_float_32(res_update434_gp_gray_1432_0514_gp_gray_1431_01144_pack, gray_lane_5_pack);

  hw_uint<32 > res_update434_gp_gray_1432_1516_gp_gray_1431_01142_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432_1516_gp_gray_1431_01142_pack, res_update434_gp_gray_1432_1516_gp_gray_1431_01142);
  hw_uint<32 > gray_lane_6_pack;
  set_at<0, 32, 32>(gray_lane_6_pack, gray_lane_6);
  auto res_update434_gp_gray_1432__m_1512_gp_gray_1431__m_11140 = llf_add_float_32(res_update434_gp_gray_1432_1516_gp_gray_1431_01142_pack, gray_lane_6_pack);

  hw_uint<32 > res_update434_gp_gray_1432__m_1512_gp_gray_1431__m_11140_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432__m_1512_gp_gray_1431__m_11140_pack, res_update434_gp_gray_1432__m_1512_gp_gray_1431__m_11140);
  hw_uint<32 > gray_lane_7_pack;
  set_at<0, 32, 32>(gray_lane_7_pack, gray_lane_7);
  auto res_update434_gp_gray_1432_0514_gp_gray_1431__m_11138 = llf_add_float_32(res_update434_gp_gray_1432__m_1512_gp_gray_1431__m_11140_pack, gray_lane_7_pack);

  hw_uint<32 > res_update434_gp_gray_1432_0514_gp_gray_1431__m_11138_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432_0514_gp_gray_1431__m_11138_pack, res_update434_gp_gray_1432_0514_gp_gray_1431__m_11138);
  hw_uint<32 > gray_lane_8_pack;
  set_at<0, 32, 32>(gray_lane_8_pack, gray_lane_8);
  auto res_update434_gp_gray_1432_1516_gp_gray_1431__m_11136 = llf_add_float_32(res_update434_gp_gray_1432_0514_gp_gray_1431__m_11138_pack, gray_lane_8_pack);

  hw_uint<32 > res_update434_gp_gray_1432_1516_gp_gray_1431__m_11136_pack;
  set_at<0, 32, 32>(res_update434_gp_gray_1432_1516_gp_gray_1431__m_11136_pack, res_update434_gp_gray_1432_1516_gp_gray_1431__m_11136);
  auto res_avg435 = avg_9_float(res_update434_gp_gray_1432_1516_gp_gray_1431__m_11136_pack);
  hw_uint<32 > return_value1227;
  set_at<0, 32, 32>(return_value1227, res_avg435);
  return return_value1227;

}

hw_uint<32> gp_gray_2438_cu1229(hw_uint<32*9>& gp_gray_1_buf428) {
  hw_uint<32> gp_gray_1_buf428_lane_0 = gp_gray_1_buf428.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf428_lane_1 = gp_gray_1_buf428.extract<32, 63>();
  hw_uint<32> gp_gray_1_buf428_lane_2 = gp_gray_1_buf428.extract<64, 95>();
  hw_uint<32> gp_gray_1_buf428_lane_3 = gp_gray_1_buf428.extract<96, 127>();
  hw_uint<32> gp_gray_1_buf428_lane_4 = gp_gray_1_buf428.extract<128, 159>();
  hw_uint<32> gp_gray_1_buf428_lane_5 = gp_gray_1_buf428.extract<160, 191>();
  hw_uint<32> gp_gray_1_buf428_lane_6 = gp_gray_1_buf428.extract<192, 223>();
  hw_uint<32> gp_gray_1_buf428_lane_7 = gp_gray_1_buf428.extract<224, 255>();
  hw_uint<32> gp_gray_1_buf428_lane_8 = gp_gray_1_buf428.extract<256, 287>();

	
  auto res_init441 = llf_set_zero_float_32();

  hw_uint<32 > gp_gray_1_buf428_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_0_pack, gp_gray_1_buf428_lane_0);
  hw_uint<32 > res_init441_pack;
  set_at<0, 32, 32>(res_init441_pack, res_init441);
  auto res_update442_gp_gray_2440__m_1524_gp_gray_2439_11116 = llf_add_float_32(gp_gray_1_buf428_lane_0_pack, res_init441_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_1_pack, gp_gray_1_buf428_lane_1);
  hw_uint<32 > res_update442_gp_gray_2440__m_1524_gp_gray_2439_11116_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440__m_1524_gp_gray_2439_11116_pack, res_update442_gp_gray_2440__m_1524_gp_gray_2439_11116);
  auto res_update442_gp_gray_2440_0526_gp_gray_2439_11114 = llf_add_float_32(gp_gray_1_buf428_lane_1_pack, res_update442_gp_gray_2440__m_1524_gp_gray_2439_11116_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_2_pack, gp_gray_1_buf428_lane_2);
  hw_uint<32 > res_update442_gp_gray_2440_0526_gp_gray_2439_11114_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440_0526_gp_gray_2439_11114_pack, res_update442_gp_gray_2440_0526_gp_gray_2439_11114);
  auto res_update442_gp_gray_2440_1528_gp_gray_2439_11112 = llf_add_float_32(gp_gray_1_buf428_lane_2_pack, res_update442_gp_gray_2440_0526_gp_gray_2439_11114_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_3_pack, gp_gray_1_buf428_lane_3);
  hw_uint<32 > res_update442_gp_gray_2440_1528_gp_gray_2439_11112_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440_1528_gp_gray_2439_11112_pack, res_update442_gp_gray_2440_1528_gp_gray_2439_11112);
  auto res_update442_gp_gray_2440__m_1524_gp_gray_2439_01110 = llf_add_float_32(gp_gray_1_buf428_lane_3_pack, res_update442_gp_gray_2440_1528_gp_gray_2439_11112_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_4_pack, gp_gray_1_buf428_lane_4);
  hw_uint<32 > res_update442_gp_gray_2440__m_1524_gp_gray_2439_01110_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440__m_1524_gp_gray_2439_01110_pack, res_update442_gp_gray_2440__m_1524_gp_gray_2439_01110);
  auto res_update442_gp_gray_2440_0526_gp_gray_2439_01108 = llf_add_float_32(gp_gray_1_buf428_lane_4_pack, res_update442_gp_gray_2440__m_1524_gp_gray_2439_01110_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_5_pack, gp_gray_1_buf428_lane_5);
  hw_uint<32 > res_update442_gp_gray_2440_0526_gp_gray_2439_01108_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440_0526_gp_gray_2439_01108_pack, res_update442_gp_gray_2440_0526_gp_gray_2439_01108);
  auto res_update442_gp_gray_2440_1528_gp_gray_2439_01106 = llf_add_float_32(gp_gray_1_buf428_lane_5_pack, res_update442_gp_gray_2440_0526_gp_gray_2439_01108_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_6_pack, gp_gray_1_buf428_lane_6);
  hw_uint<32 > res_update442_gp_gray_2440_1528_gp_gray_2439_01106_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440_1528_gp_gray_2439_01106_pack, res_update442_gp_gray_2440_1528_gp_gray_2439_01106);
  auto res_update442_gp_gray_2440__m_1524_gp_gray_2439__m_11104 = llf_add_float_32(gp_gray_1_buf428_lane_6_pack, res_update442_gp_gray_2440_1528_gp_gray_2439_01106_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_7_pack, gp_gray_1_buf428_lane_7);
  hw_uint<32 > res_update442_gp_gray_2440__m_1524_gp_gray_2439__m_11104_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440__m_1524_gp_gray_2439__m_11104_pack, res_update442_gp_gray_2440__m_1524_gp_gray_2439__m_11104);
  auto res_update442_gp_gray_2440_0526_gp_gray_2439__m_11102 = llf_add_float_32(gp_gray_1_buf428_lane_7_pack, res_update442_gp_gray_2440__m_1524_gp_gray_2439__m_11104_pack);

  hw_uint<32 > gp_gray_1_buf428_lane_8_pack;
  set_at<0, 32, 32>(gp_gray_1_buf428_lane_8_pack, gp_gray_1_buf428_lane_8);
  hw_uint<32 > res_update442_gp_gray_2440_0526_gp_gray_2439__m_11102_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440_0526_gp_gray_2439__m_11102_pack, res_update442_gp_gray_2440_0526_gp_gray_2439__m_11102);
  auto res_update442_gp_gray_2440_1528_gp_gray_2439__m_11100 = llf_add_float_32(gp_gray_1_buf428_lane_8_pack, res_update442_gp_gray_2440_0526_gp_gray_2439__m_11102_pack);

  hw_uint<32 > res_update442_gp_gray_2440_1528_gp_gray_2439__m_11100_pack;
  set_at<0, 32, 32>(res_update442_gp_gray_2440_1528_gp_gray_2439__m_11100_pack, res_update442_gp_gray_2440_1528_gp_gray_2439__m_11100);
  auto res_avg443 = avg_9_float(res_update442_gp_gray_2440_1528_gp_gray_2439__m_11100_pack);
  hw_uint<32 > return_value1230;
  set_at<0, 32, 32>(return_value1230, res_avg443);
  return return_value1230;

}

hw_uint<32> gp_gray_3446_cu1232(hw_uint<32*9>& gp_gray_2_buf436) {
  hw_uint<32> gp_gray_2_buf436_lane_0 = gp_gray_2_buf436.extract<0, 31>();
  hw_uint<32> gp_gray_2_buf436_lane_1 = gp_gray_2_buf436.extract<32, 63>();
  hw_uint<32> gp_gray_2_buf436_lane_2 = gp_gray_2_buf436.extract<64, 95>();
  hw_uint<32> gp_gray_2_buf436_lane_3 = gp_gray_2_buf436.extract<96, 127>();
  hw_uint<32> gp_gray_2_buf436_lane_4 = gp_gray_2_buf436.extract<128, 159>();
  hw_uint<32> gp_gray_2_buf436_lane_5 = gp_gray_2_buf436.extract<160, 191>();
  hw_uint<32> gp_gray_2_buf436_lane_6 = gp_gray_2_buf436.extract<192, 223>();
  hw_uint<32> gp_gray_2_buf436_lane_7 = gp_gray_2_buf436.extract<224, 255>();
  hw_uint<32> gp_gray_2_buf436_lane_8 = gp_gray_2_buf436.extract<256, 287>();

	
  auto res_init449 = llf_set_zero_float_32();

  hw_uint<32 > gp_gray_2_buf436_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_0_pack, gp_gray_2_buf436_lane_0);
  hw_uint<32 > res_init449_pack;
  set_at<0, 32, 32>(res_init449_pack, res_init449);
  auto res_update450_gp_gray_3448__m_1536_gp_gray_3447_11080 = llf_add_float_32(gp_gray_2_buf436_lane_0_pack, res_init449_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_1_pack, gp_gray_2_buf436_lane_1);
  hw_uint<32 > res_update450_gp_gray_3448__m_1536_gp_gray_3447_11080_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448__m_1536_gp_gray_3447_11080_pack, res_update450_gp_gray_3448__m_1536_gp_gray_3447_11080);
  auto res_update450_gp_gray_3448_0538_gp_gray_3447_11078 = llf_add_float_32(gp_gray_2_buf436_lane_1_pack, res_update450_gp_gray_3448__m_1536_gp_gray_3447_11080_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_2_pack, gp_gray_2_buf436_lane_2);
  hw_uint<32 > res_update450_gp_gray_3448_0538_gp_gray_3447_11078_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448_0538_gp_gray_3447_11078_pack, res_update450_gp_gray_3448_0538_gp_gray_3447_11078);
  auto res_update450_gp_gray_3448_1540_gp_gray_3447_11076 = llf_add_float_32(gp_gray_2_buf436_lane_2_pack, res_update450_gp_gray_3448_0538_gp_gray_3447_11078_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_3_pack, gp_gray_2_buf436_lane_3);
  hw_uint<32 > res_update450_gp_gray_3448_1540_gp_gray_3447_11076_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448_1540_gp_gray_3447_11076_pack, res_update450_gp_gray_3448_1540_gp_gray_3447_11076);
  auto res_update450_gp_gray_3448__m_1536_gp_gray_3447_01074 = llf_add_float_32(gp_gray_2_buf436_lane_3_pack, res_update450_gp_gray_3448_1540_gp_gray_3447_11076_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_4_pack, gp_gray_2_buf436_lane_4);
  hw_uint<32 > res_update450_gp_gray_3448__m_1536_gp_gray_3447_01074_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448__m_1536_gp_gray_3447_01074_pack, res_update450_gp_gray_3448__m_1536_gp_gray_3447_01074);
  auto res_update450_gp_gray_3448_0538_gp_gray_3447_01072 = llf_add_float_32(gp_gray_2_buf436_lane_4_pack, res_update450_gp_gray_3448__m_1536_gp_gray_3447_01074_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_5_pack, gp_gray_2_buf436_lane_5);
  hw_uint<32 > res_update450_gp_gray_3448_0538_gp_gray_3447_01072_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448_0538_gp_gray_3447_01072_pack, res_update450_gp_gray_3448_0538_gp_gray_3447_01072);
  auto res_update450_gp_gray_3448_1540_gp_gray_3447_01070 = llf_add_float_32(gp_gray_2_buf436_lane_5_pack, res_update450_gp_gray_3448_0538_gp_gray_3447_01072_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_6_pack, gp_gray_2_buf436_lane_6);
  hw_uint<32 > res_update450_gp_gray_3448_1540_gp_gray_3447_01070_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448_1540_gp_gray_3447_01070_pack, res_update450_gp_gray_3448_1540_gp_gray_3447_01070);
  auto res_update450_gp_gray_3448__m_1536_gp_gray_3447__m_11068 = llf_add_float_32(gp_gray_2_buf436_lane_6_pack, res_update450_gp_gray_3448_1540_gp_gray_3447_01070_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_7_pack, gp_gray_2_buf436_lane_7);
  hw_uint<32 > res_update450_gp_gray_3448__m_1536_gp_gray_3447__m_11068_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448__m_1536_gp_gray_3447__m_11068_pack, res_update450_gp_gray_3448__m_1536_gp_gray_3447__m_11068);
  auto res_update450_gp_gray_3448_0538_gp_gray_3447__m_11066 = llf_add_float_32(gp_gray_2_buf436_lane_7_pack, res_update450_gp_gray_3448__m_1536_gp_gray_3447__m_11068_pack);

  hw_uint<32 > gp_gray_2_buf436_lane_8_pack;
  set_at<0, 32, 32>(gp_gray_2_buf436_lane_8_pack, gp_gray_2_buf436_lane_8);
  hw_uint<32 > res_update450_gp_gray_3448_0538_gp_gray_3447__m_11066_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448_0538_gp_gray_3447__m_11066_pack, res_update450_gp_gray_3448_0538_gp_gray_3447__m_11066);
  auto res_update450_gp_gray_3448_1540_gp_gray_3447__m_11064 = llf_add_float_32(gp_gray_2_buf436_lane_8_pack, res_update450_gp_gray_3448_0538_gp_gray_3447__m_11066_pack);

  hw_uint<32 > res_update450_gp_gray_3448_1540_gp_gray_3447__m_11064_pack;
  set_at<0, 32, 32>(res_update450_gp_gray_3448_1540_gp_gray_3447__m_11064_pack, res_update450_gp_gray_3448_1540_gp_gray_3447__m_11064);
  auto res_avg451 = avg_9_float(res_update450_gp_gray_3448_1540_gp_gray_3447__m_11064_pack);
  hw_uint<32 > return_value1233;
  set_at<0, 32, 32>(return_value1233, res_avg451);
  return return_value1233;

}

