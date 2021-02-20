#include "local_laplacian_filters_compute.h"

hw_uint<32> gp_in1_266_cu295(hw_uint<32*9>& gp_in1_1_buf56) {
  hw_uint<32> gp_in1_1_buf56_lane_0 = gp_in1_1_buf56.extract<0, 31>();
  hw_uint<32> gp_in1_1_buf56_lane_1 = gp_in1_1_buf56.extract<32, 63>();
  hw_uint<32> gp_in1_1_buf56_lane_2 = gp_in1_1_buf56.extract<64, 95>();
  hw_uint<32> gp_in1_1_buf56_lane_3 = gp_in1_1_buf56.extract<96, 127>();
  hw_uint<32> gp_in1_1_buf56_lane_4 = gp_in1_1_buf56.extract<128, 159>();
  hw_uint<32> gp_in1_1_buf56_lane_5 = gp_in1_1_buf56.extract<160, 191>();
  hw_uint<32> gp_in1_1_buf56_lane_6 = gp_in1_1_buf56.extract<192, 223>();
  hw_uint<32> gp_in1_1_buf56_lane_7 = gp_in1_1_buf56.extract<224, 255>();
  hw_uint<32> gp_in1_1_buf56_lane_8 = gp_in1_1_buf56.extract<256, 287>();

	
  auto res_init69 = llf_set_zero_float_32();

  hw_uint<32 > gp_in1_1_buf56_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_0_pack, gp_in1_1_buf56_lane_0);
  hw_uint<32 > res_init69_pack;
  set_at<0, 32, 32>(res_init69_pack, res_init69);
  auto res_update70_gp_in1_268__m_1163_gp_in1_267_1239 = llf_add_float_32(gp_in1_1_buf56_lane_0_pack, res_init69_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_1_pack, gp_in1_1_buf56_lane_1);
  hw_uint<32 > res_update70_gp_in1_268__m_1163_gp_in1_267_1239_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268__m_1163_gp_in1_267_1239_pack, res_update70_gp_in1_268__m_1163_gp_in1_267_1239);
  auto res_update70_gp_in1_268_0165_gp_in1_267_1237 = llf_add_float_32(gp_in1_1_buf56_lane_1_pack, res_update70_gp_in1_268__m_1163_gp_in1_267_1239_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_2_pack, gp_in1_1_buf56_lane_2);
  hw_uint<32 > res_update70_gp_in1_268_0165_gp_in1_267_1237_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268_0165_gp_in1_267_1237_pack, res_update70_gp_in1_268_0165_gp_in1_267_1237);
  auto res_update70_gp_in1_268_1167_gp_in1_267_1235 = llf_add_float_32(gp_in1_1_buf56_lane_2_pack, res_update70_gp_in1_268_0165_gp_in1_267_1237_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_3_pack, gp_in1_1_buf56_lane_3);
  hw_uint<32 > res_update70_gp_in1_268_1167_gp_in1_267_1235_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268_1167_gp_in1_267_1235_pack, res_update70_gp_in1_268_1167_gp_in1_267_1235);
  auto res_update70_gp_in1_268__m_1163_gp_in1_267_0233 = llf_add_float_32(gp_in1_1_buf56_lane_3_pack, res_update70_gp_in1_268_1167_gp_in1_267_1235_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_4_pack, gp_in1_1_buf56_lane_4);
  hw_uint<32 > res_update70_gp_in1_268__m_1163_gp_in1_267_0233_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268__m_1163_gp_in1_267_0233_pack, res_update70_gp_in1_268__m_1163_gp_in1_267_0233);
  auto res_update70_gp_in1_268_0165_gp_in1_267_0231 = llf_add_float_32(gp_in1_1_buf56_lane_4_pack, res_update70_gp_in1_268__m_1163_gp_in1_267_0233_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_5_pack, gp_in1_1_buf56_lane_5);
  hw_uint<32 > res_update70_gp_in1_268_0165_gp_in1_267_0231_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268_0165_gp_in1_267_0231_pack, res_update70_gp_in1_268_0165_gp_in1_267_0231);
  auto res_update70_gp_in1_268_1167_gp_in1_267_0229 = llf_add_float_32(gp_in1_1_buf56_lane_5_pack, res_update70_gp_in1_268_0165_gp_in1_267_0231_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_6_pack, gp_in1_1_buf56_lane_6);
  hw_uint<32 > res_update70_gp_in1_268_1167_gp_in1_267_0229_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268_1167_gp_in1_267_0229_pack, res_update70_gp_in1_268_1167_gp_in1_267_0229);
  auto res_update70_gp_in1_268__m_1163_gp_in1_267__m_1227 = llf_add_float_32(gp_in1_1_buf56_lane_6_pack, res_update70_gp_in1_268_1167_gp_in1_267_0229_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_7_pack, gp_in1_1_buf56_lane_7);
  hw_uint<32 > res_update70_gp_in1_268__m_1163_gp_in1_267__m_1227_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268__m_1163_gp_in1_267__m_1227_pack, res_update70_gp_in1_268__m_1163_gp_in1_267__m_1227);
  auto res_update70_gp_in1_268_0165_gp_in1_267__m_1225 = llf_add_float_32(gp_in1_1_buf56_lane_7_pack, res_update70_gp_in1_268__m_1163_gp_in1_267__m_1227_pack);

  hw_uint<32 > gp_in1_1_buf56_lane_8_pack;
  set_at<0, 32, 32>(gp_in1_1_buf56_lane_8_pack, gp_in1_1_buf56_lane_8);
  hw_uint<32 > res_update70_gp_in1_268_0165_gp_in1_267__m_1225_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268_0165_gp_in1_267__m_1225_pack, res_update70_gp_in1_268_0165_gp_in1_267__m_1225);
  auto res_update70_gp_in1_268_1167_gp_in1_267__m_1223 = llf_add_float_32(gp_in1_1_buf56_lane_8_pack, res_update70_gp_in1_268_0165_gp_in1_267__m_1225_pack);

  hw_uint<32 > res_update70_gp_in1_268_1167_gp_in1_267__m_1223_pack;
  set_at<0, 32, 32>(res_update70_gp_in1_268_1167_gp_in1_267__m_1223_pack, res_update70_gp_in1_268_1167_gp_in1_267__m_1223);
  auto res_avg71 = avg_9_float(res_update70_gp_in1_268_1167_gp_in1_267__m_1223_pack);
  hw_uint<32 > return_value296;
  set_at<0, 32, 32>(return_value296, res_avg71);
  return return_value296;

}

