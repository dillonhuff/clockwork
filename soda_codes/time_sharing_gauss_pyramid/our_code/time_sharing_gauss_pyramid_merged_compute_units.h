#include "local_laplacian_filters_compute.h"

hw_uint<32> gp_gray_214_cu72(hw_uint<32*9>& gp_gray_1_buf4) {
  hw_uint<32> gp_gray_1_buf4_lane_0;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_0, gp_gray_1_buf4.extract<0, 31>());
  hw_uint<32> gp_gray_1_buf4_lane_1;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_1, gp_gray_1_buf4.extract<32, 63>());
  hw_uint<32> gp_gray_1_buf4_lane_2;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_2, gp_gray_1_buf4.extract<64, 95>());
  hw_uint<32> gp_gray_1_buf4_lane_3;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_3, gp_gray_1_buf4.extract<96, 127>());
  hw_uint<32> gp_gray_1_buf4_lane_4;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_4, gp_gray_1_buf4.extract<128, 159>());
  hw_uint<32> gp_gray_1_buf4_lane_5;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_5, gp_gray_1_buf4.extract<160, 191>());
  hw_uint<32> gp_gray_1_buf4_lane_6;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_6, gp_gray_1_buf4.extract<192, 223>());
  hw_uint<32> gp_gray_1_buf4_lane_7;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_7, gp_gray_1_buf4.extract<224, 255>());
  hw_uint<32> gp_gray_1_buf4_lane_8;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_8, gp_gray_1_buf4.extract<256, 287>());

	
auto res_init17 = llf_set_zero_float_32();

	  hw_uint<32 > gp_gray_1_buf4_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_0_pack, gp_gray_1_buf4_lane_0);
  hw_uint<32 > res_init17_pack;
  set_at<0, 32, 32>(res_init17_pack, res_init17);
auto res_update18_gp_gray_216__m_130_gp_gray_215_170 = llf_add_float_32(gp_gray_1_buf4_lane_0_pack, res_init17_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_1_pack, gp_gray_1_buf4_lane_1);
  hw_uint<32 > res_update18_gp_gray_216__m_130_gp_gray_215_170_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216__m_130_gp_gray_215_170_pack, res_update18_gp_gray_216__m_130_gp_gray_215_170);
auto res_update18_gp_gray_216_032_gp_gray_215_168 = llf_add_float_32(gp_gray_1_buf4_lane_1_pack, res_update18_gp_gray_216__m_130_gp_gray_215_170_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_2_pack, gp_gray_1_buf4_lane_2);
  hw_uint<32 > res_update18_gp_gray_216_032_gp_gray_215_168_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216_032_gp_gray_215_168_pack, res_update18_gp_gray_216_032_gp_gray_215_168);
auto res_update18_gp_gray_216_134_gp_gray_215_166 = llf_add_float_32(gp_gray_1_buf4_lane_2_pack, res_update18_gp_gray_216_032_gp_gray_215_168_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_3_pack, gp_gray_1_buf4_lane_3);
  hw_uint<32 > res_update18_gp_gray_216_134_gp_gray_215_166_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216_134_gp_gray_215_166_pack, res_update18_gp_gray_216_134_gp_gray_215_166);
auto res_update18_gp_gray_216__m_130_gp_gray_215_064 = llf_add_float_32(gp_gray_1_buf4_lane_3_pack, res_update18_gp_gray_216_134_gp_gray_215_166_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_4_pack, gp_gray_1_buf4_lane_4);
  hw_uint<32 > res_update18_gp_gray_216__m_130_gp_gray_215_064_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216__m_130_gp_gray_215_064_pack, res_update18_gp_gray_216__m_130_gp_gray_215_064);
auto res_update18_gp_gray_216_032_gp_gray_215_062 = llf_add_float_32(gp_gray_1_buf4_lane_4_pack, res_update18_gp_gray_216__m_130_gp_gray_215_064_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_5_pack, gp_gray_1_buf4_lane_5);
  hw_uint<32 > res_update18_gp_gray_216_032_gp_gray_215_062_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216_032_gp_gray_215_062_pack, res_update18_gp_gray_216_032_gp_gray_215_062);
auto res_update18_gp_gray_216_134_gp_gray_215_060 = llf_add_float_32(gp_gray_1_buf4_lane_5_pack, res_update18_gp_gray_216_032_gp_gray_215_062_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_6_pack, gp_gray_1_buf4_lane_6);
  hw_uint<32 > res_update18_gp_gray_216_134_gp_gray_215_060_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216_134_gp_gray_215_060_pack, res_update18_gp_gray_216_134_gp_gray_215_060);
