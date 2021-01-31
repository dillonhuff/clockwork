#include "local_laplacian_filters_compute.h"

hw_uint<32> gp_level_table13_120_cu1165(hw_uint<32*9>& level_table13) {
  hw_uint<32> level_table13_lane_0 = level_table13.extract<0, 31>();
  hw_uint<32> level_table13_lane_1 = level_table13.extract<32, 63>();
  hw_uint<32> level_table13_lane_2 = level_table13.extract<64, 95>();
  hw_uint<32> level_table13_lane_3 = level_table13.extract<96, 127>();
  hw_uint<32> level_table13_lane_4 = level_table13.extract<128, 159>();
  hw_uint<32> level_table13_lane_5 = level_table13.extract<160, 191>();
  hw_uint<32> level_table13_lane_6 = level_table13.extract<192, 223>();
  hw_uint<32> level_table13_lane_7 = level_table13.extract<224, 255>();
  hw_uint<32> level_table13_lane_8 = level_table13.extract<256, 287>();

	
auto res_init23 = llf_set_zero_float_32();

	  hw_uint<32 > res_init23_pack;
  set_at<0, 32, 32>(res_init23_pack, res_init23);
  hw_uint<32 > level_table13_lane_0_pack;
  set_at<0, 32, 32>(level_table13_lane_0_pack, level_table13_lane_0);
auto res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_1947 = llf_add_float_32(res_init23_pack, level_table13_lane_0_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_1947_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_1947_pack, res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_1947);
  hw_uint<32 > level_table13_lane_1_pack;
  set_at<0, 32, 32>(level_table13_lane_1_pack, level_table13_lane_1);
auto res_update24_gp_level_table13_122_0597_gp_level_table13_121_1945 = llf_add_float_32(res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_1947_pack, level_table13_lane_1_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122_0597_gp_level_table13_121_1945_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122_0597_gp_level_table13_121_1945_pack, res_update24_gp_level_table13_122_0597_gp_level_table13_121_1945);
  hw_uint<32 > level_table13_lane_2_pack;
  set_at<0, 32, 32>(level_table13_lane_2_pack, level_table13_lane_2);
auto res_update24_gp_level_table13_122_1599_gp_level_table13_121_1943 = llf_add_float_32(res_update24_gp_level_table13_122_0597_gp_level_table13_121_1945_pack, level_table13_lane_2_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122_1599_gp_level_table13_121_1943_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122_1599_gp_level_table13_121_1943_pack, res_update24_gp_level_table13_122_1599_gp_level_table13_121_1943);
  hw_uint<32 > level_table13_lane_3_pack;
  set_at<0, 32, 32>(level_table13_lane_3_pack, level_table13_lane_3);
auto res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_0941 = llf_add_float_32(res_update24_gp_level_table13_122_1599_gp_level_table13_121_1943_pack, level_table13_lane_3_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_0941_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_0941_pack, res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_0941);
  hw_uint<32 > level_table13_lane_4_pack;
  set_at<0, 32, 32>(level_table13_lane_4_pack, level_table13_lane_4);
auto res_update24_gp_level_table13_122_0597_gp_level_table13_121_0939 = llf_add_float_32(res_update24_gp_level_table13_122__m_1595_gp_level_table13_121_0941_pack, level_table13_lane_4_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122_0597_gp_level_table13_121_0939_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122_0597_gp_level_table13_121_0939_pack, res_update24_gp_level_table13_122_0597_gp_level_table13_121_0939);
  hw_uint<32 > level_table13_lane_5_pack;
  set_at<0, 32, 32>(level_table13_lane_5_pack, level_table13_lane_5);
auto res_update24_gp_level_table13_122_1599_gp_level_table13_121_0937 = llf_add_float_32(res_update24_gp_level_table13_122_0597_gp_level_table13_121_0939_pack, level_table13_lane_5_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122_1599_gp_level_table13_121_0937_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122_1599_gp_level_table13_121_0937_pack, res_update24_gp_level_table13_122_1599_gp_level_table13_121_0937);
  hw_uint<32 > level_table13_lane_6_pack;
  set_at<0, 32, 32>(level_table13_lane_6_pack, level_table13_lane_6);
auto res_update24_gp_level_table13_122__m_1595_gp_level_table13_121__m_1935 = llf_add_float_32(res_update24_gp_level_table13_122_1599_gp_level_table13_121_0937_pack, level_table13_lane_6_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122__m_1595_gp_level_table13_121__m_1935_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122__m_1595_gp_level_table13_121__m_1935_pack, res_update24_gp_level_table13_122__m_1595_gp_level_table13_121__m_1935);
  hw_uint<32 > level_table13_lane_7_pack;
  set_at<0, 32, 32>(level_table13_lane_7_pack, level_table13_lane_7);
auto res_update24_gp_level_table13_122_0597_gp_level_table13_121__m_1933 = llf_add_float_32(res_update24_gp_level_table13_122__m_1595_gp_level_table13_121__m_1935_pack, level_table13_lane_7_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122_0597_gp_level_table13_121__m_1933_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122_0597_gp_level_table13_121__m_1933_pack, res_update24_gp_level_table13_122_0597_gp_level_table13_121__m_1933);
  hw_uint<32 > level_table13_lane_8_pack;
  set_at<0, 32, 32>(level_table13_lane_8_pack, level_table13_lane_8);
auto res_update24_gp_level_table13_122_1599_gp_level_table13_121__m_1931 = llf_add_float_32(res_update24_gp_level_table13_122_0597_gp_level_table13_121__m_1933_pack, level_table13_lane_8_pack);

	  hw_uint<32 > res_update24_gp_level_table13_122_1599_gp_level_table13_121__m_1931_pack;
  set_at<0, 32, 32>(res_update24_gp_level_table13_122_1599_gp_level_table13_121__m_1931_pack, res_update24_gp_level_table13_122_1599_gp_level_table13_121__m_1931);
auto res_avg25 = avg_9_float(res_update24_gp_level_table13_122_1599_gp_level_table13_121__m_1931_pack);
  hw_uint<32 > return_value1166;
  set_at<0, 32, 32>(return_value1166, res_avg25);
  return return_value1166;

}

hw_uint<32> gp_level_table13_228_cu1168(hw_uint<32*9>& gp_level_table13_1_buf18) {
  hw_uint<32> gp_level_table13_1_buf18_lane_0 = gp_level_table13_1_buf18.extract<0, 31>();
  hw_uint<32> gp_level_table13_1_buf18_lane_1 = gp_level_table13_1_buf18.extract<32, 63>();
  hw_uint<32> gp_level_table13_1_buf18_lane_2 = gp_level_table13_1_buf18.extract<64, 95>();
  hw_uint<32> gp_level_table13_1_buf18_lane_3 = gp_level_table13_1_buf18.extract<96, 127>();
  hw_uint<32> gp_level_table13_1_buf18_lane_4 = gp_level_table13_1_buf18.extract<128, 159>();
  hw_uint<32> gp_level_table13_1_buf18_lane_5 = gp_level_table13_1_buf18.extract<160, 191>();
  hw_uint<32> gp_level_table13_1_buf18_lane_6 = gp_level_table13_1_buf18.extract<192, 223>();
  hw_uint<32> gp_level_table13_1_buf18_lane_7 = gp_level_table13_1_buf18.extract<224, 255>();
  hw_uint<32> gp_level_table13_1_buf18_lane_8 = gp_level_table13_1_buf18.extract<256, 287>();

	
auto res_init31 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table13_1_buf18_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_0_pack, gp_level_table13_1_buf18_lane_0);
  hw_uint<32 > res_init31_pack;
  set_at<0, 32, 32>(res_init31_pack, res_init31);
auto res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_1911 = llf_add_float_32(gp_level_table13_1_buf18_lane_0_pack, res_init31_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_1_pack, gp_level_table13_1_buf18_lane_1);
  hw_uint<32 > res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_1911_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_1911_pack, res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_1911);
auto res_update32_gp_level_table13_230_0609_gp_level_table13_229_1909 = llf_add_float_32(gp_level_table13_1_buf18_lane_1_pack, res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_1911_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_2_pack, gp_level_table13_1_buf18_lane_2);
  hw_uint<32 > res_update32_gp_level_table13_230_0609_gp_level_table13_229_1909_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230_0609_gp_level_table13_229_1909_pack, res_update32_gp_level_table13_230_0609_gp_level_table13_229_1909);
auto res_update32_gp_level_table13_230_1611_gp_level_table13_229_1907 = llf_add_float_32(gp_level_table13_1_buf18_lane_2_pack, res_update32_gp_level_table13_230_0609_gp_level_table13_229_1909_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_3_pack, gp_level_table13_1_buf18_lane_3);
  hw_uint<32 > res_update32_gp_level_table13_230_1611_gp_level_table13_229_1907_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230_1611_gp_level_table13_229_1907_pack, res_update32_gp_level_table13_230_1611_gp_level_table13_229_1907);
auto res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_0905 = llf_add_float_32(gp_level_table13_1_buf18_lane_3_pack, res_update32_gp_level_table13_230_1611_gp_level_table13_229_1907_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_4_pack, gp_level_table13_1_buf18_lane_4);
  hw_uint<32 > res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_0905_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_0905_pack, res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_0905);
auto res_update32_gp_level_table13_230_0609_gp_level_table13_229_0903 = llf_add_float_32(gp_level_table13_1_buf18_lane_4_pack, res_update32_gp_level_table13_230__m_1607_gp_level_table13_229_0905_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_5_pack, gp_level_table13_1_buf18_lane_5);
  hw_uint<32 > res_update32_gp_level_table13_230_0609_gp_level_table13_229_0903_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230_0609_gp_level_table13_229_0903_pack, res_update32_gp_level_table13_230_0609_gp_level_table13_229_0903);
auto res_update32_gp_level_table13_230_1611_gp_level_table13_229_0901 = llf_add_float_32(gp_level_table13_1_buf18_lane_5_pack, res_update32_gp_level_table13_230_0609_gp_level_table13_229_0903_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_6_pack, gp_level_table13_1_buf18_lane_6);
  hw_uint<32 > res_update32_gp_level_table13_230_1611_gp_level_table13_229_0901_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230_1611_gp_level_table13_229_0901_pack, res_update32_gp_level_table13_230_1611_gp_level_table13_229_0901);
auto res_update32_gp_level_table13_230__m_1607_gp_level_table13_229__m_1899 = llf_add_float_32(gp_level_table13_1_buf18_lane_6_pack, res_update32_gp_level_table13_230_1611_gp_level_table13_229_0901_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_7_pack, gp_level_table13_1_buf18_lane_7);
  hw_uint<32 > res_update32_gp_level_table13_230__m_1607_gp_level_table13_229__m_1899_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230__m_1607_gp_level_table13_229__m_1899_pack, res_update32_gp_level_table13_230__m_1607_gp_level_table13_229__m_1899);
auto res_update32_gp_level_table13_230_0609_gp_level_table13_229__m_1897 = llf_add_float_32(gp_level_table13_1_buf18_lane_7_pack, res_update32_gp_level_table13_230__m_1607_gp_level_table13_229__m_1899_pack);

	  hw_uint<32 > gp_level_table13_1_buf18_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table13_1_buf18_lane_8_pack, gp_level_table13_1_buf18_lane_8);
  hw_uint<32 > res_update32_gp_level_table13_230_0609_gp_level_table13_229__m_1897_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230_0609_gp_level_table13_229__m_1897_pack, res_update32_gp_level_table13_230_0609_gp_level_table13_229__m_1897);
auto res_update32_gp_level_table13_230_1611_gp_level_table13_229__m_1895 = llf_add_float_32(gp_level_table13_1_buf18_lane_8_pack, res_update32_gp_level_table13_230_0609_gp_level_table13_229__m_1897_pack);

	  hw_uint<32 > res_update32_gp_level_table13_230_1611_gp_level_table13_229__m_1895_pack;
  set_at<0, 32, 32>(res_update32_gp_level_table13_230_1611_gp_level_table13_229__m_1895_pack, res_update32_gp_level_table13_230_1611_gp_level_table13_229__m_1895);
auto res_avg33 = avg_9_float(res_update32_gp_level_table13_230_1611_gp_level_table13_229__m_1895_pack);
  hw_uint<32 > return_value1169;
  set_at<0, 32, 32>(return_value1169, res_avg33);
  return return_value1169;

}

hw_uint<32> gp_level_table13_336_cu1171(hw_uint<32*9>& gp_level_table13_2_buf26) {
  hw_uint<32> gp_level_table13_2_buf26_lane_0 = gp_level_table13_2_buf26.extract<0, 31>();
  hw_uint<32> gp_level_table13_2_buf26_lane_1 = gp_level_table13_2_buf26.extract<32, 63>();
  hw_uint<32> gp_level_table13_2_buf26_lane_2 = gp_level_table13_2_buf26.extract<64, 95>();
  hw_uint<32> gp_level_table13_2_buf26_lane_3 = gp_level_table13_2_buf26.extract<96, 127>();
  hw_uint<32> gp_level_table13_2_buf26_lane_4 = gp_level_table13_2_buf26.extract<128, 159>();
  hw_uint<32> gp_level_table13_2_buf26_lane_5 = gp_level_table13_2_buf26.extract<160, 191>();
  hw_uint<32> gp_level_table13_2_buf26_lane_6 = gp_level_table13_2_buf26.extract<192, 223>();
  hw_uint<32> gp_level_table13_2_buf26_lane_7 = gp_level_table13_2_buf26.extract<224, 255>();
  hw_uint<32> gp_level_table13_2_buf26_lane_8 = gp_level_table13_2_buf26.extract<256, 287>();

	
auto res_init39 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table13_2_buf26_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_0_pack, gp_level_table13_2_buf26_lane_0);
  hw_uint<32 > res_init39_pack;
  set_at<0, 32, 32>(res_init39_pack, res_init39);
auto res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_1875 = llf_add_float_32(gp_level_table13_2_buf26_lane_0_pack, res_init39_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_1_pack, gp_level_table13_2_buf26_lane_1);
  hw_uint<32 > res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_1875_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_1875_pack, res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_1875);
auto res_update40_gp_level_table13_338_0621_gp_level_table13_337_1873 = llf_add_float_32(gp_level_table13_2_buf26_lane_1_pack, res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_1875_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_2_pack, gp_level_table13_2_buf26_lane_2);
  hw_uint<32 > res_update40_gp_level_table13_338_0621_gp_level_table13_337_1873_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338_0621_gp_level_table13_337_1873_pack, res_update40_gp_level_table13_338_0621_gp_level_table13_337_1873);
auto res_update40_gp_level_table13_338_1623_gp_level_table13_337_1871 = llf_add_float_32(gp_level_table13_2_buf26_lane_2_pack, res_update40_gp_level_table13_338_0621_gp_level_table13_337_1873_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_3_pack, gp_level_table13_2_buf26_lane_3);
  hw_uint<32 > res_update40_gp_level_table13_338_1623_gp_level_table13_337_1871_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338_1623_gp_level_table13_337_1871_pack, res_update40_gp_level_table13_338_1623_gp_level_table13_337_1871);
auto res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_0869 = llf_add_float_32(gp_level_table13_2_buf26_lane_3_pack, res_update40_gp_level_table13_338_1623_gp_level_table13_337_1871_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_4_pack, gp_level_table13_2_buf26_lane_4);
  hw_uint<32 > res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_0869_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_0869_pack, res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_0869);
auto res_update40_gp_level_table13_338_0621_gp_level_table13_337_0867 = llf_add_float_32(gp_level_table13_2_buf26_lane_4_pack, res_update40_gp_level_table13_338__m_1619_gp_level_table13_337_0869_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_5_pack, gp_level_table13_2_buf26_lane_5);
  hw_uint<32 > res_update40_gp_level_table13_338_0621_gp_level_table13_337_0867_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338_0621_gp_level_table13_337_0867_pack, res_update40_gp_level_table13_338_0621_gp_level_table13_337_0867);
auto res_update40_gp_level_table13_338_1623_gp_level_table13_337_0865 = llf_add_float_32(gp_level_table13_2_buf26_lane_5_pack, res_update40_gp_level_table13_338_0621_gp_level_table13_337_0867_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_6_pack, gp_level_table13_2_buf26_lane_6);
  hw_uint<32 > res_update40_gp_level_table13_338_1623_gp_level_table13_337_0865_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338_1623_gp_level_table13_337_0865_pack, res_update40_gp_level_table13_338_1623_gp_level_table13_337_0865);
auto res_update40_gp_level_table13_338__m_1619_gp_level_table13_337__m_1863 = llf_add_float_32(gp_level_table13_2_buf26_lane_6_pack, res_update40_gp_level_table13_338_1623_gp_level_table13_337_0865_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_7_pack, gp_level_table13_2_buf26_lane_7);
  hw_uint<32 > res_update40_gp_level_table13_338__m_1619_gp_level_table13_337__m_1863_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338__m_1619_gp_level_table13_337__m_1863_pack, res_update40_gp_level_table13_338__m_1619_gp_level_table13_337__m_1863);
auto res_update40_gp_level_table13_338_0621_gp_level_table13_337__m_1861 = llf_add_float_32(gp_level_table13_2_buf26_lane_7_pack, res_update40_gp_level_table13_338__m_1619_gp_level_table13_337__m_1863_pack);

	  hw_uint<32 > gp_level_table13_2_buf26_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table13_2_buf26_lane_8_pack, gp_level_table13_2_buf26_lane_8);
  hw_uint<32 > res_update40_gp_level_table13_338_0621_gp_level_table13_337__m_1861_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338_0621_gp_level_table13_337__m_1861_pack, res_update40_gp_level_table13_338_0621_gp_level_table13_337__m_1861);
auto res_update40_gp_level_table13_338_1623_gp_level_table13_337__m_1859 = llf_add_float_32(gp_level_table13_2_buf26_lane_8_pack, res_update40_gp_level_table13_338_0621_gp_level_table13_337__m_1861_pack);

	  hw_uint<32 > res_update40_gp_level_table13_338_1623_gp_level_table13_337__m_1859_pack;
  set_at<0, 32, 32>(res_update40_gp_level_table13_338_1623_gp_level_table13_337__m_1859_pack, res_update40_gp_level_table13_338_1623_gp_level_table13_337__m_1859);