hw_uint<32> gp_in1_158_cu298(hw_uint<32*9>& in1) {
  hw_uint<32> in1_lane_0 = in1.extract<0, 31>();
  hw_uint<32> in1_lane_1 = in1.extract<32, 63>();
  hw_uint<32> in1_lane_2 = in1.extract<64, 95>();
  hw_uint<32> in1_lane_3 = in1.extract<96, 127>();
  hw_uint<32> in1_lane_4 = in1.extract<128, 159>();
  hw_uint<32> in1_lane_5 = in1.extract<160, 191>();
  hw_uint<32> in1_lane_6 = in1.extract<192, 223>();
  hw_uint<32> in1_lane_7 = in1.extract<224, 255>();
  hw_uint<32> in1_lane_8 = in1.extract<256, 287>();

	
  auto res_init61 = llf_set_zero_float_32();

  hw_uint<32 > res_init61_pack;
  set_at<0, 32, 32>(res_init61_pack, res_init61);
  hw_uint<32 > in1_lane_0_pack;
  set_at<0, 32, 32>(in1_lane_0_pack, in1_lane_0);
  auto res_update62_gp_in1_160__m_1175_gp_in1_159_1293 = llf_add_float_32(res_init61_pack, in1_lane_0_pack);

  hw_uint<32 > res_update62_gp_in1_160__m_1175_gp_in1_159_1293_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160__m_1175_gp_in1_159_1293_pack, res_update62_gp_in1_160__m_1175_gp_in1_159_1293);
  hw_uint<32 > in1_lane_1_pack;
  set_at<0, 32, 32>(in1_lane_1_pack, in1_lane_1);
  auto res_update62_gp_in1_160_0177_gp_in1_159_1291 = llf_add_float_32(res_update62_gp_in1_160__m_1175_gp_in1_159_1293_pack, in1_lane_1_pack);

  hw_uint<32 > res_update62_gp_in1_160_0177_gp_in1_159_1291_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160_0177_gp_in1_159_1291_pack, res_update62_gp_in1_160_0177_gp_in1_159_1291);
  hw_uint<32 > in1_lane_2_pack;
  set_at<0, 32, 32>(in1_lane_2_pack, in1_lane_2);
  auto res_update62_gp_in1_160_1179_gp_in1_159_1289 = llf_add_float_32(res_update62_gp_in1_160_0177_gp_in1_159_1291_pack, in1_lane_2_pack);

  hw_uint<32 > res_update62_gp_in1_160_1179_gp_in1_159_1289_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160_1179_gp_in1_159_1289_pack, res_update62_gp_in1_160_1179_gp_in1_159_1289);
  hw_uint<32 > in1_lane_3_pack;
  set_at<0, 32, 32>(in1_lane_3_pack, in1_lane_3);
  auto res_update62_gp_in1_160__m_1175_gp_in1_159_0287 = llf_add_float_32(res_update62_gp_in1_160_1179_gp_in1_159_1289_pack, in1_lane_3_pack);

  hw_uint<32 > res_update62_gp_in1_160__m_1175_gp_in1_159_0287_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160__m_1175_gp_in1_159_0287_pack, res_update62_gp_in1_160__m_1175_gp_in1_159_0287);
  hw_uint<32 > in1_lane_4_pack;
  set_at<0, 32, 32>(in1_lane_4_pack, in1_lane_4);
  auto res_update62_gp_in1_160_0177_gp_in1_159_0285 = llf_add_float_32(res_update62_gp_in1_160__m_1175_gp_in1_159_0287_pack, in1_lane_4_pack);

  hw_uint<32 > res_update62_gp_in1_160_0177_gp_in1_159_0285_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160_0177_gp_in1_159_0285_pack, res_update62_gp_in1_160_0177_gp_in1_159_0285);
  hw_uint<32 > in1_lane_5_pack;
  set_at<0, 32, 32>(in1_lane_5_pack, in1_lane_5);
  auto res_update62_gp_in1_160_1179_gp_in1_159_0283 = llf_add_float_32(res_update62_gp_in1_160_0177_gp_in1_159_0285_pack, in1_lane_5_pack);

  hw_uint<32 > res_update62_gp_in1_160_1179_gp_in1_159_0283_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160_1179_gp_in1_159_0283_pack, res_update62_gp_in1_160_1179_gp_in1_159_0283);
  hw_uint<32 > in1_lane_6_pack;
  set_at<0, 32, 32>(in1_lane_6_pack, in1_lane_6);
  auto res_update62_gp_in1_160__m_1175_gp_in1_159__m_1281 = llf_add_float_32(res_update62_gp_in1_160_1179_gp_in1_159_0283_pack, in1_lane_6_pack);

  hw_uint<32 > res_update62_gp_in1_160__m_1175_gp_in1_159__m_1281_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160__m_1175_gp_in1_159__m_1281_pack, res_update62_gp_in1_160__m_1175_gp_in1_159__m_1281);
  hw_uint<32 > in1_lane_7_pack;
  set_at<0, 32, 32>(in1_lane_7_pack, in1_lane_7);
  auto res_update62_gp_in1_160_0177_gp_in1_159__m_1279 = llf_add_float_32(res_update62_gp_in1_160__m_1175_gp_in1_159__m_1281_pack, in1_lane_7_pack);

  hw_uint<32 > res_update62_gp_in1_160_0177_gp_in1_159__m_1279_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160_0177_gp_in1_159__m_1279_pack, res_update62_gp_in1_160_0177_gp_in1_159__m_1279);
  hw_uint<32 > in1_lane_8_pack;
  set_at<0, 32, 32>(in1_lane_8_pack, in1_lane_8);
  auto res_update62_gp_in1_160_1179_gp_in1_159__m_1277 = llf_add_float_32(res_update62_gp_in1_160_0177_gp_in1_159__m_1279_pack, in1_lane_8_pack);

  hw_uint<32 > res_update62_gp_in1_160_1179_gp_in1_159__m_1277_pack;
  set_at<0, 32, 32>(res_update62_gp_in1_160_1179_gp_in1_159__m_1277_pack, res_update62_gp_in1_160_1179_gp_in1_159__m_1277);
  auto res_avg63 = avg_9_float(res_update62_gp_in1_160_1179_gp_in1_159__m_1277_pack);
  hw_uint<32 > return_value299;
  set_at<0, 32, 32>(return_value299, res_avg63);
  return return_value299;

}