auto res_update18_gp_gray_216__m_130_gp_gray_215__m_158 = llf_add_float_32(gp_gray_1_buf4_lane_6_pack, res_update18_gp_gray_216_134_gp_gray_215_060_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_7_pack, gp_gray_1_buf4_lane_7);
  hw_uint<32 > res_update18_gp_gray_216__m_130_gp_gray_215__m_158_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216__m_130_gp_gray_215__m_158_pack, res_update18_gp_gray_216__m_130_gp_gray_215__m_158);
auto res_update18_gp_gray_216_032_gp_gray_215__m_156 = llf_add_float_32(gp_gray_1_buf4_lane_7_pack, res_update18_gp_gray_216__m_130_gp_gray_215__m_158_pack);

	  hw_uint<32 > gp_gray_1_buf4_lane_8_pack;
  set_at<0, 32, 32>(gp_gray_1_buf4_lane_8_pack, gp_gray_1_buf4_lane_8);
  hw_uint<32 > res_update18_gp_gray_216_032_gp_gray_215__m_156_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216_032_gp_gray_215__m_156_pack, res_update18_gp_gray_216_032_gp_gray_215__m_156);
auto res_update18_gp_gray_216_134_gp_gray_215__m_154 = llf_add_float_32(gp_gray_1_buf4_lane_8_pack, res_update18_gp_gray_216_032_gp_gray_215__m_156_pack);

	  hw_uint<32 > res_update18_gp_gray_216_134_gp_gray_215__m_154_pack;
  set_at<0, 32, 32>(res_update18_gp_gray_216_134_gp_gray_215__m_154_pack, res_update18_gp_gray_216_134_gp_gray_215__m_154);
auto res_avg19 = avg_9_float(res_update18_gp_gray_216_134_gp_gray_215__m_154_pack);
  hw_uint<32 > return_value73;
  set_at<0, 32, 32>(return_value73, res_avg19);
  return return_value73;

}

hw_uint<32> gp_gray_16_cu75(hw_uint<32*9>& gray) {
  hw_uint<32> gray_lane_0;
  set_at<0, 32, 32>(gray_lane_0, gray.extract<0, 31>());
  hw_uint<32> gray_lane_1;
  set_at<0, 32, 32>(gray_lane_1, gray.extract<32, 63>());
  hw_uint<32> gray_lane_2;
  set_at<0, 32, 32>(gray_lane_2, gray.extract<64, 95>());
  hw_uint<32> gray_lane_3;
  set_at<0, 32, 32>(gray_lane_3, gray.extract<96, 127>());
  hw_uint<32> gray_lane_4;
  set_at<0, 32, 32>(gray_lane_4, gray.extract<128, 159>());
  hw_uint<32> gray_lane_5;
  set_at<0, 32, 32>(gray_lane_5, gray.extract<160, 191>());
  hw_uint<32> gray_lane_6;
  set_at<0, 32, 32>(gray_lane_6, gray.extract<192, 223>());
  hw_uint<32> gray_lane_7;
  set_at<0, 32, 32>(gray_lane_7, gray.extract<224, 255>());
  hw_uint<32> gray_lane_8;
  set_at<0, 32, 32>(gray_lane_8, gray.extract<256, 287>());

	
auto res_init9 = llf_set_zero_float_32();

	  hw_uint<32 > res_init9_pack;
  set_at<0, 32, 32>(res_init9_pack, res_init9);
  hw_uint<32 > gray_lane_0_pack;
  set_at<0, 32, 32>(gray_lane_0_pack, gray_lane_0);
auto res_update10_gp_gray_18__m_124_gp_gray_17_152 = llf_add_float_32(res_init9_pack, gray_lane_0_pack);

	  hw_uint<32 > res_update10_gp_gray_18__m_124_gp_gray_17_152_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18__m_124_gp_gray_17_152_pack, res_update10_gp_gray_18__m_124_gp_gray_17_152);
  hw_uint<32 > gray_lane_1_pack;
  set_at<0, 32, 32>(gray_lane_1_pack, gray_lane_1);