auto res_avg41 = avg_9_float(res_update40_gp_level_table13_338_1623_gp_level_table13_337__m_1859_pack);
  hw_uint<32 > return_value1172;
  set_at<0, 32, 32>(return_value1172, res_avg41);
  return return_value1172;

}

hw_uint<32> gp_level_table66_173_cu1174(hw_uint<32*9>& level_table66) {
  hw_uint<32> level_table66_lane_0 = level_table66.extract<0, 31>();
  hw_uint<32> level_table66_lane_1 = level_table66.extract<32, 63>();
  hw_uint<32> level_table66_lane_2 = level_table66.extract<64, 95>();
  hw_uint<32> level_table66_lane_3 = level_table66.extract<96, 127>();
  hw_uint<32> level_table66_lane_4 = level_table66.extract<128, 159>();
  hw_uint<32> level_table66_lane_5 = level_table66.extract<160, 191>();
  hw_uint<32> level_table66_lane_6 = level_table66.extract<192, 223>();
  hw_uint<32> level_table66_lane_7 = level_table66.extract<224, 255>();
  hw_uint<32> level_table66_lane_8 = level_table66.extract<256, 287>();

	
auto res_init76 = llf_set_zero_float_32();

	  hw_uint<32 > res_init76_pack;
  set_at<0, 32, 32>(res_init76_pack, res_init76);
  hw_uint<32 > level_table66_lane_0_pack;
  set_at<0, 32, 32>(level_table66_lane_0_pack, level_table66_lane_0);
auto res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_11073 = llf_add_float_32(res_init76_pack, level_table66_lane_0_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_11073_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_11073_pack, res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_11073);
  hw_uint<32 > level_table66_lane_1_pack;
  set_at<0, 32, 32>(level_table66_lane_1_pack, level_table66_lane_1);
auto res_update77_gp_level_table66_175_0543_gp_level_table66_174_11071 = llf_add_float_32(res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_11073_pack, level_table66_lane_1_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175_0543_gp_level_table66_174_11071_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175_0543_gp_level_table66_174_11071_pack, res_update77_gp_level_table66_175_0543_gp_level_table66_174_11071);
  hw_uint<32 > level_table66_lane_2_pack;
  set_at<0, 32, 32>(level_table66_lane_2_pack, level_table66_lane_2);
auto res_update77_gp_level_table66_175_1545_gp_level_table66_174_11069 = llf_add_float_32(res_update77_gp_level_table66_175_0543_gp_level_table66_174_11071_pack, level_table66_lane_2_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175_1545_gp_level_table66_174_11069_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175_1545_gp_level_table66_174_11069_pack, res_update77_gp_level_table66_175_1545_gp_level_table66_174_11069);
  hw_uint<32 > level_table66_lane_3_pack;
  set_at<0, 32, 32>(level_table66_lane_3_pack, level_table66_lane_3);
auto res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_01067 = llf_add_float_32(res_update77_gp_level_table66_175_1545_gp_level_table66_174_11069_pack, level_table66_lane_3_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_01067_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_01067_pack, res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_01067);
  hw_uint<32 > level_table66_lane_4_pack;
  set_at<0, 32, 32>(level_table66_lane_4_pack, level_table66_lane_4);
auto res_update77_gp_level_table66_175_0543_gp_level_table66_174_01065 = llf_add_float_32(res_update77_gp_level_table66_175__m_1541_gp_level_table66_174_01067_pack, level_table66_lane_4_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175_0543_gp_level_table66_174_01065_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175_0543_gp_level_table66_174_01065_pack, res_update77_gp_level_table66_175_0543_gp_level_table66_174_01065);
  hw_uint<32 > level_table66_lane_5_pack;
  set_at<0, 32, 32>(level_table66_lane_5_pack, level_table66_lane_5);
auto res_update77_gp_level_table66_175_1545_gp_level_table66_174_01063 = llf_add_float_32(res_update77_gp_level_table66_175_0543_gp_level_table66_174_01065_pack, level_table66_lane_5_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175_1545_gp_level_table66_174_01063_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175_1545_gp_level_table66_174_01063_pack, res_update77_gp_level_table66_175_1545_gp_level_table66_174_01063);
  hw_uint<32 > level_table66_lane_6_pack;
  set_at<0, 32, 32>(level_table66_lane_6_pack, level_table66_lane_6);
auto res_update77_gp_level_table66_175__m_1541_gp_level_table66_174__m_11061 = llf_add_float_32(res_update77_gp_level_table66_175_1545_gp_level_table66_174_01063_pack, level_table66_lane_6_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175__m_1541_gp_level_table66_174__m_11061_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175__m_1541_gp_level_table66_174__m_11061_pack, res_update77_gp_level_table66_175__m_1541_gp_level_table66_174__m_11061);
  hw_uint<32 > level_table66_lane_7_pack;
  set_at<0, 32, 32>(level_table66_lane_7_pack, level_table66_lane_7);
auto res_update77_gp_level_table66_175_0543_gp_level_table66_174__m_11059 = llf_add_float_32(res_update77_gp_level_table66_175__m_1541_gp_level_table66_174__m_11061_pack, level_table66_lane_7_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175_0543_gp_level_table66_174__m_11059_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175_0543_gp_level_table66_174__m_11059_pack, res_update77_gp_level_table66_175_0543_gp_level_table66_174__m_11059);
  hw_uint<32 > level_table66_lane_8_pack;
  set_at<0, 32, 32>(level_table66_lane_8_pack, level_table66_lane_8);
auto res_update77_gp_level_table66_175_1545_gp_level_table66_174__m_11057 = llf_add_float_32(res_update77_gp_level_table66_175_0543_gp_level_table66_174__m_11059_pack, level_table66_lane_8_pack);

	  hw_uint<32 > res_update77_gp_level_table66_175_1545_gp_level_table66_174__m_11057_pack;
  set_at<0, 32, 32>(res_update77_gp_level_table66_175_1545_gp_level_table66_174__m_11057_pack, res_update77_gp_level_table66_175_1545_gp_level_table66_174__m_11057);
auto res_avg78 = avg_9_float(res_update77_gp_level_table66_175_1545_gp_level_table66_174__m_11057_pack);
  hw_uint<32 > return_value1175;
  set_at<0, 32, 32>(return_value1175, res_avg78);
  return return_value1175;

}

hw_uint<32> gp_level_table66_281_cu1177(hw_uint<32*9>& gp_level_table66_1_buf71) {
  hw_uint<32> gp_level_table66_1_buf71_lane_0 = gp_level_table66_1_buf71.extract<0, 31>();
  hw_uint<32> gp_level_table66_1_buf71_lane_1 = gp_level_table66_1_buf71.extract<32, 63>();
  hw_uint<32> gp_level_table66_1_buf71_lane_2 = gp_level_table66_1_buf71.extract<64, 95>();
  hw_uint<32> gp_level_table66_1_buf71_lane_3 = gp_level_table66_1_buf71.extract<96, 127>();
  hw_uint<32> gp_level_table66_1_buf71_lane_4 = gp_level_table66_1_buf71.extract<128, 159>();
  hw_uint<32> gp_level_table66_1_buf71_lane_5 = gp_level_table66_1_buf71.extract<160, 191>();
  hw_uint<32> gp_level_table66_1_buf71_lane_6 = gp_level_table66_1_buf71.extract<192, 223>();
  hw_uint<32> gp_level_table66_1_buf71_lane_7 = gp_level_table66_1_buf71.extract<224, 255>();
  hw_uint<32> gp_level_table66_1_buf71_lane_8 = gp_level_table66_1_buf71.extract<256, 287>();

	
auto res_init84 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table66_1_buf71_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_0_pack, gp_level_table66_1_buf71_lane_0);
  hw_uint<32 > res_init84_pack;
  set_at<0, 32, 32>(res_init84_pack, res_init84);
auto res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_11109 = llf_add_float_32(gp_level_table66_1_buf71_lane_0_pack, res_init84_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_1_pack, gp_level_table66_1_buf71_lane_1);
  hw_uint<32 > res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_11109_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_11109_pack, res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_11109);
auto res_update85_gp_level_table66_283_0531_gp_level_table66_282_11107 = llf_add_float_32(gp_level_table66_1_buf71_lane_1_pack, res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_11109_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_2_pack, gp_level_table66_1_buf71_lane_2);
  hw_uint<32 > res_update85_gp_level_table66_283_0531_gp_level_table66_282_11107_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283_0531_gp_level_table66_282_11107_pack, res_update85_gp_level_table66_283_0531_gp_level_table66_282_11107);
auto res_update85_gp_level_table66_283_1533_gp_level_table66_282_11105 = llf_add_float_32(gp_level_table66_1_buf71_lane_2_pack, res_update85_gp_level_table66_283_0531_gp_level_table66_282_11107_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_3_pack, gp_level_table66_1_buf71_lane_3);
  hw_uint<32 > res_update85_gp_level_table66_283_1533_gp_level_table66_282_11105_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283_1533_gp_level_table66_282_11105_pack, res_update85_gp_level_table66_283_1533_gp_level_table66_282_11105);
auto res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_01103 = llf_add_float_32(gp_level_table66_1_buf71_lane_3_pack, res_update85_gp_level_table66_283_1533_gp_level_table66_282_11105_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_4_pack, gp_level_table66_1_buf71_lane_4);
  hw_uint<32 > res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_01103_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_01103_pack, res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_01103);
auto res_update85_gp_level_table66_283_0531_gp_level_table66_282_01101 = llf_add_float_32(gp_level_table66_1_buf71_lane_4_pack, res_update85_gp_level_table66_283__m_1529_gp_level_table66_282_01103_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_5_pack, gp_level_table66_1_buf71_lane_5);
  hw_uint<32 > res_update85_gp_level_table66_283_0531_gp_level_table66_282_01101_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283_0531_gp_level_table66_282_01101_pack, res_update85_gp_level_table66_283_0531_gp_level_table66_282_01101);
auto res_update85_gp_level_table66_283_1533_gp_level_table66_282_01099 = llf_add_float_32(gp_level_table66_1_buf71_lane_5_pack, res_update85_gp_level_table66_283_0531_gp_level_table66_282_01101_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_6_pack, gp_level_table66_1_buf71_lane_6);
  hw_uint<32 > res_update85_gp_level_table66_283_1533_gp_level_table66_282_01099_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283_1533_gp_level_table66_282_01099_pack, res_update85_gp_level_table66_283_1533_gp_level_table66_282_01099);
auto res_update85_gp_level_table66_283__m_1529_gp_level_table66_282__m_11097 = llf_add_float_32(gp_level_table66_1_buf71_lane_6_pack, res_update85_gp_level_table66_283_1533_gp_level_table66_282_01099_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_7_pack, gp_level_table66_1_buf71_lane_7);
  hw_uint<32 > res_update85_gp_level_table66_283__m_1529_gp_level_table66_282__m_11097_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283__m_1529_gp_level_table66_282__m_11097_pack, res_update85_gp_level_table66_283__m_1529_gp_level_table66_282__m_11097);
auto res_update85_gp_level_table66_283_0531_gp_level_table66_282__m_11095 = llf_add_float_32(gp_level_table66_1_buf71_lane_7_pack, res_update85_gp_level_table66_283__m_1529_gp_level_table66_282__m_11097_pack);

	  hw_uint<32 > gp_level_table66_1_buf71_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table66_1_buf71_lane_8_pack, gp_level_table66_1_buf71_lane_8);
  hw_uint<32 > res_update85_gp_level_table66_283_0531_gp_level_table66_282__m_11095_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283_0531_gp_level_table66_282__m_11095_pack, res_update85_gp_level_table66_283_0531_gp_level_table66_282__m_11095);
auto res_update85_gp_level_table66_283_1533_gp_level_table66_282__m_11093 = llf_add_float_32(gp_level_table66_1_buf71_lane_8_pack, res_update85_gp_level_table66_283_0531_gp_level_table66_282__m_11095_pack);

	  hw_uint<32 > res_update85_gp_level_table66_283_1533_gp_level_table66_282__m_11093_pack;
  set_at<0, 32, 32>(res_update85_gp_level_table66_283_1533_gp_level_table66_282__m_11093_pack, res_update85_gp_level_table66_283_1533_gp_level_table66_282__m_11093);
auto res_avg86 = avg_9_float(res_update85_gp_level_table66_283_1533_gp_level_table66_282__m_11093_pack);
  hw_uint<32 > return_value1178;
  set_at<0, 32, 32>(return_value1178, res_avg86);
  return return_value1178;

}

hw_uint<32> gp_level_table66_389_cu1180(hw_uint<32*9>& gp_level_table66_2_buf79) {
  hw_uint<32> gp_level_table66_2_buf79_lane_0 = gp_level_table66_2_buf79.extract<0, 31>();
  hw_uint<32> gp_level_table66_2_buf79_lane_1 = gp_level_table66_2_buf79.extract<32, 63>();
  hw_uint<32> gp_level_table66_2_buf79_lane_2 = gp_level_table66_2_buf79.extract<64, 95>();
  hw_uint<32> gp_level_table66_2_buf79_lane_3 = gp_level_table66_2_buf79.extract<96, 127>();
  hw_uint<32> gp_level_table66_2_buf79_lane_4 = gp_level_table66_2_buf79.extract<128, 159>();
  hw_uint<32> gp_level_table66_2_buf79_lane_5 = gp_level_table66_2_buf79.extract<160, 191>();
  hw_uint<32> gp_level_table66_2_buf79_lane_6 = gp_level_table66_2_buf79.extract<192, 223>();
  hw_uint<32> gp_level_table66_2_buf79_lane_7 = gp_level_table66_2_buf79.extract<224, 255>();
  hw_uint<32> gp_level_table66_2_buf79_lane_8 = gp_level_table66_2_buf79.extract<256, 287>();

	
auto res_init92 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table66_2_buf79_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_0_pack, gp_level_table66_2_buf79_lane_0);
  hw_uint<32 > res_init92_pack;
  set_at<0, 32, 32>(res_init92_pack, res_init92);
auto res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_11145 = llf_add_float_32(gp_level_table66_2_buf79_lane_0_pack, res_init92_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_1_pack, gp_level_table66_2_buf79_lane_1);
  hw_uint<32 > res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_11145_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_11145_pack, res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_11145);
auto res_update93_gp_level_table66_391_0675_gp_level_table66_390_11143 = llf_add_float_32(gp_level_table66_2_buf79_lane_1_pack, res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_11145_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_2_pack, gp_level_table66_2_buf79_lane_2);
  hw_uint<32 > res_update93_gp_level_table66_391_0675_gp_level_table66_390_11143_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391_0675_gp_level_table66_390_11143_pack, res_update93_gp_level_table66_391_0675_gp_level_table66_390_11143);
auto res_update93_gp_level_table66_391_1677_gp_level_table66_390_11141 = llf_add_float_32(gp_level_table66_2_buf79_lane_2_pack, res_update93_gp_level_table66_391_0675_gp_level_table66_390_11143_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_3_pack, gp_level_table66_2_buf79_lane_3);
  hw_uint<32 > res_update93_gp_level_table66_391_1677_gp_level_table66_390_11141_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391_1677_gp_level_table66_390_11141_pack, res_update93_gp_level_table66_391_1677_gp_level_table66_390_11141);
auto res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_01139 = llf_add_float_32(gp_level_table66_2_buf79_lane_3_pack, res_update93_gp_level_table66_391_1677_gp_level_table66_390_11141_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_4_pack, gp_level_table66_2_buf79_lane_4);
  hw_uint<32 > res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_01139_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_01139_pack, res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_01139);
auto res_update93_gp_level_table66_391_0675_gp_level_table66_390_01137 = llf_add_float_32(gp_level_table66_2_buf79_lane_4_pack, res_update93_gp_level_table66_391__m_1673_gp_level_table66_390_01139_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_5_pack, gp_level_table66_2_buf79_lane_5);
  hw_uint<32 > res_update93_gp_level_table66_391_0675_gp_level_table66_390_01137_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391_0675_gp_level_table66_390_01137_pack, res_update93_gp_level_table66_391_0675_gp_level_table66_390_01137);
auto res_update93_gp_level_table66_391_1677_gp_level_table66_390_01135 = llf_add_float_32(gp_level_table66_2_buf79_lane_5_pack, res_update93_gp_level_table66_391_0675_gp_level_table66_390_01137_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_6_pack, gp_level_table66_2_buf79_lane_6);
  hw_uint<32 > res_update93_gp_level_table66_391_1677_gp_level_table66_390_01135_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391_1677_gp_level_table66_390_01135_pack, res_update93_gp_level_table66_391_1677_gp_level_table66_390_01135);
auto res_update93_gp_level_table66_391__m_1673_gp_level_table66_390__m_11133 = llf_add_float_32(gp_level_table66_2_buf79_lane_6_pack, res_update93_gp_level_table66_391_1677_gp_level_table66_390_01135_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_7_pack, gp_level_table66_2_buf79_lane_7);
  hw_uint<32 > res_update93_gp_level_table66_391__m_1673_gp_level_table66_390__m_11133_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391__m_1673_gp_level_table66_390__m_11133_pack, res_update93_gp_level_table66_391__m_1673_gp_level_table66_390__m_11133);
auto res_update93_gp_level_table66_391_0675_gp_level_table66_390__m_11131 = llf_add_float_32(gp_level_table66_2_buf79_lane_7_pack, res_update93_gp_level_table66_391__m_1673_gp_level_table66_390__m_11133_pack);

	  hw_uint<32 > gp_level_table66_2_buf79_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table66_2_buf79_lane_8_pack, gp_level_table66_2_buf79_lane_8);
  hw_uint<32 > res_update93_gp_level_table66_391_0675_gp_level_table66_390__m_11131_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391_0675_gp_level_table66_390__m_11131_pack, res_update93_gp_level_table66_391_0675_gp_level_table66_390__m_11131);