hw_uint<32> gp_in0_110_cu301(hw_uint<32*9>& in0) {
  hw_uint<32> in0_lane_0 = in0.extract<0, 31>();
  hw_uint<32> in0_lane_1 = in0.extract<32, 63>();
  hw_uint<32> in0_lane_2 = in0.extract<64, 95>();
  hw_uint<32> in0_lane_3 = in0.extract<96, 127>();
  hw_uint<32> in0_lane_4 = in0.extract<128, 159>();
  hw_uint<32> in0_lane_5 = in0.extract<160, 191>();
  hw_uint<32> in0_lane_6 = in0.extract<192, 223>();
  hw_uint<32> in0_lane_7 = in0.extract<224, 255>();
  hw_uint<32> in0_lane_8 = in0.extract<256, 287>();

	
  auto res_init13 = llf_set_zero_float_32();

  hw_uint<32 > res_init13_pack;
  set_at<0, 32, 32>(res_init13_pack, res_init13);
  hw_uint<32 > in0_lane_0_pack;
  set_at<0, 32, 32>(in0_lane_0_pack, in0_lane_0);
  auto res_update14_gp_in0_112__m_1157_gp_in0_111_1203 = llf_add_float_32(res_init13_pack, in0_lane_0_pack);

  hw_uint<32 > res_update14_gp_in0_112__m_1157_gp_in0_111_1203_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112__m_1157_gp_in0_111_1203_pack, res_update14_gp_in0_112__m_1157_gp_in0_111_1203);
  hw_uint<32 > in0_lane_1_pack;
  set_at<0, 32, 32>(in0_lane_1_pack, in0_lane_1);
  auto res_update14_gp_in0_112_0159_gp_in0_111_1201 = llf_add_float_32(res_update14_gp_in0_112__m_1157_gp_in0_111_1203_pack, in0_lane_1_pack);

  hw_uint<32 > res_update14_gp_in0_112_0159_gp_in0_111_1201_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112_0159_gp_in0_111_1201_pack, res_update14_gp_in0_112_0159_gp_in0_111_1201);
  hw_uint<32 > in0_lane_2_pack;
  set_at<0, 32, 32>(in0_lane_2_pack, in0_lane_2);
  auto res_update14_gp_in0_112_1161_gp_in0_111_1199 = llf_add_float_32(res_update14_gp_in0_112_0159_gp_in0_111_1201_pack, in0_lane_2_pack);

  hw_uint<32 > res_update14_gp_in0_112_1161_gp_in0_111_1199_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112_1161_gp_in0_111_1199_pack, res_update14_gp_in0_112_1161_gp_in0_111_1199);
  hw_uint<32 > in0_lane_3_pack;
  set_at<0, 32, 32>(in0_lane_3_pack, in0_lane_3);
  auto res_update14_gp_in0_112__m_1157_gp_in0_111_0197 = llf_add_float_32(res_update14_gp_in0_112_1161_gp_in0_111_1199_pack, in0_lane_3_pack);

  hw_uint<32 > res_update14_gp_in0_112__m_1157_gp_in0_111_0197_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112__m_1157_gp_in0_111_0197_pack, res_update14_gp_in0_112__m_1157_gp_in0_111_0197);
  hw_uint<32 > in0_lane_4_pack;
  set_at<0, 32, 32>(in0_lane_4_pack, in0_lane_4);
  auto res_update14_gp_in0_112_0159_gp_in0_111_0195 = llf_add_float_32(res_update14_gp_in0_112__m_1157_gp_in0_111_0197_pack, in0_lane_4_pack);

  hw_uint<32 > res_update14_gp_in0_112_0159_gp_in0_111_0195_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112_0159_gp_in0_111_0195_pack, res_update14_gp_in0_112_0159_gp_in0_111_0195);
  hw_uint<32 > in0_lane_5_pack;
  set_at<0, 32, 32>(in0_lane_5_pack, in0_lane_5);
  auto res_update14_gp_in0_112_1161_gp_in0_111_0193 = llf_add_float_32(res_update14_gp_in0_112_0159_gp_in0_111_0195_pack, in0_lane_5_pack);

  hw_uint<32 > res_update14_gp_in0_112_1161_gp_in0_111_0193_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112_1161_gp_in0_111_0193_pack, res_update14_gp_in0_112_1161_gp_in0_111_0193);
  hw_uint<32 > in0_lane_6_pack;
  set_at<0, 32, 32>(in0_lane_6_pack, in0_lane_6);
  auto res_update14_gp_in0_112__m_1157_gp_in0_111__m_1191 = llf_add_float_32(res_update14_gp_in0_112_1161_gp_in0_111_0193_pack, in0_lane_6_pack);

  hw_uint<32 > res_update14_gp_in0_112__m_1157_gp_in0_111__m_1191_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112__m_1157_gp_in0_111__m_1191_pack, res_update14_gp_in0_112__m_1157_gp_in0_111__m_1191);
  hw_uint<32 > in0_lane_7_pack;
  set_at<0, 32, 32>(in0_lane_7_pack, in0_lane_7);
  auto res_update14_gp_in0_112_0159_gp_in0_111__m_1189 = llf_add_float_32(res_update14_gp_in0_112__m_1157_gp_in0_111__m_1191_pack, in0_lane_7_pack);

  hw_uint<32 > res_update14_gp_in0_112_0159_gp_in0_111__m_1189_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112_0159_gp_in0_111__m_1189_pack, res_update14_gp_in0_112_0159_gp_in0_111__m_1189);
  hw_uint<32 > in0_lane_8_pack;
  set_at<0, 32, 32>(in0_lane_8_pack, in0_lane_8);
  auto res_update14_gp_in0_112_1161_gp_in0_111__m_1187 = llf_add_float_32(res_update14_gp_in0_112_0159_gp_in0_111__m_1189_pack, in0_lane_8_pack);

  hw_uint<32 > res_update14_gp_in0_112_1161_gp_in0_111__m_1187_pack;
  set_at<0, 32, 32>(res_update14_gp_in0_112_1161_gp_in0_111__m_1187_pack, res_update14_gp_in0_112_1161_gp_in0_111__m_1187);
  auto res_avg15 = avg_9_float(res_update14_gp_in0_112_1161_gp_in0_111__m_1187_pack);
  hw_uint<32 > return_value302;
  set_at<0, 32, 32>(return_value302, res_avg15);
  return return_value302;

}

