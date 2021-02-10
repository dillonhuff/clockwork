#include "local_laplacian_filters_compute.h"

hw_uint<32> gp_in_on_chip_16_cu155(hw_uint<32*9>& in_on_chip) {
  hw_uint<32> in_on_chip_lane_0 = in_on_chip.extract<0, 31>();
  hw_uint<32> in_on_chip_lane_1 = in_on_chip.extract<32, 63>();
  hw_uint<32> in_on_chip_lane_2 = in_on_chip.extract<64, 95>();
  hw_uint<32> in_on_chip_lane_3 = in_on_chip.extract<96, 127>();
  hw_uint<32> in_on_chip_lane_4 = in_on_chip.extract<128, 159>();
  hw_uint<32> in_on_chip_lane_5 = in_on_chip.extract<160, 191>();
  hw_uint<32> in_on_chip_lane_6 = in_on_chip.extract<192, 223>();
  hw_uint<32> in_on_chip_lane_7 = in_on_chip.extract<224, 255>();
  hw_uint<32> in_on_chip_lane_8 = in_on_chip.extract<256, 287>();

	
  auto res_init9 = llf_set_zero_float_32();

  hw_uint<32 > res_init9_pack;
  set_at<0, 32, 32>(res_init9_pack, res_init9);
  hw_uint<32 > in_on_chip_lane_0_pack;
  set_at<0, 32, 32>(in_on_chip_lane_0_pack, in_on_chip_lane_0);
  auto res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_1117 = llf_add_float_32(res_init9_pack, in_on_chip_lane_0_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_1117_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_1117_pack, res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_1117);
  hw_uint<32 > in_on_chip_lane_1_pack;
  set_at<0, 32, 32>(in_on_chip_lane_1_pack, in_on_chip_lane_1);
  auto res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_1115 = llf_add_float_32(res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_1117_pack, in_on_chip_lane_1_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_1115_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_1115_pack, res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_1115);
  hw_uint<32 > in_on_chip_lane_2_pack;
  set_at<0, 32, 32>(in_on_chip_lane_2_pack, in_on_chip_lane_2);
  auto res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_1113 = llf_add_float_32(res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_1115_pack, in_on_chip_lane_2_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_1113_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_1113_pack, res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_1113);
  hw_uint<32 > in_on_chip_lane_3_pack;
  set_at<0, 32, 32>(in_on_chip_lane_3_pack, in_on_chip_lane_3);
  auto res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_0111 = llf_add_float_32(res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_1113_pack, in_on_chip_lane_3_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_0111_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_0111_pack, res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_0111);
  hw_uint<32 > in_on_chip_lane_4_pack;
  set_at<0, 32, 32>(in_on_chip_lane_4_pack, in_on_chip_lane_4);
  auto res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_0109 = llf_add_float_32(res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17_0111_pack, in_on_chip_lane_4_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_0109_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_0109_pack, res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_0109);
  hw_uint<32 > in_on_chip_lane_5_pack;
  set_at<0, 32, 32>(in_on_chip_lane_5_pack, in_on_chip_lane_5);
  auto res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_0107 = llf_add_float_32(res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17_0109_pack, in_on_chip_lane_5_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_0107_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_0107_pack, res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_0107);
  hw_uint<32 > in_on_chip_lane_6_pack;
  set_at<0, 32, 32>(in_on_chip_lane_6_pack, in_on_chip_lane_6);
  auto res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17__m_1105 = llf_add_float_32(res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17_0107_pack, in_on_chip_lane_6_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17__m_1105_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17__m_1105_pack, res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17__m_1105);
  hw_uint<32 > in_on_chip_lane_7_pack;
  set_at<0, 32, 32>(in_on_chip_lane_7_pack, in_on_chip_lane_7);
  auto res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17__m_1103 = llf_add_float_32(res_update10_gp_in_on_chip_18__m_183_gp_in_on_chip_17__m_1105_pack, in_on_chip_lane_7_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17__m_1103_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17__m_1103_pack, res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17__m_1103);
  hw_uint<32 > in_on_chip_lane_8_pack;
  set_at<0, 32, 32>(in_on_chip_lane_8_pack, in_on_chip_lane_8);
  auto res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17__m_1101 = llf_add_float_32(res_update10_gp_in_on_chip_18_085_gp_in_on_chip_17__m_1103_pack, in_on_chip_lane_8_pack);

  hw_uint<32 > res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17__m_1101_pack;
  set_at<0, 32, 32>(res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17__m_1101_pack, res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17__m_1101);
  auto res_avg11 = avg_9_float(res_update10_gp_in_on_chip_18_187_gp_in_on_chip_17__m_1101_pack);
  hw_uint<32 > return_value156;
  set_at<0, 32, 32>(return_value156, res_avg11);
  return return_value156;

}