auto res_update93_gp_level_table66_391_1677_gp_level_table66_390__m_11129 = llf_add_float_32(gp_level_table66_2_buf79_lane_8_pack, res_update93_gp_level_table66_391_0675_gp_level_table66_390__m_11131_pack);

	  hw_uint<32 > res_update93_gp_level_table66_391_1677_gp_level_table66_390__m_11129_pack;
  set_at<0, 32, 32>(res_update93_gp_level_table66_391_1677_gp_level_table66_390__m_11129_pack, res_update93_gp_level_table66_391_1677_gp_level_table66_390__m_11129);
auto res_avg94 = avg_9_float(res_update93_gp_level_table66_391_1677_gp_level_table66_390__m_11129_pack);
  hw_uint<32 > return_value1181;
  set_at<0, 32, 32>(return_value1181, res_avg94);
  return return_value1181;

}

hw_uint<32> gp_level_table119_1126_cu1183(hw_uint<32*9>& level_table119) {
  hw_uint<32> level_table119_lane_0 = level_table119.extract<0, 31>();
  hw_uint<32> level_table119_lane_1 = level_table119.extract<32, 63>();
  hw_uint<32> level_table119_lane_2 = level_table119.extract<64, 95>();
  hw_uint<32> level_table119_lane_3 = level_table119.extract<96, 127>();
  hw_uint<32> level_table119_lane_4 = level_table119.extract<128, 159>();
  hw_uint<32> level_table119_lane_5 = level_table119.extract<160, 191>();
  hw_uint<32> level_table119_lane_6 = level_table119.extract<192, 223>();
  hw_uint<32> level_table119_lane_7 = level_table119.extract<224, 255>();
  hw_uint<32> level_table119_lane_8 = level_table119.extract<256, 287>();

	
auto res_init129 = llf_set_zero_float_32();

	  hw_uint<32 > res_init129_pack;
  set_at<0, 32, 32>(res_init129_pack, res_init129);
  hw_uint<32 > level_table119_lane_0_pack;
  set_at<0, 32, 32>(level_table119_lane_0_pack, level_table119_lane_0);
auto res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_11055 = llf_add_float_32(res_init129_pack, level_table119_lane_0_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_11055_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_11055_pack, res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_11055);
  hw_uint<32 > level_table119_lane_1_pack;
  set_at<0, 32, 32>(level_table119_lane_1_pack, level_table119_lane_1);
auto res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_11053 = llf_add_float_32(res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_11055_pack, level_table119_lane_1_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_11053_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_11053_pack, res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_11053);
  hw_uint<32 > level_table119_lane_2_pack;
  set_at<0, 32, 32>(level_table119_lane_2_pack, level_table119_lane_2);
auto res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_11051 = llf_add_float_32(res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_11053_pack, level_table119_lane_2_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_11051_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_11051_pack, res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_11051);
  hw_uint<32 > level_table119_lane_3_pack;
  set_at<0, 32, 32>(level_table119_lane_3_pack, level_table119_lane_3);
auto res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_01049 = llf_add_float_32(res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_11051_pack, level_table119_lane_3_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_01049_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_01049_pack, res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_01049);
  hw_uint<32 > level_table119_lane_4_pack;
  set_at<0, 32, 32>(level_table119_lane_4_pack, level_table119_lane_4);
auto res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_01047 = llf_add_float_32(res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127_01049_pack, level_table119_lane_4_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_01047_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_01047_pack, res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_01047);
  hw_uint<32 > level_table119_lane_5_pack;
  set_at<0, 32, 32>(level_table119_lane_5_pack, level_table119_lane_5);
auto res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_01045 = llf_add_float_32(res_update130_gp_level_table119_1128_0561_gp_level_table119_1127_01047_pack, level_table119_lane_5_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_01045_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_01045_pack, res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_01045);
  hw_uint<32 > level_table119_lane_6_pack;
  set_at<0, 32, 32>(level_table119_lane_6_pack, level_table119_lane_6);
auto res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127__m_11043 = llf_add_float_32(res_update130_gp_level_table119_1128_1563_gp_level_table119_1127_01045_pack, level_table119_lane_6_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127__m_11043_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127__m_11043_pack, res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127__m_11043);
  hw_uint<32 > level_table119_lane_7_pack;
  set_at<0, 32, 32>(level_table119_lane_7_pack, level_table119_lane_7);
auto res_update130_gp_level_table119_1128_0561_gp_level_table119_1127__m_11041 = llf_add_float_32(res_update130_gp_level_table119_1128__m_1559_gp_level_table119_1127__m_11043_pack, level_table119_lane_7_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128_0561_gp_level_table119_1127__m_11041_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128_0561_gp_level_table119_1127__m_11041_pack, res_update130_gp_level_table119_1128_0561_gp_level_table119_1127__m_11041);
  hw_uint<32 > level_table119_lane_8_pack;
  set_at<0, 32, 32>(level_table119_lane_8_pack, level_table119_lane_8);
auto res_update130_gp_level_table119_1128_1563_gp_level_table119_1127__m_11039 = llf_add_float_32(res_update130_gp_level_table119_1128_0561_gp_level_table119_1127__m_11041_pack, level_table119_lane_8_pack);

	  hw_uint<32 > res_update130_gp_level_table119_1128_1563_gp_level_table119_1127__m_11039_pack;
  set_at<0, 32, 32>(res_update130_gp_level_table119_1128_1563_gp_level_table119_1127__m_11039_pack, res_update130_gp_level_table119_1128_1563_gp_level_table119_1127__m_11039);
auto res_avg131 = avg_9_float(res_update130_gp_level_table119_1128_1563_gp_level_table119_1127__m_11039_pack);
  hw_uint<32 > return_value1184;
  set_at<0, 32, 32>(return_value1184, res_avg131);
  return return_value1184;

}

hw_uint<32> gp_level_table119_2134_cu1186(hw_uint<32*9>& gp_level_table119_1_buf124) {
  hw_uint<32> gp_level_table119_1_buf124_lane_0 = gp_level_table119_1_buf124.extract<0, 31>();
  hw_uint<32> gp_level_table119_1_buf124_lane_1 = gp_level_table119_1_buf124.extract<32, 63>();
  hw_uint<32> gp_level_table119_1_buf124_lane_2 = gp_level_table119_1_buf124.extract<64, 95>();
  hw_uint<32> gp_level_table119_1_buf124_lane_3 = gp_level_table119_1_buf124.extract<96, 127>();
  hw_uint<32> gp_level_table119_1_buf124_lane_4 = gp_level_table119_1_buf124.extract<128, 159>();
  hw_uint<32> gp_level_table119_1_buf124_lane_5 = gp_level_table119_1_buf124.extract<160, 191>();
  hw_uint<32> gp_level_table119_1_buf124_lane_6 = gp_level_table119_1_buf124.extract<192, 223>();
  hw_uint<32> gp_level_table119_1_buf124_lane_7 = gp_level_table119_1_buf124.extract<224, 255>();
  hw_uint<32> gp_level_table119_1_buf124_lane_8 = gp_level_table119_1_buf124.extract<256, 287>();

	
auto res_init137 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table119_1_buf124_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_0_pack, gp_level_table119_1_buf124_lane_0);
  hw_uint<32 > res_init137_pack;
  set_at<0, 32, 32>(res_init137_pack, res_init137);
auto res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_11019 = llf_add_float_32(gp_level_table119_1_buf124_lane_0_pack, res_init137_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_1_pack, gp_level_table119_1_buf124_lane_1);
  hw_uint<32 > res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_11019_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_11019_pack, res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_11019);
auto res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_11017 = llf_add_float_32(gp_level_table119_1_buf124_lane_1_pack, res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_11019_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_2_pack, gp_level_table119_1_buf124_lane_2);
  hw_uint<32 > res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_11017_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_11017_pack, res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_11017);
auto res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_11015 = llf_add_float_32(gp_level_table119_1_buf124_lane_2_pack, res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_11017_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_3_pack, gp_level_table119_1_buf124_lane_3);
  hw_uint<32 > res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_11015_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_11015_pack, res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_11015);
auto res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_01013 = llf_add_float_32(gp_level_table119_1_buf124_lane_3_pack, res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_11015_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_4_pack, gp_level_table119_1_buf124_lane_4);
  hw_uint<32 > res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_01013_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_01013_pack, res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_01013);
auto res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_01011 = llf_add_float_32(gp_level_table119_1_buf124_lane_4_pack, res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135_01013_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_5_pack, gp_level_table119_1_buf124_lane_5);
  hw_uint<32 > res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_01011_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_01011_pack, res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_01011);
auto res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_01009 = llf_add_float_32(gp_level_table119_1_buf124_lane_5_pack, res_update138_gp_level_table119_2136_0573_gp_level_table119_2135_01011_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_6_pack, gp_level_table119_1_buf124_lane_6);
  hw_uint<32 > res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_01009_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_01009_pack, res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_01009);
auto res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135__m_11007 = llf_add_float_32(gp_level_table119_1_buf124_lane_6_pack, res_update138_gp_level_table119_2136_1575_gp_level_table119_2135_01009_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_7_pack, gp_level_table119_1_buf124_lane_7);
  hw_uint<32 > res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135__m_11007_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135__m_11007_pack, res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135__m_11007);
auto res_update138_gp_level_table119_2136_0573_gp_level_table119_2135__m_11005 = llf_add_float_32(gp_level_table119_1_buf124_lane_7_pack, res_update138_gp_level_table119_2136__m_1571_gp_level_table119_2135__m_11007_pack);

	  hw_uint<32 > gp_level_table119_1_buf124_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table119_1_buf124_lane_8_pack, gp_level_table119_1_buf124_lane_8);
  hw_uint<32 > res_update138_gp_level_table119_2136_0573_gp_level_table119_2135__m_11005_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136_0573_gp_level_table119_2135__m_11005_pack, res_update138_gp_level_table119_2136_0573_gp_level_table119_2135__m_11005);
auto res_update138_gp_level_table119_2136_1575_gp_level_table119_2135__m_11003 = llf_add_float_32(gp_level_table119_1_buf124_lane_8_pack, res_update138_gp_level_table119_2136_0573_gp_level_table119_2135__m_11005_pack);

	  hw_uint<32 > res_update138_gp_level_table119_2136_1575_gp_level_table119_2135__m_11003_pack;
  set_at<0, 32, 32>(res_update138_gp_level_table119_2136_1575_gp_level_table119_2135__m_11003_pack, res_update138_gp_level_table119_2136_1575_gp_level_table119_2135__m_11003);
auto res_avg139 = avg_9_float(res_update138_gp_level_table119_2136_1575_gp_level_table119_2135__m_11003_pack);
  hw_uint<32 > return_value1187;
  set_at<0, 32, 32>(return_value1187, res_avg139);
  return return_value1187;

}

hw_uint<32> gp_level_table119_3142_cu1189(hw_uint<32*9>& gp_level_table119_2_buf132) {
  hw_uint<32> gp_level_table119_2_buf132_lane_0 = gp_level_table119_2_buf132.extract<0, 31>();
  hw_uint<32> gp_level_table119_2_buf132_lane_1 = gp_level_table119_2_buf132.extract<32, 63>();
  hw_uint<32> gp_level_table119_2_buf132_lane_2 = gp_level_table119_2_buf132.extract<64, 95>();
  hw_uint<32> gp_level_table119_2_buf132_lane_3 = gp_level_table119_2_buf132.extract<96, 127>();
  hw_uint<32> gp_level_table119_2_buf132_lane_4 = gp_level_table119_2_buf132.extract<128, 159>();
  hw_uint<32> gp_level_table119_2_buf132_lane_5 = gp_level_table119_2_buf132.extract<160, 191>();
  hw_uint<32> gp_level_table119_2_buf132_lane_6 = gp_level_table119_2_buf132.extract<192, 223>();
  hw_uint<32> gp_level_table119_2_buf132_lane_7 = gp_level_table119_2_buf132.extract<224, 255>();
  hw_uint<32> gp_level_table119_2_buf132_lane_8 = gp_level_table119_2_buf132.extract<256, 287>();

	
auto res_init145 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table119_2_buf132_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_0_pack, gp_level_table119_2_buf132_lane_0);
  hw_uint<32 > res_init145_pack;
  set_at<0, 32, 32>(res_init145_pack, res_init145);
auto res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_1983 = llf_add_float_32(gp_level_table119_2_buf132_lane_0_pack, res_init145_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_1_pack, gp_level_table119_2_buf132_lane_1);
  hw_uint<32 > res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_1983_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_1983_pack, res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_1983);
auto res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_1981 = llf_add_float_32(gp_level_table119_2_buf132_lane_1_pack, res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_1983_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_2_pack, gp_level_table119_2_buf132_lane_2);
  hw_uint<32 > res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_1981_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_1981_pack, res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_1981);
auto res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_1979 = llf_add_float_32(gp_level_table119_2_buf132_lane_2_pack, res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_1981_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_3_pack, gp_level_table119_2_buf132_lane_3);
  hw_uint<32 > res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_1979_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_1979_pack, res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_1979);
auto res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_0977 = llf_add_float_32(gp_level_table119_2_buf132_lane_3_pack, res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_1979_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_4_pack, gp_level_table119_2_buf132_lane_4);
  hw_uint<32 > res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_0977_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_0977_pack, res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_0977);
auto res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_0975 = llf_add_float_32(gp_level_table119_2_buf132_lane_4_pack, res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143_0977_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_5_pack, gp_level_table119_2_buf132_lane_5);
  hw_uint<32 > res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_0975_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_0975_pack, res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_0975);
auto res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_0973 = llf_add_float_32(gp_level_table119_2_buf132_lane_5_pack, res_update146_gp_level_table119_3144_0585_gp_level_table119_3143_0975_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_6_pack, gp_level_table119_2_buf132_lane_6);
  hw_uint<32 > res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_0973_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_0973_pack, res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_0973);
auto res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143__m_1971 = llf_add_float_32(gp_level_table119_2_buf132_lane_6_pack, res_update146_gp_level_table119_3144_1587_gp_level_table119_3143_0973_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_7_pack, gp_level_table119_2_buf132_lane_7);
  hw_uint<32 > res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143__m_1971_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143__m_1971_pack, res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143__m_1971);
auto res_update146_gp_level_table119_3144_0585_gp_level_table119_3143__m_1969 = llf_add_float_32(gp_level_table119_2_buf132_lane_7_pack, res_update146_gp_level_table119_3144__m_1583_gp_level_table119_3143__m_1971_pack);

	  hw_uint<32 > gp_level_table119_2_buf132_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table119_2_buf132_lane_8_pack, gp_level_table119_2_buf132_lane_8);
  hw_uint<32 > res_update146_gp_level_table119_3144_0585_gp_level_table119_3143__m_1969_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144_0585_gp_level_table119_3143__m_1969_pack, res_update146_gp_level_table119_3144_0585_gp_level_table119_3143__m_1969);
auto res_update146_gp_level_table119_3144_1587_gp_level_table119_3143__m_1967 = llf_add_float_32(gp_level_table119_2_buf132_lane_8_pack, res_update146_gp_level_table119_3144_0585_gp_level_table119_3143__m_1969_pack);

	  hw_uint<32 > res_update146_gp_level_table119_3144_1587_gp_level_table119_3143__m_1967_pack;
  set_at<0, 32, 32>(res_update146_gp_level_table119_3144_1587_gp_level_table119_3143__m_1967_pack, res_update146_gp_level_table119_3144_1587_gp_level_table119_3143__m_1967);
auto res_avg147 = avg_9_float(res_update146_gp_level_table119_3144_1587_gp_level_table119_3143__m_1967_pack);
  hw_uint<32 > return_value1190;
  set_at<0, 32, 32>(return_value1190, res_avg147);
  return return_value1190;

}