hw_uint<32> gp_in1_374_cu304(hw_uint<32*9>& gp_in1_2_buf64) {
  hw_uint<32> gp_in1_2_buf64_lane_0 = gp_in1_2_buf64.extract<0, 31>();
  hw_uint<32> gp_in1_2_buf64_lane_1 = gp_in1_2_buf64.extract<32, 63>();
  hw_uint<32> gp_in1_2_buf64_lane_2 = gp_in1_2_buf64.extract<64, 95>();
  hw_uint<32> gp_in1_2_buf64_lane_3 = gp_in1_2_buf64.extract<96, 127>();
  hw_uint<32> gp_in1_2_buf64_lane_4 = gp_in1_2_buf64.extract<128, 159>();
  hw_uint<32> gp_in1_2_buf64_lane_5 = gp_in1_2_buf64.extract<160, 191>();
  hw_uint<32> gp_in1_2_buf64_lane_6 = gp_in1_2_buf64.extract<192, 223>();
  hw_uint<32> gp_in1_2_buf64_lane_7 = gp_in1_2_buf64.extract<224, 255>();
  hw_uint<32> gp_in1_2_buf64_lane_8 = gp_in1_2_buf64.extract<256, 287>();

	
  auto res_init77 = llf_set_zero_float_32();

  hw_uint<32 > gp_in1_2_buf64_lane_0_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_0_pack, gp_in1_2_buf64_lane_0);
  hw_uint<32 > res_init77_pack;
  set_at<0, 32, 32>(res_init77_pack, res_init77);
  auto res_update78_gp_in1_376__m_1151_gp_in1_375_1275 = llf_add_float_32(gp_in1_2_buf64_lane_0_pack, res_init77_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_1_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_1_pack, gp_in1_2_buf64_lane_1);
  hw_uint<32 > res_update78_gp_in1_376__m_1151_gp_in1_375_1275_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376__m_1151_gp_in1_375_1275_pack, res_update78_gp_in1_376__m_1151_gp_in1_375_1275);
  auto res_update78_gp_in1_376_0153_gp_in1_375_1273 = llf_add_float_32(gp_in1_2_buf64_lane_1_pack, res_update78_gp_in1_376__m_1151_gp_in1_375_1275_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_2_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_2_pack, gp_in1_2_buf64_lane_2);
  hw_uint<32 > res_update78_gp_in1_376_0153_gp_in1_375_1273_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376_0153_gp_in1_375_1273_pack, res_update78_gp_in1_376_0153_gp_in1_375_1273);
  auto res_update78_gp_in1_376_1155_gp_in1_375_1271 = llf_add_float_32(gp_in1_2_buf64_lane_2_pack, res_update78_gp_in1_376_0153_gp_in1_375_1273_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_3_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_3_pack, gp_in1_2_buf64_lane_3);
  hw_uint<32 > res_update78_gp_in1_376_1155_gp_in1_375_1271_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376_1155_gp_in1_375_1271_pack, res_update78_gp_in1_376_1155_gp_in1_375_1271);
  auto res_update78_gp_in1_376__m_1151_gp_in1_375_0269 = llf_add_float_32(gp_in1_2_buf64_lane_3_pack, res_update78_gp_in1_376_1155_gp_in1_375_1271_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_4_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_4_pack, gp_in1_2_buf64_lane_4);
  hw_uint<32 > res_update78_gp_in1_376__m_1151_gp_in1_375_0269_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376__m_1151_gp_in1_375_0269_pack, res_update78_gp_in1_376__m_1151_gp_in1_375_0269);
  auto res_update78_gp_in1_376_0153_gp_in1_375_0267 = llf_add_float_32(gp_in1_2_buf64_lane_4_pack, res_update78_gp_in1_376__m_1151_gp_in1_375_0269_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_5_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_5_pack, gp_in1_2_buf64_lane_5);
  hw_uint<32 > res_update78_gp_in1_376_0153_gp_in1_375_0267_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376_0153_gp_in1_375_0267_pack, res_update78_gp_in1_376_0153_gp_in1_375_0267);
  auto res_update78_gp_in1_376_1155_gp_in1_375_0265 = llf_add_float_32(gp_in1_2_buf64_lane_5_pack, res_update78_gp_in1_376_0153_gp_in1_375_0267_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_6_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_6_pack, gp_in1_2_buf64_lane_6);
  hw_uint<32 > res_update78_gp_in1_376_1155_gp_in1_375_0265_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376_1155_gp_in1_375_0265_pack, res_update78_gp_in1_376_1155_gp_in1_375_0265);
  auto res_update78_gp_in1_376__m_1151_gp_in1_375__m_1263 = llf_add_float_32(gp_in1_2_buf64_lane_6_pack, res_update78_gp_in1_376_1155_gp_in1_375_0265_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_7_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_7_pack, gp_in1_2_buf64_lane_7);
  hw_uint<32 > res_update78_gp_in1_376__m_1151_gp_in1_375__m_1263_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376__m_1151_gp_in1_375__m_1263_pack, res_update78_gp_in1_376__m_1151_gp_in1_375__m_1263);
  auto res_update78_gp_in1_376_0153_gp_in1_375__m_1261 = llf_add_float_32(gp_in1_2_buf64_lane_7_pack, res_update78_gp_in1_376__m_1151_gp_in1_375__m_1263_pack);

  hw_uint<32 > gp_in1_2_buf64_lane_8_pack;
  set_at<0, 32, 32>(gp_in1_2_buf64_lane_8_pack, gp_in1_2_buf64_lane_8);
  hw_uint<32 > res_update78_gp_in1_376_0153_gp_in1_375__m_1261_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376_0153_gp_in1_375__m_1261_pack, res_update78_gp_in1_376_0153_gp_in1_375__m_1261);
  auto res_update78_gp_in1_376_1155_gp_in1_375__m_1259 = llf_add_float_32(gp_in1_2_buf64_lane_8_pack, res_update78_gp_in1_376_0153_gp_in1_375__m_1261_pack);

  hw_uint<32 > res_update78_gp_in1_376_1155_gp_in1_375__m_1259_pack;
  set_at<0, 32, 32>(res_update78_gp_in1_376_1155_gp_in1_375__m_1259_pack, res_update78_gp_in1_376_1155_gp_in1_375__m_1259);
  auto res_avg79 = avg_9_float(res_update78_gp_in1_376_1155_gp_in1_375__m_1259_pack);
  hw_uint<32 > return_value305;
  set_at<0, 32, 32>(return_value305, res_avg79);
  return return_value305;

}