hw_uint<32> gp_in_on_chip_214_cu158(hw_uint<32*9>& gp_in_on_chip_1_buf4) {
  hw_uint<32> gp_in_on_chip_1_buf4_lane_0 = gp_in_on_chip_1_buf4.extract<0, 31>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_1 = gp_in_on_chip_1_buf4.extract<32, 63>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_2 = gp_in_on_chip_1_buf4.extract<64, 95>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_3 = gp_in_on_chip_1_buf4.extract<96, 127>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_4 = gp_in_on_chip_1_buf4.extract<128, 159>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_5 = gp_in_on_chip_1_buf4.extract<160, 191>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_6 = gp_in_on_chip_1_buf4.extract<192, 223>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_7 = gp_in_on_chip_1_buf4.extract<224, 255>();
  hw_uint<32> gp_in_on_chip_1_buf4_lane_8 = gp_in_on_chip_1_buf4.extract<256, 287>();

	
  auto res_init17 = llf_set_zero_float_32();

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_0_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_0_pack, gp_in_on_chip_1_buf4_lane_0);
  hw_uint<32 > res_init17_pack;
  set_at<0, 32, 32>(res_init17_pack, res_init17);
  auto res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_1135 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_0_pack, res_init17_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_1_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_1_pack, gp_in_on_chip_1_buf4_lane_1);
  hw_uint<32 > res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_1135_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_1135_pack, res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_1135);
  auto res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_1133 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_1_pack, res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_1135_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_2_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_2_pack, gp_in_on_chip_1_buf4_lane_2);
  hw_uint<32 > res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_1133_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_1133_pack, res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_1133);
  auto res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_1131 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_2_pack, res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_1133_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_3_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_3_pack, gp_in_on_chip_1_buf4_lane_3);
  hw_uint<32 > res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_1131_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_1131_pack, res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_1131);
  auto res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_0129 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_3_pack, res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_1131_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_4_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_4_pack, gp_in_on_chip_1_buf4_lane_4);
  hw_uint<32 > res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_0129_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_0129_pack, res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_0129);
  auto res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_0127 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_4_pack, res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215_0129_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_5_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_5_pack, gp_in_on_chip_1_buf4_lane_5);
  hw_uint<32 > res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_0127_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_0127_pack, res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_0127);
  auto res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_0125 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_5_pack, res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215_0127_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_6_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_6_pack, gp_in_on_chip_1_buf4_lane_6);
  hw_uint<32 > res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_0125_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_0125_pack, res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_0125);
  auto res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215__m_1123 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_6_pack, res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215_0125_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_7_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_7_pack, gp_in_on_chip_1_buf4_lane_7);
  hw_uint<32 > res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215__m_1123_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215__m_1123_pack, res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215__m_1123);
  auto res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215__m_1121 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_7_pack, res_update18_gp_in_on_chip_216__m_189_gp_in_on_chip_215__m_1123_pack);

  hw_uint<32 > gp_in_on_chip_1_buf4_lane_8_pack;
  set_at<0, 32, 32>(gp_in_on_chip_1_buf4_lane_8_pack, gp_in_on_chip_1_buf4_lane_8);
  hw_uint<32 > res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215__m_1121_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215__m_1121_pack, res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215__m_1121);
  auto res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215__m_1119 = llf_add_float_32(gp_in_on_chip_1_buf4_lane_8_pack, res_update18_gp_in_on_chip_216_091_gp_in_on_chip_215__m_1121_pack);

  hw_uint<32 > res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215__m_1119_pack;
  set_at<0, 32, 32>(res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215__m_1119_pack, res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215__m_1119);
  auto res_avg19 = avg_9_float(res_update18_gp_in_on_chip_216_193_gp_in_on_chip_215__m_1119_pack);
  hw_uint<32 > return_value159;
  set_at<0, 32, 32>(return_value159, res_avg19);
  return return_value159;

}