hw_uint<32> gp_level_table331_1338_cu1192(hw_uint<32*9>& level_table331) {
  hw_uint<32> level_table331_lane_0 = level_table331.extract<0, 31>();
  hw_uint<32> level_table331_lane_1 = level_table331.extract<32, 63>();
  hw_uint<32> level_table331_lane_2 = level_table331.extract<64, 95>();
  hw_uint<32> level_table331_lane_3 = level_table331.extract<96, 127>();
  hw_uint<32> level_table331_lane_4 = level_table331.extract<128, 159>();
  hw_uint<32> level_table331_lane_5 = level_table331.extract<160, 191>();
  hw_uint<32> level_table331_lane_6 = level_table331.extract<192, 223>();
  hw_uint<32> level_table331_lane_7 = level_table331.extract<224, 255>();
  hw_uint<32> level_table331_lane_8 = level_table331.extract<256, 287>();

	
auto res_init341 = llf_set_zero_float_32();

	  hw_uint<32 > res_init341_pack;
  set_at<0, 32, 32>(res_init341_pack, res_init341);
  hw_uint<32 > level_table331_lane_0_pack;
  set_at<0, 32, 32>(level_table331_lane_0_pack, level_table331_lane_0);
auto res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_1857 = llf_add_float_32(res_init341_pack, level_table331_lane_0_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_1857_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_1857_pack, res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_1857);
  hw_uint<32 > level_table331_lane_1_pack;
  set_at<0, 32, 32>(level_table331_lane_1_pack, level_table331_lane_1);
auto res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_1855 = llf_add_float_32(res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_1857_pack, level_table331_lane_1_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_1855_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_1855_pack, res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_1855);
  hw_uint<32 > level_table331_lane_2_pack;
  set_at<0, 32, 32>(level_table331_lane_2_pack, level_table331_lane_2);
auto res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_1853 = llf_add_float_32(res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_1855_pack, level_table331_lane_2_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_1853_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_1853_pack, res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_1853);
  hw_uint<32 > level_table331_lane_3_pack;
  set_at<0, 32, 32>(level_table331_lane_3_pack, level_table331_lane_3);
auto res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_0851 = llf_add_float_32(res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_1853_pack, level_table331_lane_3_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_0851_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_0851_pack, res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_0851);
  hw_uint<32 > level_table331_lane_4_pack;
  set_at<0, 32, 32>(level_table331_lane_4_pack, level_table331_lane_4);
auto res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_0849 = llf_add_float_32(res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339_0851_pack, level_table331_lane_4_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_0849_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_0849_pack, res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_0849);
  hw_uint<32 > level_table331_lane_5_pack;
  set_at<0, 32, 32>(level_table331_lane_5_pack, level_table331_lane_5);
auto res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_0847 = llf_add_float_32(res_update342_gp_level_table331_1340_0615_gp_level_table331_1339_0849_pack, level_table331_lane_5_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_0847_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_0847_pack, res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_0847);
  hw_uint<32 > level_table331_lane_6_pack;
  set_at<0, 32, 32>(level_table331_lane_6_pack, level_table331_lane_6);
auto res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339__m_1845 = llf_add_float_32(res_update342_gp_level_table331_1340_1617_gp_level_table331_1339_0847_pack, level_table331_lane_6_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339__m_1845_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339__m_1845_pack, res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339__m_1845);
  hw_uint<32 > level_table331_lane_7_pack;
  set_at<0, 32, 32>(level_table331_lane_7_pack, level_table331_lane_7);
auto res_update342_gp_level_table331_1340_0615_gp_level_table331_1339__m_1843 = llf_add_float_32(res_update342_gp_level_table331_1340__m_1613_gp_level_table331_1339__m_1845_pack, level_table331_lane_7_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340_0615_gp_level_table331_1339__m_1843_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340_0615_gp_level_table331_1339__m_1843_pack, res_update342_gp_level_table331_1340_0615_gp_level_table331_1339__m_1843);
  hw_uint<32 > level_table331_lane_8_pack;
  set_at<0, 32, 32>(level_table331_lane_8_pack, level_table331_lane_8);
auto res_update342_gp_level_table331_1340_1617_gp_level_table331_1339__m_1841 = llf_add_float_32(res_update342_gp_level_table331_1340_0615_gp_level_table331_1339__m_1843_pack, level_table331_lane_8_pack);

	  hw_uint<32 > res_update342_gp_level_table331_1340_1617_gp_level_table331_1339__m_1841_pack;
  set_at<0, 32, 32>(res_update342_gp_level_table331_1340_1617_gp_level_table331_1339__m_1841_pack, res_update342_gp_level_table331_1340_1617_gp_level_table331_1339__m_1841);
auto res_avg343 = avg_9_float(res_update342_gp_level_table331_1340_1617_gp_level_table331_1339__m_1841_pack);
  hw_uint<32 > return_value1193;
  set_at<0, 32, 32>(return_value1193, res_avg343);
  return return_value1193;

}

hw_uint<32> gp_level_table172_1179_cu1195(hw_uint<32*9>& level_table172) {
  hw_uint<32> level_table172_lane_0 = level_table172.extract<0, 31>();
  hw_uint<32> level_table172_lane_1 = level_table172.extract<32, 63>();
  hw_uint<32> level_table172_lane_2 = level_table172.extract<64, 95>();
  hw_uint<32> level_table172_lane_3 = level_table172.extract<96, 127>();
  hw_uint<32> level_table172_lane_4 = level_table172.extract<128, 159>();
  hw_uint<32> level_table172_lane_5 = level_table172.extract<160, 191>();
  hw_uint<32> level_table172_lane_6 = level_table172.extract<192, 223>();
  hw_uint<32> level_table172_lane_7 = level_table172.extract<224, 255>();
  hw_uint<32> level_table172_lane_8 = level_table172.extract<256, 287>();

	
auto res_init182 = llf_set_zero_float_32();

	  hw_uint<32 > res_init182_pack;
  set_at<0, 32, 32>(res_init182_pack, res_init182);
  hw_uint<32 > level_table172_lane_0_pack;
  set_at<0, 32, 32>(level_table172_lane_0_pack, level_table172_lane_0);
auto res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_1839 = llf_add_float_32(res_init182_pack, level_table172_lane_0_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_1839_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_1839_pack, res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_1839);
  hw_uint<32 > level_table172_lane_1_pack;
  set_at<0, 32, 32>(level_table172_lane_1_pack, level_table172_lane_1);
auto res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_1837 = llf_add_float_32(res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_1839_pack, level_table172_lane_1_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_1837_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_1837_pack, res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_1837);
  hw_uint<32 > level_table172_lane_2_pack;
  set_at<0, 32, 32>(level_table172_lane_2_pack, level_table172_lane_2);
auto res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_1835 = llf_add_float_32(res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_1837_pack, level_table172_lane_2_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_1835_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_1835_pack, res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_1835);
  hw_uint<32 > level_table172_lane_3_pack;
  set_at<0, 32, 32>(level_table172_lane_3_pack, level_table172_lane_3);
auto res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_0833 = llf_add_float_32(res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_1835_pack, level_table172_lane_3_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_0833_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_0833_pack, res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_0833);
  hw_uint<32 > level_table172_lane_4_pack;
  set_at<0, 32, 32>(level_table172_lane_4_pack, level_table172_lane_4);
auto res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_0831 = llf_add_float_32(res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180_0833_pack, level_table172_lane_4_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_0831_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_0831_pack, res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_0831);
  hw_uint<32 > level_table172_lane_5_pack;
  set_at<0, 32, 32>(level_table172_lane_5_pack, level_table172_lane_5);
auto res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_0829 = llf_add_float_32(res_update183_gp_level_table172_1181_0633_gp_level_table172_1180_0831_pack, level_table172_lane_5_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_0829_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_0829_pack, res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_0829);
  hw_uint<32 > level_table172_lane_6_pack;
  set_at<0, 32, 32>(level_table172_lane_6_pack, level_table172_lane_6);
auto res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180__m_1827 = llf_add_float_32(res_update183_gp_level_table172_1181_1635_gp_level_table172_1180_0829_pack, level_table172_lane_6_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180__m_1827_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180__m_1827_pack, res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180__m_1827);
  hw_uint<32 > level_table172_lane_7_pack;
  set_at<0, 32, 32>(level_table172_lane_7_pack, level_table172_lane_7);
auto res_update183_gp_level_table172_1181_0633_gp_level_table172_1180__m_1825 = llf_add_float_32(res_update183_gp_level_table172_1181__m_1631_gp_level_table172_1180__m_1827_pack, level_table172_lane_7_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181_0633_gp_level_table172_1180__m_1825_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181_0633_gp_level_table172_1180__m_1825_pack, res_update183_gp_level_table172_1181_0633_gp_level_table172_1180__m_1825);
  hw_uint<32 > level_table172_lane_8_pack;
  set_at<0, 32, 32>(level_table172_lane_8_pack, level_table172_lane_8);
auto res_update183_gp_level_table172_1181_1635_gp_level_table172_1180__m_1823 = llf_add_float_32(res_update183_gp_level_table172_1181_0633_gp_level_table172_1180__m_1825_pack, level_table172_lane_8_pack);

	  hw_uint<32 > res_update183_gp_level_table172_1181_1635_gp_level_table172_1180__m_1823_pack;
  set_at<0, 32, 32>(res_update183_gp_level_table172_1181_1635_gp_level_table172_1180__m_1823_pack, res_update183_gp_level_table172_1181_1635_gp_level_table172_1180__m_1823);
auto res_avg184 = avg_9_float(res_update183_gp_level_table172_1181_1635_gp_level_table172_1180__m_1823_pack);
  hw_uint<32 > return_value1196;
  set_at<0, 32, 32>(return_value1196, res_avg184);
  return return_value1196;

}

hw_uint<32> gp_level_table172_2187_cu1198(hw_uint<32*9>& gp_level_table172_1_buf177) {
  hw_uint<32> gp_level_table172_1_buf177_lane_0 = gp_level_table172_1_buf177.extract<0, 31>();
  hw_uint<32> gp_level_table172_1_buf177_lane_1 = gp_level_table172_1_buf177.extract<32, 63>();
  hw_uint<32> gp_level_table172_1_buf177_lane_2 = gp_level_table172_1_buf177.extract<64, 95>();
  hw_uint<32> gp_level_table172_1_buf177_lane_3 = gp_level_table172_1_buf177.extract<96, 127>();
  hw_uint<32> gp_level_table172_1_buf177_lane_4 = gp_level_table172_1_buf177.extract<128, 159>();
  hw_uint<32> gp_level_table172_1_buf177_lane_5 = gp_level_table172_1_buf177.extract<160, 191>();
  hw_uint<32> gp_level_table172_1_buf177_lane_6 = gp_level_table172_1_buf177.extract<192, 223>();
  hw_uint<32> gp_level_table172_1_buf177_lane_7 = gp_level_table172_1_buf177.extract<224, 255>();
  hw_uint<32> gp_level_table172_1_buf177_lane_8 = gp_level_table172_1_buf177.extract<256, 287>();

	
auto res_init190 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table172_1_buf177_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_0_pack, gp_level_table172_1_buf177_lane_0);
  hw_uint<32 > res_init190_pack;
  set_at<0, 32, 32>(res_init190_pack, res_init190);
auto res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_1803 = llf_add_float_32(gp_level_table172_1_buf177_lane_0_pack, res_init190_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_1_pack, gp_level_table172_1_buf177_lane_1);
  hw_uint<32 > res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_1803_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_1803_pack, res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_1803);
auto res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_1801 = llf_add_float_32(gp_level_table172_1_buf177_lane_1_pack, res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_1803_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_2_pack, gp_level_table172_1_buf177_lane_2);
  hw_uint<32 > res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_1801_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_1801_pack, res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_1801);
auto res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_1799 = llf_add_float_32(gp_level_table172_1_buf177_lane_2_pack, res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_1801_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_3_pack, gp_level_table172_1_buf177_lane_3);
  hw_uint<32 > res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_1799_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_1799_pack, res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_1799);
auto res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_0797 = llf_add_float_32(gp_level_table172_1_buf177_lane_3_pack, res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_1799_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_4_pack, gp_level_table172_1_buf177_lane_4);
  hw_uint<32 > res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_0797_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_0797_pack, res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_0797);
auto res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_0795 = llf_add_float_32(gp_level_table172_1_buf177_lane_4_pack, res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188_0797_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_5_pack, gp_level_table172_1_buf177_lane_5);
  hw_uint<32 > res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_0795_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_0795_pack, res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_0795);
auto res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_0793 = llf_add_float_32(gp_level_table172_1_buf177_lane_5_pack, res_update191_gp_level_table172_2189_0645_gp_level_table172_2188_0795_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_6_pack, gp_level_table172_1_buf177_lane_6);
  hw_uint<32 > res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_0793_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_0793_pack, res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_0793);
auto res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188__m_1791 = llf_add_float_32(gp_level_table172_1_buf177_lane_6_pack, res_update191_gp_level_table172_2189_1647_gp_level_table172_2188_0793_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_7_pack, gp_level_table172_1_buf177_lane_7);
  hw_uint<32 > res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188__m_1791_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188__m_1791_pack, res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188__m_1791);
auto res_update191_gp_level_table172_2189_0645_gp_level_table172_2188__m_1789 = llf_add_float_32(gp_level_table172_1_buf177_lane_7_pack, res_update191_gp_level_table172_2189__m_1643_gp_level_table172_2188__m_1791_pack);

	  hw_uint<32 > gp_level_table172_1_buf177_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table172_1_buf177_lane_8_pack, gp_level_table172_1_buf177_lane_8);
  hw_uint<32 > res_update191_gp_level_table172_2189_0645_gp_level_table172_2188__m_1789_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189_0645_gp_level_table172_2188__m_1789_pack, res_update191_gp_level_table172_2189_0645_gp_level_table172_2188__m_1789);
auto res_update191_gp_level_table172_2189_1647_gp_level_table172_2188__m_1787 = llf_add_float_32(gp_level_table172_1_buf177_lane_8_pack, res_update191_gp_level_table172_2189_0645_gp_level_table172_2188__m_1789_pack);

	  hw_uint<32 > res_update191_gp_level_table172_2189_1647_gp_level_table172_2188__m_1787_pack;
  set_at<0, 32, 32>(res_update191_gp_level_table172_2189_1647_gp_level_table172_2188__m_1787_pack, res_update191_gp_level_table172_2189_1647_gp_level_table172_2188__m_1787);
auto res_avg192 = avg_9_float(res_update191_gp_level_table172_2189_1647_gp_level_table172_2188__m_1787_pack);
  hw_uint<32 > return_value1199;
  set_at<0, 32, 32>(return_value1199, res_avg192);
  return return_value1199;

}

hw_uint<32> gp_level_table172_3195_cu1201(hw_uint<32*9>& gp_level_table172_2_buf185) {
  hw_uint<32> gp_level_table172_2_buf185_lane_0 = gp_level_table172_2_buf185.extract<0, 31>();
  hw_uint<32> gp_level_table172_2_buf185_lane_1 = gp_level_table172_2_buf185.extract<32, 63>();
  hw_uint<32> gp_level_table172_2_buf185_lane_2 = gp_level_table172_2_buf185.extract<64, 95>();
  hw_uint<32> gp_level_table172_2_buf185_lane_3 = gp_level_table172_2_buf185.extract<96, 127>();
  hw_uint<32> gp_level_table172_2_buf185_lane_4 = gp_level_table172_2_buf185.extract<128, 159>();
  hw_uint<32> gp_level_table172_2_buf185_lane_5 = gp_level_table172_2_buf185.extract<160, 191>();
  hw_uint<32> gp_level_table172_2_buf185_lane_6 = gp_level_table172_2_buf185.extract<192, 223>();
  hw_uint<32> gp_level_table172_2_buf185_lane_7 = gp_level_table172_2_buf185.extract<224, 255>();
  hw_uint<32> gp_level_table172_2_buf185_lane_8 = gp_level_table172_2_buf185.extract<256, 287>();

	
auto res_init198 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table172_2_buf185_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_0_pack, gp_level_table172_2_buf185_lane_0);
  hw_uint<32 > res_init198_pack;
  set_at<0, 32, 32>(res_init198_pack, res_init198);
auto res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_1767 = llf_add_float_32(gp_level_table172_2_buf185_lane_0_pack, res_init198_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_1_pack, gp_level_table172_2_buf185_lane_1);
  hw_uint<32 > res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_1767_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_1767_pack, res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_1767);
auto res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_1765 = llf_add_float_32(gp_level_table172_2_buf185_lane_1_pack, res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_1767_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_2_pack, gp_level_table172_2_buf185_lane_2);
  hw_uint<32 > res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_1765_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_1765_pack, res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_1765);
auto res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_1763 = llf_add_float_32(gp_level_table172_2_buf185_lane_2_pack, res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_1765_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_3_pack, gp_level_table172_2_buf185_lane_3);
  hw_uint<32 > res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_1763_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_1763_pack, res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_1763);
auto res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_0761 = llf_add_float_32(gp_level_table172_2_buf185_lane_3_pack, res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_1763_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_4_pack, gp_level_table172_2_buf185_lane_4);
  hw_uint<32 > res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_0761_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_0761_pack, res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_0761);
auto res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_0759 = llf_add_float_32(gp_level_table172_2_buf185_lane_4_pack, res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196_0761_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_5_pack, gp_level_table172_2_buf185_lane_5);
  hw_uint<32 > res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_0759_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_0759_pack, res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_0759);
auto res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_0757 = llf_add_float_32(gp_level_table172_2_buf185_lane_5_pack, res_update199_gp_level_table172_3197_0657_gp_level_table172_3196_0759_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_6_pack, gp_level_table172_2_buf185_lane_6);
  hw_uint<32 > res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_0757_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_0757_pack, res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_0757);
auto res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196__m_1755 = llf_add_float_32(gp_level_table172_2_buf185_lane_6_pack, res_update199_gp_level_table172_3197_1659_gp_level_table172_3196_0757_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_7_pack, gp_level_table172_2_buf185_lane_7);
  hw_uint<32 > res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196__m_1755_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196__m_1755_pack, res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196__m_1755);
auto res_update199_gp_level_table172_3197_0657_gp_level_table172_3196__m_1753 = llf_add_float_32(gp_level_table172_2_buf185_lane_7_pack, res_update199_gp_level_table172_3197__m_1655_gp_level_table172_3196__m_1755_pack);

	  hw_uint<32 > gp_level_table172_2_buf185_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table172_2_buf185_lane_8_pack, gp_level_table172_2_buf185_lane_8);
  hw_uint<32 > res_update199_gp_level_table172_3197_0657_gp_level_table172_3196__m_1753_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197_0657_gp_level_table172_3196__m_1753_pack, res_update199_gp_level_table172_3197_0657_gp_level_table172_3196__m_1753);
auto res_update199_gp_level_table172_3197_1659_gp_level_table172_3196__m_1751 = llf_add_float_32(gp_level_table172_2_buf185_lane_8_pack, res_update199_gp_level_table172_3197_0657_gp_level_table172_3196__m_1753_pack);

	  hw_uint<32 > res_update199_gp_level_table172_3197_1659_gp_level_table172_3196__m_1751_pack;
  set_at<0, 32, 32>(res_update199_gp_level_table172_3197_1659_gp_level_table172_3196__m_1751_pack, res_update199_gp_level_table172_3197_1659_gp_level_table172_3196__m_1751);
auto res_avg200 = avg_9_float(res_update199_gp_level_table172_3197_1659_gp_level_table172_3196__m_1751_pack);
  hw_uint<32 > return_value1202;
  set_at<0, 32, 32>(return_value1202, res_avg200);
  return return_value1202;

}