hw_uint<32> gp_in0_326_cu307(hw_uint<32*9>& gp_in0_2_buf16) {
  hw_uint<32> gp_in0_2_buf16_lane_0 = gp_in0_2_buf16.extract<0, 31>();
  hw_uint<32> gp_in0_2_buf16_lane_1 = gp_in0_2_buf16.extract<32, 63>();
  hw_uint<32> gp_in0_2_buf16_lane_2 = gp_in0_2_buf16.extract<64, 95>();
  hw_uint<32> gp_in0_2_buf16_lane_3 = gp_in0_2_buf16.extract<96, 127>();
  hw_uint<32> gp_in0_2_buf16_lane_4 = gp_in0_2_buf16.extract<128, 159>();
  hw_uint<32> gp_in0_2_buf16_lane_5 = gp_in0_2_buf16.extract<160, 191>();
  hw_uint<32> gp_in0_2_buf16_lane_6 = gp_in0_2_buf16.extract<192, 223>();
  hw_uint<32> gp_in0_2_buf16_lane_7 = gp_in0_2_buf16.extract<224, 255>();
  hw_uint<32> gp_in0_2_buf16_lane_8 = gp_in0_2_buf16.extract<256, 287>();

	
  auto res_init29 = llf_set_zero_float_32();

  hw_uint<32 > gp_in0_2_buf16_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_0_pack, gp_in0_2_buf16_lane_0);
  hw_uint<32 > res_init29_pack;
  set_at<0, 32, 32>(res_init29_pack, res_init29);
  auto res_update30_gp_in0_328__m_1181_gp_in0_327_1221 = llf_add_float_32(gp_in0_2_buf16_lane_0_pack, res_init29_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_1_pack, gp_in0_2_buf16_lane_1);
  hw_uint<32 > res_update30_gp_in0_328__m_1181_gp_in0_327_1221_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328__m_1181_gp_in0_327_1221_pack, res_update30_gp_in0_328__m_1181_gp_in0_327_1221);
  auto res_update30_gp_in0_328_0183_gp_in0_327_1219 = llf_add_float_32(gp_in0_2_buf16_lane_1_pack, res_update30_gp_in0_328__m_1181_gp_in0_327_1221_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_2_pack, gp_in0_2_buf16_lane_2);
  hw_uint<32 > res_update30_gp_in0_328_0183_gp_in0_327_1219_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328_0183_gp_in0_327_1219_pack, res_update30_gp_in0_328_0183_gp_in0_327_1219);
  auto res_update30_gp_in0_328_1185_gp_in0_327_1217 = llf_add_float_32(gp_in0_2_buf16_lane_2_pack, res_update30_gp_in0_328_0183_gp_in0_327_1219_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_3_pack, gp_in0_2_buf16_lane_3);
  hw_uint<32 > res_update30_gp_in0_328_1185_gp_in0_327_1217_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328_1185_gp_in0_327_1217_pack, res_update30_gp_in0_328_1185_gp_in0_327_1217);
  auto res_update30_gp_in0_328__m_1181_gp_in0_327_0215 = llf_add_float_32(gp_in0_2_buf16_lane_3_pack, res_update30_gp_in0_328_1185_gp_in0_327_1217_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_4_pack, gp_in0_2_buf16_lane_4);
  hw_uint<32 > res_update30_gp_in0_328__m_1181_gp_in0_327_0215_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328__m_1181_gp_in0_327_0215_pack, res_update30_gp_in0_328__m_1181_gp_in0_327_0215);
  auto res_update30_gp_in0_328_0183_gp_in0_327_0213 = llf_add_float_32(gp_in0_2_buf16_lane_4_pack, res_update30_gp_in0_328__m_1181_gp_in0_327_0215_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_5_pack, gp_in0_2_buf16_lane_5);
  hw_uint<32 > res_update30_gp_in0_328_0183_gp_in0_327_0213_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328_0183_gp_in0_327_0213_pack, res_update30_gp_in0_328_0183_gp_in0_327_0213);
  auto res_update30_gp_in0_328_1185_gp_in0_327_0211 = llf_add_float_32(gp_in0_2_buf16_lane_5_pack, res_update30_gp_in0_328_0183_gp_in0_327_0213_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_6_pack, gp_in0_2_buf16_lane_6);
  hw_uint<32 > res_update30_gp_in0_328_1185_gp_in0_327_0211_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328_1185_gp_in0_327_0211_pack, res_update30_gp_in0_328_1185_gp_in0_327_0211);
  auto res_update30_gp_in0_328__m_1181_gp_in0_327__m_1209 = llf_add_float_32(gp_in0_2_buf16_lane_6_pack, res_update30_gp_in0_328_1185_gp_in0_327_0211_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_7_pack, gp_in0_2_buf16_lane_7);
  hw_uint<32 > res_update30_gp_in0_328__m_1181_gp_in0_327__m_1209_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328__m_1181_gp_in0_327__m_1209_pack, res_update30_gp_in0_328__m_1181_gp_in0_327__m_1209);
  auto res_update30_gp_in0_328_0183_gp_in0_327__m_1207 = llf_add_float_32(gp_in0_2_buf16_lane_7_pack, res_update30_gp_in0_328__m_1181_gp_in0_327__m_1209_pack);

  hw_uint<32 > gp_in0_2_buf16_lane_8_pack;
  set_at<0, 32, 32>(gp_in0_2_buf16_lane_8_pack, gp_in0_2_buf16_lane_8);
  hw_uint<32 > res_update30_gp_in0_328_0183_gp_in0_327__m_1207_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328_0183_gp_in0_327__m_1207_pack, res_update30_gp_in0_328_0183_gp_in0_327__m_1207);
  auto res_update30_gp_in0_328_1185_gp_in0_327__m_1205 = llf_add_float_32(gp_in0_2_buf16_lane_8_pack, res_update30_gp_in0_328_0183_gp_in0_327__m_1207_pack);

  hw_uint<32 > res_update30_gp_in0_328_1185_gp_in0_327__m_1205_pack;
  set_at<0, 32, 32>(res_update30_gp_in0_328_1185_gp_in0_327__m_1205_pack, res_update30_gp_in0_328_1185_gp_in0_327__m_1205);
  auto res_avg31 = avg_9_float(res_update30_gp_in0_328_1185_gp_in0_327__m_1205_pack);
  hw_uint<32 > return_value308;
  set_at<0, 32, 32>(return_value308, res_avg31);
  return return_value308;

}