auto res_update10_gp_gray_18_026_gp_gray_17_150 = llf_add_float_32(res_update10_gp_gray_18__m_124_gp_gray_17_152_pack, gray_lane_1_pack);

	  hw_uint<32 > res_update10_gp_gray_18_026_gp_gray_17_150_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18_026_gp_gray_17_150_pack, res_update10_gp_gray_18_026_gp_gray_17_150);
  hw_uint<32 > gray_lane_2_pack;
  set_at<0, 32, 32>(gray_lane_2_pack, gray_lane_2);
auto res_update10_gp_gray_18_128_gp_gray_17_148 = llf_add_float_32(res_update10_gp_gray_18_026_gp_gray_17_150_pack, gray_lane_2_pack);

	  hw_uint<32 > res_update10_gp_gray_18_128_gp_gray_17_148_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18_128_gp_gray_17_148_pack, res_update10_gp_gray_18_128_gp_gray_17_148);
  hw_uint<32 > gray_lane_3_pack;
  set_at<0, 32, 32>(gray_lane_3_pack, gray_lane_3);
auto res_update10_gp_gray_18__m_124_gp_gray_17_046 = llf_add_float_32(res_update10_gp_gray_18_128_gp_gray_17_148_pack, gray_lane_3_pack);

	  hw_uint<32 > res_update10_gp_gray_18__m_124_gp_gray_17_046_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18__m_124_gp_gray_17_046_pack, res_update10_gp_gray_18__m_124_gp_gray_17_046);
  hw_uint<32 > gray_lane_4_pack;
  set_at<0, 32, 32>(gray_lane_4_pack, gray_lane_4);
auto res_update10_gp_gray_18_026_gp_gray_17_044 = llf_add_float_32(res_update10_gp_gray_18__m_124_gp_gray_17_046_pack, gray_lane_4_pack);

	  hw_uint<32 > res_update10_gp_gray_18_026_gp_gray_17_044_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18_026_gp_gray_17_044_pack, res_update10_gp_gray_18_026_gp_gray_17_044);
  hw_uint<32 > gray_lane_5_pack;
  set_at<0, 32, 32>(gray_lane_5_pack, gray_lane_5);
auto res_update10_gp_gray_18_128_gp_gray_17_042 = llf_add_float_32(res_update10_gp_gray_18_026_gp_gray_17_044_pack, gray_lane_5_pack);

	  hw_uint<32 > res_update10_gp_gray_18_128_gp_gray_17_042_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18_128_gp_gray_17_042_pack, res_update10_gp_gray_18_128_gp_gray_17_042);
  hw_uint<32 > gray_lane_6_pack;
  set_at<0, 32, 32>(gray_lane_6_pack, gray_lane_6);
auto res_update10_gp_gray_18__m_124_gp_gray_17__m_140 = llf_add_float_32(res_update10_gp_gray_18_128_gp_gray_17_042_pack, gray_lane_6_pack);

	  hw_uint<32 > res_update10_gp_gray_18__m_124_gp_gray_17__m_140_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18__m_124_gp_gray_17__m_140_pack, res_update10_gp_gray_18__m_124_gp_gray_17__m_140);
  hw_uint<32 > gray_lane_7_pack;
  set_at<0, 32, 32>(gray_lane_7_pack, gray_lane_7);
auto res_update10_gp_gray_18_026_gp_gray_17__m_138 = llf_add_float_32(res_update10_gp_gray_18__m_124_gp_gray_17__m_140_pack, gray_lane_7_pack);

	  hw_uint<32 > res_update10_gp_gray_18_026_gp_gray_17__m_138_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18_026_gp_gray_17__m_138_pack, res_update10_gp_gray_18_026_gp_gray_17__m_138);
  hw_uint<32 > gray_lane_8_pack;
  set_at<0, 32, 32>(gray_lane_8_pack, gray_lane_8);
auto res_update10_gp_gray_18_128_gp_gray_17__m_136 = llf_add_float_32(res_update10_gp_gray_18_026_gp_gray_17__m_138_pack, gray_lane_8_pack);

	  hw_uint<32 > res_update10_gp_gray_18_128_gp_gray_17__m_136_pack;
  set_at<0, 32, 32>(res_update10_gp_gray_18_128_gp_gray_17__m_136_pack, res_update10_gp_gray_18_128_gp_gray_17__m_136);
auto res_avg11 = avg_9_float(res_update10_gp_gray_18_128_gp_gray_17__m_136_pack);
  hw_uint<32 > return_value76;
  set_at<0, 32, 32>(return_value76, res_avg11);
  return return_value76;

}