hw_uint<32> gp_level_table225_1232_cu1204(hw_uint<32*9>& level_table225) {
  hw_uint<32> level_table225_lane_0 = level_table225.extract<0, 31>();
  hw_uint<32> level_table225_lane_1 = level_table225.extract<32, 63>();
  hw_uint<32> level_table225_lane_2 = level_table225.extract<64, 95>();
  hw_uint<32> level_table225_lane_3 = level_table225.extract<96, 127>();
  hw_uint<32> level_table225_lane_4 = level_table225.extract<128, 159>();
  hw_uint<32> level_table225_lane_5 = level_table225.extract<160, 191>();
  hw_uint<32> level_table225_lane_6 = level_table225.extract<192, 223>();
  hw_uint<32> level_table225_lane_7 = level_table225.extract<224, 255>();
  hw_uint<32> level_table225_lane_8 = level_table225.extract<256, 287>();

	
auto res_init235 = llf_set_zero_float_32();

	  hw_uint<32 > res_init235_pack;
  set_at<0, 32, 32>(res_init235_pack, res_init235);
  hw_uint<32 > level_table225_lane_0_pack;
  set_at<0, 32, 32>(level_table225_lane_0_pack, level_table225_lane_0);
auto res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_1731 = llf_add_float_32(res_init235_pack, level_table225_lane_0_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_1731_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_1731_pack, res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_1731);
  hw_uint<32 > level_table225_lane_1_pack;
  set_at<0, 32, 32>(level_table225_lane_1_pack, level_table225_lane_1);
auto res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_1729 = llf_add_float_32(res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_1731_pack, level_table225_lane_1_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_1729_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_1729_pack, res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_1729);
  hw_uint<32 > level_table225_lane_2_pack;
  set_at<0, 32, 32>(level_table225_lane_2_pack, level_table225_lane_2);
auto res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_1727 = llf_add_float_32(res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_1729_pack, level_table225_lane_2_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_1727_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_1727_pack, res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_1727);
  hw_uint<32 > level_table225_lane_3_pack;
  set_at<0, 32, 32>(level_table225_lane_3_pack, level_table225_lane_3);
auto res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_0725 = llf_add_float_32(res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_1727_pack, level_table225_lane_3_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_0725_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_0725_pack, res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_0725);
  hw_uint<32 > level_table225_lane_4_pack;
  set_at<0, 32, 32>(level_table225_lane_4_pack, level_table225_lane_4);
auto res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_0723 = llf_add_float_32(res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233_0725_pack, level_table225_lane_4_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_0723_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_0723_pack, res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_0723);
  hw_uint<32 > level_table225_lane_5_pack;
  set_at<0, 32, 32>(level_table225_lane_5_pack, level_table225_lane_5);
auto res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_0721 = llf_add_float_32(res_update236_gp_level_table225_1234_0669_gp_level_table225_1233_0723_pack, level_table225_lane_5_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_0721_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_0721_pack, res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_0721);
  hw_uint<32 > level_table225_lane_6_pack;
  set_at<0, 32, 32>(level_table225_lane_6_pack, level_table225_lane_6);
auto res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233__m_1719 = llf_add_float_32(res_update236_gp_level_table225_1234_1671_gp_level_table225_1233_0721_pack, level_table225_lane_6_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233__m_1719_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233__m_1719_pack, res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233__m_1719);
  hw_uint<32 > level_table225_lane_7_pack;
  set_at<0, 32, 32>(level_table225_lane_7_pack, level_table225_lane_7);
auto res_update236_gp_level_table225_1234_0669_gp_level_table225_1233__m_1717 = llf_add_float_32(res_update236_gp_level_table225_1234__m_1667_gp_level_table225_1233__m_1719_pack, level_table225_lane_7_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234_0669_gp_level_table225_1233__m_1717_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234_0669_gp_level_table225_1233__m_1717_pack, res_update236_gp_level_table225_1234_0669_gp_level_table225_1233__m_1717);
  hw_uint<32 > level_table225_lane_8_pack;
  set_at<0, 32, 32>(level_table225_lane_8_pack, level_table225_lane_8);
auto res_update236_gp_level_table225_1234_1671_gp_level_table225_1233__m_1715 = llf_add_float_32(res_update236_gp_level_table225_1234_0669_gp_level_table225_1233__m_1717_pack, level_table225_lane_8_pack);

	  hw_uint<32 > res_update236_gp_level_table225_1234_1671_gp_level_table225_1233__m_1715_pack;
  set_at<0, 32, 32>(res_update236_gp_level_table225_1234_1671_gp_level_table225_1233__m_1715_pack, res_update236_gp_level_table225_1234_1671_gp_level_table225_1233__m_1715);
auto res_avg237 = avg_9_float(res_update236_gp_level_table225_1234_1671_gp_level_table225_1233__m_1715_pack);
  hw_uint<32 > return_value1205;
  set_at<0, 32, 32>(return_value1205, res_avg237);
  return return_value1205;

}

hw_uint<32> gp_level_table225_2240_cu1207(hw_uint<32*9>& gp_level_table225_1_buf230) {
  hw_uint<32> gp_level_table225_1_buf230_lane_0 = gp_level_table225_1_buf230.extract<0, 31>();
  hw_uint<32> gp_level_table225_1_buf230_lane_1 = gp_level_table225_1_buf230.extract<32, 63>();
  hw_uint<32> gp_level_table225_1_buf230_lane_2 = gp_level_table225_1_buf230.extract<64, 95>();
  hw_uint<32> gp_level_table225_1_buf230_lane_3 = gp_level_table225_1_buf230.extract<96, 127>();
  hw_uint<32> gp_level_table225_1_buf230_lane_4 = gp_level_table225_1_buf230.extract<128, 159>();
  hw_uint<32> gp_level_table225_1_buf230_lane_5 = gp_level_table225_1_buf230.extract<160, 191>();
  hw_uint<32> gp_level_table225_1_buf230_lane_6 = gp_level_table225_1_buf230.extract<192, 223>();
  hw_uint<32> gp_level_table225_1_buf230_lane_7 = gp_level_table225_1_buf230.extract<224, 255>();
  hw_uint<32> gp_level_table225_1_buf230_lane_8 = gp_level_table225_1_buf230.extract<256, 287>();

	
auto res_init243 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table225_1_buf230_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_0_pack, gp_level_table225_1_buf230_lane_0);
  hw_uint<32 > res_init243_pack;
  set_at<0, 32, 32>(res_init243_pack, res_init243);
auto res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_1695 = llf_add_float_32(gp_level_table225_1_buf230_lane_0_pack, res_init243_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_1_pack, gp_level_table225_1_buf230_lane_1);
  hw_uint<32 > res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_1695_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_1695_pack, res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_1695);
auto res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_1693 = llf_add_float_32(gp_level_table225_1_buf230_lane_1_pack, res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_1695_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_2_pack, gp_level_table225_1_buf230_lane_2);
  hw_uint<32 > res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_1693_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_1693_pack, res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_1693);
auto res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_1691 = llf_add_float_32(gp_level_table225_1_buf230_lane_2_pack, res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_1693_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_3_pack, gp_level_table225_1_buf230_lane_3);
  hw_uint<32 > res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_1691_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_1691_pack, res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_1691);
auto res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_0689 = llf_add_float_32(gp_level_table225_1_buf230_lane_3_pack, res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_1691_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_4_pack, gp_level_table225_1_buf230_lane_4);
  hw_uint<32 > res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_0689_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_0689_pack, res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_0689);
auto res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_0687 = llf_add_float_32(gp_level_table225_1_buf230_lane_4_pack, res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241_0689_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_5_pack, gp_level_table225_1_buf230_lane_5);
  hw_uint<32 > res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_0687_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_0687_pack, res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_0687);
auto res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_0685 = llf_add_float_32(gp_level_table225_1_buf230_lane_5_pack, res_update244_gp_level_table225_2242_0519_gp_level_table225_2241_0687_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_6_pack, gp_level_table225_1_buf230_lane_6);
  hw_uint<32 > res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_0685_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_0685_pack, res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_0685);
auto res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241__m_1683 = llf_add_float_32(gp_level_table225_1_buf230_lane_6_pack, res_update244_gp_level_table225_2242_1521_gp_level_table225_2241_0685_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_7_pack, gp_level_table225_1_buf230_lane_7);
  hw_uint<32 > res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241__m_1683_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241__m_1683_pack, res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241__m_1683);
auto res_update244_gp_level_table225_2242_0519_gp_level_table225_2241__m_1681 = llf_add_float_32(gp_level_table225_1_buf230_lane_7_pack, res_update244_gp_level_table225_2242__m_1517_gp_level_table225_2241__m_1683_pack);

	  hw_uint<32 > gp_level_table225_1_buf230_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table225_1_buf230_lane_8_pack, gp_level_table225_1_buf230_lane_8);
  hw_uint<32 > res_update244_gp_level_table225_2242_0519_gp_level_table225_2241__m_1681_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242_0519_gp_level_table225_2241__m_1681_pack, res_update244_gp_level_table225_2242_0519_gp_level_table225_2241__m_1681);
auto res_update244_gp_level_table225_2242_1521_gp_level_table225_2241__m_1679 = llf_add_float_32(gp_level_table225_1_buf230_lane_8_pack, res_update244_gp_level_table225_2242_0519_gp_level_table225_2241__m_1681_pack);

	  hw_uint<32 > res_update244_gp_level_table225_2242_1521_gp_level_table225_2241__m_1679_pack;
  set_at<0, 32, 32>(res_update244_gp_level_table225_2242_1521_gp_level_table225_2241__m_1679_pack, res_update244_gp_level_table225_2242_1521_gp_level_table225_2241__m_1679);
auto res_avg245 = avg_9_float(res_update244_gp_level_table225_2242_1521_gp_level_table225_2241__m_1679_pack);
  hw_uint<32 > return_value1208;
  set_at<0, 32, 32>(return_value1208, res_avg245);
  return return_value1208;

}

hw_uint<32> gp_level_table225_3248_cu1210(hw_uint<32*9>& gp_level_table225_2_buf238) {
  hw_uint<32> gp_level_table225_2_buf238_lane_0 = gp_level_table225_2_buf238.extract<0, 31>();
  hw_uint<32> gp_level_table225_2_buf238_lane_1 = gp_level_table225_2_buf238.extract<32, 63>();
  hw_uint<32> gp_level_table225_2_buf238_lane_2 = gp_level_table225_2_buf238.extract<64, 95>();
  hw_uint<32> gp_level_table225_2_buf238_lane_3 = gp_level_table225_2_buf238.extract<96, 127>();
  hw_uint<32> gp_level_table225_2_buf238_lane_4 = gp_level_table225_2_buf238.extract<128, 159>();
  hw_uint<32> gp_level_table225_2_buf238_lane_5 = gp_level_table225_2_buf238.extract<160, 191>();
  hw_uint<32> gp_level_table225_2_buf238_lane_6 = gp_level_table225_2_buf238.extract<192, 223>();
  hw_uint<32> gp_level_table225_2_buf238_lane_7 = gp_level_table225_2_buf238.extract<224, 255>();
  hw_uint<32> gp_level_table225_2_buf238_lane_8 = gp_level_table225_2_buf238.extract<256, 287>();

	
auto res_init251 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table225_2_buf238_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_0_pack, gp_level_table225_2_buf238_lane_0);
  hw_uint<32 > res_init251_pack;
  set_at<0, 32, 32>(res_init251_pack, res_init251);
auto res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_1713 = llf_add_float_32(gp_level_table225_2_buf238_lane_0_pack, res_init251_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_1_pack, gp_level_table225_2_buf238_lane_1);
  hw_uint<32 > res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_1713_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_1713_pack, res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_1713);
auto res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_1711 = llf_add_float_32(gp_level_table225_2_buf238_lane_1_pack, res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_1713_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_2_pack, gp_level_table225_2_buf238_lane_2);
  hw_uint<32 > res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_1711_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_1711_pack, res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_1711);
auto res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_1709 = llf_add_float_32(gp_level_table225_2_buf238_lane_2_pack, res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_1711_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_3_pack, gp_level_table225_2_buf238_lane_3);
  hw_uint<32 > res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_1709_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_1709_pack, res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_1709);
auto res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_0707 = llf_add_float_32(gp_level_table225_2_buf238_lane_3_pack, res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_1709_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_4_pack, gp_level_table225_2_buf238_lane_4);
  hw_uint<32 > res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_0707_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_0707_pack, res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_0707);
auto res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_0705 = llf_add_float_32(gp_level_table225_2_buf238_lane_4_pack, res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249_0707_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_5_pack, gp_level_table225_2_buf238_lane_5);
  hw_uint<32 > res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_0705_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_0705_pack, res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_0705);
auto res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_0703 = llf_add_float_32(gp_level_table225_2_buf238_lane_5_pack, res_update252_gp_level_table225_3250_0663_gp_level_table225_3249_0705_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_6_pack, gp_level_table225_2_buf238_lane_6);
  hw_uint<32 > res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_0703_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_0703_pack, res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_0703);
auto res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249__m_1701 = llf_add_float_32(gp_level_table225_2_buf238_lane_6_pack, res_update252_gp_level_table225_3250_1665_gp_level_table225_3249_0703_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_7_pack, gp_level_table225_2_buf238_lane_7);
  hw_uint<32 > res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249__m_1701_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249__m_1701_pack, res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249__m_1701);
auto res_update252_gp_level_table225_3250_0663_gp_level_table225_3249__m_1699 = llf_add_float_32(gp_level_table225_2_buf238_lane_7_pack, res_update252_gp_level_table225_3250__m_1661_gp_level_table225_3249__m_1701_pack);

	  hw_uint<32 > gp_level_table225_2_buf238_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table225_2_buf238_lane_8_pack, gp_level_table225_2_buf238_lane_8);
  hw_uint<32 > res_update252_gp_level_table225_3250_0663_gp_level_table225_3249__m_1699_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250_0663_gp_level_table225_3249__m_1699_pack, res_update252_gp_level_table225_3250_0663_gp_level_table225_3249__m_1699);
auto res_update252_gp_level_table225_3250_1665_gp_level_table225_3249__m_1697 = llf_add_float_32(gp_level_table225_2_buf238_lane_8_pack, res_update252_gp_level_table225_3250_0663_gp_level_table225_3249__m_1699_pack);

	  hw_uint<32 > res_update252_gp_level_table225_3250_1665_gp_level_table225_3249__m_1697_pack;
  set_at<0, 32, 32>(res_update252_gp_level_table225_3250_1665_gp_level_table225_3249__m_1697_pack, res_update252_gp_level_table225_3250_1665_gp_level_table225_3249__m_1697);
auto res_avg253 = avg_9_float(res_update252_gp_level_table225_3250_1665_gp_level_table225_3249__m_1697_pack);
  hw_uint<32 > return_value1211;
  set_at<0, 32, 32>(return_value1211, res_avg253);
  return return_value1211;

}

hw_uint<32> gp_level_table278_1285_cu1213(hw_uint<32*9>& level_table278) {
  hw_uint<32> level_table278_lane_0 = level_table278.extract<0, 31>();
  hw_uint<32> level_table278_lane_1 = level_table278.extract<32, 63>();
  hw_uint<32> level_table278_lane_2 = level_table278.extract<64, 95>();
  hw_uint<32> level_table278_lane_3 = level_table278.extract<96, 127>();
  hw_uint<32> level_table278_lane_4 = level_table278.extract<128, 159>();
  hw_uint<32> level_table278_lane_5 = level_table278.extract<160, 191>();
  hw_uint<32> level_table278_lane_6 = level_table278.extract<192, 223>();
  hw_uint<32> level_table278_lane_7 = level_table278.extract<224, 255>();
  hw_uint<32> level_table278_lane_8 = level_table278.extract<256, 287>();

	
auto res_init288 = llf_set_zero_float_32();

	  hw_uint<32 > res_init288_pack;
  set_at<0, 32, 32>(res_init288_pack, res_init288);
  hw_uint<32 > level_table278_lane_0_pack;
  set_at<0, 32, 32>(level_table278_lane_0_pack, level_table278_lane_0);
auto res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_1749 = llf_add_float_32(res_init288_pack, level_table278_lane_0_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_1749_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_1749_pack, res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_1749);
  hw_uint<32 > level_table278_lane_1_pack;
  set_at<0, 32, 32>(level_table278_lane_1_pack, level_table278_lane_1);
auto res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_1747 = llf_add_float_32(res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_1749_pack, level_table278_lane_1_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_1747_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_1747_pack, res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_1747);
  hw_uint<32 > level_table278_lane_2_pack;
  set_at<0, 32, 32>(level_table278_lane_2_pack, level_table278_lane_2);
auto res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_1745 = llf_add_float_32(res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_1747_pack, level_table278_lane_2_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_1745_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_1745_pack, res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_1745);
  hw_uint<32 > level_table278_lane_3_pack;
  set_at<0, 32, 32>(level_table278_lane_3_pack, level_table278_lane_3);
auto res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_0743 = llf_add_float_32(res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_1745_pack, level_table278_lane_3_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_0743_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_0743_pack, res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_0743);
  hw_uint<32 > level_table278_lane_4_pack;
  set_at<0, 32, 32>(level_table278_lane_4_pack, level_table278_lane_4);
auto res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_0741 = llf_add_float_32(res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286_0743_pack, level_table278_lane_4_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_0741_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_0741_pack, res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_0741);
  hw_uint<32 > level_table278_lane_5_pack;
  set_at<0, 32, 32>(level_table278_lane_5_pack, level_table278_lane_5);
auto res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_0739 = llf_add_float_32(res_update289_gp_level_table278_1287_0651_gp_level_table278_1286_0741_pack, level_table278_lane_5_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_0739_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_0739_pack, res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_0739);
  hw_uint<32 > level_table278_lane_6_pack;
  set_at<0, 32, 32>(level_table278_lane_6_pack, level_table278_lane_6);
auto res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286__m_1737 = llf_add_float_32(res_update289_gp_level_table278_1287_1653_gp_level_table278_1286_0739_pack, level_table278_lane_6_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286__m_1737_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286__m_1737_pack, res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286__m_1737);
  hw_uint<32 > level_table278_lane_7_pack;
  set_at<0, 32, 32>(level_table278_lane_7_pack, level_table278_lane_7);
auto res_update289_gp_level_table278_1287_0651_gp_level_table278_1286__m_1735 = llf_add_float_32(res_update289_gp_level_table278_1287__m_1649_gp_level_table278_1286__m_1737_pack, level_table278_lane_7_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287_0651_gp_level_table278_1286__m_1735_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287_0651_gp_level_table278_1286__m_1735_pack, res_update289_gp_level_table278_1287_0651_gp_level_table278_1286__m_1735);
  hw_uint<32 > level_table278_lane_8_pack;
  set_at<0, 32, 32>(level_table278_lane_8_pack, level_table278_lane_8);
auto res_update289_gp_level_table278_1287_1653_gp_level_table278_1286__m_1733 = llf_add_float_32(res_update289_gp_level_table278_1287_0651_gp_level_table278_1286__m_1735_pack, level_table278_lane_8_pack);

	  hw_uint<32 > res_update289_gp_level_table278_1287_1653_gp_level_table278_1286__m_1733_pack;
  set_at<0, 32, 32>(res_update289_gp_level_table278_1287_1653_gp_level_table278_1286__m_1733_pack, res_update289_gp_level_table278_1287_1653_gp_level_table278_1286__m_1733);
auto res_avg290 = avg_9_float(res_update289_gp_level_table278_1287_1653_gp_level_table278_1286__m_1733_pack);
  hw_uint<32 > return_value1214;
  set_at<0, 32, 32>(return_value1214, res_avg290);
  return return_value1214;

}