hw_uint<32> gp_in_on_chip_322_cu161(hw_uint<32*9>& gp_in_on_chip_2_buf12) {
  hw_uint<32> gp_in_on_chip_2_buf12_lane_0 = gp_in_on_chip_2_buf12.extract<0, 31>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_1 = gp_in_on_chip_2_buf12.extract<32, 63>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_2 = gp_in_on_chip_2_buf12.extract<64, 95>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_3 = gp_in_on_chip_2_buf12.extract<96, 127>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_4 = gp_in_on_chip_2_buf12.extract<128, 159>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_5 = gp_in_on_chip_2_buf12.extract<160, 191>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_6 = gp_in_on_chip_2_buf12.extract<192, 223>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_7 = gp_in_on_chip_2_buf12.extract<224, 255>();
  hw_uint<32> gp_in_on_chip_2_buf12_lane_8 = gp_in_on_chip_2_buf12.extract<256, 287>();

	
  auto res_init25 = llf_set_zero_float_32();

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_0_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_0_pack, gp_in_on_chip_2_buf12_lane_0);
  hw_uint<32 > res_init25_pack;
  set_at<0, 32, 32>(res_init25_pack, res_init25);
  auto res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_1153 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_0_pack, res_init25_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_1_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_1_pack, gp_in_on_chip_2_buf12_lane_1);
  hw_uint<32 > res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_1153_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_1153_pack, res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_1153);
  auto res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_1151 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_1_pack, res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_1153_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_2_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_2_pack, gp_in_on_chip_2_buf12_lane_2);
  hw_uint<32 > res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_1151_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_1151_pack, res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_1151);
  auto res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_1149 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_2_pack, res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_1151_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_3_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_3_pack, gp_in_on_chip_2_buf12_lane_3);
  hw_uint<32 > res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_1149_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_1149_pack, res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_1149);
  auto res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_0147 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_3_pack, res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_1149_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_4_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_4_pack, gp_in_on_chip_2_buf12_lane_4);
  hw_uint<32 > res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_0147_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_0147_pack, res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_0147);
  auto res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_0145 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_4_pack, res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323_0147_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_5_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_5_pack, gp_in_on_chip_2_buf12_lane_5);
  hw_uint<32 > res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_0145_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_0145_pack, res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_0145);
  auto res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_0143 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_5_pack, res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323_0145_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_6_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_6_pack, gp_in_on_chip_2_buf12_lane_6);
  hw_uint<32 > res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_0143_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_0143_pack, res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_0143);
  auto res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323__m_1141 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_6_pack, res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323_0143_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_7_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_7_pack, gp_in_on_chip_2_buf12_lane_7);
  hw_uint<32 > res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323__m_1141_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323__m_1141_pack, res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323__m_1141);
  auto res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323__m_1139 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_7_pack, res_update26_gp_in_on_chip_324__m_195_gp_in_on_chip_323__m_1141_pack);

  hw_uint<32 > gp_in_on_chip_2_buf12_lane_8_pack;
  set_at<0, 32, 32>(gp_in_on_chip_2_buf12_lane_8_pack, gp_in_on_chip_2_buf12_lane_8);
  hw_uint<32 > res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323__m_1139_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323__m_1139_pack, res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323__m_1139);
  auto res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323__m_1137 = llf_add_float_32(gp_in_on_chip_2_buf12_lane_8_pack, res_update26_gp_in_on_chip_324_097_gp_in_on_chip_323__m_1139_pack);

  hw_uint<32 > res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323__m_1137_pack;
  set_at<0, 32, 32>(res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323__m_1137_pack, res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323__m_1137);
  auto res_avg27 = avg_9_float(res_update26_gp_in_on_chip_324_199_gp_in_on_chip_323__m_1137_pack);
  hw_uint<32 > return_value162;
  set_at<0, 32, 32>(return_value162, res_avg27);
  return return_value162;

}