hw_uint<32> gp_in0_218_cu310(hw_uint<32*9>& gp_in0_1_buf8) {
  hw_uint<32> gp_in0_1_buf8_lane_0 = gp_in0_1_buf8.extract<0, 31>();
  hw_uint<32> gp_in0_1_buf8_lane_1 = gp_in0_1_buf8.extract<32, 63>();
  hw_uint<32> gp_in0_1_buf8_lane_2 = gp_in0_1_buf8.extract<64, 95>();
  hw_uint<32> gp_in0_1_buf8_lane_3 = gp_in0_1_buf8.extract<96, 127>();
  hw_uint<32> gp_in0_1_buf8_lane_4 = gp_in0_1_buf8.extract<128, 159>();
  hw_uint<32> gp_in0_1_buf8_lane_5 = gp_in0_1_buf8.extract<160, 191>();
  hw_uint<32> gp_in0_1_buf8_lane_6 = gp_in0_1_buf8.extract<192, 223>();
  hw_uint<32> gp_in0_1_buf8_lane_7 = gp_in0_1_buf8.extract<224, 255>();
  hw_uint<32> gp_in0_1_buf8_lane_8 = gp_in0_1_buf8.extract<256, 287>();

	
  auto res_init21 = llf_set_zero_float_32();

  hw_uint<32 > gp_in0_1_buf8_lane_0_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_0_pack, gp_in0_1_buf8_lane_0);
  hw_uint<32 > res_init21_pack;
  set_at<0, 32, 32>(res_init21_pack, res_init21);
  auto res_update22_gp_in0_220__m_1169_gp_in0_219_1257 = llf_add_float_32(gp_in0_1_buf8_lane_0_pack, res_init21_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_1_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_1_pack, gp_in0_1_buf8_lane_1);
  hw_uint<32 > res_update22_gp_in0_220__m_1169_gp_in0_219_1257_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220__m_1169_gp_in0_219_1257_pack, res_update22_gp_in0_220__m_1169_gp_in0_219_1257);
  auto res_update22_gp_in0_220_0171_gp_in0_219_1255 = llf_add_float_32(gp_in0_1_buf8_lane_1_pack, res_update22_gp_in0_220__m_1169_gp_in0_219_1257_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_2_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_2_pack, gp_in0_1_buf8_lane_2);
  hw_uint<32 > res_update22_gp_in0_220_0171_gp_in0_219_1255_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220_0171_gp_in0_219_1255_pack, res_update22_gp_in0_220_0171_gp_in0_219_1255);
  auto res_update22_gp_in0_220_1173_gp_in0_219_1253 = llf_add_float_32(gp_in0_1_buf8_lane_2_pack, res_update22_gp_in0_220_0171_gp_in0_219_1255_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_3_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_3_pack, gp_in0_1_buf8_lane_3);
  hw_uint<32 > res_update22_gp_in0_220_1173_gp_in0_219_1253_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220_1173_gp_in0_219_1253_pack, res_update22_gp_in0_220_1173_gp_in0_219_1253);
  auto res_update22_gp_in0_220__m_1169_gp_in0_219_0251 = llf_add_float_32(gp_in0_1_buf8_lane_3_pack, res_update22_gp_in0_220_1173_gp_in0_219_1253_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_4_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_4_pack, gp_in0_1_buf8_lane_4);
  hw_uint<32 > res_update22_gp_in0_220__m_1169_gp_in0_219_0251_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220__m_1169_gp_in0_219_0251_pack, res_update22_gp_in0_220__m_1169_gp_in0_219_0251);
  auto res_update22_gp_in0_220_0171_gp_in0_219_0249 = llf_add_float_32(gp_in0_1_buf8_lane_4_pack, res_update22_gp_in0_220__m_1169_gp_in0_219_0251_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_5_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_5_pack, gp_in0_1_buf8_lane_5);
  hw_uint<32 > res_update22_gp_in0_220_0171_gp_in0_219_0249_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220_0171_gp_in0_219_0249_pack, res_update22_gp_in0_220_0171_gp_in0_219_0249);
  auto res_update22_gp_in0_220_1173_gp_in0_219_0247 = llf_add_float_32(gp_in0_1_buf8_lane_5_pack, res_update22_gp_in0_220_0171_gp_in0_219_0249_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_6_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_6_pack, gp_in0_1_buf8_lane_6);
  hw_uint<32 > res_update22_gp_in0_220_1173_gp_in0_219_0247_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220_1173_gp_in0_219_0247_pack, res_update22_gp_in0_220_1173_gp_in0_219_0247);
  auto res_update22_gp_in0_220__m_1169_gp_in0_219__m_1245 = llf_add_float_32(gp_in0_1_buf8_lane_6_pack, res_update22_gp_in0_220_1173_gp_in0_219_0247_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_7_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_7_pack, gp_in0_1_buf8_lane_7);
  hw_uint<32 > res_update22_gp_in0_220__m_1169_gp_in0_219__m_1245_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220__m_1169_gp_in0_219__m_1245_pack, res_update22_gp_in0_220__m_1169_gp_in0_219__m_1245);
  auto res_update22_gp_in0_220_0171_gp_in0_219__m_1243 = llf_add_float_32(gp_in0_1_buf8_lane_7_pack, res_update22_gp_in0_220__m_1169_gp_in0_219__m_1245_pack);

  hw_uint<32 > gp_in0_1_buf8_lane_8_pack;
  set_at<0, 32, 32>(gp_in0_1_buf8_lane_8_pack, gp_in0_1_buf8_lane_8);
  hw_uint<32 > res_update22_gp_in0_220_0171_gp_in0_219__m_1243_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220_0171_gp_in0_219__m_1243_pack, res_update22_gp_in0_220_0171_gp_in0_219__m_1243);
  auto res_update22_gp_in0_220_1173_gp_in0_219__m_1241 = llf_add_float_32(gp_in0_1_buf8_lane_8_pack, res_update22_gp_in0_220_0171_gp_in0_219__m_1243_pack);

  hw_uint<32 > res_update22_gp_in0_220_1173_gp_in0_219__m_1241_pack;
  set_at<0, 32, 32>(res_update22_gp_in0_220_1173_gp_in0_219__m_1241_pack, res_update22_gp_in0_220_1173_gp_in0_219__m_1241);
  auto res_avg23 = avg_9_float(res_update22_gp_in0_220_1173_gp_in0_219__m_1241_pack);
  hw_uint<32 > return_value311;
  set_at<0, 32, 32>(return_value311, res_avg23);
  return return_value311;

}