hw_uint<32> gp_level_table278_2293_cu1216(hw_uint<32*9>& gp_level_table278_1_buf283) {
  hw_uint<32> gp_level_table278_1_buf283_lane_0 = gp_level_table278_1_buf283.extract<0, 31>();
  hw_uint<32> gp_level_table278_1_buf283_lane_1 = gp_level_table278_1_buf283.extract<32, 63>();
  hw_uint<32> gp_level_table278_1_buf283_lane_2 = gp_level_table278_1_buf283.extract<64, 95>();
  hw_uint<32> gp_level_table278_1_buf283_lane_3 = gp_level_table278_1_buf283.extract<96, 127>();
  hw_uint<32> gp_level_table278_1_buf283_lane_4 = gp_level_table278_1_buf283.extract<128, 159>();
  hw_uint<32> gp_level_table278_1_buf283_lane_5 = gp_level_table278_1_buf283.extract<160, 191>();
  hw_uint<32> gp_level_table278_1_buf283_lane_6 = gp_level_table278_1_buf283.extract<192, 223>();
  hw_uint<32> gp_level_table278_1_buf283_lane_7 = gp_level_table278_1_buf283.extract<224, 255>();
  hw_uint<32> gp_level_table278_1_buf283_lane_8 = gp_level_table278_1_buf283.extract<256, 287>();

	
auto res_init296 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table278_1_buf283_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_0_pack, gp_level_table278_1_buf283_lane_0);
  hw_uint<32 > res_init296_pack;
  set_at<0, 32, 32>(res_init296_pack, res_init296);
auto res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_1785 = llf_add_float_32(gp_level_table278_1_buf283_lane_0_pack, res_init296_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_1_pack, gp_level_table278_1_buf283_lane_1);
  hw_uint<32 > res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_1785_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_1785_pack, res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_1785);
auto res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_1783 = llf_add_float_32(gp_level_table278_1_buf283_lane_1_pack, res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_1785_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_2_pack, gp_level_table278_1_buf283_lane_2);
  hw_uint<32 > res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_1783_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_1783_pack, res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_1783);
auto res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_1781 = llf_add_float_32(gp_level_table278_1_buf283_lane_2_pack, res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_1783_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_3_pack, gp_level_table278_1_buf283_lane_3);
  hw_uint<32 > res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_1781_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_1781_pack, res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_1781);
auto res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_0779 = llf_add_float_32(gp_level_table278_1_buf283_lane_3_pack, res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_1781_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_4_pack, gp_level_table278_1_buf283_lane_4);
  hw_uint<32 > res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_0779_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_0779_pack, res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_0779);
auto res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_0777 = llf_add_float_32(gp_level_table278_1_buf283_lane_4_pack, res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294_0779_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_5_pack, gp_level_table278_1_buf283_lane_5);
  hw_uint<32 > res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_0777_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_0777_pack, res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_0777);
auto res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_0775 = llf_add_float_32(gp_level_table278_1_buf283_lane_5_pack, res_update297_gp_level_table278_2295_0639_gp_level_table278_2294_0777_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_6_pack, gp_level_table278_1_buf283_lane_6);
  hw_uint<32 > res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_0775_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_0775_pack, res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_0775);
auto res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294__m_1773 = llf_add_float_32(gp_level_table278_1_buf283_lane_6_pack, res_update297_gp_level_table278_2295_1641_gp_level_table278_2294_0775_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_7_pack, gp_level_table278_1_buf283_lane_7);
  hw_uint<32 > res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294__m_1773_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294__m_1773_pack, res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294__m_1773);
auto res_update297_gp_level_table278_2295_0639_gp_level_table278_2294__m_1771 = llf_add_float_32(gp_level_table278_1_buf283_lane_7_pack, res_update297_gp_level_table278_2295__m_1637_gp_level_table278_2294__m_1773_pack);

	  hw_uint<32 > gp_level_table278_1_buf283_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table278_1_buf283_lane_8_pack, gp_level_table278_1_buf283_lane_8);
  hw_uint<32 > res_update297_gp_level_table278_2295_0639_gp_level_table278_2294__m_1771_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295_0639_gp_level_table278_2294__m_1771_pack, res_update297_gp_level_table278_2295_0639_gp_level_table278_2294__m_1771);
auto res_update297_gp_level_table278_2295_1641_gp_level_table278_2294__m_1769 = llf_add_float_32(gp_level_table278_1_buf283_lane_8_pack, res_update297_gp_level_table278_2295_0639_gp_level_table278_2294__m_1771_pack);

	  hw_uint<32 > res_update297_gp_level_table278_2295_1641_gp_level_table278_2294__m_1769_pack;
  set_at<0, 32, 32>(res_update297_gp_level_table278_2295_1641_gp_level_table278_2294__m_1769_pack, res_update297_gp_level_table278_2295_1641_gp_level_table278_2294__m_1769);
auto res_avg298 = avg_9_float(res_update297_gp_level_table278_2295_1641_gp_level_table278_2294__m_1769_pack);
  hw_uint<32 > return_value1217;
  set_at<0, 32, 32>(return_value1217, res_avg298);
  return return_value1217;

}

hw_uint<32> gp_level_table278_3301_cu1219(hw_uint<32*9>& gp_level_table278_2_buf291) {
  hw_uint<32> gp_level_table278_2_buf291_lane_0 = gp_level_table278_2_buf291.extract<0, 31>();
  hw_uint<32> gp_level_table278_2_buf291_lane_1 = gp_level_table278_2_buf291.extract<32, 63>();
  hw_uint<32> gp_level_table278_2_buf291_lane_2 = gp_level_table278_2_buf291.extract<64, 95>();
  hw_uint<32> gp_level_table278_2_buf291_lane_3 = gp_level_table278_2_buf291.extract<96, 127>();
  hw_uint<32> gp_level_table278_2_buf291_lane_4 = gp_level_table278_2_buf291.extract<128, 159>();
  hw_uint<32> gp_level_table278_2_buf291_lane_5 = gp_level_table278_2_buf291.extract<160, 191>();
  hw_uint<32> gp_level_table278_2_buf291_lane_6 = gp_level_table278_2_buf291.extract<192, 223>();
  hw_uint<32> gp_level_table278_2_buf291_lane_7 = gp_level_table278_2_buf291.extract<224, 255>();
  hw_uint<32> gp_level_table278_2_buf291_lane_8 = gp_level_table278_2_buf291.extract<256, 287>();

	
auto res_init304 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table278_2_buf291_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_0_pack, gp_level_table278_2_buf291_lane_0);
  hw_uint<32 > res_init304_pack;
  set_at<0, 32, 32>(res_init304_pack, res_init304);
auto res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_1821 = llf_add_float_32(gp_level_table278_2_buf291_lane_0_pack, res_init304_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_1_pack, gp_level_table278_2_buf291_lane_1);
  hw_uint<32 > res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_1821_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_1821_pack, res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_1821);
auto res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_1819 = llf_add_float_32(gp_level_table278_2_buf291_lane_1_pack, res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_1821_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_2_pack, gp_level_table278_2_buf291_lane_2);
  hw_uint<32 > res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_1819_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_1819_pack, res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_1819);
auto res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_1817 = llf_add_float_32(gp_level_table278_2_buf291_lane_2_pack, res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_1819_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_3_pack, gp_level_table278_2_buf291_lane_3);
  hw_uint<32 > res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_1817_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_1817_pack, res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_1817);
auto res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_0815 = llf_add_float_32(gp_level_table278_2_buf291_lane_3_pack, res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_1817_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_4_pack, gp_level_table278_2_buf291_lane_4);
  hw_uint<32 > res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_0815_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_0815_pack, res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_0815);
auto res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_0813 = llf_add_float_32(gp_level_table278_2_buf291_lane_4_pack, res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302_0815_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_5_pack, gp_level_table278_2_buf291_lane_5);
  hw_uint<32 > res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_0813_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_0813_pack, res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_0813);
auto res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_0811 = llf_add_float_32(gp_level_table278_2_buf291_lane_5_pack, res_update305_gp_level_table278_3303_0627_gp_level_table278_3302_0813_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_6_pack, gp_level_table278_2_buf291_lane_6);
  hw_uint<32 > res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_0811_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_0811_pack, res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_0811);
auto res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302__m_1809 = llf_add_float_32(gp_level_table278_2_buf291_lane_6_pack, res_update305_gp_level_table278_3303_1629_gp_level_table278_3302_0811_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_7_pack, gp_level_table278_2_buf291_lane_7);
  hw_uint<32 > res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302__m_1809_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302__m_1809_pack, res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302__m_1809);
auto res_update305_gp_level_table278_3303_0627_gp_level_table278_3302__m_1807 = llf_add_float_32(gp_level_table278_2_buf291_lane_7_pack, res_update305_gp_level_table278_3303__m_1625_gp_level_table278_3302__m_1809_pack);

	  hw_uint<32 > gp_level_table278_2_buf291_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table278_2_buf291_lane_8_pack, gp_level_table278_2_buf291_lane_8);
  hw_uint<32 > res_update305_gp_level_table278_3303_0627_gp_level_table278_3302__m_1807_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303_0627_gp_level_table278_3302__m_1807_pack, res_update305_gp_level_table278_3303_0627_gp_level_table278_3302__m_1807);
auto res_update305_gp_level_table278_3303_1629_gp_level_table278_3302__m_1805 = llf_add_float_32(gp_level_table278_2_buf291_lane_8_pack, res_update305_gp_level_table278_3303_0627_gp_level_table278_3302__m_1807_pack);

	  hw_uint<32 > res_update305_gp_level_table278_3303_1629_gp_level_table278_3302__m_1805_pack;
  set_at<0, 32, 32>(res_update305_gp_level_table278_3303_1629_gp_level_table278_3302__m_1805_pack, res_update305_gp_level_table278_3303_1629_gp_level_table278_3302__m_1805);
auto res_avg306 = avg_9_float(res_update305_gp_level_table278_3303_1629_gp_level_table278_3302__m_1805_pack);
  hw_uint<32 > return_value1220;
  set_at<0, 32, 32>(return_value1220, res_avg306);
  return return_value1220;

}

hw_uint<32> gp_level_table331_2346_cu1222(hw_uint<32*9>& gp_level_table331_1_buf336) {
  hw_uint<32> gp_level_table331_1_buf336_lane_0 = gp_level_table331_1_buf336.extract<0, 31>();
  hw_uint<32> gp_level_table331_1_buf336_lane_1 = gp_level_table331_1_buf336.extract<32, 63>();
  hw_uint<32> gp_level_table331_1_buf336_lane_2 = gp_level_table331_1_buf336.extract<64, 95>();
  hw_uint<32> gp_level_table331_1_buf336_lane_3 = gp_level_table331_1_buf336.extract<96, 127>();
  hw_uint<32> gp_level_table331_1_buf336_lane_4 = gp_level_table331_1_buf336.extract<128, 159>();
  hw_uint<32> gp_level_table331_1_buf336_lane_5 = gp_level_table331_1_buf336.extract<160, 191>();
  hw_uint<32> gp_level_table331_1_buf336_lane_6 = gp_level_table331_1_buf336.extract<192, 223>();
  hw_uint<32> gp_level_table331_1_buf336_lane_7 = gp_level_table331_1_buf336.extract<224, 255>();
  hw_uint<32> gp_level_table331_1_buf336_lane_8 = gp_level_table331_1_buf336.extract<256, 287>();

	
auto res_init349 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table331_1_buf336_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_0_pack, gp_level_table331_1_buf336_lane_0);
  hw_uint<32 > res_init349_pack;
  set_at<0, 32, 32>(res_init349_pack, res_init349);
auto res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_1893 = llf_add_float_32(gp_level_table331_1_buf336_lane_0_pack, res_init349_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_1_pack, gp_level_table331_1_buf336_lane_1);
  hw_uint<32 > res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_1893_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_1893_pack, res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_1893);
auto res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_1891 = llf_add_float_32(gp_level_table331_1_buf336_lane_1_pack, res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_1893_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_2_pack, gp_level_table331_1_buf336_lane_2);
  hw_uint<32 > res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_1891_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_1891_pack, res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_1891);
auto res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_1889 = llf_add_float_32(gp_level_table331_1_buf336_lane_2_pack, res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_1891_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_3_pack, gp_level_table331_1_buf336_lane_3);
  hw_uint<32 > res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_1889_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_1889_pack, res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_1889);
auto res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_0887 = llf_add_float_32(gp_level_table331_1_buf336_lane_3_pack, res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_1889_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_4_pack, gp_level_table331_1_buf336_lane_4);
  hw_uint<32 > res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_0887_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_0887_pack, res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_0887);
auto res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_0885 = llf_add_float_32(gp_level_table331_1_buf336_lane_4_pack, res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347_0887_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_5_pack, gp_level_table331_1_buf336_lane_5);
  hw_uint<32 > res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_0885_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_0885_pack, res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_0885);
auto res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_0883 = llf_add_float_32(gp_level_table331_1_buf336_lane_5_pack, res_update350_gp_level_table331_2348_0603_gp_level_table331_2347_0885_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_6_pack, gp_level_table331_1_buf336_lane_6);
  hw_uint<32 > res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_0883_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_0883_pack, res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_0883);
auto res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347__m_1881 = llf_add_float_32(gp_level_table331_1_buf336_lane_6_pack, res_update350_gp_level_table331_2348_1605_gp_level_table331_2347_0883_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_7_pack, gp_level_table331_1_buf336_lane_7);
  hw_uint<32 > res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347__m_1881_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347__m_1881_pack, res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347__m_1881);
auto res_update350_gp_level_table331_2348_0603_gp_level_table331_2347__m_1879 = llf_add_float_32(gp_level_table331_1_buf336_lane_7_pack, res_update350_gp_level_table331_2348__m_1601_gp_level_table331_2347__m_1881_pack);

	  hw_uint<32 > gp_level_table331_1_buf336_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table331_1_buf336_lane_8_pack, gp_level_table331_1_buf336_lane_8);
  hw_uint<32 > res_update350_gp_level_table331_2348_0603_gp_level_table331_2347__m_1879_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348_0603_gp_level_table331_2347__m_1879_pack, res_update350_gp_level_table331_2348_0603_gp_level_table331_2347__m_1879);
auto res_update350_gp_level_table331_2348_1605_gp_level_table331_2347__m_1877 = llf_add_float_32(gp_level_table331_1_buf336_lane_8_pack, res_update350_gp_level_table331_2348_0603_gp_level_table331_2347__m_1879_pack);

	  hw_uint<32 > res_update350_gp_level_table331_2348_1605_gp_level_table331_2347__m_1877_pack;
  set_at<0, 32, 32>(res_update350_gp_level_table331_2348_1605_gp_level_table331_2347__m_1877_pack, res_update350_gp_level_table331_2348_1605_gp_level_table331_2347__m_1877);
auto res_avg351 = avg_9_float(res_update350_gp_level_table331_2348_1605_gp_level_table331_2347__m_1877_pack);
  hw_uint<32 > return_value1223;
  set_at<0, 32, 32>(return_value1223, res_avg351);
  return return_value1223;

}

hw_uint<32> gp_level_table331_3354_cu1225(hw_uint<32*9>& gp_level_table331_2_buf344) {
  hw_uint<32> gp_level_table331_2_buf344_lane_0 = gp_level_table331_2_buf344.extract<0, 31>();
  hw_uint<32> gp_level_table331_2_buf344_lane_1 = gp_level_table331_2_buf344.extract<32, 63>();
  hw_uint<32> gp_level_table331_2_buf344_lane_2 = gp_level_table331_2_buf344.extract<64, 95>();
  hw_uint<32> gp_level_table331_2_buf344_lane_3 = gp_level_table331_2_buf344.extract<96, 127>();
  hw_uint<32> gp_level_table331_2_buf344_lane_4 = gp_level_table331_2_buf344.extract<128, 159>();
  hw_uint<32> gp_level_table331_2_buf344_lane_5 = gp_level_table331_2_buf344.extract<160, 191>();
  hw_uint<32> gp_level_table331_2_buf344_lane_6 = gp_level_table331_2_buf344.extract<192, 223>();
  hw_uint<32> gp_level_table331_2_buf344_lane_7 = gp_level_table331_2_buf344.extract<224, 255>();
  hw_uint<32> gp_level_table331_2_buf344_lane_8 = gp_level_table331_2_buf344.extract<256, 287>();

	
auto res_init357 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table331_2_buf344_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_0_pack, gp_level_table331_2_buf344_lane_0);
  hw_uint<32 > res_init357_pack;
  set_at<0, 32, 32>(res_init357_pack, res_init357);
auto res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_1929 = llf_add_float_32(gp_level_table331_2_buf344_lane_0_pack, res_init357_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_1_pack, gp_level_table331_2_buf344_lane_1);
  hw_uint<32 > res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_1929_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_1929_pack, res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_1929);
auto res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_1927 = llf_add_float_32(gp_level_table331_2_buf344_lane_1_pack, res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_1929_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_2_pack, gp_level_table331_2_buf344_lane_2);
  hw_uint<32 > res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_1927_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_1927_pack, res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_1927);
auto res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_1925 = llf_add_float_32(gp_level_table331_2_buf344_lane_2_pack, res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_1927_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_3_pack, gp_level_table331_2_buf344_lane_3);
  hw_uint<32 > res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_1925_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_1925_pack, res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_1925);
auto res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_0923 = llf_add_float_32(gp_level_table331_2_buf344_lane_3_pack, res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_1925_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_4_pack, gp_level_table331_2_buf344_lane_4);
  hw_uint<32 > res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_0923_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_0923_pack, res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_0923);
auto res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_0921 = llf_add_float_32(gp_level_table331_2_buf344_lane_4_pack, res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355_0923_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_5_pack, gp_level_table331_2_buf344_lane_5);
  hw_uint<32 > res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_0921_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_0921_pack, res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_0921);
auto res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_0919 = llf_add_float_32(gp_level_table331_2_buf344_lane_5_pack, res_update358_gp_level_table331_3356_0591_gp_level_table331_3355_0921_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_6_pack, gp_level_table331_2_buf344_lane_6);
  hw_uint<32 > res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_0919_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_0919_pack, res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_0919);
auto res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355__m_1917 = llf_add_float_32(gp_level_table331_2_buf344_lane_6_pack, res_update358_gp_level_table331_3356_1593_gp_level_table331_3355_0919_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_7_pack, gp_level_table331_2_buf344_lane_7);
  hw_uint<32 > res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355__m_1917_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355__m_1917_pack, res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355__m_1917);
auto res_update358_gp_level_table331_3356_0591_gp_level_table331_3355__m_1915 = llf_add_float_32(gp_level_table331_2_buf344_lane_7_pack, res_update358_gp_level_table331_3356__m_1589_gp_level_table331_3355__m_1917_pack);

	  hw_uint<32 > gp_level_table331_2_buf344_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table331_2_buf344_lane_8_pack, gp_level_table331_2_buf344_lane_8);
  hw_uint<32 > res_update358_gp_level_table331_3356_0591_gp_level_table331_3355__m_1915_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356_0591_gp_level_table331_3355__m_1915_pack, res_update358_gp_level_table331_3356_0591_gp_level_table331_3355__m_1915);
auto res_update358_gp_level_table331_3356_1593_gp_level_table331_3355__m_1913 = llf_add_float_32(gp_level_table331_2_buf344_lane_8_pack, res_update358_gp_level_table331_3356_0591_gp_level_table331_3355__m_1915_pack);

	  hw_uint<32 > res_update358_gp_level_table331_3356_1593_gp_level_table331_3355__m_1913_pack;
  set_at<0, 32, 32>(res_update358_gp_level_table331_3356_1593_gp_level_table331_3355__m_1913_pack, res_update358_gp_level_table331_3356_1593_gp_level_table331_3355__m_1913);
auto res_avg359 = avg_9_float(res_update358_gp_level_table331_3356_1593_gp_level_table331_3355__m_1913_pack);
  hw_uint<32 > return_value1226;
  set_at<0, 32, 32>(return_value1226, res_avg359);
  return return_value1226;

}

hw_uint<32> gp_level_table384_1391_cu1228(hw_uint<32*9>& level_table384) {
  hw_uint<32> level_table384_lane_0 = level_table384.extract<0, 31>();
  hw_uint<32> level_table384_lane_1 = level_table384.extract<32, 63>();
  hw_uint<32> level_table384_lane_2 = level_table384.extract<64, 95>();
  hw_uint<32> level_table384_lane_3 = level_table384.extract<96, 127>();
  hw_uint<32> level_table384_lane_4 = level_table384.extract<128, 159>();
  hw_uint<32> level_table384_lane_5 = level_table384.extract<160, 191>();
  hw_uint<32> level_table384_lane_6 = level_table384.extract<192, 223>();
  hw_uint<32> level_table384_lane_7 = level_table384.extract<224, 255>();
  hw_uint<32> level_table384_lane_8 = level_table384.extract<256, 287>();

	
auto res_init394 = llf_set_zero_float_32();

	  hw_uint<32 > res_init394_pack;
  set_at<0, 32, 32>(res_init394_pack, res_init394);
  hw_uint<32 > level_table384_lane_0_pack;
  set_at<0, 32, 32>(level_table384_lane_0_pack, level_table384_lane_0);
auto res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_1965 = llf_add_float_32(res_init394_pack, level_table384_lane_0_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_1965_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_1965_pack, res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_1965);
  hw_uint<32 > level_table384_lane_1_pack;
  set_at<0, 32, 32>(level_table384_lane_1_pack, level_table384_lane_1);
auto res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_1963 = llf_add_float_32(res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_1965_pack, level_table384_lane_1_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_1963_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_1963_pack, res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_1963);
  hw_uint<32 > level_table384_lane_2_pack;
  set_at<0, 32, 32>(level_table384_lane_2_pack, level_table384_lane_2);
auto res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_1961 = llf_add_float_32(res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_1963_pack, level_table384_lane_2_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_1961_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_1961_pack, res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_1961);
  hw_uint<32 > level_table384_lane_3_pack;
  set_at<0, 32, 32>(level_table384_lane_3_pack, level_table384_lane_3);
auto res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_0959 = llf_add_float_32(res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_1961_pack, level_table384_lane_3_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_0959_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_0959_pack, res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_0959);
  hw_uint<32 > level_table384_lane_4_pack;
  set_at<0, 32, 32>(level_table384_lane_4_pack, level_table384_lane_4);
auto res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_0957 = llf_add_float_32(res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392_0959_pack, level_table384_lane_4_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_0957_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_0957_pack, res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_0957);
  hw_uint<32 > level_table384_lane_5_pack;
  set_at<0, 32, 32>(level_table384_lane_5_pack, level_table384_lane_5);
auto res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_0955 = llf_add_float_32(res_update395_gp_level_table384_1393_0579_gp_level_table384_1392_0957_pack, level_table384_lane_5_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_0955_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_0955_pack, res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_0955);
  hw_uint<32 > level_table384_lane_6_pack;
  set_at<0, 32, 32>(level_table384_lane_6_pack, level_table384_lane_6);
auto res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392__m_1953 = llf_add_float_32(res_update395_gp_level_table384_1393_1581_gp_level_table384_1392_0955_pack, level_table384_lane_6_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392__m_1953_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392__m_1953_pack, res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392__m_1953);
  hw_uint<32 > level_table384_lane_7_pack;
  set_at<0, 32, 32>(level_table384_lane_7_pack, level_table384_lane_7);
auto res_update395_gp_level_table384_1393_0579_gp_level_table384_1392__m_1951 = llf_add_float_32(res_update395_gp_level_table384_1393__m_1577_gp_level_table384_1392__m_1953_pack, level_table384_lane_7_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393_0579_gp_level_table384_1392__m_1951_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393_0579_gp_level_table384_1392__m_1951_pack, res_update395_gp_level_table384_1393_0579_gp_level_table384_1392__m_1951);
  hw_uint<32 > level_table384_lane_8_pack;
  set_at<0, 32, 32>(level_table384_lane_8_pack, level_table384_lane_8);
auto res_update395_gp_level_table384_1393_1581_gp_level_table384_1392__m_1949 = llf_add_float_32(res_update395_gp_level_table384_1393_0579_gp_level_table384_1392__m_1951_pack, level_table384_lane_8_pack);

	  hw_uint<32 > res_update395_gp_level_table384_1393_1581_gp_level_table384_1392__m_1949_pack;
  set_at<0, 32, 32>(res_update395_gp_level_table384_1393_1581_gp_level_table384_1392__m_1949_pack, res_update395_gp_level_table384_1393_1581_gp_level_table384_1392__m_1949);
auto res_avg396 = avg_9_float(res_update395_gp_level_table384_1393_1581_gp_level_table384_1392__m_1949_pack);
  hw_uint<32 > return_value1229;
  set_at<0, 32, 32>(return_value1229, res_avg396);
  return return_value1229;

}

hw_uint<32> gp_level_table384_2399_cu1231(hw_uint<32*9>& gp_level_table384_1_buf389) {
  hw_uint<32> gp_level_table384_1_buf389_lane_0 = gp_level_table384_1_buf389.extract<0, 31>();
  hw_uint<32> gp_level_table384_1_buf389_lane_1 = gp_level_table384_1_buf389.extract<32, 63>();
  hw_uint<32> gp_level_table384_1_buf389_lane_2 = gp_level_table384_1_buf389.extract<64, 95>();
  hw_uint<32> gp_level_table384_1_buf389_lane_3 = gp_level_table384_1_buf389.extract<96, 127>();
  hw_uint<32> gp_level_table384_1_buf389_lane_4 = gp_level_table384_1_buf389.extract<128, 159>();
  hw_uint<32> gp_level_table384_1_buf389_lane_5 = gp_level_table384_1_buf389.extract<160, 191>();
  hw_uint<32> gp_level_table384_1_buf389_lane_6 = gp_level_table384_1_buf389.extract<192, 223>();
  hw_uint<32> gp_level_table384_1_buf389_lane_7 = gp_level_table384_1_buf389.extract<224, 255>();
  hw_uint<32> gp_level_table384_1_buf389_lane_8 = gp_level_table384_1_buf389.extract<256, 287>();

	
auto res_init402 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table384_1_buf389_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_0_pack, gp_level_table384_1_buf389_lane_0);
  hw_uint<32 > res_init402_pack;
  set_at<0, 32, 32>(res_init402_pack, res_init402);
auto res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_11001 = llf_add_float_32(gp_level_table384_1_buf389_lane_0_pack, res_init402_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_1_pack, gp_level_table384_1_buf389_lane_1);
  hw_uint<32 > res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_11001_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_11001_pack, res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_11001);
auto res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_1999 = llf_add_float_32(gp_level_table384_1_buf389_lane_1_pack, res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_11001_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_2_pack, gp_level_table384_1_buf389_lane_2);
  hw_uint<32 > res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_1999_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_1999_pack, res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_1999);
auto res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_1997 = llf_add_float_32(gp_level_table384_1_buf389_lane_2_pack, res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_1999_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_3_pack, gp_level_table384_1_buf389_lane_3);
  hw_uint<32 > res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_1997_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_1997_pack, res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_1997);
auto res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_0995 = llf_add_float_32(gp_level_table384_1_buf389_lane_3_pack, res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_1997_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_4_pack, gp_level_table384_1_buf389_lane_4);
  hw_uint<32 > res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_0995_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_0995_pack, res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_0995);
auto res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_0993 = llf_add_float_32(gp_level_table384_1_buf389_lane_4_pack, res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400_0995_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_5_pack, gp_level_table384_1_buf389_lane_5);
  hw_uint<32 > res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_0993_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_0993_pack, res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_0993);
auto res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_0991 = llf_add_float_32(gp_level_table384_1_buf389_lane_5_pack, res_update403_gp_level_table384_2401_0567_gp_level_table384_2400_0993_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_6_pack, gp_level_table384_1_buf389_lane_6);
  hw_uint<32 > res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_0991_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_0991_pack, res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_0991);
auto res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400__m_1989 = llf_add_float_32(gp_level_table384_1_buf389_lane_6_pack, res_update403_gp_level_table384_2401_1569_gp_level_table384_2400_0991_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_7_pack, gp_level_table384_1_buf389_lane_7);
  hw_uint<32 > res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400__m_1989_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400__m_1989_pack, res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400__m_1989);
auto res_update403_gp_level_table384_2401_0567_gp_level_table384_2400__m_1987 = llf_add_float_32(gp_level_table384_1_buf389_lane_7_pack, res_update403_gp_level_table384_2401__m_1565_gp_level_table384_2400__m_1989_pack);

	  hw_uint<32 > gp_level_table384_1_buf389_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table384_1_buf389_lane_8_pack, gp_level_table384_1_buf389_lane_8);
  hw_uint<32 > res_update403_gp_level_table384_2401_0567_gp_level_table384_2400__m_1987_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401_0567_gp_level_table384_2400__m_1987_pack, res_update403_gp_level_table384_2401_0567_gp_level_table384_2400__m_1987);
auto res_update403_gp_level_table384_2401_1569_gp_level_table384_2400__m_1985 = llf_add_float_32(gp_level_table384_1_buf389_lane_8_pack, res_update403_gp_level_table384_2401_0567_gp_level_table384_2400__m_1987_pack);

	  hw_uint<32 > res_update403_gp_level_table384_2401_1569_gp_level_table384_2400__m_1985_pack;
  set_at<0, 32, 32>(res_update403_gp_level_table384_2401_1569_gp_level_table384_2400__m_1985_pack, res_update403_gp_level_table384_2401_1569_gp_level_table384_2400__m_1985);
auto res_avg404 = avg_9_float(res_update403_gp_level_table384_2401_1569_gp_level_table384_2400__m_1985_pack);
  hw_uint<32 > return_value1232;
  set_at<0, 32, 32>(return_value1232, res_avg404);
  return return_value1232;

}

hw_uint<32> gp_level_table384_3407_cu1234(hw_uint<32*9>& gp_level_table384_2_buf397) {
  hw_uint<32> gp_level_table384_2_buf397_lane_0 = gp_level_table384_2_buf397.extract<0, 31>();
  hw_uint<32> gp_level_table384_2_buf397_lane_1 = gp_level_table384_2_buf397.extract<32, 63>();
  hw_uint<32> gp_level_table384_2_buf397_lane_2 = gp_level_table384_2_buf397.extract<64, 95>();
  hw_uint<32> gp_level_table384_2_buf397_lane_3 = gp_level_table384_2_buf397.extract<96, 127>();
  hw_uint<32> gp_level_table384_2_buf397_lane_4 = gp_level_table384_2_buf397.extract<128, 159>();
  hw_uint<32> gp_level_table384_2_buf397_lane_5 = gp_level_table384_2_buf397.extract<160, 191>();
  hw_uint<32> gp_level_table384_2_buf397_lane_6 = gp_level_table384_2_buf397.extract<192, 223>();
  hw_uint<32> gp_level_table384_2_buf397_lane_7 = gp_level_table384_2_buf397.extract<224, 255>();
  hw_uint<32> gp_level_table384_2_buf397_lane_8 = gp_level_table384_2_buf397.extract<256, 287>();

	
auto res_init410 = llf_set_zero_float_32();

	  hw_uint<32 > gp_level_table384_2_buf397_lane_0_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_0_pack, gp_level_table384_2_buf397_lane_0);
  hw_uint<32 > res_init410_pack;
  set_at<0, 32, 32>(res_init410_pack, res_init410);
auto res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_11037 = llf_add_float_32(gp_level_table384_2_buf397_lane_0_pack, res_init410_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_1_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_1_pack, gp_level_table384_2_buf397_lane_1);
  hw_uint<32 > res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_11037_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_11037_pack, res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_11037);
auto res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_11035 = llf_add_float_32(gp_level_table384_2_buf397_lane_1_pack, res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_11037_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_2_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_2_pack, gp_level_table384_2_buf397_lane_2);
  hw_uint<32 > res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_11035_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_11035_pack, res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_11035);
auto res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_11033 = llf_add_float_32(gp_level_table384_2_buf397_lane_2_pack, res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_11035_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_3_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_3_pack, gp_level_table384_2_buf397_lane_3);
  hw_uint<32 > res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_11033_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_11033_pack, res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_11033);
auto res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_01031 = llf_add_float_32(gp_level_table384_2_buf397_lane_3_pack, res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_11033_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_4_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_4_pack, gp_level_table384_2_buf397_lane_4);
  hw_uint<32 > res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_01031_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_01031_pack, res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_01031);
auto res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_01029 = llf_add_float_32(gp_level_table384_2_buf397_lane_4_pack, res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408_01031_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_5_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_5_pack, gp_level_table384_2_buf397_lane_5);
  hw_uint<32 > res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_01029_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_01029_pack, res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_01029);
auto res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_01027 = llf_add_float_32(gp_level_table384_2_buf397_lane_5_pack, res_update411_gp_level_table384_3409_0555_gp_level_table384_3408_01029_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_6_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_6_pack, gp_level_table384_2_buf397_lane_6);
  hw_uint<32 > res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_01027_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_01027_pack, res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_01027);
auto res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408__m_11025 = llf_add_float_32(gp_level_table384_2_buf397_lane_6_pack, res_update411_gp_level_table384_3409_1557_gp_level_table384_3408_01027_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_7_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_7_pack, gp_level_table384_2_buf397_lane_7);
  hw_uint<32 > res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408__m_11025_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408__m_11025_pack, res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408__m_11025);
auto res_update411_gp_level_table384_3409_0555_gp_level_table384_3408__m_11023 = llf_add_float_32(gp_level_table384_2_buf397_lane_7_pack, res_update411_gp_level_table384_3409__m_1553_gp_level_table384_3408__m_11025_pack);

	  hw_uint<32 > gp_level_table384_2_buf397_lane_8_pack;
  set_at<0, 32, 32>(gp_level_table384_2_buf397_lane_8_pack, gp_level_table384_2_buf397_lane_8);
  hw_uint<32 > res_update411_gp_level_table384_3409_0555_gp_level_table384_3408__m_11023_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409_0555_gp_level_table384_3408__m_11023_pack, res_update411_gp_level_table384_3409_0555_gp_level_table384_3408__m_11023);
auto res_update411_gp_level_table384_3409_1557_gp_level_table384_3408__m_11021 = llf_add_float_32(gp_level_table384_2_buf397_lane_8_pack, res_update411_gp_level_table384_3409_0555_gp_level_table384_3408__m_11023_pack);

	  hw_uint<32 > res_update411_gp_level_table384_3409_1557_gp_level_table384_3408__m_11021_pack;
  set_at<0, 32, 32>(res_update411_gp_level_table384_3409_1557_gp_level_table384_3408__m_11021_pack, res_update411_gp_level_table384_3409_1557_gp_level_table384_3408__m_11021);
auto res_avg412 = avg_9_float(res_update411_gp_level_table384_3409_1557_gp_level_table384_3408__m_11021_pack);
  hw_uint<32 > return_value1235;
  set_at<0, 32, 32>(return_value1235, res_avg412);
  return return_value1235;

}

hw_uint<32> gp_gray_1439_cu1237(hw_uint<32*9>& gray) {
  hw_uint<32> gray_lane_0 = gray.extract<0, 31>();
  hw_uint<32> gray_lane_1 = gray.extract<32, 63>();
  hw_uint<32> gray_lane_2 = gray.extract<64, 95>();
  hw_uint<32> gray_lane_3 = gray.extract<96, 127>();
  hw_uint<32> gray_lane_4 = gray.extract<128, 159>();
  hw_uint<32> gray_lane_5 = gray.extract<160, 191>();
  hw_uint<32> gray_lane_6 = gray.extract<192, 223>();
  hw_uint<32> gray_lane_7 = gray.extract<224, 255>();
  hw_uint<32> gray_lane_8 = gray.extract<256, 287>();

	
auto res_init442 = llf_set_zero_float_32();

	  hw_uint<32 > res_init442_pack;
  set_at<0, 32, 32>(res_init442_pack, res_init442);
  hw_uint<32 > gray_lane_0_pack;
  set_at<0, 32, 32>(gray_lane_0_pack, gray_lane_0);
auto res_update443_gp_gray_1441__m_1523_gp_gray_1440_11163 = llf_add_float_32(res_init442_pack, gray_lane_0_pack);

	  hw_uint<32 > res_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_pack, res_update443_gp_gray_1441__m_1523_gp_gray_1440_11163);
  hw_uint<32 > gray_lane_1_pack;
  set_at<0, 32, 32>(gray_lane_1_pack, gray_lane_1);
auto res_update443_gp_gray_1441_0525_gp_gray_1440_11161 = llf_add_float_32(res_update443_gp_gray_1441__m_1523_gp_gray_1440_11163_pack, gray_lane_1_pack);

	  hw_uint<32 > res_update443_gp_gray_1441_0525_gp_gray_1440_11161_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441_0525_gp_gray_1440_11161_pack, res_update443_gp_gray_1441_0525_gp_gray_1440_11161);
  hw_uint<32 > gray_lane_2_pack;
  set_at<0, 32, 32>(gray_lane_2_pack, gray_lane_2);
auto res_update443_gp_gray_1441_1527_gp_gray_1440_11159 = llf_add_float_32(res_update443_gp_gray_1441_0525_gp_gray_1440_11161_pack, gray_lane_2_pack);

	  hw_uint<32 > res_update443_gp_gray_1441_1527_gp_gray_1440_11159_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441_1527_gp_gray_1440_11159_pack, res_update443_gp_gray_1441_1527_gp_gray_1440_11159);
  hw_uint<32 > gray_lane_3_pack;
  set_at<0, 32, 32>(gray_lane_3_pack, gray_lane_3);
auto res_update443_gp_gray_1441__m_1523_gp_gray_1440_01157 = llf_add_float_32(res_update443_gp_gray_1441_1527_gp_gray_1440_11159_pack, gray_lane_3_pack);

	  hw_uint<32 > res_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_pack, res_update443_gp_gray_1441__m_1523_gp_gray_1440_01157);
  hw_uint<32 > gray_lane_4_pack;
  set_at<0, 32, 32>(gray_lane_4_pack, gray_lane_4);
auto res_update443_gp_gray_1441_0525_gp_gray_1440_01155 = llf_add_float_32(res_update443_gp_gray_1441__m_1523_gp_gray_1440_01157_pack, gray_lane_4_pack);

	  hw_uint<32 > res_update443_gp_gray_1441_0525_gp_gray_1440_01155_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441_0525_gp_gray_1440_01155_pack, res_update443_gp_gray_1441_0525_gp_gray_1440_01155);
  hw_uint<32 > gray_lane_5_pack;
  set_at<0, 32, 32>(gray_lane_5_pack, gray_lane_5);
auto res_update443_gp_gray_1441_1527_gp_gray_1440_01153 = llf_add_float_32(res_update443_gp_gray_1441_0525_gp_gray_1440_01155_pack, gray_lane_5_pack);

	  hw_uint<32 > res_update443_gp_gray_1441_1527_gp_gray_1440_01153_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441_1527_gp_gray_1440_01153_pack, res_update443_gp_gray_1441_1527_gp_gray_1440_01153);
  hw_uint<32 > gray_lane_6_pack;
  set_at<0, 32, 32>(gray_lane_6_pack, gray_lane_6);
auto res_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151 = llf_add_float_32(res_update443_gp_gray_1441_1527_gp_gray_1440_01153_pack, gray_lane_6_pack);

	  hw_uint<32 > res_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_pack, res_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151);
  hw_uint<32 > gray_lane_7_pack;
  set_at<0, 32, 32>(gray_lane_7_pack, gray_lane_7);
auto res_update443_gp_gray_1441_0525_gp_gray_1440__m_11149 = llf_add_float_32(res_update443_gp_gray_1441__m_1523_gp_gray_1440__m_11151_pack, gray_lane_7_pack);

	  hw_uint<32 > res_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_pack, res_update443_gp_gray_1441_0525_gp_gray_1440__m_11149);
  hw_uint<32 > gray_lane_8_pack;
  set_at<0, 32, 32>(gray_lane_8_pack, gray_lane_8);
auto res_update443_gp_gray_1441_1527_gp_gray_1440__m_11147 = llf_add_float_32(res_update443_gp_gray_1441_0525_gp_gray_1440__m_11149_pack, gray_lane_8_pack);

	  hw_uint<32 > res_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_pack;
  set_at<0, 32, 32>(res_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_pack, res_update443_gp_gray_1441_1527_gp_gray_1440__m_11147);
auto res_avg444 = avg_9_float(res_update443_gp_gray_1441_1527_gp_gray_1440__m_11147_pack);
  hw_uint<32 > return_value1238;
  set_at<0, 32, 32>(return_value1238, res_avg444);
  return return_value1238;

}

hw_uint<32> gp_gray_2447_cu1240(hw_uint<32*9>& gp_gray_1_buf437) {
  hw_uint<32> gp_gray_1_buf437_lane_0 = gp_gray_1_buf437.extract<0, 31>();
  hw_uint<32> gp_gray_1_buf437_lane_1 = gp_gray_1_buf437.extract<32, 63>();
  hw_uint<32> gp_gray_1_buf437_lane_2 = gp_gray_1_buf437.extract<64, 95>();
  hw_uint<32> gp_gray_1_buf437_lane_3 = gp_gray_1_buf437.extract<96, 127>();
  hw_uint<32> gp_gray_1_buf437_lane_4 = gp_gray_1_buf437.extract<128, 159>();
  hw_uint<32> gp_gray_1_buf437_lane_5 = gp_gray_1_buf437.extract<160, 191>();
  hw_uint<32> gp_gray_1_buf437_lane_6 = gp_gray_1_buf437.extract<192, 223>();
  hw_uint<32> gp_gray_1_buf437_lane_7 = gp_gray_1_buf437.extract<224, 255>();
  hw_uint<32> gp_gray_1_buf437_lane_8 = gp_gray_1_buf437.extract<256, 287>();

	
auto res_init450 = llf_set_zero_float_32();

	  hw_uint<32 > gp_gray_1_buf437_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_0_pack, gp_gray_1_buf437_lane_0);
  hw_uint<32 > res_init450_pack;
  set_at<0, 32, 32>(res_init450_pack, res_init450);
auto res_update451_gp_gray_2449__m_1535_gp_gray_2448_11127 = llf_add_float_32(gp_gray_1_buf437_lane_0_pack, res_init450_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_1_pack, gp_gray_1_buf437_lane_1);
  hw_uint<32 > res_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_pack, res_update451_gp_gray_2449__m_1535_gp_gray_2448_11127);
auto res_update451_gp_gray_2449_0537_gp_gray_2448_11125 = llf_add_float_32(gp_gray_1_buf437_lane_1_pack, res_update451_gp_gray_2449__m_1535_gp_gray_2448_11127_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_2_pack, gp_gray_1_buf437_lane_2);
  hw_uint<32 > res_update451_gp_gray_2449_0537_gp_gray_2448_11125_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449_0537_gp_gray_2448_11125_pack, res_update451_gp_gray_2449_0537_gp_gray_2448_11125);
auto res_update451_gp_gray_2449_1539_gp_gray_2448_11123 = llf_add_float_32(gp_gray_1_buf437_lane_2_pack, res_update451_gp_gray_2449_0537_gp_gray_2448_11125_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_3_pack, gp_gray_1_buf437_lane_3);
  hw_uint<32 > res_update451_gp_gray_2449_1539_gp_gray_2448_11123_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449_1539_gp_gray_2448_11123_pack, res_update451_gp_gray_2449_1539_gp_gray_2448_11123);
auto res_update451_gp_gray_2449__m_1535_gp_gray_2448_01121 = llf_add_float_32(gp_gray_1_buf437_lane_3_pack, res_update451_gp_gray_2449_1539_gp_gray_2448_11123_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_4_pack, gp_gray_1_buf437_lane_4);
  hw_uint<32 > res_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_pack, res_update451_gp_gray_2449__m_1535_gp_gray_2448_01121);
auto res_update451_gp_gray_2449_0537_gp_gray_2448_01119 = llf_add_float_32(gp_gray_1_buf437_lane_4_pack, res_update451_gp_gray_2449__m_1535_gp_gray_2448_01121_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_5_pack, gp_gray_1_buf437_lane_5);
  hw_uint<32 > res_update451_gp_gray_2449_0537_gp_gray_2448_01119_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449_0537_gp_gray_2448_01119_pack, res_update451_gp_gray_2449_0537_gp_gray_2448_01119);
auto res_update451_gp_gray_2449_1539_gp_gray_2448_01117 = llf_add_float_32(gp_gray_1_buf437_lane_5_pack, res_update451_gp_gray_2449_0537_gp_gray_2448_01119_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_6_pack, gp_gray_1_buf437_lane_6);
  hw_uint<32 > res_update451_gp_gray_2449_1539_gp_gray_2448_01117_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449_1539_gp_gray_2448_01117_pack, res_update451_gp_gray_2449_1539_gp_gray_2448_01117);
auto res_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115 = llf_add_float_32(gp_gray_1_buf437_lane_6_pack, res_update451_gp_gray_2449_1539_gp_gray_2448_01117_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_7_pack, gp_gray_1_buf437_lane_7);
  hw_uint<32 > res_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_pack, res_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115);
auto res_update451_gp_gray_2449_0537_gp_gray_2448__m_11113 = llf_add_float_32(gp_gray_1_buf437_lane_7_pack, res_update451_gp_gray_2449__m_1535_gp_gray_2448__m_11115_pack);

	  hw_uint<32 > gp_gray_1_buf437_lane_8_pack;
  set_at<0, 32, 32>(gp_gray_1_buf437_lane_8_pack, gp_gray_1_buf437_lane_8);
  hw_uint<32 > res_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_pack, res_update451_gp_gray_2449_0537_gp_gray_2448__m_11113);
auto res_update451_gp_gray_2449_1539_gp_gray_2448__m_11111 = llf_add_float_32(gp_gray_1_buf437_lane_8_pack, res_update451_gp_gray_2449_0537_gp_gray_2448__m_11113_pack);

	  hw_uint<32 > res_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_pack;
  set_at<0, 32, 32>(res_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_pack, res_update451_gp_gray_2449_1539_gp_gray_2448__m_11111);
auto res_avg452 = avg_9_float(res_update451_gp_gray_2449_1539_gp_gray_2448__m_11111_pack);
  hw_uint<32 > return_value1241;
  set_at<0, 32, 32>(return_value1241, res_avg452);
  return return_value1241;

}

hw_uint<32> gp_gray_3455_cu1243(hw_uint<32*9>& gp_gray_2_buf445) {
  hw_uint<32> gp_gray_2_buf445_lane_0 = gp_gray_2_buf445.extract<0, 31>();
  hw_uint<32> gp_gray_2_buf445_lane_1 = gp_gray_2_buf445.extract<32, 63>();
  hw_uint<32> gp_gray_2_buf445_lane_2 = gp_gray_2_buf445.extract<64, 95>();
  hw_uint<32> gp_gray_2_buf445_lane_3 = gp_gray_2_buf445.extract<96, 127>();
  hw_uint<32> gp_gray_2_buf445_lane_4 = gp_gray_2_buf445.extract<128, 159>();
  hw_uint<32> gp_gray_2_buf445_lane_5 = gp_gray_2_buf445.extract<160, 191>();
  hw_uint<32> gp_gray_2_buf445_lane_6 = gp_gray_2_buf445.extract<192, 223>();
  hw_uint<32> gp_gray_2_buf445_lane_7 = gp_gray_2_buf445.extract<224, 255>();
  hw_uint<32> gp_gray_2_buf445_lane_8 = gp_gray_2_buf445.extract<256, 287>();

	
auto res_init458 = llf_set_zero_float_32();

	  hw_uint<32 > gp_gray_2_buf445_lane_0_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_0_pack, gp_gray_2_buf445_lane_0);
  hw_uint<32 > res_init458_pack;
  set_at<0, 32, 32>(res_init458_pack, res_init458);
auto res_update459_gp_gray_3457__m_1547_gp_gray_3456_11091 = llf_add_float_32(gp_gray_2_buf445_lane_0_pack, res_init458_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_1_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_1_pack, gp_gray_2_buf445_lane_1);
  hw_uint<32 > res_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_pack, res_update459_gp_gray_3457__m_1547_gp_gray_3456_11091);
auto res_update459_gp_gray_3457_0549_gp_gray_3456_11089 = llf_add_float_32(gp_gray_2_buf445_lane_1_pack, res_update459_gp_gray_3457__m_1547_gp_gray_3456_11091_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_2_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_2_pack, gp_gray_2_buf445_lane_2);
  hw_uint<32 > res_update459_gp_gray_3457_0549_gp_gray_3456_11089_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457_0549_gp_gray_3456_11089_pack, res_update459_gp_gray_3457_0549_gp_gray_3456_11089);
auto res_update459_gp_gray_3457_1551_gp_gray_3456_11087 = llf_add_float_32(gp_gray_2_buf445_lane_2_pack, res_update459_gp_gray_3457_0549_gp_gray_3456_11089_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_3_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_3_pack, gp_gray_2_buf445_lane_3);
  hw_uint<32 > res_update459_gp_gray_3457_1551_gp_gray_3456_11087_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457_1551_gp_gray_3456_11087_pack, res_update459_gp_gray_3457_1551_gp_gray_3456_11087);
auto res_update459_gp_gray_3457__m_1547_gp_gray_3456_01085 = llf_add_float_32(gp_gray_2_buf445_lane_3_pack, res_update459_gp_gray_3457_1551_gp_gray_3456_11087_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_4_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_4_pack, gp_gray_2_buf445_lane_4);
  hw_uint<32 > res_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_pack, res_update459_gp_gray_3457__m_1547_gp_gray_3456_01085);
auto res_update459_gp_gray_3457_0549_gp_gray_3456_01083 = llf_add_float_32(gp_gray_2_buf445_lane_4_pack, res_update459_gp_gray_3457__m_1547_gp_gray_3456_01085_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_5_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_5_pack, gp_gray_2_buf445_lane_5);
  hw_uint<32 > res_update459_gp_gray_3457_0549_gp_gray_3456_01083_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457_0549_gp_gray_3456_01083_pack, res_update459_gp_gray_3457_0549_gp_gray_3456_01083);
auto res_update459_gp_gray_3457_1551_gp_gray_3456_01081 = llf_add_float_32(gp_gray_2_buf445_lane_5_pack, res_update459_gp_gray_3457_0549_gp_gray_3456_01083_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_6_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_6_pack, gp_gray_2_buf445_lane_6);
  hw_uint<32 > res_update459_gp_gray_3457_1551_gp_gray_3456_01081_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457_1551_gp_gray_3456_01081_pack, res_update459_gp_gray_3457_1551_gp_gray_3456_01081);
auto res_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079 = llf_add_float_32(gp_gray_2_buf445_lane_6_pack, res_update459_gp_gray_3457_1551_gp_gray_3456_01081_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_7_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_7_pack, gp_gray_2_buf445_lane_7);
  hw_uint<32 > res_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_pack, res_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079);
auto res_update459_gp_gray_3457_0549_gp_gray_3456__m_11077 = llf_add_float_32(gp_gray_2_buf445_lane_7_pack, res_update459_gp_gray_3457__m_1547_gp_gray_3456__m_11079_pack);

	  hw_uint<32 > gp_gray_2_buf445_lane_8_pack;
  set_at<0, 32, 32>(gp_gray_2_buf445_lane_8_pack, gp_gray_2_buf445_lane_8);
  hw_uint<32 > res_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_pack, res_update459_gp_gray_3457_0549_gp_gray_3456__m_11077);
auto res_update459_gp_gray_3457_1551_gp_gray_3456__m_11075 = llf_add_float_32(gp_gray_2_buf445_lane_8_pack, res_update459_gp_gray_3457_0549_gp_gray_3456__m_11077_pack);

	  hw_uint<32 > res_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_pack;
  set_at<0, 32, 32>(res_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_pack, res_update459_gp_gray_3457_1551_gp_gray_3456__m_11075);
auto res_avg460 = avg_9_float(res_update459_gp_gray_3457_1551_gp_gray_3456__m_11075_pack);
  hw_uint<32 > return_value1244;
  set_at<0, 32, 32>(return_value1244, res_avg460);
  return return_value1244;

}

